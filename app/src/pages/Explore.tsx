import { useMemo, useState } from 'react'
import { ROUTINES, STYLES, durationOf } from '../data/catalog'
import { getStore, progressFor } from '../lib/progress'
import { RoutineCard, useProgress } from '../ui/Cards'
import { Footer } from './Home'

export function Explore({ initialStyle }: { initialStyle?: string }) {
  useProgress()
  const [q, setQ] = useState(''), [style, setStyle] = useState(initialStyle ?? ''), [level, setLevel] = useState(''), [len, setLen] = useState(''), [saved, setSaved] = useState(false), [sort, setSort] = useState('featured')
  const list = useMemo(() => {
    const t = q.trim().toLowerCase()
    const out = ROUTINES.filter(r => (!t || `${r.title} ${r.style} ${r.blurb} ${r.prompt}`.toLowerCase().includes(t)) && (!style || r.style === style) && (!level || r.difficulty === level) && (!len || (len === 'short' ? durationOf(r) <= 60 : durationOf(r) > 60)) && (!saved || getStore().saved.includes(r.id)))
    if (sort === 'title') out.sort((a, b) => a.title.localeCompare(b.title))
    if (sort === 'dancers') out.sort((a, b) => b.dots.length - a.dots.length)
    if (sort === 'recent') out.sort((a, b) => (progressFor(b.id)?.lastPlayed ?? 0) - (progressFor(a.id)?.lastPlayed ?? 0))
    return out
  }, [q, style, level, len, saved, sort, getStore().saved.length])
  return <div className="page"><div className="wrap" style={{ paddingTop: 'clamp(28px,4vw,54px)' }}>
    <div className="eyebrow">Every routine here is proved safe</div>
    <h1 className="big" style={{ fontSize: 'clamp(46px,7vw,96px)' }}>Library</h1>
    <div className="filters">
      <input className="search" type="search" placeholder="Search by name, step or style" value={q} onChange={e => setQ(e.target.value)} aria-label="Search routines" />
      <select className="pick" value={style} onChange={e => setStyle(e.target.value)} aria-label="Style"><option value="">All styles</option>{STYLES.map(s => <option key={s.name}>{s.name}</option>)}</select>
      <select className="pick" value={level} onChange={e => setLevel(e.target.value)} aria-label="Level"><option value="">All levels</option><option>Beginner</option><option>Intermediate</option><option>Advanced</option></select>
      <select className="pick" value={len} onChange={e => setLen(e.target.value)} aria-label="Length"><option value="">Any length</option><option value="short">Up to 1 minute</option><option value="long">Over 1 minute</option></select>
      <select className="pick" value={sort} onChange={e => setSort(e.target.value)} aria-label="Sort"><option value="featured">Featured</option><option value="recent">Recently practised</option><option value="dancers">Most dancers</option><option value="title">A to Z</option></select>
      <button className={`chip ${saved ? 'on' : ''}`} aria-pressed={saved} onClick={() => setSaved(v => !v)} style={{ padding: '9px 12px' }}>Saved</button>
    </div>
    {list.length ? <div className="grid-cards">{list.map(r => <RoutineCard key={r.id} routine={r} />)}</div> : <p className="empty">Nothing matches that yet. Try fewer filters, or <a className="link" href="#/create">choreograph it yourself</a>.</p>}
  </div><Footer /></div>
}
