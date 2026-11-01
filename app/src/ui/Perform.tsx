import { useEffect, useState } from 'react'
import { clock } from '../lib/clock'
import { ProgramReport, sectionTimes } from '../lib/program'
import { Report, fmtTime, stagesOf } from '../lib/routine'
import { Theatre3D } from '../views/Theatre3D'
import { KernelState } from './ProofRail'

/** The routine on stage. Loop a section, slow it down, and see what's proved when it ends. */
export function Perform({ report, kernel, program, title }: { report: Report; kernel: KernelState; program: ProgramReport | null | undefined; title: string }) {
  const sections = program ? sectionTimes(report, program.steps) : stagesOf(report).filter(s => s.kind !== 'hold').map(s => ({ name: s.name, from: s.from, to: s.to }))
  const [loop, setLoop] = useState<number | null>(null), [rate, setRate] = useState(1), [ended, setEnded] = useState(false), [now, setNow] = useState(0)
  useEffect(() => { let raf = 0; const f = () => { raf = requestAnimationFrame(f); setNow(clock.t); setEnded(clock.t >= report.config.seconds - .05 && !clock.playing) }; f(); return () => cancelAnimationFrame(raf) }, [report.fingerprint])
  useEffect(() => () => { clock.setLoop(null); clock.setRate(1) }, [])
  const pick = (i: number | null) => { setLoop(i); if (i === null) clock.setLoop(null); else { clock.setLoop({ from: sections[i].from, to: sections[i].to }); clock.seek(sections[i].from); clock.play() } }
  const speed = (r: number) => { setRate(r); clock.setRate(r) }
  const beat = Math.floor(now * report.config.bpmNum / report.config.bpmDen / 60)
  const current = sections.findIndex(s => now >= s.from && now < s.to)
  const row = (name: string, on: boolean) => <div className="pf-row" key={name}><span>{name}</span><b>{on ? 'Proved' : 'Not proved'}</b></div>
  return <div className="perform" role="region" aria-label="Performance">
    <Theatre3D report={report} selected={null} />
    <div className="pf-bar">
      <div className="pf-sections">{sections.map((s, i) => <button key={i} className={`chip ${loop === i ? 'on' : ''} ${current === i ? 'now' : ''}`} onClick={() => pick(loop === i ? null : i)} title={`${fmtTime(s.from)} to ${fmtTime(s.to)}. Click to loop.`}>{s.name}</button>)}</div>
      <div className="pf-count" aria-label="Count">{beat % 8 + 1}<span>of 8</span></div>
      <div className="pf-speed">{[.5, .75, 1].map(r => <button key={r} className={`chip ${rate === r ? 'on' : ''}`} onClick={() => speed(r)}>{r === 1 ? 'Full speed' : `${r}×`}</button>)}</div>
    </div>
    {ended && loop === null && <div className="pf-end"><div className="pf-card"><h2>{title}</h2>
      {program && row('Program composition', !!kernel.contract?.composed)}
      {program && row('Movement contracts', kernel.contract ? kernel.contract.steps.length === program.steps.length : false)}
      {row('Collisions, bounds, speed, jumps', kernel.status === 'verified')}
      <p>About the modelled choreography and the assumptions stated. Dancers are points that must keep a gap.</p>
      <button className="btn sm" onClick={() => { clock.seek(0); clock.play() }}>Play again</button></div></div>}
  </div>
}
