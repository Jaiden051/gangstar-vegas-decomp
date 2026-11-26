#include "Core/Utils/DecompTypes.h"
#include "glwebtools_SecureBuffer.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureBuffer::encrypt  (binary VA: 0x13e69b0)
// Original: glwebtools::SecureBuffer::encrypt
// ----------------------------------------------------------------------------
glwebtools::SecureBuffer::Self * glwebtools::SecureBuffer::encrypt(glwebtools::SecureBuffer::Self *self, const uint8_t *a2, unsigned int a3, const unsigned int (*a4)[2])
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
// Function: glwebtools::SecureBuffer::hash  (binary VA: 0x13e6ad0)
// Original: glwebtools::SecureBuffer::hash
// ----------------------------------------------------------------------------
uint32_t * glwebtools::SecureBuffer::hash(uint32_t *a1, glwebtools::Codec::Self **a2)
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
// Function: glwebtools::SecureBuffer::Set  (binary VA: 0x13e6bd0)
// Original: glwebtools::SecureBuffer::Set
// ----------------------------------------------------------------------------
int glwebtools::SecureBuffer::Set(int a1, int a2, int a3, int a4)
{
  int result;
  void *v5;
  uint32_t v6[4];

  *(uint32_t *)a1 = a3;
  *(uint32_t *)(a1 + 4) = a4;
  g4_std::string::assign_str(a1 + 8, a2);
  glwebtools::SecureBuffer::hash(v6, (glwebtools::Codec::Self **)(a1 + 8));
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
// Function: glwebtools::SecureBuffer::Set  (binary VA: 0x13e6c80)
// Original: glwebtools::SecureBuffer::Set
// ----------------------------------------------------------------------------
int glwebtools::SecureBuffer::Set(unsigned int (*self)[2], uint8_t *a2, unsigned int a3)
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

  if ( byte_2119798 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2119798) != 0 )
  {
    dword_21197A0 = glwebtools::Time::GetCurrentTimestamp((glwebtools::Time::Self *)v7) & 0x96748342;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2119798);
  }
  if ( byte_21197A8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_21197A8) != 0 )
  {
    dword_21197B0 = glwebtools::Time::GetCurrentTimestamp((glwebtools::Time::Self *)v6) & 0x1FC8B3B9;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_21197A8);
  }
  (*self)[0] = glwebtools::Codec::Random((glwebtools::Codec::Self *)&dword_21197A0, (unsigned int *)&dword_21197B0);
  (*self)[1] = glwebtools::Codec::Random((glwebtools::Codec::Self *)&dword_21197A0, (unsigned int *)&dword_21197B0);
  glwebtools::SecureBuffer::encrypt((glwebtools::SecureBuffer::Self *)&v8, a2, a3, self);
  g4_std::string::assign_str(&(*self)[2], &v8);
  v3 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  glwebtools::SecureBuffer::hash(v9, (glwebtools::Codec::Self **)&(*self)[2]);
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
// Function: glwebtools::SecureBuffer::size  (binary VA: 0x13e6e40)
// Original: glwebtools::SecureBuffer::size
// ----------------------------------------------------------------------------
int glwebtools::SecureBuffer::size(glwebtools::SecureBuffer::Self *self)
{
  return glwebtools::Codec::GetDecodedBase64DataSize((int *)self + 2, 0);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SecureBuffer::read  (binary VA: 0x13e6e70)
// Original: glwebtools::SecureBuffer::read
// ----------------------------------------------------------------------------
int glwebtools::SecureBuffer::read(glwebtools::Codec::Self **self, const glwebtools::JsonReader::Self *a2)
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
  glwebtools::SecureBuffer::hash((uint32_t *)(&v13), self + 2);
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
// Function: glwebtools::SecureBuffer::write  (binary VA: 0x13e7490)
// Original: glwebtools::SecureBuffer::write
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::SecureBuffer::write(glwebtools::SecureBuffer::Self *self, glwebtools::JsonWriter::Self *a2)
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
  typedef glwebtools::SecureBuffer::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef glwebtools::SecureBuffer::Self *_g4_t_v20;
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
// Function: glwebtools::SecureBuffer::decrypt  (binary VA: 0x13e7f90)
// Original: glwebtools::SecureBuffer::decrypt
// ----------------------------------------------------------------------------
uint32_t * glwebtools::SecureBuffer::decrypt(uint32_t *a1, int *a2, int a3)
{
  size_t n;
  uint8_t *v5;
  size_t v6;
  void *src;
  size_t v8;
  char *dest;
  bool v10;
  size_t v11;
  typedef size_t _g4_t_v12;
  typedef uint8_t _g4_t_v13[5];
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char _g4_t_v16[76];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v13)) > _g4_s1 ? (19u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 19u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  if ( *(uint32_t *)(*a2 - 12) != 0 )
  {
    glwebtools::Codec::GenerateBase64CustomKey((glwebtools::Codec::Self *)v16, *(char **)a3, *(uint32_t *)(a3 + 4));
    n = glwebtools::Codec::GetDecodedBase64DataSize(a2, 0);
    v5 = nullptr;
    v14 = 0;
    v15 = 0;
    memset(v13, 0, sizeof(v13));
    if ( n != 0 )
    {
      g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v13[1]), nullptr, n, v13);
      v5 = *(uint8_t **)&v13[1];
    }
    v6 = 0;
    glwebtools::Codec::DecodeBase64Custom((glwebtools::Codec::Self **)a2, v5, v16);
    src = *(void **)&v13[1];
    v8 = v14 - *(uint32_t *)&v13[1];
    dest = nullptr;
    v10 = v14 == *(uint32_t *)&v13[1];
    v11 = v14 - *(uint32_t *)&v13[1];
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    if ( !v10 )
    {
      v12 = v8;
      dest = (char *)opNew(v8);
      src = *(void **)&v13[1];
      v11 = v12;
      v8 = v14 - *(uint32_t *)&v13[1];
      v6 = v14 - *(uint32_t *)&v13[1];
    }
    *a1 = (uint32_t)(uintptr_t)(dest);
    a1[1] = (uint32_t)(uintptr_t)(dest);
    a1[2] = (uint32_t)(uintptr_t)(&dest[v11]);
    if ( v8 != 0 )
    {
      memmove(dest, src, v6);
      src = *(void **)&v13[1];
    }
    a1[1] = (uint32_t)(uintptr_t)(&dest[v6]);
    if ( src != nullptr )
      opDelete(src);
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return a1;
}


