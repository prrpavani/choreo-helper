import { SceneData } from './routine'
import { Brief, briefToPrompt, readWords } from './brief'

export interface Imported { kind: 'notes' | 'routine' | 'unreadable'; name: string; brief?: Brief; heard?: string[]; shapes?: string[]; routine?: { title: string; prompt: string; scene: SceneData | null; gap: number }; why?: string }

/** Name the shape a list of positions makes, if it is a clear one. Only dancers on stage count. */
export function shapeOf(frame: [number, number][]): string | null {
  const on = frame.filter(p => Math.abs(p[0]) <= 6000)
  if (on.length < 3) return null
  const cx = on.reduce((a, p) => a + p[0], 0) / on.length, cy = on.reduce((a, p) => a + p[1], 0) / on.length
  const radii = on.map(p => Math.hypot(p[0] - cx, p[1] - cy)), mean = radii.reduce((a, r) => a + r, 0) / radii.length
  if (radii.every(r => Math.abs(r - mean) < mean * .06)) return 'circle'
  const ys = new Set(on.map(p => p[1])), xs = new Set(on.map(p => p[0]))
  if (ys.size === 1) return 'line'
  if (ys.size === 2 || (ys.size * xs.size === on.length)) return 'grid'
  // straight line at an angle: the area spanned by any three is nearly zero
  const [a, b] = on, flat = on.every(p => Math.abs((b[0] - a[0]) * (p[1] - a[1]) - (b[1] - a[1]) * (p[0] - a[0])) < 1e5)
  return flat ? 'diagonal' : null
}

/** Read a file someone brought along. Text is read for dance words. A Choreo export can also be opened as it is. */
export async function readImport(file: File, brief: Brief): Promise<Imported> {
  const name = file.name
  if (/^video\//.test(file.type) || /\.(mp4|mov|webm|avi|mkv)$/i.test(name)) return { kind: 'unreadable', name, why: "I can't watch video yet. Tell me what you liked about it, or paste your notes, and I'll work from that." }
  if (/^audio\//.test(file.type)) return { kind: 'unreadable', name, why: "That is a song, and I don't read songs. Tell me about the style or the mood instead."  }
  if (file.size > 2_000_000) return { kind: 'unreadable', name, why: 'That file is too big to be notes. Paste the part that matters.' }
  const text = await file.text()
  if (/\.json$/i.test(name) || text.trimStart().startsWith('{')) {
    try {
      const j = JSON.parse(text)
      if (j.choreo && typeof j.prompt === 'string') {
        const scene: SceneData | null = j.scene?.frames ? j.scene : null
        const shapes = [...new Set((scene?.frames ?? []).map(shapeOf).filter((s): s is string => !!s))]
        const read = readWords(`${j.prompt} ${shapes.map(s => `a ${s}`).join(' ')}`, brief)
        if (scene?.frames?.[0]?.length) read.brief.dancers = scene.frames[0].length
        return { kind: 'routine', name, brief: { ...read.brief, inspiredBy: j.title ?? name }, heard: read.heard, shapes, routine: { title: j.title ?? name, prompt: j.prompt, scene, gap: j.gap ?? 600 } }
      }
    } catch { /* not JSON after all: read it as words */ }
  }
  const read = readWords(text, brief)
  if (!read.heard.length) return { kind: 'unreadable', name, why: "I read it, but found no dance words I know: no style, shapes, moves or steps." }
  return { kind: 'notes', name, brief: { ...read.brief, inspiredBy: name.replace(/\.[^.]+$/, '') }, heard: read.heard }
}

export { briefToPrompt }
