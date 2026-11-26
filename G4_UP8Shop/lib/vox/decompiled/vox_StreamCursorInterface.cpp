#include "Core/Utils/DecompTypes.h"
#include "vox_StreamCursorInterface.h"

// ----------------------------------------------------------------------------
// Function: vox::StreamCursorInterface::Destroy  (binary VA: 0xfcf4f0)
// Original: vox::StreamCursorInterface::~StreamCursorInterface
// ----------------------------------------------------------------------------
void vox::StreamCursorInterface::Destroy(vox::StreamCursorInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCursorInterface::Init  (binary VA: 0xfcf510)
// Original: vox::StreamCursorInterface::Init
// ----------------------------------------------------------------------------
void vox::StreamCursorInterface::Init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCursorInterface::Shutdown  (binary VA: 0xfcf520)
// Original: vox::StreamCursorInterface::Shutdown
// ----------------------------------------------------------------------------
void vox::StreamCursorInterface::Shutdown()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCursorInterface::ReadRef  (binary VA: 0xfcf530)
// Original: vox::StreamCursorInterface::ReadRef
// ----------------------------------------------------------------------------
int vox::StreamCursorInterface::ReadRef(vox::StreamCursorInterface::Self *self, uint8_t **a2, int a3)
{
  return G4_VCALL<int>(self, 28, *a2, a3);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCursorInterface::AllowBufferReference  (binary VA: 0xfcf560)
// Original: vox::StreamCursorInterface::AllowBufferReference
// ----------------------------------------------------------------------------
int vox::StreamCursorInterface::AllowBufferReference()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCursorInterface::Size  (binary VA: 0xfcf570)
// Original: vox::StreamCursorInterface::Size
// ----------------------------------------------------------------------------
int vox::StreamCursorInterface::Size(vox::StreamCursorInterface::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 1);
  result = 0;
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 16))(*((uint32_t *)self + 1));
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCursorInterface::Serialize  (binary VA: 0xfcf590)
// Original: vox::StreamCursorInterface::Serialize
// ----------------------------------------------------------------------------
int vox::StreamCursorInterface::Serialize()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCursorInterface::Destroy_eafcf670  (binary VA: 0xfcf670)
// Original: vox::StreamCursorInterface::~StreamCursorInterface
// ----------------------------------------------------------------------------
void vox::StreamCursorInterface::Destroy_eafcf670(vox::StreamCursorInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
  opDelete(self);
}


