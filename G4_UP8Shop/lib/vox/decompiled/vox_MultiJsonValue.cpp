#include "Core/Utils/DecompTypes.h"
#include "vox_MultiJsonValue.h"

// ----------------------------------------------------------------------------
// Function: vox::MultiJsonValue::Size  (binary VA: 0x1040e20)
// Original: vox::MultiJsonValue::Size
// ----------------------------------------------------------------------------
int vox::MultiJsonValue::Size(vox::MultiJsonValue::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 2);
  for ( result = 0; v1 != 0; ++result )
    v1 = *(uint32_t *)(v1 + 4);
  return result;
}


