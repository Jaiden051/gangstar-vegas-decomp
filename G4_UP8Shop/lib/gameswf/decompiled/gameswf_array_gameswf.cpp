#include "Core/Utils/DecompTypes.h"
#include "gameswf_array_gameswf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_StringI_cce660::Destroy  (binary VA: 0x106dcb0)
// Original: gameswf::array<gameswf::StringI>::~array
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_StringI_cce660::Destroy(gameswf::array<gameswf::StringI::Self> *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = *((uint32_t *)self + 1);
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v10 = 20 * v1;
      do
      {
        v8 = *(uint32_t *)self + v10;
        if ( v8 != 0 )
        {
          v9 = *(uint32_t *)(v8 + 16);
          *(uint8_t *)v8 = 1;
          v9 |= 0x7FFFFFu;
          *(uint8_t *)(v8 + 1) = 0;
          *(uint32_t *)(v8 + 16) = v9;
          *(uint8_t *)(v8 + 18) = BYTE2(v9) & 0x7F;
          *(uint8_t *)(v8 + 19) = HIBYTE(v9) | 1;
        }
        v10 += 20;
        ++v1;
      }
      while ( v1 != 0 );
    }
  }
  else
  {
    v2 = 0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = *(uint32_t *)self + v2;
        if ( *(uint8_t *)v4 == 0xFF && (*(uint8_t *)(v4 + 19) & 1) != 0 )
          break;
        ++v3;
        v2 += 20;
        if ( v3 == v1 )
          goto LABEL_7;
      }
      ++v3;
      v11 = v2;
      gameswf::free_internal(*(gameswf::Self **)(v4 + 12));
      v2 = v11 + 20;
    }
    while ( v3 != v1 );
  }
LABEL_7:
  v5 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 1) = 0;
  if ( v5 == 0 )
  {
    v6 = *(gameswf::Self **)self;
    v7 = *(uint32_t *)self == 0;
    *((uint32_t *)self + 2) = 0;
    if ( !v7 )
      gameswf::free_internal(v6);
    *(uint32_t *)self = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_ASValue_3ea8a1::reserve  (binary VA: 0x107a2b0)
// Original: gameswf::array<gameswf::ASValue>::reserve
// ----------------------------------------------------------------------------
void * gameswf::array_gameswf_ASValue_3ea8a1::reserve(gameswf::array<gameswf::ASValue::Self> *self, int a2)
{
  void *result;
  int v3;

  result = (void *)a2;
  if ( *((uint32_t *)self + 3) == 0 )
  {
    v3 = *((uint32_t *)self + 2);
    *((uint32_t *)self + 2) = a2;
    if ( a2 != 0 )
    {
      if ( *(uint32_t *)self != 0 )
        result = gameswf::realloc_internal(*(gameswf::Self **)self, 12 * a2, 12 * v3);
      else
        result = (void *)gameswf::malloc_internal(12 * a2);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      result = *(void **)self;
      if ( *(uint32_t *)self != 0 )
        result = (void *)gameswf::free_internal(*(gameswf::Self **)self);
      *(uint32_t *)self = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_ASValue_3ea8a1::push_back_gameswf_ASValue_0fae14  (binary VA: 0x107a370)
// Original: gameswf::array<gameswf::ASValue>::push_back<gameswf::ASValue>
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_ASValue_3ea8a1::push_back_gameswf_ASValue_0fae14(gameswf::array<gameswf::ASValue::Self> *self, const gameswf::ASValue::Self *a2)
{
  int v2;
  int v3;
  gameswf::ASValue::Self *v4;

  v2 = *((uint32_t *)self + 1);
  v3 = v2 + 1;
  if ( v2 + 1 > *((uint32_t *)self + 2) )
  {
    gameswf::array_gameswf_ASValue_3ea8a1::reserve(self, v3 + (v3 >> 1));
    v2 = *((uint32_t *)self + 1);
  }
  v4 = (gameswf::ASValue::Self *)(*(uint32_t *)self + 12 * v2);
  if ( v4 != nullptr )
  {
    *(uint8_t *)v4 = 0;
    *((uint8_t *)v4 + 1) = 0;
    gameswf::ASValue::opAssign(v4, a2);
  }
  *((uint32_t *)self + 1) = v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_ASValue_3ea8a1::resize  (binary VA: 0x107a3f0)
// Original: gameswf::array<gameswf::ASValue>::resize
// ----------------------------------------------------------------------------
int gameswf::array_gameswf_ASValue_3ea8a1::resize(gameswf::array<gameswf::ASValue::Self> *self, int a2)
{
  int v2;
  int v3;
  gameswf::ASValue::Self *v4;
  int v5;
  int v6;
  uint8_t *v7;
  int v9;

  v9 = *((uint32_t *)self + 1);
  if ( v9 > a2 )
  {
    v2 = a2;
    v3 = 12 * a2;
    do
    {
      ++v2;
      v4 = (gameswf::ASValue::Self *)(v3 + *(uint32_t *)self);
      v3 += 12;
      gameswf::ASValue::dropRefs(v4);
    }
    while ( v2 != v9 );
  }
  if ( a2 != 0 && a2 > *((uint32_t *)self + 2) )
    gameswf::array_gameswf_ASValue_3ea8a1::reserve(self, a2 + (a2 >> 1));
  if ( v9 < a2 )
  {
    v5 = v9;
    v6 = 12 * v9;
    do
    {
      v7 = (uint8_t *)(*(uint32_t *)self + v6);
      if ( v7 != nullptr )
      {
        *v7 = 0;
        v7[1] = 0;
      }
      ++v5;
      v6 += 12;
    }
    while ( v5 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_smart_ptr_gamesw_b135e5::push_back_gameswf_ASObject_3ab925  (binary VA: 0x107a680)
// Original: gameswf::array<gameswf::smart_ptr<gameswf::ASObject>>::push_back<gameswf::ASObject*>
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_smart_ptr_gamesw_b135e5::push_back_gameswf_ASObject_3ab925(gameswf::array<gameswf::smart_ptr<gameswf::ASObject::Self>> *self, gameswf::RefCounted::Self **a2)
{
  int v2;
  int v3;
  int v4;
  char *v5;
  gameswf::ASObject::Self **v6;
  gameswf::RefCounted::Self *v7;
  bool v8;
  int v9;

  v2 = *((uint32_t *)self + 1);
  v3 = *((uint32_t *)self + 2);
  v4 = v2 + 1;
  if ( v2 + 1 <= v3 || *((uint32_t *)self + 3) != 0 )
  {
    v5 = *(char **)self;
  }
  else
  {
    v9 = v4 + (v4 >> 1);
    *((uint32_t *)self + 2) = v9;
    if ( v9 != 0 )
    {
      if ( *(uint32_t *)self != 0 )
        v5 = (char *)gameswf::realloc_internal(*(gameswf::Self **)self, 4 * v9, 4 * v3);
      else
        v5 = (char *)gameswf::malloc_internal(4 * v9);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
      v2 = *((uint32_t *)self + 1);
    }
    else
    {
      if ( *(uint32_t *)self != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)self);
        v2 = *((uint32_t *)self + 1);
      }
      *(uint32_t *)self = 0;
      v5 = nullptr;
    }
  }
  v6 = (gameswf::ASObject::Self **)&v5[4 * v2];
  if ( v6 != nullptr )
  {
    v7 = *a2;
    v8 = *a2 == nullptr;
    *v6 = (gameswf::ASObject::Self *)(*a2);
    if ( !v8 )
      gameswf::RefCounted::addRef(v7);
  }
  *((uint32_t *)self + 1) = v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_ASValue_3ea8a1::push_back_bool_id_c12604  (binary VA: 0x107a970)
// Original: gameswf::array<gameswf::ASValue>::push_back<bool>
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_ASValue_3ea8a1::push_back_bool_id_c12604(gameswf::array<gameswf::ASValue::Self> *self, const bool *a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  char v5;

  v2 = *((uint32_t *)self + 1);
  v3 = v2 + 1;
  if ( v2 + 1 > *((uint32_t *)self + 2) )
  {
    gameswf::array_gameswf_ASValue_3ea8a1::reserve(self, v3 + (v3 >> 1));
    v2 = *((uint32_t *)self + 1);
  }
  v4 = (uint8_t *)(*(uint32_t *)self + 12 * v2);
  if ( v4 != nullptr )
  {
    v5 = *a2;
    *v4 = 1;
    v4[1] = 0;
    v4[4] = v5;
  }
  *((uint32_t *)self + 1) = v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_smart_ptr_gamesw_b135e5::reserve  (binary VA: 0x107ac30)
// Original: gameswf::array<gameswf::smart_ptr<gameswf::ASObject>>::reserve
// ----------------------------------------------------------------------------
void * gameswf::array_gameswf_smart_ptr_gamesw_b135e5::reserve(gameswf::array<gameswf::smart_ptr<gameswf::ASObject::Self>> *self, int a2)
{
  void *result;
  int v3;

  result = (void *)a2;
  if ( *((uint32_t *)self + 3) == 0 )
  {
    v3 = *((uint32_t *)self + 2);
    *((uint32_t *)self + 2) = a2;
    if ( a2 != 0 )
    {
      if ( *(uint32_t *)self != 0 )
        result = gameswf::realloc_internal(*(gameswf::Self **)self, 4 * a2, 4 * v3);
      else
        result = (void *)gameswf::malloc_internal(4 * a2);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      result = *(void **)self;
      if ( *(uint32_t *)self != 0 )
        result = (void *)gameswf::free_internal(*(gameswf::Self **)self);
      *(uint32_t *)self = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_smart_ptr_gamesw_b135e5::resize  (binary VA: 0x107ace0)
// Original: gameswf::array<gameswf::smart_ptr<gameswf::ASObject>>::resize
// ----------------------------------------------------------------------------
int gameswf::array_gameswf_smart_ptr_gamesw_b135e5::resize(gameswf::array<gameswf::smart_ptr<gameswf::ASObject::Self>> *self, int a2)
{
  int v2;
  int v3;
  int v4;
  gameswf::RefCounted::Self *v5;
  int v6;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;

  v2 = *((uint32_t *)self + 1);
  if ( v2 > a2 )
  {
    v3 = 4 * a2;
    v4 = a2;
    do
    {
      v5 = *(gameswf::RefCounted::Self **)(*(uint32_t *)self + v3);
      if ( v5 != nullptr )
      {
        v11 = v4;
        v10 = v3;
        gameswf::RefCounted::dropRef(v5);
        v3 = v10;
        v4 = v11;
      }
      ++v4;
      v3 += 4;
    }
    while ( v4 != v2 );
  }
  if ( a2 != 0 )
  {
    v6 = *((uint32_t *)self + 2);
    if ( a2 > v6 && *((uint32_t *)self + 3) == 0 )
    {
      v9 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v9;
      if ( v9 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 4 * v9, 4 * v6));
        else
          *(uint32_t *)self = gameswf::malloc_internal(4 * v9);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  result = 4 * v2;
  if ( v2 < a2 )
  {
    do
    {
      v8 = (uint32_t *)(*(uint32_t *)self + result);
      if ( v8 != nullptr )
        *v8 = 0;
      ++v2;
      result += 4;
    }
    while ( v2 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Character_c3efb8::resize  (binary VA: 0x1082230)
// Original: gameswf::array<gameswf::Character *>::resize
// ----------------------------------------------------------------------------
int gameswf::array_gameswf_Character_c3efb8::resize(gameswf::array<gameswf::Character::Self *> *self, int a2)
{
  int v2;
  int v3;
  int result;
  uint32_t *v5;
  int v6;

  v2 = *((uint32_t *)self + 1);
  if ( a2 != 0 )
  {
    v3 = *((uint32_t *)self + 2);
    if ( a2 > v3 && *((uint32_t *)self + 3) == 0 )
    {
      v6 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v6;
      if ( v6 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 4 * v6, 4 * v3));
        else
          *(uint32_t *)self = gameswf::malloc_internal(4 * v6);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  result = 4 * v2;
  if ( v2 < a2 )
  {
    do
    {
      v5 = (uint32_t *)(*(uint32_t *)self + result);
      if ( v5 != nullptr )
        *v5 = 0;
      ++v2;
      result += 4;
    }
    while ( v2 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_ASValue_3ea8a1::Destroy  (binary VA: 0x10a4dd0)
// Original: gameswf::array<gameswf::ASValue>::~array
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_ASValue_3ea8a1::Destroy(gameswf::array<gameswf::ASValue::Self> *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  bool v6;
  int v7;
  uint8_t *v8;
  int v9;

  v1 = *((uint32_t *)self + 1);
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v7 = 12 * v1;
      do
      {
        v8 = (uint8_t *)(*(uint32_t *)self + v7);
        if ( v8 != nullptr )
        {
          *v8 = 0;
          v8[1] = 0;
        }
        v7 += 12;
        ++v1;
      }
      while ( v1 != 0 );
    }
  }
  else
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v9 = v2;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v2 + *(uint32_t *)self));
      v2 = v9 + 12;
    }
    while ( v3 != v1 );
  }
  v4 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 1) = 0;
  if ( v4 == 0 )
  {
    v5 = *(gameswf::Self **)self;
    v6 = *(uint32_t *)self == 0;
    *((uint32_t *)self + 2) = 0;
    if ( !v6 )
      gameswf::free_internal(v5);
    *(uint32_t *)self = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_String_8c822b::Destroy  (binary VA: 0x10bcd90)
// Original: gameswf::array<gameswf::String>::~array
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_String_8c822b::Destroy(gameswf::array<gameswf::String::Self> *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = *((uint32_t *)self + 1);
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v9 = 20 * v1;
      do
      {
        v7 = *(uint32_t *)self + v9;
        if ( v7 != 0 )
        {
          v8 = *(uint32_t *)(v7 + 16);
          *(uint8_t *)v7 = 1;
          v8 |= 0x7FFFFFu;
          *(uint8_t *)(v7 + 1) = 0;
          *(uint32_t *)(v7 + 16) = v8;
          *(uint8_t *)(v7 + 18) = BYTE2(v8) & 0x7F;
          *(uint8_t *)(v7 + 19) = HIBYTE(v8) | 1;
        }
        v9 += 20;
        ++v1;
      }
      while ( v1 != 0 );
    }
  }
  else
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v10 = v2;
      sub_59CE50(v2 + *(uint32_t *)self);
      v2 = v10 + 20;
    }
    while ( v3 != v1 );
  }
  v4 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 1) = 0;
  if ( v4 == 0 )
  {
    v5 = *(gameswf::Self **)self;
    v6 = *(uint32_t *)self == 0;
    *((uint32_t *)self + 2) = 0;
    if ( !v6 )
      gameswf::free_internal(v5);
    *(uint32_t *)self = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_array_char_6ef230::resize  (binary VA: 0x10bd2c0)
// Original: gameswf::array<gameswf::array<char>>::resize
// ----------------------------------------------------------------------------
int gameswf::array_gameswf_array_char_6ef230::resize(gameswf::array<gameswf::array<char>> *self, int a2)
{
  gameswf::array<gameswf::array<char>> *v2;
  int v3;
  int v4;
  gameswf::array<gameswf::array<char>> *v5;
  gameswf::Self **v6;
  int v7;
  uint8_t *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v17;
  gameswf::array<gameswf::array<char>> *v18;
  int v19;

  v2 = self;
  v19 = *((uint32_t *)self + 1);
  if ( v19 > a2 )
  {
    v3 = a2;
    v4 = 16 * a2;
    v5 = self;
    do
    {
      v6 = (gameswf::Self **)(*(uint32_t *)v5 + v4);
      v7 = (int)(uintptr_t)(v6[1]);
      if ( v7 < 0 )
      {
        do
        {
          v8 = (uint8_t *)((char *)*v6 + v7);
          if ( v8 != nullptr )
            *v8 = 0;
          ++v7;
        }
        while ( v7 != 0 );
      }
      v9 = v6[3];
      v6[1] = nullptr;
      if ( v9 == nullptr )
      {
        v10 = *v6;
        v11 = *v6 == nullptr;
        v6[2] = nullptr;
        if ( !v11 )
        {
          v18 = v5;
          gameswf::free_internal(v10);
          v5 = v18;
        }
        *v6 = nullptr;
      }
      ++v3;
      v4 += 16;
    }
    while ( v3 != v19 );
    v2 = v5;
  }
  if ( a2 != 0 )
  {
    v12 = *((uint32_t *)v2 + 2);
    if ( a2 > v12 && *((uint32_t *)v2 + 3) == 0 )
    {
      v17 = a2 + (a2 >> 1);
      *((uint32_t *)v2 + 2) = v17;
      if ( v17 != 0 )
      {
        if ( *(uint32_t *)v2 != 0 )
          *(uint32_t *)v2 = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)v2, 16 * v17, 16 * v12));
        else
          *(uint32_t *)v2 = gameswf::malloc_internal(16 * v17);
      }
      else
      {
        if ( *(uint32_t *)v2 != 0 )
          gameswf::free_internal(*(gameswf::Self **)v2);
        *(uint32_t *)v2 = 0;
      }
    }
  }
  v13 = v19;
  v14 = 16 * v19;
  if ( v19 < a2 )
  {
    do
    {
      v15 = (uint32_t *)(*(uint32_t *)v2 + v14);
      if ( v15 != nullptr )
      {
        *v15 = 0;
        v15[1] = 0;
        v15[2] = 0;
        v15[3] = 0;
      }
      ++v13;
      v14 += 16;
    }
    while ( v13 != a2 );
  }
  *((uint32_t *)v2 + 1) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_BufferedRenderer_f5fe8c::resize  (binary VA: 0x10cab40)
// Original: gameswf::array<gameswf::BufferedRenderer::Batch>::resize
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_BufferedRenderer_f5fe8c::resize(gameswf::array<gameswf::BufferedRenderer::Batch> *self, int a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;

  v2 = *((uint32_t *)self + 1);
  if ( a2 != 0 )
  {
    v3 = *((uint32_t *)self + 2);
    if ( a2 > v3 && *((uint32_t *)self + 3) == 0 )
    {
      v6 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v6;
      if ( v6 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 20 * v6, 20 * v3));
        else
          *(uint32_t *)self = gameswf::malloc_internal(20 * v6);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  v4 = 20 * v2;
  if ( v2 < a2 )
  {
    do
    {
      v5 = (uint32_t *)(*(uint32_t *)self + v4);
      if ( v5 != nullptr )
      {
        *v5 = 4;
        v5[1] = 0;
        v5[2] = 0;
        v5[3] = 0;
        v5[4] = 0;
      }
      ++v2;
      v4 += 20;
    }
    while ( v2 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Vertex_1a1ff6::resize  (binary VA: 0x10ce590)
// Original: gameswf::array<gameswf::Vertex>::resize
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_Vertex_1a1ff6::resize(gameswf::array<gameswf::Vertex> *self, int a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;

  v2 = *((uint32_t *)self + 1);
  if ( a2 != 0 )
  {
    v3 = *((uint32_t *)self + 2);
    if ( a2 > v3 && *((uint32_t *)self + 3) == 0 )
    {
      v6 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v6;
      if ( v6 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 24 * v6, 24 * v3));
        else
          *(uint32_t *)self = gameswf::malloc_internal(24 * v6);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  v4 = 24 * v2;
  if ( v2 < a2 )
  {
    do
    {
      v5 = (uint32_t *)(*(uint32_t *)self + v4);
      if ( v5 != nullptr )
      {
        *v5 = 0;
        v5[1] = 0;
        v5[2] = 0;
        v5[3] = 0;
        v5[4] = 0;
        v5[5] = 0;
      }
      ++v2;
      v4 += 24;
    }
    while ( v2 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_render_handler_g_eea1b3::resize  (binary VA: 0x10d10a0)
// Original: gameswf::array<gameswf::render_handler_glitch::PostProcessChain>::resize
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_render_handler_g_eea1b3::resize(gameswf::array<gameswf::render_handler_glitch::PostProcessChain> *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;

  v2 = a2;
  v13 = *((uint32_t *)self + 1);
  if ( v13 > a2 )
  {
    v3 = *((uint32_t *)self + 1);
    v4 = a2;
    v5 = 12 * a2;
    do
    {
      v6 = (uint32_t *)(*(uint32_t *)self + v5);
      if ( *v6 != 0 )
        *(uint8_t *)(*v6 + 65) = 0;
      v7 = v6[1];
      *v6 = 0;
      if ( v7 != 0 )
        *(uint8_t *)(v7 + 65) = 0;
      ++v4;
      v5 += 12;
      v6[1] = 0;
      v6[2] = 0;
    }
    while ( v4 != v3 );
    v2 = a2;
  }
  if ( v2 != 0 )
  {
    v8 = *((uint32_t *)self + 2);
    if ( v2 > v8 && *((uint32_t *)self + 3) == 0 )
    {
      v12 = v2 + (v2 >> 1);
      *((uint32_t *)self + 2) = v12;
      if ( v12 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 12 * v12, 12 * v8));
        else
          *(uint32_t *)self = gameswf::malloc_internal(12 * v12);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  if ( v13 < v2 )
  {
    v9 = v13;
    v10 = 12 * v13;
    do
    {
      v11 = (uint32_t *)(*(uint32_t *)self + v10);
      if ( v11 != nullptr )
      {
        *v11 = 0;
        v11[1] = 0;
        v11[2] = 0;
      }
      ++v9;
      v10 += 12;
    }
    while ( v9 != v2 );
  }
  *((uint32_t *)self + 1) = v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Character_c3efb8::reserve  (binary VA: 0x10da710)
// Original: gameswf::array<gameswf::Character *>::reserve
// ----------------------------------------------------------------------------
void * gameswf::array_gameswf_Character_c3efb8::reserve(gameswf::array<gameswf::Character::Self *> *self, int a2)
{
  void *result;
  int v3;

  result = (void *)a2;
  if ( *((uint32_t *)self + 3) == 0 )
  {
    v3 = *((uint32_t *)self + 2);
    *((uint32_t *)self + 2) = a2;
    if ( a2 != 0 )
    {
      if ( *(uint32_t *)self != 0 )
        result = gameswf::realloc_internal(*(gameswf::Self **)self, 4 * a2, 4 * v3);
      else
        result = (void *)gameswf::malloc_internal(4 * a2);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      result = *(void **)self;
      if ( *(uint32_t *)self != 0 )
        result = (void *)gameswf::free_internal(*(gameswf::Self **)self);
      *(uint32_t *)self = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Path_2b740f::opAssign  (binary VA: 0x10e9cf0)
// Original: gameswf::array<gameswf::Path>::operator=
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_Path_2b740f::opAssign(gameswf::array<gameswf::Path::Self> *self, const gameswf::array<gameswf::Path::Self> *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  gameswf::Self *v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;

  v2 = *((uint32_t *)a2 + 1);
  v3 = *((uint32_t *)self + 1);
  v30 = v2;
  if ( v2 < v3 )
  {
    v26 = *((uint32_t *)a2 + 1);
    v32 = *((uint32_t *)self + 1);
    v28 = 40 * v2;
    do
    {
      v24 = (uint32_t *)(*(uint32_t *)self + v28);
      v4 = v24 + 5;
      v5 = v24[6];
      if ( v5 < 0 )
      {
        v6 = 16 * v5;
        do
        {
          if ( *v4 + v6 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(*v4 + v6));
          v6 += 16;
          ++v5;
        }
        while ( v5 != 0 );
      }
      v7 = v24[8];
      v24[6] = 0;
      if ( v7 == 0 )
      {
        v8 = (gameswf::Self *)v24[5];
        v24[7] = 0;
        if ( v8 != nullptr )
          gameswf::free_internal(v8);
        v24[5] = 0;
      }
      ++v26;
      v28 += 40;
    }
    while ( v26 != v32 );
    v3 = v32;
  }
  if ( v30 != 0 )
  {
    v9 = *((uint32_t *)self + 2);
    if ( v30 > v9 && *((uint32_t *)self + 3) == 0 )
    {
      v23 = v30 + (v30 >> 1);
      *((uint32_t *)self + 2) = v23;
      if ( v23 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 40 * v23, 40 * v9));
        else
          *(uint32_t *)self = gameswf::malloc_internal(40 * v23);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  if ( v30 > v3 )
  {
    v10 = 40 * v3;
    do
    {
      if ( *(uint32_t *)self + v10 != 0 )
        gameswf::Path::Construct((gameswf::Path::Self *)(*(uint32_t *)self + v10));
      ++v3;
      v10 += 40;
    }
    while ( v3 != v30 );
  }
  *((uint32_t *)self + 1) = v30;
  if ( v30 > 0 )
  {
    v27 = 0;
    v29 = 0;
    do
    {
      v11 = *(uint32_t *)a2 + v27;
      v12 = *(uint32_t *)self + v27;
      *(uint32_t *)v12 = *(uint32_t *)v11;
      *(uint32_t *)(v12 + 4) = *(uint32_t *)(v11 + 4);
      *(uint32_t *)(v12 + 8) = *(uint32_t *)(v11 + 8);
      *(uint32_t *)(v12 + 12) = *(uint32_t *)(v11 + 12);
      *(uint32_t *)(v12 + 16) = *(uint32_t *)(v11 + 16);
      v13 = *(uint32_t *)(v11 + 24);
      v31 = (uint32_t *)(v12 + 20);
      v25 = v13;
      v14 = *(uint32_t *)(v12 + 24);
      if ( v13 != 0 )
      {
        v15 = *(uint32_t *)(v12 + 28);
        if ( v13 > v15 && *(uint32_t *)(v12 + 32) == 0 )
        {
          v21 = v13 + (v13 >> 1);
          *(uint32_t *)(v12 + 28) = v21;
          if ( v21 != 0 )
          {
            v22 = *(gameswf::Self **)(v12 + 20);
            if ( v22 != nullptr )
              *(uint32_t *)(v12 + 20) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v22, 16 * v21, 16 * v15));
            else
              *(uint32_t *)(v12 + 20) = gameswf::malloc_internal(16 * v21);
          }
          else
          {
            if ( *(uint32_t *)(v12 + 20) != 0 )
              gameswf::free_internal(*(gameswf::Self **)(v12 + 20));
            *(uint32_t *)(v12 + 20) = 0;
          }
        }
      }
      if ( v25 > v14 )
      {
        v33 = v12;
        v16 = 16 * v14;
        do
        {
          if ( *v31 + v16 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(*v31 + v16));
          ++v14;
          v16 += 16;
        }
        while ( v14 != v25 );
        v12 = v33;
      }
      *(uint32_t *)(v12 + 24) = v25;
      if ( v25 > 0 )
      {
        v17 = 0;
        do
        {
          v18 = 16 * v17;
          v19 = *(uint32_t *)(v12 + 20);
          ++v17;
          v20 = *(uint32_t *)(v11 + 20);
          *(uint32_t *)(v19 + v18) = *(uint32_t *)(v20 + v18);
          *(uint32_t *)(v19 + v18 + 4) = *(uint32_t *)(v20 + v18 + 4);
          *(uint32_t *)(v19 + v18 + 8) = *(uint32_t *)(v20 + v18 + 8);
          *(uint32_t *)(v19 + v18 + 12) = *(uint32_t *)(v20 + v18 + 12);
        }
        while ( v17 < *(uint32_t *)(v12 + 24) );
      }
      ++v29;
      v27 += 40;
      *(uint8_t *)(v12 + 36) = *(uint8_t *)(v11 + 36);
    }
    while ( *((uint32_t *)self + 1) > v29 );
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Filter_2a2941::resize  (binary VA: 0x10ea830)
// Original: gameswf::array<gameswf::Filter>::resize
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_Filter_2a2941::resize(gameswf::array<gameswf::Filter> *self, int a2)
{
  int v2;
  int v3;
  int v4;
  void *v5;
  int v6;

  v2 = *((uint32_t *)self + 1);
  if ( a2 != 0 )
  {
    v3 = *((uint32_t *)self + 2);
    if ( a2 > v3 && *((uint32_t *)self + 3) == 0 )
    {
      v6 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v6;
      if ( v6 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 96 * v6, 96 * v3));
        else
          *(uint32_t *)self = gameswf::malloc_internal(96 * v6);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  if ( v2 < a2 )
  {
    v4 = 96 * v2;
    do
    {
      v5 = (void *)(*(uint32_t *)self + v4);
      if ( v5 != nullptr )
        memset(v5, 0, 0x60u);
      ++v2;
      v4 += 96;
    }
    while ( v2 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Point_c7983d::push_back_gameswf_Point_493cd1  (binary VA: 0x10f6f70)
// Original: gameswf::array<gameswf::Point>::push_back<gameswf::Point>
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_Point_c7983d::push_back_gameswf_Point_493cd1(gameswf::array<gameswf::Point::Self> *self, const gameswf::Point::Self *a2)
{
  int v2;
  int v3;
  int v4;
  char *v5;
  char *v6;
  int v7;
  int v8;

  v2 = *((uint32_t *)self + 1);
  v3 = *((uint32_t *)self + 2);
  v4 = v2 + 1;
  if ( v2 + 1 <= v3 || *((uint32_t *)self + 3) != 0 )
  {
    v5 = *(char **)self;
  }
  else
  {
    v8 = v4 + (v4 >> 1);
    *((uint32_t *)self + 2) = v8;
    if ( v8 != 0 )
    {
      if ( *(uint32_t *)self != 0 )
        v5 = (char *)gameswf::realloc_internal(*(gameswf::Self **)self, 8 * v8, 8 * v3);
      else
        v5 = (char *)gameswf::malloc_internal(8 * v8);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
      v2 = *((uint32_t *)self + 1);
    }
    else
    {
      if ( *(uint32_t *)self != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)self);
        v2 = *((uint32_t *)self + 1);
      }
      *(uint32_t *)self = 0;
      v5 = nullptr;
    }
  }
  v6 = &v5[8 * v2];
  if ( v6 != nullptr )
  {
    v7 = *((uint32_t *)a2 + 1);
    *(uint32_t *)v6 = *(uint32_t *)a2;
    *((uint32_t *)v6 + 1) = v7;
  }
  *((uint32_t *)self + 1) = v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Point_c7983d::resize  (binary VA: 0x10f7050)
// Original: gameswf::array<gameswf::Point>::resize
// ----------------------------------------------------------------------------
int gameswf::array_gameswf_Point_c7983d::resize(gameswf::array<gameswf::Point::Self> *self, int a2)
{
  int v2;
  int v3;
  int result;
  uint32_t *v5;
  int v6;

  v2 = *((uint32_t *)self + 1);
  if ( a2 != 0 )
  {
    v3 = *((uint32_t *)self + 2);
    if ( a2 > v3 && *((uint32_t *)self + 3) == 0 )
    {
      v6 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v6;
      if ( v6 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 8 * v6, 8 * v3));
        else
          *(uint32_t *)self = gameswf::malloc_internal(8 * v6);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  result = 8 * v2;
  if ( v2 < a2 )
  {
    do
    {
      v5 = (uint32_t *)(*(uint32_t *)self + result);
      if ( v5 != nullptr )
      {
        *v5 = 0;
        v5[1] = 0;
      }
      ++v2;
      result += 8;
    }
    while ( v2 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Glyph_bb2b5c::resize  (binary VA: 0x1108420)
// Original: gameswf::array<gameswf::Glyph>::resize
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_Glyph_bb2b5c::resize(gameswf::array<gameswf::Glyph> *self, int a2)
{
  int v2;
  int v3;
  int v4;
  gameswf::RefCounted::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = *((uint32_t *)self + 1);
  if ( v2 > a2 )
  {
    v3 = 44 * a2;
    v4 = a2;
    do
    {
      v5 = *(gameswf::RefCounted::Self **)(*(uint32_t *)self + v3 + 4);
      if ( v5 != nullptr )
      {
        v11 = v4;
        v10 = v3;
        gameswf::RefCounted::dropRef(v5);
        v3 = v10;
        v4 = v11;
      }
      ++v4;
      v3 += 44;
    }
    while ( v4 != v2 );
  }
  if ( a2 != 0 )
  {
    v6 = *((uint32_t *)self + 2);
    if ( a2 > v6 && *((uint32_t *)self + 3) == 0 )
    {
      v9 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v9;
      if ( v9 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 44 * v9, 44 * v6));
        else
          *(uint32_t *)self = gameswf::malloc_internal(44 * v9);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  if ( v2 < a2 )
  {
    v7 = 44 * v2;
    do
    {
      v8 = *(uint32_t *)self + v7;
      if ( v8 != 0 )
      {
        *(uint32_t *)v8 = 1140850688;
        *(uint32_t *)(v8 + 4) = 0;
        *(uint32_t *)(v8 + 24) = 0;
        *(uint16_t *)(v8 + 28) = 0;
        *(uint16_t *)(v8 + 30) = -1;
        *(uint16_t *)(v8 + 32) = 0;
        *(uint8_t *)(v8 + 34) = 0;
        *(uint32_t *)(v8 + 36) = 0;
        *(uint32_t *)(v8 + 40) = 0;
      }
      ++v2;
      v7 += 44;
    }
    while ( v2 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_TextGlyphRecord_2b5322::resize  (binary VA: 0x1108560)
// Original: gameswf::array<gameswf::TextGlyphRecord>::resize
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_TextGlyphRecord_2b5322::resize(gameswf::array<gameswf::TextGlyphRecord> *self, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v19 = *((uint32_t *)self + 1);
  if ( v19 > a2 )
  {
    v16 = a2;
    v17 = 60 * a2;
    do
    {
      v2 = *(uint32_t *)self + v17;
      v3 = *(uint32_t *)(v2 + 48);
      v4 = (uint32_t *)(v2 + 44);
      if ( v3 <= 0 )
      {
        if ( v3 < 0 )
        {
          v13 = 44 * v3;
          do
          {
            v14 = *v4 + v13;
            if ( v14 != 0 )
            {
              *(uint32_t *)v14 = 1140850688;
              *(uint32_t *)(v14 + 4) = 0;
              *(uint32_t *)(v14 + 24) = 0;
              *(uint16_t *)(v14 + 28) = 0;
              *(uint16_t *)(v14 + 30) = -1;
              *(uint16_t *)(v14 + 32) = 0;
              *(uint8_t *)(v14 + 34) = 0;
              *(uint32_t *)(v14 + 36) = 0;
              *(uint32_t *)(v14 + 40) = 0;
            }
            v13 += 44;
            ++v3;
          }
          while ( v3 != 0 );
        }
      }
      else
      {
        v18 = *(uint32_t *)self + v17;
        v5 = *(uint32_t *)(v2 + 48);
        v6 = 0;
        do
        {
          if ( *(uint32_t *)(*v4 + 44 * v6 + 4) != 0 )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*v4 + 44 * v6 + 4));
          ++v6;
        }
        while ( v6 != v5 );
        v2 = v18;
      }
      v7 = *(uint32_t *)(v2 + 56);
      *(uint32_t *)(v2 + 48) = 0;
      if ( v7 == 0 )
      {
        v8 = *(gameswf::Self **)(v2 + 44);
        *(uint32_t *)(v2 + 52) = 0;
        if ( v8 != nullptr )
          gameswf::free_internal(v8);
        *(uint32_t *)(v2 + 44) = 0;
      }
      if ( *(uint32_t *)(v2 + 4) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v2 + 4));
      ++v16;
      v17 += 60;
    }
    while ( v16 != v19 );
  }
  if ( a2 != 0 )
  {
    v9 = *((uint32_t *)self + 2);
    if ( a2 > v9 && *((uint32_t *)self + 3) == 0 )
    {
      v15 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v15;
      if ( v15 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 60 * v15, 60 * v9));
        else
          *(uint32_t *)self = gameswf::malloc_internal(60 * v15);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  if ( v19 < a2 )
  {
    v10 = 60 * v19;
    v11 = v19;
    do
    {
      v12 = (uint32_t *)(*(uint32_t *)self + v10);
      if ( v12 != nullptr )
      {
        memset(v12, 0, 0x3Cu);
        *v12 = -1;
        *((uint8_t *)v12 + 8) = -1;
        *((uint8_t *)v12 + 9) = -1;
        *((uint8_t *)v12 + 10) = -1;
        *((uint8_t *)v12 + 11) = -1;
        v12[6] = 1065353216;
        v12[7] = 1065353216;
        *((uint8_t *)v12 + 34) = 1;
        *((uint8_t *)v12 + 35) = 1;
      }
      ++v11;
      v10 += 60;
    }
    while ( v11 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_TextAttributes_8af716::push_back_gameswf_TextAttributes_8f9e3b  (binary VA: 0x1108a40)
// Original: gameswf::array<gameswf::TextAttributes>::push_back<gameswf::TextAttributes>
// ----------------------------------------------------------------------------
char * gameswf::array_gameswf_TextAttributes_8af716::push_back_gameswf_TextAttributes_8f9e3b(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  char *result;
  gameswf::RefCounted::Self *v7;
  bool v8;
  int v9;
  char *v10;

  v2 = *(uint32_t *)(a1 + 4);
  v3 = *(uint32_t *)(a1 + 8);
  v4 = v2 + 1;
  if ( v2 + 1 <= v3 || *(uint32_t *)(a1 + 12) != 0 )
  {
    v5 = *(gameswf::Self **)a1;
  }
  else
  {
    v9 = v4 + (v4 >> 1);
    *(uint32_t *)(a1 + 8) = v9;
    if ( v9 != 0 )
    {
      if ( *(uint32_t *)a1 != 0 )
        v5 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)a1, 44 * v9, 44 * v3);
      else
        v5 = (gameswf::Self *)gameswf::malloc_internal(44 * v9);
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v5);
      v2 = *(uint32_t *)(a1 + 4);
    }
    else
    {
      if ( *(uint32_t *)a1 != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)a1);
        v2 = *(uint32_t *)(a1 + 4);
      }
      *(uint32_t *)a1 = 0;
      v5 = nullptr;
    }
  }
  result = (char *)v5 + 44 * v2;
  if ( result != nullptr )
  {
    v7 = *(gameswf::RefCounted::Self **)a2;
    v8 = *(uint32_t *)a2 == 0;
    *(uint32_t *)result = *(uint32_t *)a2;
    if ( !v8 )
    {
      v10 = result;
      gameswf::RefCounted::addRef(v7);
      result = v10;
    }
    *((uint32_t *)result + 1) = *(uint32_t *)(a2 + 4);
    *((uint32_t *)result + 2) = *(uint32_t *)(a2 + 8);
    result[12] = *(uint8_t *)(a2 + 12);
    result[13] = *(uint8_t *)(a2 + 13);
    *((uint32_t *)result + 4) = *(uint32_t *)(a2 + 16);
    *((uint32_t *)result + 5) = *(uint32_t *)(a2 + 20);
    *((uint32_t *)result + 6) = *(uint32_t *)(a2 + 24);
    *((uint32_t *)result + 7) = *(uint32_t *)(a2 + 28);
    *((uint32_t *)result + 8) = *(uint32_t *)(a2 + 32);
    *((uint32_t *)result + 9) = *(uint32_t *)(a2 + 36);
    *((uint32_t *)result + 10) = *(uint32_t *)(a2 + 40);
  }
  *(uint32_t *)(a1 + 4) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_html_reader_Left_491179::resize  (binary VA: 0x1108b90)
// Original: gameswf::array<gameswf::html_reader::LeftToRightInfo>::resize
// ----------------------------------------------------------------------------
int gameswf::array_gameswf_html_reader_Left_491179::resize(gameswf::array<gameswf::html_reader::LeftToRightInfo> *self, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v2 = *((uint32_t *)self + 1);
  if ( a2 != 0 )
  {
    v3 = *((uint32_t *)self + 2);
    if ( a2 > v3 && *((uint32_t *)self + 3) == 0 )
    {
      v6 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v6;
      if ( v6 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 12 * v6, 12 * v3));
        else
          *(uint32_t *)self = gameswf::malloc_internal(12 * v6);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  result = 12 * v2;
  if ( v2 < a2 )
  {
    do
    {
      v5 = *(uint32_t *)self + result;
      if ( v5 != 0 )
      {
        *(uint32_t *)v5 = 0;
        *(uint32_t *)(v5 + 4) = 0;
        *(uint8_t *)(v5 + 8) = 1;
      }
      ++v2;
      result += 12;
    }
    while ( v2 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_TextGlyphRecord_2b5322::append  (binary VA: 0x1108c80)
// Original: gameswf::array<gameswf::TextGlyphRecord>::append
// ----------------------------------------------------------------------------
int gameswf::array_gameswf_TextGlyphRecord_2b5322::append(gameswf::array<gameswf::TextGlyphRecord> *self, const gameswf::array<gameswf::TextGlyphRecord> *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  gameswf::RefCounted::Self *v6;
  gameswf::RefCounted::Self *v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  gameswf::RefCounted::Self *v18;
  gameswf::RefCounted::Self *v19;
  int v20;
  int v21;
  gameswf::Self *v22;
  int v23;
  int v24;
  gameswf::RefCounted::Self *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;

  v2 = *((uint32_t *)a2 + 1);
  result = *(uint32_t *)a2;
  v32 = v2;
  v31 = *(uint32_t *)a2;
  if ( v2 > 0 )
  {
    v4 = *((uint32_t *)self + 1);
    gameswf::array_gameswf_TextGlyphRecord_2b5322::resize(self, v4 + v2);
    v26 = v31;
    v29 = 0;
    v33 = 60 * v4 - v31;
    do
    {
      v5 = *(uint32_t *)self + v26 + v33;
      *(uint32_t *)v5 = *(uint32_t *)v26;
      v6 = *(gameswf::RefCounted::Self **)(v26 + 4);
      v7 = *(gameswf::RefCounted::Self **)(v5 + 4);
      if ( v6 != v7 )
      {
        if ( v7 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v5 + 4));
        *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6);
        if ( v6 != nullptr )
          gameswf::RefCounted::addRef(v6);
      }
      v8 = *(uint32_t *)(v5 + 48);
      v9 = (uint32_t *)(v5 + 44);
      *(uint32_t *)(v5 + 8) = *(uint32_t *)(v26 + 8);
      *(uint8_t *)(v5 + 12) = *(uint8_t *)(v26 + 12);
      *(uint32_t *)(v5 + 16) = *(uint32_t *)(v26 + 16);
      *(uint32_t *)(v5 + 20) = *(uint32_t *)(v26 + 20);
      *(uint32_t *)(v5 + 24) = *(uint32_t *)(v26 + 24);
      *(uint32_t *)(v5 + 28) = *(uint32_t *)(v26 + 28);
      *(uint8_t *)(v5 + 32) = *(uint8_t *)(v26 + 32);
      *(uint8_t *)(v5 + 33) = *(uint8_t *)(v26 + 33);
      *(uint8_t *)(v5 + 34) = *(uint8_t *)(v26 + 34);
      *(uint8_t *)(v5 + 35) = *(uint8_t *)(v26 + 35);
      *(uint32_t *)(v5 + 36) = *(uint32_t *)(v26 + 36);
      *(uint32_t *)(v5 + 40) = *(uint32_t *)(v26 + 40);
      v10 = *(uint32_t *)(v26 + 48);
      v28 = v10;
      if ( v10 < v8 )
      {
        v30 = v5;
        v11 = (uint32_t *)(v5 + 44);
        v27 = v8;
        v12 = *(uint32_t *)(v26 + 48);
        v13 = 44 * v10;
        do
        {
          if ( *(uint32_t *)(*v11 + v13 + 4) != 0 )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*v11 + v13 + 4));
          ++v12;
          v13 += 44;
        }
        while ( v12 != v27 );
        v9 = v11;
        v8 = v27;
        v5 = v30;
      }
      result = v28;
      if ( v28 != 0 )
      {
        result = *(uint32_t *)(v5 + 52);
        if ( v28 > result && *(uint32_t *)(v5 + 56) == 0 )
        {
          v21 = v28 + (v28 >> 1);
          *(uint32_t *)(v5 + 52) = v21;
          if ( v21 != 0 )
          {
            v22 = *(gameswf::Self **)(v5 + 44);
            if ( v22 != nullptr )
              result = (int)(uintptr_t)(gameswf::realloc_internal(v22, 44 * v21, 44 * result));
            else
              result = gameswf::malloc_internal(44 * v21);
            *(uint32_t *)(v5 + 44) = result;
          }
          else
          {
            if ( *(uint32_t *)(v5 + 44) != 0 )
              result = gameswf::free_internal(*(gameswf::Self **)(v5 + 44));
            *(uint32_t *)(v5 + 44) = 0;
          }
        }
      }
      if ( v28 > v8 )
      {
        v14 = 44 * v8;
        do
        {
          result = *v9 + v14;
          if ( result != 0 )
          {
            *(uint32_t *)result = 1140850688;
            *(uint32_t *)(result + 4) = 0;
            *(uint32_t *)(result + 24) = 0;
            *(uint16_t *)(result + 28) = 0;
            *(uint16_t *)(result + 30) = -1;
            *(uint16_t *)(result + 32) = 0;
            *(uint8_t *)(result + 34) = 0;
            *(uint32_t *)(result + 36) = 0;
            *(uint32_t *)(result + 40) = 0;
          }
          ++v8;
          v14 += 44;
        }
        while ( v8 != v28 );
      }
      *(uint32_t *)(v5 + 48) = v28;
      if ( v28 > 0 )
      {
        v15 = 0;
        do
        {
          v16 = *v9 + 44 * v15;
          v17 = *(uint32_t *)(v26 + 44) + 44 * v15;
          v18 = *(gameswf::RefCounted::Self **)(v16 + 4);
          *(uint32_t *)v16 = *(uint32_t *)v17;
          v19 = *(gameswf::RefCounted::Self **)(v17 + 4);
          if ( v19 != v18 )
          {
            if ( v18 != nullptr )
            {
              v23 = v17;
              v25 = *(gameswf::RefCounted::Self **)(v17 + 4);
              gameswf::RefCounted::dropRef(v18);
              v19 = v25;
              v17 = v23;
            }
            *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v19);
            if ( v19 != nullptr )
            {
              v24 = v17;
              gameswf::RefCounted::addRef(v19);
              v17 = v24;
            }
          }
          ++v15;
          *(uint32_t *)(v16 + 8) = *(uint32_t *)(v17 + 8);
          *(uint32_t *)(v16 + 12) = *(uint32_t *)(v17 + 12);
          *(uint32_t *)(v16 + 16) = *(uint32_t *)(v17 + 16);
          *(uint32_t *)(v16 + 20) = *(uint32_t *)(v17 + 20);
          *(uint32_t *)(v16 + 24) = *(uint32_t *)(v17 + 24);
          *(uint16_t *)(v16 + 28) = *(uint16_t *)(v17 + 28);
          *(uint16_t *)(v16 + 30) = *(uint16_t *)(v17 + 30);
          *(uint16_t *)(v16 + 32) = *(uint16_t *)(v17 + 32);
          *(uint8_t *)(v16 + 34) = *(uint8_t *)(v17 + 34);
          v20 = *(uint32_t *)(v17 + 40);
          result = *(uint32_t *)(v17 + 36);
          *(uint32_t *)(v16 + 40) = v20;
          *(uint32_t *)(v16 + 36) = result;
        }
        while ( v15 < v9[1] );
      }
      ++v29;
      v26 += 60;
    }
    while ( v29 != v32 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_TextAttributes_8af716::resize  (binary VA: 0x1109940)
// Original: gameswf::array<gameswf::TextAttributes>::resize
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_TextAttributes_8af716::resize(gameswf::array<gameswf::TextAttributes> *self, int a2)
{
  int v2;
  int v3;
  int v4;
  gameswf::RefCounted::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = *((uint32_t *)self + 1);
  if ( v2 > a2 )
  {
    v3 = 44 * a2;
    v4 = a2;
    do
    {
      v5 = *(gameswf::RefCounted::Self **)(*(uint32_t *)self + v3);
      if ( v5 != nullptr )
      {
        v11 = v4;
        v10 = v3;
        gameswf::RefCounted::dropRef(v5);
        v3 = v10;
        v4 = v11;
      }
      ++v4;
      v3 += 44;
    }
    while ( v4 != v2 );
  }
  if ( a2 != 0 )
  {
    v6 = *((uint32_t *)self + 2);
    if ( a2 > v6 && *((uint32_t *)self + 3) == 0 )
    {
      v9 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v9;
      if ( v9 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 44 * v9, 44 * v6));
        else
          *(uint32_t *)self = gameswf::malloc_internal(44 * v9);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  if ( v2 < a2 )
  {
    v7 = 44 * v2;
    do
    {
      v8 = *(uint32_t *)self + v7;
      if ( v8 != 0 )
      {
        *(uint32_t *)v8 = 0;
        *(uint32_t *)(v8 + 4) = 12;
        *(uint8_t *)(v8 + 8) = 0;
        *(uint8_t *)(v8 + 9) = 0;
        *(uint8_t *)(v8 + 10) = 0;
        *(uint8_t *)(v8 + 11) = 1;
        *(uint8_t *)(v8 + 12) = 0;
        *(uint8_t *)(v8 + 13) = 1;
        *(uint32_t *)(v8 + 16) = 0;
        *(uint32_t *)(v8 + 20) = 0;
        *(uint32_t *)(v8 + 24) = 0;
        *(uint32_t *)(v8 + 28) = 0;
        *(uint32_t *)(v8 + 32) = 0;
        *(uint32_t *)(v8 + 36) = 0;
        *(uint32_t *)(v8 + 40) = 0;
      }
      ++v2;
      v7 += 44;
    }
    while ( v2 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Glyph_bb2b5c::opAssign  (binary VA: 0x1109b50)
// Original: gameswf::array<gameswf::Glyph>::operator=
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_Glyph_bb2b5c::opAssign(gameswf::array<gameswf::Glyph> *self, const gameswf::array<gameswf::Glyph> *a2)
{
  int v2;
  int v3;
  int v4;
  gameswf::RefCounted::Self *v5;
  gameswf::RefCounted::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  gameswf::RefCounted::Self *v11;

  gameswf::array_gameswf_Glyph_bb2b5c::resize(self, *((uint32_t *)a2 + 1));
  if ( *((int *)self + 1) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(uint32_t *)self + 44 * v2;
      v4 = *(uint32_t *)a2 + 44 * v2;
      v5 = *(gameswf::RefCounted::Self **)(v3 + 4);
      *(uint32_t *)v3 = *(uint32_t *)v4;
      v6 = *(gameswf::RefCounted::Self **)(v4 + 4);
      if ( v6 != v5 )
      {
        if ( v5 != nullptr )
        {
          v9 = v4;
          v11 = *(gameswf::RefCounted::Self **)(v4 + 4);
          gameswf::RefCounted::dropRef(v5);
          v6 = v11;
          v4 = v9;
        }
        *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v6);
        if ( v6 != nullptr )
        {
          v10 = v4;
          gameswf::RefCounted::addRef(v6);
          v4 = v10;
        }
      }
      ++v2;
      *(uint32_t *)(v3 + 8) = *(uint32_t *)(v4 + 8);
      *(uint32_t *)(v3 + 12) = *(uint32_t *)(v4 + 12);
      *(uint32_t *)(v3 + 16) = *(uint32_t *)(v4 + 16);
      *(uint32_t *)(v3 + 20) = *(uint32_t *)(v4 + 20);
      *(uint32_t *)(v3 + 24) = *(uint32_t *)(v4 + 24);
      *(uint16_t *)(v3 + 28) = *(uint16_t *)(v4 + 28);
      *(uint16_t *)(v3 + 30) = *(uint16_t *)(v4 + 30);
      *(uint16_t *)(v3 + 32) = *(uint16_t *)(v4 + 32);
      *(uint8_t *)(v3 + 34) = *(uint8_t *)(v4 + 34);
      v7 = *(uint32_t *)(v4 + 40);
      v8 = *(uint32_t *)(v4 + 36);
      *(uint32_t *)(v3 + 40) = v7;
      *(uint32_t *)(v3 + 36) = v8;
    }
    while ( *((uint32_t *)self + 1) > v2 );
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Transform_9f8f44::resize  (binary VA: 0x11633a0)
// Original: gameswf::array<gameswf::Transform>::resize
// ----------------------------------------------------------------------------
int gameswf::array_gameswf_Transform_9f8f44::resize(gameswf::array<gameswf::Transform::Self> *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  uint16_t *v7;
  unsigned int v8;
  uint16_t *v9;
  int v10;
  int v11;
  int v12;

  v2 = *((uint32_t *)self + 1);
  if ( a2 != 0 )
  {
    v3 = *((uint32_t *)self + 2);
    if ( a2 > v3 && *((uint32_t *)self + 3) == 0 )
    {
      v11 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v11;
      if ( v11 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, v11 << 6, v3 << 6));
        else
          *(uint32_t *)self = gameswf::malloc_internal(v11 << 6);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  v4 = v2 << 6;
  result = 0;
  v12 = v2;
  if ( v2 >= a2 )
  {
    v10 = a2;
  }
  else
  {
    do
    {
      v6 = *(uint32_t *)self + v4;
      if ( v6 != 0 )
      {
        v7 = (uint16_t *)(*(uint32_t *)self + v4);
        v8 = 64;
        if ( (v6 & 1) != 0 )
        {
          *(uint8_t *)v6 = 0;
          v7 = (uint16_t *)(v6 + 1);
          LOWORD(v8) = 63;
        }
        if ( ((uint8_t)(uintptr_t)v7 & 2) != 0 )
        {
          *v7 = 0;
          v8 -= 2;
          ++v7;
        }
        memset(v7, 0, 4 * (v8 >> 2));
        v9 = &v7[2 * (v8 >> 2)];
        if ( (v8 & 2) != 0 )
          *v9++ = 0;
        if ( (v8 & 1) != 0 )
          *(uint8_t *)v9 = 0;
        *(uint32_t *)(v6 + 60) = 1065353216;
        *(uint32_t *)(v6 + 40) = 1065353216;
        *(uint32_t *)(v6 + 20) = 1065353216;
        *(uint32_t *)v6 = 1065353216;
      }
      ++v12;
      v4 += 64;
      v10 = a2;
    }
    while ( v12 != a2 );
  }
  *((uint32_t *)self + 1) = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_BlendMode_id_db5dba::reserve  (binary VA: 0x1163990)
// Original: gameswf::array<gameswf::BlendMode::id>::reserve
// ----------------------------------------------------------------------------
void * gameswf::array_gameswf_BlendMode_id_db5dba::reserve(gameswf::array<gameswf::BlendMode::id> *self, int a2)
{
  void *result;
  int v3;

  result = (void *)a2;
  if ( *((uint32_t *)self + 3) == 0 )
  {
    v3 = *((uint32_t *)self + 2);
    *((uint32_t *)self + 2) = a2;
    if ( a2 != 0 )
    {
      if ( *(uint32_t *)self != 0 )
        result = gameswf::realloc_internal(*(gameswf::Self **)self, 4 * a2, 4 * v3);
      else
        result = (void *)gameswf::malloc_internal(4 * a2);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      result = *(void **)self;
      if ( *(uint32_t *)self != 0 )
        result = (void *)gameswf::free_internal(*(gameswf::Self **)self);
      *(uint32_t *)self = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_ASEventDispatche_897fc7::resize  (binary VA: 0x116b590)
// Original: gameswf::array<gameswf::ASEventDispatcher::Entry>::resize
// ----------------------------------------------------------------------------
int gameswf::array_gameswf_ASEventDispatche_897fc7::resize(gameswf::array<gameswf::ASEventDispatcher::Entry> *self, int a2)
{
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  gameswf::Self **v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = self;
  v3 = a2;
  result = *((uint32_t *)self + 1);
  v12 = result;
  if ( result > a2 )
  {
    v5 = a2;
    v6 = 24 * a2;
    do
    {
      v7 = v6;
      ++v5;
      v6 += 24;
      v8 = (gameswf::Self **)(*(uint32_t *)self + v7);
      sub_7E5E90(v8 + 2);
      result = (int)(uintptr_t)(sub_7E5E90(v8));
    }
    while ( v5 != v12 );
    v2 = self;
    v3 = a2;
  }
  if ( v3 != 0 )
  {
    result = *((uint32_t *)v2 + 2);
    if ( v3 > result && *((uint32_t *)v2 + 3) == 0 )
    {
      v11 = v3 + (v3 >> 1);
      *((uint32_t *)v2 + 2) = v11;
      if ( v11 != 0 )
      {
        if ( *(uint32_t *)v2 != 0 )
          result = (int)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)v2, 24 * v11, 24 * result));
        else
          result = gameswf::malloc_internal(24 * v11);
        *(uint32_t *)v2 = result;
      }
      else
      {
        if ( *(uint32_t *)v2 != 0 )
          result = gameswf::free_internal(*(gameswf::Self **)v2);
        *(uint32_t *)v2 = 0;
      }
    }
  }
  if ( v12 < v3 )
  {
    v9 = v12;
    v10 = 24 * v12;
    do
    {
      result = *(uint32_t *)v2 + v10;
      if ( result != 0 )
      {
        *(uint32_t *)result = 0;
        *(uint32_t *)(result + 4) = 0;
        *(uint32_t *)(result + 8) = 0;
        *(uint32_t *)(result + 12) = 0;
        *(uint32_t *)(result + 16) = 0;
        *(uint8_t *)(result + 20) = 0;
      }
      ++v9;
      v10 += 24;
    }
    while ( v9 != v3 );
  }
  *((uint32_t *)v2 + 1) = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_ASEventDispatche_897fc7::remove  (binary VA: 0x116b6f0)
// Original: gameswf::array<gameswf::ASEventDispatcher::Entry>::remove
// ----------------------------------------------------------------------------
void * gameswf::array_gameswf_ASEventDispatche_897fc7::remove(gameswf::array<gameswf::ASEventDispatcher::Entry> *self, int a2)
{
  void *result;
  gameswf::Self **v3;

  if ( *((uint32_t *)self + 1) == 1 )
    return (void *)gameswf::array_gameswf_ASEventDispatche_897fc7::resize(self, 0);
  v3 = (gameswf::Self **)(24 * a2 + *(uint32_t *)self);
  sub_7E5E90(v3 + 2);
  sub_7E5E90(v3);
  result = memmove(
             (void *)(*(uint32_t *)self + 24 * a2),
             (const void *)(*(uint32_t *)self + 8 * (3 * a2 + 3)),
             24 * (*((uint32_t *)self + 1) + ~a2));
  --*((uint32_t *)self + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_ASEventDispatche_897fc7::opAssign  (binary VA: 0x116b7a0)
// Original: gameswf::array<gameswf::ASEventDispatcher::Entry>::operator=
// ----------------------------------------------------------------------------
int gameswf::array_gameswf_ASEventDispatche_897fc7::opAssign(gameswf::array<gameswf::ASEventDispatcher::Entry> *self, const gameswf::array<gameswf::ASEventDispatcher::Entry> *a2)
{
  int result;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v8;
  int v9;

  result = gameswf::array_gameswf_ASEventDispatche_897fc7::resize(self, *((uint32_t *)a2 + 1));
  v3 = self;
  if ( *((int *)self + 1) > 0 )
  {
    v4 = 0;
    result = 0;
    do
    {
      v5 = v4;
      v6 = v4 + *(uint32_t *)v3;
      v4 += 24;
      v7 = *(uint32_t *)a2 + v5;
      v9 = result;
      v8 = v3;
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v6, *(gameswf::Self **)v7);
      *(uint32_t *)(v6 + 4) = *(uint32_t *)(v7 + 4);
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v6 + 8), *(gameswf::Self **)(v7 + 8));
      *(uint32_t *)(v6 + 12) = *(uint32_t *)(v7 + 12);
      *(uint32_t *)(v6 + 16) = *(uint32_t *)(v7 + 16);
      *(uint8_t *)(v6 + 20) = *(uint8_t *)(v7 + 20);
      v3 = v8;
      result = v9 + 1;
    }
    while ( *((uint32_t *)v8 + 1) > v9 + 1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::array_gameswf_Font_zone_record_26d2b5::resize  (binary VA: 0x118ab60)
// Original: gameswf::array<gameswf::Font::zone_record>::resize
// ----------------------------------------------------------------------------
void gameswf::array_gameswf_Font_zone_record_26d2b5::resize(gameswf::array<gameswf::Font::zone_record> *self, int a2)
{
  int v2;
  int v3;
  gameswf::Self **v4;
  int v5;
  int v6;
  uint32_t *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = *((uint32_t *)self + 1);
  if ( v16 > a2 )
  {
    v2 = a2;
    v3 = 20 * a2;
    do
    {
      v4 = (gameswf::Self **)(*(uint32_t *)self + v3);
      v5 = (int)(uintptr_t)(v4[1]);
      if ( v5 < 0 )
      {
        v6 = 8 * v5;
        do
        {
          v7 = (uint32_t *)((char *)*v4 + v6);
          if ( v7 != nullptr )
          {
            *v7 = 0;
            v7[1] = 0;
          }
          v6 += 8;
          ++v5;
        }
        while ( v5 != 0 );
      }
      v8 = v4[3];
      v4[1] = nullptr;
      if ( v8 == nullptr )
      {
        v9 = *v4;
        v10 = *v4 == nullptr;
        v4[2] = nullptr;
        if ( !v10 )
          gameswf::free_internal(v9);
        *v4 = nullptr;
      }
      ++v2;
      v3 += 20;
    }
    while ( v2 != v16 );
  }
  if ( a2 != 0 )
  {
    v11 = *((uint32_t *)self + 2);
    if ( a2 > v11 && *((uint32_t *)self + 3) == 0 )
    {
      v15 = a2 + (a2 >> 1);
      *((uint32_t *)self + 2) = v15;
      if ( v15 != 0 )
      {
        if ( *(uint32_t *)self != 0 )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 20 * v15, 20 * v11));
        else
          *(uint32_t *)self = gameswf::malloc_internal(20 * v15);
      }
      else
      {
        if ( *(uint32_t *)self != 0 )
          gameswf::free_internal(*(gameswf::Self **)self);
        *(uint32_t *)self = 0;
      }
    }
  }
  if ( v16 < a2 )
  {
    v12 = v16;
    v13 = 20 * v16;
    do
    {
      v14 = *(uint32_t *)self + v13;
      if ( v14 != 0 )
      {
        *(uint32_t *)v14 = 0;
        *(uint32_t *)(v14 + 4) = 0;
        *(uint32_t *)(v14 + 8) = 0;
        *(uint32_t *)(v14 + 12) = 0;
        *(uint8_t *)(v14 + 16) = 0;
        *(uint8_t *)(v14 + 17) = 0;
      }
      ++v12;
      v13 += 20;
    }
    while ( v12 != a2 );
  }
  *((uint32_t *)self + 1) = a2;
}


