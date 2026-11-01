# What Choreo proves, and what it only shows

> **The app claims four things only:** no collisions, in bounds, under the speed limit, no jumps. Each routine's proof file ends in `routine_moves_safely : MovementProved K routine asks`. The formation and musicality definitions remain in the Lean library, and the judged `Final.*` statements still use them, but the app no longer makes or shows those claims.


Everything marked as a theorem below is in `lean/Choreo/` and checked by Lean's kernel. The only axioms are `propext`, `Classical.choice` and `Quot.sound`. `make verify` fails if that stops being true.

## How a routine gets proved

1. `Choreo/Prompt.lean` and `Choreo/Scene.lean` read the request. `Choreo/Planner.lean` proposes paths: whole-number Bézier curves, in millimetres. None of this is trusted.
2. `Choreo/Emit.lean` writes a `.lean` file for that routine, plus JSON for the animation. Both come from one value and carry the same fingerprint.
3. The server runs `lean` on the file. `decide +kernel` makes the kernel run the checkers on the exact paths.
4. The server reports a verdict only if there are no errors, only standard axioms, and the fingerprint in the checked file matches the animation data.
5. The app reads which theorems were proved. It never works out a success itself: see `app/src/lib/verification.ts`.

**Time** is a value `t` in `[0, 1]` across each phase, in any ordered field `K`, which includes the rationals and the reals. So the statements cover every instant, with no sampling.

## Inventory

UI category: F = Formation, Mv = Movement, Mu = Musicality.

### Per-routine theorems, generated for each routine

| Theorem | What it proves | Assumptions | UI | Status |
|---|---|---|---|---|
| `ph{k}_ok` | `Phase.check` passes on phase `k` | None | Mv | Kernel, each routine |
| `tr{k}_ok : TransitionValid K routine tr{k}` | One whole move: starts and ends at the listed positions, safe throughout, joined, on beats | None | Mv, Timeline | Kernel, when that move passes |
| `formation_ok : FormationProved K routine asks` | Every request about places and shapes | None | F | Kernel, stands alone |
| `movement_ok : MovementProved K routine asks` | Spacing, bounds, speed and continuity across the routine, plus stage-only requests | None | Mv | Kernel, stands alone |
| `musicality_ok : MusicalityProved routine` | Every phase on a beat, exact length | Tempo as given | Mu | Kernel, stands alone |
| `routine_verified : Verified K routine asks` | The whole routine: composed from the three parts by `Verified.of_parts` | None | Verdict | Kernel, only if all three pass |
| `routine_is_unsafe : ¬ RoutineSpec Rat routine` | This routine is wrong, shown by one concrete moment | None | Failure | Kernel, when a witness exists |
| `formation_is_broken : ¬ Ask.Holds Rat routine …` | This line request is false, shown by one pair out of place | None | Failure | Kernel, when a witness exists |
| `idea{k}_is_unsafe` | An idea the planner dropped really was unsafe | None | Rejected ideas | Kernel |

### General theorems, for every routine

| Theorem | What it proves | Assumptions | UI | Status |
|---|---|---|---|---|
| `Phase.sound` | If the checker passes a phase, `PhaseSpec` holds at every instant | `Phase.check = true` | Mv | Proved |
| `Routine.sound` | Checks passing gives `RoutineSpec` | `checkGlobal`, `AllChecked` | Verdict | Proved |
| `Routine.verified` | Checks passing gives `Verified` | All checks | Verdict | Proved (Comparator) |
| `movement_part` | Phase proofs, joins and stage requests give `MovementProved` | `checkMovement`, `AllChecked` | Mv | Proved |
| `musicality_part` | `checkMusic` gives `MusicalityProved` | `checkMusic` | Mu | Proved |
| `formation_part` | Request checks give `FormationProved`, with no reference to movement | Those checks | F | Proved |
| `Verified.of_parts` | The three parts give the whole statement | The three parts | Verdict | Proved (Comparator) |
| `Transition.valid` | A move's own checks and phase proofs give `TransitionValid` | `Transition.check`, its phases' proofs | Mv | Proved (Comparator) |
| `Phase.check_shift` | Moving a phase in time doesn't change its check | Same paths and length | Internal | Proved |
| `refute_quick`, `refute_collision`, `refute_stage`, `refute_line`, `refute_routine` | A concrete bad moment or pair makes the spec false | A witness | Failure | Proved |
| `deriv_correct` | The derivative in the speed limit is the true derivative | None | Mv | Proved |

### The guarantees inside the specs

| Guarantee | Where | What it means | UI |
|---|---|---|---|
| Minimum separation | `PhaseSpec.noCollision`, `MovementProved.noCollision` | Every pair at least `dmin` apart, centre to centre, at every instant | Mv |
| Stage bounds | `PhaseSpec.onStage`, `MovementProved.onStage`, `Ask.staysIn` | Everyone inside the phase's rectangle | Mv |
| Speed limit | `PhaseSpec.speedLimit` | Real speed at most `vmax`, using the phase's real duration | Mv |
| Continuity | `MovementProved.continuous`, `TransitionValid.continuous` | Position and velocity match where phases meet | Mv |
| Beat alignment | `MusicalityProved.onBeat` | Phase boundaries on beats | Mu |
| Length | `MusicalityProved.duration` | Total length is exactly the stated seconds | Mu |
| Starting and ending places | `Ask.startsIn`, `Ask.endsIn`, `Ask.forms` | Named dancers are in a named area or on a slot | F |
| Lines | `Ask.keepsLine`, `Ask.endsInLine` | Each dancer exactly `(dx, dy)` from the last | F |
| Symmetry | `Ask.endsMirrored` | Each pair are mirror images across a line | F |
| Holding shape | `Ask.keepsShape` | Exact offsets from a leader at every instant | F |
| Trading places | `Ask.flips` | Each dancer ends at their mirror image, front to back | F |
| Circles | `Ask.staysOnCircle`, `PhaseSpec.orbit` | Exactly on the circle at every instant | F |

### Rules for any positions (`Choreo/Recipes.lean`)

| Theorem | In plain words |
|---|---|
| `different_rows_never_clash` | Dancers a row apart can't collide, however fast they cross |
| `passing_through_a_gap_is_safe` | Dancers with a side gap can walk through each other's line |
| `swapping_along_a_line_always_collides` | Swapping along one line is always a collision |
| `moving_together_keeps_the_gap` | Shifting together keeps every gap |
| `moves_that_meet_join_smoothly` | Moves that meet join without a jerk |
| `shift_keeps_line`, `half_turn_keeps_line`, `reflect_keeps_line` | These tools keep a line straight and evenly spaced |
| `shift_upstage_keeps_mirror`, `half_turn_keeps_mirror`, `reflect_keeps_mirror` | These tools keep a left-right mirror |
| `shift_keeps_order` | Shifting keeps who is to whose left |
| `reflect_keeps_gap`, `half_turn_keeps_gap`, `shift_keeps_gap` | These tools never change a gap between two positions |
| `separate_halves_never_clash` | Two routines kept apart across a line, by at least the gap, can't clash with each other |

The transformation panel names these before Lean checks the new routine. Lean then checks the actual result, so the theorems explain the outcome rather than replace the check.

## Stress test (`Choreo/Stress.lean`)

Each sabotaged or harmless version gets its own generated Lean file and its own kernel run. Nothing is decided in the browser. There are three kinds of result, and the app shows which:

| Result | The theorem Lean accepted | Used for |
|---|---|---|
| Refuted | The claim is false: `¬ PhaseSpec …`, `¬ MusicalityProved …`, `¬ Ask.Holds …` | Collision, leaving the area, off the beat, wrong length, out of line |
| Rejected | The checker says no: `… = false` | Teleport, sprint, forged certificate, broken mirror |
| Still proved | The checks pass: `… = true` | Less space, higher limit, half tempo, mirrored routine |

If Lean won't accept the expected theorem, the row says "Lean disagreed". That happened during development: a sabotage that was too mild to break the speed limit was reported, not hidden.

## Not proved: displays and best guesses

These help you read the routine. None of them can change a verdict.

| Thing | What it is |
|---|---|
| Closest-pass numbers, gap lines, "fastest here" | Measured at sampled moments in the browser. The theorem is about the limit, not the number. |
| Drag preview | A quick browser calculation. Lean checks on drop. |
| Watch-out cues | Sampled in the browser |
| Cartoon collapse | Illustration. It starts at the moment Lean proved, and everything after is comedy. |
| Which rows, columns and mirrors a frame has (`detectRules`) | Found by the planner, then proved. A rule it doesn't list isn't claimed. |
| Reading your prompt | Keywords, not understanding. The proof is about the requests listed. |
| Debugger suggestions, transformation predictions | Ideas. Each candidate goes through Lean on its own, and only Lean's answer counts. |
| Gap explorer crosses | About these exact paths. They don't show that no other arrangement could manage that gap. |
| Song tempo | A best guess. Lean proves landing on the beat grid at that tempo, not that the guess matches the song. |
| Difficulty labels and step names | Editorial. Lean proves the paths, not that a move counts as a good thumka. |
| Eight-count sections in the Studio | A division of the timeline. Lean proves beats, not eights. A section's tick reports the routine's proof. |
| Drawing and sound | Unverified browser code. `selfTest` can compare drawn positions with Lean's values. |

## What the model doesn't say

Dancers are moving points with a required gap between centres. Nothing here proves that a human body fits, that arms clear, or that a person can dance this. The speed limit is a number you can reason about, and it doesn't describe anyone's physical ability.

## A technical failure isn't a verdict

`verified`, `refuted` and `not_proved` are results about the routine. `timeout` and `error` are problems with the check, and the app says so: "No verdict". Tests cover this in `app/tests/` and `scripts/e2e.cjs`.

## Limits worth knowing

- Comparator judges the fixed demo routine and the general theorems. Routines made live are checked by the kernel, not by Comparator.
- `TransitionValid` is generated for moves between formations. Phases of dancing in place are covered by `ph{k}_ok` and the three parts.
- A verified routine says nothing about a later edit: an edit goes to "not checked" until you press Verify, and old proofs are tied to their own fingerprint.
- A kernel-proved refutation exists for collisions, leaving the area and broken end-of-move lines. A failure of another kind, such as speed, says "Not proved" and gives no theorem that it's wrong.
