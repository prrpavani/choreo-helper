import * as THREE from 'three'
export const toWorld = (x: number, y: number, h = 0) => new THREE.Vector3(x / 1000, h, (4000 - y) / 1000)
export function disposeScene(s: THREE.Object3D) {
  s.traverse(o => {
    const m = o as THREE.Mesh
    m.geometry?.dispose?.()
    const mat = m.material as THREE.Material | THREE.Material[] | undefined
    if (Array.isArray(mat)) mat.forEach(x => x.dispose()); else mat?.dispose?.()
  })
}
