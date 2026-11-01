// @vitest-environment node
import { renderToStaticMarkup } from 'react-dom/server'
import { describe, expect, it } from 'vitest'
import { FailureList } from '../src/ui/FailureCard'
import { KernelState } from '../src/ui/ProofRail'
import { VerificationSummary } from '../src/ui/VerificationSummary'
import { report } from './fixture'

const base: KernelState = { status: 'running', phases: 0, ms: 0, axioms: null, fingerprintMatch: null, errors: [], rejected: 0, parts: { movement: false }, transitions: [] }
const html = (k: Partial<KernelState>, r = report()) => renderToStaticMarkup(<VerificationSummary report={r} kernel={{ ...base, ...k }} />)
describe('the verification summary renders each state', () => {
  it('checking', () => { expect(html({})).toContain('Checking'); expect(html({})).not.toContain('>Verified<') })
  it('verified', () => {
    const h = html({ status: 'verified', parts: { movement: true }, axioms: ['propext'] })
    expect(h).toContain('Verified'); expect(h).toContain('No collisions')
  })
  it('not checked', () => { const h = html({ status: 'not_proved' }); expect(h).toContain('Not checked'); expect(h).not.toContain('>Verified<') })
  it('a technical failure', () => { const h = html({ status: 'timeout' }); expect(h).toContain('Check failed'); expect(h).not.toContain('Needs attention') })
  it('a refuted part', () => {
    const r = report({ checked: { formation: true, movement: false, musicality: true, movementJoins: true } })
    const h = html({ status: 'refuted', parts: { movement: false } }, r)
    expect(h).toContain('Needs attention'); expect(h).not.toContain('>Verified<')
  })
})
describe('a failure says what happened', () => {
  const bad = report({ problems: [{ kind: 'collision', phase: 0, i: 1, j: 0, second: 4, distance: 120, text: 'Arjun and Priya come too close' }] })
  const list = (status: KernelState['status']) => renderToStaticMarkup(<FailureList report={bad} kernel={{ ...base, status, contract: { steps: [], links: [], broken: [], composed: false, sameRoutine: false, disproved: { kind: 'collision', phase: 0 } } }} onGo={() => {}} />)
  it('names the dancers, the moment and the numbers', () => {
    const h = list('refuted')
    for (const want of ['Arjun and Priya', '0:04.0', 'eight 2, count 1', 'At least 60 cm', '12 cm apart', 'Show me']) expect(h).toContain(want)
    expect(h).toContain('This is proved')
  })
  it('does not call a moment proved until the kernel has refuted it', () => { expect(list('running')).not.toContain('This is proved') })
  it('shows no counterexample for a technical failure', () => { expect(list('timeout')).toBe(''); expect(list('error')).toBe('') })
  it('shows no failure for a version nobody has verified', () => { expect(list('not_checked')).toBe('') })
  it('shows nothing when nothing failed', () => { expect(renderToStaticMarkup(<FailureList report={report()} kernel={{ ...base, status: 'verified' }} onGo={() => {}} />)).toBe('') })
})
