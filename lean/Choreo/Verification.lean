import Choreo.Composition
/-!
# The public interface

What a complete routine of isometries is proved to do. A routine is valid when its starting formation is
collision-free. That check looks at each pair of dancers once. The guarantee for every later formation
comes from `routine_preserves_collision_freedom`, not from looking again.
-/
namespace Choreo.Algebra

/-- Every formation of the routine is collision-free. -/
def RoutineValid (ops : List TOp) (n : Nat) (d2 : Rat) (F : Formation) : Prop :=
  ∀ k, CollisionFree n d2 (F.map' (applyAll (ops.take k)))

/-- One check of the start gives the whole routine. -/
theorem routine_valid_of_start {ops : List TOp} {n : Nat} {d2 : Rat} {F : Formation} (hlen : F.length = n)
    (h : checkCollisionFree n d2 F = true) : RoutineValid ops n d2 F :=
  fun k => every_formation_collision_free ops k hlen (checkCollisionFree_sound h)

/-! ## The example: eight dancers, four operations, one proof -/

def twoLines : Formation :=
  [⟨-2700, 3000⟩, ⟨-900, 3000⟩, ⟨900, 3000⟩, ⟨2700, 3000⟩, ⟨-1800, 5000⟩, ⟨0, 5000⟩, ⟨1800, 5000⟩, ⟨3600, 5000⟩]

def demoOps : List TOp := [.translate 0 500, .rotate 0 4000 1, .reflectV 0, .translate 0 (-500)]

theorem demo_is_valid : RoutineValid demoOps 8 360000 twoLines :=
  routine_valid_of_start rfl (by decide +kernel)

/-- The spec rejects a bad start: two dancers on one spot are not collision-free. -/
example : checkCollisionFree 2 360000 [⟨0, 0⟩, ⟨0, 0⟩] = false := by decide +kernel

end Choreo.Algebra
