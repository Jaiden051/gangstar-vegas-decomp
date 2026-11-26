#include "Core/Utils/DecompTypes.h"
#include "vox_ZipTableSerializer.h"

// ----------------------------------------------------------------------------
// Function: vox::ZipTableSerializer::Destroy  (binary VA: 0x100bf80)
// Original: vox::ZipTableSerializer::~ZipTableSerializer
// ----------------------------------------------------------------------------
void vox::ZipTableSerializer::Destroy()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::ZipTableSerializer::ParseExtensionHeader  (binary VA: 0x100bfe0)
// Original: vox::ZipTableSerializer::ParseExtensionHeader
// ----------------------------------------------------------------------------
int vox::ZipTableSerializer::ParseExtensionHeader(vox::ZipTableSerializer::Self *self)
{
  int v1;
  bool v3; // cc
  typedef vox::VoxThread::Self *_g4_t_v4;
  typedef uint8_t _g4_t_v5;
  typedef void *_g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v5)) > _g4_s1 ? (27u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v7)) > _g4_s3 ? (44u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v1 = *(uint32_t *)self;
  v5 = 0;
  if ( *(uint32_t *)self != 0 )
  {
    v6 = ((uint8_t *)(uintptr_t)0x787878u);
    G4_VCALL<void>(v1, 12, -8, 2);
    (*(void (**)(uint32_t, void **, int, int))(**(uint32_t **)self + 8))(*(uint32_t *)self, &v6, 1, 4);
    if ( (uint8_t)(uintptr_t)v6 == 90 && BYTE1(v6) == 69 && BYTE2(v6) == 84 && HIBYTE(v6) == 95 )
    {
      (*(void (**)(uint32_t, int *, int, int))(**(uint32_t **)self + 8))(*(uint32_t *)self, &v7, 4, 1);
      v3 = v7 - 8 <= 0;
      *((uint32_t *)self + 1) = v7 - 8;
      if ( !v3 )
      {
        *((uint32_t *)self + 3) = 0;
        v5 = 1;
      }
    }
    else
    {
      *((uint32_t *)self + 3) = 1;
      v5 = 0;
    }
  }
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::ZipTableSerializer::Construct  (binary VA: 0x100c100)
// Original: vox::ZipTableSerializer::ZipTableSerializer
// ----------------------------------------------------------------------------
void vox::ZipTableSerializer::Construct(vox::ZipTableSerializer::Self *self, vox::FileInterface::Self *a2)
{
  vox::VoxThread::Self *v2;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = -1;
  *((uint32_t *)self + 4) = 0;
  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::FileSystemInterface::GetInstance();
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  if ( (uint8_t)vox::ZipTableSerializer::ParseExtensionHeader(self) != 0 )
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)self + 12))(*(uint32_t *)self, -8 - *((uint32_t *)self + 1), 2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::ZipTableSerializer::Read  (binary VA: 0x100c1c0)
// Original: vox::ZipTableSerializer::Read
// ----------------------------------------------------------------------------
unsigned int vox::ZipTableSerializer::Read(vox::ZipTableSerializer::Self *self, void *a2, unsigned int a3)
{
  unsigned int v3;
  vox::VoxThread::Self *v5;

  v3 = a3;
  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( *((uint32_t *)self + 3) != 0
    || a3 != (*(int (**)(uint32_t, void *, int, unsigned int))(**(uint32_t **)self + 8))(*(uint32_t *)self, a2, 1, a3) )
  {
    v3 = 0;
  }
  else
  {
    *((uint32_t *)self + 2) += a3;
  }
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::ZipTableSerializer::ReadByte  (binary VA: 0x100c260)
// Original: vox::ZipTableSerializer::ReadByte
// ----------------------------------------------------------------------------
int vox::ZipTableSerializer::ReadByte(vox::ZipTableSerializer::Self *self, uint8_t *a2)
{
  int v2;
  int v4;
  vox::VoxThread::Self *v5;
  int v6;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  if ( *((uint32_t *)self + 3) == 0 )
  {
    v4 = (*(int (**)(uint32_t, uint8_t *, int, int))(**(uint32_t **)self + 8))(*(uint32_t *)self, a2, 1, 1);
    v2 = 0;
    if ( v4 == 1 )
    {
      ++*((uint32_t *)self + 2);
      v2 = 1;
    }
  }
  v6 = v2;
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::ZipTableSerializer::ReadInt  (binary VA: 0x100c310)
// Original: vox::ZipTableSerializer::ReadInt
// ----------------------------------------------------------------------------
int vox::ZipTableSerializer::ReadInt(vox::ZipTableSerializer::Self *self, int *a2)
{
  int v2;
  int v4;
  vox::VoxThread::Self *v5;
  int v6;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  if ( *((uint32_t *)self + 3) == 0 )
  {
    v4 = (*(int (**)(uint32_t, int *, int, int))(**(uint32_t **)self + 8))(*(uint32_t *)self, a2, 4, 1);
    v2 = 0;
    if ( v4 == 1 )
    {
      *((uint32_t *)self + 2) += 4;
      v2 = 1;
    }
  }
  v6 = v2;
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::ZipTableSerializer::ReadShort  (binary VA: 0x100c3c0)
// Original: vox::ZipTableSerializer::ReadShort
// ----------------------------------------------------------------------------
int vox::ZipTableSerializer::ReadShort(vox::ZipTableSerializer::Self *self, int16_t *a2)
{
  int v2;
  int v4;
  vox::VoxThread::Self *v5;
  int v6;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  if ( *((uint32_t *)self + 3) == 0 )
  {
    v4 = (*(int (**)(uint32_t, int16_t *, int, int))(**(uint32_t **)self + 8))(*(uint32_t *)self, a2, 2, 1);
    v2 = 0;
    if ( v4 == 1 )
    {
      *((uint32_t *)self + 2) += 2;
      v2 = 1;
    }
  }
  v6 = v2;
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::ZipTableSerializer::GetStatus  (binary VA: 0x100c470)
// Original: vox::ZipTableSerializer::GetStatus
// ----------------------------------------------------------------------------
int vox::ZipTableSerializer::GetStatus(vox::ZipTableSerializer::Self *self)
{
  int v1;
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v1 = *((uint32_t *)self + 3);
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::ZipTableSerializer::GetFilePath  (binary VA: 0x100c4e0)
// Original: vox::ZipTableSerializer::GetFilePath
// ----------------------------------------------------------------------------
int vox::ZipTableSerializer::GetFilePath(vox::ZipTableSerializer::Self *self)
{
  int CurThreadId;
  int v2;
  vox::VoxThread::Self *v4;

  CurThreadId = vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = 0;
  if ( *(uint32_t *)self != 0 )
    v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)self + 24))(*(uint32_t *)self, CurThreadId);
  sub_BA06B0();
  return v2;
}


