#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldBo.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldBodyOperationQueueSortCmp  (binary VA: 0x1778570)
// Original: hkpWorldBodyOperationQueueSortCmp
// ----------------------------------------------------------------------------
bool hkpWorldBodyOperationQueueSortCmp(uint32_t *a1, uint32_t *a2)
{
  if ( *a1 == *a2 )
    return a1[2] > a2[2];
  else
    return *(uint32_t *)(*a1 + 208) < *(uint32_t *)(*a2 + 208);
}


