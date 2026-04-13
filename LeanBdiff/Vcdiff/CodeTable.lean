/-
  Default VCDIFF code table (RFC 3284).

  256 entries mapping opcode bytes to pairs of half-instructions.
  Layout:
    0       : RUN size=0 / NOOP
    1       : ADD size=0 / NOOP
    2-18    : ADD size=1..17 / NOOP
    19-162  : COPY (16 entries per mode × 9 modes) / NOOP
    163-246 : ADD size=1..4 / COPY size=4..6 mode=0..5 or size=4 mode=6..8 (mode outer, addSz mid, copySz inner)
    247-255 : COPY size=4 mode=0..8 / ADD size=1
-/
import LeanBdiff.Vcdiff.Defs

namespace LeanBdiff.Vcdiff.CodeTable

open LeanBdiff.Vcdiff

private def noop : HalfInst := ⟨.noop, 0⟩

private def mkAdd (size : Nat) : HalfInst := ⟨.add, size⟩

private def mkRun (size : Nat) : HalfInst := ⟨.run, size⟩

private def mkCopy (size : Nat) (mode : UInt8) : HalfInst := ⟨.copy mode, size⟩

/-- Build the default 256-entry code table per RFC 3284. -/
private def buildDefaultTable : Array CodeTableEntry := Id.run do
  let mut table : Array CodeTableEntry := Array.mkEmpty 256

  -- Index 0: RUN size=0 / NOOP
  table := table.push ⟨mkRun 0, noop⟩

  -- Index 1: ADD size=0 / NOOP
  table := table.push ⟨mkAdd 0, noop⟩

  -- Index 2-18: ADD size=1..17 / NOOP
  for s in [1:18] do
    table := table.push ⟨mkAdd s, noop⟩

  -- Index 19-162: COPY instructions, 16 entries per mode, 9 modes
  -- For each mode 0..8:
  --   First entry: COPY size=0 (read from stream)
  --   Next 15 entries: COPY size=4..18
  for m in [0:9] do
    table := table.push ⟨mkCopy 0 m.toUInt8, noop⟩
    for s in [4:19] do
      table := table.push ⟨mkCopy s m.toUInt8, noop⟩

  -- Index 163-234: ADD size=1..4 / COPY size=4..6, mode=0..5
  -- 6 modes × 4 add sizes × 3 copy sizes = 72 entries
  -- Per RFC 3284: mode outermost, addSz middle, copySz innermost
  for m in [0:6] do
    for addSz in [1:5] do
      for copySz in [4:7] do
        table := table.push ⟨mkAdd addSz, mkCopy copySz m.toUInt8⟩

  -- Index 235-246: ADD size=1..4 / COPY size=4, mode=6..8
  -- 3 modes × 4 add sizes = 12 entries
  for m in [6:9] do
    for addSz in [1:5] do
      table := table.push ⟨mkAdd addSz, mkCopy 4 m.toUInt8⟩

  -- Index 247-255: COPY size=4, mode=0..8 / ADD size=1
  for m in [0:9] do
    table := table.push ⟨mkCopy 4 m.toUInt8, mkAdd 1⟩

  table

/-- The default VCDIFF code table. Cached as a definition. -/
def defaultTable : Array CodeTableEntry := buildDefaultTable

/-- Look up an opcode in the default code table. -/
@[inline] def lookup (opcode : UInt8) : CodeTableEntry :=
  defaultTable[opcode.toNat]!

end LeanBdiff.Vcdiff.CodeTable
