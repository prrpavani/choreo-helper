import { Routine, STYLE_COLOR } from '../data/catalog'

function hashOf(s: string) { let h = 7; for (const c of s) h = (h * 31 + c.charCodeAt(0)) >>> 0; return h }

/** Our own imagery: each routine's poster is its formation, lit from above like a stage. No stock photos,
 *  and nothing borrowed from anyone's brand. */
export function FormationArt({ routine, wide }: { routine: Routine; wide?: boolean }) {
  const c = STYLE_COLOR[routine.style] ?? '#B49BDA', h = hashOf(routine.id), id = `a${h}`
  const W = wide ? 1600 : 800, H = wide ? 800 : 500, cx = wide ? W * .78 : W / 2, cy = wide ? H * .6 : H * .54, u = wide ? 50 : 46
  const beams = [0, 1, 2].map(k => cx - W * .22 + k * W * .22 + ((h >> k) % 80) - 40)
  return <svg viewBox={`0 0 ${W} ${H}`} preserveAspectRatio="xMidYMid slice" aria-hidden>
    <defs>
      <linearGradient id={`${id}b`} x1="0" y1="0" x2="0" y2="1"><stop offset="0" stopColor="#10111A" /><stop offset="1" stopColor="#07080B" /></linearGradient>
      <linearGradient id={`${id}l`} x1="0" y1="0" x2="0" y2="1"><stop offset="0" stopColor={c} stopOpacity=".44" /><stop offset="1" stopColor={c} stopOpacity="0" /></linearGradient>
      <radialGradient id={`${id}f`}><stop offset="0" stopColor={c} stopOpacity=".42" /><stop offset="1" stopColor={c} stopOpacity="0" /></radialGradient>
      <radialGradient id={`${id}g`}><stop offset="0" stopColor="#fff" stopOpacity=".9" /><stop offset=".36" stopColor={c} stopOpacity=".92" /><stop offset="1" stopColor={c} stopOpacity="0" /></radialGradient>
    </defs>
    <rect width={W} height={H} fill={`url(#${id}b)`} />
    {beams.map((x, k) => <polygon key={k} points={`${x - 14},-10 ${x + 14},-10 ${x + 190},${H} ${x - 190},${H}`} fill={`url(#${id}l)`} opacity={k === 1 ? .9 : .5} />)}
    <ellipse cx={cx} cy={cy + u * .4} rx={W * .4} ry={H * .32} fill={`url(#${id}f)`} />
    {[-2, -1, 0, 1, 2].map(k => <line key={k} x1={0} x2={W} y1={cy + k * u * 1.15} y2={cy + k * u * 1.15} stroke="#E9E6DF" strokeOpacity=".05" />)}
    {routine.dots.map(([x, y], k) => {
      const px = cx + x * u, py = cy - y * u * .78, scale = .78 + (2 - y) * .08
      return <g key={k} transform={`translate(${px} ${py}) scale(${scale})`}>
        <circle r={u * .62} fill={`url(#${id}g)`} opacity=".62" />
        <ellipse cy={u * .36} rx={u * .3} ry={u * .08} fill="#000" opacity=".5" />
        <circle cy={-u * .42} r={u * .1} fill="#F4F1EA" />
        <path d={`M ${-u * .13} ${-u * .28} L ${u * .13} ${-u * .28} L ${u * .08} ${u * .06} L ${u * .17} ${u * .36} L ${u * .07} ${u * .36} L 0 ${u * .1} L ${-u * .07} ${u * .36} L ${-u * .17} ${u * .36} L ${-u * .08} ${u * .06} Z`} fill="#F4F1EA" />
        <path d={`M ${-u * .13} ${-u * .25} L ${-u * .33} ${-u * (.5 + (k % 3) * .12)} M ${u * .13} ${-u * .25} L ${u * .33} ${-u * (.5 + ((k + 1) % 3) * .12)}`} stroke="#F4F1EA" strokeWidth={u * .055} strokeLinecap="round" />
      </g>
    })}
  </svg>
}

/** A team crest made from the team's own name and colour. */
export function Crest({ name, color }: { name: string; color: string }) {
  const letters = (name || 'Your team').trim().split(/\s+/).map(w => w[0]).join('').slice(0, 3).toUpperCase()
  return <svg className="crest" viewBox="0 0 120 138" role="img" aria-label={`${name || 'Team'} crest`}>
    <path d="M60 3 L114 20 V78 C114 107 88 124 60 135 C32 124 6 107 6 78 V20 Z" fill="#171923" stroke={color} strokeWidth="3.5" />
    <path d="M60 13 L104 27 V77 C104 100 83 114 60 124 C37 114 16 100 16 77 V27 Z" fill="none" stroke={color} strokeOpacity=".4" />
    <text x="60" y="82" textAnchor="middle" fontFamily="Anton, Impact, sans-serif" fontSize={letters.length > 2 ? 40 : 52} fill={color}>{letters}</text>
    <path d="M38 98 H82" stroke={color} strokeOpacity=".6" strokeWidth="2" />
  </svg>
}

/** An achievement emblem: eight beats in a ring, filled when it is earned. */
export function Emblem({ won, label }: { won: boolean; label: string }) {
  const c = won ? '#C8A66B' : '#70707A'
  return <svg viewBox="0 0 48 48" aria-hidden>
    {Array.from({ length: 8 }, (_, k) => { const a = k / 8 * Math.PI * 2 - Math.PI / 2; return <circle key={k} cx={24 + Math.cos(a) * 20} cy={24 + Math.sin(a) * 20} r="2.6" fill={c} /> })}
    <text x="24" y="31" textAnchor="middle" fontFamily="Anton, Impact, sans-serif" fontSize="20" fill={c}>{label}</text>
  </svg>
}
