import { ProgOp, ProgStep, ProgramDef, ProgramReport, SHAPES, SHAPE_NAME, STATUS_WORD, STEP_CHOICES, linkStatus, moveOp, opStatus, setOp, stepStatus, stepsOfOp, surfaceOf } from '../lib/program'
import { KernelState } from './ProofRail'
import { Dot } from './Sequence'

const COUNTS = [4, 6, 8, 12, 16, 20, 24, 32]
/** A movement: its settings, what it requires, and what it guarantees. */
export function OpInspector({ program, report, kernel, at, onChange, onSelect }: { program: ProgramDef; report: ProgramReport | null | undefined; kernel: KernelState; at: [number, number] | null; onChange: (p: ProgramDef, change: string) => void; onSelect: (si: number, oi: number) => void }) {
  if (!at || !program.sections[at[0]]?.ops[at[1]]) return <div className="op-empty"><h3>{program.title}</h3><p>{program.blurb}</p><p className="op-hint">Select a movement below to see what it requires and what it guarantees.</p></div>
  const [si, oi] = at, op = program.sections[si].ops[oi], steps = stepsOfOp(report, surfaceOf(program, si, oi)), first: ProgStep | undefined = steps[0], last = steps[steps.length - 1]
  const set = (patch: Partial<ProgOp>, change: string) => onChange(setOp(program, si, oi, { ...op, ...patch }), change)
  const link = first ? linkStatus(kernel, first) : 'pending', status = opStatus(kernel, steps)
  return <div className="op-card">
    <div className="op-sec">{program.sections[si].name}</div>
    <input className="op-title" value={op.title ?? ''} aria-label="Movement name" onChange={e => set({ title: e.target.value }, `Renamed to ${e.target.value}`)} />
    <div className="op-status"><Dot s={status} />{STATUS_WORD[status]}</div>
    <div className="op-fields">
      {op.kind === 'move' && <label className="param"><span>Formation</span><select aria-label="Formation" value={op.shape} onChange={e => set({ shape: e.target.value, title: `Move to ${SHAPE_NAME[e.target.value] ?? e.target.value}`, places: undefined }, `Changed to ${SHAPE_NAME[e.target.value] ?? e.target.value}`)}>{SHAPES.map(x => <option key={x} value={x}>{SHAPE_NAME[x]}</option>)}</select></label>}
      {op.kind === 'rotate' && <label className="param"><span>Turn</span><select value={op.quarters ?? 1} onChange={e => set({ quarters: Number(e.target.value), title: `Rotate ${Number(e.target.value) * 90}°` }, `Rotate ${Number(e.target.value) * 90}°`)}>{[1, 2, 3].map(q => <option key={q} value={q}>{q * 90}°</option>)}</select></label>}
      {op.kind === 'step' && <label className="param"><span>Step</span><select value={op.step} onChange={e => set({ step: e.target.value, title: STEP_CHOICES.find(x => x[0] === e.target.value)?.[1] }, 'Changed the step')}>{STEP_CHOICES.map(([k, t]) => <option key={k} value={k}>{t}</option>)}</select></label>}
      {op.kind === 'parallel' && <label className="param"><span>Line between groups</span><select aria-label="Line between groups" value={op.line ?? 0} onChange={e => set({ line: Number(e.target.value) }, `Moved the line to ${Number(e.target.value) / 10} cm`)}>{[-1500, -300, 0, 1500].map(q => <option key={q} value={q}>{q / 10} cm from centre</option>)}</select></label>}
      {op.kind !== 'step' && <label className="param"><span>Counts</span><select value={op.counts ?? 8} onChange={e => set({ counts: Number(e.target.value) }, `${Number(e.target.value)} counts`)}>{COUNTS.map(c => <option key={c}>{c}</option>)}</select></label>}
    </div>
    {first && <div className="contract">
      <div className={`c-row ${link}`}><div className="c-h"><Dot s={link} />Requires</div><p>{first.requires}</p>{link === 'broken' && <p className="c-why"><b>Not met.</b> {first.why}.</p>}</div>
      <div className={`c-row ${stepStatus(kernel, last)}`}><div className="c-h"><Dot s={stepStatus(kernel, last)} />Guarantees</div><p>{last.ensures}</p></div>
      <div className="c-how">{first.opKind === 'rule' ? 'Proved by a rule about the starting places: no curve is examined.' : 'Lean checks these exact paths, at every moment.'}</div>
    </div>}
    <div className="op-actions">
      <button className="btn ghost sm" disabled={oi === 0} onClick={() => { onChange(moveOp(program, si, oi, -1), 'Moved a movement earlier'); onSelect(si, oi - 1) }}>Earlier</button>
      <button className="btn ghost sm" disabled={oi === program.sections[si].ops.length - 1} onClick={() => { onChange(moveOp(program, si, oi, 1), 'Moved a movement later'); onSelect(si, oi + 1) }}>Later</button>
      <span className="spacer" />
      <button className="btn ghost sm" onClick={() => onChange(setOp(program, si, oi, null), `Removed ${op.title}`)}>Remove</button>
    </div>
  </div>
}
