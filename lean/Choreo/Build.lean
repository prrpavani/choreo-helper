import Choreo.QuickRefute
import Choreo.Compose
/-!
# Building paths, and explaining failures

Nothing here is trusted. These functions only propose routines; `Choreo.Check` decides whether a
proposal is any good. A bug here can produce a bad routine, but it cannot produce a false proof.
-/
namespace Choreo

structure Pt where
  x : Int
  y : Int
  deriving DecidableEq, Inhabited, Repr

/-- Move from `a` to `b`, starting and stopping at rest (a cubic ease). -/
def easePath (a b : Pt) : Path :=
  ⟨[a.x, 3 * a.x, 3 * b.x, b.x], [a.y, 3 * a.y, 3 * b.y, b.y], [1, 3, 3, 1]⟩

/-- Leave `a`, pass through `peak` halfway, and arrive at `b`, at rest at both ends. The bend of the curve
    is held inside `bounds`, so it can't swing a dancer off the stage. -/
def curvePath (a peak b : Pt) (bounds : Rect) : Path :=
  let cx := max bounds.xmin (min bounds.xmax ((16 * peak.x - 5 * a.x - 5 * b.x) / 6))
  let cy := max bounds.ymin (min bounds.ymax ((16 * peak.y - 5 * a.y - 5 * b.y) / 6))
  ⟨[a.x, 4 * a.x, 6 * cx, 4 * b.x, b.x], [a.y, 4 * a.y, 6 * cy, 4 * b.y, b.y], [1, 4, 6, 4, 1]⟩

/-- Quarter turn counter-clockwise around `c`, an exact circular arc starting and stopping at rest. -/
def rotatePath (c a : Pt) (ccw : Bool) : Path :=
  let Q : Poly := [1, 3, 3, 1]
  let P : Poly := [0, 0, 3, 1]
  let QQ := Poly.mul Q Q
  let PP := Poly.mul P P
  let W := Poly.add QQ PP
  let A := Poly.sub QQ PP
  let B := Poly.scale 2 (Poly.mul P Q)
  let dx := a.x - c.x
  let dy := if ccw then a.y - c.y else c.y - a.y
  let X := Poly.add (Poly.scale c.x W) (Poly.sub (Poly.scale dx A) (Poly.scale dy B))
  let Yr := Poly.add (Poly.scale dx B) (Poly.scale dy A)
  let Y := if ccw then Poly.add (Poly.scale c.y W) Yr else Poly.sub (Poly.scale c.y W) Yr
  ⟨X, Y, W⟩

/-- Find the cheapest certificate for one pair; the check itself is what counts. -/
def chooseCert (a b : Path) (d : Int) : Cert :=
  let cx := (Poly.first a.X - Poly.first b.X)
  let cy := (Poly.first a.Y - Poly.first b.Y)
  let w := Poly.first a.W
  let off : Cert := .offset (if w == 0 then 0 else cx / w) (if w == 0 then 0 else cy / w)
  if off.check a b d then off else
  let fixedAt : Cert := .fixed (if w == 0 then 0 else (cx * cx + cy * cy) / (w * w))
  if fixedAt.check a b d then fixedAt else
  -- two dancers who stay apart along one direction: the cheapest test, and the easiest to read
  let seps : List Cert := [.sep false true 0, .sep false false 0, .sep true true 0, .sep true false 0]
  match seps.find? (fun c => c.check a b d) with
  | some c => c
  | none =>
  let tries := (List.range 8).map (fun k => Cert.bern k)
  (tries.find? (fun c => c.check a b d)).getD (.bern 7)

def chooseCerts (n : Nat) (paths : List Path) (d : Int) : List Cert :=
  let path i := paths.getD i Path.rest
  (List.range n).flatMap fun i => (List.range i).map fun j => chooseCert (path i) (path j) d

/-! ## Explaining why a phase failed -/

/-- A reason a phase failed, with a concrete moment when there is one. -/
inductive Problem where
  /-- Lean can show dancers `i` and `j` are too close at local time `t`. -/
  | collision (phase i j : Nat) (t : Rat)
  /-- Lean can show dancer `i` is out of bounds at local time `t`. -/
  | offStage (phase i : Nat) (t : Rat)
  /-- Dancer `i` breaks the speed limit. -/
  | tooFast (phase i : Nat)
  /-- The check could not settle this pair, and no bad moment was found. -/
  | unproved (phase i j : Nat)
  /-- Some other check failed, for example a path that doesn't join up. -/
  | other (phase : Nat) (why : String)
  deriving Inhabited

def sampleTimes : List Rat :=
  (List.range 129).map fun (k : Nat) => (((k : Nat) : Int) : Rat) / 128

def clearanceAt (a b : Path) (t : Rat) : Rat := dist2 a b t

def Phase.diagnose (c : Config) (index : Nat) (ph : Phase) : List Problem := Id.run do
  let mut out : List Problem := []
  let ds := List.range c.n
  for i in ds do
    let p := ph.path i
    unless p.wf && p.inRect ph.bounds do
      match sampleTimes.find? (fun t => decide (outOfBounds ph i t)) with
      | some t => out := out ++ [.offStage index i t]
      | none => pure ()
    unless Poly.bern splitLimit (speedPoly p (c.vmax * c.vmax * (c.durNum ph * c.durNum ph)) (c.durDen * c.durDen)) do
      out := out ++ [.tooFast index i]
  for i in ds do
    for j in List.range i do
      unless (ph.pairCert i j).check (ph.path i) (ph.path j) c.dmin do
        let limit : Rat := ((c.dmin : Int) : Rat) ^ 2
        let scored := sampleTimes.map fun t => (t, clearanceAt (ph.path i) (ph.path j) t)
        let best := scored.foldl (fun acc x => if x.2 < acc.2 then x else acc) ((0 : Rat), clearanceAt (ph.path i) (ph.path j) 0)
        if best.2 < limit then
          out := out ++ [.collision index i j best.1]
        else
          out := out ++ [.unproved index i j]
  return out

end Choreo
