// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd87d0):
//   F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-shape-complex-thai.cc
// Referenced by 1 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"
// Referencing Function: 0x12c0540 .. 0x12c0b5c (1564 bytes)
// Symbol:               sub_12C0540
// Demangled:            sub_12C0540
// ============================================================================
char *sub_12C0540(int a1, int a2, int a3)
{
  unsigned int v3;
  unsigned int v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  char *result;
  unsigned int v11;
  int v12;
  char **v13;
  int *v14;
  int v15;
  int v16;
  int *v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22; // kr00_4
  char **v23;
  char **v24;
  char **v25;
  char *v26;
  char *v27;
  int v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  unsigned int v34;
  int i;
  int *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  char v43[4];
  uint32_t v44[2];
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;

  sub_12A8480(a2);
  v3 = 0;
  v4 = *(uint32_t *)(a2 + 88);
  *(uint32_t *)(a2 + 84) = 0;
  while ( v4 > v3 )
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(a2 + 100);
      v6 = *(uint32_t *)(v5 + 20 * v3);
      if ( (v6 & 0xFFFFFF7F) == 0xE33 )
        break;
      if ( *(uint8_t *)(a2 + 81) != 0 )
      {
        if ( v5 != *(uint32_t *)(a2 + 104) || (v9 = *(uint32_t *)(a2 + 92)) != v3 )
        {
          if ( (uint8_t)sub_12A7DE0(a2, 1, 1) == 0 )
            goto LABEL_22;
          v7 = (uint32_t *)(*(uint32_t *)(a2 + 104) + 20 * *(uint32_t *)(a2 + 92));
          v8 = (uint32_t *)(*(uint32_t *)(a2 + 100) + 20 * *(uint32_t *)(a2 + 84));
          *v7 = *v8;
          v7[1] = v8[1];
          v7[2] = v8[2];
          v7[3] = v8[3];
          v7[4] = v8[4];
          v9 = *(uint32_t *)(a2 + 92);
          v3 = *(uint32_t *)(a2 + 84);
        }
        *(uint32_t *)(a2 + 92) = v9 + 1;
      }
      *(uint32_t *)(a2 + 84) = ++v3;
      if ( v4 <= v3 )
        goto LABEL_10;
    }
    v44[0] = v6 + 26;
    v44[1] = v6 - 1;
    result = (char *)sub_12A85A0(a2, 1, 2, v44);
    if ( *(uint8_t *)(a2 + 80) != 0 )
      return result;
    v34 = *(uint32_t *)(a2 + 92);
    v39 = 20 * v34;
    *(uint8_t *)(*(uint32_t *)(a2 + 104) + 20 * v34 - 40 + 16) = *(uint8_t *)(*(uint32_t *)(a2 + 104) + 20 * v34 - 40 + 16)
                                                           & 0xE0
                                                           | 0xC;
    v11 = v34 - 2;
    if ( v34 != 2 )
    {
      v36 = (int *)(*(uint32_t *)(a2 + 104) + v39 - 60);
      do
      {
        v12 = *v36;
        LOBYTE(v12) = *v36 & 0x7F;
        if ( (unsigned int)(v12 - 3636) > 3 && (unsigned int)(v12 - 3655) > 7 && v12 != 3633 )
          break;
        v36 -= 5;
        --v11;
      }
      while ( v11 != 0 );
    }
    if ( v34 > v11 + 2 )
    {
      v32 = 20 * v34 - 40;
      sub_12A9D80(a2, v11, v34);
      v28 = *(uint32_t *)(a2 + 104);
      v45 = *(uint32_t *)(v28 + v39 - 40);
      v46 = *(uint32_t *)(v28 + v32 + 4);
      v47 = *(uint32_t *)(v28 + v32 + 8);
      v29 = *(uint32_t *)(v28 + v32 + 16);
      v48 = *(uint32_t *)(v28 + v32 + 12);
      v49 = v29;
      v33 = 20 * v11;
      memmove((void *)(v28 + 4 * (5 * v11 + 5)), (const void *)(v28 + 20 * v11), 20 * (v34 - v11) - 40);
      v30 = *(uint32_t *)(a2 + 104);
      *(uint32_t *)(v30 + 20 * v11) = v45;
      *(uint32_t *)(v30 + v33 + 4) = v46;
      *(uint32_t *)(v30 + v33 + 8) = v47;
      *(uint32_t *)(v30 + v33 + 12) = v48;
      *(uint32_t *)(v30 + v33 + 16) = v49;
      v3 = *(uint32_t *)(a2 + 84);
    }
    else
    {
      if ( v11 != 0 )
        sub_12A9D80(a2, v11 - 1, v34);
LABEL_22:
      v3 = *(uint32_t *)(a2 + 84);
    }
  }
LABEL_10:
  result = (char *)sub_12A8510(a2);
  if ( *(uint32_t *)(a1 + 4) == 1416126825 && *(uint8_t *)(a1 + 32) == 0 )
  {
    v37 = *(uint32_t *)(a2 + 88);
    v42 = *(uint32_t *)(a2 + 100);
    if ( v37 != 0 )
    {
      v13 = *(char ***)(a2 + 100);
      v41 = 0;
      v40 = 2;
      v38 = 3;
      for ( i = 0; i != v37; ++i )
      {
        v18 = *v13;
        if ( *v13 == (char *)&stru_E24.st_other )
        {
          v19 = 0;
        }
        else
        {
          v19 = 0;
          if ( (unsigned int)(v18 - 3636) > 3 && v18 != (uint8_t *)&stru_E44.st_name + 3 && (unsigned int)(v18 - 3661) > 1 )
          {
            v19 = 1;
            if ( (unsigned int)(v18 - 3640) > 2 )
            {
              v19 = 2;
              if ( (unsigned int)(v18 - 3656) > 4 )
              {
                if ( v18 == (uint8_t *)&stru_E14.st_size + 1 || v18 == (uint8_t *)&stru_E14.st_value + 3 )
                {
                  v20 = 1;
                }
                else
                {
                  v20 = 1;
                  if ( v18 != (uint8_t *)&stru_E14.st_size + 3 )
                  {
                    if ( v18 == (char *)&stru_E04.st_info || v18 == (uint8_t *)&stru_E04.st_size + 1 )
                    {
                      v20 = 2;
                    }
                    else
                    {
                      LOBYTE(v20) = 3;
                      if ( (unsigned int)(v18 - 3598) > 1 )
                        v20 = (unsigned int)(v18 - 3585) >= 0x2E ? 4 : 0;
                    }
                  }
                }
                v21 = dword_1CF6CD4[v20];
                result = (char *)dword_1CF6CE8[v20];
                v38 = v21;
                v40 = (int)result;
                v41 = i;
                goto LABEL_34;
              }
            }
          }
        }
        v14 = (int *)((char *)&unk_1CF6D00 + 24 * v38 + 8 * v19);
        v15 = v14[1];
        v16 = *v14;
        v38 = v15;
        v17 = (int *)((char *)&unk_1CF6D60 + 24 * v40 + 8 * v19);
        v40 = v17[1];
        if ( v16 == 0 )
          v16 = *v17;
        if ( v16 != 4 )
        {
          v22 = v16;
          result = (char *)&dword_20B9FF4 + (uint32_t)jpt_12C08B9[v16];
          switch ( v22 )
          {
            case 0:
              goto LABEL_33;
            case 1:
              v23 = (char **)&unk_1CF6EC0;
              goto LABEL_48;
            case 2:
              v23 = (char **)&unk_1CF6E20;
              goto LABEL_48;
            case 3:
              v23 = (char **)&unk_1CF6DC0;
LABEL_48:
              result = *v23;
              if ( *v23 == nullptr )
                goto LABEL_33;
              v24 = v23;
              if ( v18 == result )
                goto LABEL_52;
              break;
            default:
              result = (char *)__assert2(
                                 "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-shape-complex-thai.cc",
                                 142,
                                 "hb_codepoint_t thai_pua_shape(hb_codepoint_t, thai_action_t, hb_font_t*)",
                                 "false");
              goto LABEL_33;
          }
          while ( 1 )
          {
            result = v24[3];
            if ( result == nullptr )
              break;
            v24 += 3;
            if ( v18 == result )
            {
LABEL_52:
              result = (char *)hb_font_get_glyph(a3, v24[1], 0, v43);
              if ( result != nullptr )
              {
                v18 = v24[1];
              }
              else
              {
                result = (char *)hb_font_get_glyph(a3, v24[2], 0, v43);
                if ( result != nullptr )
                  v18 = v24[2];
              }
              break;
            }
          }
LABEL_33:
          *v13 = v18;
          goto LABEL_34;
        }
        v25 = (char **)(v42 + 20 * v41);
        v26 = *v25;
        v27 = (char *)&unk_1CF6F40;
        if ( *v25 == (uint8_t *)&stru_E04.st_size + 1 )
        {
          v27 = (char *)&unk_1CF6F40;
LABEL_66:
          v31 = (uint32_t *)(v42 + 20 * v41);
          result = (char *)hb_font_get_glyph(a3, *((uint32_t *)v27 + 1), 0, v43);
          if ( result != nullptr )
          {
            *v31 = *((uint32_t *)v27 + 1);
            goto LABEL_34;
          }
          result = (char *)hb_font_get_glyph(a3, *((uint32_t *)v27 + 2), 0, v43);
          v25 = (char **)(v42 + 20 * v41);
          if ( result != nullptr )
          {
            *v31 = *((uint32_t *)v27 + 2);
            goto LABEL_34;
          }
        }
        else
        {
          while ( 1 )
          {
            result = *(char **)((char *)&dword_1CF6F4C + v27 - (char *)&unk_1CF6F40);
            if ( result == nullptr )
              break;
            v27 += 12;
            if ( v26 == result )
              goto LABEL_66;
          }
        }
        *v25 = v26;
LABEL_34:
        v13 += 5;
      }
    }
  }
  return result;
}
