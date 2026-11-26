#include "Core/Utils/DecompTypes.h"
#include "vox_VoxMSWavSubDecoder.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoder::Destroy  (binary VA: 0xfe7fb0)
// Original: vox::VoxMSWavSubDecoder::~VoxMSWavSubDecoder
// ----------------------------------------------------------------------------
void vox::VoxMSWavSubDecoder::Destroy(vox::VoxMSWavSubDecoder::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CEE0);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoder::Destroy_eafe7fd0  (binary VA: 0xfe7fd0)
// Original: vox::VoxMSWavSubDecoder::~VoxMSWavSubDecoder
// ----------------------------------------------------------------------------
void vox::VoxMSWavSubDecoder::Destroy_eafe7fd0(vox::VoxMSWavSubDecoder::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CEE0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoder::GoToNextDataChunk  (binary VA: 0x1046a20)
// Original: vox::VoxMSWavSubDecoder::GoToNextDataChunk
// ----------------------------------------------------------------------------
void vox::VoxMSWavSubDecoder::GoToNextDataChunk(vox::VoxMSWavSubDecoder::Self *self)
{
  int v1;
  int v2;
  int v3;
  uint32_t *v4;

  v1 = *((uint32_t *)self + 2);
  if ( v1 != 0 )
  {
    v2 = *((uint32_t *)self + 1);
    if ( v2 != 0 )
    {
      v3 = *((uint32_t *)self + 3);
      if ( v3 != 0 )
      {
        v4 = *(uint32_t **)(v3 + 8);
        if ( v4 == nullptr )
        {
          *((uint32_t *)self + 3) = 0;
          *(uint32_t *)(v1 + 40) = 0;
          return;
        }
        *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v4);
      }
      else
      {
        v4 = *(uint32_t **)(v1 + 60);
        *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v4);
      }
      G4_VCALL<void>(v2, 16, *v4 + 8, 0);
      *(uint32_t *)(*((uint32_t *)self + 2) + 40) = *(uint32_t *)(*((uint32_t *)self + 3) + 4);
      *((uint32_t *)self + 8) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoder::SetDataSize  (binary VA: 0x1046aa0)
// Original: vox::VoxMSWavSubDecoder::SetDataSize
// ----------------------------------------------------------------------------
vox::VoxMSWavSubDecoder::Self * vox::VoxMSWavSubDecoder::SetDataSize(vox::VoxMSWavSubDecoder::Self *self)
{
  vox::VoxMSWavSubDecoder::Self *result;
  int v2;
  int v3;
  int v4;

  result = self;
  v2 = *((uint32_t *)self + 2);
  v3 = *(uint32_t *)(v2 + 56);
  if ( v3 != 0 )
    v4 = *(uint32_t *)(v3 + 12);
  else
    v4 = *(uint32_t *)(v2 + 40);
  *((uint32_t *)self + 11) = v4;
  return result;
}


