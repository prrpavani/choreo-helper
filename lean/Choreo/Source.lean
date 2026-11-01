import Choreo.Compose
/-!
# Writing a routine as Lean source

Used by the planner and by every generated proof file, so that the fingerprint in the proof is
computed from the routine the kernel checked.
-/
namespace Choreo

def intL (i : Int) : String := if i < 0 then s!"({i})" else toString i
def listL (f : α → String) (l : List α) : String := "[" ++ ", ".intercalate (l.map f) ++ "]"
def polyL (p : Poly) : String := listL intL p
def boolL (b : Bool) : String := if b then "true" else "false"
def rectL (r : Rect) : String := s!"⟨{intL r.xmin}, {intL r.xmax}, {intL r.ymin}, {intL r.ymax}⟩"
def pathL (p : Path) : String := s!"⟨{polyL p.X}, {polyL p.Y}, {polyL p.W}⟩"
def slotL (s : Slot) : String := s!"⟨{intL s.x}, {intL s.y}, {intL s.w}⟩"
def natsL (l : List Nat) : String := listL toString l

def certL : Cert → String
  | .sep x p d => s!"(.sep {boolL x} {boolL p} {d})"
  | .bern d => s!"(.bern {d})"
  | .offset x y => s!"(.offset {intL x} {intL y})"
  | .fixed n => s!"(.fixed {intL n})"

def formationL : Formation → String
  | .grid x y dx dy r c => s!"(.grid {intL x} {intL y} {intL dx} {intL dy} {r} {c})"
  | .line x y dx dy n => s!"(.line {intL x} {intL y} {intL dx} {intL dy} {n})"
  | .circle x y r pts => s!"(.circle {intL x} {intL y} {intL r} {listL slotL pts})"
  | .free pts => s!"(.free {listL slotL pts})"

def linkL (l : Link) : String := s!"⟨{l.leader}, {l.member}, {intL l.dx}, {intL l.dy}⟩"

def askL : Ask → String
  | .startsIn k d b => s!"(.startsIn {k} {natsL d} {rectL b})"
  | .endsIn k d b => s!"(.endsIn {k} {natsL d} {rectL b})"
  | .staysIn k b => s!"(.staysIn {k} {rectL b})"
  | .forms k f a => s!"(.forms {k} {formationL f} {natsL a})"
  | .flips a b d m => s!"(.flips {a} {b} {natsL d} {intL m})"
  | .keepsShape k ls => s!"(.keepsShape {k} {listL linkL ls})"
  | .staysOnCircle k d x y r => s!"(.staysOnCircle {k} {natsL d} {intL x} {intL y} {intL r})"
  | .keepsLine k d x y => s!"(.keepsLine {k} {natsL d} {intL x} {intL y})"
  | .endsInLine k d x y => s!"(.endsInLine {k} {natsL d} {intL x} {intL y})"
  | .endsMirrored k ps m => s!"(.endsMirrored {k} {listL (fun (p : Nat × Nat) => s!"({p.1}, {p.2})") ps} {intL m})"

def phaseL (ph : Phase) : String :=
  let rigid := listL (fun (r : RigidPair) => s!"⟨{r.i}, {r.j}, {intL r.num}, {intL r.den}⟩") ph.rigid
  let orbits := listL (fun (o : Orbit) => s!"⟨{o.i}, {intL o.cx}, {intL o.cy}, {intL o.r2}⟩") ph.orbits
  s!"\{ t0 := {ph.t0}, t1 := {ph.t1}, bounds := {rectL ph.bounds}, paths := {listL pathL ph.paths}, certs := {listL certL ph.certs}, rigid := {rigid}, orbits := {orbits}, target := none }"

def configL (c : Config) : String :=
  s!"\{ n := {c.n}, dmin := {intL c.dmin}, vmax := {intL c.vmax}, stage := {rectL c.stage}, ticksPerBeat := {c.ticksPerBeat}, bpmNum := {c.bpmNum}, bpmDen := {c.bpmDen}, total := {c.total}, seconds := {c.seconds} }"

/-- A fingerprint of a routine's exact contents. -/
def Routine.fingerprint (r : Routine) : String :=
  let s := configL r.cfg ++ String.join (r.phases.map phaseL)
  let h : UInt64 := hash s
  let hex := String.ofList (Nat.toDigits 16 h.toNat)
  hex

def transitionL (t : Transition) : String :=
  s!"⟨{t.first}, {t.last}, {listL slotL t.start}, {listL slotL t.finish}⟩"

/-- A phase's contents, leaving out when it happens. -/
def phaseKey (ph : Phase) : String :=
  phaseL { ph with t0 := 0, t1 := ph.t1 - ph.t0 }

end Choreo
