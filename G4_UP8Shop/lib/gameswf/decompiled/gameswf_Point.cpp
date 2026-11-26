#include "Core/Utils/DecompTypes.h"
#include "gameswf_Point.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Point::bitwiseEqual  (binary VA: 0x1067cb0)
// Original: gameswf::Point::bitwiseEqual
// ----------------------------------------------------------------------------
bool gameswf::Point::bitwiseEqual(gameswf::Point::Self *self, const gameswf::Point::Self *s2)
{
  return memcmp(self, s2, 8u) == 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Point::getLength  (binary VA: 0x1067cf0)
// Original: gameswf::Point::getLength
// ----------------------------------------------------------------------------
long double gameswf::Point::getLength(gameswf::Point::Self *self)
{
  return (float)sqrt((float)((float)(*((float *)self + 1) * *((float *)self + 1))
                           + (float)(*(float *)self * *(float *)self)));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Point::twipsToPixels  (binary VA: 0x1067d30)
// Original: gameswf::Point::twipsToPixels
// ----------------------------------------------------------------------------
void gameswf::Point::twipsToPixels()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Point::pixelsToTwips  (binary VA: 0x1067d40)
// Original: gameswf::Point::pixelsToTwips
// ----------------------------------------------------------------------------
void gameswf::Point::pixelsToTwips()
{
  ;
}


