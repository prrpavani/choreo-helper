import { useState } from 'react'
import { MOVES, STEP_GROUPS, STYLE_NAMES } from '../data/vocabulary'
import { Brief, stepTitle } from '../lib/brief'

const LENGTHS = [30, 45, 60, 90, 120, 180, 240, 300]
const label = (s: number) => s < 60 ? `${s} seconds` : s % 60 === 0 ? `${s / 60} minute${s === 60 ? '' : 's'}` : `${Math.floor(s / 60)}:${String(s % 60).padStart(2, '0')}`
const GAPS = [40, 60, 80, 90, 100, 120, 150]

function Field({ name, children }: { name: string; children: React.ReactNode }) { return <label className="param"><span>{name}</span>{children}</label> }

/** Every setting a routine has, always in view. Changing one rebuilds the routine, and Lean checks it again. */
export function Params({ brief, onChange, locked, inline, minSeconds }: { brief: Brief; onChange: (b: Brief) => void; locked?: boolean; inline?: boolean; minSeconds?: number }) {
  const [open, setOpen] = useState(false)
  const set = (p: Partial<Brief>) => onChange({ ...brief, ...p })
  const toggle = (l: string[], v: string) => l.includes(v) ? l.filter(x => x !== v) : [...l, v]
  const lens = brief.seconds && !LENGTHS.includes(brief.seconds) ? [...LENGTHS, brief.seconds].sort((a, b) => a - b) : LENGTHS
  return <div className={`params ${inline ? 'inline' : ''}`} aria-label="Routine settings">
    <Field name="Dancers"><select disabled={locked} value={brief.dancers ?? 8} onChange={e => set({ dancers: Number(e.target.value) })}>{[2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16].map(k => <option key={k}>{k}</option>)}</select></Field>
    <Field name="Start off stage"><select disabled={locked} value={brief.waiting ?? -1} onChange={e => { const v = Number(e.target.value); set({ waiting: v < 0 ? null : v }) }}><option value={-1}>You choose</option>{Array.from({ length: Math.max(1, brief.dancers ?? 8) }, (_, k) => <option key={k} value={k}>{k === 0 ? 'Nobody' : k}</option>)}</select></Field>
    <Field name={minSeconds ? `Length · needs ${label(minSeconds)}+` : 'Length'}><select disabled={locked} value={brief.seconds ?? 60} onChange={e => set({ seconds: Number(e.target.value) })}>{lens.map(s => <option key={s} value={s}>{label(s)}{minSeconds && s < minSeconds ? ' (too short)' : ''}</option>)}</select></Field>
    <Field name="Style"><select disabled={locked} value={brief.style ?? ''} onChange={e => set({ style: e.target.value || null })}><option value="">Any</option>{STYLE_NAMES.map(s => <option key={s}>{s}</option>)}</select></Field>
    <Field name="Keep apart"><select value={brief.gap} onChange={e => set({ gap: Number(e.target.value) })}>{GAPS.map(g => <option key={g} value={g}>{g} cm</option>)}</select></Field>
    <Field name="Allow for mistakes"><select value={brief.drift} onChange={e => set({ drift: Number(e.target.value) })}>{[0, 5, 10, 15, 20, 30].map(g => <option key={g} value={g}>{g === 0 ? 'None' : `${g} cm each`}</option>)}</select></Field>
    <div className="param moves-pick">
      <span>Moves and steps</span>
      <button type="button" className="pick-btn" disabled={locked} aria-expanded={open} onClick={() => setOpen(v => !v)}>{brief.moves.length + brief.steps.length ? `${brief.moves.length + brief.steps.length} chosen` : 'Choose'} <i aria-hidden>{open ? '▴' : '▾'}</i></button>
      {open && <div className="pick-panel" role="dialog" aria-label="Moves and steps">
        <div className="pick-head"><b>In the order you pick them</b><button className="btn ghost sm" onClick={() => setOpen(false)}>Done</button></div>
        <h4>Shapes</h4><div className="chips">{MOVES.filter(m => m.kind === 'shape').map(m => <button key={m.id} title={m.text} aria-pressed={brief.moves.includes(m.id)} className={`chip ${brief.moves.includes(m.id) ? 'on' : ''}`} onClick={() => set({ moves: toggle(brief.moves, m.id) })}>{m.title}</button>)}</div>
        <h4>Transitions</h4>{MOVES.filter(m => m.kind === 'travel').map(m => <button key={m.id} aria-pressed={brief.moves.includes(m.id)} className={`pick-row ${brief.moves.includes(m.id) ? 'on' : ''}`} onClick={() => set({ moves: toggle(brief.moves, m.id) })}><b>{m.title}</b><span>{m.text}</span></button>)}
        <h4>Steps</h4>{STEP_GROUPS.map(g => <div key={g.style} className="pick-group"><span>{g.style}</span><div className="chips">{g.steps.map(s => <button key={s.word} aria-pressed={brief.steps.includes(s.word)} className={`chip ${brief.steps.includes(s.word) ? 'on' : ''}`} onClick={() => set({ steps: toggle(brief.steps, s.word) })}>{s.title}</button>)}</div></div>)}
        {brief.steps.length > 0 && <p className="pick-note">Dancing: {brief.steps.map(stepTitle).join(', ')}</p>}
      </div>}
    </div>
  </div>
}
