// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd82a8):
//   F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-buffer.cc
// Referenced by 19 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"
// Referencing Function: 0x12a7de0 .. 0x12a7ec2 (226 bytes)
// Symbol:               sub_12A7DE0
// Demangled:            sub_12A7DE0
// ============================================================================
int sub_12A7DE0(int a1, int a2, int a3)
{
  unsigned int v3;
  int result;
  const void *src;
  int v6;
  void *dest;

  v3 = *(uint32_t *)(a1 + 92) + a3;
  if ( v3 != 0 && v3 >= *(uint32_t *)(a1 + 96) && (uint8_t)sub_12A7CF0(a1, *(uint32_t *)(a1 + 92) + a3) == 0 )
    return 0;
  src = *(const void **)(a1 + 104);
  result = 1;
  if ( src == *(const void **)(a1 + 100) )
  {
    v6 = *(uint32_t *)(a1 + 92);
    result = 1;
    if ( v6 + a3 > (unsigned int)(*(uint32_t *)(a1 + 84) + a2) )
    {
      if ( *(uint8_t *)(a1 + 81) == 0 )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-buffer.cc",
          133,
          "bool hb_buffer_t::make_room_for(unsigned int, unsigned int)",
          "have_output");
        v6 = *(uint32_t *)(a1 + 92);
        src = *(const void **)(a1 + 100);
      }
      dest = *(void **)(a1 + 108);
      *(uint32_t *)(a1 + 104) = dest;
      memcpy(dest, src, 20 * v6);
      return 1;
    }
  }
  return result;
}


// ============================================================================
// Referencing Function: 0x12a7ed0 .. 0x12a7f9f (207 bytes)
// Symbol:               sub_12A7ED0
// Demangled:            sub_12A7ED0
// ============================================================================
int sub_12A7ED0(int a1, int a2)
{
  int v2;

  if ( *(uint8_t *)(a1 + 81) == 0 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-buffer.cc",
      145,
      "bool hb_buffer_t::shift_forward(unsigned int)",
      "have_output");
  v2 = *(uint32_t *)(a1 + 88);
  if ( v2 + a2 == 0 || (unsigned int)(v2 + a2) < *(uint32_t *)(a1 + 96) )
    goto LABEL_5;
  if ( (uint8_t)sub_12A7CF0(a1, v2 + a2) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 88);
LABEL_5:
    memmove(
      (void *)(*(uint32_t *)(a1 + 100) + 20 * (a2 + *(uint32_t *)(a1 + 84))),
      (const void *)(*(uint32_t *)(a1 + 100) + 20 * *(uint32_t *)(a1 + 84)),
      20 * (v2 - *(uint32_t *)(a1 + 84)));
    *(uint32_t *)(a1 + 88) += a2;
    *(uint32_t *)(a1 + 84) += a2;
    return 1;
  }
  return 0;
}


// ============================================================================
// Referencing Function: 0x12a7fa0 .. 0x12a8021 (129 bytes)
// Symbol:               sub_12A7FA0
// Demangled:            sub_12A7FA0
// ============================================================================

// ============================================================================
// Referencing Function: 0x12a8510 .. 0x12a8594 (132 bytes)
// Symbol:               sub_12A8510
// Demangled:            sub_12A8510
// ============================================================================

// ============================================================================
// Referencing Function: 0x12a85a0 .. 0x12a89ec (1100 bytes)
// Symbol:               sub_12A85A0
// Demangled:            sub_12A85A0
// ============================================================================

// ============================================================================
// Referencing Function: 0x12a89f0 .. 0x12a8b12 (290 bytes)
// Symbol:               sub_12A89F0
// Demangled:            sub_12A89F0
// ============================================================================

// ============================================================================
// Referencing Function: 0x12a8b20 .. 0x12a8c1a (250 bytes)
// Symbol:               sub_12A8B20
// Demangled:            sub_12A8B20
// ============================================================================

// ============================================================================
// Referencing Function: 0x12a8c20 .. 0x12a8d2a (266 bytes)
// Symbol:               sub_12A8C20
// Demangled:            sub_12A8C20
// ============================================================================

// ============================================================================
// Referencing Function: 0x12a8d30 .. 0x12a9049 (793 bytes)
// Symbol:               sub_12A8D30
// Demangled:            sub_12A8D30
// ============================================================================

// ============================================================================
// Referencing Function: 0x12a9f70 .. 0x12aa07c (268 bytes)
// Symbol:               sub_12A9F70
// Demangled:            sub_12A9F70
// ============================================================================

// ============================================================================
// Referencing Function: 0x12aa080 .. 0x12aa169 (233 bytes)
// Symbol:               sub_12AA080
// Demangled:            sub_12AA080
// ============================================================================

// ============================================================================
// Referencing Function: 0x12aa170 .. 0x12aa287 (279 bytes)
// Symbol:               sub_12AA170
// Demangled:            sub_12AA170
// ============================================================================

// ============================================================================
// Referencing Function: 0x12aa290 .. 0x12aa39f (271 bytes)
// Symbol:               sub_12AA290
// Demangled:            sub_12AA290
// ============================================================================

// ============================================================================
// Referencing Function: 0x12ab6b0 .. 0x12ab7bc (268 bytes)
// Symbol:               hb_buffer_guess_segment_properties
// Demangled:            hb_buffer_guess_segment_properties
// ============================================================================

// ============================================================================
// Referencing Function: 0x12ab7c0 .. 0x12ac493 (3283 bytes)
// Symbol:               hb_buffer_add_utf8
// Demangled:            hb_buffer_add_utf8
// ============================================================================

// ============================================================================
// Referencing Function: 0x12ac4a0 .. 0x12acea2 (2562 bytes)
// Symbol:               hb_buffer_add_utf16
// Demangled:            hb_buffer_add_utf16
// ============================================================================

// ============================================================================
// Referencing Function: 0x12aceb0 .. 0x12ad352 (1186 bytes)
// Symbol:               hb_buffer_add_utf32
// Demangled:            hb_buffer_add_utf32
// ============================================================================

// ============================================================================
// Referencing Function: 0x12ad360 .. 0x12ad802 (1186 bytes)
// Symbol:               hb_buffer_add_codepoints
// Demangled:            hb_buffer_add_codepoints
// ============================================================================

// ============================================================================
// Referencing Function: 0x12ad810 .. 0x12ae1f2 (2530 bytes)
// Symbol:               hb_buffer_normalize_glyphs
// Demangled:            hb_buffer_normalize_glyphs
// ============================================================================
