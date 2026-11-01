import { BRIDGE, DANCER_COUNTS, HOW_WORD, Status, WHAT_HAPPENED, ProgOp, ProgStep, ProgramDef, ProgramReport, SHAPES, SHAPE_NAME, STATUS_WORD, STEP_CHOICES, linkStatus, moveOp, opStatus, setOp, stepStatus, stepsOfOp, surfaceOf } from '../lib/program'
import { KernelState } from './ProofRail'
import { Dot } from './Sequence'
import { Declaration } from './VerifyView'

/** The real parabola from Lean: this pair's squared distance over the move, with its exact lowest point. */
function Parabola({ c, limit, status }: { c: NonNullable<ProgStep['closest']>; limit: number; status: Status }) {
  const f = (u: number) => c.A * u * u + 2 * c.B * u + c.C, u0 = c.uNum / c.uDen, W = 240, H = 74, vals = Array.from({ length: 41 }, (_, k) => f(k / 40)), lim = limit * limit
  const hi = Math.max(...vals, lim) * 1.08 || 1, X = (u: number) => 4 + u * (W - 8), Y = (v: number) => H - 6 - v / hi * (H - 12)
  const cm = Math.round(Math.sqrt(Math.max(0, c.distSq)) / 10)
  return <figure className="para"><figcaption><b>{c.names}</b> are closest {Math.round(u0 * 100)}% of the way through: <b>{cm} cm</b>, and the limit is {limit / 10} cm.</figcaption>
    <svg viewBox={`0 0 ${W} ${H}`} role="img" aria-label={`Distance between ${c.names} during this move, lowest at ${cm} cm`}>
      <line x1={4} x2={W - 4} y1={Y(lim)} y2={Y(lim)} className="para-lim" />
      <polyline points={vals.map((v, k) => `${X(k / 40)},${Y(v)}`).join(' ')} className="para-line" />
      <circle cx={X(u0)} cy={Y(f(u0))} r={4} className={c.clash ? 'para-low bad' : 'para-low'} />
    </svg>
    <p className="lp-not">{c.clash ? `Too close at exactly ${c.uNum}/${c.uDen} of the way through.` : status === 'proved' ? 'The closest separation is established mathematically over the entire movement, not by checking animation frames. Distance squared becomes a quadratic in how far along the movement the dancers are.' : 'Calculated from the exact paths. Lean has not confirmed this version yet.'}</p>
  </figure>
}
const COUNTS = [4, 6, 8, 12, 16, 20, 24, 32]
/** A movement: its settings, what it requires, and what it guarantees. */
export function OpInspector({ program, report, kernel, at, onChange, onSelect, gap }: { gap: number; program: ProgramDef; report: ProgramReport | null | undefined; kernel: KernelState; at: [number, number] | null; onChange: (p: ProgramDef, change: string) => void; onSelect: (si: number, oi: number) => void }) {
  if (!at || !program.sections[at[0]]?.ops[at[1]]) return <div className="op-empty"><h3>{program.title}</h3><p>{program.blurb}</p>
    <label className="param"><span>Dancers</span><select aria-label="Number of dancers" value={program.n} onChange={e => onChange({ ...program, n: Number(e.target.value) }, `${e.target.value} dancers`)}>{DANCER_COUNTS.map(k => <option key={k}>{k}</option>)}</select></label>
    <p className="op-hint">The theorems hold for any number of dancers. Select a movement below to see what it needs and what it gives you.</p></div>
  const [si, oi] = at, op = program.sections[si].ops[oi], steps = stepsOfOp(report, surfaceOf(program, si, oi)), first: ProgStep | undefined = steps[0], last = steps[steps.length - 1]
  const set = (patch: Partial<ProgOp>, change: string) => onChange(setOp(program, si, oi, { ...op, ...patch }), change)
  const bridge = BRIDGE[op.kind]
  const link = first ? linkStatus(kernel, first) : 'pending', status = opStatus(kernel, steps)
  return <div className="op-card">
    <div className="op-sec">{program.sections[si].name}</div>
    <input className="op-title" value={op.title ?? ''} aria-label="Movement name" onChange={e => set({ title: e.target.value }, `Renamed to ${e.target.value}`)} />
    <div className="op-status"><Dot s={status} />{STATUS_WORD[status]}</div>
    <div className="op-fields">
      {op.kind === 'move' && <label className="param"><span>Formation</span><select aria-label="Formation" value={op.shape} onChange={e => set({ shape: e.target.value, title: e.target.value === 'trade' ? 'Two Dancers Trade Places' : `Move to ${SHAPE_NAME[e.target.value] ?? e.target.value}`, places: undefined }, `Changed to ${SHAPE_NAME[e.target.value] ?? e.target.value}`)}>{SHAPES.map(x => <option key={x} value={x}>{SHAPE_NAME[x]}</option>)}</select></label>}
      {op.kind === 'rotate' && <label className="param"><span>Turn</span><select value={op.quarters ?? 1} onChange={e => set({ quarters: Number(e.target.value), title: `Rotate ${Number(e.target.value) * 90}°` }, `Rotate ${Number(e.target.value) * 90}°`)}>{[1, 2, 3].map(q => <option key={q} value={q}>{q * 90}°</option>)}</select></label>}
      {op.kind === 'step' && <label className="param"><span>Step</span><select value={op.step} onChange={e => set({ step: e.target.value, title: STEP_CHOICES.find(x => x[0] === e.target.value)?.[1] }, 'Changed the step')}>{STEP_CHOICES.map(([k, t]) => <option key={k} value={k}>{t}</option>)}</select></label>}
      {op.kind === 'parallel' && <label className="param"><span>Line between groups</span><select aria-label="Line between groups" value={op.line ?? 0} onChange={e => set({ line: Number(e.target.value) }, `Moved the line to ${Number(e.target.value) / 10} cm`)}>{[-1500, -300, 0, 1500].map(q => <option key={q} value={q}>{q / 10} cm from centre</option>)}</select></label>}
      {op.kind !== 'step' && <label className="param"><span>Counts</span><select value={op.counts ?? 8} onChange={e => set({ counts: Number(e.target.value) }, `${Number(e.target.value)} counts`)}>{COUNTS.map(c => <option key={c}>{c}</option>)}</select></label>}
    </div>
    {first?.closest && <Parabola c={first.closest} limit={gap} status={status} />}
    {first && bridge && <div className={`how how-${bridge.how}`}><b>{HOW_WORD[bridge.how]}</b>
      <h5>What happened</h5><p>{WHAT_HAPPENED[op.kind]}</p>
      <h5>Why this is guaranteed</h5><p>{bridge.because}</p>
      <h5>Lean theorem</h5><p><code>{bridge.theorem}</code></p>
      <p className="how-helps">{bridge.helps}</p></div>}
    {first && bridge && (() => { const main: Status = status === 'broken' ? 'unknown' : status, other: Status = status === 'proved' ? 'proved' : status === 'refuted' || status === 'broken' ? 'unknown' : status
      const rows: [string, Status, string][] = [...(bridge.how === 'inherited' ? [['Pairwise distances preserved', main, ''], ['Collision freedom preserved', main, '']] as [string, Status, string][] : [[bridge.property, main, '']] as [string, Status, string][]), ['Stage containment', other, 'Checked separately'], ['Speed limit', other, 'Checked separately']]
      return <table className="op-table" aria-label="What Lean establishes for this movement"><tbody>{rows.map(([p, s, note]) => <tr key={p}><th>{p}{note && <small>{note}</small>}</th><td><Dot s={s} />{STATUS_WORD[s]}</td></tr>)}</tbody></table> })()}
    {first && <div className="contract">
      <div className={`c-row ${link}`}><div className="c-h"><Dot s={link} />Needs</div><p>{first.requires}</p>{link === 'broken' && <p className="c-why"><b>Not met.</b> {first.why}.</p>}</div>
      <div className={`c-row ${stepStatus(kernel, last)}`}><div className="c-h"><Dot s={stepStatus(kernel, last)} />Gives you</div><p>{last.ensures}</p></div>
      <div className="c-row assume"><div className="c-h">Assumes</div><p>Dancers are points that keep a {gap / 10} cm gap, and they follow these exact paths. It doesn't promise stage bounds for every transformation: Lean checks those separately.</p></div>
    </div>}
    {first && bridge && <details className="bridge"><summary>How this connects to Lean</summary>
      <ol className="bridge-chain"><li><span>You chose</span><b>{op.title ?? op.kind}</b></li><li><span>Lean models it as</span><code>{bridge.formal}</code></li><li><span>Proved</span><b>{bridge.property}</b><code>{bridge.theorem}</code></li></ol>
      <p className="lp-not">The paths on stage come from Lean's own output. The browser only turns those exact numbers into decimals to draw them.</p>
      <Declaration name={bridge.theorem} proofId="" />
    </details>}
    <div className="op-actions">
      <button className="btn ghost sm" disabled={oi === 0} onClick={() => { onChange(moveOp(program, si, oi, -1), 'Moved a movement earlier'); onSelect(si, oi - 1) }}>Earlier</button>
      <button className="btn ghost sm" disabled={oi === program.sections[si].ops.length - 1} onClick={() => { onChange(moveOp(program, si, oi, 1), 'Moved a movement later'); onSelect(si, oi + 1) }}>Later</button>
      <span className="spacer" />
      <button className="btn ghost sm" onClick={() => onChange(setOp(program, si, oi, null), `Removed ${op.title}`)}>Remove</button>
    </div>
  </div>
}
