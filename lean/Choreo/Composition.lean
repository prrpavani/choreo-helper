import Choreo.Transform.Translation
import Choreo.Transform.Rotation
import Choreo.Transform.Reflection
import Choreo.Transform.Scaling
import Choreo.Motion.Trajectory
/-!
# Routines of transformations

A routine is a list of operations. Its guarantee comes from one theorem about all such lists: a routine
of isometries keeps every distance. So a long routine needs its starting formation checked once, and nothing else.
-/
namespace Choreo.Algebra

/-- A geometry-preserving operation on a whole formation. -/
inductive TOp where
  | translate (vx vy : Rat)
  | rotate (cx cy : Rat) (quarters : Nat)
  | reflectV (a : Rat)
  | reflectH (b : Rat)
  deriving Inhabited

/-- What an operation does to one position. -/
def TOp.apply : TOp → Position → Position
  | .translate vx vy => Algebra.translate vx vy
  | .rotate cx cy k => Algebra.rotate cx cy k
  | .reflectV a => Algebra.reflectV a
  | .reflectH b => Algebra.reflectH b

/-- **Every operation in the language keeps every distance.** -/
theorem TOp.isometry (op : TOp) : IsIsometry op.apply := by
  cases op with
  | translate vx vy => exact translate_preserves_pairwise_distance vx vy
  | rotate cx cy k => exact rotate_preserves_pairwise_distance cx cy k
  | reflectV a => exact reflect_preserves_pairwise_distance a
  | reflectH b => exact reflectH_preserves_pairwise_distance b

/-- A routine: its operations in order, as one transformation. -/
def applyAll : List TOp → Position → Position
  | [], p => p
  | op :: ops, p => applyAll ops (op.apply p)

/-- **Every routine keeps every distance**, however long and in whatever order. -/
theorem routine_is_isometry (ops : List TOp) : IsIsometry (applyAll ops) := by
  induction ops with
  | nil => exact fun _ _ => rfl
  | cons op ops ih =>
    intro p q
    simp only [applyAll]
    rw [ih, TOp.isometry op]

/-- **The main result.** If the starting formation is collision-free, the formation after any routine is too. -/
theorem routine_preserves_collision_freedom (ops : List TOp) {n : Nat} {d2 : Rat} {F : Formation}
    (hlen : F.length = n) (h : CollisionFree n d2 F) : CollisionFree n d2 (F.map' (applyAll ops)) :=
  isometry_preserves_collision_freedom (routine_is_isometry ops) hlen h

/-- **And after every operation along the way**, because each prefix is a routine too. -/
theorem every_formation_collision_free (ops : List TOp) (k : Nat) {n : Nat} {d2 : Rat} {F : Formation}
    (hlen : F.length = n) (h : CollisionFree n d2 F) : CollisionFree n d2 (F.map' (applyAll (ops.take k))) :=
  routine_preserves_collision_freedom (ops.take k) hlen h

/-- Doing two routines in a row is doing their concatenation. -/
theorem applyAll_append (xs ys : List TOp) (p : Position) : applyAll (xs ++ ys) p = applyAll ys (applyAll xs p) := by
  induction xs generalizing p with
  | nil => rfl
  | cons x xs ih => simp only [List.cons_append, applyAll, ih]

end Choreo.Algebra
