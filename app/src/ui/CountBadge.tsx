import { useEffect, useRef } from 'react'
import { clock } from '../lib/clock'
import { Report, bpmOf, phaseIndexAt } from '../lib/routine'

/** The count a choreographer calls out: which of the eight, and which step. */
export function CountBadge({ report }: { report: Report }) {
  const num = useRef<HTMLElement>(null), name = useRef<HTMLSpanElement>(null), dots = useRef<HTMLSpanElement>(null)
  const live = useRef(report); live.current = report
  useEffect(() => {
    let raf = 0
    const f = () => {
      raf = requestAnimationFrame(f)
      const r = live.current, beat = Math.floor(clock.t * bpmOf(r) / 60 + 1e-6), c = beat % 8
      if (num.current) num.current.textContent = String(c + 1)
      if (name.current) name.current.textContent = r.phases[phaseIndexAt(r, clock.t)].label
      if (dots.current) Array.from(dots.current.children).forEach((d, i) => d.classList.toggle('on', i === c))
    }
    f(); return () => cancelAnimationFrame(raf)
  }, [])
  return <span className="counts" title="The count of eight"><span>Count</span><b ref={num}>1</b>
    <span className="count-dots" ref={dots}>{Array.from({ length: 8 }, (_, i) => <i key={i} />)}</span><span ref={name} /></span>
}
