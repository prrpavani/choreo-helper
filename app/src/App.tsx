import { useCallback, useEffect, useRef, useState } from 'react'
import { clock } from './lib/clock'
import { Problem, Report, SceneData, fmtTime, phaseIndexAt, positionsAt, snap, tickToSec } from './lib/routine'
import { Stage2D } from './views/Stage2D'
import { PlanGrid } from './views/PlanGrid'
import { Theatre3D } from './views/Theatre3D'
import { Timeline } from './ui/Timeline'
import { KernelState, ProofRail } from './ui/ProofRail'
import { DancerCard } from './ui/DancerCard'
import { ProjectPanel } from './ui/ProjectPanel'
import { HistoryEntry, describeChange } from './ui/History'
import { CountBadge } from './ui/CountBadge'
import { loadTeam, recordProof } from './lib/progress'
import { blankScene } from './lib/repair'
import { Brief, briefToPrompt, describeBrief, emptyBrief, readWords, titleFor } from './lib/brief'
import { newFileId, saveFile, setFileStatus } from './lib/progress'
import { Director, Message, OPENING } from './ui/Director'
import { LeanPanel } from './ui/LeanPanel'
import { Params } from './ui/Params'
import { Crossings, seekTo } from './ui/Crossings'
import { Gauges } from './ui/Gauges'
import { Gallery } from './ui/Gallery'
import { Sequence } from './ui/Sequence'
import { OpInspector } from './ui/OpInspector'
import { Structure } from './ui/Structure'
import { VerifyView } from './ui/VerifyView'
import { Perform } from './ui/Perform'
import { OP_KINDS, ProgramDef, insertOp, stepsOfOp, surfaceOf } from './lib/program'
import { Crossing, crashReport } from './lib/crossings'
import { Seed } from './Shell'

const VIEW_NAME: Record<string, string> = { Plan: 'Formations', Stage: 'Top view', Theatre: '3D' }
type Mode = 'Create' | 'Structure' | 'Verify' | 'Perform'
type View = 'Plan' | 'Stage' | 'Theatre'
interface Override { move: number; dancer: number; x: number; y: number }
interface Snapshot { report: Report; kernel: KernelState; overrides: Override[]; scene: SceneData | null }

const freshKernel = (): KernelState => ({ status: 'running', phases: 0, ms: 0, axioms: null, fingerprintMatch: null, errors: [], rejected: 0, parts: { movement: false }, contract: { steps: [], links: [], broken: [], composed: false, sameRoutine: false }, transitions: [] })

export function Workspace({ active, seed }: { active: boolean; seed: Seed | null }) {
  const [prompt, setPrompt] = useState('')
  const [brief, setBrief] = useState<Brief>(emptyBrief)
  const [messages, setMessages] = useState<Message[]>([OPENING])
  const [ghost, setGhost] = useState<{ report: Report; text: string } | null>(null)
  const [composing, setComposing] = useState(false)
  const [describing, setDescribing] = useState(false)
  const [mode, setMode] = useState<Mode>('Create')
  const [program, setProgramState] = useState<ProgramDef | null>(null)
  const [selectedOp, setSelectedOp] = useState<[number, number] | null>(null)
  const [transform, setTransformState] = useState('')
  const programRef = useRef<ProgramDef | null>(null), transformRef = useRef('')
  const fileRef = useRef<string | null>(null), keepRef = useRef(false), briefRef = useRef(brief), titleRef = useRef<string | null>(null)
  briefRef.current = brief
  const [report, setReport] = useState<Report | null>(null)
  const [kernel, setKernel] = useState<KernelState>(freshKernel)
  const [busy, setBusy] = useState(false)
  const [failure, setFailure] = useState<string | null>(null)
  const [view, setView] = useState<View>('Stage')
  const [overrides, setOverrides] = useState<Override[]>([])
  const [focus, setFocus] = useState<Problem | null>(null)
  const [selection, setSelection] = useState<number[]>([])
  const [frame, setFrame] = useState(0)
  const [gap, setGap] = useState(60)
  const [projectTitle, setProjectTitle] = useState<string | null>(null)
  const historyRef = useRef<HistoryEntry[]>([]), currentRef = useRef(0)
  const [lastTransform, setLastTransform] = useState<string | null>(null)
  const gapRef = useRef(60), driftRef = useRef(0)
  const [history, setHistory] = useState<HistoryEntry[]>([])
  const [currentId, setCurrentId] = useState(0)
  historyRef.current = history; currentRef.current = currentId
  const sceneRef = useRef<SceneData | null>(null)
  const selected = selection.length === 1 ? selection[0] : null
  const setSelected = (i: number | null) => setSelection(i === null ? [] : [i])
  const [undo, setUndo] = useState<Snapshot | null>(null)
  const [playing, setPlaying] = useState(false)
  const [muted, setMuted] = useState(false)
  const timeEl = useRef<HTMLSpanElement>(null)
  const seq = useRef(0)
  const autoRules = useRef(false)
  const momentTimer = useRef(0)
  useEffect(() => clock.subscribe(() => setPlaying(clock.playing)), [])
  // coming back from another page: this routine takes the music and the clock again
  useEffect(() => { if (active && report) { clock.setLoop(null); clock.setRate(1); clock.setReport(report); clock.crashAllowed = kernel.status === 'refuted' } }, [active])
  useEffect(() => {
    let raf = 0
    const t = () => { raf = requestAnimationFrame(t); if (timeEl.current && report) timeEl.current.textContent = `${fmtTime(clock.t)} / ${fmtTime(report.config.seconds)}` }
    t(); return () => cancelAnimationFrame(raf)
  }, [report])

  const compose = useCallback(async (text: string, ov: Override[], opts: { keepTime?: boolean; scene?: SceneData | null; change?: string; planOnly?: boolean; replaceId?: number } = {}) => {
    const my = ++seq.current
    const change = opts.change ?? `Asked for: ${text}`
    const ov0 = ov, scene0 = opts.scene ?? null
    clock.music.unlock()
    const team = loadTeam().members
    setGhost(null); setBusy(true); setFailure(null); setFocus(null); setKernel(freshKernel()); clock.crashAllowed = false; clock.debug = false
    if (!opts.keepTime) { clock.pause(); clock.seek(0) }
    try {
      const res = await fetch('/api/compose', { method: 'POST', body: JSON.stringify({ prompt: text, overrides: ov, ...(programRef.current ? { program: programRef.current, transform: transformRef.current } : opts.scene ? { scene: opts.scene } : {}), gap: gapRef.current * 10, drift: driftRef.current * 10, names: team, planOnly: !!opts.planOnly }) })
      const reader = res.body!.getReader(), dec = new TextDecoder(); let buf = ''
      let current: Report | null = null
      for (;;) {
        const { done, value } = await reader.read()
        if (my !== seq.current) break
        if (done) {
          // the stream ended with no verdict: say so, rather than wait forever
          setKernel(k => k.status === 'running' ? { ...k, status: 'error', errors: ['The connection to Lean was lost before it finished.'] } : k)
          break
        }
        buf += dec.decode(value, { stream: true })
        const lines = buf.split('\n'); buf = lines.pop()!
        for (const l of lines) {
          if (!l.trim()) continue
          const m = JSON.parse(l)
          if (m.type === 'report') {
            current = m.report as Report
            clock.setReport(current); setReport(current)
            const entry: HistoryEntry = { id: my, change, report: current, kernel: freshKernel(), overrides: ov0, scene: current.scene ? (scene0 ?? current.scene) : null, at: Date.now() }
            setHistory(h => opts.replaceId ? h.map(e => e.id === opts.replaceId ? entry : e) : [...h, entry]); setCurrentId(my)
            clock.music.genre = null
            if (!opts.keepTime) { setSelected(null); setFrame(0) }
            sceneRef.current = current.scene
            if (keepRef.current) {
              fileRef.current ??= newFileId()
              const sc = current.scene ?? current.derived ?? null, thumbFrame = sc?.frames[Math.min(1, sc.frames.length - 1)] ?? []
              saveFile({ id: fileRef.current, title: titleRef.current ?? titleFor(briefRef.current), prompt: text, scene: current.scene ?? null, gap: gapRef.current * 10, brief: briefRef.current, program: programRef.current, status: opts.planOnly ? 'not_checked' : 'running', at: Date.now(), n: current.config.n, seconds: current.config.seconds, genre: current.plan.genre, thumb: thumbFrame })
            }
            setView(v => current!.scene ? (opts.keepTime ? v : 'Plan') : (v === 'Plan' ? 'Stage' : v))
          } else if (m.type === 'kernel') {
            if (m.event === 'phase') setKernel(k => ({ ...k, phases: k.phases + 1, ms: m.ms }))
            if (m.event === 'rejected') setKernel(k => ({ ...k, rejected: k.rejected + 1 }))
          } else if (m.type === 'done') {
            if (m.status === 'refuted' && current) { clock.crashAllowed = true; const p = current.problems.find(q => q.second !== undefined); if (p) { setFocus(p); clock.pause(); clock.seek(Math.max(0, p.second! - 0.01)) } }
            const finish = (k: KernelState): KernelState => ({ ...k, status: m.status, ms: m.ms ?? 0, axioms: m.axioms ?? null, fingerprintMatch: m.fingerprintMatch ?? null, errors: m.errors ?? [], parts: m.parts ?? k.parts, transitions: m.transitions ?? [], contract: m.contract ?? k.contract })
            setKernel(finish)
            setHistory(h => h.map(e => (e.id === my ? { ...e, kernel: finish(e.kernel) } : e)))
            if (m.status === 'verified' || m.status === 'refuted') recordProof(m.status)
            if (fileRef.current) setFileStatus(fileRef.current, m.status)
            if (current && !opts.keepTime || current && opts.change?.startsWith('Changed the prompt')) setMessages(ms => [...ms, { from: 'director', text: narrate(current!, m.status) }])
            if (m.status === 'verified' || m.status === 'refuted' || m.status === 'not_proved') clock.music.chime(m.status, m.phases ?? 8)
            
          }
        }
      }
    } catch (e) { if (my === seq.current) setFailure('Could not reach the Lean server. Is it still running?') }
    if (my === seq.current) setBusy(false)
  }, [])

  const changeProgram = useCallback((p: ProgramDef, change: string) => {
    programRef.current = p; setProgramState(p); keepRef.current = true
    compose(p.title, [], { keepTime: true, planOnly: true, change })
  }, [compose])
  /** Move one dancer in one frame. Later frames where they hadn't moved follow them. */
  const moveInFrame = useCallback((f: number, dancer: number, x: number, y: number) => {
    setLastTransform(null)
    if (programRef.current && report?.program) {
      // dragging changes the movement that lands this formation
      const st = report.program.steps[f - 1], p = programRef.current
      if (!st) return
      let k = 0
      const sections = p.sections.map(sec => ({ ...sec, ops: sec.ops.map(op => k++ === st.surface && op.kind === 'move' ? { ...op, places: st.after.map((q, i) => i === dancer ? [x, y] as [number, number] : q) } : op) }))
      const hit = p.sections.flatMap(q => q.ops)[st.surface]
      if (hit?.kind !== 'move') { setFailure('This formation comes from a rule, not from placed positions. To drag dancers, change it to a Move to formation.'); return }
      setUndo(u => u ?? { report, kernel, overrides, scene: null })
      changeProgram({ ...p, sections }, `Moved ${report.names[dancer]} in ${st.name}`)
      return
    }
    const sc = sceneRef.current ?? report?.scene ?? report?.derived ?? null
    if (!sc || !report) return
    keepRef.current = true
    const old = sc.frames[f][dancer]
    if (old[0] === x && old[1] === y) return
    const frames = sc.frames.map(fr => fr.map(p => [p[0], p[1]] as [number, number]))
    for (let g = f; g < frames.length; g++) { const q = frames[g][dancer]; if (g === f || (q[0] === old[0] && q[1] === old[1])) frames[g][dancer] = [x, y] }
    setUndo(u => u ?? { report, kernel, overrides, scene: sc })
    const next: SceneData = { ...sc, frames, rules: autoRules.current ? null : sc.rules }
    sceneRef.current = next
    compose(prompt, [], { keepTime: true, scene: next, planOnly: true, change: describeChange(report, f, dancer, x, y, sc.frames.length) })
  }, [report, kernel, overrides, prompt, compose, changeProgram])

  const changeScene = useCallback((next0: SceneData, change = 'Changed the plan') => {
    const next = autoRules.current ? { ...next0, rules: null } : next0
    keepRef.current = true
    if (report) setUndo(u => u ?? { report, kernel, overrides, scene: sceneRef.current })
    sceneRef.current = next; compose(prompt, [], { keepTime: true, scene: next, change, planOnly: true })
  }, [report, kernel, overrides, prompt, compose])

  // Lean judges exactly this version. The history row is kept and gets its result.
  const verify = useCallback(() => {
    const entry = historyRef.current.find(e => e.id === currentRef.current)
    compose(prompt, overrides, { keepTime: true, scene: sceneRef.current, change: entry?.change, replaceId: entry?.id })
  }, [prompt, overrides, compose])
  const applyScene = useCallback((s: SceneData, change: string) => {
    if (report) setUndo(u => u ?? { report, kernel, overrides, scene: sceneRef.current })
    sceneRef.current = s; compose(prompt, [], { keepTime: true, scene: s, change })
  }, [report, kernel, overrides, prompt, compose])
  const restore = useCallback((e: HistoryEntry) => {
    setGhost(null)
    clock.crashAllowed = e.kernel.status === 'refuted'; clock.debug = false
    seq.current++; setBusy(false); clock.setReport(e.report); setReport(e.report); setKernel(e.kernel); setOverrides(e.overrides)
    sceneRef.current = e.scene; setCurrentId(e.id); setFocus(e.report.problems.find(q => q.second !== undefined) ?? null); setUndo(null)
  }, [])

  // the conversation and the settings both end here: words for the planner, and a fresh proof
  const make = useCallback((b: Brief) => {
    const text = briefToPrompt(b), first = !report
    autoRules.current = false; setPrompt(text); setOverrides([]); setUndo(null); setSelection([]); sceneRef.current = null; keepRef.current = true; setComposing(false)
    gapRef.current = b.gap + 2 * b.drift; driftRef.current = b.drift; setGap(gapRef.current); setBrief(b)
    if (first) { setHistory([]); fileRef.current = newFileId(); titleRef.current = null }
    compose(text, [], first ? { change: `Asked for: ${describeBrief(b) || 'a routine'}` } : { keepTime: true, change: `Changed the prompt: ${describeBrief(b)}` })
  }, [compose, report])
  // a program is the canonical routine: open it, change it, and Lean judges exactly that
  const openProgram = useCallback((p: ProgramDef) => {
    programRef.current = p; setProgramState(p); transformRef.current = ''; setTransformState(''); setSelectedOp(null); setMode('Create'); setView('Stage')
    autoRules.current = false; setPrompt(p.title); setOverrides([]); setUndo(null); setSelection([]); sceneRef.current = null; setHistory([]); setProjectTitle(p.title); titleRef.current = p.title
    gapRef.current = p.gap / 10; driftRef.current = 0; setGap(p.gap / 10); keepRef.current = true; fileRef.current = newFileId(); setDescribing(false)
    compose(p.title, [], { change: `Opened ${p.title}` })
  }, [compose])
  const applyTransform = useCallback((key: string) => {
    transformRef.current = key; setTransformState(key)
    compose(programRef.current?.title ?? '', [], { keepTime: true, change: key ? `Transformed the whole routine: ${key}` : 'Back to the original' })
  }, [compose])
  const selectOp = useCallback((si: number, oi: number) => {
    setSelectedOp([si, oi]); setMode('Create')
  }, [])
  const onParams = useCallback((b: Brief) => {
    setBrief(b)
    if (!report) return
    if (report.scene && sameExceptGap(b, brief)) { driftRef.current = b.drift; changeGap(b.gap + 2 * b.drift); return }
    make(b)
  }, [report, brief, make])
  const watchCrossing = useCallback((c: Crossing) => { setView(v => v === 'Plan' ? 'Stage' : v); setSelection([c.a, c.b]); seekTo(c.from - .5) }, [])
  const showRejected = useCallback((c: Crossing) => {
    if (!report || !c.idea) return
    const r = crashReport(report, c.idea); if (!r) return
    const p = r.problems.find(q => q.second !== undefined)
    clock.setReport(r); clock.crashAllowed = true; clock.debug = false
    setGhost({ report: r, text: `${c.idea.title}: ${p?.text ?? c.idea.why}${p?.second !== undefined ? ` at ${fmtTime(p.second)}` : ''}` })
    setView(v => v === 'Plan' ? 'Stage' : v); setSelection(p && p.i !== undefined && p.j !== undefined ? [p.i, p.j] : []); seekTo((p?.second ?? 0) - 3)
  }, [report])
  const backToSafe = useCallback(() => { if (!report) return; clock.pause(); clock.setReport(report); clock.crashAllowed = kernel.status === 'refuted'; setGhost(null); setSelection([]) }, [report, kernel.status])
  const openImported = useCallback((r: { title: string; prompt: string; scene: SceneData | null; gap: number }) => {
    autoRules.current = false; setPrompt(r.prompt); setOverrides([]); setUndo(null); setSelection([]); sceneRef.current = r.scene; setHistory([]); setProjectTitle(r.title); titleRef.current = r.title; keepRef.current = true; fileRef.current = newFileId()
    gapRef.current = r.gap / 10; setGap(r.gap / 10); driftRef.current = 0
    compose(r.prompt, [], { scene: r.scene, change: `Opened ${r.title}` })
  }, [compose])

  // everyone starts in the wings, and the rules come from whatever you build
  const startBlank = useCallback(() => {
    const s = blankScene(8)
    autoRules.current = true; setOverrides([]); setUndo(null); setSelection([]); setHistory([]); setProjectTitle(null); setFrame(0); setPrompt('A new routine'); keepRef.current = true; fileRef.current = newFileId(); titleRef.current = 'Blank stage routine'
    sceneRef.current = s; gapRef.current = 60; setGap(60); driftRef.current = 0; setBrief({ ...emptyBrief(), drift: 0 }); driftRef.current = 0
    compose('A new routine', [], { scene: s, change: 'Started with a blank stage' })
  }, [compose])

  const changeGap = useCallback((cm: number) => {
    gapRef.current = cm; setGap(cm)
    const change = `Set the gap between dancers to ${cm} cm`
    if (sceneRef.current) compose(prompt, [], { keepTime: true, scene: sceneRef.current, change })
    else compose(prompt, overrides, { keepTime: true, change })
  }, [prompt, overrides, compose])

  // edits: dragging a dancer changes where they land in the nearest shape
  const applyEdit = useCallback((dancer: number, dx: number, dy: number) => {
    if (!report) return
    const k = phaseIndexAt(report, clock.t), sc = sceneRef.current ?? report.scene ?? report.derived
    if (!sc) return
    const lands = report.scene ? report.keys.map(q => q.phase) : report.derived?.landing ?? []
    let f = 0; lands.forEach((p, i) => { if (p <= k) f = i })
    f = Math.min(f, sc.frames.length - 1)
    const here = sc.frames[f][dancer], [x, y] = snap(here[0] + dx, here[1] + dy)
    moveInFrame(f, dancer, x, y)
  }, [report, moveInFrame])

  const onDrop = useCallback((dancer: number, x: number, y: number) => {
    if (!report) return
    const cur = positionsAt(report, clock.t)[dancer]
    applyEdit(dancer, x - cur[0], y - cur[1])
  }, [report, applyEdit])

  const breakIt = useCallback(() => {
    if (!report) return
    const sc = sceneRef.current ?? report.scene ?? report.derived
    if (!sc || sc.frames.length < 2) return
    // send a dancer straight onto the place another dancer lands
    const last = report.scene ? sc.frames.length - 1 : 1, fr = sc.frames[last]
    const moved = (i: number) => sc.frames[0][i][0] !== fr[i][0] || sc.frames[0][i][1] !== fr[i][1]
    let a = fr.findIndex((p, i) => !moved(i) && Math.abs(p[0]) <= 6000), b = fr.findIndex((p, i) => i !== a && moved(i))
    if (a < 0) { a = fr.findIndex(p => Math.abs(p[0]) <= 6000); b = fr.findIndex((p, i) => i !== a && Math.abs(p[0]) <= 6000) }
    if (a >= 0 && b >= 0) { setSelection([a, b]); setFrame(last); setView('Plan'); moveInFrame(last, a, fr[b][0], fr[b][1]) }
  }, [report, moveInFrame])

  // a selection can outlive the dancers it names, so drop anything that no longer exists
  useEffect(() => { if (report) setSelection(s => s.filter(i => i < report.config.n)) }, [report])

  const undoEdit = useCallback(() => {
    if (!undo) return
    seq.current++; setBusy(false)
    clock.setReport(undo.report); setReport(undo.report); setKernel(undo.kernel); setOverrides(undo.overrides); sceneRef.current = undo.scene; setUndo(null); setFocus(null)
  }, [undo])

  // run up to the moment with the music, watch it go wrong, then stop
  const showMoment = useCallback((p: Problem) => {
    setFocus(p); setView('Stage'); setSelection([]); clock.debug = false; clock.pause()
    const T = p.second ?? 0
    clock.seek(Math.max(0, T - 3)); clock.play()
    window.clearTimeout(momentTimer.current)
    momentTimer.current = window.setTimeout(() => { if (clock.playing) clock.pause() }, (Math.min(T, 3) + 3.2) * 1000)
  }, [])

  // a routine sent here from another page
  useEffect(() => {
    if (!seed) return
    setComposing(false)
    if (!seed.program) { programRef.current = null; setProgramState(null); transformRef.current = ''; setTransformState('') }
    setMode('Create')
    if (seed.program) { openProgram(seed.program as ProgramDef); return }
    if (seed.blank) { setDescribing(false); clock.pause(); setReport(null); setOverrides([]); setUndo(null); setSelection([]); sceneRef.current = null; setHistory([]); setBrief(emptyBrief()); setMessages([OPENING]); fileRef.current = null; keepRef.current = false; titleRef.current = null; setProjectTitle(null); return }
    autoRules.current = false; setPrompt(seed.prompt); setOverrides([]); setUndo(null); setSelection([]); sceneRef.current = seed.scene ?? null; setHistory([]); setProjectTitle(seed.title ?? null)
    gapRef.current = seed.gap ? seed.gap / 10 : 60; setGap(gapRef.current); driftRef.current = (seed.brief as Brief | undefined)?.drift ?? 0
    fileRef.current = seed.fileId ?? null; keepRef.current = !!seed.fileId; titleRef.current = seed.title ?? null
    const b = seed.brief ?? { ...readWords(seed.prompt, emptyBrief()).brief, gap: gapRef.current, drift: 0 }; setBrief(b)
    setMessages([{ from: 'director', text: `This is ${seed.title ?? 'your routine'}. Tell me what to change, or adjust the settings above. Changing a setting makes a new version, and Lean checks it again.` }])
    compose(seed.prompt, [], { scene: seed.scene ?? null, change: seed.title ? `${seed.title}: original choreography` : undefined })
  }, [seed?.n])

  useEffect(() => {
    const on = (e: KeyboardEvent) => {
      const tag = (e.target as HTMLElement).tagName
      if (tag === 'TEXTAREA' || tag === 'INPUT' || !report || !active) return
      if (e.code === 'Space') { e.preventDefault(); clock.toggle() }
      if (e.key === 'ArrowRight') clock.seek(clock.t + (e.shiftKey ? 30 : 5))
      if (e.key === 'ArrowLeft') clock.seek(clock.t - (e.shiftKey ? 30 : 5))
      if (e.key === '1') setView('Stage'); if (e.key === '2') setView('Theatre'); if (e.key === '0') setView('Plan'); if (e.key === 'Escape') setSelection([])
      if (e.key === 'n') jump(report, 1); if (e.key === 'p') jump(report, -1)
    }
    window.addEventListener('keydown', on); return () => window.removeEventListener('keydown', on)
  }, [report, active])

  if (!active) return null
  const editing = !!report && composing
  if (!report && !describing) return <div className="page director-home"><div className="wrap dh-wrap gal-wrap">
    <h1 className="big">Choreography is a program.</h1>
    <p className="lead">Dancers are the entities, formations are the states, and movements are the operations. Open a routine, see how its movements fit together, and change it. Lean proves what holds, and shows you where it stops holding.</p>
    <Gallery onOpen={openProgram} onDescribe={() => setDescribing(true)} busy={busy} />
    {failure && <div className="fail">{failure}</div>}
  </div></div>
  if (!report || composing) return <div className="page director-home"><div className="wrap dh-wrap">
    {!editing && <button className="linkish dh-back" onClick={() => setDescribing(false)}>Back to the gallery</button>}
    <h1 className="big">{editing ? 'Change your set.' : 'Describe your set.'}</h1>
    <p className="lead">{editing ? (report?.scene ? 'Lean proves the new version again. This rebuilds it from your words, so places you dragged by hand are replaced. The old version stays in the history.' : 'Say what to change, or adjust the settings. Lean proves the new version again, and the old one stays in the history.') : 'Choreo plans it, with dancers coming on and going off. Lean proves four things about every moment: no collisions, in bounds, under the speed limit, no jumps.'}</p>
    <Director goLabel={editing ? 'Update it and prove it' : undefined} brief={brief} setBrief={setBrief} messages={messages} setMessages={setMessages} busy={busy} onMake={make} onOpen={openImported} />
    <Params inline brief={brief} onChange={setBrief} minSeconds={editing && !report?.scene ? report?.minSeconds : undefined} />
    <div className="dh-foot"><span className="dh-sum">{describeBrief(brief) || 'Anything you leave open, Choreo chooses.'}</span><span className="spacer" />{editing ? <button className="linkish" onClick={() => setComposing(false)}>Back to the stage</button> : <><button className="linkish" disabled={busy} onClick={startBlank}>Place every dancer myself</button><a className="linkish" href="#/files">Open a saved routine</a></>}</div>
    {failure && <div className="fail">{failure}</div>}
  </div></div>
  const shown = ghost?.report ?? report
  const sceneNow = sceneRef.current ?? report.scene ?? report.derived ?? null
  const frameNow = sceneNow ? Math.min(frame, sceneNow.frames.length - 1) : 0
  const lands = report.scene ? report.keys.map(q => q.phase) : report.derived?.landing ?? []
  const titleNow = projectTitle ?? titleFor(brief)
  const reset = () => { programRef.current = null; setProgramState(null); setSelectedOp(null); setMode('Create'); setDescribing(false); setComposing(false); clock.pause(); setReport(null); setOverrides([]); setUndo(null); setSelection([]); sceneRef.current = null; setHistory([]); setBrief(emptyBrief()); setMessages([OPENING]); fileRef.current = null; keepRef.current = false; titleRef.current = null; setProjectTitle(null) }
  return <div className="app">
    <header className="top">
      <button className="btn ghost sm brand" onClick={reset}>Gallery</button>
      <a className="btn ghost sm" href="#/files">Open</a>
      {!program && <button className="btn primary sm change-it" onClick={() => { setMessages([{ from: 'director', text: `Now: ${describeBrief(brief) || 'your routine'}. What should change?`, chips: [{ label: 'Shorter', say: 'shorter' }, { label: 'Longer', say: 'longer' }, { label: 'More dancers', say: 'more dancers' }, { label: 'Add a spiral', say: 'add a spiral' }, { label: 'Add a burst', say: 'add a burst' }] }]); setComposing(true) }}>Change it</button>}
      <div className="modes" role="tablist" aria-label="Workspace">{(['Create', ...(program ? ['Structure'] : []), 'Verify', 'Perform'] as Mode[]).map(m => <button key={m} role="tab" aria-selected={m === mode} className={m === mode ? 'on' : ''} onClick={() => setMode(m)}>{m}</button>)}</div>
      <span className="top-title">{titleNow}</span>
      <span className="spacer" />
    </header>
    <main className={`main ${mode === 'Create' ? 'with-left' : 'full'}`}>
      {mode === 'Create' && sceneNow && <ProjectPanel report={report} title={titleNow} selection={selection} setSelection={setSelection} scene={sceneNow} frame={frameNow} onChange={changeScene} />}
      <section className="stagebox">
        {mode === 'Create' && <div className="tabs" role="tablist">
          {(['Stage', 'Plan', 'Theatre'] as View[]).map(v => <button key={v} role="tab" aria-selected={v === view} className={`tab ${v === view ? 'on' : ''}`} onClick={() => setView(v)}>{VIEW_NAME[v]}</button>)}
        </div>}
        <div className="canvasbox">
          {ghost && <div className="crash-banner" role="status"><div><b>You are watching the version Lean rejected.</b> {ghost.text}. This is not your routine.</div><button className="btn sm light" onClick={backToSafe}>Back to the safe version</button></div>}
          {mode === 'Create' && view === 'Plan' && sceneNow && <PlanGrid report={report} kernel={kernel} scene={sceneNow} frame={frameNow} setFrame={f => { setFrame(f); const ph = report.phases[lands[f] ?? -1]; clock.seek(f === 0 || !ph ? 0 : tickToSec(report, ph.t1) + .01) }} selection={selection} setSelection={setSelection} focus={focus} onMove={moveInFrame} onChange={changeScene} lands={lands} fixedStructure={!!program} />}
          {mode === 'Create' && view === 'Stage' && <Stage2D report={shown} focus={ghost ? shown.problems[0] ?? null : focus} selected={selected} onSelect={setSelected} onDrop={onDrop} busy={busy} />}
          {mode === 'Create' && view === 'Theatre' && <Theatre3D report={shown} selected={selected} />}
          {mode === 'Create' && view === 'Stage' && <div className="hint">Click a dancer to see their part. Drag one to change where they land, and press Verify.</div>}
          {mode === 'Create' && selected !== null && view === 'Stage' && <DancerCard report={report} dancer={selected} onClose={() => setSelected(null)} />}
          {mode === 'Structure' && program && <Structure program={program} report={report.program} kernel={kernel} onSelect={selectOp} />}
          {mode === 'Verify' && (program ? <VerifyView program={program} programReport={report.program} report={report} kernel={kernel} transform={transform} onTransform={applyTransform} onGenerate={verify} /> : <LeanPanel report={report} kernel={kernel} onGenerate={verify} />)}
          {mode === 'Perform' && <Perform report={report} kernel={kernel} program={report.program} title={titleNow} />}
        </div>
      </section>
      {mode === 'Create' && <ProofRail report={report} kernel={kernel} onFocus={showMoment} onUndo={undoEdit} canUndo={!!undo} onReadProof={() => setMode('Verify')} selection={selection} onClearSelection={() => setSelection([])} history={history} currentId={currentId} onRestore={restore} onVerify={verify} onApplyScene={applyScene} onUseSeconds={sec => onParams({ ...brief, seconds: sec })} settings={program ? <OpInspector program={program} report={report.program} kernel={kernel} at={selectedOp} onChange={changeProgram} onSelect={(a, b) => setSelectedOp([a, b])} /> : <Params brief={brief} onChange={onParams} locked={busy} minSeconds={report.scene ? undefined : report.minSeconds} />} crossings={<Crossings report={report} kernel={kernel} onWatch={watchCrossing} onCrash={showRejected} onFocus={showMoment} />} />}
    </main>
    {mode === 'Create' && program && <Sequence program={program} report={report.program} kernel={kernel} selected={selectedOp} onSelect={selectOp} onAdd={kind => { const make = OP_KINDS.find(k => k.kind === kind)!.make(), si = selectedOp?.[0] ?? program.sections.length - 1, at = selectedOp ? selectedOp[1] + 1 : program.sections[si].ops.length; changeProgram(insertOp(program, si, at, make), `Added ${make.title}`); setSelectedOp([si, at]) }} />}
    {mode !== 'Perform' && <Gauges report={shown} kernel={kernel} ghost={!!ghost} onFocus={(sec, who) => { clock.pause(); clock.seek(sec); setSelection(who); setMode('Create') }} />}
    <footer className="transport">
      <div className="controls">
        <button className="round" onClick={() => clock.toggle()} aria-label={playing ? 'Pause' : 'Play'}>{playing ? <svg width="16" height="16" viewBox="0 0 16 16"><rect x="3" y="2" width="4" height="12" rx="1" fill="currentColor" /><rect x="9" y="2" width="4" height="12" rx="1" fill="currentColor" /></svg> : <svg width="16" height="16" viewBox="0 0 16 16"><path d="M4 2.5v11a.6.6 0 0 0 .9.5l9-5.5a.6.6 0 0 0 0-1l-9-5.5a.6.6 0 0 0-.9.5z" fill="currentColor" /></svg>}</button>
        <button className="chip" onClick={() => jump(report, -1)} title="Previous move (p)">Previous move</button>
        <button className="chip" onClick={() => jump(report, 1)} title="Next move (n)">Next move</button>
        <span className="time" ref={timeEl} />
        <CountBadge report={report} />
        <span className="spacer" />
        <button className="chip" onClick={() => { clock.music.setMuted(!muted); setMuted(!muted) }}>{muted ? 'Sound off' : 'Sound on'}</button>
      </div>
      <Timeline report={shown} provedPhases={kernel.phases} status={kernel.status} focus={focus} />
    </footer>
    {failure && <div className="toast">{failure}</div>}
  </div>
}

function jump(r: Report, dir: number) {
  const starts = r.phases.filter((p, i) => p.kind !== 'hold' && (i === 0 || r.phases[i - 1].kind !== p.kind)).map(p => p.t0 / r.config.total * r.config.seconds)
  const t = clock.t
  const next = dir > 0 ? starts.find(s => s > t + .05) : [...starts].reverse().find(s => s < t - .4)
  clock.seek(next ?? (dir > 0 ? r.config.seconds : 0))
}

const sameExceptGap = (a: Brief, b: Brief) => JSON.stringify({ ...a, gap: 0, drift: 0 }) === JSON.stringify({ ...b, gap: 0, drift: 0 })
/** The director's account of what came back. Only what really happened. */
function narrate(r: Report, status: string): string {
  const moved = r.plan.heard.filter(h => !h.startsWith('Dance ')).slice(0, 12).join(', then ').toLowerCase()
  const turned = r.rejected.length ? ` Lean turned down ${r.rejected.length} ${r.rejected.length === 1 ? 'idea' : 'ideas'} along the way, so I used safer ones: see the Lean proof tab.` : ''
  if (status === 'verified') return `Here it is: ${moved || 'your routine'}. Lean proved nobody collides, leaves the stage or moves too fast, at any moment.${turned} Tell me what to change.`
  if (status === 'refuted') return `Lean proved this version unsafe: ${r.problems[0]?.text ?? 'see the check on the right'}. Try a change, or use the fix finder on the right.`
  if (r.error) return `${r.error} Say "longer", or use the button on the right.`
  if (status === 'not_proved') return 'Lean could not confirm this version, so I won\'t call it safe. Try fewer dancers, more time, or a simpler move.'
  return 'The check did not finish, which says nothing about the routine. Try again.'
}
