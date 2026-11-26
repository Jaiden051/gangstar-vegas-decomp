#include "Core/Utils/DecompTypes.h"
#include "gameswf_traits_info.h"

// ----------------------------------------------------------------------------
// Function: gameswf::traits_info::read  (binary VA: 0x1176850)
// Original: gameswf::traits_info::read
// ----------------------------------------------------------------------------
char gameswf::traits_info::read(gameswf::traits_info::Self *self, gameswf::Stream::Self *a2)
{
  uint8_t U8;
  char v3;
  int v4;
  int VU32;
  uint8_t v6;
  int v7;
  int v8;

  *(uint32_t *)self = gameswf::Stream::readVU32(a2) & 0xFFFFFF | *(uint32_t *)self & 0xFF000000;
  U8 = gameswf::Stream::readU8(a2);
  v3 = U8 & 0xF;
  v4 = U8 >> 4;
  *((uint8_t *)self + 3) = v3 | (16 * v4);
  switch ( v3 )
  {
    case 0:
    case 6:
      *((uint32_t *)self + 1) = gameswf::Stream::readVU32(a2);
      *((uint32_t *)self + 2) = gameswf::Stream::readVU32(a2);
      VU32 = gameswf::Stream::readVU32(a2);
      *((uint32_t *)self + 3) = VU32;
      if ( VU32 != 0 )
      {
        *((uint8_t *)self + 16) = gameswf::Stream::readU8(a2);
        LOBYTE(v4) = *((uint8_t *)self + 3) >> 4;
        goto LABEL_3;
      }
      v6 = *((uint8_t *)self + 3);
      *((uint8_t *)self + 16) = -1;
      LOBYTE(v4) = v6 >> 4;
      if ( (v4 & 4) != 0 )
        goto LABEL_7;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      *((uint32_t *)self + 1) = gameswf::Stream::readVU32(a2);
      *((uint32_t *)self + 2) = gameswf::Stream::readVU32(a2);
      LOBYTE(v4) = *((uint8_t *)self + 3) >> 4;
    default:
LABEL_3:
      if ( (v4 & 4) != 0 )
      {
LABEL_7:
        v4 = gameswf::Stream::readVU32(a2);
        v7 = v4;
        if ( v4 > 0 )
        {
          v8 = 0;
          do
          {
            ++v8;
            LOBYTE(v4) = gameswf::Stream::readVU32(a2);
          }
          while ( v7 != v8 );
        }
      }
      break;
  }
  return v4;
}


