import { useState } from 'react'
import { summarize } from '../lib/verification'
import { Report, clearanceSeries, fmtTime, placeName } from '../lib/routine'
import { KernelState } from './ProofRail'

export interface HistoryEntry { id: number; change: string; report: Report; kernel: KernelState; overrides: { move: number; dancer: number; x: number; y: number }[]; scene: Report['scene']; at: number }

export function describeChange(r: Report, frame: number, dancer: number, x: number, y: number, frames: number) {
  const which = `formation ${frame + 1}`; void frames
  return `Moved ${r.names[dancer]} to ${placeName(x, y)} at ${which}`
}
const closest = (r: Report) => Math.round(Math.min(...clearanceSeries(r, 300).map(s => s.dist)) / 10)
const clashes = (r: Report) => new Set(r.problems.filter(p => p.kind === 'collision').map(p => `${r.names[Math.max(p.i!, p.j!)]} and ${r.names[Math.min(p.i!, p.j!)]}`))
const asksOf = (r: Report) => { const m = new Map<string, boolean>(); r.asks.forEach(a => m.set(a.text, (m.get(a.text) ?? true) && a.ok)); return m }

/** What changed between two versions, and whether it got better or worse. */
function diff(prev: Report | null, cur: Report) {
  const out: { kind: 'worse' | 'better' | 'same'; text: string }[] = []
  if (!prev) {
    cur.rejected.forEach(i => out.push({ kind: 'worse', text: `Lean rejected the first idea: ${i.title.toLowerCase()}. ${i.why}.` }))
    if (cur.rejected.length) out.push({ kind: 'better', text: 'The planner revised it, and the new version passed.' })
    return out
  }
  const a = clashes(prev), b = clashes(cur)
  b.forEach(c => { if (!a.has(c)) out.push({ kind: 'worse', text: `${c} now clash` }) })
  a.forEach(c => { if (!b.has(c)) out.push({ kind: 'better', text: `${c} no longer clash` }) })
  const pa = asksOf(prev), pb = asksOf(cur)
  pb.forEach((ok, t) => { const was = pa.get(t); if (was === true && !ok) out.push({ kind: 'worse', text: `Broke: ${t}` }); if (was === false && ok) out.push({ kind: 'better', text: `Holds again: ${t}` }) })
  const ca = closest(prev), cb = closest(cur)
  if (ca !== cb) out.push({ kind: cb < ca ? 'worse' : 'better', text: `Closest pass ${ca} cm to ${cb} cm` })
  if (prev.config.dmin !== cur.config.dmin) out.push({ kind: 'same', text: `Now proving a gap of ${cur.config.dmin / 10} cm` })
  return out
}
function result(k: KernelState, r: Report) {
  if (k.status === 'not_checked') return { mark: 'wait', icon: '', text: 'Not checked' }
  if (k.status === 'running') return { mark: 'wait', icon: '', text: 'Lean is checking' }
  if (k.status === 'verified') return { mark: 'ok', icon: '✓', text: `Proved in ${(k.ms / 1000).toFixed(1)} s` }
  if (k.status === 'refuted') { const first = r.problems.find(p => p.second !== undefined); return { mark: 'no', icon: '✕', text: `Proved wrong in ${(k.ms / 1000).toFixed(1)} s${first ? `, at ${fmtTime(first.second!, true)}` : ''}` } }
  if (k.status === 'timeout' || k.status === 'error') return { mark: 'warn', icon: '!', text: 'No verdict: the check did not finish' }
  return { mark: 'warn', icon: '!', text: r.error ?? 'Not proved' }
}
/** The time machine: what a set of edits did to the guarantees. */
function Compare({ a, b }: { a: HistoryEntry; b: HistoryEntry }) {
  const judged = (e: HistoryEntry) => e.kernel.status === 'not_checked' || e.kernel.status === 'running' ? 'Not checked' : null
  const row = (e: HistoryEntry) => new Map(summarize(e.report, e.kernel).flatMap(c => c.items.map(i => [i.text, judged(e) ?? (e.kernel.status === 'error' || e.kernel.status === 'timeout' ? 'No verdict' : !i.ok ? 'Failed' : c.state === 'verified' ? 'Proved' : 'Not proved')] as [string, string])))
  const A = row(a), B = row(b), keys = [...new Set([...A.keys(), ...B.keys()])]
  const changed = keys.filter(k => A.get(k) !== B.get(k))
  const show = [...changed, ...keys.filter(k => !changed.includes(k))].slice(0, 12)
  const cls = (v?: string) => v === 'Proved' ? 'ok' : v === 'Failed' ? 'no' : 'mute'
  return <div style={{ marginTop: 10 }}>
    <div className="proj-title" style={{ fontSize: 11, fontWeight: 700, color: 'var(--faint)' }}>{changed.length} of {keys.length} guarantees changed</div>
    <p className="rail-p small" style={{ margin: 0 }}>From: {a.change}<br />To: {b.change}</p>
    <table className="ctable"><thead><tr><th>Guarantee</th><th>Before</th><th>After</th></tr></thead>
      <tbody>{show.map(k => <tr key={k} className={A.get(k) !== B.get(k) ? 'changed' : ''}><td>{k}</td><td><span className={`pill ${cls(A.get(k))}`}>{A.get(k) ?? 'None'}</span></td><td><span className={`pill ${cls(B.get(k))}`}>{B.get(k) ?? 'None'}</span></td></tr>)}</tbody></table>
  </div>
}
/** Every version of the routine and what Lean concluded, newest first. Click one to go back to it. */
export function History({ entries, currentId, onRestore }: { entries: HistoryEntry[]; currentId: number; onRestore: (e: HistoryEntry) => void }) {
  const [pick, setPick] = useState<number[]>([])
  if (!entries.length) return null
  const toggle = (id: number) => setPick(p => p.includes(id) ? p.filter(x => x !== id) : [...p.slice(-1), id])
  const chosen = entries.filter(e => pick.includes(e.id))
  const shown = entries.map((e, i) => ({ e, changes: diff(i ? entries[i - 1].report : null, e.report), res: result(e.kernel, e.report) })).reverse()
  return <details className="sec" open>
    <summary><span>Proof history</span><em>{entries.length} {entries.length === 1 ? 'version' : 'versions'}</em></summary>
    <div className="sec-body"><ol className="hist">{shown.map(({ e, changes, res }, k) => <li key={e.id} className={e.id === currentId ? 'now' : ''}>
      <span className={`dot ${res.mark}`}>{res.icon}</span>
      <label style={{ float: 'right', fontSize: 11, color: 'var(--faint)', marginTop: 5 }}><input type="checkbox" checked={pick.includes(e.id)} onChange={() => toggle(e.id)} aria-label={`Compare ${e.change}`} /> compare</label>
      <button onClick={() => onRestore(e)} title="Go back to this version">
        <span className="h-title">{e.change}</span>
        <span className="h-meta">{res.text}{e.id === currentId && k !== 0 ? ' · showing this version' : ''}</span>
        {changes.length > 0 && <ul>{changes.slice(0, 5).map((c, i) => <li key={i} className={c.kind}>{c.text}</li>)}{changes.length > 5 && <li>and {changes.length - 5} more</li>}</ul>}
      </button>
    </li>)}</ol>{chosen.length === 2 ? <Compare a={chosen[0]} b={chosen[1]} /> : entries.length > 1 && <p className="rail-p small" style={{ marginTop: 8 }}>Tick two versions to see what happened to the guarantees.</p>}</div>
  </details>
}
