#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorSequenceOut.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorSequenceOut::Destroy  (binary VA: 0x13af760)
// Original: grapher::ActorSequenceOut::~ActorSequenceOut
// ----------------------------------------------------------------------------
void grapher::ActorSequenceOut::Destroy(grapher::ActorSequenceOut::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094828);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSequenceOut::Destroy_ea13af790  (binary VA: 0x13af790)
// Original: grapher::ActorSequenceOut::~ActorSequenceOut
// ----------------------------------------------------------------------------
void grapher::ActorSequenceOut::Destroy_ea13af790(grapher::ActorSequenceOut::Self *self)
{
  grapher::ActorSequenceOut::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSequenceOut::Init  (binary VA: 0x13af970)
// Original: grapher::ActorSequenceOut::Init
// ----------------------------------------------------------------------------
int grapher::ActorSequenceOut::Init(grapher::ActorSequenceOut::Self *self)
{
  int result;
  void *v2;
  uint16_t v3[3];

  grapher::ActorSequence::Init(self);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[1]), "Sequence Out", (int)(uintptr_t)(v3));
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
// Address:   0x13afb40 (size: 173 bytes)
// Symbol:    _ZN7grapher16ActorSequenceOutC1Ej
// Demangled: grapher::ActorSequenceOut::ActorSequenceOut(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher16ActorSequenceOutC2Ej'
void (**grapher::ActorSequenceOut::ActorSequenceOut(
        grapher::ActorSequenceOut::Self *self,
        unsigned int a2))(grapher::ActorSequenceOut::Self * self)
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
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20948A8);
  return (void (**)(grapher::ActorSequenceOut::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20948A8));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorSequenceOut::Event  (binary VA: 0x13afc20)
// Original: grapher::ActorSequenceOut::Event
// ----------------------------------------------------------------------------
int grapher::ActorSequenceOut::Event(grapher::ActorSequenceOut::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  return grapher::ActorSequence::Event(self, a2, a3);
}


