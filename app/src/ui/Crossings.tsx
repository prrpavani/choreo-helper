import { useMemo } from 'react'
import { clock } from '../lib/clock'
import { Crossing, crossingsOf } from '../lib/crossings'
import { Problem, Report, fmtTime } from '../lib/routine'
import { KernelState } from './ProofRail'

const metres = (d: number) => d >= 1000 ? `${(d / 1000).toFixed(1)} m` : `${Math.round(d / 10)} cm`
const names = (r: Report, l: number[]) => l.length > 3 ? `${l.length} dancers` : l.map(i => r.names[i]).join(', ')

/** Everyone coming on and going off, and whether they can run into each other. The point of the whole app. */
export function Crossings({ report, kernel, onWatch, onCrash, onFocus }: { report: Report; kernel: KernelState; onWatch: (c: Crossing) => void; onCrash: (c: Crossing) => void; onFocus: (p: Problem) => void }) {
  const list = useMemo(() => crossingsOf(report), [report.fingerprint])
  if (!list.length) return null
  const verified = kernel.status === 'verified', failed = kernel.status === 'refuted'
  const bad = (c: Crossing) => failed && report.problems.find(p => p.kind === 'collision' && p.second !== undefined && p.second >= c.from && p.second <= c.to)
  return <section className="crossings" aria-label="Coming on and going off">
    <h3>Coming on and going off</h3>
    {list.map(c => { const hit = bad(c)
      return <div className={`cross ${hit ? 'bad' : ''}`} key={c.index}>
        <div className="cross-top"><span className={`mark ${hit ? 'no' : verified ? 'ok' : 'wait'}`}>{hit ? '✕' : verified ? '✓' : ''}</span><b>{c.title}</b><span className="cross-at">{fmtTime(c.from)}</span></div>
        <p>{c.goers.length > 0 && <>{names(report, c.goers)} going off. </>}{c.comers.length > 0 && <>{names(report, c.comers)} coming on. </>}
          {hit ? <b>{hit.text}.</b> : verified ? <>Lean proved they never get closer than {report.config.dmin / 10} cm. Closest: {report.names[c.a]} and {report.names[c.b]}, {metres(c.closest)}.</> : <>Closest so far: {report.names[c.a]} and {report.names[c.b]}, {metres(c.closest)}. Not proved yet.</>}</p>
        <div className="cross-actions">
          {hit ? <button className="btn sm danger" onClick={() => onFocus(hit)}>Watch the crash</button> : <button className="btn sm" onClick={() => onWatch(c)}>Watch it</button>}
          {c.idea && <button className="btn sm danger" onClick={() => onCrash(c)}>See the crash Lean rejected</button>}
        </div>
      </div> })}
  </section>
}
export const seekTo = (sec: number) => { clock.pause(); clock.seek(Math.max(0, sec)); clock.play() }
