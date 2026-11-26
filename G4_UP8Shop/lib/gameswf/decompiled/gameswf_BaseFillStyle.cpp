#include "Core/Utils/DecompTypes.h"
#include "gameswf_BaseFillStyle.h"

// ----------------------------------------------------------------------------
// Function: gameswf::BaseFillStyle::Destroy  (binary VA: 0x10aa370)
// Original: gameswf::BaseFillStyle::~BaseFillStyle
// ----------------------------------------------------------------------------
void gameswf::BaseFillStyle::Destroy(gameswf::BaseFillStyle::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EB38);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BaseFillStyle::Destroy_ea10aa3e0  (binary VA: 0x10aa3e0)
// Original: gameswf::BaseFillStyle::~BaseFillStyle
// ----------------------------------------------------------------------------
void gameswf::BaseFillStyle::Destroy_ea10aa3e0(gameswf::BaseFillStyle::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EB38);
  opDelete(self);
}


