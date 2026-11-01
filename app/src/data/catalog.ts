import data from './routines.json'
export interface Routine { id: string; title: string; style: string; difficulty: string; blurb: string; prompt: string; dots: number[][]; scene?: import('../lib/routine').SceneData; gap?: number; sections?: { name: string; line: string }[] }
export const ROUTINES = data as Routine[]
export const routineById = (id: string) => ROUTINES.find(r => r.id === id)
export const STYLE_COLOR: Record<string, string> = {
  'Bollywood fusion': '#B49BDA', Bhangra: '#C8A66B', Raas: '#8C9CC7', Kuthu: '#D9734E', 'South Indian fusion': '#A3B89D', 'Hip-hop': '#7F97B8', 'Contemporary fusion': '#C9C3BB',
}
export const STYLES: { name: string; line: string }[] = [
  { name: 'Bollywood fusion', line: 'Filmi storytelling, thumkas and jhatkas, mashups that never sit still.' },
  { name: 'Bhangra', line: 'Punjabi energy on the dhol: dhamaal, chaal, luddi.' },
  { name: 'Raas', line: 'From Gujarat: circles and sticks, always turning, do taali and tran taali.' },
  { name: 'Kuthu', line: 'Tamil street energy on the parai. Everybody dances, nobody holds back.' },
  { name: 'South Indian fusion', line: 'Adavus, kummi and kolattam: clean lines and exact rhythm from across the South.' },
  { name: 'Hip-hop', line: 'The sharp edges that every fusion set borrows.' },
  { name: 'Contemporary fusion', line: 'Space, breath, and room to learn how the pieces fit.' },
]
export const durationOf = (r: Routine) => /ninety/i.test(r.prompt) ? 90 : 60
