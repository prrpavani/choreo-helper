import Choreo.Poly
/-!
# The mathematical model of a routine, and what "safe" means

This file is the part to read.  It defines trajectories and states the properties;
nothing here is a proof.  If these definitions say what you mean, then every routine
that compiles against `Choreo.Check` has those properties.

Lengths are millimetres. Each dancer's path through a phase is a rational Bézier curve,
which represents straight lines, curves and exact circular arcs in a single form.
Local time `t` runs from 0 to 1 across a phase; a form is read at `s = 1 - t`.
-/
open Lean.Grind Std

set_option linter.unusedSectionVars false

namespace Choreo

/-- A trajectory `t ↦ (X(t)/W(t), Y(t)/W(t))`. -/
structure Path where
  X : Poly
  Y : Poly
  W : Poly

def Path.rest : Path := ⟨[0, 0], [0, 0], [1, 1]⟩

/-- The rectangle a dancer must stay inside. -/
structure Rect where
  xmin : Int
  xmax : Int
  ymin : Int
  ymax : Int

/-- Formal derivative of a form along `s = 1 - t`: `∂F/∂t - ∂F/∂s`.
    `Choreo.Calculus` proves this is the true derivative. -/
def Poly.deriv : Poly → Poly
  | [] => []
  | [_] => []
  | b :: c :: cs =>
    let m : Nat := (c :: cs).length
    Poly.add
      (Poly.add (c :: cs) ((-(m : Int) * b) :: Poly.zeros (m - 1)))
      (0 :: Poly.deriv (c :: cs))

/-- A destination in homogeneous coordinates: the point `(x/w, y/w)`. -/
structure Slot where
  x : Int
  y : Int
  w : Int

/-- The shape a set of dancers is required to end in. -/
inductive Formation where
  /-- `rows` lines of `cols` dancers, with exact spacing `dx`, `dy`, from corner `(x₀, y₀)`. -/
  | grid (x₀ y₀ dx dy : Int) (rows cols : Nat)
  /-- `n` dancers evenly spaced along a straight line (horizontal, vertical or diagonal). -/
  | line (x₀ y₀ dx dy : Int) (n : Nat)
  /-- Every listed point lies exactly on the circle with centre `(cx, cy)` and radius `r`. -/
  | circle (cx cy r : Int) (pts : List Slot)
  /-- Explicitly listed destinations. -/
  | free (pts : List Slot)

def Formation.slots : Formation → List Slot
  | .grid x₀ y₀ dx dy rows cols =>
    (List.range rows).flatMap fun (r : Nat) =>
      (List.range cols).map fun (c : Nat) => ⟨x₀ + (c : Int) * dx, y₀ + (r : Int) * dy, 1⟩
  | .line x₀ y₀ dx dy n =>
    (List.range n).map fun (k : Nat) => ⟨x₀ + (k : Int) * dx, y₀ + (k : Int) * dy, 1⟩
  | .circle _ _ _ pts => pts
  | .free pts => pts

/-- A circle's points must really be on the circle; every slot needs a positive weight. -/
def Formation.wellFormed (f : Formation) : Bool :=
  f.slots.all (fun p => decide (0 < p.w)) &&
  match f with
  | .circle cx cy r pts =>
    pts.all fun p =>
      (p.x - cx * p.w) * (p.x - cx * p.w) + (p.y - cy * p.w) * (p.y - cy * p.w)
        == r * r * (p.w * p.w)
  | _ => true

/-- Which slot each dancer takes. It must be a permutation of the slots. -/
structure Target where
  formation : Formation
  assign : List Nat

/-- How the checker should establish clearance for one pair. A certificate cannot make a
    false claim pass: it only selects which sufficient condition Lean recomputes. -/
inductive Cert where
  /-- Separated along one axis throughout (`xAxis`, `positive` pick the direction). -/
  | sep (xAxis positive : Bool) (depth : Nat)
  /-- Full `dist²` polynomial, bisecting up to `depth` times. -/
  | bern (depth : Nat)
  /-- The two dancers keep the constant offset `(cx, cy)` throughout, so they move as one. -/
  | offset (cx cy : Int)
  /-- The two dancers stay at exactly this squared distance throughout, as when a shape rotates. -/
  | fixed (num : Int)

/-- A pair of dancers whose squared distance is the exact constant `num/den`. -/
structure RigidPair where
  i : Nat
  j : Nat
  num : Int
  den : Int

/-- A dancer whose squared distance from the integer point `(cx, cy)` is exactly `r2`. -/
structure Orbit where
  i : Nat
  cx : Int
  cy : Int
  r2 : Int

structure Config where
  /-- number of dancers -/
  n : Nat
  /-- minimum centre-to-centre separation, mm -/
  dmin : Int
  /-- speed limit, mm per second -/
  vmax : Int
  /-- the outer envelope everyone stays in: stage plus wings -/
  stage : Rect
  ticksPerBeat : Nat
  /-- tempo, as the fraction `bpmNum / bpmDen` beats per minute -/
  bpmNum : Nat
  bpmDen : Nat
  /-- total length in ticks -/
  total : Nat
  /-- required length in seconds -/
  seconds : Nat

structure Phase where
  t0 : Nat
  t1 : Nat
  paths : List Path
  /-- the rectangle dancers must stay in during this phase -/
  bounds : Rect
  certs : List Cert
  rigid : List RigidPair
  orbits : List Orbit
  target : Option Target

def Phase.path (ph : Phase) (i : Nat) : Path := ph.paths.getD i Path.rest

structure Routine where
  cfg : Config
  phases : List Phase

/-! ## Semantics -/

section Semantics
variable {K : Type} [Field K]
attribute [local instance] Semiring.natCast Ring.intCast

/-- Position at local time `t`. -/
def Path.x (p : Path) (t : K) : K := ev p.X (1 - t) t / ev p.W (1 - t) t
def Path.y (p : Path) (t : K) : K := ev p.Y (1 - t) t / ev p.W (1 - t) t

/-- Squared distance between two dancers at the same instant. -/
def dist2 (a b : Path) (t : K) : K := (a.x t - b.x t) ^ 2 + (a.y t - b.y t) ^ 2

/-- Velocity with respect to local time, by the quotient rule. -/
def Path.vx (p : Path) (t : K) : K :=
  (ev (Poly.deriv p.X) (1 - t) t * ev p.W (1 - t) t
    - ev p.X (1 - t) t * ev (Poly.deriv p.W) (1 - t) t) / (ev p.W (1 - t) t) ^ 2
def Path.vy (p : Path) (t : K) : K :=
  (ev (Poly.deriv p.Y) (1 - t) t * ev p.W (1 - t) t
    - ev p.Y (1 - t) t * ev (Poly.deriv p.W) (1 - t) t) / (ev p.W (1 - t) t) ^ 2
def Path.speed2 (p : Path) (t : K) : K := p.vx t ^ 2 + p.vy t ^ 2

/-- Length of a phase in seconds: ticks ÷ (ticks per beat) ÷ (beats per second). -/
def Config.durNum (c : Config) (ph : Phase) : Int := ((ph.t1 - ph.t0 : Nat) : Int) * 60 * c.bpmDen
def Config.durDen (c : Config) : Int := (c.bpmNum : Int) * c.ticksPerBeat

variable [LE K] [LT K]

/-- The local time inside `ph` of the global instant `T` (measured in ticks). -/
def Phase.localTime (ph : Phase) (T : K) : K :=
  (T - ((ph.t0 : Int) : K)) / (((ph.t1 : Int) - (ph.t0 : Int) : Int) : K)

def Phase.Active (ph : Phase) (T : K) : Prop := ((ph.t0 : Int) : K) ≤ T ∧ T ≤ ((ph.t1 : Int) : K)

/-- What a single verified phase guarantees, for every instant in the phase. -/
structure PhaseSpec (K : Type) [Field K] [LE K] [LT K] (c : Config) (ph : Phase) : Prop where
  /-- **Collision avoidance.** `∀ t, i ≠ j, dist(pᵢ(t), pⱼ(t)) ≥ dmin` -/
  noCollision : ∀ i j, i < c.n → j < c.n → i ≠ j → ∀ t : K, 0 ≤ t → t ≤ 1 →
    ((c.dmin : Int) : K) ^ 2 ≤ dist2 (ph.path i) (ph.path j) t
  /-- **Stage bounds.** `∀ t, pᵢ(t) ∈ bounds` -/
  onStage : ∀ i, i < c.n → ∀ t : K, 0 ≤ t → t ≤ 1 →
    ((ph.bounds.xmin : Int) : K) ≤ (ph.path i).x t ∧ (ph.path i).x t ≤ ((ph.bounds.xmax : Int) : K) ∧
    ((ph.bounds.ymin : Int) : K) ≤ (ph.path i).y t ∧ (ph.path i).y t ≤ ((ph.bounds.ymax : Int) : K)
  /-- **Speed limit.** `|p′(t)| ≤ vmax` in real units: `(den · speed)² ≤ (vmax · num)²`. -/
  speedLimit : ∀ i, i < c.n → ∀ t : K, 0 ≤ t → t ≤ 1 →
    ((c.durDen * c.durDen : Int) : K) * (ph.path i).speed2 t
      ≤ ((c.vmax * c.vmax * (c.durNum ph * c.durNum ph) : Int) : K)
  /-- **Formation preservation.** Each declared pair stays at an exact fixed distance. -/
  rigid : ∀ r, r ∈ ph.rigid → ∀ t : K, 0 ≤ t → t ≤ 1 →
    ((r.den : Int) : K) * dist2 (ph.path r.i) (ph.path r.j) t = ((r.num : Int) : K)
  /-- **Formation preservation.** Each orbiting dancer stays exactly on its circle. -/
  orbit : ∀ o, o ∈ ph.orbits → ∀ t : K, 0 ≤ t → t ≤ 1 →
    ((ph.path o.i).x t - ((o.cx : Int) : K)) ^ 2 + ((ph.path o.i).y t - ((o.cy : Int) : K)) ^ 2
      = ((o.r2 : Int) : K)
  /-- **Formation correctness.** The target shape is valid, every dancer has exactly one
      destination, no slot is shared, and each dancer ends exactly on its slot. -/
  reaches : ∀ tg, ph.target = some tg →
    tg.formation.wellFormed = true ∧
    tg.formation.slots.length = c.n ∧
    tg.assign.isPerm (List.range c.n) = true ∧
    ∀ i, i < c.n → ∀ s : Slot, tg.formation.slots.getD (tg.assign.getD i 0) ⟨0, 0, 1⟩ = s →
      (ph.path i).x (1 : K) = ((s.x : Int) : K) / ((s.w : Int) : K) ∧
      (ph.path i).y (1 : K) = ((s.y : Int) : K) / ((s.w : Int) : K)

end Semantics
end Choreo
