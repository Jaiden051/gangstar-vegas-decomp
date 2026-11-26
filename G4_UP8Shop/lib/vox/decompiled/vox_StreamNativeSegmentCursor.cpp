#include "Core/Utils/DecompTypes.h"
#include "vox_StreamNativeSegmentCursor.h"

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegmentCursor::EndOfStream  (binary VA: 0x103cc60)
// Original: vox::StreamNativeSegmentCursor::EndOfStream
// ----------------------------------------------------------------------------
bool vox::StreamNativeSegmentCursor::EndOfStream(vox::StreamNativeSegmentCursor::Self *self)
{
  uint32_t *v1;
  bool v2;
  int v3;
  bool v5;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v1 = *((uint32_t **)self + 2);
  v2 = true;
  if ( *v1 != 0 )
  {
    v3 = *((uint32_t *)self + 3);
    if ( v3 < v1[2] )
      v2 = v3 == -1;
  }
  v5 = v2;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegmentCursor::Read  (binary VA: 0x103ccf0)
// Original: vox::StreamNativeSegmentCursor::Read
// ----------------------------------------------------------------------------
int vox::StreamNativeSegmentCursor::Read(vox::StreamNativeSegmentCursor::Self *self, uint8_t *a2, int a3)
{
  int *v3;
  int v4;
  int v6;
  int *v7;
  int v8;
  bool v9; // cc
  int v10;
  int v11;
  int v12;
  int v13;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v3 = *((int **)self + 2);
  v4 = *v3;
  if ( a3 > 0 && v4 != 0 )
  {
    v6 = *((uint32_t *)self + 3);
    v12 = 0;
    if ( v6 >= 0
      && v6 < v3[2]
      && G4_VCALL<int>(v4, 16, v3[1] + *((uint32_t *)self + 3), 0) != -1 )
    {
      v7 = *((int **)self + 2);
      v8 = v7[2] - *((uint32_t *)self + 3);
      v9 = *((uint32_t *)self + 3) + a3 <= v7[2];
      v10 = *v7;
      v13 = v8;
      v11 = a3;
      if ( !v9 )
        v11 = v13;
      v12 = G4_VCALL<int>(v10, 28, a2, v11);
      *((uint32_t *)self + 3) += v12;
    }
  }
  else
  {
    v12 = 0;
  }
  sub_BA06B0();
  return v12;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegmentCursor::Tell  (binary VA: 0x103ce00)
// Original: vox::StreamNativeSegmentCursor::Tell
// ----------------------------------------------------------------------------
int vox::StreamNativeSegmentCursor::Tell(vox::StreamNativeSegmentCursor::Self *self)
{
  int v1;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  if ( **((uint32_t **)self + 2) != 0 )
    v1 = *((uint32_t *)self + 3);
  else
    v1 = -1;
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegmentCursor::Seek  (binary VA: 0x103ce80)
// Original: vox::StreamNativeSegmentCursor::Seek
// ----------------------------------------------------------------------------
int vox::StreamNativeSegmentCursor::Seek(vox::StreamNativeSegmentCursor::Self *self, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int v6;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v3 = *((uint32_t **)self + 2);
  if ( *v3 != 0 )
  {
    v4 = *((uint32_t *)self + 3);
    switch ( a3 )
    {
      case 1:
        v4 += a2;
        break;
      case 2:
        v4 = v3[2] - a2;
        break;
      case 0:
        v4 = a2;
        break;
      default:
        break;
    }
    v6 = -1;
    if ( v4 >= 0
      && v4 <= v3[2]
      && G4_VCALL<int>(*v3, 16, v4 + v3[1], 0) == 0 )
    {
      *((uint32_t *)self + 3) = v4;
      v6 = 0;
    }
  }
  else
  {
    v6 = -1;
  }
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegmentCursor::Shutdown  (binary VA: 0x103cf70)
// Original: vox::StreamNativeSegmentCursor::Shutdown
// ----------------------------------------------------------------------------
void vox::StreamNativeSegmentCursor::Shutdown()
{
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegmentCursor::Construct  (binary VA: 0x103d070)
// Original: vox::StreamNativeSegmentCursor::StreamNativeSegmentCursor
// ----------------------------------------------------------------------------
vox::StreamNativeSegmentCursor::Self * vox::StreamNativeSegmentCursor::Construct(vox::StreamNativeSegmentCursor::Self *self, vox::StreamInterface::Self *a2)
{
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DB28);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)((char *)a2 + 8);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegmentCursor::IsSeekable  (binary VA: 0x103d140)
// Original: vox::StreamNativeSegmentCursor::IsSeekable
// ----------------------------------------------------------------------------
int vox::StreamNativeSegmentCursor::IsSeekable()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegmentCursor::Destroy  (binary VA: 0x103d1a0)
// Original: vox::StreamNativeSegmentCursor::~StreamNativeSegmentCursor
// ----------------------------------------------------------------------------
void vox::StreamNativeSegmentCursor::Destroy(vox::StreamNativeSegmentCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DB28);
  vox::StreamNativeSegmentCursor::Shutdown();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamNativeSegmentCursor::Destroy_ea103d1f0  (binary VA: 0x103d1f0)
// Original: vox::StreamNativeSegmentCursor::~StreamNativeSegmentCursor
// ----------------------------------------------------------------------------
void vox::StreamNativeSegmentCursor::Destroy_ea103d1f0(vox::StreamNativeSegmentCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DB28);
  vox::StreamNativeSegmentCursor::Shutdown();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
  opDelete(self);
}


