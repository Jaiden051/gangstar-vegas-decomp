#include "Core/Utils/DecompTypes.h"
#include "gameswf_Color.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Color::read_rgb  (binary VA: 0x106a420)
// Original: gameswf::Color::read_rgb
// ----------------------------------------------------------------------------
int gameswf::Color::read_rgb(gameswf::Color::Self *self, gameswf::Stream::Self *a2)
{
  int result;

  *(uint8_t *)self = gameswf::Stream::readU8(a2);
  *((uint8_t *)self + 1) = gameswf::Stream::readU8(a2);
  result = gameswf::Stream::readU8(a2);
  *((uint8_t *)self + 2) = result;
  *((uint8_t *)self + 3) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Color::read_rgba  (binary VA: 0x106a480)
// Original: gameswf::Color::read_rgba
// ----------------------------------------------------------------------------
int gameswf::Color::read_rgba(gameswf::Color::Self *self, gameswf::Stream::Self *a2)
{
  int result;

  gameswf::Color::read_rgb(self, a2);
  result = gameswf::Stream::readU8(a2);
  *((uint8_t *)self + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Color::read  (binary VA: 0x106a4d0)
// Original: gameswf::Color::read
// ----------------------------------------------------------------------------
int gameswf::Color::read(gameswf::Color::Self *self, gameswf::Stream::Self *a2, int a3)
{
  if ( a3 <= 22 )
    return gameswf::Color::read_rgb(self, a2);
  else
    return gameswf::Color::read_rgba(self, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Color::print  (binary VA: 0x106a520)
// Original: gameswf::Color::print
// ----------------------------------------------------------------------------
int gameswf::Color::print(gameswf::Color::Self *self)
{
  return gameswf::logMsg(
           (gameswf::Self *)"rgba: %d %d %d %d\n",
           (const char *)*(uint8_t *)self,
           *((uint8_t *)self + 1),
           *((uint8_t *)self + 2),
           *((uint8_t *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Color::setLerp  (binary VA: 0x106a570)
// Original: gameswf::Color::setLerp
// ----------------------------------------------------------------------------
int gameswf::Color::setLerp(gameswf::Color::Self *self, const gameswf::Color::Self *a2, const gameswf::Color::Self *a3, float a4)
{
  float v4; // xmm2_4
  int result;
  float v6; // xmm2_4

  *(uint8_t *)self = (int)(float)((float)((float)((float)((float)0 * 65536.0) + (float)*(uint8_t *)a2) + 0.5)
                              + (float)((float)((float)((float)((float)0 * 65536.0) + (float)*(uint8_t *)a3)
                                              - (float)((float)((float)0 * 65536.0) + (float)*(uint8_t *)a2))
                                      * a4));
  *((uint8_t *)self + 1) = (int)(float)((float)((float)((float)((float)0 * 65536.0) + (float)*((uint8_t *)a2 + 1))
                                            + 0.5)
                                    + (float)((float)((float)((float)((float)0 * 65536.0)
                                                            + (float)*((uint8_t *)a3 + 1))
                                                    - (float)((float)((float)0 * 65536.0)
                                                            + (float)*((uint8_t *)a2 + 1)))
                                            * a4));
  v4 = (float)((float)0 * 65536.0) + (float)*((uint8_t *)a2 + 2);
  result = (int)(float)((float)(v4 + 0.5)
                      + (float)((float)((float)((float)((float)0 * 65536.0) + (float)*((uint8_t *)a3 + 2)) - v4)
                              * a4));
  *((uint8_t *)self + 2) = result;
  v6 = (float)((float)0 * 65536.0) + (float)*((uint8_t *)a2 + 3);
  *((uint8_t *)self + 3) = (int)(float)((float)(v6 + 0.5)
                                    + (float)((float)((float)((float)((float)0 * 65536.0)
                                                            + (float)*((uint8_t *)a3 + 3))
                                                    - v6)
                                            * a4));
  return result;
}


