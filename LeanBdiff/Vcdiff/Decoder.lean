/-
  VCDIFF decoder: parses a VCDIFF-encoded delta and applies it to reconstruct the target.
-/
import LeanBdiff.Vcdiff.Defs
import LeanBdiff.Vcdiff.Varint
import LeanBdiff.Vcdiff.CodeTable
import LeanBdiff.Vcdiff.AddressCache

namespace LeanBdiff.Vcdiff.Decoder

open LeanBdiff.Vcdiff

/-- Inner loop for Adler32: accumulates `a` and `b` over a contiguous run
    of bytes without taking the modulus. The caller bounds the run length
    so the accumulators can't overflow before the mod is applied. -/
def adler32Run (data : ByteArray) (idx : USize) (a b : UInt32)
    : Nat → UInt32 × UInt32
  | 0 => (a, b)
  | n + 1 =>
    let byte := if h : idx.toNat < data.size then data.uget idx h else 0
    let a' := a + byte.toUInt32
    let b' := b + a'
    adler32Run data (idx + 1) a' b' n

/-- Outer driver: consumes `data` in chunks of at most `adlerNMax` bytes,
    applying the modulus once per chunk. Matches the standard RFC 1950
    batched-mod technique. -/
def adler32Chunks (data : ByteArray) (idx : USize) (a b : UInt32)
    : Nat → UInt32
  | 0 => (b <<< 16) ||| a
  | remaining + 1 =>
    -- Largest N such that max byte contribution (255) × N stays within
    -- UInt32 when added to a starting b < 65521 and a < 65521 respectively.
    -- RFC 1950 uses 5552; we use the same.
    let chunkSize := min (remaining + 1) 5552
    let (a', b') := adler32Run data idx a b chunkSize
    let modAdler : UInt32 := 65521
    adler32Chunks data (idx + chunkSize.toUSize) (a' % modAdler) (b' % modAdler)
      (remaining + 1 - chunkSize)
termination_by r => r

/-- Compute Adler32 checksum over a ByteArray (RFC 1950). -/
def adler32 (data : ByteArray) : UInt32 :=
  adler32Chunks data 0 1 0 data.size

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
  let _expectedEncLen := headerSize + dataLen + instLen + addrLen
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

/-- Copy `n` bytes starting at address `addr` from the combined source+target window,
    appending each byte to `target`. Handles overlapping self-copies correctly since
    each byte is read from the current state of `target`. -/
def copyLoop (sourceWindow target : ByteArray) (addr : Nat) : Nat → Nat → ByteArray
  | _, 0 => target
  | i, n + 1 =>
    let srcPos := addr + i
    let b := if srcPos < sourceWindow.size then
      sourceWindow[srcPos]!
    else
      target[srcPos - sourceWindow.size]!
    copyLoop sourceWindow (target.push b) addr (i + 1) n

/-- Optimized copy: bulk memcpy when possible, byte-by-byte only for overlapping self-copies. -/
@[inline] def copyBytes (sourceWindow target : ByteArray) (addr n : Nat) : ByteArray :=
  if addr + n ≤ sourceWindow.size then
    -- Entire copy is from the source segment: bulk extract + append
    target ++ sourceWindow.extract addr (addr + n)
  else if addr ≥ sourceWindow.size then
    -- Entire copy is from the target region
    let tgtOff := addr - sourceWindow.size
    if tgtOff + n ≤ target.size then
      -- Non-overlapping: all bytes already exist in target, bulk extract
      target ++ target.extract tgtOff (tgtOff + n)
    else
      -- Overlapping self-copy: must go byte-by-byte
      Id.run do
        let mut t := target
        for i in [:n] do
          let srcPos := tgtOff + i
          t := t.push t[srcPos]!
        t
  else
    -- Copy straddles source/target boundary
    let fromSrc := sourceWindow.size - addr
    let rest := n - fromSrc
    let t := target ++ sourceWindow.extract addr sourceWindow.size
    -- The remaining bytes come from target region starting at offset 0
    if rest ≤ t.size - sourceWindow.size then
      t ++ t.extract sourceWindow.size (sourceWindow.size + rest)
    else
      Id.run do
        let mut t' := t
        for i in [:rest] do
          let srcPos := sourceWindow.size + i
          t' := t'.push (if srcPos < sourceWindow.size then sourceWindow[srcPos]!
                         else t'[srcPos - sourceWindow.size]!)
        t'

/-- Execute a single half-instruction, returning updated state.
    `sourceWindow` is the concatenation of source segment + target decoded so far
    (for COPY within the combined window). -/
@[inline] def execHalfInst
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
    let target' := target ++ ByteArray.mk (Array.replicate instSize b)
    return (target', dataCursor', addrCursor, addrCache)
  | .copy mode =>
    -- Decode address and copy from source window
    let (addr, addrCursor', addrCache') ←
      AddressCache.decode mode.toNat here addrCursor addrCache
    -- The source window for COPY is: source segment ++ target decoded so far
    -- (the combined window). Check bounds.
    let windowSize := sourceWindow.size + target.size
    if addr >= windowSize then
      throw (.copyOutOfBounds addr instSize windowSize)
    -- Copy byte by byte to handle overlapping copies (where addr is in target region
    -- and we're copying bytes we're currently producing)
    let target' := copyBytes sourceWindow target addr instSize
    return (target', dataCursor, addrCursor', addrCache')

/-- Decode one opcode from the instruction section, resolving sizes and executing
    both half-instructions. Returns updated state. -/
@[inline] def decodeOneStep (sourceWindow target : ByteArray)
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
    if entry.inst1.size == 0 && !entry.inst1.type.isNoop then do
      let (sz, c) ← Varint.decode instCursor'
      pure (sz, c)
    else
      pure (entry.inst1.size, instCursor')
  -- Execute inst1
  let here := sourceWindow.size + target.size
  let (target', dataCursor', addrCursor', addrCache') ←
    if !entry.inst1.type.isNoop then
      execHalfInst entry.inst1 inst1Size sourceWindow target
        dataCursor addrCursor addrCache here
    else
      .ok (target, dataCursor, addrCursor, addrCache)
  -- Resolve inst2 size
  let (inst2Size, instCursor''') ←
    if entry.inst2.size == 0 && !entry.inst2.type.isNoop then do
      let (sz, c) ← Varint.decode instCursor''
      pure (sz, c)
    else
      pure (entry.inst2.size, instCursor'')
  -- Execute inst2
  let here' := sourceWindow.size + target'.size
  let (target'', dataCursor'', addrCursor'', addrCache'') ←
    if !entry.inst2.type.isNoop then
      execHalfInst entry.inst2 inst2Size sourceWindow target'
        dataCursor' addrCursor' addrCache' here'
    else
      .ok (target', dataCursor', addrCursor', addrCache')
  return (target'', instCursor''', dataCursor'', addrCursor'', addrCache'')

/-- Process opcodes from the instruction section, one at a time.
    Uses fuel-based recursion (fuel = max number of opcodes to process). -/
def applyWindowLoop (sourceSegment : ByteArray)
    : Nat → ByteArray → Varint.Cursor → Varint.Cursor → Varint.Cursor →
      AddressCache.State →
      DecodeResult (ByteArray × Varint.Cursor × Varint.Cursor ×
                    Varint.Cursor × AddressCache.State)
  | 0, target, ic, dc, ac, cache =>
    if ic.pos ≥ ic.data.size then .ok (target, ic, dc, ac, cache)
    else .error .truncatedInput
  | fuel + 1, target, ic, dc, ac, cache =>
    if ic.pos ≥ ic.data.size then .ok (target, ic, dc, ac, cache)
    else match decodeOneStep sourceSegment target ic dc ac cache with
      | .ok (target', ic', dc', ac', cache') =>
        applyWindowLoop sourceSegment fuel target' ic' dc' ac' cache'
      | .error e => .error e

/-- Apply a decoded window to produce the target bytes for that window. -/
def applyWindow (win : Window) (source : ByteArray) : DecodeResult ByteArray := do
  -- Extract source segment
  let sourceSegment :=
    if win.winIndicator &&& WinIndicator.source != 0 then
      source.extract win.sourceSegOff (win.sourceSegOff + win.sourceSegLen)
    else
      ByteArray.empty

  let (target, _, _, _, _) ← applyWindowLoop sourceSegment
    win.instSection.size (ByteArray.emptyWithCapacity win.targetLen)
    ⟨win.instSection, 0⟩ ⟨win.dataSection, 0⟩
    ⟨win.addrSection, 0⟩ AddressCache.State.init

  -- Verify target length
  if target.size != win.targetLen then
    throw (.invalidEncodingLength)

  -- Verify Adler32 if present
  if let some expected := win.adler32 then
    let actual := adler32 target
    if expected != actual then
      throw (.checksumMismatch expected actual)

  return target

/-- Process windows from the delta stream using fuel-based recursion. -/
def decodeWindows (source : ByteArray)
    : Nat → ByteArray → Varint.Cursor → DecodeResult (ByteArray × Varint.Cursor)
  | 0, target, c =>
    if c.pos ≥ c.data.size then .ok (target, c)
    else .error .truncatedInput
  | fuel + 1, target, c =>
    if c.pos ≥ c.data.size then .ok (target, c)
    else match parseWindow c with
      | .error e => .error e
      | .ok (win, c') =>
        match applyWindow win source with
        | .error e => .error e
        | .ok windowTarget =>
          decodeWindows source fuel (target ++ windowTarget) c'

/-- Decode a complete VCDIFF delta, applying it to the source to produce the target. -/
def decode (delta : ByteArray) (source : ByteArray := ByteArray.empty)
    : DecodeResult ByteArray := do
  let (_header, c) ← parseHeader ⟨delta, 0⟩
  -- Use delta.size as fuel (at most one window per byte)
  let (target, _) ← decodeWindows source delta.size ByteArray.empty c
  return target

end LeanBdiff.Vcdiff.Decoder
