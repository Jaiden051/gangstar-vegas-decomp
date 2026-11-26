#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderCursorInterface.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::Destroy  (binary VA: 0xfdf710)
// Original: vox::DecoderCursorInterface::~DecoderCursorInterface
// ----------------------------------------------------------------------------
void vox::DecoderCursorInterface::Destroy(vox::DecoderCursorInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CD28);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::Init  (binary VA: 0xfdf730)
// Original: vox::DecoderCursorInterface::Init
// ----------------------------------------------------------------------------
void vox::DecoderCursorInterface::Init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::Shutdown  (binary VA: 0xfdf740)
// Original: vox::DecoderCursorInterface::Shutdown
// ----------------------------------------------------------------------------
void vox::DecoderCursorInterface::Shutdown()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::DecodeRef  (binary VA: 0xfdf750)
// Original: vox::DecoderCursorInterface::DecodeRef
// ----------------------------------------------------------------------------
int vox::DecoderCursorInterface::DecodeRef(vox::DecoderCursorInterface::Self *self, void **a2, int a3)
{
  return G4_VCALL<int>(self, 16, *a2, a3);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::IsSeekable  (binary VA: 0xfdf780)
// Original: vox::DecoderCursorInterface::IsSeekable
// ----------------------------------------------------------------------------
int vox::DecoderCursorInterface::IsSeekable()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::Reset  (binary VA: 0xfdf790)
// Original: vox::DecoderCursorInterface::Reset
// ----------------------------------------------------------------------------
int vox::DecoderCursorInterface::Reset(vox::DecoderCursorInterface::Self *self)
{
  return G4_VCALL<int>(self, 44, 0);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::GetRewindLimit  (binary VA: 0xfdf7b0)
// Original: vox::DecoderCursorInterface::GetRewindLimit
// ----------------------------------------------------------------------------
int vox::DecoderCursorInterface::GetRewindLimit()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::Rewind  (binary VA: 0xfdf7c0)
// Original: vox::DecoderCursorInterface::Rewind
// ----------------------------------------------------------------------------
void vox::DecoderCursorInterface::Rewind()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::SetLoop  (binary VA: 0xfdf7d0)
// Original: vox::DecoderCursorInterface::SetLoop
// ----------------------------------------------------------------------------
vox::DecoderCursorInterface::Self * vox::DecoderCursorInterface::SetLoop(vox::DecoderCursorInterface::Self *self, bool a2)
{
  *((uint8_t *)self + 28) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::GetStreamCursor  (binary VA: 0xfdf7e0)
// Original: vox::DecoderCursorInterface::GetStreamCursor
// ----------------------------------------------------------------------------
int vox::DecoderCursorInterface::GetStreamCursor(vox::DecoderCursorInterface::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::AllowBufferReference  (binary VA: 0xfdf7f0)
// Original: vox::DecoderCursorInterface::AllowBufferReference
// ----------------------------------------------------------------------------
int vox::DecoderCursorInterface::AllowBufferReference()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::Serialize  (binary VA: 0xfdf800)
// Original: vox::DecoderCursorInterface::Serialize
// ----------------------------------------------------------------------------
int vox::DecoderCursorInterface::Serialize()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderCursorInterface::Destroy_eafdf8f0  (binary VA: 0xfdf8f0)
// Original: vox::DecoderCursorInterface::~DecoderCursorInterface
// ----------------------------------------------------------------------------
void vox::DecoderCursorInterface::Destroy_eafdf8f0(vox::DecoderCursorInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CD28);
  opDelete(self);
}


