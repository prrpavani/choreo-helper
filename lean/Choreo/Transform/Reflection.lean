import Choreo.Transform.Isometry
namespace Choreo.Algebra

/-- Reflect across the vertical line `x = a`: left and right swap. -/
def reflectV (a : Rat) (p : Position) : Position := ⟨2 * a - p.x, p.y⟩
/-- Reflect across the horizontal line `y = b`: front and back swap. -/
def reflectH (b : Rat) (p : Position) : Position := ⟨p.x, 2 * b - p.y⟩

/-- **Reflection keeps every distance**, across either kind of axis. -/
theorem reflect_preserves_pairwise_distance (a : Rat) : IsIsometry (reflectV a) := by
  intro p q; simp only [reflectV, distSq]; grind

theorem reflectH_preserves_pairwise_distance (b : Rat) : IsIsometry (reflectH b) := by
  intro p q; simp only [reflectH, distSq]; grind

theorem reflect_preserves_collision_freedom (a : Rat) {n : Nat} {d2 : Rat} {F : Formation}
    (hlen : F.length = n) (h : CollisionFree n d2 F) : CollisionFree n d2 (F.map' (reflectV a)) :=
  isometry_preserves_collision_freedom (reflect_preserves_pairwise_distance a) hlen h

/-- Reflecting twice brings everyone home. -/
theorem reflect_twice (a : Rat) (p : Position) : reflectV a (reflectV a p) = p := by
  cases p with
  | mk x y => simp only [reflectV, Position.mk.injEq]; constructor <;> grind

end Choreo.Algebra
