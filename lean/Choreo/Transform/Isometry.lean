import Choreo.Geometry.Formation
/-!
# Transformations and isometries

The foundation of the whole library. A transformation that never changes a distance can't create a
collision, whatever the formation is. That one fact is what routines inherit.
-/
namespace Choreo.Algebra

/-- A function on positions that keeps every distance. -/
def IsIsometry (T : Position → Position) : Prop := ∀ p q, distSq (T p) (T q) = distSq p q

/-- Apply a transformation to every dancer. -/
def Formation.map' (T : Position → Position) (F : Formation) : Formation := F.map T

theorem at_map {T : Position → Position} {F : Formation} {i n : Nat} (hlen : F.length = n) (hi : i < n) :
    (F.map' T).at i = T (F.at i) := by
  subst hlen
  simp [Formation.map', Formation.at, List.getD_eq_getElem?_getD, hi]

/-- **Theorem 2: an isometry preserves collision freedom.** For any formation. -/
theorem isometry_preserves_collision_freedom {T : Position → Position} (hT : IsIsometry T) {n : Nat} {d2 : Rat}
    {F : Formation} (hlen : F.length = n) (h : CollisionFree n d2 F) : CollisionFree n d2 (F.map' T) := by
  intro i j hi hj hne
  rw [at_map hlen hi, at_map hlen hj, hT]
  exact h i j hi hj hne

/-- **Theorem 3: isometries compose.** Doing one then another keeps every distance. -/
theorem IsIsometry.comp {S T : Position → Position} (hS : IsIsometry S) (hT : IsIsometry T) :
    IsIsometry (T ∘ S) := by
  intro p q
  show distSq (T (S p)) (T (S q)) = distSq p q
  rw [hT (S p) (S q), hS p q]

theorem isIsometry_id : IsIsometry id := fun _ _ => rfl

end Choreo.Algebra
