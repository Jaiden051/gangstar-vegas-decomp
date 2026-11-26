#include "Core/Utils/DecompTypes.h"
#include "vox_MpcSegmentDecoder.h"

// ----------------------------------------------------------------------------
// Function: vox::MpcSegmentDecoder::Destroy  (binary VA: 0xffa650)
// Original: vox::MpcSegmentDecoder::~MpcSegmentDecoder
// ----------------------------------------------------------------------------
void vox::MpcSegmentDecoder::Destroy(vox::MpcSegmentDecoder::Self *self)
{
  int v1;
  void (***v2)(uint32_t);
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v1 = *((uint32_t *)self + 2);
  if ( v1 != 0 )
  {
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3));
    *((uint32_t *)self + 3) = 0;
  }
  if ( *(uint32_t *)self != 0 )
  {
    (*(void (**)(uint32_t, uint32_t))(**(uint32_t **)self + 24))(*(uint32_t *)self, *((uint32_t *)self + 1));
    v2 = *(void (****)(uint32_t))self;
    *((uint32_t *)self + 1) = 0;
    if ( v2 != nullptr )
    {
      (**v2)((uint32_t)(uintptr_t)(v2));
      VoxFreeInternal(*(void **)self);
    }
    *(uint32_t *)self = 0;
  }
  sub_BA06B0();
}


