#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppCos.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppCostFunction::Destroy  (binary VA: 0x1b05260)
// Original: hkpMoppCostFunction::~hkpMoppCostFunction
// ----------------------------------------------------------------------------
void hkpMoppCostFunction::Destroy(hkpMoppCostFunction::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCostFunction::Destroy_ea1b05280  (binary VA: 0x1b05280)
// Original: hkpMoppCostFunction::~hkpMoppCostFunction
// ----------------------------------------------------------------------------
void hkpMoppCostFunction::Destroy_ea1b05280(hkpMoppCostFunction::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCostFunction::hkpMoppSplitCostParams::Construct  (binary VA: 0x1b05ba0)
// Original: hkpMoppCostFunction::hkpMoppSplitCostParams::hkpMoppSplitCostParams
// ----------------------------------------------------------------------------
uint32_t * hkpMoppCostFunction::hkpMoppSplitCostParams::Construct(uint32_t *a1)
{
  *a1 = 1065353216;
  a1[1] = 1065353216;
  a1[2] = 1065353216;
  a1[3] = 1065353216;
  a1[5] = 1056964608;
  a1[4] = 1065353216;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCostFunction::updateParams  (binary VA: 0x1b05be0)
// Original: hkpMoppCostFunction::updateParams
// ----------------------------------------------------------------------------
hkpMoppCostFunction::Self * hkpMoppCostFunction::updateParams(hkpMoppCostFunction::Self *self, const hkpMoppCostFunction::hkpMoppSplitCostParams::Self *a2)
{
  *((uint32_t *)self + 2) = *(uint32_t *)a2;
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 5);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCostFunction::Construct  (binary VA: 0x1b05c10)
// Original: hkpMoppCostFunction::hkpMoppCostFunction
// ----------------------------------------------------------------------------
void hkpMoppCostFunction::Construct(hkpMoppCostFunction::Self *self, const hkpMoppCostFunction::hkpMoppSplitCostParams::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B22F0);
  *((uint32_t *)self + 1) = -65535;
  hkpMoppCostFunction::hkpMoppSplitCostParams::Construct((uint32_t *)self + 2);
  hkpMoppCostFunction::updateParams(self, a2);
}


