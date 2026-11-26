#include "Core/Utils/DecompTypes.h"
#include "vox_StreamCFileCursor.h"

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::Read  (binary VA: 0x103b190)
// Original: vox::StreamCFileCursor::Read
// ----------------------------------------------------------------------------
int vox::StreamCFileCursor::Read(vox::StreamCFileCursor::Self *self, uint8_t *a2, int a3)
{
  pthread_t CurThreadId;
  int v4;
  int v5;
  int v7;

  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v4 = *((uint32_t *)self + 2);
  if ( a3 > 0 && v4 != 0 )
  {
    if ( *((int *)self + 3) < 0 )
    {
      *((uint32_t *)self + 3) = (*(int (**)(uint32_t, pthread_t))(*(uint32_t *)v4 + 16))(
                                *((uint32_t *)self + 2),
                                CurThreadId);
      v4 = *((uint32_t *)self + 2);
    }
    v5 = G4_VCALL<int>(v4, 8, a2, 1, a3);
    *((uint32_t *)self + 3) += v5;
  }
  else
  {
    v5 = 0;
  }
  v7 = v5;
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::EndOfStream  (binary VA: 0x103b250)
// Original: vox::StreamCFileCursor::EndOfStream
// ----------------------------------------------------------------------------
bool vox::StreamCFileCursor::EndOfStream(vox::StreamCFileCursor::Self *self)
{
  pthread_t CurThreadId;
  bool v2;
  int v3;
  bool v5;

  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v2 = true;
  if ( *((uint32_t *)self + 2) != 0 )
  {
    v3 = *((uint32_t *)self + 3);
    if ( v3 < 0 )
    {
      v3 = G4_VCALL<int>(self, 24, CurThreadId);
      *((uint32_t *)self + 3) = v3;
    }
    v2 = G4_VCALL<int>(self, 44) - 1 <= v3;
  }
  v5 = v2;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::Init  (binary VA: 0x103b300)
// Original: vox::StreamCFileCursor::Init
// ----------------------------------------------------------------------------
void vox::StreamCFileCursor::Init(vox::StreamCFileCursor::Self *self)
{
  uint32_t *v1;
  vox::FileSystemStdio::Self *Instance;
  int v3;
  int v4;
  vox::FileSystemStdio::Self *v5;
  int v6;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v1 = *((uint32_t **)self + 1);
  if ( v1 != nullptr && *((uint32_t *)self + 2) == 0 )
  {
    v6 = v1[2];
    Instance = vox::FileSystemInterface::GetInstance();
    if ( Instance != nullptr && v6 != 0 )
    {
      v5 = Instance;
      v3 = G4_VCALL<int>(Instance, 8, v6, 6);
      *((uint32_t *)self + 2) = v3;
      if ( v3 != 0 )
      {
        if ( G4_VCALL<int>(v1, 16) == -2 )
        {
          (*(void (**)(uint32_t, uint32_t, int))(**((uint32_t **)self + 2) + 12))(*((uint32_t *)self + 2), 0, 2);
          v4 = (*(int (**)(uint32_t))(**((uint32_t **)self + 2) + 16))(*((uint32_t *)self + 2));
          v1[1] = v4;
          if ( v4 <= 0 )
          {
            G4_VCALL<void>(v5, 12, *((uint32_t *)self + 2));
            *((uint32_t *)self + 2) = 0;
          }
          else
          {
            (*(void (**)(vox::FileSystemStdio::Self *, uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 2) + 12))(
              v5,
              *((uint32_t *)self + 2),
              0,
              0);
            *((uint8_t *)self + 16) = 1;
          }
        }
        else
        {
          *((uint8_t *)self + 16) = 1;
        }
      }
    }
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::Shutdown  (binary VA: 0x103b440)
// Original: vox::StreamCFileCursor::Shutdown
// ----------------------------------------------------------------------------
void vox::StreamCFileCursor::Shutdown(vox::StreamCFileCursor::Self *self)
{
  vox::FileSystemStdio::Self *Instance;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  Instance = vox::FileSystemInterface::GetInstance();
  if ( Instance != nullptr && *((uint32_t *)self + 2) != 0 )
  {
    G4_VCALL<void>(Instance, 12, *((uint32_t *)self + 2));
    *((uint32_t *)self + 2) = 0;
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::Seek  (binary VA: 0x103b4c0)
// Original: vox::StreamCFileCursor::Seek
// ----------------------------------------------------------------------------
int vox::StreamCFileCursor::Seek(vox::StreamCFileCursor::Self *self, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v7;
  pthread_t CurThreadId;

  v3 = a2;
  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v4 = *((uint32_t *)self + 2);
  if ( v4 == 0 )
  {
    v5 = -1;
    goto LABEL_9;
  }
  switch ( a3 )
  {
    case 1:
      v7 = *((uint32_t *)self + 3);
      if ( v7 < 0 )
        v7 = (*(int (**)(uint32_t, pthread_t))(*(uint32_t *)v4 + 16))(*((uint32_t *)self + 2), CurThreadId);
      v3 = v7 + a2;
      *((uint32_t *)self + 3) = v7 + a2;
      goto LABEL_6;
    case 2:
      v3 = G4_VCALL<int>(self, 44, CurThreadId) - a2;
      break;
    case 0:
      break;
    default:
      v3 = *((uint32_t *)self + 3);
      goto LABEL_6;
  }
  *((uint32_t *)self + 3) = v3;
LABEL_6:
  if ( v3 >= 0 && G4_VCALL<int>(self, 44) >= v3 )
  {
    v5 = (*(int (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 2) + 12))(
           *((uint32_t *)self + 2),
           *((uint32_t *)self + 3),
           0);
  }
  else
  {
    *((uint32_t *)self + 3) = -1;
    v5 = -1;
  }
LABEL_9:
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::Tell  (binary VA: 0x103b5e0)
// Original: vox::StreamCFileCursor::Tell
// ----------------------------------------------------------------------------
int vox::StreamCFileCursor::Tell(vox::StreamCFileCursor::Self *self)
{
  pthread_t CurThreadId;
  int v2;
  int v3;
  int v5;

  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 )
  {
    v3 = *((uint32_t *)self + 3);
    if ( v3 < 0 )
    {
      v3 = (*(int (**)(uint32_t, pthread_t))(*(uint32_t *)v2 + 16))(*((uint32_t *)self + 2), CurThreadId);
      *((uint32_t *)self + 3) = v3;
    }
  }
  else
  {
    v3 = -1;
  }
  v5 = v3;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::Serialize  (binary VA: 0x103b670)
// Original: vox::StreamCFileCursor::Serialize
// ----------------------------------------------------------------------------
int vox::StreamCFileCursor::Serialize(uint32_t *a1, int a2, int a3, int16_t a4)
{
  int v4;
  uint8_t *v5;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  int v10;
  char *v11;
  int v12;
  unsigned int v13;
  uint8_t *v14;
  uint8_t *v15;
  int v16;
  int v17;
  uint8_t *v18;
  void *v19;
  uint8_t *v21;
  uint8_t *v22;
  int v23;
  uint8_t *v24;
  int v25;
  uint8_t *v26;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_v33[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v29)) > _g4_s1 ? (0u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v30)) > _g4_s2 ? (4u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (26u + sizeof(_g4_t_v32)) > _g4_s4 ? (26u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v33)) > _g4_s5 ? (28u + sizeof(_g4_t_v33)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 26u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);

  v4 = *(uint32_t *)(a2 + 200);
  v5 = (uint8_t *)(a2 + 192);
  v6 = a2 + 12;
  if ( v4 != a2 + 200 && *(uint8_t *)(v4 + 8) != 0 )
  {
    v21 = *(uint8_t **)(a2 + 192);
    if ( v21 == v5 )
      goto LABEL_11;
    if ( v21[8] != 0 )
      v21[8] = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v28 = *(uint32_t *)(a2 + 192);
  v7 = opNew(0xCu);
  if ( v7 != -8 )
    *(uint8_t *)(v7 + 8) = 1;
  sub_1901920(v7, v28);
  v29 = *(uint32_t *)(a2 + 200);
  v8 = opNew(0xCu);
  if ( v8 != -8 )
    *(uint8_t *)(v8 + 8) = 0;
  sub_1901920(v8, v29);
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
    g4_std_compat::ostream_write(v6, "FileStream", 10);
    g4_std_compat::ostream_write(v6, "\"", 1);
  }
LABEL_11:
  if ( (a4 & 0x80u) == 0
    || (v31 = G4_VCALL<int>(a1, 44), v22 = *(uint8_t **)(a2 + 192), v5 == v22) )
  {
    if ( (a4 & 0x100) == 0 )
      goto LABEL_13;
  }
  else
  {
    if ( v22[8] != 0 )
    {
      v22[8] = 0;
      v23 = a2 + 12;
    }
    else
    {
      v23 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v23, "\"", 1);
    g4_std_compat::ostream_write(v23, "size", 4);
    g4_std_compat::ostream_write(v23, "\":", 2);
    g4_std::ostream::op_shl_int(v23, v31);
    if ( (a4 & 0x100) == 0 )
      goto LABEL_13;
  }
  v30 = G4_VCALL<int>(a1, 24);
  v24 = *(uint8_t **)(a2 + 192);
  if ( v5 != v24 )
  {
    if ( v24[8] != 0 )
    {
      v24[8] = 0;
      v25 = a2 + 12;
    }
    else
    {
      v25 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v25, "\"", 1);
    g4_std_compat::ostream_write(v25, "position", 8);
    g4_std_compat::ostream_write(v25, "\":", 2);
    g4_std::ostream::op_shl_int(v25, v30);
  }
LABEL_13:
  v10 = a1[2];
  if ( v10 != 0 )
  {
    v11 = (char *)(*(int (**)(uint32_t))(*(uint32_t *)v10 + 24))(a1[2]);
    if ( v11 != nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v33), v11, (int)(uintptr_t)(&v32));
      v12 = v33[0];
      if ( *(uint32_t *)(v33[0] - 12) != 0 )
      {
        v13 = 0;
        do
        {
          while ( 1 )
          {
            if ( *(int *)(v12 - 4) >= 0 )
            {
              sub_19397C0(v33);
              v12 = v33[0];
            }
            v14 = (uint8_t *)(v12 + v13);
            if ( *(uint8_t *)(v12 + v13) == 92 )
              break;
            if ( ++v13 >= *(uint32_t *)(v12 - 12) )
              goto LABEL_24;
          }
          if ( *(int *)(v12 - 4) >= 0 )
          {
            sub_19397C0(v33);
            v14 = (uint8_t *)(v13 + v33[0]);
          }
          *v14 = 47;
          v12 = v33[0];
          ++v13;
        }
        while ( v13 < *(uint32_t *)(v33[0] - 12) );
      }
LABEL_24:
      v15 = *(uint8_t **)(a2 + 192);
      if ( v5 != v15 )
      {
        if ( v15[8] != 0 )
        {
          v15[8] = 0;
          v16 = a2 + 12;
        }
        else
        {
          v16 = a2 + 12;
          g4_std_compat::ostream_write(a2 + 12, ",", 1);
        }
        g4_std_compat::ostream_write(v16, "\"", 1);
        g4_std_compat::ostream_write(v16, "file_path", 9);
        g4_std_compat::ostream_write(v16, "\":\"", 3);
        v17 = (int)(uintptr_t)(g4_std_compat::ostream_write(v16, v33[0], *(uint32_t *)(v33[0] - 12)));
        g4_std_compat::ostream_write(v17, "\"", 1);
        v12 = v33[0];
      }
      if ( (uint32_t *)(v12 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v12 - 12));
      }
    }
    else
    {
      v26 = *(uint8_t **)(a2 + 192);
      if ( v5 == v26 )
        return 0;
      if ( v26[8] != 0 )
      {
        v26[8] = 0;
        v27 = a2 + 12;
      }
      else
      {
        v27 = a2 + 12;
        g4_std_compat::ostream_write(a2 + 12, ",", 1);
      }
      g4_std_compat::ostream_write(v27, "\"", 1);
      g4_std_compat::ostream_write(v27, "file_path", 9);
      g4_std_compat::ostream_write(v27, "\":\"", 3);
      g4_std_compat::ostream_write(v27, "Unknown", 7);
      g4_std_compat::ostream_write(v27, "\"", 1);
    }
  }
  v18 = *(uint8_t **)(a2 + 192);
  if ( v18 != v5 && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    sub_1901940(*(uint32_t *)(a2 + 192));
    opDelete(v18);
    v19 = *(void **)(a2 + 200);
    sub_1901940(v19);
    opDelete(v19);
    g4_std_compat::ostream_write(a2 + 12, "}", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::IsValid  (binary VA: 0x103bfb0)
// Original: vox::StreamCFileCursor::IsValid
// ----------------------------------------------------------------------------
int vox::StreamCFileCursor::IsValid(vox::StreamCFileCursor::Self *self)
{
  return *((uint8_t *)self + 16);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::IsSeekable  (binary VA: 0x103c0a0)
// Original: vox::StreamCFileCursor::IsSeekable
// ----------------------------------------------------------------------------
int vox::StreamCFileCursor::IsSeekable()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::Destroy  (binary VA: 0x103c120)
// Original: vox::StreamCFileCursor::~StreamCFileCursor
// ----------------------------------------------------------------------------
void vox::StreamCFileCursor::Destroy(vox::StreamCFileCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D9E8);
  vox::StreamCFileCursor::Shutdown(self);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileCursor::Destroy_ea103c170  (binary VA: 0x103c170)
// Original: vox::StreamCFileCursor::~StreamCFileCursor
// ----------------------------------------------------------------------------
void vox::StreamCFileCursor::Destroy_ea103c170(vox::StreamCFileCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D9E8);
  vox::StreamCFileCursor::Shutdown(self);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
  opDelete(self);
}


