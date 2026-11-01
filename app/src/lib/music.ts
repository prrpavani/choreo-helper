import { Report, bpmOf, phaseIndexAt } from './routine'

/** Beat-locked music, drawn from the routine: phases change the energy, and every move lands on a hit.
 *  The audio clock is the master clock for playback, so sound and dancers cannot drift apart. */
interface Genre {
  kick: number[]; snare: number[]; hat: number[]; bass: number[]; stab: number[]; arp: number[]
  root: number; chords: number[][]; swing: number; pad: boolean; waveform: OscillatorType; drumTone: number
}
const steps = (s: string) => s.split('').map(c => (c === 'x' ? 1 : c === 'o' ? 0.6 : 0))
const MINOR = [[0, 3, 7, 10], [-4, 0, 3, 7], [3, 7, 10, 14], [-2, 2, 5, 9]]
export const GENRES: Record<string, Genre> = {
  House: { kick: steps('x...x...x...x...'), snare: steps('....x.......x...'), hat: steps('..x...x...x...xo'), bass: steps('..x..x..x..x.x..'), stab: steps('...x..x....x....'), arp: steps('x.xx.xx.x.xx.xx.'), root: 45, chords: MINOR, swing: 0, pad: true, waveform: 'sawtooth', drumTone: 1 },
  Cinematic: { kick: steps('x.....x...x.....'), snare: steps('............x.x.'), hat: steps('x...x...x...x...'), bass: steps('x.......x.......'), stab: steps('x...............'), arp: steps('x..x..x..x..x.x.'), root: 38, chords: [[0, 3, 7], [-4, 0, 3], [-7, -3, 0], [-2, 2, 5]], swing: 0, pad: true, waveform: 'sawtooth', drumTone: 0.6 },
  Strings: { kick: steps('x...............'), snare: steps('................'), hat: steps('................'), bass: steps('x.......x.......'), stab: steps('....x...x...x...'), arp: steps('x.x.x.x.x.x.x.x.'), root: 50, chords: [[0, 4, 7], [5, 9, 12], [-3, 0, 4], [7, 11, 14]], swing: 0, pad: true, waveform: 'triangle', drumTone: 0.8 },
  Afrobeat: { kick: steps('x..x..x...x..x..'), snare: steps('...x..x....x..x.'), hat: steps('x.xx.xx.x.xx.xx.'), bass: steps('x..x...xx..x....'), stab: steps('..x..x....x..x..'), arp: steps('x..x.x..x..x.x..'), root: 43, chords: [[0, 4, 7, 11], [5, 9, 12, 16], [2, 5, 9, 12], [7, 11, 14, 17]], swing: 0.06, pad: false, waveform: 'square', drumTone: 1.1 },
  'Hip-hop': { kick: steps('x.....x.x.....x.'), snare: steps('....x.......x...'), hat: steps('x.x.x.x.x.x.x.xx'), bass: steps('x.....x.x.......'), stab: steps('x..........x....'), arp: steps('....x..x....x..x'), root: 41, chords: MINOR, swing: 0.1, pad: true, waveform: 'triangle', drumTone: 0.9 },
  'Lo-fi': { kick: steps('x.....x...x.....'), snare: steps('....x.......x...'), hat: steps('x.x.x.x.x.x.x.x.'), bass: steps('x.......x..x....'), stab: steps('x.....x.........'), arp: steps('..x...x...x...x.'), root: 48, chords: [[0, 4, 7, 11], [-3, 0, 4, 7], [5, 9, 12, 16], [7, 11, 14, 17]], swing: 0.14, pad: true, waveform: 'triangle', drumTone: 0.7 },
}
GENRES['Bhangra'] = { kick: steps('x..x..x.x..x..x.'), snare: steps('....x..x....x..x'), hat: steps('x.xx.xx.x.xx.xx.'), bass: steps('x..x..x.x..x....'), stab: steps('..x...x...x...x.'), arp: steps('x.x.x.x.x.x.x.x.'), root: 45, chords: [[0, 3, 7], [-2, 2, 5], [-4, 0, 3], [-2, 2, 5]], swing: .04, pad: false, waveform: 'square', drumTone: 1.25 }
GENRES['Raas'] = { kick: steps('x.....x.....x...'), snare: steps('...x..x..x....x.'), hat: steps('x..x..x..x..x..x'), bass: steps('x.....x.....x...'), stab: steps('..x..x..x..x....'), arp: steps('x.xx.xx.xx.xx.x.'), root: 50, chords: [[0, 4, 7], [-2, 2, 5], [0, 4, 7], [5, 9, 12]], swing: 0, pad: true, waveform: 'triangle', drumTone: 1.05 }
GENRES['Bollywood fusion'] = { kick: steps('x..x....x.x.....'), snare: steps('....x.......x..x'), hat: steps('x.x.x.xxx.x.x.xx'), bass: steps('x..x..x...x.x...'), stab: steps('...x..x.....x...'), arp: steps('x.x.xx.xx.x.xx.x'), root: 47, chords: [[0, 3, 7, 10], [3, 7, 10, 14], [-2, 2, 5, 9], [-4, 0, 3, 7]], swing: .05, pad: true, waveform: 'sawtooth', drumTone: 1 }
GENRES['Kuthu'] = { kick: steps('x..x..x..x..x.x.'), snare: steps('.x..x..x.x..x..x'), hat: steps('x.x.x.x.x.x.x.x.'), bass: steps('x..x..x..x..x...'), stab: steps('x.....x.....x...'), arp: steps('..x..x..x..x..x.'), root: 43, chords: [[0, 3, 7], [0, 3, 7], [-2, 2, 5], [0, 3, 7]], swing: 0, pad: false, waveform: 'square', drumTone: 1.35 }
GENRES['South Indian fusion'] = { kick: steps('x.....x...x.....'), snare: steps('..x.x...x...x.x.'), hat: steps('x.xxx.xxx.xxx.xx'), bass: steps('x...............'), stab: steps('....x.......x...'), arp: steps('x.x.xx.xx.x.xx.x'), root: 50, chords: [[0, 7, 12], [0, 5, 12], [0, 7, 12], [-2, 5, 10]], swing: 0, pad: true, waveform: 'triangle', drumTone: 1.5 }
GENRES['Kathak'] = { ...GENRES['South Indian fusion'], kick: steps('x..x..x...x..x..'), arp: steps('x.x.xx.x.x.xx.x.') }
GENRES['Odissi'] = GENRES['Kathak']
GENRES['Rajasthani folk'] = GENRES['Raas']
GENRES['Latin'] = { ...GENRES['Afrobeat'], kick: steps('x...x...x...x...'), snare: steps('...x..x....x..x.'), hat: steps('x.xx.xx.x.xx.xx.') }
GENRES['K-pop'] = { ...GENRES['House'], snare: steps('....x.......x..x'), hat: steps('x.x.x.x.x.x.x.xx') }
GENRES['Jazz'] = { ...GENRES['Hip-hop'], swing: .16, kick: steps('x.....x...x.....'), snare: steps('....x.......x...') }
GENRES['Contemporary'] = { ...GENRES['Strings'] }
const hz = (m: number) => 440 * Math.pow(2, (m - 69) / 12)

export function energyAt(r: Report, sec: number): number {
  const k = phaseIndexAt(r, sec), ph = r.phases[k]
  const u = r.config.total ? ((sec / r.config.seconds * r.config.total) - ph.t0) / (ph.t1 - ph.t0) : 0
  switch (ph.kind) {
    case 'enter': return 0.45 + 0.3 * u
    case 'form': return 0.82
    case 'flip': return 1
    case 'rotate': return 0.92
    case 'exit': return 0.7 - 0.5 * u
    default: return 0.6 + (Math.floor(k / 4) % 2) * 0.16
  }
}

export class Music {
  ctx: AudioContext | null = null
  private master: GainNode | null = null
  private bus: GainNode | null = null
  private out: GainNode | null = null
  private verb: ConvolverNode | null = null
  private noise: AudioBuffer | null = null
  private timer = 0
  private nextStep = 0
  private origin = 0
  private report: Report | null = null
  rate = 1
  muted = false
  genre: string | null = null
  song: { buffer: AudioBuffer; offset: number } | null = null
  private songNode: AudioBufferSourceNode | null = null
  volume = 0.8

  /** Call from a click, so that the browser allows sound. */
  unlock() { const c = this.ensure(); c.resume().catch(() => {}); return c }
  /** You can hear the proof: one rising note per checked phase, then a chord for the verdict. */
  chime(verdict: 'verified' | 'refuted' | 'not_proved', phases: number) {
    const ctx = this.ctx
    if (!ctx || this.muted) return
    const dest = this.verb && this.master ? this.master : ctx.destination
    const note = (m: number, at: number, peak: number, len: number, type: OscillatorType = 'sine') => {
      const o = ctx.createOscillator(), g = ctx.createGain(); o.type = type; o.frequency.value = hz(m)
      o.connect(g); g.connect(dest); if (this.verb) g.connect(this.verb)
      this.env(g, at, peak, .008, len); o.start(at); o.stop(at + len + .05)
    }
    const t0 = ctx.currentTime + .03
    if (verdict === 'verified') {
      const scale = [0, 2, 4, 7, 9], count = Math.min(16, Math.max(5, phases))
      for (let i = 0; i < count; i++) note(60 + scale[i % 5] + 12 * Math.floor(i / 5), t0 + i * .055, .1, .3)
      const end = t0 + count * .055 + .05
      ;[60, 67, 72, 76, 84].forEach((m, i) => note(m, end + i * .012, .13, 1.7))
    } else if (verdict === 'refuted') {
      note(40, t0, .4, .7, 'triangle'); note(46, t0, .2, .7, 'sawtooth'); note(34, t0 + .22, .4, 1.1, 'triangle'); note(40.6, t0 + .22, .14, 1.1, 'sawtooth')
    } else note(62, t0, .1, .6)
  }
  /** Sound effects for the movie. */
  sfx(kind: 'stamp' | 'scratch' | 'pow' | 'trombone' | 'fanfare' | 'applause' | 'tick') {
    const ctx = this.ctx
    if (!ctx || this.muted || !this.master || !this.noise) return
    const t = ctx.currentTime + .01, dest = this.master
    const osc = (type: OscillatorType, f0: number, f1: number, at: number, len: number, peak: number) => {
      const o = ctx.createOscillator(), g = ctx.createGain(); o.type = type; o.frequency.setValueAtTime(f0, at); o.frequency.exponentialRampToValueAtTime(Math.max(f1, 1), at + len)
      o.connect(g); g.connect(dest); this.env(g, at, peak, .006, len); o.start(at); o.stop(at + len + .05)
    }
    const hiss = (at: number, len: number, peak: number, type: BiquadFilterType, f0: number, f1 = f0) => {
      const s = ctx.createBufferSource(), g = ctx.createGain(), fl = ctx.createBiquadFilter(); s.buffer = this.noise; s.loop = true
      fl.type = type; fl.frequency.setValueAtTime(f0, at); fl.frequency.exponentialRampToValueAtTime(f1, at + len)
      s.connect(fl); fl.connect(g); g.connect(dest); this.env(g, at, peak, .01, len); s.start(at, Math.random()); s.stop(at + len + .05)
    }
    if (kind === 'tick') { osc('square', 1500, 1200, t, .05, .22) }
    if (kind === 'stamp') { osc('sine', 150, 42, t, .24, .75); hiss(t, .06, .3, 'highpass', 3000) }
    if (kind === 'scratch') { for (let k = 0; k < 3; k++) hiss(t + k * .11, .1, .5, 'bandpass', k % 2 ? 900 : 3400, k % 2 ? 3400 : 900) }
    if (kind === 'pow') { osc('sine', 190, 28, t, .7, 1); hiss(t, 1, .75, 'lowpass', 6000, 200); osc('square', 700, 90, t, .22, .25); for (let k = 0; k < 5; k++) osc('triangle', 500 - k * 70, 120, t + .3 + k * .15, .14, .25) }
    if (kind === 'trombone') { [233, 220, 208, 196].forEach((f, k) => osc('sawtooth', f, k === 3 ? f * .82 : f, t + k * .42, k === 3 ? 1.2 : .38, .2)) }
    if (kind === 'fanfare') { [[0, 60], [.14, 64], [.28, 67], [.42, 72], [.74, 72], [.88, 76], [1.02, 79]].forEach(([d, m]) => osc('sawtooth', hz(m), hz(m), t + d, .36, .14)); [60, 67, 72, 76, 84].forEach(m => osc('triangle', hz(m), hz(m), t + 1.2, 1.8, .13)) }
    if (kind === 'applause') { for (let k = 0; k < 90; k++) hiss(t + k * .055 + Math.random() * .05, .05 + Math.random() * .05, .05 + Math.random() * .1, 'bandpass', 1400 + Math.random() * 2600) }
  }
  private ensure() {
    if (this.ctx) return this.ctx
    const ctx = new AudioContext()
    this.ctx = ctx
    this.out = ctx.createGain(); this.out.gain.value = this.muted ? 0 : this.volume
    const comp = ctx.createDynamicsCompressor(); comp.threshold.value = -14; comp.ratio.value = 5
    comp.connect(this.out); this.out.connect(ctx.destination)
    this.master = ctx.createGain(); this.master.connect(comp)
    const len = ctx.sampleRate * 1.8, ir = ctx.createBuffer(2, len, ctx.sampleRate)
    for (let c = 0; c < 2; c++) { const d = ir.getChannelData(c); for (let i = 0; i < len; i++) d[i] = (Math.random() * 2 - 1) * Math.pow(1 - i / len, 3) }
    this.verb = ctx.createConvolver(); this.verb.buffer = ir
    const wet = ctx.createGain(); wet.gain.value = 0.16; this.verb.connect(wet); wet.connect(comp)
    const nb = ctx.createBuffer(1, ctx.sampleRate * 2, ctx.sampleRate), nd = nb.getChannelData(0)
    for (let i = 0; i < nd.length; i++) nd[i] = Math.random() * 2 - 1
    this.noise = nb
    return ctx
  }
  setMuted(m: boolean) { this.muted = m; if (this.out && this.ctx) this.out.gain.setTargetAtTime(m ? 0 : this.volume, this.ctx.currentTime, 0.02) }
  now() { return this.ctx ? (this.ctx.currentTime - this.origin) * this.rate : 0 }

  async start(report: Report, fromSec: number, rate = 1) {
    this.rate = rate
    const ctx = this.ensure()
    await ctx.resume().catch(() => {})
    this.stop()
    this.report = report
    this.bus = ctx.createGain(); this.bus.connect(this.master!)
    this.origin = ctx.currentTime + 0.06 - fromSec / rate
    if (this.song) {
      // a person's song is the clock: playback starts at the same instant the routine does
      const node = ctx.createBufferSource(); node.buffer = this.song.buffer; node.playbackRate.value = rate; node.connect(this.bus)
      node.start(this.origin + fromSec / rate, this.song.offset + fromSec); this.songNode = node
      return
    }
    this.bus.connect(this.verb!)
    const spb = 60 / bpmOf(report) / 4
    this.nextStep = Math.ceil(fromSec / spb)
    this.timer = window.setInterval(() => this.pump(), 40)
    this.pump()
  }
  stop() {
    clearInterval(this.timer); this.timer = 0
    if (this.songNode) { try { this.songNode.stop() } catch { /* already stopped */ } this.songNode = null }
    if (this.bus && this.ctx) { const b = this.bus; b.gain.setTargetAtTime(0, this.ctx.currentTime, 0.015); setTimeout(() => b.disconnect(), 300) }
    this.bus = null
  }
  private pump() {
    const r = this.report, ctx = this.ctx
    if (!r || !ctx || !this.bus) return
    const spb = 60 / bpmOf(r) / 4
    while (this.origin + this.nextStep * spb / this.rate < ctx.currentTime + 0.18) {
      const sec = this.nextStep * spb
      if (sec >= r.config.seconds) break
      this.step(r, this.nextStep, this.origin + sec / this.rate, spb)
      this.nextStep++
    }
  }
  private env(g: GainNode, at: number, peak: number, attack: number, decay: number) {
    g.gain.setValueAtTime(0.0001, at)
    g.gain.exponentialRampToValueAtTime(Math.max(peak, 0.0002), at + attack)
    g.gain.exponentialRampToValueAtTime(0.0001, at + attack + decay)
  }
  private tone(type: OscillatorType, f: number, at: number, peak: number, attack: number, decay: number, cutoff = 6000) {
    const ctx = this.ctx!, o = ctx.createOscillator(), g = ctx.createGain(), fl = ctx.createBiquadFilter()
    o.type = type; o.frequency.value = f; fl.type = 'lowpass'; fl.frequency.value = cutoff
    o.connect(fl); fl.connect(g); g.connect(this.bus!)
    this.env(g, at, peak, attack, decay); o.start(at); o.stop(at + attack + decay + 0.05)
  }
  private burst(at: number, peak: number, decay: number, type: BiquadFilterType, freq: number) {
    const ctx = this.ctx!, s = ctx.createBufferSource(), g = ctx.createGain(), fl = ctx.createBiquadFilter()
    s.buffer = this.noise; s.loop = true; fl.type = type; fl.frequency.value = freq
    s.connect(fl); fl.connect(g); g.connect(this.bus!)
    this.env(g, at, peak, 0.002, decay); s.start(at, Math.random()); s.stop(at + decay + 0.05)
  }
  private kick(at: number, peak: number, tone: number) {
    const ctx = this.ctx!, o = ctx.createOscillator(), g = ctx.createGain()
    o.frequency.setValueAtTime(140 * tone, at); o.frequency.exponentialRampToValueAtTime(46 * tone, at + 0.09)
    o.connect(g); g.connect(this.bus!); this.env(g, at, peak, 0.003, 0.26); o.start(at); o.stop(at + 0.32)
  }
  private step(r: Report, s: number, at: number, spb: number) {
    const G = GENRES[this.genre ?? r.plan.genre] ?? GENRES.House
    const when = at + (s % 2 === 1 ? G.swing * spb * 2 : 0)
    const sec = s * spb, e = energyAt(r, sec), p = s % 16
    const bar = Math.floor(s / 16), chord = G.chords[Math.floor(bar / 2) % G.chords.length]
    const k = phaseIndexAt(r, sec), ph = r.phases[k]
    const flipLift = ph.kind === 'flip' ? 3 : 0
    if (G.kick[p] && e > 0.3) this.kick(when, 0.8 * G.kick[p], G.drumTone)
    if (G.snare[p] && e > 0.45) { this.burst(when, 0.26 * G.snare[p], 0.14, 'bandpass', 1900); this.tone('triangle', 190, when, 0.1, 0.002, 0.1) }
    if (G.hat[p] && e > 0.5) this.burst(when, 0.09 * G.hat[p], 0.04, 'highpass', 8000)
    if (G.bass[p] && e > 0.25) this.tone(G.waveform === 'sawtooth' ? 'sawtooth' : 'triangle', hz(G.root - 12 + chord[0] + flipLift), when, 0.3, 0.005, spb * 1.5, 500 + 700 * e)
    if (G.stab[p] && e > 0.55) chord.forEach(n => this.tone(G.waveform, hz(G.root + 12 + n + flipLift), when, 0.055, 0.004, spb * 2.2, 1500 + 2500 * e))
    if (G.arp[p] && e > 0.72) this.tone('triangle', hz(G.root + 24 + chord[(s >> 1) % chord.length] + flipLift), when, 0.06, 0.003, spb * 1.3, 4200)
    if (G.pad && p === 0 && bar % 2 === 0) chord.forEach(n => this.tone('sawtooth', hz(G.root + n + flipLift), when, 0.03 + 0.03 * e, 0.5, spb * 30, 500 + 1100 * e))
    // the score follows the routine: a hit on each new move, a rise into it
    const tick = s * r.config.ticksPerBeat / 4
    for (const q of r.phases) {
      if (q.kind === 'hold') continue
      if (q.t0 === tick && (q.index === 0 || r.phases[q.index - 1].kind !== q.kind)) {
        this.kick(when, 1, G.drumTone * 0.7); this.burst(when, 0.3, 1.2, 'highpass', 3000)
      }
      const before = q.t0 - tick
      if (before > 0 && before <= r.config.ticksPerBeat * 2 && (q.index === 0 || r.phases[q.index - 1].kind !== q.kind)) {
        this.burst(when, 0.03 + 0.1 * (1 - before / (r.config.ticksPerBeat * 2)), spb * 0.9, 'bandpass', 3000 + 5000 * (1 - before / (r.config.ticksPerBeat * 2)))
      }
    }
  }
}
