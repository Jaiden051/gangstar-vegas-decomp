#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMaxSize.h"

// ----------------------------------------------------------------------------
// Function: hkpMaxSizeMotion::Destroy  (binary VA: 0x172d710)
// Original: hkpMaxSizeMotion::~hkpMaxSizeMotion
// ----------------------------------------------------------------------------
void hkpMaxSizeMotion::Destroy(hkpMaxSizeMotion::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EA08);
  hkpKeyframedRigidMotion::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpMaxSizeMotion::Destroy_ea172d740  (binary VA: 0x172d740)
// Original: hkpMaxSizeMotion::~hkpMaxSizeMotion
// ----------------------------------------------------------------------------
void hkpMaxSizeMotion::Destroy_ea172d740(hkpMaxSizeMotion::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EA08);
  hkpKeyframedRigidMotion::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 288;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMaxSizeMotion::staticClass  (binary VA: 0x172d7d0)
// Original: hkpMaxSizeMotion::staticClass
// ----------------------------------------------------------------------------
void * hkpMaxSizeMotion::staticClass()
{
  return &hkpMaxSizeMotionClass;
}


