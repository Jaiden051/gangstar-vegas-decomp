#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderRaw.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderRaw::DestroyCursor  (binary VA: 0xfdead0)
// Original: vox::DecoderRaw::DestroyCursor
// ----------------------------------------------------------------------------
int vox::DecoderRaw::DestroyCursor(vox::DecoderRaw::Self *self, vox::DecoderCursorInterface::Self *a2)
{
  int result;

  if ( a2 != nullptr )
  {
    (**(void (***)(vox::DecoderCursorInterface::Self *))a2)(a2);
    return VoxFreeInternal(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRaw::Construct  (binary VA: 0xfdf510)
// Original: vox::DecoderRaw::DecoderRaw
// ----------------------------------------------------------------------------
uint32_t * vox::DecoderRaw::Construct(uint32_t *a1, uint32_t *a2)
{
  uint32_t *result;

  result = a1;
  *a1 = ((uint32_t)(uintptr_t)&off_208CC88);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  if ( a2 != nullptr )
  {
    a1[1] = *a2;
    a1[2] = a2[1];
    a1[3] = a2[2];
    a1[4] = a2[3];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRaw::CreateNewCursor  (binary VA: 0xfdf6a0)
// Original: vox::DecoderRaw::CreateNewCursor
// ----------------------------------------------------------------------------
int vox::DecoderRaw::CreateNewCursor(vox::DecoderRaw::Self *self, vox::StreamCursorInterface::Self *a2)
{
  int v2;

  v2 = VoxAllocInternal(0x20u, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_raw.cpp"), (int)(uintptr_t)("CreateNewCursor"), 30);
  vox::DecoderRawCursor::Construct(v2, self, a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRaw::GetType  (binary VA: 0xfdf810)
// Original: vox::DecoderRaw::GetType
// ----------------------------------------------------------------------------
int vox::DecoderRaw::GetType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRaw::GetParam  (binary VA: 0xfdf820)
// Original: vox::DecoderRaw::GetParam
// ----------------------------------------------------------------------------
char * vox::DecoderRaw::GetParam(vox::DecoderRaw::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRaw::Destroy  (binary VA: 0xfdf870)
// Original: vox::DecoderRaw::~DecoderRaw
// ----------------------------------------------------------------------------
void vox::DecoderRaw::Destroy(vox::DecoderRaw::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206AF28);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRaw::Destroy_eafdf890  (binary VA: 0xfdf890)
// Original: vox::DecoderRaw::~DecoderRaw
// ----------------------------------------------------------------------------
void vox::DecoderRaw::Destroy_eafdf890(vox::DecoderRaw::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206AF28);
  opDelete(self);
}


