#include "Core/Utils/DecompTypes.h"
#include "vox_FileInterface.h"

// ----------------------------------------------------------------------------
// Function: vox::FileInterface::GetFilePath  (binary VA: 0x10086e0)
// Original: vox::FileInterface::GetFilePath
// ----------------------------------------------------------------------------
int vox::FileInterface::GetFilePath(vox::FileInterface::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 1);
  if ( v1 != 0 )
    return *(uint32_t *)v1;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::FileInterface::GetFilePtr  (binary VA: 0x1008700)
// Original: vox::FileInterface::GetFilePtr
// ----------------------------------------------------------------------------
int vox::FileInterface::GetFilePtr(vox::FileInterface::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 1);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::FileInterface::Destroy  (binary VA: 0x1008800)
// Original: vox::FileInterface::~FileInterface
// ----------------------------------------------------------------------------
void vox::FileInterface::Destroy(vox::FileInterface::Self *self)
{
  uint32_t *v1;
  void *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D6A8);
  v1 = *((uint32_t **)self + 1);
  if ( v1 != nullptr )
  {
    v2 = (void *)(*v1 - 12);
    if ( v2 != (void *)g4_empty_string_rep )
    {
      if ( __sync_fetch_and_add((volatile int32_t *)(*v1 - 4), 0xFFFFFFFF) <= 0 )
        VoxFreeInternal(v2);
      v1 = *((uint32_t **)self + 1);
    }
    VoxFreeInternal(v1);
  }
  *((uint32_t *)self + 1) = 0;
}

// ----------------------------------------------------------------------------
// Function: vox::FileInterface::Destroy_ea1008870  (binary VA: 0x1008870)
// Original: vox::FileInterface::~FileInterface
// ----------------------------------------------------------------------------
void vox::FileInterface::Destroy_ea1008870(vox::FileInterface::Self *self)
{
  vox::FileInterface::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::FileInterface::Write  (binary VA: 0x1008da0)
// Original: vox::FileInterface::Write
// ----------------------------------------------------------------------------
int vox::FileInterface::Write(vox::FileInterface::Self *self, const void *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  vox::VoxThread::Self *v8;
  int v9;

  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  v4 = *((uint32_t *)self + 1);
  if ( v4 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 4);
    if ( a2 != nullptr && v5 != 0 )
    {
      v6 = 0;
      if ( dword_20E2064 != 0 )
        v6 = ((int (*)(const void *, int, int, int))dword_20E2064)(a2, a3, a4, v5);
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = -1;
  }
  v9 = v6;
  sub_BA06B0();
  return v9;
}

// ----------------------------------------------------------------------------
// Function: vox::FileInterface::Tell  (binary VA: 0x1008e60)
// Original: vox::FileInterface::Tell
// ----------------------------------------------------------------------------
int vox::FileInterface::Tell(vox::FileInterface::Self *self)
{
  int CurThreadId;
  int v2;
  int v3;
  int v4;
  vox::VoxThread::Self *v6;
  int v7;

  CurThreadId = vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v2 = *((uint32_t *)self + 1);
  if ( v2 != 0 && (v3 = *(uint32_t *)(v2 + 4)) != 0 && dword_20E206C != 0 )
    v4 = ((int (*)(int, int))dword_20E206C)(v3, CurThreadId);
  else
    v4 = -1;
  v7 = v4;
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::FileInterface::Seek  (binary VA: 0x1008ef0)
// Original: vox::FileInterface::Seek
// ----------------------------------------------------------------------------
int vox::FileInterface::Seek(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  vox::VoxThread::Self *v7;
  int v8;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  v3 = *(uint32_t *)(a1 + 4);
  if ( v3 != 0 && (v4 = *(uint32_t *)(v3 + 4)) != 0 && dword_20E2068 != 0 )
    v5 = ((int (*)(int, int, int))dword_20E2068)(v4, a2, a3);
  else
    v5 = -1;
  v8 = v5;
  sub_BA06B0();
  return v8;
}

// ----------------------------------------------------------------------------
// Function: vox::FileInterface::Read  (binary VA: 0x1008f90)
// Original: vox::FileInterface::Read
// ----------------------------------------------------------------------------
int vox::FileInterface::Read(vox::FileInterface::Self *self, void *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  vox::VoxThread::Self *v8;
  int v9;

  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  v4 = *((uint32_t *)self + 1);
  if ( v4 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 4);
    if ( a2 != nullptr && v5 != 0 )
    {
      v6 = 0;
      if ( vox::FileSystemInterface::m_IOFunc != 0 )
        v6 = ((int (*)(void *, int, int, int))vox::FileSystemInterface::m_IOFunc)(a2, a3, a4, v5);
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = -1;
  }
  v9 = v6;
  sub_BA06B0();
  return v9;
}

// ----------------------------------------------------------------------------
// Function: vox::FileInterface::Construct  (binary VA: 0x100b4c0)
// Original: vox::FileInterface::FileInterface
// ----------------------------------------------------------------------------
vox::FileInterface::Self * vox::FileInterface::Construct(vox::FileInterface::Self *self)
{
  uint32_t *v1;
  vox::FileInterface::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D6A8);
  v1 = (uint32_t *)VoxAllocInternal(
                   0xCu,
                   0,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                   (int)(uintptr_t)("FileInterface"),
                   753);
  v1[2] = 0;
  *v1 = (uint32_t)(uintptr_t)(&unk_20E1FB4);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v1);
  v1[1] = 0;
  result = *((vox::FileInterface::Self **)self + 1);
  *((uint32_t *)result + 2) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::FileInterface::Construct  (binary VA: 0x100b540)
// Original: vox::FileInterface::FileInterface
// ----------------------------------------------------------------------------
vox::FileInterface::Self * vox::FileInterface::Construct(vox::FileInterface::Self *self, void *a2, char *s)
{
  uint32_t *v3;
  vox::FileInterface::Self *result;
  size_t v5;
  vox::FileInterface::Self **v6;
  size_t n;
  bool v8; // cc
  size_t v9;
  int v10;
  unsigned int v11;
  size_t v12;
  int v13;
  vox::FileInterface::Self **v14;
  void *v15;
  char *v16;
  int v17;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D6A8);
  v3 = (uint32_t *)VoxAllocInternal(
                   0xCu,
                   0,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                   (int)(uintptr_t)("FileInterface"),
                   771);
  v3[2] = 0;
  *v3 = (uint32_t)(uintptr_t)(&unk_20E1FB4);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3);
  v3[1] = (uint32_t)(uintptr_t)(a2);
  result = *((vox::FileInterface::Self **)self + 1);
  *((uint32_t *)result + 2) = 0;
  if ( s == nullptr )
    return result;
  v14 = *((vox::FileInterface::Self ***)self + 1);
  v5 = strlen(s);
  v6 = v14;
  n = v5;
  v8 = v5 <= 0x3FFFFFFC;
  result = *v14;
  if ( !v8 )
    sub_1900180("basic_string::assign");
  if ( s >= (char *)result && s <= (char *)result + *((uint32_t *)*v14 - 3) && *((int *)result - 1) <= 0 )
  {
    if ( n <= s - (char *)result )
    {
      if ( n != 1 )
      {
        memcpy(result, s, n);
        result = *v14;
        goto LABEL_27;
      }
    }
    else
    {
      if ( s == (char *)result )
        goto LABEL_27;
      if ( n != 1 )
      {
        memmove(result, s, n);
        result = *v14;
        goto LABEL_27;
      }
    }
    *(uint8_t *)result = *s;
    result = *v14;
LABEL_27:
    if ( (void *)((char *)result - 12) != (void *)g4_empty_string_rep )
    {
      *((uint32_t *)result - 1) = 0;
      *((uint32_t *)result - 3) = n;
      *((uint8_t *)result + n) = 0;
    }
    return result;
  }
  v9 = *((uint32_t *)result - 2);
  if ( n > v9 )
  {
    v10 = 2 * v9;
    if ( n >= 2 * v9 )
      v10 = n;
    v15 = (void *)v10;
    goto LABEL_8;
  }
  v15 = (void *)n;
  if ( *((int *)result - 1) > 0 )
  {
LABEL_8:
    if ( (unsigned int)(uintptr_t)(v15) + 29 <= 0x1000 || v9 >= (unsigned int)(uintptr_t)(v15) )
    {
      v12 = (size_t)v15 + 13;
    }
    else
    {
      v11 = (unsigned int)(uintptr_t)(v15) - (((uint16_t)(uintptr_t)v15 + 29) & 0xFFF) + 4096;
      if ( v11 > 0x3FFFFFFC )
        v11 = 1073741820;
      v15 = (void *)v11;
      v12 = v11 + 13;
    }
    v13 = VoxAllocInternal(v12, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v13 + 8) = 0;
    *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(v15);
    v6 = v14;
    v17 = v13;
    v16 = (char *)*v14 - 12;
    if ( v16 != (char *)(void *)g4_empty_string_rep
      && __sync_fetch_and_add((volatile int32_t *)*v14 - 1, 0xFFFFFFFF) <= 0 )
    {
      VoxFreeInternal(v16);
      v6 = v14;
    }
    result = (vox::FileInterface::Self *)(v17 + 12);
    *v6 = (vox::FileInterface::Self *)(v17 + 12);
  }
  if ( (void *)((char *)result - 12) != (void *)g4_empty_string_rep )
  {
    *((uint32_t *)result - 1) = 0;
    *((uint32_t *)result - 3) = n;
    *((uint8_t *)result + n) = 0;
  }
  if ( n != 0 )
  {
    result = *v6;
    if ( n == 1 )
      *(uint8_t *)result = *s;
    else
      return (vox::FileInterface::Self *)memcpy(result, s, n);
  }
  return result;
}


