#include "Core/Utils/DecompTypes.h"
#include "vox_Handle.h"

// ----------------------------------------------------------------------------
// Function: vox::Handle::opEq  (binary VA: 0x10246b0)
// Original: vox::Handle::operator==
// ----------------------------------------------------------------------------
bool vox::Handle::opEq(vox::Handle::Self *self, const vox::Handle::Self *a2)
{
  return *(uint64_t *)((char *)a2 + 4) == *(uint64_t *)((char *)self + 4);
}


