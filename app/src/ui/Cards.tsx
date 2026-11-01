import { useEffect, useState } from 'react'
import { Routine, STYLE_COLOR, durationOf } from '../data/catalog'
import { fmtTime } from '../lib/routine'
import { isSaved, progressFor, subscribe, toggleSaved } from '../lib/progress'
import { FormationArt } from './Art'

export function useProgress() { const [, set] = useState(0); useEffect(() => subscribe(() => set(v => v + 1)), []) }

export function RoutineCard({ routine }: { routine: Routine }) {
  useProgress()
  const p = progressFor(routine.id), saved = isSaved(routine.id), pct = p && p.total ? p.mastered.length / p.total * 100 : 0
  return <article className="poster" style={{ ['--style' as string]: STYLE_COLOR[routine.style] }}>
    <button className={`poster-save ${saved ? 'on' : ''}`} aria-pressed={saved} onClick={() => toggleSaved(routine.id)}>{saved ? 'Saved' : 'Save'}</button>
    <a href={`#/create/${routine.id}`} style={{ color: 'inherit', textDecoration: 'none', display: 'block' }}>
      <div className="poster-art"><FormationArt routine={routine} /></div>
      {pct > 0 && <div className="poster-progress"><i style={{ width: `${pct}%` }} /></div>}
      <div className="poster-body">
        <div className="tag">{routine.style}</div>
        <h3 className="h3" style={{ marginTop: 4 }}>{routine.title}</h3>
        <div className="poster-meta"><span>{routine.difficulty}</span><span>·</span><span>{fmtTime(durationOf(routine))}</span><span>·</span><span>{routine.dots.length} dancers</span></div>
      </div>
    </a>
  </article>
}
