// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd86dc):
//   F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-shape-complex-indic.cc
// Referenced by 2 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"
// Referencing Function: 0x12bb020 .. 0x12bbe37 (3607 bytes)
// Symbol:               sub_12BB020
// Demangled:            sub_12BB020
// ============================================================================
char sub_12BB020(int *a1, uint32_t *a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int16_t v10; // si
  int v11;
  int i;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int *dest;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  uint32_t *v23;
  char *v24;
  uint8_t *v25;
  bool v26;
  int16_t v27;
  unsigned int v28;
  int v29;
  int v30;
  void *v31;
  int v32;
  unsigned int v33;
  int *v34;
  int v35;
  uint8_t *v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  unsigned int v41;
  uint8_t *v42;
  int v43;
  uint8_t *v44;
  uint8_t v45;
  int v46;
  int16_t v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int16_t v57;
  unsigned int v58;
  int v59;
  char v60;
  int v61;
  unsigned int v62;
  int v63;
  uint8_t *v64;
  int v65;
  int v66;
  unsigned int v67;
  int v68;
  unsigned int v69;
  void *src;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  unsigned int v78;
  int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  uint32_t *v84;
  uint8_t *v85;
  char *v86;
  char *v87;
  void *v88;
  void *v89;
  int v90;
  void *v91;
  uint32_t *v92;
  unsigned int v93;
  bool v95;
  int *v96;
  int v97;
  bool v98;
  int v99;
  int v100;
  int v102;
  unsigned int v103;
  char v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;

  v5 = a5;
  v6 = *(uint32_t *)(a3 + 100);
  v7 = a2[2];
  if ( v7 == 0 )
  {
    v11 = a2[19];
    v95 = v11 != 0;
    if ( a5 > a4 )
      goto LABEL_10;
LABEL_146:
    v13 = a4;
    v83 = a4 + 1;
    v85 = (uint8_t *)(v6 + 20 * a4);
    goto LABEL_20;
  }
  if ( a5 <= a4 )
  {
    v95 = a2[19] != 0;
    goto LABEL_146;
  }
  v8 = a4;
  v9 = v6 + 20 * a4;
  v77 = *(uint32_t *)(a3 + 100);
  do
  {
    while ( v7 != *(uint32_t *)v9 || (*(uint16_t *)(v9 + 12) & 0x60) != 0x60 )
    {
      ++v8;
      v9 += 20;
      if ( v8 >= a5 )
        goto LABEL_8;
    }
    v10 = *(uint16_t *)(v9 + 12) & 0xFF9F;
    ++v8;
    *(uint8_t *)(v9 + 18) = 4;
    *(uint16_t *)(v9 + 12) = v10;
    v9 += 20;
  }
  while ( v8 < a5 );
LABEL_8:
  v6 = v77;
  v11 = a2[19];
  v95 = v11 != 0;
LABEL_10:
  i = 20 * a4;
  v85 = (uint8_t *)(v6 + 20 * a4);
  if ( v85[19] > 3u )
  {
    v13 = a4;
    v83 = a4 + 1;
LABEL_82:
    if ( v95 )
    {
      v81 = v13 + 1;
      if ( a5 > v13 + 1 && *(uint32_t *)(*a2 + 28) == 2 )
      {
        v90 = 20 * v81;
        v99 = 20 * v81 + v6;
        if ( (v11 & *(uint32_t *)(v99 + 4)) != 0 )
        {
          v56 = 20 * v81 + v6;
          v105 = v56;
        }
        else
        {
          v106 = i;
          v37 = v6 + 20 * v13 + 40;
          v103 = v13;
          v38 = v13 + 1;
          do
          {
            if ( a5 <= ++v38 )
            {
              v13 = v103;
              i = v106;
              goto LABEL_84;
            }
            v90 = v37 - v6;
            v39 = v37;
            v37 += 20;
          }
          while ( (v11 & *(uint32_t *)(v39 + 4)) == 0 );
          v99 = v39;
          v55 = v39;
          v81 = v38;
          v13 = v103;
          i = v106;
          v105 = v55;
          v56 = v55;
        }
        v57 = *(uint16_t *)(v56 + 12);
        if ( (v57 & 0x10) == 0 || (v57 & 0x20) == 0 || (v57 & 0x40) != 0 )
        {
          if ( a5 > v81 && (*(uint8_t *)(v99 + 12) & 0x20) == 0 && ((1 << *(uint8_t *)(v99 + 18)) & 0x4010) != 0 )
          {
            v58 = v81 + 1;
            v59 = v6 + 20 * (v81 + 1);
            while ( 1 )
            {
              v81 = v58;
              if ( a5 <= v58 )
                break;
              v61 = v59;
              v90 = v59 - v6;
              if ( (*(uint8_t *)(v59 + 12) & 0x20) != 0
                || (v60 = *(uint8_t *)(v59 + 18), v59 += 20, ((1 << v60) & 0x4010) == 0) )
              {
                v105 = v61;
                goto LABEL_179;
              }
              ++v58;
            }
            v90 = 20 * v58;
            v105 = v6 + 20 * v58;
          }
LABEL_179:
          i = v90;
          v13 = v81;
          v95 = false;
          *(uint8_t *)(v105 + 19) = 4;
        }
      }
    }
LABEL_84:
    if ( a4 >= v13 )
      goto LABEL_20;
    v13 = (*(uint8_t *)(v6 + i + 19) < 5u) + v13 - 1;
  }
  else
  {
    v13 = a4;
    v83 = a4 + 1;
    for ( i = 20 * (a4 + 1); a5 > ++v13; i += 20 )
    {
      if ( *(uint8_t *)(v6 + i + 20 - 1) > 3u )
        goto LABEL_82;
    }
  }
  if ( a4 < v13 && a5 == v13 )
  {
    v14 = v6 + 20 * (v13 - 1);
    if ( (*(uint8_t *)(v14 + 12) & 0x20) != 0 || ((1 << *(uint8_t *)(v14 + 18)) & 0x40) == 0 )
      goto LABEL_23;
    --v13;
  }
LABEL_20:
  if ( a5 > v13 )
  {
    if ( a4 >= v13 )
    {
LABEL_65:
      LOBYTE(v16) = a5 > v83;
LABEL_66:
      if ( (uint8_t)v16 == 0 )
        goto LABEL_67;
      goto LABEL_41;
    }
    v15 = v6 + 20 * v13;
    if ( (*(uint8_t *)(v15 + 12) & 0x20) == 0 && ((1 << *(uint8_t *)(v15 + 18)) & 0x4018) != 0 )
    {
      v35 = v6 + 20 * v13 - 2;
      while ( a4 < --v13 )
      {
        v36 = (uint8_t *)v35;
        if ( (*(uint8_t *)(v35 - 6) & 0x20) == 0 )
        {
          v35 -= 20;
          if ( ((1 << *v36) & 0x4018) != 0 )
            continue;
        }
        goto LABEL_23;
      }
      goto LABEL_65;
    }
  }
LABEL_23:
  LOBYTE(v16) = a5 > v83;
  if ( a4 >= v13 )
    goto LABEL_66;
  if ( a5 <= v83 )
    goto LABEL_67;
  v17 = v13 - 1;
  if ( a5 == v13 )
    v17 = a5 - 2;
  v78 = v17;
  v18 = *(uint32_t *)(a3 + 52);
  if ( v18 == 1415671148 || v18 == 1298954605 )
    goto LABEL_29;
  if ( a4 < v78 )
  {
    v64 = (uint8_t *)(v6 + 20 * v78);
    while ( 1 )
    {
      if ( (v64[12] & 0x20) == 0 )
      {
        v66 = 1 << v64[18];
        if ( (v66 & 0x4090) != 0 )
          break;
      }
      --v78;
      v64 -= 20;
      if ( a4 >= v78 )
        goto LABEL_191;
    }
  }
  else
  {
LABEL_191:
    v64 = (uint8_t *)(v6 + 20 * v78);
    if ( (v64[12] & 0x20) != 0 )
      goto LABEL_192;
    v66 = 1 << v64[18];
  }
  if ( (v66 & 0x4010) != 0 && v64[19] != 2 )
  {
    v67 = v78 + 1;
    if ( a5 > v78 + 1 )
    {
      v68 = v6 + 20 * v67;
      if ( (*(uint8_t *)(v68 + 12) & 0x20) == 0 )
      {
        if ( ((1 << *(uint8_t *)(v68 + 18)) & 0x60) == 0 )
          v67 = v78;
        v78 = v67;
      }
    }
LABEL_29:
    if ( a4 < v78 && *(uint8_t *)(v6 + 20 * v78 + 19) != 2 )
    {
      v97 = v6;
      v86 = (char *)v13;
      dest = (int *)(v6 + 20 * v78 - 20);
      v20 = v78;
      v21 = v78 - 1;
      v22 = a4;
      while ( 1 )
      {
        if ( *((uint8_t *)dest + 19) == 2 )
        {
          v107 = *dest;
          v110 = dest[1];
          v113 = dest[2];
          v116 = dest[3];
          v119 = dest[4];
          v73 = v22;
          memmove(dest, dest + 5, 20 * (v20 - v21));
          v23 = (uint32_t *)(v97 + 20 * v20);
          *v23 = v107;
          v23[1] = v110;
          v23[2] = v113;
          v23[3] = v116;
          v23[4] = v119;
          if ( v21 < (unsigned int)v86 )
            v86 = &v86[(v20 < (unsigned int)v86) - 1];
          v24 = v86 + 1;
          if ( (unsigned int)(v86 + 1) > a5 )
            v24 = (char *)a5;
          src = (void *)v20--;
          sub_12A9B60(a3, src, v24);
          v22 = v73;
          dest -= 5;
          v16 = v21 - 1;
          if ( v73 >= v21 )
          {
LABEL_40:
            v6 = v97;
            v13 = (unsigned int)v86;
            v5 = a5;
            goto LABEL_41;
          }
        }
        else
        {
          dest -= 5;
          v16 = v21 - 1;
          if ( v22 >= v21 )
            goto LABEL_40;
        }
        v21 = v16;
      }
    }
  }
LABEL_192:
  if ( v85[19] != 2 )
  {
    v65 = v6 + 20 * v83 + 19;
    v16 = a4;
    while ( v13 > ++v16 )
    {
      v65 += 20;
      if ( *(uint8_t *)(v65 - 20) == 2 )
        goto LABEL_210;
    }
LABEL_41:
    v25 = v85;
    if ( v85[19] != 1 )
      goto LABEL_67;
    goto LABEL_42;
  }
  v16 = a4;
LABEL_210:
  v69 = v13 + 1;
  if ( v13 + 1 > a5 )
    v69 = a5;
  LOBYTE(v16) = sub_12A9B60(a3, v16, v69);
  v25 = v85;
  if ( v85[19] != 1 )
  {
LABEL_67:
    if ( !v95 )
      goto LABEL_58;
    goto LABEL_68;
  }
LABEL_42:
  v26 = v25[18] == 15;
  v27 = *((uint16_t *)v25 + 6);
  v16 = 0;
  if ( (v27 & 0x20) != 0 )
    v16 = (v27 & 0x40) == 0;
  if ( v26 == v16 )
    goto LABEL_67;
  v87 = *(char **)(*a2 + 16);
  if ( v87 == (uint8_t *)&dword_0 + 1 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-shape-complex-indic.cc",
      1495,
      "void final_reordering_syllable(const hb_ot_shape_plan_t*, hb_buffer_t*, unsigned int, unsigned int)",
      "reph_pos != REPH_POS_DONT_CARE");
  }
  else if ( v87 == &byte_9[3] )
  {
    goto LABEL_98;
  }
  if ( v13 > v83 )
  {
    v28 = v83;
    v29 = v6 + 20 * v83;
    while ( 1 )
    {
      v79 = v29;
      if ( (*(uint8_t *)(v29 + 12) & 0x20) == 0 && ((1 << *(uint8_t *)(v29 + 18)) & 0x4010) != 0 )
        break;
      ++v28;
      v29 += 20;
      if ( v28 >= v13 )
        goto LABEL_96;
    }
    if ( v28 < v13 )
    {
LABEL_52:
      v88 = (void *)(v28 + 1);
      if ( v28 + 1 < v13 )
      {
        v30 = v6 + 20 * (v28 + 1);
        v102 = v30;
        if ( (*(uint8_t *)(v30 + 12) & 0x20) == 0 && ((1 << *(uint8_t *)(v30 + 18)) & 0x60) != 0 )
        {
          v31 = (void *)(v28 + 2);
          v98 = v13 <= (unsigned int)v88;
          v79 = v102;
          ++v28;
          goto LABEL_56;
        }
      }
      goto LABEL_115;
    }
  }
LABEL_96:
  if ( v87 == (uint8_t *)&loc_4 + 1 )
  {
    v28 = v13;
    v50 = v6 + 4 * (5 * v13 + 5) + 19;
    while ( v5 > v28 + 1 )
    {
      v50 += 20;
      if ( *(uint8_t *)(v50 - 20) > 5u )
        break;
      ++v28;
    }
    if ( v5 > v28 )
    {
      v79 = v6 + 20 * v28;
      v98 = v13 <= v28;
      v31 = (void *)(v28 + 1);
      goto LABEL_56;
    }
  }
  else if ( v87 == byte_9 && v5 > v13 )
  {
    v91 = (void *)(v13 + 1);
    v43 = 22528;
    v28 = v13;
    v98 = true;
    if ( _bittest(&v43, *(uint8_t *)(v6 + 20 * (v13 + 1) + 19)) )
    {
LABEL_125:
      v79 = v6 + 20 * v28;
      v31 = v91;
      goto LABEL_56;
    }
    v82 = v13;
    v44 = (uint8_t *)(v6 + 20 * v13 + 59);
    while ( v5 > ++v28 )
    {
      v45 = *v44;
      v46 = 22528;
      v44 += 20;
      if ( _bittest(&v46, v45) )
      {
        v13 = v82;
        v91 = (void *)(v28 + 1);
        v98 = v82 <= v28;
        goto LABEL_125;
      }
    }
    v13 = v82;
  }
LABEL_98:
  if ( v13 > v83 )
  {
    v28 = v83;
    v40 = v6 + 20 * v83;
    while ( 1 )
    {
      v79 = v40;
      if ( (*(uint8_t *)(v40 + 12) & 0x20) == 0 && ((1 << *(uint8_t *)(v40 + 18)) & 0x4010) != 0 )
        break;
      ++v28;
      v40 += 20;
      if ( v28 >= v13 )
        goto LABEL_103;
    }
    if ( v28 < v13 )
      goto LABEL_52;
  }
LABEL_103:
  v28 = v5 - 1;
  if ( a4 >= v5 - 1 )
    goto LABEL_126;
  v79 = v6 + 20 * v28;
  if ( *(uint8_t *)(v79 + 19) == 14 )
  {
    v53 = v6 + 20 * v5 - 40;
    while ( a4 < --v28 )
    {
      v54 = v53;
      v53 -= 20;
      if ( *(uint8_t *)(v53 + 39) != 14 )
      {
        v79 = v54;
        goto LABEL_105;
      }
    }
LABEL_126:
    v79 = v6 + 20 * v28;
  }
LABEL_105:
  if ( dword_2116B70 == 0 )
  {
    v75 = v28;
    sub_12AE200();
    v28 = v75;
  }
  if ( (dword_2116B70 & 2) == 0 && (*(uint8_t *)(v79 + 12) & 0x20) == 0 && ((1 << *(uint8_t *)(v79 + 18)) & 0x4010) != 0 )
  {
    v41 = v13 + 1;
    v42 = (uint8_t *)(v6 + 20 * (v13 + 1) + 18);
    if ( v13 + 1 < v28 )
    {
      do
      {
        if ( *v42 == 7 )
          --v28;
        ++v41;
        v42 += 20;
      }
      while ( v41 < v28 );
      v88 = (void *)(v28 + 1);
      v79 = v6 + 20 * v28;
LABEL_115:
      v31 = v88;
      v98 = v13 <= v28;
      goto LABEL_56;
    }
  }
  v31 = (void *)(v28 + 1);
  v98 = v13 <= v28;
LABEL_56:
  v74 = v28;
  sub_12A9B60(a3, a4, v31);
  v108 = *(uint32_t *)v85;
  v111 = *((uint32_t *)v85 + 1);
  v114 = *((uint32_t *)v85 + 2);
  v117 = *((uint32_t *)v85 + 3);
  v120 = *((uint32_t *)v85 + 4);
  memmove(v85, (const void *)(v6 + 20 * v83), 20 * (v74 - a4));
  *(uint32_t *)v79 = v108;
  *(uint32_t *)(v79 + 4) = v111;
  *(uint32_t *)(v79 + 8) = v114;
  *(uint32_t *)(v79 + 12) = v117;
  LOBYTE(v16) = v120;
  *(uint32_t *)(v79 + 16) = v120;
  if ( !v98 )
    goto LABEL_67;
  LOBYTE(v16) = a4 < v13;
  v13 = (a4 >= v13) + v13 - 1;
  if ( !v95 )
    goto LABEL_58;
LABEL_68:
  LOBYTE(v16) = v13 + 1;
  v80 = v13 + 1;
  if ( v5 <= v13 + 1 )
    goto LABEL_58;
  v84 = (uint32_t *)(v6 + 20 * v80);
  v32 = a2[19];
  if ( (v32 & v84[1]) == 0 )
  {
    v33 = v13 + 1;
    v16 = v6 + 20 * v13 + 40;
    v89 = (void *)v13;
    while ( v5 > ++v33 )
    {
      v34 = (int *)v16;
      v16 += 20;
      if ( (v32 & v34[1]) != 0 )
      {
        v96 = v34;
        v13 = (unsigned int)v89;
        v16 = (int)v96;
        goto LABEL_128;
      }
    }
    goto LABEL_58;
  }
  v16 = v6 + 20 * v80;
  v33 = v13 + 1;
  v96 = (int *)v16;
LABEL_128:
  v47 = *(uint16_t *)(v16 + 12);
  if ( (v47 & 0x10) != 0 )
  {
    v16 = 0;
    if ( (v47 & 0x20) != 0 )
      v16 = (v47 & 0x40) == 0;
    if ( (*(uint32_t *)(*a2 + 28) == 1) != v16 )
    {
      v48 = *(uint32_t *)(a3 + 52);
      if ( v48 == 1415671148 || v48 == 1298954605 )
      {
LABEL_134:
        if ( a4 >= v13 )
          goto LABEL_136;
        v49 = v6 + 4 * (5 * v13 - 5);
        if ( (*(uint8_t *)(v49 + 12) & 0x20) != 0 )
          goto LABEL_136;
        goto LABEL_157;
      }
      if ( a4 >= v13 )
        goto LABEL_136;
      v93 = v13;
      v51 = v6 + 4 * (5 * v13 - 5);
      v72 = v13;
      while ( 1 )
      {
        v100 = v51;
        if ( (*(uint8_t *)(v51 + 12) & 0x20) == 0 )
        {
          v104 = *(uint8_t *)(v51 + 18);
          if ( ((1 << v104) & 0x4090) != 0 )
            break;
        }
        --v93;
        v51 -= 20;
        v13 = v93;
        if ( a4 >= v93 )
          goto LABEL_151;
      }
      if ( a4 >= v93 )
      {
        v13 = v93;
LABEL_151:
        v84 = (uint32_t *)(v6 + 4 * (5 * v13 + 5));
        goto LABEL_136;
      }
      if ( v104 == 7 )
      {
        if ( v80 < v33 )
        {
          if ( *((uint8_t *)v84 + 18) == 7 )
          {
LABEL_187:
            v80 = v93;
            v13 = v93 - 1;
            v84 = (uint32_t *)(v6 + 20 * v93);
            goto LABEL_134;
          }
          v62 = v80;
          v63 = v6 + 20 * v72 + 58;
          while ( ++v62 < v33 )
          {
            v63 += 20;
            if ( *(uint8_t *)(v63 - 20) == 7 )
              goto LABEL_187;
          }
        }
        v80 = v93 + 1;
        v84 = (uint32_t *)(v6 + 20 * (v93 + 1));
      }
      else
      {
        v80 = v93 + 1;
        v84 = (uint32_t *)(v6 + 20 * (v93 + 1));
      }
      v13 = v93;
      v49 = v100;
LABEL_157:
      if ( ((1 << *(uint8_t *)(v49 + 18)) & 0x4010) != 0 )
      {
        v52 = v6 + 20 * v13;
        v92 = (uint32_t *)v52;
        if ( v5 > v13 && (*(uint8_t *)(v52 + 12) & 0x20) == 0 && ((1 << *(uint8_t *)(v52 + 18)) & 0x60) != 0 )
        {
          v92 = v84;
          v13 = v80;
          v84 = (uint32_t *)(v6 + 4 * (5 * v80 + 5));
        }
        goto LABEL_137;
      }
LABEL_136:
      v92 = (uint32_t *)(v6 + 20 * v13);
LABEL_137:
      v76 = v33;
      sub_12A9B60(a3, v13, v33 + 1);
      v109 = *v96;
      v112 = v96[1];
      v115 = v96[2];
      v118 = v96[3];
      v121 = v96[4];
      memmove(v84, v92, 20 * (v76 - v13));
      *v92 = v109;
      v92[1] = v112;
      v92[2] = v115;
      v92[3] = v118;
      LOBYTE(v16) = v121;
      v92[4] = v121;
    }
  }
LABEL_58:
  if ( v85[19] == 2 && (a4 == 0 || ((v16 = 1 << *(uint8_t *)(v6 + 4 * (5 * a4 - 5) + 16)) & 0x1FFE) == 0) )
  {
    v16 = a2[27];
    *((uint32_t *)v85 + 1) |= v16;
  }
  if ( dword_2116B70 == 0 )
    LOBYTE(v16) = sub_12AE200();
  if ( (dword_2116B70 & 2) != 0 )
  {
    v16 = *a1;
    if ( *a1 != 1399418472 && v16 != 1415671148 )
      LOBYTE(v16) = sub_12A9B60(a3, a4, v5);
  }
  return v16;
}


// ============================================================================
// Referencing Function: 0x12bc480 .. 0x12bd4f0 (4208 bytes)
// Symbol:               sub_12BC480
// Demangled:            sub_12BC480
// ============================================================================
unsigned int sub_12BC480(
        unsigned int a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  uint8_t *v9;
  unsigned int v10;
  uint8_t *v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int *v16;
  int *v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  char *v23;
  unsigned int v24;
  unsigned int v25;
  char v26;
  unsigned int v27;
  uint8_t *v28;
  uint8_t *v29;
  unsigned int v30;
  char v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  uint8_t *v40;
  int v41;
  uint32_t *v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  uint32_t *v46;
  unsigned int result;
  int *v48;
  int v49;
  int v50;
  unsigned int v51;
  int k;
  int v53;
  uint32_t *v54;
  int v55;
  unsigned int v56;
  int v57;
  char v58;
  unsigned int v59;
  unsigned int v60;
  uint8_t *v61;
  char v62;
  unsigned int v63;
  uint8_t *v64;
  unsigned int v65;
  uint8_t *v66;
  unsigned int j;
  uint8_t *v68;
  unsigned int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  unsigned int v74;
  int v75;
  unsigned int v76;
  int i;
  unsigned int v78;
  int v79;
  int v80;
  uint8_t *v81;
  unsigned int v82;
  int *v83;
  int *v84;
  unsigned int v85;
  int v86;
  char v87;
  int v88;
  int v89;
  char *v90;
  char v91;
  int v92;
  unsigned int v93;
  char v94;
  unsigned int v95;
  int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  char v101;
  int *v102;
  int v103;
  unsigned int v104;
  unsigned int v105;
  char v106;
  unsigned int v107;
  char v108;
  unsigned int v109;
  uint8_t *v110;
  unsigned int v111;
  char v112;
  unsigned int v113;
  int *v116;
  unsigned int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;

  v103 = *(uint32_t *)(a3 + 100);
  v5 = *(uint32_t *)a1;
  if ( *(uint32_t *)(*(uint32_t *)a1 + 16) == 1 || *(uint32_t *)(a1 + 68) == 0 )
  {
    v6 = *(uint32_t *)(v5 + 20);
    goto LABEL_4;
  }
  v6 = *(uint32_t *)(v5 + 20);
  if ( a4 + 3 > a5 )
    goto LABEL_4;
  if ( v6 == 0 )
  {
    if ( (*(uint8_t *)(v103 + 20 * a4 + 52) & 0x20) == 0 && ((1 << *(uint8_t *)(v103 + 20 * a4 + 58)) & 0x60) != 0 )
    {
      v116 = (int *)(v103 + 20 * a4);
LABEL_247:
      v99 = a4 + 1;
      v113 = a4 + 1;
LABEL_223:
      v7 = a4;
      v100 = a5;
      v108 = 0;
      goto LABEL_6;
    }
    v116 = (int *)(v103 + 20 * a4);
    v118 = *v116;
    v99 = a4 + 1;
    v113 = a4 + 1;
    v119 = *(uint32_t *)(v103 + 20 * (a4 + 1));
    v75 = 0;
    goto LABEL_208;
  }
  if ( v6 != 1 )
  {
LABEL_4:
    if ( v6 == 3 )
    {
      v116 = (int *)(v103 + 20 * a4);
      if ( *((uint8_t *)v116 + 18) == 15 )
      {
        v99 = a4 + 1;
        v113 = a4 + 1;
        if ( a5 <= a4 + 1 )
        {
          v7 = a4 + 1;
          v100 = a4;
          v108 = 1;
        }
        else
        {
          v89 = v103 + 20 * (a4 + 1);
          if ( (*(uint8_t *)(v89 + 12) & 0x20) != 0 || ((1 << *(uint8_t *)(v89 + 18)) & 0x60) == 0 )
          {
            v7 = a4 + 1;
            v100 = a4;
            v108 = 1;
          }
          else
          {
            v90 = (char *)(v103 + 20 * a4 + 58);
            v7 = a4 + 1;
            do
            {
              if ( a5 <= ++v7 )
                break;
              if ( (*(v90 - 6) & 0x20) != 0 )
                break;
              v91 = *v90;
              v90 += 20;
            }
            while ( ((1 << v91) & 0x60) != 0 );
            v108 = 1;
            v100 = a4;
          }
        }
      }
      else
      {
        v100 = a5;
        v99 = a4 + 1;
        v113 = a4 + 1;
        v108 = 0;
        v7 = a4;
      }
    }
    else
    {
      v108 = 0;
      v99 = a4 + 1;
      v113 = a4 + 1;
      v100 = a5;
      v116 = (int *)(v103 + 20 * a4);
      v7 = a4;
    }
    goto LABEL_6;
  }
  v88 = 20 * a4;
  if ( *(uint8_t *)(v103 + 20 * a4 + 58) != 6 )
  {
    v116 = (int *)(v103 + v88);
    goto LABEL_247;
  }
  v116 = (int *)(v103 + v88);
  v99 = a4 + 1;
  v113 = a4 + 1;
  v118 = *(uint32_t *)(v103 + 20 * a4);
  v119 = *(uint32_t *)(v103 + 20 * (a4 + 1));
  v75 = *(uint32_t *)(v103 + 20 * a4 + 40);
LABEL_208:
  v120 = v75;
  if ( *(uint32_t *)(a1 + 16) != 0 )
  {
    v76 = 0;
    for ( i = sub_12CCD70(a2, **(uint16_t **)(a1 + 12), &v118, 2, *(uint8_t *)(a1 + 20));
          i == 0;
          i = sub_12CCD70(
                a2,
                *(uint16_t *)(*(uint32_t *)(a1 + 12) + 8 * v76),
                &v118,
                2,
                *(uint8_t *)(a1 + 20)) )
    {
      ++v76;
      v78 = *(uint32_t *)(a1 + 16);
      if ( v76 >= v78 )
      {
        v5 = *(uint32_t *)a1;
        v6 = *(uint32_t *)(*(uint32_t *)a1 + 20);
        goto LABEL_222;
      }
    }
  }
  else
  {
    v78 = 0;
LABEL_222:
    if ( v6 != 1 )
      goto LABEL_223;
    LOWORD(v6) = 0;
    if ( v78 == 0 )
      goto LABEL_223;
    while ( sub_12CCD70(
              a2,
              *(uint16_t *)(*(uint32_t *)(a1 + 12) + 8 * v6),
              &v118,
              3,
              *(uint8_t *)(a1 + 20)) == 0 )
    {
      if ( (unsigned int)++v6 >= *(uint32_t *)(a1 + 16) )
      {
        v5 = *(uint32_t *)a1;
        goto LABEL_223;
      }
    }
  }
  v7 = a4 + 2;
  if ( a5 > a4 + 2 )
  {
    v79 = v103 + 20 * v7;
    if ( (*(uint8_t *)(v79 + 12) & 0x20) == 0 && ((1 << *(uint8_t *)(v79 + 18)) & 0x60) != 0 )
    {
      v80 = v103 + 20 * a4 + 78;
      do
      {
        if ( a5 <= ++v7 )
          break;
        v81 = (uint8_t *)v80;
        if ( (*(uint8_t *)(v80 - 6) & 0x20) != 0 )
          break;
        v80 += 20;
      }
      while ( ((1 << *v81) & 0x60) != 0 );
    }
  }
  v100 = a4;
  v108 = 1;
  v5 = *(uint32_t *)a1;
LABEL_6:
  v8 = *(uint32_t *)(v5 + 12);
  if ( v8 != 1 )
  {
    if ( v8 != 2 )
    {
      if ( v8 == 0 )
      {
        if ( *(uint32_t *)(v5 + 20) != 2 )
          __assert2(
            "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-shape-complex-indic.cc",
            842,
            "void initial_reordering_consonant_syllable(const hb_ot_shape_plan_t*, hb_face_t*, hb_buffer_t*, unsigned int, unsigned int)",
            "indic_plan->config->reph_mode == REPH_MODE_VIS_REPHA");
        if ( v108 != 0 )
          __assert2(
            "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-shape-complex-indic.cc",
            843,
            "void initial_reordering_consonant_syllable(const hb_ot_shape_plan_t*, hb_face_t*, hb_buffer_t*, unsigned int, unsigned int)",
            "!has_reph");
        v104 = v99;
        v100 = a4;
        if ( a5 > v99 )
        {
          v9 = (uint8_t *)(v103 + 20 * v99 + 18);
          v10 = v99;
          do
          {
            if ( (*(v9 - 6) & 0x20) == 0 && ((1 << *v9) & 0x80031806) != 0 )
              v9[1] = 8;
            ++v10;
            v9 += 20;
          }
          while ( a5 > v10 );
          v100 = a4;
          v104 = v99;
        }
        goto LABEL_20;
      }
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-shape-complex-indic.cc",
        758,
        "void initial_reordering_consonant_syllable(const hb_ot_shape_plan_t*, hb_face_t*, hb_buffer_t*, unsigned int, unsigned int)",
        "false");
    }
    v60 = a5;
    v106 = 0;
    v61 = (uint8_t *)(v103 + 20 * a5 - 2);
    while ( 1 )
    {
      --v60;
      if ( (*(v61 - 6) & 0x20) != 0 || ((1 << *v61) & 0x80031806) == 0 )
        break;
      v62 = v61[1];
      if ( v62 == 8 )
      {
        v61 -= 20;
        v100 = v60;
        v106 = 1;
        if ( v60 <= v7 )
        {
LABEL_168:
          v104 = v100 + 1;
          goto LABEL_20;
        }
      }
      else
      {
        if ( v62 != 11 || v106 != 0 )
        {
          v100 = v60;
          v104 = v60 + 1;
          goto LABEL_20;
        }
        v100 = v60;
LABEL_142:
        v61 -= 20;
        if ( v60 <= v7 )
          goto LABEL_168;
      }
    }
    if ( a4 < v60 && *v61 == 6 && *(v61 - 20) == 4 )
    {
      v104 = v100 + 1;
      goto LABEL_20;
    }
    goto LABEL_142;
  }
  v65 = v100;
  if ( v108 == 0 )
    v65 = v7;
  v100 = v65;
  if ( a5 > v7 )
  {
    v66 = (uint8_t *)(v103 + 20 * v7 + 18);
    for ( j = v7; a5 > j; ++j )
    {
      if ( (*(v66 - 6) & 0x20) == 0 && ((1 << *v66) & 0x80031806) != 0 )
      {
        if ( v7 < j && *(v66 - 20) == 6 )
          break;
        v100 = j;
      }
      v66 += 20;
    }
  }
  v104 = v100 + 1;
  if ( a5 > v100 + 1 )
  {
    v68 = (uint8_t *)(v103 + 20 * (v100 + 1) + 18);
    v69 = v100 + 1;
    do
    {
      if ( (*(v68 - 6) & 0x20) == 0 && ((1 << *v68) & 0x80031806) != 0 )
        v68[1] = 8;
      ++v69;
      v68 += 20;
    }
    while ( a5 > v69 );
  }
LABEL_20:
  if ( v108 != 0 && a4 == v100 )
  {
    v87 = v108;
    if ( v7 - a4 <= 2 )
      v87 = 0;
    v108 = v87;
  }
  else if ( a4 < v100 )
  {
    v11 = (uint8_t *)(v103 + 20 * a4 + 19);
    v12 = a4;
    do
    {
      v13 = (uint8_t)*v11;
      if ( v13 > 3 )
        LOBYTE(v13) = 3;
      ++v12;
      *v11 = v13;
      v11 += 20;
    }
    while ( v100 > v12 );
  }
  if ( a5 > v100 )
    *(uint8_t *)(v103 + 20 * v100 + 19) = 4;
  if ( a5 > v104 )
  {
    if ( *(uint8_t *)(v103 + 20 * v104 + 18) == 7 )
    {
      v14 = v104;
LABEL_161:
      v63 = v14 + 1;
      if ( a5 > v63 )
      {
        v64 = (uint8_t *)(v103 + 20 * v63);
        while ( (v64[12] & 0x20) != 0 || ((1 << v64[18]) & 0x80031806) == 0 )
        {
          ++v63;
          v64 += 20;
          if ( a5 <= v63 )
            goto LABEL_34;
        }
        v64[19] = 13;
      }
    }
    else
    {
      v14 = v104;
      v15 = v103 + 4 * (5 * v104 + 5) + 18;
      while ( a5 > ++v14 )
      {
        v15 += 20;
        if ( *(uint8_t *)(v15 - 20) == 7 )
          goto LABEL_161;
      }
    }
  }
LABEL_34:
  if ( v108 != 0 )
    *((uint8_t *)v116 + 19) = 1;
  if ( *(uint8_t *)(a1 + 4) != 0 && a5 > v104 )
  {
    v16 = (int *)(v103 + 20 * v104);
    if ( *((uint8_t *)v16 + 18) == 4 )
    {
      v18 = v104;
LABEL_192:
      v111 = a5 - 1;
      if ( a5 - 1 <= v18 )
      {
        v74 = a5 - 1;
LABEL_206:
        v73 = v103 + 20 * v74;
        v94 = *(uint8_t *)(v73 + 18);
      }
      else
      {
        v72 = v103 + 20 * a5 - 20;
        if ( *(uint32_t *)(a3 + 52) == 1298954605 )
        {
          while ( 1 )
          {
            v73 = v72;
            if ( (*(uint8_t *)(v72 + 12) & 0x20) == 0 )
            {
              v94 = *(uint8_t *)(v72 + 18);
              if ( ((1 << v94) & 0x80031806) != 0 )
                break;
            }
            --v111;
            v72 -= 20;
            if ( v111 <= v18 )
            {
LABEL_205:
              v74 = v111;
              goto LABEL_206;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v73 = v72;
            if ( (*(uint8_t *)(v72 + 12) & 0x20) == 0 )
            {
              v94 = *(uint8_t *)(v72 + 18);
              if ( ((1 << v94) & 0x80031806) != 0 )
                break;
            }
            if ( *(uint8_t *)(v72 + 18) == 4 )
              goto LABEL_42;
            --v111;
            v72 -= 20;
            if ( v111 <= v18 )
              goto LABEL_205;
          }
        }
      }
      if ( v18 < v111 && v94 != 4 )
      {
        v118 = *v16;
        v119 = v16[1];
        v120 = v16[2];
        v121 = v16[3];
        v122 = v16[4];
        memmove(v16, (const void *)(v103 + 4 * (5 * v18 + 5)), 20 * (v111 - v18));
        *(uint32_t *)v73 = v118;
        *(uint32_t *)(v73 + 4) = v119;
        *(uint32_t *)(v73 + 8) = v120;
        *(uint32_t *)(v73 + 12) = v121;
        *(uint32_t *)(v73 + 16) = v122;
      }
    }
    else
    {
      v17 = (int *)(v103 + 4 * (5 * v104 + 5));
      v18 = v104;
      while ( a5 > ++v18 )
      {
        v16 = v17;
        v17 += 5;
        if ( *((uint8_t *)v17 - 2) == 4 )
          goto LABEL_192;
      }
    }
  }
LABEL_42:
  if ( a4 < a5 )
  {
    v96 = 0;
    v19 = v103 + 20 * a4;
    v20 = a4;
    v21 = -2147327880;
    do
    {
      while ( !_bittest(&v21, *(uint8_t *)(v19 + 18)) )
      {
        v22 = v96;
        if ( *(uint8_t *)(v19 + 19) != 14 )
          v22 = *(uint8_t *)(v19 + 19);
        ++v20;
        v19 += 20;
        v96 = v22;
        if ( a5 <= v20 )
          goto LABEL_50;
      }
      *(uint8_t *)(v19 + 19) = v96;
      if ( *(uint16_t *)(v19 + 18) == 516 && a4 < v20 )
      {
        v112 = *(uint8_t *)(v19 - 1);
        if ( v112 == 2 )
        {
          v92 = v19 - 21;
          v95 = v20;
          while ( a4 < --v95 )
          {
            v92 -= 20;
            v112 = *(uint8_t *)(v92 + 20);
            if ( v112 != 2 )
              goto LABEL_275;
          }
        }
        else
        {
LABEL_275:
          *(uint8_t *)(v19 + 19) = v112;
        }
      }
      ++v20;
      v19 += 20;
    }
    while ( a5 > v20 );
  }
LABEL_50:
  if ( a5 > v104 )
  {
    v23 = (char *)(v103 + 20 * v104 + 18);
    v24 = v104;
    v25 = v100;
    do
    {
      v26 = *v23;
      if ( (*(v23 - 6) & 0x20) != 0 || ((1 << v26) & 0x80031806) == 0 )
      {
        if ( v26 == 7 )
          v25 = v24;
      }
      else
      {
        v27 = v25 + 1;
        v25 = v24;
        if ( v27 < v24 )
        {
          v28 = (uint8_t *)(v103 + 20 * v27 + 19);
          do
          {
            if ( *v28 <= 0xDu )
              *v28 = v23[1];
            ++v27;
            v28 += 20;
          }
          while ( v27 < v24 );
          v25 = v24;
        }
      }
      ++v24;
      v23 += 20;
    }
    while ( a5 > v24 );
  }
  v101 = *((uint8_t *)v116 + 15);
  if ( a4 < a5 )
  {
    v29 = (uint8_t *)(v103 + 20 * a4 + 15);
    v30 = a4;
    do
    {
      v31 = v30++;
      *v29 = v31 - a4;
      v29 += 20;
    }
    while ( a5 > v30 );
  }
  v32 = a5 - a4;
  if ( a5 != a4 )
  {
    v109 = v32 - 1;
    if ( v32 != 1 )
    {
      v82 = 0;
      v98 = 0;
      while ( 1 )
      {
        v107 = v82 + 1;
        v83 = &v116[5 * v82 + 5];
        v84 = &v116[5 * v82];
        if ( *((uint8_t *)v83 + 19) < *((uint8_t *)v84 + 19) )
        {
          v98 = v82;
          v118 = *v84;
          v119 = v84[1];
          v120 = v84[2];
          v121 = v84[3];
          v122 = v84[4];
          *v84 = *v83;
          v84[1] = v83[1];
          v84[2] = v83[2];
          v84[3] = v83[3];
          v84[4] = v83[4];
          *v83 = v118;
          v83[1] = v119;
          v83[2] = v120;
          v83[3] = v121;
          v83[4] = v122;
        }
        if ( v107 >= v109 )
        {
          if ( v98 == 0 )
            break;
          v107 = 0;
          v109 = v98;
          v98 = 0;
        }
        v82 = v107;
      }
    }
  }
  if ( a4 >= a5 )
  {
    v105 = a5 + 1;
    v33 = a5;
  }
  else
  {
    v105 = v99;
    v33 = a4;
    if ( *((uint8_t *)v116 + 19) != 4 )
    {
      v34 = v103 + 20 * v99 + 19;
      v33 = a4;
      do
      {
        if ( a5 <= ++v33 )
        {
          v33 = a5;
          v105 = a5 + 1;
          goto LABEL_72;
        }
        v34 += 20;
      }
      while ( *(uint8_t *)(v34 - 20) != 4 );
      v105 = v33 + 1;
    }
  }
LABEL_72:
  if ( *(uint8_t *)(a1 + 4) != 0 || a5 - v33 > 0x7F )
  {
    sub_12A9B60(a3, v33, a5);
  }
  else if ( a5 > v33 )
  {
    v35 = v33;
    v110 = (uint8_t *)(v103 + 20 * v33 + 15);
    do
    {
      if ( *v110 != 0xFF )
      {
        v36 = a4 + (uint8_t)*v110;
        if ( v36 != v35 )
        {
          v37 = v35;
          do
          {
            if ( v37 < v36 )
              v37 = v36;
            v38 = v103 + 20 * v36;
            v36 = a4 + *(uint8_t *)(v38 + 15);
            *(uint8_t *)(v38 + 15) = -1;
          }
          while ( v36 != v35 );
          if ( v35 != v37 )
            sub_12A9B60(a3, v35, v37 + 1);
        }
      }
      ++v35;
      v110 += 20;
    }
    while ( a5 > v35 );
  }
  if ( a4 < a5 )
  {
    v39 = a4;
    v40 = (uint8_t *)(v103 + 20 * a4 + 15);
    do
    {
      ++v39;
      *v40 = v101;
      v40 += 20;
    }
    while ( a5 > v39 );
    if ( *((uint8_t *)v116 + 19) == 1 )
    {
      v70 = v103 + 20 * a4 + 4;
      v71 = a4;
      do
      {
        ++v71;
        *(uint32_t *)v70 |= *(uint32_t *)(a1 + 68);
        if ( a5 <= v71 )
          break;
        v70 += 20;
      }
      while ( *(uint8_t *)(v70 + 15) == 1 );
    }
  }
  v41 = *(uint32_t *)(a1 + 88);
  if ( *(uint8_t *)(a1 + 4) == 0 && *(uint32_t *)(*(uint32_t *)a1 + 24) == 0 )
    v41 |= *(uint32_t *)(a1 + 80);
  if ( a4 < v33 )
  {
    v42 = (uint32_t *)(v103 + 20 * a4 + 4);
    v43 = a4;
    do
    {
      ++v43;
      *v42 |= v41;
      v42 += 5;
    }
    while ( v33 > v43 );
  }
  v44 = v105;
  v45 = *(uint32_t *)(a1 + 92) | *(uint32_t *)(a1 + 80) | *(uint32_t *)(a1 + 84);
  if ( a5 > v105 )
  {
    v46 = (uint32_t *)(v103 + 20 * v105 + 4);
    do
    {
      ++v44;
      *v46 |= v45;
      v46 += 5;
    }
    while ( a5 > v44 );
  }
  if ( *(uint8_t *)(a1 + 4) != 0 && *(uint32_t *)(a3 + 52) == 1147500129 )
  {
    v85 = a4;
    v86 = v103 + 20 * a4;
    while ( v33 > v85 + 1 )
    {
      if ( *(uint8_t *)(v86 + 18) == 16 && *(uint8_t *)(v86 + 38) == 4 && (v33 == v85 + 2 || *(uint8_t *)(v86 + 58) != 6) )
      {
        *(uint32_t *)(v86 + 4) |= *(uint32_t *)(a1 + 80);
        *(uint32_t *)(v86 + 24) |= *(uint32_t *)(a1 + 80);
      }
      v86 += 20;
      ++v85;
    }
  }
  result = *(uint32_t *)(*(uint32_t *)a1 + 28);
  v117 = result;
  if ( *(uint32_t *)(a1 + 76) != 0 && a5 > result + v33 )
  {
    v97 = result - 1;
    if ( result - 1 > 1 )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-shape-complex-indic.cc",
        1117,
        "void initial_reordering_consonant_syllable(const hb_ot_shape_plan_t*, hb_face_t*, hb_buffer_t*, unsigned int, unsigned int)",
        "1 <= pref_len && pref_len <= 2");
    result = v97 + v105;
    if ( a5 > v97 + v105 )
    {
      result = *(uint32_t *)(a1 + 28);
      v102 = (int *)(v103 + 20 * v105);
      while ( 1 )
      {
        if ( v117 != 0 )
        {
          v48 = v102;
          v49 = 0;
          v93 = result;
          do
          {
            v50 = *v48;
            v48 += 5;
            *(&v118 + v49++) = v50;
          }
          while ( v49 != v117 );
          result = v93;
        }
        if ( result != 0 )
          break;
LABEL_156:
        ++v105;
        v102 += 5;
        if ( a5 <= v105 + v97 )
          goto LABEL_124;
      }
      v51 = 0;
      for ( k = sub_12CCD70(a2, **(uint16_t **)(a1 + 24), &v118, v117, *(uint8_t *)(a1 + 32));
            k == 0;
            k = sub_12CCD70(
                  a2,
                  *(uint16_t *)(*(uint32_t *)(a1 + 24) + 8 * v51),
                  &v118,
                  v117,
                  *(uint8_t *)(a1 + 32)) )
      {
        ++v51;
        result = *(uint32_t *)(a1 + 28);
        if ( v51 >= result )
          goto LABEL_156;
      }
      if ( v117 != 0 )
      {
        v53 = 0;
        v54 = (uint32_t *)(v103 + 20 * v105 + 4);
        do
        {
          ++v53;
          *v54 |= *(uint32_t *)(a1 + 76);
          v54 += 5;
        }
        while ( v53 != v117 );
        v105 += v53;
      }
      result = a1;
      v55 = *(uint32_t *)(a1 + 104);
      if ( v55 != 0 )
      {
        v56 = v105;
        if ( a5 > v105 )
        {
          result = v103 + 20 * v105 + 4;
          while ( 1 )
          {
            ++v56;
            *(uint32_t *)result |= v55;
            result += 20;
            if ( a5 <= v56 )
              break;
            v55 = *(uint32_t *)(a1 + 104);
          }
        }
      }
    }
  }
LABEL_124:
  if ( a5 > v99 )
  {
    result = 5 * v99;
    v57 = v103 + 20 * v99 - 8;
    do
    {
      if ( (*(uint8_t *)(v57 + 20) & 0x20) == 0 )
      {
        v58 = *(uint8_t *)(v57 + 26);
        result = 1 << v58;
        if ( ((1 << v58) & 0x60) != 0 && v58 == 5 )
        {
          result = v57 - 8;
          v59 = v113;
          while ( 1 )
          {
            --v59;
            *(uint32_t *)result &= ~*(uint32_t *)(a1 + 88);
            if ( a4 >= v59 || (*(uint8_t *)(result + 8) & 0x20) == 0 && ((1 << *(uint8_t *)(result + 14)) & 0x80031806) != 0 )
              break;
            result -= 20;
          }
        }
      }
      ++v113;
      v57 += 20;
    }
    while ( a5 > v113 );
  }
  return result;
}
