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
partial def findBestMatch (idx : SourceIndex) (target : ByteArray) (targetPos : Nat)
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

/-- Scan the target and produce a sequence of raw instructions. -/
partial def generateInstructions (idx : SourceIndex) (target : ByteArray)
    : Array RawInst := Id.run do
  let mut insts : Array RawInst := #[]
  let mut pos := 0
  let mut pendingAdd := ByteArray.empty

  while pos < target.size do
    match findBestMatch idx target pos with
    | some m =>
      -- Emit any pending ADD
      if m.targetPos > pos then
        -- There are unmatched bytes between pos and m.targetPos
        pendingAdd := pendingAdd ++ target.extract pos m.targetPos
      if pendingAdd.size > 0 then
        insts := insts.push (.add pendingAdd)
        pendingAdd := ByteArray.empty
      insts := insts.push (.copy m.sourcePos m.length)
      pos := m.targetPos + m.length
    | none =>
      pendingAdd := pendingAdd.push target[pos]!
      pos := pos + 1

  -- Flush remaining ADD
  if pendingAdd.size > 0 then
    insts := insts.push (.add pendingAdd)

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
      -- Opcodes 163-234: ADD size=1..4 / COPY size=4..6 mode=0..5
      some (163 + (addSz - 1) * 18 + mode * 3 + (copySz - 4)).toUInt8
    else if mode >= 6 && mode <= 8 && copySz == 4 then
      -- Opcodes 235-246: ADD size=1..4 / COPY size=4 mode=6..8
      some (235 + (addSz - 1) * 3 + (mode - 6)).toUInt8
    else none
  else none

/-- Try to find a double-instruction opcode for COPY+ADD pair.
    Returns opcode if the pair fits, or none. -/
def findCopyAddOpcode (copySz : Nat) (mode : Nat) (addSz : Nat) : Option UInt8 :=
  if copySz == 4 && addSz == 1 && mode <= 8 then
    -- Opcodes 247-255: COPY size=4 mode=0..8 / ADD size=1
    some (247 + mode).toUInt8
  else none

/-- Encode a window's worth of instructions into the three VCDIFF sections.
    Returns (dataSection, instSection, addrSection). -/
partial def encodeWindow (insts : Array RawInst) (sourceSegLen : Nat)
    : ByteArray × ByteArray × ByteArray := Id.run do
  let mut dataSection := ByteArray.empty
  let mut instSection := ByteArray.empty
  let mut addrSection := ByteArray.empty
  let mut addrCache := AddressCache.State.init
  let mut targetPos := 0
  let mut i := 0

  while i < insts.size do
    let inst := insts[i]!
    match inst with
    | .add data =>
      -- Check if next instruction is COPY that can pair with this ADD
      let mut paired := false
      if i + 1 < insts.size then
        match insts[i + 1]! with
        | .copy addr size =>
          let here := sourceSegLen + targetPos + data.size
          let (mode, addrBytes, cache') := addrCache.encodeAddress addr here
          match findAddCopyOpcode data.size size mode with
          | some opcode =>
            instSection := instSection.push opcode
            dataSection := dataSection ++ data
            addrSection := addrSection ++ addrBytes
            addrCache := cache'
            targetPos := targetPos + data.size + size
            paired := true
            i := i + 2
          | none => pure ()
        | _ => pure ()
      if !paired then
        let (opcode, needsSize) := findSingleOpcode inst
        instSection := instSection.push opcode
        if needsSize then
          instSection := instSection ++ Varint.encode data.size
        dataSection := dataSection ++ data
        targetPos := targetPos + data.size
        i := i + 1
    | .copy addr size =>
      let here := sourceSegLen + targetPos
      let (mode, addrBytes, cache') := addrCache.encodeAddress addr here
      -- Check if next instruction is ADD size=1 and we can pair COPY+ADD
      let mut paired := false
      if size == 4 && i + 1 < insts.size then
        match insts[i + 1]! with
        | .add nextData =>
          if nextData.size == 1 then
            match findCopyAddOpcode size mode nextData.size with
            | some opcode =>
              instSection := instSection.push opcode
              addrSection := addrSection ++ addrBytes
              addrCache := cache'
              dataSection := dataSection ++ nextData
              targetPos := targetPos + size + nextData.size
              paired := true
              i := i + 2
            | none => pure ()
          else pure ()
        | _ => pure ()
      if !paired then
        let (opcode, needsSize) := findSingleOpcode inst mode
        instSection := instSection.push opcode
        if needsSize then
          instSection := instSection ++ Varint.encode size
        addrSection := addrSection ++ addrBytes
        addrCache := cache'
        targetPos := targetPos + size
        i := i + 1
    | .run byte size =>
      let (opcode, needsSize) := findSingleOpcode inst
      instSection := instSection.push opcode
      if needsSize then
        instSection := instSection ++ Varint.encode size
      dataSection := dataSection.push byte
      targetPos := targetPos + size
      i := i + 1

  (dataSection, instSection, addrSection)

/-- Encode a complete VCDIFF delta from source and target ByteArrays. -/
partial def encode (source : ByteArray) (target : ByteArray) : ByteArray := Id.run do
  -- Build source index
  let idx := buildSourceIndex source

  -- Generate instructions
  let insts := generateInstructions idx target

  -- Encode instructions into sections
  let sourceSegLen := source.size
  let (dataSection, instSection, addrSection) := encodeWindow insts sourceSegLen

  -- Build delta encoding body (RFC 3284 order)
  let targetLenEnc := Varint.encode target.size
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  let deltaBody := targetLenEnc ++ ByteArray.mk #[0x00]  -- delta_indicator = 0
    ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  let encLenEnc := Varint.encode deltaBody.size

  -- Build window
  let winIndicator := if source.size > 0 then
    WinIndicator.source  -- VCD_SOURCE
  else
    0  -- no source

  let mut window := ByteArray.mk #[winIndicator]
  if source.size > 0 then
    window := window ++ Varint.encode sourceSegLen  -- source segment length
    window := window ++ Varint.encode 0             -- source segment offset
  window := window ++ encLenEnc ++ deltaBody

  -- Build header
  let header := magic ++ ByteArray.mk #[0x00, 0x00]  -- version=0, hdr_indicator=0

  header ++ window

end LeanBdiff.Vcdiff.Encoder
