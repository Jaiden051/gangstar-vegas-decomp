#include "Core/Utils/DecompTypes.h"
#include "vox_VoxCallback.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxCallback::Destroy  (binary VA: 0x1037f20)
// Original: vox::VoxCallback::~VoxCallback
// ----------------------------------------------------------------------------
void vox::VoxCallback::Destroy(vox::VoxCallback::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D900);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxCallback::Destroy_ea1037fa0  (binary VA: 0x1037fa0)
// Original: vox::VoxCallback::~VoxCallback
// ----------------------------------------------------------------------------
void vox::VoxCallback::Destroy_ea1037fa0(vox::VoxCallback::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D900);
  opDelete(self);
}


