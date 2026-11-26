#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASObjectInterface.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASObjectInterface::Destroy  (binary VA: 0x10944c0)
// Original: gameswf::ASObjectInterface::~ASObjectInterface
// ----------------------------------------------------------------------------
void gameswf::ASObjectInterface::Destroy(gameswf::ASObjectInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObjectInterface::Destroy_ea1094660  (binary VA: 0x1094660)
// Original: gameswf::ASObjectInterface::~ASObjectInterface
// ----------------------------------------------------------------------------
void gameswf::ASObjectInterface::Destroy_ea1094660(gameswf::ASObjectInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
  opDelete(self);
}


