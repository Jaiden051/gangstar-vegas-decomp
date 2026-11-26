#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpIgnoreM.h"

// ----------------------------------------------------------------------------
// Function: hkpIgnoreModifierConstraintAtom::staticClass  (binary VA: 0x174aed0)
// Original: hkpIgnoreModifierConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpIgnoreModifierConstraintAtom::staticClass()
{
  return &hkpIgnoreModifierConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpIgnoreModifierConstraintAtom::getConstraintInfo  (binary VA: 0x1775220)
// Original: hkpIgnoreModifierConstraintAtom::getConstraintInfo
// ----------------------------------------------------------------------------
int hkpIgnoreModifierConstraintAtom::getConstraintInfo(uint16_t *a1, uint32_t *a2)
{
  uint16_t *v2;
  unsigned int v3;
  int v4;
  uint32_t v6[10];

  v2 = a1;
  v3 = *a1;
  if ( v3 <= 0x1D )
  {
    v4 = 0;
  }
  else
  {
    do
    {
      v4 = v2[9];
      v2 = *((uint16_t **)v2 + 5);
      v3 = *v2;
    }
    while ( v3 > 0x1D );
  }
  if ( v3 != 29 && v3 != 1 )
  {
    v6[6] = 0;
    hkpConstraintData::getConstraintInfoUtil((unsigned int)(uintptr_t)(v2), v4, v6);
    a2[3] -= v6[3];
    a2[2] -= v6[2];
    a2[1] -= v6[1];
  }
  return 0;
}


