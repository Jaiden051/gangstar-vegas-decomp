#include "Core/Utils/DecompTypes.h"
#include "vox_DriverInterface.h"

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::Destroy  (binary VA: 0x10084b0)
// Original: vox::DriverInterface::~DriverInterface
// ----------------------------------------------------------------------------
void vox::DriverInterface::Destroy(vox::DriverInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D5C8);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::Reset  (binary VA: 0x10084d0)
// Original: vox::DriverInterface::Reset
// ----------------------------------------------------------------------------
void vox::DriverInterface::Reset()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::RampOut  (binary VA: 0x10084e0)
// Original: vox::DriverInterface::RampOut
// ----------------------------------------------------------------------------
void vox::DriverInterface::RampOut()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::RampIn  (binary VA: 0x10084f0)
// Original: vox::DriverInterface::RampIn
// ----------------------------------------------------------------------------
void vox::DriverInterface::RampIn()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::Update  (binary VA: 0x1008500)
// Original: vox::DriverInterface::Update
// ----------------------------------------------------------------------------
void vox::DriverInterface::Update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::SetDSPParameter  (binary VA: 0x1008510)
// Original: vox::DriverInterface::SetDSPParameter
// ----------------------------------------------------------------------------
void vox::DriverInterface::SetDSPParameter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::SetOutputMode  (binary VA: 0x1008520)
// Original: vox::DriverInterface::SetOutputMode
// ----------------------------------------------------------------------------
int vox::DriverInterface::SetOutputMode()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::GetOutputMode  (binary VA: 0x1008530)
// Original: vox::DriverInterface::GetOutputMode
// ----------------------------------------------------------------------------
int vox::DriverInterface::GetOutputMode()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::SetMicrophoneCallback  (binary VA: 0x1008540)
// Original: vox::DriverInterface::SetMicrophoneCallback
// ----------------------------------------------------------------------------
int vox::DriverInterface::SetMicrophoneCallback()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::RemoveMicrophoneCallback  (binary VA: 0x1008550)
// Original: vox::DriverInterface::RemoveMicrophoneCallback
// ----------------------------------------------------------------------------
void vox::DriverInterface::RemoveMicrophoneCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::Serialize  (binary VA: 0x1008560)
// Original: vox::DriverInterface::Serialize
// ----------------------------------------------------------------------------
int vox::DriverInterface::Serialize()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverInterface::Destroy_ea10085f0  (binary VA: 0x10085f0)
// Original: vox::DriverInterface::~DriverInterface
// ----------------------------------------------------------------------------
void vox::DriverInterface::Destroy_ea10085f0(vox::DriverInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D5C8);
  opDelete(self);
}


