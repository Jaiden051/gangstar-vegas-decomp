#include "Core/Utils/DecompTypes.h"
#include "glwebtools_UrlResponseCore.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponseCore::GetResponseCode  (binary VA: 0x13f4f30)
// Original: glwebtools::UrlResponseCore::GetResponseCode
// ----------------------------------------------------------------------------
int glwebtools::UrlResponseCore::GetResponseCode(glwebtools::UrlResponseCore::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponseCore::GetData  (binary VA: 0x13f4f40)
// Original: glwebtools::UrlResponseCore::GetData
// ----------------------------------------------------------------------------
unsigned int glwebtools::UrlResponseCore::GetData(glwebtools::MutableData::Self **self, void **a2, unsigned int *a3)
{
  if ( *(self + 7) != nullptr )
    return (uint8_t)glwebtools::MutableData::GetData(*(self + 7), (const void **)a2, a3) == 0 ? 0x80000006 : 0;
  else
    return -2147483643;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponseCore::GetDataAsString  (binary VA: 0x13f4f90)
// Original: glwebtools::UrlResponseCore::GetDataAsString
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::UrlResponseCore::GetDataAsString(glwebtools::UrlResponseCore::Self *a1, int a2)
{
  glwebtools::Self *Data;
  typedef void *_g4_t_v4;
  typedef size_t _g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  if ( *((uint32_t *)a1 + 7) == 0 )
    return (glwebtools::Self *)-2147483643;
  Data = (glwebtools::Self *)glwebtools::UrlResponseCore::GetData((glwebtools::MutableData::Self **)a1, &v4, v5);
  if ( glwebtools::IsOperationSuccess(Data) )
  {
    Data = nullptr;
    if ( v4 != nullptr )
      g4_std::string::append(a2, v4, v5[0]);
  }
  return Data;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponseCore::GetHeaderField  (binary VA: 0x13f5010)
// Original: glwebtools::UrlResponseCore::GetHeaderField
// ----------------------------------------------------------------------------
const char * glwebtools::UrlResponseCore::GetHeaderField(glwebtools::UrlResponseCore::Self *self, char *a2)
{
  const char *result;
  const char **v3;
  char *s2;
  const char **v5;
  void *v6;
  typedef const char *_g4_t_v7;
  typedef const char **_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  result = nullptr;
  if ( a2 != nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), a2, (int)(uintptr_t)(&v9));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), a2, (int)(uintptr_t)(&v9) + 1);
    v3 = *((const char ***)self + 3);
    v8 = (const char **)((char *)self + 8);
    s2 = v11;
    v5 = (const char **)((char *)self + 8);
    if ( v3 == nullptr )
      goto LABEL_14;
    do
    {
      while ( strcasecmp(v3[4], s2) >= 0 )
      {
        v5 = v3;
        v3 = (const char **)v3[2];
        if ( v3 == nullptr )
          goto LABEL_7;
      }
      v3 = (const char **)v3[3];
    }
    while ( v3 != nullptr );
LABEL_7:
    if ( v8 == v5 || strcasecmp(s2, v5[4]) < 0 )
LABEL_14:
      v5 = (const char **)((char *)self + 8);
    if ( s2 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)s2 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(s2 - 12);
    result = nullptr;
    if ( v8 != v5 )
      result = v5[5];
    v6 = (void *)(v10 - 12);
    if ( (uint32_t *)(v10 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
    {
      v7 = result;
      g4_std::string::Rep::M_destroy(v6);
      return v7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponseCore::Construct  (binary VA: 0x13f5140)
// Original: glwebtools::UrlResponseCore::UrlResponseCore
// ----------------------------------------------------------------------------
glwebtools::UrlResponseCore::Self * glwebtools::UrlResponseCore::Construct(glwebtools::UrlResponseCore::Self *self)
{
  glwebtools::MutableData::Self *v1;
  glwebtools::UrlResponseCore::Self *result;

  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *(uint32_t *)self = 0;
  v1 = (glwebtools::MutableData::Self *)sub_4EBE70(0x14u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  result = (glwebtools::UrlResponseCore::Self *)(glwebtools::MutableData::MutableData(v1, (glwebtools::Self *)&word_10));
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponseCore::SetResponseCode  (binary VA: 0x13f51e0)
// Original: glwebtools::UrlResponseCore::SetResponseCode
// ----------------------------------------------------------------------------
glwebtools::UrlResponseCore::Self * glwebtools::UrlResponseCore::SetResponseCode(glwebtools::UrlResponseCore::Self *self, int a2)
{
  *(uint32_t *)self = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponseCore::AddData  (binary VA: 0x13f51f0)
// Original: glwebtools::UrlResponseCore::AddData
// ----------------------------------------------------------------------------
int glwebtools::UrlResponseCore::AddData(glwebtools::UrlResponseCore::Self *self, void *a2, size_t a3)
{
  glwebtools::MutableData::Self *v3;

  v3 = *((glwebtools::MutableData::Self **)self + 7);
  if ( v3 != nullptr )
    return glwebtools::MutableData::AppendData(v3, a2, a3);
  v3 = (glwebtools::MutableData::Self *)sub_4EBE70(0x14u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  glwebtools::MutableData::MutableData(v3, (glwebtools::Self *)&word_10);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
    return glwebtools::MutableData::AppendData(v3, a2, a3);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponseCore::Destroy  (binary VA: 0x13f5290)
// Original: glwebtools::UrlResponseCore::~UrlResponseCore
// ----------------------------------------------------------------------------
void glwebtools::UrlResponseCore::Destroy(glwebtools::UrlResponseCore::Self *self)
{
  void (***v1)(uint32_t);

  v1 = *((void (****)(uint32_t))self + 7);
  if ( v1 != nullptr )
  {
    (**v1)(*((uint32_t *)self + 7));
    sub_4EBEE0(*((uint32_t *)self + 7));
  }
  g4_std::Rb_tree_string_pair_string_const_957cd7::M_erase(
    (int)(uintptr_t)(self) + 4,
    *((uint32_t **)self + 3));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponseCore::AddHeaderField  (binary VA: 0x13f52f0)
// Original: glwebtools::UrlResponseCore::AddHeaderField
// ----------------------------------------------------------------------------
int glwebtools::UrlResponseCore::AddHeaderField(glwebtools::UrlResponseCore::Self *self, char *a2, char *s)
{
  int result;
  int v4;
  char *s2;
  const char **v6;
  size_t v7;
  char *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  uint32_t *v13;
  typedef const char **_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v15)) > _g4_s1 ? (31u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v16)) > _g4_s2 ? (32u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v17)) > _g4_s3 ? (40u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v19)) > _g4_s5 ? (48u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v20)) > _g4_s6 ? (52u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v21)) > _g4_s7 ? (56u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v22)) > _g4_s8 ? (60u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 31u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);

  if ( s == nullptr || a2 == nullptr )
    return 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), a2, (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), s, (int)(uintptr_t)(&v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), a2, (int)(uintptr_t)(&v16) + 1);
  v4 = *((uint32_t *)self + 3);
  if ( v4 == 0 )
    goto LABEL_16;
  s2 = v19;
  v6 = (const char **)((char *)self + 8);
  do
  {
    while ( strcasecmp(*(const char **)(v4 + 16), s2) >= 0 )
    {
      v6 = (const char **)v4;
      v4 = *(uint32_t *)(v4 + 8);
      if ( v4 == 0 )
        goto LABEL_10;
    }
    v4 = *(uint32_t *)(v4 + 12);
  }
  while ( v4 != 0 );
LABEL_10:
  if ( (const char **)((char *)self + 8) == v6 || strcasecmp(s2, v6[4]) < 0 )
  {
LABEL_16:
    v20 = &dword_213B814;
    g4_std::string::construct_copy(&v21, &v19);
    g4_std::string::construct_copy(v22, &v20);
    g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert_unique((int)(uintptr_t)&v14, (int)(uintptr_t)self + 4, (const char **)&v21);
    v6 = v14;
    v11 = (void *)(v22[0] - 12);
    if ( (uint32_t *)(v22[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = v20 - 3;
    if ( v20 - 3 != dword_213B808 && __sync_fetch_and_add(v20 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v13);
  }
  v7 = strlen(s);
  g4_std_compat::string_assign((int)(uintptr_t)(v6 + 5), s, v7);
  v8 = v19 - 12;
  if ( v19 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v19 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8);
  v9 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) == dword_213B808 )
    return 1;
  result = 1;
  if ( __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
    return 1;
  }
  return result;
}


