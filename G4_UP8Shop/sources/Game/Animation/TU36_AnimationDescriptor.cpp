#include "Core/Utils/DecompTypes.h"
#include "TU36_AnimationDescriptor.h"

// ----------------------------------------------------------------------------
// Function: sub_C21BC0  (binary VA: 0xc21bc0)
// Original: sub_C21BC0
// ----------------------------------------------------------------------------
int sub_C21BC0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE9C4);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE9C4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE9C8), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE9C8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE9CC), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE9CC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE9D0), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE9D0, &unk_20D1280);
  dword_20DE9D4 = 1056964608;
  dword_20DE9D8 = 1056964608;
  dword_20DE9DC = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_C21CC0  (binary VA: 0xc21cc0)
// Original: sub_C21CC0
// ----------------------------------------------------------------------------
int sub_C21CC0(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 60);
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 32))(*(uint32_t *)(a1 + 60));
  else
    return glf::FileStreamImpl::GetSize((glf::FileStreamImpl::Self *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_C21D10  (binary VA: 0xc21d10)
// Original: sub_C21D10
// ----------------------------------------------------------------------------
int sub_C21D10(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 60);
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 36))(*(uint32_t *)(a1 + 60));
  else
    return glf::FileStreamImpl::Tell((glf::FileStreamImpl::Self *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_C21D60  (binary VA: 0xc21d60)
// Original: sub_C21D60
// ----------------------------------------------------------------------------
int sub_C21D60(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = 0;
  if ( a3 != 0 )
  {
    LOBYTE(v3) = 1;
    if ( a3 != 1 )
      v3 = 2 * (a3 == 2);
  }
  v4 = *(uint32_t *)(a1 + 60);
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 24, a2, 0);
  else
    return glf::FileStreamImpl::Seek(a1 + 8, a2, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_C21DF0  (binary VA: 0xc21df0)
// Original: sub_C21DF0
// ----------------------------------------------------------------------------
int sub_C21DF0(int a1, void *a2, unsigned int a3)
{
  if ( *(uint32_t *)(a1 + 60) != 0 )
    return 0;
  else
    return glf::FileStreamImpl::Write((glf::FileStreamImpl::Self *)(a1 + 8), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_C21E40  (binary VA: 0xc21e40)
// Original: sub_C21E40
// ----------------------------------------------------------------------------
int sub_C21E40(int a1, void *a2, unsigned int a3)
{
  int v3;

  v3 = *(uint32_t *)(a1 + 60);
  if ( v3 != 0 )
    return G4_VCALL<int>(v3, 12, a2, a3);
  else
    return glf::FileStreamImpl::Read((glf::FileStreamImpl::Self *)(a1 + 8), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_C21EB0  (binary VA: 0xc21eb0)
// Original: sub_C21EB0
// ----------------------------------------------------------------------------
int sub_C21EB0(int a1)
{
  volatile int32_t *v1;
  int result;

  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    v1 = *(volatile int32_t **)(a1 + 60);
    if ( v1 != nullptr )
    {
      *(uint32_t *)(a1 + 60) = 0;
      if ( __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v1, 8);
        G4_VCALL<void>(v1, 4);
      }
    }
  }
  result = glf::FileStreamImpl::Close((glf::FileStreamImpl::Self *)(a1 + 8));
  *(uint8_t *)(a1 + 4) = 0;
  return result;
}



// ============================================================================
// Address:   0xc21f30 (size: 213 bytes)
// Symbol:    sub_C21F30
// Demangled: sub_C21F30
// ============================================================================
int (**sub_C21F30(int a1))(int)
{
  bool v1;
  volatile int32_t *v2;
  volatile int32_t *v3;

  v1 = *(uint8_t *)(a1 + 4) == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B7A8);
  if ( !v1 )
  {
    v2 = *(volatile int32_t **)(a1 + 60);
    if ( v2 != nullptr )
    {
      *(uint32_t *)(a1 + 60) = 0;
      if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v2, 8);
        G4_VCALL<void>(v2, 4);
      }
    }
  }
  glf::FileStreamImpl::Close((glf::FileStreamImpl::Self *)(a1 + 8));
  v3 = *(volatile int32_t **)(a1 + 60);
  *(uint8_t *)(a1 + 4) = 0;
  if ( v3 != nullptr && __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8);
    G4_VCALL<void>(v3, 4);
  }
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)(a1 + 8));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B7E8);
  return (int (**)(int))(uintptr_t)(&off_206B7E8);
}
// ----------------------------------------------------------------------------
// Function: sub_C22010  (binary VA: 0xc22010)
// Original: sub_C22010
// ----------------------------------------------------------------------------
void sub_C22010(char *a1)
{
  bool v1;
  volatile int32_t *v2;
  volatile int32_t *v3;

  v1 = a1[4] == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B7A8);
  if ( !v1 )
  {
    v2 = *((volatile int32_t **)a1 + 15);
    if ( v2 != nullptr )
    {
      *((uint32_t *)a1 + 15) = 0;
      if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v2, 8);
        G4_VCALL<void>(v2, 4);
      }
    }
  }
  glf::FileStreamImpl::Close((glf::FileStreamImpl::Self *)(a1 + 8));
  v3 = *((volatile int32_t **)a1 + 15);
  a1[4] = 0;
  if ( v3 != nullptr && __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8);
    G4_VCALL<void>(v3, 4);
  }
  *((uint32_t *)a1 + 2) = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)(a1 + 8));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B7E8);
  opDelete(a1);
}



// ============================================================================
// Address:   0xc220f0 (size: 83 bytes)
// Symbol:    sub_C220F0
// Demangled: sub_C220F0
// ============================================================================
int (**sub_C220F0(uint32_t *a1))(glf::FileStreamImpl::Self *)
{
  sub_C22A10(a1);
  *a1 = (uint32_t)(uintptr_t)(&off_206B7A8);
  glf::FileStreamImpl::Construct((glf::FileStreamImpl::Self *)(a1 + 2));
  a1[15] = 0;
  a1[2] = ((uint32_t)(uintptr_t)&off_2048D28);
  return (int (**)(glf::FileStreamImpl::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2048D28));
}
// ----------------------------------------------------------------------------
// Function: sub_C22150  (binary VA: 0xc22150)
// Original: sub_C22150
// ----------------------------------------------------------------------------
char sub_C22150(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 60);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 12) != 0;
  else
    return glf::Stream::IsOpened((glf::Stream::Self *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_C221A0  (binary VA: 0xc221a0)
// Original: sub_C221A0
// ----------------------------------------------------------------------------
char sub_C221A0(int a1, char *haystack, char a3)
{
  int v3;
  char result;
  volatile int32_t *v5;
  glitch::io::CGlfReadFile::Self *v6;

  v3 = a3 & 1;
  if ( (a3 & 2) != 0 )
    v3 |= 2u;
  if ( (a3 & 8) != 0 )
    v3 |= 4u;
  if ( (a3 & 0x10) != 0 )
    v3 |= 8u;
  if ( (a3 & 0x20) != 0 )
    v3 |= 0x12u;
  if ( a3 < 0 )
    v3 |= 0x1000u;
  if ( strstr(haystack, ".sav") != nullptr
    || strstr(haystack, ".preferences") != nullptr
    || strstr(haystack, ".lzb") != nullptr
    || strstr(haystack, ".lzl") != nullptr
    || strstr(haystack, ".soc") != nullptr
    || strstr(haystack, ".ird") != nullptr )
  {
    glf::FileStreamImpl::Open(a1 + 8, haystack, v3);
    result = glf::Stream::IsOpened((glf::Stream::Self *)(a1 + 8));
    v5 = *(volatile int32_t **)(a1 + 60);
    *(uint8_t *)(a1 + 4) = result;
    *(uint32_t *)(a1 + 60) = 0;
    if ( v5 != nullptr )
    {
      if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v5, 8);
        G4_VCALL<void>(v5, 4);
      }
      return *(uint8_t *)(a1 + 4);
    }
  }
  else
  {
    v6 = (glitch::io::CGlfReadFile::Self *)sub_4EBBF0(0x18u, 1);
    glitch::io::CGlfReadFile::Construct(v6, haystack);
    sub_C227C0(a1 + 60, v6);
    result = *((uint32_t *)v6 + 3) != 0;
    *(uint8_t *)(a1 + 4) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C22380  (binary VA: 0xc22380)
// Original: sub_C22380
// ----------------------------------------------------------------------------
int sub_C22380(int a1, char *a2)
{
  char v2;
  int v3;

  v2 = sub_C221A0(a1, a2, 32);
  v3 = 0;
  if ( v2 != 0 )
  {
    G4_VCALL<void>(a1, 8);
    return 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_C223C0  (binary VA: 0xc223c0)
// Original: sub_C223C0
// ----------------------------------------------------------------------------
char sub_C223C0(uint32_t *a1, char *a2, char a3)
{
  sub_C22A10(a1);
  *a1 = (uint32_t)(uintptr_t)(&off_206B7A8);
  glf::FileStreamImpl::Construct((glf::FileStreamImpl::Self *)(a1 + 2));
  a1[15] = 0;
  a1[2] = ((uint32_t)(uintptr_t)&off_2048D28);
  return sub_C221A0((int)(uintptr_t)(a1), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_C22440  (binary VA: 0xc22440)
// Original: sub_C22440
// ----------------------------------------------------------------------------
int sub_C22440(char *a1)
{
  volatile int32_t *v1;
  volatile int32_t *v2;
  volatile int32_t *v4;
  typedef volatile int32_t *_g4_t_v5;
  typedef volatile int32_t *_g4_t_v6;
  typedef volatile int32_t *_g4_t_v7;
  typedef uint8_t _g4_t_v8;
  typedef int (**_g4_t_v9)(int);
  typedef char _g4_t_v10;
  typedef uint32_t _g4_t_v11[13];
  typedef volatile int32_t *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (23u + sizeof(_g4_t_v8)) > _g4_s3 ? (23u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v12)) > _g4_s7 ? (84u + sizeof(_g4_t_v12)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 23u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 84u);

  sub_C22A10(&v9);
  v9 = (int (**)(int))(uintptr_t)(&off_206B7A8);
  glf::FileStreamImpl::Construct((glf::FileStreamImpl::Self *)v11);
  v11[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  v12 = nullptr;
  if ( sub_C221A0((int)(uintptr_t)(&v9), a1, 1) != 0 )
  {
    if ( v10 != 0 )
    {
      v4 = v12;
      if ( v12 != nullptr )
      {
        v12 = nullptr;
        if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
        {
          v7 = v4;
          G4_VCALL<void>(v4, 8);
          G4_VCALL<void>(v7, 4);
        }
      }
    }
    glf::FileStreamImpl::Close((glf::FileStreamImpl::Self *)v11);
    v10 = 0;
    v9 = (int (**)(int))(uintptr_t)(&off_206B7A8);
    v8 = 1;
  }
  else
  {
    v9 = (int (**)(int))(uintptr_t)(&off_206B7A8);
    if ( v10 != 0 )
    {
      v1 = v12;
      v8 = 0;
      if ( v12 != nullptr )
      {
        v12 = nullptr;
        if ( __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
        {
          v6 = v1;
          G4_VCALL<void>(v1, 8);
          G4_VCALL<void>(v6, 4);
        }
      }
    }
    else
    {
      v8 = 0;
    }
  }
  glf::FileStreamImpl::Close((glf::FileStreamImpl::Self *)v11);
  v2 = v12;
  v10 = 0;
  if ( v12 != nullptr && __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
  {
    v5 = v2;
    G4_VCALL<void>(v2, 8);
    G4_VCALL<void>(v5, 4);
  }
  v11[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v11);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_C225F0  (binary VA: 0xc225f0)
// Original: sub_C225F0
// ----------------------------------------------------------------------------
int sub_C225F0(char *haystack, char a2)
{
  volatile int32_t *v2;
  volatile int32_t *v3;
  typedef int (**_g4_t_v5)(int);
  typedef char _g4_t_v6;
  typedef uint32_t _g4_t_v7[13];
  typedef volatile int32_t *_g4_t_v8;
  typedef char _g4_t_filename[524];
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v8)) > _g4_s3 ? (68u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_filename)) > _g4_s4 ? (72u + sizeof(_g4_t_filename)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 68u);
  _g4_t_filename &filename = *reinterpret_cast<_g4_t_filename *>(_g4_sf + 72u);

  sub_C22A10(&v5);
  v5 = (int (**)(int))(uintptr_t)(&off_206B7A8);
  glf::FileStreamImpl::Construct((glf::FileStreamImpl::Self *)v7);
  v7[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  v8 = nullptr;
  sub_C221A0((int)(uintptr_t)(&v5), haystack, a2);
  if ( strstr(haystack, ".sav") != nullptr
    || strstr(haystack, ".preferences") != nullptr
    || strstr(haystack, ".lzb") != nullptr
    || strstr(haystack, ".lzl") != nullptr
    || strstr(haystack, ".soc") != nullptr )
  {
    glf::FileStreamImpl::CopyPath((glf::FileStreamImpl::Self *)v7, (glf::Self *)filename, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_1F4)->st_info);
  }
  while ( remove(filename) == 0 )
    ;
  v5 = (int (**)(int))(uintptr_t)(&off_206B7A8);
  if ( v6 != 0 )
  {
    v2 = v8;
    if ( v8 != nullptr )
    {
      v8 = nullptr;
      if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v2, 8);
        G4_VCALL<void>(v2, 4);
      }
    }
  }
  glf::FileStreamImpl::Close((glf::FileStreamImpl::Self *)v7);
  v3 = v8;
  v6 = 0;
  if ( v8 != nullptr && __sync_fetch_and_add(v8 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8);
    G4_VCALL<void>(v3, 4);
  }
  v7[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v7);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_C227C0  (binary VA: 0xc227c0)
// Original: sub_C227C0
// ----------------------------------------------------------------------------
volatile int32_t ** sub_C227C0(volatile int32_t **a1, volatile int32_t *a2)
{
  volatile int32_t **result;
  volatile int32_t *v3;

  result = a1;
  if ( a2 != nullptr )
    __sync_add_and_fetch(a2 + 1, 1u);
  v3 = *a1;
  *a1 = a2;
  if ( v3 != nullptr && __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8);
    G4_VCALL<void>(v3, 4);
    return a1;
  }
  return result;
}


