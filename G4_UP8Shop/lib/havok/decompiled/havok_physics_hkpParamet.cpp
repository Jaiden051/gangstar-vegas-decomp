#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpParamet.h"

// ----------------------------------------------------------------------------
// Function: hkpParametricCurve::Destroy  (binary VA: 0x1712230)
// Original: hkpParametricCurve::~hkpParametricCurve
// ----------------------------------------------------------------------------
void hkpParametricCurve::Destroy(hkpParametricCurve::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpParametricCurve::Destroy_ea1712290  (binary VA: 0x1712290)
// Original: hkpParametricCurve::~hkpParametricCurve
// ----------------------------------------------------------------------------
void hkpParametricCurve::Destroy_ea1712290(hkpParametricCurve::Self *self)
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

// ----------------------------------------------------------------------------
// Function: hkpParametricCurve::staticClass  (binary VA: 0x1714330)
// Original: hkpParametricCurve::staticClass
// ----------------------------------------------------------------------------
void * hkpParametricCurve::staticClass()
{
  return &hkpParametricCurveClass;
}


