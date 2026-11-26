#include "Core/Utils/DecompTypes.h"
#include "iap_Result.h"

// ----------------------------------------------------------------------------
// Function: iap::Result::Destroy  (binary VA: 0x1514f20)
// Original: iap::Result::~Result
// ----------------------------------------------------------------------------
void iap::Result::Destroy(iap::Result::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20962B8);
  v1 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::Result::Destroy_ea1514fe0  (binary VA: 0x1514fe0)
// Original: iap::Result::~Result
// ----------------------------------------------------------------------------
void iap::Result::Destroy_ea1514fe0(iap::Result::Self *self)
{
  iap::Result::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::Result::read  (binary VA: 0x1515020)
// Original: iap::Result::read
// ----------------------------------------------------------------------------
int iap::Result::read(iap::Result::Self *self, const glwebtools::JsonReader::Self *a2)
{
  int v2;
  void *v3;
  void *v4;
  void *v6;
  void *v7;
  const glwebtools::Json::Value::Self *v8;
  const glwebtools::Json::Value::Self *v9;
  void *v10;
  typedef glwebtools::Self *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef int *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (33u + sizeof(_g4_t_v13)) > _g4_s2 ? (33u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v14)) > _g4_s3 ? (40u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v15)) > _g4_s4 ? (56u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v16)) > _g4_s5 ? (60u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v17)) > _g4_s6 ? (72u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v18)) > _g4_s7 ? (76u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v19)) > _g4_s8 ? (88u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v20)) > _g4_s9 ? (92u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v21)) > _g4_s10 ? (104u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v22)) > _g4_s11 ? (108u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v23)) > _g4_s12 ? (120u + sizeof(_g4_t_v23)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 33u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 108u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 120u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "iap_error", (int)(uintptr_t)(&v13));
  v16 = (int *)((char *)self + 4);
  g4_std::string::construct_copy(&v17, &v15);
  v18 = v16;
  v2 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
  {
    LOWORD(v2) = 2;
    if ( glwebtools::Json::Value::isMember(a2, (char **)&v17) )
    {
      v8 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v17);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v23, v8);
      v2 = glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v23, v18);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v23);
    }
  }
  v3 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( v2 == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "iap_error_string", (int)(uintptr_t)(&v13) + 3);
    v20 = (char *)self + 8;
    g4_std::string::construct_copy(&v21, &v19);
    v22 = v20;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
      && glwebtools::Json::Value::isMember(a2, (char **)&v21) )
    {
      v9 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v21);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v23, v9);
      v12 = v22;
      if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v23) != 0 )
      {
        v14[0] = (int)(uintptr_t)(&dword_213B814);
        v11 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v23, (int)(uintptr_t)(v14));
        if ( glwebtools::IsOperationSuccess(v11) )
        {
          g4_std::string::assign_str(v12, v14);
          v12[6] = 1;
        }
        else
        {
          v2 = (int)(uintptr_t)(v11);
        }
        v10 = (void *)(v14[0] - 12);
        if ( (uint32_t *)(v14[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v23);
    }
    v6 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::Result::write  (binary VA: 0x1515370)
// Original: iap::Result::write
// ----------------------------------------------------------------------------
glwebtools::Self * iap::Result::write(iap::Result::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int *v2;
  glwebtools::Self *v3;
  void *v4;
  void *v5;
  void *v7;
  void *v8;
  const glwebtools::Json::Value::Self *v9;
  glwebtools::Json::Value::Self *v10;
  glwebtools::Json::Value::Self *v11;
  glwebtools::Json::Value::Self *Root;
  char isObject;
  int v14;
  const glwebtools::Json::Value::Self *v15;
  glwebtools::Json::Value::Self *v16;
  glwebtools::Json::Value::Self *v17;
  glwebtools::Json::Value::Self *v18;
  typedef char *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int *_g4_t_v23;
  typedef int _g4_t_v24[4];
  typedef int _g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27[3];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[32];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v21)) > _g4_s2 ? (30u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v22)) > _g4_s3 ? (36u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v23)) > _g4_s4 ? (40u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v24)) > _g4_s5 ? (52u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v25)) > _g4_s6 ? (68u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v26)) > _g4_s7 ? (72u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v27)) > _g4_s8 ? (84u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v28)) > _g4_s9 ? (96u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v29)) > _g4_s10 ? (112u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v30)) > _g4_s11 ? (128u + sizeof(_g4_t_v30)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 30u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 112u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "iap_error", (int)(uintptr_t)(&v21));
  v23 = (int *)((char *)self + 4);
  g4_std::string::construct_copy(v24, &v22);
  v2 = v23;
  v24[1] = (int)(uintptr_t)(v23);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v28), (char *)&loc_6 + 1);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v28);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v28);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v30);
  v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v30, *v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v9 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v30);
    v10 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v11 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v10, (char **)v24);
    glwebtools::Json::Value::opAssign(v11, v9);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v30);
  v4 = (void *)(v24[0] - 12);
  if ( (uint32_t *)(v24[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( v3 == nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "iap_error_string", (int)(uintptr_t)(&v21) + 3);
    v26 = (char *)self + 8;
    g4_std::string::construct_copy(v27, &v25);
    v27[1] = (int)(uintptr_t)(v26);
    if ( v26[6] != 0 )
    {
      v19 = v26;
      isObject = glwebtools::JsonWriter::isObject(a2);
      v14 = (int)(uintptr_t)(v19);
      if ( isObject == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v29), (char *)&loc_6 + 1);
        v18 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v18, (const glwebtools::Json::Value::Self *)v29);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v29);
        v14 = (int)(uintptr_t)(v19);
      }
      v20 = v14;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v30);
      v3 = nullptr;
      if ( *(uint8_t *)(v20 + 6) != 0 )
        v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v30, v20);
      if ( glwebtools::IsOperationSuccess(v3) )
      {
        v15 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v30);
        v16 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v17 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v16, (char **)v27);
        glwebtools::Json::Value::opAssign(v17, v15);
        v3 = nullptr;
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v30);
    }
    v7 = (void *)(v27[0] - 12);
    if ( (uint32_t *)(v27[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
  }
  return v3;
}



// ============================================================================
// Address:   0x1515710 (size: 68 bytes)
// Symbol:    _ZN3iap6ResultC1Ev
// Demangled: iap::Result::Result(void)
// ============================================================================
// Alternative name is '_ZN3iap6ResultC2Ev'
struct iap::Result::Self *iap::Result::Result(iap::Result::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20962B8);
  *((uint32_t *)self + 1) = 0x80000000;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 14) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 22) = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 30) = 0;
  *((uint8_t *)self + 38) = 0;
  return self;
}

