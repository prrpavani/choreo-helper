import { useState } from 'react'
import inspiration from '../data/inspiration.json'
import { ROUTINES } from '../data/catalog'
import { Brief, Chip, briefToPrompt, describeBrief, nextQuestion, readWords } from '../lib/brief'
import { Imported, readImport } from '../lib/importer'
import { getStore } from '../lib/progress'

export interface Message { from: 'you' | 'director'; text: string; chips?: Chip[] }
const NOW: Chip = { label: 'Just make something', say: 'make it' }
export const OPENING: Message = { from: 'director', text: "What do you have in mind? Even a feeling is enough.", chips: [{ label: 'Something for a wedding', say: 'Something fun for a wedding' }, { label: 'A big competition finish', say: 'A big competition finish, fusion' }, { label: 'Something graceful', say: 'Something graceful and contemporary' }, { label: 'A garba night', say: 'A garba night with the whole team' }, NOW] }
const GO = /^(make it|make this|go|go ahead|yes|yep|do it|ready|generate|build it|create it|let's go|lets go)\b/i
const PASS = /^(surprise me|you choose|you pick|up to you|anything|no idea|not sure|skip)\b/i

interface Props { goLabel?: string; brief: Brief; setBrief: (b: Brief) => void; messages: Message[]; setMessages: (f: (m: Message[]) => Message[]) => void; busy: boolean; onMake: (b: Brief) => void; onOpen: (r: NonNullable<Imported['routine']>) => void }

/** A conversation that builds up the brief. It reads dance words: it is not an AI model and it does not invent anything. */
export function Director({ goLabel, brief, setBrief, messages, setMessages, busy, onMake, onOpen }: Props) {
  const [draft, setDraft] = useState(''), [asked, setAsked] = useState<string[]>([]), [ideas, setIdeas] = useState(false)
  const [opened, setOpened] = useState<NonNullable<Imported['routine']> | null>(null)
  const ask = (b: Brief, seen: string[], lead: string) => {
    const q = nextQuestion(b, seen)
    if (q) { setAsked([...seen, q.key]); return { text: lead ? `${lead} ${q.text}` : q.text, chips: [...q.chips, NOW] } }
    return { text: `${lead} That's enough to go on: ${describeBrief(b) || '8 dancers, one minute'}.`.trim(), chips: [{ label: 'Make it', say: 'make it' }] }
  }
  const say = (text: string) => {
    const t = text.trim(); if (!t) return
    setDraft('')
    const you: Message = { from: 'you', text: t }
    if (GO.test(t)) { setMessages(m => [...m, you]); onMake(brief); return }
    const { brief: next, heard } = readWords(t, brief)
    setBrief(next)
    const pass = PASS.test(t)
    const lead = heard.length ? `Got it: ${heard.join(', ')}.` : pass ? "I'll choose." : 'I read dance words rather than whole sentences, and I didn\'t catch one there. That\'s fine: I can choose for you.'
    const reply = ask(next, asked, lead)
    setMessages(m => [...m, you, { from: 'director', ...reply }])
  }
  const useIdea = (title: string, prompt: string) => {
    const { brief: b, heard } = readWords(prompt, { ...brief, moves: [], steps: [] }), next = { ...b, inspiredBy: title }
    setBrief(next); setIdeas(false)
    const reply = ask(next, asked, `Starting from ${title}. I took: ${heard.join(', ') || 'its overall idea'}.`)
    setMessages(m => [...m, { from: 'you', text: `Inspired by ${title}` }, { from: 'director', ...reply }])
  }
  const bring = async (f: File) => {
    const r = await readImport(f, brief)
    if (r.kind === 'unreadable') { setMessages(m => [...m, { from: 'you', text: `Brought ${r.name}` }, { from: 'director', text: r.why! }]); return }
    setBrief(r.brief!)
    if (r.kind === 'routine') setOpened(r.routine!)
    const reply = ask(r.brief!, asked, `From ${r.name} I took: ${r.heard!.join(', ') || 'its shape'}.${r.kind === 'routine' ? ' You can also open it exactly as it was.' : ''}`)
    setMessages(m => [...m, { from: 'you', text: `Brought ${r.name}` }, { from: 'director', ...reply }])
  }
  const saved = getStore().files ?? []
  const last = messages[messages.length - 1]
  const toolbar = <div className="dr-tools">
    <button type="button" className={`chip ${ideas ? 'on' : ''}`} aria-expanded={ideas} onClick={() => setIdeas(v => !v)}>Ideas</button>
    <label className="chip song-chip">Bring a file<input type="file" accept=".txt,.md,.csv,.json,text/*,application/json,video/*" aria-label="Bring a file for inspiration" onChange={e => { const f = e.target.files?.[0]; if (f) bring(f); e.target.value = '' }} /></label>
    <span className="spacer" />
    <button type="button" className="btn primary dh-go" disabled={busy} onClick={() => { const r = draft.trim() ? readWords(draft, brief).brief : brief; setDraft(''); onMake(r) }}>{busy ? 'Planning…' : goLabel ?? 'Make it and prove it'}</button>
  </div>
  const ideaList = ideas && <div className="dr-ideas" aria-label="Ideas to start from">
    <div className="dr-ideas-h">Forms that can be set out exactly</div>
    {inspiration.map(x => <button key={x.id} className="idea" onClick={() => useIdea(x.title, x.prompt)}><b>{x.title}</b><span className="tag">{x.tradition}</span><span>{x.line}</span></button>)}
    <div className="dr-ideas-h">From the Library</div>
    {ROUTINES.map(r => <button key={r.id} className="idea" onClick={() => useIdea(r.title, r.prompt)}><b>{r.title}</b><span className="tag">{r.style}</span><span>{r.blurb}</span></button>)}
    {saved.length > 0 && <><div className="dr-ideas-h">Your routines</div>{saved.map(r => <button key={r.id} className="idea" onClick={() => useIdea(r.title, r.prompt)}><b>{r.title}</b><span className="tag">{r.genre}</span></button>)}</>}
    <p className="dr-source">Traditional forms have many versions. These are starting points, inspired by the form and not a rendition of it.</p>
  </div>
  const box = <form className="dr-input" onSubmit={e => { e.preventDefault(); say(draft) }}>
    <textarea value={draft} rows={3} placeholder={goLabel ? 'Add a spiral, make it shorter, no burst…' : 'A fun bhangra piece for eight, half of them waiting off stage…'} aria-label="Describe your choreography" onChange={e => setDraft(e.target.value)} onKeyDown={e => { if (e.key === 'Enter' && !e.shiftKey) { e.preventDefault(); say(draft) } }} />
    {toolbar}
  </form>
  // on the opening page the conversation is one line under the prompt, not a chat window
  return <section className="director hero-box" aria-label="Describe your choreography">
    {box}{ideaList}
    <div className="dr-next" role="log" aria-live="polite">
      <div className={`dr-msg ${last.from === 'you' ? 'you' : 'them'}`}><p>{last.text}</p></div>
      {last.chips && <div className="chips">{last.chips.map(c => <button key={c.label} className="chip" disabled={busy && GO.test(c.say)} onClick={() => say(c.say)}>{c.label}</button>)}</div>}
      {opened && <button className="btn sm" onClick={() => { onOpen(opened); setOpened(null) }}>Open "{opened.title}" as it was</button>}
    </div>
  </section>
}
export { briefToPrompt }
