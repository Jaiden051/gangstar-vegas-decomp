#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpNullCol.h"

// ----------------------------------------------------------------------------
// Function: hkpNullCollisionFilter::staticClass  (binary VA: 0x1692a30)
// Original: hkpNullCollisionFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpNullCollisionFilter::staticClass()
{
  return &hkpNullCollisionFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpNullCollisionFilter::isCollisionEnabled  (binary VA: 0x16934e0)
// Original: hkpNullCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpNullCollisionFilter::Self * hkpNullCollisionFilter::isCollisionEnabled(hkpNullCollisionFilter::Self *self, const hkpCollidable::Self *a2, const hkpCollidable::Self *a3)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpNullCollisionFilter::isCollisionEnabled  (binary VA: 0x1693500)
// Original: hkpNullCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpNullCollisionFilter::isCollisionEnabled(uint8_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpNullCollisionFilter::isCollisionEnabled_ea1693520  (binary VA: 0x1693520)
// Original: hkpNullCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpNullCollisionFilter::isCollisionEnabled_ea1693520(uint8_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpNullCollisionFilter::isCollisionEnabled_ea1693540  (binary VA: 0x1693540)
// Original: hkpNullCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpNullCollisionFilter::isCollisionEnabled_ea1693540(uint8_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpNullCollisionFilter::isCollisionEnabled_ea1693560  (binary VA: 0x1693560)
// Original: hkpNullCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpNullCollisionFilter::isCollisionEnabled_ea1693560(uint8_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpNullCollisionFilter::Destroy  (binary VA: 0x1693580)
// Original: hkpNullCollisionFilter::~hkpNullCollisionFilter
// ----------------------------------------------------------------------------
void hkpNullCollisionFilter::Destroy(hkpNullCollisionFilter::Self *self)
{
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&off_2054D80);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054D98);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2054DB0);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DD0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpNullCollisionFilter::Destroy_ea1693610  (binary VA: 0x1693610)
// Original: hkpNullCollisionFilter::~hkpNullCollisionFilter
// ----------------------------------------------------------------------------
void hkpNullCollisionFilter::Destroy_ea1693610(hkpNullCollisionFilter::Self *self)
{
  int v1;
  int v2;

  hkpNullCollisionFilter::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}


