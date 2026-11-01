// A dancer's own progress. It lives in this browser only. There is no account and nothing here is sent anywhere,
// except the team's dancer names, which go to the local Lean planner so they appear in the routine.
const KEY = 'choreo-v1'
export interface RoutineProgress { mastered: number[]; total: number; lastPlayed: number; notes: string; title: string; prompt: string; completed: boolean; seconds: number; dancer: number | null }
export interface Team { name: string; org: string; color: string; about: string; members: string[] }
export interface Profile { name: string; bio: string; styles: string[] }
export interface SavedFile { id: string; title: string; prompt: string; scene: unknown; gap: number; brief: unknown; status: string; at: number; n: number; seconds: number; genre: string; thumb: [number, number][]; program?: unknown }
interface Store { files: SavedFile[]; routines: Record<string, RoutineProgress>; saved: string[]; days: string[]; proofs: number; refuted: number; team: Team; profile: Profile; history: { at: number; title: string; what: string }[] }
const fresh = (): Store => ({ files: [], routines: {}, saved: [], days: [], proofs: 0, refuted: 0, history: [],
  team: { name: '', org: '', color: '#B49BDA', about: '', members: [] }, profile: { name: '', bio: '', styles: [] } })
let cache: Store | null = null
const listeners = new Set<() => void>()
function store(): Store {
  if (cache) return cache
  try { cache = { ...fresh(), ...JSON.parse(localStorage.getItem(KEY) ?? '{}') } } catch { cache = fresh() }
  return cache!
}
function commit() { try { localStorage.setItem(KEY, JSON.stringify(store())) } catch { /* this browser won't keep it, and the page still works */ } listeners.forEach(f => f()) }
export const subscribe = (f: () => void) => { listeners.add(f); return () => { listeners.delete(f) } }
export const getStore = () => store()
export const loadTeam = () => store().team
export const saveTeam = (t: Partial<Team>) => { const s = store(); s.team = { ...s.team, ...t }; commit() }
export const saveProfile = (p: Partial<Profile>) => { const s = store(); s.profile = { ...s.profile, ...p }; commit() }
const MAX_FILES = 60
/** Keep a routine, or update the one already kept under this id. */
export function saveFile(f: Omit<SavedFile, 'title'> & { title?: string }) {
  const s = store(), old = s.files.find(x => x.id === f.id)
  const next: SavedFile = { ...f, title: old?.title ?? f.title ?? 'Untitled routine' }
  s.files = [next, ...s.files.filter(x => x.id !== f.id)].slice(0, MAX_FILES); commit()
}
export const setFileStatus = (id: string, status: string) => { const x = store().files.find(y => y.id === id); if (x) { x.status = status; commit() } }
export const renameFile = (id: string, title: string) => { const x = store().files.find(y => y.id === id); if (x) { x.title = title; commit() } }
export const deleteFile = (id: string) => { const s = store(); s.files = s.files.filter(x => x.id !== id); commit() }
export const duplicateFile = (id: string) => { const s = store(), x = s.files.find(y => y.id === id); if (x) { s.files = [{ ...x, id: newFileId(), title: `${x.title} copy`, at: Date.now() }, ...s.files]; commit() } }
export const newFileId = () => `r${Date.now().toString(36)}${Math.floor(Math.random() * 1296).toString(36)}`
export const fileById = (id: string) => store().files.find(x => x.id === id)
export const isSaved = (id: string) => store().saved.includes(id)
export const toggleSaved = (id: string) => { const s = store(); s.saved = s.saved.includes(id) ? s.saved.filter(x => x !== id) : [...s.saved, id]; commit() }
export const recordProof = (status: 'verified' | 'refuted') => { const s = store(); s.proofs++; if (status === 'refuted') s.refuted++; commit() }
const today = () => new Date().toISOString().slice(0, 10)
export function progressFor(id: string): RoutineProgress | undefined { return store().routines[id] }
function touch(id: string, title: string, prompt: string, total: number) {
  const s = store()
  s.routines[id] ??= { mastered: [], total, lastPlayed: 0, notes: '', title, prompt, completed: false, seconds: 0, dancer: null }
  const r = s.routines[id]; r.total = total; r.title = title; r.prompt = prompt; r.lastPlayed = Date.now()
  r.mastered = r.mastered.filter(m => m < total)
  if (!s.days.includes(today())) s.days.push(today())
  return r
}
export function toggleMastered(id: string, title: string, prompt: string, total: number, section: number) {
  const r = touch(id, title, prompt, total), had = r.mastered.includes(section)
  r.mastered = had ? r.mastered.filter(m => m !== section) : [...r.mastered, section]
  const wasDone = r.completed
  r.completed = r.mastered.length === total
  const s = store()
  if (!had) s.history.unshift({ at: Date.now(), title, what: `Mastered section ${section + 1}` })
  if (r.completed && !wasDone) s.history.unshift({ at: Date.now(), title, what: 'Completed the routine' })
  s.history = s.history.slice(0, 40)
  commit()
}
export function addPractice(id: string, title: string, prompt: string, total: number, secs: number) { const r = touch(id, title, prompt, total); r.seconds += secs; commit() }
export function setNotes(id: string, title: string, prompt: string, total: number, notes: string) { const r = touch(id, title, prompt, total); r.notes = notes; commit() }
export function setDancer(id: string, title: string, prompt: string, total: number, d: number | null) { const r = touch(id, title, prompt, total); r.dancer = d; commit() }
/** Consecutive days practised, ending today or yesterday. */
export function streak() {
  const days = new Set(store().days); let n = 0; const d = new Date()
  if (!days.has(d.toISOString().slice(0, 10))) d.setDate(d.getDate() - 1)
  while (days.has(d.toISOString().slice(0, 10))) { n++; d.setDate(d.getDate() - 1) }
  return n
}
export function totals() {
  const r = Object.values(store().routines)
  return { minutes: Math.round(r.reduce((a, x) => a + x.seconds, 0) / 60), sections: r.reduce((a, x) => a + x.mastered.length, 0), completed: r.filter(x => x.completed).length, started: r.length }
}
