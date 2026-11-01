import { useEffect, useMemo, useRef, useState } from 'react'
import { clock } from '../lib/clock'
import { KIND_COLOR, KIND_NAME, Report, clearanceSeries, fmtTime, tickToSec, Problem } from '../lib/routine'

interface Props { report: Report; provedPhases: number; status: string; focus: Problem | null; disprovedPhase?: number }

/** Two lanes sharing one time axis: the moves, and how close the closest pair gets. */
export function Timeline({ report, provedPhases, status, focus, disprovedPhase }: Props) {
  const cv = useRef<HTMLCanvasElement>(null)
  const series = useMemo(() => clearanceSeries(report), [report.fingerprint])
  const [tip, setTip] = useState<{ x: number; text: string } | null>(null)
  const live = useRef({ report, provedPhases, status, focus, series, disprovedPhase }); live.current = { report, provedPhases, status, focus, series, disprovedPhase }
  const PAD = 16
  useEffect(() => {
    const c = cv.current!, ctx = c.getContext('2d')!
    let raf = 0
    const draw = () => {
      raf = requestAnimationFrame(draw)
      const { report: r, provedPhases, status, focus, series, disprovedPhase } = live.current
      const dpr = devicePixelRatio || 1, W = c.clientWidth, H = c.clientHeight
      if (c.width !== W * dpr || c.height !== H * dpr) { c.width = W * dpr; c.height = H * dpr }
      ctx.setTransform(dpr, 0, 0, dpr, 0, 0); ctx.clearRect(0, 0, W, H)
      const secs = r.config.seconds, iw = W - PAD * 2, X = (s: number) => PAD + s / secs * iw
      // moves lane
      const py = 8, ph = 26
      r.phases.forEach((p, i) => {
        const a = X(tickToSec(r, p.t0)), b = X(tickToSec(r, p.t1)), w = Math.max(1, b - a - 2)
        const proved = status === 'verified' || (i < provedPhases)
        ctx.fillStyle = KIND_COLOR[p.kind] ?? '#555'
        const judged = status !== 'not_checked' && status !== 'running'
        ctx.globalAlpha = p.ok || !judged ? (proved ? 1 : .35) : 1
        if (!p.ok && judged) ctx.fillStyle = i === disprovedPhase ? '#E5483D' : '#8A6A2A'
        ctx.beginPath(); ctx.roundRect(a + 1, py, w, ph, 4); ctx.fill(); ctx.globalAlpha = 1
      })
      // combine repeat holds into one label
      ctx.font = '500 11px "Manrope Variable", sans-serif'; ctx.textBaseline = 'middle'; ctx.textAlign = 'left'
      let i = 0
      while (i < r.phases.length) {
        let j = i; while (j + 1 < r.phases.length && r.phases[j + 1].kind === r.phases[i].kind) j++
        const a = X(tickToSec(r, r.phases[i].t0)), b = X(tickToSec(r, r.phases[j].t1))
        const name = KIND_NAME[r.phases[i].kind] ?? ''
        if (b - a > ctx.measureText(name).width + 12) { ctx.fillStyle = r.phases[i].kind === 'hold' ? 'rgba(242,237,228,.72)' : '#14101A'; ctx.fillText(name, a + 8, py + ph / 2 + .5) }
        i = j + 1
      }
      ctx.textBaseline = 'alphabetic'
      // clearance lane
      const cy = 42, ch = 34, top = Math.max(3000, ...series.map(s => Math.min(s.dist, 4000)))
      const Y = (d: number) => cy + ch - Math.min(d, top) / top * ch
      const lim = Y(r.config.dmin)
      ctx.strokeStyle = '#FF6B5E'; ctx.lineWidth = 1; ctx.setLineDash([3, 4]); ctx.beginPath(); ctx.moveTo(PAD, lim); ctx.lineTo(W - PAD, lim); ctx.stroke(); ctx.setLineDash([])
      ctx.beginPath(); series.forEach((s, k) => { const x = X(s.sec), y = Y(s.dist); k ? ctx.lineTo(x, y) : ctx.moveTo(x, y) }); ctx.strokeStyle = '#F2EDE4'; ctx.lineWidth = 2; ctx.lineJoin = 'round'; ctx.stroke()
      ctx.fillStyle = 'rgba(242,237,228,.55)'; ctx.font = '11px "Manrope Variable", sans-serif'; ctx.textAlign = 'left'
      ctx.fillStyle = 'rgba(255,143,133,.9)'; ctx.fillText(`limit ${r.config.dmin / 10} cm`, PAD, lim + 12); ctx.fillStyle = 'rgba(242,237,228,.55)'
      if (focus?.second !== undefined) {
        const fx = X(focus.second); ctx.fillStyle = '#FF6B5E'; ctx.beginPath(); ctx.moveTo(fx, py - 6); ctx.lineTo(fx + 5, py - 13); ctx.lineTo(fx - 5, py - 13); ctx.fill()
      }
      // playhead
      const x = X(clock.t); ctx.fillStyle = '#E8B458'; ctx.fillRect(x - 1, 8, 2, H - 16)
      ctx.beginPath(); ctx.arc(x, 8, 4, 0, 7); ctx.fill()
    }
    draw(); return () => cancelAnimationFrame(raf)
  }, [])
  const secFrom = (e: React.PointerEvent) => { const b = cv.current!.getBoundingClientRect(); return Math.max(0, Math.min(1, (e.clientX - b.left - PAD) / (b.width - PAD * 2))) * report.config.seconds }
  return <div className="timeline-wrap">
    <canvas ref={cv} className="timeline" role="slider" aria-label="Timeline" aria-valuenow={0}
      onPointerDown={e => { cv.current!.setPointerCapture(e.pointerId); clock.seek(secFrom(e)) }}
      onPointerMove={e => {
        const sec = secFrom(e), b = cv.current!.getBoundingClientRect()
        if (e.buttons) clock.seek(sec)
        const s = series[Math.round(sec / report.config.seconds * (series.length - 1))]
        const ph = report.phases.find(p => tickToSec(report, p.t1) >= sec)
        setTip({ x: e.clientX - b.left, text: `${fmtTime(sec, true)} · ${ph?.label ?? ''} · closest pair ${report.names[s.i]} and ${report.names[s.j]}: ${(s.dist / 1000).toFixed(2)} m` })
      }}
      onPointerLeave={() => setTip(null)} />
    {tip && <div className="tl-tip" style={{ left: Math.max(150, Math.min(tip.x, (cv.current?.clientWidth ?? 800) - 150)) }}>{tip.text}</div>}
  </div>
}
