import Choreo.QuickRefute
import Choreo.Compose
import Lean
/-!
# Testing the specification itself

A proof is only worth what its statement says. These checks ask: can the statement be met at all,
and does it actually reject bad behaviour? `#spec_surface` lists what a reviewer must read.
-/
open Lean Elab Command Choreo

/-- Definitions a theorem's statement mentions, followed through their bodies. -/
partial def specSurface (env : Environment) (thm : Name) : NameSet :=
  let rec go (todo : List Name) (seen : NameSet) : NameSet :=
    match todo with
    | [] => seen
    | c :: rest =>
      if seen.contains c then go rest seen else
      let next := match env.find? c with
        | some (.defnInfo d) => d.type.getUsedConstants.toList ++ d.value.getUsedConstants.toList
        | some ci => ci.type.getUsedConstants.toList
        | none => []
      go (next ++ rest) (seen.insert c)
  match env.find? thm with
  | some ci => go ci.type.getUsedConstants.toList {}
  | none => {}

/-- `#spec_surface thm`: this project's definitions that the statement of `thm` depends on. -/
elab "#spec_surface " id:ident : command => do
  let env ← getEnv
  let thm ← liftCoreM <| realizeGlobalConstNoOverloadWithInfo id
  let own := (specSurface env thm).toList.filter fun c =>
    c.getRoot == `Choreo && !c.isInternal && !Meta.isMatcherCore env c
  logInfo m!"{own}"

/-- `#audit_axioms thm`: the axioms `thm` depends on. -/
elab "#audit_axioms " id:ident : command => do
  let thm ← liftCoreM <| realizeGlobalConstNoOverloadWithInfo id
  let axs ← liftCoreM <| collectAxioms thm
  logInfo m!"{thm}: {axs.toList}"

namespace Choreo.Examples

/-- Move from `a` to `b` and stop, with a smooth start and end. -/
def walk (ax ay bx by' : Int) : Path :=
  ⟨[ax, 3 * ax, 3 * bx, bx], [ay, 3 * ay, 3 * by', by'], [1, 3, 3, 1]⟩

def stage : Rect := ⟨-6000, 6000, 0, 8000⟩

/-- Two dancers, 8 seconds at 120 beats per minute. -/
def cfg : Config :=
  { n := 2, dmin := 600, vmax := 3500, stage, ticksPerBeat := 4, bpmNum := 120, bpmDen := 1, total := 64, seconds := 8 }

def phaseOf (paths : List Path) : Phase :=
  { t0 := 0, t1 := 64, paths, bounds := stage, certs := [.bern 4], rigid := [], orbits := [], target := none }

/-- Two dancers side by side, both walking upstage. -/
def good : Phase := phaseOf [walk (-1000) 1000 (-1000) 7000, walk 1000 1000 1000 7000]
/-- Two dancers walking head-on along the same line. -/
def headOn : Phase := phaseOf [walk 0 1000 0 7000, walk 0 7000 0 1000]
/-- One dancer running off the side of the stage. -/
def runsOff : Phase := phaseOf [walk 0 1000 7000 1000, walk 0 5000 0 5000]
/-- One dancer crossing the whole stage in far too little time. -/
def sprint : Config := { cfg with total := 4, seconds := 1 }
def sprintPhase : Phase :=
  { t0 := 0, t1 := 4, paths := [walk (-5000) 1000 5000 1000, walk 0 5000 0 5000], bounds := stage,
    certs := [.bern 4], rigid := [], orbits := [], target := none }

/-! ## The statements can be met: a concrete routine with every hypothesis discharged -/

def goodRoutine : Routine := ⟨cfg, [good]⟩
def goodAsks : List Ask :=
  [.startsIn 0 [0, 1] ⟨-2000, 2000, 0, 1000⟩,
   .endsIn 0 [0, 1] ⟨-2000, 2000, 7000, 8000⟩,
   .staysIn 0 stage,
   .keepsShape 0 [⟨0, 1, 2000, 0⟩]]

theorem good_ok : Phase.check cfg good = true := by decide +kernel

theorem good_verified : Verified Rat goodRoutine goodAsks :=
  Routine.verified (by decide +kernel) (allChecked_cons good_ok allChecked_nil) (by decide +kernel) Rat

/-! ## The specification rejects bad behaviour -/

/-- Head-on walkers really are unsafe: this is a theorem, not a failed test. -/
theorem headOn_is_unsafe : ¬ PhaseSpec Rat cfg headOn := refute_quick (i := 1) (j := 0) (a := 1) (b := 2) (by decide +kernel)

/-- Running off the stage is unsafe. -/
theorem runsOff_is_unsafe : ¬ PhaseSpec Rat cfg runsOff :=
  refute_stage (i := 0) (t := 1) (by decide +kernel) (by decide +kernel) (by decide +kernel) (by decide +kernel)

/-- The checker turns down each bad example. -/
example : Phase.check cfg headOn = false := by decide +kernel
example : Phase.check cfg runsOff = false := by decide +kernel
example : Phase.check sprint sprintPhase = false := by decide +kernel

/-- A request about a phase that doesn't exist fails, rather than passing by default. -/
example : (Ask.staysIn 7 stage).check goodRoutine = false := by decide +kernel
/-- A request for the wrong starting side fails. -/
example : (Ask.startsIn 0 [0] ⟨6600, 9000, 0, 8000⟩).check goodRoutine = false := by decide +kernel
/-- Asking for a shape the dancers didn't form fails. -/
example : (Ask.forms 0 (.line 0 0 100 0 2) [0, 1]).check goodRoutine = false := by decide +kernel

/-! ## Formation rules: they can be met, and they reject a formation out of line -/

/-- Three dancers side by side, walking upstage together. -/
def threeCfg : Config := { cfg with n := 3 }
def threePhase : Phase :=
  phaseOf [walk (-1000) 1000 (-1000) 7000, walk 0 1000 0 7000, walk 1000 1000 1000 7000]
def threeRoutine : Routine := ⟨threeCfg, [threePhase]⟩

/-- A line that stays straight really is reported as straight, and so is its mirror symmetry. -/
example : (Ask.keepsLine 0 [0, 1, 2] 1000 0).check threeRoutine = true := by decide +kernel
example : (Ask.endsInLine 0 [0, 1, 2] 1000 0).check threeRoutine = true := by decide +kernel
example : (Ask.endsMirrored 0 [(0, 2), (1, 1)] 0).check threeRoutine = true := by decide +kernel

/-- A claim about the wrong spacing fails. -/
example : (Ask.endsInLine 0 [0, 1, 2] 900 0).check threeRoutine = false := by decide +kernel
/-- A line of one dancer is not a line. -/
example : (Ask.keepsLine 0 [0] 1000 0).check threeRoutine = false := by decide +kernel
/-- A claim about symmetry across the wrong centre line fails. -/
example : (Ask.endsMirrored 0 [(0, 2)] 500).check threeRoutine = false := by decide +kernel

/-- The second dancer drifts out of the line, so the line request is provably false. -/
def bentPhase : Phase :=
  phaseOf [walk (-1000) 1000 (-1000) 7000, walk 0 1000 0 6000, walk 1000 1000 1000 7000]
def bentRoutine : Routine := ⟨threeCfg, [bentPhase]⟩

theorem bent_line_is_broken : ¬ Ask.Holds Rat bentRoutine (.endsInLine 0 [0, 1, 2] 1000 0) :=
  refute_line (ph := bentPhase) (a := 0) (b := 1) rfl (by decide) (by decide +kernel)

/-- A phase and the same phase later in time get the same answer. -/
example : Phase.check cfg { good with t0 := 64, t1 := 128 } = true :=
  Phase.check_shift (ph := good) rfl rfl rfl rfl rfl rfl rfl good_ok

/-! ## The three parts, and how they combine -/

/-- A routine that is fine except its music: it doesn't last the length it claims. -/
def wrongLength : Routine := ⟨{ cfg with seconds := 9 }, [good]⟩
/-- A routine that is fine except its movement. -/
def collides : Routine := ⟨cfg, [headOn]⟩
/-- A routine that starts off the beat. -/
def offBeat : Routine := ⟨{ cfg with ticksPerBeat := 5 }, [good]⟩

example : goodRoutine.checkMovement = true := by decide +kernel
example : goodRoutine.checkMusic = true := by decide +kernel
/-- Movement and music are judged apart: the wrong length is a music problem and nothing else. -/
example : wrongLength.checkMusic = false := by decide +kernel
example : wrongLength.checkMovement = true := by decide +kernel
example : offBeat.checkMusic = false := by decide +kernel

theorem good_movement : MovementProved Rat goodRoutine goodAsks :=
  movement_part (by decide +kernel) (allChecked_cons good_ok allChecked_nil) (by decide +kernel) Rat
theorem good_music : MusicalityProved goodRoutine := musicality_part (by decide +kernel)
theorem good_formation : FormationProved Rat goodRoutine goodAsks := formation_part (by decide +kernel) Rat

/-- **Whole-routine composition, on a concrete routine.** -/
theorem good_composed : Verified Rat goodRoutine goodAsks := Verified.of_parts good_movement good_music good_formation

/-- A formation can be proved in a routine whose movement fails, because the parts stand alone. -/
theorem collides_formation : FormationProved Rat collides [.startsIn 0 [0] ⟨-1000, 1000, 0, 2000⟩] :=
  formation_part (by decide +kernel) Rat

/-- The same routine cannot pass the phase check. -/
example : Phase.check cfg headOn = false := by decide +kernel

/-! ## Transitions -/

/-- The move in `goodRoutine`, from its start to its finish. -/
def goodMove : Transition := ⟨0, 0, [⟨-1000, 1000, 1⟩, ⟨1000, 1000, 1⟩], [⟨-1000, 7000, 1⟩, ⟨1000, 7000, 1⟩]⟩

theorem goodMove_valid : TransitionValid Rat goodRoutine goodMove :=
  Transition.valid (by decide +kernel) (allChecked_cons good_ok allChecked_nil) Rat

/-- The wrong destination fails, even though the move itself is safe. -/
example : Transition.check goodRoutine { goodMove with finish := [⟨-1000, 6000, 1⟩, ⟨1000, 7000, 1⟩] } = false := by decide +kernel
/-- The wrong start fails. -/
example : Transition.check goodRoutine { goodMove with start := [⟨0, 1000, 1⟩, ⟨1000, 1000, 1⟩] } = false := by decide +kernel
/-- A transition over a phase that doesn't exist fails, rather than passing by default. -/
example : Transition.check goodRoutine { goodMove with last := 3 } = false := by decide +kernel
/-- A list of the wrong length fails. -/
example : Transition.check goodRoutine { goodMove with start := [⟨-1000, 1000, 1⟩] } = false := by decide +kernel

/-- Two phases that don't meet are caught at the join between them. -/
def jump : Routine := ⟨{ cfg with total := 128, seconds := 16 },
  [good, { good with t0 := 64, t1 := 128, paths := [walk 0 1000 0 7000, walk 2000 1000 2000 7000] }]⟩
example : jump.checkMovement = false := by decide +kernel
example : Transition.check jump ⟨0, 1, [⟨-1000, 1000, 1⟩, ⟨1000, 1000, 1⟩], [⟨0, 7000, 1⟩, ⟨2000, 7000, 1⟩]⟩ = false := by decide +kernel

/-! ## Executable checks -/

#guard Phase.check cfg good
#guard !Phase.check cfg headOn
#guard Poly.first (Poly.mul [1, 2] [3, 4]) == 3

/-! ## What a reviewer must read, and what is trusted -/

#spec_surface Routine.verified
#audit_axioms Routine.verified
#audit_axioms Choreo.Examples.good_verified
#audit_axioms Choreo.Examples.headOn_is_unsafe
#audit_axioms refute_quick
#audit_axioms refute_line
#audit_axioms Verified.of_parts
#audit_axioms Transition.valid
#audit_axioms Choreo.Examples.good_composed
#audit_axioms Choreo.Examples.goodMove_valid
#audit_axioms Choreo.Examples.bent_line_is_broken

end Choreo.Examples
