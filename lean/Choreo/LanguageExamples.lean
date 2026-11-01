import Choreo.Language
/-!
# The language, on small concrete programs

Real instances, so nothing about `Triple` or the contracts is vacuous: a composition that is accepted, a
composition that is rejected for a broken contract, and a spec that rejects a bad state.
-/
namespace Choreo.LanguageExamples

/-- Two dancers on a small stage, 60 cm apart at least. -/
def cfg : Config :=
  { n := 2, dmin := 600, vmax := 3500, stage := ⟨-6000, 6000, 0, 8000⟩, ticksPerBeat := 4,
    bpmNum := 120, bpmDen := 1, total := 64, seconds := 8 }

/-- Two dancers in separate lanes, on opposite sides. -/
def lanes : State := [⟨-2000, 3000⟩, ⟨2000, 4000⟩]
/-- The same two dancers, sharing one lane. -/
def oneLane : State := [⟨-2000, 3000⟩, ⟨2000, 3000⟩]

/-- Trade sides. Requires separate lanes. -/
def exchange : Step :=
  { op := .slide [(4000, 0), (-4000, 0)] 8, requires := .twoGroups [0] [1] 600 }

/-- Move both upstage together. Requires them to start apart. -/
def drift : Step :=
  { op := .slide [(0, 500), (0, 500)] 8, requires := .separated 2 600 }

def afterExchange : State := [⟨2000, 3000⟩, ⟨-2000, 4000⟩]
def afterDrift : State := [⟨2000, 3500⟩, ⟨-2000, 4500⟩]

/-! ## A composition that is accepted -/

example : exchange.requires.holds lanes = true := by decide +kernel
example : exchange.op.next cfg.n lanes = afterExchange := by decide +kernel
example : drift.requires.holds afterExchange = true := by decide +kernel

section
variable (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K]

theorem exchange_ok : Triple K cfg (· = lanes) (.step exchange) (· = afterExchange) :=
  Step.triple_at (by decide +kernel) (by decide +kernel)
theorem drift_ok : Triple K cfg (· = afterExchange) (.step drift) (· = afterDrift) :=
  Step.triple_at (by decide +kernel) (by decide +kernel)

/-- Exchange then drift, by the composition theorem. -/
theorem exchange_then_drift : Triple K cfg (· = lanes) (.seq (.step exchange) (.step drift)) (· = afterDrift) :=
  Triple.seq (exchange_ok K) (drift_ok K)
end

/-! ## A composition that is rejected -/

/-- From one lane, the requirement of the exchange is false. -/
theorem exchange_needs_lanes : exchange.requires.holds oneLane = false := by decide +kernel

/-- So its contract isn't met, whether or not anything else about the move is fine. -/
theorem exchange_rejected : exchange.ok cfg oneLane = false := Step.not_ok_of_requires exchange_needs_lanes

/-- Both steps are valid on their own: the drift's contract can be met in the state that breaks the exchange. -/
theorem drift_fine_alone : drift.ok cfg oneLane = true := by decide +kernel

/-! ## Claims reject bad states -/

example : (Pred.separated 2 600).holds [⟨0, 0⟩, ⟨100, 0⟩] = false := by decide +kernel
example : (Pred.splitAt [0] [1] 0 600).holds [⟨100, 0⟩, ⟨700, 0⟩] = false := by decide +kernel
example : (Pred.onCircle [0] 0 0 25).holds [⟨3, 4⟩] = true := by decide +kernel
example : (Pred.onCircle [0] 0 0 25).holds [⟨3, 5⟩] = false := by decide +kernel

end Choreo.LanguageExamples
