import Choreo.Transform.Isometry
namespace Choreo.Algebra

/-- Move every dancer by the same amount. -/
def translate (vx vy : Rat) (p : Position) : Position := ⟨p.x + vx, p.y + vy⟩

/-- **Translation keeps every distance.** -/
theorem translate_preserves_pairwise_distance (vx vy : Rat) : IsIsometry (translate vx vy) := by
  intro p q
  simp only [translate, distSq]
  grind

theorem translate_preserves_collision_freedom (vx vy : Rat) {n : Nat} {d2 : Rat} {F : Formation}
    (hlen : F.length = n) (h : CollisionFree n d2 F) : CollisionFree n d2 (F.map' (translate vx vy)) :=
  isometry_preserves_collision_freedom (translate_preserves_pairwise_distance vx vy) hlen h

/-- **Theorem 5: conditional stage containment.** A dancer moving in a straight line stays on the stage
    at every moment, if both ends are on it. For a line, and not for an arbitrary path. -/
theorem straight_line_stays_on_stage {s : Stage} {p : Position} {vx vy t : Rat}
    (h0 : s.contains p) (h1 : s.contains (translate vx vy p)) (ht0 : 0 ≤ t) (ht1 : t ≤ 1) :
    s.contains (translate (t * vx) (t * vy) p) := by
  simp only [Stage.contains, translate] at *
  obtain ⟨a, b, c, d⟩ := h0
  obtain ⟨e, f, g, h⟩ := h1
  have mx : ∀ {u v : Rat}, 0 ≤ u → 0 ≤ v → 0 ≤ u * v := fun hu hv => Lean.Grind.OrderedRing.mul_nonneg hu hv
  have ht : 0 ≤ 1 - t := by grind
  have l1 := mx ht (show 0 ≤ p.x - s.xmin by grind)
  have l2 := mx ht0 (show 0 ≤ p.x + vx - s.xmin by grind)
  have r1 := mx ht (show 0 ≤ s.xmax - p.x by grind)
  have r2 := mx ht0 (show 0 ≤ s.xmax - (p.x + vx) by grind)
  have l3 := mx ht (show 0 ≤ p.y - s.ymin by grind)
  have l4 := mx ht0 (show 0 ≤ p.y + vy - s.ymin by grind)
  have r3 := mx ht (show 0 ≤ s.ymax - p.y by grind)
  have r4 := mx ht0 (show 0 ≤ s.ymax - (p.y + vy) by grind)
  refine ⟨?_, ?_, ?_, ?_⟩ <;> grind

end Choreo.Algebra
