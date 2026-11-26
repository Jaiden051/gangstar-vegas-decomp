#include "Core/Utils/DecompTypes.h"
#include "gameswf_instance_info.h"

// ----------------------------------------------------------------------------
// Function: gameswf::instance_info::read  (binary VA: 0x1176980)
// Original: gameswf::instance_info::read
// ----------------------------------------------------------------------------
char gameswf::instance_info::read(gameswf::instance_info::Self *self, gameswf::Stream::Self *a2, gameswf::abc_def::Self *a3)
{
  char U8;
  int VU32;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  int v25;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(a3);
  *((uint16_t *)self + 8) = 0;
  *((uint32_t *)self + 6) = gameswf::Stream::readVU32(a2);
  *((uint32_t *)self + 7) = gameswf::Stream::readVU32(a2);
  U8 = gameswf::Stream::readU8(a2);
  *((uint8_t *)self + 48) = U8;
  if ( (U8 & 8) != 0 )
    *((uint32_t *)self + 8) = gameswf::Stream::readVU32(a2);
  VU32 = gameswf::Stream::readVU32(a2);
  v25 = VU32;
  if ( VU32 > 0 )
  {
    if ( *((uint32_t *)self + 9) == 0 )
    {
      v5 = VU32 << 8 >> 8;
      *((uint32_t *)self + 10) = v5 & 0xFFFFFF | *((uint32_t *)self + 10) & 0xFF000000;
      v6 = gameswf::malloc_internal(4 * v5);
      *((uint8_t *)self + 43) = 1;
      v7 = *((uint32_t *)self + 10) << 8;
      *((uint32_t *)self + 9) = v6;
      v8 = v7 >> 8;
      if ( v8 > 0 )
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = (uint32_t *)(v6 + 4 * v9);
          if ( v10 != nullptr )
          {
            *v10 = 0;
            v8 = (int)(*((uint32_t *)self + 10) << 8) >> 8;
          }
          if ( ++v9 >= v8 )
            break;
          v6 = *((uint32_t *)self + 9);
        }
      }
    }
    v11 = 0;
    do
    {
      v12 = (int *)(*((uint32_t *)self + 9) + 4 * v11++);
      *v12 = gameswf::Stream::readVU32(a2);
    }
    while ( v11 < v25 );
  }
  *((uint32_t *)self + 11) = gameswf::Stream::readVU32(a2);
  v13 = gameswf::Stream::readVU32(a2);
  v14 = v13;
  if ( v13 > 0 )
  {
    if ( *((uint32_t *)self + 1) == 0 )
    {
      *((uint32_t *)self + 2) = (v13 << 8 >> 8) & 0xFFFFFF | *((uint32_t *)self + 2) & 0xFF000000;
      v15 = gameswf::malloc_internal(20 * (v13 << 8 >> 8));
      *((uint8_t *)self + 11) = 1;
      v16 = *((uint32_t *)self + 2) << 8;
      *((uint32_t *)self + 1) = v15;
      v17 = v16 >> 8;
      if ( v17 > 0 )
      {
        v18 = 0;
        v19 = 0;
        while ( 1 )
        {
          v20 = (uint32_t *)(v18 + v15);
          if ( v20 != nullptr )
          {
            v20[1] = 0;
            v20[2] = 0;
            v20[3] = 0;
            v20[4] = 0;
            v17 = (int)(*((uint32_t *)self + 2) << 8) >> 8;
          }
          ++v19;
          v18 += 20;
          if ( v19 >= v17 )
            break;
          v15 = *((uint32_t *)self + 1);
        }
      }
    }
    v21 = 0;
    v22 = 0;
    do
    {
      v23 = v22;
      ++v21;
      v22 += 20;
      LOBYTE(v13) = gameswf::traits_info::read((gameswf::traits_info::Self *)(*((uint32_t *)self + 1) + v23), a2);
    }
    while ( v21 < v14 );
  }
  return v13;
}


