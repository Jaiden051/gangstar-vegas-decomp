#include "Core/Utils/DecompTypes.h"
#include "vox_VoxEmitterStateChangedCallback.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxEmitterStateChangedCallback::Send  (binary VA: 0x1037f40)
// Original: vox::VoxEmitterStateChangedCallback::Send
// ----------------------------------------------------------------------------
vox::VoxEmitterStateChangedCallback::Self * vox::VoxEmitterStateChangedCallback::Send(vox::VoxEmitterStateChangedCallback::Self *self)
{
  vox::VoxEmitterStateChangedCallback::Self *result;
  int (*v2)(char *, uint32_t, uint32_t);

  result = self;
  v2 = *((int (**)(char *, uint32_t, uint32_t))self + 9);
  if ( v2 != nullptr )
    return (vox::VoxEmitterStateChangedCallback::Self *)v2((char *)self + 4, *((uint32_t *)self + 10), *((uint32_t *)self + 11));
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEmitterStateChangedCallback::Destroy  (binary VA: 0x1038140)
// Original: vox::VoxEmitterStateChangedCallback::~VoxEmitterStateChangedCallback
// ----------------------------------------------------------------------------
void vox::VoxEmitterStateChangedCallback::Destroy(vox::VoxEmitterStateChangedCallback::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D918);
  vox::EmitterHandle::Destroy((vox::VoxEmitterStateChangedCallback::Self *)((char *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D900);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEmitterStateChangedCallback::Destroy_ea1038190  (binary VA: 0x1038190)
// Original: vox::VoxEmitterStateChangedCallback::~VoxEmitterStateChangedCallback
// ----------------------------------------------------------------------------
void vox::VoxEmitterStateChangedCallback::Destroy_ea1038190(vox::VoxEmitterStateChangedCallback::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D918);
  vox::EmitterHandle::Destroy((vox::VoxEmitterStateChangedCallback::Self *)((char *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D900);
  opDelete(self);
}


