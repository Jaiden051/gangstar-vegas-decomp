#include "Core/Utils/DecompTypes.h"
#include "gameswf_setBackgroundColor.h"

// ----------------------------------------------------------------------------
// Function: gameswf::setBackgroundColor::execute  (binary VA: 0x10a4110)
// Original: gameswf::setBackgroundColor::execute
// ----------------------------------------------------------------------------
int gameswf::setBackgroundColor::execute(gameswf::setBackgroundColor::Self *self, gameswf::Character::Self *a2)
{
  float v3;

  v3 = ((long double (*)(gameswf::Character::Self *))*(uint32_t *)(*(uint32_t *)a2 + 252))(a2);
  *((uint8_t *)self + 7) = (int)(float)((float)(v3 * 255.0) + 0.5);
  return G4_VCALL<int>(a2, 244, (char *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::setBackgroundColor::executeState  (binary VA: 0x10a4190)
// Original: gameswf::setBackgroundColor::executeState
// ----------------------------------------------------------------------------
int gameswf::setBackgroundColor::executeState(gameswf::setBackgroundColor::Self *self, gameswf::Character::Self *a2)
{
  return G4_VCALL<int>(self, 8, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::setBackgroundColor::Destroy  (binary VA: 0x10a4230)
// Original: gameswf::setBackgroundColor::~setBackgroundColor
// ----------------------------------------------------------------------------
void gameswf::setBackgroundColor::Destroy(gameswf::setBackgroundColor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
}

// ----------------------------------------------------------------------------
// Function: gameswf::setBackgroundColor::Destroy_ea10a4250  (binary VA: 0x10a4250)
// Original: gameswf::setBackgroundColor::~setBackgroundColor
// ----------------------------------------------------------------------------
void gameswf::setBackgroundColor::Destroy_ea10a4250(gameswf::setBackgroundColor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E088);
  opDelete(self);
}


