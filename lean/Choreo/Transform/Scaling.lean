import Choreo.Transform.Isometry
namespace Choreo.Algebra

/-- Scale every position about `(cx, cy)` by `k`. -/
def scale (k cx cy : Rat) (p : Position) : Position := ⟨cx + k * (p.x - cx), cy + k * (p.y - cy)⟩

/-- **Scaling multiplies every squared distance by `k²`.** -/
theorem scale_pairwise_distance (k cx cy : Rat) (p q : Position) :
    distSq (scale k cx cy p) (scale k cx cy q) = k * k * distSq p q := by
  simp only [scale, distSq]; grind

/-- **Scaling up can't cause a collision.** If `k²` is at least 1, a collision-free formation stays collision-free. -/
theorem scale_preserves_collision_freedom {k cx cy d2 : Rat} {n : Nat} {F : Formation} (hk : 1 ≤ k * k) (hd : 0 ≤ d2)
    (hlen : F.length = n) (h : CollisionFree n d2 F) : CollisionFree n d2 (F.map' (scale k cx cy)) := by
  intro i j hi hj hne
  rw [at_map hlen hi, at_map hlen hj, scale_pairwise_distance]
  have g := h i j hi hj hne
  have m := Lean.Grind.OrderedRing.mul_nonneg (show 0 ≤ k * k - 1 by grind) (show 0 ≤ distSq (F.at i) (F.at j) by grind)
  grind

/-- **Scaling down shows exactly how much room is left.** Scaling by `k` takes a gap of `d2` to `k² · d2`. -/
theorem scale_collision_freedom_adjusted {k cx cy d2 : Rat} {n : Nat} {F : Formation}
    (hlen : F.length = n) (h : CollisionFree n d2 F) : CollisionFree n (k * k * d2) (F.map' (scale k cx cy)) := by
  intro i j hi hj hne
  rw [at_map hlen hi, at_map hlen hj, scale_pairwise_distance]
  have g := h i j hi hj hne
  have sq : 0 ≤ k * k := by have := Lean.Grind.OrderedRing.sq_nonneg (a := k); grind
  have m := Lean.Grind.OrderedRing.mul_nonneg sq (show 0 ≤ distSq (F.at i) (F.at j) - d2 by grind)
  grind

end Choreo.Algebra
