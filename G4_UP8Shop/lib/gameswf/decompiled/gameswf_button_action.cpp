#include "Core/Utils/DecompTypes.h"
#include "gameswf_button_action.h"

// ----------------------------------------------------------------------------
// Function: gameswf::button_action::Destroy  (binary VA: 0x11827e0)
// Original: gameswf::button_action::~button_action
// ----------------------------------------------------------------------------
void gameswf::button_action::Destroy(gameswf::button_action::Self *self)
{
  int i;
  gameswf::Self *v2;
  int v3;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  gameswf::Self *v14;
  int v15;

  v15 = *((uint32_t *)self + 2);
  if ( v15 > 0 )
  {
    for ( i = 0; i != v15; ++i )
    {
      v2 = *(gameswf::Self **)(*((uint32_t *)self + 1) + 4 * i);
      if ( v2 != nullptr )
      {
        v3 = *(uint32_t *)v2;
        if ( *(uint32_t *)v2 != 0 && (*(uint32_t *)(v3 + 16))-- == 1 )
        {
          v5 = *(uint32_t *)(v3 + 24);
          if ( v5 < 0 )
          {
            v6 = 4 * v5;
            do
            {
              v7 = (uint32_t *)(*(uint32_t *)(v3 + 20) + v6);
              if ( v7 != nullptr )
                *v7 = 0;
              v6 += 4;
              ++v5;
            }
            while ( v5 != 0 );
          }
          v8 = *(uint32_t *)(v3 + 32);
          *(uint32_t *)(v3 + 24) = 0;
          if ( v8 == 0 )
          {
            v9 = *(gameswf::Self **)(v3 + 20);
            *(uint32_t *)(v3 + 28) = 0;
            if ( v9 != nullptr )
              gameswf::free_internal(v9);
            *(uint32_t *)(v3 + 20) = 0;
          }
          gameswf::MemBuf::Destroy((gameswf::Self **)v3);
          gameswf::free_internal((gameswf::Self *)v3);
        }
        gameswf::free_internal(v2);
      }
    }
    v15 = *((uint32_t *)self + 2);
  }
  if ( v15 < 0 )
  {
    v10 = v15;
    v11 = 4 * v15;
    do
    {
      v12 = (uint32_t *)(*((uint32_t *)self + 1) + v11);
      if ( v12 != nullptr )
        *v12 = 0;
      v11 += 4;
      ++v10;
    }
    while ( v10 != 0 );
  }
  v13 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 2) = 0;
  if ( v13 == 0 )
  {
    *((uint32_t *)self + 3) = 0;
    v14 = *((gameswf::Self **)self + 1);
    if ( v14 != nullptr )
      gameswf::free_internal(v14);
    *((uint32_t *)self + 1) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_action::read  (binary VA: 0x1182da0)
// Original: gameswf::button_action::read
// ----------------------------------------------------------------------------
gameswf::ActionBuffer::Self ** gameswf::button_action::read(gameswf::button_action::Self *self, gameswf::Stream::Self *a2, int a3)
{
  gameswf::ActionBuffer::Self *v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  gameswf::ActionBuffer::Self **result;
  int v9;

  if ( a3 == 7 )
    *(uint32_t *)self = 8;
  else
    *(uint32_t *)self = (uint16_t)gameswf::Stream::readU16(a2);
  v3 = (gameswf::ActionBuffer::Self *)opNew(0xCu);
  gameswf::ActionBuffer::Construct(v3);
  gameswf::ActionBuffer::read((gameswf::MemBuf::Self ***)v3, a2);
  v4 = *((uint32_t *)self + 2);
  v5 = *((uint32_t *)self + 3);
  v6 = v4 + 1;
  if ( v4 + 1 <= v5 || *((uint32_t *)self + 4) != 0 )
  {
    v7 = *((char **)self + 1);
  }
  else
  {
    v9 = v6 + (v6 >> 1);
    *((uint32_t *)self + 3) = v9;
    if ( v9 != 0 )
    {
      if ( *((uint32_t *)self + 1) != 0 )
        v7 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 1), 4 * v9, 4 * v5);
      else
        v7 = (char *)gameswf::malloc_internal(4 * v9);
      *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v7);
      v4 = *((uint32_t *)self + 2);
    }
    else
    {
      if ( *((uint32_t *)self + 1) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)self + 1));
        v4 = *((uint32_t *)self + 2);
      }
      *((uint32_t *)self + 1) = 0;
      v7 = nullptr;
    }
  }
  result = (gameswf::ActionBuffer::Self **)&v7[4 * v4];
  if ( result != nullptr )
    *result = v3;
  *((uint32_t *)self + 2) = v6;
  return result;
}


