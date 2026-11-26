#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSpringD.h"

// ----------------------------------------------------------------------------
// Function: hkpSpringDamperConstraintMotor::staticClass  (binary VA: 0x171d8b0)
// Original: hkpSpringDamperConstraintMotor::staticClass
// ----------------------------------------------------------------------------
void * hkpSpringDamperConstraintMotor::staticClass()
{
  return &hkpSpringDamperConstraintMotorClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSpringDamperConstraintMotor::Destroy  (binary VA: 0x171ef20)
// Original: hkpSpringDamperConstraintMotor::~hkpSpringDamperConstraintMotor
// ----------------------------------------------------------------------------
void hkpSpringDamperConstraintMotor::Destroy(hkpSpringDamperConstraintMotor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSpringDamperConstraintMotor::Destroy_ea171ef40  (binary VA: 0x171ef40)
// Original: hkpSpringDamperConstraintMotor::~hkpSpringDamperConstraintMotor
// ----------------------------------------------------------------------------
void hkpSpringDamperConstraintMotor::Destroy_ea171ef40(hkpSpringDamperConstraintMotor::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSpringDamperConstraintMotor::clone  (binary VA: 0x171efa0)
// Original: hkpSpringDamperConstraintMotor::clone
// ----------------------------------------------------------------------------
int hkpSpringDamperConstraintMotor::clone(hkpSpringDamperConstraintMotor::Self *self)
{
  int address;
  int result;
  int v3; // xmm0_4

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             28);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209C2C8);
  *(uint8_t *)(result + 8) = *((uint8_t *)self + 8);
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209C2E8);
  *(uint32_t *)(result + 12) = *((uint32_t *)self + 3);
  v3 = *((uint32_t *)self + 4);
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209D708);
  *(uint32_t *)(result + 16) = v3;
  *(uint32_t *)(result + 20) = *((uint32_t *)self + 5);
  *(uint32_t *)(result + 24) = *((uint32_t *)self + 6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSpringDamperConstraintMotor::Construct  (binary VA: 0x171f040)
// Original: hkpSpringDamperConstraintMotor::hkpSpringDamperConstraintMotor
// ----------------------------------------------------------------------------
void hkpSpringDamperConstraintMotor::Construct(hkpSpringDamperConstraintMotor::Self *self)
{
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 3) = -915135488;
  *((uint32_t *)self + 4) = 1232348160;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D708);
  *((uint8_t *)self + 8) = 3;
}

// ----------------------------------------------------------------------------
// Function: hkpSpringDamperConstraintMotor::Construct  (binary VA: 0x171f090)
// Original: hkpSpringDamperConstraintMotor::hkpSpringDamperConstraintMotor
// ----------------------------------------------------------------------------
void hkpSpringDamperConstraintMotor::Construct(hkpSpringDamperConstraintMotor::Self *self, float a2, float a3, float a4)
{
  *((float *)self + 4) = a4;
  *((float *)self + 5) = a2;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D708);
  *((uint8_t *)self + 8) = 3;
  *((float *)self + 3) = -a4;
  *((float *)self + 6) = a3;
}


