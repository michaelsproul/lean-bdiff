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

/-- Compute hash of a window of bytes. -/
def hashBytes (data : ByteArray) (pos : Nat) (len : Nat) : UInt32 := Id.run do
  let mut h : UInt32 := 0
  for i in [:len] do
    if pos + i < data.size then
      h := h * hashMultiplier + data[pos + i]!.toUInt32
  h

/-- Precompute multiplier^window for rolling hash removal of oldest byte. -/
def hashPower (window : Nat) : UInt32 := Id.run do
  let mut p : UInt32 := 1
  for _ in [:window] do
    p := p * hashMultiplier
  p

-- ## Source Index

/-- A hash table mapping hash values to source positions.
    Uses Array of lists for simplicity. -/
structure SourceIndex where
  buckets : Array (List Nat)
  mask : Nat  -- bucketCount - 1 (power of 2)
  sourceData : ByteArray
  deriving Repr

/-- Build a source index. Hashes every position in the source with a window of `hashWindow`. -/
def buildSourceIndex (source : ByteArray) (bucketBits : Nat := 16) : SourceIndex := Id.run do
  let bucketCount := 1 <<< bucketBits
  let mask := bucketCount - 1
  let mut buckets := Array.replicate bucketCount ([] : List Nat)
  if source.size >= hashWindow then
    for pos in [:source.size - hashWindow + 1] do
      let h := hashBytes source pos hashWindow
      let idx := h.toNat &&& mask
      buckets := buckets.set! idx (pos :: buckets[idx]!)
  { buckets, mask, sourceData := source }

/-- Look up candidate source positions for a hash value. -/
def SourceIndex.lookup (idx : SourceIndex) (h : UInt32) : List Nat :=
  let bucket := h.toNat &&& idx.mask
  idx.buckets[bucket]!

-- ## Match Finding

/-- A match found between source and target. -/
structure Match where
  sourcePos : Nat
  targetPos : Nat
  length : Nat
  deriving Repr

/-- Extend a match forwards and backwards to find the longest match. -/
def extendMatch (source : ByteArray) (sourcePos : Nat)
    (target : ByteArray) (targetPos : Nat) : Match := Id.run do
  -- Extend forward
  let mut len := 0
  while sourcePos + len < source.size && targetPos + len < target.size &&
        source[sourcePos + len]! == target[targetPos + len]! do
    len := len + 1
  -- Extend backward
  let mut back := 0
  while sourcePos > back && targetPos > back &&
        source[sourcePos - back - 1]! == target[targetPos - back - 1]! do
    back := back + 1
  { sourcePos := sourcePos - back, targetPos := targetPos - back, length := len + back }

/-- Find the best match at a given target position. Returns none if no match >= MIN_MATCH. -/
def findBestMatch (idx : SourceIndex) (target : ByteArray) (targetPos : Nat)
    (maxChain : Nat := 8) : Option Match := Id.run do
  if targetPos + hashWindow > target.size then
    return none
  let h := hashBytes target targetPos hashWindow
  let candidates := idx.lookup h
  let mut best : Option Match := none
  let mut checked := 0
  for cand in candidates do
    if checked >= maxChain then break
    checked := checked + 1
    -- Verify the hash hit is a real match
    if cand + hashWindow <= idx.sourceData.size then
      let m := extendMatch idx.sourceData cand target targetPos
      if m.length >= hashWindow then
        match best with
        | none => best := some m
        | some prev => if m.length > prev.length then best := some m
  best

-- ## Instruction Generation

/-- An intermediate instruction before code table encoding. -/
inductive RawInst where
  | add (data : ByteArray)
  | copy (addr : Nat) (size : Nat)
  | run (byte : UInt8) (size : Nat)
  deriving Repr, Inhabited

/-- Minimum run length to emit a RUN instruction instead of ADD. -/
def minRunLength : Nat := 4

/-- Emit ADD data, splitting out RUN sequences of repeated bytes. -/
def emitAddWithRuns (insts : Array RawInst) (data : ByteArray)
    : Array RawInst := Id.run do
  let mut result := insts
  let mut i := 0
  let mut addStart := 0
  while i < data.size do
    -- Count run of identical bytes
    let b := data[i]!
    let mut runLen := 1
    while i + runLen < data.size && data[i + runLen]! == b do
      runLen := runLen + 1
    if runLen >= minRunLength then
      -- Flush preceding ADD bytes
      if i > addStart then
        result := result.push (.add (data.extract addStart i))
      result := result.push (.run b runLen)
      i := i + runLen
      addStart := i
    else
      i := i + runLen
  -- Flush remaining ADD bytes
  if addStart < data.size then
    result := result.push (.add (data.extract addStart data.size))
  result

/-- Lazy matching threshold: a later match must be this much longer to prefer it. -/
def lazyThreshold : Nat := 2

/-- Scan the target and produce a sequence of raw instructions.
    Uses lazy matching: after finding a match, checks if a better match
    exists at the next position. -/
def generateInstructions (idx : SourceIndex) (target : ByteArray)
    : Array RawInst := Id.run do
  let mut insts : Array RawInst := #[]
  let mut pos := 0
  let mut pendingAdd := ByteArray.empty

  for _ in [:target.size] do
    if pos >= target.size then break
    match findBestMatch idx target pos with
    | some m =>
      -- Lazy matching: check if next position has a better match
      let mut bestMatch := m
      let mut lazySkip := 0
      if bestMatch.length < 64 then  -- don't bother for long matches
        for delta in [1:4] do  -- look ahead up to 3 positions
          if pos + delta < target.size then
            match findBestMatch idx target (pos + delta) with
            | some m2 =>
              if m2.length > bestMatch.length + lazyThreshold then
                bestMatch := m2
                lazySkip := delta
            | none => pure ()
      -- Constrain match: don't let backward extension go before current pos
      if bestMatch.targetPos < pos then
        let trim := pos - bestMatch.targetPos
        bestMatch := { bestMatch with
          sourcePos := bestMatch.sourcePos + trim,
          targetPos := pos,
          length := if bestMatch.length > trim then bestMatch.length - trim else 0 }
      -- If trimmed match is too short, treat as no match
      if bestMatch.length < hashWindow then
        pendingAdd := pendingAdd.push target[pos]!
        pos := pos + 1
      else
        -- Add unmatched bytes between current pos and match start to pending ADD
        if bestMatch.targetPos > pos then
          pendingAdd := pendingAdd ++ target.extract pos bestMatch.targetPos
        if pendingAdd.size > 0 then
          insts := emitAddWithRuns insts pendingAdd
          pendingAdd := ByteArray.empty
        insts := insts.push (.copy bestMatch.sourcePos bestMatch.length)
        pos := bestMatch.targetPos + bestMatch.length
    | none =>
      pendingAdd := pendingAdd.push target[pos]!
      pos := pos + 1

  -- Flush remaining ADD
  if pendingAdd.size > 0 then
    insts := emitAddWithRuns insts pendingAdd

  insts

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
