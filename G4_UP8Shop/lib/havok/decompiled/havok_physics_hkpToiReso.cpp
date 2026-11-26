#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpToiReso.h"

// ----------------------------------------------------------------------------
// Function: hkpToiResourceMgr::Destroy  (binary VA: 0x17faaa0)
// Original: hkpToiResourceMgr::~hkpToiResourceMgr
// ----------------------------------------------------------------------------
void hkpToiResourceMgr::Destroy(hkpToiResourceMgr::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpToiResourceMgr::cannotSolve  (binary VA: 0x17faac0)
// Original: hkpToiResourceMgr::cannotSolve
// ----------------------------------------------------------------------------
int hkpToiResourceMgr::cannotSolve()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpToiResourceMgr::resourcesDepleted  (binary VA: 0x17faad0)
// Original: hkpToiResourceMgr::resourcesDepleted
// ----------------------------------------------------------------------------
int hkpToiResourceMgr::resourcesDepleted()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpToiResourceMgr::Destroy_ea17fac00  (binary VA: 0x17fac00)
// Original: hkpToiResourceMgr::~hkpToiResourceMgr
// ----------------------------------------------------------------------------
void hkpToiResourceMgr::Destroy_ea17fac00(hkpToiResourceMgr::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}


