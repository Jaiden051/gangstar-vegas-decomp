// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd8740):
//   F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-map-private.hh
// Referenced by 1 function(s) in libGangstar4.so

// ============================================================================
// Referencing Function: 0x12bbf40 .. 0x12bc473 (1331 bytes)
// Symbol:               sub_12BBF40
// Demangled:            sub_12BBF40
// ============================================================================
int **__cdecl sub_12BBF40(int a1)
{
  int **v1; // eax
  int **v2; // ebp
  int *v3; // edi
  int v4; // eax
  bool v5; // al
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // edx
  unsigned int v9; // esi
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // edx
  unsigned int v15; // esi
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // edx
  unsigned int v21; // esi
  int v22; // edi
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // edx
  unsigned int v27; // esi
  int v28; // edi
  int v29; // ecx
  int v30; // eax
  int i; // esi
  _DWORD *v32; // eax
  const void *size; // [esp+4h] [ebp-58h]
  const void *sizea; // [esp+4h] [ebp-58h]
  const void *sizeb; // [esp+4h] [ebp-58h]
  const void *sizec; // [esp+4h] [ebp-58h]
  size_t v38; // [esp+8h] [ebp-54h]
  size_t v39; // [esp+8h] [ebp-54h]
  size_t v40; // [esp+8h] [ebp-54h]
  size_t v41; // [esp+8h] [ebp-54h]
  _DWORD *v42; // [esp+24h] [ebp-38h]
  _DWORD *v43; // [esp+24h] [ebp-38h]
  _DWORD *v44; // [esp+24h] [ebp-38h]
  _DWORD *v45; // [esp+24h] [ebp-38h]
  bool v46; // [esp+28h] [ebp-34h]
  unsigned int v47; // [esp+28h] [ebp-34h]
  unsigned int v48; // [esp+2Ch] [ebp-30h]
  unsigned int v49; // [esp+2Ch] [ebp-30h]
  unsigned int v50; // [esp+2Ch] [ebp-30h]
  _DWORD key[8]; // [esp+3Ch] [ebp-20h] BYREF

  v1 = (int **)calloc(1u, 0x90u);
  v2 = v1;
  if ( v1 != nullptr )
  {
    v3 = dword_1CEEEE0;
    *v1 = dword_1CEEEE0;
    v4 = 1;
    while ( dword_1CEEEE0[8 * v4] != *(_DWORD *)(a1 + 4) )
    {
      if ( ++v4 == 13 )
        goto LABEL_5;
    }
    v3 = &dword_1CEEEE0[8 * v4];
    *v2 = v3;
LABEL_5:
    v5 = false;
    v46 = true;
    if ( *((_BYTE *)v3 + 4) != 0 )
    {
      v6 = *(unsigned __int8 *)(a1 + 24);
      v46 = v6 == 50;
      v5 = v6 != 50;
    }
    *((_BYTE *)v2 + 4) = v5;
    v2[2] = (int *)-1;
    *((_BYTE *)v2 + 20) = v46;
    v38 = *(_DWORD *)(a1 + 40);
    size = *(const void **)(a1 + 48);
    key[0] = 1919969382;
    v7 = bsearch(key, size, v38, 0x24u, (__compar_fn_t)hb_ot_map_t::feature_map_t::cmp);
    v8 = (_DWORD *)a1;
    if ( v7 == nullptr || (v9 = v7[3]) == -1 )
    {
      v2[3] = nullptr;
      v2[4] = nullptr;
    }
    else
    {
      v48 = *(_DWORD *)(a1 + 876);
      if ( v9 > v48 )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-map-private.hh",
          113,
          "void hb_ot_map_t::get_stage_lookups(unsigned int, unsigned int, const hb_ot_map_t::lookup_map_t**, unsigned int*) const",
          "stage <= stages[table_index].len");
        v8 = (_DWORD *)a1;
        v48 = *(_DWORD *)(a1 + 876);
      }
      v10 = 0;
      v11 = 0;
      if ( v9 != 0 )
      {
        v11 = *(_DWORD *)(v8[221] + 8 * v9 - 8);
        v10 = 8 * v11;
      }
      if ( v9 >= v48 )
        v12 = v8[85];
      else
        v12 = *(_DWORD *)(v8[221] + 8 * v9);
      v2[3] = (int *)(v8[87] + v10);
      v2[4] = (int *)(v12 - v11);
    }
    *((_BYTE *)v2 + 32) = v46;
    v39 = v8[10];
    sizea = (const void *)v8[12];
    v42 = v8;
    key[0] = 1886545254;
    v13 = bsearch(key, sizea, v39, 0x24u, (__compar_fn_t)hb_ot_map_t::feature_map_t::cmp);
    v14 = v42;
    if ( v13 == nullptr || (v15 = v13[3]) == -1 )
    {
      v2[6] = nullptr;
      v2[7] = nullptr;
    }
    else
    {
      v49 = v42[219];
      if ( v15 > v49 )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-map-private.hh",
          113,
          "void hb_ot_map_t::get_stage_lookups(unsigned int, unsigned int, const hb_ot_map_t::lookup_map_t**, unsigned int*) const",
          "stage <= stages[table_index].len");
        v14 = v42;
        v49 = v42[219];
      }
      v16 = 0;
      v17 = 0;
      if ( v15 != 0 )
      {
        v17 = *(_DWORD *)(v14[221] + 8 * v15 - 8);
        v16 = 8 * v17;
      }
      if ( v49 <= v15 )
        v18 = v14[85];
      else
        v18 = *(_DWORD *)(v14[221] + 8 * v15);
      v2[6] = (int *)(v14[87] + v16);
      v2[7] = (int *)(v18 - v17);
    }
    *((_BYTE *)v2 + 44) = v46;
    v40 = v14[10];
    sizeb = (const void *)v14[12];
    v43 = v14;
    key[0] = 1651275622;
    v19 = bsearch(key, sizeb, v40, 0x24u, (__compar_fn_t)hb_ot_map_t::feature_map_t::cmp);
    v20 = v43;
    if ( v19 == nullptr || (v21 = v19[3]) == -1 )
    {
      v2[9] = nullptr;
      v2[10] = nullptr;
    }
    else
    {
      v50 = v43[219];
      if ( v21 > v50 )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-map-private.hh",
          113,
          "void hb_ot_map_t::get_stage_lookups(unsigned int, unsigned int, const hb_ot_map_t::lookup_map_t**, unsigned int*) const",
          "stage <= stages[table_index].len");
        v20 = v43;
        v50 = v43[219];
      }
      v22 = 0;
      v23 = 0;
      if ( v21 != 0 )
      {
        v23 = *(_DWORD *)(v20[221] + 8 * v21 - 8);
        v22 = 8 * v23;
      }
      if ( v50 <= v21 )
        v24 = v20[85];
      else
        v24 = *(_DWORD *)(v20[221] + 8 * v21);
      v2[9] = (int *)(v20[87] + v22);
      v2[10] = (int *)(v24 - v23);
    }
    *((_BYTE *)v2 + 56) = v46;
    v41 = v20[10];
    sizec = (const void *)v20[12];
    v44 = v20;
    key[0] = 1886614630;
    v25 = bsearch(key, sizec, v41, 0x24u, (__compar_fn_t)hb_ot_map_t::feature_map_t::cmp);
    v26 = v44;
    if ( v25 == nullptr || (v27 = v25[3]) == -1 )
    {
      v2[12] = nullptr;
      v2[13] = nullptr;
    }
    else
    {
      v47 = v44[219];
      if ( v27 > v47 )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-map-private.hh",
          113,
          "void hb_ot_map_t::get_stage_lookups(unsigned int, unsigned int, const hb_ot_map_t::lookup_map_t**, unsigned int*) const",
          "stage <= stages[table_index].len");
        v26 = v44;
        v47 = v44[219];
      }
      v28 = 0;
      v29 = 0;
      if ( v27 != 0 )
      {
        v29 = *(_DWORD *)(v26[221] + 8 * v27 - 8);
        v28 = 8 * v29;
      }
      if ( v47 <= v27 )
        v30 = v26[85];
      else
        v30 = *(_DWORD *)(v26[221] + 8 * v27);
      v2[12] = (int *)(v26[87] + v28);
      v2[13] = (int *)(v30 - v29);
    }
    for ( i = 0; i != 21; ++i )
    {
      while ( 1 )
      {
        if ( (byte_1CEF084[8 * i] & 1) == 0 )
        {
          key[0] = dword_1CEF080[2 * i];
          v45 = v26;
          v32 = bsearch(key, (const void *)v26[12], v26[10], 0x24u, (__compar_fn_t)hb_ot_map_t::feature_map_t::cmp);
          v26 = v45;
          if ( v32 != nullptr )
            break;
        }
        v2[i++ + 15] = nullptr;
        if ( i == 21 )
          return v2;
      }
      v2[i + 15] = (int *)v32[7];
    }
  }
  return v2;
}


