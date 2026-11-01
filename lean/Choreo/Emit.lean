import Choreo.Planner
import Choreo.Source
import Choreo.Tolerance
import Choreo.Transforms
import Choreo.Program
import Lean.Data.Json
/-!
# Writing out a routine

Two outputs from one value: a `.lean` file that the kernel checks, and JSON the app animates.
Both carry the same fingerprint, computed from the routine itself, so the app can confirm that
what it plays is what was proved.
-/
open Lean

namespace Choreo

/-! ## The generated proof file -/

def ratL (t : Rat) : String := s!"({t.num} / {t.den} : Rat)"

def refutationL (cfgName phName : String) : Problem → Option String
  | .collision _ i j t =>
    some s!"refute_quick (c := {cfgName}) (ph := {phName}) (i := {i}) (j := {j}) (a := {t.num}) (b := {t.den}) (by decide +kernel)"
  | .offStage _ i t =>
    some s!"refute_stage (c := {cfgName}) (ph := {phName}) (i := {i}) (t := {ratL t}) (by decide +kernel) (by decide +kernel) (by decide +kernel) (by decide +kernel)"
  | _ => none

def Problem.provable : Problem → Bool
  | .collision .. | .offStage .. => true
  | _ => false

def phaseProblems (r : Routine) : List Problem :=
  r.phases.zipIdx.flatMap fun (ph, k) =>
    if Phase.check r.cfg ph then [] else
    match Phase.diagnose r.cfg k ph with
    | [] => [.other k "a required path check failed"]
    | ps => ps

/-- The earlier phase that is this phase moved in time, if there is one. -/
def Routine.twinOf (r : Routine) (ph : Phase) (k : Nat) : Option Nat :=
  let key (p : Phase) := phaseKey p
  (r.phases.zipIdx.take k).findSome? fun (q, j) =>
    if key q == key ph && Phase.check r.cfg q then some j else none

/-- A repeated move reuses the earlier proof. `Phase.check_shift` says that is sound. -/
def phaseProofTerm (r : Routine) (ph : Phase) (k : Nat) : String :=
  match r.twinOf ph k with
  | some j => s!"Phase.check_shift (ph := ph{j}) rfl rfl rfl rfl rfl rfl rfl ph{j}_ok"
  | none => "by decide +kernel"

def phaseDef (r : Routine) (ph : Phase) (k : Nat) : String :=
  match r.twinOf ph k with
  | some j => s!"def ph{k} : Phase := \{ ph{j} with t0 := {ph.t0}, t1 := {ph.t1} }\n"
  | none => s!"def ph{k} : Phase := {phaseL ph}\n"

def phaseProofs (r : Routine) : String := Id.run do
  let mut out := ""
  for (ph, k) in r.phases.zipIdx do
    out := out ++ phaseDef r ph k
    if Phase.check r.cfg ph then
      out := out ++ s!"theorem ph{k}_ok : Phase.check cfg ph{k} = true := {phaseProofTerm r ph k}\n"
      out := out ++ s!"#eval IO.println \"PHASE {k}\"\n\n"
  return out

/-- The phases as data only: nothing about them is checked one at a time. -/
def phaseDataOnly (r : Routine) : String := Id.run do
  let mut out := ""
  for (ph, k) in r.phases.zipIdx do
    out := out ++ phaseDef r ph k
  return out

/-- Each complete move in a routine, with the planner's name for it. -/
def transitionsOf (b : Built) : List (String × String × Transition) := Id.run do
  let r := b.routine
  let labels := b.labels.toArray
  let n := r.cfg.n
  let slotsAt (ph : Phase) (atStart : Bool) : List Slot := (List.range n).map fun i =>
    let p := ph.path i
    if atStart then ⟨Poly.first p.X, Poly.first p.Y, Poly.first p.W⟩ else ⟨Poly.last p.X, Poly.last p.Y, Poly.last p.W⟩
  let phases := r.phases.toArray
  let mut out : List (String × String × Transition) := []
  let mut k := 0
  for _ in List.range phases.size do
    if k < phases.size then
      let kind := (labels.getD k ("", "")).2
      let mut j := k
      for _ in List.range phases.size do
        if j + 1 < phases.size && (labels.getD (j + 1) ("", "")).2 == kind then j := j + 1
      if kind != "hold" then
        let a := phases.getD k { t0 := 0, t1 := 1, paths := [], bounds := stageRect, certs := [], rigid := [], orbits := [], target := none }
        let z := phases.getD j a
        let label := (labels.getD k ("", "")).1
        out := out ++ [(label, kind, ⟨k, j, slotsAt a true, slotsAt z false⟩)]
      k := j + 1
  return out

def fieldBinders : String :=
  "(K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K]"

def chainOf (indices : List Nat) : String :=
  indices.foldr (fun k acc => s!"(allChecked_cons ph{k}_ok {acc})") "allChecked_nil"

def Built.formationOk (b : Built) : Bool := b.asks.all fun a => a.2.2.isMovement || a.2.2.check b.routine
def Built.movementOk (b : Built) : Bool :=
  b.structural || b.routine.phases.all (Phase.check b.routine.cfg) && b.routine.checkMovement &&
    b.asks.all fun a => !a.2.2.isMovement || a.2.2.check b.routine
def Built.musicOk (b : Built) : Bool := b.routine.checkMusic

/-- A transition passes when its own checks and its own phases do. -/
def transitionOk (r : Routine) (tr : Transition) : Bool :=
  Transition.check r tr && (Transition.segment r tr).all (Phase.check r.cfg)

/-- A line request that fails, with the pair that shows it. -/
def brokenLine (r : Routine) (asks : List (String × String × Ask)) : Option (String × Nat × List Nat × Int × Int × Nat × Nat) :=
  asks.findSome? fun (_, text, a) =>
    match a with
    | .endsInLine k ds dx dy =>
      match r.phases[k]? with
      | some ph =>
        (nextPairs ds).findSome? fun (x, y) =>
          if lineBrokenAt r.cfg ph x y dx dy then some (text, k, ds, dx, dy, x, y) else none
      | none => none
    | _ => none

/-! ## Writing a program's proof -/

def ptL (p : Pt) : String := s!"⟨{intL p.x}, {intL p.y}⟩"
def stateL (s : State) : String := listL ptL s
def orbitL (o : Orbit) : String := s!"⟨{o.i}, {intL o.cx}, {intL o.cy}, {intL o.r2}⟩"

def opL : Op → String
  | .move t b => s!"Op.move {stateL t} {b}"
  | .turn c ccw b => s!"Op.turn {ptL c} {boolL ccw} {b}"
  | .slide ds b => s!"Op.slide {listL (fun d => s!"({intL d.1}, {intL d.2})") ds} {b}"
  | .par l r line t b => s!"Op.par {natsL l} {natsL r} {intL line} {stateL t} {b}"

def predL : Pred → String
  | .anything => "Pred.anything"
  | .isAt p => s!"(Pred.isAt {stateL p})"
  | .separated n d => s!"(Pred.separated {n} {intL d})"
  | .onCircle w x y r => s!"(Pred.onCircle {natsL w} {intL x} {intL y} {intL r})"
  | .twoGroups a b d => s!"(Pred.twoGroups {natsL a} {natsL b} {intL d})"
  | .splitAt a b l d => s!"(Pred.splitAt {natsL a} {natsL b} {intL l} {intL d})"
  | .both p q => s!"(Pred.both {predL p} {predL q})"

/-- The program, each step's contract as a theorem, and the composition of them. -/
def programSource (steps : List CStep) (start : State) : String := Id.run do
  if steps.isEmpty then return ""
  let mut out := "\n/-! The program -/\n"
  out := out ++ s!"def st0 : State := {stateL start}\n"
  for (st, k) in steps.zipIdx do
    out := out ++ s!"def st{k + 1} : State := {stateL st.after}\n"
    out := out ++ s!"def step{k} : Step := \{ op := {opL st.step.op}, requires := {predL st.step.requires}, ensures := {predL st.step.ensures} }\n"
  let rec seqL : List String → String
    | [] => "Prog.skip"
    | [x] => s!"(Prog.step {x})"
    | x :: xs => s!"(Prog.seq (Prog.step {x}) {seqL xs})"
  out := out ++ s!"def program : Prog := {seqL ((List.range steps.length).map fun k => s!"step{k}")}\n\n"
  return out

/-- The exact point on a pair's quadratic where they are closest, between 0 and 1. -/
def lowestAt (a b c d : Pt) : Rat :=
  let (A, B, _) := gapQuad a b c d
  if A == 0 || B ≥ 0 then 0
  else if A ≤ -B then 1
  else ((-B : Int) : Rat) / ((A : Int) : Rat)

/-- The closest any pair gets in a step of independent paths, worked out exactly. -/
def closestPair (n : Nat) (a b : State) : Option (Nat × Nat × Rat × Rat) := Id.run do
  let mut best : Option (Nat × Nat × Rat × Rat) := none
  for i in List.range n do
    for j in List.range i do
      let u := lowestAt (a.at i) (b.at i) (a.at j) (b.at j)
      let (A, B, C) := gapQuad (a.at i) (b.at i) (a.at j) (b.at j)
      let v : Rat := ((A : Int) : Rat) * u * u + 2 * ((B : Int) : Rat) * u + ((C : Int) : Rat)
      match best with
      | some (_, _, _, w) => if v < w then best := some (i, j, u, v)
      | none => best := some (i, j, u, v)
  return best

/-- Theorems about the program, once `cfg` and `routine` exist. -/
def posL (p : Pt) : String := s!"⟨{intL p.x}, {intL p.y}⟩"
def tOpL : Algebra.TOp → String
  | .translate vx vy => s!"(.translate ({vx} : Rat) ({vy} : Rat))"
  | .rotate cx cy k => s!"(.rotate ({cx} : Rat) ({cy} : Rat) {k})"
  | .reflectV a => s!"(.reflectV ({a} : Rat))"
  | .reflectH b => s!"(.reflectH ({b} : Rat))"

/-- Runs of steps that each move the formation as a whole. -/
def algebraRuns (steps : List CStep) : List (List CStep) :=
  let (done, cur) := steps.foldl (fun (acc : List (List CStep) × List CStep) st =>
    match st.algebra with
    | some _ => (acc.1, acc.2 ++ [st])
    | none => (if acc.2.isEmpty then acc.1 else acc.1 ++ [acc.2], [])) ([], [])
  if cur.isEmpty then done else done ++ [cur]

/-- For each such run: the check of its first formation, the guarantee inherited from the algebra, and
    a proof that the algebra's answer is exactly where the dancers land on stage. -/
def algebraProofs (cfg : Config) (steps : List CStep) : String := Id.run do
  let mut out := "\n/-! Inherited from the movement algebra -/\n"
  for (run, k) in (algebraRuns steps).zipIdx do
    let first := (run.headD default).before
    let last := (run.getLast?.getD default).after
    let ops := run.filterMap (·.algebra)
    out := out ++ s!"def run{k}Start : Algebra.Formation := {listL posL first}\n"
    out := out ++ s!"def run{k}Ops : List Algebra.TOp := {listL tOpL ops}\n"
    if Algebra.checkCollisionFree cfg.n ((cfg.dmin * cfg.dmin : Int) : Rat) (first.map fun p => ⟨(p.x : Rat), (p.y : Rat)⟩) then
      out := out ++ s!"theorem run{k}_valid : Algebra.RoutineValid run{k}Ops {cfg.n} {cfg.dmin * cfg.dmin} run{k}Start :=\n  Algebra.routine_valid_of_start rfl (by decide +kernel)\n"
      out := out ++ s!"theorem run{k}_lands_on_stage : Algebra.Formation.map' (Algebra.applyAll run{k}Ops) run{k}Start = {listL posL last} := by decide +kernel\n"
      out := out ++ s!"#eval IO.println \"ALGEBRA {k}\"\n"
  return out

def programProofs (cfg : Config) (steps : List CStep) (start : State) : String := Id.run do
  if steps.isEmpty then return ""
  let mut out := "\n/-! The contracts -/\n"
  let mut allOk := true
  let mut cur := start
  for (st, k) in steps.zipIdx do
    if st.step.requires.holds cur then
      out := out ++ s!"theorem link{k}_ok : step{k}.requires.holds st{k} = true := by decide +kernel\n#eval IO.println \"LINK {k}\"\n"
    else
      allOk := false
      out := out ++ s!"/-- The state the previous step leaves does not meet what this step requires. This says nothing about a collision. -/\ntheorem link{k}_broken : step{k}.requires.holds st{k} = false := by decide +kernel\n"
      out := out ++ s!"theorem step{k}_contract_unmet : step{k}.ok cfg st{k} = false := Step.not_ok_of_requires link{k}_broken\n#eval IO.println \"LINKBROKEN {k}\"\n"
    -- a clash between independent paths gets a witness: the exact point, and a proof that they are too close there
    match st.step.op with
    | .move target _ =>
      match closestPair cfg.n cur target with
      | some (i, j, u, v) =>
        if v < ((cfg.dmin * cfg.dmin : Int) : Rat) then
          let pos (p : Pt) := s!"⟨{intL p.x}, {intL p.y}⟩"
          out := out ++ s!"/-- A real collision: this far along the move, these two dancers are closer than the gap. -/\ntheorem step{k}_collision : Algebra.distSq (Algebra.lerp {pos (cur.at i)} {pos (target.at i)} ({u.num} / {u.den})) (Algebra.lerp {pos (cur.at j)} {pos (target.at j)} ({u.num} / {u.den})) < {cfg.dmin * cfg.dmin} := by decide +kernel\n#eval IO.println \"WITNESS {k}\"\n"
      | none => pure ()
    | _ => pure ()
    if st.step.ok cfg cur then
      out := out ++ s!"theorem step{k}_ok {fieldBinders} : Triple K cfg (· = st{k}) (Prog.step step{k}) (· = st{k + 1}) :=\n  Step.triple_at (by decide +kernel) (by decide +kernel)\n#eval IO.println \"STEP {k}\"\n"
    else
      allOk := false
    cur := st.after
  if allOk then
    let rec chain : List Nat → String
      | [] => "Triple.skip"
      | [k] => s!"(step{k}_ok K)"
      | k :: ks => s!"(Triple.seq (step{k}_ok K) {chain ks})"
    let n := steps.length
    out := out ++ s!"\n/-- **The composition.** Each step's guarantee meets the next step's requirement, so the whole program holds. -/\ntheorem program_ok {fieldBinders} : Triple K cfg (· = st0) program (· = st{n}) :=\n  {chain (List.range n)}\n#eval IO.println \"COMPOSED\"\n#print axioms program_ok\n"
    out := out ++ "theorem program_plays_this_routine : samePhases cfg.n (Prog.exec cfg program 0 st0).1 routine.phases = true := by decide +kernel\n#eval IO.println \"SAMEROUTINE\"\n"
  return out

def proofSource (b : Built) (program : List CStep := []) (start : State := []) : String := Id.run do
  let r := b.routine
  let mut out := "import Choreo.Source\nimport Choreo.QuickRefute\nimport Choreo.Tolerance\nimport Choreo.Transforms\nimport Choreo.Verification\nopen Choreo\n\n-- Generated by the planner. Lean's kernel checks everything below.\nnamespace Generated\n\n"
  -- rejected ideas first
  for (rej, k) in b.rejected.zipIdx do
    let ph := rej.draft.toPhase b.plan.n 0
    out := out ++ s!"def idea{k}Cfg : Config := {configL (probeConfig b.plan.n rej.draft.bounds b.plan.bpm rej.draft.dmin)}\n"
    out := out ++ s!"def idea{k} : Phase := {phaseL ph}\n"
    match rej.problems.find? Problem.provable with
    | some p =>
      match refutationL s!"idea{k}Cfg" s!"idea{k}" p with
      | some proof =>
        out := out ++ s!"theorem idea{k}_is_unsafe : ¬ PhaseSpec Rat idea{k}Cfg idea{k} :=\n  {proof}\n"
        out := out ++ s!"#eval IO.println \"REJECTED {k}\"\n\n"
      | none => pure ()
    | none => pure ()
  out := out ++ s!"def cfg : Config := {configL r.cfg}\n\n"
  out := out ++ (if b.structural then phaseDataOnly r else phaseProofs r)
  let names := r.phases.zipIdx.map fun (_, k) => s!"ph{k}"
  out := out ++ s!"def routine : Routine := ⟨cfg, {listL id names}⟩\n"
  out := out ++ s!"def asks : List Ask := {listL (fun (a : String × String × Ask) => askL a.2.2) b.asks}\n\n"
  out := out ++ "#eval IO.println s!\"FINGERPRINT {routine.fingerprint}\"\n\n"
  out := out ++ programSource program start
  out := out ++ programProofs r.cfg program start
  out := out ++ algebraProofs r.cfg program
  if !program.isEmpty then
    out := out ++ "\n/-- The general results this routine rests on, in force in this very file. -/\ntheorem general_results_in_force : True := by\n  have := @Triple.seq; have := @turning_keeps_the_gap; have := @slide_pair_safe; have := @Algebra.routine_preserves_collision_freedom; exact trivial\n#eval IO.println \"LIBRARY\"\n"
  -- each move, proved on its own
  for ((_, _, tr), k) in (transitionsOf b).zipIdx do
    if !b.structural && transitionOk r tr then
      out := out ++ s!"def tr{k} : Transition := {transitionL tr}\n"
      out := out ++ s!"theorem tr{k}_ok {fieldBinders} : TransitionValid K routine tr{k} :=\n  Transition.valid (r := routine) (tr := tr{k}) (by decide +kernel) {chainOf ((List.range tr.count).map (· + tr.first))} K\n"
      out := out ++ s!"#eval IO.println \"TRANSITION {k}\"\n\n"
  -- the movement guarantee for the routine as a whole: everybody moves safely, at every instant
  if b.structural then
    out := out ++ "/-- The main result: this routine is safe at every instant, because its program's movements are. No phase is checked on its own. -/\n"
    out := out ++ s!"theorem routine_moves_safely {fieldBinders} : MovementProved K routine asks :=\n  movement_of_specs K (by decide +kernel) (specs_of_run (Prog.run_of_allRun (K := K) (c := cfg) (p := program) (t := 0) (s := st0) (by decide +kernel)) (by decide +kernel)) (by decide +kernel)\n#eval IO.println \"PART movement\"\n#eval IO.println \"STRUCTURAL\"\n\n#print axioms routine_moves_safely\n#eval IO.println \"VERIFIED\"\n"
  else if b.movementOk then
    out := out ++ "/-- The main result: in this exact routine, nobody comes too close, leaves the stage or moves too fast, at any instant. -/\n"
    out := out ++ s!"theorem routine_moves_safely {fieldBinders} : MovementProved K routine asks :=\n  movement_part (r := routine) (by decide +kernel) {chainOf (List.range r.phases.length)} (by decide +kernel) K\n#eval IO.println \"PART movement\"\n\n"
    if b.drift > 0 && r.cfg.dmin - 2 * b.drift > 0 then
      out := out ++ "/-- In any real performance where each dancer stays within the allowance of the plan, everyone keeps the smaller gap. -/\n"
      out := out ++ s!"theorem routine_forgiving {fieldBinders} : Routine.Forgiving K routine ({r.cfg.dmin - 2 * b.drift}) ({b.drift}) :=\n  Routine.forgiving_of_movement (routine_moves_safely K) (by decide +kernel) (by decide +kernel) (by decide +kernel)\n#eval IO.println \"PART forgiving\"\n#print axioms routine_forgiving\n\n"
    out := out ++ "#print axioms routine_moves_safely\n"
    out := out ++ "#eval IO.println \"VERIFIED\"\n"
  else
    match (phaseProblems r).find? Problem.provable with
    | some p =>
      let k := match p with
        | .collision k .. | .offStage k .. | .tooFast k .. | .unproved k .. | .other k .. => k
      match refutationL "cfg" s!"ph{k}" p with
      | some proof =>
        out := out ++ "/-- This exact routine is proved unsafe, by a concrete moment. -/\n"
        out := out ++ s!"theorem routine_is_unsafe : ¬ RoutineSpec Rat routine :=\n  refute_routine (ph := ph{k}) (by simp [routine]) (show ¬ PhaseSpec Rat cfg ph{k} from {proof})\n\n"
        out := out ++ "#print axioms routine_is_unsafe\n"
        out := out ++ s!"#eval IO.println \"DISPROVED {match p with | .offStage .. => "offstage" | _ => "collision"} {k}\"\n"
        out := out ++ "#eval IO.println \"REFUTED\"\n"
      | none => pure ()
    | none =>
      match brokenLine r b.asks with
      | some (_, k, ds, dx, dy, x, y) =>
        out := out ++ "/-- This formation is proved broken, by one pair out of place. -/\n"
        out := out ++ s!"theorem formation_is_broken : ¬ Ask.Holds Rat routine (.endsInLine {k} {natsL ds} {intL dx} {intL dy}) :=\n  refute_line (ph := ph{k}) (a := {x}) (b := {y}) rfl (by decide +kernel) (by decide +kernel)\n\n"
        out := out ++ "#print axioms formation_is_broken\n"
        out := out ++ "#eval IO.println \"REFUTED\"\n"
      | none => out := out ++ "#eval IO.println \"NOT_PROVED\"\n"
  out := out ++ "\nend Generated\n"
  return out

/-! ## A fixed routine for Comparator -/

/-- The data only: configuration, phases, requests and the first rejected idea. No proofs. -/
def demoData (b : Built) : String := Id.run do
  let r := b.routine
  let mut out := "import Choreo.Compose\nimport Choreo.QuickRefute\nopen Choreo\n\n-- Generated from demo-request.json. Regenerate with `make demo`.\nnamespace Generated\n\n"
  for (rej, k) in b.rejected.zipIdx do
    out := out ++ s!"def idea{k}Cfg : Config := {configL (probeConfig b.plan.n rej.draft.bounds b.plan.bpm rej.draft.dmin)}\n"
    out := out ++ s!"def idea{k} : Phase := {phaseL (rej.draft.toPhase b.plan.n 0)}\n"
  out := out ++ s!"def cfg : Config := {configL r.cfg}\n"
  for (ph, k) in r.phases.zipIdx do
    out := out ++ phaseDef r ph k
  let names := r.phases.zipIdx.map fun (_, k) => s!"ph{k}"
  out := out ++ s!"def routine : Routine := ⟨cfg, {listL id names}⟩\n"
  out := out ++ s!"def asks : List Ask := {listL (fun (a : String × String × Ask) => askL a.2.2) b.asks}\n\nend Generated\n"
  return out

/-- The proofs of the demo routine. -/
def demoProofs (b : Built) : String := Id.run do
  let r := b.routine
  let mut out := "import Choreo.Demo\nimport Choreo.Recipes\nimport Choreo.Tolerance\nimport Choreo.Transforms\nimport Choreo.Verification\nopen Choreo Generated\nattribute [local instance] Lean.Grind.Semiring.natCast Lean.Grind.Ring.intCast\n\n"
  for (ph, k) in r.phases.zipIdx do
    out := out ++ s!"theorem ph{k}_ok : Phase.check cfg ph{k} = true := {phaseProofTerm r ph k}\n"
  let chain := r.phases.zipIdx.foldr (fun (_, k) acc => s!"(allChecked_cons ph{k}_ok {acc})") "allChecked_nil"
  out := out ++ "\n/-- Lean's checker is sound: passing it implies safety and the requests. -/\ntheorem Final.checker_is_sound {r : Routine} {asks : List Ask} (hg : r.checkGlobal = true) (hp : AllChecked r.cfg r.phases)\n    (ha : asks.all (Ask.check r) = true) (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]\n    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : Verified K r asks :=\n  Routine.verified hg hp ha K\n\n"
  out := out ++ "/-- Passing through a gap is safe, for any positions. -/\ntheorem Final.passing_through_a_gap_is_safe {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]\n    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {a₁ b₁ a₂ b₂ : Pt} {g d : Int} (hs : a₁.x = a₂.x + g) (he : b₁.x = b₂.x + g)\n    (h0 : 0 ≤ d) (hd : d ≤ g) (t : K) : ((d : Int) : K) ^ 2 ≤ dist2 (easePath a₁ b₁) (easePath a₂ b₂) t :=\n  Choreo.passing_through_a_gap_is_safe hs he h0 hd t\n\n/-- Swapping places along one line collides, for any positions. -/\ntheorem Final.swapping_along_a_line_always_collides {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]\n    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] (a b : Pt) (h : a.x = b.x) :\n    dist2 (easePath a b) (easePath b a) (1 / 2 : K) = 0 :=\n  Choreo.swapping_along_a_line_always_collides a b h\n\n/-- The three parts compose into the whole-routine statement. -/\ntheorem Final.parts_compose {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]\n    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {r : Routine} {asks : List Ask} (hm : MovementProved K r asks) (hs : MusicalityProved r)\n    (hf : FormationProved K r asks) : Verified K r asks :=\n  Verified.of_parts hm hs hf\n\n/-- A transition follows from its own checks and phase proofs. -/\ntheorem Final.transition_valid {r : Routine} {tr : Transition} (hc : Transition.check r tr = true) (hp : AllChecked r.cfg (Transition.segment r tr))\n    (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : TransitionValid K r tr :=\n  Transition.valid hc hp K\n\n/-- The routine from demo-request.json is safe and does what was asked. -/\ntheorem Final.demo_routine_verified (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]\n    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : Verified K routine asks :=\n"
  out := out ++ s!"  Routine.verified (r := routine) (asks := asks) (by decide +kernel) {chain} (by decide +kernel) K\n\n"
  match b.rejected.head? with
  | some rej =>
    match rej.problems.find? Problem.provable with
    | some p =>
      match refutationL "idea0Cfg" "idea0" p with
      | some proof =>
        out := out ++ s!"/-- Walking the two lines straight through each other is unsafe. -/\ntheorem Final.naive_flip_is_unsafe : ¬ PhaseSpec Rat idea0Cfg idea0 :=\n  {proof}\n"
      | none => pure ()
    | none => pure ()
  | none => pure ()
  return out

/-! ## JSON -/

def ratFloat (t : Rat) : Float := Float.ofInt t.num / t.den.toFloat

def jInt (i : Int) : Json := Json.num i
def jFloat (f : Float) : Json := toJson f
def jPoly (p : Poly) : Json := Json.arr (p.map jInt).toArray
def jRect (r : Rect) : Json :=
  Json.mkObj [("xmin", jInt r.xmin), ("xmax", jInt r.xmax), ("ymin", jInt r.ymin), ("ymax", jInt r.ymax)]

def certName : Cert → String
  | .sep false .. => "They stay in different rows, so they can never meet"
  | .sep true .. => "They stay in different columns, so they can never meet"
  | .bern d => if d == 0 then "Distance curve is trapped above the limit" else s!"Distance curve is trapped above the limit, after splitting time {d} times"
  | .offset .. => "They move as one, at a fixed distance"
  | .fixed .. => "They stay exactly the same distance apart throughout"

def certDepth : Cert → Nat
  | .sep _ _ d => d
  | .bern d => d
  | .offset .. => 0
  | .fixed .. => 0

def secondsAt (c : Config) (ph : Phase) (t : Rat) : Float :=
  let ticks := ph.t0.toFloat + ratFloat t * (ph.t1 - ph.t0).toFloat
  ticks / c.ticksPerBeat.toFloat * 60.0 * c.bpmDen.toFloat / c.bpmNum.toFloat

/-- Square root for display only. -/
def distFloat (d2 : Rat) : Float := (ratFloat d2).sqrt

def problemJson (c : Config) (phases : List Phase) (names : Names) (p : Problem) : Json :=
  let phaseOf (k : Nat) : Phase := phases.getD k { t0 := 0, t1 := 1, paths := [], bounds := stageRect, certs := [], rigid := [], orbits := [], target := none }
  match p with
  | .collision k i j t =>
    let ph := phaseOf k
    Json.mkObj [("kind", "collision"), ("phase", k), ("i", i), ("j", j), ("t", jFloat (ratFloat t)),
      ("tNum", jInt t.num), ("tDen", t.den), ("second", jFloat (secondsAt c ph t)),
      ("distance", jFloat (distFloat (dist2 (ph.path i) (ph.path j) t))),
      ("text", toJson (problemText names p))]
  | .offStage k i t =>
    let ph := phaseOf k
    Json.mkObj [("kind", "offstage"), ("phase", k), ("i", i), ("t", jFloat (ratFloat t)),
      ("second", jFloat (secondsAt c ph t)), ("text", toJson (problemText names p))]
  | .tooFast k i => Json.mkObj [("kind", "fast"), ("phase", k), ("i", i), ("text", toJson (problemText names p))]
  | .unproved k i j => Json.mkObj [("kind", "unproved"), ("phase", k), ("i", i), ("j", j), ("text", toJson (problemText names p))]
  | .other k w => Json.mkObj [("kind", "other"), ("phase", k), ("text", toJson w)]

/-- The pair that comes closest during a phase, measured at nine moments, for the proof viewer. -/
def tightestPair (c : Config) (ph : Phase) : Nat × Nat × Rat := Id.run do
  let mut best : Nat × Nat × Rat := (1, 0, 1000000000000)
  let times : List Rat := (List.range 9).map fun (k : Nat) => (((k : Nat) : Int) : Rat) / 8
  for i in List.range c.n do
    for j in List.range i do
      for t in times do
        let d := dist2 (ph.path i) (ph.path j) t
        if d < best.2.2 then best := (i, j, d)
  return best

def phaseJson (c : Config) (names : Names) (label kind : String) (ph : Phase) (k : Nat) (known : Bool := false) : Json :=
  let (i, j, d2) := tightestPair c ph
  let cert := ph.pairCert i j
  Json.mkObj [
    ("index", k), ("t0", ph.t0), ("t1", ph.t1), ("label", toJson label), ("kind", toJson kind),
    ("bounds", jRect ph.bounds),
    ("paths", Json.arr (ph.paths.map fun p =>
      Json.mkObj [("X", jPoly p.X), ("Y", jPoly p.Y), ("W", jPoly p.W)]).toArray),
    ("ok", toJson (known || Phase.check c ph)),
    ("tight", Json.mkObj [("i", i), ("j", j), ("names", toJson s!"{names i} and {names j}"),
      ("distance", jFloat (distFloat d2)),
      ("how", toJson (certName cert)), ("depth", certDepth cert),
      ("coefficients", jPoly (clearPoly (ph.path i) (ph.path j) c.dmin))]),
    ("certs", Json.arr (ph.certs.map fun ct => Json.mkObj [("how", toJson (certName ct)), ("depth", certDepth ct), ("lean", toJson (certL ct))]).toArray),
    ("pairsByMethod", Json.mkObj [
      ("together", ((ph.certs.filter fun | .offset .. => true | _ => false).length : Nat)),
      ("curve", ((ph.certs.filter fun | .bern .. => true | _ => false).length : Nat))])]

/-- Exact positions at a few moments, so the app can test its own animation against Lean. -/
def samplesJson (c : Config) (phases : List Phase) : Json :=
  let pts : List Rat := [1 / 3, 2 / 3]
  Json.arr (phases.zipIdx.flatMap fun (ph, k) =>
    pts.map fun t =>
      Json.mkObj [("phase", k), ("t", jFloat (ratFloat t)),
        ("pos", Json.arr ((List.range c.n).map fun i =>
          Json.arr #[jFloat (ratFloat ((ph.path i).x t)), jFloat (ratFloat ((ph.path i).y t))]).toArray)]).toArray

def stepsHeard (steps : List String) : List String :=
  if steps.isEmpty then [] else ["Dance " ++ ", ".intercalate (steps.map stepTitle)]

def moveName : Move → String
  | .enter s => s!"Enter from the wings and form a {s.name}"
  | .form s => s!"Form a {s.name}"
  | .flip => "Flip the lines"
  | .rotate q ccw => s!"Rotate {q * 90} degrees {if ccw then "counter-clockwise" else "clockwise"}"
  | .counterRotate q => s!"Turn the rings against each other, {q * 90} degrees"
  | .exchange => "The cast changes: one group off, another on"
  | .join s => s!"The rest come on and everyone forms a {s.name}"
  | .weave _ => "Weave: neighbours trade places"
  | .ripple => "Ripple: one group after another"
  | .burst => "Gather and burst out"
  | .snake => "Follow the leader"
  | .zipper => "Zipper: the sides pass through each other"
  | .leave nl => if nl then "Leave in new lines" else "Leave the stage"

/-- A set of formations as JSON, with or without the rules worked out for it. -/
def sceneJson (sc : Scene) (withRules : Bool) : Json :=
  Json.mkObj [
    ("frames", Json.arr (sc.frames.map fun f => Json.arr (f.map fun p => Json.arr #[jInt p.x, jInt p.y]).toArray).toArray),
    ("holds", Json.arr (sc.holds.map fun k => toJson k).toArray), ("moves", Json.arr (sc.moves.map fun k => toJson k).toArray), ("seconds", toJson sc.seconds),
    ("bends", Json.arr (sc.bends.map fun (f, i, x, y) => Json.arr #[toJson f, toJson i, jInt x, jInt y]).toArray),
    ("ways", Json.arr (sc.ways.map toJson).toArray), ("genre", toJson sc.genre), ("landing", Json.arr (sc.landing.map fun k => toJson k).toArray),
    ("rules", if !withRules then Json.null else Json.arr (sc.rules.map fun u => Json.mkObj [
      ("name", toJson u.name), ("kind", toJson u.kind), ("frame", u.frame),
      ("members", Json.arr (u.members.map fun m => toJson m).toArray), ("dx", jInt u.dx), ("dy", jInt u.dy),
      ("pairs", Json.arr (u.pairs.map fun p => Json.arr #[toJson p.1, toJson p.2]).toArray), ("mirror", jInt u.mirror)]).toArray)]

/-- Which phases a request talks about, so the app can show it at the right stage. -/
def askPhases : Ask → List Nat
  | .startsIn k .. | .endsIn k .. | .staysIn k .. | .forms k .. | .keepsShape k .. | .staysOnCircle k .. => [k]
  | .flips a b .. => [a, b]
  | .keepsLine k .. | .endsInLine k .. | .endsMirrored k .. => [k]

/-- A program's steps and contracts, as the editor shows them. -/
def programJson (cfg : Config) (steps : List CStep) (start : State) (names : Names) : Json := Id.run do
  let mut cur := start
  let mut rows : Array Json := #[]
  let mut allOk := true
  for (st, k) in steps.zipIdx do
    let rq := st.step.requires.holds cur
    let en := st.step.op.enabled cfg cur
    let ok := st.step.ok cfg cur
    allOk := allOk && ok
    rows := rows.push (Json.mkObj [
      ("index", k), ("surface", st.surface), ("section", toJson st.sectionName), ("name", toJson st.name), ("kind", toJson st.kind),
      ("counts", st.step.op.beats), ("requires", toJson st.requiresText), ("ensures", toJson st.ensuresText),
      ("requiresLean", toJson (predL st.step.requires)), ("ensuresLean", toJson (predL st.step.ensures)),
      ("requiresOk", toJson rq), ("runsOk", toJson en), ("ok", toJson ok),
      ("why", toJson (if rq then "" else Pred.whyNot names cur st.step.requires)),
      ("algebra", toJson (match st.algebra with | some (.translate ..) => "translate" | some (.rotate ..) => "rotate" | some (.reflectV _) | some (.reflectH _) => "reflect" | none => "")),
      ("closest", match st.step.op with
        | .move target _ =>
          match closestPair cfg.n cur target with
          | some (i, j, u, v) =>
            let (A, B, C) := gapQuad (cur.at i) (target.at i) (cur.at j) (target.at j)
            Json.mkObj [("i", i), ("j", j), ("names", toJson s!"{names i} and {names j}"), ("uNum", jInt u.num), ("uDen", toJson u.den), ("A", jInt A), ("B", jInt B), ("C", jInt C),
              ("distSq", toJson (v.num.toNat / v.den)), ("clash", toJson (decide (v < ((cfg.dmin * cfg.dmin : Int) : Rat))))]
          | none => Json.null
        | _ => Json.null),
      ("opKind", toJson (match st.step.op with | .move .. => "exact" | .turn .. => "rule" | .slide .. => "rule" | .par .. => "rule")),
      ("before", Json.arr (st.before.map fun p => Json.arr #[jInt p.x, jInt p.y]).toArray),
      ("after", Json.arr (st.after.map fun p => Json.arr #[jInt p.x, jInt p.y]).toArray)])
    cur := st.after
  let runs := (algebraRuns steps).map fun run => Json.mkObj [("first", (run.headD default).surface), ("last", (run.getLast?.getD default).surface), ("steps", run.length), ("names", Json.arr ((run.map (·.name)).map toJson).toArray)]
  return Json.mkObj [("steps", Json.arr rows), ("composable", toJson allOk), ("runs", Json.arr runs.toArray), ("pairs", toJson (cfg.n * (cfg.n - 1) / 2))]

def report (b : Built) (names : Names) (proofPath : String) (program : List CStep := []) (start : State := []) : Json :=
  let r := b.routine
  let c := r.cfg
  let problems := if b.structural then [] else phaseProblems r
  let asks := b.asks.map fun (g, text, a) => (g, text, a, Ask.check r a)
  let phaseOk := r.phases.all (Phase.check c)
  let globalOk := r.checkGlobal
  let asksOk := asks.all (·.2.2.2)
  let verdict :=
    if b.movementOk then "proved"
    else if problems.any Problem.provable || (brokenLine r b.asks).isSome then "refuted"
    else "unproved"
  let labels := b.labels.toArray
  Json.mkObj [
    ("verdict", toJson verdict),
    ("fingerprint", toJson r.fingerprint),
    ("proofPath", toJson proofPath),
    ("minSeconds", toJson b.minSeconds),
    ("program", if program.isEmpty then Json.null else programJson r.cfg program start names),
    ("drift", jInt b.drift),
    ("dropped", Json.arr (b.dropped.map (fun m => toJson (moveName m))).toArray),
    ("error", match b.error with | some e => toJson e | none => Json.null),
    ("plan", Json.mkObj [
      ("seconds", b.plan.seconds), ("bpm", b.plan.bpm), ("genre", toJson b.plan.genre), ("n", b.plan.n),
      ("left", b.plan.left), ("right", b.plan.right),
      ("heard", if b.heard.isEmpty then Json.arr ((b.plan.moves.map moveName ++ stepsHeard b.plan.steps).map toJson).toArray else Json.arr ((b.heard ++ stepsHeard b.plan.steps).map toJson).toArray)]),
     
    ("scene", match b.scene with
      | none => Json.null
      | some sc => sceneJson sc true),
    ("derived", match b.derived with
      | none => Json.null
      | some sc => sceneJson sc false),
    ("broken", match brokenLine r b.asks with
      | some (t, _, _, _, _, x, y) => Json.mkObj [("text", toJson t), ("i", x), ("j", y)]
      | none => Json.null),
    ("config", Json.mkObj [
      ("n", c.n), ("dmin", jInt c.dmin), ("vmax", jInt c.vmax), ("envelope", jRect c.stage), ("stage", jRect stageRect),
      ("ticksPerBeat", c.ticksPerBeat), ("bpmNum", c.bpmNum), ("bpmDen", c.bpmDen), ("total", c.total), ("seconds", c.seconds)]),
    ("names", Json.arr ((List.range c.n).map fun i => toJson (names i)).toArray),
    ("phases", Json.arr (r.phases.zipIdx.map fun (ph, k) =>
      let (label, kind) := labels.getD k ("", "")
      phaseJson c names label kind ph k b.structural).toArray),
    ("keys", Json.arr (b.keys.map fun (m, p) => Json.mkObj [("move", m), ("phase", p)]).toArray),
    ("globalOk", toJson globalOk),
    ("checked", Json.mkObj [("formation", toJson b.formationOk), ("movement", toJson b.movementOk), ("musicality", toJson b.musicOk),
      ("movementJoins", toJson r.checkMovement)]),
    ("transitions", Json.arr ((transitionsOf b).zipIdx.map fun ((label, kind, tr), k) =>
      let seg := Transition.segment r tr
      let t0 := (seg.head?.map (·.t0)).getD 0
      let t1 := (seg.getLast?.map (·.t1)).getD 0
      Json.mkObj [("index", k), ("label", toJson label), ("kind", toJson kind), ("first", tr.first), ("last", tr.last),
        ("t0", t0), ("t1", t1), ("ok", toJson (transitionOk r tr)), ("name", toJson s!"tr{k}_ok"),
        ("startPositions", Json.arr (tr.start.map fun q => Json.arr #[jInt (q.x / q.w), jInt (q.y / q.w)]).toArray),
        ("finishPositions", Json.arr (tr.finish.map fun q => Json.arr #[jInt (q.x / q.w), jInt (q.y / q.w)]).toArray)]).toArray),
    ("asks", Json.arr (asks.map fun (g, text, a, ok) =>
      Json.mkObj [("group", toJson g), ("text", toJson text), ("ok", toJson ok), ("statement", toJson (askL a)), ("category", toJson (if a.isMovement then "movement" else "formation")), ("phases", Json.arr ((askPhases a).map fun k => toJson k).toArray)]).toArray),
    ("problems", Json.arr (problems.map (problemJson c r.phases names)).toArray),
    ("rejected", Json.arr (b.rejected.map fun rej =>
      let ph := rej.draft.toPhase b.plan.n 0
      let cfg0 := probeConfig b.plan.n rej.draft.bounds b.plan.bpm rej.draft.dmin
      Json.mkObj [("title", toJson rej.title), ("why", toJson rej.why), ("label", toJson rej.draft.label), ("at", toJson rej.startPhase), ("ticks", toJson (rej.draft.beats * 4)),
        ("problems", Json.arr (rej.problems.map (problemJson cfg0 [ph] names)).toArray),
        ("paths", Json.arr (ph.paths.map fun p =>
          Json.mkObj [("X", jPoly p.X), ("Y", jPoly p.Y), ("W", jPoly p.W)]).toArray)]).toArray),
    ("samples", samplesJson c r.phases)]

end Choreo

