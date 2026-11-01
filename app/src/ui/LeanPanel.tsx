import { useEffect, useMemo, useState } from 'react'
import { Problem, Report, fmtTime, stagesOf } from '../lib/routine'
import { statementFrom } from '../lib/verification'
import { Knows } from './Knows'
import { KernelState } from './ProofRail'
import { Replay } from './Replay'
import { VerificationSummary } from './VerificationSummary'

const THEOREM = 'routine_moves_safely'
/** The four proofs, each in plain words, with the real names in the Lean files. */
const RULES = [
  { name: 'No collisions', kinds: ['collision', 'unproved'], simple: 'Picture a circle around each dancer. No two dancers ever get closer than the gap you chose, at any moment.',
    field: 'PhaseSpec.noCollision', statement: '∀ i j, i ≠ j → ∀ t, 0 ≤ t ≤ 1 →\n  dmin² ≤ dist²(path i, path j, t)', proof: 'Cert.sound',
    fails: 'Lean must name two dancers and one exact moment. It works out their distance at that moment. If it is under the limit, Lean holds a theorem that the routine is unsafe.', failTheorem: 'refute_collision' },
  { name: 'In bounds', kinds: ['offstage'], simple: 'Everyone stays in the allowed area: the stage, plus the wings on each side.',
    field: 'PhaseSpec.onStage', statement: '∀ i, ∀ t, 0 ≤ t ≤ 1 →\n  xmin ≤ x(t) ≤ xmax ∧ ymin ≤ y(t) ≤ ymax', proof: 'inRect_sound',
    fails: 'Lean names one dancer and one exact moment when they are outside the area. That is a theorem that the routine is unsafe.', failTheorem: 'refute_stage' },
  { name: 'Under the speed limit', kinds: ['fast'], simple: 'Nobody has to move faster than the limit to get where they are going. Too many moves in too little time breaks this one.',
    field: 'PhaseSpec.speedLimit', statement: '∀ i, ∀ t, 0 ≤ t ≤ 1 →\n  durDen² · speed²(t) ≤ vmax² · durNum²', proof: 'speed_sound',
    fails: 'The check does not pass, so Lean will not prove the routine, and the app says "Not proved". Lean does not produce a theorem that it is unsafe here. Giving the moves more time fixes it.', failTheorem: null },
  { name: 'No jumps', kinds: [], simple: 'Each move starts where the last one ended, at the same speed. Nobody teleports and nobody jolts.',
    field: 'MovementProved.continuous', statement: 'a.t1 = b.t0 ∧ ∀ i,\n  x_a(1) = x_b(0) ∧ y_a(1) = y_b(0) ∧\n  matching velocity at the join', proof: 'joinPath_sound',
    fails: 'The check does not pass, so Lean will not prove the routine, and the app says "Not proved". Lean rejects a teleport this way.', failTheorem: null },
]
const drift = (r: Report) => r.drift ?? 0
type Tab = 'Explain it' | 'The four proofs' | 'How they fail' | 'Source'
const metres = (d: number) => d >= 1000 ? `${(d / 1000).toFixed(2)} m` : `${Math.round(d / 10)} cm`

function Witness({ p, report, phaseName }: { p: Problem; report: Report; phaseName?: string }) {
  return <dl className="lp-dl witness">
    <dt>Who</dt><dd>{p.i !== undefined ? report.names[p.i] : ''}{p.j !== undefined ? ` and ${report.names[p.j]}` : ''}</dd>
    {phaseName && <><dt>During</dt><dd>{phaseName}</dd></>}
    {p.second !== undefined && <><dt>When</dt><dd>{fmtTime(p.second, true)}{p.tNum !== undefined && p.tDen !== undefined ? `, exactly ${p.tNum}/${p.tDen} of the way through this move` : ''}</dd></>}
    {p.distance !== undefined && <><dt>How close</dt><dd>{metres(p.distance)} apart. The limit is {report.config.dmin / 10} cm.</dd></>}
  </dl>
}

/** Everything about the proofs, explained without asking anyone to read a file. */
export function LeanPanel({ report, kernel, onGenerate }: { report: Report; kernel: KernelState; onGenerate: () => void }) {
  const [tab, setTab] = useState<Tab>('Explain it'), [source, setSource] = useState(''), [statement, setStatement] = useState<string | null>(null), [copied, setCopied] = useState(false)
  useEffect(() => { let live = true; fetch(`/api/proof/${report.proofId}`).then(r => r.text()).then(t => { if (live) { setSource(t); setStatement(statementFrom(t, THEOREM)) } }).catch(() => {}); return () => { live = false } }, [report.proofId])
  const verified = kernel.status === 'verified', refuted = kernel.status === 'refuted'
  // the closest pair in the routine: the example that shows the idea best
  const tightest = useMemo(() => report.phases.filter(p => p.kind !== 'hold' && p.tight).reduce((a, b) => (b.tight.distance < a.tight.distance ? b : a), report.phases.find(p => p.tight) ?? report.phases[0]), [report.fingerprint])
  const closest = useMemo(() => report.phases.some(p => p.tight) ? Math.min(...report.phases.filter(p => p.tight).map(p => p.tight.distance)) : null, [report.fingerprint])
  const pairs = report.config.n * (report.config.n - 1) / 2, checks = pairs * report.phases.length
  const forgive = kernel.parts?.forgiving || (drift(report) > 0 && report.config.dmin - 2 * drift(report) > 0) ? drift(report) / 10 : 0
  const script = `We set out a ${fmtTime(report.config.seconds)} routine for ${report.config.n} dancers, including people coming on and going off. Instead of playing it and looking for problems, we treat every dancer's path as an exact formula. Lean, a proof checker, then shows four things hold at every instant, not just at the moments we looked at: no collisions, everyone in bounds, under the speed limit, and no jumps between moves. If one fails, Lean names the dancers and the exact moment. ${forgive ? ` And real dancers drift, so Lean also proves this: if everyone stays within ${forgive} cm of the plan, in any way at all, everyone stays at least ${(report.config.dmin - 2 * drift(report)) / 10} cm apart. There are infinitely many ways to drift, so no simulation can try them all. That part is a real proof, not a calculation.` : ''} We treat dancers as points that must keep a gap.`
  return <div className="lean-panel" role="region" aria-label="The proofs">
    <header className="lp-head">
      <div className="lp-tabs" role="tablist">{(['Explain it', 'The four proofs', 'How they fail', 'Source'] as Tab[]).map(t => <button key={t} role="tab" aria-selected={t === tab} className={t === tab ? 'on' : ''} onClick={() => setTab(t)}>{t}</button>)}</div>
      <div className="lp-actions"><button className="btn primary sm" disabled={kernel.status === 'running'} onClick={onGenerate}>{kernel.status === 'running' ? 'Lean is checking…' : 'Generate Lean proof'}</button></div>
    </header>
    <section className={`lp-result ${verified ? 'good' : refuted ? 'bad' : ''}`} aria-label="Lean's result">
      <div className="lp-big"><span>Checked by Lean's kernel</span><strong>{verified ? 'Proved' : refuted ? 'Proved unsafe' : kernel.status === 'running' ? 'Checking' : kernel.status === 'not_checked' ? 'Not checked' : kernel.status === 'not_proved' ? 'Not proved' : 'No verdict'}</strong></div>
      <div className="lp-stat"><b>{fmtTime(report.config.seconds)}</b><span>every moment covered</span></div>
      <div className="lp-stat"><b>{report.phases.length}</b><span>phases</span></div>
      <div className="lp-stat"><b>{pairs}</b><span>pairs of dancers in each</span></div>
      <div className="lp-stat"><b>{kernel.ms ? `${(kernel.ms / 1000).toFixed(1)} s` : '…'}</b><span>to check</span></div>
      <div className="lp-stat"><b>{closest === null ? '…' : metres(closest)}</b><span>closest pass, limit {report.config.dmin / 10} cm</span></div>
    </section>
    {tab === 'Explain it' && <div className="lp-explain">
      <section className="lp-say"><h3>Say this</h3><p>{script}</p><button className="btn sm" onClick={() => { navigator.clipboard?.writeText(script); setCopied(true); setTimeout(() => setCopied(false), 1500) }}>{copied ? 'Copied' : 'Copy'}</button></section>
      <ol className="lp-steps">
        <li><b>A video can't show safety.</b> Watching checks the moments you happen to see. Two dancers could brush past each other between frames. We want an answer for every instant, and there are infinitely many of those.</li>
        <li><b>So the paths are exact formulas.</b> Every dancer's route is a formula with whole numbers in it, nothing rounded. That means the distance between any two dancers, over time, is a formula too.</li>
        <li><b>One piece of maths covers every instant.</b> A formula like this stays above its lowest "control number", and those are quick to compute. If every control number is above the limit, the curve can't dip below it, however many instants there are. See the picture.</li>
        <li><b>Lean does it for everything.</b> This routine has {report.phases.length} phases and {pairs} pairs of dancers, so about {checks.toLocaleString()} pair checks, plus bounds, speed and joins.</li>
        {forgive > 0 && <li><b>Real dancers drift, and that is proved too.</b> Checking the planned paths can be done by calculation. But nobody performs exactly to plan, and there are infinitely many ways to be off. The forgiving theorem covers all of them: anyone can be up to {forgive} cm off, at any moment, in any way, and everyone stays {(report.config.dmin - 2 * drift(report)) / 10} cm apart. The plan keeps {report.config.dmin / 10} cm, and each dancer can use up {forgive} cm of that.</li>}
        <li><b>You don't have to trust our code.</b> The planner only proposes. Lean's kernel, a small checker that many people rely on, re-does the reasoning. A bug in the planner can make a bad routine, but it can't make a false proof.</li>
        <li><b>A failure is just as exact.</b> If a rule breaks, Lean names who and when. See How they fail.</li>
        <li><b>What it doesn't claim.</b> Dancers are points that must keep a gap. It says nothing about arms, balance, whether it fits the music, or whether it looks good.</li>
      </ol>
      {tightest?.tight && <section className="lp-card lp-pic"><h3>The picture, from your routine</h3><Knows phase={tightest} limit={report.config.dmin} /></section>}
    </div>}
    {tab === 'The four proofs' && <div>
      <VerificationSummary report={report} kernel={kernel} />
      <div style={{ height: 12 }} />
      <div className="lp-rules">{RULES.map(r => { const bad = r.kinds.some(k => report.problems.some(p => p.kind === k)) || (r.name === 'No jumps' && report.checked?.movementJoins === false), stale = kernel.status === 'running' || kernel.status === 'not_checked', mark = bad && !stale ? 'no' : verified ? 'ok' : 'wait'
        return <article className="lp-rule" key={r.name}><h4 className="lp-rule-h"><span className={`mark ${mark}`}>{mark === 'ok' ? '✓' : mark === 'no' ? '✕' : ''}</span>{r.name}<em>{mark === 'ok' ? 'Proved' : mark === 'no' ? 'Fails' : stale ? 'Not checked' : 'Not proved'}</em></h4>
          <p>{r.simple}</p>
          <div className="lp-th"><span>The theorem</span><code>{r.field}</code></div>
          <pre className="lp-pre">{r.statement}</pre>
          <div className="lp-th"><span>Proved using</span><code>{r.proof}</code></div>
        </article> })}</div>
      {forgive > 0 && <article className="lp-rule lp-forgive"><h4 className="lp-rule-h"><span className={`mark ${kernel.parts?.forgiving ? 'ok' : verified ? 'no' : 'wait'}`}>{kernel.parts?.forgiving ? '✓' : ''}</span>Forgiving<em>{kernel.parts?.forgiving ? 'Proved' : kernel.status === 'running' ? 'Checking' : 'Not proved'}</em></h4>
        <p>Whatever real dancers do, if each stays within {forgive} cm of where the plan puts them, every pair stays at least {(report.config.dmin - 2 * drift(report)) / 10} cm apart. "Whatever" means any performance at all, which is infinitely many, so this can't be checked by trying them.</p>
        <div className="lp-th"><span>The theorem</span><code>routine_forgiving : Routine.Forgiving K routine ({report.config.dmin - 2 * drift(report)}) ({drift(report)})</code></div>
        <pre className="lp-pre">{'∀ real performance,\n  (∀ T i, |real i T − plan i T| ≤ e) →\n  ∀ T, i ≠ j → B ≤ |real i T − real j T|'}</pre>
        <div className="lp-th"><span>Proved using</span><code>drift_keeps_gap</code></div>
      </article>}
      <section className="lp-card" style={{ marginTop: 12 }}><h3>The theorem for this exact routine</h3>
        {statement ? <><pre className="lp-pre">{statement}</pre><p className="lp-not">It says: all four rules hold for this routine, and "K" means it holds for every instant, including real-valued time. It depends only on {(kernel.axioms ?? []).join(', ') || 'the standard axioms'}.</p></> : <p className="lp-not">{verified ? '' : 'No such theorem exists for this version, because Lean has not proved it.'}</p>}
      </section>
      <section className="lp-card" style={{ marginTop: 12 }}><h3>Move by move</h3>
        <table className="lp-table"><thead><tr><th>Move</th><th>Time</th><th>Theorems</th><th /></tr></thead><tbody>
          {stagesOf(report).map(st => { const ok = report.phases.slice(st.firstPhase, st.lastPhase + 1).every(p => p.ok), name = st.firstPhase === st.lastPhase ? `ph${st.firstPhase}_ok` : `ph${st.firstPhase}_ok to ph${st.lastPhase}_ok`
            return <tr key={st.index}><td>{st.name}</td><td>{fmtTime(st.from)}</td><td><code>{name}</code></td><td><span className={`mark ${verified ? 'ok' : ok ? 'wait' : 'no'}`}>{verified ? '✓' : ok ? '' : '✕'}</span></td></tr> })}
        </tbody></table>
      </section>
    </div>}
    {tab === 'How they fail' && <div>
      {report.problems.length > 0 && !(!refuted && kernel.status !== 'not_proved') && <section className="lp-card lp-bad"><h3>This routine fails</h3>
        {refuted && <div className="lp-th"><span>Lean holds the theorem</span><code>routine_is_unsafe : ¬ RoutineSpec Rat routine</code></div>}
        {report.problems.slice(0, 3).map((p, i) => <div key={i}><p><b>{p.text}.</b></p><Witness p={p} report={report} phaseName={report.phases[p.phase]?.label} /></div>)}
      </section>}
      {report.rejected.length > 0 && <section className="lp-card"><h3>Real failures from making this routine</h3><p>The planner tried these first. Lean found the exact problem, so they were replaced.</p>
        {report.rejected.map((idea, k) => <div className="rej" key={k}><Replay idea={idea} report={report} /><div className="rej-t"><b>{idea.title}.</b> {idea.why}.
          {idea.problems[0] && <Witness p={idea.problems[0]} report={report} />}
          {k < kernel.rejected && <div className="lp-th"><span>Lean holds the theorem</span><code>idea{k}_is_unsafe : ¬ PhaseSpec Rat idea{k}Cfg idea{k}</code></div>}
        </div></div>)}
      </section>}
      <div className="lp-rules" style={{ marginTop: 12 }}>{RULES.map(r => <article className="lp-rule" key={r.name}><h4 className="lp-rule-h">{r.name}</h4><p>{r.fails}</p>{r.failTheorem && <div className="lp-th"><span>The theorem</span><code>{r.failTheorem}</code></div>}</article>)}</div>
      {!report.problems.length && !report.rejected.length && <p className="lp-not" style={{ marginTop: 12 }}>Nothing failed while making this routine. Drag a dancer in Formations onto someone's path to watch Lean catch it.</p>}
    </div>}
    {tab === 'Source' && <section className="lp-card"><h3>The file Lean checked</h3>
      <dl className="lp-dl"><dt>Kernel</dt><dd>{verified ? 'Accepted' : kernel.status === 'running' ? 'Still running' : refuted ? 'Proved unsafe' : kernel.status === 'not_checked' ? 'Not checked yet' : 'No proof'}{kernel.ms ? `, ${(kernel.ms / 1000).toFixed(1)} s` : ''}</dd><dt>Fingerprint</dt><dd><code className="fp-code">{report.fingerprint}</code>{kernel.fingerprintMatch ? ', matches the animation' : ''}</dd></dl>
      <a className="btn sm" style={{ margin: '8px 0' }} download={`${report.proofId}.lean`} href={`/api/proof/${report.proofId}`}>Download the .lean file</a>
      <div className="xsource">{source.split('\n').slice(0, 800).map((l, i) => `${String(i + 1).padStart(4)}  ${l.length > 150 ? l.slice(0, 150) + ' …' : l}`).join('\n')}</div>
    </section>}
  </div>
}
