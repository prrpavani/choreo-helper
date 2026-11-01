# The demo

**The story:** two formations can both be correct, and the walk between them can still crash. Choreo plans dancers coming on and going off, and Lean proves nobody runs into anybody.

1. Open the Studio. Type a loose idea: "A fancy bhangra piece for eight dancers, 90 seconds. Half wait off stage." Press Make it and prove it.
2. Top view: press play. The strip along the bottom shows the four proofs live.
3. Right panel, Crossings: open the Cast change. Press See the crash Lean rejected, and it plays in Top view, 3D and Spacetime. Press Back to the safe version.
4. Formations: a filmstrip of every formation. Drag a dancer or a diamond on a path. It says Not checked until you press Verify.
5. Proofs tab: Explain it has a 30-second script to read out. The four proofs names each theorem. How they fail shows the exact dancers and moment.
6. Change it: back to the prompt page. Say "add a spiral" and it is proved again, with the old version in History.

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
