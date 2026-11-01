// Small bridge between the browser and Lean. It decides nothing about safety: it runs the Lean
// planner, runs Lean's kernel on the generated proof, and reports exactly what the kernel said.
import http from 'node:http'
import fs from 'node:fs'
import path from 'node:path'
import crypto from 'node:crypto'
import { spawn, execFileSync } from 'node:child_process'
import { fileURLToPath } from 'node:url'

const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..')
const leanDir = path.join(root, 'lean')
const dist = path.join(root, 'app', 'dist')
const cache = path.join(root, '.cache', 'proofs')
fs.mkdirSync(cache, { recursive: true })
const PORT = Number(process.env.PORT || 4173)
const exe = path.join(leanDir, '.lake', 'build', 'bin', 'choreo')
const leanEnv = (() => {
  const out = execFileSync('lake', ['env', 'printenv', 'LEAN_PATH'], { cwd: leanDir, encoding: 'utf8' }).trim()
  return { ...process.env, LEAN_PATH: out }
})()
const ALLOWED = new Set(['propext', 'Classical.choice', 'Quot.sound'])
const MIME = { '.html': 'text/html', '.js': 'text/javascript', '.css': 'text/css', '.svg': 'image/svg+xml', '.woff2': 'font/woff2', '.woff': 'font/woff', '.png': 'image/png', '.json': 'application/json' }

function compose(req, send, onEnd, onChild) {
  const id = crypto.createHash('sha1').update(JSON.stringify(req)).digest('hex').slice(0, 12)
  const reqPath = path.join(cache, `R${id}.json`)
  const proofPath = path.join(cache, `R${id}.lean`)
  fs.writeFileSync(reqPath, JSON.stringify(req))
  let out = ''
  const started = Date.now()
  const planner = spawn(exe, ['compose', reqPath, proofPath], { cwd: leanDir, env: leanEnv })
  planner.stdout.on('data', d => { out += d })
  let plannerErr = ''
  planner.stderr.on('data', d => { plannerErr += d })
  planner.on('close', code => {
    if (code !== 0) { send({ type: 'done', status: 'error', errors: [plannerErr || 'The planner failed.'] }); return onEnd() }
    const report = JSON.parse(out)
    report.proofId = `R${id}`
    send({ type: 'report', report, plannerMs: Date.now() - started })
    if (req.planOnly) { send({ type: 'done', status: 'not_checked', ms: 0 }); return onEnd() }
    if (report.error) { send({ type: 'done', status: 'not_proved', errors: [report.error], ms: 0 }); return onEnd() }
    send({ type: 'stage', stage: 'running' })
    runKernel(report, proofPath, send, onEnd, onChild)
  })
}

function runKernel(report, proofPath, send, onEnd, onChild) {
  const started = Date.now()
  const lean = spawn('lean', ['--json', proofPath], { cwd: leanDir, env: leanEnv })
  onChild(lean)
  let buf = ''
  const st = { errors: [], axioms: null, fingerprint: null, verified: false, refuted: false, notProved: false, phases: 0, parts: { movement: false, forgiving: false }, contract: { steps: [], links: [], broken: [], composed: false, sameRoutine: false, algebra: [], library: false, structural: false, witnesses: [], disproved: null }, transitions: [], timedOut: false }
  // a check that never finishes is a technical failure, and says nothing about the routine
  const timer = setTimeout(() => { st.timedOut = true; lean.kill('SIGTERM') }, Number(process.env.LEAN_TIMEOUT_MS || 180000))
  const line = l => {
    if (!l.trim()) return
    let m
    try { m = JSON.parse(l) } catch { return }
    const text = String(m.data || '').trim()
    if (m.severity === 'error') { st.errors.push(text.slice(0, 500)); return }
    if (text.startsWith('PHASE ')) { st.phases++; send({ type: 'kernel', event: 'phase', k: Number(text.slice(6)), ms: Date.now() - started }) }
    else if (text.startsWith('REJECTED ')) send({ type: 'kernel', event: 'rejected', k: Number(text.slice(9)), ms: Date.now() - started })
    else if (text.startsWith('FINGERPRINT ')) st.fingerprint = text.slice(12)
    else if (text.includes('depends on axioms') || text.includes('does not depend on any axioms')) {
      const a = text.match(/\[(.*)\]/s)
      st.axioms = a ? a[1].split(',').map(s => s.trim()).filter(Boolean) : []
    }
    else if (text.startsWith('PART ')) { st.parts[text.slice(5)] = true; send({ type: 'kernel', event: 'part', part: text.slice(5), ms: Date.now() - started }) }
    else if (text.startsWith('TRANSITION ')) { st.transitions.push(Number(text.slice(11))); send({ type: 'kernel', event: 'transition', k: Number(text.slice(11)), ms: Date.now() - started }) }
    else if (text.startsWith('ALGEBRA ')) st.contract.algebra.push(Number(text.slice(8)))
    else if (text.startsWith('STEP ')) { st.contract.steps.push(Number(text.slice(5))); send({ type: 'kernel', event: 'step', k: Number(text.slice(5)) }) }
    else if (text.startsWith('LINKBROKEN ')) { st.contract.broken.push(Number(text.slice(11))); send({ type: 'kernel', event: 'broken', k: Number(text.slice(11)) }) }
    else if (text.startsWith('LINK ')) st.contract.links.push(Number(text.slice(5)))
    else if (text.startsWith('DISPROVED ')) { const [kind, phase] = text.slice(10).split(' '); st.contract.disproved = { kind, phase: Number(phase) } }
    else if (text.startsWith('WITNESS ')) st.contract.witnesses.push(Number(text.slice(8)))
    else if (text === 'STRUCTURAL') st.contract.structural = true
    else if (text === 'LIBRARY') st.contract.library = true
    else if (text === 'COMPOSED') st.contract.composed = true
    else if (text === 'SAMEROUTINE') st.contract.sameRoutine = true
    else if (text === 'NOT_PROVED') st.notProved = true
    else if (text === 'VERIFIED') st.verified = true
    else if (text === 'REFUTED') st.refuted = true
  }
  lean.stdout.on('data', d => {
    buf += d
    const parts = buf.split('\n'); buf = parts.pop()
    parts.forEach(line)
  })
  lean.stderr.on('data', d => st.errors.push(String(d).slice(0, 300)))
  lean.on('close', (code, signal) => {
    line(buf)
    clearTimeout(timer)
    if (signal && !st.timedOut) { onEnd(); return }
    const axiomsOk = st.axioms !== null && st.axioms.every(a => ALLOWED.has(a))
    const fpOk = st.fingerprint === report.fingerprint
    // only three outcomes are verdicts about the routine; anything else is a problem with the check itself
    let status = 'error'
    if (st.timedOut) status = 'timeout'
    else if (st.errors.length === 0 && fpOk) {
      if (st.verified && axiomsOk) status = 'verified'
      else if (st.refuted && axiomsOk) status = 'refuted'
      else if (st.notProved) status = 'not_proved'
    }
    send({ type: 'stage', stage: 'fingerprint' })
    const clean = st.errors.length === 0 && !st.timedOut && fpOk
    send({ type: 'done', status, ms: Date.now() - started, axioms: st.axioms, fingerprint: st.fingerprint, fingerprintMatch: fpOk, errors: st.errors, phases: st.phases,
      parts: clean ? st.parts : { movement: false, forgiving: false }, contract: clean ? st.contract : { steps: [], links: [], broken: [], composed: false, sameRoutine: false }, transitions: clean ? st.transitions : [] })
    onEnd()
  })
}

// Stress test: every mutation is judged by the kernel, in order, and a missing or failed verdict is reported as such
function stress(req, send, onEnd, onChild) {
  const id = crypto.createHash('sha1').update('stress' + JSON.stringify(req)).digest('hex').slice(0, 12)
  const reqPath = path.join(cache, `S${id}.json`), prefix = path.join(cache, `S${id}`)
  fs.writeFileSync(reqPath, JSON.stringify(req))
  const started = Date.now()
  let out = ''
  const planner = spawn(exe, ['stress', reqPath, prefix], { cwd: leanDir, env: leanEnv })
  planner.stdout.on('data', d => { out += d })
  planner.on('close', code => {
    if (code !== 0) { send({ type: 'done', status: 'error' }); return onEnd() }
    const list = JSON.parse(out)
    send({ type: 'mutations', list, proofId: `S${id}` })
    // each sabotage is its own Lean process, so verdicts arrive as they are reached
    const children = new Set(); let next = 0, finished = 0, seen = 0
    onChild({ kill: sig => children.forEach(c => c.kill(sig)) })
    const startOne = () => {
      if (next >= list.length) return
      const k = next++
      const lean = spawn('lean', ['--json', `${prefix}_${k}.lean`], { cwd: leanDir, env: leanEnv })
      children.add(lean)
      let buf = '', error = null, marked = false
      const timer = setTimeout(() => lean.kill('SIGTERM'), Number(process.env.LEAN_TIMEOUT_MS || 180000))
      const line = l => { if (!l.trim()) return; let m; try { m = JSON.parse(l) } catch { return }; const t = String(m.data || '').trim(); if (m.severity === 'error') error = t.slice(0, 300); else if (t.startsWith('MUTATION ')) marked = true }
      lean.stdout.on('data', d => { buf += d; const p = buf.split('\n'); buf = p.pop(); p.forEach(line) })
      lean.on('close', (c, signal) => {
        line(buf); clearTimeout(timer); children.delete(lean)
        if (signal === 'SIGKILL') return
        if (marked) { seen++; send({ type: 'verdict', index: k, accepted: error === null, error, ms: Date.now() - started }) }
        finished++
        if (finished === list.length) { send({ type: 'done', status: seen === list.length ? 'finished' : 'incomplete', seen, total: list.length, ms: Date.now() - started }); onEnd() } else startOne()
      })
    }
    for (let w = 0; w < Math.min(6, list.length); w++) startOne()
  })
}


// A real declaration, read from the Lean files or the proof file that was checked. Nothing here is written by hand.
function findTheorem(name, proofId) {
  const short = name.split('.').pop()
  const pattern = new RegExp(`^(?:private )?(?:theorem|structure|def) (?:[\\w.]*\\.)?${short.replace(/[^\w]/g, '')}\\b`, 'm')
  const dirs = []
  if (proofId && /^[\w-]+$/.test(proofId)) { const p = path.join(root, '.cache/proofs', `${proofId}.lean`); if (fs.existsSync(p)) dirs.push([p, 'This routine\'s proof file']) }
  const lib = path.join(root, 'lean/Choreo')
  for (const f of fs.readdirSync(lib)) if (f.endsWith('.lean')) dirs.push([path.join(lib, f), `lean/Choreo/${f}`])
  for (const [file, label] of dirs) {
    const t = fs.readFileSync(file, 'utf8'), m = pattern.exec(t)
    if (!m) continue
    const rest = t.slice(m.index), end = rest.search(/:=|\bwhere\b/)
    return { file: label, line: t.slice(0, m.index).split('\n').length, text: rest.slice(0, end < 0 ? 400 : end).trim().slice(0, 900) }
  }
  return null
}

const server = http.createServer((req, res) => {
  const url = new URL(req.url, 'http://x')
  if (req.method === 'POST' && url.pathname === '/api/stress') {
    let body = ''
    req.on('data', d => { body += d; if (body.length > 1e6) req.destroy() })
    req.on('end', () => {
      let parsed; try { parsed = JSON.parse(body) } catch { res.writeHead(400); return res.end('bad json') }
      res.writeHead(200, { 'Content-Type': 'application/x-ndjson', 'Cache-Control': 'no-cache' })
      let child = null
      res.on('close', () => { if (child && !res.writableEnded) child.kill('SIGKILL') })
      stress(parsed, o => res.write(JSON.stringify(o) + '\n'), () => res.end(), c => { child = c })
    })
    return
  }
  if (req.method === 'POST' && url.pathname === '/api/compose') {
    let body = ''
    req.on('data', d => { body += d; if (body.length > 1e6) req.destroy() })
    req.on('end', () => {
      let parsed
      try { parsed = JSON.parse(body) } catch { res.writeHead(400); return res.end('bad json') }
      res.writeHead(200, { 'Content-Type': 'application/x-ndjson', 'Cache-Control': 'no-cache' })
      let child = null
      res.on('close', () => { if (child && !res.writableEnded) child.kill('SIGKILL') })
      const song = Number.isInteger(parsed.bpm) && Number.isInteger(parsed.seconds) ? { bpm: parsed.bpm, seconds: parsed.seconds } : {}
      compose({ prompt: String(parsed.prompt || ''), overrides: parsed.overrides || [], ...(parsed.program ? { program: parsed.program, transform: parsed.transform || '' } : {}), ...(parsed.drift ? { drift: parsed.drift } : {}), ...song, ...(parsed.scene ? { scene: parsed.scene } : {}), ...(Array.isArray(parsed.names) ? { names: parsed.names.map(n => String(n).slice(0, 24)) } : {}), ...(Number.isInteger(parsed.gap) ? { gap: parsed.gap } : {}), ...(parsed.planOnly ? { planOnly: true } : {}) },
        o => res.write(JSON.stringify(o) + '\n'), () => res.end(), c => { child = c })
    })
    return
  }
  if (url.pathname.startsWith('/api/theorem/')) {
    const found = findTheorem(decodeURIComponent(url.pathname.slice(13)), url.searchParams.get('proof'))
    res.writeHead(200, { 'Content-Type': 'application/json' })
    return res.end(JSON.stringify(found))
  }
  if (url.pathname.startsWith('/api/proof/')) {
    const id = url.pathname.slice(11)
    if (!/^[RS][0-9a-f]{12}(_\d+)?$/.test(id)) { res.writeHead(400); return res.end() }
    const f = path.join(cache, `${id}.lean`)
    if (!fs.existsSync(f)) { res.writeHead(404); return res.end() }
    res.writeHead(200, { 'Content-Type': 'text/plain; charset=utf-8' })
    return fs.createReadStream(f).pipe(res)
  }
  let p = path.normalize(url.pathname).replace(/^(\.\.[/\\])+/, '')
  if (p === '/' ) p = '/index.html'
  let f = path.join(dist, p)
  if (!f.startsWith(dist) || !fs.existsSync(f) || fs.statSync(f).isDirectory()) f = path.join(dist, 'index.html')
  if (!fs.existsSync(f)) { res.writeHead(500); return res.end('Run `make install` first: the app has not been built.') }
  res.writeHead(200, { 'Content-Type': MIME[path.extname(f)] || 'application/octet-stream' })
  fs.createReadStream(f).pipe(res)
})
server.listen(PORT, () => console.log(`\n  Choreo is running: http://localhost:${PORT}\n`))
