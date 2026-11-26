#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorSubstract.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorSubstract::Destroy  (binary VA: 0x13ae670)
// Original: grapher::ActorSubstract::~ActorSubstract
// ----------------------------------------------------------------------------
void grapher::ActorSubstract::Destroy(grapher::ActorSubstract::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094708);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSubstract::Destroy_ea13ae7a0  (binary VA: 0x13ae7a0)
// Original: grapher::ActorSubstract::~ActorSubstract
// ----------------------------------------------------------------------------
void grapher::ActorSubstract::Destroy_ea13ae7a0(grapher::ActorSubstract::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094708);
  grapher::ActorBase::Destroy(self);
  opDelete(self);
}


