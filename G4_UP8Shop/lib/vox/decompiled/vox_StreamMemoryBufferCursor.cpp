#include "Core/Utils/DecompTypes.h"
#include "vox_StreamMemoryBufferCursor.h"

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferCursor::EndOfStream  (binary VA: 0x103c2f0)
// Original: vox::StreamMemoryBufferCursor::EndOfStream
// ----------------------------------------------------------------------------
int vox::StreamMemoryBufferCursor::EndOfStream(vox::StreamMemoryBufferCursor::Self *self)
{
  pthread_t CurThreadId;
  int v2;
  int v3;

  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v2 = G4_VCALL<int>(self, 44, CurThreadId);
  LOBYTE(v2) = *((uint32_t *)self + 2) == v2;
  v3 = v2;
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferCursor::Seek  (binary VA: 0x103c360)
// Original: vox::StreamMemoryBufferCursor::Seek
// ----------------------------------------------------------------------------
int vox::StreamMemoryBufferCursor::Seek(vox::StreamMemoryBufferCursor::Self *self, int a2, int a3)
{
  int v3;
  int v4;
  pthread_t CurThreadId;

  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v3 = *((uint32_t *)self + 2);
  switch ( a3 )
  {
    case 1:
      v3 += a2;
      break;
    case 2:
      v3 = G4_VCALL<int>(self, 44, CurThreadId)
         - a2;
      break;
    case 0:
      v3 = a2;
      break;
    default:
      break;
  }
  if ( v3 < 0 || v3 > G4_VCALL<int>(self, 44) )
  {
    v4 = -1;
  }
  else
  {
    *((uint32_t *)self + 2) = v3;
    v4 = 0;
  }
  sub_BA06B0();
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferCursor::ReadRef  (binary VA: 0x103c4f0)
// Original: vox::StreamMemoryBufferCursor::ReadRef
// ----------------------------------------------------------------------------
int vox::StreamMemoryBufferCursor::ReadRef(vox::StreamMemoryBufferCursor::Self *self, uint8_t **a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  pthread_t CurThreadId;

  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v3 = *((uint32_t *)self + 1);
  v4 = 0;
  if ( v3 != 0 && *(uint32_t *)(v3 + 8) != 0 && a3 > 0 )
  {
    v5 = G4_VCALL<int>(self, 44, CurThreadId);
    v6 = *((uint32_t *)self + 2);
    v4 = v5 - v6;
    if ( v4 > a3 )
      v4 = a3;
    *a2 = (uint8_t *)(*(uint32_t *)(v3 + 8) + v6);
    *((uint32_t *)self + 2) += v4;
  }
  v8 = v4;
  sub_BA06B0();
  return v8;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferCursor::Read  (binary VA: 0x103c5a0)
// Original: vox::StreamMemoryBufferCursor::Read
// ----------------------------------------------------------------------------
size_t vox::StreamMemoryBufferCursor::Read(vox::StreamMemoryBufferCursor::Self *self, uint8_t *dest, int a3)
{
  pthread_t CurThreadId;
  size_t v4;
  int v5;
  int v6;
  size_t n;
  void *src;
  int v10;
  size_t v11;
  size_t v12;

  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v4 = 0;
  v5 = *((uint32_t *)self + 1);
  if ( dest != nullptr && v5 != 0 && *(uint32_t *)(v5 + 8) != 0 && a3 > 0 )
  {
    v10 = *((uint32_t *)self + 1);
    v6 = G4_VCALL<int>(self, 44, CurThreadId)
       - *((uint32_t *)self + 2);
    n = a3;
    if ( v6 <= a3 )
      n = v6;
    src = (void *)(*(uint32_t *)(v10 + 8) + *((uint32_t *)self + 2));
    v11 = n;
    memcpy(dest, src, n);
    v4 = v11;
    *((uint32_t *)self + 2) += v11;
  }
  v12 = v4;
  sub_BA06B0();
  return v12;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferCursor::Serialize  (binary VA: 0x103c670)
// Original: vox::StreamMemoryBufferCursor::Serialize
// ----------------------------------------------------------------------------
int vox::StreamMemoryBufferCursor::Serialize(uint32_t *a1, int a2, int a3, int16_t a4)
{
  int v4;
  uint8_t *v5;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  uint8_t *v10;
  void *v11;
  uint8_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v4 = *(uint32_t *)(a2 + 200);
  v5 = (uint8_t *)(a2 + 192);
  v6 = a2 + 12;
  if ( v4 != a2 + 200 && *(uint8_t *)(v4 + 8) != 0 )
  {
    v13 = *(uint8_t **)(a2 + 192);
    if ( v13 == v5 )
      goto LABEL_11;
    if ( v13[8] != 0 )
      v13[8] = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v17 = *(uint32_t *)(a2 + 192);
  v7 = opNew(0xCu);
  if ( v7 != -8 )
    *(uint8_t *)(v7 + 8) = 1;
  sub_1901920(v7, v17);
  v18 = *(uint32_t *)(a2 + 200);
  v8 = opNew(0xCu);
  if ( v8 != -8 )
    *(uint8_t *)(v8 + 8) = 0;
  sub_1901920(v8, v18);
  g4_std_compat::ostream_write(v6, "{", 1);
  v9 = *(uint8_t **)(a2 + 192);
  if ( v9 != v5 )
  {
    if ( v9[8] != 0 )
      v9[8] = 0;
    else
      g4_std_compat::ostream_write(v6, ",", 1);
    g4_std_compat::ostream_write(v6, "\"", 1);
    g4_std_compat::ostream_write(v6, "type", 4);
    g4_std_compat::ostream_write(v6, "\":\"", 3);
    g4_std_compat::ostream_write(v6, "Memory", 6);
    g4_std_compat::ostream_write(v6, "\"", 1);
  }
LABEL_11:
  if ( (a4 & 0x80u) != 0 )
  {
    v15 = G4_VCALL<int>(a1, 44);
    v10 = *(uint8_t **)(a2 + 192);
    v20 = v15;
    if ( v5 != v10 )
    {
      if ( v10[8] != 0 )
      {
        v10[8] = 0;
        v16 = a2 + 12;
      }
      else
      {
        v16 = a2 + 12;
        g4_std_compat::ostream_write(a2 + 12, ",", 1);
      }
      g4_std_compat::ostream_write(v16, "\"", 1);
      g4_std_compat::ostream_write(v16, "size", 4);
      g4_std_compat::ostream_write(v16, "\":", 2);
      g4_std::ostream::op_shl_int(v16, v20);
      v10 = *(uint8_t **)(a2 + 192);
    }
  }
  else
  {
    v10 = *(uint8_t **)(a2 + 192);
  }
  if ( (a4 & 0x100) != 0 )
  {
    if ( v5 == v10 )
      return 0;
    if ( v10[8] != 0 )
    {
      v10[8] = 0;
      v14 = a2 + 12;
    }
    else
    {
      v14 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v19 = a1[2];
    g4_std_compat::ostream_write(v14, "\"", 1);
    g4_std_compat::ostream_write(v14, "position", 8);
    g4_std_compat::ostream_write(v14, "\":", 2);
    g4_std::ostream::op_shl_int(v14, v19);
    v10 = *(uint8_t **)(a2 + 192);
  }
  if ( v5 != v10 && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    sub_1901940(v10);
    opDelete(v10);
    v11 = *(void **)(a2 + 200);
    sub_1901940(v11);
    opDelete(v11);
    g4_std_compat::ostream_write(a2 + 12, "}", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferCursor::IsSeekable  (binary VA: 0x103cbe0)
// Original: vox::StreamMemoryBufferCursor::IsSeekable
// ----------------------------------------------------------------------------
int vox::StreamMemoryBufferCursor::IsSeekable()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferCursor::Tell  (binary VA: 0x103cbf0)
// Original: vox::StreamMemoryBufferCursor::Tell
// ----------------------------------------------------------------------------
int vox::StreamMemoryBufferCursor::Tell(vox::StreamMemoryBufferCursor::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferCursor::AllowBufferReference  (binary VA: 0x103cc00)
// Original: vox::StreamMemoryBufferCursor::AllowBufferReference
// ----------------------------------------------------------------------------
int vox::StreamMemoryBufferCursor::AllowBufferReference()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferCursor::Destroy  (binary VA: 0x103cc10)
// Original: vox::StreamMemoryBufferCursor::~StreamMemoryBufferCursor
// ----------------------------------------------------------------------------
void vox::StreamMemoryBufferCursor::Destroy(vox::StreamMemoryBufferCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferCursor::Destroy_ea103cc30  (binary VA: 0x103cc30)
// Original: vox::StreamMemoryBufferCursor::~StreamMemoryBufferCursor
// ----------------------------------------------------------------------------
void vox::StreamMemoryBufferCursor::Destroy_ea103cc30(vox::StreamMemoryBufferCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
  opDelete(self);
}


