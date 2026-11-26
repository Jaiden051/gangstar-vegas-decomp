#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorSequenceIn.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorSequenceIn::Destroy  (binary VA: 0x13af7d0)
// Original: grapher::ActorSequenceIn::~ActorSequenceIn
// ----------------------------------------------------------------------------
void grapher::ActorSequenceIn::Destroy(grapher::ActorSequenceIn::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094828);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSequenceIn::Destroy_ea13af800  (binary VA: 0x13af800)
// Original: grapher::ActorSequenceIn::~ActorSequenceIn
// ----------------------------------------------------------------------------
void grapher::ActorSequenceIn::Destroy_ea13af800(grapher::ActorSequenceIn::Self *self)
{
  grapher::ActorSequenceIn::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSequenceIn::Init  (binary VA: 0x13afa00)
// Original: grapher::ActorSequenceIn::Init
// ----------------------------------------------------------------------------
int grapher::ActorSequenceIn::Init(grapher::ActorSequenceIn::Self *self)
{
  int result;
  void *v2;
  uint16_t v3[3];

  grapher::ActorSequence::Init(self);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[1]), "Sequence In", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetDisplayName(self, &v3[1]);
  result = *(uint32_t *)&v3[1];
  v2 = (void *)(*(uint32_t *)&v3[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v3[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v3[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v2); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13afa90 (size: 173 bytes)
// Symbol:    _ZN7grapher15ActorSequenceInC1Ej
// Demangled: grapher::ActorSequenceIn::ActorSequenceIn(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher15ActorSequenceInC2Ej'
void (**grapher::ActorSequenceIn::ActorSequenceIn(
        grapher::ActorSequenceIn::Self *self,
        unsigned int a2))(grapher::ActorSequenceIn::Self * self)
{
  void *v2;
  uint16_t v4[3];

  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094828);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "Sequences", (int)(uintptr_t)(v4));
  grapher::ActorBase::SetCategoryName(self, &v4[1]);
  v2 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094868);
  return (void (**)(grapher::ActorSequenceIn::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094868));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorSequenceIn::Event  (binary VA: 0x13afc60)
// Original: grapher::ActorSequenceIn::Event
// ----------------------------------------------------------------------------
int grapher::ActorSequenceIn::Event(grapher::ActorSequenceIn::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  return grapher::ActorSequence::Event(self, a2, a3);
}


