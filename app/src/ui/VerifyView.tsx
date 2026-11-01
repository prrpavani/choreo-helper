import { useEffect, useState } from 'react'
import { BRIDGE, ProgramDef, ProgramReport, STATUS_WORD, Status, TRANSFORMS, flatOps, opStatus, stepStatus, stepsOfOp, surfaceOf, linkStatus } from '../lib/program'
import { Report, fmtTime } from '../lib/routine'
import { KernelState } from './ProofRail'
import { Dot } from './Sequence'

interface Obligation { id: string; name: string; text: string; status: Status; theorem: string; assumptions?: string; extra?: React.ReactNode }

/** A real declaration from the Lean files. If it isn't there, that is what it says. */
export function Declaration({ name, proofId }: { name: string; proofId: string }) {
  const [d, setD] = useState<{ file: string; line: number; text: string } | null | 'none'>(null)
  useEffect(() => { let live = true; fetch(`/api/theorem/${encodeURIComponent(name)}?proof=${proofId}`).then(r => r.json()).then(x => { if (live) setD(x ?? 'none') }).catch(() => { if (live) setD('none') }); return () => { live = false } }, [name, proofId])
  if (d === null) return <p className="lp-not">Looking it up…</p>
  if (d === 'none') return <p className="lp-not">No declaration named <code>{name}</code> exists for this version.</p>
  return <><pre className="lp-pre">{d.text}</pre><p className="lp-not">{d.file}, line {d.line}</p></>
}
function Item({ o, proofId }: { o: Obligation; proofId: string }) {
  return <details className={`ob ${o.status}`} data-ob={o.id}>
    <summary><Dot s={o.status} /><b>{o.name}</b><em>{STATUS_WORD[o.status]}</em></summary>
    <div className="ob-body"><p>{o.text}</p>{o.extra}{o.assumptions && <p className="lp-not"><b>Assumes:</b> {o.assumptions}</p>}<div className="lp-th"><span>Lean</span><code>{o.theorem}</code></div><Declaration name={o.theorem} proofId={proofId} /></div>
  </details>
}
const Group = ({ title, sub, items, proofId }: { title: string; sub: string; items: Obligation[]; proofId: string }) => items.length === 0 ? null : <section className="ob-group"><h3>{title}</h3><p className="ob-sub">{sub}</p>{items.map(o => <Item key={o.id} o={o} proofId={proofId} />)}</section>

/** What is proved, organised by what it means. Every status comes from the kernel. */
export function VerifyView({ program, programReport, report, kernel, transform, onTransform, onGenerate }: { program: ProgramDef | null; programReport: ProgramReport | null | undefined; report: Report; kernel: KernelState; transform: string; onTransform: (k: string) => void; onGenerate: () => void }) {
  const running = kernel.status === 'running', stale = kernel.status === 'not_checked', failed = kernel.status === 'error' || kernel.status === 'timeout'
  const steps = programReport?.steps ?? []
  const contracts: Obligation[] = steps.filter((s, i) => i === 0 || s.surface !== steps[i - 1].surface || s.opKind === 'exact').map(s => ({ id: `step${s.index}`, name: s.name, text: s.ensures, status: stepStatus(kernel, s), theorem: `step${s.index}_ok`, assumptions: s.requires, extra: s.why ? <p className="c-why"><b>Not met.</b> {s.why}.</p> : null }))
  const brokenSteps = steps.filter(s => linkStatus(kernel, s) === 'broken')
  const comp: Obligation[] = program ? [
    ...brokenSteps.map(s => ({ id: `broken${s.index}`, name: `${s.name} can't follow what comes before it`, text: `${s.why}. This is a broken relationship between two movements. It is not a claim that anyone collides: that is judged separately, below.`, status: 'broken' as Status, theorem: `link${s.index}_broken` })),
    { id: 'seq', name: 'The composition rule', text: 'If a movement takes P to Q, and the next takes Q to R, then the two together take P to R. This is proved once, for any movements.', status: (kernel.contract?.library ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : 'unknown') as Status, theorem: 'Triple.seq' },
    { id: 'composed', name: 'The whole program', text: kernel.contract?.composed ? 'Each guarantee met the next requirement, so the composition rule applies all the way along, and the whole program holds.' : brokenSteps.length ? 'The chain is broken, so this theorem does not exist for this version.' : 'This theorem does not exist yet for this version.', status: kernel.contract?.composed ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : brokenSteps.length ? 'broken' : 'unknown', theorem: 'program_ok' },
    { id: 'same', name: 'The program is what plays', text: 'The phases this program produces are exactly the phases of the routine on stage: same times, same paths.', status: kernel.contract?.sameRoutine ? 'proved' : running ? 'running' : stale ? 'pending' : 'unknown', theorem: 'program_plays_this_routine' },
  ] : []
  const runs = programReport?.runs ?? []
  const inherited: Obligation[] = runs.length ? [
    { id: 'isometry', name: 'Isometries keep collision freedom', text: 'Translations, rotations and reflections never change a distance. So one that starts collision-free stays collision-free, for any formation.', status: (kernel.contract?.library ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : 'unknown') as Status, theorem: 'isometry_preserves_collision_freedom' },
    { id: 'routine', name: 'So does any routine of them', text: 'However long the routine and in whatever order. Long routines are built from these operations without proving anything again.', status: (kernel.contract?.library ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : 'unknown') as Status, theorem: 'routine_preserves_collision_freedom' },
    ...runs.map((r, k) => ({ id: `run${k}`, name: r.names.length > 3 ? `${r.names[0]} … ${r.names[r.names.length - 1]}` : r.names.join(', then '), text: `Lean checks the ${programReport!.pairs} pairs in the starting formation, once. Because each of these ${r.steps} operations keeps every distance, every later formation is collision-free. No moment of the animation is sampled.`, status: (kernel.contract?.algebra?.includes(k) ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : 'unknown') as Status, theorem: `run${k}_valid` })),
  ] : []
  const exact: Obligation[] = steps.filter(s => s.closest).map(s => { const c = s.closest!, st = stepStatus(kernel, s), witness = kernel.contract?.witnesses?.includes(s.index), cm = Math.round(Math.sqrt(Math.max(0, c.distSq)) / 10), status: Status = witness ? 'refuted' : st === 'broken' || st === 'refuted' ? 'unknown' : st
    return { id: `exact${s.index}`, name: s.name, text: witness ? `${c.names} get too close: ${cm} cm at exactly ${c.uNum}/${c.uDen} of the way through this move. The limit is ${report.config.dmin / 10} cm. This is a concrete collision, proved by Lean.` : status === 'proved' ? `The closest separation is established mathematically over the entire movement, not by checking animation frames. Distance squared becomes a quadratic in how far along the movement the dancers are, and its exact lowest point is ${c.names} at ${cm} cm, ${Math.round(c.uNum / c.uDen * 100)}% of the way through.` : 'Lean has not established this for this version.', status, theorem: witness ? `step${s.index}_collision` : 'linear_pair_safe', assumptions: 'Each dancer walks a straight line from where they stand to their place. Dancers are points.' } })
  const safe = kernel.status === 'verified', move: Status = safe ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : kernel.status === 'refuted' ? 'refuted' : 'unknown'
  const disproved = kernel.contract?.disproved
  // Proved only if the kernel proved the routine. Disproven only for the property its theorem disproves. Otherwise Unknown.
  const rule = (k: string[]): Status => move === 'refuted' ? (disproved && k.includes(disproved.kind) ? 'refuted' : 'unknown') : move
  const first = report.problems.find(p => disproved && p.phase === disproved.phase && p.kind === disproved.kind && p.second !== undefined)
  const geo: Obligation[] = [
    { id: 'gap', name: 'No collisions', text: first && disproved?.kind === 'collision' ? `${first.text}, at ${fmtTime(first.second!, true)}. Lean holds a theorem that this routine is unsafe, from this exact moment.` : `No two dancers are closer than ${report.config.dmin / 10} cm, at any moment. Dancers are points that must keep a gap.`, status: rule(['collision', 'unproved']), theorem: disproved?.kind === 'collision' ? 'routine_is_unsafe' : 'PhaseSpec' },
    { id: 'bounds', name: 'Stays in bounds', text: 'Everyone stays on the stage or in the wings.', status: rule(['offstage']), theorem: 'inRect_sound', assumptions: 'Translation and rotation do not keep this automatically, so Lean checks each dancer\'s path against the edges.' },
    { id: 'speed', name: 'Under the speed limit', text: `Nobody moves faster than ${(report.config.vmax / 1000).toFixed(1)} m/s. If this fails, give the movement more counts.`, status: rule(['fast']), theorem: 'speed_sound' },
    { id: 'joins', name: 'No jumps', text: 'Each movement starts where the last ended, at the same speed.', status: rule([]), theorem: 'joinPath_sound' },
    ...(program?.id === 'the-orbit' ? [{ id: 'orbit', name: 'Each dancer stays on their circle', text: 'While rotating, every dancer stays exactly the same distance from the centre, at every moment, not just at the start and end.', status: (kernel.contract?.library ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : 'unknown') as Status, theorem: 'turn_stays_on_circle' }] : []),
    ...(program?.id === 'fracture-reunion' ? [{ id: 'par', name: 'Groups kept apart by a line', text: 'If one dancer stays on one side of a line and another stays far enough past it, they can never meet. So the two groups need no checks across them.', status: (kernel.contract?.library ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : 'unknown') as Status, theorem: 'par_pair_safe' }] : []),
  ]
  const tf = TRANSFORMS.find(t => t.key === transform)
  return <div className="verify" role="region" aria-label="Verification">
    <header className="vf-head"><div><div className="eyebrow">Verification</div><h2>{running ? 'Lean is checking' : stale ? 'Not checked yet' : safe && (!program || kernel.contract?.composed) ? 'Everything here is proved' : brokenSteps.length && safe ? 'Safe, but the program doesn\'t hold together' : brokenSteps.length ? 'Broken contract, and a real collision' : kernel.status === 'refuted' ? 'Disproven' : 'Unknown'}</h2>
      <p className="ob-sub">About the modelled choreography and the assumptions stated. {kernel.ms ? `Checked in ${(kernel.ms / 1000).toFixed(1)} s.` : ''} {kernel.axioms ? `Rests on Lean's kernel and ${kernel.axioms.join(', ')}.` : ''}</p></div>
      <button className="btn primary sm" disabled={running} onClick={onGenerate}>{running ? 'Checking…' : 'Generate Lean proof'}</button></header>
    {program && <section className="vf-story" aria-label="How the guarantee is built">
      <h3>How this routine is known to be safe</h3>
      <ol className="vf-chain"><li className="vf-start"><span>Start: {program.n} dancers</span><em>{kernel.contract?.algebra?.length ? 'Proved' : 'Unknown'}</em><small>Each pair checked once</small></li>
        {flatOps(program).map(({ op, si, oi }, i) => { const b = BRIDGE[op.kind], st = opStatus(kernel, stepsOfOp(programReport, surfaceOf(program, si, oi))); return <li key={i} className={`chain-${st}`}><span>{op.title ?? op.kind}</span><em>{STATUS_WORD[st]}</em><small>{b?.how === 'inherited' ? 'By a theorem' : b?.how === 'rule' ? 'By a rule' : 'Exact analysis'}</small></li> })}</ol>
      <p className="ob-sub">{!kernel.contract?.composed ? (running ? 'Lean is checking this version.' : stale ? 'This version has not been checked.' : 'This chain does not hold for this version, so no guarantee carries through it. Only the steps marked Proved are established.') : (() => { const ops = flatOps(program), inh = ops.filter(o => BRIDGE[o.op.kind]?.how !== 'exact').length; return inh === ops.length ? `Every movement here follows from a theorem or a simple rule. Lean looks at each pair of dancers once, at the start, and no moment of the animation is sampled. The result holds for ${program.n} dancers because it holds for any number.` : `${inh} of ${ops.length} movements follow from a theorem or a rule. The others have dancers on their own paths, where collisions are possible, so Lean finds the exact closest point of each pair. That covers every instant, not sampled frames.` })()}</p>
    </section>}
    <section className="vf-assume" aria-label="Assumptions"><h3>What this assumes</h3><ul>
      <li>Dancers are points that must keep at least {report.config.dmin / 10} cm between their centres. Arms, costumes and bodies aren't modelled.</li>
      <li>The stage and wings are a rectangle, {(report.config.envelope.xmax - report.config.envelope.xmin) / 1000} m wide and {(report.config.envelope.ymax - report.config.envelope.ymin) / 1000} m deep.</li>
      <li>Nobody moves faster than {(report.config.vmax / 1000).toFixed(1)} m/s, and they follow these exact paths at this tempo. Real dancers drift.</li>
      <li>It rests on Lean's kernel and three standard axioms. It says nothing about whether the routine looks good or fits the music.</li>
    </ul></section>
    <div className="vf-grid">
      <div>
        <Group title="General proofs" sub="Whole-formation moves keep every distance, for any formation. So nothing needs re-checking." items={inherited} proofId={report.proofId} />
        <Group title="Continuous reasoning" sub="Dancers on their own paths can really collide between two valid formations. This covers every instant." items={exact} proofId={report.proofId} />
        <Group title="Composition" sub="Each movement's guarantee gives the next what it needs, so the whole routine inherits them." items={comp} proofId={report.proofId} />
      </div>
      <div>
        <Group title="The whole routine" sub={kernel.contract?.structural ? 'Built from the movements above. No phase of the routine was checked on its own.' : 'At every moment of the routine.'} items={geo} proofId={report.proofId} />
        <Group title="Each movement" sub="What it gives you, given what it needs." items={contracts} proofId={report.proofId} />
        {program && <section className="ob-group"><h3>Transformations</h3><p className="ob-sub">Change the whole routine. Some guarantees carry over by a theorem about any routine. The rest, Lean checks again.</p>
          <div className="tf-buttons"><button className={`chip ${transform === '' ? 'on' : ''}`} onClick={() => onTransform('')}>Original</button>{TRANSFORMS.map(t => <button key={t.key} title={t.text} className={`chip ${transform === t.key ? 'on' : ''}`} onClick={() => onTransform(t.key)}>{t.title}</button>)}</div>
          {tf && <table className="tf-table"><tbody>{tf.rows.map(r => <tr key={r.property}><th>{r.property}</th><td>{r.how === 'theorem' ? <><span className="tf-theorem">By theorem</span> <code>{r.theorem}</code></> : <span className={`tf-recheck ${move}`}>{move === 'proved' ? 'Re-checked: holds' : STATUS_WORD[move]}</span>}<p>{r.note}</p></td></tr>)}</tbody></table>}
        </section>}
      </div>
    </div>
  </div>
}
