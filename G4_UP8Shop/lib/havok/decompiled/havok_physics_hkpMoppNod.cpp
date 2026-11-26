#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppNod.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppNodeMgr::Destroy  (binary VA: 0x1b0dfc0)
// Original: hkpMoppNodeMgr::~hkpMoppNodeMgr
// ----------------------------------------------------------------------------
void hkpMoppNodeMgr::Destroy(hkpMoppNodeMgr::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppNodeMgr::Destroy_ea1b0e120  (binary VA: 0x1b0e120)
// Original: hkpMoppNodeMgr::~hkpMoppNodeMgr
// ----------------------------------------------------------------------------
void hkpMoppNodeMgr::Destroy_ea1b0e120(hkpMoppNodeMgr::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}


