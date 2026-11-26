#include "gameswf_CustomArraySorter.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_CustomArraySorter.cpp
// Library: gameswf | Module: gameswf_CustomArraySorter
// Binary Address Span: 0x11219a0 .. 0x11219a0 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x11219a0 (size: 560 bytes)
// Symbol:    _ZN7gameswf17CustomArraySorterclERKNS_7ASValueES3_
// Demangled: gameswf::CustomArraySorter::operator()(gameswf::ASValue const&,gameswf::ASValue const&)
// ============================================================================
int gameswf::CustomArraySorter::opCall(
        const gameswf::ASValue::Self **a1,
        gameswf::ASValue::Self *a2,
        gameswf::ASValue::Self *a3)
{
  const gameswf::ASValue::Self *v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  gameswf::ASValue::Self *v8;
  const gameswf::ASValue::Self *v9;
  int v10;
  int v11;
  int v12;
  gameswf::Self *v13;
  gameswf::ASValue::Self *v14;
  int v15;
  int v16;
  int v18;
  int v19;
  uint8_t v20[40];

  v3 = a1[1];
  v4 = *((uint32_t *)v3 + 1);
  v5 = *((uint32_t *)v3 + 2);
  v6 = v4 + 1;
  if ( v4 + 1 <= v5 || *((uint32_t *)v3 + 3) != 0 )
  {
    v7 = *(gameswf::Self **)v3;
  }
  else
  {
    v19 = v6 + (v6 >> 1);
    *((uint32_t *)v3 + 2) = v19;
    if ( v19 != 0 )
    {
      if ( *(uint32_t *)v3 != 0 )
        v7 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v3, 12 * v19, 12 * v5);
      else
        v7 = (gameswf::Self *)gameswf::malloc_internal(12 * v19);
      *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v7);
      v4 = *((uint32_t *)v3 + 1);
    }
    else
    {
      if ( *(uint32_t *)v3 != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)v3);
        v4 = *((uint32_t *)v3 + 1);
      }
      *(uint32_t *)v3 = 0;
      v7 = nullptr;
    }
  }
  v8 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v7 + 12 * v4));
  if ( v8 != nullptr )
  {
    *(uint8_t *)v8 = 0;
    *((uint8_t *)v8 + 1) = 0;
    gameswf::ASValue::opAssign(v8, a2);
  }
  *((uint32_t *)v3 + 1) = v6;
  v9 = a1[1];
  v10 = *((uint32_t *)v9 + 1);
  v11 = *((uint32_t *)v9 + 2);
  v12 = v10 + 1;
  if ( v10 + 1 <= v11 || *((uint32_t *)v9 + 3) != 0 )
  {
    v13 = *(gameswf::Self **)v9;
  }
  else
  {
    v18 = v12 + (v12 >> 1);
    *((uint32_t *)v9 + 2) = v18;
    if ( v18 != 0 )
    {
      if ( *(uint32_t *)v9 != 0 )
        v13 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v9, 12 * v18, 12 * v11);
      else
        v13 = (gameswf::Self *)gameswf::malloc_internal(12 * v18);
      *(uint32_t *)v9 = (uint32_t)(uintptr_t)(v13);
      v10 = *((uint32_t *)v9 + 1);
    }
    else
    {
      if ( *(uint32_t *)v9 != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)v9);
        v10 = *((uint32_t *)v9 + 1);
      }
      *(uint32_t *)v9 = 0;
      v13 = nullptr;
    }
  }
  v14 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v13 + 12 * v10));
  if ( v14 != nullptr )
  {
    *(uint8_t *)v14 = 0;
    *((uint8_t *)v14 + 1) = 0;
    gameswf::ASValue::opAssign(v14, a3);
  }
  *((uint32_t *)v9 + 1) = v12;
  gameswf::call_method((gameswf::Self *)v20, *a1, a1[1], *a1, 2, *((uint32_t *)a1[1] + 1) - 1, "???");
  gameswf::array_gameswf_ASValue_3ea8a1::resize(a1[1], *((uint32_t *)a1[1] + 1) - 2);
  v15 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)v20);
  LOBYTE(v15) = v15 == 1;
  v16 = v15;
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
  return v16;
}

