#include "Core/Utils/DecompTypes.h"
#include "gameswf_VideoStreamDefinition.h"

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamDefinition::getBoundInternal  (binary VA: 0x1111600)
// Original: gameswf::VideoStreamDefinition::getBoundInternal
// ----------------------------------------------------------------------------
gameswf::Rect::Self * gameswf::VideoStreamDefinition::getBoundInternal(gameswf::VideoStreamDefinition::Self *self, gameswf::Rect::Self *a2)
{
  *(uint32_t *)a2 = 0;
  *((uint32_t *)a2 + 2) = 0;
  *((float *)a2 + 1) = (float)((float)0 * 65536.0) + (float)*((uint16_t *)self + 14);
  *((float *)a2 + 3) = (float)((float)0 * 65536.0) + (float)*((uint16_t *)self + 15);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamDefinition::read  (binary VA: 0x1111b60)
// Original: gameswf::VideoStreamDefinition::read
// ----------------------------------------------------------------------------
int gameswf::VideoStreamDefinition::read(gameswf::VideoStreamDefinition::Self *self, gameswf::Stream::Self *a2, int a3)
{
  int result;
  uint16_t U16;
  int v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  gameswf::Self *v10;
  int i;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;

  result = a3;
  if ( a3 == 60 )
  {
    U16 = gameswf::Stream::readU16(a2);
    v5 = U16;
    v6 = *((uint32_t *)self + 10);
    if ( U16 != 0 )
    {
      v7 = *((uint32_t *)self + 11);
      if ( v5 > v7 && *((uint32_t *)self + 12) == 0 )
      {
        v8 = v5 + (v5 >> 1);
        v9 = v8 == 0;
        v13 = v8;
        *((uint32_t *)self + 11) = v8;
        v10 = *((gameswf::Self **)self + 9);
        if ( v9 )
        {
          if ( v10 != nullptr )
          {
            v14 = v5;
            gameswf::free_internal(v10);
            v5 = v14;
          }
          *((uint32_t *)self + 9) = 0;
        }
        else
        {
          v15 = v5;
          if ( v10 != nullptr )
            *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*((gameswf::Self **)self + 9), 4 * v13, 4 * v7));
          else
            *((uint32_t *)self + 9) = gameswf::malloc_internal(4 * v13);
          v5 = v15;
        }
      }
    }
    for ( i = 4 * v6; v5 > v6; i += 4 )
    {
      v12 = (uint32_t *)(*((uint32_t *)self + 9) + i);
      if ( v12 != nullptr )
        *v12 = 0;
      ++v6;
    }
    *((uint32_t *)self + 10) = v5;
    *((uint16_t *)self + 14) = gameswf::Stream::readU16(a2);
    *((uint16_t *)self + 15) = gameswf::Stream::readU16(a2);
    gameswf::Stream::readUInt(a2, 5);
    *((uint8_t *)self + 32) = gameswf::Stream::readUInt(a2, 2);
    *((uint8_t *)self + 33) = gameswf::Stream::readUInt(a2, 1) != 0;
    result = gameswf::Stream::readU8(a2);
    *((uint8_t *)self + 34) = result;
  }
  else if ( a3 == 61 )
  {
    result = (uint16_t)gameswf::Stream::readU16(a2);
    *(uint32_t *)(*((uint32_t *)self + 9) + 4 * (uint16_t)result) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamDefinition::createCharacterInstance  (binary VA: 0x1111f60)
// Original: gameswf::VideoStreamDefinition::createCharacterInstance
// ----------------------------------------------------------------------------
gameswf::VideoStreamInstance::Self * gameswf::VideoStreamDefinition::createCharacterInstance(gameswf::VideoStreamDefinition::Self *self, gameswf::Character::Self *a2, char *a3)
{
  gameswf::Player::Self *v3;
  gameswf::Self *v4;
  gameswf::VideoStreamInstance::Self *v5;

  v3 = *((gameswf::Player::Self **)self + 6);
  if ( v3 != nullptr )
  {
    v4 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v3 = nullptr;
    }
  }
  v5 = (gameswf::VideoStreamInstance::Self *)opNew(0xE0u);
  gameswf::VideoStreamInstance::Construct(v5, v3, self, a2, a3);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamDefinition::is  (binary VA: 0x1112010)
// Original: gameswf::VideoStreamDefinition::is
// ----------------------------------------------------------------------------
bool gameswf::VideoStreamDefinition::is(gameswf::VideoStreamDefinition::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 16 )
    return a2 == 14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamDefinition::Destroy  (binary VA: 0x1112060)
// Original: gameswf::VideoStreamDefinition::~VideoStreamDefinition
// ----------------------------------------------------------------------------
void gameswf::VideoStreamDefinition::Destroy(gameswf::VideoStreamDefinition::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  bool v7;
  gameswf::Self *v8;

  v1 = *((uint32_t *)self + 10);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F8C8);
  if ( v1 < 0 )
  {
    v2 = 4 * v1;
    do
    {
      v3 = (uint32_t *)(*((uint32_t *)self + 9) + v2);
      if ( v3 != nullptr )
        *v3 = 0;
      v2 += 4;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v4 = *((uint32_t *)self + 12);
  *((uint32_t *)self + 10) = 0;
  if ( v4 == 0 )
  {
    v5 = *((gameswf::Self **)self + 9);
    *((uint32_t *)self + 11) = 0;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *((uint32_t *)self + 9) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E728);
  v6 = *((gameswf::Self **)self + 5);
  if ( v6 != nullptr )
  {
    v7 = (*(uint16_t *)v6)-- == 1;
    if ( v7 )
      gameswf::free_internal(v6);
  }
  v8 = *((gameswf::Self **)self + 3);
  if ( v8 != nullptr )
  {
    v7 = (*(uint16_t *)v8)-- == 1;
    if ( v7 )
      gameswf::free_internal(v8);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamDefinition::Destroy_ea1112160  (binary VA: 0x1112160)
// Original: gameswf::VideoStreamDefinition::~VideoStreamDefinition
// ----------------------------------------------------------------------------
void gameswf::VideoStreamDefinition::Destroy_ea1112160(gameswf::VideoStreamDefinition::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  bool v7;
  gameswf::Self *v8;

  v1 = *((uint32_t *)self + 10);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F8C8);
  if ( v1 < 0 )
  {
    v2 = 4 * v1;
    do
    {
      v3 = (uint32_t *)(*((uint32_t *)self + 9) + v2);
      if ( v3 != nullptr )
        *v3 = 0;
      v2 += 4;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v4 = *((uint32_t *)self + 12);
  *((uint32_t *)self + 10) = 0;
  if ( v4 == 0 )
  {
    v5 = *((gameswf::Self **)self + 9);
    *((uint32_t *)self + 11) = 0;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *((uint32_t *)self + 9) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E728);
  v6 = *((gameswf::Self **)self + 5);
  if ( v6 != nullptr )
  {
    v7 = (*(uint16_t *)v6)-- == 1;
    if ( v7 )
      gameswf::free_internal(v6);
  }
  v8 = *((gameswf::Self **)self + 3);
  if ( v8 != nullptr )
  {
    v7 = (*(uint16_t *)v8)-- == 1;
    if ( v7 )
      gameswf::free_internal(v8);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
  opDelete(self);
}


