import { useMemo, useRef, useState } from 'react'
import { Path, PhaseData, clearancePoly, ev } from '../lib/routine'

function binom(n: number, k: number) { let r = 1; for (let i = 1; i <= k; i++) r = r * (n - k + i) / i; return r }

/** How a proof covers every instant: the dots are numbers Lean computes; if all sit above the limit,
 *  the curve between them cannot dip below it. */
export function Knows({ phase, limit, pair }: { phase: PhaseData; limit: number; pair?: { i: number; j: number; names: string; how: string; depth: number } }) {
  // a shared denominator is what makes the dots exact
  const useShared = pair && phase.paths[pair.i].W.join() === phase.paths[pair.j].W.join()
  const co = pair && useShared ? clearancePoly(phase.paths[pair.i], phase.paths[pair.j], limit) : phase.tight.coefficients
  const { names, how, depth, i, j } = pair ?? phase.tight
  const P = phase.paths[i], Q = phase.paths[j]
  const constW = P.W.length === 4 && P.W.join() === Q.W.join() && how.startsWith('Distance curve')
  const [hov, setHov] = useState<number | null>(null)
  const ref = useRef<SVGSVGElement>(null)
  const { curve, dots, lo, hi } = useMemo(() => {
    const W = P.W
    const val = (t: number) => { const s = 1 - t, w = P.W.join() === Q.W.join() ? ev(W, s, t) : ev(W, s, t) * ev(Q.W, s, t); return ev(co, s, t) / (w * w) / 1e6 }
    const curve = Array.from({ length: 81 }, (_, k) => ({ t: k / 80, v: val(k / 80) }))
    const n = co.length - 1
    const dots = constW ? co.map((c, k) => ({ t: k / n, v: c / binom(n, k) / 1e6 })) : []
    const all = [...curve.map(c => c.v), ...dots.map(d => d.v), 0]
    const lo = Math.min(...all), hi = Math.max(...all)
    return { curve, dots, lo, hi: hi === lo ? lo + 1 : hi }
  }, [phase, i, j, limit, how])
  const W = 340, H = 150, L = 8, R = 8, T = 14, B = 22
  const x = (t: number) => L + t * (W - L - R), y = (v: number) => T + (hi - v) / (hi - lo) * (H - T - B)
  const inTrouble = (dots.length ? dots : curve).some(p => p.v < 0)
  const pairBad = !phase.ok && curve.some(p => p.v < 0)
  const hv = hov !== null ? curve[Math.round(hov * 80)] : null
  const d = (v: number) => Math.sqrt(Math.max(0, v * 1e6 + limit * limit)) / 1000
  return <div>
    <p className="rail-p">During <b>{phase.label}</b>, the pair is <b>{names}</b>. {pairBad ? 'They are inside the limit, so this phase fails.' : `${how}.`}</p>
    <svg ref={ref} viewBox={`0 0 ${W} ${H}`} className="knows" role="img" aria-label={`Spare room between ${names} over this phase, with the numbers Lean checks`}
      onPointerMove={e => { const b = ref.current!.getBoundingClientRect(); setHov(Math.max(0, Math.min(1, ((e.clientX - b.left) / b.width * W - L) / (W - L - R)))) }}
      onPointerLeave={() => setHov(null)}>
      <line x1={L} x2={W - R} y1={y(0)} y2={y(0)} stroke="var(--bad)" strokeDasharray="3 4" />
      <text x={W - R} y={y(0) - 5} textAnchor="end" className="k-txt">the limit</text>
      {dots.length > 0 && <polyline points={dots.map(p => `${x(p.t)},${y(p.v)}`).join(' ')} fill="none" stroke="var(--muted)" strokeWidth="1" strokeDasharray="2 3" />}
      <polyline points={curve.map(p => `${x(p.t)},${y(p.v)}`).join(' ')} fill="none" stroke="var(--ink)" strokeWidth="2" strokeLinejoin="round" />
      {dots.map((p, k) => <circle key={k} cx={x(p.t)} cy={y(p.v)} r="4.5" fill={p.v >= 0 ? 'var(--good)' : 'var(--bad)'} stroke="var(--panel)" strokeWidth="2" />)}
      {hv && <><line x1={x(hv.t)} x2={x(hv.t)} y1={T} y2={H - B} stroke="var(--muted)" /><circle cx={x(hv.t)} cy={y(hv.v)} r="4" fill="var(--ink)" /></>}
      <text x={L} y={H - 6} className="k-txt">start of this phase</text>
      <text x={W - R} y={H - 6} textAnchor="end" className="k-txt">{hv ? `${d(hv.v).toFixed(2)} m apart` : 'end'}</text>
    </svg>
    <p className="rail-p small">
      {pairBad
        ? <>The line is the room this pair has to spare, and it falls below the limit. No number Lean computes can rescue that, because the rule is simply false for this routine.</>
        : dots.length > 0
        ? <>The line is the room this pair has to spare. The green dots are exact numbers Lean computes from the routine. A rule of maths says the line can never dip below its lowest dot, so if every dot is above the limit, <b>every moment</b> is safe, including moments no frame would ever show.{depth > 0 && inTrouble ? ` Here some dots fall short, so Lean cut time in half ${depth} times and repeated the test on each piece.` : ''}</>
        : <>The line is the room this pair has to spare. {how.startsWith('Distance curve') ? <>Lean tests this curve with numbers computed from the exact path{depth > 0 ? `, cutting time in half ${depth} times` : ''}.</> : <>{how}, so Lean doesn't need to test the curve at all. It checks that simpler fact, for <b>every moment</b>.</>}</>}
    </p>
  </div>
}
