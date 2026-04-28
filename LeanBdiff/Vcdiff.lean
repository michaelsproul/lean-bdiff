-- Runtime modules only. Proofs are temporarily excluded during the Stage 1
-- performance optimisation (see planning/optimise.md) and will be restored
-- in Stage 3. Import `LeanBdiff.Vcdiff.Proofs.All` (when it is restored) to
-- typecheck the full proof chain including `full_encode_decode_roundtrip_final`.
import LeanBdiff.Vcdiff.Defs
import LeanBdiff.Vcdiff.Varint
import LeanBdiff.Vcdiff.CodeTable
import LeanBdiff.Vcdiff.AddressCache
import LeanBdiff.Vcdiff.Decoder
import LeanBdiff.Vcdiff.Encoder
