#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpHeightF.h"

// ----------------------------------------------------------------------------
// Function: hkpHeightFieldShape::Destroy  (binary VA: 0x1ae5a90)
// Original: hkpHeightFieldShape::~hkpHeightFieldShape
// ----------------------------------------------------------------------------
void hkpHeightFieldShape::Destroy(hkpHeightFieldShape::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpHeightFieldShape::Destroy_ea1ae6170  (binary VA: 0x1ae6170)
// Original: hkpHeightFieldShape::~hkpHeightFieldShape
// ----------------------------------------------------------------------------
void hkpHeightFieldShape::Destroy_ea1ae6170(hkpHeightFieldShape::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpHeightFieldShape::staticClass  (binary VA: 0x1aed130)
// Original: hkpHeightFieldShape::staticClass
// ----------------------------------------------------------------------------
void * hkpHeightFieldShape::staticClass()
{
  return &hkpHeightFieldShapeClass;
}


