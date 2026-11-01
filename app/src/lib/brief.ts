import { ALL_STEPS, MOVES, styleIn } from '../data/vocabulary'

export type Ambition = 'simple' | 'rich' | 'showstopper'
/** What someone wants, built up over a conversation. Lean's planner only ever sees the words made from it. */
export interface Brief { dancers: number | null; seconds: number | null; style: string | null; ambition: Ambition | null; moves: string[]; steps: string[]; bpm: number | null; gap: number; inspiredBy: string | null; waiting: number | null; drift: number }
export const emptyBrief = (): Brief => ({ dancers: null, seconds: null, style: null, ambition: null, moves: [], steps: [], bpm: null, gap: 60, inspiredBy: null, waiting: null, drift: 0 })

const NUM: Record<string, number> = { one: 1, a: 1, two: 2, three: 3, four: 4, five: 5, six: 6, seven: 7, eight: 8, nine: 9, ten: 10, eleven: 11, twelve: 12, fourteen: 14, sixteen: 16, thirty: 30, forty: 40, fifty: 50, sixty: 60, ninety: 90 }
const num = (s: string) => /^\d+$/.test(s) ? Number(s) : NUM[s] ?? null
const NUMWORD = '(\\d+|one|two|three|four|five|six|seven|eight|nine|ten|eleven|twelve|fourteen|sixteen|thirty|forty|fifty|sixty|ninety)'
const clamp = (v: number, a: number, b: number) => Math.max(a, Math.min(b, v))

export interface Reading { brief: Brief; heard: string[] }
const titleOf = (id: string) => MOVES.find(m => m.id === id)?.title ?? id
export const stepTitle = (w: string) => ALL_STEPS.find(s => s.word === w)?.title ?? w

/** Read a message or a page of notes, and change the brief by what it says. */
export function readWords(text: string, b0: Brief): Reading {
  const t = ` ${text.toLowerCase().replace(/[^a-z0-9é: -]+/g, ' ').replace(/\s+/g, ' ')} `.replace(/-/g, ' '), b: Brief = { ...b0, moves: [...b0.moves], steps: [...b0.steps] }, heard: string[] = []
  let m: RegExpMatchArray | null
  if ((m = t.match(new RegExp(`${NUMWORD} (dancers?|people|performers?)\\b`))) && num(m[1])) { b.dancers = clamp(num(m[1])!, 2, 16); heard.push(`${b.dancers} dancers`) }
  else if ((m = t.match(new RegExp(`\\b(team|cast|crew|group|company) of ${NUMWORD}\\b`))) && num(m[2])) { b.dancers = clamp(num(m[2])!, 2, 16); heard.push(`${b.dancers} dancers`) }
  else if (/\bmore (dancers|people)\b/.test(t)) { b.dancers = clamp((b.dancers ?? 8) + 2, 2, 16); heard.push(`${b.dancers} dancers`) }
  else if (/\b(fewer|less) (dancers|people)\b/.test(t)) { b.dancers = clamp((b.dancers ?? 8) - 2, 2, 16); heard.push(`${b.dancers} dancers`) }
  if ((m = t.match(/\b(\d+):(\d\d)\b/))) { b.seconds = clamp(Number(m[1]) * 60 + Number(m[2]), 15, 600); heard.push(`${b.seconds} seconds`) }
  else if (/\b(a|one) minute and a half\b|\bone and a half minutes?\b/.test(t)) { b.seconds = 90; heard.push('90 seconds') }
  else if ((m = t.match(new RegExp(`${NUMWORD} (minutes?|mins?)\\b`))) && num(m[1])) { b.seconds = clamp(num(m[1])! * 60, 15, 600); heard.push(`${num(m[1])} minute${num(m[1]) === 1 ? '' : 's'}`) }
  else if ((m = t.match(new RegExp(`${NUMWORD} (seconds?|secs?)\\b`))) && num(m[1])) { b.seconds = clamp(num(m[1])!, 15, 600); heard.push(`${b.seconds} seconds`) }
  else if (/\bshorter\b/.test(t)) { b.seconds = clamp((b.seconds ?? 60) - 30, 15, 600); heard.push(`${b.seconds} seconds`) }
  else if (/\blonger\b/.test(t)) { b.seconds = clamp((b.seconds ?? 60) + 30, 15, 600); heard.push(`${b.seconds} seconds`) }
  if ((m = t.match(new RegExp(`${NUMWORD} (of them |dancers? |people )?(wait|waiting|off ?stage|in the wings)\\b`))) && num(m[1]) !== null) { b.waiting = num(m[1]); heard.push(`${b.waiting} waiting off stage`) }
  else if (/\b(half|some)( of them)?( are| wait| waiting)? ?(wait|waiting|off ?stage|in the wings)\b/.test(t)) { b.waiting = Math.floor((b.dancers ?? 8) / 2); heard.push(`${b.waiting} waiting off stage`) }
  else if (/\b(everyone|all)( on)?( comes?)?( on)? together\b|\bnobody (waits|off ?stage)\b/.test(t)) { b.waiting = 0; heard.push('everyone on together') }
  const style = styleIn(t); if (style) { b.style = style; heard.push(style) }
  if (/\b(showstopp|fancy|crazy|insane|wild|spectacular|dazzling|virtuosic|very complicated|really complicated|as complicated)/.test(t)) { b.ambition = 'showstopper'; heard.push('a showstopper') }
  else if (/\b(complicated|complex|intricate|elaborate|advanced|ambitious|impressive|challenging|difficult|more movement|more going on)/.test(t)) { b.ambition = 'rich'; heard.push('plenty going on') }
  else if (/\b(simple|easy|beginner|clean and simple|keep it simple|minimal)\b/.test(t)) { b.ambition = 'simple'; heard.push('simple') }
  // loose descriptions count: someone with only a feeling of the piece should still get somewhere
  if (!b.ambition) {
    if (/\b(competition|finale|big finish|grand|wow)\b/.test(t)) { b.ambition = 'showstopper'; heard.push('a big finish') }
    else if (/\b(energetic|high energy|hype|fun|party|lively|exciting)\b/.test(t)) { b.ambition = 'rich'; heard.push('high energy') }
  }
  if (!b.bpm && /\b(elegant|graceful|gentle|calm|romantic|dreamy|flowing|soft)\b/.test(t)) { b.bpm = 84; heard.push('slow and flowing') }
  if (!b.dancers && /\b(small group|duo|couple)\b/.test(t)) { b.dancers = /\b(duo|couple)\b/.test(t) ? 2 : 4; heard.push(`${b.dancers} dancers`) }
  if (!b.dancers && /\b(big group|whole team|large group|everyone)\b/.test(t)) { b.dancers = 12; heard.push('12 dancers') }
  if ((m = t.match(/\b(\d{2,3}) ?bpm\b/))) { b.bpm = clamp(Number(m[1]), 50, 200); heard.push(`${b.bpm} bpm`) }
  else if (/\b(faster|more energy)\b/.test(t)) { b.bpm = clamp((b.bpm ?? 120) + 12, 50, 200); heard.push(`${b.bpm} bpm`) }
  else if (/\bslower\b/.test(t)) { b.bpm = clamp((b.bpm ?? 120) - 12, 50, 200); heard.push(`${b.bpm} bpm`) }
  if ((m = t.match(/\b(\d{2,3}) ?(cm|centimet)/))) { b.gap = clamp(Number(m[1]), 40, 150); heard.push(`a ${b.gap} cm gap`) }
  // words with "no" or "without" in front take something out
  const negated = (r: RegExp) => { const src = r.source; return new RegExp(`\\b(no|without|remove|drop|lose|skip) (the |a |any )?(${src})`).test(t) }
  for (const mv of MOVES) {
    if (negated(mv.hear)) { if (b.moves.includes(mv.id)) { b.moves = b.moves.filter(x => x !== mv.id); heard.push(`no ${mv.title.toLowerCase()}`) } }
    else if (mv.hear.test(t) && !b.moves.includes(mv.id)) { b.moves.push(mv.id); heard.push(mv.title.toLowerCase()) }
  }
  for (const s of ALL_STEPS) {
    const r = new RegExp(`\\b${s.word}s?\\b`)
    if (new RegExp(`\\b(no|without|remove|drop|lose|skip) (the |a |any )?${s.word}`).test(t)) { if (b.steps.includes(s.word)) { b.steps = b.steps.filter(x => x !== s.word); heard.push(`no ${s.title.toLowerCase()}`) } }
    else if (r.test(t) && !b.steps.includes(s.word)) { b.steps.push(s.word); heard.push(s.title.toLowerCase()) }
  }
  return { brief: b, heard }
}

const MOVE_WORD = (id: string, n: number) => {
  if (id === 'grid') { const rows = n % 2 === 0 ? 2 : 1; return `a grid of ${n / rows} by ${rows}` }
  return MOVES.find(m => m.id === id)?.phrase ?? id
}
const ORDER_WORDS: Record<number, string> = { 2: 'two', 3: 'three', 4: 'four', 5: 'five', 6: 'six', 7: 'seven', 8: 'eight' }
const STYLE_WORD: Record<string, string> = { Odissi: 'odissi', 'Rajasthani folk': 'rajasthani', Kathak: 'kathak', Latin: 'latin', 'K-pop': 'kpop', Jazz: 'jazz', Contemporary: 'contemporary', 'South Indian fusion': 'south indian fusion', Ballet: 'ballet', Cinematic: 'cinematic', 'Hip-hop': 'hip hop', Afrobeat: 'afrobeat', House: 'house' }
/** Turn a brief into the words Lean's planner reads. */
export function briefToPrompt(b: Brief): string {
  const n = b.dancers ?? 8, right = Math.floor(n / 2), left = n - right, secs = b.seconds ?? 60
  const word = (k: number) => ORDER_WORDS[k] ?? String(k)
  const style = b.style ? ` of ${STYLE_WORD[b.style] ?? b.style.toLowerCase()}` : ''
  // a simple routine names its own shapes, so the planner adds nothing of its own
  const moves = b.moves.length || b.ambition !== 'simple' ? b.moves : ['grid', 'flip']
  const steps = b.steps.length ? ` Steps: ${b.steps.join(', ')}.` : ''
  const moveText = moves.map(id => MOVE_WORD(id, n))
  const opening = moveText.length ? ` form ${moveText[0]}${moveText.slice(1).map(x => `, then ${x}`).join('')}, then leave.` : ' come in, then leave.'
  const tone = b.ambition === 'showstopper' ? ' Make it a showstopper.' : b.ambition === 'rich' ? ' Make it elaborate.' : ''
  const bpm = b.bpm ? ` At ${b.bpm} bpm.` : ''
  const waiting = b.waiting === null ? '' : b.waiting > 0 ? ` ${word(Math.min(b.waiting, n - 1))} of them wait off stage.` : ' 0 of them wait off stage.'
  return `${secs} seconds${style}.${bpm} ${word(left)} dancers from stage left and ${word(right)} from stage right${opening}${tone}${waiting}${steps}`
}

export interface Chip { label: string; say: string }
export interface Question { key: string; text: string; chips: Chip[] }
const list = (l: string[]) => l.map(x => ({ label: x, say: x }))
export function nextQuestion(b: Brief, asked: string[]): Question | null {
  const q: Question[] = []
  if (!b.style) q.push({ key: 'style', text: 'What style are you picturing?', chips: list(['Raas', 'Bhangra', 'Bollywood fusion', 'Kuthu', 'South Indian', 'Kathak', 'Hip-hop', 'K-pop', 'Latin', 'Contemporary']) })
  if (!b.dancers) q.push({ key: 'dancers', text: 'How many dancers do you have?', chips: [4, 6, 8, 12, 16].map(k => ({ label: String(k), say: `${k} dancers` })) })
  if (!b.seconds) q.push({ key: 'seconds', text: 'How long is the set?', chips: [['30 seconds', '30 seconds'], ['1 minute', 'one minute'], ['90 seconds', '90 seconds'], ['2 minutes', 'two minutes'], ['3 minutes', 'three minutes']].map(([label, say]) => ({ label, say })) })
  if (b.waiting === null) q.push({ key: 'waiting', text: 'Who starts off stage? Dancers waiting in the wings can swap in or join mid-piece, and Lean checks nobody runs into each other on the way.', chips: [{ label: 'Half wait off stage', say: 'half wait off stage' }, { label: 'Two wait off stage', say: 'two waiting off stage' }, { label: 'Everyone on together', say: 'everyone on together' }] })
  if (false as boolean) q.push({ key: 'ambition', text: 'How ambitious should the movement be?', chips: [{ label: 'Keep it simple', say: 'keep it simple' }, { label: 'Plenty going on', say: 'make it elaborate' }, { label: 'A showstopper', say: 'a showstopper' }] })
  if (!b.moves.length) q.push({ key: 'moves', text: 'Is there a move you already see in your head? A weave, a burst, a snake, a zipper, a spiral?', chips: [...list(['A weave', 'A burst', 'A snake', 'A zipper', 'A spiral']), { label: 'Surprise me', say: 'surprise me' }] })
  if (!b.steps.length) q.push({ key: 'steps', text: 'Any steps you want in the grooves? Open "Moves and steps" for the full list.', chips: [{ label: 'You choose', say: 'you choose' }] })
  return q.find(x => !asked.includes(x.key)) ?? null
}
export const describeBrief = (b: Brief) => [b.dancers && `${b.dancers} dancers`, b.waiting ? `${b.waiting} waiting off stage` : null, b.style, b.seconds && (b.seconds % 60 === 0 ? `${b.seconds / 60} min` : `${b.seconds} s`), b.ambition === 'showstopper' ? 'showstopper' : b.ambition === 'rich' ? 'elaborate' : b.ambition, ...b.moves.map(titleOf), ...b.steps.map(stepTitle)].filter(Boolean).join(' · ')
/** A name for a routine, taken from what was asked for. */
export const titleFor = (b: Brief) => b.inspiredBy ? `After ${b.inspiredBy}` : `${b.style ?? 'New'} ${b.ambition === 'showstopper' ? 'showstopper' : 'routine'}`
