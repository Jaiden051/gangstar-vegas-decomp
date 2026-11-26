#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpFixedRi.h"

// ----------------------------------------------------------------------------
// Function: hkpFixedRigidMotion::staticClass  (binary VA: 0x1752ff0)
// Original: hkpFixedRigidMotion::staticClass
// ----------------------------------------------------------------------------
void * hkpFixedRigidMotion::staticClass()
{
  return &hkpFixedRigidMotionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedRigidMotion::setStepPosition  (binary VA: 0x1775bb0)
// Original: hkpFixedRigidMotion::setStepPosition
// ----------------------------------------------------------------------------
void hkpFixedRigidMotion::setStepPosition()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedRigidMotion::getPositionAndVelocities  (binary VA: 0x1775bc0)
// Original: hkpFixedRigidMotion::getPositionAndVelocities
// ----------------------------------------------------------------------------
hkpMotion::Self * hkpFixedRigidMotion::getPositionAndVelocities(hkpFixedRigidMotion::Self *self, hkpMotion::Self *a2)
{
  char v3;

  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 4);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 5);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 6);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 7);
  *((uint32_t *)a2 + 8) = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 9) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 10) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 11) = *((uint32_t *)self + 11);
  *((uint32_t *)a2 + 12) = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 13) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 14) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 15) = *((uint32_t *)self + 15);
  *((uint32_t *)a2 + 16) = *((uint32_t *)self + 16);
  *((uint32_t *)a2 + 17) = *((uint32_t *)self + 17);
  *((uint32_t *)a2 + 18) = *((uint32_t *)self + 18);
  *((uint32_t *)a2 + 19) = *((uint32_t *)self + 19);
  *((uint32_t *)a2 + 20) = *((uint32_t *)self + 20);
  *((uint32_t *)a2 + 21) = *((uint32_t *)self + 21);
  *((uint32_t *)a2 + 22) = *((uint32_t *)self + 22);
  *((uint32_t *)a2 + 23) = *((uint32_t *)self + 23);
  *((uint32_t *)a2 + 24) = *((uint32_t *)self + 24);
  *((uint32_t *)a2 + 25) = *((uint32_t *)self + 25);
  *((uint32_t *)a2 + 26) = *((uint32_t *)self + 26);
  *((uint32_t *)a2 + 27) = *((uint32_t *)self + 27);
  *((uint32_t *)a2 + 28) = *((uint32_t *)self + 28);
  *((uint32_t *)a2 + 29) = *((uint32_t *)self + 29);
  *((uint32_t *)a2 + 30) = *((uint32_t *)self + 30);
  *((uint32_t *)a2 + 31) = *((uint32_t *)self + 31);
  *((uint32_t *)a2 + 32) = *((uint32_t *)self + 32);
  *((uint32_t *)a2 + 33) = *((uint32_t *)self + 33);
  *((uint32_t *)a2 + 34) = *((uint32_t *)self + 34);
  *((uint32_t *)a2 + 35) = *((uint32_t *)self + 35);
  *((uint32_t *)a2 + 36) = *((uint32_t *)self + 36);
  *((uint32_t *)a2 + 37) = *((uint32_t *)self + 37);
  *((uint32_t *)a2 + 38) = *((uint32_t *)self + 38);
  *((uint32_t *)a2 + 39) = *((uint32_t *)self + 39);
  *((uint32_t *)a2 + 40) = *((uint32_t *)self + 40);
  *((uint32_t *)a2 + 41) = *((uint32_t *)self + 41);
  *((uint32_t *)a2 + 42) = *((uint32_t *)self + 42);
  *((uint32_t *)a2 + 43) = *((uint32_t *)self + 43);
  *((uint32_t *)a2 + 44) = *((uint32_t *)self + 44);
  *((uint16_t *)a2 + 90) = *((uint16_t *)self + 90);
  *((uint16_t *)a2 + 91) = *((uint16_t *)self + 91);
  *((uint16_t *)a2 + 92) = *((uint16_t *)self + 92);
  *((uint8_t *)a2 + 186) = *((uint8_t *)self + 186);
  *((uint8_t *)a2 + 187) = *((uint8_t *)self + 187);
  v3 = *((uint8_t *)self + 188);
  *((uint32_t *)a2 + 52) = 0;
  *((uint8_t *)a2 + 188) = v3;
  *((uint32_t *)a2 + 53) = 0;
  *((uint32_t *)a2 + 54) = 0;
  *((uint32_t *)a2 + 55) = 0;
  *((uint32_t *)a2 + 56) = 0;
  *((uint32_t *)a2 + 57) = 0;
  *((uint32_t *)a2 + 58) = 0;
  *((uint32_t *)a2 + 59) = 0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedRigidMotion::setLinearVelocity  (binary VA: 0x1775db0)
// Original: hkpFixedRigidMotion::setLinearVelocity
// ----------------------------------------------------------------------------
void hkpFixedRigidMotion::setLinearVelocity()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedRigidMotion::setAngularVelocity  (binary VA: 0x1775dc0)
// Original: hkpFixedRigidMotion::setAngularVelocity
// ----------------------------------------------------------------------------
void hkpFixedRigidMotion::setAngularVelocity()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpFixedRigidMotion::Destroy  (binary VA: 0x1775dd0)
// Original: hkpFixedRigidMotion::~hkpFixedRigidMotion
// ----------------------------------------------------------------------------
void hkpFixedRigidMotion::Destroy(hkpFixedRigidMotion::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A06A8);
  hkpKeyframedRigidMotion::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpFixedRigidMotion::Destroy_ea1775e00  (binary VA: 0x1775e00)
// Original: hkpFixedRigidMotion::~hkpFixedRigidMotion
// ----------------------------------------------------------------------------
void hkpFixedRigidMotion::Destroy_ea1775e00(hkpFixedRigidMotion::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A06A8);
  hkpKeyframedRigidMotion::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 288;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpFixedRigidMotion::Construct  (binary VA: 0x1775e70)
// Original: hkpFixedRigidMotion::hkpFixedRigidMotion
// ----------------------------------------------------------------------------
void hkpFixedRigidMotion::Construct(hkpFixedRigidMotion::Self *self, const hkVector4f::Self *a2, const hkQuaternionf::Self *a3)
{
  hkpKeyframedRigidMotion::Construct(self, a2, a3);
  *((uint8_t *)self + 8) = 5;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A06A8);
}


