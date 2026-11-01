import { useEffect, useRef, useState } from 'react'
import { clock } from '../lib/clock'
import { DANCER_COLORS, gapColor, Problem, ROWS, Report, SceneData, WING_X, colX, fmtTime, pathAt, positionsAt, rowY, secToTick, phaseIndexAt, snap } from '../lib/routine'
import { KernelState } from '../ui/ProofRail'
import { addFormation, removeFormation } from '../lib/repair'

interface Props { report: Report; kernel: KernelState; scene: SceneData; frame: number; setFrame: (f: number) => void; selection: number[]; setSelection: (s: number[]) => void; focus: Problem | null; onMove: (frame: number, dancer: number, x: number, y: number) => void; onChange: (s: SceneData, change?: string) => void; lands: number[]; fixedStructure?: boolean }
const WAYS: [string, string][] = [['walk', 'Straight walk'], ['sweep', 'Sweep on a curve'], ['orbit', 'Orbit the centre'], ['canon', 'Canon: one group after another'], ['burst', 'Gather and burst out'], ['snake', 'Follow the leader'], ['zipper', 'Zipper through the gaps'], ['flip', 'Lines pass through each other'], ['staged', 'Clear the stage, then come on']]
const COLS = [1, 2, 3, 4, 5, 6, 7, 8, 9]
const ROW_IDX = [0, 1, 2, 3, 4]
const TOP = -1200, BOT = 700
const X = (x: number) => x, Y = (y: number) => 8000 - y

/** The plain planning view: a stage marked in rows and columns, with marked places in the wings. */
export function PlanGrid({ report, kernel, scene, frame, setFrame, selection, setSelection, focus, onMove, onChange, lands, fixedStructure }: Props) {
  const svg = useRef<SVGSVGElement>(null)
  const [drag, setDrag] = useState<{ i: number; x: number; y: number; moved: boolean; shift: boolean } | null>(null)
  const [, tick] = useState(0)
  useEffect(() => { let raf = 0; const f = () => { raf = requestAnimationFrame(f); if (clock.playing) tick(v => v + 1) }; f(); return () => cancelAnimationFrame(raf) }, [])
  useEffect(() => clock.subscribe(() => tick(v => v + 1)), [])
  const n = report.config.n
  // wings as wide as this routine needs
  const WIDE = Math.max(10800, ...scene.frames.flat().map(p => Math.abs(p[0]) + 300))
  const film = useRef<HTMLDivElement>(null)
  useEffect(() => { film.current?.querySelector('.ftab.on')?.scrollIntoView({ block: 'nearest', inline: 'nearest' }) }, [frame])
  const [bend, setBend] = useState<{ i: number; x: number; y: number } | null>(null)
  // the real path each dancer follows, read from the routine itself
  const routeInto = (f: number, i: number): [number, number][] => {
    if (f < 1 || lands[f] === undefined) return []
    return report.phases.slice((lands[f - 1] ?? -1) + 1, lands[f] + 1).filter(p => p.kind !== 'hold' && p.paths[i]).flatMap(ph => Array.from({ length: 25 }, (_, u) => pathAt(ph.paths[i], u / 24)))
  }
  const pts = (l: [number, number][]) => l.map(p => `${X(p[0])},${Y(p[1])}`).join(' ')
  const way = frame > 0 ? scene.ways?.[frame - 1] ?? 'walk' : null
  const shapeable = !fixedStructure && (way === 'walk' || way === 'sweep')
  const setBendAt = (i: number, x: number | null, y = 0) => {
    const rest = (scene.bends ?? []).filter(b => !(b[0] === frame - 1 && b[1] === i))
    onChange({ ...scene, bends: x === null ? rest : [...rest, [frame - 1, i, Math.round(x), Math.round(y)]] }, x === null ? `Straightened ${report.names[i]}'s path into Formation ${frame + 1}` : `Shaped ${report.names[i]}'s path into Formation ${frame + 1}`)
  }
  const setWay = (w: string) => { const ways = scene.frames.slice(1).map((_, k) => scene.ways?.[k] ?? 'walk'); ways[frame - 1] = w; onChange({ ...scene, ways }, `Formation ${frame + 1}: travel by ${WAYS.find(x => x[0] === w)?.[1].toLowerCase()}`) }
  const framePos = scene.frames[frame] ?? []
  const prev = frame > 0 ? scene.frames[frame - 1] : null
  const next = frame + 1 < scene.frames.length ? scene.frames[frame + 1] : null
  const live = clock.playing ? positionsAt(report, clock.t) : null
  const world = (e: React.PointerEvent) => {
    const m = svg.current!.getScreenCTM()!.inverse(), p = new DOMPoint(e.clientX, e.clientY).matrixTransform(m)
    return { x: p.x, y: 8000 - p.y }
  }
  const hit = (x: number, y: number) => {
    let best = -1, bd = 480
    framePos.forEach((p, i) => { const d = Math.hypot(p[0] - x, p[1] - y); if (d < bd) { bd = d; best = i } })
    return best
  }
  const selectGroup = (g: number[], add: boolean) => setSelection(add ? [...new Set([...selection, ...g])] : g)
  const rowMembers = (r: number) => framePos.flatMap((p, i) => (p[1] === rowY(r) ? [i] : []))
  const colMembers = (c: number) => framePos.flatMap((p, i) => (p[0] === colX(c) ? [i] : []))
  const on = (p: [number, number]) => Math.abs(p[0]) <= 6000
  const canShift = (dir: number) => framePos.filter(on).every(p => { const r = ROW_IDX.findIndex(k => rowY(k) === p[1]); return r + dir >= 0 && r + dir < 5 })
  // the formation tools. Lean re-proves the routine after each, and Recipes.lean says why rules survive
  const transform = (kind: 'shiftUp' | 'shiftDown' | 'reflect' | 'half') => {
    const f = (p: [number, number]): [number, number] => {
      if (!on(p)) return [p[0], p[1]]
      if (kind === 'shiftUp') return [p[0], p[1] + 1500]
      if (kind === 'shiftDown') return [p[0], p[1] - 1500]
      if (kind === 'reflect') return [-p[0], p[1]]
      return [-p[0], 8000 - p[1]]
    }
    const label = { shiftUp: 'Shifted the formation upstage', shiftDown: 'Shifted the formation downstage', reflect: 'Flipped the formation left-right', half: 'Turned the formation half way round' }[kind]
    const frames = scene.frames.map((fr, k) => k === frame ? fr.map(f) : fr)
    onChange({ ...scene, frames, rules: null }, `${label}, formation ${frame + 1}`)
  }
  // a quick preview while dragging: the same straight, simultaneous moves Lean will check on drop
  let preview: { d: number; other: number; x: number; y: number } | null = null
  if (drag?.moved) {
    const [tx, ty] = snap(drag.x, drag.y)
    const lerp = (a: number, b: number, u: number) => a + (b - a) * u
    const check = (from: [number, number][], to: [number, number][], fromMine: [number, number], toMine: [number, number]) => {
      for (let j = 0; j < n; j++) {
        if (j === drag.i || !from[j] || !to[j]) continue
        for (let k = 0; k <= 40; k++) {
          const u = k / 40, d = Math.hypot(lerp(fromMine[0], toMine[0], u) - lerp(from[j][0], to[j][0], u), lerp(fromMine[1], toMine[1], u) - lerp(from[j][1], to[j][1], u))
          if (!preview || d < preview.d) preview = { d, other: j, x: tx, y: ty }
        }
      }
    }
    if (prev) check(prev, framePos, prev[drag.i], [tx, ty])
    if (next) check(framePos, next, [tx, ty], next[drag.i])
    if (!prev && !next) check(framePos, framePos, [tx, ty], [tx, ty])
  }
  const pv = preview as { d: number; other: number; x: number; y: number } | null
  // live gaps between anyone close
  const shown = live ?? framePos
  const nearLimit = Math.max(1500, report.config.dmin * 2.2)
  const gapLines: { a: number; b: number; d: number }[] = []
  for (let a = 0; a < n; a++) for (let b = 0; b < a; b++) { if (!shown[a] || !shown[b] || drag?.i === a || drag?.i === b) continue; const d = Math.hypot(shown[a][0] - shown[b][0], shown[a][1] - shown[b][1]); if (d < nearLimit) gapLines.push({ a, b, d }) }
  // where the first problem happens
  let clash: { x: number; y: number; text: string; a: number; b: number } | null = null
  const f = focus ?? report.problems.find(q => q.kind === 'collision') ?? null
  const unchecked = kernel.status === 'not_checked' || kernel.status === 'running'
  if (f && f.kind === 'collision' && f.second !== undefined && f.i !== undefined && f.j !== undefined) {
    const ph = report.phases[phaseIndexAt(report, f.second)], u = (secToTick(report, f.second) - ph.t0) / (ph.t1 - ph.t0)
    const a = pathAt(ph.paths[f.i], u), b = pathAt(ph.paths[f.j], u)
    clash = { x: (a[0] + b[0]) / 2, y: (a[1] + b[1]) / 2, text: unchecked ? `Preview: ${report.names[f.i]} and ${report.names[f.j]} may be too close` : `${report.names[f.i]} and ${report.names[f.j]} clash at ${fmtTime(f.second, true)}`, a: f.i, b: f.j }
  }
  return <div className="plan">
    <header className="fhead">
      <div className="fhead-name"><h3>Formation {frame + 1}</h3><span>of {scene.frames.length}{lands[frame] !== undefined && frame > 0 && report.phases[lands[frame]] ? ` · ${report.phases[lands[frame]].label}` : frame === 0 ? ' · where everyone starts' : ''}</span></div>
      {way && !fixedStructure && <label className="fway"><span>Getting here</span><select value={way} onChange={e => setWay(e.target.value)} aria-label={`How dancers travel to formation ${frame + 1}`}>{WAYS.map(([k, l]) => <option key={k} value={k}>{l}</option>)}</select></label>}
      {!fixedStructure && <details className="tools"><summary>Move everyone</summary><div className="more-menu">
        <button disabled={!canShift(-1)} onClick={() => transform('shiftUp')}>One row upstage</button>
        <button disabled={!canShift(1)} onClick={() => transform('shiftDown')}>One row downstage</button>
        <button onClick={() => transform('reflect')}>Flip left-right</button>
        <button onClick={() => transform('half')}>Half turn</button>
      </div></details>}
      {scene.frames.length > 1 && !fixedStructure && <button className="btn ghost sm fremove" aria-label={`Remove formation ${frame + 1}`} onClick={() => { if (frame > 0) setFrame(frame - 1); onChange(removeFormation(scene, frame), `Removed formation ${frame + 1}`) }}>Remove</button>}
    </header>
    <svg ref={svg} viewBox={`${-WIDE} ${TOP} ${2 * WIDE} ${8000 - TOP + BOT}`} preserveAspectRatio="xMidYMid meet" role="application" aria-label="Stage grid. Rows A to E, columns 1 to 9, with marked places in the wings."
      onPointerDown={e => {
        const w = world(e), i = hit(w.x, w.y)
        if (i < 0) { if (!e.shiftKey) setSelection([]); return }
        clock.pause(); svg.current!.setPointerCapture(e.pointerId)
        setDrag({ i, x: w.x, y: w.y, moved: false, shift: e.shiftKey })
      }}
      onPointerMove={e => { if (bend) { const w = world(e); setBend({ ...bend, x: w.x, y: w.y }); return } if (!drag) return; const w = world(e); setDrag({ ...drag, x: w.x, y: w.y, moved: drag.moved || Math.hypot(w.x - framePos[drag.i][0], w.y - framePos[drag.i][1]) > 300 }) }}
      onPointerUp={e => {
        if (bend) { const b = bend; setBend(null); setBendAt(b.i, b.x, b.y); return }
        if (!drag) return
        const d = drag; setDrag(null)
        if (!d.moved) { setSelection(d.shift ? (selection.includes(d.i) ? selection.filter(s => s !== d.i) : [...selection, d.i]) : [d.i]); return }
        const w = world(e), [x, y] = snap(w.x, w.y)
        if (!selection.includes(d.i)) setSelection([d.i])
        onMove(frame, d.i, x, y)
      }}>
      {/* wings and stage */}
      <rect x={-WIDE + 300} y={0} width={2 * WIDE - 600} height={8000} rx={160} fill="#100D15" />
      <rect x={-6000} y={0} width={12000} height={8000} fill="#231D2B" stroke="rgba(242,237,228,.45)" strokeWidth={30} />
      <text className="pl-side" x={-8250} y={TOP + 620}>STAGE RIGHT WING</text>
      <text className="pl-side" x={8250} y={TOP + 620}>STAGE LEFT WING</text>
      <text className="pl-side" x={0} y={8000 + 440}>AUDIENCE</text>
      {/* grid lines */}
      {ROW_IDX.map(r => <line key={r} x1={-10300} x2={10300} y1={Y(rowY(r))} y2={Y(rowY(r))} stroke={rowMembers(r).some(i => selection.includes(i)) ? 'rgba(232,180,88,.42)' : 'rgba(242,237,228,.09)'} strokeWidth={18} />)}
      {COLS.map(c => <line key={c} x1={colX(c)} x2={colX(c)} y1={40} y2={7960} stroke={colMembers(c).some(i => selection.includes(i)) ? 'rgba(232,180,88,.42)' : 'rgba(242,237,228,.09)'} strokeWidth={18} />)}
      {[...COLS.map(colX), ...WING_X, ...WING_X.map(v => -v)].flatMap(x => ROW_IDX.map(r => <circle key={`${x}:${r}`} cx={x} cy={Y(rowY(r))} r={36} fill="rgba(242,237,228,.22)" />))}
      {/* row and column labels select that row or column */}
      {ROW_IDX.map(r => <g key={r}>
        <text className={`pl-label ${rowMembers(r).length && rowMembers(r).every(i => selection.includes(i)) ? 'on' : ''}`} x={-5720} y={Y(rowY(r))} onPointerDown={e => { e.stopPropagation(); selectGroup(rowMembers(r), e.shiftKey) }}>{ROWS[r]}</text>
        <text className={`pl-label ${rowMembers(r).length && rowMembers(r).every(i => selection.includes(i)) ? 'on' : ''}`} x={5720} y={Y(rowY(r))} onPointerDown={e => { e.stopPropagation(); selectGroup(rowMembers(r), e.shiftKey) }}>{ROWS[r]}</text>
      </g>)}
      {COLS.map(c => <text key={c} className={`pl-label ${colMembers(c).length && colMembers(c).every(i => selection.includes(i)) ? 'on' : ''}`} x={colX(c)} y={-280} onPointerDown={e => { e.stopPropagation(); selectGroup(colMembers(c), e.shiftKey) }}>{c}</text>)}
      {/* where they came from, and where they go */}
      {prev && framePos.map((p, i) => { const q = prev[i]; if (!q || (q[0] === p[0] && q[1] === p[1] && !routeInto(frame, i).length)) return null
        const r = routeInto(frame, i), moved = r.some(u => Math.hypot(u[0] - r[0][0], u[1] - r[0][1]) > 20)
        if (!moved) return null
        return <g key={i}>
          <polyline points={pts(r)} fill="none" stroke={DANCER_COLORS[i]} strokeWidth={36} strokeDasharray="90 90" opacity={selection.length && !selection.includes(i) ? .22 : .8} />
          <circle cx={X(q[0])} cy={Y(q[1])} r={210} fill="none" stroke={DANCER_COLORS[i]} strokeWidth={22} strokeDasharray="60 60" opacity={.6} />
        </g> })}
      {next && framePos.map((p, i) => { const r = routeInto(frame + 1, i), moved = r.some(u => Math.hypot(u[0] - p[0], u[1] - p[1]) > 20); return moved && <polyline key={i} points={pts(r)} fill="none" stroke={DANCER_COLORS[i]} strokeWidth={26} opacity={.28} /> })}
      {/* drag these to shape a path */}
      {prev && shapeable && framePos.map((p, i) => { const q = prev[i]; if (!q || (q[0] === p[0] && q[1] === p[1])) return null
        const own = (scene.bends ?? []).find(b => b[0] === frame - 1 && b[1] === i), r = routeInto(frame, i), mid = r[Math.floor(r.length / 2)] ?? [(p[0] + q[0]) / 2, (p[1] + q[1]) / 2]
        const at = bend?.i === i ? [bend.x, bend.y] : own ? [own[2], own[3]] : mid
        return <g key={`h${i}`} className="bend-handle" role="button" aria-label={`Shape ${report.names[i]}'s path`} data-dancer={i} style={{ cursor: 'move' }}
          onPointerDown={e => { e.stopPropagation(); clock.pause(); svg.current!.setPointerCapture(e.pointerId); const w = world(e); setBend({ i, x: w.x, y: w.y }) }}
          onDoubleClick={e => { e.stopPropagation(); if (own) setBendAt(i, null) }}>
          <title>{own ? 'Drag to reshape. Double-click to straighten.' : 'Drag to curve this path'}</title>
          <circle cx={X(at[0])} cy={Y(at[1])} r={190} fill="transparent" />
          <rect x={X(at[0]) - 85} y={Y(at[1]) - 85} width={170} height={170} rx={30} fill={own ? DANCER_COLORS[i] : '#14101A'} stroke={DANCER_COLORS[i]} strokeWidth={30} transform={`rotate(45 ${X(at[0])} ${Y(at[1])})`} />
        </g> })}
      {bend && prev && <polyline pointerEvents="none" points={pts([prev[bend.i], [bend.x, bend.y], framePos[bend.i]])} fill="none" stroke="var(--gold)" strokeWidth={30} strokeDasharray="70 60" />}
      {/* live gaps */}
      {gapLines.map(g => { const c = gapColor(g.d, report.config.dmin), A = shown[g.a], B = shown[g.b], mx = (A[0] + B[0]) / 2, my = Y((A[1] + B[1]) / 2), t = g.d >= 1000 ? `${(g.d / 1000).toFixed(1)} m` : `${Math.round(g.d / 10)} cm`
        return <g key={`${g.a}-${g.b}`} pointerEvents="none"><line x1={A[0]} y1={Y(A[1])} x2={B[0]} y2={Y(B[1])} stroke={c} strokeWidth={22} opacity={.65} /><rect x={mx - 300} y={my - 130} width={600} height={260} rx={70} fill="rgba(14,11,18,.88)" /><text x={mx} y={my} fill={c} fontSize={170} fontWeight={600} textAnchor="middle" dominantBaseline="central">{t}</text></g> })}
      {/* dancers */}
      {Array.from({ length: n }, (_, i) => {
        if (!framePos[i]) return null
        const base = drag?.i === i ? [drag.x, drag.y] : live?.[i] ?? framePos[i]
        const sel = selection.includes(i), hot = clash && (clash.a === i || clash.b === i), c = DANCER_COLORS[i]
        return <g key={i} transform={`translate(${X(base[0])} ${Y(base[1])})`} style={{ cursor: 'grab' }}>
          <circle r={report.config.dmin / 2} fill={hot ? 'rgba(255,90,80,.28)' : c + '22'} stroke={hot ? '#FF6B5E' : c} strokeOpacity={hot ? 1 : .5} strokeWidth={hot ? 40 : 18} />
          <circle r={210} fill={c} stroke={sel ? '#fff' : 'none'} strokeWidth={46} />
          <text className="pl-init">{report.names[i][0]}</text>
          {(sel || drag?.i === i) && <text className="pl-name" y={-410}>{report.names[i]}</text>}
        </g>
      })}
      {drag?.moved && (() => { const [x, y] = snap(drag.x, drag.y); return <circle cx={X(x)} cy={Y(y)} r={320} fill="rgba(232,180,88,.16)" stroke="var(--gold)" strokeWidth={30} strokeDasharray="70 60" pointerEvents="none" /> })()}
      {pv && <g pointerEvents="none">
        {(() => { const q = framePos[pv.other]; return q && <line x1={pv.x} y1={Y(pv.y)} x2={q[0]} y2={Y(q[1])} stroke={gapColor(pv.d, report.config.dmin)} strokeWidth={26} strokeDasharray="70 60" /> })()}
        <text x={pv.x} y={Y(pv.y) + 640} fill={gapColor(pv.d, report.config.dmin)} fontSize={235} fontWeight={600} textAnchor="middle">{pv.d < report.config.dmin ? `Would clash with ${report.names[pv.other]}: ${Math.round(pv.d / 10)} cm` : `Closest: ${report.names[pv.other]}, ${Math.round(pv.d / 10)} cm`}</text>
      </g>}
      {clash && !drag && <g pointerEvents="none"><circle cx={X(clash.x)} cy={Y(clash.y)} r={380} fill="none" stroke="#FF4D42" strokeWidth={50} /><text className="pl-clash" x={X(clash.x)} y={Y(clash.y) - 800}>{clash.text}</text></g>}
    </svg>
    <div className="plan-foot"><span>{drag?.moved ? 'This is a preview. Lean checks when you press Verify.' : frame === 0 ? 'Drag dancers to place them, on stage or in the wings.' : shapeable ? 'Drag a dancer to place them. Drag a diamond to curve their path; double-click it to straighten.' : 'Drag a dancer to place them. To shape paths by hand, set Getting here to Straight walk or Sweep.'}</span></div>
    <div className="filmstrip" role="tablist" aria-label="Formations" ref={film}>
      {scene.frames.map((f, k) => <button key={k} data-f={k + 1} role="tab" aria-selected={k === frame} aria-label={`Formation ${k + 1}`} className={`ftab ${k === frame ? 'on' : ''}`} onClick={() => setFrame(k)}>
        <svg viewBox={`${-WIDE} -200 ${2 * WIDE} 8400`} aria-hidden><rect x={-6000} y={0} width={12000} height={8000} className="ft-stage" />{f.map((p, i) => <circle key={i} cx={p[0]} cy={8000 - p[1]} r={420} fill={DANCER_COLORS[i]} opacity={Math.abs(p[0]) > 6000 ? .45 : 1} />)}</svg>
        <span>{k + 1}</span>
      </button>)}
      {!fixedStructure && <button className="ftab-add" aria-label="Add a formation" title="Add a formation. It starts where the last one ended." onClick={() => { onChange(addFormation(scene), `Added formation ${scene.frames.length + 1}`); setFrame(scene.frames.length) }}>＋<span>Add</span></button>}
    </div>
  </div>
}
