import { ProgramDef, ProgramReport, SHAPE_NAME, STATUS_WORD, linkStatus, opStatus, stepStatus, stepsOfOp, surfaceOf } from '../lib/program'
import { KernelState } from './ProofRail'
import { Dot } from './Sequence'

/** The routine as a program: each movement's contract, and whether each one hands on to the next. */
export function Structure({ program, report, kernel, onSelect }: { program: ProgramDef; report: ProgramReport | null | undefined; kernel: KernelState; onSelect: (si: number, oi: number) => void }) {
  return <div className="structure" role="region" aria-label="Program structure">
    <div className="st-head"><div className="eyebrow">The program</div><h2>{program.title}</h2><p>Each movement says what it needs and what it guarantees. A routine holds together when each guarantee gives the next movement what it needs.</p></div>
    <div className="st-begin"><span className="st-num">Begin</span><b>{SHAPE_NAME[program.start] ?? program.start}</b><span className="st-sub">{program.n} dancers</span></div>
    {program.sections.map((sec, si) => <section className="st-section" key={si}>
      <h3>{sec.name}</h3>
      {sec.ops.map((op, oi) => { const steps = stepsOfOp(report, surfaceOf(program, si, oi)), first = steps[0], last = steps[steps.length - 1], s = opStatus(kernel, steps), l = first ? linkStatus(kernel, first) : 'pending'
        return <div key={oi}>
          <div className={`st-link ${l}`} data-link={first?.index}><Dot s={l} /><span>{l === 'broken' ? <><b>Broken link.</b> {first?.why}.</> : l === 'proved' ? 'The previous guarantee gives this movement what it needs.' : STATUS_WORD[l]}</span></div>
          <button className={`st-op ${s}`} data-op={op.kind} onClick={() => onSelect(si, oi)}>
            <div className="st-op-h"><b>{op.title ?? op.kind}</b><span>{op.counts ? `${op.counts} counts` : '8 counts'}</span><em><Dot s={last ? stepStatus(kernel, last) : 'pending'} />{STATUS_WORD[s]}</em></div>
            {first && <div className="st-contract"><div><span>Requires</span>{first.requires}</div><div><span>Guarantees</span>{last.ensures}</div></div>}
          </button>
        </div> })}
    </section>)}
  </div>
}
