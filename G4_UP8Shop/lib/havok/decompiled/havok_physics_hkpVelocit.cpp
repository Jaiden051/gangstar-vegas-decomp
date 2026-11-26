#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpVelocit.h"

// ----------------------------------------------------------------------------
// Function: hkpVelocityConstraintMotor::staticClass  (binary VA: 0x1712420)
// Original: hkpVelocityConstraintMotor::staticClass
// ----------------------------------------------------------------------------
void * hkpVelocityConstraintMotor::staticClass()
{
  return &hkpVelocityConstraintMotorClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVelocityConstraintMotor::Destroy  (binary VA: 0x17143e0)
// Original: hkpVelocityConstraintMotor::~hkpVelocityConstraintMotor
// ----------------------------------------------------------------------------
void hkpVelocityConstraintMotor::Destroy(hkpVelocityConstraintMotor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVelocityConstraintMotor::Destroy_ea1714400  (binary VA: 0x1714400)
// Original: hkpVelocityConstraintMotor::~hkpVelocityConstraintMotor
// ----------------------------------------------------------------------------
void hkpVelocityConstraintMotor::Destroy_ea1714400(hkpVelocityConstraintMotor::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVelocityConstraintMotor::clone  (binary VA: 0x1714460)
// Original: hkpVelocityConstraintMotor::clone
// ----------------------------------------------------------------------------
int hkpVelocityConstraintMotor::clone(hkpVelocityConstraintMotor::Self *self)
{
  int address;
  int result;
  int v3; // xmm0_4

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             32);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209C2C8);
  *(uint8_t *)(result + 8) = *((uint8_t *)self + 8);
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209C2E8);
  *(uint32_t *)(result + 12) = *((uint32_t *)self + 3);
  v3 = *((uint32_t *)self + 4);
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209C828);
  *(uint32_t *)(result + 16) = v3;
  *(uint32_t *)(result + 20) = *((uint32_t *)self + 5);
  *(uint32_t *)(result + 24) = *((uint32_t *)self + 6);
  *(uint8_t *)(result + 28) = *((uint8_t *)self + 28);
  return result;
}


