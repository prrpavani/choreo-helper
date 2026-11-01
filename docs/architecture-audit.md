# Audit: where formal methods do real work

Written after reading the Lean, server and frontend code. It says what is proved, what is only computed or
shown, and what was wrong before this refactor.

## How a program becomes a proof

1. **Editor:** the app stores a program (`app/src/lib/program.ts`, `data/programs.json`). The frontend computes no positions for it.
2. **Compile:** `lean/Choreo/Program.lean` turns it into `Step`s of `Op`s, the language in `Language.lean`. Not trusted.
3. **Generate:** `Emit.lean` writes one Lean file for that exact program.
4. **Check:** the server runs Lean. The result reaches the UI only as markers printed by theorems that compiled.
5. **Render:** the animation evaluates the path formulas Lean produced. The browser converts those exact numbers to floats only to draw them. `program_plays_this_routine` proves the program's phases are the routine's phases; the fingerprint ties the animation to the checked file.

The floating-point step in the browser and the 3D rendering are not verified.

## The three capabilities

| Capability | Theorems | Inputs it needs from a routine |
|---|---|---|
| General proofs | `Algebra.routine_preserves_collision_freedom`, `turning_keeps_the_gap`, `same_shift_same_gap` | One check of the starting formation |
| Continuous reasoning | `separation_is_quadratic_on_stage`, `linear_pair_safe`, `step_k_collision` | Each pair's exact quadratic, per independent move |
| Composition | `Triple.seq`, `Step.triple`, `Prog.run_of_allRun`, `specs_of_run`, `movement_of_specs` | Each step's contract |

## What was wrong, and what changed

| Finding | Before | Now |
|---|---|---|
| Every phase re-checked pair by pair | `Phase.check` on each phase, by Bernstein bounds. Exact, but a per-routine calculation | Programs derive whole-routine safety from their movements (`STRUCTURAL`). No phase proof is generated |
| Rotation proved about a different function | `turning_preserves_distance` covers an abstract rotation, while the app plays `rotatePath`, checked per pair | `turning_keeps_the_gap` is about `rotatePath` itself, for any positions |
| Independent moves | Bernstein subdivision of a polynomial, with a depth limit, so it could say "unknown" | The exact lowest point of a quadratic, which always decides |
| Collisions | A witness time found by scanning, then proved | Also an exact point `u` on the path with a kernel-checked `step_k_collision` |
| Claims the product no longer makes | Formation, musicality and "requests" counted as proofs | Removed from the UI. See "still imperfect" |
| "Proved" for general theorems was hardcoded in the UI | `status: 'proved'` | Comes from `general_results_in_force` compiling in this routine's file |
| Two ideas of a routine | Prompt plans and hand scenes bypassed any contract | Programs are canonical. Prompts still use the older pipeline: see below |

## Still imperfect

- **Prompt routines** use the older pipeline: `Phase.check` on every phase. It covers every instant and is sound, but it is a per-routine calculation, with no contracts. Only programs have the structural proof.
- **Fallback:** if a movement in a program fails its rule, that file falls back to per-phase checks so it can produce a refutation.
- **Two number systems:** `Algebra` uses `Rat`; the path layer proves over any ordered field with whole-number data. They are linked at formations by `run_k_lands_on_stage`, not by a shared definition of the path.
- **Speed and bounds** are still computed per dancer (`Phase.checkPaths`). Isometries do not preserve bounds, so this is required, not a shortcut. No general speed theorem exists.
- **Velocity at joins** is checked concretely, in `checkMovement`. `Run` itself guarantees position continuity only.
- **Forgiving theorem:** position drift only, and on prompt routines only. "Late" is not modelled.
- **Comparator's statements** still include `Verified`, which has formation and musicality in it, because `checker_is_sound` and the demo routine use it.
- **`linearClear` in `Motion/Trajectory.lean`** is the Rat version. The engine uses `linearPairClear`, proved over any ordered field, because that is what `PhaseSpec` needs.
- **Display numbers:** gauges and crossing distances are measured in the browser for display. Only the marks come from Lean.
- **The director** reads keywords in TypeScript, separately from Lean's prompt reader, so they can disagree about words. Neither is trusted.

## Theorem inventory (main results)

| File | Theorem | Says | General? |
|---|---|---|---|
| `Sound.lean` | `Phase.sound` | Passing the checker implies the phase spec, at every instant, in any ordered field | Yes |
| `Language.lean` | `Triple.seq`, `Triple.consequence`, `Triple.rep` | Hoare composition rules | Yes |
| `Language.lean` | `Op.sound`, `Step.triple` | An enabled movement is safe and lands where it says | Yes |
| `Language.lean` | `slide_pair_safe`, `par_pair_safe`, `linear_pair_safe` | The rules behind exchanges, parallel moves and independent moves | Yes |
| `Language.lean` | `specs_of_run`, `Prog.run_of_allRun` | A routine inherits safety from its program | Yes |
| `RotationPath.lean` | `turning_keeps_the_gap`, `turn_stays_on_circle` | Rotation, about the real path function | Yes |
| `Composition.lean` | `routine_is_isometry`, `routine_preserves_collision_freedom` | Any routine of isometries keeps collision freedom | Yes, any length and any number of dancers |
| `Transform/*.lean` | `rotate_composition`, `scale_pairwise_distance`, and others | The movement algebra over exact rationals | Yes |
| `Motion/Trajectory.lean` | `separation_is_quadratic`, `lerp_start`, `lerp_end`, `sequential_continuity` | Straight paths | Yes |
| `Tolerance.lean` | `Routine.forgiving` | Any real performance within `e` of the plan keeps `B` | Yes |
| `Recipes.lean` | `swapping_along_a_line_always_collides` and others | Facts about moves for any positions | Yes |
| Generated | `step_k_ok`, `program_ok`, `run_k_valid`, `routine_moves_safely`, `step_k_collision` | This exact routine | Specific, built from the general ones |
