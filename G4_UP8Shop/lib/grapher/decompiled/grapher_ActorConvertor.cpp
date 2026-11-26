#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorConvertor.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorConvertor::Destroy  (binary VA: 0x13a3c30)
// Original: grapher::ActorConvertor::~ActorConvertor
// ----------------------------------------------------------------------------
void grapher::ActorConvertor::Destroy(grapher::ActorConvertor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094268);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorConvertor::Destroy_ea13a3c60  (binary VA: 0x13a3c60)
// Original: grapher::ActorConvertor::~ActorConvertor
// ----------------------------------------------------------------------------
void grapher::ActorConvertor::Destroy_ea13a3c60(grapher::ActorConvertor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094268);
  grapher::ActorBase::Destroy(self);
  opDelete(self);
}


