import { useEffect, useState } from 'react'
import { SceneData } from './lib/routine'
import { Workspace } from './App'
import { routineById } from './data/catalog'
import { clock } from './lib/clock'
import { fileById, loadTeam, subscribe } from './lib/progress'
import { Brief } from './lib/brief'
import { Explore } from './pages/Explore'
import { Files } from './pages/Files'
import { Home } from './pages/Home'

const parse = () => (location.hash.replace(/^#\/?/, '') || 'create').split('/').map(decodeURIComponent)
const NAV: [string, string, string][] = [['create', 'Studio', '#/create'], ['files', 'My routines', '#/files'], ['explore', 'Library', '#/explore'], ['home', 'About', '#/home']]

export interface Seed { prompt: string; n: number; scene?: SceneData; gap?: number; title?: string; fileId?: string; brief?: Brief; blank?: boolean; program?: unknown }

/** The whole product: navigation, and the pages. The Create room stays alive when you step out of it. */
export function Shell() {
  const [route, setRoute] = useState(parse)
  const [seed, setSeed] = useState<Seed | null>(null)
  useEffect(() => {
    const on = () => { clock.pause(); setRoute(parse()) }
    addEventListener('hashchange', on); return () => removeEventListener('hashchange', on)
  }, [])
  // the team's colour runs through the whole product
  useEffect(() => { const apply = () => document.documentElement.style.setProperty('--team', loadTeam().color); apply(); return subscribe(apply) }, [])
  const [page, arg] = route
  useEffect(() => {
    document.title = `${NAV.find(n => n[0] === page)?.[1] ?? 'Choreo'} · Choreo`
    const load = (id: string) => {
      if (id === 'new') return setSeed(s => ({ prompt: '', n: (s?.n ?? 0) + 1, blank: true }))
      if (id.startsWith('file:')) { const f = fileById(id.slice(5)); if (f) setSeed(s => ({ prompt: f.prompt, n: (s?.n ?? 0) + 1, scene: (f.scene as SceneData | null) ?? undefined, gap: f.gap, title: f.title, fileId: f.id, brief: f.brief as Brief | undefined, program: f.program ?? undefined })); return }
      const r = routineById(id); if (r) setSeed(s => ({ prompt: r.prompt, n: (s?.n ?? 0) + 1, scene: r.scene, gap: r.gap, title: r.title }))
    }
    if (page === 'create' && arg) { load(arg); history.replaceState(null, '', '#/create') }
  }, [page, arg])
  const navOn = page
  return <div className="shell">
    <header className="nav">
      <a className="wordmark" href="#/home" aria-label="Choreo, home"><i />Choreo</a>
      <nav className="nav-links" aria-label="Main">{NAV.map(([k, l, h]) => <a key={k} href={h} className={navOn === k ? 'on' : ''} aria-current={navOn === k ? 'page' : undefined}>{l}</a>)}</nav>
    </header>
    <div className="page-host">
      <Workspace active={page === 'create'} seed={seed} />
      {page === 'home' && <Home />}
      {page === 'files' && <Files />}
      {page === 'explore' && <Explore key={arg ?? ''} initialStyle={arg} />}
    </div>
  </div>
}
