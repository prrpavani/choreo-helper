import programs from '../data/programs.json'
import { ProgramDef } from '../lib/program'

const DEFS = programs as ProgramDef[]
const ring = (n: number, r: number, off = 0): [number, number][] => Array.from({ length: n }, (_, i) => [Math.cos(i / n * 6.283 + off) * r, 4000 + Math.sin(i / n * 6.283 + off) * r * .78])
const ART: Record<string, [number, number][]> = {
  'parallel-lines': [[-3150, 3000], [-1350, 3000], [450, 3000], [2250, 3000], [-2250, 5000], [-450, 5000], [1350, 5000], [3150, 5000]],
  'crossing-currents': [[-3000, 1500], [-3000, 3200], [-3000, 4900], [-3000, 6600], [3000, 2350], [3000, 4050], [3000, 5750], [3000, 7450]],
  'mirror-waltz': Array.from({ length: 8 }, (_, i) => [(i % 2 ? -1 : 1) * (1000 + Math.floor(i / 2) * 1000), 1700 + Math.floor(i / 2) * 1400]),
  'the-orbit': [...ring(4, 1500), ...ring(8, 3300, .4)],
  'fracture-reunion': [...ring(6, 1400).map(p => [p[0] - 3300, p[1]] as [number, number]), ...ring(6, 1400).map(p => [p[0] + 3300, p[1]] as [number, number])],
}
const COLOR = ['#FF6A1F', '#E8388F', '#9B7BEA', '#F2C14E', '#4FC3F7', '#7BD389', '#F2707A', '#5C8DF6', '#FF6A1F', '#E8388F', '#9B7BEA', '#F2C14E']

/** The first thing anyone sees: four complete choreography programs. */
export function Gallery({ onOpen, onDescribe, busy }: { onOpen: (p: ProgramDef) => void; onDescribe: () => void; busy: boolean }) {
  return <section className="gallery" aria-label="Choreography programs">
    <div className="gal-grid">{DEFS.map(p => <button key={p.id} className="gal-card" disabled={busy} data-program={p.id} onClick={() => onOpen(p)}>
      <svg viewBox="-6200 -300 12400 8600" aria-hidden><rect x={-6000} y={0} width={12000} height={8000} rx={120} className="gal-stage" />{(ART[p.id] ?? []).map((q, i) => <circle key={i} cx={q[0]} cy={8000 - q[1]} r={280} fill={COLOR[i % COLOR.length]} />)}</svg>
      <span className="gal-idea">{p.idea}</span>
      <span className="gal-title">{p.title}</span>
      <span className="gal-blurb">{p.blurb}</span>
    </button>)}</div>
    <div className="gal-foot"><button className="linkish" onClick={onDescribe}>Or describe your own in words</button></div>
  </section>
}
