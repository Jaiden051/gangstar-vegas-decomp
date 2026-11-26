#include "Core/Utils/DecompTypes.h"
#include "vox_VoxRunnable.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxRunnable::Run  (binary VA: 0x1016ef0)
// Original: vox::VoxRunnable::Run
// ----------------------------------------------------------------------------
int vox::VoxRunnable::Run(vox::VoxRunnable::Self *self)
{
  vox::VoxThread::Update(self);
  return 0;
}


