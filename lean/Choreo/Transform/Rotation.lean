import Choreo.Transform.Isometry
/-!
# Rotation

Exact quarter turns, which need no trigonometry, and an exact family of rotations for the moments in between.
-/
namespace Choreo.Algebra

/-- One quarter turn about `(cx, cy)`. -/
def quarter (cx cy : Rat) (p : Position) : Position := ⟨cx - (p.y - cy), cy + (p.x - cx)⟩

/-- `k` quarter turns about `(cx, cy)`. -/
def rotate (cx cy : Rat) : Nat → Position → Position
  | 0, p => p
  | k + 1, p => quarter cx cy (rotate cx cy k p)

theorem quarter_preserves_distance (cx cy : Rat) : IsIsometry (quarter cx cy) := by
  intro p q
  simp only [quarter, distSq]
  grind

/-- **Rotation keeps every distance**, for any number of quarter turns. -/
theorem rotate_preserves_pairwise_distance (cx cy : Rat) (k : Nat) : IsIsometry (rotate cx cy k) := by
  induction k with
  | zero => exact fun _ _ => rfl
  | succ k ih =>
    intro p q
    simp only [rotate]
    rw [quarter_preserves_distance]
    exact ih p q

theorem rotate_preserves_collision_freedom (cx cy : Rat) (k : Nat) {n : Nat} {d2 : Rat} {F : Formation}
    (hlen : F.length = n) (h : CollisionFree n d2 F) : CollisionFree n d2 (F.map' (rotate cx cy k)) :=
  isometry_preserves_collision_freedom (rotate_preserves_pairwise_distance cx cy k) hlen h

/-- No turn leaves everyone where they are. -/
theorem rotate_identity (cx cy : Rat) (p : Position) : rotate cx cy 0 p = p := rfl

/-- Turning `a` then `b` quarter turns is the same as turning `a + b`. -/
theorem rotate_composition (cx cy : Rat) (a b : Nat) (p : Position) :
    rotate cx cy b (rotate cx cy a p) = rotate cx cy (a + b) p := by
  induction b with
  | zero => rfl
  | succ b ih =>
    show quarter cx cy (rotate cx cy b (rotate cx cy a p)) = quarter cx cy (rotate cx cy (a + b) p)
    rw [ih]

/-- Four quarter turns bring everyone home. -/
theorem rotate_four (cx cy : Rat) (p : Position) : rotate cx cy 4 p = p := by
  simp only [rotate, quarter]
  cases p with
  | mk x y => simp only [Position.mk.injEq]; constructor <;> grind

/-- Turning by the rotation with cosine `a` and sine `b`, for any exact pair with `a² + b² = 1`. -/
def turnBy (a b cx cy : Rat) (p : Position) : Position :=
  ⟨cx + a * (p.x - cx) - b * (p.y - cy), cy + b * (p.x - cx) + a * (p.y - cy)⟩

/-- **Every moment of a rotation keeps every distance.** Not just its start and end: any exact
    rotation does, so a whole formation turning as one can't collide at any point on the way round. -/
theorem turning_preserves_distance {a b cx cy : Rat} (h : a * a + b * b = 1) : IsIsometry (turnBy a b cx cy) := by
  intro p q
  simp only [turnBy, distSq]
  have : ∀ u v : Rat, (a * u - b * v) * (a * u - b * v) + (b * u + a * v) * (b * u + a * v) = (a * a + b * b) * (u * u + v * v) := by
    intro u v; grind
  have e := this (p.x - q.x) (p.y - q.y)
  rw [h] at e
  grind

end Choreo.Algebra
