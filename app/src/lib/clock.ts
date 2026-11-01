import { Report } from './routine'
import { Music } from './music'

/** Single source of "what second are we at". While playing, it reads the audio clock. */
export class Clock {
  t = 0
  playing = false
  report: Report | null = null
  music = new Music()
  /** Loudness of a person's song, for the timeline. */
  peaks: number[] | null = null
  /** The cartoon only plays once the kernel has actually refuted the routine, and not while debugging. */
  crashAllowed = false
  /** While debugging, the true positions show, with no cartoon. */
  debug = false
  /** Playback speed: slow motion for learning. */
  rate = 1
  /** A section to repeat, in seconds. */
  loop: { from: number; to: number } | null = null
  private listeners = new Set<() => void>()
  private raf = 0
  subscribe(f: () => void) { this.listeners.add(f); return () => { this.listeners.delete(f) } }
  private emit() { this.listeners.forEach(f => f()) }
  setReport(r: Report | null) { this.report = r; if (r && this.t > r.config.seconds) this.seek(0) }
  private frame = () => {
    if (!this.playing || !this.report) return
    this.t = this.music.now()
    if (this.loop && this.t >= this.loop.to) { const from = this.loop.from; this.playing = false; this.music.stop(); this.t = from; this.play(); return }
    if (this.t >= this.report.config.seconds) { this.t = this.report.config.seconds; this.pause(); return }
    this.raf = requestAnimationFrame(this.frame)
  }
  async play() {
    if (!this.report || this.playing) return
    if (this.t >= this.report.config.seconds - 0.05) this.t = 0
    this.playing = true
    await this.music.start(this.report, this.t, this.rate)
    this.emit()
    this.raf = requestAnimationFrame(this.frame)
  }
  pause() { this.playing = false; cancelAnimationFrame(this.raf); this.music.stop(); this.emit() }
  setRate(r: number) { this.rate = r; if (this.playing) this.seek(this.t); else this.emit() }
  setLoop(l: { from: number; to: number } | null) { this.loop = l; this.emit() }
  toggle() { this.playing ? this.pause() : this.play() }
  seek(sec: number) {
    const was = this.playing
    if (was) { this.playing = false; cancelAnimationFrame(this.raf); this.music.stop() }
    this.t = Math.max(0, Math.min(sec, this.report?.config.seconds ?? 0))
    if (was) this.play(); else this.emit()
  }
}
export const clock = new Clock()
