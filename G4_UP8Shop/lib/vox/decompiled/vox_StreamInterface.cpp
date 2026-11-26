#include "Core/Utils/DecompTypes.h"
#include "vox_StreamInterface.h"

// ----------------------------------------------------------------------------
// Function: vox::StreamInterface::Destroy  (binary VA: 0xfcf4a0)
// Original: vox::StreamInterface::~StreamInterface
// ----------------------------------------------------------------------------
void vox::StreamInterface::Destroy(vox::StreamInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CBA8);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamInterface::Init  (binary VA: 0xfcf4c0)
// Original: vox::StreamInterface::Init
// ----------------------------------------------------------------------------
void vox::StreamInterface::Init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamInterface::Shutdown  (binary VA: 0xfcf4d0)
// Original: vox::StreamInterface::Shutdown
// ----------------------------------------------------------------------------
void vox::StreamInterface::Shutdown()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamInterface::Size  (binary VA: 0xfcf4e0)
// Original: vox::StreamInterface::Size
// ----------------------------------------------------------------------------
int vox::StreamInterface::Size(vox::StreamInterface::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamInterface::Destroy_eafcf6a0  (binary VA: 0xfcf6a0)
// Original: vox::StreamInterface::~StreamInterface
// ----------------------------------------------------------------------------
void vox::StreamInterface::Destroy_eafcf6a0(vox::StreamInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CBA8);
  opDelete(self);
}


