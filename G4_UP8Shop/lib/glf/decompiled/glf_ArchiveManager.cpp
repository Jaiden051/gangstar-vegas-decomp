#include "Core/Utils/DecompTypes.h"
#include "glf_ArchiveManager.h"

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_ArchiveManager.cpp
// Library: glf | Module: glf_ArchiveManager
// Binary Address Span: 0xcb6190 .. 0xcb6c90 (13 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xcb6190 (size: 50 bytes)
// Symbol:    _ZN3glf14ArchiveManagerC1Ev
// Demangled: glf::ArchiveManager::ArchiveManager(void)
// ============================================================================
// Alternative name is '_ZN3glf14ArchiveManagerC2Ev'
struct glf::ArchiveManager::Self *glf::ArchiveManager::ArchiveManager(glf::ArchiveManager::Self *self)
{
  *(uint8_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::CleanArchives  (binary VA: 0xcb61d0)
// Original: glf::ArchiveManager::CleanArchives
// ----------------------------------------------------------------------------
void glf::ArchiveManager::CleanArchives(glf::ArchiveManager::Self *self)
{
  uint32_t *v1;
  int v2;

  v1 = *((uint32_t **)self + 1);
  if ( v1 != *((uint32_t **)self + 2) )
  {
    do
    {
      if ( *v1 != 0 )
        G4_VCALL<void>(*v1, 4);
      v2 = v1[1];
      if ( v2 != 0 )
        (*(void (**)(uint32_t))(*(uint32_t *)v2 + 4))(v1[1]);
      v1 += 2;
    }
    while ( v1 != *((uint32_t **)self + 2) );
    v1 = *((uint32_t **)self + 1);
  }
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v1);
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::Destroy  (binary VA: 0xcb6220)
// Original: glf::ArchiveManager::~ArchiveManager
// ----------------------------------------------------------------------------
void glf::ArchiveManager::Destroy(void **self)
{
  glf::ArchiveManager::CleanArchives((glf::ArchiveManager::Self *)self);
  if ( *(self + 4) != nullptr )
    opDelete(*(self + 4));
  if ( *(self + 1) != nullptr )
    opDelete(*(self + 1));
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::LoadArchive  (binary VA: 0xcb6270)
// Original: glf::ArchiveManager::LoadArchive
// ----------------------------------------------------------------------------
int glf::ArchiveManager::LoadArchive(glf::ArchiveManager::Self *self, const char *a2, const char *a3, int a4)
{
  if (self == nullptr || a2 == nullptr)
    return 0;

  glf::FileStreamImpl::Self *fs = (glf::FileStreamImpl::Self *)(uintptr_t)opNew(0x34u);
  glf::FileStreamImpl::Construct(fs);
  *(uint32_t *)fs = (uint32_t)(uintptr_t)&off_2048D28;

  if ((uint8_t)glf::FileStreamImpl::Open((int)(uintptr_t)fs, (char *)a2, (char *)(uintptr_t)(a4 | 1)) == 0)
  {
    G4_VCALL<void>(fs, 4);
    return 0;
  }

  bool isVox = (uint8_t)glf::core::FromVoxArchive::isVoxArchiveFormat((int)(uintptr_t)fs) != 0;
  G4_VCALL<void>(fs, 60, 0, 0);

  uint32_t archiveObj = 0;
  uint32_t streamObj = 0;

  if (!isVox)
  {
    glf::core::CZipReader::Self *zip = (glf::core::CZipReader::Self *)(uintptr_t)opNew(0x28u);
    glf::core::CZipReader::Construct(zip, (glf::IOStream::Self *)fs, a2, false, false, (a3 == nullptr));
    if (a3 != nullptr)
    {
      alignas(8) uint8_t hdrFs[0x40];
      memset(hdrFs, 0, sizeof(hdrFs));
      glf::FileStreamImpl::Construct((glf::FileStreamImpl::Self *)hdrFs);
      *(uint32_t *)hdrFs = (uint32_t)(uintptr_t)&off_2048D28;
      if ((uint8_t)glf::FileStreamImpl::Open((int)(uintptr_t)hdrFs, (char *)a3, (char *)(uintptr_t)0x3001) != 0)
      {
        alignas(8) uint8_t memStream[0x30];
        memset(memStream, 0, sizeof(memStream));
        glf::MemoryStream::Construct((glf::IOStream::Self *)memStream, (int)(uintptr_t)hdrFs);
        glf::core::CZipReader::ImportHeader(zip, (glf::IOStream::Self *)memStream);
        glf::MemoryStream::Destroy((void **)memStream);
      }
      *(uint32_t *)hdrFs = (uint32_t)(uintptr_t)&off_2048D28;
      glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)hdrFs);
    }
    archiveObj = (uint32_t)(uintptr_t)zip;
    streamObj = (uint32_t)(uintptr_t)fs;
  }
  else
  {
    glf::core::FromVoxArchive::Self *voxArch = (glf::core::FromVoxArchive::Self *)(uintptr_t)opNew(0x44u);
    glf::core::FromVoxArchive::Construct(voxArch, (int)(uintptr_t)fs, (char *)a2, 1, 0, 0);
    G4_VCALL<void>(fs, 8);
    G4_VCALL<void>(fs, 4);
    if ((uint8_t)G4_VCALL<int>(voxArch, 16) == 0)
    {
      G4_VCALL<void>(voxArch, 4);
      return 0;
    }
    archiveObj = (uint32_t)(uintptr_t)voxArch;
    streamObj = 0;
  }

  uint32_t *vecBegin = *((uint32_t **)self + 1);
  uint32_t *vecEnd = *((uint32_t **)self + 2);
  uint32_t *vecCap = *((uint32_t **)self + 3);
  if (vecEnd == vecCap)
  {
    size_t oldCount = (size_t)(vecEnd - vecBegin) / 2u;
    size_t newCount = (oldCount == 0) ? 1u : (oldCount * 2u);
    uint32_t *newBuf = (uint32_t *)(uintptr_t)opNew((unsigned int)(newCount * 8u));
    if (oldCount > 0 && vecBegin != nullptr)
      memcpy(newBuf, vecBegin, oldCount * 8u);
    newBuf[oldCount * 2u] = archiveObj;
    newBuf[oldCount * 2u + 1u] = streamObj;
    if (vecBegin != nullptr)
      opDelete(vecBegin);
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)newBuf;
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(newBuf + (oldCount + 1u) * 2u);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(newBuf + newCount * 2u);
  }
  else
  {
    vecEnd[0] = archiveObj;
    vecEnd[1] = streamObj;
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(vecEnd + 2);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::CloseArchive  (binary VA: 0xcb6600)
// Original: glf::ArchiveManager::CloseArchive
// ----------------------------------------------------------------------------
void glf::ArchiveManager::CloseArchive(glf::ArchiveManager::Self *self, char *s2)
{
  uint32_t *v2;
  const char *s1;
  int v4;

  v2 = *((uint32_t **)self + 1);
  if ( v2 != *((uint32_t **)self + 2) )
  {
    while ( 1 )
    {
      s1 = (const char *)G4_VCALL<int>(*v2, 12);
      if ( strcmp(s1, s2) == 0 )
        break;
      v2 += 2;
      if ( v2 == *((uint32_t **)self + 2) )
        return;
    }
    if ( *v2 != 0 )
      G4_VCALL<void>(*v2, 4);
    v4 = v2[1];
    if ( v4 != 0 )
      (*(void (**)(uint32_t))(*(uint32_t *)v4 + 4))(v2[1]);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::CleanPaths  (binary VA: 0xcb6670)
// Original: glf::ArchiveManager::CleanPaths
// ----------------------------------------------------------------------------
int glf::ArchiveManager::CleanPaths(glf::ArchiveManager::Self *self, char *s, char *dest, int a4)
{
  int result;
  int v5;
  const char *src;
  int v7;
  char v8;
  int v9;

  result = strlen(s);
  v5 = result;
  if ( a4 > 0 )
  {
    if ( result >= a4 )
    {
      *dest = 0;
    }
    else if ( result <= 0 )
    {
      return (int)(uintptr_t)(strcpy(dest, s));
    }
    else
    {
      src = s;
      v7 = 0;
      while ( 1 )
      {
        v8 = *src;
        if ( *src != 92 && v8 != 47 && v8 != 32 && v8 != 46 )
          break;
        ++v7;
        ++src;
        if ( v5 == v7 )
          return (int)(uintptr_t)(strcpy(dest, &s[v5]));
      }
      v9 = v5 - v7;
      result = (int)(uintptr_t)(strcpy(dest, src));
      if ( v9 > 0 )
      {
        for ( result = 0; result != v9; ++result )
        {
          if ( dest[result] == 92 )
            dest[result] = 47;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::GetCityArchiveForFile  (binary VA: 0xcb6740)
// Original: glf::ArchiveManager::GetCityArchiveForFile
// ----------------------------------------------------------------------------
int glf::ArchiveManager::GetCityArchiveForFile(glf::ArchiveManager::Self *self, char *a2, int *a3, int *a4, bool *a5, int *a6, const char **a7)
{
  int v7;
  int *v8;
  int *v9;
  int v10;
  const char *v12;
  char dest[1052];

  v7 = 0;
  if ( *((uint32_t *)self + 5) == *((uint32_t *)self + 4) )
    return v7;
  glf::ArchiveManager::CleanPaths(self, a2, dest, 1024);
  v8 = *((int **)self + 4);
  v9 = *((int **)self + 5);
  if ( v9 == v8 )
    return v7;
  while ( 1 )
  {
    v10 = *v8;
    if ( *v8 != 0 )
      break;
LABEL_6:
    v8 += 2;
    if ( v8 == v9 )
      return 0;
  }
  if ( G4_VCALL<uint8_t>(v10, 8, dest, a3, a4, a5, a6) == 0 )
  {
    v9 = *((int **)self + 5);
    goto LABEL_6;
  }
  v12 = (const char *)G4_VCALL<int>(v10, 12);
  v7 = 1;
  *a7 = v12;
  return v7;
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::DoesCityFileExist  (binary VA: 0xcb6830)
// Original: glf::ArchiveManager::DoesCityFileExist
// ----------------------------------------------------------------------------
int glf::ArchiveManager::DoesCityFileExist(glf::ArchiveManager::Self *self, char *a2)
{
  typedef bool _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef char *_g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (15u + sizeof(_g4_t_v3)) > _g4_s0 ? (15u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v5)) > _g4_s2 ? (20u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v6)) > _g4_s3 ? (24u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v7)) > _g4_s4 ? (28u + sizeof(_g4_t_v7)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 15u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  return glf::ArchiveManager::GetCityArchiveForFile(self, a2, &v4, &v5, &v3, v7, (const char **)&v6);
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::GetArchiveForFile  (binary VA: 0xcb6890)
// Original: glf::ArchiveManager::GetArchiveForFile
// ----------------------------------------------------------------------------
int glf::ArchiveManager::GetArchiveForFile(glf::ArchiveManager::Self *self, char *a2, int *a3, int *a4, bool *a5, int *a6, const char **a7)
{
  int result;
  int *v8;
  int *i;
  int v10;
  char *SDFolderPathPointer;
  void *v12;
  int *v13;
  int *v14;
  int v15;
  void *v16;
  void *v17;
  void *v18;
  typedef uint8_t _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[4];
  typedef int _g4_t_v22[3];
  typedef int _g4_t_v23;
  typedef char _g4_t_dest[1036];
  enum : size_t {
    _g4_s0 = 1168u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v21)) > _g4_s2 ? (24u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v22)) > _g4_s3 ? (40u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v23)) > _g4_s4 ? (52u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_dest)) > _g4_s5 ? (56u + sizeof(_g4_t_dest)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 56u);

  result = 0;
  if ( *((uint32_t *)self + 2) == *((uint32_t *)self + 1) )
    return result;
  glf::ArchiveManager::CleanPaths(self, a2, dest, 1024);
  v8 = *((int **)self + 1);
  for ( i = *((int **)self + 2); v8 != i; v8 += 2 )
  {
    v10 = *v8;
    if ( *v8 != 0 )
    {
      if ( G4_VCALL<uint8_t>(v10, 8, dest, a3, a4, a5, a6) != 0 )
      {
        *a7 = (const char *)G4_VCALL<int>(v10, 12);
        return 1;
      }
      i = *((int **)self + 2);
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), a2, (int)(uintptr_t)(&v20));
  SDFolderPathPointer = GetSDFolderPathPointer();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), SDFolderPathPointer, (int)(uintptr_t)(&v20) + 1);
  g4_std::string::append((int)(uintptr_t)(v22), "/", 1u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 2);
  sub_8719D0((int)(uintptr_t)(v21), v22, (void **)&v23);
  v12 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  GetSDFolderPathPointer();
  v13 = *((int **)self + 1);
  v14 = *((int **)self + 2);
  if ( v14 == v13 )
  {
LABEL_13:
    v16 = (void *)(v22[0] - 12);
    if ( (uint32_t *)(v22[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = (void *)(v21[0] - 12);
    if ( (uint32_t *)(v21[0] - 12) == dword_213B808 )
      return 0;
    result = 0;
    if ( __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
      goto LABEL_22;
    return result;
  }
  while ( 1 )
  {
    v15 = *v13;
    if ( *v13 != 0 )
      break;
LABEL_12:
    v13 += 2;
    if ( v13 == v14 )
      goto LABEL_13;
  }
  if ( G4_VCALL<uint8_t>(v15, 8, v21[0], a3, a4, a5, a6) == 0 )
  {
    v14 = *((int **)self + 2);
    goto LABEL_12;
  }
  *a7 = (const char *)G4_VCALL<int>(v15, 12);
  v18 = (void *)(v22[0] - 12);
  if ( (uint32_t *)(v22[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v17 = (void *)(v21[0] - 12);
  if ( (uint32_t *)(v21[0] - 12) == dword_213B808 )
    return 1;
  result = 1;
  if ( __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
  {
LABEL_22:
    v19 = result;
    g4_std::string::Rep::M_destroy(v17);
    return v19;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::DoesFileExist  (binary VA: 0xcb6b70)
// Original: glf::ArchiveManager::DoesFileExist
// ----------------------------------------------------------------------------
int glf::ArchiveManager::DoesFileExist(glf::ArchiveManager::Self *self, char *a2)
{
  typedef bool _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef char *_g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (15u + sizeof(_g4_t_v3)) > _g4_s0 ? (15u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v5)) > _g4_s2 ? (20u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v6)) > _g4_s3 ? (24u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v7)) > _g4_s4 ? (28u + sizeof(_g4_t_v7)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 15u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  return glf::ArchiveManager::GetArchiveForFile(self, a2, &v4, &v5, &v3, v7, (const char **)&v6);
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::IsUsingArchive  (binary VA: 0xcb6bd0)
// Original: glf::ArchiveManager::IsUsingArchive
// ----------------------------------------------------------------------------
bool glf::ArchiveManager::IsUsingArchive(glf::ArchiveManager::Self *self, int16_t a2)
{
  bool result;

  if ( *(uint8_t *)self != 0 )
    return (a2 & 0x100) == 0;
  result = false;
  if ( (a2 & 0x80u) != 0 )
    return (a2 & 0x100) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::LoadCityArchive  (binary VA: 0xcb6bf0)
// Original: glf::ArchiveManager::LoadCityArchive
// ----------------------------------------------------------------------------
int glf::ArchiveManager::LoadCityArchive(uint32_t *a1, char *a2, int a3, int a4)
{
  char Archive;
  int v5;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;

  Archive = glf::ArchiveManager::LoadArchive((int)(uintptr_t)(a1), a2, a3, a4);
  v5 = 0;
  if ( Archive == 0 )
    return v5;
  v7 = (uint32_t *)a1[5];
  v8 = a1[2];
  if ( v7 == (uint32_t *)a1[6] )
  {
    g4_std_compat::vector_insert_aux(a1 + 4, v7, v8 - 8);
    return 1;
  }
  v9 = 0;
  if ( v7 != nullptr )
  {
    v10 = *(uint32_t *)(v8 - 8);
    v7[1] = *(uint32_t *)(v8 - 4);
    *v7 = v10;
    v9 = a1[5];
  }
  a1[5] = v9 + 8;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::ArchiveManager::GetFilesInDirectory  (binary VA: 0xcb6c90)
// Original: glf::ArchiveManager::GetFilesInDirectory
// ----------------------------------------------------------------------------
int glf::ArchiveManager::GetFilesInDirectory(glf::ArchiveManager::Self *self, char *a2, std::vector<std::string> *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  size_t v9;
  char *v10;
  uint32_t *v11;
  int v12;
  const void **v13;
  uint32_t *v14;
  int v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  const void *v21;
  size_t v22;
  const void *v23;
  int v24;
  int v25;
  typedef const void *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef const void *_g4_t_v31;
  typedef const void *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef const void **_g4_t_v37;
  typedef char *_g4_t_v38;
  typedef const void **_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef const void *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef const void **_g4_t_v44;
  typedef const void **_g4_t_v45;
  typedef int _g4_t_v46;
  typedef char _g4_t_dest[1036];
  enum : size_t {
    _g4_s0 = 1184u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v29)) > _g4_s3 ? (4u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v30)) > _g4_s4 ? (4u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v31)) > _g4_s5 ? (4u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v32)) > _g4_s6 ? (4u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v33)) > _g4_s7 ? (8u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v34)) > _g4_s8 ? (8u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v35)) > _g4_s9 ? (12u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v36)) > _g4_s10 ? (16u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v37)) > _g4_s11 ? (20u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v38)) > _g4_s12 ? (24u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v39)) > _g4_s13 ? (28u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v40)) > _g4_s14 ? (32u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v41)) > _g4_s15 ? (36u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v42)) > _g4_s16 ? (40u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v43)) > _g4_s17 ? (44u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v44)) > _g4_s18 ? (64u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v45)) > _g4_s19 ? (68u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v46)) > _g4_s20 ? (72u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_dest)) > _g4_s21 ? (80u + sizeof(_g4_t_dest)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 80u);

  v35 = 0;
  if ( *((uint32_t *)self + 2) == *((uint32_t *)self + 1) )
    return v35;
  glf::ArchiveManager::CleanPaths(self, a2, dest, 1024);
  v3 = *((uint32_t **)self + 2);
  v36 = *((uint32_t **)self + 1);
  if ( v36 == v3 )
    return v35;
  do
  {
    if ( *v36 == 0 )
      goto LABEL_23;
    v44 = nullptr;
    v45 = nullptr;
    v46 = 0;
    G4_VCALL<void>(*v36, 28, dest, &v44);
    v39 = v44;
    v37 = v45;
    if ( v44 == v45 )
      goto LABEL_20;
    do
    {
      v38 = *((char **)a3 + 1);
      v4 = *(uint32_t *)a3;
      v5 = (int)(uintptr_t)(&v38[-*(uint32_t *)a3]);
      v6 = v5 >> 4;
      v7 = v5 >> 2;
      v43 = v6;
      if ( v6 > 0 )
      {
        v8 = *(char **)a3;
        v41 = *v39;
        v9 = *((uint32_t *)*v39 - 3);
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *(uint32_t *)(*(uint32_t *)v8 - 12) == v9 )
            {
              v27 = v4;
              v12 = memcmp(*(const void **)v8, v41, v9);
              v4 = v27;
              if ( v12 == 0 )
                goto LABEL_13;
            }
            v10 = &v8[-v4];
            v42 = v8;
            v26 = *((const void **)v8 + 1);
            if ( *((uint32_t *)v26 - 3) == v9 )
            {
              v28 = v4;
              v33 = &v8[-v4];
              v16 = memcmp(v26, v41, v9);
              v4 = v28;
              v10 = v33;
              if ( v16 == 0 )
              {
                if ( v38 != v8 + 4 )
                  goto LABEL_14;
                goto LABEL_27;
              }
            }
            v8 += 8;
            v40 = *(uint32_t **)&v10[v4 + 8];
            if ( *(v40 - 3) != v9 )
              break;
            v29 = v4;
            v34 = v10;
            v19 = memcmp(v40, v41, v9);
            v4 = v29;
            if ( v19 == 0 )
              goto LABEL_13;
            v11 = *(uint32_t **)&v34[v29 + 12];
            v8 = v42 + 12;
            if ( *(v11 - 3) != v9 )
              goto LABEL_10;
LABEL_34:
            v30 = v4;
            v20 = memcmp(v11, v41, v9);
            v4 = v30;
            if ( v20 == 0 )
              goto LABEL_13;
            v8 = v42 + 16;
            if ( --v43 == 0 )
            {
LABEL_36:
              v7 = (v38 - v8) >> 2;
              goto LABEL_37;
            }
          }
          v11 = *(uint32_t **)&v10[v4 + 12];
          v8 = v42 + 12;
          if ( *(v11 - 3) == v9 )
            goto LABEL_34;
LABEL_10:
          v8 = v42 + 16;
          if ( --v43 == 0 )
            goto LABEL_36;
        }
      }
      v8 = *(char **)a3;
LABEL_37:
      if ( v7 == 2 )
      {
        v23 = *(const void **)v8;
        v21 = *v39;
        v22 = *((uint32_t *)*v39 - 3);
        if ( *(uint32_t *)(*(uint32_t *)v8 - 12) == v22 )
          goto LABEL_50;
        goto LABEL_48;
      }
      if ( v7 == 3 )
      {
        v21 = *v39;
        v22 = *((uint32_t *)*v39 - 3);
        if ( *(uint32_t *)(*(uint32_t *)v8 - 12) == v22 )
        {
          v32 = *v39;
          v25 = memcmp(*(const void **)v8, *v39, v22);
          v21 = v32;
          if ( v25 == 0 )
            goto LABEL_13;
        }
        v8 += 4;
        v23 = *(const void **)v8;
        if ( *(uint32_t *)(*(uint32_t *)v8 - 12) == v22 )
        {
LABEL_50:
          v31 = v21;
          v24 = memcmp(v23, v21, v22);
          v21 = v31;
          if ( v24 == 0 )
            goto LABEL_13;
        }
LABEL_48:
        v8 += 4;
        goto LABEL_42;
      }
      if ( v7 != 1 )
      {
        v8 = v38;
LABEL_13:
        if ( v38 != v8 )
          goto LABEL_14;
LABEL_27:
        v17 = v38;
        if ( v38 != *((char **)a3 + 2) )
          goto LABEL_28;
        goto LABEL_45;
      }
      v21 = *v39;
      v22 = *((uint32_t *)*v39 - 3);
LABEL_42:
      if ( *(uint32_t *)(*(uint32_t *)v8 - 12) != v22 )
        goto LABEL_27;
      if ( memcmp(*(const void **)v8, v21, v22) == 0 )
        goto LABEL_13;
      v17 = v38;
      if ( v38 != *((char **)a3 + 2) )
      {
LABEL_28:
        v18 = 0;
        if ( v17 != nullptr )
        {
          g4_std::string::construct_copy(v17, v39);
          v37 = v45;
          v18 = *((uint32_t *)a3 + 1);
        }
        *((uint32_t *)a3 + 1) = v18 + 4;
        goto LABEL_31;
      }
LABEL_45:
      g4_std::vector_string_86c307::M_insert_aux((int *)a3, v17, (int)(uintptr_t)(v39));
      v37 = v45;
LABEL_31:
      ++v35;
LABEL_14:
      ++v39;
    }
    while ( v39 != v37 );
    v39 = v44;
    if ( v44 != v37 )
    {
      v13 = v44;
      do
      {
        v14 = (uint32_t *)((char *)*v13 - 12);
        if ( v14 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)*v13 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v14);
        ++v13;
      }
      while ( v13 != v37 );
      v39 = v44;
    }
LABEL_20:
    if ( v39 != nullptr )
      opDelete(v39);
    v3 = *((uint32_t **)self + 2);
LABEL_23:
    v36 += 2;
  }
  while ( v36 != v3 );
  return v35;
}


