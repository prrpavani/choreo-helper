import { useEffect, useState } from 'react'
import { ProgramDef, ProgramReport, STATUS_WORD, Status, TRANSFORMS, stepStatus, linkStatus } from '../lib/program'
import { Report, fmtTime } from '../lib/routine'
import { KernelState } from './ProofRail'
import { Dot } from './Sequence'

interface Obligation { id: string; name: string; text: string; status: Status; theorem: string; assumptions?: string; extra?: React.ReactNode }

/** A real declaration from the Lean files. If it isn't there, that is what it says. */
export function Declaration({ name, proofId }: { name: string; proofId: string }) {
  const [d, setD] = useState<{ file: string; line: number; text: string } | null | 'none'>(null)
  useEffect(() => { let live = true; fetch(`/api/theorem/${encodeURIComponent(name)}?proof=${proofId}`).then(r => r.ok ? r.json() : 'none').then(x => { if (live) setD(x) }).catch(() => { if (live) setD('none') }); return () => { live = false } }, [name, proofId])
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
  const contracts: Obligation[] = steps.filter((s, i) => i === 0 || s.surface !== steps[i - 1].surface || s.opKind === 'checked').map(s => ({ id: `step${s.index}`, name: s.name, text: s.ensures, status: stepStatus(kernel, s), theorem: `step${s.index}_ok`, assumptions: s.requires, extra: s.why ? <p className="c-why"><b>Not met.</b> {s.why}.</p> : null }))
  const brokenSteps = steps.filter(s => linkStatus(kernel, s) === 'broken')
  const comp: Obligation[] = program ? [
    ...brokenSteps.map(s => ({ id: `broken${s.index}`, name: `${s.name} can't follow what comes before it`, text: `${s.why}. This is a broken relationship between two movements. It is not a claim that anyone collides: that is judged separately, below.`, status: 'broken' as Status, theorem: `link${s.index}_broken` })),
    { id: 'seq', name: 'The composition rule', text: 'If a movement takes P to Q, and the next takes Q to R, then the two together take P to R. This is proved once, for any movements.', status: 'proved', theorem: 'Triple.seq' },
    { id: 'composed', name: 'The whole program', text: kernel.contract?.composed ? 'Each guarantee met the next requirement, so the composition rule applies all the way along, and the whole program holds.' : brokenSteps.length ? 'The chain is broken, so this theorem does not exist for this version.' : 'This theorem does not exist yet for this version.', status: kernel.contract?.composed ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : brokenSteps.length ? 'broken' : 'unknown', theorem: 'program_ok' },
    { id: 'same', name: 'The program is what plays', text: 'The phases this program produces are exactly the phases of the routine on stage: same times, same paths.', status: kernel.contract?.sameRoutine ? 'proved' : running ? 'running' : stale ? 'pending' : 'unknown', theorem: 'program_plays_this_routine' },
  ] : []
  const runs = programReport?.runs ?? []
  const inherited: Obligation[] = runs.length ? [
    { id: 'isometry', name: 'Isometries keep collision freedom', text: 'Translations, rotations and reflections never change a distance. So one that starts collision-free stays collision-free, for any formation.', status: 'proved', theorem: 'isometry_preserves_collision_freedom' },
    { id: 'routine', name: 'So does any routine of them', text: 'However long the routine and in whatever order. Long routines are built from these operations without proving anything again.', status: 'proved', theorem: 'routine_preserves_collision_freedom' },
    ...runs.map((r, k) => ({ id: `run${k}`, name: r.names.length > 3 ? `${r.names[0]} … ${r.names[r.names.length - 1]}` : r.names.join(', then '), text: `Lean checks the ${programReport!.pairs} pairs in the starting formation, once. Because each of these ${r.steps} operations keeps every distance, every later formation is collision-free. No moment of the animation is sampled.`, status: (kernel.contract?.algebra?.includes(k) ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : 'unknown') as Status, theorem: `run${k}_valid` })),
  ] : []
  const safe = kernel.status === 'verified', move: Status = safe ? 'proved' : running ? 'running' : stale ? 'pending' : failed ? 'error' : kernel.status === 'refuted' ? 'refuted' : 'unknown'
  const has = (k: string) => report.problems.some(p => p.kind === k), rule = (k: string[]): Status => (move === 'refuted' || move === 'unknown') && !k.some(has) ? (safe ? 'proved' : 'unknown') : move
  const first = report.problems.find(p => p.second !== undefined)
  const geo: Obligation[] = [
    { id: 'gap', name: 'No collisions', text: first && kernel.status === 'refuted' ? `${first.text}, at ${fmtTime(first.second!, true)}. Lean holds a theorem that this routine is unsafe, from this exact moment.` : `No two dancers are closer than ${report.config.dmin / 10} cm, at any moment. Dancers are points that must keep a gap.`, status: rule(['collision', 'unproved']), theorem: kernel.status === 'refuted' ? 'routine_is_unsafe' : 'PhaseSpec' },
    { id: 'bounds', name: 'Stays in bounds', text: 'Everyone stays on the stage or in the wings.', status: rule(['offstage']), theorem: 'inRect_sound' },
    { id: 'speed', name: 'Under the speed limit', text: `Nobody moves faster than ${(report.config.vmax / 1000).toFixed(1)} m/s. If this fails, give the movement more counts.`, status: rule(['fast']), theorem: 'speed_sound' },
    { id: 'joins', name: 'No jumps', text: 'Each movement starts where the last ended, at the same speed.', status: report.checked?.movementJoins === false ? 'unknown' : move === 'refuted' ? 'proved' : move, theorem: 'joinPath_sound' },
    ...(program?.id === 'the-orbit' ? [{ id: 'orbit', name: 'Each dancer stays on their circle', text: 'While rotating, every dancer stays exactly the same distance from the centre, at every moment, not just at the start and end.', status: move, theorem: 'orbit_sound' }] : []),
    ...(program?.id === 'fracture-reunion' ? [{ id: 'par', name: 'Groups kept apart by a line', text: 'If one dancer stays on one side of a line and another stays far enough past it, they can never meet. So the two groups need no checks across them.', status: 'proved' as Status, theorem: 'par_pair_safe' }] : []),
  ]
  const tf = TRANSFORMS.find(t => t.key === transform)
  return <div className="verify" role="region" aria-label="Verification">
    <header className="vf-head"><div><div className="eyebrow">Verification</div><h2>{running ? 'Lean is checking' : stale ? 'Not checked yet' : safe && (!program || kernel.contract?.composed) ? 'Everything here is proved' : brokenSteps.length && safe ? 'Safe, but the program doesn\'t hold together' : brokenSteps.length ? 'Broken contract, and a real collision' : kernel.status === 'refuted' ? 'Proved unsafe' : failed ? 'No verdict' : 'Not proved'}</h2>
      <p className="ob-sub">About the modelled choreography and the assumptions stated. {kernel.ms ? `Checked in ${(kernel.ms / 1000).toFixed(1)} s.` : ''} {kernel.axioms ? `Rests on Lean's kernel and ${kernel.axioms.join(', ')}.` : ''}</p></div>
      <button className="btn primary sm" disabled={running} onClick={onGenerate}>{running ? 'Checking…' : 'Generate Lean proof'}</button></header>
    <div className="vf-grid">
      <div>
        <Group title="Inherited from the algebra" sub="Guarantees that follow from what these operations are." items={inherited} proofId={report.proofId} />
        <Group title="Composition" sub="Do these movements fit together?" items={comp} proofId={report.proofId} />
        <Group title="Geometry" sub="At every moment of the routine." items={geo} proofId={report.proofId} />
      </div>
      <div>
        <Group title="Movement contracts" sub="What each movement guarantees, given what it requires." items={contracts} proofId={report.proofId} />
        {program && <section className="ob-group"><h3>Transformations</h3><p className="ob-sub">Change the whole routine. Some guarantees carry over by a theorem about any routine. The rest, Lean checks again.</p>
          <div className="tf-buttons"><button className={`chip ${transform === '' ? 'on' : ''}`} onClick={() => onTransform('')}>Original</button>{TRANSFORMS.map(t => <button key={t.key} title={t.text} className={`chip ${transform === t.key ? 'on' : ''}`} onClick={() => onTransform(t.key)}>{t.title}</button>)}</div>
          {tf && <table className="tf-table"><tbody>{tf.rows.map(r => <tr key={r.property}><th>{r.property}</th><td>{r.how === 'theorem' ? <><span className="tf-theorem">By theorem</span> <code>{r.theorem}</code></> : <span className={`tf-recheck ${move}`}>{move === 'proved' ? 'Re-checked: holds' : STATUS_WORD[move]}</span>}<p>{r.note}</p></td></tr>)}</tbody></table>}
        </section>}
      </div>
    </div>
  </div>
}
