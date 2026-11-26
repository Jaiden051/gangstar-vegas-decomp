#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorSetter.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorSetter::Destroy  (binary VA: 0x13b1c70)
// Original: grapher::ActorSetter::~ActorSetter
// ----------------------------------------------------------------------------
void grapher::ActorSetter::Destroy(grapher::ActorSetter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094A28);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSetter::Destroy_ea13b1ca0  (binary VA: 0x13b1ca0)
// Original: grapher::ActorSetter::~ActorSetter
// ----------------------------------------------------------------------------
void grapher::ActorSetter::Destroy_ea13b1ca0(grapher::ActorSetter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094A28);
  grapher::ActorBase::Destroy(self);
  opDelete(self);
}


