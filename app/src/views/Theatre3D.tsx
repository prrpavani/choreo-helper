import { useEffect, useRef, useState } from 'react'
import * as THREE from 'three'
import { clock } from '../lib/clock'
import { Report, positionsAt } from '../lib/routine'
import { createTheatre } from './theatre-core'
import { toWorld } from './three-common'

type CamName = 'Audience' | 'Balcony' | 'From the wings' | 'Overhead'
const CAMS: Record<CamName, { pos: [number, number, number]; look: [number, number, number] }> = {
  Audience: { pos: [0, 2.1, 12.5], look: [0, 1.2, -1] },
  Balcony: { pos: [0, 8.4, 13], look: [0, 0.4, -0.5] },
  'From the wings': { pos: [12.5, 2.6, 3.6], look: [0, 1, 0] },
  Overhead: { pos: [0, 17, 0.01], look: [0, 0, 0] },
}

export function Theatre3D({ report, selected }: { report: Report; selected: number | null }) {
  const host = useRef<HTMLDivElement>(null)
  const [cam, setCam] = useState<CamName>('Audience')
  const target = useRef({ cam, follow: selected, report }); target.current = { cam, follow: selected, report }
  const camDirty = useRef(true)
  useEffect(() => { camDirty.current = true }, [cam])
  useEffect(() => {
    const th = createTheatre(host.current!, report)
    th.camera.position.set(...CAMS.Audience.pos); th.controls.target.set(...CAMS.Audience.look)
    th.controls.addEventListener('start', () => { camDirty.current = false })
    const look = new THREE.Vector3(), place = new THREE.Vector3()
    let raf = 0, last = performance.now()
    const tick = () => {
      raf = requestAnimationFrame(tick)
      const now = performance.now(), dt = Math.min(.05, (now - last) / 1000); last = now
      const { report: r, cam: cn, follow } = target.current
      th.update(r, clock.t, dt)
      if (follow !== null && cn === 'Audience') {
        const p = positionsAt(r, Math.min(clock.t, r.config.seconds - .001))[follow]
        if (p) th.controls.target.lerp(toWorld(p[0], p[1], 1.1), Math.min(1, dt * 2))
      }
      if (camDirty.current) {
        const c = CAMS[cn]
        th.camera.position.lerp(place.set(...c.pos), Math.min(1, dt * 2.6))
        th.controls.target.lerp(look.set(...c.look), Math.min(1, dt * 2.6))
        if (th.camera.position.distanceTo(place) < .02) camDirty.current = false
      }
      th.controls.update(); th.render()
    }
    tick()
    return () => { cancelAnimationFrame(raf); th.dispose() }
  }, [report.fingerprint])
  return <div className="fill">
    <div ref={host} className="fill" />
    <div className="chips floating-bottom">
      {(Object.keys(CAMS) as CamName[]).map(c => <button key={c} className={`chip ${c === cam ? 'on' : ''}`} onClick={() => { setCam(c); camDirty.current = true }}>{c}</button>)}
    </div>
  </div>
}
