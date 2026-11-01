import Choreo.Emit
/-!
# Stress testing

A proof checker that accepts everything is worthless, so this tries to fool it. Starting from a routine that
passes, it makes sabotaged copies, and it also makes harmless changes that should still pass. Lean's kernel
judges each one in a generated file. None of this is trusted: if a sabotage slipped through, the report says so.
-/
open Lean

namespace Choreo

structure Mutation where
  title : String
  what : String
  /-- which of the three categories should catch it, or `none` for a harmless change -/
  family : String
  /-- `refuted`: Lean proves the claim false. `rejected`: Lean proves the checker says no. `kept`: still passes. -/
  tier : String
  catches : String
  routine : Routine
  /-- the Lean statement and proof, with `R` standing for the mutated routine's name -/
  verdict : String

def Routine.setPhase (r : Routine) (k : Nat) (f : Phase → Phase) : Routine :=
  { r with phases := r.phases.zipIdx.map fun (ph, j) => if j == k then f ph else ph }

def recert (r : Routine) : Routine :=
  { r with phases := r.phases.map fun ph => { ph with certs := chooseCerts r.cfg.n ph.paths r.cfg.dmin } }

def setPath (ph : Phase) (i : Nat) (p : Path) : Phase := { ph with paths := ph.paths.set i p }

def startOf (p : Path) : Pt := ⟨Poly.first p.X / Poly.first p.W, Poly.first p.Y / Poly.first p.W⟩
def endOf (p : Path) : Pt := ⟨Poly.last p.X / Poly.last p.W, Poly.last p.Y / Poly.last p.W⟩

/-- A wild detour that starts and stops at rest, so the only thing it breaks is the speed limit. -/
def sprintPath (p : Path) (size : Int) : Path :=
  let e : Poly := [1, 2, 1]
  ⟨Poly.add (Poly.mul p.X e) [0, 0, size, -size, 0, 0], Poly.mul p.Y e, Poly.mul p.W e⟩

/-- Add a shift to a whole path. -/
def shiftPath (p : Path) (dx dy : Int) : Path :=
  ⟨Poly.add p.X (Poly.scale dx p.W), Poly.add p.Y (Poly.scale dy p.W), p.W⟩

def reflectPath (p : Path) : Path := ⟨Poly.neg p.X, p.Y, p.W⟩

def rejectedPhase (k : Nat) : String := s!"Phase.check R.cfg (R.phases.getD {k} default) = false := by decide +kernel"

instance : Inhabited Phase := ⟨{ t0 := 0, t1 := 1, paths := [], bounds := stageRect, certs := [], rigid := [], orbits := [], target := none }⟩

/-- Every mutation for this routine. Each is built from the routine as it stands. -/
def allMutationsOf (b : Built) : List Mutation := Id.run do
  let r := b.routine
  let c := r.cfg
  let n := c.n
  let phases := r.phases.toArray
  let labels := b.labels.toArray
  let moveIx := ((List.range phases.size).find? fun k => (labels.getD k ("", "")).2 != "hold").getD 0
  let mv := phases.getD moveIx default
  let lastIx := phases.size - 1
  -- the dancer and partner to sabotage: the closest pair in the move
  let (ai, bi, _) := tightestPair c mv
  let mut out : List Mutation := []
  let add (m : Mutation) (l : List Mutation) := l ++ [m]
  -- 1. walk one dancer straight onto another's landing spot
  let aPath := mv.path ai
  let onto := recert (r.setPhase moveIx fun ph => setPath ph ai (easePath (startOf aPath) (endOf (mv.path bi))))
  let ontoPh := onto.phases.getD moveIx default
  let wit := (Phase.diagnose c moveIx ontoPh).find? (fun | .collision .. => true | _ => false)
  match wit with
  | some (.collision _ i j t) =>
    out := add { title := "Send a dancer onto someone else's mark", what := "One dancer's destination becomes another dancer's.", family := "movement", tier := "refuted", catches := "PhaseSpec.noCollision", routine := onto, verdict := s!"¬ PhaseSpec Rat R.cfg (R.phases.getD {moveIx} default) := refute_quick (i := {i}) (j := {j}) (a := {t.num}) (b := {t.den}) (by decide +kernel)" } out
  | _ => pure ()
  -- 2. run someone off the stage area
  let offEnd : Pt := ⟨c.stage.xmax + 1500, (endOf aPath).y⟩
  let off := recert (r.setPhase moveIx fun ph => setPath ph ai (easePath (startOf aPath) offEnd))
  let offPh := off.phases.getD moveIx default
  match (Phase.diagnose c moveIx offPh).find? (fun | .offStage .. => true | _ => false) with
  | some (.offStage _ i t) =>
    out := add { title := "Run a dancer past the edge", what := "One dancer's destination is outside the allowed area.", family := "movement", tier := "refuted", catches := "PhaseSpec.onStage", routine := off, verdict := s!"¬ PhaseSpec Rat R.cfg (R.phases.getD {moveIx} default) := refute_stage (i := {i}) (t := {ratL t}) (by decide +kernel) (by decide +kernel) (by decide +kernel) (by decide +kernel)" } out
  | _ => pure ()
  -- 3. teleport: the next phase starts somewhere else
  if moveIx + 1 < phases.size then
    let tele := r.setPhase (moveIx + 1) fun ph => setPath ph ai (shiftPath (ph.path ai) 400 0)
    out := add { title := "Make a dancer teleport", what := "The next phase starts 40 cm away from where the last one ended.", family := "movement", tier := "rejected", catches := "RoutineSpec.continuous", routine := tele, verdict := "R.checkMovement = false := by decide +kernel" } out
  -- 4. a sprint within the stage
  let sprint := recert (r.setPhase moveIx fun ph => setPath ph ai (sprintPath (ph.path ai) 240000))
  out := add { title := "Add a sprint", what := "One dancer takes a wild detour in the same counts, faster than the limit.", family := "movement", tier := "rejected", catches := "PhaseSpec.speedLimit", routine := sprint, verdict := s!"Poly.bern splitLimit (speedPoly ((R.phases.getD {moveIx} default).path {ai}) (R.cfg.vmax * R.cfg.vmax * (R.cfg.durNum (R.phases.getD {moveIx} default) * R.cfg.durNum (R.phases.getD {moveIx} default))) (R.cfg.durDen * R.cfg.durDen)) = false := by decide +kernel" } out
  -- 5. a forged proof certificate
  let forged := r.setPhase moveIx fun ph => { ph with certs := ph.certs.map fun _ => .offset 5000 0 }
  out := add { title := "Forge a certificate", what := "The routine is untouched, but its evidence claims every pair stays 5 m apart.", family := "movement", tier := "rejected", catches := "Cert.check", routine := forged, verdict := rejectedPhase moveIx } out
  -- 6. one beat boundary out of place
  if moveIx > 0 then
    let early (ph : Phase) (k : Nat) : Phase :=
      if k + 1 == moveIx then { ph with t1 := ph.t1 - 1 } else if k == moveIx then { ph with t0 := ph.t0 - 1 } else ph
    let late := { r with phases := r.phases.zipIdx.map fun (ph, k) => early ph k }
    out := add { title := "Start a move off the beat", what := "One move begins a sixteenth of a beat early.", family := "musicality", tier := "refuted", catches := "MusicalityProved.onBeat", routine := late, verdict := "¬ MusicalityProved R := not_musicality (by decide +kernel)" } out
  -- 7. the wrong length
  let long := { r with cfg := { c with seconds := c.seconds + 1 } }
  out := add { title := "Claim the wrong length", what := "The routine says it lasts one second longer than its counts do.", family := "musicality", tier := "refuted", catches := "MusicalityProved.duration", routine := long, verdict := "¬ MusicalityProved R := not_musicality (by decide +kernel)" } out
  -- 8 and 9. move a dancer out of the shape after the move lands, for the formation requests
  let drift (i : Nat) (dx : Int) : Routine :=
    { r with phases := r.phases.zipIdx.map fun (ph, k) =>
        if k < moveIx then ph
        else if k == moveIx then setPath ph i (easePath (startOf (ph.path i)) (⟨(endOf (ph.path i)).x + dx, (endOf (ph.path i)).y⟩))
        else setPath ph i (shiftPath (ph.path i) dx 0) }
  let findLine := b.asks.findSome? fun (_, _, a) => match a with
    | .endsInLine k ds dx dy => some (k, ds, dx, dy)
    | _ => none
  match findLine with
  | some (k, ds, dx, dy) =>
    let i := ds.getD 1 0
    let bent := recert (drift i 150)
    let bentRoutine := { bent with phases := bent.phases }
    match ((nextPairs ds).find? fun (x, y) => match bentRoutine.phases[k]? with
        | some ph => lineBrokenAt c ph x y dx dy
        | none => false) with
    | some (x, y) =>
      out := add { title := "Nudge a dancer out of line", what := "One dancer lands 15 cm off the line. It's hard to see, and it isn't straight.", family := "formation", tier := "refuted", catches := "Ask.endsInLine", routine := bentRoutine, verdict := s!"¬ Ask.Holds Rat R (.endsInLine {k} {natsL ds} {intL dx} {intL dy}) := refute_line (ph := R.phases.getD {k} default) (a := {x}) (b := {y}) rfl (by decide +kernel) (by decide +kernel)" } out
    | none => pure ()
  | none => pure ()
  let findMirror := b.asks.reverse.findSome? fun (_, _, a) => match a with
    | .endsMirrored .. => some a
    | _ => none
  match findMirror with
  | some a =>
    let k := match a with | .endsMirrored k .. => k | _ => 0
    let ds := match a with | .endsMirrored _ ps _ => ps | _ => []
    let i := (ds.head?.map (·.1)).getD 0
    let off := { r with phases := r.phases.zipIdx.map fun (ph, j) =>
        if j == k then setPath ph i (shiftPath (ph.path i) 100 0) else ph }
    out := add { title := "Break the symmetry", what := "One dancer ends 10 cm to the side, so the left no longer mirrors the right.", family := "formation", tier := "rejected", catches := "Ask.endsMirrored", routine := off, verdict := s!"Ask.check R {askL a} = false := by decide +kernel" } out
  | none => pure ()
  -- controls: changes that should still pass
  let safety := "(R.phases.all (Phase.check R.cfg) && R.checkMovement && R.checkMusic) = true := by decide +kernel"
  let loose := recert { r with cfg := { c with dmin := c.dmin - 100 } }
  out := add { title := "Ask for less space", what := "The required gap drops by 10 cm. Anything that kept the bigger gap keeps this one.", family := "none", tier := "kept", catches := "", routine := loose, verdict := safety } out
  let faster := { r with cfg := { c with vmax := c.vmax + 1000 } }
  out := add { title := "Allow a higher speed limit", what := "The limit rises by 1 m/s. Nobody has to change.", family := "none", tier := "kept", catches := "", routine := faster, verdict := safety } out
  let slow := { r with cfg := { c with bpmDen := c.bpmDen * 2, seconds := c.seconds * 2 } }
  out := add { title := "Halve the tempo", what := "Same steps, half the speed, twice the length.", family := "none", tier := "kept", catches := "", routine := slow, verdict := safety } out
  let mirrored := recert { r with phases := r.phases.map fun ph =>
      { ph with paths := ph.paths.map reflectPath, bounds := ⟨-ph.bounds.xmax, -ph.bounds.xmin, ph.bounds.ymin, ph.bounds.ymax⟩ }, cfg := { c with stage := ⟨-c.stage.xmax, -c.stage.xmin, c.stage.ymin, c.stage.ymax⟩ } }
  out := add { title := "Mirror the whole routine", what := "Left becomes right. Every gap stays the same (reflect_keeps_gap).", family := "none", tier := "kept", catches := "", routine := mirrored, verdict := safety } out
  return out

/-- The sabotage the app checks: movement only. -/
def mutationsOf (b : Built) : List Mutation := (allMutationsOf b).filter (·.family != "musicality")

/-- A kernel-checked verdict on one mutation, as its own file. -/
def stressSource (m : Mutation) (k : Nat) : String := Id.run do
  let mut out := "import Choreo.Source\nimport Choreo.QuickRefute\nopen Choreo\n\nnamespace Stress\n\ninstance : Inhabited Phase := ⟨{ t0 := 0, t1 := 1, paths := [], bounds := ⟨0, 0, 0, 0⟩, certs := [], rigid := [], orbits := [], target := none }⟩\n\n"
  do
    let phaseNames := m.routine.phases.zipIdx.map fun (ph, j) => (ph, j)
    for (ph, j) in phaseNames do
      out := out ++ s!"def m{k}p{j} : Phase := {phaseL ph}\n"
    out := out ++ s!"def m{k} : Routine := ⟨{configL m.routine.cfg}, {listL (fun (x : Phase × Nat) => s!"m{k}p{x.2}") phaseNames}⟩\n"
    let stmt := m.verdict.replace "R.cfg" s!"m{k}.cfg" |>.replace "R.phases" s!"m{k}.phases" |>.replace "R.checkMovement" s!"m{k}.checkMovement" |>.replace "R.checkMusic" s!"m{k}.checkMusic" |>.replace " R " s!" m{k} "
    out := out ++ s!"theorem verdict{k} : {stmt}\n#eval IO.println \"MUTATION {k}\"\n\n"
  out := out ++ "end Stress\n"
  return out

def stressJson (ms : List Mutation) : Json :=
  Json.arr (ms.zipIdx.map fun (m, k) => Json.mkObj [("index", k), ("title", toJson m.title), ("what", toJson m.what), ("family", toJson m.family),
    ("tier", toJson m.tier), ("catches", toJson m.catches), ("theorem", toJson s!"verdict{k}"), ("statement", toJson m.verdict)]).toArray

end Choreo
