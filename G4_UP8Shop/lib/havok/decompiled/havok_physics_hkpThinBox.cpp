#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpThinBox.h"

// ----------------------------------------------------------------------------
// Function: hkpThinBoxMotion::Destroy  (binary VA: 0x1731680)
// Original: hkpThinBoxMotion::~hkpThinBoxMotion
// ----------------------------------------------------------------------------
void hkpThinBoxMotion::Destroy(hkpThinBoxMotion::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpThinBoxMotion::Destroy_ea17316a0  (binary VA: 0x17316a0)
// Original: hkpThinBoxMotion::~hkpThinBoxMotion
// ----------------------------------------------------------------------------
void hkpThinBoxMotion::Destroy_ea17316a0(hkpThinBoxMotion::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 288;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpThinBoxMotion::staticClass  (binary VA: 0x174b4a0)
// Original: hkpThinBoxMotion::staticClass
// ----------------------------------------------------------------------------
void * hkpThinBoxMotion::staticClass()
{
  return &hkpThinBoxMotionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpThinBoxMotion::Construct  (binary VA: 0x17852b0)
// Original: hkpThinBoxMotion::hkpThinBoxMotion
// ----------------------------------------------------------------------------
void hkpThinBoxMotion::Construct(hkpThinBoxMotion::Self *self, const hkVector4f::Self *a2, const hkQuaternionf::Self *a3)
{
  hkpBoxMotion::Construct(self, a2, a3);
  *((uint8_t *)self + 8) = 6;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EEE8);
}


