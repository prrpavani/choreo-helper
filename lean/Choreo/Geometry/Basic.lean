import Init.Data.Rat
/-!
# Positions and distance, in exact rational numbers

No floats anywhere in this library. Distance is squared, so no roots are needed.
-/
namespace Choreo.Algebra

/-- A point on the stage, in exact rational coordinates. -/
structure Position where
  x : Rat
  y : Rat
  deriving DecidableEq, Inhabited

/-- Squared Euclidean distance. -/
def distSq (p q : Position) : Rat := (p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y)

end Choreo.Algebra
