import { useEffect, useRef, useState } from 'react'
import { Problem, Report, clearanceSeries, fmtTime } from '../lib/routine'
import { History, HistoryEntry } from './History'
import { Debugger } from './Debugger'
import { SceneData } from '../lib/routine'
import { FailureList } from './FailureCard'
import { Inspector } from './Inspector'

export interface KernelState { status: 'not_checked' | 'running' | 'verified' | 'refuted' | 'not_proved' | 'error' | 'timeout'; phases: number; ms: number; axioms: string[] | null; fingerprintMatch: boolean | null; errors: string[]; rejected: number; parts: { movement: boolean; forgiving?: boolean }; contract?: import('../lib/program').ContractResult; transitions: number[] }

export const RULES = [
  { name: 'swapping_along_a_line_always_collides', title: 'Walking straight at each other always collides', text: 'Two dancers who swap places along the same line are at distance zero halfway through, for any positions. So the first idea could never have worked.' },
  { name: 'passing_through_a_gap_is_safe', title: 'Passing through a gap is always safe', text: "If two dancers keep a side-to-side gap of at least the limit, they can't get too close, however they move front to back. So once the lines slide half a space apart, they can walk through each other." },
  { name: 'different_rows_never_clash', title: 'Dancers in different rows can never clash', text: "If two dancers keep a front-to-back gap of at least the limit, they can't get too close, however fast they cross. So a dancer coming in from the wings along an empty row is safe from everyone in other rows." },
  { name: 'moving_together_keeps_the_gap', title: 'Moving together keeps the shape', text: 'If everyone shifts by the same amount, every gap stays exactly the same at every moment. This is why a whole formation can sway.' },
  { name: 'moves_that_meet_join_smoothly', title: 'Moves that meet join smoothly', text: 'Every move starts and ends at rest, so two moves that meet at a point always join with no jerk.' },
]
function Check({ state }: { state: 'ok' | 'no' | 'wait' }) {
  if (state === 'wait') return <span className="mark wait" aria-label="not proved by the kernel" title="Not proved by the kernel" />
  if (state === 'no') return <span className="mark no" aria-label="failed">✕</span>
  return <span className="mark ok" aria-label="proved">✓</span>
}
export function Section({ title, children, open = true, count }: { title: string; children: React.ReactNode; open?: boolean; count?: string }) {
  return <details className="sec" open={open}><summary><span>{title}</span>{count && <em>{count}</em>}</summary><div className="sec-body">{children}</div></details>
}

export function ProofRail({ report, kernel, onFocus, onUndo, canUndo, onReadProof, selection, onClearSelection, history, currentId, onRestore, onVerify, onApplyScene, crossings, onUseSeconds, settings }: { settings?: React.ReactNode; crossings?: React.ReactNode; onUseSeconds?: (s: number) => void; report: Report; kernel: KernelState; onFocus: (p: Problem) => void; onUndo: () => void; canUndo: boolean; onReadProof: () => void; selection: number[]; onClearSelection: () => void; history: HistoryEntry[]; currentId: number; onRestore: (e: HistoryEntry) => void; onVerify: () => void; onApplyScene: (s: SceneData, change: string) => void }) {
  const first = report.problems.find(p => p.second !== undefined) ?? report.problems[0]
  const running = kernel.status === 'running'
  const railRef = useRef<HTMLElement>(null)
  useEffect(() => { railRef.current?.scrollTo({ top: 0, behavior: 'smooth' }) }, [report.fingerprint, kernel.status])
  type Pane = 'Problem' | 'Crossings' | 'History' | 'Dancer'
  const [pane, setPane] = useState<Pane>('Crossings')
  useEffect(() => { if (selection.length) setPane(p => p === 'Crossings' ? p : 'Dancer'); else setPane(p => p === 'Dancer' ? 'Crossings' : p) }, [selection.join()])
  useEffect(() => { if (kernel.status === 'refuted') setPane('Problem'); else setPane(p => p === 'Problem' ? 'Crossings' : p) }, [kernel.status])
  const panes: Pane[] = [...(kernel.status === 'refuted' ? ['Problem' as Pane] : []), 'Crossings', 'History', ...(selection.length ? ['Dancer' as Pane] : [])]
  return <aside className="rail" ref={railRef} data-fingerprint={report.fingerprint}>
    <Verdict report={report} kernel={kernel} first={first} onFocus={onFocus} onUndo={onUndo} canUndo={canUndo} onReadProof={onReadProof} onVerify={onVerify} onUseSeconds={onUseSeconds} />
    <div className="rail-settings">{settings}</div>
    {(report.dropped?.length ?? 0) > 0 && <p className="rail-note">Left out to fit the time or keep it safe: {report.dropped!.join(', ').toLowerCase()}.</p>}
    <div className="rail-tabs" role="tablist" aria-label="Details">{panes.map(p => <button key={p} role="tab" aria-selected={p === pane} className={p === pane ? 'on' : ''} onClick={() => setPane(p)}>{p}{p === 'History' && history.length > 0 ? ` ${history.length}` : ''}</button>)}</div>
    {pane === 'Problem' && <>
      {report.scene && kernel.status === 'refuted' && <Debugger report={report} scene={report.scene} kernel={kernel} onApply={onApplyScene} onFocus={onFocus} />}
      <FailureList report={report} kernel={kernel} onGo={onFocus} />
    </>}
    {pane === 'Crossings' && crossings}
    {pane === 'History' && <History entries={history.filter(e => e.id === currentId || (e.kernel.status !== 'not_checked' && e.kernel.status !== 'running'))} currentId={currentId} onRestore={onRestore} />}
    {pane === 'Dancer' && selection.length > 0 && <Inspector report={report} kernel={kernel} selection={selection} onClear={onClearSelection} />}
  </aside>
}
function Verdict({ report, kernel, first, onFocus, onUndo, canUndo, onReadProof, onVerify, onUseSeconds }: { onUseSeconds?: (s: number) => void;  report: Report; kernel: KernelState; first?: Problem; onFocus: (p: Problem) => void; onUndo: () => void; canUndo: boolean; onReadProof: () => void; onVerify: () => void }) {
  const total = report.phases.length
  const running = kernel.status === 'running'
  if (report.verdict === 'proved' && kernel.status === 'verified') return <div className="verdict good">
    <h2>Proved.</h2><p>Proven, at every moment.</p>
    <button className="linkish" onClick={onReadProof}>See the proofs</button>
  </div>
  if (kernel.status === 'not_checked') {
    const close = clearanceSeries(report).reduce((a, b) => (b.dist < a.dist ? b : a))
    return <div className="verify-card">
      <div className="v-kicker">Choreography updated</div><h2>Ready to verify</h2>
      <p>Your previous result belongs to an earlier version of this routine. This version is <b>not checked</b>.</p>
      {close.dist < report.config.dmin && <div className="preview-note"><b>Possible spacing problem.</b> {report.names[close.i]} and {report.names[close.j]} look like they get about {Math.round(close.dist / 10)} cm apart near {fmtTime(close.sec, true)}. This is a preview from the browser, not a result from Lean.</div>}
      <div className="v-actions"><button className="btn primary" onClick={onVerify}>Verify choreography</button>{canUndo && <button className="btn ghost" onClick={onUndo}>Undo</button>}</div>
    </div>
  }
  if (kernel.status === 'timeout' || kernel.status === 'error') return <div className="verdict warn">
    <div className="v-kicker">The check didn't finish</div><h2>No verdict</h2>
    <p>{kernel.status === 'timeout' ? 'Lean ran out of time.' : 'Lean stopped with a technical problem.'} This says nothing about your routine, good or bad.</p>
    {kernel.errors[0] && <details className="expert"><summary className="sp-expert">Technical details</summary><pre className="claim-lean" style={{ marginTop: 6 }}>{kernel.errors[0]}</pre></details>}
    {canUndo && <div className="v-actions"><button className="btn ghost" onClick={onUndo}>Undo</button></div>}
  </div>
  if (running) return <div className={`verdict busy ${report.verdict !== 'proved' ? 'warn' : ''}`}>
    <div className="v-kicker">{report.verdict === 'proved' ? "Lean's checker passed it" : "Lean's checker said no"}</div>
    <h2>{report.verdict === 'proved' ? 'Checking' : 'Confirming'}</h2>
    <ul className="steps-live" aria-live="polite"><li className="done">Routine prepared</li><li className="done">Proof file generated for this exact version</li><li className="now">Lean's kernel is checking {total} phases</li><li>Matching the proof to the animation</li></ul>
    
  </div>
  if (report.verdict === 'refuted' && kernel.status === 'refuted') return <div className="verdict bad">
    <h2>Proved unsafe.</h2>
    {first && <p><b>{first.text}.</b></p>}
    <div className="v-actions">{first?.second !== undefined && <button className="btn light" onClick={() => onFocus(first)}>Watch it go wrong</button>}{canUndo && <button className="btn ghost" onClick={onUndo}>Undo</button>}<button className="btn ghost" onClick={onReadProof}>See the proofs</button></div>
  </div>
  return <div className="verdict warn">
    <div className="v-kicker">No proof</div><h2>Not proved.</h2>
    {report.error ? <div className="time-card"><p><b>Too many moves for the time.</b> {report.config.seconds} seconds would make someone break the {(report.config.vmax / 1000).toFixed(1)} m/s speed limit, so Lean won't prove it.</p><p>These moves need at least <b>{fmtTime(report.minSeconds ?? 0)}</b>.</p>{onUseSeconds && report.minSeconds ? <button className="btn primary sm" onClick={() => onUseSeconds(report.minSeconds!)}>Make it {fmtTime(report.minSeconds)}</button> : null}</div>
      : first ? <p>{first.text}.</p>
      : <p>Lean could not confirm this routine, so the app won't call it safe.</p>}
    {canUndo && <div className="v-actions"><button className="btn ghost" onClick={onUndo}>Undo</button></div>}
  </div>
}
