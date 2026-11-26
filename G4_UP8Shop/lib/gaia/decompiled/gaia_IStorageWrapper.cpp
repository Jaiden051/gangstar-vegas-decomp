#include "Core/Utils/DecompTypes.h"
#include "gaia_IStorageWrapper.h"

// ----------------------------------------------------------------------------
// Function: gaia::IStorageWrapper::CloseFile  (binary VA: 0x14d5ad0)
// Original: gaia::IStorageWrapper::CloseFile
// ----------------------------------------------------------------------------
int gaia::IStorageWrapper::CloseFile(int a1, FILE *stream)
{
  return fclose(stream);
}

// ----------------------------------------------------------------------------
// Function: gaia::IStorageWrapper::char2pathString_t  (binary VA: 0x14d5b00)
// Original: gaia::IStorageWrapper::char2pathString_t
// ----------------------------------------------------------------------------
int gaia::IStorageWrapper::char2pathString_t(int a1, int a2, int a3)
{
  g4_std::string::assign_str(a3, a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::IStorageWrapper::GetFileWithPath  (binary VA: 0x14d5b30)
// Original: gaia::IStorageWrapper::GetFileWithPath
// ----------------------------------------------------------------------------
int gaia::IStorageWrapper::GetFileWithPath(int a1, void (***a2)(int *), int a3)
{
  typedef char _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (17u + sizeof(_g4_t_v5)) > _g4_s1 ? (17u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v6)) > _g4_s2 ? (20u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v7)) > _g4_s3 ? (24u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v8)) > _g4_s4 ? (28u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 17u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  (**a2)(&v6);
  v7 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "/", (int)(uintptr_t)(&v5));
  v4 = gaia::IStorageWrapper::char2pathString_t((int)(uintptr_t)(a2), (int)(uintptr_t)(&v8), (int)(uintptr_t)(&v7));
  g4_std::string::Destroy(&v8);
  if ( v4 != 0 )
  {
    v9[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    if ( (uint8_t)gaia::IStorageWrapper::char2pathString_t((int)(uintptr_t)(a2), a3, (int)(uintptr_t)(v9)) != 0 )
    {
      g4_std::string::append_str(&v6, &v7);
      g4_std::string::append_str(&v6, v9);
      g4_std::string::construct_copy(a1, &v6);
    }
    else
    {
      g4_std::string::construct_from_cstr(a1, nullptr, (int)(uintptr_t)(&v5) + 2);
    }
    g4_std::string::Destroy(v9);
  }
  else
  {
    g4_std::string::construct_from_cstr(a1, nullptr, (int)(uintptr_t)(&v5) + 1);
  }
  g4_std::string::Destroy(&v7);
  g4_std::string::Destroy(&v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::IStorageWrapper::Remove  (binary VA: 0x14d5c90)
// Original: gaia::IStorageWrapper::Remove
// ----------------------------------------------------------------------------
int gaia::IStorageWrapper::Remove(void (***a1)(int *), int a2)
{
  int v2;
  typedef char *_g4_t_filename;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_filename)) > _g4_s0 ? (12u + sizeof(_g4_t_filename)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_filename &filename = *reinterpret_cast<_g4_t_filename *>(_g4_sf + 12u);

  v2 = -1;
  gaia::IStorageWrapper::GetFileWithPath((int)(uintptr_t)(&filename), a1, a2);
  if ( *((uint32_t *)filename - 3) != 0 )
    v2 = remove(filename);
  g4_std::string::Destroy(&filename);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::IStorageWrapper::Rename  (binary VA: 0x14d5d00)
// Original: gaia::IStorageWrapper::Rename
// ----------------------------------------------------------------------------
int gaia::IStorageWrapper::Rename(void (***a1)(int *), int a2, int a3)
{
  typedef int _g4_t_v4;
  typedef char *_g4_t_old;
  typedef char *_g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_old)) > _g4_s1 ? (24u + sizeof(_g4_t_old)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_old &old = *reinterpret_cast<_g4_t_old *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  gaia::IStorageWrapper::GetFileWithPath((int)(uintptr_t)(&old), a1, a2);
  v4 = -1;
  if ( *((uint32_t *)old - 3) != 0 )
  {
    gaia::IStorageWrapper::GetFileWithPath((int)(uintptr_t)(v6), a1, a3);
    if ( *((uint32_t *)v6[0] - 3) != 0 )
      v4 = rename(old, v6[0]);
    g4_std::string::Destroy(v6);
  }
  g4_std::string::Destroy(&old);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::IStorageWrapper::OpenFile  (binary VA: 0x14d5dc0)
// Original: gaia::IStorageWrapper::OpenFile
// ----------------------------------------------------------------------------
FILE * gaia::IStorageWrapper::OpenFile(void (***a1)(int *), int a2, int a3)
{
  char *v3;
  FILE *v4;
  typedef char *_g4_t_filename;
  typedef char *_g4_t_modes[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_filename)) > _g4_s0 ? (8u + sizeof(_g4_t_filename)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_modes)) > _g4_s1 ? (12u + sizeof(_g4_t_modes)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_filename &filename = *reinterpret_cast<_g4_t_filename *>(_g4_sf + 8u);
  _g4_t_modes &modes = *reinterpret_cast<_g4_t_modes *>(_g4_sf + 12u);

  gaia::IStorageWrapper::GetFileWithPath((int)(uintptr_t)(&filename), a1, a2);
  v3 = filename;
  if ( *((uint32_t *)filename - 3) != 0 )
  {
    v4 = nullptr;
    modes[0] = (char *)&dword_213B814;
    if ( (uint8_t)gaia::IStorageWrapper::char2pathString_t((int)(uintptr_t)(a1), a3, (int)(uintptr_t)(modes)) != 0 )
      v4 = fopen(filename, modes[0]);
    g4_std::string::Destroy(modes);
    v3 = filename;
  }
  else
  {
    v4 = nullptr;
  }
  if ( v3 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v3 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3 - 12);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::IStorageWrapper::GetFileSize  (binary VA: 0x14d5ea0)
// Original: gaia::IStorageWrapper::GetFileSize
// ----------------------------------------------------------------------------
int gaia::IStorageWrapper::GetFileSize(void (***a1)(int *), int a2, __off_t *a3)
{
  int v3;
  struct stat buf;
  typedef char *_g4_t_file;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_file)) > _g4_s0 ? (12u + sizeof(_g4_t_file)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_file &file = *reinterpret_cast<_g4_t_file *>(_g4_sf + 12u);

  v3 = -1;
  gaia::IStorageWrapper::GetFileWithPath((int)(uintptr_t)(&file), a1, a2);
  if ( *((uint32_t *)file - 3) != 0 )
  {
    v3 = (int)(uintptr_t)(stat(file, &buf));
    if ( v3 == 0 )
      *a3 = buf.st_size;
  }
  g4_std::string::Destroy(&file);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::IStorageWrapper::char2pathString_t  (binary VA: 0x14e5e90)
// Original: gaia::IStorageWrapper::char2pathString_t
// ----------------------------------------------------------------------------
int gaia::IStorageWrapper::char2pathString_t(int a1, const char **a2, int a3)
{
  wchar_t *pwcs;
  const char *s;
  unsigned int n;
  int v6;
  int *v8;
  int *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef void *_g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v16)) > _g4_s1 ? (28u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v18)) > _g4_s3 ? (36u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  pwcs = nullptr;
  s = *a2;
  n = *((uint32_t *)*a2 - 3);
  v18 = nullptr;
  v19 = nullptr;
  v20 = 0;
  v17 = 0;
  if ( n != 0 )
  {
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v18), nullptr, n, &v17);
    pwcs = (wchar_t *)v18;
    s = *a2;
  }
  v6 = 0;
  if ( mbstowcs(pwcs, s, n) == n )
  {
    v8 = v19;
    v9 = (int *)v18;
    if ( v19 == v18 )
    {
      v10 = (uint32_t *)(&unk_213B8B4);
    }
    else
    {
      v15 = ((char *)v19 - (char *)((uint8_t *)v18)) >> 2;
      v12 = sub_194DEB0(v15, 0);
      v10 = (uint32_t *)(v12 + 12);
      v13 = (uint32_t *)(v12 + 12);
      do
      {
        v14 = *v9++;
        *v13++ = v14;
      }
      while ( v8 != v9 );
      if ( (void *)v12 != &unk_213B8A8 )
      {
        *(uint32_t *)(v12 + 8) = 0;
        *(uint32_t *)v12 = v15;
        v10[v15] = 0;
      }
    }
    v16 = v10;
    sub_194F8F0(a3, &v16);
    v11 = v16 - 3;
    if ( v16 - 3 == (uint32_t *)&unk_213B8A8 )
    {
      v6 = 1;
    }
    else
    {
      v6 = 1;
      if ( __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
        sub_194E070(v11);
    }
  }
  if ( v18 != nullptr )
    opDelete(v18);
  return v6;
}


