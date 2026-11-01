export type Poly = number[]
export interface Path { X: Poly; Y: Poly; W: Poly }
export interface Rect { xmin: number; xmax: number; ymin: number; ymax: number }
export interface Tight { i: number; j: number; names: string; distance: number; how: string; depth: number; coefficients: Poly }
export interface PhaseData { index: number; t0: number; t1: number; label: string; kind: string; bounds: Rect; paths: Path[]; ok: boolean; tight: Tight; certs: { how: string; depth: number; lean: string }[]; pairsByMethod: { together: number; curve: number } }
export interface Problem { kind: string; phase: number; i?: number; j?: number; t?: number; tNum?: number; tDen?: number; second?: number; distance?: number; text: string }
export interface AskData { group: string; text: string; ok: boolean; statement: string; phases: number[]; category: 'formation' | 'movement' }
export interface RejectedIdea { title: string; why: string; label: string; problems: Problem[]; paths: Path[]; at: number; ticks: number }
export interface Report {
  verdict: 'proved' | 'refuted' | 'unproved'; fingerprint: string; proofId: string; error: string | null
  plan: { seconds: number; bpm: number; genre: string; n: number; left: number; right: number; heard: string[] }
  config: { n: number; dmin: number; vmax: number; envelope: Rect; stage: Rect; ticksPerBeat: number; bpmNum: number; bpmDen: number; total: number; seconds: number }
  names: string[]; program?: import('./program').ProgramReport | null; minSeconds?: number; drift?: number; dropped?: string[]; derived?: SceneData | null; phases: PhaseData[]; keys: { move: number; phase: number }[]; globalOk: boolean
  asks: AskData[]; problems: Problem[]; rejected: RejectedIdea[]
  samples: { phase: number; t: number; pos: [number, number][] }[]
  scene: SceneData | null
  broken: { text: string; i: number; j: number } | null
  checked: { formation: boolean; movement: boolean; musicality: boolean; movementJoins: boolean }
  transitions: TransitionData[]
}
export interface TransitionData { index: number; label: string; kind: string; first: number; last: number; t0: number; t1: number; ok: boolean; name: string; startPositions: [number, number][]; finishPositions: [number, number][] }
export interface Rule { name: string; kind: string; frame: number; members: number[]; dx: number; dy: number; pairs: [number, number][]; mirror: number }
export interface SceneData { frames: [number, number][][]; rules: Rule[] | null; holds?: number[]; moves?: number[]; seconds?: number; ways?: string[]; genre?: string; landing?: number[]; bends?: [number, number, number, number][] }

export const DANCER_COLORS = ['#E0A63A', '#3FA9E0', '#E8606C', '#35B8A6', '#A98BF0', '#D98A3F', '#6CC67E', '#E07FBE', '#D9E36A', '#8FB4FF', '#E89B9B', '#A8E6C1', '#D4B8FF', '#FFC9A3', '#9FE8E0', '#FFB8E0']

export function ev(p: Poly, s: number, t: number): number {
  let v = 0, sp = 1
  for (let k = p.length - 1; k >= 0; k--) { v = p[k] * sp + t * v; sp *= s }
  return v
}
export function pathAt(p: Path, t: number): [number, number] {
  const s = 1 - t, w = ev(p.W, s, t)
  return [ev(p.X, s, t) / w, ev(p.Y, s, t) / w]
}
export function bpmOf(r: Report) { return r.config.bpmNum / r.config.bpmDen }
export function secToTick(r: Report, sec: number) { return sec * bpmOf(r) / 60 * r.config.ticksPerBeat }
export function tickToSec(r: Report, tick: number) { return tick / r.config.ticksPerBeat * 60 / bpmOf(r) }

export function phaseIndexAt(r: Report, sec: number): number {
  const tick = secToTick(r, sec)
  let lo = 0, hi = r.phases.length - 1
  while (lo < hi) { const m = (lo + hi) >> 1; if (tick < r.phases[m].t1) hi = m; else lo = m + 1 }
  return lo
}
export function positionsAt(r: Report, sec: number, out?: [number, number][]): [number, number][] {
  const k = phaseIndexAt(r, sec), ph = r.phases[k]
  const t = Math.min(1, Math.max(0, (secToTick(r, sec) - ph.t0) / (ph.t1 - ph.t0)))
  const res = out ?? []
  for (let i = 0; i < r.config.n; i++) res[i] = pathAt(ph.paths[i], t)
  return res
}
export function fmtTime(sec: number, tenths = false) {
  const m = Math.floor(sec / 60), s = sec - m * 60
  const ss = tenths ? s.toFixed(1).padStart(4, '0') : String(Math.floor(s)).padStart(2, '0')
  return `${m}:${ss}`
}
/** Compare this file's evaluator with the exact positions Lean computed. Returns the largest gap in mm. */
export function selfTest(r: Report) {
  let worst = 0, count = 0
  for (const s of r.samples) {
    const ph = r.phases[s.phase]
    s.pos.forEach((q, i) => { const p = pathAt(ph.paths[i], s.t); worst = Math.max(worst, Math.hypot(p[0] - q[0], p[1] - q[1])); count++ })
  }
  return { worst, count }
}
export interface ClearanceSample { sec: number; dist: number; i: number; j: number }
export function clearanceSeries(r: Report, samples = 900): ClearanceSample[] {
  const out: ClearanceSample[] = [], n = r.config.n
  const pos: [number, number][] = []
  for (let k = 0; k <= samples; k++) {
    const sec = r.config.seconds * k / samples
    positionsAt(r, sec, pos)
    let best = Infinity, bi = 0, bj = 0
    for (let i = 0; i < n; i++) for (let j = 0; j < i; j++) {
      const d = Math.hypot(pos[i][0] - pos[j][0], pos[i][1] - pos[j][1])
      if (d < best) { best = d; bi = i; bj = j }
    }
    out.push({ sec, dist: best, i: bi, j: bj })
  }
  return out
}
export const KIND_COLOR: Record<string, string> = { enter: '#5C8DF6', form: '#B49BF5', flip: '#E8B458', rotate: '#5FD6C4', hold: '#3A3444', exit: '#F2707A', exchange: '#C792EA', weave: '#E8388F', canon: '#7BD389', burst: '#FF6A1F', snake: '#F2C14E', zipper: '#4FC3F7' }
export const KIND_NAME: Record<string, string> = { enter: 'Entrance', form: 'New shape', flip: 'Flip', rotate: 'Rotation', hold: 'Steps', exit: 'Exit', exchange: 'Cast change', weave: 'Weave', canon: 'Ripple', burst: 'Burst', snake: 'Snake', zipper: 'Zipper' }

export interface Stage { index: number; kind: string; name: string; from: number; to: number; firstPhase: number; lastPhase: number }
/** The routine's stages: runs of phases of one kind, such as the entrance or the flip. */
export function stagesOf(r: Report): Stage[] {
  const out: Stage[] = []
  let k = 0
  while (k < r.phases.length) {
    let j = k
    while (j + 1 < r.phases.length && r.phases[j + 1].kind === r.phases[k].kind) j++
    const run = r.phases.slice(k, j + 1)
    const steps = [...new Set(run.map(p => p.label))].filter(l => l !== 'Hold')
    out.push({ index: out.length, kind: r.phases[k].kind, name: r.phases[k].kind === 'hold' ? (steps.length ? steps.join(', ') : 'Hold') : stageName(r.phases[k]), from: tickToSec(r, r.phases[k].t0), to: tickToSec(r, r.phases[j].t1), firstPhase: k, lastPhase: j })
    k = j + 1
  }
  return out
}
function stageName(p: PhaseData) {
  if (p.kind === 'hold') return 'Hold the shape'
  if (p.kind === 'flip') return 'Flip the lines'
  if (p.kind === 'enter') return 'Entrance'
  if (p.kind === 'exit') return 'Leave the stage'
  if (p.kind === 'rotate') return 'Rotate'
  if (p.kind === 'exchange') return 'Cast change'
  if (p.kind === 'weave') return 'Weave'
  if (p.kind === 'canon') return 'Ripple'
  if (p.kind === 'burst') return 'Gather and burst'
  if (p.kind === 'snake') return 'Follow the leader'
  if (p.kind === 'zipper') return 'Zipper'
  if (p.label.startsWith('Re-form')) return 'New lines'
  return p.label
}
/** Measured figures for a stage, for display. The proof is about the limits, not these numbers. */
export function stageFigures(r: Report, s: Stage) {
  let closest = Infinity, ci = 0, cj = 0, top = 0
  const n = r.config.n
  for (let q = s.firstPhase; q <= s.lastPhase; q++) {
    const ph = r.phases[q], secs = tickToSec(r, ph.t1) - tickToSec(r, ph.t0)
    const steps = 32
    let prev: [number, number][] | null = null
    for (let u = 0; u <= steps; u++) {
      const pos = ph.paths.map(p => pathAt(p, u / steps))
      for (let i = 0; i < n; i++) for (let j = 0; j < i; j++) {
        const d = Math.hypot(pos[i][0] - pos[j][0], pos[i][1] - pos[j][1])
        if (d < closest) { closest = d; ci = i; cj = j }
      }
      if (prev) for (let i = 0; i < n; i++) top = Math.max(top, Math.hypot(pos[i][0] - prev[i][0], pos[i][1] - prev[i][1]) / (secs / steps))
      prev = pos
    }
  }
  return { closest, pair: `${r.names[ci]} and ${r.names[cj]}`, top }
}

export const colX = (c: number) => (c - 5) * 1200
export const rowY = (r: number) => 7000 - r * 1500
export const ROWS = ['A', 'B', 'C', 'D', 'E']
export const WING_X = [6900, 8100, 9300]
export const isOffstage = (x: number) => Math.abs(x) > 6000
/** The nearest marked place on the grid. */
export function snap(x: number, y: number): [number, number] {
  const xs = [...Array.from({ length: 9 }, (_, i) => colX(i + 1)), ...WING_X, ...WING_X.map(v => -v)]
  const ys = [0, 1, 2, 3, 4].map(rowY)
  const near = (l: number[], v: number) => l.reduce((a, b) => (Math.abs(b - v) < Math.abs(a - v) ? b : a))
  return [near(xs, x), near(ys, y)]
}
export function placeName(x: number, y: number) {
  // formations from a prompt can sit between the marked rows, so name the nearest
  const k = [0, 1, 2, 3, 4].reduce((best, r) => Math.abs(rowY(r) - y) < Math.abs(rowY(best) - y) ? r : best, 0)
  const exact = rowY(k) === y, r = `${exact ? '' : 'near '}row ${ROWS[k]}`
  if (x > 6000) return `stage left wing, ${r}`
  if (x < -6000) return `stage right wing, ${r}`
  const c = Array.from({ length: 9 }, (_, i) => i + 1).find(q => colX(q) === x)
  return c ? `${r}, column ${c}` : r
}
const polySub = (a: Poly, b: Poly) => a.map((v, i) => v - (b[i] ?? 0))
function polyMul(a: Poly, b: Poly) { const out = new Array(a.length + b.length - 1).fill(0); a.forEach((x, i) => b.forEach((y, j) => { out[i + j] += x * y })); return out }
/** The same clearance form the Lean checker tests, for a pair sharing a denominator. */
export function clearancePoly(a: Path, b: Path, dmin: number): Poly {
  const dx = polySub(a.X, b.X), dy = polySub(a.Y, b.Y), ww = polyMul(a.W, a.W)
  const dd = polyMul(dx, dx), ee = polyMul(dy, dy)
  return dd.map((v, i) => v + ee[i] - dmin * dmin * ww[i])
}
export interface PairFinding { i: number; j: number; closest: number; second: number; phase: number; how: string; lean: string; depth: number; bad: boolean; t: number }
/** How close a pair gets over the routine, and which phase and method the proof uses there. */
export function pairFinding(r: Report, i: number, j: number): PairFinding {
  const [a, b] = i > j ? [i, j] : [j, i]
  let closest = Infinity, phase = 0, t = 0
  r.phases.forEach((ph, k) => {
    for (let u = 0; u <= 40; u++) {
      const p = pathAt(ph.paths[a], u / 40), q = pathAt(ph.paths[b], u / 40), d = Math.hypot(p[0] - q[0], p[1] - q[1])
      if (d < closest - 1e-6) { closest = d; phase = k; t = u / 40 }
    }
  })
  const ph = r.phases[phase], cert = ph.certs[a * (a - 1) / 2 + b]
  const bad = r.problems.some(x => x.kind === 'collision' && ((x.i === a && x.j === b) || (x.i === b && x.j === a))) || closest < r.config.dmin
  return { i, j, closest, second: tickToSec(r, ph.t0 + t * (ph.t1 - ph.t0)), phase, how: cert?.how ?? '', lean: cert?.lean ?? '', depth: cert?.depth ?? 0, bad, t }
}

export interface Cue { sec: number; other: number; cm: number; where: string }
/** The moments another dancer comes near, in the words a dancer would use. Facing the audience, a
 *  dancer's left is stage left. */
export function headsUp(r: Report, i: number): Cue[] {
  const out: Cue[] = [], steps = Math.max(200, Math.round(r.config.seconds * 6)), n = r.config.n
  const series: [number, number][][] = []
  for (let k = 0; k <= steps; k++) series.push(positionsAt(r, r.config.seconds * k / steps))
  const lim = Math.max(2000, r.config.dmin * 2.5)
  for (let j = 0; j < n; j++) {
    if (j === i) continue
    const d = series.map(p => Math.hypot(p[i][0] - p[j][0], p[i][1] - p[j][1]))
    for (let k = 1; k < steps; k++) {
      if (d[k] >= lim || d[k] > d[k - 1] || d[k] > d[k + 1]) continue
      // a real approach: they were clearly further apart a little before
      const before = d[Math.max(0, k - Math.round(steps / r.config.seconds * 3))]
      if (before < d[k] + 150) continue
      const dx = series[k][j][0] - series[k][i][0], dy = series[k][j][1] - series[k][i][1]
      const where = Math.abs(dx) >= Math.abs(dy) ? (dx > 0 ? 'to your left' : 'to your right') : (dy > 0 ? 'behind you' : 'in front of you')
      out.push({ sec: r.config.seconds * k / steps, other: j, cm: Math.round(d[k] / 10), where })
      break
    }
  }
  return out.sort((a, b) => a.sec - b.sec)
}
export function gapColor(d: number, dmin: number) { return d < dmin ? '#FF5A4F' : d < dmin * 1.5 ? '#F2B84B' : '#9FE3BC' }

export interface CrashPose { x: number; y: number; fall: number; hit: boolean; dirX: number; dirY: number; hop: number }
export interface Crash { second: number; i: number; j: number; cx: number; cy: number }
/** The first collision Lean found, if any. */
export function crashOf(r: Report): Crash | null {
  const p = r.problems.find(q => q.kind === 'collision' && q.second !== undefined)
  if (!p || p.second === undefined || p.i === undefined || p.j === undefined) return null
  const at = positionsAt(r, p.second)
  return { second: p.second, i: p.i, j: p.j, cx: (at[p.i][0] + at[p.j][0]) / 2, cy: (at[p.i][1] + at[p.j][1]) / 2 }
}
/** A cartoon of what the collision means: the pair get knocked apart and fall, and the people around
 *  them go down like dominoes. For display only. The proof is about the paths, which don't change. */
export function crashPose(r: Report, c: Crash, sec: number, i: number): CrashPose {
  const hit = i === c.i || i === c.j
  const atT = positionsAt(r, c.second)[i]
  const reach = Math.hypot(atT[0] - c.cx, atT[1] - c.cy)
  const delay = hit ? 0 : .22 + reach / 2600
  const tau = sec - c.second - delay
  const base = positionsAt(r, Math.min(sec, c.second + delay))[i]
  if (tau <= 0) return { x: base[0], y: base[1], fall: 0, hit, dirX: 0, dirY: 0, hop: 0 }
  let dx = atT[0] - c.cx, dy = atT[1] - c.cy, len = Math.hypot(dx, dy)
  if (len < 60) { const a = i === c.i ? .6 : .6 + Math.PI; dx = Math.cos(a); dy = Math.sin(a); len = 1 }
  dx /= len; dy /= len
  const push = (hit ? 1050 : 420) * (1 - Math.exp(-tau * 4.2))
  const bounce = tau < 1.1 ? Math.abs(Math.sin(tau * 6.5)) * Math.exp(-tau * 3) * (hit ? 650 : 240) : 0
  return { x: base[0] + dx * push, y: base[1] + dy * push, fall: Math.min(1, Math.pow(tau * (hit ? 3.4 : 2.4), 2)), hit, dirX: dx, dirY: dy, hop: bounce }
}
