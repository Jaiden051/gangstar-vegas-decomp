#include "Core/Utils/DecompTypes.h"
#include "vox_DriverSourceInterface.h"

// ----------------------------------------------------------------------------
// Function: vox::DriverSourceInterface::Destroy  (binary VA: 0x1008440)
// Original: vox::DriverSourceInterface::~DriverSourceInterface
// ----------------------------------------------------------------------------
void vox::DriverSourceInterface::Destroy(vox::DriverSourceInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D528);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverSourceInterface::SetDSPParameter  (binary VA: 0x1008460)
// Original: vox::DriverSourceInterface::SetDSPParameter
// ----------------------------------------------------------------------------
void vox::DriverSourceInterface::SetDSPParameter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverSourceInterface::Update  (binary VA: 0x1008470)
// Original: vox::DriverSourceInterface::Update
// ----------------------------------------------------------------------------
void vox::DriverSourceInterface::Update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverSourceInterface::AllowBufferReference  (binary VA: 0x1008480)
// Original: vox::DriverSourceInterface::AllowBufferReference
// ----------------------------------------------------------------------------
int vox::DriverSourceInterface::AllowBufferReference()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverSourceInterface::FreeDisposableData  (binary VA: 0x1008490)
// Original: vox::DriverSourceInterface::FreeDisposableData
// ----------------------------------------------------------------------------
void vox::DriverSourceInterface::FreeDisposableData()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverSourceInterface::Serialize  (binary VA: 0x10084a0)
// Original: vox::DriverSourceInterface::Serialize
// ----------------------------------------------------------------------------
int vox::DriverSourceInterface::Serialize()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverSourceInterface::Destroy_ea1008620  (binary VA: 0x1008620)
// Original: vox::DriverSourceInterface::~DriverSourceInterface
// ----------------------------------------------------------------------------
void vox::DriverSourceInterface::Destroy_ea1008620(vox::DriverSourceInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D528);
  opDelete(self);
}


