// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd8810):
//   F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ft.cc
// Referenced by 1 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"
// Referencing Function: 0x12c3df0 .. 0x12c3fc7 (471 bytes)
// Symbol:               hb_ft_font_set_funcs
// Demangled:            hb_ft_font_set_funcs
// ============================================================================
int hb_ft_font_set_funcs(int a1)
{
  int v1;
  int v2;
  int index;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int data;
  void *v13;
  int v14;
  int v15;
  int v16;

  v1 = a1;
  v13 = (void *)hb_face_reference_blob(*(uint32_t *)(a1 + 52));
  data = hb_blob_get_data(v13, &v15);
  v2 = *(uint32_t *)(a1 + 52);
  v16 = 0;
  index = hb_face_get_index(v2);
  v5 = index;
  v6 = v15;
  v14 = dword_2116CD0;
  v4 = dword_2116CD0;
  if ( dword_2116CD0 == 0 )
  {
    v11 = index;
    v10 = v15;
    while ( FT_Init_FreeType(&v14) == 0 )
    {
      if ( dword_2116CD0 == 0 )
      {
        v4 = v14;
        v6 = v10;
        v5 = v11;
        v1 = a1;
        dword_2116CD0 = v14;
        goto LABEL_2;
      }
      FT_Done_FreeType(v14);
      v14 = dword_2116CD0;
      if ( dword_2116CD0 != 0 )
      {
        v6 = v10;
        v5 = v11;
        v1 = a1;
        v4 = v14;
        goto LABEL_2;
      }
    }
    v6 = v10;
    v5 = v11;
    v1 = a1;
  }
LABEL_2:
  if ( FT_New_Memory_Face(v4, data, v6, v5, &v16) != 0 )
    return hb_blob_destroy(v13);
  FT_Select_Charmap(v16, 1970170211);
  v8 = *(uint32_t *)(v1 + 60);
  if ( v8 < 0 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ft.cc",
      496,
      "void hb_ft_font_set_funcs(hb_font_t*)",
      "font->y_scale >= 0");
    v8 = *(uint32_t *)(v1 + 60);
  }
  FT_Set_Char_Size(v16, *(uint32_t *)(v1 + 56), v8, 0, 0);
  v9 = v16;
  *(uint32_t *)(v16 + 44) = v13;
  *(uint32_t *)(v9 + 48) = sub_12C3590;
  return hb_font_set_funcs(v1, &unk_2036D20, v9, FT_Done_Face);
}
