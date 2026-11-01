import { CategoryState, summarize } from '../lib/verification'
import { DANCER_COLORS, Report, TransitionData, placeName } from '../lib/routine'
import { KernelState } from './ProofRail'

const CLS: Record<CategoryState, string> = { verified: 'verified', attention: 'attention', checking: 'checking', not_checked: 'none', failed: 'failed' }
export function VerificationSummary({ report, kernel }: { report: Report; kernel: KernelState }) {
  const c = summarize(report, kernel)[0]
  return <section className="vsum" aria-label="Movement check">
    <div className="vsum-head"><span className="vcat-q">The four things Lean proves about every routine</span><span className={`vcat-state ${CLS[c.state]}`}>{c.stateLabel}</span></div>
    <ul>{c.items.map(i => <li key={i.text}><span className={`mark ${!i.ok ? 'no' : c.state === 'verified' ? 'ok' : 'wait'}`}>{!i.ok ? '✕' : c.state === 'verified' ? '✓' : ''}</span>{i.text}</li>)}</ul>
  </section>
}
/** Where everyone starts and ends in one move. */
export function TransitionDiagram({ t, report }: { t: TransitionData; report: Report }) {
  const env = report.config.envelope, st = report.config.stage
  const draw = (pts: [number, number][], label: string) => <div><svg viewBox={`${env.xmin} ${-200} ${env.xmax - env.xmin} 8400`} role="img" aria-label={`${label}: ${pts.map((p, i) => `${report.names[i]} at ${placeName(p[0], p[1])}`).join(', ')}`}>
    <rect x={st.xmin} y={0} width={st.xmax - st.xmin} height={8000} fill="#171923" stroke="rgba(233,230,223,.3)" strokeWidth={50} />
    {pts.map((p, i) => <circle key={i} cx={p[0]} cy={8000 - p[1]} r={420} fill={DANCER_COLORS[i]} />)}
  </svg>{label}</div>
  return <div className="tr-diagram">{draw(t.startPositions, 'Starting formation')}<span aria-hidden>→</span>{draw(t.finishPositions, 'Ending formation')}</div>
}
