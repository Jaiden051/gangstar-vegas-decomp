#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPositio.h"

// ----------------------------------------------------------------------------
// Function: hkpPositionConstraintMotor::staticClass  (binary VA: 0x1711ec0)
// Original: hkpPositionConstraintMotor::staticClass
// ----------------------------------------------------------------------------
void * hkpPositionConstraintMotor::staticClass()
{
  return &hkpPositionConstraintMotorClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPositionConstraintMotor::Destroy  (binary VA: 0x171b490)
// Original: hkpPositionConstraintMotor::~hkpPositionConstraintMotor
// ----------------------------------------------------------------------------
void hkpPositionConstraintMotor::Destroy(hkpPositionConstraintMotor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPositionConstraintMotor::Destroy_ea171b4b0  (binary VA: 0x171b4b0)
// Original: hkpPositionConstraintMotor::~hkpPositionConstraintMotor
// ----------------------------------------------------------------------------
void hkpPositionConstraintMotor::Destroy_ea171b4b0(hkpPositionConstraintMotor::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 36;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPositionConstraintMotor::clone  (binary VA: 0x171b510)
// Original: hkpPositionConstraintMotor::clone
// ----------------------------------------------------------------------------
int hkpPositionConstraintMotor::clone(hkpPositionConstraintMotor::Self *self)
{
  int address;
  int result;
  int v3; // xmm0_4

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             36);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209C2C8);
  *(uint8_t *)(result + 8) = *((uint8_t *)self + 8);
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209C2E8);
  *(uint32_t *)(result + 12) = *((uint32_t *)self + 3);
  v3 = *((uint32_t *)self + 4);
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209D1E8);
  *(uint32_t *)(result + 16) = v3;
  *(uint32_t *)(result + 20) = *((uint32_t *)self + 5);
  *(uint32_t *)(result + 24) = *((uint32_t *)self + 6);
  *(uint32_t *)(result + 28) = *((uint32_t *)self + 7);
  *(uint32_t *)(result + 32) = *((uint32_t *)self + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPositionConstraintMotor::Construct  (binary VA: 0x171b5c0)
// Original: hkpPositionConstraintMotor::hkpPositionConstraintMotor
// ----------------------------------------------------------------------------
void hkpPositionConstraintMotor::Construct(hkpPositionConstraintMotor::Self *self)
{
  *((uint32_t *)self + 6) = 1065353216;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 3) = -915135488;
  *((uint32_t *)self + 4) = 1232348160;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D1E8);
  *((uint8_t *)self + 8) = 1;
  *((uint32_t *)self + 5) = 1061997773;
  *((uint32_t *)self + 7) = 0x40000000;
}


