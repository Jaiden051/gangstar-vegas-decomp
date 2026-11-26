#include "Core/Utils/DecompTypes.h"
#include "vox_StreamNativeSegment.h"

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegment::DestroyCursor  (binary VA: 0x103cfd0)
// Original: vox::StreamNativeSegment::DestroyCursor
// ----------------------------------------------------------------------------
int vox::StreamNativeSegment::DestroyCursor(vox::StreamNativeSegment::Self *self, vox::StreamCursorInterface::Self *a2)
{
  int result;

  if ( a2 != nullptr )
  {
    (**(void (***)(vox::StreamCursorInterface::Self *))a2)(a2);
    return VoxFreeInternal(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegment::Construct  (binary VA: 0x103d010)
// Original: vox::StreamNativeSegment::StreamNativeSegment
// ----------------------------------------------------------------------------
uint32_t * vox::StreamNativeSegment::Construct(uint32_t *a1, uint32_t *a2)
{
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_208DAE8);
  a1[2] = *a2;
  a1[3] = a2[1];
  a1[4] = a2[2];
  a1[1] = a2[2];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegment::CreateNewCursor  (binary VA: 0x103d0b0)
// Original: vox::StreamNativeSegment::CreateNewCursor
// ----------------------------------------------------------------------------
vox::StreamNativeSegmentCursor::Self * vox::StreamNativeSegment::CreateNewCursor(vox::StreamNativeSegment::Self *self)
{
  vox::StreamNativeSegmentCursor::Self *v1;

  v1 = nullptr;
  if ( *((int *)self + 4) > 0 )
  {
    v1 = (vox::StreamNativeSegmentCursor::Self *)VoxAllocInternal(
                                             0x10u,
                                             0,
                                             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_stream_native_segment.cpp"),
                                             (int)(uintptr_t)("CreateNewCursor"),
                                             27);
    vox::StreamNativeSegmentCursor::Construct(v1, self);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegment::GetType  (binary VA: 0x103d130)
// Original: vox::StreamNativeSegment::GetType
// ----------------------------------------------------------------------------
int vox::StreamNativeSegment::GetType()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegment::Destroy  (binary VA: 0x103d150)
// Original: vox::StreamNativeSegment::~StreamNativeSegment
// ----------------------------------------------------------------------------
void vox::StreamNativeSegment::Destroy(vox::StreamNativeSegment::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CBA8);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegment::Destroy_ea103d170  (binary VA: 0x103d170)
// Original: vox::StreamNativeSegment::~StreamNativeSegment
// ----------------------------------------------------------------------------
void vox::StreamNativeSegment::Destroy_ea103d170(vox::StreamNativeSegment::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CBA8);
  opDelete(self);
}


