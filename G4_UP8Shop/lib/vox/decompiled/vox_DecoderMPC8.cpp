#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderMPC8.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8::DestroyCursor  (binary VA: 0xfdf920)
// Original: vox::DecoderMPC8::DestroyCursor
// ----------------------------------------------------------------------------
int vox::DecoderMPC8::DestroyCursor(vox::DecoderMPC8::Self *self, vox::DecoderCursorInterface::Self *a2)
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
// Function: vox::DecoderMPC8::Construct  (binary VA: 0xfe0500)
// Original: vox::DecoderMPC8::DecoderMPC8
// ----------------------------------------------------------------------------
uint32_t * vox::DecoderMPC8::Construct(uint32_t *a1, uint32_t *a2)
{
  uint32_t *result;

  result = a1;
  *a1 = ((uint32_t)(uintptr_t)&off_208CD88);
  if ( a2 != nullptr )
    a1[1] = *a2;
  else
    a1[1] = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8::CreateNewCursor  (binary VA: 0xfe0760)
// Original: vox::DecoderMPC8::CreateNewCursor
// ----------------------------------------------------------------------------
int vox::DecoderMPC8::CreateNewCursor(vox::DecoderMPC8::Self *self, vox::StreamCursorInterface::Self *a2)
{
  int v2;

  v2 = VoxAllocInternal(0x50u, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_mpc8.cpp"), (int)(uintptr_t)("CreateNewCursor"), 83);
  vox::DecoderMPC8Cursor::Construct(v2, (int)(uintptr_t)(self), (int)(uintptr_t)(a2));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8::GetType  (binary VA: 0xfe0ce0)
// Original: vox::DecoderMPC8::GetType
// ----------------------------------------------------------------------------
int vox::DecoderMPC8::GetType()
{
  return 3;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8::GetParam  (binary VA: 0xfe0cf0)
// Original: vox::DecoderMPC8::GetParam
// ----------------------------------------------------------------------------
int vox::DecoderMPC8::GetParam()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8::Destroy  (binary VA: 0xfe0d00)
// Original: vox::DecoderMPC8::~DecoderMPC8
// ----------------------------------------------------------------------------
void vox::DecoderMPC8::Destroy(vox::DecoderMPC8::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206AF28);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8::Destroy_eafe0d20  (binary VA: 0xfe0d20)
// Original: vox::DecoderMPC8::~DecoderMPC8
// ----------------------------------------------------------------------------
void vox::DecoderMPC8::Destroy_eafe0d20(vox::DecoderMPC8::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206AF28);
  opDelete(self);
}


