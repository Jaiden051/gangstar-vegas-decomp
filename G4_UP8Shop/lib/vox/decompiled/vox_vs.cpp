#include "Core/Utils/DecompTypes.h"
#include "vox_vs.h"

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStreamCursor::Size  (binary VA: 0xfcce90)
// Original: vox::vs::VSStreamCursor::Size
// ----------------------------------------------------------------------------
int vox::vs::VSStreamCursor::Size(vox::vs::VSStreamCursor::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSFileStreamCursor::Shutdown  (binary VA: 0xfccea0)
// Original: vox::vs::VSFileStreamCursor::Shutdown
// ----------------------------------------------------------------------------
void vox::vs::VSFileStreamCursor::Shutdown()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSFileStreamCursor::Copy  (binary VA: 0xfcceb0)
// Original: vox::vs::VSFileStreamCursor::Copy
// ----------------------------------------------------------------------------
int vox::vs::VSFileStreamCursor::Copy(vox::vs::VSFileStreamCursor::Self *self, vox::vs::VSStreamCursor::Self *a2)
{
  vox::Mutex::Self *v2;

  v2 = *((vox::Mutex::Self **)self + 5);
  vox::Mutex::Lock(v2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 2) = 0;
  return (int)(uintptr_t)(vox::Mutex::Unlock(v2));
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::DestroyCursor  (binary VA: 0xfccf20)
// Original: vox::vs::VSStream::DestroyCursor
// ----------------------------------------------------------------------------
int vox::vs::VSStream::DestroyCursor(vox::vs::VSStream::Self *self, vox::StreamCursorInterface::Self *a2)
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
// Function: vox::vs::VSBufferStreamCursor::EndOfStream  (binary VA: 0xfccf60)
// Original: vox::vs::VSBufferStreamCursor::EndOfStream
// ----------------------------------------------------------------------------
bool vox::vs::VSBufferStreamCursor::EndOfStream(vox::vs::VSBufferStreamCursor::Self *self)
{
  bool v1;
  vox::VoxThread::Self *v3;
  bool v4;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v1 = true;
  if ( *((uint32_t *)self + 6) != 0 )
    v1 = *((uint32_t *)self + 2) >= *((uint32_t *)self + 4) - 1;
  v4 = v1;
  sub_BA06B0();
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferStreamCursor::Read  (binary VA: 0xfccfe0)
// Original: vox::vs::VSBufferStreamCursor::Read
// ----------------------------------------------------------------------------
size_t vox::vs::VSBufferStreamCursor::Read(vox::vs::VSBufferStreamCursor::Self *self, uint8_t *a2, signed int a3)
{
  size_t n;
  int v4;
  int v5;
  signed int v6;
  vox::VoxThread::Self *dest;

  n = a3;
  vox::VoxThread::GetCurThreadId(dest);
  sub_BA06A0();
  v4 = *((uint32_t *)self + 6);
  if ( a3 > 0 && v4 != 0 )
  {
    v5 = *((uint32_t *)self + 2);
    v6 = *((uint32_t *)self + 4);
    if ( a3 + v5 < 0 || a3 + v5 >= v6 )
      n = v6 - v5;
    memcpy(a2, (const void *)(v4 + v5), n);
    *((uint32_t *)self + 2) += n;
  }
  else
  {
    n = 0;
  }
  sub_BA06B0();
  return n;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::Destroy  (binary VA: 0xfcd090)
// Original: vox::vs::VSStream::~VSStream
// ----------------------------------------------------------------------------
void vox::vs::VSStream::Destroy(vox::vs::VSStream::Self *self)
{
  int Instance;
  vox::Mutex::Self *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CA28);
  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( *((uint32_t *)self + 2) != 0 )
  {
    Instance = (int)(uintptr_t)(vox::FileSystemInterface::GetInstance((vox::FileSystemInterface::Self *)"VSStream::~VSStream"));
    G4_VCALL<void>(Instance, 12, *((uint32_t *)self + 2));
  }
  if ( *((uint32_t *)self + 7) != 0 )
  {
    VoxFreeInternal(*((void **)self + 7));
    *((uint32_t *)self + 7) = 0;
  }
  sub_BA06B0();
  vox::Mutex::Destroy((vox::vs::VSStream::Self *)((char *)self + 48));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CBA8);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::Destroy_eafcd140  (binary VA: 0xfcd140)
// Original: vox::vs::VSStream::~VSStream
// ----------------------------------------------------------------------------
void vox::vs::VSStream::Destroy_eafcd140(vox::vs::VSStream::Self *self)
{
  vox::vs::VSStream::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSFileStreamCursor::Seek  (binary VA: 0xfcd180)
// Original: vox::vs::VSFileStreamCursor::Seek
// ----------------------------------------------------------------------------
int vox::vs::VSFileStreamCursor::Seek(vox::vs::VSFileStreamCursor::Self *self, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  vox::Mutex::Self *v8;
  int v9;
  int CurThreadId;
  vox::Mutex::Self *v11;

  CurThreadId = vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  v11 = *((vox::Mutex::Self **)self + 5);
  vox::Mutex::Lock(v11);
  v3 = *(uint32_t *)(*((uint32_t *)self + 1) + 8);
  if ( v3 != 0 )
  {
    if ( a3 == 1 )
    {
      v4 = *((uint32_t *)self + 2) + a2;
    }
    else if ( a3 == 2 )
    {
      v4 = *((uint32_t *)self + 4) + ~a2;
    }
    else
    {
      v4 = 0;
      if ( a3 == 0 )
        v4 = a2;
    }
    v5 = -1;
    if ( v4 >= 0 && v4 <= *((uint32_t *)self + 4) )
    {
      v6 = G4_VCALL<int>(v3, 16, CurThreadId);
      *((uint32_t *)self + 2) = v4;
      v5 = G4_VCALL<int>(v3, 12, *((uint32_t *)self + 3) + v4 - v6, 1);
    }
  }
  else
  {
    v5 = -1;
  }
  v9 = v5;
  vox::Mutex::Unlock(v11);
  sub_BA06B0();
  return v9;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSFileStreamCursor::Tell  (binary VA: 0xfcd2a0)
// Original: vox::vs::VSFileStreamCursor::Tell
// ----------------------------------------------------------------------------
int vox::vs::VSFileStreamCursor::Tell(vox::vs::VSFileStreamCursor::Self *self)
{
  int v1;
  vox::Mutex::Self *v3;
  vox::Mutex::Self *v4;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v4 = *((vox::Mutex::Self **)self + 5);
  vox::Mutex::Lock(v4);
  if ( *(uint32_t *)(*((uint32_t *)self + 1) + 8) != 0 )
    v1 = *((uint32_t *)self + 2);
  else
    v1 = -1;
  vox::Mutex::Unlock(v4);
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSFileStreamCursor::Read  (binary VA: 0xfcd330)
// Original: vox::vs::VSFileStreamCursor::Read
// ----------------------------------------------------------------------------
int vox::vs::VSFileStreamCursor::Read(vox::vs::VSFileStreamCursor::Self *self, uint8_t *a2, int a3)
{
  int CurThreadId;
  vox::Mutex::Self *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  vox::Mutex::Self *v10;
  vox::Mutex::Self *v11;
  int v12;
  int v13;

  CurThreadId = vox::VoxThread::GetCurThreadId(v10);
  sub_BA06A0();
  v11 = *((vox::Mutex::Self **)self + 5);
  vox::Mutex::Lock(v11);
  v4 = v11;
  v5 = *(uint32_t *)(*((uint32_t *)self + 1) + 8);
  if ( a3 > 0 && v5 != 0 )
  {
    v8 = *((uint32_t *)self + 2);
    v9 = *((uint32_t *)self + 4);
    if ( v8 + a3 < 0 || (v12 = a3, v9 = *((uint32_t *)self + 4), v8 + a3 >= v9) )
      v12 = v9 - v8;
    v13 = G4_VCALL<int>(v5, 16, CurThreadId);
    G4_VCALL<void>(v5, 12, *((uint32_t *)self + 2) + *((uint32_t *)self + 3) - v13, 1);
    v6 = G4_VCALL<int>(v5, 8, a2, 1, v12);
    *((uint32_t *)self + 2) += v6;
    v4 = v11;
  }
  else
  {
    v6 = 0;
  }
  vox::Mutex::Unlock(v4);
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSFileStreamCursor::EndOfStream  (binary VA: 0xfcd460)
// Original: vox::vs::VSFileStreamCursor::EndOfStream
// ----------------------------------------------------------------------------
bool vox::vs::VSFileStreamCursor::EndOfStream(vox::vs::VSFileStreamCursor::Self *self)
{
  int CurThreadId;
  bool v2;
  vox::Mutex::Self *v3;
  int v4;
  vox::Mutex::Self *v6;
  vox::Mutex::Self *v7;
  bool v8;

  CurThreadId = vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v7 = *((vox::Mutex::Self **)self + 5);
  vox::Mutex::Lock(v7);
  v2 = true;
  v3 = v7;
  if ( *(uint32_t *)(*((uint32_t *)self + 1) + 8) != 0 )
  {
    v4 = *((uint32_t *)self + 2);
    if ( v4 < 0 )
    {
      v4 = G4_VCALL<int>(self, 24, CurThreadId);
      *((uint32_t *)self + 2) = v4;
      v3 = v7;
    }
    v2 = *((uint32_t *)self + 4) - 1 <= v4;
  }
  v8 = v2;
  vox::Mutex::Unlock(v3);
  sub_BA06B0();
  return v8;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferStreamCursor::Seek  (binary VA: 0xfcd520)
// Original: vox::vs::VSBufferStreamCursor::Seek
// ----------------------------------------------------------------------------
int vox::vs::VSBufferStreamCursor::Seek(vox::vs::VSBufferStreamCursor::Self *self, int a2, int a3)
{
  int v3;
  int v4;
  vox::VoxThread::Self *v6;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  if ( *((uint32_t *)self + 6) != 0 )
  {
    if ( a3 == 1 )
    {
      v3 = a2 + *((uint32_t *)self + 2);
    }
    else if ( a3 == 2 )
    {
      v3 = *((uint32_t *)self + 4) + ~a2;
    }
    else
    {
      v3 = 0;
      if ( a3 == 0 )
        v3 = a2;
    }
    v4 = -1;
    if ( v3 >= 0 && v3 <= *((uint32_t *)self + 4) )
    {
      *((uint32_t *)self + 2) = v3;
      v4 = 0;
    }
  }
  else
  {
    v4 = -1;
  }
  sub_BA06B0();
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferStreamCursor::Tell  (binary VA: 0xfcd5e0)
// Original: vox::vs::VSBufferStreamCursor::Tell
// ----------------------------------------------------------------------------
int vox::vs::VSBufferStreamCursor::Tell(vox::vs::VSBufferStreamCursor::Self *self)
{
  int v1;
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( *((uint32_t *)self + 6) != 0 )
    v1 = *((uint32_t *)self + 2);
  else
    v1 = -1;
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSVersions::GetVersion001Label  (binary VA: 0xfcd650)
// Original: vox::vs::VSVersions::GetVersion001Label
// ----------------------------------------------------------------------------
char * vox::vs::VSVersions::GetVersion001Label()
{
  return (char *)(uintptr_t)(vox::vs::VSVersions::k_vsValidVersions[0]);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSVersions::GetVersion002Label  (binary VA: 0xfcd670)
// Original: vox::vs::VSVersions::GetVersion002Label
// ----------------------------------------------------------------------------
char * vox::vs::VSVersions::GetVersion002Label()
{
  return (char *)(uintptr_t)(off_20C2844[0]);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSVersions::GetVersion003Label  (binary VA: 0xfcd690)
// Original: vox::vs::VSVersions::GetVersion003Label
// ----------------------------------------------------------------------------
char * vox::vs::VSVersions::GetVersion003Label()
{
  return (char *)(uintptr_t)(off_20C2848[0]);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSVersions::GetVersion004Label  (binary VA: 0xfcd6b0)
// Original: vox::vs::VSVersions::GetVersion004Label
// ----------------------------------------------------------------------------
char * vox::vs::VSVersions::GetVersion004Label()
{
  return (char *)(uintptr_t)(off_20C284C[0]);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSVersions::IsAtLeastVersion  (binary VA: 0xfcd6d0)
// Original: vox::vs::VSVersions::IsAtLeastVersion
// ----------------------------------------------------------------------------
int vox::vs::VSVersions::IsAtLeastVersion(vox::vs::VSVersions::Self *self, char *s1)
{
  int v2;
  char v3; // bp
  const char *s2;
  char v5;
  uint8_t v7;
  int v8;

  v7 = 0;
  v8 = vox::vs::VSVersions::k_nbValidVersions;
  if ( vox::vs::VSVersions::k_nbValidVersions != 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      s2 = (const char *)(uintptr_t)(vox::vs::VSVersions::k_vsValidVersions[v2]);
      if ( strcmp(s1, s2) == 0 )
      {
        v5 = 1;
        if ( v3 != 0 )
          v5 = v7;
        v7 = v5;
      }
      if ( strcmp((const char *)self, s2) == 0 )
        v3 = 1;
      ++v2;
    }
    while ( v2 != v8 );
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSVersions::IsVersionValid  (binary VA: 0xfcd760)
// Original: vox::vs::VSVersions::IsVersionValid
// ----------------------------------------------------------------------------
int vox::vs::VSVersions::IsVersionValid(vox::vs::VSVersions::Self *self)
{
  int v1;
  int result;
  int v3;
  char **v4;
  int v5;
  char **v6;

  v1 = vox::vs::VSVersions::k_nbValidVersions;
  result = 0;
  if ( vox::vs::VSVersions::k_nbValidVersions != 0 )
  {
    v3 = 0;
    v4 = (char **)(vox::vs::VSVersions::k_vsValidVersions);
    do
    {
      v6 = v4;
      v5 = strcmp((const char *)self, v4[v3]);
      v4 = v6;
      if ( v5 == 0 )
        return 1;
      ++v3;
    }
    while ( v3 != v1 );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferPool::GetInstance  (binary VA: 0xfcd7d0)
// Original: vox::vs::VSBufferPool::GetInstance
// ----------------------------------------------------------------------------
int vox::vs::VSBufferPool::GetInstance()
{
  int v0;
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  v0 = vox::vs::VSBufferPool::s_pInstance;
  sub_BA06B0();
  return v0;
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferPool::CreateBuffer  (binary VA: 0xfcd980)
// Original: vox::vs::VSBufferPool::CreateBuffer
// ----------------------------------------------------------------------------
int vox::vs::VSBufferPool::CreateBuffer(vox::vs::VSBufferPool::Self *self, size_t a2)
{
  vox::Mutex::Self *v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  vox::Mutex::Self *v12;
  uint32_t *v14;
  char v15;
  int v16;
  uint32_t *v17;
  bool v18; // bp
  uint32_t *v19;
  uint32_t *v20;
  char v21; // di
  bool v22;
  uint32_t *v23;
  char v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  vox::VoxThread::Self *v30;
  char v31;
  int v32;
  int v33;
  int v34;
  vox::Mutex::Self *v35;
  vox::Mutex::Self *v36;
  vox::Mutex::Self *v37;
  vox::Mutex::Self *v38;
  vox::Mutex::Self *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  int v46;
  int v47;
  int v48;
  uint32_t *v49;
  uint32_t *v50;
  int v51;
  bool v52;
  char v53;
  int v54;
  uint32_t *v55;

  vox::VoxThread::GetCurThreadId(v30);
  sub_BA06A0();
  vox::Mutex::Lock((vox::vs::VSBufferPool::Self *)((char *)self + 4));
  v48 = VoxAllocInternal(
          a2,
          0,
          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/VehicleSounds/vehicle_sounds_common.cpp"),
          (int)(uintptr_t)("CreateBuffer"),
          146);
  v2 = (vox::Mutex::Self *)((vox::vs::VSBufferPool::Self *)((char *)self + 4));
  if ( v48 == 0 || *(uint32_t *)self == 0 )
  {
    v3 = -1;
    goto LABEL_18;
  }
  v3 = vox::vs::VSBufferPool::s_nextId++;
  v4 = *(uint32_t **)self;
  v5 = *(uint32_t **)(*(uint32_t *)self + 8);
  v47 = *(uint32_t *)self + 4;
  if ( v5 != nullptr )
  {
    v6 = (uint32_t *)(*(uint32_t *)self + 4);
    v7 = *(uint32_t **)(*(uint32_t *)self + 8);
    do
    {
      while ( v3 <= v7[4] )
      {
        v6 = v7;
        v7 = (uint32_t *)v7[2];
        if ( v7 == nullptr )
          goto LABEL_8;
      }
      v7 = (uint32_t *)v7[3];
    }
    while ( v7 != nullptr );
LABEL_8:
    v49 = v6;
    if ( (uint32_t *)v47 != v6 )
    {
      if ( v3 < v6[4] )
      {
        v55 = (uint32_t *)v4[3];
        if ( v55 == v6 )
        {
          v45 = *(uint32_t **)self;
          v27 = (uint32_t *)VoxAllocInternal(
                            0x1Cu,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
          v6 = v27;
          v11 = v45;
          v12 = (vox::Mutex::Self *)((vox::vs::VSBufferPool::Self *)((char *)self + 4));
          if ( v27 != (uint32_t *)-16 )
          {
            v27[4] = v3;
            v27[5] = 0;
            v27[6] = 0;
          }
          v32 = (int)(uintptr_t)(v27);
          v34 = v47;
          v33 = (int)(uintptr_t)(v55);
          v31 = 1;
          goto LABEL_16;
        }
        v40 = *(uint32_t **)self;
        v8 = sub_1904940(v6);
        v54 = v8;
        v9 = v40;
        if ( v3 > *(uint32_t *)(v8 + 16) )
        {
          if ( *(uint32_t *)(v8 + 12) != 0 )
          {
            v10 = (uint32_t *)VoxAllocInternal(
                              0x1Cu,
                              0,
                              (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                              (int)(uintptr_t)("internal_new"),
                              181);
            v6 = v10;
            v11 = v40;
            v12 = (vox::Mutex::Self *)((vox::vs::VSBufferPool::Self *)((char *)self + 4));
            if ( v10 != (uint32_t *)-16 )
            {
              v10[4] = v3;
              v10[5] = 0;
              v10[6] = 0;
            }
            v32 = (int)(uintptr_t)(v10);
            v34 = v47;
            v33 = (int)(uintptr_t)(v49);
            v31 = 1;
          }
          else
          {
            v25 = (uint32_t *)VoxAllocInternal(
                              0x1Cu,
                              0,
                              (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                              (int)(uintptr_t)("internal_new"),
                              181);
            v6 = v25;
            v11 = v40;
            v12 = (vox::Mutex::Self *)((vox::vs::VSBufferPool::Self *)((char *)self + 4));
            if ( v25 != (uint32_t *)-16 )
            {
              v25[4] = v3;
              v25[5] = 0;
              v25[6] = 0;
            }
            v32 = (int)(uintptr_t)(v25);
            v34 = v47;
            v33 = v54;
            v31 = v47 == v54;
          }
LABEL_16:
          v41 = v11;
          v35 = v12;
          sub_1904970(v31, v32, v33, v34);
          ++v41[5];
          v2 = v35;
          goto LABEL_17;
        }
        while ( 1 )
        {
          if ( v3 < v5[4] )
          {
            v20 = (uint32_t *)v5[2];
            v21 = 1;
          }
          else
          {
            v20 = (uint32_t *)v5[3];
            v21 = 0;
          }
          if ( v20 == nullptr )
            break;
          v5 = v20;
        }
        v51 = v5[4];
        v22 = v21 == 0;
        v2 = (vox::Mutex::Self *)((vox::vs::VSBufferPool::Self *)((char *)self + 4));
        v6 = v5;
        if ( !v22 )
        {
          if ( v55 == v5 )
          {
LABEL_40:
            v52 = true;
            if ( (uint32_t *)v47 != v5 )
              v52 = v3 < v5[4];
            v43 = v9;
            v37 = v2;
            v23 = (uint32_t *)VoxAllocInternal(
                              0x1Cu,
                              0,
                              (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                              (int)(uintptr_t)("internal_new"),
                              181);
            v6 = v23;
            v11 = v43;
            v12 = v37;
            if ( v23 != (uint32_t *)-16 )
            {
              v23[4] = v3;
              v23[5] = 0;
              v23[6] = 0;
            }
            v33 = (int)(uintptr_t)(v5);
            v34 = v47;
            v32 = (int)(uintptr_t)(v23);
            v31 = v52;
            goto LABEL_16;
          }
          v6 = (uint32_t *)sub_19048F0(v5);
          v51 = v6[4];
          v2 = (vox::Mutex::Self *)((vox::vs::VSBufferPool::Self *)((char *)self + 4));
          v9 = v40;
        }
        if ( v3 <= v51 )
          goto LABEL_17;
        goto LABEL_40;
      }
LABEL_17:
      v6[6] = 0;
      v6[5] = v48;
LABEL_18:
      vox::Mutex::Unlock(v2);
      sub_BA06B0();
      return v3;
    }
  }
  if ( v4[5] != 0 )
  {
    v17 = (uint32_t *)v4[4];
    v50 = v17;
    if ( v3 > v17[4] )
    {
      v18 = v47 == (uint32_t)(uintptr_t)(v17);
LABEL_29:
      v42 = v4;
      v36 = v2;
      v19 = (uint32_t *)VoxAllocInternal(
                        0x1Cu,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
      v6 = v19;
      v11 = v42;
      v12 = v36;
      if ( v19 != (uint32_t *)-16 )
      {
        v19[4] = v3;
        v19[5] = 0;
        v19[6] = 0;
      }
      v32 = (int)(uintptr_t)(v19);
      v34 = v47;
      v33 = (int)(uintptr_t)(v50);
      v31 = v18;
      goto LABEL_16;
    }
  }
  v6 = *(uint32_t **)(*(uint32_t *)self + 8);
  if ( v5 != nullptr )
  {
    while ( 1 )
    {
      v16 = v6[4];
      if ( v3 < v16 )
      {
        v14 = (uint32_t *)v6[2];
        v15 = 1;
      }
      else
      {
        v14 = (uint32_t *)v6[3];
        v15 = 0;
      }
      if ( v14 == nullptr )
        break;
      v6 = v14;
    }
    v24 = v15;
    v2 = (vox::Mutex::Self *)((vox::vs::VSBufferPool::Self *)((char *)self + 4));
    v50 = v6;
    if ( v24 == 0 )
    {
LABEL_46:
      if ( v3 <= v16 )
        goto LABEL_17;
      v18 = true;
      if ( (uint32_t *)v47 != v50 )
        v18 = v3 < v50[4];
      goto LABEL_29;
    }
  }
  else
  {
    v6 = (uint32_t *)(*(uint32_t *)self + 4);
  }
  if ( (uint32_t *)v4[3] == v6 )
  {
    v53 = 1;
    if ( (uint32_t *)v47 != v6 )
      v53 = v3 < v6[4];
    v46 = *(uint32_t *)self;
    v39 = v2;
    v28 = (uint32_t *)VoxAllocInternal(
                      0x1Cu,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
    v29 = v28;
    if ( v28 != (uint32_t *)-16 )
    {
      v28[4] = v3;
      v28[5] = 0;
      v28[6] = 0;
    }
    sub_1904970(v53, v28, v6, v47);
    v6 = v29;
    ++*(uint32_t *)(v46 + 20);
    v2 = v39;
    goto LABEL_17;
  }
  v44 = *(uint32_t **)self;
  v38 = v2;
  v26 = (uint32_t *)sub_19048F0(v6);
  v16 = v26[4];
  v50 = v6;
  v2 = v38;
  v6 = v26;
  v4 = v44;
  goto LABEL_46;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferPool::GetBuffer  (binary VA: 0xfcdf20)
// Original: vox::vs::VSBufferPool::GetBuffer
// ----------------------------------------------------------------------------
int vox::vs::VSBufferPool::GetBuffer(vox::vs::VSBufferPool::Self *self, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  vox::Mutex::Self *v8;

  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  vox::Mutex::Lock((vox::vs::VSBufferPool::Self *)((char *)self + 4));
  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 )
  {
    v3 = *(uint32_t **)(v2 + 8);
    v4 = 0;
    if ( v3 != nullptr )
    {
      v5 = (uint32_t *)(v2 + 4);
      v6 = v5;
      do
      {
        while ( v3[4] >= a2 )
        {
          v6 = v3;
          v3 = (uint32_t *)v3[2];
          if ( v3 == nullptr )
            goto LABEL_7;
        }
        v3 = (uint32_t *)v3[3];
      }
      while ( v3 != nullptr );
LABEL_7:
      v4 = 0;
      if ( v5 != v6 && v6[4] <= a2 )
      {
        ++v6[6];
        v4 = v6[5];
      }
    }
  }
  else
  {
    v4 = 0;
  }
  vox::Mutex::Unlock((vox::vs::VSBufferPool::Self *)((char *)self + 4));
  sub_BA06B0();
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferPool::ReleaseBuffer  (binary VA: 0xfcdfe0)
// Original: vox::vs::VSBufferPool::ReleaseBuffer
// ----------------------------------------------------------------------------
int vox::vs::VSBufferPool::ReleaseBuffer(vox::vs::VSBufferPool::Self *self, int a2)
{
  uint32_t *v2;
  vox::Mutex::Self *v3;
  uint32_t *v4;
  uint32_t *v5;
  void *v8;
  vox::Mutex::Self *v9;
  uint32_t *v10;
  uint32_t *v11;

  vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0();
  vox::Mutex::Lock((vox::vs::VSBufferPool::Self *)((char *)self + 4));
  v2 = *(uint32_t **)self;
  v3 = (vox::Mutex::Self *)((vox::vs::VSBufferPool::Self *)((char *)self + 4));
  if ( *(uint32_t *)self != 0 )
  {
    v4 = (uint32_t *)v2[2];
    if ( v4 != nullptr )
    {
      v5 = v2 + 1;
      v11 = v2 + 1;
      do
      {
        while ( v4[4] >= a2 )
        {
          v5 = v4;
          v4 = (uint32_t *)v4[2];
          if ( v4 == nullptr )
            goto LABEL_7;
        }
        v4 = (uint32_t *)v4[3];
      }
      while ( v4 != nullptr );
LABEL_7:
      if ( v11 != v5 && v5[4] <= a2 && v5[6]-- == 1 )
      {
        v10 = v5;
        VoxFreeInternal((void *)v5[5]);
        v8 = (void *)sub_1904AE0(v10, v11);
        VoxFreeInternal(v8);
        --v2[5];
        v3 = (vox::Mutex::Self *)((vox::vs::VSBufferPool::Self *)((char *)self + 4));
      }
    }
  }
  vox::Mutex::Unlock(v3);
  sub_BA06B0();
  return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferStreamCursor::Copy  (binary VA: 0xfce0e0)
// Original: vox::vs::VSBufferStreamCursor::Copy
// ----------------------------------------------------------------------------
void vox::vs::VSBufferStreamCursor::Copy(vox::vs::VSBufferStreamCursor::Self *self, vox::vs::VSStreamCursor::Self *a2)
{
  vox::vs::VSBufferPool::Self *Instance;
  int Buffer;

  if ( a2 != nullptr )
  {
    *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
    *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
    *((uint32_t *)self + 2) = 0;
    Instance = (vox::vs::VSBufferPool::Self *)vox::vs::VSBufferPool::GetInstance();
    if ( Instance != nullptr )
    {
      if ( *((int *)self + 7) >= 0 )
        *((uint32_t *)self + 7) = vox::vs::VSBufferPool::ReleaseBuffer(Instance, *((uint32_t *)self + 7));
      Buffer = vox::vs::VSBufferPool::GetBuffer(Instance, *((uint32_t *)a2 + 7));
      *((uint32_t *)self + 6) = Buffer;
      if ( Buffer != 0 )
        *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferStreamCursor::Shutdown  (binary VA: 0xfce170)
// Original: vox::vs::VSBufferStreamCursor::Shutdown
// ----------------------------------------------------------------------------
void vox::vs::VSBufferStreamCursor::Shutdown(vox::vs::VSBufferStreamCursor::Self *self)
{
  vox::vs::VSBufferPool::Self *Instance;
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  Instance = (vox::vs::VSBufferPool::Self *)vox::vs::VSBufferPool::GetInstance();
  if ( Instance != nullptr && *((int *)self + 7) >= 0 )
  {
    *((uint32_t *)self + 7) = vox::vs::VSBufferPool::ReleaseBuffer(Instance, *((uint32_t *)self + 7));
    *((uint32_t *)self + 6) = 0;
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferStreamCursor::Init  (binary VA: 0xfce200)
// Original: vox::vs::VSBufferStreamCursor::Init
// ----------------------------------------------------------------------------
int vox::vs::VSBufferStreamCursor::Init(vox::vs::VSBufferStreamCursor::Self *self)
{
  int Buffer;
  int v2;
  int v3;
  int v4;
  vox::Mutex::Self *v6;
  vox::vs::VSBufferPool::Self *Instance;

  v6 = *((vox::Mutex::Self **)self + 5);
  vox::Mutex::Lock(v6);
  Instance = (vox::vs::VSBufferPool::Self *)vox::vs::VSBufferPool::GetInstance();
  Buffer = vox::vs::VSBufferPool::CreateBuffer(Instance, *((uint32_t *)self + 4));
  v2 = Buffer;
  if ( Buffer >= 0 )
  {
    v3 = vox::vs::VSBufferPool::GetBuffer(Instance, Buffer);
    *((uint32_t *)self + 6) = v3;
    if ( v3 != 0 )
    {
      v4 = *(uint32_t *)(*((uint32_t *)self + 1) + 8);
      if ( v4 != 0 )
      {
        G4_VCALL<void>(v4, 12, *((uint32_t *)self + 3), 0);
        if ( *((uint32_t *)self + 4) == (*(int (**)(int, uint32_t, int, uint32_t))(*(uint32_t *)v4 + 8))(
                                        v4,
                                        *((uint32_t *)self + 6),
                                        1,
                                        *((uint32_t *)self + 4)) )
        {
          *((uint32_t *)self + 7) = v2;
        }
        else
        {
          *((uint32_t *)self + 7) = vox::vs::VSBufferPool::ReleaseBuffer(Instance, v2);
          *((uint32_t *)self + 6) = 0;
        }
      }
    }
  }
  return (int)(uintptr_t)(vox::Mutex::Unlock(v6));
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::Close  (binary VA: 0xfce300)
// Original: vox::vs::VSStream::Close
// ----------------------------------------------------------------------------
void vox::vs::VSStream::Close(vox::vs::VSStream::Self *self)
{
  int Instance;
  vox::Mutex::Self *v2;
  vox::FileSystemInterface::Self *v3;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::Mutex::Lock((vox::vs::VSStream::Self *)((char *)self + 48));
  if ( *((uint32_t *)self + 2) != 0 )
  {
    Instance = (int)(uintptr_t)(vox::FileSystemInterface::GetInstance(v3));
    G4_VCALL<void>(Instance, 12, *((uint32_t *)self + 2));
    *((uint32_t *)self + 2) = 0;
  }
  vox::Mutex::Unlock((vox::vs::VSStream::Self *)((char *)self + 48));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::GetVersion  (binary VA: 0xfce3a0)
// Original: vox::vs::VSStream::GetVersion
// ----------------------------------------------------------------------------
char * vox::vs::VSStream::GetVersion(vox::vs::VSStream::Self *self)
{
  return (char *)self + 32;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::ParseHeader  (binary VA: 0xfce3b0)
// Original: vox::vs::VSStream::ParseHeader
// ----------------------------------------------------------------------------
int vox::vs::VSStream::ParseHeader(vox::vs::VSStream::Self *self)
{
  pthread_t tid = vox::VoxThread::GetCurThreadId();
  sub_BA06A0("VSStream::ParseExtensionHeader", tid);
  pthread_mutex_t **mtx = (pthread_mutex_t **)((char *)self + 48);
  vox::Mutex::Lock(mtx);

  uint32_t file = *((uint32_t *)self + 2);
  if ( G4_VCALL<int>(file, 16) != 0 )
    G4_VCALL<void>(file, 12, 0, 0);

  uint8_t ok = 0;
  uint32_t magic = 0;
  uint32_t reserved = 0;
  if ( G4_VCALL<int>(file, 8, &magic, 4, 1) != 0
    && G4_VCALL<int>(file, 8, &reserved, 4, 1) != 0
    && magic == 0x73767856u )
  {
    G4_VCALL<void>(file, 8, (char *)self + 32, 8, 1);
    if ( (uint8_t)vox::vs::VSVersions::IsVersionValid((vox::vs::VSVersions::Self *)((char *)self + 32)) != 0 )
    {
      G4_VCALL<void>(file, 8, (char *)self + 44, 4, 1);
      G4_VCALL<void>(file, 8, (char *)self + 40, 4, 1);
      uint32_t hdrSize = *((uint32_t *)self + 11);
      *((uint32_t *)self + 5) = hdrSize;
      int buf = VoxAllocInternal(
        hdrSize,
        0,
        (int)(uintptr_t)"F:/G4/G4_UP8Shop/lib/vox/Plugins/VehicleSounds/vehicle_sounds_common.cpp",
        (int)(uintptr_t)"ParseHeader",
        396);
      *((uint32_t *)self + 7) = (uint32_t)buf;
      if ( buf != 0 )
      {
        G4_VCALL<void>(file, 12, 0, 0);
        G4_VCALL<void>(file, 8, *((uint32_t *)self + 7), *((uint32_t *)self + 5), 1);
        ok = 1;
      }
    }
  }
  vox::Mutex::Unlock(mtx);
  sub_BA06B0("VSStream::ParseExtensionHeader", tid);
  return ok;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::Construct  (binary VA: 0xfce5c0)
// Original: vox::vs::VSStream::VSStream
// ----------------------------------------------------------------------------
void vox::vs::VSStream::Construct(vox::vs::VSStream::Self *a1, uint32_t *a2)
{
  int v2;
  int Instance;
  int v4;
  int v5;
  vox::VoxThread::Self *v6;
  int v7;

  *((uint32_t *)a1 + 1) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208CA28);
  *((uint32_t *)a1 + 2) = 0;
  *((uint8_t *)a1 + 12) = 0;
  v2 = a2[1];
  *((uint32_t *)a1 + 5) = 0;
  *((uint32_t *)a1 + 4) = v2;
  *((uint32_t *)a1 + 6) = 0;
  *((uint32_t *)a1 + 7) = 0;
  *((uint32_t *)a1 + 10) = 0;
  *((uint32_t *)a1 + 11) = 0;
  vox::Mutex::Construct((vox::vs::VSStream::Self *)((char *)a1 + 48));
  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  if ( *a2 != 0 )
  {
    Instance = (int)(uintptr_t)(vox::FileSystemInterface::GetInstance((vox::FileSystemInterface::Self *)"VSStream::VSStream"));
    v4 = a2[1];
    if ( v4 != 0 )
    {
      if ( v4 == 2 )
        *((uint32_t *)a1 + 2) = G4_VCALL<int>(Instance, 8, *a2, 10);
    }
    else
    {
      v7 = Instance;
      v5 = G4_VCALL<int>(Instance, 8, *a2, 6);
      *((uint32_t *)a1 + 2) = v5;
      if ( v5 != 0 )
      {
        if ( (uint8_t)vox::vs::VSStream::ParseHeader(a1) != 0 )
          *((uint8_t *)a1 + 12) = 1;
        else
          G4_VCALL<void>(v7, 12, *((uint32_t *)a1 + 2));
      }
    }
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStreamFactory  (binary VA: 0xfce710)
// Original: vox::vs::VSStreamFactory
// ----------------------------------------------------------------------------
vox::vs::VSStream::Self * vox::vs::VSStreamFactory(vox::vs::Self *self)
{
  vox::vs::VSStream::Self *v1;

  v1 = (vox::vs::VSStream::Self *)VoxAllocInternal(
                              0x34u,
                              0,
                              (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/VehicleSounds/vehicle_sounds_common.cpp"),
                              (int)(uintptr_t)("VSStreamFactory"),
                              217);
  vox::vs::VSStream::Construct(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::Read  (binary VA: 0xfce780)
// Original: vox::vs::VSStream::Read
// ----------------------------------------------------------------------------
size_t vox::vs::VSStream::Read(vox::vs::VSStream::Self *self, void *a2, size_t n)
{
  size_t v3;
  int v4;
  int v5;
  vox::VoxThread::Self *dest;

  v3 = n;
  vox::VoxThread::GetCurThreadId(dest);
  sub_BA06A0();
  v4 = *((uint32_t *)self + 7);
  if ( v4 != 0 && *((uint32_t *)self + 4) == 0 && (signed int)((v5 = *((uint32_t *)self + 6)) + n) <= *((uint32_t *)self + 5) )
  {
    memcpy(a2, (const void *)(v5 + v4), n);
    *((uint32_t *)self + 6) += n;
  }
  else
  {
    v3 = 0;
  }
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::ReadByte  (binary VA: 0xfce830)
// Original: vox::vs::VSStream::ReadByte
// ----------------------------------------------------------------------------
int vox::vs::VSStream::ReadByte(vox::vs::VSStream::Self *self, uint8_t *a2)
{
  int v2;
  int v3;
  int v4;
  vox::VoxThread::Self *v6;
  int v7;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v2 = *((uint32_t *)self + 7);
  v3 = 0;
  if ( v2 != 0 && *((uint32_t *)self + 4) == 0 )
  {
    v4 = *((uint32_t *)self + 6);
    if ( v4 < *((uint32_t *)self + 5) )
    {
      *a2 = *(uint8_t *)(v2 + v4);
      v3 = 1;
      ++*((uint32_t *)self + 6);
    }
  }
  v7 = v3;
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::ReadFloat  (binary VA: 0xfce8c0)
// Original: vox::vs::VSStream::ReadFloat
// ----------------------------------------------------------------------------
int vox::vs::VSStream::ReadFloat(vox::vs::VSStream::Self *self, float *a2)
{
  int v2;
  int v3;
  vox::VoxThread::Self *v5;
  int v6;
  int v7;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = *((uint32_t *)self + 7);
  v3 = 0;
  if ( v2 != 0 && *((uint32_t *)self + 4) == 0 )
  {
    v6 = *((uint32_t *)self + 6);
    if ( v6 + 3 < *((uint32_t *)self + 5) )
    {
      *a2 = *(float *)(v2 + v6);
      v3 = 1;
      *((uint32_t *)self + 6) += 4;
    }
  }
  v7 = v3;
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::ReadInt  (binary VA: 0xfce960)
// Original: vox::vs::VSStream::ReadInt
// ----------------------------------------------------------------------------
int vox::vs::VSStream::ReadInt(vox::vs::VSStream::Self *self, int *a2)
{
  int v2;
  int v3;
  int v4;
  vox::VoxThread::Self *v6;

  v2 = 0;
  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v3 = *((uint32_t *)self + 7);
  if ( v3 != 0 && *((uint32_t *)self + 4) == 0 )
  {
    v4 = *((uint32_t *)self + 6);
    if ( v4 + 3 < *((uint32_t *)self + 5) )
    {
      v2 = 1;
      *a2 = (*(uint8_t *)(v3 + v4 + 3) << 24)
          + (*(uint8_t *)(v3 + v4 + 1) << 8)
          + *(uint8_t *)(v3 + v4)
          + (*(uint8_t *)(v3 + v4 + 2) << 16);
      *((uint32_t *)self + 6) += 4;
    }
  }
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::ReadShort  (binary VA: 0xfcea20)
// Original: vox::vs::VSStream::ReadShort
// ----------------------------------------------------------------------------
int vox::vs::VSStream::ReadShort(vox::vs::VSStream::Self *self, int16_t *a2)
{
  int v2;
  int v3;
  vox::VoxThread::Self *v5;
  int v6;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = *((uint32_t *)self + 7);
  v6 = 0;
  if ( v2 != 0 && *((uint32_t *)self + 4) == 0 )
  {
    v3 = *((uint32_t *)self + 6);
    if ( v3 + 1 < *((uint32_t *)self + 5) )
    {
      v6 = 1;
      *a2 = *(uint8_t *)(v2 + v3) + (*(uint8_t *)(v2 + v3 + 1) << 8);
      *((uint32_t *)self + 6) += 2;
    }
  }
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::ReadUnsignedInt  (binary VA: 0xfcead0)
// Original: vox::vs::VSStream::ReadUnsignedInt
// ----------------------------------------------------------------------------
int vox::vs::VSStream::ReadUnsignedInt(vox::vs::VSStream::Self *self, unsigned int *a2)
{
  int v2;
  int v3;
  int v4;
  vox::VoxThread::Self *v6;

  v2 = 0;
  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v3 = *((uint32_t *)self + 7);
  if ( v3 != 0 && *((uint32_t *)self + 4) == 0 )
  {
    v4 = *((uint32_t *)self + 6);
    if ( v4 + 3 < *((uint32_t *)self + 5) )
    {
      v2 = 1;
      *a2 = (*(uint8_t *)(v3 + v4 + 3) << 24)
          + (*(uint8_t *)(v3 + v4 + 1) << 8)
          + *(uint8_t *)(v3 + v4)
          + (*(uint8_t *)(v3 + v4 + 2) << 16);
      *((uint32_t *)self + 6) += 4;
    }
  }
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::ReadChunkHeader  (binary VA: 0xfceb90)
// Original: vox::vs::VSStream::ReadChunkHeader
// ----------------------------------------------------------------------------
int vox::vs::VSStream::ReadChunkHeader(vox::vs::VSStream::Self *a1, unsigned int *a2)
{
  int UnsignedInt;
  int v3;

  UnsignedInt = vox::vs::VSStream::ReadUnsignedInt(a1, a2);
  v3 = 0;
  if ( UnsignedInt != 0 )
    return vox::vs::VSStream::ReadInt(a1, (int *)a2 + 1);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::Write  (binary VA: 0xfcebf0)
// Original: vox::vs::VSStream::Write
// ----------------------------------------------------------------------------
int vox::vs::VSStream::Write(vox::vs::VSStream::Self *self, const void *a2, int a3)
{
  int v3;
  int v5;
  vox::VoxThread::Self *v6;
  int v7;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v3 = 0;
  if ( (unsigned int)(*((uint32_t *)self + 4) - 1) <= 1 )
  {
    v5 = (*(int (**)(uint32_t, const void *, int, int))(**((uint32_t **)self + 2) + 20))(
           *((uint32_t *)self + 2),
           a2,
           1,
           a3);
    v3 = 0;
    if ( v5 == a3 )
    {
      *((uint32_t *)self + 6) += v5;
      v3 = v5;
    }
  }
  v7 = v3;
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::WriteByte  (binary VA: 0xfcecb0)
// Original: vox::vs::VSStream::WriteByte
// ----------------------------------------------------------------------------
int vox::vs::VSStream::WriteByte(vox::vs::VSStream::Self *self, uint8_t a2)
{
  int v2;
  int v4;
  typedef vox::VoxThread::Self *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[16];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v7[0] = a2;
  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  if ( (unsigned int)(*((uint32_t *)self + 4) - 1) <= 1 )
  {
    v4 = (*(int (**)(uint32_t, uint8_t *, int, int))(**((uint32_t **)self + 2) + 20))(
           *((uint32_t *)self + 2),
           v7,
           1,
           1);
    v2 = 0;
    if ( v4 == 1 )
    {
      ++*((uint32_t *)self + 6);
      v2 = 1;
    }
  }
  v6 = v2;
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::WriteInt  (binary VA: 0xfced70)
// Original: vox::vs::VSStream::WriteInt
// ----------------------------------------------------------------------------
int vox::vs::VSStream::WriteInt(vox::vs::VSStream::Self *self, ...)
{
  int v1;
  int v3;
  vox::VoxThread::Self *v4;
  int v5;
  va_list va;

  va_start(va, self);
  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v1 = 0;
  if ( (unsigned int)(*((uint32_t *)self + 4) - 1) <= 1 )
  {
    v3 = (*(int (**)(uint32_t, char *, int, int))(**((uint32_t **)self + 2) + 20))(
           *((uint32_t *)self + 2),
           g4_va_cast<char *>(va),
           4,
           1);
    v1 = 0;
    if ( v3 == 1 )
    {
      *((uint32_t *)self + 6) += 4;
      v1 = 1;
    }
  }
  v5 = v1;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::WriteShort  (binary VA: 0xfcee30)
// Original: vox::vs::VSStream::WriteShort
// ----------------------------------------------------------------------------
int vox::vs::VSStream::WriteShort(vox::vs::VSStream::Self *self, int16_t a2)
{
  int v2;
  int v4;
  typedef vox::VoxThread::Self *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int16_t _g4_t_v7[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v7[0] = a2;
  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  if ( (unsigned int)(*((uint32_t *)self + 4) - 1) <= 1 )
  {
    v4 = (*(int (**)(uint32_t, int16_t *, int, int))(**((uint32_t **)self + 2) + 20))(
           *((uint32_t *)self + 2),
           v7,
           2,
           1);
    v2 = 0;
    if ( v4 == 1 )
    {
      *((uint32_t *)self + 6) += 2;
      v2 = 1;
    }
  }
  v6 = v2;
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::Seek  (binary VA: 0xfceef0)
// Original: vox::vs::VSStream::Seek
// ----------------------------------------------------------------------------
int vox::vs::VSStream::Seek(int a1, int a2, int a3)
{
  int v3;
  int v4;

  if ( a3 == 1 )
  {
    v4 = *(uint32_t *)(a1 + 20);
    v3 = a2 + *(uint32_t *)(a1 + 24);
  }
  else if ( a3 == 2 )
  {
    v4 = *(uint32_t *)(a1 + 20);
    v3 = v4 - a2 - 1;
  }
  else
  {
    v4 = *(uint32_t *)(a1 + 20);
    if ( a3 == 0 )
      v3 = a2;
  }
  if ( v3 >= 0 && v3 < v4 )
  {
    *(uint32_t *)(a1 + 24) = v3;
    return 0;
  }
  else
  {
    *(uint32_t *)(a1 + 24) = v4;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::GetDataStartPosition  (binary VA: 0xfcef50)
// Original: vox::vs::VSStream::GetDataStartPosition
// ----------------------------------------------------------------------------
int vox::vs::VSStream::GetDataStartPosition(vox::vs::VSStream::Self *self)
{
  return *((uint32_t *)self + 11);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::IsValid  (binary VA: 0xfcef60)
// Original: vox::vs::VSStream::IsValid
// ----------------------------------------------------------------------------
int vox::vs::VSStream::IsValid(vox::vs::VSStream::Self *self)
{
  return *((uint8_t *)self + 12);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStreamCursor::Construct  (binary VA: 0xfcef70)
// Original: vox::vs::VSStreamCursor::VSStreamCursor
// ----------------------------------------------------------------------------
int vox::vs::VSStreamCursor::Construct(uint32_t *a1, vox::vs::VSStream::Self *a2, int a3, int a4)
{
  int result;

  *a1 = ((uint32_t)(uintptr_t)&off_208CA68);
  a1[1] = (uint32_t)(uintptr_t)(a2);
  a1[2] = 0;
  a1[4] = a4;
  result = a3 + vox::vs::VSStream::GetDataStartPosition(a2);
  a1[3] = result;
  return result;
}



// ============================================================================
// Address:   0xfcefd0 (size: 97 bytes)
// Symbol:    _ZN3vox2vs18VSFileStreamCursorC2EPNS_15StreamInterfaceEii
// Demangled: vox::vs::VSFileStreamCursor::VSFileStreamCursor(vox::StreamInterface *,int,int)
// ============================================================================
// Alternative name is '_ZN3vox2vs18VSFileStreamCursorC1EPNS_15StreamInterfaceEii'
void (**vox::vs::VSFileStreamCursor::VSFileStreamCursor(
        uint32_t *a1,
        vox::vs::VSStream::Self *a2,
        int a3,
        int a4))(vox::vs::VSFileStreamCursor::Self * self)
{
  vox::vs::VSStreamCursor::Construct(a1, a2, a3, a4);
  a1[5] = (uint32_t)(uintptr_t)((char *)a2 + 48);
  *a1 = ((uint32_t)(uintptr_t)&off_208CAA8);
  return (void (**)(vox::vs::VSFileStreamCursor::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208CAA8));
}
// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferStreamCursor::Construct  (binary VA: 0xfcf040)
// Original: vox::vs::VSBufferStreamCursor::VSBufferStreamCursor
// ----------------------------------------------------------------------------
vox::vs::VSBufferStreamCursor::Self * vox::vs::VSBufferStreamCursor::Construct(vox::vs::VSBufferStreamCursor::Self *self, vox::StreamInterface::Self *a2, int a3, int a4)
{
  vox::vs::VSStreamCursor::Construct((uint32_t *)(self), (vox::vs::VSStream::Self *)(a2), a3, a4);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)a2 + 48);
  *((uint32_t *)self + 6) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CAE8);
  *((uint32_t *)self + 7) = -1;
  return (vox::vs::VSBufferStreamCursor::Self *)vox::vs::VSBufferStreamCursor::Init(self);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::CreateNewCursor  (binary VA: 0xfcf0c0)
// Original: vox::vs::VSStream::CreateNewCursor
// ----------------------------------------------------------------------------
vox::vs::VSBufferStreamCursor::Self * vox::vs::VSStream::CreateNewCursor(vox::vs::VSStream::Self *self, int a2, int a3, bool a4)
{
  vox::vs::VSBufferStreamCursor::Self *result;
  vox::vs::VSBufferStreamCursor::Self *v5;

  result = nullptr;
  if ( *((int *)self + 5) > 0 )
  {
    if ( a4 )
    {
      v5 = (vox::vs::VSBufferStreamCursor::Self *)VoxAllocInternal(
                                              0x20u,
                                              0,
                                              (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/VehicleSounds/vehicle_sounds_common.cpp"),
                                              (int)(uintptr_t)("CreateNewCursor"),
                                              308);
      vox::vs::VSBufferStreamCursor::Construct(v5, (vox::StreamInterface::Self *)(self), a2, a3);
    }
    else
    {
      v5 = (vox::vs::VSBufferStreamCursor::Self *)VoxAllocInternal(
                                              0x18u,
                                              0,
                                              (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/VehicleSounds/vehicle_sounds_common.cpp"),
                                              (int)(uintptr_t)("CreateNewCursor"),
                                              312);
      vox::vs::VSFileStreamCursor::VSFileStreamCursor((uint32_t *)(v5), self, a2, a3);
    }
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferPool::Destroy  (binary VA: 0xfcf1b0)
// Original: vox::vs::VSBufferPool::~VSBufferPool
// ----------------------------------------------------------------------------
void vox::vs::VSBufferPool::Destroy(vox::vs::VSBufferPool::Self *self)
{
  uint32_t *v1;
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  vox::Mutex::Self *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;

  vox::VoxThread::GetCurThreadId(v21);
  sub_BA06A0();
  v1 = *(uint32_t **)self;
  if ( *(uint32_t *)self != 0 )
  {
    v2 = v1[3];
    v30 = v1 + 1;
    if ( (uint32_t *)v2 != v1 + 1 )
    {
      do
      {
        VoxFreeInternal(*(void **)(v2 + 20));
        v2 = sub_1904890(v2);
      }
      while ( v30 != (uint32_t *)v2 );
    }
    v3 = (uint32_t *)v1[2];
    v24 = v3;
    if ( v3 != nullptr )
    {
      while ( 1 )
      {
        v4 = (uint32_t *)v3[3];
        v25 = v4;
        if ( v4 != nullptr )
        {
          while ( 1 )
          {
            v5 = (uint32_t *)v4[3];
            v26 = v5;
            if ( v5 != nullptr )
            {
              while ( 1 )
              {
                v6 = (uint32_t *)v5[3];
                v27 = v6;
                if ( v6 != nullptr )
                {
                  while ( 1 )
                  {
                    v7 = (uint32_t *)v6[3];
                    v28 = v7;
                    if ( v7 != nullptr )
                    {
                      while ( 1 )
                      {
                        v8 = (uint32_t *)v7[3];
                        v29 = v8;
                        if ( v8 != nullptr )
                        {
                          while ( 1 )
                          {
                            v9 = (uint32_t *)v8[3];
                            v23 = v9;
                            if ( v9 != nullptr )
                            {
                              while ( 1 )
                              {
                                v10 = (uint32_t *)v9[3];
                                v22 = v10;
                                if ( v10 != nullptr )
                                {
                                  while ( 1 )
                                  {
                                    v11 = v10[3];
                                    if ( v11 != 0 )
                                    {
                                      while ( 1 )
                                      {
                                        g4_std::Rb_tree_int_pair_int_const_vox_v_611b06::M_erase(
                                          (int)(uintptr_t)(v1),
                                          *(void **)(v11 + 12));
                                        v12 = *(uint32_t *)(v11 + 8);
                                        VoxFreeInternal((void *)v11);
                                        if ( v12 == 0 )
                                          break;
                                        v11 = v12;
                                      }
                                    }
                                    v13 = (uint32_t *)v22[2];
                                    VoxFreeInternal(v22);
                                    if ( v13 == nullptr )
                                      break;
                                    v22 = v13;
                                    v10 = v13;
                                  }
                                }
                                v14 = (uint32_t *)v23[2];
                                VoxFreeInternal(v23);
                                if ( v14 == nullptr )
                                  break;
                                v23 = v14;
                                v9 = v14;
                              }
                            }
                            v15 = (uint32_t *)v29[2];
                            VoxFreeInternal(v29);
                            if ( v15 == nullptr )
                              break;
                            v29 = v15;
                            v8 = v15;
                          }
                        }
                        v16 = (uint32_t *)v28[2];
                        VoxFreeInternal(v28);
                        if ( v16 == nullptr )
                          break;
                        v28 = v16;
                        v7 = v16;
                      }
                    }
                    v17 = (uint32_t *)v27[2];
                    VoxFreeInternal(v27);
                    if ( v17 == nullptr )
                      break;
                    v27 = v17;
                    v6 = v17;
                  }
                }
                v18 = (uint32_t *)v26[2];
                VoxFreeInternal(v26);
                if ( v18 == nullptr )
                  break;
                v26 = v18;
                v5 = v18;
              }
            }
            v19 = (uint32_t *)v25[2];
            VoxFreeInternal(v25);
            if ( v19 == nullptr )
              break;
            v25 = v19;
            v4 = v19;
          }
        }
        v20 = (uint32_t *)v24[2];
        VoxFreeInternal(v24);
        if ( v20 == nullptr )
          break;
        v24 = v20;
        v3 = v20;
      }
    }
    v1[2] = 0;
    v1[3] = (uint32_t)(uintptr_t)(v30);
    v1[4] = (uint32_t)(uintptr_t)(v30);
    v1[5] = 0;
    VoxFreeInternal(v1);
    *(uint32_t *)self = 0;
  }
  sub_BA06B0();
  vox::Mutex::Destroy((vox::vs::VSBufferPool::Self *)((char *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferPool::DestroyInstance  (binary VA: 0xfcf420)
// Original: vox::vs::VSBufferPool::DestroyInstance
// ----------------------------------------------------------------------------
void vox::vs::VSBufferPool::DestroyInstance()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  if ( vox::vs::VSBufferPool::s_pInstance != 0 )
  {
    vox::vs::VSBufferPool::Destroy((vox::vs::VSBufferPool::Self *)(uintptr_t)(vox::vs::VSBufferPool::s_pInstance));
    VoxFreeInternal(vox::vs::VSBufferPool::s_pInstance);
    vox::vs::VSBufferPool::s_pInstance = 0;
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::CreateNewCursor  (binary VA: 0xfcf5a0)
// Original: vox::vs::VSStream::CreateNewCursor
// ----------------------------------------------------------------------------
int vox::vs::VSStream::CreateNewCursor()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStream::GetType  (binary VA: 0xfcf5b0)
// Original: vox::vs::VSStream::GetType
// ----------------------------------------------------------------------------
int vox::vs::VSStream::GetType()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStreamCursor::Destroy  (binary VA: 0xfcf5c0)
// Original: vox::vs::VSStreamCursor::~VSStreamCursor
// ----------------------------------------------------------------------------
void vox::vs::VSStreamCursor::Destroy(vox::vs::VSStreamCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStreamCursor::IsSeekable  (binary VA: 0xfcf5e0)
// Original: vox::vs::VSStreamCursor::IsSeekable
// ----------------------------------------------------------------------------
int vox::vs::VSStreamCursor::IsSeekable()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSFileStreamCursor::Destroy  (binary VA: 0xfcf5f0)
// Original: vox::vs::VSFileStreamCursor::~VSFileStreamCursor
// ----------------------------------------------------------------------------
void vox::vs::VSFileStreamCursor::Destroy(vox::vs::VSFileStreamCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CAA8);
  vox::vs::VSFileStreamCursor::Shutdown();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSStreamCursor::Destroy_eafcf640  (binary VA: 0xfcf640)
// Original: vox::vs::VSStreamCursor::~VSStreamCursor
// ----------------------------------------------------------------------------
void vox::vs::VSStreamCursor::Destroy_eafcf640(vox::vs::VSStreamCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSFileStreamCursor::Destroy_eafcf6d0  (binary VA: 0xfcf6d0)
// Original: vox::vs::VSFileStreamCursor::~VSFileStreamCursor
// ----------------------------------------------------------------------------
void vox::vs::VSFileStreamCursor::Destroy_eafcf6d0(vox::vs::VSFileStreamCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CAA8);
  vox::vs::VSFileStreamCursor::Shutdown();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferStreamCursor::Destroy  (binary VA: 0xfcf720)
// Original: vox::vs::VSBufferStreamCursor::~VSBufferStreamCursor
// ----------------------------------------------------------------------------
void vox::vs::VSBufferStreamCursor::Destroy(vox::vs::VSBufferStreamCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CAE8);
  vox::vs::VSBufferStreamCursor::Shutdown(self);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferStreamCursor::Destroy_eafcf770  (binary VA: 0xfcf770)
// Original: vox::vs::VSBufferStreamCursor::~VSBufferStreamCursor
// ----------------------------------------------------------------------------
void vox::vs::VSBufferStreamCursor::Destroy_eafcf770(vox::vs::VSBufferStreamCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CAE8);
  vox::vs::VSBufferStreamCursor::Shutdown(self);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CB48);
  opDelete(self);
}


