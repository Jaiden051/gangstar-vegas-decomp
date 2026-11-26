// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd861c):
//   F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh
// Referenced by 10 function(s) in libGangstar4.so

// ============================================================================
// Referencing Function: 0x12b6d50 .. 0x12b76ba (2410 bytes)
// Symbol:               sub_12B6D50
// Demangled:            sub_12B6D50
// ============================================================================
void __cdecl sub_12B6D50(int a1, int a2, int a3)
{
  int v4; // esi
  unsigned int *v5; // eax
  int v6; // ecx
  __int16 v7; // dx
  unsigned int v8; // ecx
  unsigned int *v9; // edi
  unsigned int v10; // esi
  _DWORD *v11; // eax
  int v12; // eax
  OT::SubstLookup *v13; // edi
  hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *v14; // eax
  int v15; // eax
  int v16; // ecx
  unsigned int j; // eax
  void *v18; // edx
  int v19; // esi
  _BYTE *v20; // eax
  char v21; // cl
  int v22; // edi
  int v23; // esi
  char *v24; // edx
  int v25; // eax
  char *v26; // edi
  int v27; // esi
  unsigned int i; // eax
  __int16 v29; // si
  int v30; // edi
  int v31; // esi
  unsigned int v32; // edx
  char v33; // dh
  _BYTE *v34; // eax
  char v35; // cl
  int v36; // edx
  __int16 v37; // cx
  _BYTE *v38; // eax
  char v39; // dh
  _BYTE *v40; // eax
  char v41; // cl
  int v42; // edx
  __int16 v43; // cx
  _BYTE *v44; // eax
  char v45; // dh
  _BYTE *v46; // eax
  char v47; // cl
  int v48; // edx
  __int16 v49; // cx
  _BYTE *v50; // eax
  char v51; // dh
  _BYTE *v52; // eax
  char v53; // cl
  int v54; // edx
  __int16 v55; // cx
  _BYTE *v56; // eax
  bool v57; // zf
  int v58; // [esp-6Ch] [ebp-218h]
  unsigned int *v59; // [esp-44h] [ebp-1F0h]
  unsigned int v60; // [esp-44h] [ebp-1F0h]
  int v61; // [esp-40h] [ebp-1ECh]
  int v62; // [esp-3Ch] [ebp-1E8h]
  int v63; // [esp-38h] [ebp-1E4h]
  unsigned int v64; // [esp-30h] [ebp-1DCh]
  int v65; // [esp-28h] [ebp-1D4h]
  int v66; // [esp-24h] [ebp-1D0h]
  int v67; // [esp-20h] [ebp-1CCh]
  unsigned __int16 v68; // [esp-20h] [ebp-1CCh]
  unsigned int v69; // [esp-20h] [ebp-1CCh]
  int v70; // [esp-1Ch] [ebp-1C8h]
  unsigned __int16 v71; // [esp-18h] [ebp-1C4h]
  unsigned __int16 v72; // [esp-18h] [ebp-1C4h]
  unsigned __int16 v73; // [esp-18h] [ebp-1C4h]
  _BYTE *v74; // [esp-14h] [ebp-1C0h]
  __int16 v75; // [esp-4h] [ebp-1B0h] BYREF
  int key; // [esp+0h] [ebp-1ACh] BYREF
  _WORD v77[6]; // [esp+4h] [ebp-1A8h] BYREF
  _DWORD v78[2]; // [esp+10h] [ebp-19Ch] BYREF
  _DWORD v79[2]; // [esp+18h] [ebp-194h] BYREF
  _DWORD v80[2]; // [esp+20h] [ebp-18Ch] BYREF
  _DWORD v81[2]; // [esp+28h] [ebp-184h] BYREF
  _DWORD v82[2]; // [esp+30h] [ebp-17Ch] BYREF
  _DWORD v83[2]; // [esp+38h] [ebp-174h] BYREF
  _WORD v84[8]; // [esp+40h] [ebp-16Ch] BYREF
  _BYTE v85[16]; // [esp+50h] [ebp-15Ch] BYREF
  int v86; // [esp+60h] [ebp-14Ch] BYREF
  char *v87; // [esp+64h] [ebp-148h]
  char *v88; // [esp+68h] [ebp-144h]
  char *v89; // [esp+6Ch] [ebp-140h]
  char v90; // [esp+70h] [ebp-13Ch]
  _DWORD v91[8]; // [esp+80h] [ebp-12Ch] BYREF
  _DWORD v92[2]; // [esp+A0h] [ebp-10Ch] BYREF
  int v93; // [esp+A8h] [ebp-104h]
  int v94; // [esp+ACh] [ebp-100h]
  int v95; // [esp+B0h] [ebp-FCh]
  int v96; // [esp+B4h] [ebp-F8h]
  char v97; // [esp+B8h] [ebp-F4h]
  int v98; // [esp+BCh] [ebp-F0h]
  int v99; // [esp+C0h] [ebp-ECh]
  int v100; // [esp+C4h] [ebp-E8h]
  int v101; // [esp+C8h] [ebp-E4h]
  bool v102; // [esp+CCh] [ebp-E0h]
  int v103; // [esp+D0h] [ebp-DCh]
  int v104; // [esp+1A0h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(a1 + 964);
  if ( *(_BYTE *)(v4 + 32) == 0 )
    return;
LABEL_2:
  v5 = *(unsigned int **)(v4 + 36);
  if ( v5 == nullptr )
  {
    v74 = calloc(1u, 0x6Cu);
    if ( v74 == nullptr )
    {
      v5 = (unsigned int *)&unk_1CEDC00;
      v74 = &unk_1CEDC00;
LABEL_29:
      *(_DWORD *)(v4 + 36) = v74;
      goto LABEL_3;
    }
    v66 = 0;
    v65 = 0;
    v63 = v4;
    v62 = a3;
    *(_DWORD *)v74 = 0;
    v74[4] = 0;
    while ( 1 )
    {
      key = dword_1CEDC6C[v65];
      v11 = bsearch(
              &key,
              *(const void **)(a1 + 48),
              *(_DWORD *)(a1 + 40),
              0x24u,
              (__compar_fn_t)hb_ot_map_t::feature_map_t::cmp);
      if ( v11 != nullptr )
      {
        v12 = v11[7];
        *(_DWORD *)&v74[4 * v66 + 8] = v12;
        if ( v12 != 0 )
        {
          if ( v65 != 4 )
          {
            v13 = (OT::SubstLookup *)sub_12B98C4();
            goto LABEL_15;
          }
          v19 = 2;
          v70 = 0;
          do
          {
            if ( hb_font_get_glyph(a2, (unsigned __int16)word_1CEE8C4[-9 * v19], 0, &key) != 0 )
            {
              v20 = &v77[v70];
              v21 = BYTE1(key);
              v20[1] = key;
              *v20 = v21;
              v78[v70] = 0;
              *(_DWORD *)&v77[2 * v70++ + 2] = 2 - v19;
            }
            --v19;
          }
          while ( v19 != 0 );
          if ( v70 != 0 )
          {
            v69 = v70 - 1;
            if ( v70 != 1 )
            {
              v64 = 0;
              for ( i = 0; ; i = v32 )
              {
                v32 = i + 1;
                if ( (unsigned __int16)((LOBYTE(v77[i]) << 8) + HIBYTE(v77[i])) > (unsigned __int16)(HIBYTE(v77[i + 1]) + (LOBYTE(v77[i + 1]) << 8)) )
                {
                  v29 = v77[i];
                  v77[i] = v77[v32];
                  v30 = *(_DWORD *)&v77[2 * v32 + 2];
                  v77[v32] = v29;
                  v31 = *(_DWORD *)&v77[2 * i + 2];
                  *(_DWORD *)&v77[2 * i + 2] = v30;
                  *(_DWORD *)&v77[2 * v32 + 2] = v31;
                }
                else
                {
                  i = v64;
                }
                if ( v69 <= v32 )
                {
                  if ( i == 0 )
                    break;
                  v69 = i;
                  v32 = 0;
                  i = 0;
                }
                v64 = i;
              }
            }
          }
          v22 = 0;
          v23 = 0;
          while ( v22 != v70 )
          {
            v67 = *(_DWORD *)&v77[2 * v22 + 2];
            v24 = (char *)&word_1CEE8A0[9 * v67];
            v71 = *((_WORD *)v24 + 2);
            if ( *((_WORD *)v24 + 1) != 0
              && hb_font_get_glyph(a2, *((unsigned __int16 *)v24 + 1), 0, &v75) != 0
              && hb_font_get_glyph(a2, v71, 0, &key) != 0 )
            {
              v51 = BYTE1(key);
              v52 = &v84[v23];
              v52[1] = key;
              v53 = v51;
              v54 = 2 * v23;
              *v52 = v53;
              v55 = v75;
              v91[v23] = 2;
              ++v78[v22];
              ++v23;
              v56 = &v85[v54];
              *v56 = HIBYTE(v55);
              v56[1] = v55;
            }
            v72 = word_1CEE8A0[9 * v67 + 4];
            if ( word_1CEE8A0[9 * v67 + 3] != 0
              && hb_font_get_glyph(a2, word_1CEE8A0[9 * v67 + 3], 0, &v75) != 0
              && hb_font_get_glyph(a2, v72, 0, &key) != 0 )
            {
              v45 = BYTE1(key);
              v46 = &v84[v23];
              v46[1] = key;
              v47 = v45;
              v48 = 2 * v23;
              *v46 = v47;
              v49 = v75;
              v91[v23] = 2;
              ++v78[v22];
              ++v23;
              v50 = &v85[v48];
              *v50 = HIBYTE(v49);
              v50[1] = v49;
            }
            v73 = word_1CEE8A0[9 * v67 + 6];
            if ( word_1CEE8A0[9 * v67 + 5] != 0
              && hb_font_get_glyph(a2, word_1CEE8A0[9 * v67 + 5], 0, &v75) != 0
              && hb_font_get_glyph(a2, v73, 0, &key) != 0 )
            {
              v39 = BYTE1(key);
              v40 = &v84[v23];
              v40[1] = key;
              v41 = v39;
              v42 = 2 * v23;
              *v40 = v41;
              v43 = v75;
              v91[v23] = 2;
              ++v78[v22];
              ++v23;
              v44 = &v85[v42];
              *v44 = HIBYTE(v43);
              v44[1] = v43;
            }
            v25 = word_1CEE8A0[9 * v67 + 7];
            v68 = word_1CEE8A0[9 * v67 + 8];
            if ( v25 != 0 && hb_font_get_glyph(a2, v25, 0, &v75) != 0 && hb_font_get_glyph(a2, v68, 0, &key) != 0 )
            {
              v33 = BYTE1(key);
              v34 = &v84[v23];
              v34[1] = key;
              v35 = v33;
              v36 = 2 * v23;
              *v34 = v35;
              v37 = v75;
              v91[v23] = 2;
              ++v78[v22];
              ++v23;
              v38 = &v85[v36];
              *v38 = HIBYTE(v37);
              v38[1] = v37;
            }
            ++v22;
          }
          v13 = nullptr;
          if ( v23 == 0 )
            goto LABEL_15;
          v79[1] = v77;
          v80[1] = v78;
          v81[0] = v23;
          v82[0] = v23;
          v81[1] = v84;
          v83[0] = v23;
          v82[1] = v91;
          v79[0] = v70;
          v83[1] = v85;
          v80[0] = v70;
          v87 = (char *)v92;
          v88 = (char *)&v104;
          v90 = 0;
          v89 = (char *)v92;
          v86 = 0;
          if ( (unsigned __int8)OT::Lookup::serialize((OT::Lookup *)v92, (OT::hb_serialize_context_t *)&v86, 4, 8u, 1) == 0 )
            goto LABEL_15;
          v26 = v89;
          BYTE2(v92[1]) = (unsigned __int16)((_WORD)v89 - (unsigned __int16)v92) >> 8;
          HIBYTE(v92[1]) = (_BYTE)v89 - (unsigned __int8)v92;
          if ( v89 < v87 || (unsigned int)v89 >= 0xFFFFFFFE )
            __assert2(
              "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
              458,
              "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::IntType<short unsigned int, 2u>]",
              "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
          if ( v90 != 0 || (v27 = v26 + 2 - v89) > v88 - v89 )
          {
            v90 = 1;
            goto LABEL_50;
          }
          memset(v89, 0, v26 + 2 - v89);
          v57 = v89 == nullptr;
          v89 += v27;
          if ( !v57
            && v26 != nullptr
            && (*v26 = 0,
                v26[1] = 1,
                (unsigned __int8)OT::LigatureSubstFormat1::serialize(v26, &v86, v79, v80, v70, v81, v82, v83) != 0) )
          {
            v13 = OT::hb_serialize_context_t::copy<OT::SubstLookup>((OT::hb_serialize_context_t *)&v86);
          }
          else
          {
LABEL_50:
            v13 = nullptr;
          }
LABEL_15:
          *(_DWORD *)&v74[4 * v66 + 28] = v13;
          if ( v13 != nullptr )
          {
            v14 = (hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *)&v74[12 * v66 + 48];
            *(_DWORD *)v14 = 0;
            *((_DWORD *)v14 + 1) = 0;
            *((_DWORD *)v14 + 2) = 0;
            OT::SubstLookup::add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,4u>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,0u>,hb_set_digest_lowest_bits_t<unsigned long,9u>>>>(
              v13,
              v14);
            ++v66;
          }
        }
      }
      else
      {
        *(_DWORD *)&v74[4 * v66 + 8] = 0;
      }
      if ( ++v65 == 5 )
      {
        v4 = v63;
        a3 = v62;
        *(_DWORD *)v74 = v66;
        v74[4] = 1;
        if ( v66 != 0 )
        {
          v15 = *(_DWORD *)(v63 + 36);
        }
        else
        {
          free(v74);
          v15 = *(_DWORD *)(v63 + 36);
          v74 = &unk_1CEDC00;
        }
        if ( v15 == 0 )
        {
          v5 = (unsigned int *)v74;
          goto LABEL_29;
        }
        if ( v74 != (_BYTE *)&unk_1CEDC00 )
        {
          v16 = v62;
          for ( j = 0; j < *(_DWORD *)v74; ++j )
          {
            v18 = *(void **)&v74[4 * j + 28];
            if ( v18 != nullptr && v74[4] != 0 )
            {
              v60 = j;
              v61 = v16;
              free(v18);
              v16 = v61;
              j = v60;
            }
          }
          v4 = v63;
          a3 = v16;
          free(v74);
        }
        goto LABEL_2;
      }
    }
  }
LABEL_3:
  v92[0] = 0;
  v92[1] = a2;
  v94 = a3;
  v96 = 1;
  v97 = 1;
  v98 = 0;
  v99 = 8;
  v6 = *(_DWORD *)(a3 + 48);
  v93 = *(_DWORD *)(a2 + 52);
  v95 = v6;
  v100 = 0;
  v101 = *(_DWORD *)(*(_DWORD *)(v93 + 72) + 12);
  LOWORD(v6) = *(unsigned __int8 *)(v101 + 5);
  v7 = *(unsigned __int8 *)(v101 + 4) << 8;
  v103 = 0;
  v102 = (_WORD)v6 + v7 != 0;
  v8 = *v5;
  if ( *v5 != 0 )
  {
    v9 = v5;
    v10 = 0;
    do
    {
      if ( v9[7] != 0 )
      {
        v58 = v9[7];
        v96 = v9[2];
        v59 = v5;
        sub_12CD790(
          (hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *)v92,
          v58,
          (hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *)&v5[3 * v10 + 12]);
        v5 = v59;
        v8 = *v59;
      }
      ++v10;
      ++v9;
    }
    while ( v10 < v8 );
  }
}


// ============================================================================
// Referencing Function: 0x12b76c0 .. 0x12b7953 (659 bytes)
// Symbol:               _ZN2OT6Lookup9serializeEPNS_22hb_serialize_context_tEjjj
// Demangled:            OT::Lookup::serialize(OT::hb_serialize_context_t *,unsigned int,unsigned int,unsigned int)
// ============================================================================
int __cdecl OT::Lookup::serialize(
        OT::Lookup *this,
        OT::hb_serialize_context_t *a2,
        __int16 a3,
        unsigned int a4,
        __int16 a5)
{
  OT::Lookup *s; // eax
  int v6; // ebp
  int v7; // eax
  char *v8; // ebp
  char *v9; // eax
  int v10; // eax
  int v11; // edx
  char *v12; // eax
  char *v13; // edx
  int v14; // eax
  int result; // eax
  char *v16; // eax
  int v17; // [esp+18h] [ebp-24h]
  int v18; // [esp+18h] [ebp-24h]
  char *v19; // [esp+1Ch] [ebp-20h]
  char *v20; // [esp+1Ch] [ebp-20h]

  if ( (unsigned int)this < *((_DWORD *)a2 + 1) )
  {
    v19 = (char *)this + 6;
  }
  else
  {
    s = *((OT::Lookup **)a2 + 3);
    v19 = (char *)this + 6;
    if ( this <= s && s <= (OT::Lookup *)((char *)this + 6) )
      goto LABEL_4;
  }
  __assert2(
    "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
    458,
    "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::Lookup]",
    "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
  s = *((OT::Lookup **)a2 + 3);
LABEL_4:
  if ( *((_BYTE *)a2 + 16) != 0 )
    goto LABEL_22;
  v6 = v19 - (char *)s;
  if ( v19 - (char *)s > *((_DWORD *)a2 + 2) - (int)s )
    goto LABEL_22;
  memset(s, 0, v19 - (char *)s);
  v7 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 3) = v7 + v6;
  if ( v7 == 0 || this == nullptr )
    return 0;
  v8 = (char *)this + 4;
  *((_BYTE *)this + 1) = a3;
  *(_BYTE *)this = HIBYTE(a3);
  *((_BYTE *)this + 3) = a4;
  *((_BYTE *)this + 2) = BYTE1(a4);
  if ( (unsigned int)this + 4 < *((_DWORD *)a2 + 1) || (v9 = *((char **)a2 + 3), v8 > v9) || v9 > v19 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::ArrayOf<OT::Offset<OT::IntType<short unsigned int, 2u> > >]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v9 = *((char **)a2 + 3);
  }
  if ( *((_BYTE *)a2 + 16) != 0 || v19 - v9 > *((_DWORD *)a2 + 2) - (int)v9 )
  {
LABEL_22:
    *((_BYTE *)a2 + 16) = 1;
    return 0;
  }
  v17 = v19 - v9;
  memset(v9, 0, v19 - v9);
  v10 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 3) = v10 + v17;
  if ( v10 == 0 )
    return 0;
  *((_BYTE *)this + 5) = a5;
  *((_BYTE *)this + 4) = HIBYTE(a5);
  v11 = 2 * (unsigned __int16)((HIBYTE(a5) << 8) + (unsigned __int8)a5) + 2;
  if ( (unsigned int)v8 <= *((_DWORD *)a2 + 1) )
  {
    v20 = &v8[v11];
LABEL_28:
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      467,
      "Type* OT::hb_serialize_context_t::extend(Type&) [with Type = OT::ArrayOf<OT::Offset<OT::IntType<short unsigned int, 2u> > >]",
      "this->start < (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v12 = *((char **)a2 + 3);
    goto LABEL_17;
  }
  v12 = *((char **)a2 + 3);
  v13 = &v8[v11];
  v20 = v13;
  if ( v8 > v12 || v12 > v13 )
    goto LABEL_28;
LABEL_17:
  if ( *((_BYTE *)a2 + 16) != 0 || v20 - v12 > *((_DWORD *)a2 + 2) - (int)v12 )
    goto LABEL_22;
  v18 = v20 - v12;
  memset(v12, 0, v20 - v12);
  v14 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 3) = v14 + v18;
  if ( v14 == 0 )
    return 0;
  result = 1;
  if ( (*((_BYTE *)this + 3) & 0x10) != 0 )
  {
    v16 = &v8[2 * (unsigned __int16)(*((unsigned __int8 *)this + 5) + (*((unsigned __int8 *)this + 4) << 8)) + 2];
    *v16 = HIBYTE(a4);
    v16[1] = BYTE2(a4);
    return 1;
  }
  return result;
}


// ============================================================================
// Referencing Function: 0x12b7960 .. 0x12b7d60 (1024 bytes)
// Symbol:               _ZN2OT15CoverageFormat29serializeEPNS_22hb_serialize_context_tERNS_8SupplierINS_7IntTypeItLj2EEEEEj
// Demangled:            OT::CoverageFormat2::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12b7d60 .. 0x12b811a (954 bytes)
// Symbol:               _ZN2OT8Coverage9serializeEPNS_22hb_serialize_context_tERNS_8SupplierINS_7IntTypeItLj2EEEEEj
// Demangled:            OT::Coverage::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12b8120 .. 0x12b87d6 (1718 bytes)
// Symbol:               _ZN2OT18SingleSubstFormat29serializeEPNS_22hb_serialize_context_tERNS_8SupplierINS_7IntTypeItLj2EEEEES7_j
// Demangled:            OT::SingleSubstFormat2::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,OT::Supplier<OT::IntType<unsigned short,2u>> &,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12b87e0 .. 0x12b8aca (746 bytes)
// Symbol:               _ZN2OT11SingleSubst9serializeEPNS_22hb_serialize_context_tERNS_8SupplierINS_7IntTypeItLj2EEEEES7_j
// Demangled:            OT::SingleSubst::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,OT::Supplier<OT::IntType<unsigned short,2u>> &,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12b8ad0 .. 0x12b8df3 (803 bytes)
// Symbol:               _ZN2OT8Ligature9serializeEPNS_22hb_serialize_context_tENS_7IntTypeItLj2EEERNS_8SupplierIS4_EEj
// Demangled:            OT::Ligature::serialize(OT::hb_serialize_context_t *,OT::IntType<unsigned short,2u>,OT::Supplier<OT::IntType<unsigned short,2u>> &,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12b8e00 .. 0x12b915f (863 bytes)
// Symbol:               _ZN2OT11LigatureSet9serializeEPNS_22hb_serialize_context_tERNS_8SupplierINS_7IntTypeItLj2EEEEERNS3_IjEEjS7_
// Demangled:            OT::LigatureSet::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,OT::Supplier<unsigned int> &,unsigned int,OT::Supplier<OT::IntType<unsigned short,2u>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12b9160 .. 0x12b982d (1741 bytes)
// Symbol:               _ZN2OT20LigatureSubstFormat19serializeEPNS_22hb_serialize_context_tERNS_8SupplierINS_7IntTypeItLj2EEEEERNS3_IjEEjS7_S9_S7_
// Demangled:            OT::LigatureSubstFormat1::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,OT::Supplier<unsigned int> &,unsigned int,OT::Supplier<OT::IntType<unsigned short,2u>> &,OT::Supplier<unsigned int> &,OT::Supplier<OT::IntType<unsigned short,2u>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12b9830 .. 0x12b98c4 (148 bytes)
// Symbol:               _ZN2OT22hb_serialize_context_t4copyINS_11SubstLookupEEEPT_v
// Demangled:            OT::SubstLookup * OT::hb_serialize_context_t::copy<OT::SubstLookup>(void)
// ============================================================================

