#include "Core/Utils/DecompTypes.h"
#include "gameswf_Rect.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Rect::read  (binary VA: 0x106a6e0)
// Original: gameswf::Rect::read
// ----------------------------------------------------------------------------
int gameswf::Rect::read(gameswf::Rect::Self *self, gameswf::Stream::Self *a2)
{
  int UInt;
  int result;

  gameswf::Stream::align(a2);
  UInt = gameswf::Stream::readUInt(a2, 5);
  *(float *)self = (float)(int)gameswf::Stream::readSInt(a2, UInt) * 0.05f;
  *((float *)self + 1) = (float)(int)gameswf::Stream::readSInt(a2, UInt) * 0.05f;
  *((float *)self + 2) = (float)(int)gameswf::Stream::readSInt(a2, UInt) * 0.05f;
  result = gameswf::Stream::readSInt(a2, UInt);
  *((float *)self + 3) = (float)result * 0.05f;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Rect::print  (binary VA: 0x106a7b0)
// Original: gameswf::Rect::print
// ----------------------------------------------------------------------------
int gameswf::Rect::print(gameswf::Rect::Self *self)
{
  return gameswf::logMsg(
           (gameswf::Self *)"xmin = %g, ymin = %g, xmax = %g, ymax = %g\n",
           (const char *)COERCE_UNSIGNED_INT64(*(float *)self),
           (uint32_t)HIDWORD(COERCE_UNSIGNED_INT64(*(float *)self)),
           *((float *)self + 2),
           *((float *)self + 1),
           *((float *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Rect::setLerp  (binary VA: 0x106a810)
// Original: gameswf::Rect::setLerp
// ----------------------------------------------------------------------------
gameswf::Rect::Self * gameswf::Rect::setLerp(gameswf::Rect::Self *self, const gameswf::Rect::Self *a2, const gameswf::Rect::Self *a3, float a4)
{
  *(float *)self = (float)((float)(*(float *)a3 - *(float *)a2) * a4) + *(float *)a2;
  *((float *)self + 2) = (float)((float)(*((float *)a3 + 2) - *((float *)a2 + 2)) * a4) + *((float *)a2 + 2);
  *((float *)self + 1) = (float)((float)(*((float *)a3 + 1) - *((float *)a2 + 1)) * a4) + *((float *)a2 + 1);
  *((float *)self + 3) = (float)((float)(*((float *)a3 + 3) - *((float *)a2 + 3)) * a4) + *((float *)a2 + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Rect::twipsToPixels  (binary VA: 0x106a890)
// Original: gameswf::Rect::twipsToPixels
// ----------------------------------------------------------------------------
void gameswf::Rect::twipsToPixels()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Rect::pixelsToTwips  (binary VA: 0x106a8a0)
// Original: gameswf::Rect::pixelsToTwips
// ----------------------------------------------------------------------------
void gameswf::Rect::pixelsToTwips()
{
  ;
}


