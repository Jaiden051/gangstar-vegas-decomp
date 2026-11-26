// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd883c):
//   F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-layout-gsubgpos-private.hh
// Referenced by 3 function(s) in libGangstar4.so

// ============================================================================
// Referencing Function: 0x12cbde0 .. 0x12cbf72 (402 bytes)
// Symbol:               sub_12CBDE0
// Demangled:            sub_12CBDE0
// ============================================================================
int __usercall sub_12CBDE0@<eax>(unsigned int *a1@<eax>)
{
  unsigned int v2; // ecx
  unsigned int v3; // edi
  int v4; // ebp
  unsigned int v5; // eax
  char v6; // al
  bool v7; // al
  char v8; // dl
  char v9; // cl
  char v10; // cl
  int (__cdecl *v12)(_DWORD, unsigned int, unsigned int); // ecx
  char v13; // al
  int v14; // [esp+14h] [ebp-28h]
  unsigned int v15; // [esp+1Ch] [ebp-20h]
  char v16; // [esp+1Ch] [ebp-20h]

  v2 = a1[9];
  if ( v2 == 0 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-layout-gsubgpos-private.hh",
      479,
      "bool OT::hb_apply_context_t::skipping_backward_iterator_t::prev()",
      "num_items > 0");
    v2 = a1[9];
  }
  while ( 2 )
  {
    v3 = *a1;
    v4 = 20 * *a1 - 20;
    do
    {
      if ( v3 < v2 )
        return 0;
      v5 = a1[1];
      *a1 = --v3;
      v15 = v2;
      v14 = v4 + *(_DWORD *)(*(_DWORD *)(v5 + 12) + 104);
      v4 -= 20;
      v6 = OT::hb_apply_context_t::check_glyph_property(v5, v14, a1[2]);
      v2 = v15;
    }
    while ( v6 == 0 );
    v7 = true;
    v8 = 1;
    v9 = *(_BYTE *)(v14 + 16);
    if ( v9 < 0 && (*((_BYTE *)a1 + 12) != 0 || (v9 & 0x40) == 0) )
    {
      if ( *((_BYTE *)a1 + 13) != 0 || (v7 = true, v8 = 1, (*(_BYTE *)(v14 + 16) & 0x20) == 0) )
      {
        v7 = (*(_WORD *)(v14 + 12) & 0x20) != 0;
        v8 = v7;
      }
    }
    if ( (a1[4] & *(_DWORD *)(v14 + 4)) == 0 || (v10 = *((_BYTE *)a1 + 20)) != 0 && v10 != *(_BYTE *)(v14 + 15) )
    {
LABEL_10:
      if ( v8 == 0 )
      {
        v2 = a1[9];
        continue;
      }
      return 0;
    }
    break;
  }
  v12 = (int (__cdecl *)(_DWORD, unsigned int, unsigned int))a1[6];
  if ( v12 != nullptr )
  {
    v16 = v8;
    v13 = v12(*(_DWORD *)v14, a1[8], a1[7]);
    v8 = v16;
    if ( v13 != 1 )
      goto LABEL_10;
    --a1[9];
    a1[8] += 2;
    return 1;
  }
  else
  {
    if ( !v7 )
      goto LABEL_10;
    --a1[9];
    a1[8] += 2;
    return 1;
  }
}


// ============================================================================
// Referencing Function: 0x12cbf80 .. 0x12cc167 (487 bytes)
// Symbol:               sub_12CBF80
// Demangled:            sub_12CBF80
// ============================================================================
int __usercall sub_12CBF80@<eax>(
        int a1@<eax>,
        unsigned int a2@<edx>,
        int a3,
        int (__cdecl *a4)(_DWORD, int, int),
        int a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int result; // eax
  int v9; // edx
  int v10; // ebp
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // ebp
  char v14; // si
  bool v15; // al
  char v16; // al
  int v17; // [esp+18h] [ebp-34h]
  int v18; // [esp+18h] [ebp-34h]
  int v19; // [esp+18h] [ebp-34h]
  unsigned int v20; // [esp+1Ch] [ebp-30h]
  char v21; // [esp+23h] [ebp-29h]
  int v22; // [esp+24h] [ebp-28h]

  v6 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)(v6 + 81) == 0 )
  {
    v7 = *(_DWORD *)(v6 + 84);
    v22 = *(_DWORD *)(a1 + 36);
    goto LABEL_27;
  }
  v7 = *(_DWORD *)(v6 + 92);
  v22 = *(_DWORD *)(a1 + 36);
  if ( v7 == *(_DWORD *)(v6 + 84) )
  {
LABEL_27:
    v21 = *(_BYTE *)(*(_DWORD *)(v6 + 100) + 20 * v7 + 15);
    goto LABEL_4;
  }
  v21 = 0;
LABEL_4:
  result = 0;
  if ( a2 <= v7 )
  {
    result = 1;
    if ( a2 != 0 )
    {
      v20 = a2;
      v9 = a1;
      while ( 1 )
      {
        v10 = v9;
        v11 = 20 * v7 - 20;
        do
        {
          if ( v20 > v7 )
            return 0;
          --v7;
          v17 = v11 + *(_DWORD *)(*(_DWORD *)(v10 + 12) + 104);
          v11 -= 20;
        }
        while ( (unsigned __int8)OT::hb_apply_context_t::check_glyph_property(v10, v17, v22) == 0 );
        v12 = v10;
        v13 = (_DWORD *)v17;
        v14 = 1;
        v9 = v12;
        v15 = true;
        if ( *(char *)(v17 + 16) < 0 )
        {
          v15 = (*(_WORD *)(v17 + 12) & 0x20) != 0;
          v14 = v15;
        }
        if ( *(_DWORD *)(v17 + 4) == 0 || v21 != 0 && v21 != *(_BYTE *)(v17 + 15) )
        {
LABEL_16:
          if ( v14 == 0 )
            continue;
          return 0;
        }
        if ( a4 != nullptr )
        {
          v18 = v9;
          v16 = a4(*v13, a3, a5);
          v9 = v18;
          if ( v16 != 1 )
            goto LABEL_16;
          a3 += 2;
          if ( v20 == 1 )
            return 1;
        }
        else
        {
          if ( !v15 )
            goto LABEL_16;
          a3 += 2;
          if ( v20 == 1 )
            return 1;
        }
        if ( --v20 == 0 )
        {
          v19 = v9;
          __assert2(
            "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-layout-gsubgpos-private.hh",
            479,
            "bool OT::hb_apply_context_t::skipping_backward_iterator_t::prev()",
            "num_items > 0");
          v9 = v19;
        }
      }
    }
  }
  return result;
}


// ============================================================================
// Referencing Function: 0x12d44b0 .. 0x12d46ba (522 bytes)
// Symbol:               _ZN2OT18hb_apply_context_t27skipping_forward_iterator_t4nextEv
// Demangled:            OT::hb_apply_context_t::skipping_forward_iterator_t::next(void)
// ============================================================================

