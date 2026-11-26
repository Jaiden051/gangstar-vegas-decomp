#include "Core/Utils/DecompTypes.h"
#include "gameswf_BaseLineStyle.h"

// ----------------------------------------------------------------------------
// Function: gameswf::BaseLineStyle::Destroy  (binary VA: 0x10aa390)
// Original: gameswf::BaseLineStyle::~BaseLineStyle
// ----------------------------------------------------------------------------
void gameswf::BaseLineStyle::Destroy(gameswf::BaseLineStyle::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EB20);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BaseLineStyle::Destroy_ea10aa3b0  (binary VA: 0x10aa3b0)
// Original: gameswf::BaseLineStyle::~BaseLineStyle
// ----------------------------------------------------------------------------
void gameswf::BaseLineStyle::Destroy_ea10aa3b0(gameswf::BaseLineStyle::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EB20);
  opDelete(self);
}


