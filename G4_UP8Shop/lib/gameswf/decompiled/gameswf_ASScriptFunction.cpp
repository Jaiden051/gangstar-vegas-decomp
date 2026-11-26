#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASScriptFunction.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_ASScriptFunction.cpp
// Library: gameswf | Module: gameswf_ASScriptFunction
// Binary Address Span: 0x109b290 .. 0x109c510 (6 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x109b290 (size: 9 bytes)
// Symbol:    _ZN7gameswf16ASScriptFunctionclERKNS_12FunctionCallE
// Demangled: gameswf::ASScriptFunction::operator()(gameswf::FunctionCall const&)
// ============================================================================
void gameswf::ASScriptFunction::opCall()
{
  ;
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASScriptFunction::Destroy  (binary VA: 0x109b720)
// Original: gameswf::ASScriptFunction::~ASScriptFunction
// ----------------------------------------------------------------------------
void gameswf::ASScriptFunction::Destroy(gameswf::ASScriptFunction::Self *self)
{
  gameswf::ASScriptFunction::Self *v1;
  gameswf::Self *v2;
  bool v3;
  int v4;
  gameswf::ASScriptFunction::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  gameswf::Self *v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  gameswf::Self *v18;
  gameswf::MemBuf::Self *v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  gameswf::Self *v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  gameswf::ASScriptFunction::Self *v29;
  gameswf::ASObject::Self *v30;

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E5A8);
  v2 = *((gameswf::Self **)self + 25);
  if ( v2 != nullptr )
  {
    v3 = (*(uint16_t *)v2)-- == 1;
    if ( v3 )
      gameswf::free_internal(v2);
  }
  v4 = *((uint32_t *)self + 20);
  if ( v4 <= 0 )
  {
    if ( v4 < 0 )
    {
      v25 = 24 * v4;
      do
      {
        v26 = *((uint32_t *)self + 19) + v25;
        if ( v26 != 0 )
        {
          memset((void *)v26, 0, 0x18u);
          *(uint8_t *)(v26 + 4) = 1;
          *(uint32_t *)(v26 + 20) = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x7FFFFF));
          *(uint8_t *)(v26 + 23) = 1;
          *(uint8_t *)(v26 + 22) = (unsigned int)(uintptr_t)((uint8_t *)(uintptr_t)0x7FFFFF) >> 16;
        }
        v25 += 24;
        ++v4;
      }
      while ( v4 != 0 );
      v1 = self;
    }
  }
  else
  {
    v5 = self;
    v6 = 0;
    v7 = *((uint32_t *)self + 20);
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = *((uint32_t *)v5 + 19) + v8;
        if ( *(uint8_t *)(v9 + 4) == 0xFF && (*(uint8_t *)(v9 + 23) & 1) != 0 )
          break;
        ++v6;
        v8 += 24;
        if ( v6 == v7 )
          goto LABEL_10;
      }
      ++v6;
      v29 = v5;
      v8 += 24;
      gameswf::free_internal(*(gameswf::Self **)(v9 + 16));
      v5 = v29;
    }
    while ( v6 != v7 );
LABEL_10:
    v1 = v5;
  }
  v10 = *((uint32_t *)v1 + 22);
  *((uint32_t *)v1 + 20) = 0;
  if ( v10 == 0 )
  {
    v11 = *((gameswf::Self **)v1 + 19);
    *((uint32_t *)v1 + 21) = 0;
    if ( v11 != nullptr )
      gameswf::free_internal(v11);
    *((uint32_t *)v1 + 19) = 0;
  }
  v12 = *((uint32_t *)v1 + 14);
  v13 = (uint32_t *)((char *)v1 + 52);
  if ( v12 <= 0 )
  {
    if ( v12 < 0 )
    {
      v27 = 8 * v12;
      do
      {
        v28 = (uint32_t *)(*v13 + v27);
        if ( v28 != nullptr )
        {
          *v28 = 0;
          v28[1] = 0;
        }
        v27 += 8;
        ++v12;
      }
      while ( v12 != 0 );
    }
  }
  else
  {
    v30 = (gameswf::ASObject::Self *)(v1);
    v14 = 0;
    v15 = *((uint32_t *)v1 + 14);
    v16 = v13;
    do
    {
      if ( *(uint32_t *)(*v16 + 8 * v14) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*v16 + 8 * v14));
      ++v14;
    }
    while ( v14 != v15 );
    v1 = (gameswf::ASScriptFunction::Self *)(v30);
  }
  v17 = *((uint32_t *)v1 + 16);
  *((uint32_t *)v1 + 14) = 0;
  if ( v17 == 0 )
  {
    v18 = *((gameswf::Self **)v1 + 13);
    *((uint32_t *)v1 + 15) = 0;
    if ( v18 != nullptr )
      gameswf::free_internal(v18);
    *((uint32_t *)v1 + 13) = 0;
  }
  v19 = *((gameswf::MemBuf::Self **)v1 + 10);
  if ( v19 != nullptr )
  {
    v3 = (*((uint32_t *)v19 + 4))-- == 1;
    if ( v3 )
    {
      v20 = *((uint32_t *)v19 + 6);
      if ( v20 < 0 )
      {
        v21 = 4 * v20;
        do
        {
          v22 = (uint32_t *)(*((uint32_t *)v19 + 5) + v21);
          if ( v22 != nullptr )
            *v22 = 0;
          v21 += 4;
          ++v20;
        }
        while ( v20 != 0 );
      }
      v23 = *((uint32_t *)v19 + 8);
      *((uint32_t *)v19 + 6) = 0;
      if ( v23 == 0 )
      {
        v24 = *((gameswf::Self **)v19 + 5);
        *((uint32_t *)v19 + 7) = 0;
        if ( v24 != nullptr )
          gameswf::free_internal(v24);
        *((uint32_t *)v19 + 5) = 0;
      }
      gameswf::MemBuf::Destroy(v19);
      gameswf::free_internal(v19);
    }
  }
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASScriptFunction::Destroy_ea109b990  (binary VA: 0x109b990)
// Original: gameswf::ASScriptFunction::~ASScriptFunction
// ----------------------------------------------------------------------------
void gameswf::ASScriptFunction::Destroy_ea109b990(gameswf::ASScriptFunction::Self *self)
{
  gameswf::ASScriptFunction::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASScriptFunction::Construct  (binary VA: 0x109b9e0)
// Original: gameswf::ASScriptFunction::ASScriptFunction
// ----------------------------------------------------------------------------
gameswf::MemBuf::Self * gameswf::ASScriptFunction::Construct(gameswf::ASObject::Self *a1, gameswf::Player::Self *a2, gameswf::MemBuf::Self **a3, int a4, uint32_t *a5)
{
  gameswf::ASObject::Self *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int i;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  gameswf::RefCounted::Self *v17;
  gameswf::RefCounted::Self *v18;
  int v20;
  gameswf::Self *v21;
  int v22;
  int v23;
  gameswf::ASObject::Self *v24;
  int v25;

  v5 = a1;
  gameswf::ASObject::ASObject(a1, a2);
  v6 = (uint32_t *)((char *)a1 + 52);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208E5A8);
  gameswf::ActionBuffer::Construct((gameswf::ASObject::Self *)((char *)a1 + 40));
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 14) = 0;
  *((uint32_t *)a1 + 15) = 0;
  *((uint32_t *)a1 + 16) = 0;
  v7 = a5[1];
  if ( v7 >= 0 )
  {
    if ( v7 == 0 )
    {
LABEL_24:
      *((uint32_t *)v5 + 14) = v7;
      goto LABEL_22;
    }
  }
  else
  {
    v25 = a5[1];
    v8 = 0;
    v9 = 8 * v7;
    v10 = v25;
    while ( 1 )
    {
      if ( *(uint32_t *)(v8 + v9) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + v9));
      v9 += 8;
      if ( ++v10 == 0 )
        break;
      v8 = *((uint32_t *)a1 + 13);
    }
    v5 = a1;
    v6 = (uint32_t *)((char *)a1 + 52);
    v7 = v25;
  }
  v11 = *((uint32_t *)v5 + 15);
  if ( v7 > v11 && *((uint32_t *)v5 + 16) == 0 )
  {
    v20 = v7 + (v7 >> 1);
    *((uint32_t *)v5 + 15) = v20;
    if ( v20 != 0 )
    {
      v21 = *((gameswf::Self **)v5 + 13);
      if ( v21 != nullptr )
        *((uint32_t *)v5 + 13) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v21, 8 * v20, 8 * v11));
      else
        *((uint32_t *)v5 + 13) = gameswf::malloc_internal(8 * v20);
    }
    else
    {
      if ( *((uint32_t *)v5 + 13) != 0 )
        gameswf::free_internal(*((gameswf::Self **)v5 + 13));
      *((uint32_t *)v5 + 13) = 0;
    }
  }
  if ( v7 <= 0 )
    goto LABEL_24;
  for ( i = 0; i != v7; ++i )
  {
    v13 = (uint32_t *)(*v6 + 8 * i);
    if ( v13 != nullptr )
    {
      *v13 = 0;
      v13[1] = 0;
    }
  }
  *((uint32_t *)v5 + 14) = i;
  v14 = 0;
  v24 = v5;
  do
  {
    v15 = *a5 + 8 * v14;
    v16 = *((uint32_t *)v24 + 13) + 8 * v14;
    v17 = *(gameswf::RefCounted::Self **)v15;
    v18 = *(gameswf::RefCounted::Self **)v16;
    if ( *(uint32_t *)v15 != *(uint32_t *)v16 )
    {
      if ( v18 != nullptr )
      {
        v22 = *a5 + 8 * v14;
        gameswf::RefCounted::dropRef(v18);
        v15 = v22;
      }
      *(uint32_t *)v16 = (uint32_t)(uintptr_t)(v17);
      if ( v17 != nullptr )
      {
        v23 = v15;
        gameswf::RefCounted::addRef(v17);
        v15 = v23;
      }
    }
    ++v14;
    *(uint32_t *)(v16 + 4) = *(uint32_t *)(v15 + 4);
  }
  while ( v14 < *((uint32_t *)v24 + 14) );
  v5 = v24;
LABEL_22:
  *((uint32_t *)v5 + 18) = 0;
  *((uint32_t *)v5 + 17) = a4;
  *((uint32_t *)v5 + 19) = 0;
  *((uint32_t *)v5 + 20) = 0;
  *((uint32_t *)v5 + 21) = 0;
  *((uint32_t *)v5 + 22) = 0;
  *((uint8_t *)v5 + 92) = 0;
  *((uint8_t *)v5 + 93) = 0;
  *((uint8_t *)v5 + 94) = -1;
  *((uint16_t *)v5 + 48) = 0;
  *((uint32_t *)v5 + 25) = 0;
  *((uint32_t *)v5 + 26) = 0;
  return gameswf::ActionBuffer::opAssign((gameswf::MemBuf::Self **)a1 + 10, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASScriptFunction::is  (binary VA: 0x109c4d0)
// Original: gameswf::ASScriptFunction::is
// ----------------------------------------------------------------------------
bool gameswf::ASScriptFunction::is(gameswf::ASScriptFunction::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 7 && a2 != 5 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASScriptFunction::getMemberByName  (binary VA: 0x109c510)
// Original: gameswf::ASScriptFunction::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASScriptFunction::getMemberByName(gameswf::ASScriptFunction::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  char builtin;
  int v4;

  builtin = gameswf::get_builtin(6, (int)(uintptr_t)(a2), a3);
  v4 = 1;
  if ( builtin == 0 )
    return gameswf::ASObject::getMemberByName(self, a2, a3);
  return v4;
}


