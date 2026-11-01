import { addDancer, removeDancer } from '../lib/repair'
import { DANCER_COLORS, Report, SceneData, fmtTime, isOffstage, placeName } from '../lib/routine'

/** The routine at a glance: every dancer, and where they stand in the formation you're viewing. */
export function ProjectPanel({ report, title, selection, setSelection, scene, frame, onChange }: { report: Report; title: string | null; selection: number[]; setSelection: (s: number[]) => void; scene: SceneData; frame: number; onChange: (s: SceneData, change: string) => void }) {
  const pos = scene.frames[frame] ?? scene.frames[0]
  const off = pos.filter(p => isOffstage(p[0])).length, on = pos.length - off
  const label = (p: [number, number]) => { const t = placeName(p[0], p[1]); return t.charAt(0).toUpperCase() + t.slice(1) }
  return <aside className="proj" aria-label="Choreography">
    <div className="eyebrow" style={{ fontSize: 10.5 }}>Your routine</div>
    <h2>{title ?? 'New routine'}</h2>
    <div className="proj-meta">{fmtTime(report.config.seconds)} · {scene.frames.length} {scene.frames.length === 1 ? 'formation' : 'formations'} · {report.config.dmin / 10} cm gap</div>
    <div className="proj-title">Formation {frame + 1}: {on} on stage, {off} off stage</div>
    {pos.map((p, i) => { const name = report.names[i]; if (!name) return null
      return <div className={`dancer-row ${selection.includes(i) ? 'on' : ''}`} key={i}>
        <button className="row" aria-pressed={selection.includes(i)} onClick={() => setSelection(selection.includes(i) ? [] : [i])}><i style={{ background: DANCER_COLORS[i] }}>{name[0]}</i><span>{name}<span className="sec-sub">{label(p)}</span></span></button>
        {pos.length > 2 && <button className="ftab-x" aria-label={`Remove ${name}`} title={`Remove ${name}`} onClick={() => { setSelection([]); onChange(removeDancer(scene, i), `Removed ${name}`) }}>×</button>}
      </div> })}
    {pos.length < 16 && <button className="add-dancer" onClick={() => onChange(addDancer(scene), 'Added a dancer in the wings')}>＋ Add a dancer</button>}
  </aside>
}
