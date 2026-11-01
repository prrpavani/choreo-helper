import { describe, expect, it } from 'vitest'
import { countAt, statementFrom, stateOf, summarize } from '../src/lib/verification'
import { report } from './fixture'

const proved = { status: 'verified' as const, parts: { movement: true } }
const none = { movement: false }
describe('the movement state only ever comes from the kernel', () => {
  it('is verified only when the kernel proved it', () => {
    expect(stateOf('movement', report(), proved)).toBe('verified')
    expect(stateOf('movement', report(), { status: 'verified', parts: none })).not.toBe('verified')
  })
  it('claims nothing while running or unchecked', () => {
    expect(stateOf('movement', report(), { status: 'running', parts: none })).toBe('checking')
    expect(stateOf('movement', report(), { status: 'not_checked', parts: none })).toBe('not_checked')
  })
  it('never treats a timeout or an error as a verdict', () => {
    for (const status of ['error', 'timeout'] as const) expect(stateOf('movement', report(), { status, parts: none })).toBe('failed')
  })
  it('asks for attention when the check fails', () => {
    const bad = report({ checked: { formation: true, movement: false, musicality: true, movementJoins: true } })
    expect(stateOf('movement', bad, { status: 'refuted', parts: none })).toBe('attention')
  })
})
describe('what is claimed', () => {
  it('is movement and nothing else', () => { expect(summarize(report(), proved).map(c => c.name)).toEqual(['Movement']) })
  it('marks a collision', () => {
    const r = report({ problems: [{ kind: 'collision', phase: 0, i: 1, j: 0, second: 4, distance: 0, text: 'x' }], checked: { formation: true, movement: false, musicality: true, movementJoins: true } })
    const m = summarize(r, { status: 'refuted', parts: none })[0]
    expect(m.items.find(i => i.text.startsWith('No collisions'))?.ok).toBe(false)
  })
})
describe('helpers', () => {
  it('finds a theorem statement only if the file has it', () => {
    const file = 'theorem routine_moves_safely (K : Type) : P :=\n  x\n'
    expect(statementFrom(file, 'routine_moves_safely')).toContain('routine_moves_safely')
    expect(statementFrom(file, 'formation_ok')).toBeNull()
  })
  it('counts eights', () => { expect(countAt(0, 120)).toEqual({ eight: 1, count: 1 }) })
})
