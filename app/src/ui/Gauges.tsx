import { useEffect, useMemo, useRef, useState } from 'react'
import { clock } from '../lib/clock'
import { Report, fmtTime, positionsAt } from '../lib/routine'
import { KernelState } from './ProofRail'

interface Sample { gap: number; a: number; b: number; speed: number; who: number; margin: number; on: number; sec: number }
function measure(r: Report, sec: number): Sample {
  const p = positionsAt(r, sec).map(q => [q[0], q[1]]), dt = .02, q = positionsAt(r, Math.min(r.config.seconds, sec + dt)), n = r.config.n, e = r.config.envelope
  let gap = Infinity, a = 0, b = 1, speed = 0, who = 0, margin = Infinity, on = 0
  for (let i = 0; i < n; i++) {
    const v = Math.hypot(q[i][0] - p[i][0], q[i][1] - p[i][1]) / dt; if (v > speed) { speed = v; who = i }
    margin = Math.min(margin, p[i][0] - e.xmin, e.xmax - p[i][0], p[i][1] - e.ymin, e.ymax - p[i][1])
    if (Math.abs(p[i][0]) <= 6000) on++
    for (let j = 0; j < i; j++) { const d = Math.hypot(p[i][0] - p[j][0], p[i][1] - p[j][1]); if (d < gap) { gap = d; a = i; b = j } }
  }
  return { gap, a, b, speed, who, margin, on, sec }
}
const metres = (d: number) => d >= 1000 ? `${(d / 1000).toFixed(1)} m` : `${Math.round(d / 10)} cm`

/** The four things Lean proves, each with its live reading, in every view. Live readings are measured for display. The tick comes only from the kernel. */
export function Gauges({ report, kernel, ghost, onFocus }: { report: Report; kernel: KernelState; ghost: boolean; onFocus: (sec: number, who: number[]) => void }) {
  const [now, setNow] = useState<Sample>(() => measure(report, clock.t)), last = useRef(0)
  useEffect(() => { setNow(measure(report, clock.t)); const off = clock.subscribe(() => setNow(measure(report, clock.t)))
    let raf = 0; const f = (t: number) => { raf = requestAnimationFrame(f); if (clock.playing && t - last.current > 90) { last.current = t; setNow(measure(report, clock.t)) } }; raf = requestAnimationFrame(f)
    return () => { off(); cancelAnimationFrame(raf) } }, [report])
  const whole = useMemo(() => { let g = measure(report, 0), s = g, m = g; for (let k = 0; k <= 480; k++) { const x = measure(report, report.config.seconds * k / 480); if (x.gap < g.gap) g = x; if (x.speed > s.speed) s = x; if (x.margin < m.margin) m = x } return { g, s, m } }, [report.fingerprint])
  const joins = Math.max(0, report.phases.length - 1), t = report.config.total * Math.min(1, now.sec / report.config.seconds), passed = report.phases.filter(p => p.t1 <= t).length
  const proved = kernel.status === 'verified' && !ghost, unchecked = kernel.status === 'not_checked' || kernel.status === 'running'
  const has = (k: string) => report.problems.some(p => p.kind === k)
  const state = (bad: boolean) => bad && !unchecked ? 'no' : proved ? 'ok' : 'wait'
  const word = (bad: boolean) => bad && !unchecked ? 'Fails' : proved ? 'Proved' : unchecked ? (kernel.status === 'running' ? 'Checking' : 'Not checked') : 'No proof'
  const forgive = (report.drift ?? 0) > 0 && report.config.dmin - 2 * (report.drift ?? 0) > 0 ? (report.drift ?? 0) / 10 : 0
  const dmin = report.config.dmin, vmax = report.config.vmax
  const items = [
    { key: 'gap', title: 'No collisions', bad: has('collision') || has('unproved'), value: metres(now.gap), fill: Math.min(1, dmin / Math.max(1, now.gap)), danger: now.gap < dmin, note: `apart now · must stay over ${dmin / 10} cm`, deep: `Closest ever ${metres(whole.g.gap)} at ${fmtTime(whole.g.sec)}`, go: () => onFocus(whole.g.sec, [whole.g.a, whole.g.b]) },
    { key: 'bounds', title: 'Stays in bounds', bad: has('offstage'), value: `${now.on} on · ${report.config.n - now.on} off`, fill: 1 - Math.min(1, Math.max(0, now.margin) / 4000), danger: now.margin < 0, note: 'stage and wings only', deep: `Nearest to the edge ${metres(Math.max(0, whole.m.margin))} at ${fmtTime(whole.m.sec)}`, go: () => onFocus(whole.m.sec, []) },
    { key: 'speed', title: 'Under the speed limit', bad: has('fast'), value: `${(now.speed / 1000).toFixed(1)} m/s`, fill: Math.min(1, now.speed / vmax), danger: now.speed > vmax, note: `fastest now · limit ${(vmax / 1000).toFixed(1)} m/s`, deep: `Fastest ever ${(whole.s.speed / 1000).toFixed(1)} m/s at ${fmtTime(whole.s.sec)}`, go: () => onFocus(whole.s.sec, [whole.s.who]) },
    { key: 'joins', title: 'No jumps between moves', bad: report.checked?.movementJoins === false, value: `${Math.min(passed, joins)} of ${joins}`, fill: joins ? Math.min(1, passed / joins) : 1, danger: false, note: 'joins passed · position and speed match', deep: 'Every move starts where the last one ended', go: null },
    ...(forgive > 0 ? [{ key: 'forgive', title: 'Forgiving', bad: false, value: `${forgive} cm`, fill: Math.min(1, 2 * forgive * 10 / Math.max(1, dmin)), danger: false, note: 'anyone can be this far off', deep: `Still ${(dmin - 2 * forgive * 10) / 10} cm apart, in any performance`, go: null }] : []),
  ]
  return <section className={`gauges n${items.length}`} aria-label="What Lean proves, live">
    {items.map(g => <div key={g.key} className={`gauge ${state(g.bad)}`} data-gauge={g.key}>
      <div className="g-top"><span className={`mark ${state(g.bad)}`}>{state(g.bad) === 'ok' ? '✓' : state(g.bad) === 'no' ? '✕' : ''}</span><b>{g.title}</b><em>{g.key === 'forgive' ? (kernel.parts?.forgiving && !ghost ? 'Proved' : word(false)) : word(g.bad)}</em></div>
      <div className="g-read"><strong>{g.value}</strong><span>{g.note}</span></div>
      <div className={`g-bar ${g.danger ? 'over' : ''}`}><i style={{ width: `${g.fill * 100}%` }} /></div>
      {g.go ? <button className="g-deep" onClick={g.go}>{g.deep}</button> : <div className="g-deep plain">{g.deep}</div>}
    </div>)}
  </section>
}
