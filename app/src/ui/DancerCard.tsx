import { useMemo } from 'react'
import { clock } from '../lib/clock'
import { DANCER_COLORS, KIND_NAME, Report, fmtTime, headsUp, pathAt, stagesOf, tickToSec } from '../lib/routine'

function place(x: number, y: number) {
  if (x > 6000) return 'the stage left wing'
  if (x < -6000) return 'the stage right wing'
  const across = x > 1000 ? 'stage left' : x < -1000 ? 'stage right' : 'centre'
  const depth = y > 5300 ? 'upstage' : y < 2700 ? 'downstage' : 'mid-stage'
  return `${depth} ${across}`
}

/** One dancer's part, in the words a dancer would use. */
export function DancerCard({ report, dancer, onClose }: { report: Report; dancer: number; onClose: () => void }) {
  const cues = useMemo(() => headsUp(report, dancer), [report.fingerprint, dancer])
  const stages = useMemo(() => stagesOf(report), [report.fingerprint])
  const rows: { from: number; to: number; kind: string; label: string; where: string }[] = []
  let k = 0
  while (k < report.phases.length) {
    let j = k
    while (j + 1 < report.phases.length && report.phases[j + 1].kind === report.phases[k].kind) j++
    const a = report.phases[k], b = report.phases[j], [x, y] = pathAt(b.paths[dancer], 1)
    rows.push({ from: tickToSec(report, a.t0), to: tickToSec(report, b.t1), kind: a.kind, label: KIND_NAME[a.kind] ?? a.kind, where: a.kind === 'hold' ? (stages.find(z => z.firstPhase === k)?.name ?? 'Hold') : `finish ${place(x, y)}` })
    k = j + 1
  }
  return <div className="dancer-card">
    <header><span className="dot" style={{ background: DANCER_COLORS[dancer] }}>{report.names[dancer][0]}</span><b>{report.names[dancer]}'s part</b><button className="x" onClick={onClose} aria-label="Close">×</button></header>
    <div className="dc-title">Watch out for</div>
    {cues.length === 0 ? <p className="dc-none">Nobody comes close to you.</p> : <ul className="dc-cues">{cues.map((c, i) => <li key={i}><button onClick={() => clock.seek(c.sec)}><time>{fmtTime(c.sec)}</time><span><b>{report.names[c.other]}</b> passes {c.cm} cm {c.where}</span></button></li>)}</ul>}
    <div className="dc-title">Your part</div>
    <ol>{rows.map((r, i) => <li key={i}><time>{fmtTime(r.from)}</time><div><b>{r.label}</b><span>{r.where}</span></div></li>)}</ol>
  </div>
}
