import { RejectedIdea, Report, pathAt, stagesOf, tickToSec } from './routine'

const off = (p: number[]) => Math.abs(p[0]) > 6000
export interface Crossing { index: number; title: string; from: number; to: number; comers: number[]; goers: number[]; a: number; b: number; closest: number; second: number; idea: RejectedIdea | null; ideaIndex: number }

/** Every stretch where someone comes on or goes off, and how close they get. The figures are measured for display; the guarantee is the proof. */
export function crossingsOf(r: Report): Crossing[] {
  const out: Crossing[] = []
  for (const s of stagesOf(r)) {
    if (s.kind === 'hold') continue
    const first = r.phases[s.firstPhase], last = r.phases[s.lastPhase], n = r.config.n
    const start = first.paths.map(p => pathAt(p, 0)), end = last.paths.map(p => pathAt(p, 1))
    const comers: number[] = [], goers: number[] = []
    for (let i = 0; i < n; i++) { if (off(start[i]) && !off(end[i])) comers.push(i); if (!off(start[i]) && off(end[i])) goers.push(i) }
    if (!comers.length && !goers.length) continue
    const moving = new Set([...comers, ...goers])
    let a = 0, b = 1, closest = Infinity, second = s.from
    for (let k = s.firstPhase; k <= s.lastPhase; k++) {
      const ph = r.phases[k]
      for (let u = 0; u <= 32; u++) {
        const t = u / 32, pos = ph.paths.map(p => pathAt(p, t))
        for (const i of moving) for (let j = 0; j < n; j++) {
          if (i === j) continue
          const d = Math.hypot(pos[i][0] - pos[j][0], pos[i][1] - pos[j][1])
          if (d < closest) { closest = d; a = i; b = j; second = tickToSec(r, ph.t0 + (ph.t1 - ph.t0) * t) }
        }
      }
    }
    const ideaIndex = r.rejected.findIndex(x => x.at >= s.firstPhase && x.at <= s.lastPhase && x.problems.some(p => p.kind === 'collision' && p.t !== undefined))
    const title = comers.length && goers.length ? 'Cast change' : comers.length ? 'Coming on' : 'Going off'
    out.push({ index: s.firstPhase, title, from: s.from, to: s.to, comers, goers, a, b, closest, second, idea: ideaIndex >= 0 ? r.rejected[ideaIndex] : null, ideaIndex })
  }
  return out
}

/** The routine as it would have been with the idea Lean turned down, stopping at the end of that move. For showing the crash only: it is never offered as a result. */
export function crashReport(r: Report, idea: RejectedIdea): Report | null {
  const base = r.phases[idea.at]; if (!base) return null
  const t1 = base.t0 + idea.ticks, phase = { ...base, paths: idea.paths, t1, label: idea.label, kind: base.kind, ok: false }
  const phases = [...r.phases.slice(0, idea.at), phase], secPerTick = r.config.seconds / r.config.total
  const problems = idea.problems.map(p => ({ ...p, phase: idea.at, second: p.t === undefined ? undefined : (base.t0 + idea.ticks * p.t) * secPerTick }))
  const samples = [...r.samples.filter(s => s.phase < idea.at), ...Array.from({ length: 33 }, (_, u) => ({ phase: idea.at, t: u / 32, pos: idea.paths.map(p => pathAt(p, u / 32)) }))]
  return { ...r, verdict: 'refuted', phases, problems, samples, rejected: [], transitions: [], scene: null, derived: null, keys: [], config: { ...r.config, total: t1, seconds: t1 * secPerTick }, checked: { ...r.checked, movement: false } }
}
