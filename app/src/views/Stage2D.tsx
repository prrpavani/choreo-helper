import { useEffect, useRef, useState } from 'react'
import { clock } from '../lib/clock'
import { DANCER_COLORS, Report, crashOf, crashPose, fmtTime, gapColor, pathAt, phaseIndexAt, positionsAt, secToTick, bpmOf, Problem } from '../lib/routine'

interface Props { report: Report; focus: Problem | null; selected: number | null; onSelect: (i: number | null) => void; onDrop: (dancer: number, x: number, y: number) => void; busy: boolean }

export function Stage2D({ report, focus, selected, onSelect, onDrop, busy }: Props) {
  const canvas = useRef<HTMLCanvasElement>(null)
  const drag = useRef<{ i: number; x: number; y: number } | null>(null)
  const hover = useRef<number | null>(null)
  const [cursor, setCursor] = useState('default')
  const spanRef = useRef(0)
  const live = useRef({ report, focus, selected, busy })
  live.current = { report, focus, selected, busy }

  useEffect(() => {
    const cv = canvas.current!, ctx = cv.getContext('2d')!
    let raf = 0
    const draw = () => {
      raf = requestAnimationFrame(draw)
      const { report: r, focus, selected } = live.current
      const dpr = devicePixelRatio || 1, W = cv.clientWidth, H = cv.clientHeight
      if (cv.width !== W * dpr || cv.height !== H * dpr) { cv.width = W * dpr; cv.height = H * dpr }
      ctx.setTransform(dpr, 0, 0, dpr, 0, 0)
      ctx.clearRect(0, 0, W, H)
      const env = { ...r.config.envelope, xmin: Math.min(r.config.envelope.xmin, -spanRef.current / 2), xmax: Math.max(r.config.envelope.xmax, spanRef.current / 2) }, st = r.config.stage
      const padX = 28, padTop = 62, padBot = 62
      // the view frames the stage, and widens smoothly when anyone is in the wings
      const nowPos = positionsAt(r, clock.t)
      const reach = Math.max(st.xmax + 1400, ...nowPos.map(p => Math.abs(p[0]) + 1100))
      // widens at once, so nobody ever walks out of view; narrows gently
      const spanWanted = reach * 2
      spanRef.current = spanWanted > spanRef.current ? spanWanted : spanRef.current + (spanWanted - spanRef.current) * .07
      const sc = Math.min((W - padX * 2) / spanRef.current, (H - padTop - padBot) / (st.ymax - st.ymin))
      const cx = W / 2, by = padTop + (H - padTop - padBot + (st.ymax - st.ymin) * sc) / 2
      const X = (x: number) => cx + x * sc, Y = (y: number) => by - y * sc
      viewRef.current = { cx, by, sc }
      const sec = clock.t, k = phaseIndexAt(r, sec), ph = r.phases[k]
      const beatPos = sec * bpmOf(r) / 60, pulse = Math.pow(1 - (beatPos % 1), 3)

      // wings
      ctx.fillStyle = '#100D15'
      ctx.fillRect(Math.max(0, X(env.xmin)), Y(st.ymax), Math.min(W, (env.xmax - env.xmin) * sc), (st.ymax - st.ymin) * sc)
      // the stage floor
      const g = ctx.createRadialGradient(X(0), Y(4000), 40, X(0), Y(4000), 7000 * sc)
      g.addColorStop(0, '#2C2535'); g.addColorStop(1, '#1B1722')
      ctx.fillStyle = g
      ctx.fillRect(X(st.xmin), Y(st.ymax), (st.xmax - st.xmin) * sc, (st.ymax - st.ymin) * sc)
      ctx.strokeStyle = 'rgba(255,255,255,.045)'; ctx.lineWidth = 1
      for (let x = st.xmin; x <= st.xmax; x += 1000) { ctx.beginPath(); ctx.moveTo(X(x), Y(st.ymin)); ctx.lineTo(X(x), Y(st.ymax)); ctx.stroke() }
      for (let y = st.ymin; y <= st.ymax; y += 1000) { ctx.beginPath(); ctx.moveTo(X(st.xmin), Y(y)); ctx.lineTo(X(st.xmax), Y(y)); ctx.stroke() }
      ctx.strokeStyle = 'rgba(232,180,88,.22)'
      ctx.setLineDash([4, 6]); ctx.beginPath(); ctx.moveTo(X(0), Y(st.ymin)); ctx.lineTo(X(0), Y(st.ymax)); ctx.stroke(); ctx.setLineDash([])
      ctx.strokeStyle = 'rgba(242,237,228,.5)'; ctx.lineWidth = 1.5
      ctx.strokeRect(X(st.xmin), Y(st.ymax), (st.xmax - st.xmin) * sc, (st.ymax - st.ymin) * sc)

      // labels
      ctx.font = '500 11px "Manrope Variable", sans-serif'; ctx.fillStyle = 'rgba(242,237,228,.42)'; ctx.textAlign = 'center'
      ctx.fillText('UPSTAGE', X(0), Y(st.ymax) - 10)
      ctx.fillText('AUDIENCE', X(0), Y(st.ymin) + 22)
      ctx.textAlign = 'right'; ctx.fillText('STAGE RIGHT', X(st.xmin) - 8, Y(st.ymin) + 22)
      ctx.textAlign = 'left'; ctx.fillText('STAGE LEFT', X(st.xmax) + 8, Y(st.ymin) + 22); ctx.textAlign = 'center'

      const pos = positionsAt(r, sec)
      const n = r.config.n
      // after a proved collision, the cartoon takes over what you see
      const crash = clock.crashAllowed && !clock.debug ? crashOf(r) : null
      const crashing = !!crash && sec >= crash.second
      const poses = crash && crashing ? pos.map((_, i) => crashPose(r, crash, sec, i)) : null
      if (poses) poses.forEach((q, i) => { pos[i] = [q.x, q.y] })
      // paths for this phase
      for (let i = 0; i < n; i++) {
        const sel = selected === i
        if (selected !== null && !sel) continue
        ctx.beginPath()
        const from = sel ? 0 : k, to = sel ? r.phases.length - 1 : k
        for (let q = from; q <= to; q++) {
          const P = r.phases[q].paths[i]
          for (let u = 0; u <= 24; u++) { const [x, y] = pathAt(P, u / 24); (q === from && u === 0) ? ctx.moveTo(X(x), Y(y)) : ctx.lineTo(X(x), Y(y)) }
        }
        ctx.strokeStyle = DANCER_COLORS[i]; ctx.globalAlpha = sel ? .75 : .28; ctx.lineWidth = sel ? 2 : 1.5; ctx.stroke(); ctx.globalAlpha = 1
      }
      // lines that are holding shape
      if (ph.kind === 'hold' || ph.kind === 'flip' || ph.kind === 'exit') {
        const byRow = new Map<number, number[]>()
        const u = (secToTick(r, sec) - ph.t0) / (ph.t1 - ph.t0)
        for (let i = 0; i < n; i++) { const key = ph.kind === 'exit' ? Math.round(pathAt(ph.paths[i], 0)[0]) : Math.round(pathAt(ph.paths[i], u)[1]); (byRow.get(key) ?? byRow.set(key, []).get(key)!).push(i) }
        ctx.strokeStyle = 'rgba(242,237,228,.13)'; ctx.lineWidth = 2
        byRow.forEach(g => { if (g.length < 2) return; ctx.beginPath(); g.forEach((i, ix) => { ix ? ctx.lineTo(X(pos[i][0]), Y(pos[i][1])) : ctx.moveTo(X(pos[i][0]), Y(pos[i][1])) }); ctx.stroke() })
      }
      // live gaps: anyone close gets a line and a distance, and a selected dancer sees everyone
      const near = Math.max(1500, r.config.dmin * 2.2)
      ctx.font = '600 11px "Manrope Variable", sans-serif'; ctx.textBaseline = 'middle'; ctx.textAlign = 'center'
      for (let i = 0; i < n; i++) for (let j = 0; j < i; j++) {
        const d = Math.hypot(pos[i][0] - pos[j][0], pos[i][1] - pos[j][1]), picked = selected === i || selected === j
        if (d >= near && !picked) continue
        const c = gapColor(d, r.config.dmin), ax = X(pos[i][0]), ay = Y(pos[i][1]), bx = X(pos[j][0]), by2 = Y(pos[j][1])
        ctx.strokeStyle = c; ctx.globalAlpha = d < near ? .8 : .28; ctx.lineWidth = d < r.config.dmin ? 3 : 1.5; ctx.beginPath(); ctx.moveTo(ax, ay); ctx.lineTo(bx, by2); ctx.stroke(); ctx.globalAlpha = 1
        const label = d >= 1000 ? `${(d / 1000).toFixed(1)} m` : `${Math.round(d / 10)} cm`
        const mx = (ax + bx) / 2, my = (ay + by2) / 2, tw = ctx.measureText(label).width + 8
        ctx.fillStyle = 'rgba(14,11,18,.86)'; ctx.beginPath(); ctx.roundRect(mx - tw / 2, my - 8, tw, 16, 4); ctx.fill()
        ctx.fillStyle = c; ctx.fillText(label, mx, my + .5)
      }
      ctx.textBaseline = 'alphabetic'
      // dancers; each halo is the space the proof protects: half the required gap, so two halos overlap only if dancers are too close
      const rHalo = r.config.dmin / 2 * sc
      for (let i = 0; i < n; i++) {
        const [px, py] = drag.current?.i === i ? [drag.current.x, drag.current.y] : pos[i]
        const q = poses?.[i], c = DANCER_COLORS[i]
        const x = X(px), y = Y(py) - (q ? q.hop * sc : 0)
        const hot = focus && (focus.i === i || focus.j === i) && Math.abs(sec - (focus.second ?? -99)) < 0.6
        ctx.beginPath(); ctx.arc(x, y, rHalo * (1 + pulse * .05), 0, 7)
        ctx.fillStyle = hot ? 'rgba(255,90,80,.28)' : c + '22'; ctx.fill()
        ctx.strokeStyle = hot ? '#FF6B5E' : c + '66'; ctx.lineWidth = hot ? 2.5 : 1; ctx.stroke()
        const rr = Math.max(9, rHalo * .52)
        ctx.beginPath()
        if (q && q.fall > 0) ctx.ellipse(x, y, rr * (1 + q.fall * .55), rr * (1 - q.fall * .4), Math.atan2(-q.dirY, q.dirX), 0, 7)
        else ctx.arc(x, y, rr, 0, 7)
        ctx.fillStyle = c; ctx.fill()
        if (selected === i || hover.current === i) { ctx.strokeStyle = '#fff'; ctx.lineWidth = 2; ctx.stroke() }
        ctx.fillStyle = '#17131D'; ctx.font = `600 ${Math.round(rr * .95)}px "Manrope Variable", sans-serif`; ctx.textAlign = 'center'; ctx.textBaseline = 'middle'
        if (q && q.fall >= 1 && q.hit) { ctx.font = `800 ${Math.round(rr * .8)}px "Manrope Variable", sans-serif`; ctx.fillText('x x', x, y + .5) }
        else ctx.fillText(r.names[i][0], x, y + .5)
        ctx.textBaseline = 'alphabetic'
        if (q && q.fall > .4 && q.hit) {
          // dizzy stars
          const now = performance.now() / 300
          for (let k = 0; k < 4; k++) {
            const a = now + k * Math.PI / 2, sx = x + Math.cos(a) * rr * 1.5, sy = y - rr * 1.1 + Math.sin(a) * rr * .45
            ctx.fillStyle = '#FFD84D'; ctx.font = `${Math.round(rr * .9)}px "Manrope Variable", sans-serif`; ctx.fillText('★', sx, sy)
          }
        }
        if (hover.current === i || selected === i || drag.current?.i === i) {
          ctx.fillStyle = '#F2EDE4'; ctx.font = '500 12px "Manrope Variable", sans-serif'; ctx.fillText(r.names[i], x, y - rHalo - 8)
        }
      }
      // the bang
      if (crash) {
        const since = sec - crash.second
        if (since >= 0 && since < 1.6) {
          const bx = X(crash.cx), byy = Y(crash.cy), grow = Math.min(1, since * 7) * (1 + .1 * Math.sin(since * 20)), R = Math.max(60, 1200 * sc) * grow
          ctx.save(); ctx.translate(bx, byy); ctx.rotate(-.12); ctx.globalAlpha = Math.min(1, (1.6 - since) * 2.2)
          ctx.beginPath()
          for (let k = 0; k < 24; k++) { const a = k / 24 * Math.PI * 2, rad = k % 2 ? R * .62 : R; k ? ctx.lineTo(Math.cos(a) * rad, Math.sin(a) * rad) : ctx.moveTo(Math.cos(a) * rad, Math.sin(a) * rad) }
          ctx.closePath(); ctx.fillStyle = '#FFD84D'; ctx.fill(); ctx.lineWidth = 4; ctx.strokeStyle = '#E5301F'; ctx.stroke()
          ctx.fillStyle = '#E5301F'; ctx.font = `900 ${Math.round(R * .42)}px "Manrope Variable", sans-serif`; ctx.textAlign = 'center'; ctx.textBaseline = 'middle'; ctx.fillText('CRASH!', 0, 0)
          ctx.restore(); ctx.textBaseline = 'alphabetic'
        }
        if (since > 1.2 || since < 0 && since > -3) {
          ctx.fillStyle = since < 0 ? '#F2B84B' : '#FF8F85'; ctx.font = '600 14px "Manrope Variable", sans-serif'; ctx.textAlign = 'center'
          ctx.fillText(since < 0 ? `${r.names[crash.i]} and ${r.names[crash.j]} are heading for each other` : `${r.names[crash.i]} and ${r.names[crash.j]} collided at ${fmtTime(crash.second, true)}. Lean proved it.`, X(0), Y(st.ymax) + 26)
        }
      }
    }
    draw()
    return () => cancelAnimationFrame(raf)
  }, [])

  const viewRef = useRef({ cx: 0, by: 0, sc: 1 })
  const toWorld = (e: React.PointerEvent) => {
    const b = canvas.current!.getBoundingClientRect(), v = viewRef.current
    return { x: (e.clientX - b.left - v.cx) / v.sc, y: (v.by - (e.clientY - b.top)) / v.sc }
  }
  const nearest = (x: number, y: number) => {
    const pos = positionsAt(report, clock.t), lim = Math.max(report.config.dmin / 2, 16 / viewRef.current.sc)
    let best: number | null = null, bd = lim
    pos.forEach((p, i) => { const d = Math.hypot(p[0] - x, p[1] - y); if (d < bd) { bd = d; best = i } })
    return best as number | null
  }
  return <canvas ref={canvas} className="fill" style={{ cursor, touchAction: 'none' }} aria-label="Top-down view of the stage"
    onPointerDown={e => {
      const w = toWorld(e), i = nearest(w.x, w.y)
      if (i === null) { onSelect(null); return }
      clock.pause(); canvas.current!.setPointerCapture(e.pointerId)
      drag.current = { i, x: w.x, y: w.y }; downAt.current = w; setCursor('grabbing')
    }}
    onPointerMove={e => {
      const w = toWorld(e)
      if (drag.current) { drag.current.x = w.x; drag.current.y = w.y; return }
      hover.current = nearest(w.x, w.y); setCursor(hover.current !== null ? 'grab' : 'default')
    }}
    onPointerUp={e => {
      const d = drag.current; drag.current = null; setCursor('default')
      if (!d) return
      const w = toWorld(e), a = downAt.current
      if (a && Math.hypot(w.x - a.x, w.y - a.y) < 120) { onSelect(live.current.selected === d.i ? null : d.i); return }
      onDrop(d.i, w.x, w.y)
    }} />
}
const downAt = { current: null as null | { x: number; y: number } }
