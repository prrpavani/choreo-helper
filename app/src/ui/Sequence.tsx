import { useState } from 'react'
import { OP_KINDS, ProgramDef, ProgramReport, SHAPE_NAME, STATUS_WORD, Status, opStatus, stepsOfOp, surfaceOf } from '../lib/program'
import { KernelState } from './ProofRail'

export const Dot = ({ s }: { s: Status }) => <span className={`dot ${s}`} title={STATUS_WORD[s]} aria-label={STATUS_WORD[s]} />

/** The routine as what it is: a sequence of operations. Select one to see and change it. */
export function Sequence({ program, report, kernel, selected, onSelect, onAdd }: { program: ProgramDef; report: ProgramReport | null | undefined; kernel: KernelState; selected: [number, number] | null; onSelect: (si: number, oi: number) => void; onAdd: (kind: string) => void }) {
  const [adding, setAdding] = useState(false)
  return <div className="seq" aria-label="Choreography sequence">
    <div className="seq-start"><span>Begin in</span><b>{SHAPE_NAME[program.start] ?? program.start}</b></div>
    {program.sections.map((sec, si) => <div className="seq-section" key={`${si}${sec.name}`}>
      <div className="seq-name">{sec.name}</div>
      <div className="seq-ops">{sec.ops.map((op, oi) => { const st = opStatus(kernel, stepsOfOp(report, surfaceOf(program, si, oi))), on = selected?.[0] === si && selected?.[1] === oi
        return <button key={oi} className={`seq-op ${on ? 'on' : ''} ${st}`} data-op={op.kind} aria-pressed={on} onClick={() => onSelect(si, oi)}><Dot s={st} /><b>{op.title ?? op.kind}</b><span>{op.counts ? `${op.counts} counts` : '8 counts'}</span></button> })}</div>
    </div>)}
    <div className="seq-add">
      <button className="seq-plus" aria-expanded={adding} aria-label="Add an operation" onClick={() => setAdding(v => !v)}>＋</button>
      {adding && <div className="seq-menu" role="menu">{OP_KINDS.map(k => <button key={k.kind} role="menuitem" onClick={() => { setAdding(false); onAdd(k.kind) }}><b>{k.title}</b><span>{k.text}</span></button>)}</div>}
    </div>
  </div>
}
