import { useMemo, useState } from 'react'
import { SavedFile, deleteFile, duplicateFile, getStore, renameFile } from '../lib/progress'
import { useProgress } from '../ui/Cards'
import { fmtTime } from '../lib/routine'
import { Footer } from './Home'

const STATUS: Record<string, [string, string]> = { verified: ['Proved', 'ok'], refuted: ['Proved unsafe', 'no'], not_proved: ['Not proved', 'wait'], not_checked: ['Not checked', 'wait'], running: ['Not checked', 'wait'], timeout: ['No verdict', 'wait'], error: ['No verdict', 'wait'] }
const when = (t: number) => new Date(t).toLocaleDateString(undefined, { month: 'short', day: 'numeric', hour: 'numeric', minute: '2-digit' })

function Thumb({ file }: { file: SavedFile }) {
  return <svg className="file-thumb" viewBox="-6400 -300 12800 8600" role="img" aria-label={`${file.title}: ${file.n} dancers in formation`}>
    <rect x={-6000} y={0} width={12000} height={8000} rx={160} className="ft-stage" />
    {file.thumb.map((p, i) => <circle key={i} cx={p[0]} cy={8000 - p[1]} r={280} className="ft-dot" style={{ opacity: Math.abs(p[0]) > 6000 ? .3 : 1 }} />)}
  </svg>
}

/** Every routine made in this browser, ready to reopen. */
export function Files() {
  useProgress()
  const [q, setQ] = useState(''), [style, setStyle] = useState(''), [sort, setSort] = useState('recent'), [ask, setAsk] = useState<string | null>(null)
  const files = getStore().files ?? []
  const styles = [...new Set(files.map(f => f.genre))].sort()
  const list = useMemo(() => {
    const t = q.trim().toLowerCase()
    const out = files.filter(f => (!t || `${f.title} ${f.genre} ${f.prompt}`.toLowerCase().includes(t)) && (!style || f.genre === style))
    return sort === 'title' ? [...out].sort((a, b) => a.title.localeCompare(b.title)) : [...out].sort((a, b) => b.at - a.at)
  }, [q, style, sort, files.length, files.map(f => f.at + f.title).join()])
  return <div className="page"><div className="wrap" style={{ paddingTop: 'clamp(28px,4vw,54px)' }}>
    <div className="eyebrow">Saved in this browser as you work</div>
    <h1 className="big" style={{ fontSize: 'clamp(46px,7vw,96px)' }}>My routines</h1>
    <div className="filters">
      <input className="search" type="search" placeholder="Search by name, style or words" value={q} onChange={e => setQ(e.target.value)} aria-label="Search your routines" />
      <select className="pick" value={style} onChange={e => setStyle(e.target.value)} aria-label="Style"><option value="">All styles</option>{styles.map(s => <option key={s}>{s}</option>)}</select>
      <select className="pick" value={sort} onChange={e => setSort(e.target.value)} aria-label="Sort"><option value="recent">Most recent</option><option value="title">Name</option></select>
      <span className="spacer" /><a className="btn primary sm" href="#/create/new">New routine</a>
    </div>
    {!files.length && <p className="empty">Nothing here yet. <a className="link" href="#/create/new">Talk through your first routine</a>, and it will be kept here.</p>}
    {files.length > 0 && !list.length && <p className="empty">Nothing matches that. Try fewer filters.</p>}
    <div className="grid-cards">{list.map(f => { const [word, tone] = STATUS[f.status] ?? STATUS.not_checked
      return <article className="file-card" key={f.id}>
        <a href={`#/create/file:${encodeURIComponent(f.id)}`} aria-label={`Open ${f.title}`}><Thumb file={f} /></a>
        <input className="file-name" value={f.title} aria-label="Routine name" onChange={e => renameFile(f.id, e.target.value)} />
        <div className="file-meta">{f.n} dancers · {fmtTime(f.seconds)} · {f.genre}</div>
        <div className="file-meta"><span className={`pill ${tone}`}>{word}</span> {when(f.at)}</div>
        <div className="file-actions">
          <a className="btn sm primary" href={`#/create/file:${encodeURIComponent(f.id)}`}>Open</a>
          <button className="btn sm" onClick={() => duplicateFile(f.id)}>Duplicate</button>
          {ask === f.id ? <button className="btn sm danger" onClick={() => { deleteFile(f.id); setAsk(null) }}>Really delete</button> : <button className="btn ghost sm" onClick={() => setAsk(f.id)}>Delete</button>}
        </div>
      </article> })}</div>
  </div><Footer /></div>
}
