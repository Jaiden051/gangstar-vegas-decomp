#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBeginCo.h"

// ----------------------------------------------------------------------------
// Function: hkpBeginConstraints  (binary VA: 0x179bf50)
// Original: hkpBeginConstraints
// ----------------------------------------------------------------------------
int hkpBeginConstraints(uint32_t *a1, int *a2, int a3, int16_t a4)
{
  int v4;
  int v5;
  int result;

  v4 = a1[21];
  v5 = a1[19];
  result = *a2 + 16;
  *(uint16_t *)(result - 10) = a1[22];
  *(uint32_t *)(result - 4) = v5;
  *(uint8_t *)(result - 16) = 1;
  *(uint16_t *)(result - 12) = v4;
  *(uint32_t *)(result - 8) = a3;
  *(uint8_t *)(result - 15) = a4;
  *a2 = result;
  return result;
}


