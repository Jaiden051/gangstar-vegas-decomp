#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderStbVorbis.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbis::Destroy  (binary VA: 0xfe9300)
// Original: vox::DecoderStbVorbis::~DecoderStbVorbis
// ----------------------------------------------------------------------------
void vox::DecoderStbVorbis::Destroy(vox::DecoderStbVorbis::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CF88);
  if ( *((uint32_t *)self + 1) != 0 )
    stb_vorbis_close(*((uint32_t *)self + 1));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206AF28);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbis::Destroy_eafe9350  (binary VA: 0xfe9350)
// Original: vox::DecoderStbVorbis::~DecoderStbVorbis
// ----------------------------------------------------------------------------
void vox::DecoderStbVorbis::Destroy_eafe9350(vox::DecoderStbVorbis::Self *self)
{
  vox::DecoderStbVorbis::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbis::DestroyCursor  (binary VA: 0xfe9390)
// Original: vox::DecoderStbVorbis::DestroyCursor
// ----------------------------------------------------------------------------
int vox::DecoderStbVorbis::DestroyCursor(vox::DecoderStbVorbis::Self *self, vox::DecoderCursorInterface::Self *a2)
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
// Function: vox::DecoderStbVorbis::CreateNewCursor  (binary VA: 0xfea1c0)
// Original: vox::DecoderStbVorbis::CreateNewCursor
// ----------------------------------------------------------------------------
int vox::DecoderStbVorbis::CreateNewCursor(vox::DecoderStbVorbis::Self *self, vox::StreamCursorInterface::Self *a2)
{
  int v2;

  v2 = VoxAllocInternal(
         0x2Cu,
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_stbvorbis.cpp"),
         (int)(uintptr_t)("CreateNewCursor"),
         85);
  vox::DecoderStbVorbisCursor::Construct(v2, (int)(uintptr_t)(self), a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbis::GetType  (binary VA: 0xfea230)
// Original: vox::DecoderStbVorbis::GetType
// ----------------------------------------------------------------------------
int vox::DecoderStbVorbis::GetType()
{
  return 2;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbis::GetParam  (binary VA: 0xfea240)
// Original: vox::DecoderStbVorbis::GetParam
// ----------------------------------------------------------------------------
int vox::DecoderStbVorbis::GetParam()
{
  return 0;
}


