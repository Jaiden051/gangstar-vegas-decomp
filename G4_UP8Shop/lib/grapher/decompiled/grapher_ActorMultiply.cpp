#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorMultiply.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorMultiply::Destroy  (binary VA: 0x13ae6d0)
// Original: grapher::ActorMultiply::~ActorMultiply
// ----------------------------------------------------------------------------
void grapher::ActorMultiply::Destroy(grapher::ActorMultiply::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20945E8);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorMultiply::Destroy_ea13ae700  (binary VA: 0x13ae700)
// Original: grapher::ActorMultiply::~ActorMultiply
// ----------------------------------------------------------------------------
void grapher::ActorMultiply::Destroy_ea13ae700(grapher::ActorMultiply::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20945E8);
  grapher::ActorBase::Destroy(self);
  opDelete(self);
}


