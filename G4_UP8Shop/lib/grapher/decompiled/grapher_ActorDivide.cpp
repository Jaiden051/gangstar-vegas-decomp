#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorDivide.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorDivide::Destroy  (binary VA: 0x13ae6a0)
// Original: grapher::ActorDivide::~ActorDivide
// ----------------------------------------------------------------------------
void grapher::ActorDivide::Destroy(grapher::ActorDivide::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20946C8);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorDivide::Destroy_ea13ae750  (binary VA: 0x13ae750)
// Original: grapher::ActorDivide::~ActorDivide
// ----------------------------------------------------------------------------
void grapher::ActorDivide::Destroy_ea13ae750(grapher::ActorDivide::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20946C8);
  grapher::ActorBase::Destroy(self);
  opDelete(self);
}


