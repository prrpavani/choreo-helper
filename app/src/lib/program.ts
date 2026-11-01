import { Report, tickToSec } from './routine'

// The canonical choreography program. The editor changes this; Lean compiles it, and everything that plays or is proved comes from that.
export interface ProgOp { kind: string; title?: string; shape?: string; counts?: number; quarters?: number; ccw?: boolean; dx?: number; dy?: number; num?: number; den?: number; step?: string; line?: number; leftShape?: string; rightShape?: string; places?: [number, number][] }
export interface ProgSection { name: string; ops: ProgOp[] }
export interface ProgramDef { id: string; title: string; idea: string; blurb: string; genre: string; bpm: number; n: number; gap: number; start: string; sections: ProgSection[] }
export interface ProgStep { index: number; surface: number; section: string; name: string; kind: string; counts: number; requires: string; ensures: string; requiresLean: string; ensuresLean: string; requiresOk: boolean; runsOk: boolean; ok: boolean; why: string; opKind: 'checked' | 'rule'; before: [number, number][]; after: [number, number][] }
export interface ProgramReport { steps: ProgStep[]; composable: boolean }
export interface ContractResult { steps: number[]; links: number[]; broken: number[]; composed: boolean; sameRoutine: boolean }
export type Status = 'pending' | 'running' | 'proved' | 'refuted' | 'broken' | 'unknown' | 'error'
export const STATUS_WORD: Record<Status, string> = { pending: 'Not checked', running: 'Checking', proved: 'Proved', refuted: 'Proved unsafe', broken: 'Contract not met', unknown: 'Not proved', error: 'No verdict' }

export const flatOps = (p: ProgramDef) => p.sections.flatMap((s, si) => s.ops.map((op, oi) => ({ op, si, oi })))
export function surfaceOf(p: ProgramDef, si: number, oi: number) { let k = 0; for (let i = 0; i < si; i++) k += p.sections[i].ops.length; return k + oi }
export const setOp = (p: ProgramDef, si: number, oi: number, op: ProgOp | null): ProgramDef => ({ ...p, sections: p.sections.map((s, i) => i !== si ? s : { ...s, ops: op ? s.ops.map((o, j) => j === oi ? op : o) : s.ops.filter((_, j) => j !== oi) }).filter(s => s.ops.length > 0) })
export const insertOp = (p: ProgramDef, si: number, at: number, op: ProgOp): ProgramDef => ({ ...p, sections: p.sections.map((s, i) => i !== si ? s : { ...s, ops: [...s.ops.slice(0, at), op, ...s.ops.slice(at)] }) })
export const moveOp = (p: ProgramDef, si: number, oi: number, dir: number): ProgramDef => {
  const s = p.sections[si], to = oi + dir
  if (to >= 0 && to < s.ops.length) { const ops = [...s.ops]; [ops[oi], ops[to]] = [ops[to], ops[oi]]; return { ...p, sections: p.sections.map((x, i) => i === si ? { ...x, ops } : x) } }
  return p
}
export const stepsOfOp = (r: ProgramReport | null | undefined, surface: number) => (r?.steps ?? []).filter(s => s.surface === surface)

interface KernelLike { status: string; contract?: ContractResult }
/** A step's status, only ever from what the kernel reported. */
export function stepStatus(k: KernelLike, st: ProgStep): Status {
  if (k.status === 'running') return 'running'
  if (k.status === 'not_checked') return 'pending'
  if (k.status === 'error' || k.status === 'timeout') return 'error'
  if (k.contract?.broken.includes(st.index)) return 'broken'
  if (k.contract?.steps.includes(st.index)) return 'proved'
  return k.status === 'refuted' ? 'refuted' : 'unknown'
}
export function linkStatus(k: KernelLike, st: ProgStep): Status {
  if (k.status === 'running') return 'running'
  if (k.status === 'not_checked') return 'pending'
  if (k.status === 'error' || k.status === 'timeout') return 'error'
  if (k.contract?.broken.includes(st.index)) return 'broken'
  return k.contract?.links.includes(st.index) ? 'proved' : 'unknown'
}
export function opStatus(k: KernelLike, steps: ProgStep[]): Status {
  const all = steps.map(s => stepStatus(k, s))
  for (const w of ['running', 'pending', 'error', 'broken', 'refuted', 'unknown'] as Status[]) if (all.includes(w)) return w
  return all.length ? 'proved' : 'pending'
}
/** When each section plays. A program's steps and the routine's phases line up one to one. */
export function sectionTimes(r: Report, steps: ProgStep[]) {
  const out: { name: string; from: number; to: number }[] = []
  steps.forEach(s => { const ph = r.phases[s.index]; if (!ph) return; const a = tickToSec(r, ph.t0), b = tickToSec(r, ph.t1), last = out[out.length - 1]; if (last && last.name === s.section) last.to = b; else out.push({ name: s.section, from: a, to: b }) })
  return out
}
export const OP_KINDS: { kind: string; title: string; text: string; make: () => ProgOp }[] = [
  { kind: 'move', title: 'Move to formation', text: 'Everyone travels to a new shape', make: () => ({ kind: 'move', shape: 'circle', counts: 12, title: 'Move to Circle' }) },
  { kind: 'rotate', title: 'Rotate', text: 'The whole shape turns around the centre', make: () => ({ kind: 'rotate', quarters: 1, counts: 12, title: 'Rotate 90°' }) },
  { kind: 'exchange', title: 'Exchange groups', text: 'Two groups trade sides through each other', make: () => ({ kind: 'exchange', counts: 16, title: 'Exchange Groups' }) },
  { kind: 'translate', title: 'Translate', text: 'Everyone shifts together', make: () => ({ kind: 'translate', dx: 0, dy: 500, counts: 8, title: 'Drift Upstage' }) },
  { kind: 'mirror', title: 'Mirror', text: 'Each dancer goes to their mirror image', make: () => ({ kind: 'mirror', counts: 16, title: 'Mirror' }) },
  { kind: 'scale', title: 'Scale', text: 'The shape expands or contracts', make: () => ({ kind: 'scale', num: 3, den: 2, counts: 12, title: 'Expand' }) },
  { kind: 'step', title: 'Dance a step', text: 'Everyone does a step in unison', make: () => ({ kind: 'step', step: 'stepTouch', title: 'Step-touch' }) },
  { kind: 'wait', title: 'Hold', text: 'Everyone holds', make: () => ({ kind: 'wait', counts: 8, title: 'Hold' }) },
  { kind: 'parallel', title: 'Two groups at once', text: 'Left and right each form a shape, on the same counts', make: () => ({ kind: 'parallel', line: -300, leftShape: 'circle', rightShape: 'circle', counts: 16, title: 'Left and Right at Once' }) },
]
export const SHAPES = ['rows', 'circle', 'wide circle', 'rings', 'lanes', 'diagonal', 'line', 'diamond', 'vee', 'windows', 'square', 'cross', 'spiral', 'arc', 'symmetric']
export const SHAPE_NAME: Record<string, string> = { rows: 'Two Rows', circle: 'Circle', 'wide circle': 'Wide Circle', rings: 'Concentric Rings', lanes: 'Two Lanes', diagonal: 'Diagonal', line: 'Line', diamond: 'Diamond', vee: 'V', windows: 'Windows', square: 'Square', cross: 'Cross', spiral: 'Spiral', arc: 'Arc', symmetric: 'Mirrored Pairs', grid: 'Grid' }
export const STEP_CHOICES: [string, string][] = [['stepTouch', 'Step-touch'], ['grapevine', 'Grapevine'], ['box', 'Box step'], ['chasse', 'Chassé'], ['balance', 'Balancé'], ['thumka', 'Thumka'], ['jhatka', 'Jhatka'], ['dhamaal', 'Dhamaal'], ['chaal', 'Chaal'], ['doTaali', 'Be taali'], ['kuthuStep', 'Kuthu step'], ['tattaAdavu', 'Tatta adavu'], ['twoStep', 'Two-step'], ['jazzSquare', 'Jazz square']]

/** What a whole-routine transformation does to each guarantee. Theorem names are checked against the Lean files by `make verify`. */
export const TRANSFORMS: { key: string; title: string; text: string; rows: { property: string; how: 'theorem' | 'recheck'; theorem?: string; note: string }[] }[] = [
  { key: 'mirror', title: 'Mirror', text: 'Stage left becomes stage right', rows: [
    { property: 'Pairwise distances', how: 'theorem', theorem: 'mirror_keeps_distance', note: 'A mirrored straight move has the same distances at every moment, for any positions.' },
    { property: 'Rule for exchanges', how: 'theorem', theorem: 'slide_rule_mirror', note: 'Any pair passing the slide rule still passes once mirrored.' },
    { property: 'Two-group lanes', how: 'theorem', theorem: 'mirror_keeps_twoGroups', note: 'A mirror does not change how far upstage anyone stands.' },
    { property: 'Stage bounds and speed', how: 'recheck', note: 'Lean re-checks these on the mirrored paths.' } ] },
  { key: 'half', title: 'Half turn', text: 'Face the other way', rows: [
    { property: 'Gaps at each formation', how: 'theorem', theorem: 'half_turn_keeps_gap', note: 'A half turn never changes the gap between two points.' },
    { property: 'Stage bounds and speed', how: 'recheck', note: 'Lean re-checks these on the turned paths.' } ] },
  { key: 'upstage', title: 'Shift upstage', text: 'Move everything 50 cm upstage', rows: [
    { property: 'Pairwise distances', how: 'theorem', theorem: 'translate_keeps_distance', note: 'A translated move has the same distances at every moment.' },
    { property: 'Stage bounds', how: 'recheck', note: 'A shift can push someone off the stage, so Lean re-checks this.' } ] },
  { key: 'reverse', title: 'Play backwards', text: 'The whole program in reverse', rows: [
    { property: 'Pairwise distances', how: 'theorem', theorem: 'reverse_keeps_distance', note: 'The gap at time t of the reversed move is the gap at 1 − t of the original.' },
    { property: 'Each movement\'s requirement', how: 'recheck', note: 'Reversing changes where each step starts, so Lean re-checks each contract.' } ] },
]
