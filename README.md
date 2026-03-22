# lean-bdiff

Lean4 port of the xdelta3 binary diff algorithm.

There is a full proof of correctness in this lemma:

```
theorem full_encode_decode_roundtrip_final
    (source target : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31) :
    Decoder.decode (Encoder.encode source target) source = .ok target
```

Miracuously, the entire implementation and formal verification effort was completed by Claude Code
using Opus 4.6. Around ~4M tokens were used.
