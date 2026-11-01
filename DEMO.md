# The demo: Parallel Lines

**The idea:** a creative tool whose correctness is inherited from the mathematics of its operations, rather than approximated by testing.

Open the Studio on the gallery, and open **Parallel Lines**. Eight dancers.

1. **A valid formation.** Verify shows "Start: each pair checked once".
2. **Rotate 90°.** Select it in the sequence. "Inherited from a theorem": because rotation keeps every distance, and the start was collision-free, so is this. Open "How this connects to Lean": Rotate 90° → `rotatePath` → `turning_keeps_the_gap`. No frames are checked.
3. **Translate and Reflect.** The same inheritance. Reflect says why it is different: it can't be one rigid motion, so dancers walk across in their own lanes.
4. **Split into Two Groups.** Dancers are on their own paths now, so a collision is possible. The panel shows the real parabola for the closest pair, and its exact lowest point. Every instant, no sampling.
5. **Break it.** Change Split's formation to "Two Dancers Trade Places" and press Verify. Both formations are valid, and the walk collides. Verify shows Disproven: Ben and Ana, at exactly 1/2 of the way through, with the Lean theorem.
6. **Repair it.** Change it back to "Split Apart" and press Verify. Proved again.

Then show **Fracture / Reunion**: move "Line between groups" and verify. Movement is safe, and the contract fails. That is a different failure from a collision.

The dancer count is a setting. The general theorems hold for any number of dancers; at 12 and 16 in this routine, Reflect's lane requirement fails, and Lean says so.

## Starting clean

Open `http://localhost:4173/#/fresh` to clear saved progress, team names and records in this browser and open the studio on Midnight in Motion. Close other Choreo tabs first.

## Say this precisely

- "Every instant of the modeled movement." Dancers are points 90 cm apart, centre to centre. It doesn't prove a real body can do it.
- A stress-test row marked **Refuted** means Lean proved the claim false. **Rejected** means Lean proved the checker says no, which is weaker.
- Comparator judges the general theorems and one fixed demo routine. Routines made live are checked by the kernel.
- The reading of a prompt, the suggestions and the previews aren't trusted. Only the kernel's answer changes a result.

## If something goes wrong

- Stage looks stale: reload. It reloads Midnight in Motion.
- Lean is slow: quit Docker and anything heavy. A check takes a few seconds on a quiet machine.
- It says "No verdict": that's a problem with the check and not a result. Reload and verify again.
