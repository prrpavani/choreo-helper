import { Problem, Report, bpmOf, fmtTime, placeName, positionsAt, snap } from '../lib/routine'
import { countAt } from '../lib/verification'
import { KernelState } from './ProofRail'

const WHY: Record<string, string> = {
  collision: 'Two dancers need the same floor at the same moment. In the room, this is where someone stops, ducks, or gets kicked.',
  offstage: 'This dancer leaves the area the routine allows, so they would be out of the light or out of the plan.',
  fast: 'To reach their mark on the count, this dancer would have to move faster than the limit you set.',
  unproved: "Lean couldn't confirm this pair stays apart, and it couldn't find a moment that breaks it either. So it isn't called safe, and it isn't called unsafe.",
}
const TITLE: Record<string, string> = { collision: 'Dancers come too close', offstage: 'A dancer leaves the allowed area', fast: 'A dancer has to move too fast', unproved: 'A pair could not be confirmed', other: 'A required check failed' }

function Card({ p, report, onGo, proved }: { p: Problem; report: Report; onGo: (p: Problem) => void; proved: boolean }) {
  const who = [p.i, p.j].filter((x): x is number => x !== undefined).map(i => report.names[i]).join(' and ')
  const at = p.second !== undefined ? countAt(p.second, bpmOf(report)) : null
  const place = p.second !== undefined && p.i !== undefined ? (() => { const q = positionsAt(report, Math.min(p.second!, report.config.seconds - .001))[p.i!]; const [x, y] = snap(q[0], q[1]); return placeName(x, y) })() : null
  return <article className="fail-card">
    <h4>{TITLE[p.kind] ?? TITLE.other}</h4>
    <dl className="fail-facts">
      {who && <><dt>Who</dt><dd>{who}</dd></>}
      {at && <><dt>When</dt><dd>{fmtTime(p.second!, true)}, eight {at.eight}, count {at.count}</dd></>}
      {place && <><dt>Where</dt><dd>Near {place}</dd></>}
      {p.kind === 'collision' && <><dt>Needed</dt><dd>At least {report.config.dmin / 10} cm apart</dd></>}
      {p.distance !== undefined && <><dt>Found</dt><dd>{(p.distance / 10).toFixed(0)} cm apart</dd></>}
      {p.kind === 'fast' && <><dt>Limit</dt><dd>{report.config.vmax / 1000} m/s</dd></>}
      {report.phases[p.phase] && <><dt>During</dt><dd>{report.phases[p.phase].label}</dd></>}
    </dl>
    <p className="fail-why">{WHY[p.kind] ?? p.text}{proved && (p.kind === 'collision' || p.kind === 'offstage') ? ' This is proved: Lean checked this exact moment.' : ''}</p>
    {p.second !== undefined && <button className="btn sm light" onClick={() => onGo(p)}>Show me</button>}
  </article>
}
/** What went wrong, in the terms of the dance, and a way back to the moment. Everything here comes from Lean's report. */
export function FailureList({ report, kernel, onGo }: { report: Report; kernel: KernelState; onGo: (p: Problem) => void }) {
  if (kernel.status === 'error' || kernel.status === 'timeout' || kernel.status === 'not_checked' || kernel.status === 'running') return null
  const seen = new Set<string>()
  const list = report.problems.filter(p => { const k = `${p.kind}:${Math.min(p.i ?? 0, p.j ?? 0)}:${Math.max(p.i ?? 0, p.j ?? 0)}`; if (seen.has(k)) return false; seen.add(k); return true })
  if (!list.length) return null
  return <section aria-label="What went wrong">{list.slice(0, 3).map((p, i) => <Card key={i} p={p} report={report} onGo={onGo} proved={kernel.status === 'refuted'} />)}
    {list.length > 3 && <p className="fail-why" style={{ padding: '8px 20px', margin: 0 }}>And {list.length - 3} more with the same cause or nearby.</p>}</section>
}
