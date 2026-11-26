#include "Core/Utils/DecompTypes.h"
#include "gameswf_fixed_array_gameswf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::fixed_array_gameswf_array_gameswf_Ex_b44840::Destroy  (binary VA: 0x10ae800)
// Original: gameswf::fixed_array<gameswf::array<gameswf::ExecuteTag *>>::~fixed_array
// ----------------------------------------------------------------------------
void gameswf::fixed_array_gameswf_array_gameswf_Ex_b44840::Destroy(gameswf::fixed_array<gameswf::array<gameswf::ExecuteTag::Self *>> *self)
{
  int v1;
  int v2;
  int v3;
  gameswf::Self **v4;
  int v5;
  int v6;
  uint32_t *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  bool v10;

  v1 = *(uint32_t *)self;
  v2 = *((uint32_t *)self + 1);
  if ( *(uint32_t *)self != 0 )
  {
    if ( v2 << 8 >> 8 > 0 )
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = (gameswf::Self **)(v1 + 16 * v3);
        v5 = (int)(uintptr_t)(v4[1]);
        if ( v5 < 0 )
        {
          v6 = 4 * v5;
          do
          {
            v7 = (uint32_t *)((char *)*v4 + v6);
            if ( v7 != nullptr )
              *v7 = 0;
            v6 += 4;
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
        v2 = *((uint32_t *)self + 1);
        if ( ++v3 >= v2 << 8 >> 8 )
          break;
        v1 = *(uint32_t *)self;
      }
    }
    if ( *((uint8_t *)self + 7) != 0 )
    {
      gameswf::free_internal(*(gameswf::Self **)self);
      v2 = *((uint32_t *)self + 1);
    }
  }
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = v2 & 0xFF000000;
  *((uint8_t *)self + 7) = 0;
}


