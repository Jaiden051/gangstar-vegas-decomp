#include "Core/Utils/DecompTypes.h"
#include "gameswf_class_info.h"

// ----------------------------------------------------------------------------
// Function: gameswf::class_info::read  (binary VA: 0x1176ba0)
// Original: gameswf::class_info::read
// ----------------------------------------------------------------------------
char gameswf::class_info::read(gameswf::class_info::Self *self, gameswf::Stream::Self *a2, gameswf::abc_def::Self *a3)
{
  int VU32;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  gameswf::traits_info::Self *v13;
  int v15;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(a3);
  *((uint16_t *)self + 8) = 1;
  *((uint32_t *)self + 5) = gameswf::Stream::readVU32(a2);
  VU32 = gameswf::Stream::readVU32(a2);
  v15 = VU32;
  if ( VU32 > 0 )
  {
    if ( *((uint32_t *)self + 1) == 0 )
    {
      v4 = VU32 << 8 >> 8;
      *((uint32_t *)self + 2) = v4 & 0xFFFFFF | *((uint32_t *)self + 2) & 0xFF000000;
      v5 = gameswf::malloc_internal(20 * v4);
      *((uint8_t *)self + 11) = 1;
      v6 = *((uint32_t *)self + 2) << 8;
      *((uint32_t *)self + 1) = v5;
      v7 = v6 >> 8;
      if ( v7 > 0 )
      {
        v8 = 0;
        v9 = 0;
        while ( 1 )
        {
          v10 = (uint32_t *)(v8 + v5);
          if ( v10 != nullptr )
          {
            v10[1] = 0;
            v10[2] = 0;
            v10[3] = 0;
            v10[4] = 0;
            v7 = (int)(*((uint32_t *)self + 2) << 8) >> 8;
          }
          ++v9;
          v8 += 20;
          if ( v9 >= v7 )
            break;
          v5 = *((uint32_t *)self + 1);
        }
      }
    }
    v11 = 0;
    v12 = 0;
    do
    {
      ++v11;
      v13 = (gameswf::traits_info::Self *)(v12 + *((uint32_t *)self + 1));
      v12 += 20;
      LOBYTE(VU32) = gameswf::traits_info::read(v13, a2);
    }
    while ( v11 < v15 );
  }
  return VU32;
}


