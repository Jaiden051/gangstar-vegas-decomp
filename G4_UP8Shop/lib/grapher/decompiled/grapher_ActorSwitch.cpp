#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorSwitch.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorSwitch::Destroy  (binary VA: 0x13b3ee0)
// Original: grapher::ActorSwitch::~ActorSwitch
// ----------------------------------------------------------------------------
void grapher::ActorSwitch::Destroy(grapher::ActorSwitch::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094B48);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSwitch::Destroy_ea13b3f10  (binary VA: 0x13b3f10)
// Original: grapher::ActorSwitch::~ActorSwitch
// ----------------------------------------------------------------------------
void grapher::ActorSwitch::Destroy_ea13b3f10(grapher::ActorSwitch::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094B48);
  grapher::ActorBase::Destroy(self);
  opDelete(self);
}


