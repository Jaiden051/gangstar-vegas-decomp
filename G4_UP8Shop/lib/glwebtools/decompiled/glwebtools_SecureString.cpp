#include "Core/Utils/DecompTypes.h"
#include "glwebtools_SecureString.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureString::encrypt  (binary VA: 0x13e63c0)
// Original: glwebtools::SecureString::encrypt
// ----------------------------------------------------------------------------
glwebtools::SecureString::Self * glwebtools::SecureString::encrypt(glwebtools::SecureString::Self *self, const char *a2, unsigned int a3, const unsigned int (*a4)[2])
{
  uint32_t *v5;
  typedef uint32_t *_g4_t_v6;
  typedef uint8_t _g4_t_v7[76];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  if ( a3 != 0 && a2 != nullptr )
  {
    glwebtools::Codec::GenerateBase64CustomKey((glwebtools::Codec::Self *)v7, (char *)(*a4)[0], (*a4)[1]);
    v6 = &dword_213B814;
    glwebtools::Codec::EncodeBase64Custom((int)(uintptr_t)(a2), a3, (int)(uintptr_t)(&v6), (int)(uintptr_t)(v7));
    g4_std::string::construct_copy(self, &v6);
    v5 = v6 - 3;
    if ( v6 - 3 != dword_213B808 && __sync_fetch_and_add(v6 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v5);
  }
  else
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureString::decrypt  (binary VA: 0x13e64e0)
// Original: glwebtools::SecureString::decrypt
// ----------------------------------------------------------------------------
uint32_t * glwebtools::SecureString::decrypt(uint32_t *a1, int *a2, int a3)
{
  size_t DecodedBase64DataSize;
  uint8_t *v5;
  void *v6;
  typedef unsigned int _g4_t_v7;
  typedef char _g4_t_v8[76];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  if ( *(uint32_t *)(*a2 - 12) != 0 )
  {
    glwebtools::Codec::GenerateBase64CustomKey((glwebtools::Codec::Self *)v8, *(char **)a3, *(uint32_t *)(a3 + 4));
    DecodedBase64DataSize = glwebtools::Codec::GetDecodedBase64DataSize(a2, 0);
    v7 = (unsigned int)(uintptr_t)(&dword_213B814);
    sub_1939D80((int)(uintptr_t)(&v7), DecodedBase64DataSize, 0);
    v5 = (uint8_t *)v7;
    if ( *(int *)(v7 - 4) >= 0 )
    {
      sub_19397C0(&v7);
      v5 = (uint8_t *)v7;
    }
    glwebtools::Codec::DecodeBase64Custom((glwebtools::Codec::Self **)a2, v5, v8);
    g4_std::string::construct_copy(a1, &v7);
    v6 = (void *)(v7 - 12);
    if ( (uint32_t *)(v7 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
  }
  else
  {
    *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureString::hash  (binary VA: 0x13e6610)
// Original: glwebtools::SecureString::hash
// ----------------------------------------------------------------------------
uint32_t * glwebtools::SecureString::hash(uint32_t *a1, glwebtools::Codec::Self **a2)
{
  unsigned int v2;
  glwebtools::Codec::Self **v3;
  void *v4;
  unsigned int v6[4];

  if ( *((uint32_t *)*a2 - 3) != 0 )
  {
    v6[0] = (unsigned int)(uintptr_t)(&dword_213B814);
    sub_1939D80((int)(uintptr_t)(v6), 0x40u, 0);
    v2 = v6[0];
    v3 = a2;
    if ( *(int *)(v6[0] - 4) >= 0 )
    {
      sub_19397C0(v6);
      v2 = v6[0];
      v3 = a2;
    }
    glwebtools::Codec::GenerateSHA256(*v3, *((uint32_t *)*v3 - 3), v2);
    g4_std::string::construct_copy(a1, v6);
    v4 = (void *)(v6[0] - 12);
    if ( (uint32_t *)(v6[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
  }
  else
  {
    *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureString::Set  (binary VA: 0x13e6710)
// Original: glwebtools::SecureString::Set
// ----------------------------------------------------------------------------
int glwebtools::SecureString::Set(int a1, int a2, int a3, int a4)
{
  int result;
  void *v5;
  uint32_t v6[4];

  *(uint32_t *)a1 = a3;
  *(uint32_t *)(a1 + 4) = a4;
  g4_std::string::assign_str(a1 + 8, a2);
  glwebtools::SecureString::hash(v6, (glwebtools::Codec::Self **)(a1 + 8));
  g4_std::string::assign_str(a1 + 12, v6);
  result = v6[0];
  v5 = (void *)(v6[0] - 12);
  if ( (uint32_t *)(v6[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v5); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureString::Set  (binary VA: 0x13e67c0)
// Original: glwebtools::SecureString::Set
// ----------------------------------------------------------------------------
int glwebtools::SecureString::Set(unsigned int (*self)[2], char *a2, unsigned int a3)
{
  void *v3;
  int result;
  void *v5;
  typedef g4_cxa_guard_t *_g4_t_v6;
  typedef g4_cxa_guard_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v7)) > _g4_s1 ? (0u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v8)) > _g4_s2 ? (40u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v9)) > _g4_s3 ? (44u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  if ( byte_2119778 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2119778) != 0 )
  {
    dword_2119780 = glwebtools::Time::GetCurrentTimestamp((glwebtools::Time::Self *)v7) & 0x96748342;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2119778);
  }
  if ( byte_2119788 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2119788) != 0 )
  {
    dword_2119790 = glwebtools::Time::GetCurrentTimestamp((glwebtools::Time::Self *)v6) & 0x1FC8B3B9;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2119788);
  }
  (*self)[0] = glwebtools::Codec::Random((glwebtools::Codec::Self *)&dword_2119780, (unsigned int *)&dword_2119790);
  (*self)[1] = glwebtools::Codec::Random((glwebtools::Codec::Self *)&dword_2119780, (unsigned int *)&dword_2119790);
  glwebtools::SecureString::encrypt((glwebtools::SecureString::Self *)&v8, a2, a3, self);
  g4_std::string::assign_str(&(*self)[2], &v8);
  v3 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  glwebtools::SecureString::hash(v9, (glwebtools::Codec::Self **)&(*self)[2]);
  g4_std::string::assign_str(&(*self)[3], v9);
  result = v9[0];
  v5 = (void *)(v9[0] - 12);
  if ( (uint32_t *)(v9[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v5); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureString::size  (binary VA: 0x13e6980)
// Original: glwebtools::SecureString::size
// ----------------------------------------------------------------------------
int glwebtools::SecureString::size(glwebtools::SecureString::Self *self)
{
  return glwebtools::Codec::GetDecodedBase64DataSize((int *)self + 2, 0);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureString::read  (binary VA: 0x13e7180)
// Original: glwebtools::SecureString::read
// ----------------------------------------------------------------------------
int glwebtools::SecureString::read(glwebtools::Codec::Self **self, const glwebtools::JsonReader::Self *a2)
{
  int v2;
  const glwebtools::Json::Value::Self *v3;
  unsigned int *v4;
  void *v5;
  void *v6;
  void *v8;
  void *v9;
  unsigned int *v10;
  typedef glwebtools::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef glwebtools::Codec::Self **_g4_t_v16;
  typedef int _g4_t_v17[2];
  typedef int _g4_t_v18;
  typedef glwebtools::Codec::Self **_g4_t_v19;
  typedef uint8_t _g4_t_v20[8];
  typedef uint8_t _g4_t_v21[8];
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[44];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v12)) > _g4_s1 ? (26u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v18)) > _g4_s7 ? (56u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v19)) > _g4_s8 ? (60u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v20)) > _g4_s9 ? (64u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v21)) > _g4_s10 ? (72u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v22)) > _g4_s11 ? (80u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v23)) > _g4_s12 ? (96u + sizeof(_g4_t_v23)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 26u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "s", (int)(uintptr_t)(&v12));
  v16 = self;
  v2 = -2147483645;
  g4_std::string::construct_copy(&v18, &v15);
  v19 = v16;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
  {
    LOWORD(v2) = 2;
    if ( (uint8_t)glwebtools::Json::Value::isMember(a2, (int)(uintptr_t)(&v18)) != 0 )
    {
      v3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (int)(uintptr_t)(&v18));
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v22, v3);
      v4 = (unsigned int *)v19;
      if ( (unsigned int)glwebtools::JsonReader::size((glwebtools::JsonReader::Self *)v22) <= 2 )
      {
        v10 = v4;
        glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v20);
        while ( 1 )
        {
          glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v21);
          if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                  (glwebtools::JsonReader::Iterator::Self *)v20,
                                  (const glwebtools::JsonReader::Iterator::Self *)v21) == 0 )
          {
            v2 = 0;
            goto LABEL_5;
          }
          glwebtools::JsonReader::Iterator::opMul(
            (glwebtools::JsonReader::Iterator::Self *)v23,
            (glwebtools::Json::ValueIteratorBase::Self *)v20);
          v11 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v23, &v14);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v23);
          if ( !glwebtools::IsOperationSuccess(v11) )
            break;
          *v10++ = v14;
          glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v20);
        }
        v2 = (int)(uintptr_t)(v11);
      }
LABEL_5:
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v22);
    }
  }
  v5 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v2) )
    return v2;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "e", (int)(uintptr_t)(&v12) + 1);
  v17[1] = (int)(uintptr_t)(self + 2);
  v2 = glwebtools::opShr_63f692(a2, (int)(uintptr_t)(v17));
  v8 = (void *)(v17[0] - 12);
  if ( (uint32_t *)(v17[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v2) )
    return v2;
  glwebtools::SecureString::hash(&v13, self + 2);
  g4_std::string::assign_str(self + 3, &v13);
  v9 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808 )
  {
    v2 = 0;
    if ( __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v9);
    return v2;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureString::write  (binary VA: 0x13e77b0)
// Original: glwebtools::SecureString::write
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::SecureString::write(glwebtools::SecureString::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;
  glwebtools::Self *v3;
  void *v4;
  void *v5;
  const glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  glwebtools::Self *v10;
  void *v11;
  int v12;
  const glwebtools::Json::Value::Self *v13;
  glwebtools::Json::Value::Self *v14;
  glwebtools::Json::Value::Self *v15;
  glwebtools::Json::Value::Self *Root;
  typedef glwebtools::SecureString::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef glwebtools::SecureString::Self *_g4_t_v20;
  typedef int _g4_t_v21[2];
  typedef int _g4_t_v22[2];
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[20];
  typedef uint8_t _g4_t_v26[48];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v18)) > _g4_s1 ? (27u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v19)) > _g4_s2 ? (32u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v20)) > _g4_s3 ? (36u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v21)) > _g4_s4 ? (40u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v22)) > _g4_s5 ? (48u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v23)) > _g4_s6 ? (56u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v24)) > _g4_s7 ? (72u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v25)) > _g4_s8 ? (88u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v26)) > _g4_s9 ? (108u + sizeof(_g4_t_v26)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 27u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "s", (int)(uintptr_t)(&v18));
  v20 = self;
  g4_std::string::construct_copy(v22, &v19);
  v17 = v20;
  v22[1] = (int)(uintptr_t)(v20);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct(v24, 7);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v24);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v24);
  }
  v2 = 0;
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v25);
  while ( 1 )
  {
    if ( (uint8_t)glwebtools::JsonWriter::isArray((glwebtools::JsonWriter::Self *)v25) == 0 )
    {
      glwebtools::Json::Value::Construct(v23, 6);
      v9 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v25);
      glwebtools::Json::Value::opAssign(v9, (const glwebtools::Json::Value::Self *)v23);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v23);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v26);
    v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v26, *(uint32_t *)((char *)v17 + v2));
    if ( glwebtools::IsOperationSuccess(v3) )
    {
      v7 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v26);
      v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v25);
      glwebtools::Json::Value::append(v8, v7);
      v3 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v26);
    if ( !glwebtools::IsOperationSuccess(v3) )
      break;
    v2 += 4;
    if ( v2 == 8 )
    {
      v3 = nullptr;
      break;
    }
  }
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v13 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v25);
    v14 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v15 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v14, (int)(uintptr_t)(v22));
    glwebtools::Json::Value::opAssign(v15, v13);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v25);
  v4 = (void *)(v22[0] - 12);
  if ( (uint32_t *)(v22[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( !glwebtools::IsOperationSuccess(v3) )
    return v3;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "e", (int)(uintptr_t)(&v18) + 1);
  v21[1] = (int)(uintptr_t)(self) + 8;
  v10 = (glwebtools::Self *)glwebtools::op_std_string_const(a2, (int)(uintptr_t)(v21));
  v11 = (void *)(v21[0] - 12);
  if ( (uint32_t *)(v21[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = 0;
  if ( !glwebtools::IsOperationSuccess(v10) )
    return v10;
  return (glwebtools::Self *)v12;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureString::PrintDebug  (binary VA: 0x13e7ad0)
// Original: glwebtools::SecureString::PrintDebug
// ----------------------------------------------------------------------------
glwebtools::SecureString::Self * glwebtools::SecureString::PrintDebug(glwebtools::SecureString::Self *self, int *a2)
{
  int v3;
  int v4;
  int v5;
  void *v6;
  void *v7;
  uint32_t *v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int (**_g4_t_v15)(int);
  typedef int _g4_t_v16;
  typedef int (**_g4_t_v17)(int);
  typedef uint32_t _g4_t_v18[3];
  typedef int _g4_t_v19;
  typedef void *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t _g4_t_v26[29];
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v15)) > _g4_s5 ? (36u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v16)) > _g4_s6 ? (40u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v17)) > _g4_s7 ? (44u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v18)) > _g4_s8 ? (48u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v19)) > _g4_s9 ? (60u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v20)) > _g4_s10 ? (64u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v21)) > _g4_s11 ? (68u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v22)) > _g4_s12 ? (72u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v23)) > _g4_s13 ? (76u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v24)) > _g4_s14 ? (80u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v25)) > _g4_s15 ? (84u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v26)) > _g4_s16 ? (88u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (204u + sizeof(_g4_t_v27)) > _g4_s17 ? (204u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (205u + sizeof(_g4_t_v28)) > _g4_s18 ? (205u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (208u + sizeof(_g4_t_v29)) > _g4_s19 ? (208u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (212u + sizeof(_g4_t_v30)) > _g4_s20 ? (212u + sizeof(_g4_t_v30)) : _g4_s20,
    _g4_s22 = (216u + sizeof(_g4_t_v31)) > _g4_s21 ? (216u + sizeof(_g4_t_v31)) : _g4_s21,
    _g4_s23 = (220u + sizeof(_g4_t_v32)) > _g4_s22 ? (220u + sizeof(_g4_t_v32)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 204u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 205u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 208u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 212u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 216u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 220u);

  sub_1900810(v26);
  v26[28] = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v26[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v32 = 0;
  v15 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v15 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v16 = 0;
  sub_19119D0((char *)&v15 + (uint32_t)(uintptr_t)(*(v15 - 3)), 0);
  v17 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v18[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v18[-1] + (uint32_t)(uintptr_t)(*(v17 - 3)), 0);
  v15 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v15 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v18[1] = 0;
  v15 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[2] = 0;
  v19 = 0;
  v26[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = nullptr;
  v21 = 0;
  v17 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v22 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v23);
  v24 = 24;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v25 = &dword_213B814;
  sub_19119D0(v26, v18);
  glwebtools::SecureString::decrypt(&v12, a2 + 2, (int)(uintptr_t)(a2));
  v10 = a2[1];
  v11 = *a2;
  g4_std_compat::ostream_write(&v17, "e:", 2);
  v3 = (int)(uintptr_t)(g4_std_compat::ostream_write(&v17, a2[2], *(uint32_t *)(a2[2] - 12)));
  g4_std_compat::ostream_write(v3, "|s1:", 4);
  v4 = (int)(uintptr_t)(sub_192D8B0(v3, v11));
  g4_std_compat::ostream_write(v4, "|s2:", 4);
  v5 = (int)(uintptr_t)(sub_192D8B0(v4, v10));
  g4_std_compat::ostream_write(v5, "|d:", 3);
  g4_std_compat::ostream_write(v5, v12, *(uint32_t *)(v12 - 12));
  v6 = (void *)(v12 - 12);
  if ( (uint32_t *)(v12 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v21 == 0 )
  {
    g4_std::string::assign_str(self, &v25);
    goto LABEL_5;
  }
  if ( v21 > (unsigned int)v19 )
  {
    sub_11A9950(&v14, v20, (uint8_t *)v21);
    g4_std::string::assign_str(self, &v14);
    v7 = (void *)(v14 - 12);
    if ( (uint32_t *)(v14 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
    {
      goto LABEL_9;
    }
  }
  else
  {
    sub_11A9950(&v13, v20, (uint8_t *)v19);
    g4_std::string::assign_str(self, &v13);
    v7 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
LABEL_9:
      g4_std::string::Rep::M_destroy(v7);
    }
  }
LABEL_5:
  v15 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v26[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v17 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v18[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v8 = v25 - 3;
  if ( v25 - 3 != dword_213B808 && __sync_fetch_and_add(v25 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v23);
  v15 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v15 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v17 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v18[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v15 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v15 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v16 = 0;
  v26[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v26);
  return self;
}


