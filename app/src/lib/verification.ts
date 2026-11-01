import { Report } from './routine'

export type CategoryKey = 'movement'
/** The only states a category can be in. Each comes from what Lean's kernel actually returned. */
export type CategoryState = 'verified' | 'attention' | 'checking' | 'not_checked' | 'failed'
export interface KernelResult {
  status: 'running' | 'verified' | 'refuted' | 'not_proved' | 'error' | 'timeout' | 'not_checked'
  parts: Record<CategoryKey, boolean>
  contract?: { disproved?: { kind: string; phase: number } | null }
}
export interface Category {
  key: CategoryKey; name: string; question: string; state: CategoryState; stateLabel: string
  simple: string; issues: number; items: { text: string; ok: boolean }[]; theorem: string
}
const LABEL: Record<CategoryState, string> = { verified: 'Verified', attention: 'Needs attention', checking: 'Checking', not_checked: 'Not checked', failed: 'Check failed' }
const META: Record<CategoryKey, { name: string; question: string; verified: string; attention: string; theorem: string }> = {
  movement: { name: 'Movement', question: 'Can my dancers do this while keeping their spacing?', verified: 'Your dancers keep the required spacing, stay in bounds and stay under the speed limit throughout the modeled movement.', attention: 'A move breaks a spacing, boundary, speed or smoothness rule.', theorem: 'routine_moves_safely' },
}
/** A category is "verified" only when the kernel proved that part. A missing result is never a success. */
export function stateOf(key: CategoryKey, report: Report, kernel: KernelResult): CategoryState {
  if (kernel.status === 'running') return 'checking'
  if (kernel.status === 'not_checked') return 'not_checked'
  if (kernel.status === 'error' || kernel.status === 'timeout') return 'failed'
  if (kernel.parts[key] === true) return 'verified'
  if (report.checked?.[key] === false) return 'attention'
  return 'not_checked'
}
export function issueCount(key: CategoryKey, report: Report): number {
  const asks = new Set(report.asks.filter(a => !a.ok && a.category === key).map(a => a.text)).size
  if (key === 'movement') return asks + report.problems.length + (report.checked?.movementJoins === false ? 1 : 0)
  return asks
}
export function summarize(report: Report, kernel: KernelResult): Category[] {
  const { dmin, vmax } = report.config
  return (['movement'] as CategoryKey[]).map(key => {
    const state = stateOf(key, report, kernel), m = META[key], seen = new Map<string, boolean>()
    const items = [...seen].map(([text, ok]) => ({ text, ok }))
    if (key === 'movement') {
      const has = (k: string) => kernel.contract?.disproved?.kind === k
      items.unshift(
        { text: `No collisions: nobody within ${dmin / 10} cm of anyone, at any moment`, ok: !has('collision') && !has('unproved') },
        { text: 'In bounds: everyone stays on the stage or in the wings', ok: !has('offstage') },
        { text: `Speed limit: nobody moves faster than ${(vmax / 1000).toFixed(1)} metres per second`, ok: !has('fast') },
        { text: 'No jumps: each move starts where the last one ended, at the same speed', ok: report.checked?.movementJoins !== false },
      )
    }
    const simple = state === 'verified' ? m.verified : state === 'attention' ? m.attention : state === 'checking' ? 'Lean is checking this now.' : state === 'failed' ? 'The check did not finish, so nothing can be said yet.' : 'This has not been checked.'
    return { key, name: m.name, question: m.question, state, stateLabel: LABEL[state], simple, issues: issueCount(key, report), items, theorem: m.theorem }
  })
}
/** The exact statement of a theorem, taken from the proof file Lean checked. */
export function statementFrom(source: string, name: string): string | null {
  const at = source.search(new RegExp(`^theorem ${name}\\b`, 'm'))
  if (at < 0) return null
  const end = source.indexOf(':=', at)
  return end < 0 ? null : source.slice(at, end).trim()
}
/** The eight-count position of a moment. */
export function countAt(sec: number, bpm: number) {
  const beat = Math.floor(sec * bpm / 60 + 1e-6)
  return { eight: Math.floor(beat / 8) + 1, count: beat % 8 + 1 }
}
