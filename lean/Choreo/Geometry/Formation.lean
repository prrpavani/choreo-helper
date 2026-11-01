import Choreo.Geometry.Basic
/-!
# Formations

A formation says where each dancer stands. `CollisionFree` and `StageContained` are geometric
abstractions: dancers are points that must keep a distance. This is not a model of human bodies.
-/
namespace Choreo.Algebra

/-- Each dancer, by number, and where they stand. -/
abbrev Formation := List Position

def Formation.at (F : Formation) (i : Nat) : Position := F.getD i default

/-- Every pair of the first `n` dancers is at least `d` apart (with `d2 = d²`). -/
def CollisionFree (n : Nat) (d2 : Rat) (F : Formation) : Prop :=
  ∀ i j, i < n → j < n → i ≠ j → d2 ≤ distSq (F.at i) (F.at j)

/-- A rectangular stage. -/
structure Stage where
  xmin : Rat
  xmax : Rat
  ymin : Rat
  ymax : Rat

def Stage.contains (s : Stage) (p : Position) : Prop := s.xmin ≤ p.x ∧ p.x ≤ s.xmax ∧ s.ymin ≤ p.y ∧ p.y ≤ s.ymax

/-- Every one of the first `n` dancers stands on the stage. -/
def StageContained (n : Nat) (s : Stage) (F : Formation) : Prop := ∀ i, i < n → s.contains (F.at i)

/-- Checking the starting formation once: every pair, one time. -/
def checkCollisionFree (n : Nat) (d2 : Rat) (F : Formation) : Bool :=
  (List.range n).all fun i => (List.range n).all fun j => i == j || decide (d2 ≤ distSq (F.at i) (F.at j))

theorem checkCollisionFree_sound {n : Nat} {d2 : Rat} {F : Formation} (h : checkCollisionFree n d2 F = true) :
    CollisionFree n d2 F := by
  intro i j hi hj hne
  simp only [checkCollisionFree, List.all_eq_true, List.mem_range, Bool.or_eq_true, beq_iff_eq, decide_eq_true_eq] at h
  rcases h i hi j hj with e | e
  · exact absurd e hne
  · exact e

end Choreo.Algebra
