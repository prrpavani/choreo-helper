import { describe, expect, it } from 'vitest'
import { briefToPrompt, emptyBrief, nextQuestion, readWords } from '../src/lib/brief'
import { shapeOf } from '../src/lib/importer'

describe('the conversation', () => {
  it('reads a sentence into the brief', () => {
    const { brief } = readWords('A fancy raas for twelve dancers, 90 seconds, with a weave and a burst. Four of them wait off stage. Dhamaal please.', emptyBrief())
    expect(brief).toMatchObject({ dancers: 12, seconds: 90, style: 'Raas', ambition: 'showstopper', waiting: 4 })
    expect(brief.moves).toEqual(expect.arrayContaining(['weave', 'burst']))
    expect(brief.steps).toContain('dhamaal')
  })
  it('takes things out when told', () => {
    const a = readWords('add a spiral and a burst', emptyBrief()).brief
    expect(readWords('no burst', a).brief.moves).toEqual(['spiral'])
  })
  it('makes changes relative to what is there', () => {
    const a = { ...emptyBrief(), seconds: 60, dancers: 8 }
    expect(readWords('shorter', a).brief.seconds).toBe(30)
    expect(readWords('more dancers', a).brief.dancers).toBe(10)
  })
  it('hears nothing in words it does not know', () => { expect(readWords('hmm let me think', emptyBrief()).heard).toEqual([]) })
  it('asks about who starts off stage, and stops asking', () => {
    const asked: string[] = []; let q = nextQuestion(emptyBrief(), asked), keys: string[] = []
    while (q) { keys.push(q.key); asked.push(q.key); q = nextQuestion(emptyBrief(), asked) }
    expect(keys).toContain('waiting'); expect(new Set(keys).size).toBe(keys.length)
  })
  it('writes words the planner reads', () => {
    const p = briefToPrompt({ ...emptyBrief(), dancers: 8, seconds: 90, style: 'Bhangra', moves: ['circle', 'exchange', 'join'], waiting: 4, steps: ['dhamaal'] })
    expect(p).toMatch(/90 seconds of bhangra/); expect(p).toMatch(/four of them wait off stage/i); expect(p).toMatch(/exchange/); expect(p).toMatch(/dhamaal/)
  })
})
describe('reading imported formations', () => {
  it('names clear shapes', () => {
    expect(shapeOf([[0, 6000], [2000, 4000], [0, 2000], [-2000, 4000]])).toBe('circle')
    expect(shapeOf([[-3000, 4000], [-1000, 4000], [1000, 4000], [3000, 4000]])).toBe('line')
  })
  it('ignores dancers in the wings', () => { expect(shapeOf([[8000, 1000], [9000, 2000]])).toBeNull() })
})
