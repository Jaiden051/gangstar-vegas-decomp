#include "Core/Utils/DecompTypes.h"
#include "gameswf_ImageRGBA.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ImageRGBA::Destroy  (binary VA: 0x11737e0)
// Original: gameswf::ImageRGBA::~ImageRGBA
// ----------------------------------------------------------------------------
void gameswf::ImageRGBA::Destroy(gameswf::ImageRGBA::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091658);
  gameswf::ImageBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageRGBA::Destroy_ea1173810  (binary VA: 0x1173810)
// Original: gameswf::ImageRGBA::~ImageRGBA
// ----------------------------------------------------------------------------
void gameswf::ImageRGBA::Destroy_ea1173810(gameswf::ImageRGBA::Self *self)
{
  gameswf::ImageRGBA::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageRGBA::Construct  (binary VA: 0x1173a40)
// Original: gameswf::ImageRGBA::ImageRGBA
// ----------------------------------------------------------------------------
gameswf::ImageRGBA::Self * gameswf::ImageRGBA::Construct(gameswf::ImageRGBA::Self *self, int a2, int a3)
{
  gameswf::ImageRGBA::Self *result;

  gameswf::ImageBase::Construct(self, 0, a2, a3, 4 * a2, 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091658);
  result = (gameswf::ImageRGBA::Self *)opNewArray(*((uint32_t *)self + 4) * *((uint32_t *)self + 5));
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageRGBA::set_pixel  (binary VA: 0x1173b20)
// Original: gameswf::ImageRGBA::set_pixel
// ----------------------------------------------------------------------------
uint8_t * gameswf::ImageRGBA::set_pixel(gameswf::ImageRGBA::Self *self, int a2, gameswf::ImageBase::Self *a3, uint8_t a4, uint8_t a5, uint8_t a6, uint8_t a7)
{
  uint8_t *result;

  result = (uint8_t *)(gameswf::scanline(self, a3) + 4 * a2);
  *result = a4;
  result[1] = a5;
  result[2] = a6;
  result[3] = a7;
  return result;
}


