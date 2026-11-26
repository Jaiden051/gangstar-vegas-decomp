#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBridgeC.h"

// ----------------------------------------------------------------------------
// Function: hkpBridgeConstraintAtom::staticClass  (binary VA: 0x1711bf0)
// Original: hkpBridgeConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpBridgeConstraintAtom::staticClass()
{
  return &hkpBridgeConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBridgeConstraintAtom::init  (binary VA: 0x1715ac0)
// Original: hkpBridgeConstraintAtom::init
// ----------------------------------------------------------------------------
hkpBridgeConstraintAtom::Self * hkpBridgeConstraintAtom::init(hkpBridgeConstraintAtom::Self *self, hkpConstraintData::Self *a2)
{
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(hkBridgeConstraintAtom_callData);
  return self;
}


