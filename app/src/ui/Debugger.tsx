import { useEffect, useRef, useState } from 'react'
import { clock } from '../lib/clock'
import { judge, KernelAnswer } from '../lib/kernelCall'
import { loadTeam } from '../lib/progress'
import { Candidate, candidatesFor } from '../lib/repair'
import { Problem, Report, SceneData, bpmOf, fmtTime } from '../lib/routine'
import { KernelState } from './ProofRail'

type Row = Candidate & { answer?: KernelAnswer }
/** The choreography debugger: step through the failure, then have Lean judge some possible fixes. */
export function Debugger({ report, scene, onApply, onFocus }: { report: Report; scene: SceneData; kernel: KernelState; onApply: (s: SceneData, change: string) => void; onFocus: (p: Problem) => void }) {
  const p = report.problems.find(q => q.kind === 'collision')
  const [rows, setRows] = useState<Row[] | null>(null), [running, setRunning] = useState(false)
  const stop = useRef<AbortController | null>(null)
  useEffect(() => () => { stop.current?.abort(); clock.debug = false }, [])
  useEffect(() => { setRows(null); setRunning(false); stop.current?.abort() }, [report.fingerprint])
  if (!p || p.second === undefined) return null
  const beat = 60 / bpmOf(report)
  const step = (n: number) => { clock.debug = true; clock.pause(); clock.seek(clock.t + n * beat) }
  const find = async () => {
    const list = candidatesFor(report, scene), ctl = new AbortController(); stop.current = ctl
    setRows(list); setRunning(true)
    for (let i = 0; i < list.length; i++) {
      if (ctl.signal.aborted) return
      try {
        const answer = await judge({ prompt: report.plan.heard.join(' '), scene: list[i].scene, gap: report.config.dmin, names: loadTeam().members }, ctl.signal)
        setRows(r => r && r.map((x, k) => k === i ? { ...x, answer } : x))
      } catch { if (ctl.signal.aborted) return; setRows(r => r && r.map((x, k) => k === i ? { ...x, answer: { status: 'error', report: null, parts: {}, ms: 0 } } : x)) }
    }
    setRunning(false)
  }
  const pill = (a?: KernelAnswer) => !a ? <span className="pill wait">Lean checking</span> : a.status === 'verified' ? <span className="pill ok">Proved</span> : a.status === 'refuted' ? <span className="pill no">Refuted</span> : a.status === 'not_proved' ? <span className="pill mute">Not proved</span> : <span className="pill mute">No verdict</span>
  const sorted = rows ? [...rows].sort((a, b) => Number(b.answer?.status === 'verified') - Number(a.answer?.status === 'verified')) : null
  return <details className="sec" open>
    <summary><span>Debug this</span><em>{fmtTime(p.second, true)}</em></summary>
    <div className="sec-body">
      <p className="rail-p">Step through the moment like a debugger. The true positions show, with no cartoon.</p>
      <div className="scrub">
        <button className="mini" onClick={() => step(-1)}>Back a count</button>
        <button className="mini" onClick={() => { clock.debug = true; clock.pause(); clock.seek(p.second!) }}>The exact moment</button>
        <button className="mini" onClick={() => step(1)}>Forward a count</button>
        <button className="mini" onClick={() => { clock.debug = false; onFocus(p) }}>Watch it go wrong</button>
      </div>
      {!rows && <button className="btn primary sm" style={{ marginTop: 10 }} onClick={find}>Find the smallest fix</button>}
      {sorted && <><p className="rail-p small" style={{ marginTop: 10, marginBottom: 0 }}>Choreo suggests. Lean decides: {running ? 'each idea is being proved on its own.' : 'each idea was proved on its own.'}</p>
        <ul className="tool-list">{sorted.map(c => <li key={c.title} className="tool-row"><div className="tr-top"><b>{c.title}</b>{pill(c.answer)}</div><p>{c.detail}{c.answer?.report && c.answer.status === 'verified' ? ` Closest pass ${Math.round(Math.min(...c.answer.report.phases.map(x => x.tight.distance)) / 10)} cm.` : ''}</p>
          {c.answer?.status === 'verified' && <button className="btn sm primary" style={{ marginTop: 6 }} onClick={() => onApply(c.scene, c.title)}>Use this</button>}</li>)}</ul></>}
    </div>
  </details>
}
