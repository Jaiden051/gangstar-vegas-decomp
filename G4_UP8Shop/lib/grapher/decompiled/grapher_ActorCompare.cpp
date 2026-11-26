#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorCompare.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorCompare::Destroy  (binary VA: 0x13a1940)
// Original: grapher::ActorCompare::~ActorCompare
// ----------------------------------------------------------------------------
void grapher::ActorCompare::Destroy(grapher::ActorCompare::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20940E8);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorCompare::Destroy_ea13a1970  (binary VA: 0x13a1970)
// Original: grapher::ActorCompare::~ActorCompare
// ----------------------------------------------------------------------------
void grapher::ActorCompare::Destroy_ea13a1970(grapher::ActorCompare::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20940E8);
  grapher::ActorBase::Destroy(self);
  opDelete(self);
}


