#include "Core/Utils/DecompTypes.h"
#include "glf_io2.h"

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::Clone  (binary VA: 0xc71bb0)
// Original: glf::io2::Device::Clone
// ----------------------------------------------------------------------------
int glf::io2::Device::Clone()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::Destroy  (binary VA: 0xc71bc0)
// Original: glf::io2::Device::~Device
// ----------------------------------------------------------------------------
void glf::io2::Device::Destroy(glf::io2::Device::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::AtEnd  (binary VA: 0xc71be0)
// Original: glf::io2::Device::AtEnd
// ----------------------------------------------------------------------------
bool glf::io2::Device::AtEnd(glf::io2::Device::Self *self)
{
  int64_t v1; // rax

  v1 = ((int64_t (*)(glf::io2::Device::Self *))*(uint32_t *)(*(uint32_t *)self + 24))(self);
  return v1 == ((int64_t (*)(glf::io2::Device::Self *))*(uint32_t *)(*(uint32_t *)self + 80))(self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::Destroy_eac71c50  (binary VA: 0xc71c50)
// Original: glf::io2::Device::~Device
// ----------------------------------------------------------------------------
void glf::io2::Device::Destroy_eac71c50(glf::io2::Device::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
  glf::MemObject::opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::ReadASync  (binary VA: 0xcbf370)
// Original: glf::io2::Device::ReadASync
// ----------------------------------------------------------------------------
int glf::io2::Device::ReadASync(glf::io2::Device::Self *self, void *a2, int64_t a3, void (*a4)(glf::io2::Device::Self *, int64_t, int, void *), void *a5)
{
  int64_t v5; // rax

  v5 = ((int64_t (*)(glf::io2::Device::Self *, void *, uint32_t, uint32_t))*(uint32_t *)(*(uint32_t *)self + 36))(
         self,
         a2,
         a3,
         HIDWORD(a3));
  ((void (*)(glf::io2::Device::Self *, uint32_t, uint32_t, uint32_t, void *))a4)(self, v5, HIDWORD(v5), 0, a5);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::WriteASync  (binary VA: 0xcbf3c0)
// Original: glf::io2::Device::WriteASync
// ----------------------------------------------------------------------------
int glf::io2::Device::WriteASync(glf::io2::Device::Self *self, const void *a2, int64_t a3, void (*a4)(glf::io2::Device::Self *, int64_t, int, void *), void *a5)
{
  int64_t v5; // rax

  v5 = ((int64_t (*)(glf::io2::Device::Self *, const void *, uint32_t, uint32_t))*(uint32_t *)(*(uint32_t *)self + 40))(
         self,
         a2,
         a3,
         HIDWORD(a3));
  ((void (*)(glf::io2::Device::Self *, uint32_t, uint32_t, uint32_t, void *))a4)(self, v5, HIDWORD(v5), 0, a5);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::ReadASyncWithOffset  (binary VA: 0xcbf410)
// Original: glf::io2::Device::ReadASyncWithOffset
// ----------------------------------------------------------------------------
int glf::io2::Device::ReadASyncWithOffset(glf::io2::Device::Self *self, void *a2, int64_t a3, int64_t a4, void (*a5)(glf::io2::Device::Self *, int64_t, int, void *), void *a6)
{
  return G4_VCALL<int>(self, 48, a2, a3, HIDWORD(a3), a5, a6);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::WriteASyncWithOffset  (binary VA: 0xcbf460)
// Original: glf::io2::Device::WriteASyncWithOffset
// ----------------------------------------------------------------------------
int glf::io2::Device::WriteASyncWithOffset(glf::io2::Device::Self *self, const void *a2, int64_t a3, int64_t a4, void (*a5)(glf::io2::Device::Self *, int64_t, int, void *), void *a6)
{
  return G4_VCALL<int>(self, 52, a2, a3, HIDWORD(a3), a5, a6);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::CancelASync  (binary VA: 0xcbf4b0)
// Original: glf::io2::Device::CancelASync
// ----------------------------------------------------------------------------
int glf::io2::Device::CancelASync()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::WaitASync  (binary VA: 0xcbf4c0)
// Original: glf::io2::Device::WaitASync
// ----------------------------------------------------------------------------
int glf::io2::Device::WaitASync()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::ConvertToOpenMode  (binary VA: 0xcbf4d0)
// Original: glf::io2::Device::ConvertToOpenMode
// ----------------------------------------------------------------------------
int glf::io2::Device::ConvertToOpenMode(int a1)
{
  int *v1;
  int v2;

  v1 = (int *)(&dword_20C2148);
  v2 = 0;
  while ( *v1 != a1 && v1[1] != a1 )
  {
    ++v2;
    v1 += 4;
    if ( v2 == 12 )
      return 0;
  }
  return dword_20C2144[4 * v2];
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::ConvertToOpenMode  (binary VA: 0xcbf510)
// Original: glf::io2::Device::ConvertToOpenMode
// ----------------------------------------------------------------------------
int glf::io2::Device::ConvertToOpenMode(glf::io2::Device::Self *self)
{
  int v1;

  v1 = 0;
  while ( strcmp((const char *)self, (&off_20C2140)[4 * v1]) != 0 )
  {
    if ( ++v1 == 12 )
      return 0;
  }
  return dword_20C2144[4 * v1];
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::ConvertToStdIos  (binary VA: 0xcbf570)
// Original: glf::io2::Device::ConvertToStdIos
// ----------------------------------------------------------------------------
int glf::io2::Device::ConvertToStdIos(glf::io2::Device::Self *self)
{
  int v1;

  v1 = 0;
  while ( strcmp((const char *)self, (&off_20C2140)[4 * v1]) != 0 )
  {
    if ( ++v1 == 12 )
      return 0;
  }
  return dword_20C2148[4 * v1];
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::ConvertToStdIos  (binary VA: 0xcbf5d0)
// Original: glf::io2::Device::ConvertToStdIos
// ----------------------------------------------------------------------------
char glf::io2::Device::ConvertToStdIos(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  while ( a1 != dword_20C2144[4 * v1] )
  {
    if ( ++v1 == 12 )
    {
      LOBYTE(v2) = 0;
      return v2;
    }
  }
  return dword_20C2148[4 * v1];
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::ConvertMode  (binary VA: 0xcbf620)
// Original: glf::io2::Device::ConvertMode
// ----------------------------------------------------------------------------
char * glf::io2::Device::ConvertMode(int a1)
{
  int *v1;
  unsigned int v2;
  int v3;

  v1 = (int *)(uintptr_t)(dword_20C2148);
  v2 = a1 & 0xFFFFFFFD;
  v3 = 0;
  while ( *v1 != v2 && v1[1] != v2 )
  {
    ++v3;
    v1 += 4;
    if ( v3 == 12 )
      return nullptr;
  }
  return (char *)(uintptr_t)((&off_20C2140)[4 * v3]);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::ConvertMode_eacbf670  (binary VA: 0xcbf670)
// Original: glf::io2::Device::ConvertMode
// ----------------------------------------------------------------------------
char glf::io2::Device::ConvertMode_eacbf670(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  while ( a1 != dword_20C2144[4 * v1] )
  {
    if ( ++v1 == 12 )
    {
      LOBYTE(v2) = 0;
      return v2;
    }
  }
  return (char)(&off_20C2140)[4 * v1];
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::ConvertToSeekDir  (binary VA: 0xcbf6c0)
// Original: glf::io2::Device::ConvertToSeekDir
// ----------------------------------------------------------------------------
int glf::io2::Device::ConvertToSeekDir(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::SetError  (binary VA: 0xcbf6d0)
// Original: glf::io2::Device::SetError
// ----------------------------------------------------------------------------
glf::io2::Device::Self * glf::io2::Device::SetError(glf::io2::Device::Self *self, int a2, const glf::ErrorCategory::Self *a3, const char *a4)
{
  *((uint32_t *)self + 5) = a2;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::Device::GetError  (binary VA: 0xcbf6f0)
// Original: glf::io2::Device::GetError
// ----------------------------------------------------------------------------
char * glf::io2::Device::GetError(glf::io2::Device::Self *self)
{
  return (char *)self + 12;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::Destroy  (binary VA: 0xcbf810)
// Original: glf::io2::FileDevice::~FileDevice
// ----------------------------------------------------------------------------
void glf::io2::FileDevice::Destroy(void **self)
{
  int v1;
  int v2;

  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206E4E8));
  if ( *(self + 9) != nullptr )
    opDelete(*(self + 9));
  v1 = (int)(uintptr_t)(*(self + 8));
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = (int)(uintptr_t)(*(self + 6));
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206D470));
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::Destroy_eacbf8c0  (binary VA: 0xcbf8c0)
// Original: glf::io2::FileDevice::~FileDevice
// ----------------------------------------------------------------------------
void glf::io2::FileDevice::Destroy_eacbf8c0(void **self)
{
  glf::io2::FileDevice::Destroy(self);
  glf::MemObject::opDelete((glf::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::Construct  (binary VA: 0xcbf900)
// Original: glf::io2::FileDevice::FileDevice
// ----------------------------------------------------------------------------
glf::io2::FileDevice::Self * glf::io2::FileDevice::Construct(glf::io2::FileDevice::Self *self)
{
  glf::Self *v2;

  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D388);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(glf::GetSystemCategory(v2));
  *((uint32_t *)self + 4) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E4E8);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 28) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  return (glf::io2::FileDevice::Self *)&dword_213B814;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::Unmap  (binary VA: 0xcbf980)
// Original: glf::io2::FileDevice::Unmap
// ----------------------------------------------------------------------------
int glf::io2::FileDevice::Unmap(glf::io2::FileDevice::Self *self, char *a2)
{
  int result;
  int v3;
  int v4;
  int dest;
  int v6;
  int v7;
  int v8;

  result = 0;
  v3 = *((uint32_t *)self + 9);
  v4 = *((uint32_t *)self + 10);
  if ( v3 != v4 )
  {
    dest = *((uint32_t *)self + 9);
    if ( *(char **)(v3 + 20) == a2 )
    {
LABEL_8:
      v8 = *(uint32_t *)(dest + 16);
      if ( dest + 24 != v4 )
      {
        v6 = (v4 - (dest + 24)) >> 3;
        if ( -1431655765 * v6 != 0 )
        {
          memmove((void *)dest, (const void *)(dest + 24), 8 * v6);
          v4 = *((uint32_t *)self + 10);
        }
      }
      v7 = *(uint32_t *)self;
      *((uint32_t *)self + 10) = v4 - 24;
      return (*(int (**)(glf::io2::FileDevice::Self *, int))(v7 + 112))(self, v8);
    }
    else
    {
      while ( 1 )
      {
        dest += 24;
        if ( dest == v4 )
          return 0;
        if ( *(char **)(dest + 20) == a2 )
          goto LABEL_8;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::UnmapAll  (binary VA: 0xcbfa20)
// Original: glf::io2::FileDevice::UnmapAll
// ----------------------------------------------------------------------------
int glf::io2::FileDevice::UnmapAll(glf::io2::FileDevice::Self *self)
{
  int result;

  for ( result = *((uint32_t *)self + 10); result != *((uint32_t *)self + 9); result = *((uint32_t *)self + 10) )
    glf::io2::FileDevice::Unmap(self, *(char **)(result - 4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::Close  (binary VA: 0xcbfa60)
// Original: glf::io2::FileDevice::Close
// ----------------------------------------------------------------------------
int glf::io2::FileDevice::Close(glf::io2::FileDevice::Self *self)
{
  return glf::io2::FileDevice::UnmapAll(self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::GetMapCount  (binary VA: 0xcbfa90)
// Original: glf::io2::FileDevice::GetMapCount
// ----------------------------------------------------------------------------
int glf::io2::FileDevice::GetMapCount(glf::io2::FileDevice::Self *self)
{
  return -1431655765 * ((*((uint32_t *)self + 10) - *((uint32_t *)self + 9)) >> 3);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::GetRawFilename  (binary VA: 0xcbfab0)
// Original: glf::io2::FileDevice::GetRawFilename
// ----------------------------------------------------------------------------
char * glf::io2::FileDevice::GetRawFilename(glf::io2::FileDevice::Self *self)
{
  return (char *)self + 24;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::GetFilename  (binary VA: 0xcbfac0)
// Original: glf::io2::FileDevice::GetFilename
// ----------------------------------------------------------------------------
char * glf::io2::FileDevice::GetFilename(glf::io2::FileDevice::Self *self)
{
  char *result;

  result = (char *)self + 24;
  if ( *(uint32_t *)(*((uint32_t *)self + 8) - 12) != 0 )
    return (char *)self + 32;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::SetLogicFilename  (binary VA: 0xcbfae0)
// Original: glf::io2::FileDevice::SetLogicFilename
// ----------------------------------------------------------------------------
int glf::io2::FileDevice::SetLogicFilename(glf::io2::FileDevice::Self *self, const glf::fs2::Path::Self *a2)
{
  char *s;
  size_t v3;

  s = (char *)glf::fs2::Path::c_str(a2);
  v3 = strlen(s);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(self) + 32, s, v3));
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::Map  (binary VA: 0xcbfb40)
// Original: glf::io2::FileDevice::Map
// ----------------------------------------------------------------------------
int glf::io2::FileDevice::Map(uint32_t *a1, int a2, int a3, int64_t a4, int64_t a5, int64_t a6, int a7, int a8, int64_t a9, int64_t a10, int a11, int a12)
{
  int v12;
  int result;
  uint64_t *v14;
  bool v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  void *retaddr;
  int v40;
  int64_t v41;
  int v42;

  v40 = G4_VCALL<int>(a1, 96, v18, v19, v20, v21, v22, v23, v24, v25, v26, a2, a3, a4, HIDWORD(a4), v27, v28, v29, v30, v31, v32, v33, v34, v35, v36);
  v42 = G4_VCALL<int>(a1, 100);
  if ( (HIDWORD(a6) & (unsigned int)a6) == 0xFFFFFFFF )
    a6 = ((int64_t (*)(uint32_t *))*(uint32_t *)(*a1 + 80))(a1);
  memset(&a9, 0, 0x18u);
  a9 = a5;
  a10 = a6;
  if ( a5 % (unsigned int)v40 != 0 || (v41 = a5, a6 % (unsigned int)v42 != 0) )
  {
    a9 = (unsigned int)a5 & -G4_VCALL<int>(a1, 96);
    v17 = G4_VCALL<int>(a1, 100);
    v41 = a9;
    if ( a6 + a5 - a9 != 0 )
      a6 = -v17 & (unsigned int)(v17 - 1 + a6 + a5 - a9);
    else
      a6 = 0;
    a10 = a6;
  }
  retaddr = (void *)HIDWORD(a6);
  v12 = G4_VCALL<int>(a1, 108, v41, HIDWORD(v41), a6);
  a11 = v12;
  if ( v12 == 0 )
    return a12;
  result = a5 - a9 + v12;
  v14 = (uint64_t *)a1[10];
  v15 = v14 == (uint64_t *)a1[11];
  a12 = result;
  if ( v15 )
  {
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(a1 + 9), v14, (int)(uintptr_t)(&a9));
    return a12;
  }
  v16 = 0;
  if ( v14 != nullptr )
  {
    *v14 = a9;
    v14[1] = a10;
    *((uint32_t *)v14 + 4) = a11;
    *((uint32_t *)v14 + 5) = a12;
    v16 = a1[10];
    result = a12;
  }
  a1[10] = v16 + 24;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::Open  (binary VA: 0xcbfdb0)
// Original: glf::io2::FileDevice::Open
// ----------------------------------------------------------------------------
int glf::io2::FileDevice::Open()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::GetMapOffsetAlignment  (binary VA: 0xcbfdc0)
// Original: glf::io2::FileDevice::GetMapOffsetAlignment
// ----------------------------------------------------------------------------
int glf::io2::FileDevice::GetMapOffsetAlignment()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::GetMapSizeAlignment  (binary VA: 0xcbfdd0)
// Original: glf::io2::FileDevice::GetMapSizeAlignment
// ----------------------------------------------------------------------------
int glf::io2::FileDevice::GetMapSizeAlignment()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::IsSequencial  (binary VA: 0xcbfde0)
// Original: glf::io2::FileDevice::IsSequencial
// ----------------------------------------------------------------------------
int glf::io2::FileDevice::IsSequencial()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileDevice::GetAbsolutePath  (binary VA: 0xcbfdf0)
// Original: glf::io2::FileDevice::GetAbsolutePath
// ----------------------------------------------------------------------------
glf::io2::FileDevice::Self * glf::io2::FileDevice::GetAbsolutePath(glf::io2::FileDevice::Self *self, int a2)
{
  int v2;

  v2 = a2 + 24;
  if ( *(uint32_t *)(*(uint32_t *)(a2 + 32) - 12) != 0 )
    v2 = a2 + 32;
  g4_std::string::construct_copy(self, v2);
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Path::Init(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::IsOpen  (binary VA: 0xcc00c0)
// Original: glf::io2::FilePosix::IsOpen
// ----------------------------------------------------------------------------
bool glf::io2::FilePosix::IsOpen(glf::io2::FilePosix::Self *self)
{
  return *((uint32_t *)self + 16) != -1;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::IsClosedTemporarily  (binary VA: 0xcc00d0)
// Original: glf::io2::FilePosix::IsClosedTemporarily
// ----------------------------------------------------------------------------
bool glf::io2::FilePosix::IsClosedTemporarily(glf::io2::FilePosix::Self *self)
{
  return *((uint32_t *)self + 16) == -2;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::Peek  (binary VA: 0xcc00e0)
// Original: glf::io2::FilePosix::Peek
// ----------------------------------------------------------------------------
int64_t glf::io2::FilePosix::Peek(glf::io2::FilePosix::Self *self, void *a2, int64_t a3)
{
  int64_t v4; // 0:esi.4,4:edi.4

  v4 = ((int64_t (*)(glf::io2::FilePosix::Self *, void *, uint32_t, uint32_t))*(uint32_t *)(*(uint32_t *)self + 36))(
         self,
         a2,
         a3,
         HIDWORD(a3));
  G4_VCALL<void>(self, 20, -(int)v4, (uint64_t)-v4 >> 32, 0);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::GetMapOffsetAlignment  (binary VA: 0xcc0160)
// Original: glf::io2::FilePosix::GetMapOffsetAlignment
// ----------------------------------------------------------------------------
int glf::io2::FilePosix::GetMapOffsetAlignment()
{
  return _page_size;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::GetMapSizeAlignment  (binary VA: 0xcc0180)
// Original: glf::io2::FilePosix::GetMapSizeAlignment
// ----------------------------------------------------------------------------
int glf::io2::FilePosix::GetMapSizeAlignment()
{
  return _page_size;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::UnmapV  (binary VA: 0xcc01a0)
// Original: glf::io2::FilePosix::UnmapV
// ----------------------------------------------------------------------------
bool glf::io2::FilePosix::UnmapV(glf::io2::FilePosix::Self *self, char *addr)
{
  return munmap(addr, *((uint32_t *)self + 17)) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::CloseTemporarily  (binary VA: 0xcc01e0)
// Original: glf::io2::FilePosix::CloseTemporarily
// ----------------------------------------------------------------------------
int glf::io2::FilePosix::CloseTemporarily(glf::io2::FilePosix::Self *self)
{
  int v1;

  v1 = 0;
  if ( glf::io2::FileDevice::GetMapCount((glf::io2::FileDevice::Self *)(self)) == 0 )
  {
    v1 = 1;
    if ( *((uint32_t *)self + 16) != -2 )
    {
      *(uint64_t *)((char *)self + 52) = ((int64_t (*)(glf::io2::FilePosix::Self *))*(uint32_t *)(*(uint32_t *)self + 24))(self);
      close(*((uint32_t *)self + 16));
      *((uint32_t *)self + 16) = -2;
    }
  }
  return v1;
}



// ============================================================================
// Address:   0xcc0260 (size: 170 bytes)
// Symbol:    _ZN3glf3io29FilePosixC2ENS_13intrusive_ptrINS_3fs210FileSystemEEE
// Demangled: glf::io2::FilePosix::FilePosix(glf::intrusive_ptr<glf::fs2::FileSystem>)
// ============================================================================
// Alternative name is '_ZN3glf3io29FilePosixC1ENS_13intrusive_ptrINS_3fs210FileSystemEEE'
void (**glf::io2::FilePosix::Construct(
        glf::io2::FileDevice::Self *a1,
        int *a2))(glf::io2::FilePosix::Self * self)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v6[4];

  v2 = *a2;
  v6[0] = v2;
  if ( v2 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1u);
  glf::io2::File::Construct(a1, (int)(uintptr_t)(v6));
  v3 = (uint32_t *)v6[0];
  if ( v6[0] != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v6[0] + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v3, 8);
      G4_VCALL<void>(v3, 16);
    }
    else
    {
      v4 = v3[1];
      _mm_mfence();
      if ( v4 == 1 )
        G4_VCALL<void>(v3, 12);
    }
  }
  *((uint32_t *)a1 + 16) = -1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206E588);
  return (void (**)(glf::io2::FilePosix::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206E588));
}
// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::Construct  (binary VA: 0xcc0310)
// Original: glf::io2::FilePosix::FilePosix
// ----------------------------------------------------------------------------
int glf::io2::FilePosix::Construct(glf::io2::FileDevice::Self *a1, int *a2, glf::fs2::Path::Self *a3, int a4, int a5)
{
  int v5;
  uint32_t *v6;
  int v7;
  char *v8;
  size_t v9;
  int v11[7];

  v5 = *a2;
  v11[0] = *a2;
  if ( v11[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v5 + 4), 1u);
  glf::io2::File::Construct(a1, (int)(uintptr_t)(v11));
  v6 = (uint32_t *)v11[0];
  if ( v11[0] != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v11[0] + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v6, 8);
      G4_VCALL<void>(v6, 16);
    }
    else
    {
      v7 = v6[1];
      _mm_mfence();
      if ( v7 == 1 )
        G4_VCALL<void>(v6, 12);
    }
  }
  *((uint32_t *)a1 + 17) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206E588);
  *((uint32_t *)a1 + 16) = a4;
  *((uint32_t *)a1 + 2) = a5;
  v8 = (char *)glf::fs2::Path::c_str(a3);
  v9 = strlen(v8);
  g4_std_compat::string_assign((int)(uintptr_t)(a1) + 24, v8, v9);
  return glf::io2::File::RegisterFile(a1);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::IsOpenAndUsable  (binary VA: 0xcc03f0)
// Original: glf::io2::FilePosix::IsOpenAndUsable
// ----------------------------------------------------------------------------
int glf::io2::FilePosix::IsOpenAndUsable(glf::io2::FilePosix::Self *self)
{
  char v1;
  int v2;

  v1 = G4_VCALL<int>(self, 84);
  v2 = 0;
  if ( v1 != 0 )
    LOBYTE(v2) = *((uint32_t *)self + 16) != -2;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::MapV  (binary VA: 0xcc0420)
// Original: glf::io2::FilePosix::MapV
// ----------------------------------------------------------------------------
void * glf::io2::FilePosix::MapV(glf::io2::FilePosix::Self *a1, __off_t offset, int a3, size_t len)
{
  char v4;
  void *result;
  int flags;

  v4 = G4_VCALL<int>(a1, 84);
  result = nullptr;
  if ( v4 != 0 )
  {
    if ( (uint8_t)glf::io2::FilePosix::IsOpenAndUsable(a1) == 0 )
      glf::io2::File::Awaken(a1);
    flags = 1;
    if ( (*((uint32_t *)a1 + 2) & 2) == 0 )
      flags = 2 * (*((uint32_t *)a1 + 2) & 1);
    result = mmap(nullptr, len, 2, flags, *((uint32_t *)a1 + 16), offset);
    if ( result == (void *)-1 )
      return nullptr;
    else
      *((uint32_t *)a1 + 17) = len;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::GetSize  (binary VA: 0xcc04e0)
// Original: glf::io2::FilePosix::GetSize
// ----------------------------------------------------------------------------
int64_t glf::io2::FilePosix::GetSize(struct stat self)
{
  int *st_dev;
  bool v2;
  int64_t result; // rax
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  st_dev = (int *)self.st_dev;
  v2 = (*(uint8_t (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*(uint32_t *)LODWORD(self.st_dev) + 84))(
         self.st_dev,
         v4,
         v5,
         v6,
         v7,
         v8,
         v9,
         v10,
         v11,
         v12,
         v13,
         v14,
         v15,
         v16,
         v17,
         v18,
         v19,
         v20,
         v21,
         v22,
         v23,
         v24,
         v25,
         v26,
         v27,
         v28,
         v29,
         v30) == 0;
  result = -1;
  if ( !v2 )
  {
    if ( (uint8_t)glf::io2::FilePosix::IsOpenAndUsable((glf::io2::FilePosix::Self *)st_dev) == 0 )
      glf::io2::File::Awaken((glf::io2::File::Self *)st_dev);
    v2 = fstat(st_dev[16], &self) == 0;
    result = -1;
    if ( v2 )
      return *(uint64_t *)&self.st_size;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::Tell  (binary VA: 0xcc0560)
// Original: glf::io2::FilePosix::Tell
// ----------------------------------------------------------------------------
int64_t glf::io2::FilePosix::Tell(glf::io2::FilePosix::Self *self)
{
  bool v1;
  int64_t result; // rax

  v1 = G4_VCALL<uint8_t>(self, 84) == 0;
  result = -1;
  if ( !v1 )
  {
    if ( (uint8_t)glf::io2::FilePosix::IsOpenAndUsable(self) != 0 )
      return lseek(*((uint32_t *)self + 16), 0, 1);
    else
      return *(uint64_t *)((char *)self + 52);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::Write  (binary VA: 0xcc05f0)
// Original: glf::io2::FilePosix::Write
// ----------------------------------------------------------------------------
ssize_t glf::io2::FilePosix::Write(glf::io2::FilePosix::Self *self, void *buf, int64_t n)
{
  bool v3;
  ssize_t result;

  v3 = G4_VCALL<uint8_t>(self, 84) == 0;
  result = -1;
  if ( !v3 )
  {
    if ( (uint8_t)glf::io2::FilePosix::IsOpenAndUsable(self) == 0 )
      glf::io2::File::Awaken(self);
    result = write(*((uint32_t *)self + 16), buf, n);
    if ( result < 0 )
      return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::Read  (binary VA: 0xcc0690)
// Original: glf::io2::FilePosix::Read
// ----------------------------------------------------------------------------
ssize_t glf::io2::FilePosix::Read(glf::io2::FilePosix::Self *self, void *buf, int64_t nbytes)
{
  bool v3;
  ssize_t result;

  v3 = G4_VCALL<uint8_t>(self, 84) == 0;
  result = -1;
  if ( !v3 )
  {
    if ( (uint8_t)glf::io2::FilePosix::IsOpenAndUsable(self) == 0 )
      glf::io2::File::Awaken(self);
    result = read(*((uint32_t *)self + 16), buf, nbytes);
    if ( result < 0 )
      return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::Seek  (binary VA: 0xcc0730)
// Original: glf::io2::FilePosix::Seek
// ----------------------------------------------------------------------------
int glf::io2::FilePosix::Seek(glf::io2::FilePosix::Self *a1, __off_t offset, int a3, int a4)
{
  char v4;
  int v5;
  int whence;

  v4 = G4_VCALL<int>(a1, 84);
  v5 = 0;
  if ( v4 != 0 )
  {
    if ( (uint8_t)glf::io2::FilePosix::IsOpenAndUsable(a1) == 0 )
      glf::io2::File::Awaken(a1);
    whence = 0;
    if ( a4 != 0 )
      whence = (a4 != 1) + 1;
    LOBYTE(v5) = lseek(*((uint32_t *)a1 + 16), offset, whence) != -1;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::Close  (binary VA: 0xcc07d0)
// Original: glf::io2::FilePosix::Close
// ----------------------------------------------------------------------------
int glf::io2::FilePosix::Close(glf::io2::FilePosix::Self *self)
{
  int result;
  bool v2;
  typedef int _g4_t_v3;
  typedef void (*_g4_t_v4)(int, uint8_t *, uint32_t);
  typedef uint8_t _g4_t_v5[4];
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  result = G4_VCALL<int>(self, 84);
  if ( (uint8_t)result != 0 )
  {
    glf::io2::File::Close(self);
    if ( (uint8_t)glf::io2::FilePosix::IsOpenAndUsable(self) != 0 )
      close(*((uint32_t *)self + 16));
    glf::io2::File::UnregisterFile(self);
    v2 = *((uint8_t *)self + 28) == 0;
    *((uint32_t *)self + 16) = -1;
    *((uint32_t *)self + 2) = 0;
    if ( !v2 )
    {
      v3 = *((uint32_t *)self + 12);
      v4 = *(void (**)(int, uint8_t *, uint32_t))(*(uint32_t *)v3 + 32);
      g4_std::string::construct_copy(v5, (char *)self + 24);
      v6 = 0;
      glf::fs2::Path::Init((glf::fs2::Path::Self *)v5);
      v4(v3, v5, 0);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v5);
    }
    return (int)(uintptr_t)(g4_std::string::clear((char *)self + 24, 0, *(uint32_t *)(*((uint32_t *)self + 6) - 12), 0));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::Destroy  (binary VA: 0xcc08e0)
// Original: glf::io2::FilePosix::~FilePosix
// ----------------------------------------------------------------------------
void glf::io2::FilePosix::Destroy(glf::io2::FilePosix::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E588);
  glf::io2::FilePosix::Close(self);
  glf::io2::File::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::Destroy_eacc0930  (binary VA: 0xcc0930)
// Original: glf::io2::FilePosix::~FilePosix
// ----------------------------------------------------------------------------
void glf::io2::FilePosix::Destroy_eacc0930(glf::io2::FilePosix::Self *self)
{
  glf::io2::FilePosix::Destroy(self);
  glf::MemObject::opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::OpenFileDesc  (binary VA: 0xcc0970)
// Original: glf::io2::FilePosix::OpenFileDesc
// ----------------------------------------------------------------------------
int glf::io2::FilePosix::OpenFileDesc(int a1, char *file, char a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int oflag;
  char *Metrics;
  glf::fs2::FileSystem::Self *v9;
  char *v10;
  int v11;
  int v12;
  typedef glf::fs2::FileSystem::Self *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);

  LOBYTE(a1) = (a3 & 2) != 0;
  v3 = a1;
  if ( (a3 & 1) != 0 )
  {
    v4 = (a3 & 2) == 0 ? 1024 : 1090;
    v5 = (a3 & 2) == 0 ? 1536 : 1602;
    v6 = (a3 & 2) == 0 ? 512 : 578;
    oflag = (v3 << 31 >> 31) & 0x42;
  }
  else
  {
    v4 = (a3 & 2) == 0 ? 1024 : 1089;
    v5 = (a3 & 2) == 0 ? 1536 : 1601;
    v6 = (a3 & 2) == 0 ? 512 : 577;
    oflag = (v3 << 31 >> 31) & 0x41;
  }
  if ( (a3 & 8) != 0 )
  {
    v4 = v5;
    oflag = v6;
  }
  if ( (a3 & 4) != 0 )
    oflag = v4;
  glf::fs2::FileSystem::Get((glf::fs2::FileSystem::Self *)&v14);
  Metrics = glf::fs2::FileSystem::GetMetrics(v14);
  v9 = v14;
  v10 = Metrics;
  if ( v14 != nullptr )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)v14 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v9, 8);
      G4_VCALL<void>(v9, 16);
    }
    else
    {
      v11 = *((uint32_t *)v9 + 1);
      _mm_mfence();
      if ( v11 == 1 )
        G4_VCALL<void>(v9, 12);
    }
  }
  ++*((uint32_t *)v10 + 2);
  v12 = open(file, oflag, 420);
  if ( v12 == -1 )
  {
    if ( *(uint32_t *)__errno() == 24 )
      lsof();
  }
  else
  {
    ++*((uint32_t *)v10 + 3);
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::ReopenClosedTemporarily  (binary VA: 0xcc0b00)
// Original: glf::io2::FilePosix::ReopenClosedTemporarily
// ----------------------------------------------------------------------------
void glf::io2::FilePosix::ReopenClosedTemporarily(int a1, glf::io2::FilePosix::Self *self)
{
  if ( *((uint32_t *)self + 16) == -2 )
  {
    *((uint32_t *)self + 16) = glf::io2::FilePosix::OpenFileDesc(a1, *((char **)self + 6), *((uint32_t *)self + 2));
    G4_VCALL<void>(self, 20, *((uint32_t *)self + 13), *((uint32_t *)self + 14), 0);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::Open  (binary VA: 0xcc0b70)
// Original: glf::io2::FilePosix::Open
// ----------------------------------------------------------------------------
int glf::io2::FilePosix::Open(glf::io2::File::Self *a1, char *s, int a3)
{
  int v3;
  int v5;
  int v6;
  size_t v7;

  v3 = 0;
  if ( G4_VCALL<uint8_t>(a1, 84) == 0 )
  {
    glf::io2::File::RegisterFile(a1);
    v6 = glf::io2::FilePosix::OpenFileDesc(v5, s, a3);
    *((uint32_t *)a1 + 16) = v6;
    if ( v6 == -1 )
    {
      glf::io2::File::UnregisterFile(a1);
    }
    else
    {
      v3 = 1;
      *((uint32_t *)a1 + 2) = a3;
      v7 = strlen(s);
      g4_std_compat::string_assign((int)(uintptr_t)(a1) + 24, s, v7);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FilePosix::CheckLastError  (binary VA: 0xcc0c20)
// Original: glf::io2::FilePosix::CheckLastError
// ----------------------------------------------------------------------------
glf::io2::Device::Self * glf::io2::FilePosix::CheckLastError(glf::io2::FilePosix::Self *self, char *a2)
{
  int *PosixErrorCategory;
  int *v3;

  PosixErrorCategory = glf::fs2::GetPosixErrorCategory();
  v3 = (int *)__errno();
  return glf::io2::Device::SetError(self, *v3, (const glf::ErrorCategory::Self *)PosixErrorCategory, a2);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::File::GetAbsolutePath  (binary VA: 0xccd8a0)
// Original: glf::io2::File::GetAbsolutePath
// ----------------------------------------------------------------------------
glf::io2::File::Self * glf::io2::File::GetAbsolutePath(glf::io2::File::Self *self, const glf::fs2::Path::Self **a2)
{
  char *Filename;
  typedef uint8_t _g4_t_v4[4];
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  Filename = glf::io2::FileDevice::GetFilename((glf::io2::FileDevice::Self *)a2);
  g4_std::string::construct_copy(v4, Filename);
  v5 = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v4);
  glf::fs2::FileSystem::Canonical(self, a2[12], (glf::fs2::Path::Self *)v4);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::File::Close  (binary VA: 0xccd930)
// Original: glf::io2::File::Close
// ----------------------------------------------------------------------------
int glf::io2::File::Close(glf::io2::File::Self *self)
{
  return glf::io2::FileDevice::Close((glf::io2::FileDevice::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glf::io2::File::Destroy  (binary VA: 0xccd960)
// Original: glf::io2::File::~File
// ----------------------------------------------------------------------------
void glf::io2::File::Destroy(glf::io2::File::Self *self)
{
  volatile int32_t *v1;
  int v2;

  v1 = *((volatile int32_t **)self + 12);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E868);
  if ( v1 != nullptr )
  {
    if ( __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 8);
      G4_VCALL<void>(v1, 16);
    }
    else
    {
      v2 = *((uint32_t *)v1 + 1);
      _mm_mfence();
      if ( v2 == 1 )
        G4_VCALL<void>(v1, 12);
    }
  }
  glf::io2::FileDevice::Destroy((void **)self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::File::Destroy_eaccd9f0  (binary VA: 0xccd9f0)
// Original: glf::io2::File::~File
// ----------------------------------------------------------------------------
void glf::io2::File::Destroy_eaccd9f0(glf::io2::File::Self *self)
{
  glf::io2::File::Destroy(self);
  glf::MemObject::opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::File::Construct  (binary VA: 0xccda30)
// Original: glf::io2::File::File
// ----------------------------------------------------------------------------
int glf::io2::File::Construct(glf::io2::FileDevice::Self *a1, int *a2)
{
  int result;
  bool v3;

  glf::io2::FileDevice::Construct(a1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206E868);
  result = *a2;
  v3 = *a2 == 0;
  *((uint32_t *)a1 + 12) = *a2;
  if ( !v3 )
    __sync_add_and_fetch((volatile int32_t *)(result + 4), 1u);
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 14) = 0;
  *((uint8_t *)a1 + 60) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::File::RegisterFile  (binary VA: 0xccda90)
// Original: glf::io2::File::RegisterFile
// ----------------------------------------------------------------------------
int glf::io2::File::RegisterFile(glf::io2::File::Self *self)
{
  glf::io2::FileMgr::Self *v1;
  glf::io2::FileMgr::Self *v3;

  v1 = (glf::io2::FileMgr::Self *)glf::io2::FileMgr::Get(v3);
  return glf::io2::FileMgr::RegisterFile(v1, self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::File::UnregisterFile  (binary VA: 0xccdac0)
// Original: glf::io2::File::UnregisterFile
// ----------------------------------------------------------------------------
int glf::io2::File::UnregisterFile(glf::io2::File::Self *self)
{
  glf::io2::FileMgr::Self *v1;
  glf::io2::FileMgr::Self *v3;

  v1 = (glf::io2::FileMgr::Self *)glf::io2::FileMgr::Get(v3);
  return glf::io2::FileMgr::UnregisterFile(v1, self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::File::Awaken  (binary VA: 0xccdaf0)
// Original: glf::io2::File::Awaken
// ----------------------------------------------------------------------------
int glf::io2::File::Awaken(glf::io2::File::Self *self)
{
  glf::io2::FileMgr::Self *v1;
  glf::io2::FileMgr::Self *v3;

  v1 = (glf::io2::FileMgr::Self *)glf::io2::FileMgr::Get(v3);
  return glf::io2::FileMgr::Awaken(v1, self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::File::PreventSleep  (binary VA: 0xccdb20)
// Original: glf::io2::File::PreventSleep
// ----------------------------------------------------------------------------
glf::io2::File::Self * glf::io2::File::PreventSleep(glf::io2::File::Self *self, bool a2)
{
  *((uint8_t *)self + 60) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::File::AllowSleep  (binary VA: 0xccdb30)
// Original: glf::io2::File::AllowSleep
// ----------------------------------------------------------------------------
int glf::io2::File::AllowSleep(glf::io2::File::Self *self)
{
  return *((uint8_t *)self + 60);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::Construct  (binary VA: 0xccdb40)
// Original: glf::io2::FileMgr::FileMgr
// ----------------------------------------------------------------------------
pthread_mutex_t ** glf::io2::FileMgr::Construct(pthread_mutex_t **self)
{
  glf::Mutex::Construct(self, 1);
  *(self + 5) = (pthread_mutex_t *)&dword_14;
  *(self + 1) = (pthread_mutex_t *)(self + 1);
  *(self + 2) = (pthread_mutex_t *)(self + 1);
  *(self + 6) = nullptr;
  *(self + 3) = (pthread_mutex_t *)(self + 3);
  *(self + 4) = (pthread_mutex_t *)(self + 3);
  return self + 3;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::Get  (binary VA: 0xccdba0)
// Original: glf::io2::FileMgr::Get
// ----------------------------------------------------------------------------
void * glf::io2::FileMgr::Get()
{
  if ( byte_20DF750 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DF750) != 0 )
  {
    glf::io2::FileMgr::Construct((pthread_mutex_t **)&unk_20DF758);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DF750);
    __cxa_atexit((void (*)(void *))glf::io2::FileMgr::Destroy, &unk_20DF758, &unk_20D1280);
  }
  return &unk_20DF758;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::GetMaxOpenedFiles  (binary VA: 0xccdc20)
// Original: glf::io2::FileMgr::GetMaxOpenedFiles
// ----------------------------------------------------------------------------
int glf::io2::FileMgr::GetMaxOpenedFiles(glf::io2::FileMgr::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::GetOpenFiles  (binary VA: 0xccdc30)
// Original: glf::io2::FileMgr::GetOpenFiles
// ----------------------------------------------------------------------------
int glf::io2::FileMgr::GetOpenFiles(glf::io2::FileMgr::Self *self)
{
  int v1;
  glf::io2::FileMgr::Self *i;

  v1 = 0;
  for ( i = *((glf::io2::FileMgr::Self **)self + 1); (glf::io2::FileMgr::Self *)((char *)self + 4) != i; ++v1 )
    i = *(glf::io2::FileMgr::Self **)i;
  return v1 + *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::SubOpenFiles  (binary VA: 0xccdc60)
// Original: glf::io2::FileMgr::SubOpenFiles
// ----------------------------------------------------------------------------
glf::io2::FileMgr::Self * glf::io2::FileMgr::SubOpenFiles(glf::io2::FileMgr::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 6) -= a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::UnregisterFile  (binary VA: 0xccdc70)
// Original: glf::io2::FileMgr::UnregisterFile
// ----------------------------------------------------------------------------
int glf::io2::FileMgr::UnregisterFile(pthread_mutex_t **self, glf::io2::File::Self *a2)
{
  glf::io2::File::Self **i;

  glf::Mutex::Lock(self);
  if ( G4_VCALL<uint8_t>(a2, 116) == 0 )
  {
    for ( i = (glf::io2::File::Self **)*(self + 1); self + 1 != (pthread_mutex_t **)i; i = (glf::io2::File::Self **)*i )
    {
      if ( i[2] == a2 )
        break;
    }
LABEL_9:
    sub_1901940(i);
    glf::Free((glf::Self *)i);
    return glf::Mutex::Unlock(self);
  }
  i = (glf::io2::File::Self **)*(self + 3);
  if ( i != (glf::io2::File::Self **)(self + 3) )
  {
    while ( i[2] != a2 )
    {
      i = (glf::io2::File::Self **)*i;
      if ( self + 3 == (pthread_mutex_t **)i )
        return glf::Mutex::Unlock(self);
    }
    goto LABEL_9;
  }
  return glf::Mutex::Unlock(self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::Trim  (binary VA: 0xccdd00)
// Original: glf::io2::FileMgr::Trim
// ----------------------------------------------------------------------------
int glf::io2::FileMgr::Trim(pthread_mutex_t **self)
{
  int v1;
  char *v2;
  char *v3;
  char *v4;
  char *v5;
  int v6;
  char *v7;
  uint32_t *v9;
  glf::Self *v10;
  void *v11;
  glf::Self *v12;
  glf::Self *v13;
  char *v14;

  glf::Mutex::Lock(self);
  v1 = (int)(uintptr_t)(*(self + 6));
  v2 = (char *)(self + 1);
  v3 = (char *)*(self + 5) - v1;
  if ( (int)(uintptr_t)(*(self + 5)) < v1 )
    v3 = nullptr;
  v4 = (char *)(self + 1);
  v14 = v3;
  while ( 1 )
  {
    v5 = (char *)*(self + 1);
    v6 = 0;
    if ( v2 != v5 )
    {
      v7 = (char *)*(self + 1);
      do
      {
        v7 = *(char **)v7;
        ++v6;
      }
      while ( v2 != v7 );
    }
    if ( v6 <= (int)(uintptr_t)(v14) || v5 == v4 )
      break;
    if ( (uint8_t)glf::io2::File::AllowSleep(*(glf::io2::File::Self **)(*((uint32_t *)v4 + 1) + 8)) != 0
      && (*(uint8_t (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)v4 + 1) + 8) + 124))(*(uint32_t *)(*((uint32_t *)v4 + 1) + 8)) != 0 )
    {
      v11 = *(self + 3);
      v12 = *((glf::Self **)v4 + 1);
      v9 = (uint32_t *)(glf::Alloc(0xCu));
      if ( v9 != (uint32_t *)-8 )
        v9[2] = *((uint32_t *)v12 + 2);
      sub_1901920(v9, v11);
      v10 = *((glf::Self **)v4 + 1);
      v4 = *(char **)v10;
      v13 = v10;
      sub_1901940(v10);
      glf::Free(v13);
    }
    else
    {
      v4 = *((char **)v4 + 1);
    }
  }
  return glf::Mutex::Unlock(self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::ChangeOpenFiles  (binary VA: 0xccde10)
// Original: glf::io2::FileMgr::ChangeOpenFiles
// ----------------------------------------------------------------------------
int glf::io2::FileMgr::ChangeOpenFiles(glf::io2::FileMgr::Self *self, int a2)
{
  *((uint32_t *)self + 6) += a2;
  return glf::io2::FileMgr::Trim((pthread_mutex_t **)self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::AddOpenFiles  (binary VA: 0xccde40)
// Original: glf::io2::FileMgr::AddOpenFiles
// ----------------------------------------------------------------------------
int glf::io2::FileMgr::AddOpenFiles(glf::io2::FileMgr::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 6) += a2;
  return glf::io2::FileMgr::Trim((pthread_mutex_t **)self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::SetMaxOpenFiles  (binary VA: 0xccde70)
// Original: glf::io2::FileMgr::SetMaxOpenFiles
// ----------------------------------------------------------------------------
int glf::io2::FileMgr::SetMaxOpenFiles(glf::io2::FileMgr::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 5) = a2;
  return glf::io2::FileMgr::Trim((pthread_mutex_t **)self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::Destroy  (binary VA: 0xccdea0)
// Original: glf::io2::FileMgr::~FileMgr
// ----------------------------------------------------------------------------
void glf::io2::FileMgr::Destroy(glf::io2::FileMgr::Self *self)
{
  glf::Self *v1;
  glf::io2::FileMgr::Self *v2;
  glf::Self *v3;
  glf::io2::FileMgr::Self *v4;

  *((uint32_t *)self + 5) = 0;
  glf::io2::FileMgr::Trim((pthread_mutex_t **)self);
  v1 = *((glf::Self **)self + 3);
  if ( v1 != (glf::Self *)(uintptr_t)((glf::io2::FileMgr::Self *)((char *)self + 12)) )
  {
    while ( 1 )
    {
      v2 = *(glf::io2::FileMgr::Self **)v1;
      glf::Free(v1);
      if ( v2 == (glf::io2::FileMgr::Self *)((char *)self + 12) )
        break;
      v1 = (glf::Self *)(v2);
    }
  }
  v3 = *((glf::Self **)self + 1);
  if ( v3 != (glf::Self *)(uintptr_t)((glf::io2::FileMgr::Self *)((char *)self + 4)) )
  {
    while ( 1 )
    {
      v4 = *(glf::io2::FileMgr::Self **)v3;
      glf::Free(v3);
      if ( v4 == (glf::io2::FileMgr::Self *)((char *)self + 4) )
        break;
      v3 = (glf::Self *)(v4);
    }
  }
  glf::Mutex::Destroy((pthread_mutex_t **)self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::Awaken  (binary VA: 0xccdf20)
// Original: glf::io2::FileMgr::Awaken
// ----------------------------------------------------------------------------
int glf::io2::FileMgr::Awaken(pthread_mutex_t **self, glf::io2::File::Self *a2)
{
  glf::io2::File::Self **i;
  int v3;
  uint32_t *v4;
  glf::io2::File::Self **j;
  int v7;
  uint32_t *v8;

  glf::Mutex::Lock(self);
  if ( G4_VCALL<uint8_t>(a2, 116) != 0 )
  {
    for ( i = (glf::io2::File::Self **)*(self + 3); self + 3 != (pthread_mutex_t **)i; i = (glf::io2::File::Self **)*i )
    {
      if ( i[2] == a2 )
        break;
    }
    sub_1901940(i);
    glf::Free((glf::Self *)i);
    v3 = (int)(uintptr_t)(*(self + 1));
    v4 = (uint32_t *)(glf::Alloc(0xCu));
    if ( v4 != (uint32_t *)-8 )
      v4[2] = (uint32_t)(uintptr_t)(a2);
    sub_1901920(v4, v3);
    glf::io2::FileMgr::Trim(self);
    G4_VCALL<void>(a2, 128);
  }
  else
  {
    for ( j = (glf::io2::File::Self **)*(self + 1); self + 1 != (pthread_mutex_t **)j; j = (glf::io2::File::Self **)*j )
    {
      if ( j[2] == a2 )
        break;
    }
    sub_1901940(j);
    glf::Free((glf::Self *)j);
    v7 = (int)(uintptr_t)(*(self + 1));
    v8 = (uint32_t *)(glf::Alloc(0xCu));
    if ( v8 != (uint32_t *)-8 )
      v8[2] = (uint32_t)(uintptr_t)(a2);
    sub_1901920(v8, v7);
  }
  return glf::Mutex::Unlock(self);
}

// ----------------------------------------------------------------------------
// Function: glf::io2::FileMgr::RegisterFile  (binary VA: 0xcce020)
// Original: glf::io2::FileMgr::RegisterFile
// ----------------------------------------------------------------------------
int glf::io2::FileMgr::RegisterFile(pthread_mutex_t **self, glf::io2::File::Self *a2)
{
  glf::io2::File::Self **v2;
  glf::io2::File::Self **v3;
  glf::io2::File::Self **v5;
  uint32_t *v6;

  glf::Mutex::Lock(self);
  v2 = (glf::io2::File::Self **)*(self + 1);
  if ( v2 != (glf::io2::File::Self **)(self + 1) )
  {
    v3 = (glf::io2::File::Self **)*(self + 1);
    if ( v2[2] == a2 )
      return glf::Mutex::Unlock(self);
    while ( 1 )
    {
      v3 = (glf::io2::File::Self **)*v3;
      if ( self + 1 == (pthread_mutex_t **)v3 )
        break;
      if ( v3[2] == a2 )
        return glf::Mutex::Unlock(self);
    }
  }
  v5 = (glf::io2::File::Self **)*(self + 3);
  if ( v5 != (glf::io2::File::Self **)(self + 3) )
  {
    while ( v5[2] != a2 )
    {
      v5 = (glf::io2::File::Self **)*v5;
      if ( self + 3 == (pthread_mutex_t **)v5 )
        goto LABEL_9;
    }
    return glf::Mutex::Unlock(self);
  }
LABEL_9:
  v6 = (uint32_t *)(glf::Alloc(0xCu));
  if ( v6 != (uint32_t *)-8 )
    v6[2] = (uint32_t)(uintptr_t)(a2);
  sub_1901920(v6, v2);
  glf::io2::FileMgr::Trim(self);
  return glf::Mutex::Unlock(self);
}


