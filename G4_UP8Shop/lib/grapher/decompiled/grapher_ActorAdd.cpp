#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorAdd.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorAdd::Destroy  (binary VA: 0x13ae640)
// Original: grapher::ActorAdd::~ActorAdd
// ----------------------------------------------------------------------------
void grapher::ActorAdd::Destroy(grapher::ActorAdd::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094748);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorAdd::Destroy_ea13ae7f0  (binary VA: 0x13ae7f0)
// Original: grapher::ActorAdd::~ActorAdd
// ----------------------------------------------------------------------------
void grapher::ActorAdd::Destroy_ea13ae7f0(grapher::ActorAdd::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094748);
  grapher::ActorBase::Destroy(self);
  opDelete(self);
}


