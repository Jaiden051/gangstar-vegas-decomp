#include "Core/Utils/DecompTypes.h"
#include "vox_StreamMemoryBuffer.h"

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBuffer::DestroyCursor  (binary VA: 0x103c230)
// Original: vox::StreamMemoryBuffer::DestroyCursor
// ----------------------------------------------------------------------------
int vox::StreamMemoryBuffer::DestroyCursor(vox::StreamMemoryBuffer::Self *self, vox::StreamCursorInterface::Self *a2)
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
// Function: vox::StreamMemoryBuffer::CreateNewCursor  (binary VA: 0x103c270)
// Original: vox::StreamMemoryBuffer::CreateNewCursor
// ----------------------------------------------------------------------------
uint32_t * vox::StreamMemoryBuffer::CreateNewCursor(vox::StreamMemoryBuffer::Self *self)
{
  uint32_t *result;

  result = nullptr;
  if ( *((uint32_t *)self + 2) != 0 )
  {
    result = (uint32_t *)VoxAllocInternal(
                         0xCu,
                         0,
                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_stream_memorybuffer.cpp"),
                         (int)(uintptr_t)("CreateNewCursor"),
                         69);
    result[1] = (uint32_t)(uintptr_t)(self);
    result[2] = 0;
    *result = ((uint32_t)(uintptr_t)&off_208DA88);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBuffer::Destroy  (binary VA: 0x103c420)
// Original: vox::StreamMemoryBuffer::~StreamMemoryBuffer
// ----------------------------------------------------------------------------
void vox::StreamMemoryBuffer::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208DA48));
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  if ( *(self + 2) != nullptr && *((uint8_t *)self + 12) != 0 )
    VoxFreeInternal(*(self + 2));
  sub_BA06B0();
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208CBA8));
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBuffer::Destroy_ea103c4b0  (binary VA: 0x103c4b0)
// Original: vox::StreamMemoryBuffer::~StreamMemoryBuffer
// ----------------------------------------------------------------------------
void vox::StreamMemoryBuffer::Destroy_ea103c4b0(void **self)
{
  vox::StreamMemoryBuffer::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBuffer::Construct  (binary VA: 0x103ca30)
// Original: vox::StreamMemoryBuffer::StreamMemoryBuffer
// ----------------------------------------------------------------------------
int vox::StreamMemoryBuffer::Construct(int a1, int a2)
{
  signed int v2;
  void *v3;
  vox::VoxThread::Self *dest;
  int CurThreadId;

  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208DA48);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint8_t *)(a1 + 12) = 1;
  CurThreadId = vox::VoxThread::GetCurThreadId(dest);
  sub_BA06A0("StreamMemoryBuffer::StreamMemoryBuffer", CurThreadId);
  if ( a2 == 0 )
    { sub_BA06B0("StreamMemoryBuffer::StreamMemoryBuffer", CurThreadId); return 0; }
  v2 = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 4) = v2;
  if ( *(uint8_t *)(a2 + 8) != 0 )
  {
    *(uint8_t *)(a1 + 12) = 1;
    if ( *(uint8_t *)(a2 + 8) == 0 )
    {
LABEL_8:
      *(uint32_t *)(a1 + 8) = *(uint32_t *)a2;
      { sub_BA06B0("StreamMemoryBuffer::StreamMemoryBuffer", CurThreadId); return 0; }
    }
  }
  else
  {
    *(uint8_t *)(a1 + 12) = *(uint8_t *)(a2 + 9);
    if ( *(uint8_t *)(a2 + 8) == 0 )
      goto LABEL_8;
  }
  if ( *(uint8_t *)(a2 + 9) != 0 )
    goto LABEL_8;
  if ( v2 > 0 )
  {
    v3 = (void *)VoxAllocInternal(
                   v2,
                   0,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_stream_memorybuffer.cpp"),
                   (int)(uintptr_t)("StreamMemoryBuffer"),
                   42);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v3);
    if ( v3 != nullptr )
      memcpy(v3, *(const void **)a2, *(uint32_t *)(a1 + 4));
    else
      *(uint32_t *)(a1 + 4) = 0;
  }
  { sub_BA06B0("StreamMemoryBuffer::StreamMemoryBuffer", CurThreadId); return 0; }
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBuffer::GetType  (binary VA: 0x103cbd0)
// Original: vox::StreamMemoryBuffer::GetType
// ----------------------------------------------------------------------------
int vox::StreamMemoryBuffer::GetType()
{
  return 0;
}


