#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpModifie.h"

// ----------------------------------------------------------------------------
// Function: hkpModifierConstraintAtom::staticClass  (binary VA: 0x174af10)
// Original: hkpModifierConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpModifierConstraintAtom::staticClass()
{
  return &hkpModifierConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpModifierConstraintAtom::addModifierDataToConstraintInfo  (binary VA: 0x17752b0)
// Original: hkpModifierConstraintAtom::addModifierDataToConstraintInfo
// ----------------------------------------------------------------------------
int hkpModifierConstraintAtom::addModifierDataToConstraintInfo(uint16_t *a1, uint32_t *a2, uint8_t *a3)
{
  int result;

  switch ( *a1 )
  {
    case 0x1Eu:
      *a3 |= 8u;
      result = 0;
      break;
    case 0x1Fu:
      a2[1] += 80;
      *a3 |= 1u;
      result = 0;
      break;
    case 0x20u:
      *a3 |= 0x10u;
      result = 0;
      break;
    case 0x21u:
      a2[1] += 80;
      *a3 |= 4u;
      result = 0;
      break;
    case 0x22u:
      result = hkpIgnoreModifierConstraintAtom::getConstraintInfo(a1, a2);
      break;
    case 0x23u:
      a2[1] += 208;
      *a3 |= 2u;
      result = 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpModifierConstraintAtom::addAllModifierDataToConstraintInfo  (binary VA: 0x1775370)
// Original: hkpModifierConstraintAtom::addAllModifierDataToConstraintInfo
// ----------------------------------------------------------------------------
int hkpModifierConstraintAtom::addAllModifierDataToConstraintInfo(uint16_t *a1, uint32_t *a2, uint8_t *a3)
{
  int v3;
  uint16_t *i;
  int v5;

  v3 = 0;
  for ( i = a1; *i > 0x1Du; v3 |= v5 )
  {
    v5 = hkpModifierConstraintAtom::addModifierDataToConstraintInfo(i, a2, a3);
    i = *((uint16_t **)i + 5);
  }
  return v3;
}


