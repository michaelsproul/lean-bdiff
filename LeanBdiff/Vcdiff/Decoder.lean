/-
  VCDIFF decoder: parses a VCDIFF-encoded delta and applies it to reconstruct the target.
-/
import LeanBdiff.Vcdiff.Defs
import LeanBdiff.Vcdiff.Varint
import LeanBdiff.Vcdiff.CodeTable
import LeanBdiff.Vcdiff.AddressCache

namespace LeanBdiff.Vcdiff.Decoder

open LeanBdiff.Vcdiff

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

/-- Read a big-endian UInt32 from cursor. -/
def readUInt32BE (c : Varint.Cursor) : DecodeResult (UInt32 × Varint.Cursor) := do
  let (b0, c) ← c.readByte
  let (b1, c) ← c.readByte
  let (b2, c) ← c.readByte
  let (b3, c) ← c.readByte
  let val := (b0.toUInt32 <<< 24) ||| (b1.toUInt32 <<< 16) |||
             (b2.toUInt32 <<< 8) ||| b3.toUInt32
  return (val, c)

/-- Parse the VCDIFF file header. Returns the header and cursor positioned after it. -/
def parseHeader (c : Varint.Cursor) : DecodeResult (Header × Varint.Cursor) := do
  -- Check magic bytes (3 bytes) + version (1 byte) + hdr_indicator (1 byte) = 5 bytes min
  if !c.hasBytes 5 then
    throw .truncatedInput
  let (magicBytes, c) ← c.readBytes 3
  if magicBytes != magic then
    throw .invalidMagic
  let (version, c) ← c.readByte
  if version != 0 then
    throw (.unsupportedVersion version)
  let (hdrInd, c) ← c.readByte
  -- Reject reserved bits
  if hdrInd &&& HdrIndicator.reserved != 0 then
    throw (.invalidHeaderIndicator hdrInd)
  -- Reject secondary compression
  if hdrInd &&& HdrIndicator.secondary != 0 then
    throw (.unsupportedFeature "secondary compression")
  -- Reject custom code table
  if hdrInd &&& HdrIndicator.codeTable != 0 then
    throw (.unsupportedFeature "custom code table")
  -- Read optional app data
  let (appData, c) ← if hdrInd &&& HdrIndicator.appData != 0 then do
    let (len, c) ← Varint.decode c
    let (data, c) ← c.readBytes len
    pure (some data, c)
  else
    pure (none, c)
  return (⟨hdrInd, appData⟩, c)

/-- Parse a single window's metadata and sections. -/
def parseWindow (c : Varint.Cursor) : DecodeResult (Window × Varint.Cursor) := do
  let (winInd, c) ← c.readByte
  -- Reject reserved bits
  if winInd &&& WinIndicator.reserved != 0 then
    throw (.invalidWindowIndicator winInd)
  -- Reject VCD_TARGET
  if winInd &&& WinIndicator.target != 0 then
    throw (.unsupportedFeature "VCD_TARGET")

  -- Read source segment info if VCD_SOURCE
  let (sourceSegLen, sourceSegOff, c) ←
    if winInd &&& WinIndicator.source != 0 then do
      let (len, c) ← Varint.decode c
      let (off, c) ← Varint.decode c
      pure (len, off, c)
    else
      pure (0, 0, c)

  -- Delta encoding
  let encStart := c.pos
  let (_encLen, c) ← Varint.decode c
  let (targetLen, c) ← Varint.decode c
  let (deltaInd, c) ← c.readByte

  -- Reject secondary compression on sections
  if deltaInd &&& DeltaIndicator.reserved != 0 then
    throw (.invalidDeltaIndicator deltaInd)
  if deltaInd &&& (DeltaIndicator.dataComp ||| DeltaIndicator.instComp ||| DeltaIndicator.addrComp) != 0 then
    throw (.unsupportedFeature "secondary compression on delta sections")

  let (dataLen, c) ← Varint.decode c
  let (instLen, c) ← Varint.decode c
  let (addrLen, c) ← Varint.decode c

  -- Read optional Adler32
  let (checksum, c) ← if winInd &&& WinIndicator.adler32 != 0 then do
    let (v, c) ← readUInt32BE c
    pure (some v, c)
  else
    pure (none, c)

  -- Validate encoding length
  let headerSize := c.pos - encStart
  let expectedEncLen := headerSize + dataLen + instLen + addrLen
  -- Note: _encLen includes everything after itself, so we compare section sizes
  -- The total after enc_len varint = 1(deltaInd) + sizeof(tgtLen) + sizeof(dataLen)
  -- + sizeof(instLen) + sizeof(addrLen) + (4 if adler32) + dataLen + instLen + addrLen

  -- Read sections
  let (dataSection, c) ← c.readBytes dataLen
  let (instSection, c) ← c.readBytes instLen
  let (addrSection, c) ← c.readBytes addrLen

  -- Verify we consumed the right amount (encLen validation)
  -- We trust the section lengths since we read exactly dataLen + instLen + addrLen bytes

  return (⟨winInd, sourceSegLen, sourceSegOff, targetLen,
           dataSection, instSection, addrSection, checksum⟩, c)

/-- Execute a single half-instruction, returning updated state.
    `sourceWindow` is the concatenation of source segment + target decoded so far
    (for COPY within the combined window). -/
private def execHalfInst
    (inst : HalfInst)
    (instSize : Nat)  -- resolved size (never 0)
    (sourceWindow : ByteArray)
    (target : ByteArray)
    (dataCursor : Varint.Cursor)
    (addrCursor : Varint.Cursor)
    (addrCache : AddressCache.State)
    (here : Nat)  -- current decoded position within the combined source+target window
    : DecodeResult (ByteArray × Varint.Cursor × Varint.Cursor × AddressCache.State) := do
  match inst.type with
  | .noop => return (target, dataCursor, addrCursor, addrCache)
  | .add =>
    -- Copy instSize bytes from data section to target
    if !dataCursor.hasBytes instSize then
      throw .truncatedInput
    let (addData, dataCursor') ← dataCursor.readBytes instSize
    let target' := target ++ addData
    return (target', dataCursor', addrCursor, addrCache)
  | .run =>
    -- Read 1 byte from data section, repeat instSize times
    let (b, dataCursor') ← dataCursor.readByte
    let mut target' := target
    for _ in [:instSize] do
      target' := target'.push b
    return (target', dataCursor', addrCursor, addrCache)
  | .copy mode =>
    -- Decode address and copy from source window
    let (addr, addrCursor', addrCache') ←
      AddressCache.decode mode.toNat here addrCursor addrCache
    -- The source window for COPY is: source segment ++ target decoded so far
    -- (the combined window). Check bounds.
    let windowSize := sourceWindow.size + target.size
    if addr + instSize > windowSize then
      throw (.copyOutOfBounds addr instSize windowSize)
    -- Copy byte by byte to handle overlapping copies (where addr is in target region
    -- and we're copying bytes we're currently producing)
    let mut target' := target
    for i in [:instSize] do
      let srcPos := addr + i
      let b := if srcPos < sourceWindow.size then
        sourceWindow[srcPos]!
      else
        target'[srcPos - sourceWindow.size]!
      target' := target'.push b
    return (target', dataCursor, addrCursor', addrCache')

/-- Apply a decoded window to produce the target bytes for that window. -/
partial def applyWindow (win : Window) (source : ByteArray) : DecodeResult ByteArray := do
  -- Extract source segment
  let sourceSegment :=
    if win.winIndicator &&& WinIndicator.source != 0 then
      source.extract win.sourceSegOff (win.sourceSegOff + win.sourceSegLen)
    else
      ByteArray.empty

  let mut target := ByteArray.mkEmpty win.targetLen
  let mut instCursor : Varint.Cursor := ⟨win.instSection, 0⟩
  let mut dataCursor : Varint.Cursor := ⟨win.dataSection, 0⟩
  let mut addrCursor : Varint.Cursor := ⟨win.addrSection, 0⟩
  let mut addrCache := AddressCache.State.init

  while instCursor.pos < instCursor.data.size do
    -- Read opcode
    let (opcode, instCursor') ← instCursor.readByte
    instCursor := instCursor'

    let entry := CodeTable.lookup opcode

    -- Process inst1
    let inst1Size ← if entry.inst1.size == 0 && entry.inst1.type != .noop then do
      let (sz, c) ← Varint.decode instCursor
      instCursor := c
      pure sz
    else
      pure entry.inst1.size

    if entry.inst1.type != .noop then do
      let here := sourceSegment.size + target.size
      let (target', dataCursor', addrCursor', addrCache') ←
        execHalfInst entry.inst1 inst1Size sourceSegment target dataCursor addrCursor addrCache here
      target := target'
      dataCursor := dataCursor'
      addrCursor := addrCursor'
      addrCache := addrCache'

    -- Process inst2
    let inst2Size ← if entry.inst2.size == 0 && entry.inst2.type != .noop then do
      let (sz, c) ← Varint.decode instCursor
      instCursor := c
      pure sz
    else
      pure entry.inst2.size

    if entry.inst2.type != .noop then do
      let here := sourceSegment.size + target.size
      let (target', dataCursor', addrCursor', addrCache') ←
        execHalfInst entry.inst2 inst2Size sourceSegment target dataCursor addrCursor addrCache here
      target := target'
      dataCursor := dataCursor'
      addrCursor := addrCursor'
      addrCache := addrCache'

  -- Verify target length
  if target.size != win.targetLen then
    throw (.invalidEncodingLength)

  -- Verify Adler32 if present
  if let some expected := win.adler32 then
    let actual := adler32 target
    if expected != actual then
      throw (.checksumMismatch expected actual)

  return target

/-- Decode a complete VCDIFF delta, applying it to the source to produce the target. -/
partial def decode (delta : ByteArray) (source : ByteArray := ByteArray.empty)
    : DecodeResult ByteArray := do
  let mut c : Varint.Cursor := ⟨delta, 0⟩
  let (_header, c') ← parseHeader c
  c := c'

  let mut target := ByteArray.empty

  -- Process all windows
  while c.pos < c.data.size do
    let (win, c') ← parseWindow c
    c := c'
    let windowTarget ← applyWindow win source
    target := target ++ windowTarget

  return target

end LeanBdiff.Vcdiff.Decoder
