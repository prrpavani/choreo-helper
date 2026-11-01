import * as THREE from 'three'
import { hasPose, poseFor } from './stepPose'
import { OrbitControls } from 'three/examples/jsm/controls/OrbitControls.js'
import { EffectComposer } from 'three/examples/jsm/postprocessing/EffectComposer.js'
import { RenderPass } from 'three/examples/jsm/postprocessing/RenderPass.js'
import { UnrealBloomPass } from 'three/examples/jsm/postprocessing/UnrealBloomPass.js'
import { OutputPass } from 'three/examples/jsm/postprocessing/OutputPass.js'
import { clock } from '../lib/clock'
import { energyAt } from '../lib/music'
import { DANCER_COLORS, Report, bpmOf, crashOf, crashPose, gapColor, pathAt, phaseIndexAt, positionsAt, secToTick } from '../lib/routine'
import { disposeScene, toWorld } from './three-common'

interface Figure { root: THREE.Group; hips: THREE.Group; armL: THREE.Group; armR: THREE.Group; legL: THREE.Group; legR: THREE.Group; ring: THREE.Mesh; stars: THREE.Group; face: number }

function capsule(r: number, len: number, mat: THREE.Material) { return new THREE.Mesh(new THREE.CapsuleGeometry(r, len, 6, 12), mat) }
function limb(r: number, len: number, mat: THREE.Material, x: number, y: number) {
  const g = new THREE.Group(); g.position.set(x, y, 0)
  const m = capsule(r, len, mat); m.position.y = -len / 2 - r; m.castShadow = true; g.add(m); return g
}
function makeFigure(color: string): Figure {
  const skin = new THREE.MeshStandardMaterial({ color, roughness: .42, metalness: .08, emissive: new THREE.Color(color), emissiveIntensity: .1 })
  const root = new THREE.Group(), hips = new THREE.Group(); hips.position.y = .9; root.add(hips)
  const torso = capsule(.145, .4, skin); torso.position.y = .3; torso.castShadow = true; hips.add(torso)
  const head = new THREE.Mesh(new THREE.SphereGeometry(.115, 20, 16), skin); head.position.y = .76; head.castShadow = true; hips.add(head)
  const armL = limb(.042, .5, skin, -.2, .53), armR = limb(.042, .5, skin, .2, .53)
  const legL = limb(.062, .68, skin, -.09, 0), legR = limb(.062, .68, skin, .09, 0)
  hips.add(armL, armR, legL, legR)
  const ring = new THREE.Mesh(new THREE.RingGeometry(.285, .3, 48), new THREE.MeshBasicMaterial({ color, transparent: true, opacity: .55, side: THREE.DoubleSide }))
  ring.rotation.x = -Math.PI / 2; ring.position.y = .012; root.add(ring)
  const stars = new THREE.Group(); stars.visible = false
  for (let k = 0; k < 5; k++) {
    const s = new THREE.Mesh(new THREE.OctahedronGeometry(.075), new THREE.MeshBasicMaterial({ color: '#FFD84D' }))
    s.position.set(Math.cos(k / 5 * Math.PI * 2) * .38, 0, Math.sin(k / 5 * Math.PI * 2) * .38); stars.add(s)
  }
  return { root, hips, armL, armR, legL, legR, ring, stars, face: 0 }
}
function curtain() {
  const c = document.createElement('canvas'); c.width = 1024; c.height = 64
  const x = c.getContext('2d')!
  for (let i = 0; i < 1024; i++) { const v = .5 + .5 * Math.sin(i / 1024 * Math.PI * 36) + .15 * Math.sin(i / 1024 * Math.PI * 91); const l = 8 + v * 24; x.fillStyle = `hsl(345 46% ${l}%)`; x.fillRect(i, 0, 1, 64) }
  const t = new THREE.CanvasTexture(c); t.colorSpace = THREE.SRGBColorSpace; return t
}
function floorTexture() {
  const c = document.createElement('canvas'); c.width = 1024; c.height = 1024
  const x = c.getContext('2d')!
  x.fillStyle = '#4A3A40'; x.fillRect(0, 0, 1024, 1024)
  for (let i = 0; i < 14; i++) { x.fillStyle = `rgba(255,225,190,${.03 + (i * 7 % 5) * .014})`; x.fillRect(i * 74, 0, 72, 1024) }
  const t = new THREE.CanvasTexture(c); t.colorSpace = THREE.SRGBColorSpace; return t
}

export interface Theatre {
  camera: THREE.PerspectiveCamera; controls: OrbitControls; renderer: THREE.WebGLRenderer; scene: THREE.Scene
  /** Pose everyone for this moment. `bow` from 0 to 1 is the curtain call. */
  update: (r: Report, sec: number, dt: number, bow?: number) => void
  render: () => void
  dispose: () => void
  /** Light one dancer and dim the rest: the part you're learning. */
  setFocus: (i: number | null) => void
  /** Draw one dancer's whole path on the floor. */
  showPath: (i: number | null, r: Report) => void
  /** Where a dancer is now, in the 3D world. */
  figurePosition: (i: number) => THREE.Vector3 | null
}

export function createTheatre(el: HTMLElement, report: Report): Theatre {
  const renderer = new THREE.WebGLRenderer({ antialias: true, powerPreference: 'high-performance' })
  renderer.setPixelRatio(Math.min(devicePixelRatio, 2))
  renderer.shadowMap.enabled = true; renderer.shadowMap.type = THREE.PCFSoftShadowMap
  renderer.toneMapping = THREE.ACESFilmicToneMapping; renderer.toneMappingExposure = .95
  el.appendChild(renderer.domElement)
  const scene = new THREE.Scene(); scene.background = new THREE.Color('#07060A'); scene.fog = new THREE.FogExp2('#07060A', .022)
  const camera = new THREE.PerspectiveCamera(42, 1, .1, 100)
  const controls = new OrbitControls(camera, renderer.domElement)
  controls.enableDamping = true; controls.maxPolarAngle = Math.PI / 2.02; controls.minDistance = 2; controls.maxDistance = 30

  const env = report.config.envelope, st = report.config.stage, widthAll = (env.xmax - env.xmin) / 1000 + 4
  const floor = new THREE.Mesh(new THREE.PlaneGeometry(widthAll, 12), new THREE.MeshStandardMaterial({ map: floorTexture(), roughness: .42, metalness: .05 }))
  floor.rotation.x = -Math.PI / 2; floor.receiveShadow = true; scene.add(floor)
  scene.add(new THREE.LineLoop(new THREE.BufferGeometry().setFromPoints([toWorld(st.xmin, 0, .01), toWorld(st.xmax, 0, .01), toWorld(st.xmax, 8000, .01), toWorld(st.xmin, 8000, .01)]), new THREE.LineBasicMaterial({ color: '#E8B458', transparent: true, opacity: .4 })))
  const back = new THREE.Mesh(new THREE.PlaneGeometry(widthAll, 9), new THREE.MeshStandardMaterial({ map: curtain(), roughness: .9 })); back.position.set(0, 4.5, -4.3); back.receiveShadow = true; scene.add(back)
  const legMat = new THREE.MeshStandardMaterial({ color: '#0D0A11', roughness: 1 })
  for (const side of [-1, 1]) for (const [i, z] of [-3, -.6, 1.8, 4].entries()) { const leg = new THREE.Mesh(new THREE.BoxGeometry(1.5, 8, .08), legMat); leg.position.set(side * (6.75 + i * .02), 4, z); scene.add(leg) }
  const beam = new THREE.Mesh(new THREE.BoxGeometry(widthAll, 1.6, .2), legMat); beam.position.set(0, 7.5, 4.3); scene.add(beam)
  const crowdMat = new THREE.MeshBasicMaterial({ color: '#030305' })
  for (let i = 0; i < 26; i++) { const h = new THREE.Mesh(new THREE.SphereGeometry(.34, 14, 12), crowdMat); h.position.set(-11 + i * .88 + (i % 2) * .2, .55 + (i % 3) * .07, 8.8 + (i % 2) * .6); scene.add(h) }
  scene.add(new THREE.HemisphereLight('#a596c4', '#3a2c34', 1.15))

  const rig: { light: THREE.SpotLight; cone: THREE.Mesh; phase: number }[] = []
  ;['#FFB25A', '#6AA8FF', '#FF6F91', '#7FE3C4', '#FFD9A0'].forEach((c, i) => {
    const x = -8 + i * 4
    const light = new THREE.SpotLight(c, 40, 22, .36, .85, 1.1); light.position.set(x, 8.5, 3.5)
    light.target.position.set(x * .35, 0, -.5); scene.add(light, light.target)
    if (i === 2 || i === 1) { light.castShadow = true; light.shadow.mapSize.set(1024, 1024); light.shadow.bias = -.0005 }
    const coneGeo = new THREE.ConeGeometry(2.4, 9, 32, 1, true); coneGeo.translate(0, -4.5, 0)
    const cone = new THREE.Mesh(coneGeo, new THREE.ShaderMaterial({
      uniforms: { color: { value: new THREE.Color(c) }, opacity: { value: .05 } }, transparent: true, depthWrite: false, side: THREE.DoubleSide, blending: THREE.AdditiveBlending,
      vertexShader: 'varying vec3 vN; varying vec3 vV; varying float vH; void main(){ vec4 mv = modelViewMatrix * vec4(position,1.); vN = normalize(normalMatrix*normal); vV = normalize(-mv.xyz); vH = -position.y/9.; gl_Position = projectionMatrix*mv; }',
      fragmentShader: 'uniform vec3 color; uniform float opacity; varying vec3 vN; varying vec3 vV; varying float vH; void main(){ float rim = pow(abs(dot(normalize(vN),normalize(vV))), 2.4); float fall = pow(1.-clamp(vH,0.,1.), 1.5); gl_FragColor = vec4(color, opacity*rim*fall); }',
    }))
    cone.position.copy(light.position); scene.add(cone)
    rig.push({ light, cone, phase: i * 1.3 })
  })
  const figures: Figure[] = []
  for (let i = 0; i < report.config.n; i++) { const f = makeFigure(DANCER_COLORS[i]); figures.push(f); scene.add(f.root, f.stars) }
  const gapPos = new Float32Array(16 * 16 * 6), gapCol = new Float32Array(16 * 16 * 6), gapGeo = new THREE.BufferGeometry()
  gapGeo.setAttribute('position', new THREE.BufferAttribute(gapPos, 3)); gapGeo.setAttribute('color', new THREE.BufferAttribute(gapCol, 3)); gapGeo.setDrawRange(0, 0)
  const gapLines = new THREE.LineSegments(gapGeo, new THREE.LineBasicMaterial({ vertexColors: true, transparent: true, opacity: .9 })); gapLines.frustumCulled = false; scene.add(gapLines)

  const composer = new EffectComposer(renderer)
  composer.addPass(new RenderPass(scene, camera))
  const bloom = new UnrealBloomPass(new THREE.Vector2(1, 1), .22, .6, .88); composer.addPass(bloom)
  composer.addPass(new OutputPass())
  const fit = () => { const w = el.clientWidth, h = el.clientHeight; if (!w || !h) return; renderer.setSize(w, h); composer.setSize(w, h); camera.aspect = w / h; camera.updateProjectionMatrix() }
  const ro = new ResizeObserver(fit); ro.observe(el); fit()
  let trail: THREE.Line | null = null
  const dummy = new THREE.Vector3(), down = new THREE.Vector3(0, -1, 0)

  const update: Theatre['update'] = (r, sec, dt, bow = 0) => {
    const beat = sec * bpmOf(r) / 60, pulse = Math.pow(1 - (beat % 1), 2.5), e = energyAt(r, Math.min(sec, r.config.seconds - .01))
    const clamped = Math.min(sec, r.config.seconds - .001)
    const stepsHere = [...new Set(r.phases.filter(p => p.kind === 'hold' && hasPose(p.label)).map(p => p.label))]
    const pos = positionsAt(r, clamped), ph = r.phases[phaseIndexAt(r, clamped)]
    const crash = clock.crashAllowed && !clock.debug ? crashOf(r) : null, crashing = !!crash && sec >= crash.second
    const u = Math.min(1, Math.max(0, (secToTick(r, clamped) - ph.t0) / (ph.t1 - ph.t0)))
    const lift = Math.sin(Math.PI * u), travel = ph.kind !== 'hold'
    const closest = new Array(figures.length).fill(Infinity) as number[]
    for (let i = 0; i < figures.length; i++) for (let j = 0; j < i; j++) { if (!pos[i] || !pos[j]) continue; const d = Math.hypot(pos[i][0] - pos[j][0], pos[i][1] - pos[j][1]); closest[i] = Math.min(closest[i], d); closest[j] = Math.min(closest[j], d) }
    figures.forEach((f, i) => {
      if (!pos[i]) return
      const q = crash && crashing ? crashPose(r, crash, sec, i) : null
      const world = q ? toWorld(q.x, q.y) : toWorld(pos[i][0], pos[i][1])
      f.root.position.copy(world)
      const P = ph.paths[i], a = pathAt(P, 0), b = pathAt(P, 1), dx = (b[0] - a[0]) / 1000, dy = (b[1] - a[1]) / 1000, dist = Math.hypot(dx, dy)
      const swingLeg = ph.index % 2 === 0 ? f.legL : f.legR, plant = swingLeg === f.legL ? f.legR : f.legL
      f.legL.rotation.set(0, 0, 0); f.legR.rotation.set(0, 0, 0)
      let facing = 0, armLx = 0, armRx = 0, armLz = -.12, armRz = .12, hipY = .88, hipZ = 0, tilt = 0, spin = false
      if (q && q.fall > 0) {
        // knocked flat, limbs everywhere
        facing = Math.atan2(q.dirX, -q.dirY)
        tilt = -q.fall * Math.PI / 2
        const flail = Math.sin(sec * 14 + i) * (1 - q.fall)
        armLz = -1.5 - flail; armRz = 1.5 + flail; armLx = flail; armRx = -flail
        f.legL.rotation.z = -.5 * q.fall; f.legR.rotation.z = .5 * q.fall; f.legL.rotation.x = .4 * q.fall; f.legR.rotation.x = -.3 * q.fall
        hipY = .88 - q.fall * .68
        f.root.position.y = q.hop / 1000
      } else if (bow > 0) {
        facing = 0; tilt = bow * .85; hipY = .88; armLz = -.2; armRz = .2; armLx = -.5 * bow; armRx = -.5 * bow
      } else {
        const moving = travel && dist > .3
        const sideways = Math.abs(dx) >= Math.abs(dy), dir = dist > .01 ? (sideways ? Math.sign(dx) : Math.sign(dy)) : 0
        if (moving) {
          facing = Math.atan2(dx, -dy)
          const stride = Math.sin(beat * Math.PI) * Math.min(1, dist / 1.2) * Math.pow(lift, .4)
          f.legL.rotation.x = stride * .62; f.legR.rotation.x = -stride * .62
          armLx = -stride * .55; armRx = stride * .55
          hipY = .88 + Math.abs(stride) * .025
        } else if (dist > .01) {
          if (sideways) { swingLeg.rotation.z = dir * .62 * lift; plant.rotation.z = -dir * .16 * lift }
          else { swingLeg.rotation.x = -dir * .72 * lift; plant.rotation.x = dir * .2 * lift }
          hipY = .885 - (1 - lift) * .04
          hipZ = (sideways ? -dir : 0) * .05 * lift
        }
        // the step goes on through every transition, from the waist up
        const name = travel ? stepsHere[Math.floor(beat / 8) % Math.max(1, stepsHere.length)] : ph.label
        const pose = name ? poseFor(name, { beat, lift, dir, index: ph.index }) : null
        if (pose) {
          armLx = pose.armLx ?? armLx; armRx = pose.armRx ?? armRx; armLz = pose.armLz ?? armLz; armRz = pose.armRz ?? armRz
          hipZ = pose.hipZ ?? hipZ; tilt = pose.tilt ?? tilt
          if (pose.hipY !== undefined) hipY = moving ? Math.max(.84, pose.hipY) : pose.hipY
          if (!moving) {
            if (pose.knees) { f.legL.rotation.z -= pose.knees; f.legR.rotation.z += pose.knees }
            if (pose.stamp) (Math.floor(beat) % 2 ? f.legL : f.legR).rotation.x = -.34 * Math.abs(Math.sin(beat * Math.PI))
            if (pose.spin) { facing = Math.PI * 2 * (u * u * (3 - 2 * u)); spin = true }
          }
        }
      }
      let d = facing - f.face; while (d > Math.PI) d -= 2 * Math.PI; while (d < -Math.PI) d += 2 * Math.PI
      f.face = spin || q ? facing : f.face + d * Math.min(1, dt * 9)
      f.root.rotation.y = f.face
      f.hips.position.y = hipY; f.hips.rotation.set(tilt, 0, hipZ)
      f.armL.rotation.set(armLx, 0, armLz); f.armR.rotation.set(armRx, 0, armRz)
      const mat = f.ring.material as THREE.MeshBasicMaterial
      mat.color.set(q ? '#FF5A4F' : gapColor(closest[i], r.config.dmin)); mat.opacity = closest[i] < r.config.dmin * 1.5 || q ? .95 : .35 + pulse * .15
      const scaleRing = r.config.dmin / 600; f.ring.scale.set(scaleRing, scaleRing, 1)
      f.stars.visible = !!q && q.hit && q.fall > .4
      if (f.stars.visible) { f.stars.position.set(world.x, .62, world.z); f.stars.rotation.y = performance.now() / 260 }
    })
    let v = 0
    if (!crashing) {
      const lim = Math.max(1500, r.config.dmin * 2.2)
      for (let i = 0; i < figures.length; i++) for (let j = 0; j < i; j++) {
        if (!pos[i] || !pos[j]) continue
        const dd = Math.hypot(pos[i][0] - pos[j][0], pos[i][1] - pos[j][1])
        if (dd >= lim) continue
        const A = toWorld(pos[i][0], pos[i][1], .03), B = toWorld(pos[j][0], pos[j][1], .03), col = new THREE.Color(gapColor(dd, r.config.dmin))
        gapPos.set([A.x, A.y, A.z, B.x, B.y, B.z], v * 6); gapCol.set([col.r, col.g, col.b, col.r, col.g, col.b], v * 6); v++
      }
    }
    gapGeo.setDrawRange(0, v * 2); gapGeo.attributes.position.needsUpdate = true; gapGeo.attributes.color.needsUpdate = true
    rig.forEach((g, i) => {
      const sweep = Math.sin(beat * .25 + g.phase)
      const tx = crashing && crash ? crash.cx / 1000 + Math.sin(sec * 3 + i) * 1.5 : sweep * 5 + (ph.kind === 'flip' ? Math.sin(beat * Math.PI / 2 + i) * 2 : 0)
      const tz = crashing && crash ? (4000 - crash.cy) / 1000 : Math.cos(beat * .19 + g.phase) * 2.6
      g.light.target.position.set(tx, 0, tz)
      g.light.intensity = 60 + e * 70 + pulse * 50 * e
      dummy.set(tx, 0, tz).sub(g.cone.position).normalize()
      g.cone.quaternion.setFromUnitVectors(down, dummy)
      ;(g.cone.material as THREE.ShaderMaterial).uniforms.opacity.value = .05 + .1 * e + pulse * .05
    })
    bloom.strength = .12 + e * .12 + pulse * .06
  }
  return {
    camera, controls, renderer, scene, update, render: () => composer.render(),
    setFocus: i => figures.forEach((f, k) => {
      const dim = i !== null && k !== i
      f.hips.traverse(o => { const m = (o as THREE.Mesh).material as THREE.MeshStandardMaterial | undefined; if (m?.color) { m.emissive.set(dim ? '#000' : DANCER_COLORS[k]); m.emissiveIntensity = i === k ? .55 : .1; m.color.set(dim ? '#3A3744' : DANCER_COLORS[k]) } })
    }),
    showPath: (i, r) => {
      if (trail) { scene.remove(trail); trail.geometry.dispose() ; trail = null }
      if (i === null) return
      const pts: THREE.Vector3[] = []
      for (const ph of r.phases) for (let u = 0; u <= 10; u++) { const p = pathAt(ph.paths[i], u / 10); pts.push(toWorld(p[0], p[1], .04)) }
      trail = new THREE.Line(new THREE.BufferGeometry().setFromPoints(pts), new THREE.LineBasicMaterial({ color: '#FF6A1F' }))
      scene.add(trail)
    },
    figurePosition: i => figures[i]?.root.position ?? null,
    dispose: () => { ro.disconnect(); controls.dispose(); composer.dispose(); disposeScene(scene); renderer.dispose(); el.removeChild(renderer.domElement) },
  }
}
