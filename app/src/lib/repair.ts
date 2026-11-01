import { Report, SceneData, colX, placeName, rowY } from './routine'

export interface Candidate { title: string; detail: string; scene: SceneData; size: number }
type P = [number, number]
const copy = (s: SceneData): SceneData => ({ ...s, frames: s.frames.map(f => f.map(p => [p[0], p[1]] as P)), rules: s.rules ? s.rules.map(r => ({ ...r })) : s.rules })
const CELLS: P[] = [1, 2, 3, 4, 5, 6, 7, 8, 9].flatMap(c => [0, 1, 2, 3, 4].map(r => [colX(c), rowY(r)] as P))

/** Which frame a clash happens on the way to. */
function frameOfPhase(r: Report, phase: number): number {
  const keys = r.keys
  for (let k = 0; k < keys.length; k++) if (phase <= keys[k].phase && k > 0) return k
  return Math.max(1, keys.length - 1)
}
/** Ideas for fixing a clash. These are only ideas: each is sent to Lean on its own, and it's Lean that says whether it works. */
export function candidatesFor(report: Report, scene: SceneData): Candidate[] {
  const p = report.problems.find(q => q.kind === 'collision')
  if (!p || p.i === undefined || p.j === undefined) return []
  const out: Candidate[] = [], f = frameOfPhase(report, p.phase), names = report.names
  const frame = scene.frames[f]
  if (!frame) return out
  // move one of the pair to a nearby free place on the same frame
  for (const d of [p.i, p.j]) {
    const here = frame[d]
    const near = CELLS.filter(c => !frame.some(q => q[0] === c[0] && q[1] === c[1])).map(c => ({ c, dist: Math.hypot(c[0] - here[0], c[1] - here[1]) })).filter(x => x.dist > 0 && x.dist < 2600).sort((a, b) => a.dist - b.dist).slice(0, 3)
    for (const { c, dist } of near) {
      const s = copy(scene), old = s.frames[f][d]
      for (let g = f; g < s.frames.length; g++) { const q = s.frames[g][d]; if (g === f || (q[0] === old[0] && q[1] === old[1])) s.frames[g][d] = [c[0], c[1]] }
      const dropped = (s.rules ?? []).filter(u => u.frame === f && (u.kind === 'mirror' ? u.pairs.some(pr => pr.includes(d)) : u.members.includes(d)))
      s.rules = (s.rules ?? []).filter(u => !dropped.includes(u))
      out.push({ title: `Move ${names[d]} to ${placeName(c[0], c[1])}`, detail: `A ${Math.round(dist / 10)} cm change.${dropped.length ? ` This gives up the rule: ${dropped.map(u => u.name).join(', ')}.` : ''}`, scene: s, size: dist + (dropped.length ? 100000 : 0) })
    }
  }
  // swap who goes where
  { const s = copy(scene); const a = s.frames[f][p.i], b = s.frames[f][p.j]; s.frames[f][p.i] = b; s.frames[f][p.j] = a
    const dropped = (s.rules ?? []).filter(u => u.frame === f && u.kind === 'line' && (u.members.includes(p.i!) !== u.members.includes(p.j!)))
    s.rules = (s.rules ?? []).filter(u => !dropped.includes(u))
    out.push({ title: `Swap ${names[p.i]} and ${names[p.j]}'s places`, detail: `Each takes the other's mark.${dropped.length ? ` This gives up the rule: ${dropped.map(u => u.name).join(', ')}.` : ''}`, scene: s, size: Math.hypot(a[0] - b[0], a[1] - b[1]) + (dropped.length ? 100000 : 0) }) }
  // send one dancer first, in the same counts
  for (const d of [p.i, p.j]) {
    const s = copy(scene), mid = s.frames[f - 1].map((q, i) => (i === d ? [frame[i][0], frame[i][1]] : [q[0], q[1]]) as P)
    s.frames.splice(f, 0, mid)
    if (s.rules) s.rules = s.rules.map(u => u.frame >= f ? { ...u, frame: u.frame + 1 } : u)
    if (s.moves?.length) { const beats = s.moves[f - 1], first = Math.floor(beats / 2 / 2) * 2 || 1; s.moves = [...s.moves.slice(0, f - 1), first, beats - first, ...s.moves.slice(f)]; s.holds = [...(s.holds ?? []).slice(0, f), 0, ...(s.holds ?? []).slice(f)] }
    out.push({ title: `Send ${names[d]} first`, detail: 'They arrive before everyone else sets off, in the same number of counts.', scene: s, size: 3000 })
  }
  return out.sort((a, b) => a.size - b.size).slice(0, 7)
}

export type TransformKind = 'mirror' | 'half' | 'upstage' | 'compress' | 'reverse' | 'tempoUp' | 'tempoDown'
export interface Prediction { property: string; how: string; theorem: string | null }
export const TRANSFORMS: { kind: TransformKind; title: string; predict: Prediction[] }[] = [
  { kind: 'mirror', title: 'Mirror the formation', predict: [
    { property: 'Spacing', how: 'Preserved for any positions', theorem: 'reflect_keeps_gap' }, { property: 'Lines', how: 'Preserved for any positions', theorem: 'reflect_keeps_line' }, { property: 'Symmetry', how: 'Preserved for any positions', theorem: 'reflect_keeps_mirror' }, { property: 'Stage bounds', how: 'Needs a new proof', theorem: null }] },
  { kind: 'half', title: 'Half turn', predict: [
    { property: 'Spacing', how: 'Preserved for any positions', theorem: 'half_turn_keeps_gap' }, { property: 'Lines', how: 'Preserved for any positions', theorem: 'half_turn_keeps_line' }, { property: 'Symmetry', how: 'Preserved for any positions', theorem: 'half_turn_keeps_mirror' }, { property: 'Stage bounds', how: 'Needs a new proof', theorem: null }] },
  { kind: 'upstage', title: 'Shift everything upstage', predict: [
    { property: 'Spacing', how: 'Preserved for any positions', theorem: 'shift_keeps_gap' }, { property: 'Lines', how: 'Preserved for any positions', theorem: 'shift_keeps_line' }, { property: 'Symmetry', how: 'Preserved for any positions', theorem: 'shift_upstage_keeps_mirror' }, { property: 'Stage bounds', how: 'Needs a new proof', theorem: null }] },
  { kind: 'compress', title: 'Compress the formation', predict: [
    { property: 'Spacing', how: 'Needs a new proof: gaps shrink', theorem: null }, { property: 'Lines', how: 'Needs a new proof', theorem: null }, { property: 'Symmetry', how: 'Needs a new proof', theorem: null }] },
  { kind: 'reverse', title: 'Reverse the routine', predict: [
    { property: 'Spacing', how: 'Needs a new proof', theorem: null }, { property: 'Musical alignment', how: 'Needs a new proof', theorem: null }] },
  { kind: 'tempoUp', title: 'Faster: 1.5 × tempo', predict: [
    { property: 'Speed', how: 'Needs a new proof: dancers must hurry', theorem: null }, { property: 'Musical alignment', how: 'Needs a new proof', theorem: null }] },
  { kind: 'tempoDown', title: 'Slower: half tempo', predict: [
    { property: 'Speed', how: 'Needs a new proof', theorem: null }, { property: 'Musical alignment', how: 'Needs a new proof', theorem: null }] },
]
const CY = 4000
const MOVEMENT = new Set(['Spacing', 'Speed', 'Stage bounds', 'Bounds', 'Continuity'])
TRANSFORMS.forEach(t => { t.predict = t.predict.filter(p => MOVEMENT.has(p.property)) })
export function transformScene(s0: SceneData, kind: TransformKind): SceneData {
  const s = copy(s0), map = (f: (p: P) => P) => { s.frames = s.frames.map(fr => fr.map(f)) }
  const rules = s.rules ?? []
  if (kind === 'mirror') { map(p => [-p[0], p[1]]); s.rules = rules.map(u => ({ ...u, dx: -u.dx })) }
  if (kind === 'half') { map(p => [-p[0], 2 * CY - p[1]]); s.rules = rules.map(u => ({ ...u, dx: -u.dx, dy: -u.dy })) }
  if (kind === 'upstage') map(p => [p[0], p[1] + 500])
  if (kind === 'compress') { map(p => [Math.round(p[0] * .5), p[1]]); s.rules = rules.map(u => ({ ...u, dx: Math.round(u.dx * .5) })) }
  if (kind === 'reverse') { s.frames.reverse(); const last = s.frames.length - 1; s.rules = rules.map(u => ({ ...u, frame: last - u.frame })); if (s.moves) s.moves = [...s.moves].reverse(); if (s.holds) s.holds = [...s.holds].reverse() }
  if (kind === 'tempoUp' && s.seconds) s.seconds = Math.max(1, Math.round(s.seconds / 1.5))
  if (kind === 'tempoDown' && s.seconds) s.seconds = s.seconds * 2
  return s
}

const totalCounts = (s: SceneData) => (s.holds ?? []).reduce((a, b) => a + b, 0) + (s.moves ?? []).reduce((a, b) => a + b, 0)
/** Keep the tempo when a routine with exact counts gets longer or shorter. */
function keepTempo(before: SceneData, after: SceneData): SceneData {
  if (!before.seconds || !totalCounts(before)) return after
  return { ...after, seconds: Math.max(1, Math.round(before.seconds * totalCounts(after) / totalCounts(before))) }
}
/** A new formation starts where the last one ended, so you only move who changes. */
export function addFormation(s: SceneData): SceneData {
  const last = s.frames[s.frames.length - 1].map(p => [p[0], p[1]] as P)
  const after: SceneData = { ...s, frames: [...s.frames, last], ways: s.ways && [...s.ways, 'walk'] }
  if (s.moves?.length) { after.moves = [...s.moves, 8]; after.holds = [...(s.holds ?? []), 4] }
  return keepTempo(s, after)
}
/** Remove one formation. The moves either side of it become one move. */
export function removeFormation(s: SceneData, k: number): SceneData {
  if (s.frames.length < 2) return s
  const after: SceneData = { ...s, frames: s.frames.filter((_, i) => i !== k), rules: s.rules ? s.rules.filter(u => u.frame !== k).map(u => (u.frame > k ? { ...u, frame: u.frame - 1 } : u)) : s.rules }
  if (s.ways) after.ways = s.ways.filter((_, i) => i !== (k === 0 ? 0 : k - 1))
  // a shaped path belongs to the move it was drawn on; the moves either side of a removed formation are gone
  if (s.bends) after.bends = s.bends.filter(b => b[0] !== k && b[0] !== k - 1).map(b => (b[0] > k ? [b[0] - 1, b[1], b[2], b[3]] : b) as [number, number, number, number])
  if (s.moves?.length) { after.holds = (s.holds ?? []).filter((_, i) => i !== k); after.moves = s.moves.filter((_, i) => i !== (k === 0 ? 0 : k - 1)) }
  return keepTempo(s, after)
}
/** The next free marked place in a wing, on the side with fewer dancers. */
export function freeWingPlace(s: SceneData): P {
  const f0 = s.frames.flat()
  const left = s.frames[0].filter(p => p[0] > 6000).length, right = s.frames[0].filter(p => p[0] < -6000).length
  const sides = left <= right ? [1, -1] : [-1, 1]
  for (const side of sides) for (const x of [6900, 8100, 9300]) for (const r of [0, 1, 2, 3, 4]) { const q: P = [side * x, rowY(r)]; if (!f0.some(p => p[0] === q[0] && p[1] === q[1])) return q }
  return [sides[0] * 6900, rowY(2)]
}
export function addDancer(s: SceneData): SceneData { const q = freeWingPlace(s); return { ...s, frames: s.frames.map(f => [...f, [q[0], q[1]] as P]), rules: s.rules && [...s.rules] } }
export function removeDancer(s: SceneData, i: number): SceneData {
  const remap = (m: number) => (m > i ? m - 1 : m)
  return { ...s, bends: s.bends?.filter(b => b[1] !== i).map(b => (b[1] > i ? [b[0], b[1] - 1, b[2], b[3]] : b) as [number, number, number, number]), frames: s.frames.map(f => f.filter((_, k) => k !== i)), rules: s.rules && s.rules.filter(u => !u.members.includes(i) && !u.pairs.some(p => p.includes(i))).map(u => ({ ...u, members: u.members.map(remap), pairs: u.pairs.map(p => [remap(p[0]), remap(p[1])] as [number, number]) })) }
}
/** A stage with everyone waiting in the wings, ready to be placed. */
export function blankScene(n = 8): SceneData {
  let s: SceneData = { frames: [[]], rules: null }
  for (let i = 0; i < n; i++) s = addDancer(s)
  return s
}
