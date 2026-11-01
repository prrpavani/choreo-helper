# Choreo

> A choreography editor where routines are programs, and safety is inherited from general Lean theorems about their operations. See `docs/architecture-audit.md` for exactly what is proved, what is computed, and what is not. Sections below that mention formation or musicality describe the older Lean library only.

**Create a dance. Understand its movement. Prove its choreography. Bring it to life.**

A love letter to the Bollywood fusion circuit: to bhangra, raas, kuthu and South Indian sets, to the Desi Dance Network community, and to every captain counting eights at midnight in a borrowed studio. It's an independent project, not affiliated with or endorsed by any circuit, competition or team, and all routines and artwork are original.

It is also an argument: formal methods can be for everybody. A choreographer never has to read a line of Lean to get a real mathematical proof that nobody collides, and an expert can inspect exactly why.

Type something like *"in a five minute routine, four dancers come from stage left and four from
stage right, form a grid of four by two, flip lines, then leave in new lines."* Choreo plans the
routine, sets it to music and shows it from above, from the audience, and as one shape in space and
time. Lean then proves that this exact routine is safe and does what you asked, at every instant.

```
make install
make run        # opens http://localhost:4173
```

You need `curl`, Node 20 or newer, and a C toolchain. `make install` fetches Lean if it's missing.

## What's in the app

- **Home and Explore:** routines by style (Bollywood fusion, bhangra, raas, kuthu, South Indian fusion, hip-hop, contemporary fusion), each proved by `make verify`.
- **Learn:** learn a routine in **8-Count Breakdown**: jump, replay and loop any eight, slow it to half speed, mirror it like a studio mirror, take a count-in, pick your dancer, see who passes near you, and mark sections mastered.
- **Studio:** opens on *Midnight in Motion*. Describe a routine, or start with a blank stage: account for everyone in Formation 1, on stage or in the wings, press ＋ for the next formation, and drag whoever changes. Then Verify. Views: Formations, Top view, 3D, Spacetime, Movie.
- **Debugger:** step through a failure count by count, then ask for the smallest fix. Each candidate is proved or refuted on its own.
- **Stress test:** Choreo sabotages the routine and tries harmless changes too. Lean's kernel has to tell them apart.
- **Transformations and history:** see which guarantees a change should keep and why, check it, and compare any two versions.
- **Movie:** a film of the kernel's verdict, which only runs once the kernel has answered.
- **Team and Profile:** your line-up's names appear in every routine and proof. Progress is real and stays in your browser. There are no accounts.

See [`DEMO.md`](DEMO.md) for the five-minute demo. There are no competitions or rankings, on purpose: the project has no real data for them, and it won't invent any.

## Things to try

**Offstage meets onstage.** Choose that example, or type something like *"four dancers onstage in row B, two
dancers from stage left and two from stage right come in to row D."* You get the **Formations** view: a stage
marked in rows A to E and columns 1 to 9, with marked places in the wings.

- Click a dancer, a row letter or a column number. The panel shows what Lean checks for them: their
  formation rules, how close they get to every other dancer, the curve for each pair, and the exact
  check the kernel ran.
- Drag a dancer to another place. If they would land in another dancer's way, Lean proves the clash and
  marks it on the grid. If only the shape is off, Lean proves the row is broken (`formation_is_broken`).
- Choose **Accept as the new shape** to make your edit the new formation.

**A whole routine.**

1. Press **Compose and prove** and watch the verdict arrive. Lean also turns down the planner's first
   idea, walking the lines straight through each other, and proves it unsafe.
2. Press play. The music follows the routine: each move lands on a hit.
3. Switch between **Stage**, **Theatre** and **Spacetime**. In Spacetime, time runs upward and each tube
   is a dancer. Two tubes touching would be a collision.
4. Follow the stage strip above the view. Each stage of the dance gets a tick once Lean has proved it,
   and the panel on the right lists what was proved for the stage you're watching.
5. Drag a dancer. A safe move stays proved, and the panel shows your closest pass. Drag one onto another,
   or press **Try to break it**, and Lean proves the routine unsafe and jumps to the exact moment.
6. Choose **Use my own song**. Choreo finds the tempo, and Lean proves every move lands on those beats.

## Checking it yourself

```
make verify       # builds, rejects anything that weakens a proof, audits axioms, proves every routine
make test         # frontend tests
make e2e          # rehearses the whole demo with the real kernel in a browser (needs make run going, and Chrome)
make comparator   # Lean's Comparator, in a Linux container (needs Docker)
```

[`docs/verification.md`](docs/verification.md) lists every guarantee, its theorem, its assumptions, and what is only a display.

## What is proved

The main statement is `Verified K routine asks` in [`lean/Choreo/Intent.lean`](lean/Choreo/Intent.lean).
`K` is any ordered number system, so the result covers every instant, not a set of frames.

| Property | In plain words | Where |
|---|---|---|
| No collisions | Every pair stays at least 60 cm apart, centre to centre | `RoutineSpec.noCollision` |
| On stage | Everyone stays inside the allowed area; `staysIn` requests say when that means the stage alone | `RoutineSpec.onStage`, `Ask.staysIn` |
| Speed limit | Nobody moves faster than 3.5 m/s | `PhaseSpec.speedLimit` |
| No teleporting | Position and velocity match where phases meet | `RoutineSpec.continuous` |
| On the music | Phases start and end on beats; the length is exact | `RoutineSpec.onBeat`, `duration` |
| What you asked for | Who starts where, which shape forms, lines trade places, shapes hold exactly | `Ask.Holds` |
| Formation geometry | Rows and columns stay straight and evenly spaced, at every instant; left-right symmetry | `Ask.keepsLine`, `endsInLine`, `endsMirrored` |

Some rules hold for any positions at all, not only one routine (`Choreo/Recipes.lean`): for example,
`different_rows_never_clash` shows a dancer entering along an empty row can't clash with anyone in another
row, and `swapping_along_a_line_always_collides` shows why the planner's first idea can't work.

When a routine fails, the app shows a theorem that it is wrong (`refute_quick`, `refute_stage`, `refute_line`),
built from a concrete moment or a pair out of place. A failed check on its own only means "not proved", and the app says so.

## How it works

Everything that decides what is true is written in Lean.

1. `Choreo/Prompt.lean` reads your text into moves. The app shows back what it understood.
2. `Choreo/Planner.lean` proposes paths, runs the checker, and revises when the checker says no.
3. `Choreo/Emit.lean` writes a `.lean` file for this routine and JSON for the animation.
4. `lean` checks that file. `decide +kernel` makes the kernel run `Phase.check` on the exact paths,
   and `Routine.verified` turns that into the statement above.
5. `server/index.mjs` reports "proved" only if there are no errors, only standard axioms, and a
   fingerprint matching the animation data. If any of that fails, the app says "Not proved".

Each path is a rational Bézier curve with whole-number coefficients. The checker uses a fact about
such curves: a curve can't go below its lowest coefficient. If that test is inconclusive, it splits
time in half and repeats, so it covers every moment with finitely many exact calculations.

## What you have to trust

- **Lean's kernel**, plus the axioms `propext`, `Classical.choice` and `Quot.sound`. There is no
  `sorry` in the proofs, no `native_decide`, and no added axiom. `lean/Challenge.lean` holds `sorry`
  on purpose: it is the statement file for Comparator, and is proved by `lean/Solution.lean`.
- **The specification:** `Model.lean`, the spec part of `Routine.lean`, and `Intent.lean`. These define
  what the theorems mean, so read them first. `Choreo/Examples.lean` tests them: the statements can
  be met, and bad routines are rejected. `#spec_surface` there lists every definition involved.

Not trusted: the planner, prompt reader, emitter and server. A bug in them can give a bad or rejected
routine, but not a false proof.

## What is not proved

- **Rule detection.** Choreo works out which rows and symmetries a formation has, then locks them. The
  proof covers the rules it lists, so a rule it didn't list isn't claimed.
- **Real bodies.** Dancers are moving points needing 60 cm between centres. Arms, slips and timing
  errors aren't modelled, and "too close" is about being in the same place at the same time.
- **The browser's drawing and sound.** The TypeScript that draws them isn't verified. `selfTest` in
  `app/src/lib/routine.ts` can compare its positions with exact values from Lean. The server compares
  the fingerprint from the Lean file with the one in the animation data.
- **Your song's tempo.** Finding the tempo is a best guess. Lean proves the moves land on the beat grid
  at that tempo, not that the guess matches the song.
- **The reading of your words.** Lean proves the requests listed in the app, not your intent. The app
  lists them so you can spot a wrong reading. The prompt reader works from keywords, and is no AI model.

## Comparator status

`lake comparator` accepts the solution. It judges the statements in `lean/Challenge.lean`: the soundness
theorem, the composition of the three parts, the transition theorem, the demo routine from
`lean/demo-request.json`, the unsafe first idea, and two rules that hold for any positions. Only the three standard axioms are permitted.

Its sandbox needs Linux, so on macOS run it in a container: `scripts/comparator-docker.sh`. The script gives the
container extra permissions so the sandbox can start. Comparator covers that fixed demo routine; each routine you
make in the app gets its own proof file, checked by Lean's kernel but not run through Comparator.

## Layout

```
lean/Choreo/Poly.lean        polynomials and the "lowest coefficient" rule
lean/Choreo/Model.lean       SPEC: paths, phases, what safe means for a phase
lean/Choreo/Check.lean       the checker
lean/Choreo/Sound.lean       proof: the checker passing implies the phase spec
lean/Choreo/Routine.lean     SPEC and proof for whole routines
lean/Choreo/Intent.lean      SPEC and proof for what was asked
lean/Choreo/Compose.lean     SPEC and proof: formation, movement, musicality, transitions, and how they combine
lean/Choreo/Refute.lean      proofs that a routine is unsafe
lean/Choreo/QuickRefute.lean the same, using whole numbers
lean/Choreo/Calculus.lean    proof: the speed limit uses the true derivative
lean/Choreo/Recipes.lean     proofs about the planner's moves, for any positions
lean/Choreo/Stress.lean      untrusted: generates the stress test
lean/Choreo/Examples.lean    tests of the spec
lean/Choreo/Prompt.lean, Planner.lean, Scene.lean, Build.lean, Source.lean, Emit.lean   untrusted planning
app/                         the interface (React, Three.js, Web Audio)
server/                      runs Lean and streams results
```
