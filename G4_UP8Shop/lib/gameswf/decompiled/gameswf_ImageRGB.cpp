#include "Core/Utils/DecompTypes.h"
#include "gameswf_ImageRGB.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ImageRGB::Destroy  (binary VA: 0x1173850)
// Original: gameswf::ImageRGB::~ImageRGB
// ----------------------------------------------------------------------------
void gameswf::ImageRGB::Destroy(gameswf::ImageRGB::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091648);
  gameswf::ImageBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageRGB::Destroy_ea1173880  (binary VA: 0x1173880)
// Original: gameswf::ImageRGB::~ImageRGB
// ----------------------------------------------------------------------------
void gameswf::ImageRGB::Destroy_ea1173880(gameswf::ImageRGB::Self *self)
{
  gameswf::ImageRGB::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageRGB::Construct  (binary VA: 0x1173960)
// Original: gameswf::ImageRGB::ImageRGB
// ----------------------------------------------------------------------------
gameswf::ImageRGB::Self * gameswf::ImageRGB::Construct(gameswf::ImageRGB::Self *self, int a2, int a3)
{
  gameswf::ImageRGB::Self *result;

  gameswf::ImageBase::Construct(self, 0, a2, a3, (3 * a2 + 3) & 0xFFFFFFFC, 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091648);
  result = (gameswf::ImageRGB::Self *)opNewArray(*((uint32_t *)self + 4) * *((uint32_t *)self + 5));
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
  return result;
}


