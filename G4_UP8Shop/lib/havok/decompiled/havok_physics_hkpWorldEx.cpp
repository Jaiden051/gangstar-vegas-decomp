#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldEx.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldExtension::Destroy  (binary VA: 0x177cb10)
// Original: hkpWorldExtension::~hkpWorldExtension
// ----------------------------------------------------------------------------
void hkpWorldExtension::Destroy(hkpWorldExtension::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldExtension::Destroy_ea177cdd0  (binary VA: 0x177cdd0)
// Original: hkpWorldExtension::~hkpWorldExtension
// ----------------------------------------------------------------------------
void hkpWorldExtension::Destroy_ea177cdd0(hkpWorldExtension::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldExtension::Construct  (binary VA: 0x1785270)
// Original: hkpWorldExtension::hkpWorldExtension
// ----------------------------------------------------------------------------
void hkpWorldExtension::Construct(hkpWorldExtension::Self *self, int a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0988);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = a2;
  *((uint16_t *)self + 8) = 0;
}


