#include "Core/Utils/DecompTypes.h"
#include "gameswf_button_record.h"

// ----------------------------------------------------------------------------
// Function: gameswf::button_record::read  (binary VA: 0x11826e0)
// Original: gameswf::button_record::read
// ----------------------------------------------------------------------------
int gameswf::button_record::read(long double a1, __m128 a2, gameswf::button_record::Self *self, gameswf::Stream::Self *a4, int a5)
{
  int v5;
  char U8;
  uint16_t U16;
  __m128 v9;
  __m128i v10;
  v5 = 0;
  U8 = gameswf::Stream::readU8(a4);
  if ( U8 != 0 )
  {
    v5 = 1;
    *(uint8_t *)self = (U8 & 0x20) != 0;
    *((uint8_t *)self + 1) = (U8 & 0x10) != 0;
    *((uint8_t *)self + 2) = (U8 & 8) != 0;
    *((uint8_t *)self + 3) = (U8 & 4) != 0;
    *((uint8_t *)self + 4) = (U8 & 2) != 0;
    *((uint8_t *)self + 5) = U8 & 1;
    U16 = gameswf::Stream::readU16(a4);
    *((uint32_t *)self + 3) = 0;
    *((uint32_t *)self + 2) = U16;
    *((uint32_t *)self + 4) = (uint16_t)gameswf::Stream::readU16(a4);
    gameswf::Matrix::read(a2, (gameswf::button_record::Self *)((char *)self + 20), a4);
    if ( a5 == 34 )
    {
      gameswf::CxForm::read_rgba(v9, (gameswf::button_record::Self *)((char *)self + 44), a4);
      if ( *((uint8_t *)self + 1) != 0 )
        gameswf::readFilterList(a1, v10, a4, (gameswf::button_record::Self *)((char *)self + 76));
      v5 = 1;
      if ( *(uint8_t *)self != 0 )
        *((uint32_t *)self + 24) = (uint8_t)gameswf::Stream::readU8(a4);
    }
  }
  return v5;
}


