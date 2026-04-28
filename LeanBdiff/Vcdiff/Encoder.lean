/-
  VCDIFF encoder: produces xdelta3-compatible VCDIFF delta files.

  Strategy:
  1. Build a hash index over the source file
  2. Scan target with rolling hash, finding matches in source
  3. Convert matches and literals into ADD/COPY instructions
  4. Encode instructions using the default code table
  5. Serialize as VCDIFF wire format
-/
import LeanBdiff.Vcdiff.Defs
import LeanBdiff.Vcdiff.Varint
import LeanBdiff.Vcdiff.CodeTable
import LeanBdiff.Vcdiff.AddressCache

namespace LeanBdiff.Vcdiff.Encoder

open LeanBdiff.Vcdiff

-- ## Adler32

/-- Compute Adler32 checksum over a ByteArray. -/
def adler32 (data : ByteArray) : UInt32 :=
  let modAdler : UInt32 := 65521
  let (a, b) := Id.run do
    let mut a : UInt32 := 1
    let mut b : UInt32 := 0
    for i in [:data.size] do
      a := (a + data[i]!.toUInt32) % modAdler
      b := (b + a) % modAdler
    (a, b)
  (b <<< 16) ||| a

/-- Write a UInt32 as 4 big-endian bytes. -/
def writeUInt32BE (v : UInt32) : ByteArray :=
  ByteArray.mk #[(v >>> 24).toUInt8, (v >>> 16).toUInt8, (v >>> 8).toUInt8, v.toUInt8]

-- ## Rolling Hash

/-- Rolling hash parameters (same polynomial as xdelta3's large hash). -/
def hashMultiplier : UInt32 := 1597334677
def hashWindow : Nat := 4  -- minimum match length; matches MIN_MATCH in code table

/-- Hash `len` bytes starting at `idx` in `data`, accumulating into `h`.
    Indices past `data.size` contribute 0 (preserves the baseline semantics). -/
def hashBytesAux (data : ByteArray) (idx : USize) (h : UInt32)
    : Nat → UInt32
  | 0 => h
  | n + 1 =>
    let h' := if hBound : idx.toNat < data.size then
                h * hashMultiplier + (data.uget idx hBound).toUInt32
              else
                h * hashMultiplier
    hashBytesAux data (idx + 1) h' n

/-- Compute hash of `len` bytes of `data` starting at `pos`. -/
@[inline] def hashBytes (data : ByteArray) (pos : Nat) (len : Nat) : UInt32 :=
  hashBytesAux data pos.toUSize 0 len

/-- Precompute multiplier^window for rolling hash removal of oldest byte. -/
def hashPower (window : Nat) : UInt32 := Id.run do
  let mut p : UInt32 := 1
  for _ in [:window] do
    p := p * hashMultiplier
  p

-- ## Source Index

/-- Sentinel for empty chain slots. Source sizes are bounded by `2^31` so no
    real position collides. -/
def sourceIdxSentinel : UInt32 := 0xFFFFFFFF

/-- A hash table mapping hash values to source positions, using a flat
    chain representation (xdelta3-style `large_table` + `large_prev`).

    * `head[bucket]` is the most-recent source position hashing to `bucket`,
      or `sourceIdxSentinel`.
    * `chain[pos]` is the previous position sharing a bucket with `pos`,
      or `sourceIdxSentinel`.

    Insertion is O(1) with two unboxed `UInt32` writes; no `List`/box traffic. -/
structure SourceIndex where
  head : Array UInt32        -- size = bucketCount
  chain : Array UInt32       -- size = sourceData.size
  mask : UInt32              -- bucketCount - 1 (power of 2)
  sourceData : ByteArray

/-- Build a source index. Hashes every position in the source with a window
    of `hashWindow`. Positions are stored most-recent-first in each chain
    (same order the old `List Nat` produced). -/
def buildSourceIndex (source : ByteArray) (bucketBits : Nat := 16) : SourceIndex := Id.run do
  let bucketCount := 1 <<< bucketBits
  let mask : UInt32 := (bucketCount - 1).toUInt32
  let mut head : Array UInt32 := Array.replicate bucketCount sourceIdxSentinel
  let mut chain : Array UInt32 := Array.replicate source.size sourceIdxSentinel
  if source.size >= hashWindow then
    for pos in [:source.size - hashWindow + 1] do
      let h := hashBytes source pos hashWindow
      let bucket := (h &&& mask).toNat
      chain := chain.set! pos head[bucket]!
      head := head.set! bucket pos.toUInt32
  { head, chain, mask, sourceData := source }

/-- Look up the start of the candidate chain for a hash value.
    Returns `sourceIdxSentinel` if the bucket is empty. -/
@[inline] def SourceIndex.lookup (idx : SourceIndex) (h : UInt32) : UInt32 :=
  let bucket := (h &&& idx.mask).toNat
  idx.head[bucket]!

-- ## Match Finding

/-- A match found between source and target. -/
structure Match where
  sourcePos : Nat
  targetPos : Nat
  length : Nat
  deriving Repr

/-- Fuel-driven forward extension loop with all arithmetic in `USize`.
    The caller pre-computes `sEnd = min source.size_as_usize (source.size - sp
    + sp_as_usize)` etc., so we never read `.size` inside the loop.

    We use `[]!`-indexing (`getElem!`) rather than `uget` because the USize
    bound we track does not statically imply `idx.toNat < data.size`. The
    fast bounds path in `lean_byte_array_get` bails on OOB without a crash,
    and since our fuel guarantees we never actually reach OOB, `[]!` is
    equivalent to `uget` at runtime (same `lean_byte_array_uget` call when
    the bounds check passes). -/
def extendForwardAux (source target : ByteArray) (si ti : USize)
    : Nat → USize
  | 0 => si
  | fuel + 1 =>
    if h : si.toNat < source.size ∧ ti.toNat < target.size then
      if source.uget si h.1 == target.uget ti h.2 then
        extendForwardAux source target (si + 1) (ti + 1) fuel
      else si
    else si

/-- Count consecutive matching bytes forwards. Returns the number of bytes
    matched. -/
@[inline] def extendForward (source : ByteArray) (sp : Nat)
    (target : ByteArray) (tp : Nat) : Nat :=
  let fuel := min (source.size - sp) (target.size - tp)
  let endIdx := extendForwardAux source target sp.toUSize tp.toUSize fuel
  endIdx.toNat - sp

/-- Fuel-driven backward extension loop. `si`/`ti` are the upper bounds
    (exclusive); we decrement before reading, so the first byte read is
    at `si - 1` / `ti - 1`. -/
def extendBackwardAux (source target : ByteArray) (si ti : USize)
    : Nat → USize
  | 0 => si
  | fuel + 1 =>
    if 0 < si.toNat ∧ 0 < ti.toNat then
      let si' := si - 1
      let ti' := ti - 1
      if h : si'.toNat < source.size ∧ ti'.toNat < target.size then
        if source.uget si' h.1 == target.uget ti' h.2 then
          extendBackwardAux source target si' ti' fuel
        else si
      else si
    else si

/-- Count consecutive matching bytes backwards. -/
@[inline] def extendBackward (source : ByteArray) (sp : Nat)
    (target : ByteArray) (tp : Nat) : Nat :=
  let fuel := min sp tp
  let endIdx := extendBackwardAux source target sp.toUSize tp.toUSize fuel
  sp - endIdx.toNat

/-- Extend a match forwards and backwards to find the longest match. -/
@[inline] def extendMatch (source : ByteArray) (sourcePos : Nat)
    (target : ByteArray) (targetPos : Nat) : Match :=
  let len := extendForward source sourcePos target targetPos
  let back := extendBackward source sourcePos target targetPos
  { sourcePos := sourcePos - back, targetPos := targetPos - back, length := len + back }

/-- Walk a chain of candidate source positions, tracking the best length
    seen so far as three scalar fields (`bestLen` = 0 means "no match yet").

    Compared to carrying an `Option Match`, this avoids allocating a
    `Match` struct for every losing candidate — only the final winner
    (if any) becomes a `Match`. -/
def findBestMatchRec (source : ByteArray) (chain : Array UInt32)
    (target : ByteArray) (targetPos : Nat)
    (cand : UInt32) (fuel : Nat)
    (bestSourcePos bestTargetPos bestLen : Nat)
    : Nat × Nat × Nat :=
  match fuel with
  | 0 => (bestSourcePos, bestTargetPos, bestLen)
  | fuel' + 1 =>
    if cand == sourceIdxSentinel then (bestSourcePos, bestTargetPos, bestLen)
    else
      let candN := cand.toNat
      -- Only attempt extension if the candidate window fits in source.
      let (bsp, btp, bl) :=
        if candN + hashWindow ≤ source.size then
          let len := extendForward source candN target targetPos
          let back := extendBackward source candN target targetPos
          let total := len + back
          if total ≥ hashWindow ∧ total > bestLen then
            (candN - back, targetPos - back, total)
          else (bestSourcePos, bestTargetPos, bestLen)
        else (bestSourcePos, bestTargetPos, bestLen)
      let next := if h : candN < chain.size then chain[candN] else sourceIdxSentinel
      findBestMatchRec source chain target targetPos next fuel' bsp btp bl

/-- Find the best match at a given target position. Returns none if no match >= MIN_MATCH. -/
@[inline] def findBestMatch (idx : SourceIndex) (target : ByteArray) (targetPos : Nat)
    (maxChain : Nat := 8) : Option Match :=
  if targetPos + hashWindow > target.size then none
  else
    let h := hashBytes target targetPos hashWindow
    let cand := idx.lookup h
    let (sp, tp, len) :=
      findBestMatchRec idx.sourceData idx.chain target targetPos cand maxChain 0 0 0
    if len ≥ hashWindow then some ⟨sp, tp, len⟩ else none

-- ## Instruction Generation

/-- An intermediate instruction before code table encoding. -/
inductive RawInst where
  | add (data : ByteArray)
  | copy (addr : Nat) (size : Nat)
  | run (byte : UInt8) (size : Nat)
  deriving Repr, Inhabited

/-- Minimum run length to emit a RUN instruction instead of ADD. -/
def minRunLength : Nat := 4

/-- Count consecutive bytes equal to `b` starting at position `start`. -/
def countRun (data : ByteArray) (start : Nat) (b : UInt8) (runLen : Nat) : Nat :=
  if start + runLen < data.size ∧ (data[start + runLen]! == b) = true then
    countRun data start b (runLen + 1)
  else runLen
termination_by data.size - (start + runLen)

theorem countRun_ge (data : ByteArray) (start : Nat) (b : UInt8) (runLen : Nat) :
    runLen ≤ countRun data start b runLen := by
  induction runLen using countRun.induct data start b with
  | case1 k h ih => rw [countRun, if_pos h]; omega
  | case2 k h => rw [countRun, if_neg h]; omega

/-- Emit ADD data, splitting out RUN sequences of repeated bytes. -/
def emitAddWithRuns (insts : Array RawInst) (data : ByteArray)
    : Array RawInst :=
  emitAddWithRunsRec insts data 0 0
where
  /-- Recursive helper for emitAddWithRuns. -/
  emitAddWithRunsRec (result : Array RawInst) (data : ByteArray)
      (i addStart : Nat) : Array RawInst :=
    if h_i : i < data.size then
      let b := data[i]!
      let runLen := countRun data i b 1
      have h_runLen_ge : runLen ≥ 1 := countRun_ge data i b 1
      have h_dec : data.size - (i + runLen) < data.size - i := by omega
      if runLen >= minRunLength then
        let result := if i > addStart then result.push (.add (data.extract addStart i)) else result
        let result := result.push (.run b runLen)
        emitAddWithRunsRec result data (i + runLen) (i + runLen)
      else
        emitAddWithRunsRec result data (i + runLen) addStart
    else
      if addStart < data.size then result.push (.add (data.extract addStart data.size))
      else result
  termination_by data.size - i

/-- Lazy matching threshold: a later match must be this much longer to prefer it. -/
def lazyThreshold : Nat := 2

/-- Try lazy matching: look ahead 1-3 positions for a better match. -/
def lazyBestMatch (idx : SourceIndex) (target : ByteArray) (pos : Nat) (m : Match)
    : Match :=
  if m.length >= 64 then m
  else
    let best := match (if pos + 1 < target.size then findBestMatch idx target (pos + 1) else none) with
      | some m2 => if m2.length > m.length + lazyThreshold then m2 else m
      | none => m
    let best := match (if pos + 2 < target.size then findBestMatch idx target (pos + 2) else none) with
      | some m2 => if m2.length > best.length + lazyThreshold then m2 else best
      | none => best
    match (if pos + 3 < target.size then findBestMatch idx target (pos + 3) else none) with
    | some m2 => if m2.length > best.length + lazyThreshold then m2 else best
    | none => best

/-- Trim a match so it doesn't extend before `pos`. -/
def trimMatch (m : Match) (pos : Nat) : Match :=
  if m.targetPos < pos then
    let trim := pos - m.targetPos
    { sourcePos := m.sourcePos + trim, targetPos := pos,
      length := if m.length > trim then m.length - trim else 0 }
  else m

theorem trimMatch_targetPos_ge (m : Match) (pos : Nat) :
    (trimMatch m pos).targetPos ≥ pos := by
  unfold trimMatch; split <;> simp_all <;> omega

/-- Recursive helper for generateInstructions. -/
def generateInstructionsLoop (idx : SourceIndex) (target : ByteArray)
    (pos : Nat) (pendingAdd : ByteArray) (insts : Array RawInst)
    : Array RawInst :=
  if h_pos : pos < target.size then
    match findBestMatch idx target pos with
    | some m =>
      let bestMatch := lazyBestMatch idx target pos m
      let bestMatch := trimMatch bestMatch pos
      if h_short : bestMatch.length < hashWindow then
        generateInstructionsLoop idx target (pos + 1) (pendingAdd.push target[pos]!) insts
      else
        let pendingAdd' := if bestMatch.targetPos > pos then
          pendingAdd ++ target.extract pos bestMatch.targetPos
        else pendingAdd
        let insts' := if pendingAdd'.size > 0 then emitAddWithRuns insts pendingAdd' else insts
        let insts' := insts'.push (.copy bestMatch.sourcePos bestMatch.length)
        have : target.size - (bestMatch.targetPos + bestMatch.length) < target.size - pos := by
          have h1 : bestMatch.targetPos ≥ pos :=
            trimMatch_targetPos_ge (lazyBestMatch idx target pos m) pos
          have h2 : bestMatch.length ≥ hashWindow := Nat.not_lt.mp h_short
          simp only [hashWindow] at h2; omega
        generateInstructionsLoop idx target (bestMatch.targetPos + bestMatch.length)
          ByteArray.empty insts'
    | none =>
      generateInstructionsLoop idx target (pos + 1) (pendingAdd.push target[pos]!) insts
  else
    if pendingAdd.size > 0 then emitAddWithRuns insts pendingAdd else insts
termination_by target.size - pos

/-- Scan the target and produce a sequence of raw instructions.
    Uses lazy matching: after finding a match, checks if a better match
    exists at the next position. -/
def generateInstructions (idx : SourceIndex) (target : ByteArray)
    : Array RawInst :=
  generateInstructionsLoop idx target 0 ByteArray.empty #[]

-- ## VCDIFF Encoding

/-- Find the best opcode for a single instruction with a given mode.
    Returns (opcode, needsSizeVarint). -/
def findSingleOpcode (inst : RawInst) (mode : Nat := 0) : UInt8 × Bool :=
  match inst with
  | .run _ _ => (0, true)  -- opcode 0 = RUN size=0
  | .add data =>
    if data.size >= 1 && data.size <= 17 then
      ((1 + data.size).toUInt8, false)  -- opcodes 2-18 = ADD size=1..17
    else
      (1, true)  -- opcode 1 = ADD size=0
  | .copy _ size =>
    -- Each mode has 16 opcodes starting at 19 + mode*16
    -- First entry: size=0 (varint follows), next 15: size=4..18
    let base := 19 + mode * 16
    if size >= 4 && size <= 18 then
      ((base + size - 4 + 1).toUInt8, false)
    else
      (base.toUInt8, true)

/-- Try to find a double-instruction opcode for ADD+COPY pair.
    Returns opcode if the pair fits a double entry, or none. -/
def findAddCopyOpcode (addSz : Nat) (copySz : Nat) (mode : Nat) : Option UInt8 :=
  if addSz >= 1 && addSz <= 4 then
    if mode <= 5 && copySz >= 4 && copySz <= 6 then
      -- Opcodes 163-234: mode outermost, addSz middle, copySz innermost
      -- Each mode has 4*3=12 entries
      some (163 + mode * 12 + (addSz - 1) * 3 + (copySz - 4)).toUInt8
    else if mode >= 6 && mode <= 8 && copySz == 4 then
      -- Opcodes 235-246: mode outermost, addSz innermost
      -- Each mode has 4 entries
      some (235 + (mode - 6) * 4 + (addSz - 1)).toUInt8
    else none
  else none

/-- Try to find a double-instruction opcode for COPY+ADD pair.
    Returns opcode if the pair fits, or none. -/
def findCopyAddOpcode (copySz : Nat) (mode : Nat) (addSz : Nat) : Option UInt8 :=
  if copySz == 4 && addSz == 1 && mode <= 8 then
    -- Opcodes 247-255: COPY size=4 mode=0..8 / ADD size=1
    some (247 + mode).toUInt8
  else none

/-- Process one instruction in the encoding loop. Returns updated sections,
    cache, target position, and the number of instructions consumed (1 or 2). -/
def encodeOneInst' (insts : Array RawInst) (i : Nat) (sourceSegLen : Nat)
    (dataSection instSection addrSection : ByteArray)
    (addrCache : AddressCache.State) (targetPos : Nat)
    : ByteArray × ByteArray × ByteArray × AddressCache.State × Nat × Nat :=
  if h : i < insts.size then
    let inst := insts[i]
    match inst with
    | .add data =>
      -- Check if next instruction is COPY that can pair with this ADD
      let paired :=
        if i + 1 < insts.size then
          match insts[i + 1]! with
          | .copy addr size =>
            let here := sourceSegLen + targetPos + data.size
            let (mode, addrBytes, cache') := addrCache.encodeAddress addr here
            match findAddCopyOpcode data.size size mode with
            | some opcode =>
              some (instSection.push opcode,
                    dataSection ++ data,
                    addrSection ++ addrBytes,
                    cache',
                    targetPos + data.size + size, 2)
            | none => none
          | _ => none
        else none
      match paired with
      | some (is', ds', as', c', tp', skip) => (ds', is', as', c', tp', skip)
      | none =>
        let (opcode, needsSize) := findSingleOpcode inst
        let is' := instSection.push opcode
        let is' := if needsSize then is' ++ Varint.encode data.size else is'
        (dataSection ++ data, is', addrSection, addrCache,
         targetPos + data.size, 1)
    | .copy addr size =>
      let here := sourceSegLen + targetPos
      let (mode, addrBytes, cache') := addrCache.encodeAddress addr here
      -- Check if next instruction is ADD size=1 and we can pair COPY+ADD
      let paired :=
        if size == 4 && i + 1 < insts.size then
          match insts[i + 1]! with
          | .add nextData =>
            if nextData.size == 1 then
              match findCopyAddOpcode size mode nextData.size with
              | some opcode =>
                some (instSection.push opcode,
                      dataSection ++ nextData,
                      addrSection ++ addrBytes,
                      cache',
                      targetPos + size + nextData.size, 2)
              | none => none
            else none
          | _ => none
        else none
      match paired with
      | some (is', ds', as', c', tp', skip) => (ds', is', as', c', tp', skip)
      | none =>
        let (opcode, needsSize) := findSingleOpcode inst mode
        let is' := instSection.push opcode
        let is' := if needsSize then is' ++ Varint.encode size else is'
        (dataSection, is', addrSection ++ addrBytes, cache',
         targetPos + size, 1)
    | .run byte size =>
      let (opcode, needsSize) := findSingleOpcode inst
      let is' := instSection.push opcode
      let is' := if needsSize then is' ++ Varint.encode size else is'
      (dataSection.push byte, is', addrSection, addrCache,
       targetPos + size, 1)
  else
    (dataSection, instSection, addrSection, addrCache, targetPos, 0)

/-- Encode a window's instructions using fuel-based recursion.
    Returns (dataSection, instSection, addrSection). -/
def encodeWindowLoop (insts : Array RawInst) (sourceSegLen : Nat)
    (dataSection instSection addrSection : ByteArray)
    (addrCache : AddressCache.State) (targetPos : Nat)
    : Nat → Nat → ByteArray × ByteArray × ByteArray
  | 0, _ => (dataSection, instSection, addrSection)
  | fuel + 1, i =>
    if i ≥ insts.size then (dataSection, instSection, addrSection)
    else
      let (ds', is', as', c', tp', skip) :=
        encodeOneInst' insts i sourceSegLen dataSection instSection
          addrSection addrCache targetPos
      encodeWindowLoop insts sourceSegLen ds' is' as' c' tp' fuel (i + skip)

/-- Encode a window's worth of instructions into the three VCDIFF sections.
    Returns (dataSection, instSection, addrSection). -/
def encodeWindow (insts : Array RawInst) (sourceSegLen : Nat)
    : ByteArray × ByteArray × ByteArray :=
  encodeWindowLoop insts sourceSegLen ByteArray.empty ByteArray.empty
    ByteArray.empty AddressCache.State.init 0 insts.size 0

/-- Serialize sections into a VCDIFF window byte array (pure, non-partial). -/
def serializeWindow (source target : ByteArray)
    (dataSection instSection addrSection : ByteArray) : ByteArray :=
  let checksumBytes := writeUInt32BE (adler32 target)
  let targetLenEnc := Varint.encode target.size
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size
  let deltaBody := targetLenEnc ++ ByteArray.mk #[0x00]
    ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ checksumBytes
    ++ dataSection ++ instSection ++ addrSection
  let encLenEnc := Varint.encode deltaBody.size
  let winIndicator := if source.size > 0 then
    WinIndicator.source ||| WinIndicator.adler32
  else
    WinIndicator.adler32
  let window := if source.size > 0 then
    ByteArray.mk #[winIndicator]
      ++ Varint.encode source.size
      ++ Varint.encode 0
      ++ encLenEnc ++ deltaBody
  else
    ByteArray.mk #[winIndicator]
      ++ encLenEnc ++ deltaBody
  window

/-- Encode a complete VCDIFF delta from source and target ByteArrays. -/
def encode (source : ByteArray) (target : ByteArray) : ByteArray :=
  let idx := buildSourceIndex source
  let insts := generateInstructions idx target
  let (dataSection, instSection, addrSection) := encodeWindow insts source.size
  let header := magic ++ ByteArray.mk #[0x00, 0x00]  -- version=0, hdr_indicator=0
  let window := serializeWindow source target dataSection instSection addrSection
  header ++ window

end LeanBdiff.Vcdiff.Encoder
