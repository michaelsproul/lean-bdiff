#!/usr/bin/env bash
# Generate C files from Lean sources and collect them for the Rust crate.
set -euo pipefail

PROJ_ROOT="$(cd "$(dirname "$0")/.." && pwd)"
IR_DIR="$PROJ_ROOT/.lake/build/ir"
OUT_DIR="$PROJ_ROOT/rust/csrc"

echo "Building Ffi target..."
cd "$PROJ_ROOT"
lake build Ffi

echo "Collecting C files..."
rm -rf "$OUT_DIR"
mkdir -p "$OUT_DIR"

# The C files needed for the FFI (no proofs, no tests)
C_FILES=(
  "Ffi/Export.c"
  "LeanBdiff/Vcdiff/Encoder.c"
  "LeanBdiff/Vcdiff/Decoder.c"
  "LeanBdiff/Vcdiff/Defs.c"
  "LeanBdiff/Vcdiff/Varint.c"
  "LeanBdiff/Vcdiff/CodeTable.c"
  "LeanBdiff/Vcdiff/AddressCache.c"
)

for f in "${C_FILES[@]}"; do
  dir="$OUT_DIR/$(dirname "$f")"
  mkdir -p "$dir"
  cp "$IR_DIR/$f" "$dir/"
  echo "  copied $f"
done

echo "Done. C files are in $OUT_DIR"
