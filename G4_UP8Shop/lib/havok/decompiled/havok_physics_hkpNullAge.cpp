#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpNullAge.h"

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::getPenetrations  (binary VA: 0x17118f0)
// Original: hkpNullAgent::getPenetrations
// ----------------------------------------------------------------------------
void hkpNullAgent::getPenetrations()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::getClosestPoints  (binary VA: 0x1711900)
// Original: hkpNullAgent::getClosestPoints
// ----------------------------------------------------------------------------
void hkpNullAgent::getClosestPoints()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::linearCast  (binary VA: 0x1711910)
// Original: hkpNullAgent::linearCast
// ----------------------------------------------------------------------------
void hkpNullAgent::linearCast()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::processCollision  (binary VA: 0x1711920)
// Original: hkpNullAgent::processCollision
// ----------------------------------------------------------------------------
void hkpNullAgent::processCollision()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::cleanup  (binary VA: 0x1711930)
// Original: hkpNullAgent::cleanup
// ----------------------------------------------------------------------------
void hkpNullAgent::cleanup()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::Destroy  (binary VA: 0x1711940)
// Original: hkpNullAgent::~hkpNullAgent
// ----------------------------------------------------------------------------
void hkpNullAgent::Destroy(hkpNullAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::Destroy_ea1711960  (binary VA: 0x1711960)
// Original: hkpNullAgent::~hkpNullAgent
// ----------------------------------------------------------------------------
void hkpNullAgent::Destroy_ea1711960(hkpNullAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::Construct  (binary VA: 0x17119c0)
// Original: hkpNullAgent::hkpNullAgent
// ----------------------------------------------------------------------------
void hkpNullAgent::Construct(hkpNullAgent::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C1C8);
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::staticGetClosestPoints  (binary VA: 0x17119f0)
// Original: hkpNullAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
void hkpNullAgent::staticGetClosestPoints()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::staticGetPenetrations  (binary VA: 0x1711a00)
// Original: hkpNullAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
void hkpNullAgent::staticGetPenetrations()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::staticLinearCast  (binary VA: 0x1711a10)
// Original: hkpNullAgent::staticLinearCast
// ----------------------------------------------------------------------------
void hkpNullAgent::staticLinearCast()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::createNullAgent  (binary VA: 0x1711a20)
// Original: hkpNullAgent::createNullAgent
// ----------------------------------------------------------------------------
void * hkpNullAgent::createNullAgent()
{
  return &unk_2126944;
}

// ----------------------------------------------------------------------------
// Function: hkpNullAgent::getNullAgent  (binary VA: 0x1711a40)
// Original: hkpNullAgent::getNullAgent
// ----------------------------------------------------------------------------
void * hkpNullAgent::getNullAgent()
{
  return &unk_2126944;
}


