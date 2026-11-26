// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd8484):
//   F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape.cc
// Referenced by 2 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"
// Referencing Function: 0x12b1e80 .. 0x12b208a (522 bytes)
// Symbol:               hb_feature_to_string
// Demangled:            hb_feature_to_string
// ============================================================================
void hb_feature_to_string(uint32_t *a1, void *dest, int a3)
{
  int v3;
  int v4;
  unsigned int i;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  bool v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  size_t v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  char src[140];

  if ( a3 != 0 )
  {
    if ( a1[1] != 0 )
    {
      v3 = 4;
      v4 = 0;
    }
    else
    {
      src[0] = 45;
      v3 = 5;
      v4 = 1;
    }
    v21 = v3;
    hb_tag_to_string(*a1, &src[v4]);
    for ( i = v21; src[i - 1] == 32; --i )
    {
      if ( i == 1 )
      {
        v6 = a1[2];
        i = 0;
        if ( v6 == 0 )
          goto LABEL_28;
LABEL_7:
        src[i] = 91;
        v22 = i + 1;
        v7 = snprintf(&src[i + 1], 127 - i, "%u", v6);
        v8 = 0;
        if ( v7 >= 0 )
          v8 = v7;
        v9 = a1[3];
        v10 = v22 + v8;
        v11 = a1[2];
        goto LABEL_10;
      }
    }
    v6 = a1[2];
    if ( v6 != 0 )
      goto LABEL_7;
LABEL_28:
    v9 = a1[3];
    if ( v9 != -1 )
    {
      src[i] = 91;
      v11 = 0;
      v10 = i + 1;
LABEL_10:
      v12 = v9 == v11 + 1;
      v13 = v10;
      if ( !v12 )
      {
        v13 = v10 + 1;
        src[v10] = 58;
        if ( v9 != -1 )
        {
          v23 = v10 + 1;
          v14 = snprintf(&src[v13], 127 - v10, "%u", v9);
          v15 = 0;
          if ( v14 >= 0 )
            v15 = v14;
          v13 = v15 + v23;
        }
      }
      src[v13] = 93;
      i = v13 + 1;
    }
    v16 = a1[1];
    if ( v16 > 1 )
    {
      src[i] = 61;
      v17 = i + 1;
      v18 = snprintf(&src[i + 1], 127 - i, "%u", v16);
      v19 = 0;
      if ( v18 >= 0 )
        v19 = v18;
      i = v17 + v19;
    }
    if ( i > 0x7F )
    {
      v24 = i;
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape.cc",
        273,
        "void hb_feature_to_string(hb_feature_t*, char*, unsigned int)",
        "len < ARRAY_LENGTH (s)");
      i = v24;
    }
    v20 = a3 - 1;
    if ( i <= a3 - 1 )
      v20 = i;
    memcpy(dest, src, v20);
    *((uint8_t *)dest + v20) = 0;
  }
}


// ============================================================================
// Referencing Function: 0x12b2120 .. 0x12b2207 (231 bytes)
// Symbol:               hb_shape_full
// Demangled:            hb_shape_full
// ============================================================================
int hb_shape_full(int a1, int a2, void *src, int a4, int a5)
{
  int result;
  void *v6;
  void *v7;
  void *cached;
  void *v9;

  result = 1;
  if ( *(uint32_t *)(a2 + 88) != 0 )
  {
    if ( *(uint32_t *)(a2 + 76) != 1 )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape.cc",
        356,
        "hb_bool_t hb_shape_full(hb_font_t*, hb_buffer_t*, const hb_feature_t*, unsigned int, char const* const*)",
        "buffer->content_type == HB_BUFFER_CONTENT_TYPE_UNICODE");
    cached = (void *)hb_shape_plan_create_cached(*(uint32_t *)(a1 + 52), a2 + 48, src, a4, a5);
    v6 = (void *)hb_shape_plan_execute(cached, a1, a2, src, a4);
    v7 = cached;
    v9 = v6;
    hb_shape_plan_destroy(v7);
    result = (int)v9;
    if ( v9 != nullptr )
      *(uint32_t *)(a2 + 76) = 2;
  }
  return result;
}
