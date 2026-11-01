import { Report } from '../src/lib/routine'
const walk = (ax: number, ay: number, bx: number, by: number) => ({ X: [ax, 3 * ax, 3 * bx, bx], Y: [ay, 3 * ay, 3 * by, by], W: [1, 3, 3, 1] })
/** A small report in the shape the Lean planner sends. */
export function report(over: Partial<Report> = {}): Report {
  const bounds = { xmin: -6000, xmax: 6000, ymin: 0, ymax: 8000 }
  return {
    verdict: 'proved', fingerprint: 'abc123', proofId: 'R000000000000', error: null,
    plan: { seconds: 8, bpm: 120, genre: 'House', n: 2, left: 0, right: 0, heard: [] },
    config: { n: 2, dmin: 600, vmax: 3500, envelope: bounds, stage: bounds, ticksPerBeat: 4, bpmNum: 120, bpmDen: 1, total: 64, seconds: 8 },
    names: ['Priya', 'Arjun'], keys: [], globalOk: true,
    phases: [{ index: 0, t0: 0, t1: 64, label: 'Step-touch', kind: 'hold', bounds, paths: [walk(-1000, 1000, -1000, 7000), walk(1000, 1000, 1000, 7000)], ok: true,
      tight: { i: 1, j: 0, names: 'Arjun and Priya', distance: 2000, how: 'They move as one', depth: 0, coefficients: [] }, certs: [{ how: 'They move as one', depth: 0, lean: '(.offset 2000 0)' }], pairsByMethod: { together: 1, curve: 0 } }],
    asks: [
      { group: 'shape', text: 'Row A stays straight', ok: true, statement: '(.keepsLine 0 [0, 1] 2000 0)', phases: [0], category: 'formation' },
      { group: 'stage', text: 'Everyone stays on stage', ok: true, statement: '(.staysIn 0 ⟨…⟩)', phases: [0], category: 'movement' },
    ],
    problems: [], rejected: [], samples: [], scene: null, broken: null,
    checked: { formation: true, movement: true, musicality: true, movementJoins: true }, transitions: [],
    ...over,
  }
}
export const proved = { status: 'verified' as const, parts: { formation: true, movement: true, musicality: true } }
export const running = { status: 'running' as const, parts: { formation: false, movement: false, musicality: false } }
