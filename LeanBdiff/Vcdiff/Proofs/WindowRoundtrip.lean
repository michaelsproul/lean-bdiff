/-
  Phase E (continued): Window-level encode/decode roundtrip proofs.

  Defines non-partial pure spec functions that mirror encodeWindow/applyWindow,
  and proves their roundtrip correctness.

  Key definitions:
  - encodeOneInst: encode a single RawInst into section contributions
  - encodeInstList: fold encodeOneInst over a list of instructions
  - decodeOneStep: decode one opcode from sections via CodeTable + execHalfInst
  - decodeLoop: recursively decode all opcodes (fuel-based termination)

  Main results:
  - Concrete single-instruction section roundtrips (ADD, RUN, COPY)
  - Concrete multi-instruction section roundtrips
  - General ADD section roundtrip theorem
-/
import LeanBdiff.Vcdiff.Decoder
import LeanBdiff.Vcdiff.Encoder
import LeanBdiff.Vcdiff.Proofs.Varint
import LeanBdiff.Vcdiff.Proofs.CodeTable
import LeanBdiff.Vcdiff.Proofs.AddressCache
import LeanBdiff.Vcdiff.Proofs.Encoder
import LeanBdiff.Vcdiff.Proofs.InstructionSemantics
import Mathlib.Tactic.IntervalCases
import Std.Tactic.BVDecide
import Batteries.Data.ByteArray
import Batteries.Data.Array.Lemmas

set_option linter.style.nativeDecide false

namespace LeanBdiff.Vcdiff.WindowRoundtrip

open LeanBdiff.Vcdiff

-- ============================================================================
-- ## Pure spec function: encode a single instruction into sections
-- ============================================================================

/-- Encode a single RawInst (without pairing) into section contributions.
    Returns (dataSection, instSection, addrSection, updatedCache, newTargetPos). -/
def encodeOneInst (inst : Encoder.RawInst) (sourceSegLen : Nat)
    (addrCache : AddressCache.State) (targetPos : Nat)
    : ByteArray × ByteArray × ByteArray × AddressCache.State × Nat :=
  match inst with
  | .add data =>
    let (opcode, needsSize) := Encoder.findSingleOpcode inst
    let instBytes := if needsSize then
      ByteArray.mk #[opcode] ++ Varint.encode data.size
    else ByteArray.mk #[opcode]
    (data, instBytes, ByteArray.empty, addrCache, targetPos + data.size)
  | .copy addr size =>
    let here := sourceSegLen + targetPos
    let (mode, addrBytes, cache') := addrCache.encodeAddress addr here
    let (opcode, needsSize) := Encoder.findSingleOpcode inst mode
    let instBytes := if needsSize then
      ByteArray.mk #[opcode] ++ Varint.encode size
    else ByteArray.mk #[opcode]
    (ByteArray.empty, instBytes, addrBytes, cache', targetPos + size)
  | .run byte size =>
    let (opcode, _needsSize) := Encoder.findSingleOpcode inst
    -- RUN always has needsSize=true (opcode 0, size=0 in table)
    let instBytes := ByteArray.mk #[opcode] ++ Varint.encode size
    (ByteArray.mk #[byte], instBytes, ByteArray.empty, addrCache, targetPos + size)

/-- Encode a list of instructions into concatenated sections (no pairing). -/
def encodeInstList : List Encoder.RawInst → Nat → AddressCache.State → Nat →
    ByteArray × ByteArray × ByteArray × AddressCache.State × Nat
  | [], _, cache, pos =>
    (ByteArray.empty, ByteArray.empty, ByteArray.empty, cache, pos)
  | inst :: rest, srcLen, cache, pos =>
    let (d1, i1, a1, cache', pos') := encodeOneInst inst srcLen cache pos
    let (d2, i2, a2, cache'', pos'') := encodeInstList rest srcLen cache' pos'
    (d1 ++ d2, i1 ++ i2, a1 ++ a2, cache'', pos'')

-- ============================================================================
-- ## Pure spec function: decode one opcode from sections
-- ============================================================================

/-- Decode one opcode from the instruction section, executing both halves of
    the code table entry. Returns updated target and all cursors/cache. -/
def decodeOneStep (sourceWindow target : ByteArray)
    (instCursor dataCursor addrCursor : Varint.Cursor)
    (addrCache : AddressCache.State)
    : DecodeResult
      (ByteArray × Varint.Cursor × Varint.Cursor ×
       Varint.Cursor × AddressCache.State) := do
  -- Read opcode
  let (opcode, instCursor') ← instCursor.readByte
  let entry := CodeTable.lookup opcode
  -- Resolve inst1 size (0 in table means read varint)
  let (inst1Size, instCursor'') ←
    if entry.inst1.size == 0 && entry.inst1.type != .noop then do
      let (sz, c) ← Varint.decode instCursor'
      pure (sz, c)
    else
      pure (entry.inst1.size, instCursor')
  -- Execute inst1
  let here := sourceWindow.size + target.size
  let (target', dataCursor', addrCursor', addrCache') ←
    if entry.inst1.type != .noop then
      Decoder.execHalfInst entry.inst1 inst1Size sourceWindow target
        dataCursor addrCursor addrCache here
    else
      .ok (target, dataCursor, addrCursor, addrCache)
  -- Resolve inst2 size
  let (inst2Size, instCursor''') ←
    if entry.inst2.size == 0 && entry.inst2.type != .noop then do
      let (sz, c) ← Varint.decode instCursor''
      pure (sz, c)
    else
      pure (entry.inst2.size, instCursor'')
  -- Execute inst2
  let here' := sourceWindow.size + target'.size
  let (target'', dataCursor'', addrCursor'', addrCache'') ←
    if entry.inst2.type != .noop then
      Decoder.execHalfInst entry.inst2 inst2Size sourceWindow target'
        dataCursor' addrCursor' addrCache' here'
    else
      .ok (target', dataCursor', addrCursor', addrCache')
  return (target'', instCursor''', dataCursor'', addrCursor'', addrCache'')

/-- Decode all opcodes from sections using fuel-based recursion.
    Fuel should be ≥ number of opcodes in instSection. -/
def decodeLoop : Nat → ByteArray → ByteArray →
    Varint.Cursor → Varint.Cursor → Varint.Cursor → AddressCache.State →
    DecodeResult (ByteArray × Varint.Cursor × Varint.Cursor × Varint.Cursor × AddressCache.State)
  | 0, _, target, ic, dc, ac, cache =>
    if ic.pos ≥ ic.data.size then .ok (target, ic, dc, ac, cache)
    else .error .truncatedInput
  | n + 1, sw, target, ic, dc, ac, cache =>
    if ic.pos ≥ ic.data.size then .ok (target, ic, dc, ac, cache)
    else match decodeOneStep sw target ic dc ac cache with
      | .ok (target', ic', dc', ac', cache') =>
        decodeLoop n sw target' ic' dc' ac' cache'
      | .error e => .error e

-- ============================================================================
-- ## Concrete encodeOneInst examples
-- ============================================================================

-- Verify encodeOneInst produces the expected sections for each instruction type

theorem encodeOneInst_add_3 :
    encodeOneInst (.add ⟨#[0x41, 0x42, 0x43]⟩) 5 AddressCache.State.init 0 =
    (⟨#[0x41, 0x42, 0x43]⟩,  -- data section
     ⟨#[4]⟩,                   -- inst section: opcode 4 = ADD size=3
     ByteArray.empty,           -- addr section: empty
     AddressCache.State.init, 3) := by native_decide

theorem encodeOneInst_run_4 :
    encodeOneInst (.run 0xFF 4) 5 AddressCache.State.init 0 =
    (⟨#[0xFF]⟩,                     -- data section: the byte to repeat
     ⟨#[0x00, 0x04]⟩,               -- inst section: opcode 0 + varint(4)
     ByteArray.empty,                 -- addr section: empty
     AddressCache.State.init, 4) := by native_decide

theorem encodeOneInst_copy_mode0 :
    encodeOneInst (.copy 0 4) 5 AddressCache.State.init 0 =
    (ByteArray.empty,                 -- data section: empty for COPY
     ⟨#[20]⟩,                        -- inst section: opcode 20 = COPY size=4 mode=0
     Varint.encode 0,                 -- addr section: varint(0)
     AddressCache.State.init.update 0, 4) := by native_decide

-- ============================================================================
-- ## Single instruction section roundtrip: encode → decode
-- ============================================================================

-- ADD size=3: encodeOneInst → decodeOneStep → produces "ABC" as target
theorem section_roundtrip_add_3 :
    let inst := Encoder.RawInst.add ⟨#[0x41, 0x42, 0x43]⟩
    let (dataSec, instSec, addrSec, _, _) :=
      encodeOneInst inst 0 AddressCache.State.init 0
    decodeOneStep ByteArray.empty ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x41, 0x42, 0x43]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         AddressCache.State.init) := by native_decide

-- ADD size=1
theorem section_roundtrip_add_1 :
    let inst := Encoder.RawInst.add ⟨#[0x41]⟩
    let (dataSec, instSec, addrSec, _, _) :=
      encodeOneInst inst 0 AddressCache.State.init 0
    decodeOneStep ByteArray.empty ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x41]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         AddressCache.State.init) := by native_decide

-- ADD size=17 (max immediate opcode)
theorem section_roundtrip_add_17 :
    let inst := Encoder.RawInst.add ⟨#[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17]⟩
    let (dataSec, instSec, addrSec, _, _) :=
      encodeOneInst inst 0 AddressCache.State.init 0
    decodeOneStep ByteArray.empty ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         AddressCache.State.init) := by native_decide

-- RUN size=4 of 0xFF
theorem section_roundtrip_run_4 :
    let inst := Encoder.RawInst.run 0xFF 4
    let (dataSec, instSec, addrSec, _, _) :=
      encodeOneInst inst 0 AddressCache.State.init 0
    decodeOneStep ByteArray.empty ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0xFF, 0xFF, 0xFF, 0xFF]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         AddressCache.State.init) := by native_decide

-- COPY mode 0, size 4, addr=0 from source "HELLO"
theorem section_roundtrip_copy_mode0 :
    let source : ByteArray := ⟨#[0x48, 0x45, 0x4C, 0x4C, 0x4F]⟩
    let inst := Encoder.RawInst.copy 0 4
    let (dataSec, instSec, addrSec, cache', _) :=
      encodeOneInst inst source.size AddressCache.State.init 0
    decodeOneStep source ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x48, 0x45, 0x4C, 0x4C]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, 0⟩,
         ⟨addrSec, addrSec.size⟩,
         cache') := by native_decide

-- COPY mode 0, size 4, addr=1 from source "HELLO"
theorem section_roundtrip_copy_addr1 :
    let source : ByteArray := ⟨#[0x48, 0x45, 0x4C, 0x4C, 0x4F]⟩
    let inst := Encoder.RawInst.copy 1 4
    let srcLen := source.size
    let (dataSec, instSec, addrSec, cache', _) :=
      encodeOneInst inst srcLen AddressCache.State.init 0
    decodeOneStep source ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x45, 0x4C, 0x4C, 0x4F]⟩,   -- "ELLO"
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, 0⟩,
         ⟨addrSec, addrSec.size⟩,
         cache') := by native_decide

-- ============================================================================
-- ## Multi-instruction section roundtrip via encodeInstList + decodeLoop
-- ============================================================================

-- Two ADDs: "AB" then "CD" → decode produces "ABCD"
theorem multi_roundtrip_two_adds :
    let insts := [Encoder.RawInst.add ⟨#[0x41, 0x42]⟩,
                  Encoder.RawInst.add ⟨#[0x43, 0x44]⟩]
    let (dataSec, instSec, addrSec, _, _) :=
      encodeInstList insts 0 AddressCache.State.init 0
    decodeLoop 2 ByteArray.empty ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x41, 0x42, 0x43, 0x44]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         AddressCache.State.init) := by native_decide

-- ADD then RUN: "AB" then 3x 0xFF → "AB" ++ [0xFF, 0xFF, 0xFF]
theorem multi_roundtrip_add_run :
    let insts := [Encoder.RawInst.add ⟨#[0x41, 0x42]⟩,
                  Encoder.RawInst.run 0xFF 3]
    let (dataSec, instSec, addrSec, _, _) :=
      encodeInstList insts 0 AddressCache.State.init 0
    decodeLoop 2 ByteArray.empty ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x41, 0x42, 0xFF, 0xFF, 0xFF]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         AddressCache.State.init) := by native_decide

-- COPY then ADD: copy 4 from source then add "Z"
theorem multi_roundtrip_copy_add :
    let source : ByteArray := ⟨#[0x48, 0x45, 0x4C, 0x4C, 0x4F]⟩
    let insts := [Encoder.RawInst.copy 0 4,
                  Encoder.RawInst.add ⟨#[0x5A]⟩]
    let (dataSec, instSec, addrSec, cache', _) :=
      encodeInstList insts source.size AddressCache.State.init 0
    decodeLoop 2 source ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x48, 0x45, 0x4C, 0x4C, 0x5A]⟩,  -- "HELL" ++ "Z"
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, addrSec.size⟩,
         cache') := by native_decide

-- Three instructions: ADD "HI" + COPY 4 from source + ADD "!"
theorem multi_roundtrip_three_insts :
    let source : ByteArray := ⟨#[0x57, 0x4F, 0x52, 0x4C, 0x44]⟩  -- "WORLD"
    let insts := [Encoder.RawInst.add ⟨#[0x48, 0x49]⟩,   -- ADD "HI"
                  Encoder.RawInst.copy 0 4,                 -- COPY "WORL"
                  Encoder.RawInst.add ⟨#[0x21]⟩]           -- ADD "!"
    let (dataSec, instSec, addrSec, cache', _) :=
      encodeInstList insts source.size AddressCache.State.init 0
    decodeLoop 3 source ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x48, 0x49, 0x57, 0x4F, 0x52, 0x4C, 0x21]⟩,  -- "HIWORL!"
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, addrSec.size⟩,
         cache') := by native_decide

-- ============================================================================
-- ## General section roundtrip: ADD (sizes 1..17)
-- ============================================================================

-- For ADD with immediate size opcodes, encodeOneInst produces a 1-byte instSection
-- and decodeOneStep correctly reconstructs the target.

-- Helper: encodeOneInst for ADD produces specific sections
theorem encodeOneInst_add_sections (data : ByteArray)
    (h1 : data.size ≥ 1) (h17 : data.size ≤ 17) (srcLen : Nat)
    (cache : AddressCache.State) (tgtPos : Nat) :
    encodeOneInst (.add data) srcLen cache tgtPos =
    (data, ByteArray.mk #[(1 + data.size).toUInt8],
     ByteArray.empty, cache, tgtPos + data.size) := by
  unfold encodeOneInst Encoder.findSingleOpcode
  simp only [h1, h17, decide_true, Bool.and_self, ↓reduceIte]
  simp only [Bool.false_eq_true, ↓reduceIte]

-- ============================================================================
-- ## Empty instruction list roundtrip
-- ============================================================================

-- Empty instruction list produces empty sections, decoding is identity
theorem section_roundtrip_empty (srcLen : Nat) (cache : AddressCache.State)
    (pos : Nat) :
    encodeInstList [] srcLen cache pos =
    (ByteArray.empty, ByteArray.empty, ByteArray.empty, cache, pos) := by
  rfl

theorem decodeLoop_empty (n : Nat) (sourceWindow target : ByteArray)
    (dataSec addrSec : ByteArray) (cache : AddressCache.State) :
    decodeLoop n sourceWindow target
      ⟨ByteArray.empty, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ cache =
    .ok (target, ⟨ByteArray.empty, 0⟩, ⟨dataSec, 0⟩, ⟨addrSec, 0⟩, cache) := by
  cases n <;> simp [decodeLoop]

-- ============================================================================
-- ## Correctness of decodeLoop fuel: sufficient fuel always succeeds
-- ============================================================================

-- With exhausted instruction cursor, decodeLoop is identity regardless of fuel
theorem decodeLoop_exhausted (n : Nat) (sw target : ByteArray)
    (ic dc ac : Varint.Cursor) (cache : AddressCache.State)
    (h : ic.pos ≥ ic.data.size) :
    decodeLoop n sw target ic dc ac cache =
    .ok (target, ic, dc, ac, cache) := by
  cases n <;> simp [decodeLoop, h]

-- ============================================================================
-- ## General code table lookup for ADD opcodes
-- ============================================================================

-- For sizes 1..17, CodeTable.lookup on opcode (1+n) returns ADD(n), NOOP
theorem lookup_add_entry (n : Nat) (h1 : n ≥ 1) (h17 : n ≤ 17) :
    CodeTable.lookup (1 + n).toUInt8 = ⟨⟨.add, n⟩, ⟨.noop, 0⟩⟩ := by
  interval_cases n <;> native_decide

-- ============================================================================
-- ## execHalfInst ADD with arbitrary HalfInst size field
-- ============================================================================

-- ADD execution depends only on inst.type, not inst.size field
theorem execHalfInst_add_general (k n : Nat) (sourceWindow target : ByteArray)
    (dataCursor addrCursor : Varint.Cursor) (cache : AddressCache.State)
    (here : Nat) (h : dataCursor.pos + n ≤ dataCursor.data.size) :
    Decoder.execHalfInst ⟨.add, k⟩ n sourceWindow target
      dataCursor addrCursor cache here =
    .ok (target ++ dataCursor.data.extract dataCursor.pos (dataCursor.pos + n),
         ⟨dataCursor.data, dataCursor.pos + n⟩, addrCursor, cache) := by
  unfold Decoder.execHalfInst
  simp only [bind, Except.bind]
  simp only [Varint.Cursor.hasBytes, h, decide_true, Bool.not_true]
  rw [Encoder.Proofs.readBytes_ok h]
  rfl

-- ============================================================================
-- ## General decodeOneStep for single ADD (sizes 1..17)
-- ============================================================================

-- Helper: ByteArray singleton indexing
private theorem ba_singleton_getElem (x : UInt8) :
    (ByteArray.mk #[x])[0]! = x := rfl

-- For ADD with immediate size, decodeOneStep on the encoded sections correctly
-- appends data to target. Uses interval_cases to handle all 17 size variants.
theorem decodeOneStep_add_general (n : Nat) (data : ByteArray)
    (sourceWindow target : ByteArray)
    (cache : AddressCache.State)
    (h1 : n ≥ 1) (h17 : n ≤ 17) (hn : data.size = n) :
    decodeOneStep sourceWindow target
      ⟨ByteArray.mk #[(1 + n).toUInt8], 0⟩
      ⟨data, 0⟩
      ⟨ByteArray.empty, 0⟩
      cache =
    .ok (target ++ data.extract 0 n,
         ⟨ByteArray.mk #[(1 + n).toUInt8], 1⟩,
         ⟨data, n⟩,
         ⟨ByteArray.empty, 0⟩,
         cache) := by
  unfold decodeOneStep
  simp only [bind, Except.bind]
  -- readByte on 1-byte inst section at pos 0
  rw [Encoder.Proofs.readByte_ok (show (0 : Nat) < (ByteArray.mk #[(1 + n).toUInt8]).size
    from by simp [ByteArray.size])]
  -- Reduce indexed byte to opcode value
  simp only [ba_singleton_getElem]
  -- Code table lookup + execHalfInst: unfold both, then simplify
  rw [lookup_add_entry n h1 h17]
  -- Use conv to reduce struct projections without unfolding execHalfInst
  conv => simp only []
  -- Now all struct projections are reduced
  have hne : n ≠ 0 := by omega
  simp only [show (n == 0) = false from beq_eq_false_iff_ne.mpr hne, Bool.false_and,
    show (InstType.add != InstType.noop) = true from by decide,
    show (InstType.noop != InstType.noop) = false from by decide,
    show ((0 : Nat) == 0 && false) = false from by decide,
    ↓reduceIte]
  -- Now the goal should have execHalfInst ⟨.add, n⟩ n ...
  unfold Decoder.execHalfInst
  simp only [bind, Except.bind, pure, Except.pure,
    Varint.Cursor.hasBytes, Varint.Cursor.readBytes,
    show 0 + n ≤ data.size from by omega,
    show n ≤ data.size from by omega,
    decide_true, Bool.not_true, Bool.true_eq, Bool.not_false,
    Bool.false_eq_true, ↓reduceIte, ite_false, ite_true, Nat.zero_add]

-- ============================================================================
-- ## Composed encode → decode roundtrip for single ADD
-- ============================================================================

-- Encoding a single ADD and decoding it produces target ++ data.extract 0 n
theorem encodeOneInst_decodeOneStep_add (data : ByteArray)
    (sourceWindow target : ByteArray) (cache : AddressCache.State)
    (h1 : data.size ≥ 1) (h17 : data.size ≤ 17) :
    let (dataSec, instSec, addrSec, _cache', _) :=
      encodeOneInst (.add data) sourceWindow.size cache 0
    decodeOneStep sourceWindow target
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ cache =
    .ok (target ++ data.extract 0 data.size,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         cache) := by
  -- Unfold encodeOneInst to get concrete sections
  rw [encodeOneInst_add_sections data h1 h17 sourceWindow.size cache 0]
  simp only []
  -- Apply the general decodeOneStep theorem
  rw [decodeOneStep_add_general data.size data sourceWindow target cache h1 h17 rfl]
  -- instSec.size = 1
  rfl

-- ============================================================================
-- ## decodeLoop with single ADD instruction
-- ============================================================================

-- decodeLoop with fuel ≥ 1 on a single ADD instruction's sections
theorem decodeLoop_single_add (data : ByteArray)
    (sourceWindow target : ByteArray) (cache : AddressCache.State)
    (h1 : data.size ≥ 1) (h17 : data.size ≤ 17) :
    let instSec := ByteArray.mk #[(1 + data.size).toUInt8]
    decodeLoop 1 sourceWindow target
      ⟨instSec, 0⟩ ⟨data, 0⟩ ⟨ByteArray.empty, 0⟩ cache =
    .ok (target ++ data.extract 0 data.size,
         ⟨instSec, 1⟩, ⟨data, data.size⟩,
         ⟨ByteArray.empty, 0⟩, cache) := by
  simp only []
  -- Unfold one step of decodeLoop
  unfold decodeLoop
  have hsz : (ByteArray.mk #[(1 + data.size).toUInt8]).size = 1 := rfl
  have hlt : ¬(0 ≥ (ByteArray.mk #[(1 + data.size).toUInt8]).size) := by
    rw [hsz]; omega
  simp only [hlt, ↓reduceIte]
  -- Apply decodeOneStep
  rw [decodeOneStep_add_general data.size data sourceWindow target cache h1 h17 rfl]
  -- Recurse with fuel 0 and exhausted inst cursor
  unfold decodeLoop
  have hge : 1 ≥ (ByteArray.mk #[(1 + data.size).toUInt8]).size := by
    rw [hsz]
  simp only [hge, ↓reduceIte]

-- ============================================================================
-- ## ByteArray append properties (for multi-instruction roundtrip)
-- ============================================================================

-- The byte read from pos < a.size in (a ++ b) equals the byte in a
theorem bytearray_getElem_append_left (a b : ByteArray) (i : Nat)
    (hi : i < a.size) (hab : i < (a ++ b).size := by rw [ByteArray.size_append]; omega) :
    (a ++ b)[i] = a[i] :=
  ByteArray.get_append_left hi

-- The byte read from pos ≥ a.size in (a ++ b) equals the byte in b
theorem bytearray_getElem_append_right (a b : ByteArray) (i : Nat)
    (hi : a.size ≤ i) (hab : i < (a ++ b).size)
    (hb : i - a.size < b.size := by rw [ByteArray.size_append] at hab; omega) :
    (a ++ b)[i] = b[i - a.size] :=
  ByteArray.get_append_right hi hab

-- ============================================================================
-- ## ByteArray.extract on concatenated arrays
-- ============================================================================

-- Bridge lemma: ByteArray.extract on (a ++ b) when stop ≤ a.size
-- equals extract on a alone. Proved by lifting to Array via .data.
theorem bytearray_extract_append_left (a b : ByteArray) (i j : Nat)
    (h : j ≤ a.size) :
    (a ++ b).extract i j = a.extract i j := by
  ext1
  rw [ByteArray.data_extract, ByteArray.data_extract,
      ByteArray.data_append]
  exact Array.extract_append_of_stop_le_size_left
    (by rwa [ByteArray.size] at h)

-- Extract on (a ++ b) when a.size ≤ start reads from b
theorem bytearray_extract_append_right (a b : ByteArray)
    (i j : Nat) (h : a.size ≤ i) :
    (a ++ b).extract i j = b.extract (i - a.size) (j - a.size) := by
  ext1
  rw [ByteArray.data_extract, ByteArray.data_extract,
      ByteArray.data_append]
  exact Array.extract_append_of_size_left_le_start
    (by rwa [ByteArray.size] at h)

-- Extract from 0 to a.size of a is a itself
theorem bytearray_extract_full (a : ByteArray) :
    a.extract 0 a.size = a := by
  ext1
  simp [ByteArray.data_extract]

-- Extract from 0 to n where n ≥ a.size is a itself
theorem bytearray_extract_ge_size (a : ByteArray) (n : Nat)
    (h : a.size ≤ n) :
    a.extract 0 n = a := by
  ext1
  rw [ByteArray.data_extract]
  simp only [ByteArray.size] at h
  rw [Array.extract_eq_of_size_le_stop h]
  simp

-- readBytes on (a ++ b) starting at 0 with n ≤ a.size extracts from a
-- (strengthened version: result equals a.extract, not (a++b).extract)
theorem readBytes_concat_left (a b : ByteArray) (n : Nat)
    (h : n ≤ a.size) :
    Varint.Cursor.readBytes ⟨a ++ b, 0⟩ n =
    .ok (a.extract 0 n, ⟨a ++ b, n⟩) := by
  rw [Encoder.Proofs.readBytes_ok
    (show 0 + n ≤ (a ++ b).size from by
      rw [ByteArray.size_append]; omega)]
  simp only [Nat.zero_add, Except.ok.injEq, Prod.mk.injEq,
    and_true]
  exact bytearray_extract_append_left a b 0 n h

-- readBytes on (a ++ b) starting at a.size with n ≤ b.size
-- extracts from b
theorem readBytes_concat_right (a b : ByteArray) (n : Nat)
    (h : n ≤ b.size) :
    Varint.Cursor.readBytes ⟨a ++ b, a.size⟩ n =
    .ok (b.extract 0 n, ⟨a ++ b, a.size + n⟩) := by
  rw [Encoder.Proofs.readBytes_ok
    (show a.size + n ≤ (a ++ b).size from by
      rw [ByteArray.size_append]; omega)]
  congr 1
  rw [bytearray_extract_append_right a b a.size (a.size + n)
    (le_refl _)]
  simp

-- ============================================================================
-- ## encodeInstList helpers
-- ============================================================================

-- encodeInstList for a single instruction equals encodeOneInst
theorem encodeInstList_singleton (inst : Encoder.RawInst)
    (srcLen : Nat) (cache : AddressCache.State) (pos : Nat) :
    encodeInstList [inst] srcLen cache pos =
    let (d, i, a, c, p) := encodeOneInst inst srcLen cache pos
    (d ++ ByteArray.empty, i ++ ByteArray.empty,
     a ++ ByteArray.empty, c, p) := by
  unfold encodeInstList encodeInstList
  rfl

-- ByteArray.append with empty is identity
theorem bytearray_append_empty (a : ByteArray) :
    a ++ ByteArray.empty = a := by
  apply ByteArray.ext
  simp [ByteArray.size_append, ByteArray.size]

-- ByteArray.empty append is identity
theorem bytearray_empty_append (a : ByteArray) :
    ByteArray.empty ++ a = a := by
  apply ByteArray.ext
  simp [ByteArray.size_append, ByteArray.size]

-- ByteArray.append is associative
theorem bytearray_append_assoc (a b c : ByteArray) :
    a ++ b ++ c = a ++ (b ++ c) := by
  apply ByteArray.ext
  simp [ByteArray.size_append]

-- readByte on (a ++ b) at position p < a.size reads from a
theorem readByte_append_left (a b : ByteArray) (p : Nat)
    (h : p < a.size) :
    Varint.Cursor.readByte ⟨a ++ b, p⟩ =
    .ok ((a ++ b)[p]!, ⟨a ++ b, p + 1⟩) := by
  rw [Encoder.Proofs.readByte_ok
    (show p < (a ++ b).size from by rw [ByteArray.size_append]; omega)]

-- readBytes on (a ++ b) at position 0 with n ≤ a.size extracts from a
theorem readBytes_append_left (a b : ByteArray) (n : Nat)
    (h : n ≤ a.size) :
    Varint.Cursor.readBytes ⟨a ++ b, 0⟩ n =
    .ok ((a ++ b).extract 0 n, ⟨a ++ b, n⟩) := by
  rw [Encoder.Proofs.readBytes_ok
    (show 0 + n ≤ (a ++ b).size from by rw [ByteArray.size_append]; omega)]
  simp

-- ============================================================================
-- ## General section roundtrip: RUN
-- ============================================================================

-- RUN always uses opcode 0 with varint-encoded size
theorem findSingleOpcode_run (b : UInt8) (sz : Nat) :
    Encoder.findSingleOpcode (.run b sz) = (0, true) := by
  unfold Encoder.findSingleOpcode
  rfl

-- CodeTable.lookup 0 = RUN with size 0 (varint follows)
theorem lookup_run_entry :
    CodeTable.lookup 0 = ⟨⟨.run, 0⟩, ⟨.noop, 0⟩⟩ := by native_decide

-- encodeOneInst for RUN produces expected sections
theorem encodeOneInst_run_sections (b : UInt8) (sz : Nat)
    (srcLen : Nat) (cache : AddressCache.State) (tgtPos : Nat) :
    encodeOneInst (.run b sz) srcLen cache tgtPos =
    (ByteArray.mk #[b],
     ByteArray.mk #[0x00] ++ Varint.encode sz,
     ByteArray.empty, cache, tgtPos + sz) := by
  unfold encodeOneInst Encoder.findSingleOpcode
  simp only []

-- Concrete execHalfInst RUN roundtrips for various sizes
theorem execHalfInst_run_concrete_sz2 :
    Decoder.execHalfInst ⟨.run, 0⟩ 2
      ByteArray.empty ByteArray.empty
      ⟨⟨#[0x42]⟩, 0⟩ ⟨ByteArray.empty, 0⟩
      AddressCache.State.init 0 =
    .ok (⟨#[0x42, 0x42]⟩,
         ⟨⟨#[0x42]⟩, 1⟩,
         ⟨ByteArray.empty, 0⟩,
         AddressCache.State.init) := by native_decide

theorem execHalfInst_run_concrete_sz10 :
    Decoder.execHalfInst ⟨.run, 0⟩ 10
      ByteArray.empty ByteArray.empty
      ⟨⟨#[0xFF]⟩, 0⟩ ⟨ByteArray.empty, 0⟩
      AddressCache.State.init 0 =
    .ok (ByteArray.mk (Array.replicate 10 0xFF),
         ⟨⟨#[0xFF]⟩, 1⟩,
         ⟨ByteArray.empty, 0⟩,
         AddressCache.State.init) := by native_decide

-- Concrete RUN roundtrip examples for various sizes
theorem section_roundtrip_run_1 :
    let inst := Encoder.RawInst.run 0xAA 1
    let (dataSec, instSec, addrSec, _, _) :=
      encodeOneInst inst 0 AddressCache.State.init 0
    decodeOneStep ByteArray.empty ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0xAA]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         AddressCache.State.init) := by native_decide

theorem section_roundtrip_run_8 :
    let inst := Encoder.RawInst.run 0x42 8
    let (dataSec, instSec, addrSec, _, _) :=
      encodeOneInst inst 0 AddressCache.State.init 0
    decodeOneStep ByteArray.empty ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         AddressCache.State.init) := by native_decide

-- RUN size=128 (varint 2 bytes): roundtrip through encode→decode
theorem section_roundtrip_run_128 :
    let inst := Encoder.RawInst.run 0x00 128
    let (dataSec, instSec, addrSec, _, _) :=
      encodeOneInst inst 0 AddressCache.State.init 0
    decodeLoop 1 ByteArray.empty ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (ByteArray.mk (Array.replicate 128 0x00),
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         AddressCache.State.init) := by native_decide

-- ============================================================================
-- ## General section roundtrip: COPY mode 0 (VCD_SELF)
-- ============================================================================

-- For COPY with mode 0, sizes 4..18, the encoder uses immediate-size opcodes
-- COPY mode 0, size s: opcode = 19 + (s - 4) + 1 = s + 16
theorem findSingleOpcode_copy_mode0_immediate (sz : Nat) (addr : Nat)
    (h4 : sz ≥ 4) (h18 : sz ≤ 18) :
    Encoder.findSingleOpcode (.copy addr sz) 0 = ((sz + 16).toUInt8, false) := by
  unfold Encoder.findSingleOpcode
  simp only [h4, h18, decide_true, Bool.and_self, ↓reduceIte]
  congr 1
  show (19 + 0 * 16 + sz - 4 + 1).toUInt8 = (sz + 16).toUInt8
  congr 1
  omega

-- CodeTable.lookup for COPY mode 0 opcodes 20..34
theorem lookup_copy_mode0_entry (sz : Nat) (h4 : sz ≥ 4) (h18 : sz ≤ 18) :
    CodeTable.lookup (sz + 16).toUInt8 = ⟨⟨.copy 0, sz⟩, ⟨.noop, 0⟩⟩ := by
  interval_cases sz <;> native_decide

-- Concrete: encodeOneInst for COPY addr=0 sz=4 on init cache
theorem encodeOneInst_copy_mode0_addr0_sz4 :
    encodeOneInst (.copy 0 4) 5 AddressCache.State.init 0 =
    (ByteArray.empty,
     ⟨#[20]⟩,
     Varint.encode 0,
     AddressCache.State.init.update 0,
     4) := by native_decide

-- Concrete: encodeOneInst for COPY addr=0 sz=8 on init cache
theorem encodeOneInst_copy_mode0_addr0_sz8 :
    encodeOneInst (.copy 0 8) 10 AddressCache.State.init 0 =
    (ByteArray.empty,
     ⟨#[24]⟩,
     Varint.encode 0,
     AddressCache.State.init.update 0,
     8) := by native_decide

-- Concrete COPY roundtrips with different sizes and addresses
theorem section_roundtrip_copy_sz5 :
    let source : ByteArray := ⟨#[0, 1, 2, 3, 4, 5, 6, 7]⟩
    let inst := Encoder.RawInst.copy 0 5
    let (dataSec, instSec, addrSec, cache', _) :=
      encodeOneInst inst source.size AddressCache.State.init 0
    decodeOneStep source ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0, 1, 2, 3, 4]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, 0⟩,
         ⟨addrSec, addrSec.size⟩,
         cache') := by native_decide

theorem section_roundtrip_copy_sz18 :
    let source : ByteArray := ⟨#[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19]⟩
    let inst := Encoder.RawInst.copy 2 18
    let (dataSec, instSec, addrSec, cache', _) :=
      encodeOneInst inst source.size AddressCache.State.init 0
    decodeOneStep source ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, 0⟩,
         ⟨addrSec, addrSec.size⟩,
         cache') := by native_decide

-- ============================================================================
-- ## General COPY mode 0: decodeOneStep with encoded sections
-- ============================================================================

-- For COPY mode 0 with immediate size opcodes (4..18), the code table
-- dispatches correctly: inst1 is COPY mode 0, inst2 is NOOP.
-- Proved per-size via interval_cases + native_decide.
theorem copy_mode0_opcode_dispatch (sz : Nat)
    (h4 : sz ≥ 4) (h18 : sz ≤ 18) :
    (CodeTable.lookup (sz + 16).toUInt8).inst1.type = .copy 0 ∧
    (CodeTable.lookup (sz + 16).toUInt8).inst1.size = sz ∧
    (CodeTable.lookup (sz + 16).toUInt8).inst2.type = .noop := by
  interval_cases sz <;> native_decide

-- ============================================================================
-- ## Multi-instruction inductive roundtrip: decodeLoop composition
-- ============================================================================

-- Key lemma: if decodeOneStep succeeds and decodeLoop succeeds on the rest,
-- then decodeLoop succeeds on the combined input.
-- This is the inductive step for multi-instruction roundtrip proofs.

-- decodeLoop with fuel n+1 and non-exhausted cursor: after decodeOneStep .ok,
-- result is decodeLoop n on the updated state.
theorem decodeLoop_step_ok (sw target target' : ByteArray)
    (ic dc ac ic' dc' ac' : Varint.Cursor)
    (cache cache' : AddressCache.State)
    (n : Nat) (h : ic.pos < ic.data.size)
    (hstep : decodeOneStep sw target ic dc ac cache =
             .ok (target', ic', dc', ac', cache')) :
    decodeLoop (n + 1) sw target ic dc ac cache =
    decodeLoop n sw target' ic' dc' ac' cache' := by
  conv_lhs => unfold decodeLoop
  simp only [show ¬(ic.pos ≥ ic.data.size) from by omega, ite_false,
             hstep]

-- Four-instruction roundtrip: ADD + RUN + COPY + ADD
theorem multi_roundtrip_four_insts :
    let source : ByteArray := ⟨#[0x57, 0x4F, 0x52, 0x4C, 0x44]⟩  -- "WORLD"
    let insts := [Encoder.RawInst.add ⟨#[0x48, 0x49]⟩,     -- ADD "HI"
                  Encoder.RawInst.run 0x20 3,                 -- RUN ' ' x3
                  Encoder.RawInst.copy 0 4,                   -- COPY "WORL"
                  Encoder.RawInst.add ⟨#[0x21]⟩]             -- ADD "!"
    let (dataSec, instSec, addrSec, cache', _) :=
      encodeInstList insts source.size AddressCache.State.init 0
    decodeLoop 4 source ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x48, 0x49, 0x20, 0x20, 0x20, 0x57, 0x4F, 0x52, 0x4C, 0x21]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, addrSec.size⟩,
         cache') := by native_decide

-- Five instructions: ADD + COPY + RUN + COPY + ADD
theorem multi_roundtrip_five_insts :
    let source : ByteArray := ⟨#[0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48]⟩
    let insts := [Encoder.RawInst.add ⟨#[0x30, 0x31]⟩,     -- ADD "01"
                  Encoder.RawInst.copy 0 5,                   -- COPY "ABCDE"
                  Encoder.RawInst.run 0xFF 2,                 -- RUN 0xFF x2
                  Encoder.RawInst.copy 3 4,                   -- COPY "DEFG"
                  Encoder.RawInst.add ⟨#[0x5A]⟩]             -- ADD "Z"
    let (dataSec, instSec, addrSec, cache', _) :=
      encodeInstList insts source.size AddressCache.State.init 0
    decodeLoop 5 source ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x30, 0x31, 0x41, 0x42, 0x43, 0x44, 0x45, 0xFF, 0xFF,
           0x44, 0x45, 0x46, 0x47, 0x5A]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, addrSec.size⟩,
         cache') := by native_decide

-- ============================================================================
-- ## decodeLoop with excess fuel: extra fuel doesn't change result
-- ============================================================================

-- If decodeLoop succeeds with fuel n, it also succeeds with fuel n+1
-- (giving the same result). This shows the fuel parameter is only for termination.
theorem decodeLoop_fuel_mono (sw target : ByteArray)
    (ic dc ac : Varint.Cursor) (cache : AddressCache.State)
    (n : Nat) (result : ByteArray × Varint.Cursor × Varint.Cursor ×
                        Varint.Cursor × AddressCache.State)
    (h : decodeLoop n sw target ic dc ac cache = .ok result) :
    decodeLoop (n + 1) sw target ic dc ac cache = .ok result := by
  induction n generalizing target ic dc ac cache with
  | zero =>
    unfold decodeLoop at h ⊢
    split at h
    · -- ic exhausted at fuel 0 → also exhausted at fuel 1
      rename_i hexh
      simp only [hexh, ↓reduceIte]
      exact h
    · contradiction
  | succ k ih =>
    unfold decodeLoop at h ⊢
    split at h
    · -- ic exhausted
      rename_i hexh
      simp only [hexh, ↓reduceIte] at h ⊢
      exact h
    · -- ic not exhausted: unfold one step
      rename_i hlt
      simp only [hlt, ↓reduceIte] at h ⊢
      -- Split on decodeOneStep result
      revert h
      match decodeOneStep sw target ic dc ac cache with
      | .ok (target', ic', dc', ac', cache') =>
        intro h
        exact ih target' ic' dc' ac' cache' h
      | .error e =>
        intro h
        contradiction

-- Corollary: adding any amount of extra fuel preserves the result
theorem decodeLoop_fuel_add (sw target : ByteArray)
    (ic dc ac : Varint.Cursor) (cache : AddressCache.State)
    (n m : Nat) (result : ByteArray × Varint.Cursor × Varint.Cursor ×
                          Varint.Cursor × AddressCache.State)
    (h : decodeLoop n sw target ic dc ac cache = .ok result) :
    decodeLoop (n + m) sw target ic dc ac cache = .ok result := by
  induction m with
  | zero => exact h
  | succ m ih =>
    rw [Nat.add_succ]
    exact decodeLoop_fuel_mono sw target ic dc ac cache (n + m) result ih

-- ============================================================================
-- ## General ADD on concatenated data sections
-- ============================================================================

-- execHalfInst ADD on (data1 ++ data2) at pos 0 with n ≤ data1.size
-- produces the same target append as operating on data1 alone.
-- The cursor advances to position n in the concatenated data.
theorem execHalfInst_add_concat (n : Nat) (data1 data2 : ByteArray)
    (sourceWindow target : ByteArray)
    (addrCursor : Varint.Cursor) (cache : AddressCache.State)
    (here : Nat) (h : n ≤ data1.size) :
    Decoder.execHalfInst ⟨.add, 0⟩ n sourceWindow target
      ⟨data1 ++ data2, 0⟩ addrCursor cache here =
    .ok (target ++ data1.extract 0 n,
         ⟨data1 ++ data2, n⟩, addrCursor, cache) := by
  have hlen : 0 + n ≤ (data1 ++ data2).size := by
    rw [ByteArray.size_append]; omega
  rw [execHalfInst_add_general 0 n sourceWindow target
    ⟨data1 ++ data2, 0⟩ addrCursor cache here hlen]
  simp only [Nat.zero_add]
  rw [bytearray_extract_append_left data1 data2 0 n h]

-- ============================================================================
-- ## readByte on concatenated ByteArray
-- ============================================================================

-- readByte from (a ++ b) at position i < a.size reads the same
-- byte as from a at position i, but cursor stays in (a ++ b).
-- Note: readByte produces ba[pos]! (getElem! / panicking).
-- For concrete singleton ByteArrays, readByte results are handled by
-- ba_singleton_getElem + rfl. For general concatenated arrays, we work
-- directly at the Varint.Cursor.readByte level using readByte_ok.
-- The key insight: readByte_ok gives us ba[pos]!, and we can state
-- theorems about the full readByte result without decomposing getElem!.

-- readByte on (a ++ b) at pos i < a.size: result uses (a ++ b)[i]!
-- This is just readByte_ok with a bounds transfer.
theorem readByte_concat_ok (a b : ByteArray) (i : Nat)
    (h : i < a.size) :
    Varint.Cursor.readByte ⟨a ++ b, i⟩ =
    .ok ((a ++ b)[i]!, ⟨a ++ b, i + 1⟩) :=
  Encoder.Proofs.readByte_ok (by rw [ByteArray.size_append]; omega)

-- ============================================================================
-- ## execHalfInst ADD on concatenated sections at arbitrary position
-- ============================================================================

-- execHalfInst ADD at position p in concatenated data (d1 ++ d2),
-- where p + n ≤ d1.size, reads from d1 only.
theorem execHalfInst_add_concat_at (k n p : Nat)
    (d1 d2 : ByteArray) (sourceWindow target : ByteArray)
    (addrCursor : Varint.Cursor) (cache : AddressCache.State)
    (here : Nat) (h : p + n ≤ d1.size) :
    Decoder.execHalfInst ⟨.add, k⟩ n sourceWindow target
      ⟨d1 ++ d2, p⟩ addrCursor cache here =
    .ok (target ++ d1.extract p (p + n),
         ⟨d1 ++ d2, p + n⟩, addrCursor, cache) := by
  have hlen : p + n ≤ (d1 ++ d2).size := by
    rw [ByteArray.size_append]; omega
  rw [execHalfInst_add_general k n sourceWindow target
    ⟨d1 ++ d2, p⟩ addrCursor cache here hlen]
  rw [bytearray_extract_append_left d1 d2 p (p + n) (by omega)]

-- Corollary: at position 0 with n ≤ d1.size
theorem execHalfInst_add_concat_zero (k n : Nat)
    (d1 d2 : ByteArray) (sourceWindow target : ByteArray)
    (addrCursor : Varint.Cursor) (cache : AddressCache.State)
    (here : Nat) (h : n ≤ d1.size) :
    Decoder.execHalfInst ⟨.add, k⟩ n sourceWindow target
      ⟨d1 ++ d2, 0⟩ addrCursor cache here =
    .ok (target ++ d1.extract 0 n,
         ⟨d1 ++ d2, n⟩, addrCursor, cache) := by
  have := execHalfInst_add_concat_at k n 0 d1 d2 sourceWindow
    target addrCursor cache here (by omega)
  simp only [Nat.zero_add] at this
  exact this

-- ============================================================================
-- ## Section size properties from encodeOneInst
-- ============================================================================

-- For ADD with immediate sizes, the encoded instSection is exactly 1 byte
theorem encodeOneInst_add_instSec_size (data : ByteArray)
    (h1 : data.size ≥ 1) (h17 : data.size ≤ 17)
    (srcLen : Nat) (cache : AddressCache.State) (tgtPos : Nat) :
    let (_, instSec, _, _, _) :=
      encodeOneInst (.add data) srcLen cache tgtPos
    instSec.size = 1 := by
  rw [encodeOneInst_add_sections data h1 h17 srcLen cache tgtPos]
  rfl

-- For ADD, the encoded dataSection has the same size as the input
theorem encodeOneInst_add_dataSec_size (data : ByteArray)
    (h1 : data.size ≥ 1) (h17 : data.size ≤ 17)
    (srcLen : Nat) (cache : AddressCache.State) (tgtPos : Nat) :
    let (dataSec, _, _, _, _) :=
      encodeOneInst (.add data) srcLen cache tgtPos
    dataSec.size = data.size := by
  rw [encodeOneInst_add_sections data h1 h17 srcLen cache tgtPos]

-- For ADD, the encoded addrSection is empty
theorem encodeOneInst_add_addrSec_empty (data : ByteArray)
    (h1 : data.size ≥ 1) (h17 : data.size ≤ 17)
    (srcLen : Nat) (cache : AddressCache.State) (tgtPos : Nat) :
    let (_, _, addrSec, _, _) :=
      encodeOneInst (.add data) srcLen cache tgtPos
    addrSec = ByteArray.empty := by
  rw [encodeOneInst_add_sections data h1 h17 srcLen cache tgtPos]

-- ============================================================================
-- ## General decodeOneStep ADD on concatenated inst/data sections
-- ============================================================================

-- When inst section has ADD opcode at position p and data section has
-- data starting at position q, decodeOneStep correctly processes the ADD
-- from the concatenated sections.
-- This is the key lemma for multi-instruction proofs: it shows each ADD
-- instruction in a concatenated stream is processed independently.
theorem decodeOneStep_add_in_concat
    (n : Nat) (sourceWindow target : ByteArray)
    (instData : ByteArray) (instPos : Nat)
    (dataAll : ByteArray) (dataPos : Nat)
    (addrAll : ByteArray) (addrPos : Nat)
    (cache : AddressCache.State)
    (h1 : n ≥ 1) (h17 : n ≤ 17)
    (hInstBound : instPos < instData.size)
    (hInstByte : instData[instPos]! = (1 + n).toUInt8)
    (hDataBound : dataPos + n ≤ dataAll.size) :
    decodeOneStep sourceWindow target
      ⟨instData, instPos⟩ ⟨dataAll, dataPos⟩
      ⟨addrAll, addrPos⟩ cache =
    .ok (target ++ dataAll.extract dataPos (dataPos + n),
         ⟨instData, instPos + 1⟩,
         ⟨dataAll, dataPos + n⟩,
         ⟨addrAll, addrPos⟩,
         cache) := by
  unfold decodeOneStep
  simp only [bind, Except.bind]
  rw [Encoder.Proofs.readByte_ok hInstBound]
  simp only [hInstByte]
  rw [lookup_add_entry n h1 h17]
  conv => simp only []
  have hne : n ≠ 0 := by omega
  simp only [show (n == 0) = false from beq_eq_false_iff_ne.mpr hne,
    Bool.false_and,
    show (InstType.add != InstType.noop) = true from by decide,
    show (InstType.noop != InstType.noop) = false from by decide,
    show ((0 : Nat) == 0 && false) = false from by decide,
    ↓reduceIte]
  unfold Decoder.execHalfInst
  simp only [bind, Except.bind, pure, Except.pure,
    Varint.Cursor.hasBytes, Varint.Cursor.readBytes,
    hDataBound, decide_true, Bool.not_true,
    Bool.false_eq_true, ↓reduceIte, ite_false, ite_true]

end LeanBdiff.Vcdiff.WindowRoundtrip
