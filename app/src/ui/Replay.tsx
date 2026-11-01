import { useEffect, useRef } from 'react'
import { DANCER_COLORS, RejectedIdea, Report, pathAt } from '../lib/routine'

/** A looping miniature of an idea Lean turned down, pausing at the bad moment. */
export function Replay({ idea, report }: { idea: RejectedIdea; report: Report }) {
  const c = useRef<HTMLCanvasElement>(null)
  useEffect(() => {
    const cv = c.current!, ctx = cv.getContext('2d')!; let raf = 0
    const p = idea.problems.find(q => q.t !== undefined)
    const start = performance.now()
    const draw = () => {
      raf = requestAnimationFrame(draw)
      const dpr = devicePixelRatio || 1, W = cv.clientWidth, H = cv.clientHeight
      if (cv.width !== W * dpr || cv.height !== H * dpr) { cv.width = W * dpr; cv.height = H * dpr }
      ctx.setTransform(dpr, 0, 0, dpr, 0, 0); ctx.clearRect(0, 0, W, H)
      const sc = Math.min(W / 13000, H / 8600), X = (x: number) => W / 2 + x * sc, Y = (y: number) => H / 2 - (y - 4000) * sc
      ctx.fillStyle = '#231D2B'; ctx.beginPath(); ctx.roundRect(X(-6000), Y(8000), 12000 * sc, 8000 * sc, 6); ctx.fill()
      const hit = p?.t ?? .5, cycle = (performance.now() - start) / 1000 % 5
      const u = cycle < 2 ? (cycle / 2) * hit : cycle < 3.3 ? hit : Math.min(1, hit + (cycle - 3.3) / 1.2 * (1 - hit))
      const R = report.config.dmin / 2 * sc
      idea.paths.forEach((path, i) => {
        const a = pathAt(path, 0), b = pathAt(path, 1)
        ctx.strokeStyle = DANCER_COLORS[i] + '44'; ctx.lineWidth = 1; ctx.beginPath(); ctx.moveTo(X(a[0]), Y(a[1])); ctx.lineTo(X(b[0]), Y(b[1])); ctx.stroke()
      })
      const stuck = cycle >= 2 && cycle < 3.3
      idea.paths.forEach((path, i) => {
        const [x, y] = pathAt(path, u), hot = stuck && p && (p.i === i || p.j === i)
        if (hot) { ctx.fillStyle = 'rgba(255,90,80,.34)'; ctx.beginPath(); ctx.arc(X(x), Y(y), R * 2.4, 0, 7); ctx.fill() }
        ctx.fillStyle = DANCER_COLORS[i]; ctx.beginPath(); ctx.arc(X(x), Y(y), Math.max(4, R * .8), 0, 7); ctx.fill()
      })
    }
    draw(); return () => cancelAnimationFrame(raf)
  }, [idea])
  return <canvas ref={c} className="replay" aria-label={`Replay of the rejected idea: ${idea.title}`} />
}
