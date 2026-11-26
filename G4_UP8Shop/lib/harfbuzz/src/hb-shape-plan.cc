// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd8518):
//   F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape-plan.cc
// Referenced by 2 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"
// Referencing Function: 0x12b2280 .. 0x12b2595 (789 bytes)
// Symbol:               hb_shape_plan_create
// Demangled:            hb_shape_plan_create
// ============================================================================
uint32_t *hb_shape_plan_create(uint32_t *empty, uint32_t *a2, void *src, int a4, const char **a5)
{
  uint32_t *v5;
  int v6;
  const char *v7;
  int v8;
  int v9;
  unsigned int v10;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  void *ptr;

  if ( empty == nullptr )
    empty = (uint32_t *)hb_face_get_empty();
  if ( a2 == nullptr || *empty == -1 )
    return (uint32_t *)hb_shape_plan_get_empty();
  if ( a4 != 0 )
  {
    ptr = malloc(16 * a4);
    if ( ptr == nullptr )
      return (uint32_t *)hb_shape_plan_get_empty();
  }
  else
  {
    ptr = nullptr;
  }
  v5 = calloc(1u, 0x5Cu);
  if ( v5 != nullptr )
  {
    *v5 = 1;
    memset(v5 + 2, 0, 0x24u);
    if ( *a2 == 0 )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape-plan.cc",
        121,
        "hb_shape_plan_t* hb_shape_plan_create(hb_face_t*, const hb_segment_properties_t*, const hb_feature_t*, unsigned "
        "int, char const* const*)",
        "props->direction != HB_DIRECTION_INVALID");
    hb_face_make_immutable(empty);
    v5[11] = a5 == nullptr;
    v5[12] = empty;
    v5[13] = *a2;
    v5[14] = a2[1];
    v5[15] = a2[2];
    v5[16] = a2[3];
    v5[17] = a2[4];
    v5[21] = a4;
    v5[20] = ptr;
    if ( a4 != 0 )
    {
      memcpy(ptr, src, 16 * a4);
      v6 = sub_12B2C00();
      if ( a5 != nullptr )
        goto LABEL_12;
    }
    else
    {
      v6 = sub_12B2C00();
      if ( a5 != nullptr )
      {
LABEL_12:
        v7 = *a5;
        if ( *a5 == nullptr )
          return v5;
        while ( 1 )
        {
          if ( strcmp(v7, "ot") == 0 )
          {
            v8 = v5[12];
            while ( 1 )
            {
              v9 = *(uint32_t *)(v8 + 72);
              if ( v9 != 0 )
              {
LABEL_18:
                v10 = v9 - 1;
                goto LABEL_19;
              }
              v16 = sub_12B3810(v8);
              v10 = v16 - 1;
              if ( v16 == 0 )
              {
                v10 = 0xFFFFFFFE;
                v16 = -1;
              }
              v9 = *(uint32_t *)(v8 + 72);
              if ( v9 == 0 )
                break;
              if ( v16 == 1 || v10 > 0xFFFFFFFD )
                goto LABEL_18;
              sub_12B3820((void *)v16);
            }
            *(uint32_t *)(v8 + 72) = v16;
LABEL_19:
            if ( v10 <= 0xFFFFFFFD )
              break;
          }
          v7 = *++a5;
          if ( *a5 == nullptr )
            return v5;
        }
LABEL_20:
        v5[22] = sub_12B3850(v5, src, a4);
        v5[18] = sub_12B43A0;
        v5[19] = "ot";
        return v5;
      }
    }
    if ( *(int (**)(int, int, int, int, int))(v6 + 16) != sub_12B43A0 )
      return v5;
    v12 = v5[12];
    while ( 1 )
    {
      v13 = *(uint32_t *)(v12 + 72);
      if ( v13 != 0 )
      {
LABEL_25:
        v14 = v13 - 1;
        goto LABEL_26;
      }
      v15 = sub_12B3810(v12);
      v14 = v15 - 1;
      if ( v15 == 0 )
      {
        v14 = 0xFFFFFFFE;
        v15 = -1;
      }
      v13 = *(uint32_t *)(v12 + 72);
      if ( v13 == 0 )
        break;
      if ( v15 == 1 || v14 > 0xFFFFFFFD )
        goto LABEL_25;
      sub_12B3820((void *)v15);
    }
    *(uint32_t *)(v12 + 72) = v15;
LABEL_26:
    if ( v14 > 0xFFFFFFFD )
      return v5;
    goto LABEL_20;
  }
  free(ptr);
  return (uint32_t *)hb_shape_plan_get_empty();
}


// ============================================================================
// Referencing Function: 0x12b2740 .. 0x12b28a9 (361 bytes)
// Symbol:               hb_shape_plan_execute
// Demangled:            hb_shape_plan_execute
// ============================================================================
bool hb_shape_plan_execute(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  bool result;
  int v6;
  unsigned int v7;
  unsigned int v8;

  result = false;
  if ( *(uint32_t *)a1 != -1 && *a2 != -1 && *a3 != -1 )
  {
    if ( *(uint32_t *)(a1 + 48) != a2[13] )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape-plan.cc",
        279,
        "hb_bool_t hb_shape_plan_execute(hb_shape_plan_t*, hb_font_t*, hb_buffer_t*, const hb_feature_t*, unsigned int)",
        "shape_plan->face_unsafe == font->face");
    if ( hb_segment_properties_equal(a1 + 52, a3 + 12) != 0 )
    {
      result = false;
      if ( *(int (**)(int, int, int, int, int))(a1 + 72) != sub_12B43A0 )
        return result;
    }
    else
    {
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape-plan.cc",
        280,
        "hb_bool_t hb_shape_plan_execute(hb_shape_plan_t*, hb_font_t*, hb_buffer_t*, const hb_feature_t*, unsigned int)",
        "hb_segment_properties_equal (&shape_plan->props, &buffer->props)");
      result = false;
      if ( *(int (**)(int, int, int, int, int))(a1 + 72) != sub_12B43A0 )
        return result;
    }
    if ( *(uint32_t *)(a1 + 88) != 0 )
    {
      while ( 1 )
      {
        v6 = a2[21];
        if ( v6 != 0 )
          break;
        v6 = sub_12B3830(a2);
        v8 = v6 - 1;
        if ( v6 == 0 )
        {
          v8 = 0xFFFFFFFE;
          v6 = -1;
        }
        if ( a2[21] == 0 )
        {
          a2[21] = v6;
          break;
        }
        if ( v6 != 1 && v8 <= 0xFFFFFFFD )
          sub_12B3840(v6);
      }
      v7 = v6 - 1;
      result = false;
      if ( v7 <= 0xFFFFFFFD )
        return sub_12B43A0(a1, (int)a2, (int)a3, a4, a5) != 0;
    }
  }
  return result;
}
