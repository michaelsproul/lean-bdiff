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
import LeanBdiff.Vcdiff.Proofs.CursorReloc
import Mathlib.Tactic.IntervalCases
import Std.Tactic.BVDecide
import Batteries.Data.ByteArray
import Batteries.Data.Array.Lemmas

set_option linter.style.nativeDecide false
set_option maxRecDepth 4096

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
-- ## Equivalence: spec decodeOneStep/decodeLoop = Decoder versions
-- ============================================================================

-- The spec decodeOneStep is identical to Decoder.decodeOneStep
theorem decodeOneStep_eq_decoder (sw target : ByteArray)
    (ic dc ac : Varint.Cursor) (cache : AddressCache.State) :
    decodeOneStep sw target ic dc ac cache =
    Decoder.decodeOneStep sw target ic dc ac cache := by
  rfl

-- The spec decodeLoop equals Decoder.applyWindowLoop (modulo parameter order)
theorem decodeLoop_eq_applyWindowLoop (sw : ByteArray)
    : (fuel : Nat) → (target : ByteArray) →
    (ic dc ac : Varint.Cursor) → (cache : AddressCache.State) →
    decodeLoop fuel sw target ic dc ac cache =
    Decoder.applyWindowLoop sw fuel target ic dc ac cache
  | 0, target, ic, dc, ac, cache => by
    simp only [decodeLoop, Decoder.applyWindowLoop]
  | fuel + 1, target, ic, dc, ac, cache => by
    unfold decodeLoop Decoder.applyWindowLoop
    rw [decodeOneStep_eq_decoder]
    split -- if ic.pos ≥ ic.data.size
    · rfl
    · -- match on Decoder.decodeOneStep result
      cases h : Decoder.decodeOneStep sw target ic dc ac cache with
      | ok result =>
        obtain ⟨target', ic', dc', ac', cache'⟩ := result
        simp only [h]
        exact decodeLoop_eq_applyWindowLoop sw fuel target' ic' dc' ac' cache'
      | error e => simp only [h]

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

-- Helper: encodeOneInst for ADD with varint size (data.size > 17 or data.size = 0)
theorem encodeOneInst_add_varint_sections (data : ByteArray)
    (h : ¬(data.size ≥ 1 ∧ data.size ≤ 17)) (srcLen : Nat)
    (cache : AddressCache.State) (tgtPos : Nat) :
    encodeOneInst (.add data) srcLen cache tgtPos =
    (data, ByteArray.mk #[1] ++ Varint.encode data.size,
     ByteArray.empty, cache, tgtPos + data.size) := by
  unfold encodeOneInst Encoder.findSingleOpcode
  simp only [show ¬(data.size ≥ 1 && data.size ≤ 17) from by
    simp only [Bool.and_eq_true, decide_eq_true_eq]; exact h]
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

-- When inst section has ADD varint opcode (1) at instPos followed by varint(n),
-- data section has n bytes starting at dataPos:
theorem decodeOneStep_add_varint_in_concat
    (n : Nat) (sourceWindow target : ByteArray)
    (instData : ByteArray) (instPos : Nat)
    (dataAll : ByteArray) (dataPos : Nat)
    (addrAll : ByteArray) (addrPos : Nat)
    (cache : AddressCache.State)
    (hInstBound : instPos < instData.size)
    (hInstByte : instData[instPos]! = 1)
    (hVarint : Varint.decode ⟨instData, instPos + 1⟩ =
      .ok (n, ⟨instData, instPos + 1 + (Varint.encode n).size⟩))
    (hDataBound : dataPos + n ≤ dataAll.size) :
    decodeOneStep sourceWindow target
      ⟨instData, instPos⟩ ⟨dataAll, dataPos⟩
      ⟨addrAll, addrPos⟩ cache =
    .ok (target ++ dataAll.extract dataPos (dataPos + n),
         ⟨instData, instPos + 1 + (Varint.encode n).size⟩,
         ⟨dataAll, dataPos + n⟩,
         ⟨addrAll, addrPos⟩,
         cache) := by
  unfold decodeOneStep
  simp only [bind, Except.bind]
  rw [Encoder.Proofs.readByte_ok hInstBound]
  simp only [hInstByte]
  rw [CodeTable.Proofs.lookup_add_unsized]
  conv => simp only []
  -- inst1.size = 0 and inst1.type = .add ≠ .noop → read varint for size
  simp only [show ((0 : Nat) == 0) = true from by decide,
    show ((InstType.add != InstType.noop) = true) from by decide,
    Bool.true_and, ↓reduceIte]
  rw [hVarint]
  simp only [pure, Except.pure, bind, Except.bind]
  -- inst2 is noop
  simp only [show (InstType.noop != InstType.noop) = false from by decide,
    show ((0 : Nat) == 0 && false) = false from by decide,
    Bool.false_eq_true, ite_false, pure, Except.pure, bind, Except.bind, ↓reduceIte]
  -- Execute ADD
  unfold Decoder.execHalfInst
  simp only [bind, Except.bind, pure, Except.pure,
    Varint.Cursor.hasBytes, Varint.Cursor.readBytes,
    hDataBound, decide_true, Bool.not_true,
    Bool.false_eq_true, ↓reduceIte, ite_false, ite_true]

-- ============================================================================
-- ## Pure specification functions for instruction execution
-- ============================================================================

/-- Repeat a byte n times as a ByteArray. -/
def repeatByte (b : UInt8) (n : Nat) : ByteArray :=
  ByteArray.mk (Array.replicate n b)

/-- Execute a single instruction purely (specification function).
    For COPY, assumes all addresses are within the source window
    (no overlapping target-self copies). -/
def execInstSpec (inst : Encoder.RawInst) (sourceWindow target : ByteArray) : ByteArray :=
  match inst with
  | .add data => target ++ data
  | .run byte sz => target ++ repeatByte byte sz
  | .copy addr sz => target ++ sourceWindow.extract addr (addr + sz)

/-- Execute a list of instructions purely (specification function). -/
def execInstListSpec : List Encoder.RawInst → ByteArray → ByteArray → ByteArray
  | [], _, target => target
  | inst :: rest, src, target =>
    execInstListSpec rest src (execInstSpec inst src target)

-- ============================================================================
-- ## Instruction validity predicates
-- ============================================================================

/-- An instruction is valid for our roundtrip proof:
    - ADD: size ≥ 1, within varint range
    - RUN: size ≥ 1, within varint range
    - COPY: size ≥ 1, source-only, within varint range -/
def ValidInst (inst : Encoder.RawInst) (sourceWindow : ByteArray) : Prop :=
  match inst with
  | .add data => data.size ≥ 1 ∧ data.size < 2 ^ 31
  | .run _ sz => sz ≥ 1 ∧ sz < 2 ^ 31
  | .copy addr sz => sz ≥ 1 ∧ sz < 2 ^ 31 ∧ addr + sz ≤ sourceWindow.size ∧ addr < 2 ^ 31

/-- All instructions in a list are valid. -/
def ValidInstList (insts : List Encoder.RawInst) (sourceWindow : ByteArray) : Prop :=
  insts.Forall (fun i => ValidInst i sourceWindow)

-- ============================================================================
-- ## encodeInstList decomposition
-- ============================================================================

-- encodeInstList cons unfolds to encodeOneInst + encodeInstList on rest
-- with sections concatenated.
theorem encodeInstList_cons (inst : Encoder.RawInst)
    (rest : List Encoder.RawInst) (srcLen : Nat)
    (cache : AddressCache.State) (pos : Nat) :
    encodeInstList (inst :: rest) srcLen cache pos =
    let (d, i, a, c', p') := encodeOneInst inst srcLen cache pos
    let (dR, iR, aR, c'', p'') := encodeInstList rest srcLen c' p'
    (d ++ dR, i ++ iR, a ++ aR, c'', p'') := by
  conv_lhs => unfold encodeInstList

-- ============================================================================
-- ## Section size tracking from encodeOneInst
-- ============================================================================

-- Inst section size for ADD (immediate): always 1
-- (already proved as encodeOneInst_add_instSec_size)

-- Inst section size for RUN: 1 + varint(sz).size
theorem encodeOneInst_run_instSec_size (b : UInt8) (sz : Nat)
    (srcLen : Nat) (cache : AddressCache.State) (tgtPos : Nat) :
    let (_, instSec, _, _, _) := encodeOneInst (.run b sz) srcLen cache tgtPos
    instSec.size = 1 + (Varint.encode sz).size := by
  rw [encodeOneInst_run_sections]
  simp only [ByteArray.size_append]
  rfl

-- Data section size for RUN: always 1
theorem encodeOneInst_run_dataSec_size (b : UInt8) (sz : Nat)
    (srcLen : Nat) (cache : AddressCache.State) (tgtPos : Nat) :
    let (dataSec, _, _, _, _) := encodeOneInst (.run b sz) srcLen cache tgtPos
    dataSec.size = 1 := by
  rw [encodeOneInst_run_sections]; rfl

-- Addr section for RUN: empty
theorem encodeOneInst_run_addrSec_empty (b : UInt8) (sz : Nat)
    (srcLen : Nat) (cache : AddressCache.State) (tgtPos : Nat) :
    let (_, _, addrSec, _, _) := encodeOneInst (.run b sz) srcLen cache tgtPos
    addrSec = ByteArray.empty := by
  rw [encodeOneInst_run_sections]

-- Cache unchanged after ADD
theorem encodeOneInst_add_cache (data : ByteArray)
    (h1 : data.size ≥ 1) (h17 : data.size ≤ 17)
    (srcLen : Nat) (cache : AddressCache.State) (tgtPos : Nat) :
    let (_, _, _, c', _) := encodeOneInst (.add data) srcLen cache tgtPos
    c' = cache := by
  rw [encodeOneInst_add_sections data h1 h17]

-- Cache unchanged after RUN
theorem encodeOneInst_run_cache (b : UInt8) (sz : Nat)
    (srcLen : Nat) (cache : AddressCache.State) (tgtPos : Nat) :
    let (_, _, _, c', _) := encodeOneInst (.run b sz) srcLen cache tgtPos
    c' = cache := by
  rw [encodeOneInst_run_sections]

-- ============================================================================
-- ## Varint decode on concatenated ByteArray
-- ============================================================================

-- When a varint is embedded in a larger ByteArray at a known position,
-- Varint.decode reads it correctly.
theorem varint_decode_at_pos (data : ByteArray) (pos : Nat) (n : Nat)
    (h_n : n < 2 ^ 35)
    (h_extract : data.extract pos (pos + (Varint.encode n).size) = Varint.encode n)
    (h_bound : pos + (Varint.encode n).size ≤ data.size) :
    Varint.decode ⟨data, pos⟩ =
    .ok (n, ⟨data, pos + (Varint.encode n).size⟩) :=
  Varint.decode_at_pos n h_n data pos h_bound h_extract

-- ============================================================================
-- ## execHalfInst RUN on concatenated data sections
-- ============================================================================

-- RUN reads 1 byte from data section and repeats it sz times.
-- When data cursor is at position p in concatenated data, and the
-- byte at that position is b, RUN produces repeatByte b sz.
theorem execHalfInst_run_at_pos
    (byte : UInt8) (sz : Nat) (sourceWindow target : ByteArray)
    (dataAll : ByteArray) (dataPos : Nat)
    (addrCursor : Varint.Cursor) (cache : AddressCache.State)
    (here : Nat) (hBound : dataPos < dataAll.size)
    (hByte : dataAll[dataPos]! = byte) :
    Decoder.execHalfInst ⟨.run, 0⟩ sz sourceWindow target
      ⟨dataAll, dataPos⟩ addrCursor cache here =
    .ok (target ++ repeatByte byte sz,
         ⟨dataAll, dataPos + 1⟩, addrCursor, cache) := by
  unfold Decoder.execHalfInst
  simp only [bind, Except.bind]
  rw [Encoder.Proofs.readByte_ok hBound]
  simp only [hByte, repeatByte, pure, Except.pure]

-- ============================================================================
-- ## execHalfInst COPY mode 0 on source window
-- ============================================================================

-- Array extract decomposition: extract start (start+n+1) = [a[start]] ++ extract (start+1) (start+1+n)
private theorem Array.extract_cons' {α : Type} (a : Array α) (start n : Nat)
    (h : start + n + 1 ≤ a.size) :
    a.extract start (start + (n + 1)) =
    #[a[start]'(by omega)] ++ a.extract (start + 1) (start + 1 + n) := by
  ext i
  · simp [Array.size_extract, Array.size_append]; omega
  · rename_i h1 h2
    simp only [Array.size_extract, Array.size_append] at h1 h2
    by_cases hi : i = 0
    · subst hi; simp [Array.getElem_extract]
    · rw [Array.getElem_extract]
      have hi_size : i < (#[a[start]'(by omega)] ++ a.extract (start + 1) (start + 1 + n)).size := by
        simp [Array.size_append, Array.size_extract]; omega
      rw [Array.getElem_append (h := hi_size)]
      simp only [show ¬(i < (#[a[start]'(by omega)]).size) from by simp; omega]
      simp only [dif_neg (show ¬False from id), Array.getElem_extract]
      congr 1; simp; omega

-- ByteArray version of extract_cons
private theorem ByteArray.extract_cons (a : ByteArray) (start n : Nat)
    (h : start + n + 1 ≤ a.size) :
    a.extract start (start + (n + 1)) =
    ByteArray.mk #[a[start]!] ++ a.extract (start + 1) (start + 1 + n) := by
  have hlt : start < a.size := by omega
  apply ByteArray.ext
  rw [ByteArray.data_extract, ByteArray.data_append, ByteArray.data_extract]
  simp only [ByteArray.data, getElem!_pos, hlt]
  exact Array.extract_cons' a.data start n h

-- ByteArray.push = append singleton
private theorem push_eq_append_singleton' (ba : ByteArray) (b : UInt8) :
    ba.push b = ba ++ ByteArray.mk #[b] := by
  apply ByteArray.ext
  simp [ByteArray.data_push, ByteArray.data_append]

-- Extract with equal bounds is empty
private theorem bytearray_extract_eq (a : ByteArray) (k : Nat) :
    a.extract k k = ByteArray.empty := by
  apply ByteArray.ext
  rw [ByteArray.data_extract]
  simp [Array.size_extract]

-- copyLoop for source-only copies: all reads from sourceWindow
theorem copyLoop_source_only (sw tgt : ByteArray) (addr i sz : Nat)
    (h : addr + i + sz ≤ sw.size) :
    Decoder.copyLoop sw tgt addr i sz = tgt ++ sw.extract (addr + i) (addr + i + sz) := by
  induction sz generalizing i tgt with
  | zero =>
    unfold Decoder.copyLoop
    rw [show addr + i + 0 = addr + i from by omega, bytearray_extract_eq]
    exact (bytearray_append_empty tgt).symm
  | succ n ih =>
    have hlt : addr + i < sw.size := by omega
    conv_lhs => unfold Decoder.copyLoop; simp only [if_pos hlt]
    rw [ih (tgt.push (sw[addr + i]!)) (i + 1) (by omega)]
    conv_rhs => rw [ByteArray.extract_cons sw (addr + i) n (by omega)]
    rw [← bytearray_append_assoc, ← push_eq_append_singleton']
    congr 1

-- copyBytes for source-only copies: first branch fires directly
theorem copyBytes_source_only (sw tgt : ByteArray) (addr sz : Nat)
    (h : addr + sz ≤ sw.size) :
    Decoder.copyBytes sw tgt addr sz = tgt ++ sw.extract addr (addr + sz) := by
  unfold Decoder.copyBytes
  simp only [if_pos h]

-- COPY mode 0 from source window: when address is within source and
-- the addr section has the encoded address at the right position.
theorem execHalfInst_copy_source_at_pos
    (addr sz instSz : Nat) (sourceWindow target : ByteArray)
    (dataCursor : Varint.Cursor)
    (addrAll : ByteArray) (addrPos : Nat)
    (cache : AddressCache.State)
    (here : Nat)
    (hAddr : addr + sz ≤ sourceWindow.size)
    (hAddrLt : addr < sourceWindow.size + target.size)
    (hAddrDecode : AddressCache.decode 0 here ⟨addrAll, addrPos⟩ cache =
      .ok (addr, ⟨addrAll, addrPos + (Varint.encode addr).size⟩, cache.update addr)) :
    Decoder.execHalfInst ⟨.copy 0, instSz⟩ sz sourceWindow target
      dataCursor ⟨addrAll, addrPos⟩ cache here =
    .ok (target ++ sourceWindow.extract addr (addr + sz),
         dataCursor,
         ⟨addrAll, addrPos + (Varint.encode addr).size⟩,
         cache.update addr) := by
  unfold Decoder.execHalfInst
  simp only [bind, Except.bind, pure, Except.pure, show UInt8.toNat 0 = 0 from rfl]
  rw [hAddrDecode]
  simp only [pure, Except.pure, bind, Except.bind]
  -- addr < windowSize check: addr < sw.size + target.size
  rw [if_neg (show ¬(addr ≥ sourceWindow.size + target.size) from by omega)]
  -- copyBytes gives the right result
  rw [copyBytes_source_only sourceWindow target addr sz (by omega)]

-- ============================================================================
-- ## decodeOneStep for RUN on concatenated sections
-- ============================================================================

-- When inst section has RUN opcode (0) at instPos followed by varint(sz),
-- data section has byte at dataPos, and addr section is untouched:
theorem decodeOneStep_run_in_concat
    (byte : UInt8) (sz : Nat)
    (sourceWindow target : ByteArray)
    (instData : ByteArray) (instPos : Nat)
    (dataAll : ByteArray) (dataPos : Nat)
    (addrAll : ByteArray) (addrPos : Nat)
    (cache : AddressCache.State)
    (hInstBound : instPos < instData.size)
    (hInstByte : instData[instPos]! = 0)
    (hVarint : Varint.decode ⟨instData, instPos + 1⟩ =
      .ok (sz, ⟨instData, instPos + 1 + (Varint.encode sz).size⟩))
    (hDataBound : dataPos < dataAll.size)
    (hDataByte : dataAll[dataPos]! = byte) :
    decodeOneStep sourceWindow target
      ⟨instData, instPos⟩ ⟨dataAll, dataPos⟩
      ⟨addrAll, addrPos⟩ cache =
    .ok (target ++ repeatByte byte sz,
         ⟨instData, instPos + 1 + (Varint.encode sz).size⟩,
         ⟨dataAll, dataPos + 1⟩,
         ⟨addrAll, addrPos⟩,
         cache) := by
  unfold decodeOneStep
  simp only [bind, Except.bind]
  -- Read opcode byte (0 = RUN with varint size)
  rw [Encoder.Proofs.readByte_ok hInstBound]
  simp only [hInstByte]
  rw [lookup_run_entry]
  conv => simp only []
  -- inst1.size == 0 is true, inst1.type != .noop is true → read varint
  simp only [show ((0 : Nat) == 0) = true from by decide,
    show ((InstType.run != InstType.noop) = true) from by decide,
    Bool.true_and, ↓reduceIte]
  -- Decode varint for size
  rw [hVarint]
  simp only [pure, Except.pure, bind, Except.bind]
  -- inst2 is noop, no second instruction
  simp only [show (InstType.noop != InstType.noop) = false from by decide,
    show ((0 : Nat) == 0 && false) = false from by decide,
    Bool.false_eq_true, ite_false, pure, Except.pure, bind, Except.bind, ↓reduceIte]
  -- Execute the RUN instruction
  rw [execHalfInst_run_at_pos byte sz sourceWindow target dataAll dataPos
      ⟨addrAll, addrPos⟩ cache (sourceWindow.size + target.size) hDataBound hDataByte]

-- ============================================================================
-- ## decodeOneStep for COPY mode 0 on concatenated sections
-- ============================================================================

-- When inst section has COPY mode 0 opcode at instPos (immediate size 4..18),
-- addr section has the encoded address, and source window has the data:
theorem decodeOneStep_copy_mode0_in_concat
    (addr sz : Nat)
    (sourceWindow target : ByteArray)
    (instData : ByteArray) (instPos : Nat)
    (dataAll : ByteArray) (dataPos : Nat)
    (addrAll : ByteArray) (addrPos : Nat)
    (cache : AddressCache.State)
    (hSz4 : sz ≥ 4) (hSz18 : sz ≤ 18)
    (hAddr : addr + sz ≤ sourceWindow.size)
    (hInstBound : instPos < instData.size)
    (hInstByte : instData[instPos]! = (sz + 16).toUInt8)
    (hAddrDecode : AddressCache.decode 0
      (sourceWindow.size + target.size)
      ⟨addrAll, addrPos⟩ cache =
      .ok (addr,
           ⟨addrAll, addrPos + (Varint.encode addr).size⟩,
           cache.update addr)) :
    decodeOneStep sourceWindow target
      ⟨instData, instPos⟩ ⟨dataAll, dataPos⟩
      ⟨addrAll, addrPos⟩ cache =
    .ok (target ++ sourceWindow.extract addr (addr + sz),
         ⟨instData, instPos + 1⟩,
         ⟨dataAll, dataPos⟩,
         ⟨addrAll, addrPos + (Varint.encode addr).size⟩,
         cache.update addr) := by
  unfold decodeOneStep
  simp only [bind, Except.bind]
  -- Read opcode byte
  rw [Encoder.Proofs.readByte_ok hInstBound]
  simp only [hInstByte]
  -- Lookup gives COPY mode 0 with immediate size
  rw [lookup_copy_mode0_entry sz hSz4 hSz18]
  conv => simp only []
  -- inst1.size = sz ≠ 0, so no varint read for size; inst1.type = .copy 0 ≠ .noop
  have hne : sz ≠ 0 := by omega
  simp only [show (sz == 0) = false from beq_eq_false_iff_ne.mpr hne,
    Bool.false_and,
    show ((InstType.copy 0 != InstType.noop) = true) from by decide,
    show (InstType.noop != InstType.noop) = false from by decide,
    show ((0 : Nat) == 0 && false) = false from by decide,
    Bool.false_eq_true, ite_false, pure, Except.pure, bind, Except.bind, ↓reduceIte]
  -- Execute COPY using execHalfInst_copy_source_at_pos
  rw [execHalfInst_copy_source_at_pos addr sz sz sourceWindow target
      ⟨dataAll, dataPos⟩ addrAll addrPos cache
      (sourceWindow.size + target.size) hAddr (by omega) hAddrDecode]

-- When inst section has COPY varint opcode at instPos (mode m, unsized),
-- followed by varint(sz), addr section has encoded address:
theorem decodeOneStep_copy_varint_in_concat
    (addr sz mode : Nat)
    (sourceWindow target : ByteArray)
    (instData : ByteArray) (instPos : Nat)
    (dataAll : ByteArray) (dataPos : Nat)
    (addrAll : ByteArray) (addrPos addrPos' : Nat)
    (cache cache' : AddressCache.State)
    (hSz : sz ≥ 1) (hSzBound : sz < 2 ^ 31)
    (hMode : mode ≤ 8)
    (hAddr : addr + sz ≤ sourceWindow.size)
    (hInstBound : instPos < instData.size)
    (hInstByte : instData[instPos]! = (19 + mode * 16 : Nat).toUInt8)
    (hVarint : Varint.decode ⟨instData, instPos + 1⟩ =
      .ok (sz, ⟨instData, instPos + 1 + (Varint.encode sz).size⟩))
    (hAddrDecode : AddressCache.decode mode
      (sourceWindow.size + target.size)
      ⟨addrAll, addrPos⟩ cache =
      .ok (addr, ⟨addrAll, addrPos'⟩, cache')) :
    decodeOneStep sourceWindow target
      ⟨instData, instPos⟩ ⟨dataAll, dataPos⟩
      ⟨addrAll, addrPos⟩ cache =
    .ok (target ++ sourceWindow.extract addr (addr + sz),
         ⟨instData, instPos + 1 + (Varint.encode sz).size⟩,
         ⟨dataAll, dataPos⟩,
         ⟨addrAll, addrPos'⟩,
         cache') := by
  unfold decodeOneStep
  simp only [bind, Except.bind]
  rw [Encoder.Proofs.readByte_ok hInstBound]
  simp only [hInstByte]
  rw [CodeTable.Proofs.lookup_copy_unsized mode hMode]
  conv => simp only []
  -- inst1.size = 0 and inst1.type = .copy m.toUInt8 ≠ .noop → read varint for size
  simp only [show ((0 : Nat) == 0) = true from by decide,
    show ((InstType.copy mode.toUInt8 != InstType.noop) = true) from rfl,
    Bool.true_and, ↓reduceIte]
  rw [hVarint]
  simp only [pure, Except.pure, bind, Except.bind]
  -- inst2 is noop
  simp only [show (InstType.noop != InstType.noop) = false from by decide,
    show ((0 : Nat) == 0 && false) = false from by decide,
    Bool.false_eq_true, ite_false, pure, Except.pure, bind, Except.bind, ↓reduceIte]
  -- Execute COPY
  have hModeRoundtrip : mode.toUInt8.toNat = mode := by
    simp [UInt8.toNat, Nat.toUInt8, BitVec.toNat]; omega
  unfold Decoder.execHalfInst
  simp only [bind, Except.bind, pure, Except.pure]
  rw [hModeRoundtrip, hAddrDecode]
  simp only [pure, Except.pure, bind, Except.bind]
  rw [if_neg (show ¬(addr ≥ sourceWindow.size + target.size) from by omega)]
  rw [copyBytes_source_only sourceWindow target addr sz (by omega)]

-- ============================================================================
-- ## Target size tracking through execInstSpec
-- ============================================================================

theorem execInstSpec_add_size (data : ByteArray) (src target : ByteArray) :
    (execInstSpec (.add data) src target).size = target.size + data.size := by
  simp [execInstSpec, ByteArray.size_append]

theorem execInstSpec_run_size (b : UInt8) (sz : Nat) (src target : ByteArray) :
    (execInstSpec (.run b sz) src target).size = target.size + sz := by
  simp only [execInstSpec, repeatByte]
  rw [ByteArray.size_append]
  simp only [ByteArray.size, Array.size_replicate]

theorem execInstSpec_copy_size (addr sz : Nat) (src target : ByteArray)
    (h : addr + sz ≤ src.size) :
    (execInstSpec (.copy addr sz) src target).size = target.size + sz := by
  simp only [execInstSpec, ByteArray.size_append, ByteArray.size_extract]
  omega

-- ============================================================================
-- ## encodeOneInst matches the mode chosen by encodeAddress
-- ============================================================================

-- tryNearModes: output mode ≥ 2 or output = (input mode, input enc)
private theorem tryNearModes_result (s : AddressCache.State) (addr m : Nat) (enc : ByteArray)
    : (fuel : Nat) →
    let r := s.tryNearModes addr m enc fuel
    r.1 ≥ 2 ∨ r = (m, enc)
  | 0 => Or.inr rfl
  | fuel + 1 => by
    simp only [AddressCache.State.tryNearModes]
    split
    · split
      · simp only []
        let i := s.sNear - fuel - 1
        let encN := Varint.encode (addr - s.near[i]!)
        have ih := tryNearModes_result s addr (2 + i) encN fuel
        rcases ih with hge | heq
        · left; exact hge
        · rw [heq]; left; omega
      · simp only []
        exact tryNearModes_result s addr m enc fuel
    · simp only []
      exact tryNearModes_result s addr m enc fuel

-- trySameModes: output mode ≥ 2+sNear or output = (input mode, input enc)
private theorem trySameModes_result (s : AddressCache.State) (addr m : Nat) (enc : ByteArray)
    : (fuel : Nat) →
    let r := s.trySameModes addr m enc fuel
    r.1 ≥ 2 + s.sNear ∨ r = (m, enc)
  | 0 => Or.inr rfl
  | fuel + 1 => by
    simp only [AddressCache.State.trySameModes]
    split
    · left; omega
    · exact trySameModes_result s addr m enc fuel

-- When encodeAddress picks mode 0, the encoded bytes are Varint.encode addr.
theorem encodeAddress_mode0_bytes (cache : AddressCache.State) (addr here : Nat)
    (hMode : (cache.encodeAddress addr here).1 = 0) :
    (cache.encodeAddress addr here).2.1 = Varint.encode addr := by
  unfold AddressCache.State.encodeAddress at hMode ⊢
  -- After mode 0/1 choice, tryNearModes, trySameModes
  set init : Nat × ByteArray :=
    if here > addr then
      let enc1 := Varint.encode (here - addr)
      if enc1.size < (Varint.encode addr).size then (1, enc1) else (0, Varint.encode addr)
    else (0, Varint.encode addr) with h_init
  set afterNear := cache.tryNearModes addr init.1 init.2 cache.sNear with h_aN
  set afterSame := cache.trySameModes addr afterNear.1 afterNear.2 cache.sSame with h_aS
  -- Final mode is afterSame.1 = 0
  change afterSame.1 = 0 at hMode
  show afterSame.2 = Varint.encode addr
  -- trySameModes: mode ≥ 2+sNear or unchanged
  have hSame := trySameModes_result cache addr afterNear.1 afterNear.2 cache.sSame
  rcases hSame with hge | heq
  · -- mode ≥ 2+sNear, but mode = 0, contradiction
    rw [h_aS] at hMode; omega
  · -- trySameModes unchanged
    rw [h_aS, heq] at hMode ⊢
    simp only [] at hMode ⊢
    -- tryNearModes: mode ≥ 2 or unchanged
    have hNear := tryNearModes_result cache addr init.1 init.2 cache.sNear
    rcases hNear with hge | heq2
    · -- mode ≥ 2, but mode = 0, contradiction
      rw [h_aN] at hMode; omega
    · -- tryNearModes unchanged
      rw [h_aN, heq2] at hMode ⊢
      simp only [] at hMode ⊢
      -- init: analyze mode 0/1 choice
      simp only [h_init] at hMode ⊢
      by_cases hgt : here > addr
      · rw [if_pos hgt] at hMode ⊢
        by_cases henc : (Varint.encode (here - addr)).size < (Varint.encode addr).size
        · rw [if_pos henc] at hMode; omega
        · rw [if_neg henc] at hMode ⊢
      · rw [if_neg hgt] at hMode ⊢

-- ============================================================================
-- ## encodeOneInst for COPY mode 0 (general)
-- ============================================================================

-- When encodeAddress picks mode 0, encodeOneInst for COPY produces:
-- dataSec = empty, instSec = #[opcode], addrSec = encoded addr bytes
theorem encodeOneInst_copy_mode0_sections (addr sz : Nat)
    (srcLen : Nat) (cache : AddressCache.State) (tgtPos : Nat)
    (hSz4 : sz ≥ 4) (hSz18 : sz ≤ 18)
    (hMode : (cache.encodeAddress addr (srcLen + tgtPos)).1 = 0) :
    let (_mode, addrBytes, cache') := cache.encodeAddress addr (srcLen + tgtPos)
    encodeOneInst (.copy addr sz) srcLen cache tgtPos =
    (ByteArray.empty, ByteArray.mk #[(sz + 16).toUInt8],
     addrBytes, cache', tgtPos + sz) := by
  simp only [encodeOneInst]
  match h_ea : cache.encodeAddress addr (srcLen + tgtPos) with
  | (mode, addrBytes, cache') =>
    simp only [h_ea]
    have hm0 : mode = 0 := by
      have := hMode; rw [h_ea] at this; exact this
    subst hm0
    rw [findSingleOpcode_copy_mode0_immediate sz addr hSz4 hSz18]
    simp only [Bool.false_eq_true, ite_false]

-- ============================================================================
-- ## Data preservation: cursor operations preserve .data fields
-- ============================================================================

-- readByte preserves .data
private theorem readByte_data (c : Varint.Cursor) (b : UInt8) (c' : Varint.Cursor)
    (h : c.readByte = .ok (b, c')) : c'.data = c.data := by
  unfold Varint.Cursor.readByte at h
  by_cases hp : c.pos < c.data.size
  · simp [hp] at h; rw [← h.2]
  · simp [hp] at h

-- readBytes preserves .data
private theorem readBytes_data (c : Varint.Cursor) (n : Nat) (bs : ByteArray) (c' : Varint.Cursor)
    (h : c.readBytes n = .ok (bs, c')) : c'.data = c.data := by
  unfold Varint.Cursor.readBytes at h
  by_cases hp : c.pos + n ≤ c.data.size
  · simp [hp] at h; rw [← h.2]
  · simp [hp] at h

-- AddressCache.decode preserves addr cursor .data
private theorem addr_decode_data (mode here : Nat) (ac : Varint.Cursor)
    (cache : AddressCache.State) (addr : Nat) (ac' : Varint.Cursor)
    (cache' : AddressCache.State)
    (h : AddressCache.decode mode here ac cache = .ok (addr, ac', cache')) :
    ac'.data = ac.data := by
  unfold AddressCache.decode at h
  simp only [bind, Except.bind] at h
  by_cases hm0 : (mode == 0) = true
  · simp only [hm0, ↓reduceIte] at h
    match hv : Varint.decode ac with
    | .ok (v, c) =>
      rw [hv] at h; simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
      have hcd := CursorReloc.varint_decodeLoop_data ac.data ac.pos 0 5 v c
        (by simp only [Varint.decode] at hv; exact hv)
      rw [← h.2.1]; exact hcd
    | .error e => rw [hv] at h; simp at h
  · simp only [hm0, Bool.false_eq_true, ↓reduceIte] at h
    by_cases hm1 : (mode == 1) = true
    · simp only [hm1, ↓reduceIte] at h
      match hv : Varint.decode ac with
      | .ok (v, c) =>
        rw [hv] at h; simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
        have hcd := CursorReloc.varint_decodeLoop_data ac.data ac.pos 0 5 v c
          (by simp only [Varint.decode] at hv; exact hv)
        rw [← h.2.1]; exact hcd
      | .error e => rw [hv] at h; simp at h
    · simp only [hm1, Bool.false_eq_true, ↓reduceIte] at h
      by_cases hmn : mode < 2 + cache.sNear
      · simp only [if_pos hmn] at h
        match hv : Varint.decode ac with
        | .ok (v, c) =>
          rw [hv] at h; simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
          have hcd := CursorReloc.varint_decodeLoop_data ac.data ac.pos 0 5 v c
            (by simp only [Varint.decode] at hv; exact hv)
          rw [← h.2.1]; exact hcd
        | .error e => rw [hv] at h; simp at h
      · simp only [if_neg hmn] at h
        by_cases hms : mode < 2 + cache.sNear + cache.sSame
        · simp only [if_pos hms] at h
          match hrb : ac.readByte with
          | .ok (b, c) =>
            rw [hrb] at h; simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
            rw [← h.2.1]; exact readByte_data ac b c hrb
          | .error e => rw [hrb] at h; simp at h
        · simp only [if_neg hms] at h; simp at h

-- execHalfInst preserves data cursor .data and addr cursor .data
private theorem execHalfInst_data_preserved
    (inst : HalfInst) (instSize : Nat) (sw tgt : ByteArray)
    (dc ac : Varint.Cursor) (cache : AddressCache.State) (here : Nat)
    (tgt' : ByteArray) (dc' ac' : Varint.Cursor) (cache' : AddressCache.State)
    (h : Decoder.execHalfInst inst instSize sw tgt dc ac cache here =
      .ok (tgt', dc', ac', cache')) :
    dc'.data = dc.data ∧ ac'.data = ac.data := by
  unfold Decoder.execHalfInst at h
  rcases inst with ⟨ty, _⟩
  cases ty with
  | noop =>
    simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
    exact ⟨h.2.1 ▸ rfl, h.2.2.1 ▸ rfl⟩
  | add =>
    simp only [bind, Except.bind, pure, Except.pure] at h
    by_cases hb : (!dc.hasBytes instSize) = true
    · simp only [hb, ↓reduceIte] at h; simp at h
    · simp only [hb, Bool.false_eq_true, ↓reduceIte] at h
      match hrb : dc.readBytes instSize with
      | .ok (bs, c) =>
        rw [hrb] at h; simp only [Except.ok.injEq, Prod.mk.injEq] at h
        exact ⟨h.2.1 ▸ readBytes_data dc instSize bs c hrb, h.2.2.1 ▸ rfl⟩
      | .error e => rw [hrb] at h; simp at h
  | run =>
    simp only [bind, Except.bind, pure, Except.pure] at h
    match hrb : dc.readByte with
    | .ok (b, c) =>
      rw [hrb] at h; simp only [Except.ok.injEq, Prod.mk.injEq] at h
      exact ⟨h.2.1 ▸ readByte_data dc b c hrb, h.2.2.1 ▸ rfl⟩
    | .error e => rw [hrb] at h; simp at h
  | copy mode =>
    simp only [bind, Except.bind, pure, Except.pure] at h
    match had : AddressCache.decode mode.toNat here ac cache with
    | .ok (addr_val, ac_new, cache_new) =>
      rw [had] at h; simp only [bind, Except.bind, pure, Except.pure] at h
      by_cases hbounds : addr_val ≥ sw.size + tgt.size
      · simp only [ge_iff_le, if_pos hbounds] at h; simp at h
      · simp only [ge_iff_le, if_neg hbounds,
            Except.ok.injEq, Prod.mk.injEq] at h
        exact ⟨h.2.1 ▸ rfl, h.2.2.1 ▸ addr_decode_data mode.toNat here ac cache addr_val ac_new cache_new had⟩
    | .error e => rw [had] at h; simp at h

-- decodeOneStep preserves all cursor .data fields
set_option maxHeartbeats 400000 in
private theorem decodeOneStep_data_preserved
    (sw tgt : ByteArray) (ic dc ac : Varint.Cursor) (cache : AddressCache.State)
    (tgt' : ByteArray) (ic' dc' ac' : Varint.Cursor) (cache' : AddressCache.State)
    (h : decodeOneStep sw tgt ic dc ac cache =
      .ok (tgt', ic', dc', ac', cache')) :
    ic'.data = ic.data ∧ dc'.data = dc.data ∧ ac'.data = ac.data := by
  unfold decodeOneStep at h
  simp only [bind, Except.bind] at h
  -- Step 1: readByte on ic
  match hrb : ic.readByte with
  | .error e => rw [hrb] at h; simp at h
  | .ok (opcode, ic1) =>
    rw [hrb] at h; simp only [Except.bind] at h
    have hic1d := readByte_data ic opcode ic1 hrb
    set entry := CodeTable.lookup opcode with h_entry
    -- Step 2: resolve inst1 size
    by_cases h_sz1 : (entry.inst1.size == 0 && entry.inst1.type != .noop) = true
    · -- Varint for inst1 size
      simp only [h_sz1, ↓reduceIte, bind, Except.bind] at h
      match hv1 : Varint.decode ic1 with
      | .error e => rw [hv1] at h; simp at h
      | .ok (sz1, ic2) =>
        rw [hv1] at h; simp only [pure, Except.pure, Except.bind] at h
        have hic2d := CursorReloc.varint_decodeLoop_data ic1.data ic1.pos 0 5 sz1 ic2
          (by simp only [Varint.decode] at hv1; exact hv1)
        -- inst1 must be non-noop
        have h_nn1 : (entry.inst1.type != .noop) = true :=
          (Bool.and_eq_true .. ▸ h_sz1).2
        simp only [h_nn1, ↓reduceIte, Except.bind] at h
        -- Step 3: exec inst1
        match hexec1 : Decoder.execHalfInst entry.inst1 sz1 sw tgt dc ac cache
            (sw.size + tgt.size) with
        | .error e => rw [hexec1] at h; simp at h
        | .ok (tgt1, dc1, ac1, cache1) =>
          rw [hexec1] at h; simp only [Except.bind] at h
          have ⟨hdc1d, hac1d⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec1
          -- Step 4: resolve inst2 size
          by_cases h_sz2 : (entry.inst2.size == 0 && entry.inst2.type != .noop) = true
          · simp only [h_sz2, ↓reduceIte, bind, Except.bind] at h
            match hv2 : Varint.decode ic2 with
            | .error e => rw [hv2] at h; simp at h
            | .ok (sz2, ic3) =>
              rw [hv2] at h; simp only [pure, Except.pure, Except.bind] at h
              have hic3d := CursorReloc.varint_decodeLoop_data ic2.data ic2.pos 0 5 sz2 ic3
                (by simp only [Varint.decode] at hv2; exact hv2)
              have h_nn2 : (entry.inst2.type != .noop) = true :=
                (Bool.and_eq_true .. ▸ h_sz2).2
              simp only [h_nn2, ↓reduceIte, Except.bind] at h
              match hexec2 : Decoder.execHalfInst entry.inst2 sz2 sw tgt1 dc1 ac1 cache1
                  (sw.size + tgt1.size) with
              | .error e => rw [hexec2] at h; simp at h
              | .ok (tgt2, dc2, ac2, cache2) =>
                rw [hexec2] at h
                have ⟨hdc2d, hac2d⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
                simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
                exact ⟨h.2.1 ▸ (hic3d ▸ hic2d ▸ hic1d),
                       h.2.2.1 ▸ (hdc2d ▸ hdc1d),
                       h.2.2.2.1 ▸ (hac2d ▸ hac1d)⟩
          · simp only [h_sz2, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h
            by_cases h_nn2 : (entry.inst2.type != .noop) = true
            · simp only [h_nn2, ↓reduceIte, Except.bind] at h
              match hexec2 : Decoder.execHalfInst entry.inst2 entry.inst2.size sw tgt1 dc1 ac1 cache1
                  (sw.size + tgt1.size) with
              | .error e => rw [hexec2] at h; simp at h
              | .ok (tgt2, dc2, ac2, cache2) =>
                rw [hexec2] at h
                have ⟨hdc2d, hac2d⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
                simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
                exact ⟨h.2.1 ▸ (hic2d ▸ hic1d),
                       h.2.2.1 ▸ (hdc2d ▸ hdc1d),
                       h.2.2.2.1 ▸ (hac2d ▸ hac1d)⟩
            · simp only [h_nn2, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
                  Except.ok.injEq, Prod.mk.injEq] at h
              exact ⟨h.2.1 ▸ (hic2d ▸ hic1d), h.2.2.1 ▸ hdc1d, h.2.2.2.1 ▸ hac1d⟩
    · -- inst1 has immediate size
      simp only [h_sz1, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h
      by_cases h_nn1 : (entry.inst1.type != .noop) = true
      · simp only [h_nn1, ↓reduceIte, Except.bind] at h
        match hexec1 : Decoder.execHalfInst entry.inst1 entry.inst1.size sw tgt dc ac cache
            (sw.size + tgt.size) with
        | .error e => rw [hexec1] at h; simp at h
        | .ok (tgt1, dc1, ac1, cache1) =>
          rw [hexec1] at h; simp only [Except.bind] at h
          have ⟨hdc1d, hac1d⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec1
          by_cases h_sz2 : (entry.inst2.size == 0 && entry.inst2.type != .noop) = true
          · simp only [h_sz2, ↓reduceIte, bind, Except.bind] at h
            match hv2 : Varint.decode ic1 with
            | .error e => rw [hv2] at h; simp at h
            | .ok (sz2, ic2) =>
              rw [hv2] at h; simp only [pure, Except.pure, Except.bind] at h
              have hic2d := CursorReloc.varint_decodeLoop_data ic1.data ic1.pos 0 5 sz2 ic2
                (by simp only [Varint.decode] at hv2; exact hv2)
              have h_nn2 : (entry.inst2.type != .noop) = true :=
                (Bool.and_eq_true .. ▸ h_sz2).2
              simp only [h_nn2, ↓reduceIte, Except.bind] at h
              match hexec2 : Decoder.execHalfInst entry.inst2 sz2 sw tgt1 dc1 ac1 cache1
                  (sw.size + tgt1.size) with
              | .error e => rw [hexec2] at h; simp at h
              | .ok (tgt2, dc2, ac2, cache2) =>
                rw [hexec2] at h
                have ⟨hdc2d, hac2d⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
                simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
                exact ⟨h.2.1 ▸ (hic2d ▸ hic1d),
                       h.2.2.1 ▸ (hdc2d ▸ hdc1d),
                       h.2.2.2.1 ▸ (hac2d ▸ hac1d)⟩
          · simp only [h_sz2, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h
            by_cases h_nn2 : (entry.inst2.type != .noop) = true
            · simp only [h_nn2, ↓reduceIte, Except.bind] at h
              match hexec2 : Decoder.execHalfInst entry.inst2 entry.inst2.size sw tgt1 dc1 ac1 cache1
                  (sw.size + tgt1.size) with
              | .error e => rw [hexec2] at h; simp at h
              | .ok (tgt2, dc2, ac2, cache2) =>
                rw [hexec2] at h
                have ⟨hdc2d, hac2d⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
                simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
                exact ⟨h.2.1 ▸ hic1d, h.2.2.1 ▸ (hdc2d ▸ hdc1d), h.2.2.2.1 ▸ (hac2d ▸ hac1d)⟩
            · simp only [h_nn2, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
                  Except.ok.injEq, Prod.mk.injEq] at h
              exact ⟨h.2.1 ▸ hic1d, h.2.2.1 ▸ hdc1d, h.2.2.2.1 ▸ hac1d⟩
      · -- inst1 is noop
        simp only [h_nn1, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h
        by_cases h_sz2 : (entry.inst2.size == 0 && entry.inst2.type != .noop) = true
        · simp only [h_sz2, ↓reduceIte, bind, Except.bind] at h
          match hv2 : Varint.decode ic1 with
          | .error e => rw [hv2] at h; simp at h
          | .ok (sz2, ic2) =>
            rw [hv2] at h; simp only [pure, Except.pure, Except.bind] at h
            have hic2d := CursorReloc.varint_decodeLoop_data ic1.data ic1.pos 0 5 sz2 ic2
              (by simp only [Varint.decode] at hv2; exact hv2)
            have h_nn2 : (entry.inst2.type != .noop) = true :=
              (Bool.and_eq_true .. ▸ h_sz2).2
            simp only [h_nn2, ↓reduceIte, Except.bind] at h
            match hexec2 : Decoder.execHalfInst entry.inst2 sz2 sw tgt dc ac cache
                (sw.size + tgt.size) with
            | .error e => rw [hexec2] at h; simp at h
            | .ok (tgt2, dc2, ac2, cache2) =>
              rw [hexec2] at h
              have ⟨hdc2d, hac2d⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
              simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
              exact ⟨h.2.1 ▸ (hic2d ▸ hic1d), h.2.2.1 ▸ hdc2d, h.2.2.2.1 ▸ hac2d⟩
        · simp only [h_sz2, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h
          by_cases h_nn2 : (entry.inst2.type != .noop) = true
          · simp only [h_nn2, ↓reduceIte, Except.bind] at h
            match hexec2 : Decoder.execHalfInst entry.inst2 entry.inst2.size sw tgt dc ac cache
                (sw.size + tgt.size) with
            | .error e => rw [hexec2] at h; simp at h
            | .ok (tgt2, dc2, ac2, cache2) =>
              rw [hexec2] at h
              have ⟨hdc2d, hac2d⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
              simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
              exact ⟨h.2.1 ▸ hic1d, h.2.2.1 ▸ hdc2d, h.2.2.2.1 ▸ hac2d⟩
          · simp only [h_nn2, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
                Except.ok.injEq, Prod.mk.injEq] at h
            exact ⟨h.2.1 ▸ hic1d, h.2.2.1 ▸ rfl, h.2.2.2.1 ▸ rfl⟩

-- ============================================================================
-- ## Cursor relocation for decodeOneStep and decodeLoop
-- ============================================================================

-- decodeOneStep with relocated cursors produces same result with shifted positions
theorem decodeOneStep_reloc_ok
    (sourceWindow target : ByteArray)
    (pfx_i sfx_i pfx_d sfx_d pfx_a sfx_a : ByteArray)
    (ki kd ka : Nat) (cache : AddressCache.State)
    (target' : ByteArray) (oi od oa : Nat) (cache' : AddressCache.State)
    (h : decodeOneStep sourceWindow target
      ⟨sfx_i, ki⟩ ⟨sfx_d, kd⟩ ⟨sfx_a, ka⟩ cache =
      .ok (target', ⟨sfx_i, oi⟩, ⟨sfx_d, od⟩, ⟨sfx_a, oa⟩, cache')) :
    decodeOneStep sourceWindow target
      ⟨pfx_i ++ sfx_i, pfx_i.size + ki⟩
      ⟨pfx_d ++ sfx_d, pfx_d.size + kd⟩
      ⟨pfx_a ++ sfx_a, pfx_a.size + ka⟩ cache =
      .ok (target', ⟨pfx_i ++ sfx_i, pfx_i.size + oi⟩,
           ⟨pfx_d ++ sfx_d, pfx_d.size + od⟩,
           ⟨pfx_a ++ sfx_a, pfx_a.size + oa⟩, cache') := by
  unfold decodeOneStep at h ⊢
  simp only [bind, Except.bind] at h ⊢
  -- Step 1: readByte on inst cursor
  have hki : ki < sfx_i.size := by
    by_contra hki
    simp only [Varint.Cursor.readByte, show ¬(ki < sfx_i.size) from hki, ↓reduceIte] at h
    simp at h
  rw [show Varint.Cursor.readByte ⟨sfx_i, ki⟩ = .ok (sfx_i[ki]!, ⟨sfx_i, ki + 1⟩)
    from by unfold Varint.Cursor.readByte; simp [hki]] at h
  rw [CursorReloc.readByte_reloc pfx_i sfx_i ki hki]
  simp only [Except.bind] at h ⊢
  -- Both sides now have the same opcode sfx_i[ki]!, same entry
  set entry := CodeTable.lookup sfx_i[ki]! with h_entry
  -- Step 2: resolve inst1 size
  by_cases h_sz1_cond : (entry.inst1.size == 0 && entry.inst1.type != .noop) = true
  · -- Varint decode for inst1 size
    simp only [h_sz1_cond, ↓reduceIte, bind, Except.bind] at h ⊢
    match hv1 : Varint.decode ⟨sfx_i, ki + 1⟩ with
    | .error e => rw [hv1] at h; simp at h
    | .ok (sz1, c1) =>
      rw [hv1] at h; simp only [pure, Except.pure, Except.bind] at h ⊢
      have hc1d : c1.data = sfx_i :=
        CursorReloc.varint_decodeLoop_data sfx_i (ki + 1) 0 5 sz1 c1
          (by simp only [Varint.decode] at hv1; exact hv1)
      obtain ⟨c1d, c1p⟩ := c1; simp only [Varint.Cursor.data] at hc1d; symm at hc1d; subst hc1d
      rw [show pfx_i.size + ki + 1 = pfx_i.size + (ki + 1) from by omega]
      rw [CursorReloc.varint_decode_reloc_ok pfx_i sfx_i (ki + 1) sz1 c1p hv1]
      simp only [pure, Except.pure, Except.bind] at h ⊢
      -- Step 3: exec inst1
      -- Must be non-noop (since we entered varint branch with inst1.type != .noop)
      have h_noop1 : (entry.inst1.type != .noop) = true := by
        have := (Bool.and_eq_true .. ▸ h_sz1_cond); exact this.2
      simp only [h_noop1, ↓reduceIte, Except.bind] at h ⊢
      match hexec1 : Decoder.execHalfInst entry.inst1 sz1 sourceWindow target
          ⟨sfx_d, kd⟩ ⟨sfx_a, ka⟩ cache (sourceWindow.size + target.size) with
      | .error e => rw [hexec1] at h; simp at h
      | .ok (tgt1, dc1, ac1, cache1) =>
        rw [hexec1] at h; simp only [Except.bind] at h
        have ⟨hdc1, hac1⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec1
        obtain ⟨dc1d, dp1⟩ := dc1; simp only [Varint.Cursor.data] at hdc1; symm at hdc1; subst hdc1
        obtain ⟨ac1d, ap1⟩ := ac1; simp only [Varint.Cursor.data] at hac1; symm at hac1; subst hac1
        rw [CursorReloc.execHalfInst_reloc_ok entry.inst1 sz1 sourceWindow target
            pfx_d sfx_d kd pfx_a sfx_a ka cache (sourceWindow.size + target.size)
            tgt1 dp1 ap1 cache1 hexec1]
        simp only [Except.bind] at h ⊢
        -- Step 4: resolve inst2 size
        by_cases h_sz2_cond : (entry.inst2.size == 0 && entry.inst2.type != .noop) = true
        · -- Varint decode for inst2 size
          simp only [h_sz2_cond, ↓reduceIte, bind, Except.bind] at h ⊢
          match hv2 : Varint.decode ⟨sfx_i, c1p⟩ with
          | .error e => rw [hv2] at h; simp at h
          | .ok (sz2, c2) =>
            rw [hv2] at h; simp only [pure, Except.pure, Except.bind] at h ⊢
            have hc2d : c2.data = sfx_i :=
              CursorReloc.varint_decodeLoop_data sfx_i c1p 0 5 sz2 c2
                (by simp only [Varint.decode] at hv2; exact hv2)
            obtain ⟨c2d, c2p⟩ := c2; simp only [Varint.Cursor.data] at hc2d; symm at hc2d; subst hc2d
            rw [CursorReloc.varint_decode_reloc_ok pfx_i sfx_i c1p sz2 c2p hv2]
            simp only [pure, Except.pure, Except.bind] at h ⊢
            -- Step 5: exec inst2
            have h_noop2 : (entry.inst2.type != .noop) = true := by
              have := (Bool.and_eq_true .. ▸ h_sz2_cond); exact this.2
            simp only [h_noop2, ↓reduceIte, Except.bind] at h ⊢
            match hexec2 : Decoder.execHalfInst entry.inst2 sz2 sourceWindow tgt1
                ⟨sfx_d, dp1⟩ ⟨sfx_a, ap1⟩ cache1 (sourceWindow.size + tgt1.size) with
            | .error e => rw [hexec2] at h; simp at h
            | .ok (tgt2, dc2, ac2, cache2) =>
              rw [hexec2] at h
              have ⟨hdc2, hac2⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
              obtain ⟨dc2d, dp2⟩ := dc2; simp only [Varint.Cursor.data] at hdc2; symm at hdc2; subst hdc2
              obtain ⟨ac2d, ap2⟩ := ac2; simp only [Varint.Cursor.data] at hac2; symm at hac2; subst hac2
              rw [CursorReloc.execHalfInst_reloc_ok entry.inst2 sz2 sourceWindow tgt1
                  pfx_d sfx_d dp1 pfx_a sfx_a ap1 cache1 (sourceWindow.size + tgt1.size)
                  tgt2 dp2 ap2 cache2 hexec2]
              simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
                  Varint.Cursor.mk.injEq] at h ⊢
              exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩
        · -- inst2 has immediate size (or is noop)
          simp only [h_sz2_cond, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
              Except.bind] at h ⊢
          -- Step 5: exec inst2 (may or may not be noop)
          by_cases h_noop2 : (entry.inst2.type != .noop) = true
          · simp only [h_noop2, ↓reduceIte, Except.bind] at h ⊢
            match hexec2 : Decoder.execHalfInst entry.inst2 entry.inst2.size sourceWindow tgt1
                ⟨sfx_d, dp1⟩ ⟨sfx_a, ap1⟩ cache1 (sourceWindow.size + tgt1.size) with
            | .error e => rw [hexec2] at h; simp at h
            | .ok (tgt2, dc2, ac2, cache2) =>
              rw [hexec2] at h
              have ⟨hdc2, hac2⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
              obtain ⟨dc2d, dp2⟩ := dc2; simp only [Varint.Cursor.data] at hdc2; symm at hdc2; subst hdc2
              obtain ⟨ac2d, ap2⟩ := ac2; simp only [Varint.Cursor.data] at hac2; symm at hac2; subst hac2
              rw [CursorReloc.execHalfInst_reloc_ok entry.inst2 entry.inst2.size sourceWindow tgt1
                  pfx_d sfx_d dp1 pfx_a sfx_a ap1 cache1 (sourceWindow.size + tgt1.size)
                  tgt2 dp2 ap2 cache2 hexec2]
              simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
                  Varint.Cursor.mk.injEq] at h ⊢
              exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩
          · simp only [h_noop2, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
                Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h ⊢
            exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩
  · -- inst1 has immediate size
    simp only [h_sz1_cond, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
        Except.bind] at h ⊢
    -- Step 3: exec inst1
    by_cases h_noop1 : (entry.inst1.type != .noop) = true
    · simp only [h_noop1, ↓reduceIte, Except.bind] at h ⊢
      match hexec1 : Decoder.execHalfInst entry.inst1 entry.inst1.size sourceWindow target
          ⟨sfx_d, kd⟩ ⟨sfx_a, ka⟩ cache (sourceWindow.size + target.size) with
      | .error e => rw [hexec1] at h; simp at h
      | .ok (tgt1, dc1, ac1, cache1) =>
        rw [hexec1] at h; simp only [Except.bind] at h
        have ⟨hdc1, hac1⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec1
        obtain ⟨dc1d, dp1⟩ := dc1; simp only [Varint.Cursor.data] at hdc1; symm at hdc1; subst hdc1
        obtain ⟨ac1d, ap1⟩ := ac1; simp only [Varint.Cursor.data] at hac1; symm at hac1; subst hac1
        rw [CursorReloc.execHalfInst_reloc_ok entry.inst1 entry.inst1.size sourceWindow target
            pfx_d sfx_d kd pfx_a sfx_a ka cache (sourceWindow.size + target.size)
            tgt1 dp1 ap1 cache1 hexec1]
        simp only [Except.bind] at h ⊢
        -- Step 4: resolve inst2 size
        by_cases h_sz2_cond : (entry.inst2.size == 0 && entry.inst2.type != .noop) = true
        · -- Varint decode for inst2 size
          simp only [h_sz2_cond, ↓reduceIte, bind, Except.bind] at h ⊢
          match hv2 : Varint.decode ⟨sfx_i, ki + 1⟩ with
          | .error e => rw [hv2] at h; simp at h
          | .ok (sz2, c2) =>
            rw [hv2] at h; simp only [pure, Except.pure, Except.bind] at h ⊢
            have hc2d : c2.data = sfx_i :=
              CursorReloc.varint_decodeLoop_data sfx_i (ki + 1) 0 5 sz2 c2
                (by simp only [Varint.decode] at hv2; exact hv2)
            obtain ⟨c2d, c2p⟩ := c2; simp only [Varint.Cursor.data] at hc2d; symm at hc2d; subst hc2d
            rw [show pfx_i.size + ki + 1 = pfx_i.size + (ki + 1) from by omega]
            rw [CursorReloc.varint_decode_reloc_ok pfx_i sfx_i (ki + 1) sz2 c2p hv2]
            simp only [pure, Except.pure, Except.bind] at h ⊢
            -- Step 5: exec inst2
            have h_noop2 : (entry.inst2.type != .noop) = true := by
              have := (Bool.and_eq_true .. ▸ h_sz2_cond); exact this.2
            simp only [h_noop2, ↓reduceIte, Except.bind] at h ⊢
            match hexec2 : Decoder.execHalfInst entry.inst2 sz2 sourceWindow tgt1
                ⟨sfx_d, dp1⟩ ⟨sfx_a, ap1⟩ cache1 (sourceWindow.size + tgt1.size) with
            | .error e => rw [hexec2] at h; simp at h
            | .ok (tgt2, dc2, ac2, cache2) =>
              rw [hexec2] at h
              have ⟨hdc2, hac2⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
              obtain ⟨dc2d, dp2⟩ := dc2; simp only [Varint.Cursor.data] at hdc2; symm at hdc2; subst hdc2
              obtain ⟨ac2d, ap2⟩ := ac2; simp only [Varint.Cursor.data] at hac2; symm at hac2; subst hac2
              rw [CursorReloc.execHalfInst_reloc_ok entry.inst2 sz2 sourceWindow tgt1
                  pfx_d sfx_d dp1 pfx_a sfx_a ap1 cache1 (sourceWindow.size + tgt1.size)
                  tgt2 dp2 ap2 cache2 hexec2]
              simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
                  Varint.Cursor.mk.injEq] at h ⊢
              exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩
        · -- inst2 has immediate size (or is noop)
          simp only [h_sz2_cond, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
              Except.bind] at h ⊢
          by_cases h_noop2 : (entry.inst2.type != .noop) = true
          · simp only [h_noop2, ↓reduceIte, Except.bind] at h ⊢
            match hexec2 : Decoder.execHalfInst entry.inst2 entry.inst2.size sourceWindow tgt1
                ⟨sfx_d, dp1⟩ ⟨sfx_a, ap1⟩ cache1 (sourceWindow.size + tgt1.size) with
            | .error e => rw [hexec2] at h; simp at h
            | .ok (tgt2, dc2, ac2, cache2) =>
              rw [hexec2] at h
              have ⟨hdc2, hac2⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
              obtain ⟨dc2d, dp2⟩ := dc2; simp only [Varint.Cursor.data] at hdc2; symm at hdc2; subst hdc2
              obtain ⟨ac2d, ap2⟩ := ac2; simp only [Varint.Cursor.data] at hac2; symm at hac2; subst hac2
              rw [CursorReloc.execHalfInst_reloc_ok entry.inst2 entry.inst2.size sourceWindow tgt1
                  pfx_d sfx_d dp1 pfx_a sfx_a ap1 cache1 (sourceWindow.size + tgt1.size)
                  tgt2 dp2 ap2 cache2 hexec2]
              simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
                  Varint.Cursor.mk.injEq] at h ⊢
              exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩
          · simp only [h_noop2, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
                Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h ⊢
            exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩
    · -- inst1 is noop
      simp only [h_noop1, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
          Except.bind] at h ⊢
      -- Step 4: resolve inst2 size (inst cursor still at ki+1)
      by_cases h_sz2_cond : (entry.inst2.size == 0 && entry.inst2.type != .noop) = true
      · -- Varint decode for inst2 size
        simp only [h_sz2_cond, ↓reduceIte, bind, Except.bind] at h ⊢
        match hv2 : Varint.decode ⟨sfx_i, ki + 1⟩ with
        | .error e => rw [hv2] at h; simp at h
        | .ok (sz2, c2) =>
          rw [hv2] at h; simp only [pure, Except.pure, Except.bind] at h ⊢
          have hc2d : c2.data = sfx_i :=
            CursorReloc.varint_decodeLoop_data sfx_i (ki + 1) 0 5 sz2 c2
              (by simp only [Varint.decode] at hv2; exact hv2)
          obtain ⟨c2d, c2p⟩ := c2; simp only [Varint.Cursor.data] at hc2d; symm at hc2d; subst hc2d
          rw [show pfx_i.size + ki + 1 = pfx_i.size + (ki + 1) from by omega]
          rw [CursorReloc.varint_decode_reloc_ok pfx_i sfx_i (ki + 1) sz2 c2p hv2]
          simp only [pure, Except.pure, Except.bind] at h ⊢
          -- Step 5: exec inst2
          have h_noop2 : (entry.inst2.type != .noop) = true := by
            have := (Bool.and_eq_true .. ▸ h_sz2_cond); exact this.2
          simp only [h_noop2, ↓reduceIte, Except.bind] at h ⊢
          match hexec2 : Decoder.execHalfInst entry.inst2 sz2 sourceWindow target
              ⟨sfx_d, kd⟩ ⟨sfx_a, ka⟩ cache (sourceWindow.size + target.size) with
          | .error e => rw [hexec2] at h; simp at h
          | .ok (tgt2, dc2, ac2, cache2) =>
            rw [hexec2] at h
            have ⟨hdc2, hac2⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
            obtain ⟨dc2d, dp2⟩ := dc2; simp only [Varint.Cursor.data] at hdc2; symm at hdc2; subst hdc2
            obtain ⟨ac2d, ap2⟩ := ac2; simp only [Varint.Cursor.data] at hac2; symm at hac2; subst hac2
            rw [CursorReloc.execHalfInst_reloc_ok entry.inst2 sz2 sourceWindow target
                pfx_d sfx_d kd pfx_a sfx_a ka cache (sourceWindow.size + target.size)
                tgt2 dp2 ap2 cache2 hexec2]
            simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
                Varint.Cursor.mk.injEq] at h ⊢
            exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩
      · -- inst2 has immediate size (or is noop)
        simp only [h_sz2_cond, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
            Except.bind] at h ⊢
        by_cases h_noop2 : (entry.inst2.type != .noop) = true
        · simp only [h_noop2, ↓reduceIte, Except.bind] at h ⊢
          match hexec2 : Decoder.execHalfInst entry.inst2 entry.inst2.size sourceWindow target
              ⟨sfx_d, kd⟩ ⟨sfx_a, ka⟩ cache (sourceWindow.size + target.size) with
          | .error e => rw [hexec2] at h; simp at h
          | .ok (tgt2, dc2, ac2, cache2) =>
            rw [hexec2] at h
            have ⟨hdc2, hac2⟩ := execHalfInst_data_preserved _ _ _ _ _ _ _ _ _ _ _ _ hexec2
            obtain ⟨dc2d, dp2⟩ := dc2; simp only [Varint.Cursor.data] at hdc2; symm at hdc2; subst hdc2
            obtain ⟨ac2d, ap2⟩ := ac2; simp only [Varint.Cursor.data] at hac2; symm at hac2; subst hac2
            rw [CursorReloc.execHalfInst_reloc_ok entry.inst2 entry.inst2.size sourceWindow target
                pfx_d sfx_d kd pfx_a sfx_a ka cache (sourceWindow.size + target.size)
                tgt2 dp2 ap2 cache2 hexec2]
            simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
                Varint.Cursor.mk.injEq] at h ⊢
            exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩
        · simp only [h_noop2, Bool.false_eq_true, ↓reduceIte, pure, Except.pure,
              Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h ⊢
          exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩

-- decodeLoop with relocated cursors (general version with arbitrary starting positions)
theorem decodeLoop_reloc_ok_general
    (sourceWindow : ByteArray)
    (pfx_i sfx_i pfx_d sfx_d pfx_a sfx_a : ByteArray)
    (ki kd ka : Nat)
    (fuel : Nat) : ∀ (target : ByteArray) (cache : AddressCache.State)
    (target' : ByteArray) (oi od oa : Nat) (cache' : AddressCache.State),
    decodeLoop fuel sourceWindow target
      ⟨sfx_i, ki⟩ ⟨sfx_d, kd⟩ ⟨sfx_a, ka⟩ cache =
      .ok (target', ⟨sfx_i, oi⟩, ⟨sfx_d, od⟩, ⟨sfx_a, oa⟩, cache') →
    decodeLoop fuel sourceWindow target
      ⟨pfx_i ++ sfx_i, pfx_i.size + ki⟩
      ⟨pfx_d ++ sfx_d, pfx_d.size + kd⟩
      ⟨pfx_a ++ sfx_a, pfx_a.size + ka⟩ cache =
      .ok (target', ⟨pfx_i ++ sfx_i, pfx_i.size + oi⟩,
           ⟨pfx_d ++ sfx_d, pfx_d.size + od⟩,
           ⟨pfx_a ++ sfx_a, pfx_a.size + oa⟩, cache') := by
  induction fuel generalizing ki kd ka with
  | zero =>
    intro target cache target' oi od oa cache' h
    unfold decodeLoop at h ⊢
    by_cases hic : ki ≥ sfx_i.size
    · simp only [show pfx_i.size + ki ≥ (pfx_i ++ sfx_i).size from by
          rw [ByteArray.size_append]; omega, ↓reduceIte] at h ⊢
      simp only [hic, ↓reduceIte] at h
      simp only [Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h ⊢
      exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩
    · simp only [show ¬(pfx_i.size + ki ≥ (pfx_i ++ sfx_i).size) from by
          rw [ByteArray.size_append]; omega] at h ⊢
      simp only [hic] at h
      simp at h
  | succ n ih =>
    intro target cache target' oi od oa cache' h
    unfold decodeLoop at h ⊢
    by_cases hic : ki ≥ sfx_i.size
    · simp only [show pfx_i.size + ki ≥ (pfx_i ++ sfx_i).size from by
          rw [ByteArray.size_append]; omega, ↓reduceIte] at h ⊢
      simp only [hic, ↓reduceIte] at h
      simp only [Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h ⊢
      exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2.2⟩
    · have hic_big : ¬(pfx_i.size + ki ≥ (pfx_i ++ sfx_i).size) := by
        rw [ByteArray.size_append]; omega
      simp only [hic_big, hic, ↓reduceIte] at h ⊢
      -- Match on decodeOneStep result
      match hs : decodeOneStep sourceWindow target
          ⟨sfx_i, ki⟩ ⟨sfx_d, kd⟩ ⟨sfx_a, ka⟩ cache with
      | .error e => rw [hs] at h; simp at h
      | .ok (tgt_mid, ic_mid, dc_mid, ac_mid, cache_mid) =>
        rw [hs] at h; simp only [] at h
        -- Get data preservation for intermediate cursors
        have ⟨hid, hdd, had⟩ := decodeOneStep_data_preserved _ _ _ _ _ _ _ _ _ _ _ hs
        obtain ⟨icd, ip_mid⟩ := ic_mid; simp only [Varint.Cursor.data] at hid; symm at hid; subst hid
        obtain ⟨dcd, dp_mid⟩ := dc_mid; simp only [Varint.Cursor.data] at hdd; symm at hdd; subst hdd
        obtain ⟨acd, ap_mid⟩ := ac_mid; simp only [Varint.Cursor.data] at had; symm at had; subst had
        -- Apply relocation to decodeOneStep
        rw [decodeOneStep_reloc_ok sourceWindow target
            pfx_i sfx_i pfx_d sfx_d pfx_a sfx_a
            ki kd ka cache tgt_mid ip_mid dp_mid ap_mid cache_mid hs]
        -- Apply IH to remaining decodeLoop
        exact ih ip_mid dp_mid ap_mid tgt_mid cache_mid target' oi od oa cache' h

-- decodeLoop with relocated cursors: if decode succeeds on ⟨sfx, 0⟩,
-- it succeeds on ⟨pfx ++ sfx, pfx.size⟩ with shifted positions.
theorem decodeLoop_reloc_ok
    (sourceWindow target : ByteArray)
    (pfx_i sfx_i pfx_d sfx_d pfx_a sfx_a : ByteArray)
    (cache : AddressCache.State)
    (target' : ByteArray) (oi od oa : Nat) (cache' : AddressCache.State)
    (fuel : Nat)
    (h : decodeLoop fuel sourceWindow target
      ⟨sfx_i, 0⟩ ⟨sfx_d, 0⟩ ⟨sfx_a, 0⟩ cache =
      .ok (target', ⟨sfx_i, oi⟩, ⟨sfx_d, od⟩, ⟨sfx_a, oa⟩, cache')) :
    decodeLoop fuel sourceWindow target
      ⟨pfx_i ++ sfx_i, pfx_i.size⟩
      ⟨pfx_d ++ sfx_d, pfx_d.size⟩
      ⟨pfx_a ++ sfx_a, pfx_a.size⟩ cache =
      .ok (target', ⟨pfx_i ++ sfx_i, pfx_i.size + oi⟩,
           ⟨pfx_d ++ sfx_d, pfx_d.size + od⟩,
           ⟨pfx_a ++ sfx_a, pfx_a.size + oa⟩, cache') := by
  exact decodeLoop_reloc_ok_general sourceWindow pfx_i sfx_i pfx_d sfx_d pfx_a sfx_a
      0 0 0 fuel target cache target' oi od oa cache' h

-- ============================================================================
-- ## Helper lemmas for the main inductive roundtrip
-- ============================================================================

-- Varint suffix extension: decoding works with extra data appended
private theorem varint_decodeLoop_suffix_ok (data extra : ByteArray) (k acc v pos : Nat)
    : (remaining : Nat) →
    Varint.decodeLoop data k acc remaining = .ok (v, ⟨data, pos⟩) →
    Varint.decodeLoop (data ++ extra) k acc remaining = .ok (v, ⟨data ++ extra, pos⟩)
  | 0, h => by simp [Varint.decodeLoop] at h
  | remaining + 1, h => by
    unfold Varint.decodeLoop at h ⊢
    by_cases hk : k < data.size
    · have hk' : k < (data ++ extra).size := by rw [ByteArray.size_append]; omega
      rw [dif_pos hk']; rw [dif_pos hk] at h
      have hbyte : (data ++ extra)[k] = data[k] := ByteArray.get_append_left hk
      rw [hbyte]
      by_cases hcont : (data[k] &&& 0x80 == 0) = true
      · simp only [hcont, ↓reduceIte] at h ⊢
        simp only [Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h ⊢
        exact ⟨h.1, trivial, h.2.2⟩
      · simp only [hcont, ↓reduceIte] at h ⊢
        exact varint_decodeLoop_suffix_ok data extra (k + 1) _ v pos remaining h
    · rw [dif_neg hk] at h; simp at h

theorem varint_decode_suffix_ok (data extra : ByteArray) (k v pos : Nat)
    (h : Varint.decode ⟨data, k⟩ = .ok (v, ⟨data, pos⟩)) :
    Varint.decode ⟨data ++ extra, k⟩ = .ok (v, ⟨data ++ extra, pos⟩) := by
  simp only [Varint.decode] at h ⊢
  exact varint_decodeLoop_suffix_ok data extra k 0 v pos 5 h

-- Address cache decode suffix extension
theorem addr_decode_suffix_ok (mode here : Nat) (data extra : ByteArray) (k : Nat)
    (cache : AddressCache.State) (addr pos : Nat) (cache' : AddressCache.State)
    (h : AddressCache.decode mode here ⟨data, k⟩ cache = .ok (addr, ⟨data, pos⟩, cache')) :
    AddressCache.decode mode here ⟨data ++ extra, k⟩ cache =
      .ok (addr, ⟨data ++ extra, pos⟩, cache') := by
  unfold AddressCache.decode at h ⊢
  simp only [bind, Except.bind] at h ⊢
  by_cases hm0 : (mode == 0) = true
  · simp only [hm0, ↓reduceIte] at h ⊢
    match hv : Varint.decode ⟨data, k⟩ with
    | .ok (v, c) =>
      rw [hv] at h; simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
      have hcd := CursorReloc.varint_decodeLoop_data data k 0 5 v c
        (by simp only [Varint.decode] at hv; exact hv)
      obtain ⟨cd, cp⟩ := c; simp only [Varint.Cursor.data] at hcd; symm at hcd; subst hcd
      rw [varint_decode_suffix_ok data extra k v cp hv]
      simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h ⊢
      exact ⟨h.1, ⟨trivial, h.2.1.2⟩, h.2.2⟩
    | .error e => rw [hv] at h; simp at h
  · simp only [hm0, Bool.false_eq_true, ↓reduceIte] at h ⊢
    by_cases hm1 : (mode == 1) = true
    · simp only [hm1, ↓reduceIte] at h ⊢
      match hv : Varint.decode ⟨data, k⟩ with
      | .ok (v, c) =>
        rw [hv] at h; simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
        have hcd := CursorReloc.varint_decodeLoop_data data k 0 5 v c
          (by simp only [Varint.decode] at hv; exact hv)
        obtain ⟨cd, cp⟩ := c; simp only [Varint.Cursor.data] at hcd; symm at hcd; subst hcd
        rw [varint_decode_suffix_ok data extra k v cp hv]
        simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h ⊢
        exact ⟨h.1, ⟨trivial, h.2.1.2⟩, h.2.2⟩
      | .error e => rw [hv] at h; simp at h
    · simp only [hm1, Bool.false_eq_true, ↓reduceIte] at h ⊢
      by_cases hmn : mode < 2 + cache.sNear
      · simp only [if_pos hmn] at h ⊢
        match hv : Varint.decode ⟨data, k⟩ with
        | .ok (v, c) =>
          rw [hv] at h; simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq] at h
          have hcd := CursorReloc.varint_decodeLoop_data data k 0 5 v c
            (by simp only [Varint.decode] at hv; exact hv)
          obtain ⟨cd, cp⟩ := c; simp only [Varint.Cursor.data] at hcd; symm at hcd; subst hcd
          rw [varint_decode_suffix_ok data extra k v cp hv]
          simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h ⊢
          exact ⟨h.1, ⟨trivial, h.2.1.2⟩, h.2.2⟩
        | .error e => rw [hv] at h; simp at h
      · simp only [if_neg hmn] at h ⊢
        by_cases hms : mode < 2 + cache.sNear + cache.sSame
        · simp only [if_pos hms] at h ⊢
          by_cases hklt : k < data.size
          · have hrb : Varint.Cursor.readByte ⟨data, k⟩ = .ok (data[k]!, ⟨data, k + 1⟩) := by
              unfold Varint.Cursor.readByte; simp [hklt]
            have hklt' : k < (data ++ extra).size := by rw [ByteArray.size_append]; omega
            have hrb' : Varint.Cursor.readByte ⟨data ++ extra, k⟩ =
                .ok ((data ++ extra)[k]!, ⟨data ++ extra, k + 1⟩) :=
              Encoder.Proofs.readByte_ok hklt'
            rw [hrb] at h; rw [hrb']
            have hbyte : (data ++ extra)[k]! = data[k]! := by
              simp only [getElem!_pos, show k < (data ++ extra).size from by rw [ByteArray.size_append]; omega, hklt]
              exact ByteArray.get_append_left hklt
            rw [hbyte]
            simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h ⊢
            exact ⟨h.1, ⟨trivial, h.2.1.2⟩, h.2.2⟩
          · have hrb : Varint.Cursor.readByte ⟨data, k⟩ = .error .truncatedInput := by
              unfold Varint.Cursor.readByte; simp [hklt]
            rw [hrb] at h; simp at h
        · simp only [if_neg hms] at h; simp at h

-- Byte indexing: first element of concatenation
theorem ba_getElem_bang_append_left (a b : ByteArray) (i : Nat) (hi : i < a.size) :
    (a ++ b)[i]! = a[i]! := by
  have h1 : i < (a ++ b).size := by rw [ByteArray.size_append]; omega
  simp only [getElem!_pos, h1, hi]
  exact ByteArray.get_append_left hi

-- Extract of left part from concatenation gives the left part
private theorem ba_extract_left_full (a b : ByteArray) :
    (a ++ b).extract 0 a.size = a := by
  rw [bytearray_extract_append_left a b 0 a.size (le_refl _)]
  exact bytearray_extract_full a

-- ============================================================================
-- ## encodeAddress: mode bound and decode roundtrip
-- ============================================================================

-- Lower bound on numDigits for values ≥ 2^35
private theorem numDigits_ge_6 (n : Nat) (h : n ≥ 2 ^ 35) :
    Varint.numDigits n ≥ 6 := by
  have hn : n ≠ 0 := by omega
  rw [Varint.numDigits_pos hn]
  have h1 : n / 128 ≠ 0 := by omega
  rw [Varint.numDigits_pos h1]
  have h2 : n / 128 / 128 ≠ 0 := by omega
  rw [Varint.numDigits_pos h2]
  have h3 : n / 128 / 128 / 128 ≠ 0 := by omega
  rw [Varint.numDigits_pos h3]
  have h4 : n / 128 / 128 / 128 / 128 ≠ 0 := by omega
  rw [Varint.numDigits_pos h4]
  have h5 : n / 128 / 128 / 128 / 128 / 128 ≠ 0 := by omega
  rw [Varint.numDigits_pos h5]
  omega

-- Varint encoding of values ≥ 2^35 has size ≥ 6
private theorem varint_encode_size_ge_6 (n : Nat) (h : n ≥ 2 ^ 35) :
    (Varint.encode n).size ≥ 6 := by
  have hn : n ≠ 0 := by omega
  unfold Varint.encode
  split
  · next h0 => simp at h0; omega
  · simp only [ByteArray.size, List.size_toArray,
      Varint.setContinuationBits_length, Varint.toBase128_length]
    exact numDigits_ge_6 n h

-- tryNearModes preserves mode bound
private theorem tryNearModes_mode_bound (s : AddressCache.State) (addr bestMode : Nat)
    (bestEnc : ByteArray) (h_best : bestMode < 2 + s.sNear + s.sSame)
    : (fuel : Nat) → fuel ≤ s.sNear →
    (s.tryNearModes addr bestMode bestEnc fuel).1 < 2 + s.sNear + s.sSame
  | 0, _ => h_best
  | fuel + 1, hfuel => by
    unfold AddressCache.State.tryNearModes
    -- The body has: let i := ...; let base := ...; let (m,e) := if ... then ... else ...; recurse
    -- Use simp to reduce lets and ifs after case-splitting
    dsimp only []
    by_cases hge : addr ≥ s.near[s.sNear - fuel - 1]!
    · rw [if_pos hge]
      by_cases hlt : (Varint.encode (addr - s.near[s.sNear - fuel - 1]!)).size < bestEnc.size
      · rw [if_pos hlt]
        exact tryNearModes_mode_bound s addr _ _ (by omega) fuel (by omega)
      · rw [if_neg hlt]
        exact tryNearModes_mode_bound s addr _ _ h_best fuel (by omega)
    · rw [if_neg hge]
      exact tryNearModes_mode_bound s addr _ _ h_best fuel (by omega)

-- trySameModes preserves mode bound
private theorem trySameModes_mode_bound (s : AddressCache.State) (addr bestMode : Nat)
    (bestEnc : ByteArray) (h_best : bestMode < 2 + s.sNear + s.sSame)
    : (fuel : Nat) → fuel ≤ s.sSame →
    (s.trySameModes addr bestMode bestEnc fuel).1 < 2 + s.sNear + s.sSame
  | 0, _ => h_best
  | fuel + 1, hfuel => by
    unfold AddressCache.State.trySameModes
    dsimp only []
    split
    · -- SAME match: result is (2 + sNear + bank, ...)
      simp only [Prod.fst]; omega
    · -- No match: recurse
      exact trySameModes_mode_bound s addr bestMode bestEnc h_best fuel (by omega)

-- Mode returned by encodeAddress is always < 2 + cache.sNear + cache.sSame
theorem encodeAddress_mode_bound (cache : AddressCache.State) (addr here : Nat) :
    (cache.encodeAddress addr here).1 < 2 + cache.sNear + cache.sSame := by
  simp only [AddressCache.State.encodeAddress]
  apply trySameModes_mode_bound
  apply tryNearModes_mode_bound
  · -- initial mode < bound
    split <;> (try split) <;> omega
  · exact le_refl _
  · exact le_refl _

-- Decode invariant: decode inverts the (mode, bytes) pair
private def AddrDecodeOK (cache : AddressCache.State) (addr here : Nat)
    (mode : Nat) (bytes : ByteArray) : Prop :=
  AddressCache.decode mode here ⟨bytes, 0⟩ cache =
    .ok (addr, ⟨bytes, bytes.size⟩, cache.update addr)

-- tryNearModes preserves decode invariant
private theorem tryNearModes_decode_ok (s : AddressCache.State) (addr here : Nat)
    (h_addr : addr < 2 ^ 35) (bestMode : Nat) (bestEnc : ByteArray)
    (h_inv : AddrDecodeOK s addr here bestMode bestEnc)
    : (fuel : Nat) → fuel ≤ s.sNear →
    AddrDecodeOK s addr here
      (s.tryNearModes addr bestMode bestEnc fuel).1
      (s.tryNearModes addr bestMode bestEnc fuel).2
  | 0, _ => h_inv
  | fuel + 1, hfuel => by
    unfold AddressCache.State.tryNearModes
    dsimp only []
    by_cases hge : addr ≥ s.near[s.sNear - fuel - 1]!
    · rw [if_pos hge]
      by_cases hlt : (Varint.encode (addr - s.near[s.sNear - fuel - 1]!)).size < bestEnc.size
      · rw [if_pos hlt]
        exact tryNearModes_decode_ok s addr here h_addr _ _
          (AddressCache.decode_near_mode (s.sNear - fuel - 1) addr
            (s.near[s.sNear - fuel - 1]!) hge (by omega) s (by omega) rfl here)
          fuel (by omega)
      · rw [if_neg hlt]
        exact tryNearModes_decode_ok s addr here h_addr bestMode bestEnc h_inv fuel (by omega)
    · rw [if_neg hge]
      exact tryNearModes_decode_ok s addr here h_addr bestMode bestEnc h_inv fuel (by omega)

-- trySameModes preserves decode invariant
private theorem trySameModes_decode_ok (s : AddressCache.State) (addr here : Nat)
    (bestMode : Nat) (bestEnc : ByteArray)
    (h_inv : AddrDecodeOK s addr here bestMode bestEnc)
    : (fuel : Nat) → fuel ≤ s.sSame →
    AddrDecodeOK s addr here
      (s.trySameModes addr bestMode bestEnc fuel).1
      (s.trySameModes addr bestMode bestEnc fuel).2
  | 0, _ => h_inv
  | fuel + 1, hfuel => by
    unfold AddressCache.State.trySameModes
    dsimp only []
    split
    · -- SAME match
      rename_i hcond
      show AddrDecodeOK s addr here _ _
      rw [Bool.and_eq_true] at hcond
      have hslot : s.same[(s.sSame - fuel - 1) * 256 + addr % 256]! = addr := by
        exact beq_iff_eq.mp hcond.1
      exact AddressCache.decode_same_mode (s.sSame - fuel - 1) addr s
        (by omega) hslot here
    · -- No match: recurse
      exact trySameModes_decode_ok s addr here bestMode bestEnc h_inv fuel (by omega)

-- encodeAddress fundamental roundtrip: decode inverts encode for any chosen mode.
theorem encodeAddress_decode_roundtrip
    (cache : AddressCache.State) (addr here : Nat)
    (h_addr : addr < 2 ^ 35) :
    let (mode, addrBytes, cache') := cache.encodeAddress addr here
    AddressCache.decode mode here ⟨addrBytes, 0⟩ cache =
      .ok (addr, ⟨addrBytes, addrBytes.size⟩, cache') := by
  simp only [AddressCache.State.encodeAddress]
  -- Propagate decode invariant: initial → tryNearModes → trySameModes
  apply trySameModes_decode_ok cache addr here _ _ _ cache.sSame (le_refl _)
  apply tryNearModes_decode_ok cache addr here h_addr _ _ _ cache.sNear (le_refl _)
  -- Initial mode: 0 or 1
  split -- if here > addr
  · split -- if enc1.size < enc0.size
    · -- Mode 1: VCD_HERE
      show AddrDecodeOK cache addr here 1 (Varint.encode (here - addr))
      have henc0 : (Varint.encode addr).size ≤ 5 :=
        Encoder.Proofs.varint_encode_size_le_5 addr h_addr
      have h_diff : here - addr < 2 ^ 35 := by
        by_contra h_neg
        have := varint_encode_size_ge_6 (here - addr) (by omega)
        omega
      exact AddressCache.decode_mode1 addr here (by omega) h_diff cache
    · -- Mode 0: VCD_SELF
      show AddrDecodeOK cache addr here 0 (Varint.encode addr)
      exact AddressCache.decode_mode0 addr h_addr cache here
  · -- Mode 0: VCD_SELF (here ≤ addr)
    show AddrDecodeOK cache addr here 0 (Varint.encode addr)
    exact AddressCache.decode_mode0 addr h_addr cache here

-- findSingleOpcode for COPY with any mode 0..8 and immediate size 4..18
-- opcode = (19 + mode * 16 + sz - 3).toUInt8
theorem findSingleOpcode_copy_immediate (sz addr mode : Nat)
    (hSz4 : sz ≥ 4) (hSz18 : sz ≤ 18) :
    Encoder.findSingleOpcode (.copy addr sz) mode = ((19 + mode * 16 + sz - 3).toUInt8, false) := by
  unfold Encoder.findSingleOpcode
  simp only [hSz4, hSz18, decide_true, Bool.and_self, ↓reduceIte]
  congr 1
  congr 1; omega

-- COPY varint opcode: when size is outside 4..18 range
theorem findSingleOpcode_copy_varint (sz addr mode : Nat)
    (h : ¬(sz ≥ 4 ∧ sz ≤ 18)) :
    Encoder.findSingleOpcode (.copy addr sz) mode = ((19 + mode * 16 : Nat).toUInt8, true) := by
  unfold Encoder.findSingleOpcode
  simp only [show ¬(sz ≥ 4 && sz ≤ 18) from by
    simp only [Bool.and_eq_true, decide_eq_true_eq]; exact h]
  simp only [Bool.false_eq_true, ↓reduceIte]

-- General execHalfInst for COPY from source window with any mode
theorem execHalfInst_copy_source_general
    (modeUInt8 : UInt8) (instSz sz : Nat)
    (sourceWindow target : ByteArray)
    (dataCursor : Varint.Cursor)
    (addrAll : ByteArray) (addrPos : Nat)
    (cache : AddressCache.State)
    (here : Nat)
    (addr : Nat) (addrPos' : Nat) (cache' : AddressCache.State)
    (hAddr : addr + sz ≤ sourceWindow.size)
    (hAddrLt : addr < sourceWindow.size + target.size)
    (hAddrDecode : AddressCache.decode modeUInt8.toNat here ⟨addrAll, addrPos⟩ cache =
      .ok (addr, ⟨addrAll, addrPos'⟩, cache')) :
    Decoder.execHalfInst ⟨.copy modeUInt8, instSz⟩ sz sourceWindow target
      dataCursor ⟨addrAll, addrPos⟩ cache here =
    .ok (target ++ sourceWindow.extract addr (addr + sz),
         dataCursor, ⟨addrAll, addrPos'⟩, cache') := by
  unfold Decoder.execHalfInst
  simp only [bind, Except.bind, pure, Except.pure]
  rw [hAddrDecode]
  simp only [pure, Except.pure, bind, Except.bind]
  rw [if_neg (show ¬(addr ≥ sourceWindow.size + target.size) from by omega)]
  rw [copyBytes_source_only sourceWindow target addr sz (by omega)]

-- Compositional step: one encodeOneInst → decodeOneStep + relocation for remaining decodeLoop
theorem decodeLoop_compose_step
    (n : Nat) (sw initTarget targetMid targetFinal : ByteArray)
    (i1 iR d1 dR a1 aR : ByteArray)
    (cache0 cache1 cacheFinal : AddressCache.State)
    (h_step : decodeOneStep sw initTarget
      ⟨i1 ++ iR, 0⟩ ⟨d1 ++ dR, 0⟩ ⟨a1 ++ aR, 0⟩ cache0 =
      .ok (targetMid, ⟨i1 ++ iR, i1.size⟩, ⟨d1 ++ dR, d1.size⟩,
           ⟨a1 ++ aR, a1.size⟩, cache1))
    (h_i1_pos : i1.size ≥ 1)
    (h_rest : decodeLoop n sw targetMid
      ⟨iR, 0⟩ ⟨dR, 0⟩ ⟨aR, 0⟩ cache1 =
      .ok (targetFinal, ⟨iR, iR.size⟩, ⟨dR, dR.size⟩, ⟨aR, aR.size⟩, cacheFinal)) :
    decodeLoop (n + 1) sw initTarget
      ⟨i1 ++ iR, 0⟩ ⟨d1 ++ dR, 0⟩ ⟨a1 ++ aR, 0⟩ cache0 =
    .ok (targetFinal,
         ⟨i1 ++ iR, (i1 ++ iR).size⟩,
         ⟨d1 ++ dR, (d1 ++ dR).size⟩,
         ⟨a1 ++ aR, (a1 ++ aR).size⟩,
         cacheFinal) := by
  rw [decodeLoop_step_ok sw initTarget targetMid
      ⟨i1 ++ iR, 0⟩ ⟨d1 ++ dR, 0⟩ ⟨a1 ++ aR, 0⟩
      ⟨i1 ++ iR, i1.size⟩ ⟨d1 ++ dR, d1.size⟩ ⟨a1 ++ aR, a1.size⟩
      cache0 cache1 n (by simp [ByteArray.size_append]; omega) h_step]
  have h_reloc := decodeLoop_reloc_ok_general sw i1 iR d1 dR a1 aR 0 0 0 n
      targetMid cache1 targetFinal iR.size dR.size aR.size cacheFinal h_rest
  simp only [ByteArray.size_append] at h_reloc ⊢
  exact h_reloc

-- ============================================================================
-- ## Main inductive roundtrip: encodeInstList → decodeLoop
-- ============================================================================

theorem update_preserves_sNear (s : AddressCache.State) (addr : Nat) :
    (s.update addr).sNear = s.sNear := by
  unfold AddressCache.State.update; dsimp only []
  split <;> (split <;> rfl)

theorem update_preserves_sSame (s : AddressCache.State) (addr : Nat) :
    (s.update addr).sSame = s.sSame := by
  unfold AddressCache.State.update; dsimp only []
  split <;> (split <;> rfl)

theorem encodeAddress_preserves_cache_size (s : AddressCache.State) (addr here : Nat) :
    (s.encodeAddress addr here).2.2.sNear + (s.encodeAddress addr here).2.2.sSame =
    s.sNear + s.sSame := by
  simp only [AddressCache.State.encodeAddress]
  rw [update_preserves_sNear, update_preserves_sSame]

theorem encodeOneInst_preserves_cache_size (inst : Encoder.RawInst) (srcLen : Nat)
    (cache : AddressCache.State) (tgtPos : Nat) :
    (encodeOneInst inst srcLen cache tgtPos).2.2.2.1.sNear +
    (encodeOneInst inst srcLen cache tgtPos).2.2.2.1.sSame =
    cache.sNear + cache.sSame := by
  rcases inst with ⟨data⟩ | ⟨addr, sz⟩ | ⟨byte, sz⟩
  · -- ADD: cache unchanged
    simp [encodeOneInst]
  · -- COPY: encodeAddress preserves cache size
    simp only [encodeOneInst]
    exact encodeAddress_preserves_cache_size cache addr (srcLen + tgtPos)
  · -- RUN: cache unchanged
    simp [encodeOneInst]

-- The main compositional roundtrip theorem.
set_option maxHeartbeats 1600000 in
theorem encodeInstList_decodeLoop_roundtrip
    (insts : List Encoder.RawInst)
    (sourceWindow : ByteArray)
    (initTarget : ByteArray)
    (initCache : AddressCache.State)
    (h_valid : ValidInstList insts sourceWindow)
    (h_cache : initCache.sNear + initCache.sSame ≤ 7) :
    let (dataSec, instSec, addrSec, finalCache, _finalPos) :=
      encodeInstList insts sourceWindow.size initCache initTarget.size
    decodeLoop insts.length sourceWindow initTarget
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ initCache =
    .ok (execInstListSpec insts sourceWindow initTarget,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, addrSec.size⟩,
         finalCache) := by
  induction insts generalizing initTarget initCache with
  | nil =>
    simp [encodeInstList, execInstListSpec, decodeLoop]
  | cons inst rest ih =>
    rw [encodeInstList_cons]
    simp only []
    have h_inst_valid : ValidInst inst sourceWindow := by
      simp [ValidInstList, List.Forall] at h_valid; exact h_valid.1
    have h_rest_valid : ValidInstList rest sourceWindow := by
      simp [ValidInstList, List.Forall] at h_valid; exact h_valid.2
    -- Name the encodeOneInst result
    set eoi := encodeOneInst inst sourceWindow.size initCache initTarget.size with h_eoi
    obtain ⟨d1, i1, a1, cache', pos'⟩ := eoi
    simp only [] at h_eoi
    -- Name the encodeInstList result for the rest
    set eir := encodeInstList rest sourceWindow.size cache' pos' with h_eir
    obtain ⟨dR, iR, aR, cacheFinal, posFinal⟩ := eir
    simp only [] at h_eir
    -- The execInstListSpec unfolds to: process inst, then rest
    rw [execInstListSpec]
    -- Apply decodeLoop_compose_step
    apply decodeLoop_compose_step rest.length sourceWindow initTarget
      (execInstSpec inst sourceWindow initTarget)
      (execInstListSpec rest sourceWindow (execInstSpec inst sourceWindow initTarget))
      i1 iR d1 dR a1 aR initCache cache' cacheFinal
    · -- h_step: decodeOneStep processes inst correctly
      rcases inst with ⟨data⟩ | ⟨addr, sz⟩ | ⟨byte, sz⟩
      · -- ADD
        simp only [ValidInst] at h_inst_valid
        obtain ⟨h1, hBound⟩ := h_inst_valid
        by_cases h17 : data.size ≤ 17
        · -- Immediate size ADD (sizes 1..17)
          simp only [encodeOneInst, Encoder.findSingleOpcode] at h_eoi
          simp only [h1, h17, decide_true, Bool.and_self, ↓reduceIte,
              Bool.false_eq_true, Prod.mk.injEq] at h_eoi
          obtain ⟨rfl, rfl, rfl, rfl, rfl⟩ := h_eoi
          rw [bytearray_empty_append aR]
          have h_add := decodeOneStep_add_in_concat d1.size sourceWindow initTarget
            (ByteArray.mk #[(1 + d1.size).toUInt8] ++ iR) 0
            (d1 ++ dR) 0 aR 0 cache' h1 h17
            (by rw [ByteArray.size_append]
                have : (ByteArray.mk #[(1 + d1.size).toUInt8] : ByteArray).size = 1 := rfl
                omega)
            (by rw [ba_getElem_bang_append_left _ iR 0
                (by have : (ByteArray.mk #[(1 + d1.size).toUInt8] : ByteArray).size = 1 := rfl; omega)]
                rfl)
            (by rw [ByteArray.size_append]; omega)
          rw [h_add]
          have h_mk_sz : (ByteArray.mk #[(1 + d1.size).toUInt8] : ByteArray).size = 1 := rfl
          have h_empty_sz : ByteArray.empty.size = 0 := rfl
          simp only [Nat.zero_add, execInstSpec,
            bytearray_extract_append_left d1 dR 0 d1.size (le_refl _),
            bytearray_extract_full, h_mk_sz, h_empty_sz]
        · -- Varint size ADD (sizes > 17)
          rw [encodeOneInst_add_varint_sections data (by omega)] at h_eoi
          simp only [Prod.mk.injEq] at h_eoi
          obtain ⟨rfl, rfl, rfl, rfl, rfl⟩ := h_eoi
          rw [bytearray_empty_append aR]
          -- Need varint decode on (ByteArray.mk #[1] ++ Varint.encode d1.size ++ iR) at position 1
          have hSzBound35 : d1.size < 2 ^ 35 := by omega
          have hDE := Varint.decode_encode d1.size hSzBound35
          have hSfx := varint_decode_suffix_ok (Varint.encode d1.size) iR 0 d1.size
              (Varint.encode d1.size).size hDE
          have hPfx := CursorReloc.varint_decode_reloc_ok (ByteArray.mk #[1])
              (Varint.encode d1.size ++ iR) 0 d1.size (Varint.encode d1.size).size hSfx
          simp only [ByteArray.size, Nat.add_zero] at hPfx
          rw [bytearray_append_assoc (ByteArray.mk #[1]) (Varint.encode d1.size) iR]
          have h_add := decodeOneStep_add_varint_in_concat d1.size sourceWindow initTarget
            (ByteArray.mk #[1] ++ (Varint.encode d1.size ++ iR)) 0
            (d1 ++ dR) 0 aR 0 cache'
            (by rw [ByteArray.size_append]
                have : (ByteArray.mk #[1] : ByteArray).size = 1 := rfl; omega)
            (by rw [ba_getElem_bang_append_left _ _ 0
                (by have : (ByteArray.mk #[1] : ByteArray).size = 1 := rfl; omega)]
                rfl)
            (by convert hPfx using 2)
            (by rw [ByteArray.size_append]; omega)
          rw [h_add]
          have h_mk1_sz : (ByteArray.mk #[(1 : UInt8)] : ByteArray).size = 1 := rfl
          have h_empty_sz : ByteArray.empty.size = 0 := rfl
          simp only [Nat.zero_add, ByteArray.size_append, h_mk1_sz, h_empty_sz,
            execInstSpec,
            bytearray_extract_append_left d1 dR 0 d1.size (le_refl _),
            bytearray_extract_full]
      · -- COPY
        simp only [ValidInst] at h_inst_valid
        obtain ⟨hSz1, hSzBound, hAddr, hAddrBound⟩ := h_inst_valid
        -- Unfold encodeOneInst for COPY
        simp only [encodeOneInst] at h_eoi
        set eaddr := initCache.encodeAddress addr (sourceWindow.size + initTarget.size) with h_eaddr
        obtain ⟨mode, addrBytes, cacheUpd⟩ := eaddr
        simp only [] at h_eoi
        -- Mode bound
        have hModeBound := encodeAddress_mode_bound initCache addr (sourceWindow.size + initTarget.size)
        rw [show initCache.encodeAddress addr (sourceWindow.size + initTarget.size) =
            (mode, addrBytes, cacheUpd) from h_eaddr ▸ rfl] at hModeBound
        simp only [] at hModeBound
        have hMode8 : mode ≤ 8 := by omega
        -- Address cache roundtrip
        have hAddrRT := encodeAddress_decode_roundtrip initCache addr
            (sourceWindow.size + initTarget.size) (by omega)
        rw [show initCache.encodeAddress addr (sourceWindow.size + initTarget.size) =
            (mode, addrBytes, cacheUpd) from h_eaddr ▸ rfl] at hAddrRT
        simp only [] at hAddrRT
        by_cases hImm : sz ≥ 4 ∧ sz ≤ 18
        · -- Immediate size COPY (sizes 4..18)
          rw [findSingleOpcode_copy_immediate sz addr mode hImm.1 hImm.2] at h_eoi
          simp only [ite_false, Prod.mk.injEq] at h_eoi
          obtain ⟨rfl, rfl, rfl, rfl, rfl⟩ := h_eoi
          simp only [Bool.false_eq_true, ite_false]
          rw [bytearray_empty_append dR]
          -- Suffix extension for address decode
          have hAddrSfx := addr_decode_suffix_ok mode
              (sourceWindow.size + initTarget.size) a1 aR 0
              initCache addr a1.size cache' hAddrRT
          -- Now prove decodeOneStep
          unfold decodeOneStep
          simp only [bind, Except.bind]
          rw [Encoder.Proofs.readByte_ok (show (0 : Nat) <
              (ByteArray.mk #[(19 + mode * 16 + sz - 3).toUInt8] ++ iR).size
              from by rw [ByteArray.size_append]
                      have : (ByteArray.mk #[(19 + mode * 16 + sz - 3).toUInt8] : ByteArray).size = 1 := rfl
                      omega)]
          rw [ba_getElem_bang_append_left _ iR 0
              (by have : (ByteArray.mk #[(19 + mode * 16 + sz - 3).toUInt8] : ByteArray).size = 1 := rfl; omega)]
          simp only [show (ByteArray.mk #[(19 + mode * 16 + sz - 3).toUInt8] : ByteArray)[0]! =
              (19 + mode * 16 + sz - 3).toUInt8 from rfl]
          rw [CodeTable.Proofs.lookup_copy_sized mode sz hMode8 hImm.1 hImm.2]
          conv => simp only []
          have hne : sz ≠ 0 := by omega
          simp only [show (sz == 0) = false from beq_eq_false_iff_ne.mpr hne,
            Bool.false_and, Bool.false_eq_true, ite_false,
            show ((InstType.copy mode.toUInt8 != InstType.noop) = true) from rfl,
            show (InstType.noop != InstType.noop) = false from by decide,
            show ((0 : Nat) == 0 && false) = false from by decide,
            ↓reduceIte, pure, Except.pure, bind, Except.bind]
          have hModeRoundtrip : mode.toUInt8.toNat = mode := by
            simp [UInt8.toNat, Nat.toUInt8, BitVec.toNat]; omega
          rw [execHalfInst_copy_source_general mode.toUInt8 sz sz sourceWindow initTarget
              ⟨dR, 0⟩ (a1 ++ aR) 0 initCache
              (sourceWindow.size + initTarget.size)
              addr a1.size cache' hAddr (by omega)
              (by rw [hModeRoundtrip]; exact hAddrSfx)]
          simp only [execInstSpec]
          congr 1
        · -- Varint size COPY
          rw [findSingleOpcode_copy_varint sz addr mode hImm] at h_eoi
          simp only [ite_true, Prod.mk.injEq] at h_eoi
          obtain ⟨rfl, rfl, rfl, rfl, rfl⟩ := h_eoi
          rw [bytearray_empty_append dR]
          -- Need varint decode for sz
          have hSzBound35 : sz < 2 ^ 35 := by omega
          have hDE := Varint.decode_encode sz hSzBound35
          have hSfx := varint_decode_suffix_ok (Varint.encode sz) iR 0 sz
              (Varint.encode sz).size hDE
          have hPfx := CursorReloc.varint_decode_reloc_ok
              (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8])
              (Varint.encode sz ++ iR) 0 sz (Varint.encode sz).size hSfx
          simp only [ByteArray.size, Nat.add_zero] at hPfx
          rw [bytearray_append_assoc (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8])
              (Varint.encode sz) iR]
          -- Suffix extension for address decode
          have hAddrSfx := addr_decode_suffix_ok mode
              (sourceWindow.size + initTarget.size) a1 aR 0
              initCache addr a1.size cache' hAddrRT
          have hModeRoundtrip : mode.toUInt8.toNat = mode := by
            simp [UInt8.toNat, Nat.toUInt8, BitVec.toNat]; omega
          rw [decodeOneStep_copy_varint_in_concat addr sz mode sourceWindow initTarget
              (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8] ++ (Varint.encode sz ++ iR)) 0
              dR 0 (a1 ++ aR) 0 a1.size initCache cache'
              hSz1 hSzBound hMode8 hAddr
              (by rw [ByteArray.size_append]
                  have : (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8] : ByteArray).size = 1 := rfl
                  omega)
              (by rw [ba_getElem_bang_append_left _ _ 0
                  (by have : (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8] : ByteArray).size = 1 := rfl; omega)]
                  rfl)
              (by convert hPfx using 2)
              (by exact hAddrSfx)]
          have h_mk_sz : (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8] : ByteArray).size = 1 := rfl
          have h_empty_sz : ByteArray.empty.size = 0 := rfl
          simp only [Nat.zero_add, ByteArray.size_append, h_mk_sz, h_empty_sz,
            execInstSpec]
      · -- RUN
        simp only [ValidInst] at h_inst_valid
        obtain ⟨hSz, hSzBound⟩ := h_inst_valid
        -- Unfold encodeOneInst for RUN
        rw [encodeOneInst_run_sections] at h_eoi
        simp only [Prod.mk.injEq] at h_eoi
        obtain ⟨rfl, rfl, rfl, rfl, rfl⟩ := h_eoi
        rw [bytearray_empty_append aR]
        -- Need varint decode on (ByteArray.mk #[0] ++ Varint.encode sz ++ iR) at position 1
        -- = varint decode on (Varint.encode sz ++ iR) at position 0 (by prefix relocation)
        -- = varint decode on (Varint.encode sz) at position 0 (by suffix extension)
        -- = (sz, ...) by decode_encode
        have hSzBound35 : sz < 2 ^ 35 := by omega
        have hDE := Varint.decode_encode sz hSzBound35
        have hSfx := varint_decode_suffix_ok (Varint.encode sz) iR 0 sz
            (Varint.encode sz).size hDE
        have hPfx := CursorReloc.varint_decode_reloc_ok (ByteArray.mk #[0])
            (Varint.encode sz ++ iR) 0 sz (Varint.encode sz).size hSfx
        simp only [ByteArray.size, Nat.add_zero] at hPfx
        -- Show i1 = ByteArray.mk #[0] ++ Varint.encode sz
        -- and i1 ++ iR = ByteArray.mk #[0] ++ (Varint.encode sz ++ iR) by assoc
        rw [bytearray_append_assoc (ByteArray.mk #[0]) (Varint.encode sz) iR]
        -- After rfl, `initCache` → `cache'` (RUN passes cache through unchanged)
        have h_run := decodeOneStep_run_in_concat byte sz sourceWindow initTarget
          (ByteArray.mk #[0] ++ (Varint.encode sz ++ iR)) 0
          (ByteArray.mk #[byte] ++ dR) 0 aR 0 cache'
          (by rw [ByteArray.size_append]
              have : (ByteArray.mk #[0] : ByteArray).size = 1 := rfl; omega)
          (by rw [ba_getElem_bang_append_left _ _ 0
              (by have : (ByteArray.mk #[0] : ByteArray).size = 1 := rfl; omega)]
              rfl)
          (by convert hPfx using 2)
          (by rw [ByteArray.size_append]
              have : (ByteArray.mk #[byte]).size = 1 := rfl; omega)
          (by rw [ba_getElem_bang_append_left _ dR 0
              (by have : (ByteArray.mk #[byte]).size = 1 := rfl; omega)]
              rfl)
        rw [h_run]
        have h_mk0_sz : (ByteArray.mk #[0] : ByteArray).size = 1 := rfl
        have h_mkb_sz : (ByteArray.mk #[byte] : ByteArray).size = 1 := rfl
        have h_empty_sz : ByteArray.empty.size = 0 := rfl
        simp only [Nat.zero_add, ByteArray.size_append, h_mk0_sz, h_mkb_sz, h_empty_sz,
            execInstSpec, Prod.mk.injEq, Except.ok.injEq]
    · -- h_i1_pos: i1.size ≥ 1
      rcases inst with ⟨data⟩ | ⟨addr, sz⟩ | ⟨byte, sz⟩
      · -- ADD
        simp only [ValidInst] at h_inst_valid
        obtain ⟨h1, hBound⟩ := h_inst_valid
        by_cases h17 : data.size ≤ 17
        · -- Immediate
          simp only [encodeOneInst, Encoder.findSingleOpcode, h1, h17,
              decide_true, Bool.and_self, ↓reduceIte, Bool.false_eq_true] at h_eoi
          simp only [Prod.mk.injEq] at h_eoi
          have hi := h_eoi.2.1; subst hi
          have : (ByteArray.mk #[(1 + data.size).toUInt8] : ByteArray).size = 1 := rfl; omega
        · -- Varint
          rw [encodeOneInst_add_varint_sections data (by omega)] at h_eoi
          simp only [Prod.mk.injEq] at h_eoi
          have hi := h_eoi.2.1; subst hi
          rw [ByteArray.size_append]
          have : (ByteArray.mk #[(1 : UInt8)] : ByteArray).size = 1 := rfl; omega
      · -- COPY
        simp only [encodeOneInst] at h_eoi
        set eaddr := initCache.encodeAddress addr (sourceWindow.size + initTarget.size)
        obtain ⟨mode, addrBytes, cacheUpd⟩ := eaddr
        simp only [ValidInst] at h_inst_valid
        by_cases hImm : sz ≥ 4 ∧ sz ≤ 18
        · rw [findSingleOpcode_copy_immediate sz addr mode hImm.1 hImm.2] at h_eoi
          simp only [ite_false, Prod.mk.injEq] at h_eoi
          rw [h_eoi.2.1]; exact Nat.le.refl
        · rw [findSingleOpcode_copy_varint sz addr mode hImm] at h_eoi
          simp only [ite_true, Prod.mk.injEq] at h_eoi
          rw [h_eoi.2.1, ByteArray.size_append]
          have : (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8] : ByteArray).size = 1 := rfl; omega
      · -- RUN: i1 = #[0] ++ Varint.encode sz, size ≥ 1
        rw [encodeOneInst_run_sections] at h_eoi
        simp only [Prod.mk.injEq] at h_eoi
        rw [h_eoi.2.1, ByteArray.size_append]
        have : (ByteArray.mk #[0] : ByteArray).size = 1 := rfl
        omega
    · -- h_rest: IH for the remaining instructions
      have h_pos' : pos' = (execInstSpec inst sourceWindow initTarget).size := by
        rcases inst with ⟨data⟩ | ⟨addr, sz⟩ | ⟨byte, sz⟩
        · simp only [ValidInst] at h_inst_valid
          obtain ⟨h1, hBound⟩ := h_inst_valid
          by_cases h17 : data.size ≤ 17
          · simp only [encodeOneInst, Encoder.findSingleOpcode, h1, h17,
                decide_true, Bool.and_self, ↓reduceIte, Bool.false_eq_true] at h_eoi
            simp only [Prod.mk.injEq] at h_eoi
            rw [h_eoi.2.2.2.2]; simp [execInstSpec, ByteArray.size_append]
          · rw [encodeOneInst_add_varint_sections data (by omega)] at h_eoi
            simp only [Prod.mk.injEq] at h_eoi
            rw [h_eoi.2.2.2.2]; simp [execInstSpec, ByteArray.size_append]
        · simp only [ValidInst] at h_inst_valid
          simp only [encodeOneInst] at h_eoi
          set eaddr := initCache.encodeAddress addr (sourceWindow.size + initTarget.size)
          obtain ⟨mode, addrBytes, cacheUpd⟩ := eaddr
          by_cases hImm : sz ≥ 4 ∧ sz ≤ 18
          · rw [findSingleOpcode_copy_immediate sz addr mode hImm.1 hImm.2] at h_eoi
            simp only [ite_false, Prod.mk.injEq] at h_eoi
            rw [h_eoi.2.2.2.2]
            rw [execInstSpec_copy_size addr sz sourceWindow initTarget h_inst_valid.2.2.1]
          · rw [findSingleOpcode_copy_varint sz addr mode hImm] at h_eoi
            simp only [ite_true, Prod.mk.injEq] at h_eoi
            rw [h_eoi.2.2.2.2]
            rw [execInstSpec_copy_size addr sz sourceWindow initTarget h_inst_valid.2.2.1]
        · rw [encodeOneInst_run_sections] at h_eoi
          simp only [Prod.mk.injEq] at h_eoi
          rw [h_eoi.2.2.2.2]
          rw [execInstSpec_run_size byte sz sourceWindow initTarget]
      rw [h_pos'] at h_eir
      have h_cache' : cache'.sNear + cache'.sSame ≤ 7 := by
        have := encodeOneInst_preserves_cache_size inst sourceWindow.size initCache
            initTarget.size
        rw [show (encodeOneInst inst sourceWindow.size initCache initTarget.size).2.2.2.1 =
            cache' from by rw [← h_eoi]] at this
        omega
      have h_ih := ih (execInstSpec inst sourceWindow initTarget) cache' h_rest_valid h_cache'
      simp only [show encodeInstList rest sourceWindow.size cache'
          (execInstSpec inst sourceWindow initTarget).size =
          (dR, iR, aR, cacheFinal, posFinal) from h_eir.symm] at h_ih
      exact h_ih

-- ============================================================================
-- ## Connection to real encoder: encodeWindow ≈ encodeInstListPaired
-- ============================================================================

-- The real encoder's encodeWindow uses accumulator-style loops with double-opcode
-- pairing (combining adjacent ADD+COPY or COPY+ADD into single opcodes).
-- We define a functional spec that mirrors this pairing logic exactly,
-- then prove the accumulator equivalence.

-- ByteArray.push = append singleton
private theorem push_eq_append_singleton (ba : ByteArray) (b : UInt8) :
    ba.push b = ba ++ ByteArray.mk #[b] := by
  apply ByteArray.ext
  simp [ByteArray.data_push, ByteArray.data_append]

-- Encode one instruction (with lookahead pairing), returning fresh sections.
-- Defined as encodeOneInst' with empty accumulators.
def encodeOneInstPaired (insts : Array Encoder.RawInst) (i : Nat) (sourceSegLen : Nat)
    (addrCache : AddressCache.State) (targetPos : Nat)
    : ByteArray × ByteArray × ByteArray × AddressCache.State × Nat × Nat :=
  Encoder.encodeOneInst' insts i sourceSegLen
    ByteArray.empty ByteArray.empty ByteArray.empty addrCache targetPos

-- Encode a list of instructions with pairing, returning concatenated fresh sections.
-- Mirrors Encoder.encodeWindowLoop but in functional style.
def encodeInstListPaired (insts : Array Encoder.RawInst) (sourceSegLen : Nat)
    (cache : AddressCache.State) (tp : Nat)
    : Nat → Nat → ByteArray × ByteArray × ByteArray × AddressCache.State × Nat
  | 0, _ => (ByteArray.empty, ByteArray.empty, ByteArray.empty, cache, tp)
  | fuel + 1, i =>
    if i ≥ insts.size then (ByteArray.empty, ByteArray.empty, ByteArray.empty, cache, tp)
    else
      let (d1, i1, a1, c', tp', skip) := encodeOneInstPaired insts i sourceSegLen cache tp
      let (dR, iR, aR, c'', tp'') := encodeInstListPaired insts sourceSegLen c' tp' fuel (i + skip)
      (d1 ++ dR, i1 ++ iR, a1 ++ aR, c'', tp'')

-- Per-step: real encoder with accumulators = accumulators + fresh sections.
-- encodeOneInst' is "accumulator-additive": running with (ds, is, as) equals
-- running with (empty, empty, empty) and prepending the accumulators.
set_option maxHeartbeats 800000 in
theorem encodeOneInst'_eq_paired (insts : Array Encoder.RawInst) (i : Nat)
    (sourceSegLen : Nat) (ds is as : ByteArray) (cache : AddressCache.State) (tp : Nat) :
    Encoder.encodeOneInst' insts i sourceSegLen ds is as cache tp =
    let (d, inst, a, c', tp', skip) := encodeOneInstPaired insts i sourceSegLen cache tp
    (ds ++ d, is ++ inst, as ++ a, c', tp', skip) := by
  simp only [encodeOneInstPaired]
  unfold Encoder.encodeOneInst'
  by_cases h : i < insts.size
  · rw [dif_pos h, dif_pos h]; simp only []
    match h_inst : insts[i] with
    | .add data =>
      simp only [h_inst]
      by_cases h1 : i + 1 < insts.size
      · simp only [h1, ↓reduceIte]
        match h_next : insts[i+1]! with
        | .copy addr sz =>
          simp only [h_next]
          match h_ea : cache.encodeAddress addr (sourceSegLen + tp + data.size) with
          | (mode, addrBytes, cache') =>
            simp only [h_ea]
            match h_fac : Encoder.findAddCopyOpcode data.size sz mode with
            | some opcode =>
              simp only [h_fac, push_eq_append_singleton, bytearray_empty_append,
                bytearray_append_empty]
            | none =>
              simp only [h_fac, push_eq_append_singleton, bytearray_empty_append,
                bytearray_append_empty, bytearray_append_assoc]
              split <;> rfl
        | .add _ =>
          simp only [h_next, push_eq_append_singleton, bytearray_empty_append,
            bytearray_append_empty, bytearray_append_assoc]
          split <;> rfl
        | .run _ _ =>
          simp only [h_next, push_eq_append_singleton, bytearray_empty_append,
            bytearray_append_empty, bytearray_append_assoc]
          split <;> rfl
      · simp only [h1, Bool.false_eq_true, ↓reduceIte, push_eq_append_singleton,
          bytearray_empty_append, bytearray_append_empty, bytearray_append_assoc]
        split <;> rfl
    | .copy addr sz =>
      simp only [h_inst]
      match h_ea : cache.encodeAddress addr (sourceSegLen + tp) with
      | (mode, addrBytes, cache') =>
        simp only [h_ea]
        by_cases h1 : sz == 4 && i + 1 < insts.size
        · simp only [h1, ↓reduceIte, decide_true]
          match h_next : insts[i+1]! with
          | .add nextData =>
            simp only [h_next]
            by_cases h2 : nextData.size == 1
            · simp only [h2, ↓reduceIte, decide_true]
              match h_fca : Encoder.findCopyAddOpcode sz mode nextData.size with
              | some opcode =>
                simp only [h_fca, push_eq_append_singleton, bytearray_empty_append,
                  bytearray_append_empty]
              | none =>
                simp only [h_fca, push_eq_append_singleton, bytearray_empty_append,
                  bytearray_append_empty, bytearray_append_assoc]
                split <;> rfl
            · simp only [h2, Bool.false_eq_true, ↓reduceIte, push_eq_append_singleton,
                bytearray_empty_append, bytearray_append_empty, bytearray_append_assoc]
              split <;> rfl
          | .copy _ _ =>
            simp only [h_next, push_eq_append_singleton, bytearray_empty_append,
              bytearray_append_empty, bytearray_append_assoc]
            split <;> rfl
          | .run _ _ =>
            simp only [h_next, push_eq_append_singleton, bytearray_empty_append,
              bytearray_append_empty, bytearray_append_assoc]
            split <;> rfl
        · simp only [h1, Bool.false_eq_true, ↓reduceIte, push_eq_append_singleton,
            bytearray_empty_append, bytearray_append_empty, bytearray_append_assoc]
          split <;> rfl
    | .run byte sz =>
      simp only [h_inst, push_eq_append_singleton, bytearray_empty_append,
        bytearray_append_empty, bytearray_append_assoc]
      split <;> rfl
  · rw [dif_neg h, dif_neg h]; simp [bytearray_append_empty]

-- Loop equivalence: encodeWindowLoop = accumulators + encodeInstListPaired
theorem encodeWindowLoop_eq_paired (insts : Array Encoder.RawInst) (sourceSegLen : Nat)
    (ds is as : ByteArray) (cache : AddressCache.State) (tp : Nat)
    (fuel i : Nat) :
    Encoder.encodeWindowLoop insts sourceSegLen ds is as cache tp fuel i =
    let (d, inst, a, _, _) := encodeInstListPaired insts sourceSegLen cache tp fuel i
    (ds ++ d, is ++ inst, as ++ a) := by
  induction fuel generalizing ds is as cache tp i with
  | zero =>
    simp only [Encoder.encodeWindowLoop, encodeInstListPaired, bytearray_append_empty]
  | succ n ih =>
    simp only [Encoder.encodeWindowLoop, encodeInstListPaired]
    by_cases hge : i ≥ insts.size
    · simp only [hge, ↓reduceIte, ge_iff_le, bytearray_append_empty]
    · simp only [hge, ↓reduceIte, ge_iff_le]
      rw [encodeOneInst'_eq_paired]
      simp only [encodeOneInstPaired]
      match h_step : Encoder.encodeOneInst' insts i sourceSegLen
          ByteArray.empty ByteArray.empty ByteArray.empty cache tp with
      | (d1, i1, a1, c', tp', skip) =>
        simp only [h_step]
        rw [ih]
        match encodeInstListPaired insts sourceSegLen c' tp' n (i + skip) with
        | (dR, iR, aR, c'', tp'') =>
          simp only [bytearray_append_assoc]

-- Top-level: encodeWindow = encodeInstListPaired with initial values
theorem encodeWindow_eq_paired (insts : Array Encoder.RawInst) (sourceSegLen : Nat) :
    Encoder.encodeWindow insts sourceSegLen =
    let (d, inst, a, _, _) := encodeInstListPaired insts sourceSegLen
      AddressCache.State.init 0 insts.size 0
    (d, inst, a) := by
  simp only [Encoder.encodeWindow]
  rw [encodeWindowLoop_eq_paired]
  simp only [bytearray_empty_append]

-- ============================================================================
-- ## Connection to real decoder: applyWindow ≈ decodeLoop
-- ============================================================================

-- The real decoder's applyWindowLoop is exactly the spec decodeLoop
-- (modulo parameter order). This follows from decodeOneStep being shared.

-- If decodeLoop succeeds with instSection.size fuel, applyWindow succeeds too.
theorem applyWindow_of_decodeLoop
    (win : Window) (source : ByteArray)
    (target : ByteArray)
    (sourceSegment : ByteArray)
    (h_seg : sourceSegment =
      if win.winIndicator &&& WinIndicator.source != 0 then
        source.extract win.sourceSegOff (win.sourceSegOff + win.sourceSegLen)
      else ByteArray.empty)
    (ic_end dc_end ac_end : Varint.Cursor)
    (cache_end : AddressCache.State)
    (h_loop : decodeLoop win.instSection.size sourceSegment ByteArray.empty
      ⟨win.instSection, 0⟩ ⟨win.dataSection, 0⟩
      ⟨win.addrSection, 0⟩ AddressCache.State.init =
      .ok (target, ic_end, dc_end, ac_end, cache_end))
    (h_len : target.size = win.targetLen)
    (h_adler : win.adler32 = some (Decoder.adler32 target) ∨ win.adler32 = none) :
    Decoder.applyWindow win source = .ok target := by
  simp only [Decoder.applyWindow, bind, Except.bind]
  -- Replace the inlined sourceSegment computation with our parameter
  conv_lhs => rw [show (if win.winIndicator &&& WinIndicator.source != 0 then
    source.extract win.sourceSegOff (win.sourceSegOff + win.sourceSegLen)
    else ByteArray.empty) = sourceSegment from h_seg.symm]
  -- Convert applyWindowLoop to decodeLoop
  rw [show ByteArray.emptyWithCapacity win.targetLen = ByteArray.empty from rfl]
  rw [(decodeLoop_eq_applyWindowLoop sourceSegment win.instSection.size
    ByteArray.empty ⟨win.instSection, 0⟩ ⟨win.dataSection, 0⟩
    ⟨win.addrSection, 0⟩ AddressCache.State.init).symm]
  rw [h_loop]
  -- Simplify the do-notation artifacts and validation checks
  rcases h_adler with had | had <;> simp [had, h_len, pure, Except.pure, bind, Except.bind]

-- ============================================================================
-- ## Helpers for parseWindow_encoded_sections
-- ============================================================================

-- Extract from the middle of a three-part concatenation
private theorem extract_middle' (pfx mid sfx : ByteArray) :
    (pfx ++ mid ++ sfx).extract pfx.size (pfx.size + mid.size) = mid := by
  rw [bytearray_extract_append_left (pfx ++ mid) sfx _ _
    (by simp [ByteArray.size_append])]
  simp [bytearray_extract_append_right]

-- Extract segment from data given a decomposition and size proof
private theorem extract_of_eq_concat (data pfx mid sfx : ByteArray)
    (pos : Nat) (h_data : data = pfx ++ mid ++ sfx) (h_pos : pfx.size = pos) :
    data.extract pos (pos + mid.size) = mid := by
  subst h_data; rw [← h_pos]; exact extract_middle' pfx mid sfx

-- Proof-irrelevant getElem congr for ByteArray
private theorem ba_getElem_congr' {a b : ByteArray} {i : Nat}
    (h : a = b) (ha : i < a.size) (hb : i < b.size) :
    a[i]'ha = b[i]'hb := by subst h; rfl

-- If data.extract pos (pos+n) = target, then data[pos+k]! = target[k]!
private theorem getElem_bang_of_extract (data target : ByteArray) (pos k : Nat)
    (h_bound : pos + target.size ≤ data.size)
    (h_extract : data.extract pos (pos + target.size) = target)
    (hk : k < target.size) :
    data[pos + k]! = target[k]! := by
  have h1 : pos + k < data.size := by omega
  have h2 : k < (data.extract pos (pos + target.size)).size := by
    rw [ByteArray.size_extract]; omega
  simp only [getElem!_pos, h1, hk]
  rw [← ByteArray.get_extract h2]
  exact ba_getElem_congr' h_extract h2 hk

-- Bridge: v.toUInt8.toUInt32.toBitVec = extractLsb' + zeroExtend
private theorem toUInt8_toUInt32_toBitVec' (v : UInt32) :
    v.toUInt8.toUInt32.toBitVec =
    (v.toBitVec.extractLsb' 0 8).zeroExtend 32 := by
  simp only [UInt32.toUInt8, Nat.toUInt8, UInt8.toUInt32,
             UInt32.toNat, UInt8.toNat, UInt8.ofNat,
             BitVec.extractLsb', BitVec.zeroExtend,
             BitVec.ofNat, BitVec.toNat]
  congr 1

-- UInt32 byte decomposition/reconstruction is identity
private theorem uint32_byte_roundtrip' (v : UInt32) :
    (v >>> 24).toUInt8.toUInt32 <<< 24 |||
    (v >>> 16).toUInt8.toUInt32 <<< 16 |||
    (v >>> 8).toUInt8.toUInt32 <<< 8 |||
    v.toUInt8.toUInt32 = v := by
  rw [← UInt32.toBitVec_inj]
  simp only [UInt32.toBitVec_or, UInt32.toBitVec_shiftLeft, toUInt8_toUInt32_toBitVec']
  simp only [UInt32.toBitVec_shiftRight]
  bv_decide

-- readUInt32BE at known position with known extract
set_option maxHeartbeats 400000 in
private theorem readUInt32BE_at_pos (v : UInt32) (data : ByteArray) (pos : Nat)
    (h_bound : pos + 4 ≤ data.size)
    (h_extract : data.extract pos (pos + 4) = Encoder.writeUInt32BE v) :
    Decoder.readUInt32BE ⟨data, pos⟩ = .ok (v, ⟨data, pos + 4⟩) := by
  simp only [Decoder.readUInt32BE, bind, Except.bind]
  rw [Encoder.Proofs.readByte_ok (show pos < data.size from by omega)]
  simp only [Except.bind]
  rw [Encoder.Proofs.readByte_ok (show pos + 1 < data.size from by omega)]
  simp only [Except.bind]
  rw [Encoder.Proofs.readByte_ok (show pos + 2 < data.size from by omega)]
  simp only [Except.bind]
  rw [Encoder.Proofs.readByte_ok (show pos + 3 < data.size from by omega)]
  simp only [pure, Except.pure]
  have h_wu_sz : (Encoder.writeUInt32BE v).size = 4 := rfl
  have hb0 := getElem_bang_of_extract data (Encoder.writeUInt32BE v) pos 0
    (by rw [h_wu_sz]; exact h_bound) h_extract (by rw [h_wu_sz]; omega)
  have hb1 := getElem_bang_of_extract data (Encoder.writeUInt32BE v) pos 1
    (by rw [h_wu_sz]; exact h_bound) h_extract (by rw [h_wu_sz]; omega)
  have hb2 := getElem_bang_of_extract data (Encoder.writeUInt32BE v) pos 2
    (by rw [h_wu_sz]; exact h_bound) h_extract (by rw [h_wu_sz]; omega)
  have hb3 := getElem_bang_of_extract data (Encoder.writeUInt32BE v) pos 3
    (by rw [h_wu_sz]; exact h_bound) h_extract (by rw [h_wu_sz]; omega)
  simp only [Nat.add_zero] at hb0
  rw [hb0, hb1, hb2, hb3]
  simp only [Encoder.writeUInt32BE, getElem!_pos,
    show (0 : Nat) < 4 from by omega,
    show (1 : Nat) < 4 from by omega,
    show (2 : Nat) < 4 from by omega,
    show (3 : Nat) < 4 from by omega]
  congr 1; congr 1
  exact uint32_byte_roundtrip' v

-- ============================================================================
-- ## Top-level roundtrip: encode → decode
-- ============================================================================

-- The main correctness theorem: for any source and target, encoding
-- and then decoding produces the original target.
--
-- This requires:
-- 1. parseHeader correctly parses the encoder's header (Phase D)
-- 2. parseWindow correctly parses the window structure (Phase D)
-- 3. applyWindow correctly executes instructions (this file)
-- 4. The instruction list from generateInstructions, when executed,
--    reproduces the target (correctness of instruction generation)

-- Step 1: Wire format roundtrip for a single window
-- Given well-formed sections, serializing them into the VCDIFF wire format
-- and parsing them back recovers the original sections.
set_option maxHeartbeats 1600000 in
theorem parseWindow_encoded_sections
    (source target : ByteArray)
    (dataSec instSec addrSec : ByteArray)
    (h_source_pos : source.size > 0)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31)
    (h_sec_bound : dataSec.size + instSec.size + addrSec.size + 30 < 2 ^ 35) :
    let checksumBytes := Encoder.writeUInt32BE (Encoder.adler32 target)
    let targetLenEnc := Varint.encode target.size
    let dataLenEnc := Varint.encode dataSec.size
    let instLenEnc := Varint.encode instSec.size
    let addrLenEnc := Varint.encode addrSec.size
    let deltaBody := targetLenEnc ++ ByteArray.mk #[0x00]
      ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
      ++ checksumBytes
      ++ dataSec ++ instSec ++ addrSec
    let encLenEnc := Varint.encode deltaBody.size
    let winIndicator := WinIndicator.source ||| WinIndicator.adler32
    let windowBytes := ByteArray.mk #[winIndicator]
      ++ Varint.encode source.size
      ++ Varint.encode 0
      ++ encLenEnc ++ deltaBody
    ∃ win rest,
    Decoder.parseWindow ⟨windowBytes, 0⟩ = .ok (win, rest) ∧
    win.dataSection = dataSec ∧
    win.instSection = instSec ∧
    win.addrSection = addrSec ∧
    win.targetLen = target.size ∧
    win.sourceSegLen = source.size ∧
    win.sourceSegOff = 0 ∧
    win.winIndicator = WinIndicator.source ||| WinIndicator.adler32 ∧
    win.adler32 = some (Encoder.adler32 target) ∧
    rest = ⟨windowBytes, windowBytes.size⟩ := by
  intro checksumBytes targetLenEnc dataLenEnc instLenEnc addrLenEnc
    deltaBody encLenEnc winIndicator windowBytes
  -- Size bounds
  have h_v_src : (Varint.encode source.size).size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ (by omega)
  have h_v_0 : (Varint.encode 0).size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ (by omega)
  have h_v_tgt : targetLenEnc.size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ (by omega)
  have h_v_data : dataLenEnc.size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ (show dataSec.size < 2 ^ 35 by omega)
  have h_v_inst : instLenEnc.size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ (show instSec.size < 2 ^ 35 by omega)
  have h_v_addr : addrLenEnc.size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ (show addrSec.size < 2 ^ 35 by omega)
  have h_cksum_sz : checksumBytes.size = 4 := Encoder.Proofs.writeUInt32BE_size _
  have h_delta_sz : deltaBody.size =
    targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size +
    checksumBytes.size + dataSec.size + instSec.size + addrSec.size := by
    simp only [deltaBody]
    have hmk : (ByteArray.mk #[(0x00 : UInt8)]).size = 1 := rfl
    repeat rw [ByteArray.size_append]
    rw [hmk]
  have h_delta_bound : deltaBody.size < 2 ^ 35 := by
    rw [h_delta_sz, h_cksum_sz]; omega
  have h_v_enc : encLenEnc.size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ h_delta_bound
  have h_wb_sz : windowBytes.size =
    1 + (Varint.encode source.size).size + (Varint.encode 0).size +
    encLenEnc.size + deltaBody.size := by
    simp only [windowBytes]
    have hmk : (ByteArray.mk #[winIndicator]).size = 1 := rfl
    repeat rw [ByteArray.size_append]
    rw [hmk]
  -- Provide existential witnesses
  refine ⟨⟨winIndicator, source.size, 0, target.size, dataSec, instSec, addrSec,
           some (Encoder.adler32 target)⟩,
         ⟨windowBytes, 1 + (Varint.encode source.size).size + (Varint.encode 0).size +
           encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
           addrLenEnc.size + 4 + dataSec.size + instSec.size + addrSec.size⟩,
         ?_, rfl, rfl, rfl, rfl, rfl, rfl, rfl, rfl, ?_⟩
  on_goal 2 =>
    simp only [Varint.Cursor.mk.injEq]
    exact ⟨trivial, by rw [h_wb_sz, h_delta_sz, h_cksum_sz]; omega⟩
  -- ═══════════════════════════════════════
  -- Flag conditions (all decidable on concrete UInt8)
  -- ═══════════════════════════════════════
  have hf1 : (winIndicator &&& WinIndicator.reserved != 0) = false := by
    simp only [winIndicator]; native_decide
  have hf2 : (winIndicator &&& WinIndicator.target != 0) = false := by
    simp only [winIndicator]; native_decide
  have hf3 : (winIndicator &&& WinIndicator.source != 0) = true := by
    simp only [winIndicator]; native_decide
  have hf4 : (winIndicator &&& WinIndicator.adler32 != 0) = true := by
    simp only [winIndicator]; native_decide
  have hf5 : ((0x00 : UInt8) &&& DeltaIndicator.reserved != 0) = false := by native_decide
  have hf6 : ((0x00 : UInt8) &&&
    (DeltaIndicator.dataComp ||| DeltaIndicator.instComp ||| DeltaIndicator.addrComp) != 0) = false := by
    native_decide
  -- Let-binding size equalities (needed for omega to unify varint sizes)
  have h_enc_eq : (Varint.encode deltaBody.size).size = encLenEnc.size := rfl
  have h_tgt_eq : (Varint.encode target.size).size = targetLenEnc.size := rfl
  have h_dat_eq : (Varint.encode dataSec.size).size = dataLenEnc.size := rfl
  have h_ins_eq : (Varint.encode instSec.size).size = instLenEnc.size := rfl
  have h_adr_eq : (Varint.encode addrSec.size).size = addrLenEnc.size := rfl
  -- ByteArray.mk size helpers (needed since ByteArray.size is opaque to omega)
  have h_mk_wi_sz : (ByteArray.mk #[winIndicator]).size = 1 := rfl
  have h_mk_00_sz : (ByteArray.mk #[(0x00 : UInt8)]).size = 1 := rfl
  -- ═══════════════════════════════════════
  -- Cursor operation results (each parse step)
  -- ═══════════════════════════════════════
  -- Step 1: readByte at pos 0 → winIndicator
  have h_byte0 : windowBytes[0]! = winIndicator := by
    have h_ext := extract_of_eq_concat windowBytes
      ByteArray.empty (ByteArray.mk #[winIndicator])
      (Varint.encode source.size ++ Varint.encode 0 ++ encLenEnc ++ deltaBody) 0
      (by simp only [windowBytes, bytearray_append_assoc, bytearray_empty_append])
      rfl
    have hmk_sz : (ByteArray.mk #[winIndicator]).size = 1 := rfl
    have hb := getElem_bang_of_extract windowBytes (ByteArray.mk #[winIndicator]) 0 0
      (by rw [h_wb_sz, hmk_sz]; omega) h_ext (by rw [hmk_sz]; omega)
    simpa using hb
  have h_rb0 : (⟨windowBytes, 0⟩ : Varint.Cursor).readByte =
    .ok (winIndicator, ⟨windowBytes, 1⟩) := by
    rw [Encoder.Proofs.readByte_ok (show 0 < windowBytes.size from by rw [h_wb_sz]; omega)]
    rw [h_byte0]
  -- Step 2: Varint.decode at pos 1 → source.size
  have h_vd_src : Varint.decode ⟨windowBytes, 1⟩ =
    .ok (source.size, ⟨windowBytes, 1 + (Varint.encode source.size).size⟩) :=
    Varint.decode_at_pos source.size (by omega) windowBytes 1
      (by rw [h_wb_sz]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator])
        (Varint.encode source.size)
        (Varint.encode 0 ++ encLenEnc ++ deltaBody)
        1
        (by simp only [windowBytes, bytearray_append_assoc])
        rfl)
  -- Step 3: Varint.decode → 0 (sourceSegOff)
  have h_vd_off : Varint.decode ⟨windowBytes, 1 + (Varint.encode source.size).size⟩ =
    .ok (0, ⟨windowBytes, 1 + (Varint.encode source.size).size + (Varint.encode 0).size⟩) :=
    Varint.decode_at_pos 0 (by omega) windowBytes _
      (by rw [h_wb_sz]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator] ++ Varint.encode source.size)
        (Varint.encode 0)
        (encLenEnc ++ deltaBody)
        (1 + (Varint.encode source.size).size)
        (by simp only [windowBytes, bytearray_append_assoc])
        (by simp only [ByteArray.size_append, h_mk_wi_sz]))
  -- Step 4: Varint.decode → deltaBody.size (encLen)
  have h_vd_enc : Varint.decode ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size⟩ =
    .ok (deltaBody.size, ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size⟩) :=
    Varint.decode_at_pos deltaBody.size h_delta_bound windowBytes _
      (by rw [h_wb_sz, h_enc_eq]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator] ++ Varint.encode source.size ++ Varint.encode 0)
        encLenEnc deltaBody
        (1 + (Varint.encode source.size).size + (Varint.encode 0).size)
        (by simp only [windowBytes, bytearray_append_assoc])
        (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz]))
  -- Step 5: Varint.decode → target.size (targetLen)
  have h_vd_tgt : Varint.decode ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size⟩ =
    .ok (target.size, ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size⟩) :=
    Varint.decode_at_pos target.size (by omega) windowBytes _
      (by rw [h_wb_sz, h_delta_sz, h_tgt_eq]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator] ++ Varint.encode source.size ++ Varint.encode 0
          ++ encLenEnc)
        targetLenEnc
        (ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
          ++ checksumBytes ++ dataSec ++ instSec ++ addrSec)
        (1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size)
        (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
        (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz]))
  -- Step 6: readByte → 0x00 (deltaInd)
  have h_byte_di : let pos := 1 + (Varint.encode source.size).size + (Varint.encode 0).size +
      encLenEnc.size + targetLenEnc.size
    windowBytes[pos]! = (0x00 : UInt8) := by
    intro pos
    have h_ext_di := extract_of_eq_concat windowBytes
      (ByteArray.mk #[winIndicator] ++ Varint.encode source.size ++ Varint.encode 0
        ++ encLenEnc ++ targetLenEnc)
      (ByteArray.mk #[0x00])
      (dataLenEnc ++ instLenEnc ++ addrLenEnc ++ checksumBytes
        ++ dataSec ++ instSec ++ addrSec)
      pos
      (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
      (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz]; rfl)
    have h_byte := getElem_bang_of_extract windowBytes (ByteArray.mk #[(0x00 : UInt8)]) pos 0
      (by rw [h_wb_sz]; rw [h_delta_sz]; omega) h_ext_di (by omega)
    simpa [Nat.add_zero] using h_byte
  have h_rb_di : (⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size⟩ : Varint.Cursor).readByte =
    .ok (0x00, ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1⟩) := by
    rw [Encoder.Proofs.readByte_ok (show _ < windowBytes.size from by rw [h_wb_sz]; rw [h_delta_sz]; omega)]
    rw [h_byte_di]
  -- Step 7-9: Varint.decode × 3 (dataLen, instLen, addrLen)
  have h_vd_data : Varint.decode ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1⟩ =
    .ok (dataSec.size, ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size⟩) :=
    Varint.decode_at_pos dataSec.size (by omega) windowBytes _
      (by rw [h_wb_sz, h_delta_sz, h_dat_eq]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator] ++ Varint.encode source.size ++ Varint.encode 0
          ++ encLenEnc ++ targetLenEnc ++ ByteArray.mk #[0x00])
        dataLenEnc
        (instLenEnc ++ addrLenEnc ++ checksumBytes ++ dataSec ++ instSec ++ addrSec)
        (1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
          targetLenEnc.size + 1)
        (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
        (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz]))
  have h_vd_inst : Varint.decode ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size⟩ =
    .ok (instSec.size, ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size⟩) :=
    Varint.decode_at_pos instSec.size (by omega) windowBytes _
      (by rw [h_wb_sz, h_delta_sz, h_ins_eq]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator] ++ Varint.encode source.size ++ Varint.encode 0
          ++ encLenEnc ++ targetLenEnc ++ ByteArray.mk #[0x00] ++ dataLenEnc)
        instLenEnc
        (addrLenEnc ++ checksumBytes ++ dataSec ++ instSec ++ addrSec)
        (1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
          targetLenEnc.size + 1 + dataLenEnc.size)
        (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
        (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz]))
  have h_vd_addr : Varint.decode ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size⟩ =
    .ok (addrSec.size, ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size⟩) :=
    Varint.decode_at_pos addrSec.size (by omega) windowBytes _
      (by rw [h_wb_sz, h_delta_sz, h_adr_eq]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator] ++ Varint.encode source.size ++ Varint.encode 0
          ++ encLenEnc ++ targetLenEnc ++ ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc)
        addrLenEnc
        (checksumBytes ++ dataSec ++ instSec ++ addrSec)
        (1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
          targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size)
        (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
        (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz]))
  -- Step 10: readUInt32BE → checksum
  have h_u32 : Decoder.readUInt32BE ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size⟩ =
    .ok (Encoder.adler32 target, ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size + 4⟩) := by
    have h_ext_cksum := extract_of_eq_concat windowBytes
      (ByteArray.mk #[winIndicator] ++ Varint.encode source.size ++ Varint.encode 0
        ++ encLenEnc ++ targetLenEnc ++ ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc
        ++ addrLenEnc)
      checksumBytes
      (dataSec ++ instSec ++ addrSec)
      (1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
        targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size)
      (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
      (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz])
    exact readUInt32BE_at_pos (Encoder.adler32 target) windowBytes _
      (by rw [h_wb_sz]; rw [h_delta_sz]; rw [h_cksum_sz]; omega)
      h_ext_cksum
  -- Step 11-13: readBytes × 3 (dataSec, instSec, addrSec)
  have h_rd_data : Varint.Cursor.readBytes ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size + 4⟩
      dataSec.size =
    .ok (dataSec, ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size + 4 +
      dataSec.size⟩) := by
    have h_ext_d := extract_of_eq_concat windowBytes
      (ByteArray.mk #[winIndicator] ++ Varint.encode source.size ++ Varint.encode 0
        ++ encLenEnc ++ targetLenEnc ++ ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc
        ++ addrLenEnc ++ checksumBytes)
      dataSec
      (instSec ++ addrSec)
      (1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
        targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size + 4)
      (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
      (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz, h_cksum_sz])
    rw [Encoder.Proofs.readBytes_ok (by rw [h_wb_sz]; rw [h_delta_sz]; rw [h_cksum_sz]; omega),
        h_ext_d]
  have h_rd_inst : Varint.Cursor.readBytes ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size + 4 +
      dataSec.size⟩
      instSec.size =
    .ok (instSec, ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size + 4 +
      dataSec.size + instSec.size⟩) := by
    have h_ext_i := extract_of_eq_concat windowBytes
      (ByteArray.mk #[winIndicator] ++ Varint.encode source.size ++ Varint.encode 0
        ++ encLenEnc ++ targetLenEnc ++ ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc
        ++ addrLenEnc ++ checksumBytes ++ dataSec)
      instSec
      addrSec
      (1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
        targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size + 4 +
        dataSec.size)
      (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
      (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz, h_cksum_sz])
    rw [Encoder.Proofs.readBytes_ok (by rw [h_wb_sz]; rw [h_delta_sz]; rw [h_cksum_sz]; omega),
        h_ext_i]
  have h_rd_addr : Varint.Cursor.readBytes ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size + 4 +
      dataSec.size + instSec.size⟩
      addrSec.size =
    .ok (addrSec, ⟨windowBytes,
      1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
      targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size + 4 +
      dataSec.size + instSec.size + addrSec.size⟩) := by
    have h_ext_a := extract_of_eq_concat windowBytes
      (ByteArray.mk #[winIndicator] ++ Varint.encode source.size ++ Varint.encode 0
        ++ encLenEnc ++ targetLenEnc ++ ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc
        ++ addrLenEnc ++ checksumBytes ++ dataSec ++ instSec)
      addrSec
      ByteArray.empty
      (1 + (Varint.encode source.size).size + (Varint.encode 0).size + encLenEnc.size +
        targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size + 4 +
        dataSec.size + instSec.size)
      (by simp only [windowBytes, deltaBody, bytearray_append_assoc, bytearray_append_empty])
      (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz, h_cksum_sz])
    rw [Encoder.Proofs.readBytes_ok (by rw [h_wb_sz]; rw [h_delta_sz]; rw [h_cksum_sz]; omega),
        h_ext_a]
  -- ═══════════════════════════════════════
  -- Main chain: unfold parseWindow and rewrite with all steps
  -- ═══════════════════════════════════════
  simp only [Decoder.parseWindow,
    bind, Except.bind, pure, Except.pure,
    h_rb0, hf1, hf2, hf3, hf4,
    h_vd_src, h_vd_off, h_vd_enc, h_vd_tgt,
    h_rb_di, hf5, hf6,
    h_vd_data, h_vd_inst, h_vd_addr,
    h_u32, h_rd_data, h_rd_inst, h_rd_addr,
    ite_true, ite_false, Bool.false_eq_true]

-- No-source variant: when source.size = 0, the window omits source segment varints
-- and uses WinIndicator.adler32 alone.
set_option maxHeartbeats 1600000 in
theorem parseWindow_encoded_sections_no_source
    (target : ByteArray)
    (dataSec instSec addrSec : ByteArray)
    (h_target_bound : target.size < 2 ^ 31)
    (h_sec_bound : dataSec.size + instSec.size + addrSec.size + 30 < 2 ^ 35) :
    let checksumBytes := Encoder.writeUInt32BE (Encoder.adler32 target)
    let targetLenEnc := Varint.encode target.size
    let dataLenEnc := Varint.encode dataSec.size
    let instLenEnc := Varint.encode instSec.size
    let addrLenEnc := Varint.encode addrSec.size
    let deltaBody := targetLenEnc ++ ByteArray.mk #[0x00]
      ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
      ++ checksumBytes
      ++ dataSec ++ instSec ++ addrSec
    let encLenEnc := Varint.encode deltaBody.size
    let winIndicator := WinIndicator.adler32
    let windowBytes := ByteArray.mk #[winIndicator]
      ++ encLenEnc ++ deltaBody
    ∃ win rest,
    Decoder.parseWindow ⟨windowBytes, 0⟩ = .ok (win, rest) ∧
    win.dataSection = dataSec ∧
    win.instSection = instSec ∧
    win.addrSection = addrSec ∧
    win.targetLen = target.size ∧
    win.sourceSegLen = 0 ∧
    win.sourceSegOff = 0 ∧
    win.winIndicator = WinIndicator.adler32 ∧
    win.adler32 = some (Encoder.adler32 target) ∧
    rest = ⟨windowBytes, windowBytes.size⟩ := by
  intro checksumBytes targetLenEnc dataLenEnc instLenEnc addrLenEnc
    deltaBody encLenEnc winIndicator windowBytes
  -- Size bounds
  have h_v_tgt : targetLenEnc.size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ (by omega)
  have h_v_data : dataLenEnc.size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ (show dataSec.size < 2 ^ 35 by omega)
  have h_v_inst : instLenEnc.size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ (show instSec.size < 2 ^ 35 by omega)
  have h_v_addr : addrLenEnc.size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ (show addrSec.size < 2 ^ 35 by omega)
  have h_cksum_sz : checksumBytes.size = 4 := Encoder.Proofs.writeUInt32BE_size _
  have h_delta_sz : deltaBody.size =
    targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size + addrLenEnc.size +
    checksumBytes.size + dataSec.size + instSec.size + addrSec.size := by
    simp only [deltaBody]
    have hmk : (ByteArray.mk #[(0x00 : UInt8)]).size = 1 := rfl
    repeat rw [ByteArray.size_append]
    rw [hmk]
  have h_delta_bound : deltaBody.size < 2 ^ 35 := by
    rw [h_delta_sz, h_cksum_sz]; omega
  have h_v_enc : encLenEnc.size ≤ 5 :=
    Encoder.Proofs.varint_encode_size_le_5 _ h_delta_bound
  have h_wb_sz : windowBytes.size =
    1 + encLenEnc.size + deltaBody.size := by
    simp only [windowBytes]
    have hmk : (ByteArray.mk #[winIndicator]).size = 1 := rfl
    repeat rw [ByteArray.size_append]
    rw [hmk]
  -- Provide existential witnesses
  refine ⟨⟨winIndicator, 0, 0, target.size, dataSec, instSec, addrSec,
           some (Encoder.adler32 target)⟩,
         ⟨windowBytes, 1 +
           encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
           addrLenEnc.size + 4 + dataSec.size + instSec.size + addrSec.size⟩,
         ?_, rfl, rfl, rfl, rfl, rfl, rfl, rfl, rfl, ?_⟩
  on_goal 2 =>
    simp only [Varint.Cursor.mk.injEq]
    exact ⟨trivial, by rw [h_wb_sz, h_delta_sz, h_cksum_sz]; omega⟩
  -- ═══════════════════════════════════════
  -- Flag conditions
  -- ═══════════════════════════════════════
  have hf1 : (winIndicator &&& WinIndicator.reserved != 0) = false := by
    simp only [winIndicator]; native_decide
  have hf2 : (winIndicator &&& WinIndicator.target != 0) = false := by
    simp only [winIndicator]; native_decide
  have hf3 : (winIndicator &&& WinIndicator.source != 0) = false := by
    simp only [winIndicator]; native_decide
  have hf4 : (winIndicator &&& WinIndicator.adler32 != 0) = true := by
    simp only [winIndicator]; native_decide
  have hf5 : ((0x00 : UInt8) &&& DeltaIndicator.reserved != 0) = false := by native_decide
  have hf6 : ((0x00 : UInt8) &&&
    (DeltaIndicator.dataComp ||| DeltaIndicator.instComp ||| DeltaIndicator.addrComp) != 0) = false := by
    native_decide
  -- Let-binding size equalities
  have h_enc_eq : (Varint.encode deltaBody.size).size = encLenEnc.size := rfl
  have h_tgt_eq : (Varint.encode target.size).size = targetLenEnc.size := rfl
  have h_dat_eq : (Varint.encode dataSec.size).size = dataLenEnc.size := rfl
  have h_ins_eq : (Varint.encode instSec.size).size = instLenEnc.size := rfl
  have h_adr_eq : (Varint.encode addrSec.size).size = addrLenEnc.size := rfl
  -- ByteArray.mk size helpers
  have h_mk_wi_sz : (ByteArray.mk #[winIndicator]).size = 1 := rfl
  have h_mk_00_sz : (ByteArray.mk #[(0x00 : UInt8)]).size = 1 := rfl
  -- ═══════════════════════════════════════
  -- Cursor operation results
  -- ═══════════════════════════════════════
  -- Step 1: readByte at pos 0 → winIndicator
  have h_byte0 : windowBytes[0]! = winIndicator := by
    have h_ext := extract_of_eq_concat windowBytes
      ByteArray.empty (ByteArray.mk #[winIndicator])
      (encLenEnc ++ deltaBody) 0
      (by simp only [windowBytes, bytearray_append_assoc, bytearray_empty_append])
      rfl
    have hmk_sz : (ByteArray.mk #[winIndicator]).size = 1 := rfl
    have hb := getElem_bang_of_extract windowBytes (ByteArray.mk #[winIndicator]) 0 0
      (by rw [h_wb_sz, hmk_sz]; omega) h_ext (by rw [hmk_sz]; omega)
    simpa using hb
  have h_rb0 : (⟨windowBytes, 0⟩ : Varint.Cursor).readByte =
    .ok (winIndicator, ⟨windowBytes, 1⟩) := by
    rw [Encoder.Proofs.readByte_ok (show 0 < windowBytes.size from by rw [h_wb_sz]; omega)]
    rw [h_byte0]
  -- Step 2: Varint.decode at pos 1 → deltaBody.size (encLen)
  -- (No source varints to parse since source flag is not set)
  have h_vd_enc : Varint.decode ⟨windowBytes, 1⟩ =
    .ok (deltaBody.size, ⟨windowBytes, 1 + encLenEnc.size⟩) :=
    Varint.decode_at_pos deltaBody.size h_delta_bound windowBytes 1
      (by rw [h_wb_sz, h_enc_eq]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator])
        encLenEnc deltaBody
        1
        (by simp only [windowBytes, bytearray_append_assoc])
        rfl)
  -- Step 3: Varint.decode → target.size (targetLen)
  have h_vd_tgt : Varint.decode ⟨windowBytes, 1 + encLenEnc.size⟩ =
    .ok (target.size, ⟨windowBytes, 1 + encLenEnc.size + targetLenEnc.size⟩) :=
    Varint.decode_at_pos target.size (by omega) windowBytes _
      (by rw [h_wb_sz, h_delta_sz, h_tgt_eq]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator] ++ encLenEnc)
        targetLenEnc
        (ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
          ++ checksumBytes ++ dataSec ++ instSec ++ addrSec)
        (1 + encLenEnc.size)
        (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
        (by simp only [ByteArray.size_append, h_mk_wi_sz]))
  -- Step 4: readByte → 0x00 (deltaInd)
  have h_byte_di : let pos := 1 + encLenEnc.size + targetLenEnc.size
    windowBytes[pos]! = (0x00 : UInt8) := by
    intro pos
    have h_ext_di := extract_of_eq_concat windowBytes
      (ByteArray.mk #[winIndicator] ++ encLenEnc ++ targetLenEnc)
      (ByteArray.mk #[0x00])
      (dataLenEnc ++ instLenEnc ++ addrLenEnc ++ checksumBytes
        ++ dataSec ++ instSec ++ addrSec)
      pos
      (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
      (by simp only [ByteArray.size_append, h_mk_wi_sz]; rfl)
    have h_byte := getElem_bang_of_extract windowBytes (ByteArray.mk #[(0x00 : UInt8)]) pos 0
      (by rw [h_wb_sz]; rw [h_delta_sz]; omega) h_ext_di (by omega)
    simpa [Nat.add_zero] using h_byte
  have h_rb_di : (⟨windowBytes, 1 + encLenEnc.size + targetLenEnc.size⟩ : Varint.Cursor).readByte =
    .ok (0x00, ⟨windowBytes, 1 + encLenEnc.size + targetLenEnc.size + 1⟩) := by
    rw [Encoder.Proofs.readByte_ok (show _ < windowBytes.size from by rw [h_wb_sz]; rw [h_delta_sz]; omega)]
    rw [h_byte_di]
  -- Step 5-7: Varint.decode × 3 (dataLen, instLen, addrLen)
  have h_vd_data : Varint.decode ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1⟩ =
    .ok (dataSec.size, ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size⟩) :=
    Varint.decode_at_pos dataSec.size (by omega) windowBytes _
      (by rw [h_wb_sz, h_delta_sz, h_dat_eq]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator] ++ encLenEnc ++ targetLenEnc ++ ByteArray.mk #[0x00])
        dataLenEnc
        (instLenEnc ++ addrLenEnc ++ checksumBytes ++ dataSec ++ instSec ++ addrSec)
        (1 + encLenEnc.size + targetLenEnc.size + 1)
        (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
        (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz]))
  have h_vd_inst : Varint.decode ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size⟩ =
    .ok (instSec.size, ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size⟩) :=
    Varint.decode_at_pos instSec.size (by omega) windowBytes _
      (by rw [h_wb_sz, h_delta_sz, h_ins_eq]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator] ++ encLenEnc ++ targetLenEnc
          ++ ByteArray.mk #[0x00] ++ dataLenEnc)
        instLenEnc
        (addrLenEnc ++ checksumBytes ++ dataSec ++ instSec ++ addrSec)
        (1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size)
        (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
        (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz]))
  have h_vd_addr : Varint.decode ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size⟩ =
    .ok (addrSec.size, ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
      addrLenEnc.size⟩) :=
    Varint.decode_at_pos addrSec.size (by omega) windowBytes _
      (by rw [h_wb_sz, h_delta_sz, h_adr_eq]; omega)
      (extract_of_eq_concat windowBytes
        (ByteArray.mk #[winIndicator] ++ encLenEnc ++ targetLenEnc
          ++ ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc)
        addrLenEnc
        (checksumBytes ++ dataSec ++ instSec ++ addrSec)
        (1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size)
        (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
        (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz]))
  -- Step 8: readUInt32BE → checksum
  have h_u32 : Decoder.readUInt32BE ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
      addrLenEnc.size⟩ =
    .ok (Encoder.adler32 target, ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
      addrLenEnc.size + 4⟩) := by
    have h_ext_cksum := extract_of_eq_concat windowBytes
      (ByteArray.mk #[winIndicator] ++ encLenEnc ++ targetLenEnc
        ++ ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc ++ addrLenEnc)
      checksumBytes
      (dataSec ++ instSec ++ addrSec)
      (1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
        addrLenEnc.size)
      (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
      (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz])
    exact readUInt32BE_at_pos (Encoder.adler32 target) windowBytes _
      (by rw [h_wb_sz]; rw [h_delta_sz]; rw [h_cksum_sz]; omega)
      h_ext_cksum
  -- Step 9-11: readBytes × 3 (dataSec, instSec, addrSec)
  have h_rd_data : Varint.Cursor.readBytes ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
      addrLenEnc.size + 4⟩
      dataSec.size =
    .ok (dataSec, ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
      addrLenEnc.size + 4 + dataSec.size⟩) := by
    have h_ext_d := extract_of_eq_concat windowBytes
      (ByteArray.mk #[winIndicator] ++ encLenEnc ++ targetLenEnc
        ++ ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc ++ addrLenEnc ++ checksumBytes)
      dataSec
      (instSec ++ addrSec)
      (1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
        addrLenEnc.size + 4)
      (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
      (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz, h_cksum_sz])
    rw [Encoder.Proofs.readBytes_ok (by rw [h_wb_sz]; rw [h_delta_sz]; rw [h_cksum_sz]; omega),
        h_ext_d]
  have h_rd_inst : Varint.Cursor.readBytes ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
      addrLenEnc.size + 4 + dataSec.size⟩
      instSec.size =
    .ok (instSec, ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
      addrLenEnc.size + 4 + dataSec.size + instSec.size⟩) := by
    have h_ext_i := extract_of_eq_concat windowBytes
      (ByteArray.mk #[winIndicator] ++ encLenEnc ++ targetLenEnc
        ++ ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
        ++ checksumBytes ++ dataSec)
      instSec
      addrSec
      (1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
        addrLenEnc.size + 4 + dataSec.size)
      (by simp only [windowBytes, deltaBody, bytearray_append_assoc])
      (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz, h_cksum_sz])
    rw [Encoder.Proofs.readBytes_ok (by rw [h_wb_sz]; rw [h_delta_sz]; rw [h_cksum_sz]; omega),
        h_ext_i]
  have h_rd_addr : Varint.Cursor.readBytes ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
      addrLenEnc.size + 4 + dataSec.size + instSec.size⟩
      addrSec.size =
    .ok (addrSec, ⟨windowBytes,
      1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
      addrLenEnc.size + 4 + dataSec.size + instSec.size + addrSec.size⟩) := by
    have h_ext_a := extract_of_eq_concat windowBytes
      (ByteArray.mk #[winIndicator] ++ encLenEnc ++ targetLenEnc
        ++ ByteArray.mk #[0x00] ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
        ++ checksumBytes ++ dataSec ++ instSec)
      addrSec
      ByteArray.empty
      (1 + encLenEnc.size + targetLenEnc.size + 1 + dataLenEnc.size + instLenEnc.size +
        addrLenEnc.size + 4 + dataSec.size + instSec.size)
      (by simp only [windowBytes, deltaBody, bytearray_append_assoc, bytearray_append_empty])
      (by simp only [ByteArray.size_append, h_mk_wi_sz, h_mk_00_sz, h_cksum_sz])
    rw [Encoder.Proofs.readBytes_ok (by rw [h_wb_sz]; rw [h_delta_sz]; rw [h_cksum_sz]; omega),
        h_ext_a]
  -- ═══════════════════════════════════════
  -- Main chain: unfold parseWindow and rewrite step by step
  -- ═══════════════════════════════════════
  unfold Decoder.parseWindow
  simp only [bind, Except.bind, h_rb0]
  simp only [hf1, Bool.false_eq_true, ↓reduceIte, hf2]
  -- Source flag is false: else branch gives pure (0, 0, cursor)
  simp only [hf3, Bool.false_eq_true, ↓reduceIte]
  simp only [pure, Except.pure, bind, Except.bind]
  -- encLen, targetLen, deltaInd
  rw [h_vd_enc]
  simp only [Except.bind]
  rw [h_vd_tgt]
  simp only [Except.bind]
  rw [h_rb_di]
  simp only [Except.bind, hf5, Bool.false_eq_true, ↓reduceIte, hf6]
  -- dataLen, instLen, addrLen
  rw [h_vd_data]
  simp only [Except.bind]
  rw [h_vd_inst]
  simp only [Except.bind]
  rw [h_vd_addr]
  simp only [Except.bind]
  -- Adler32 checksum
  simp only [hf4, ↓reduceIte, bind, Except.bind]
  rw [h_u32]
  simp only [Except.bind, pure, Except.pure, bind]
  -- Read sections
  rw [h_rd_data]
  simp only [Except.bind]
  rw [h_rd_inst]
  simp only [Except.bind]
  rw [h_rd_addr]

-- Step 2: Encoder.adler32 and Decoder.adler32 are the same function
-- (identical definitions in different namespaces).
theorem encoder_decoder_adler32_eq :
    @Encoder.adler32 = @Decoder.adler32 := by
  funext data
  simp only [Encoder.adler32, Decoder.adler32]

-- Step 3: Full encode → decode roundtrip
-- The complete VCDIFF encode→decode pipeline: serializing sections into wire
-- format, then parsing and applying, recovers the original target data.
--
-- Note: Encoder.encode is partial (calls partial generateInstructions), so we
-- state the theorem in terms of the non-partial Encoder.serializeWindow.
-- The hypothesis h_loop can be discharged by encodeInstList_decodeLoop_roundtrip
-- for any ValidInstList whose execution reproduces the target.
--
-- The proof chains:
-- parseWindow_encoded_sections (wire format roundtrip) →
-- applyWindow_of_decodeLoop (decoder correctness) →
-- encoder_decoder_adler32_eq (checksum compatibility)

theorem encode_decode_roundtrip
    (source target : ByteArray)
    (dataSec instSec addrSec : ByteArray)
    (h_source_pos : source.size > 0)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31)
    (h_sec_bound : dataSec.size + instSec.size + addrSec.size + 30 < 2 ^ 35)
    (h_loop : ∃ cache,
      decodeLoop instSec.size source ByteArray.empty
        ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ AddressCache.State.init =
        .ok (target, ⟨instSec, instSec.size⟩, ⟨dataSec, dataSec.size⟩,
             ⟨addrSec, addrSec.size⟩, cache)) :
    let window := Encoder.serializeWindow source target dataSec instSec addrSec
    ∃ win rest,
      Decoder.parseWindow ⟨window, 0⟩ = .ok (win, rest) ∧
      Decoder.applyWindow win source = .ok target := by
  obtain ⟨cache, h_loop⟩ := h_loop
  -- Unfold serializeWindow and simplify the source.size > 0 branch
  simp only [Encoder.serializeWindow]
  rw [if_pos h_source_pos, if_pos h_source_pos]
  -- Apply parseWindow_encoded_sections to get the window parse result
  have h_pw := parseWindow_encoded_sections source target dataSec instSec addrSec
    h_source_pos h_source_bound h_target_bound h_sec_bound
  simp only [] at h_pw
  obtain ⟨win, rest, h_parse, h_ds, h_is, h_as, h_tl, h_sl, h_so, h_wi, h_ad, h_rest⟩ := h_pw
  exact ⟨win, rest, h_parse,
    applyWindow_of_decodeLoop win source target source
      (by -- h_seg: source = sourceSegment computation
        rw [h_wi]
        simp only [show (((WinIndicator.source ||| WinIndicator.adler32) &&&
          WinIndicator.source) != 0) = true from by native_decide, ↓reduceIte]
        rw [h_so, h_sl, Nat.zero_add]
        exact (bytearray_extract_full source).symm)
      ⟨instSec, instSec.size⟩ ⟨dataSec, dataSec.size⟩ ⟨addrSec, addrSec.size⟩ cache
      (by rw [h_is, h_ds, h_as]; exact h_loop)
      (by rw [h_tl])
      (by left; rw [h_ad, encoder_decoder_adler32_eq])⟩

-- No-source variant of encode_decode_roundtrip
theorem encode_decode_roundtrip_no_source
    (source target : ByteArray)
    (dataSec instSec addrSec : ByteArray)
    (h_source_zero : source.size = 0)
    (h_target_bound : target.size < 2 ^ 31)
    (h_sec_bound : dataSec.size + instSec.size + addrSec.size + 30 < 2 ^ 35)
    (h_loop : ∃ cache,
      decodeLoop instSec.size ByteArray.empty ByteArray.empty
        ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ AddressCache.State.init =
        .ok (target, ⟨instSec, instSec.size⟩, ⟨dataSec, dataSec.size⟩,
             ⟨addrSec, addrSec.size⟩, cache)) :
    let window := Encoder.serializeWindow source target dataSec instSec addrSec
    ∃ win rest,
      Decoder.parseWindow ⟨window, 0⟩ = .ok (win, rest) ∧
      Decoder.applyWindow win source = .ok target := by
  obtain ⟨cache, h_loop⟩ := h_loop
  have h_source_not_pos : ¬(source.size > 0) := by omega
  simp only [Encoder.serializeWindow]
  rw [if_neg h_source_not_pos, if_neg h_source_not_pos]
  have h_pw := parseWindow_encoded_sections_no_source target dataSec instSec addrSec
    h_target_bound h_sec_bound
  simp only [] at h_pw
  obtain ⟨win, rest, h_parse, h_ds, h_is, h_as, h_tl, h_sl, h_so, h_wi, h_ad, h_rest⟩ := h_pw
  exact ⟨win, rest, h_parse,
    applyWindow_of_decodeLoop win source target ByteArray.empty
      (by
        rw [h_wi]
        simp only [show ((WinIndicator.adler32 &&& WinIndicator.source) != 0) = false from by
          native_decide, Bool.false_eq_true, ↓reduceIte])
      ⟨instSec, instSec.size⟩ ⟨dataSec, dataSec.size⟩ ⟨addrSec, addrSec.size⟩ cache
      (by rw [h_is, h_ds, h_as]; exact h_loop)
      (by rw [h_tl])
      (by left; rw [h_ad, encoder_decoder_adler32_eq])⟩

-- Combined theorem: works for any source (including empty)
theorem encode_decode_roundtrip'
    (source target : ByteArray)
    (dataSec instSec addrSec : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31)
    (h_sec_bound : dataSec.size + instSec.size + addrSec.size + 30 < 2 ^ 35)
    (h_loop : ∃ cache,
      let srcWin := if source.size > 0 then source else ByteArray.empty
      decodeLoop instSec.size srcWin ByteArray.empty
        ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ AddressCache.State.init =
        .ok (target, ⟨instSec, instSec.size⟩, ⟨dataSec, dataSec.size⟩,
             ⟨addrSec, addrSec.size⟩, cache)) :
    let window := Encoder.serializeWindow source target dataSec instSec addrSec
    ∃ win rest,
      Decoder.parseWindow ⟨window, 0⟩ = .ok (win, rest) ∧
      Decoder.applyWindow win source = .ok target := by
  by_cases h_pos : source.size > 0
  · -- Source is non-empty: use original theorem
    have h_loop' : ∃ cache, decodeLoop instSec.size source ByteArray.empty
        ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ AddressCache.State.init =
        .ok (target, ⟨instSec, instSec.size⟩, ⟨dataSec, dataSec.size⟩,
             ⟨addrSec, addrSec.size⟩, cache) := by
      obtain ⟨cache, h⟩ := h_loop
      exact ⟨cache, by simp only [h_pos, ↓reduceIte] at h; exact h⟩
    exact encode_decode_roundtrip source target dataSec instSec addrSec
      h_pos h_source_bound h_target_bound h_sec_bound h_loop'
  · -- Source is empty: use no-source theorem
    have h_sz : source.size = 0 := by omega
    have h_loop' : ∃ cache, decodeLoop instSec.size ByteArray.empty ByteArray.empty
        ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ AddressCache.State.init =
        .ok (target, ⟨instSec, instSec.size⟩, ⟨dataSec, dataSec.size⟩,
             ⟨addrSec, addrSec.size⟩, cache) := by
      obtain ⟨cache, h⟩ := h_loop
      exact ⟨cache, by simp only [h_pos, Bool.false_eq_true, ↓reduceIte] at h; exact h⟩
    exact encode_decode_roundtrip_no_source source target dataSec instSec addrSec
      h_sz h_target_bound h_sec_bound h_loop'

-- ============================================================================
-- ## Encoder-integrated roundtrip
-- ============================================================================

-- Now that Encoder.encode is non-partial, we can state roundtrip theorems
-- that reference the encoder's actual computed sections. This ties the full
-- pipeline (buildSourceIndex → generateInstructions → encodeWindow →
-- serializeWindow → parseWindow → applyWindow) together in a single theorem.
--
-- The h_loop hypothesis still requires that the encoder's sections decode
-- correctly. Eliminating it entirely would require proving that
-- generateInstructions always produces a ValidInstList — a future Phase G.

theorem encode_window_roundtrip
    (source target : ByteArray)
    (h_source_pos : source.size > 0)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31)
    (h_sec_bound :
      let secs := Encoder.encodeWindow
        (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
        source.size
      secs.1.size + secs.2.1.size + secs.2.2.size + 30 < 2 ^ 35)
    (h_loop :
      let secs := Encoder.encodeWindow
        (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
        source.size
      ∃ cache,
        decodeLoop secs.2.1.size source ByteArray.empty
          ⟨secs.2.1, 0⟩ ⟨secs.1, 0⟩ ⟨secs.2.2, 0⟩ AddressCache.State.init =
          .ok (target, ⟨secs.2.1, secs.2.1.size⟩, ⟨secs.1, secs.1.size⟩,
               ⟨secs.2.2, secs.2.2.size⟩, cache)) :
    let secs := Encoder.encodeWindow
      (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
      source.size
    ∃ win rest,
      Decoder.parseWindow
        ⟨Encoder.serializeWindow source target secs.1 secs.2.1 secs.2.2, 0⟩ =
        .ok (win, rest) ∧
      Decoder.applyWindow win source = .ok target := by
  exact encode_decode_roundtrip source target _ _ _
    h_source_pos h_source_bound h_target_bound
    h_sec_bound h_loop

-- Encoder-integrated roundtrip without h_source_pos
theorem encode_window_roundtrip'
    (source target : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31)
    (h_sec_bound :
      let secs := Encoder.encodeWindow
        (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
        source.size
      secs.1.size + secs.2.1.size + secs.2.2.size + 30 < 2 ^ 35)
    (h_loop :
      let secs := Encoder.encodeWindow
        (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
        source.size
      ∃ cache,
        let srcWin := if source.size > 0 then source else ByteArray.empty
        decodeLoop secs.2.1.size srcWin ByteArray.empty
          ⟨secs.2.1, 0⟩ ⟨secs.1, 0⟩ ⟨secs.2.2, 0⟩ AddressCache.State.init =
          .ok (target, ⟨secs.2.1, secs.2.1.size⟩, ⟨secs.1, secs.1.size⟩,
               ⟨secs.2.2, secs.2.2.size⟩, cache)) :
    let secs := Encoder.encodeWindow
      (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
      source.size
    ∃ win rest,
      Decoder.parseWindow
        ⟨Encoder.serializeWindow source target secs.1 secs.2.1 secs.2.2, 0⟩ =
        .ok (win, rest) ∧
      Decoder.applyWindow win source = .ok target := by
  exact encode_decode_roundtrip' source target _ _ _
    h_source_bound h_target_bound
    h_sec_bound h_loop

-- Indexing into left side of a ByteArray append
private theorem ba_getElem_bang_left (a b : ByteArray) (i : Nat) (hi : i < a.size) :
    (a ++ b)[i]! = a[i]! := by
  have hab : i < (a ++ b).size := by rw [ByteArray.size_append]; omega
  simp only [getElem!_pos, hab, hi]
  exact ByteArray.get_append_left hi

-- Extract from left side of a ByteArray append
private theorem ba_extract_left (a b : ByteArray) (i j : Nat) (hj : j ≤ a.size) :
    (a ++ b).extract i j = a.extract i j := by
  ext1
  rw [ByteArray.data_extract, ByteArray.data_extract, ByteArray.data_append]
  exact Array.extract_append_of_stop_le_size_left (by rwa [ByteArray.size] at hj)

-- ============================================================================
-- ## parseWindow cursor relocation
-- ============================================================================

-- Helper: extract cursor data from varint decode success
private theorem varint_ok_data' (sfx : ByteArray) (k v : Nat) (cd : ByteArray) (cp : Nat)
    (h : Varint.decode ⟨sfx, k⟩ = .ok (v, ⟨cd, cp⟩)) : cd = sfx := by
  simp only [Varint.decode] at h
  exact CursorReloc.varint_decodeLoop_data sfx k 0 5 v ⟨cd, cp⟩ h

-- Helper: extract cursor data from readUInt32BE success
private theorem readUInt32BE_ok_data (sfx : ByteArray) (k : Nat)
    (v : UInt32) (cd : ByteArray) (cp : Nat)
    (h : Decoder.readUInt32BE ⟨sfx, k⟩ = .ok (v, ⟨cd, cp⟩)) : cd = sfx := by
  unfold Decoder.readUInt32BE at h
  simp only [bind, Except.bind] at h
  -- unfold readByte unfolds ALL 4 occurrences at once
  unfold Varint.Cursor.readByte at h
  by_cases h0 : k < sfx.size
  · simp only [h0, ↓reduceIte, Except.bind] at h
    by_cases h1 : k + 1 < sfx.size
    · simp only [h1, ↓reduceIte, Except.bind] at h
      by_cases h2 : k + 1 + 1 < sfx.size
      · simp only [h2, ↓reduceIte, Except.bind] at h
        by_cases h3 : k + 1 + 1 + 1 < sfx.size
        · simp only [h3, ↓reduceIte, pure, Except.pure, Except.ok.injEq,
            Prod.mk.injEq, Varint.Cursor.mk.injEq] at h
          exact h.2.1.symm
        · simp [h3] at h
      · simp [h2] at h
    · simp [h1] at h
  · simp [h0] at h


-- Common suffix of parseWindow after source info is processed.
-- Handles: encLen, targetLen, deltaInd, flag checks, section lengths,
-- optional adler32, and section data reads.
set_option maxHeartbeats 1600000 in
private theorem parseWindow_reloc_after_source (pfx sfx : ByteArray)
    (winInd : UInt8) (ssl sso : Nat) (k : Nat) (win : Window) (pos : Nat)
    (h : (do
      let encStart := k
      let (_encLen, c) ← Varint.decode ⟨sfx, k⟩
      let (targetLen, c) ← Varint.decode c
      let (deltaInd, c) ← c.readByte
      if deltaInd &&& DeltaIndicator.reserved != 0 then throw (.invalidDeltaIndicator deltaInd)
      if deltaInd &&& (DeltaIndicator.dataComp ||| DeltaIndicator.instComp |||
                        DeltaIndicator.addrComp) != 0 then
        throw (.unsupportedFeature "secondary compression on delta sections")
      let (dataLen, c) ← Varint.decode c
      let (instLen, c) ← Varint.decode c
      let (addrLen, c) ← Varint.decode c
      let (checksum, c) ← if winInd &&& WinIndicator.adler32 != 0 then do
        let (v, c) ← Decoder.readUInt32BE c
        pure (some v, c)
      else
        pure (none, c)
      let _headerSize := c.pos - encStart
      let _expectedEncLen := _headerSize + dataLen + instLen + addrLen
      let (dataSection, c) ← c.readBytes dataLen
      let (instSection, c) ← c.readBytes instLen
      let (addrSection, c) ← c.readBytes addrLen
      return (⟨winInd, ssl, sso, targetLen,
               dataSection, instSection, addrSection, checksum⟩, c)
      : DecodeResult (Window × Varint.Cursor)) = .ok (win, ⟨sfx, pos⟩)) :
    (do
      let encStart := pfx.size + k
      let (_encLen, c) ← Varint.decode ⟨pfx ++ sfx, pfx.size + k⟩
      let (targetLen, c) ← Varint.decode c
      let (deltaInd, c) ← c.readByte
      if deltaInd &&& DeltaIndicator.reserved != 0 then throw (.invalidDeltaIndicator deltaInd)
      if deltaInd &&& (DeltaIndicator.dataComp ||| DeltaIndicator.instComp |||
                        DeltaIndicator.addrComp) != 0 then
        throw (.unsupportedFeature "secondary compression on delta sections")
      let (dataLen, c) ← Varint.decode c
      let (instLen, c) ← Varint.decode c
      let (addrLen, c) ← Varint.decode c
      let (checksum, c) ← if winInd &&& WinIndicator.adler32 != 0 then do
        let (v, c) ← Decoder.readUInt32BE c
        pure (some v, c)
      else
        pure (none, c)
      let _headerSize := c.pos - encStart
      let _expectedEncLen := _headerSize + dataLen + instLen + addrLen
      let (dataSection, c) ← c.readBytes dataLen
      let (instSection, c) ← c.readBytes instLen
      let (addrSection, c) ← c.readBytes addrLen
      return (⟨winInd, ssl, sso, targetLen,
               dataSection, instSection, addrSection, checksum⟩, c)
      : DecodeResult (Window × Varint.Cursor)) = .ok (win, ⟨pfx ++ sfx, pfx.size + pos⟩) := by
  simp only [bind, Except.bind] at h ⊢
  -- varint (encLen)
  match hv_enc : Varint.decode ⟨sfx, k⟩ with
  | .ok (encLen, ⟨cd_enc, cp_enc⟩) =>
    rw [varint_ok_data' sfx k encLen cd_enc cp_enc hv_enc] at hv_enc
    rw [hv_enc] at h; simp only [Except.bind] at h
    rw [CursorReloc.varint_decode_reloc_ok pfx sfx k encLen cp_enc hv_enc]
    simp only [Except.bind]
    -- varint (targetLen)
    match hv_tgt : Varint.decode ⟨sfx, cp_enc⟩ with
    | .ok (tgtLen, ⟨cd_tgt, cp_tgt⟩) =>
      rw [varint_ok_data' sfx cp_enc tgtLen cd_tgt cp_tgt hv_tgt] at hv_tgt
      rw [hv_tgt] at h; simp only [Except.bind] at h
      rw [CursorReloc.varint_decode_reloc_ok pfx sfx cp_enc tgtLen cp_tgt hv_tgt]
      simp only [Except.bind]
      -- readByte (deltaInd)
      have hk_di : cp_tgt < sfx.size := by
        by_contra hc; unfold Varint.Cursor.readByte at h; simp [show ¬(cp_tgt < sfx.size) from by omega] at h
      have hrb_di : Varint.Cursor.readByte ⟨sfx, cp_tgt⟩ = .ok (sfx[cp_tgt]!, ⟨sfx, cp_tgt + 1⟩) := by
        unfold Varint.Cursor.readByte; simp [hk_di]
      rw [hrb_di] at h; simp only [Except.bind] at h
      rw [CursorReloc.readByte_reloc pfx sfx cp_tgt hk_di]
      simp only [Except.bind]
      -- Delta indicator checks
      by_cases hdr : (sfx[cp_tgt]! &&& DeltaIndicator.reserved != 0) = true
      · simp only [hdr, ↓reduceIte] at h; exact absurd h (by simp)
      simp only [hdr, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h ⊢
      by_cases hds : (sfx[cp_tgt]! &&& (DeltaIndicator.dataComp ||| DeltaIndicator.instComp |||
                       DeltaIndicator.addrComp) != 0) = true
      · simp only [hds, ↓reduceIte] at h; exact absurd h (by simp)
      simp only [hds, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h ⊢
      -- varint (dataLen)
      match hv_dl : Varint.decode ⟨sfx, cp_tgt + 1⟩ with
      | .ok (dataLen, ⟨cd_dl, cp_dl⟩) =>
        rw [varint_ok_data' sfx (cp_tgt + 1) dataLen cd_dl cp_dl hv_dl] at hv_dl
        rw [hv_dl] at h; simp only [Except.bind] at h
        rw [show pfx.size + cp_tgt + 1 = pfx.size + (cp_tgt + 1) from by omega]
        rw [CursorReloc.varint_decode_reloc_ok pfx sfx (cp_tgt + 1) dataLen cp_dl hv_dl]
        simp only [Except.bind]
        -- varint (instLen)
        match hv_il : Varint.decode ⟨sfx, cp_dl⟩ with
        | .ok (instLen, ⟨cd_il, cp_il⟩) =>
          rw [varint_ok_data' sfx cp_dl instLen cd_il cp_il hv_il] at hv_il
          rw [hv_il] at h; simp only [Except.bind] at h
          rw [CursorReloc.varint_decode_reloc_ok pfx sfx cp_dl instLen cp_il hv_il]
          simp only [Except.bind]
          -- varint (addrLen)
          match hv_al : Varint.decode ⟨sfx, cp_il⟩ with
          | .ok (addrLen, ⟨cd_al, cp_al⟩) =>
            rw [varint_ok_data' sfx cp_il addrLen cd_al cp_al hv_al] at hv_al
            rw [hv_al] at h; simp only [Except.bind] at h
            rw [CursorReloc.varint_decode_reloc_ok pfx sfx cp_il addrLen cp_al hv_al]
            simp only [Except.bind]
            -- Adler32 (conditional)
            by_cases ha : (winInd &&& WinIndicator.adler32 != 0) = true
            · -- Adler32 present: readUInt32BE
              simp only [ha, ↓reduceIte, bind, Except.bind] at h ⊢
              match hv_a32 : Decoder.readUInt32BE ⟨sfx, cp_al⟩ with
              | .ok (a32, ⟨cd_a32, cp_a32⟩) =>
                rw [readUInt32BE_ok_data sfx cp_al a32 cd_a32 cp_a32 hv_a32] at hv_a32
                rw [hv_a32] at h; simp only [pure, Except.pure, Except.bind] at h
                have hreloc : Decoder.readUInt32BE ⟨pfx ++ sfx, pfx.size + cp_al⟩ =
                    .ok (a32, ⟨pfx ++ sfx, pfx.size + cp_a32⟩) := by
                  exact CursorReloc.readUInt32BE_reloc_ok pfx sfx cp_al a32 cp_a32 hv_a32
                rw [hreloc]
                simp only [pure, Except.pure, Except.bind]
                -- 3 readBytes (sections) — inline relocation
                have hle_d : cp_a32 + dataLen ≤ sfx.size := by
                  by_contra hc; unfold Varint.Cursor.readBytes at h
                  simp [show ¬(cp_a32 + dataLen ≤ sfx.size) from by omega] at h
                have hrb_d : Varint.Cursor.readBytes ⟨sfx, cp_a32⟩ dataLen =
                    .ok (sfx.extract cp_a32 (cp_a32 + dataLen), ⟨sfx, cp_a32 + dataLen⟩) := by
                  unfold Varint.Cursor.readBytes; simp [hle_d]
                rw [hrb_d] at h; simp only [Except.bind] at h
                rw [CursorReloc.readBytes_reloc pfx sfx cp_a32 dataLen hle_d]
                simp only [Except.bind]
                have hle_i : cp_a32 + dataLen + instLen ≤ sfx.size := by
                  by_contra hc; unfold Varint.Cursor.readBytes at h
                  simp [show ¬(cp_a32 + dataLen + instLen ≤ sfx.size) from by omega] at h
                have hrb_i : Varint.Cursor.readBytes ⟨sfx, cp_a32 + dataLen⟩ instLen =
                    .ok (sfx.extract (cp_a32 + dataLen) (cp_a32 + dataLen + instLen),
                         ⟨sfx, cp_a32 + dataLen + instLen⟩) := by
                  unfold Varint.Cursor.readBytes
                  simp [show cp_a32 + dataLen + instLen ≤ sfx.size from hle_i]
                rw [hrb_i] at h; simp only [Except.bind] at h
                rw [CursorReloc.readBytes_reloc pfx sfx (cp_a32 + dataLen) instLen (by omega)]
                simp only [Except.bind]
                have hle_a : cp_a32 + dataLen + instLen + addrLen ≤ sfx.size := by
                  by_contra hc; unfold Varint.Cursor.readBytes at h
                  simp [show ¬(cp_a32 + dataLen + instLen + addrLen ≤ sfx.size) from by omega] at h
                have hrb_a : Varint.Cursor.readBytes ⟨sfx, cp_a32 + dataLen + instLen⟩ addrLen =
                    .ok (sfx.extract (cp_a32 + dataLen + instLen) (cp_a32 + dataLen + instLen + addrLen),
                         ⟨sfx, cp_a32 + dataLen + instLen + addrLen⟩) := by
                  unfold Varint.Cursor.readBytes
                  simp [show cp_a32 + dataLen + instLen + addrLen ≤ sfx.size from hle_a]
                rw [hrb_a] at h; simp only [pure, Except.pure] at h
                rw [CursorReloc.readBytes_reloc pfx sfx (cp_a32 + dataLen + instLen) addrLen (by omega)]
                simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
                  Varint.Cursor.mk.injEq]
                simp only [Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h
                exact ⟨h.1, trivial, by have := h.2.2; omega⟩
              | .error e => rw [hv_a32] at h; simp at h
            · -- No Adler32
              simp only [ha, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h ⊢
              -- 3 readBytes (sections) — inline relocation
              have hle_d : cp_al + dataLen ≤ sfx.size := by
                by_contra hc; unfold Varint.Cursor.readBytes at h
                simp [show ¬(cp_al + dataLen ≤ sfx.size) from by omega] at h
              have hrb_d : Varint.Cursor.readBytes ⟨sfx, cp_al⟩ dataLen =
                  .ok (sfx.extract cp_al (cp_al + dataLen), ⟨sfx, cp_al + dataLen⟩) := by
                unfold Varint.Cursor.readBytes; simp [hle_d]
              rw [hrb_d] at h; simp only [Except.bind] at h
              rw [CursorReloc.readBytes_reloc pfx sfx cp_al dataLen hle_d]
              simp only [Except.bind]
              have hle_i : cp_al + dataLen + instLen ≤ sfx.size := by
                by_contra hc; unfold Varint.Cursor.readBytes at h
                simp [show ¬(cp_al + dataLen + instLen ≤ sfx.size) from by omega] at h
              have hrb_i : Varint.Cursor.readBytes ⟨sfx, cp_al + dataLen⟩ instLen =
                  .ok (sfx.extract (cp_al + dataLen) (cp_al + dataLen + instLen),
                       ⟨sfx, cp_al + dataLen + instLen⟩) := by
                unfold Varint.Cursor.readBytes
                simp [show cp_al + dataLen + instLen ≤ sfx.size from hle_i]
              rw [hrb_i] at h; simp only [Except.bind] at h
              rw [CursorReloc.readBytes_reloc pfx sfx (cp_al + dataLen) instLen (by omega)]
              simp only [Except.bind]
              have hle_a : cp_al + dataLen + instLen + addrLen ≤ sfx.size := by
                by_contra hc; unfold Varint.Cursor.readBytes at h
                simp [show ¬(cp_al + dataLen + instLen + addrLen ≤ sfx.size) from by omega] at h
              have hrb_a : Varint.Cursor.readBytes ⟨sfx, cp_al + dataLen + instLen⟩ addrLen =
                  .ok (sfx.extract (cp_al + dataLen + instLen) (cp_al + dataLen + instLen + addrLen),
                       ⟨sfx, cp_al + dataLen + instLen + addrLen⟩) := by
                unfold Varint.Cursor.readBytes
                simp [show cp_al + dataLen + instLen + addrLen ≤ sfx.size from hle_a]
              rw [hrb_a] at h; simp only [pure, Except.pure] at h
              rw [CursorReloc.readBytes_reloc pfx sfx (cp_al + dataLen + instLen) addrLen (by omega)]
              simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
                Varint.Cursor.mk.injEq]
              simp only [Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h
              exact ⟨h.1, trivial, by have := h.2.2; omega⟩
          | .error e => rw [hv_al] at h; simp at h
        | .error e => rw [hv_il] at h; simp at h
      | .error e => rw [hv_dl] at h; simp at h
    | .error e => rw [hv_tgt] at h; simp at h
  | .error e => rw [hv_enc] at h; simp at h

-- If parseWindow succeeds at position 0 in sfx, it also succeeds
-- at position pfx.size in pfx ++ sfx, returning the same Window.
set_option maxHeartbeats 800000 in
theorem parseWindow_reloc (pfx sfx : ByteArray) (win : Window) (pos : Nat)
    (h : Decoder.parseWindow ⟨sfx, 0⟩ = .ok (win, ⟨sfx, pos⟩)) :
    Decoder.parseWindow ⟨pfx ++ sfx, pfx.size⟩ =
      .ok (win, ⟨pfx ++ sfx, pfx.size + pos⟩) := by
  unfold Decoder.parseWindow at h ⊢
  simp only [bind, Except.bind] at h ⊢
  -- ═══════════════════════════════════════
  -- readByte (winInd) at position 0
  -- ═══════════════════════════════════════
  have hk0 : (0 : Nat) < sfx.size := by
    by_contra hc; unfold Varint.Cursor.readByte at h; simp [show ¬(0 < sfx.size) from by omega] at h
  have hrb0 : Varint.Cursor.readByte ⟨sfx, 0⟩ = .ok (sfx[0]!, ⟨sfx, 1⟩) := by
    unfold Varint.Cursor.readByte; simp [hk0]
  rw [hrb0] at h; simp only [Except.bind] at h
  rw [show (pfx.size : Nat) = pfx.size + 0 from by omega]
  rw [CursorReloc.readByte_reloc pfx sfx 0 hk0]
  rw [show pfx.size + 0 + 1 = pfx.size + 1 from by omega]
  simp only [Except.bind]
  -- ═══════════════════════════════════════
  -- Flag checks (reserved, target)
  -- ═══════════════════════════════════════
  by_cases hr : (sfx[0]! &&& WinIndicator.reserved != 0) = true
  · simp only [hr, ↓reduceIte] at h; exact absurd h (by simp)
  simp only [hr, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h ⊢
  by_cases ht : (sfx[0]! &&& WinIndicator.target != 0) = true
  · simp only [ht, ↓reduceIte] at h; exact absurd h (by simp)
  simp only [ht, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h ⊢
  -- ═══════════════════════════════════════
  -- Source segment info (conditional branch)
  -- ═══════════════════════════════════════
  by_cases hs : (sfx[0]! &&& WinIndicator.source != 0) = true
  · -- Source present: 2 varint decodes
    simp only [hs, ↓reduceIte, bind, Except.bind] at h ⊢
    match hv_ssl : Varint.decode ⟨sfx, 1⟩ with
    | .ok (ssl, ⟨cd1, cp1⟩) =>
      rw [varint_ok_data' sfx 1 ssl cd1 cp1 hv_ssl] at hv_ssl
      rw [hv_ssl] at h; simp only [Except.bind] at h
      rw [CursorReloc.varint_decode_reloc_ok pfx sfx 1 ssl cp1 hv_ssl]
      simp only [Except.bind]
      match hv_sso : Varint.decode ⟨sfx, cp1⟩ with
      | .ok (sso, ⟨cd2, cp2⟩) =>
        rw [varint_ok_data' sfx cp1 sso cd2 cp2 hv_sso] at hv_sso
        rw [hv_sso] at h; simp only [pure, Except.pure, Except.bind] at h
        rw [CursorReloc.varint_decode_reloc_ok pfx sfx cp1 sso cp2 hv_sso]
        simp only [pure, Except.pure, Except.bind]
        -- Continue with cursor at cp2
        exact parseWindow_reloc_after_source pfx sfx (sfx[0]!) ssl sso cp2 win pos h
      | .error e => rw [hv_sso] at h; simp at h
    | .error e => rw [hv_ssl] at h; simp at h
  · -- No source
    simp only [hs, Bool.false_eq_true, ↓reduceIte, pure, Except.pure, Except.bind] at h ⊢
    -- Continue with cursor at 1
    exact parseWindow_reloc_after_source pfx sfx (sfx[0]!) 0 0 1 win pos h

-- parseHeader succeeds on any ByteArray of the form hdr5 ++ rest where
-- hdr5 = [0xD6, 0xC3, 0xC4, 0x00, 0x00].
private def hdr5 : ByteArray := ByteArray.mk #[0xD6, 0xC3, 0xC4, 0x00, 0x00]
private theorem hdr5_size : hdr5.size = 5 := rfl

set_option maxHeartbeats 400000 in
private theorem parseHeader_hdr5_append (w : ByteArray) :
    Decoder.parseHeader ⟨hdr5 ++ w, 0⟩ =
      .ok (⟨0x00, none⟩, ⟨hdr5 ++ w, 5⟩) := by
  have hsz : 5 ≤ (hdr5 ++ w).size := by
    rw [ByteArray.size_append, hdr5_size]; omega
  have h_extract : (hdr5 ++ w).extract 0 3 = magic := by
    rw [ba_extract_left _ _ _ _ (by rw [hdr5_size]; omega)]
    show hdr5.extract 0 3 = magic; unfold hdr5 magic; rfl
  have h3 : (hdr5 ++ w)[3]! = 0x00 := by
    rw [ba_getElem_bang_left _ _ _ (by rw [hdr5_size]; omega)]; rfl
  have h4 : (hdr5 ++ w)[4]! = 0x00 := by
    rw [ba_getElem_bang_left _ _ _ (by rw [hdr5_size]; omega)]; rfl
  unfold Decoder.parseHeader
  simp only [bind, Except.bind]
  have h_hasBytes : Varint.Cursor.hasBytes ⟨hdr5 ++ w, 0⟩ 5 = true := by
    unfold Varint.Cursor.hasBytes
    simp only [Nat.zero_add, decide_eq_true_eq]; exact hsz
  simp only [h_hasBytes, Bool.not_true, Bool.false_eq_true, ↓reduceIte]
  rw [Encoder.Proofs.readBytes_ok (show 0 + 3 ≤ (hdr5 ++ w).size by omega)]
  simp only [Except.bind, Nat.zero_add, h_extract, bne_self_eq_false,
    Bool.false_eq_true, ↓reduceIte]
  rw [Encoder.Proofs.readByte_ok (show 3 < (hdr5 ++ w).size by omega)]
  simp only [Except.bind, h3]
  have : ((0x00 : UInt8) != 0) = false := by native_decide
  simp only [this, Bool.false_eq_true, ↓reduceIte]
  rw [Encoder.Proofs.readByte_ok (show 4 < (hdr5 ++ w).size by omega)]
  simp only [Except.bind, h4]
  have hr : ((0x00 : UInt8) &&& HdrIndicator.reserved != 0) = false := by native_decide
  have hs : ((0x00 : UInt8) &&& HdrIndicator.secondary != 0) = false := by native_decide
  have hc : ((0x00 : UInt8) &&& HdrIndicator.codeTable != 0) = false := by native_decide
  have ha : ((0x00 : UInt8) &&& HdrIndicator.appData != 0) = false := by native_decide
  simp only [hr, Bool.false_eq_true, ↓reduceIte]
  simp only [hs, Bool.false_eq_true, ↓reduceIte]
  simp only [hc, Bool.false_eq_true, ↓reduceIte]
  simp only [ha, Bool.false_eq_true, ↓reduceIte]
  rfl

-- parseHeader succeeds on Encoder.encode output, positioning the cursor
-- at the start of the window bytes.
theorem parseHeader_encode_ok (source target : ByteArray) :
    Decoder.parseHeader ⟨Encoder.encode source target, 0⟩ =
      .ok (⟨0x00, none⟩, ⟨Encoder.encode source target, 5⟩) := by
  have h_eq : Encoder.encode source target = hdr5 ++ (
    let secs := Encoder.encodeWindow
      (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
      source.size
    Encoder.serializeWindow source target secs.1 secs.2.1 secs.2.2) := by
    unfold Encoder.encode hdr5 magic; ext1; simp [ByteArray.data_append]
  rw [h_eq]
  exact parseHeader_hdr5_append _

-- ============================================================================
-- ## Concrete full roundtrip examples (sanity checks via native_decide)
-- ============================================================================

-- Small concrete roundtrip: encode then decode via spec functions
theorem concrete_roundtrip_adds :
    let insts : List Encoder.RawInst :=
      [.add ⟨#[0x48, 0x45, 0x4C, 0x4C, 0x4F]⟩]  -- "HELLO"
    let (dataSec, instSec, addrSec, cache', _) :=
      encodeInstList insts 0 AddressCache.State.init 0
    decodeLoop 1 ByteArray.empty ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x48, 0x45, 0x4C, 0x4C, 0x4F]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, 0⟩,
         cache') := by native_decide

-- Mixed instructions: ADD + RUN + COPY
theorem concrete_roundtrip_mixed :
    let source : ByteArray := ⟨#[0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48]⟩
    let insts : List Encoder.RawInst :=
      [.add ⟨#[0x30]⟩,      -- ADD "0"
       .run 0xFF 4,           -- RUN 0xFF × 4
       .copy 0 5]             -- COPY "ABCDE"
    let (dataSec, instSec, addrSec, cache', _) :=
      encodeInstList insts source.size AddressCache.State.init 0
    decodeLoop 3 source ByteArray.empty
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩
      AddressCache.State.init =
    .ok (⟨#[0x30, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x42, 0x43, 0x44, 0x45]⟩,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, addrSec.size⟩,
         cache') := by
  set_option maxRecDepth 4096 in
  set_option maxHeartbeats 400000 in
  native_decide

-- ============================================================================
-- ## Full Decoder.decode roundtrip
-- ============================================================================

-- Helper: decodeWindows with single window (cursor starts before end, ends at end)
private theorem decodeWindows_single
    (source target delta : ByteArray) (win : Window)
    (k : Nat) (fuel : Nat)
    (h_fuel : fuel ≥ 1) (h_not_end : k < delta.size)
    (h_pw : Decoder.parseWindow ⟨delta, k⟩ = .ok (win, ⟨delta, delta.size⟩))
    (h_aw : Decoder.applyWindow win source = .ok target) :
    Decoder.decodeWindows source fuel ByteArray.empty ⟨delta, k⟩ =
      .ok (ByteArray.empty ++ target, ⟨delta, delta.size⟩) := by
  obtain ⟨n, rfl⟩ : ∃ n, fuel = n + 1 := ⟨fuel - 1, by omega⟩
  unfold Decoder.decodeWindows
  have : ¬(k ≥ delta.size) := by omega
  simp only [this, ↓reduceIte, h_pw, h_aw]
  -- Recursive call: cursor at end
  unfold Decoder.decodeWindows
  split
  · simp -- fuel = 0: guard fires
  · simp -- fuel + 1: guard fires

-- Helper: if parseWindow succeeds with cursor at end, Decoder.decode succeeds
private theorem decode_of_parseWindow
    (window source target : ByteArray) (win : Window)
    (h_pw : Decoder.parseWindow ⟨window, 0⟩ = .ok (win, ⟨window, window.size⟩))
    (h_aw : Decoder.applyWindow win source = .ok target) :
    Decoder.decode (hdr5 ++ window) source = .ok target := by
  -- parseWindow reads at least 1 byte, so window is non-empty
  have h_wpos : window.size > 0 := by
    by_contra hle
    unfold Decoder.parseWindow at h_pw
    simp only [bind, Except.bind] at h_pw
    unfold Varint.Cursor.readByte at h_pw
    simp [show ¬(0 < window.size) from by omega] at h_pw
  have h_delta_sz : (hdr5 ++ window).size = 5 + window.size := by
    rw [ByteArray.size_append, hdr5_size]
  -- Unfold decode
  unfold Decoder.decode
  simp only [bind, Except.bind]
  rw [parseHeader_hdr5_append]
  simp only [Except.bind]
  -- Apply decodeWindows_single
  have h_pw_reloc := parseWindow_reloc hdr5 window win window.size h_pw
  rw [hdr5_size] at h_pw_reloc
  have h_pw_end : Decoder.parseWindow ⟨hdr5 ++ window, 5⟩ =
    .ok (win, ⟨hdr5 ++ window, (hdr5 ++ window).size⟩) := by
    rw [h_delta_sz]; exact h_pw_reloc
  have h_dw := decodeWindows_single source target (hdr5 ++ window) win 5
    (hdr5 ++ window).size (by omega) (by rw [h_delta_sz]; omega)
    h_pw_end h_aw
  rw [h_dw]
  simp only [pure, Except.pure, bytearray_empty_append]

-- Decomposition: Encoder.encode = hdr5 ++ window
set_option maxHeartbeats 400000 in
private theorem encode_eq_hdr5_append (source target : ByteArray) :
    Encoder.encode source target = hdr5 ++ (
    let secs := Encoder.encodeWindow
      (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
      source.size
    Encoder.serializeWindow source target secs.1 secs.2.1 secs.2.2) := by
  unfold Encoder.encode hdr5 magic; ext1; simp [ByteArray.data_append]

-- Section-level: decode succeeds on hdr5 ++ serializeWindow
theorem full_decode_sections
    (source target : ByteArray)
    (dataSec instSec addrSec : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31)
    (h_sec_bound : dataSec.size + instSec.size + addrSec.size + 30 < 2 ^ 35)
    (h_loop : ∃ cache,
      let srcWin := if source.size > 0 then source else ByteArray.empty
      decodeLoop instSec.size srcWin ByteArray.empty
        ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ AddressCache.State.init =
        .ok (target, ⟨instSec, instSec.size⟩, ⟨dataSec, dataSec.size⟩,
             ⟨addrSec, addrSec.size⟩, cache)) :
    Decoder.decode (hdr5 ++ Encoder.serializeWindow source target dataSec instSec addrSec) source = .ok target := by
  obtain ⟨cache, h_loop⟩ := h_loop
  by_cases h_pos : source.size > 0
  · -- Expand serializeWindow in the goal to match parseWindow_encoded_sections
    simp only [Encoder.serializeWindow]
    rw [if_pos h_pos, if_pos h_pos]
    have h_pw := parseWindow_encoded_sections source target dataSec instSec addrSec
      h_pos h_source_bound h_target_bound h_sec_bound
    simp only [] at h_pw
    obtain ⟨win, _, h_parse, h_ds, h_is, h_as, h_tl, h_sl, h_so, h_wi, h_ad, h_rest⟩ := h_pw
    rw [h_rest] at h_parse
    have h_apply := applyWindow_of_decodeLoop win source target source
      (by rw [h_wi]
          simp only [show (((WinIndicator.source ||| WinIndicator.adler32) &&&
            WinIndicator.source) != 0) = true from by native_decide, ↓reduceIte]
          rw [h_so, h_sl, Nat.zero_add]
          exact (bytearray_extract_full source).symm)
      ⟨instSec, instSec.size⟩ ⟨dataSec, dataSec.size⟩ ⟨addrSec, addrSec.size⟩ cache
      (by rw [h_is, h_ds, h_as]; simp only [h_pos, ↓reduceIte] at h_loop; exact h_loop)
      (by rw [h_tl])
      (by left; rw [h_ad, encoder_decoder_adler32_eq])
    exact decode_of_parseWindow _ source target win h_parse h_apply
  · have h_source_not_pos : ¬(source.size > 0) := h_pos
    simp only [Encoder.serializeWindow]
    rw [if_neg h_source_not_pos, if_neg h_source_not_pos]
    have h_pw := parseWindow_encoded_sections_no_source target dataSec instSec addrSec
      h_target_bound h_sec_bound
    simp only [] at h_pw
    obtain ⟨win, _, h_parse, h_ds, h_is, h_as, h_tl, h_sl, h_so, h_wi, h_ad, h_rest⟩ := h_pw
    rw [h_rest] at h_parse
    have h_apply := applyWindow_of_decodeLoop win source target ByteArray.empty
      (by rw [h_wi]
          simp only [show ((WinIndicator.adler32 &&& WinIndicator.source) != 0) = false from by
            native_decide, Bool.false_eq_true, ↓reduceIte])
      ⟨instSec, instSec.size⟩ ⟨dataSec, dataSec.size⟩ ⟨addrSec, addrSec.size⟩ cache
      (by rw [h_is, h_ds, h_as]; simp only [h_source_not_pos, Bool.false_eq_true, ↓reduceIte] at h_loop; exact h_loop)
      (by rw [h_tl])
      (by left; rw [h_ad, encoder_decoder_adler32_eq])
    exact decode_of_parseWindow _ source target win h_parse h_apply

-- Full encode→decode roundtrip through Decoder.decode
set_option maxHeartbeats 400000 in
theorem full_encode_decode_roundtrip
    (source target : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31)
    (h_sec_bound :
      let secs := Encoder.encodeWindow
        (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
        source.size
      secs.1.size + secs.2.1.size + secs.2.2.size + 30 < 2 ^ 35)
    (h_loop :
      let secs := Encoder.encodeWindow
        (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
        source.size
      ∃ cache,
        let srcWin := if source.size > 0 then source else ByteArray.empty
        decodeLoop secs.2.1.size srcWin ByteArray.empty
          ⟨secs.2.1, 0⟩ ⟨secs.1, 0⟩ ⟨secs.2.2, 0⟩ AddressCache.State.init =
          .ok (target, ⟨secs.2.1, secs.2.1.size⟩, ⟨secs.1, secs.1.size⟩,
               ⟨secs.2.2, secs.2.2.size⟩, cache)) :
    Decoder.decode (Encoder.encode source target) source = .ok target := by
  rw [encode_eq_hdr5_append]
  exact full_decode_sections source target _ _ _
    h_source_bound h_target_bound h_sec_bound h_loop

-- Verify execInstListSpec matches the concrete decode result
theorem execInstListSpec_mixed :
    let source : ByteArray := ⟨#[0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48]⟩
    let insts : List Encoder.RawInst :=
      [.add ⟨#[0x30]⟩,
       .run 0xFF 4,
       .copy 0 5]
    execInstListSpec insts source ByteArray.empty =
    ⟨#[0x30, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x42, 0x43, 0x44, 0x45]⟩ := by
  native_decide

end LeanBdiff.Vcdiff.WindowRoundtrip
