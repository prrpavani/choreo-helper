#!/usr/bin/env node
// The project's whole check. It builds everything, rejects anything that would weaken a proof, audits the
// axioms, and runs every routine in the catalogue through Lean's kernel. Any failure stops it.
import { execFileSync, spawnSync } from 'node:child_process'
import fs from 'node:fs'
import os from 'node:os'
import path from 'node:path'
import { fileURLToPath } from 'node:url'

const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..')
const lean = path.join(root, 'lean')
const ok = m => console.log(`  ✓ ${m}`)
const fail = m => { console.error(`  ✕ ${m}`); process.exit(1) }
const allowed = new Set(['propext', 'Classical.choice', 'Quot.sound'])

console.log('Building')
const build = spawnSync('lake', ['build', 'Choreo', 'choreo', 'Solution'], { cwd: lean, encoding: 'utf8' })
if (build.status !== 0) fail(`lake build failed\n${build.stdout}${build.stderr}`)
if (/declaration uses 'sorry'/.test(build.stdout + build.stderr)) fail('a build warning reports sorry')
ok('Choreo, the app and the demo proofs build')

console.log('Looking for anything that would weaken a proof')
const files = [path.join(lean, 'Main.lean'), path.join(lean, 'Solution.lean'), ...fs.readdirSync(path.join(lean, 'Choreo')).map(f => path.join(lean, 'Choreo', f))]
for (const f of files) {
  const text = fs.readFileSync(f, 'utf8')
  for (const [pat, why] of [[/\bsorry\b/, 'sorry'], [/\badmit\b/, 'admit'], [/^\s*axiom\b/m, 'a new axiom'], [/native_decide/, 'native_decide'], [/skipKernelTC/, 'skipKernelTC'], [/maxHeartbeats\s+0/, 'maxHeartbeats 0'], [/implemented_by/, 'implemented_by']]) {
    if (pat.test(text)) fail(`${path.relative(root, f)} uses ${why}`)
  }
}
ok(`${files.length} files are clean`)

console.log('Testing the specification, and auditing axioms')
const ex = spawnSync('lake', ['env', 'lean', 'Choreo/Examples.lean'], { cwd: lean, encoding: 'utf8' })
if (ex.status !== 0) fail(`spec tests failed\n${ex.stdout}${ex.stderr}`)
const audited = [...ex.stdout.matchAll(/^(Choreo\.\S+): \[(.*)\]$/gm)]
if (audited.length < 4) fail('the axiom audit printed too few results')
for (const [, name, list] of audited) {
  const bad = list.split(',').map(s => s.trim()).filter(a => a && !allowed.has(a))
  if (bad.length) fail(`${name} depends on ${bad.join(', ')}`)
  ok(`${name}: standard axioms only`)
}

console.log('Proving every routine in the catalogue')
const exe = path.join(lean, '.lake/build/bin/choreo')
const tmp = fs.mkdtempSync(path.join(os.tmpdir(), 'choreo-verify-'))
const env = { ...process.env, LEAN_PATH: execFileSync('lake', ['env', 'printenv', 'LEAN_PATH'], { cwd: lean, encoding: 'utf8' }).trim() }
const check = (label, request, expect) => {
  const req = path.join(tmp, 'r.json'), proof = path.join(tmp, 'P.lean')
  fs.writeFileSync(req, JSON.stringify(request))
  const report = JSON.parse(execFileSync(exe, ['compose', req, proof], { cwd: lean, env, encoding: 'utf8', maxBuffer: 1 << 28 }))
  const started = Date.now()
  const run = spawnSync('lean', [proof], { cwd: lean, env, encoding: 'utf8' })
  const out = run.stdout + run.stderr
  if (/error:/.test(out)) fail(`${label}: Lean reported an error\n${out.slice(0, 1500)}`)
  // what the kernel reported for each part must match what the planner's check expected, part by part
  for (const part of ['movement']) {
    if (out.includes(`PART ${part}`) !== report.checked[part]) fail(`${label}: the ${part} part disagrees between the planner and the kernel`)
  }
  const proved = [...out.matchAll(/TRANSITION (\d+)/g)].map(m => Number(m[1]))
  for (const t of report.transitions) if (proved.includes(t.index) !== t.ok) fail(`${label}: transition ${t.index} disagrees between the planner and the kernel`)
  const marker = expect === 'proved' ? 'VERIFIED' : 'REFUTED'
  if (report.verdict !== expect || !out.includes(marker)) fail(`${label}: expected ${expect}, got ${report.verdict}\n${report.problems.map(p => p.text).slice(0, 4).join('\n')}\n${report.asks.filter(a => !a.ok).map(a => a.text).slice(0, 4).join('\n')}`)
  const fp = out.match(/FINGERPRINT (\S+)/)?.[1]
  if (fp !== report.fingerprint) fail(`${label}: the proof and the animation data differ`)
  const axioms = out.match(/depends on axioms: \[(.*)\]/)?.[1] ?? ''
  const bad = axioms.split(',').map(s => s.trim()).filter(a => a && !allowed.has(a))
  if (bad.length) fail(`${label}: depends on ${bad.join(', ')}`)
  ok(`${label}: ${expect} (${report.phases.length} phases, ${report.asks.length} requests, ${((Date.now() - started) / 1000).toFixed(1)} s)`)
  return report
}
const catalogue = JSON.parse(fs.readFileSync(path.join(root, 'app/src/data/routines.json'), 'utf8'))
for (const r of catalogue) check(r.title, { prompt: r.prompt, ...(r.scene ? { scene: r.scene, gap: r.gap } : {}) }, 'proved')

console.log('Prompts that ask for a lot, with dancers coming on and going off')
for (const t of ['A fancy raas routine for eight dancers, one minute', 'A very complicated bhangra routine, two minutes, four from stage left and four from stage right', 'Kuthu routine', 'A showstopper for twelve dancers, two minutes, bollywood fusion', 'A fancy sixteen dancer raas']) {
  const r = check(t, { prompt: t }, 'proved')
  if (!r.derived?.frames?.length) fail(`${t}: no formations to edit`)
}
const castPrompt = '90 seconds of bhangra. Four dancers from stage left and four from stage right form a grid of two by two, then exchange, then join, then leave. Four of them wait off stage.'
const cast = check('On-stage and off-stage dancers trade places', { prompt: castPrompt }, 'proved')
if (!cast.phases.some(p => p.kind === 'exchange')) fail('the cast change is missing')
const stayOff = cast.derived.frames[0].filter(p => Math.abs(p[0]) > 6000).length
if (stayOff !== 8) fail('everyone should start off stage')
if (cast.derived.frames[1].filter(p => Math.abs(p[0]) > 6000).length !== 4) fail('four should still be waiting after the entrance')
console.log('A faint idea, in every style')
for (const t of ['60 seconds of raas.', '60 seconds of bhangra.', '60 seconds of bollywood fusion.', '60 seconds of kuthu.', '60 seconds of south indian fusion.', '60 seconds of kathak.', '60 seconds of hip hop.', '60 seconds of kpop.', '60 seconds of afrobeat.', '60 seconds of latin.', '60 seconds of jazz.', '60 seconds of contemporary.', '60 seconds of ballet.', '60 seconds of cinematic.', '60 seconds of house.', 'something fun']) {
  const r = check(t, { prompt: t }, 'proved')
  if (new Set(r.phases.map(p => p.kind)).size < 4) fail(`${t}: too little happens`)
}
console.log('The forgiving theorem')
{ const req = path.join(tmp, 'r.json'), proof = path.join(tmp, 'F.lean'); fs.writeFileSync(req, JSON.stringify({ prompt: castPrompt, gap: 900, drift: 150 }))
  const rep = JSON.parse(execFileSync(exe, ['compose', req, proof], { cwd: lean, env, encoding: 'utf8', maxBuffer: 1 << 28 }))
  const out = spawnSync('lean', [proof], { cwd: lean, env, encoding: 'utf8' }).stdout
  if (!/PART forgiving/.test(out) || !/VERIFIED/.test(out) || /sorryAx/.test(out)) fail('the forgiving theorem was not proved')
  if (!fs.readFileSync(proof, 'utf8').includes('Routine.Forgiving K routine (600) (150)')) fail('it should say 60 cm with 15 cm of drift')
  ok(`Anyone 15 cm off, still 60 cm apart: proved (${rep.phases.length} phases)`) }
console.log('Editing a routine from a prompt keeps its transitions')
const fancy = check('A prompt routine, moved by hand', { prompt: castPrompt, scene: cast.derived }, 'proved')
if (!fancy.phases.some(p => p.kind !== 'hold')) fail('moves were lost')
console.log('A path shaped by hand')
const bentScene = { ...cast.derived, rules: undefined, bends: [[1, cast.derived.frames[0].findIndex((_, i) => cast.derived.frames[1][i][0] !== cast.derived.frames[2][i][0]), 0, 7000]] }
const bentRun = check('A curved path around the back of the stage is proved', { prompt: castPrompt, scene: bentScene }, 'proved')
if (JSON.stringify(bentRun.phases) === JSON.stringify(fancy.phases)) fail('the shaped path changed nothing')
console.log('The four showcase programs, and their contracts')
const programs = JSON.parse(fs.readFileSync(path.join(root, 'app/src/data/programs.json'), 'utf8'))
const runProgram = (label, prog, transform = '') => { const req = path.join(tmp, 'r.json'), proof = path.join(tmp, 'G.lean'); fs.writeFileSync(req, JSON.stringify({ program: prog, transform }))
  const rep = JSON.parse(execFileSync(exe, ['compose', req, proof], { cwd: lean, env, encoding: 'utf8', maxBuffer: 1 << 28 })); const out = spawnSync('lean', [proof], { cwd: lean, env, encoding: 'utf8' }).stdout
  if (/error|declaration uses 'sorry'|sorryAx/.test(out)) fail(`${label}: ${out.slice(0, 600)}`); return { rep, out } }
for (const p of programs) { const { out } = runProgram(p.title, p); if (!/COMPOSED/.test(out) || !/SAMEROUTINE/.test(out) || !/VERIFIED/.test(out)) fail(`${p.title} should compose and be safe`); if (!/STRUCTURAL/.test(out)) fail(`${p.title}: the routine should inherit its safety from its movements`); if (p.id === 'parallel-lines' && !/ALGEBRA 0/.test(out)) fail('the demo should inherit its safety from the algebra'); ok(`${p.title}: the composition holds, and it is the routine that plays`) }
for (const t of ['mirror', 'half', 'upstage', 'reverse']) { const { out } = runProgram(`Mirror Waltz ${t}`, programs.find(x => x.id === 'mirror-waltz'), t); if (!/VERIFIED/.test(out)) fail(`transform ${t} should stay safe`); ok(`Mirror Waltz, ${t}: safe`) }
{ const c = structuredClone(programs.find(x => x.id === 'crossing-currents')); c.sections[3].ops = [{ kind: 'move', shape: 'diamond', counts: 12, title: 'Move to Diamond' }]
  const { out } = runProgram('broken link', c); if (!/LINKBROKEN/.test(out) || /COMPOSED/.test(out)) fail('removing the lanes should break the link'); ok('Crossing Currents without its lanes: the contract is rejected') }
{ const f = structuredClone(programs.find(x => x.id === 'fracture-reunion')); f.sections[1].ops[0].line = 1500
  const { out } = runProgram('wrong line', f); if (!/LINKBROKEN/.test(out) || /COMPOSED/.test(out) || !/VERIFIED/.test(out)) fail('this should be safe, with a broken contract'); ok('Fracture with the line moved: safe, but the contract is rejected. Those are different failures') }
for (const k of [4, 6, 10, 12, 16]) { const { rep, out } = runProgram(`Parallel Lines, ${k} dancers`, { ...programs[0], n: k }); if (rep.config.n !== k || !/LIBRARY/.test(out)) fail('dancer count was not used'); ok(`Parallel Lines, ${k} dancers: ${/COMPOSED/.test(out) ? 'composes' : 'a contract fails, and Lean says which'}`) }
{ const x = structuredClone(programs[0]); x.sections[2].ops[0].shape = 'trade'; const { rep, out } = runProgram('trade places', x)
  const s = rep.program.steps.find(q => q.closest); if (!/WITNESS/.test(out) || !/REFUTED/.test(out) || !s.closest.clash || s.closest.uNum !== 1 || s.closest.uDen !== 2) fail('trading places should be a proved collision at the midpoint'); ok('Two dancers trade places: disproven, with the exact witness at 1/2') }
const vocabT = fs.readFileSync(path.join(root, 'app/src/lib/program.ts'), 'utf8'), leanFiles = fs.readdirSync(path.join(lean, 'Choreo')).map(f => fs.readFileSync(path.join(lean, 'Choreo', f), 'utf8')).join('\n')
for (const m of vocabT.matchAll(/theorem: '([\w.]+)'/g)) if (!new RegExp(`theorem ${m[1]}\\b`).test(leanFiles)) fail(`the app names a theorem that does not exist: ${m[1]}`)
const viewT = fs.readFileSync(path.join(root, 'app/src/ui/VerifyView.tsx'), 'utf8')
for (const m of viewT.matchAll(/theorem: '([\w.]+)'/g)) if (!/^(step|link|program_|routine_|PhaseSpec)/.test(m[1]) && !new RegExp(`theorem (?:[\\w.]*\\.)?${m[1].split('.').pop()}\\b`).test(leanFiles)) fail(`the app names a theorem that does not exist: ${m[1]}`)
ok('every theorem the app names exists')
console.log('Every step has its own movement on the figures')
const poses = fs.readFileSync(path.join(root, 'app/src/views/stepPose.ts'), 'utf8')
for (const m of fs.readFileSync(path.join(root, 'app/src/data/vocabulary.ts'), 'utf8').matchAll(/\['([^']+)', '[^']+'\]/g)) if (!/seconds|minute/.test(m[1]) && !poses.includes(m[1])) fail(`no movement for the step ${m[1]}`)
console.log('Every step in the menu is understood')
const vocab = fs.readFileSync(path.join(root, 'app/src/data/vocabulary.ts'), 'utf8')
const words = [...vocab.matchAll(/\['[^']+', '([^']+)'\]/g)].map(m => m[1]).filter(w => !/seconds|minute/.test(w))
const allSteps = check(`${words.length} steps at once`, { prompt: `Three minutes of bollywood fusion. Four dancers from stage left and four from stage right form a grid of four by two, then leave. Steps: ${words.join(', ')}.` }, 'proved')
const heardSteps = allSteps.plan.heard.find(h => h.startsWith('Dance ')) ?? ''
if (heardSteps.split(',').length !== words.length) fail(`only ${heardSteps.split(',').length} of ${words.length} steps were understood: ${heardSteps}`)
console.log('Proving every idea in the inspiration menu')
for (const r of JSON.parse(fs.readFileSync(path.join(root, 'app/src/data/inspiration.json'), 'utf8'))) check(r.title, { prompt: r.prompt }, 'proved')

console.log('Rehearsing the demo: both formations correct, the movement between them wrong')
const mid = catalogue.find(r => r.id === 'midnight-in-motion')
const moveFinn = cell => { const f = mid.scene.frames.map(x => x.map(p => [...p])); f[1][5] = cell; return { prompt: mid.prompt, gap: mid.gap, scene: { ...mid.scene, frames: f } } }
const wrong = check('Finn one row upstage is refuted', moveFinn([0, 7000]), 'refuted')
if (!wrong.checked.formation || !wrong.checked.musicality || wrong.checked.movement) fail('only movement should fail here')
const hit = wrong.problems.find(p => p.kind === 'collision')
if (!hit || ![hit.i, hit.j].every(i => [1, 5].includes(i))) fail('the clash should be Finn and Ben')
ok(`the witness: ${wrong.names[hit.i]} and ${wrong.names[hit.j]}, ${Math.round(hit.distance / 10)} cm, limit ${mid.gap / 10} cm`)
check('Finn one column over is proved', moveFinn([1200, 5500]), 'proved')

console.log('Stress test: the kernel has to tell sabotage from harmless change')
{
  const req = path.join(tmp, 's.json'), prefix = path.join(tmp, 'S')
  fs.writeFileSync(req, JSON.stringify({ prompt: mid.prompt, gap: mid.gap, scene: mid.scene }))
  const list = JSON.parse(execFileSync(exe, ['stress', req, prefix], { cwd: lean, env, encoding: 'utf8', maxBuffer: 1 << 28 }))
  list.forEach((x, k) => {
    const run = spawnSync('lean', ['--json', `${prefix}_${k}.lean`], { cwd: lean, env, encoding: 'utf8', maxBuffer: 1 << 28 })
    const msgs = run.stdout.split('\n').filter(l => l.trim()).map(l => JSON.parse(l))
    const err = msgs.find(m => m.severity === 'error')
    if (err) fail(`${x.title}: Lean disagreed\n${String(err.data).slice(0, 500)}`)
    if (!msgs.some(m => String(m.data).startsWith('MUTATION'))) fail(`${x.title}: no verdict came back`)
    ok(`${x.title}: ${x.tier}${x.catches ? ` by ${x.catches}` : ''}`)
  })
}

console.log('Checking that bad routines really are rejected, and that settings reach the proof')
const scenePrompt = catalogue.find(r => r.id === 'enter-stage-left').prompt
check('The gap setting changes the theorem', { prompt: catalogue[0].prompt, gap: 900 }, 'proved').config.dmin === 900 || fail('the gap setting did not reach Lean')
const base = JSON.parse(execFileSync(exe, ['compose', (fs.writeFileSync(path.join(tmp, 'b.json'), JSON.stringify({ prompt: scenePrompt })), path.join(tmp, 'b.json')), path.join(tmp, 'B.lean')], { cwd: lean, env, encoding: 'utf8', maxBuffer: 1 << 28 }))
const frames = base.scene.frames.map(f => f.map(p => [...p])), last = frames.length - 1
frames[last][0] = [...frames[last][7]]
check('A dancer sent into a landing spot is refuted', { prompt: scenePrompt, scene: { frames, rules: base.scene.rules } }, 'refuted')
const clash = check('A clash fails movement only', { prompt: scenePrompt, scene: { frames: (() => { const f = base.scene.frames.map(x => x.map(p => [...p])); f[last][0] = [...f[last][7]]; return f })(), rules: [] } }, 'refuted')
if (clash.checked.movement) fail('a clash should fail movement')
if (clash.transitions.every(t => t.ok)) fail('the failing move should not be a verified transition')
const named = check('A team\'s own names reach the report', { prompt: catalogue[0].prompt, names: ['Priya', 'Arjun'] }, 'proved')
if (named.names[0] !== 'Priya' || named.names[2] !== 'Cleo') fail('team names were not used')
fs.rmSync(tmp, { recursive: true, force: true })
console.log('\nEverything checks out.')
console.log('Comparator runs separately because its sandbox needs Linux: make comparator')
