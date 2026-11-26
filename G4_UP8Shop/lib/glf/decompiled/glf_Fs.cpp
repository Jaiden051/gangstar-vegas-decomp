#include "Core/Utils/DecompTypes.h"
#include "glf_fs.h"

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::Construct  (binary VA: 0xcbd0f0)
// Original: glf::fs::DirHandle::DirHandle
// ----------------------------------------------------------------------------
glf::fs::DirHandle::Self * glf::fs::DirHandle::Construct(glf::fs::DirHandle::Self *self)
{
  glf::fs::DirHandle::Self *result;

  *((uint8_t *)self + 44) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 45) = 0;
  result = (glf::fs::DirHandle::Self *)sub_4EBD10(0x18u, 1);
  *(uint32_t *)result = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)result + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)result + 1) = 0;
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 12) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::Filter  (binary VA: 0xcbd170)
// Original: glf::fs::DirHandle::_Filter
// ----------------------------------------------------------------------------
int glf::fs::DirHandle::Filter(glf::Self **self)
{
  glf::fs::DirHandle::Self *v1;
  struct dirent *v2;
  char *v3;
  void *v4;
  void *v5;
  void *v6;
  size_t v7;
  __off_t st_size;
  glf::Self *v9;
  int v10;
  struct stat buf;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[4];
  typedef int _g4_t_v15[3];
  typedef int _g4_t_v16;
  typedef glf::Self ***_g4_t_v18;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v13)) > _g4_s1 ? (23u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v15)) > _g4_s3 ? (44u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v16)) > _g4_s4 ? (56u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (164u + sizeof(_g4_t_v18)) > _g4_s5 ? (164u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 23u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 164u);

  v18 = &self;
  v1 = (glf::fs::DirHandle::Self *)self;
  if ( (uint8_t)glf::IsValidDir(*self) != 0 )
    goto LABEL_7;
  while ( 1 )
  {
    v12 = *((uint32_t *)v1 + 15);
    v2 = readdir(*(DIR **)(v12 + 4));
    g4_std::string::clear((char *)v1 + 4, 0, *(uint32_t *)(*((uint32_t *)v1 + 1) - 12), 0);
    if ( v2 == nullptr )
      return 0;
    v3 = &v2->d_name[8];
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), v3, (int)(uintptr_t)(&v13) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), *(char **)(v12 + 8), (int)(uintptr_t)(&v13));
    glf::JoinPath(&v16, v14, v15);
    g4_std::string::assign_str((char *)v1 + 4, &v16);
    v4 = (void *)(v16 - 12);
    if ( (uint32_t *)(v16 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v15[0] - 12);
    if ( (uint32_t *)(v15[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    stat(*((const char **)v1 + 1), &buf);
    *((uint8_t *)v1 + 44) = (buf.st_mode & 0xF000) == 0x4000;
    v7 = strlen(v3);
    g4_std_compat::string_assign((int)(uintptr_t)(v1), v3, v7);
    st_size = buf.st_size;
    *(uint64_t *)((char *)v1 + 20) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_ctim.tv_sec), 0);
    *((uint32_t *)v1 + 10) = st_size;
    v9 = *(glf::Self **)v1;
    *(uint64_t *)((char *)v1 + 28) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_mtim.tv_sec), 0);
    if ( (uint8_t)glf::IsValidDir(v9) != 0 )
    {
LABEL_7:
      v10 = *((uint32_t *)v1 + 14);
      if ( *((uint8_t *)v1 + 44) != 0 )
      {
        if ( (v10 & 0x80u) != 0 )
        {
LABEL_9:
          if ( *((uint8_t *)v1 + 45) == 0 || (v10 & 0x200) != 0 )
            return 1;
        }
      }
      else if ( (v10 & 0x100) != 0 )
      {
        goto LABEL_9;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::FindNext  (binary VA: 0xcbd3f0)
// Original: glf::fs::DirHandle::FindNext
// ----------------------------------------------------------------------------
int glf::fs::DirHandle::FindNext(glf::fs::DirHandle::Self *self)
{
  glf::fs::DirHandle::Self *v1;
  struct dirent *v2;
  char *v3;
  void *v4;
  void *v5;
  void *v6;
  size_t v7;
  __off_t st_size;
  struct stat buf;
  typedef int _g4_t_v10;
  typedef char *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  typedef int _g4_t_v14[3];
  typedef int _g4_t_v15;
  typedef glf::fs::DirHandle::Self **_g4_t_v17;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (23u + sizeof(_g4_t_v12)) > _g4_s2 ? (23u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v14)) > _g4_s4 ? (44u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v15)) > _g4_s5 ? (56u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (164u + sizeof(_g4_t_v17)) > _g4_s6 ? (164u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 23u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 164u);

  v17 = &self;
  v1 = self;
  v11 = (char *)self + 4;
  while ( 1 )
  {
    v10 = *((uint32_t *)v1 + 15);
    v2 = readdir(*(DIR **)(v10 + 4));
    g4_std::string::clear(v11, 0, *(uint32_t *)(*((uint32_t *)v1 + 1) - 12), 0);
    if ( v2 == nullptr )
      break;
    v3 = &v2->d_name[8];
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), v3, (int)(uintptr_t)(&v12) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), *(char **)(v10 + 8), (int)(uintptr_t)(&v12));
    glf::JoinPath(&v15, v13, v14);
    g4_std::string::assign_str(v11, &v15);
    v4 = (void *)(v15 - 12);
    if ( (uint32_t *)(v15 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v13[0] - 12);
    if ( (uint32_t *)(v13[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    stat(*((const char **)v1 + 1), &buf);
    *((uint8_t *)v1 + 44) = (buf.st_mode & 0xF000) == 0x4000;
    v7 = strlen(v3);
    g4_std_compat::string_assign((int)(uintptr_t)(v1), v3, v7);
    st_size = buf.st_size;
    *(uint64_t *)((char *)v1 + 20) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_ctim.tv_sec), 0);
    *((uint32_t *)v1 + 10) = st_size;
    *(uint64_t *)((char *)v1 + 28) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_mtim.tv_sec), 0);
    if ( (uint8_t)glf::fs::DirHandle::Filter((glf::Self **)v1) != 0 )
      return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::Close  (binary VA: 0xcbd640)
// Original: glf::fs::DirHandle::Close
// ----------------------------------------------------------------------------
int glf::fs::DirHandle::Close(glf::fs::DirHandle::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 15);
  result = *(uint32_t *)(v1 + 4);
  if ( result != 0 )
  {
    result = closedir(*(DIR **)(v1 + 4));
    *(uint32_t *)(v1 + 4) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::Destroy  (binary VA: 0xcbd690)
// Original: glf::fs::DirHandle::~DirHandle
// ----------------------------------------------------------------------------
void glf::fs::DirHandle::Destroy(glf::fs::DirHandle::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint32_t *v5;

  glf::fs::DirHandle::Close(self);
  v1 = *((uint32_t *)self + 15);
  if ( v1 != 0 )
  {
    if ( *(uint32_t *)(v1 + 4) != 0 )
    {
      closedir(*(DIR **)(v1 + 4));
      *(uint32_t *)(v1 + 4) = 0;
    }
    v2 = *(uint32_t *)(v1 + 8);
    if ( (uint32_t *)(v2 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v2 - 12));
    }
    opDelete((void *)v1);
  }
  v3 = *((uint32_t *)self + 13);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::GetLastError  (binary VA: 0xcbd7b0)
// Original: glf::fs::DirHandle::GetLastError
// ----------------------------------------------------------------------------
int glf::fs::DirHandle::GetLastError(glf::fs::DirHandle::Self *self)
{
  return *((uint32_t *)self + 12);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::GetFlag  (binary VA: 0xcbd7c0)
// Original: glf::fs::DirHandle::GetFlag
// ----------------------------------------------------------------------------
int glf::fs::DirHandle::GetFlag(glf::fs::DirHandle::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 15) + 12);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::MkDir  (binary VA: 0xcbd7d0)
// Original: glf::fs::MkDir
// ----------------------------------------------------------------------------
int glf::fs::MkDir(char *a1, char *a2)
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::MkDir(Globals + 64, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::RmDir  (binary VA: 0xcbd810)
// Original: glf::fs::RmDir
// ----------------------------------------------------------------------------
int glf::fs::RmDir(glf::fs::Self *self)
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::RmDir(Globals + 64, (char *)self, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_FF4)->st_info);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::GetInfo  (binary VA: 0xcbd850)
// Original: glf::fs::GetInfo
// ----------------------------------------------------------------------------
int glf::fs::GetInfo()
{
  glf::GetGlobals();
  return glf::Fs::GetInfo();
}

// ----------------------------------------------------------------------------
// Function: glf::fs::MountDrive  (binary VA: 0xcbd890)
// Original: glf::fs::MountDrive
// ----------------------------------------------------------------------------
int glf::fs::MountDrive(char *a1, char *a2, int a3)
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::MountDrive(Globals + 64, a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::ResolvePath  (binary VA: 0xcbd8d0)
// Original: glf::fs::ResolvePath
// ----------------------------------------------------------------------------
unsigned int glf::fs::ResolvePath(char *s, char *a2, glf::Self *a3, char *a4)
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::ResolvePath(Globals + 64, s, (unsigned int)(uintptr_t)(a2), a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::FindFirst  (binary VA: 0xcbd920)
// Original: glf::fs::DirHandle::FindFirst
// ----------------------------------------------------------------------------
int glf::fs::DirHandle::FindFirst(int a1, char *a2, char *a3)
{
  int v3;
  glf::Self *EphemeralAllocation;
  size_t v5;
  int v6;
  size_t v7;
  DIR *v8;
  uint8_t v9;
  void *v10;
  void *v11;
  void *v12;
  size_t v13;
  __off_t st_size;
  struct stat buf;
  typedef unsigned int _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef char *_g4_t_v19;
  typedef uint8_t _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef char *_g4_t_sa;
  typedef char *_g4_t_s;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26[4];
  typedef int _g4_t_v27[3];
  typedef int _g4_t_v28;
  typedef int *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v18)) > _g4_s2 ? (32u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v19)) > _g4_s3 ? (32u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v20)) > _g4_s4 ? (36u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v21)) > _g4_s5 ? (44u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v22)) > _g4_s6 ? (44u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_sa)) > _g4_s7 ? (48u + sizeof(_g4_t_sa)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_s)) > _g4_s8 ? (48u + sizeof(_g4_t_s)) : _g4_s8,
    _g4_s10 = (63u + sizeof(_g4_t_v25)) > _g4_s9 ? (63u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v26)) > _g4_s10 ? (68u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v27)) > _g4_s11 ? (84u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v28)) > _g4_s12 ? (96u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (204u + sizeof(_g4_t_v30)) > _g4_s13 ? (204u + sizeof(_g4_t_v30)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 48u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 63u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 204u);

  v30 = &a1;
  v3 = a1;
  sa = a2;
  v18 = a3;
  EphemeralAllocation = (glf::Self *)glf::allocateEphemeralAllocation((glf::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_7F4)->st_info, v16);
  *(uint32_t *)(v3 + 56) = glf::fs::ResolvePath(sa, v18, EphemeralAllocation, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_7F4)->st_info);
  v5 = strlen(sa);
  g4_std_compat::string_assign(v3 + 52, sa, v5);
  v6 = *(uint32_t *)(v3 + 60);
  v21 = *(char **)(v3 + 56);
  s = (char *)v6;
  if ( *(uint32_t *)(v6 + 4) != 0 )
  {
    closedir(*(DIR **)(v6 + 4));
    *((uint32_t *)s + 1) = 0;
  }
  v7 = strlen((const char *)EphemeralAllocation);
  g4_std_compat::string_assign((int)(uintptr_t)(s + 8), EphemeralAllocation, v7);
  *((uint32_t *)s + 3) = (uint32_t)(uintptr_t)(v21);
  v8 = opendir(*((const char **)s + 2));
  *((uint32_t *)s + 1) = (uint32_t)(uintptr_t)(v8);
  if ( v8 != nullptr )
  {
    v19 = (char *)readdir(v8);
    g4_std::string::clear(v3 + 4, 0, *(uint32_t *)(*(uint32_t *)(v3 + 4) - 12), 0);
    v9 = 0;
    if ( v19 != nullptr )
    {
      v22 = v19 + 19;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), v19 + 19, (int)(uintptr_t)(&v25) + 1);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), *((char **)s + 2), (int)(uintptr_t)(&v25));
      glf::JoinPath(&v28, v26, v27);
      g4_std::string::assign_str(v3 + 4, &v28);
      v10 = (void *)(v28 - 12);
      if ( (uint32_t *)(v28 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
      v11 = (void *)(v26[0] - 12);
      if ( (uint32_t *)(v26[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      v12 = (void *)(v27[0] - 12);
      if ( (uint32_t *)(v27[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      stat(*(const char **)(v3 + 4), &buf);
      *(uint8_t *)(v3 + 44) = (buf.st_mode & 0xF000) == 0x4000;
      v13 = strlen(v22);
      g4_std_compat::string_assign(v3, v22, v13);
      st_size = buf.st_size;
      *(uint64_t *)(v3 + 20) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_ctim.tv_sec), 0);
      *(uint32_t *)(v3 + 40) = st_size;
      *(uint64_t *)(v3 + 28) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_mtim.tv_sec), 0);
      v9 = glf::fs::DirHandle::Filter((glf::Self **)v3);
    }
  }
  else
  {
    *(uint32_t *)(*(uint32_t *)s + 48) = 2;
    v9 = 0;
  }
  v20 = v9;
  glf::freeEphemeralAllocation(EphemeralAllocation, v17);
  return v20;
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::Construct  (binary VA: 0xcbdc70)
// Original: glf::fs::DirHandle::DirHandle
// ----------------------------------------------------------------------------
int glf::fs::DirHandle::Construct(int a1, char *a2, char *a3)
{
  uint32_t *v3;

  *(uint8_t *)(a1 + 44) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint8_t *)(a1 + 45) = 0;
  v3 = (uint32_t *)(sub_4EBD10(0x18u, 1));
  *v3 = a1;
  v3[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3[1] = 0;
  *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(v3);
  *(uint32_t *)(a1 + 48) = 0;
  return glf::fs::DirHandle::FindFirst(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::FindFirst  (binary VA: 0xcbdd00)
// Original: glf::fs::DirHandle::FindFirst
// ----------------------------------------------------------------------------
int glf::fs::DirHandle::FindFirst(int a1, int a2, char *a3, char *a4)
{
  int v4;
  char *v5;
  void *v6;
  void *v7;
  unsigned int v8;
  int v9;
  size_t v10;
  DIR *v11;
  int result;
  void *v13;
  void *v14;
  void *v15;
  size_t v16;
  __off_t st_size;
  void *v18;
  struct stat buf;
  typedef int _g4_t_v19;
  typedef struct dirent *_g4_t_v20;
  typedef uint8_t _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef char *_g4_t_s;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[4];
  typedef int _g4_t_v28[4];
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int *_g4_t_v34;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v20)) > _g4_s1 ? (0u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v21)) > _g4_s2 ? (4u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_s)) > _g4_s5 ? (20u + sizeof(_g4_t_s)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v25)) > _g4_s6 ? (31u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (35u + sizeof(_g4_t_v26)) > _g4_s7 ? (35u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v27)) > _g4_s8 ? (40u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v28)) > _g4_s9 ? (56u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v29)) > _g4_s10 ? (72u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v30)) > _g4_s11 ? (76u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v31)) > _g4_s12 ? (80u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v32)) > _g4_s13 ? (84u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (192u + sizeof(_g4_t_v34)) > _g4_s14 ? (192u + sizeof(_g4_t_v34)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 31u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 35u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 192u);

  v34 = &a1;
  v4 = a1;
  v5 = a4;
  if ( a3 != nullptr )
  {
    v19 = a2;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), a3, (int)(uintptr_t)(&v25));
    glf::JoinPath(&v30, (uint32_t *)(v19 + 52), v27);
    g4_std::string::assign_str(v4 + 52, &v30);
    v6 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v27[0] - 12);
    if ( (uint32_t *)(v27[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
  }
  else
  {
    glf::JoinPath(&v31, (uint32_t *)(a2 + 52));
    g4_std::string::assign_str(v4 + 52, &v31);
    v18 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
  }
  s = (char *)opNew(0x400u);
  memset(s, 0, 0x400u);
  v8 = glf::fs::ResolvePath(*(char **)(v4 + 52), v5, (glf::Self *)s, (char *)&stru_3F4[12]);
  v9 = *(uint32_t *)(v4 + 60);
  v22 = (char *)v8;
  *(uint32_t *)(v4 + 56) = v8;
  if ( *(uint32_t *)(v9 + 4) != 0 )
  {
    closedir(*(DIR **)(v9 + 4));
    *(uint32_t *)(v9 + 4) = 0;
  }
  v10 = strlen(s);
  g4_std_compat::string_assign(v9 + 8, s, v10);
  *(uint32_t *)(v9 + 12) = (uint32_t)(uintptr_t)(v22);
  v11 = opendir(*(const char **)(v9 + 8));
  *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v11);
  if ( v11 != nullptr )
  {
    v20 = readdir(v11);
    g4_std::string::clear(v4 + 4, 0, *(uint32_t *)(*(uint32_t *)(v4 + 4) - 12), 0);
    result = 0;
    if ( v20 != nullptr )
    {
      v23 = &v20->d_name[8];
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), &v20->d_name[8], (int)(uintptr_t)(&v26) + 1);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), *(char **)(v9 + 8), (int)(uintptr_t)(&v26));
      glf::JoinPath(&v32, v28, &v29);
      g4_std::string::assign_str(v4 + 4, &v32);
      v13 = (void *)(v32 - 12);
      if ( (uint32_t *)(v32 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v13);
      }
      v14 = (void *)(v28[0] - 12);
      if ( (uint32_t *)(v28[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      v15 = (void *)(v29 - 12);
      if ( (uint32_t *)(v29 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v15);
      }
      stat(*(const char **)(v4 + 4), &buf);
      *(uint8_t *)(v4 + 44) = (buf.st_mode & 0xF000) == 0x4000;
      v16 = strlen(v23);
      g4_std_compat::string_assign(v4, v23, v16);
      st_size = buf.st_size;
      *(uint64_t *)(v4 + 20) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_ctim.tv_sec), 0);
      *(uint32_t *)(v4 + 40) = st_size;
      *(uint64_t *)(v4 + 28) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_mtim.tv_sec), 0);
      result = glf::fs::DirHandle::Filter((glf::Self **)v4);
    }
  }
  else
  {
    *(uint32_t *)(*(uint32_t *)v9 + 48) = 2;
    result = 0;
  }
  if ( s != nullptr )
  {
    v21 = result;
    opDelete(s);
    return v21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DirHandle::Construct  (binary VA: 0xcbe180)
// Original: glf::fs::DirHandle::DirHandle
// ----------------------------------------------------------------------------
int glf::fs::DirHandle::Construct(int a1, int a2, char *a3, char *a4)
{
  uint32_t *v4;

  *(uint8_t *)(a1 + 44) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint8_t *)(a1 + 45) = 0;
  v4 = (uint32_t *)(sub_4EBD10(0x18u, 1));
  *v4 = a1;
  v4[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4[1] = 0;
  *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(v4);
  *(uint32_t *)(a1 + 48) = 0;
  return glf::fs::DirHandle::FindFirst(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::UnmountDrive  (binary VA: 0xcbe430)
// Original: glf::fs::UnmountDrive
// ----------------------------------------------------------------------------
int glf::fs::UnmountDrive(glf::fs::Self *self)
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::UnmountDrive((glf::Fs::Self *)(Globals + 64), (char *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::GetMountedDrive  (binary VA: 0xcbe460)
// Original: glf::fs::GetMountedDrive
// ----------------------------------------------------------------------------
int glf::fs::GetMountedDrive(glf::fs::Self *self)
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::GetMountedDrive((glf::Fs::Self *)(Globals + 64), (char *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::GetHomeDir  (binary VA: 0xcbe490)
// Original: glf::fs::GetHomeDir
// ----------------------------------------------------------------------------
int glf::fs::GetHomeDir()
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::GetDir(Globals + 64, 4096);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::GetTmpDir  (binary VA: 0xcbe4c0)
// Original: glf::fs::GetTmpDir
// ----------------------------------------------------------------------------
int glf::fs::GetTmpDir()
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::GetDir(Globals + 64, 0x2000);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::GetCurDir  (binary VA: 0xcbe4f0)
// Original: glf::fs::GetCurDir
// ----------------------------------------------------------------------------
int glf::fs::GetCurDir()
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::GetDir(Globals + 64, 24576);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::GetCachesDir  (binary VA: 0xcbe520)
// Original: glf::fs::GetCachesDir
// ----------------------------------------------------------------------------
int glf::fs::GetCachesDir()
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::GetDir(Globals + 64, 28672);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::RemoveFile  (binary VA: 0xcbe550)
// Original: glf::fs::RemoveFile
// ----------------------------------------------------------------------------
bool glf::fs::RemoveFile(glf::fs::Self *self)
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::RemoveFile((glf::Fs::Self *)(Globals + 64), (char *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DoesFileExist  (binary VA: 0xcbe580)
// Original: glf::fs::DoesFileExist
// ----------------------------------------------------------------------------
int glf::fs::DoesFileExist(glf::fs::Self *self)
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::DoesFileExist((glf::Fs::Self *)(Globals + 64), (char *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::DoesFileExist  (binary VA: 0xcbe5b0)
// Original: glf::fs::DoesFileExist
// ----------------------------------------------------------------------------
int glf::fs::DoesFileExist(char *a1, char *a2)
{
  int Globals;

  Globals = glf::GetGlobals();
  return glf::Fs::DoesFileExist(Globals + 64, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::SetAlternateDataDir  (binary VA: 0xcbe5f0)
// Original: glf::fs::SetAlternateDataDir
// ----------------------------------------------------------------------------
char * glf::fs::SetAlternateDataDir(glf::fs::Self *self, char *src)
{
  return strcpy(&glf::fs::gAlternateDataDirs[128 * (uint32_t)(uintptr_t)(self)], src);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::GetAlternateDataDir  (binary VA: 0xcbe630)
// Original: glf::fs::GetAlternateDataDir
// ----------------------------------------------------------------------------
char * glf::fs::GetAlternateDataDir(glf::fs::Self *self)
{
  return (char *)(&glf::fs::gAlternateDataDirs[128 * (uint32_t)(uintptr_t)(self)]);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::IsUsingAlternateDataDirs  (binary VA: 0xcbe650)
// Original: glf::fs::IsUsingAlternateDataDirs
// ----------------------------------------------------------------------------
int glf::fs::IsUsingAlternateDataDirs()
{
  return (uint8_t)glf::fs::gIsUsingAlternateDataDirs[0];
}

// ----------------------------------------------------------------------------
// Function: glf::fs::GetAlternateDataDirCount  (binary VA: 0xcbe670)
// Original: glf::fs::GetAlternateDataDirCount
// ----------------------------------------------------------------------------
int glf::fs::GetAlternateDataDirCount()
{
  return (uint8_t)glf::fs::IsUsingAlternateDataDirs() != 0 ? 8 : 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs::SetIsUsingAlternateDataDirs  (binary VA: 0xcbe6a0)
// Original: glf::fs::SetIsUsingAlternateDataDirs
// ----------------------------------------------------------------------------
uint8_t * glf::fs::SetIsUsingAlternateDataDirs(glf::fs::Self *self)
{
  glf::fs::gIsUsingAlternateDataDirs[0] = (uint8_t)(uintptr_t)(self);
  return (uint8_t *)(glf::fs::gIsUsingAlternateDataDirs);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::IsForcingLowercase  (binary VA: 0xcbe6c0)
// Original: glf::fs::IsForcingLowercase
// ----------------------------------------------------------------------------
int glf::fs::IsForcingLowercase()
{
  return *(uint8_t *)(glf::GetGlobals() + 64);
}

// ----------------------------------------------------------------------------
// Function: glf::fs::SetIsForcingLowercase  (binary VA: 0xcbe6e0)
// Original: glf::fs::SetIsForcingLowercase
// ----------------------------------------------------------------------------
int glf::fs::SetIsForcingLowercase(glf::fs::Self *self)
{
  int result;

  result = glf::GetGlobals();
  *(uint8_t *)(result + 64) = (uint8_t)(uintptr_t)(self);
  return result;
}


