import { useEffect, useMemo, useState } from 'react'
import { DANCER_COLORS, PairFinding, Report, fmtTime, headsUp, isOffstage, pairFinding, placeName, pathAt } from '../lib/routine'
import { clock } from '../lib/clock'
import { KernelState } from './ProofRail'
import { Knows } from './Knows'

const firstPos = (r: Report, i: number) => pathAt(r.phases[0].paths[i], 0)
const lastPos = (r: Report, i: number) => pathAt(r.phases[r.phases.length - 1].paths[i], 1)
function aboutDancer(r: Report, i: number) {
  const a = firstPos(r, i), b = lastPos(r, i)
  if (isOffstage(a[0])) return `Starts offstage, in the ${placeName(a[0], a[1])}. Ends at ${placeName(b[0], b[1])}.`
  if (a[0] === b[0] && a[1] === b[1]) return `Stays on stage at ${placeName(a[0], a[1])}.`
  return `Starts at ${placeName(a[0], a[1])}. Ends at ${placeName(b[0], b[1])}.`
}
/** Shows the verification of one dancer or a group: their rules, and each pair the proof covers. */
export function Inspector({ report, kernel, selection, onClear }: { report: Report; kernel: KernelState; selection: number[]; onClear: () => void }) {
  const n = report.config.n
  const pairs = useMemo(() => {
    const out: PairFinding[] = []
    const chosen = new Set(selection)
    for (const i of selection) for (let j = 0; j < n; j++) {
      if (j === i || (chosen.has(j) && j < i)) continue
      out.push(pairFinding(report, i, j))
    }
    return out.sort((a, b) => a.closest - b.closest)
  }, [report.fingerprint, selection.join()])
  const [picked, setPicked] = useState(0)
  const [all, setAll] = useState(false)
  useEffect(() => { setPicked(0); setAll(false) }, [report.fingerprint, selection.join()])
  const rules = (report.scene?.rules ?? []).filter(u => u.kind === 'mirror'
    ? u.pairs.some(p => selection.includes(p[0]) || selection.includes(p[1]))
    : u.members.some(m => selection.includes(m)))
  const seenRule = new Set<string>()
  const ruleRows = rules.filter(u => { const k = u.name; if (seenRule.has(k)) return false; seenRule.add(k); return true }).map(u => {
    const asks = report.asks.filter(a => a.text.startsWith(u.name))
    return { name: u.name, kind: u.kind, ok: asks.every(a => a.ok), count: asks.length }
  })
  const proved = kernel.status === 'verified' || kernel.status === 'refuted'
  const pairMark = (p: PairFinding) => p.bad ? 'no' : proved && report.phases[p.phase].ok ? 'ok' : kernel.status === 'running' ? 'wait' : report.phases[p.phase].ok ? 'wait' : 'no'
  const show = all ? pairs : pairs.slice(0, 6)
  const cur = pairs[Math.min(picked, pairs.length - 1)]
  const curPhase = cur && report.phases[cur.phase]
  const a = cur && Math.max(cur.i, cur.j), b = cur && Math.min(cur.i, cur.j)
  const title = selection.length === 1 ? report.names[selection[0]] : selection.length <= 4 ? selection.map(i => report.names[i]).join(', ') : `${selection.length} dancers`
  return <section className="inspector" aria-label="Verification of the selected dancers">
    <div className="in-head">
      {selection.length === 1 && <span className="mark" style={{ background: DANCER_COLORS[selection[0]], color: '#17131D', width: 24, height: 24, fontSize: 12 }}>{report.names[selection[0]][0]}</span>}
      <h3>{title}</h3><button className="btn ghost sm" onClick={onClear}>Close</button>
    </div>
    <div className="in-sub">{selection.length === 1 ? aboutDancer(report, selection[0]) : 'What Lean checks for this group, against each other and everyone else.'}</div>
    {selection.length === 1 && <HeadsUp report={report} dancer={selection[0]} />}
    <div className="in-title">Closest they ever get to each dancer</div>
    <ul className="in-pairs">{show.map(p => {
      const k = pairs.indexOf(p), other = selection.includes(p.j) && selection.length > 1 && !selection.includes(p.i) ? p.i : p.j
      const label = selection.length === 1 ? report.names[other] : `${report.names[p.i]} and ${report.names[p.j]}`
      const m = pairMark(p), off = isOffstage(firstPos(report, other)[0])
      return <li key={`${p.i}-${p.j}`}><button className={k === picked ? 'on' : ''} onClick={() => { setPicked(k); clock.seek(p.second) }}>
        <span className={`mark ${m}`}>{m === 'ok' ? '✓' : m === 'no' ? '✕' : ''}</span>
        <span>{label}{off && selection.length === 1 && <em> from offstage</em>}</span>
        <b className={p.bad ? 'too' : ''}>{Math.round(p.closest / 10)} cm</b>
      </button></li>
    })}</ul>
    {pairs.length > 6 && !all && <button className="in-more" onClick={() => setAll(true)}>Show all {pairs.length}</button>}
    {cur && curPhase && <>
      <div className="in-title">{report.names[cur.i]} and {report.names[cur.j]}, at their closest ({fmtTime(cur.second, true)})</div>
      <Knows phase={curPhase} limit={report.config.dmin} pair={{ i: cur.i, j: cur.j, names: `${report.names[cur.i]} and ${report.names[cur.j]}`, how: cur.how, depth: cur.depth }} />
      <code className="in-call">{cur.bad
        ? `-- fails, so Lean tries to prove the opposite\nrefute_quick : ¬ PhaseSpec Rat cfg ph${cur.phase}`
        : `-- what the kernel evaluated for this pair, in ph${cur.phase}_ok\nCert.check ${cur.lean}\n  (path ${report.names[a]}) (path ${report.names[b]}) ${report.config.dmin} = true`}</code>
    </>}
  </section>
}

function HeadsUp({ report, dancer }: { report: Report; dancer: number }) {
  const cues = useMemo(() => headsUp(report, dancer), [report.fingerprint, dancer])
  if (!cues.length) return null
  return <><div className="in-title">Watch out for</div>
    <ul className="dc-cues">{cues.slice(0, 4).map((c, i) => <li key={i}><button onClick={() => clock.seek(c.sec)}><time>{fmtTime(c.sec)}</time><span><b>{report.names[c.other]}</b> passes {c.cm} cm {c.where}</span></button></li>)}</ul></>
}
