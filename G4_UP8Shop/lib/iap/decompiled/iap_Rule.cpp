#include "Core/Utils/DecompTypes.h"
#include "iap_Rule.h"

// ============================================================================
// G4_UP8Shop/lib/iap/decompiled/iap_Rule.cpp
// Library: iap | Module: iap_Rule
// Binary Address Span: 0x1533420 .. 0x15344f0 (20 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1533420 (size: 30 bytes)
// Symbol:    _ZN3iap4Rule6ActionC2Ev
// Demangled: iap::Rule::Action::Action(void)
// ============================================================================
// Alternative name is '_ZN3iap4Rule6ActionC1Ev'
struct iap::Rule::Action::Self *iap::Rule::Action::Construct(iap::Rule::Action::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}
// ----------------------------------------------------------------------------
// Function: iap::Rule::Action::Construct  (binary VA: 0x1533440)
// Original: iap::Rule::Action::Action
// ----------------------------------------------------------------------------
iap::Rule::Action::Self * iap::Rule::Action::Construct(iap::Rule::Action::Self *self, char *s, char *a3)
{
  iap::Rule::Action::Self *result;
  size_t v4;
  size_t v5;

  result = (iap::Rule::Action::Self *)&dword_213B814;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( s != nullptr && a3 != nullptr )
  {
    v4 = strlen(s);
    g4_std_compat::string_assign((int)(uintptr_t)(self), s, v4);
    v5 = strlen(a3);
    return (iap::Rule::Action::Self *)g4_std_compat::string_assign((int)(uintptr_t)(self) + 4, a3, v5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::Action::GetServiceName  (binary VA: 0x15334d0)
// Original: iap::Rule::Action::GetServiceName
// ----------------------------------------------------------------------------
int iap::Rule::Action::GetServiceName(iap::Rule::Action::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::Action::GetRequestName  (binary VA: 0x15334e0)
// Original: iap::Rule::Action::GetRequestName
// ----------------------------------------------------------------------------
int iap::Rule::Action::GetRequestName(iap::Rule::Action::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::Action::IsValid  (binary VA: 0x15334f0)
// Original: iap::Rule::Action::IsValid
// ----------------------------------------------------------------------------
bool iap::Rule::Action::IsValid(iap::Rule::Action::Self *self)
{
  bool result;

  result = false;
  if ( *(uint32_t *)(*(uint32_t *)self - 12) != 0 )
    return *(uint32_t *)(*((uint32_t *)self + 1) - 12) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::Action::read  (binary VA: 0x1533510)
// Original: iap::Rule::Action::read
// ----------------------------------------------------------------------------
int iap::Rule::Action::read(iap::Rule::Action::Self *self, const glwebtools::JsonReader::Self *a2)
{
  int v2;
  const glwebtools::Json::Value::Self *v3;
  void *v4;
  void *v5;
  char IsValid;
  int v8;
  char isObject;
  bool isMember;
  const glwebtools::Json::Value::Self *v11;
  void *v12;
  void *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef iap::Rule::Action::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef iap::Rule::Action::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef uint8_t _g4_t_v25[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v16)) > _g4_s2 ? (30u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v17)) > _g4_s3 ? (36u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v18)) > _g4_s4 ? (40u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v19)) > _g4_s5 ? (52u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v20)) > _g4_s6 ? (56u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v21)) > _g4_s7 ? (68u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v22)) > _g4_s8 ? (72u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v23)) > _g4_s9 ? (84u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v24)) > _g4_s10 ? (88u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v25)) > _g4_s11 ? (100u + sizeof(_g4_t_v25)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 30u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 84u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "service", (int)(uintptr_t)(&v16));
  v18 = self;
  v2 = -2147483645;
  g4_std::string::construct_copy(&v21, &v17);
  v22 = v18;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
  {
    LOWORD(v2) = 2;
    if ( glwebtools::Json::Value::isMember(a2, (char **)&v21) )
    {
      v3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v21);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v25, v3);
      v2 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v25, (int)(uintptr_t)(v22));
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v25);
    }
  }
  v4 = (void *)(v21 - 12);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( v2 != 0 )
    return v2;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "request", (int)(uintptr_t)(&v16) + 1);
  v20 = (char *)self + 4;
  g4_std::string::construct_copy(&v23, &v19);
  v24 = v20;
  IsValid = glwebtools::JsonReader::IsValid(a2);
  v8 = -2147483645;
  if ( IsValid != 0 )
  {
    isObject = glwebtools::JsonReader::isObject(a2);
    v8 = -2147483645;
    if ( isObject != 0 )
    {
      isMember = glwebtools::Json::Value::isMember(a2, (char **)&v23);
      v8 = -2147483646;
      if ( isMember )
      {
        v11 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v23);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v25, v11);
        v14 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v25, (int)(uintptr_t)(v24));
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v25);
        v8 = v14;
      }
    }
  }
  v12 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    v15 = v8;
    g4_std::string::Rep::M_destroy(v12);
    v8 = v15;
  }
  v13 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808 )
  {
    v2 = v8;
    if ( __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v13);
    return v2;
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::Action::write  (binary VA: 0x15337a0)
// Original: iap::Rule::Action::write
// ----------------------------------------------------------------------------
glwebtools::Self * iap::Rule::Action::write(iap::Rule::Action::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;
  glwebtools::Self *v3;
  void *v4;
  void *v5;
  int v7;
  void *v8;
  void *v9;
  const glwebtools::Json::Value::Self *v10;
  glwebtools::Json::Value::Self *v11;
  glwebtools::Json::Value::Self *v12;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v14;
  glwebtools::Json::Value::Self *v15;
  glwebtools::Json::Value::Self *v16;
  glwebtools::Json::Value::Self *v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef iap::Rule::Action::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23[4];
  typedef int _g4_t_v24[3];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[32];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (14u + sizeof(_g4_t_v18)) > _g4_s0 ? (14u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v19)) > _g4_s1 ? (20u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v20)) > _g4_s2 ? (24u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v21)) > _g4_s3 ? (36u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v22)) > _g4_s4 ? (40u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v23)) > _g4_s5 ? (52u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v24)) > _g4_s6 ? (68u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v25)) > _g4_s7 ? (80u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v26)) > _g4_s8 ? (96u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v27)) > _g4_s9 ? (112u + sizeof(_g4_t_v27)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 14u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 112u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "service", (int)(uintptr_t)(&v18));
  v20 = self;
  g4_std::string::construct_copy(v23, &v19);
  v2 = (int)(uintptr_t)(v20);
  v23[1] = (int)(uintptr_t)(v20);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v25), (char *)&loc_6 + 1);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v25);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v25);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v27);
  v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v27, v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v10 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v27);
    v11 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v12 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v11, (char **)v23);
    glwebtools::Json::Value::opAssign(v12, v10);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v27);
  v4 = (void *)(v23[0] - 12);
  if ( (uint32_t *)(v23[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( v3 == nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "request", (int)(uintptr_t)(&v18) + 1);
    v22 = (char *)self + 4;
    g4_std::string::construct_copy(v24, &v21);
    v7 = (int)(uintptr_t)(v22);
    v24[1] = (int)(uintptr_t)(v22);
    if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v26), (char *)&loc_6 + 1);
      v17 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(v17, (const glwebtools::Json::Value::Self *)v26);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v26);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v27);
    v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v27, v7);
    if ( glwebtools::IsOperationSuccess(v3) )
    {
      v14 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v27);
      v15 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      v16 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v15, (char **)v24);
      glwebtools::Json::Value::opAssign(v16, v14);
      v3 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v27);
    v8 = (void *)(v24[0] - 12);
    if ( (uint32_t *)(v24[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    v9 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
  }
  return v3;
}



// ============================================================================
// Address:   0x1533ab0 (size: 48 bytes)
// Symbol:    _ZN3iap4RuleC1Ev
// Demangled: iap::Rule::Rule(void)
// ============================================================================
// Alternative name is '_ZN3iap4RuleC2Ev'
struct iap::Rule::Self *iap::Rule::Construct(iap::Rule::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: iap::Rule::Construct  (binary VA: 0x1533ae0)
// Original: iap::Rule::Rule
// ----------------------------------------------------------------------------
iap::Rule::Self * iap::Rule::Construct(iap::Rule::Self *self, char *s)
{
  iap::Rule::Self *result;
  size_t v3;

  result = (iap::Rule::Self *)&dword_213B814;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  if ( s != nullptr )
  {
    v3 = strlen(s);
    return (iap::Rule::Self *)g4_std_compat::string_assign((int)(uintptr_t)(self), s, v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::GetName  (binary VA: 0x1533b50)
// Original: iap::Rule::GetName
// ----------------------------------------------------------------------------
int iap::Rule::GetName(iap::Rule::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::GetAction  (binary VA: 0x1533b60)
// Original: iap::Rule::GetAction
// ----------------------------------------------------------------------------
int iap::Rule::GetAction(iap::Rule::Self *self, unsigned int a2, iap::Rule::Action::Self *a3)
{
  int v3;
  int result;
  int v5;
  int v6;

  v3 = *((uint32_t *)self + 1);
  result = -2147483646;
  if ( a2 < (*((uint32_t *)self + 2) - v3) >> 3 )
  {
    v6 = v3 + 8 * a2;
    v5 = v6 + 4;
    g4_std::string::assign_str(a3, v6);
    g4_std::string::assign_str((char *)a3 + 4, v5);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::GetActionCount  (binary VA: 0x1533bd0)
// Original: iap::Rule::GetActionCount
// ----------------------------------------------------------------------------
int iap::Rule::GetActionCount(iap::Rule::Self *self)
{
  return (*((uint32_t *)self + 2) - *((uint32_t *)self + 1)) >> 3;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::Begin  (binary VA: 0x1533be0)
// Original: iap::Rule::Begin
// ----------------------------------------------------------------------------
iap::Rule::Self * iap::Rule::Begin(iap::Rule::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::End  (binary VA: 0x1533bf0)
// Original: iap::Rule::End
// ----------------------------------------------------------------------------
iap::Rule::Self * iap::Rule::End(iap::Rule::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 8);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::IsValid  (binary VA: 0x1533c00)
// Original: iap::Rule::IsValid
// ----------------------------------------------------------------------------
int iap::Rule::IsValid(iap::Rule::Self *self)
{
  int result;
  iap::Rule::Action::Self *v2;
  typedef iap::Rule::Action::Self *_g4_t_v3;
  typedef iap::Rule::Action::Self *_g4_t_v4[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v4)) > _g4_s1 ? (28u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 28u);

  result = 0;
  if ( *(uint32_t *)(*(uint32_t *)self - 12) != 0 )
  {
    iap::Rule::Begin((iap::Rule::Self *)v4, (int)(uintptr_t)(self));
    v2 = v4[0];
    do
    {
      iap::Rule::End((iap::Rule::Self *)v4, (int)(uintptr_t)(self));
      if ( v2 == v4[0] )
        return 1;
      v3 = v2;
      v2 = (iap::Rule::Action::Self *)((char *)v2 + 8);
    }
    while ( iap::Rule::Action::IsValid(v3) );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::Reset  (binary VA: 0x1533ca0)
// Original: iap::Rule::Reset
// ----------------------------------------------------------------------------
iap::Rule::Self * iap::Rule::Reset(iap::Rule::Self ***self)
{
  iap::Rule::Self *result;
  iap::Rule::Self **v2;
  iap::Rule::Self **v3;
  iap::Rule::Self *v4;
  uint32_t *v5;
  iap::Rule::Self **v6;

  g4_std::string::clear(self, 0, *(*self - 3), 0);
  result = (iap::Rule::Self *)self;
  v2 = *(self + 1);
  v6 = *(self + 2);
  if ( v2 != v6 )
  {
    v3 = *(self + 1);
    do
    {
      v4 = v3[1];
      if ( (uint32_t *)((char *)v4 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v4 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((char *)v4 - 12);
      }
      result = *v3;
      v5 = (uint32_t *)((char *)*v3 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)result - 1, 0xFFFFFFFF) <= 0 )
        result = (g4_std::string::Rep::M_destroy(v5), (iap::Rule::Self *)0);
      v3 += 2;
    }
    while ( v6 != v3 );
  }
  *(self + 2) = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::write  (binary VA: 0x1533d80)
// Original: iap::Rule::write
// ----------------------------------------------------------------------------
glwebtools::Self * iap::Rule::write(iap::Rule::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;
  glwebtools::Self *v3;
  void *v4;
  void *v5;
  char *v7;
  iap::Rule::Action::Self *v8;
  iap::Rule::Action::Self *v9;
  glwebtools::Json::Value::Self *v10;
  glwebtools::Json::Value::Self *v11;
  glwebtools::Json::Value::Self *v12;
  void *v13;
  void *v14;
  const glwebtools::Json::Value::Self *v15;
  glwebtools::Json::Value::Self *v16;
  glwebtools::Json::Value::Self *v17;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v19;
  const glwebtools::Json::Value::Self *v20;
  glwebtools::Json::Value::Self *v21;
  glwebtools::Json::Value::Self *v22;
  typedef const glwebtools::Json::Value::Self *_g4_t_v23;
  typedef iap::Rule::Action::Self *_g4_t_v24;
  typedef glwebtools::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef iap::Rule::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31[4];
  typedef int _g4_t_v32[2];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[20];
  typedef int _g4_t_v38[8];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v25)) > _g4_s2 ? (16u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v26)) > _g4_s3 ? (30u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v27)) > _g4_s4 ? (36u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v28)) > _g4_s5 ? (40u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v29)) > _g4_s6 ? (52u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v30)) > _g4_s7 ? (56u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v31)) > _g4_s8 ? (68u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v32)) > _g4_s9 ? (84u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v33)) > _g4_s10 ? (92u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v34)) > _g4_s11 ? (108u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v35)) > _g4_s12 ? (124u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (140u + sizeof(_g4_t_v36)) > _g4_s13 ? (140u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (156u + sizeof(_g4_t_v37)) > _g4_s14 ? (156u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (176u + sizeof(_g4_t_v38)) > _g4_s15 ? (176u + sizeof(_g4_t_v38)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 30u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 140u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 156u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 176u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "name", (int)(uintptr_t)(&v26));
  v28 = self;
  g4_std::string::construct_copy(v32, &v27);
  v2 = (int)(uintptr_t)(v28);
  v32[1] = (int)(uintptr_t)(v28);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v34), (char *)&loc_6 + 1);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v34);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v34);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v38);
  v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v38, v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v15 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v38);
    v16 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v17 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v16, (char **)v32);
    glwebtools::Json::Value::opAssign(v17, v15);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v38);
  v4 = (void *)(v32[0] - 12);
  if ( (uint32_t *)(v32[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( v3 != nullptr )
    return v3;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "actions", (int)(uintptr_t)(&v26) + 1);
  v30 = (char *)self + 4;
  g4_std::string::construct_copy(v31, &v29);
  v7 = v30;
  v31[1] = (int)(uintptr_t)(v30);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v33), (char *)&loc_6 + 1);
    v19 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v19, (const glwebtools::Json::Value::Self *)v33);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v33);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v37);
  v8 = *((iap::Rule::Action::Self **)v7 + 1);
  v9 = *(iap::Rule::Action::Self **)v7;
  v24 = v8;
  v25 = nullptr;
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      if ( (uint8_t)glwebtools::JsonWriter::isArray((glwebtools::JsonWriter::Self *)v37) == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v35), &loc_6);
        v11 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v37);
        glwebtools::Json::Value::opAssign(v11, (const glwebtools::Json::Value::Self *)v35);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v35);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v38);
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v36), nullptr);
      v10 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v38);
      glwebtools::Json::Value::opAssign(v10, (const glwebtools::Json::Value::Self *)v36);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v36);
      v25 = iap::Rule::Action::write(v9, (glwebtools::JsonWriter::Self *)v38);
      if ( glwebtools::IsOperationSuccess(v25) )
      {
        v23 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v38);
        v12 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v37);
        glwebtools::Json::Value::append(v12, v23);
        v25 = nullptr;
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v38);
      if ( !glwebtools::IsOperationSuccess(v25) )
        break;
      v9 = (iap::Rule::Action::Self *)((char *)v9 + 8);
      if ( v24 == v9 )
      {
        v25 = nullptr;
        break;
      }
    }
  }
  if ( glwebtools::IsOperationSuccess(v25) )
  {
    v20 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v37);
    v21 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v22 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v21, (char **)v31);
    glwebtools::Json::Value::opAssign(v22, v20);
    v25 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v37);
  v13 = (void *)(v31[0] - 12);
  if ( (uint32_t *)(v31[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808 )
  {
    v3 = v25;
    if ( __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v14);
    return v3;
  }
  return v25;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::AddAction  (binary VA: 0x1534210)
// Original: iap::Rule::AddAction
// ----------------------------------------------------------------------------
int iap::Rule::AddAction(iap::Rule::Self *self, const iap::Rule::Action::Self *a2)
{
  bool IsValid;
  int v3;
  int v4;
  int v5;

  IsValid = iap::Rule::Action::IsValid((iap::Rule::Action::Self *)(a2));
  v3 = -2147483646;
  if ( IsValid )
  {
    v4 = *((uint32_t *)self + 2);
    if ( v4 == *((uint32_t *)self + 3) )
    {
      g4_std::vector_iap_Rule_Action_glwebtoo_4daa0c::M_insert_aux(
        (char *)self + 4,
        v4,
        a2);
      return 0;
    }
    else
    {
      v5 = 0;
      if ( v4 != 0 )
      {
        g4_std::string::construct_copy(v4, a2);
        g4_std::string::construct_copy(v4 + 4, (char *)a2 + 4);
        v5 = *((uint32_t *)self + 2);
      }
      v3 = 0;
      *((uint32_t *)self + 2) = v5 + 8;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::AddAction  (binary VA: 0x15342b0)
// Original: iap::Rule::AddAction
// ----------------------------------------------------------------------------
int iap::Rule::AddAction(iap::Rule::Self *self, const char **a2, unsigned int a3)
{
  int result;
  unsigned int v5;
  int v6;
  bool IsValid;
  int v8;
  void *v9;
  void *v10;
  typedef const char **_g4_t_v11;
  typedef const char **_g4_t_v12;
  typedef const char **_g4_t_v13;
  typedef int _g4_t_v14;
  typedef void *_g4_t_v15;
  typedef void *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[6];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);

  result = 0;
  if ( a3 != 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v11 = a2;
      iap::Rule::Action::Construct((iap::Rule::Action::Self *)&v17, (char *)a2[v5], (char *)a2[v5 + 1]);
      IsValid = iap::Rule::Action::IsValid((iap::Rule::Action::Self *)&v17);
      a2 = v11;
      if ( !IsValid )
        break;
      v8 = *((uint32_t *)self + 2);
      if ( v8 == *((uint32_t *)self + 3) )
      {
        g4_std::vector_iap_Rule_Action_glwebtoo_4daa0c::M_insert_aux(
          (char *)self + 4,
          v8,
          &v17);
        a2 = v11;
      }
      else
      {
        v6 = 0;
        if ( v8 != 0 )
        {
          v14 = *((uint32_t *)self + 2);
          g4_std::string::construct_copy(v8, &v17);
          g4_std::string::construct_copy(v14 + 4, v18);
          v6 = *((uint32_t *)self + 2);
          a2 = v11;
        }
        *((uint32_t *)self + 2) = v6 + 8;
      }
      v15 = (void *)(v18[0] - 12);
      if ( (uint32_t *)(v18[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v13 = a2;
        g4_std::string::Rep::M_destroy(v15);
        a2 = v13;
      }
      v16 = (void *)(v17 - 12);
      if ( (uint32_t *)(v17 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
      {
        v12 = a2;
        g4_std::string::Rep::M_destroy(v16);
        a2 = v12;
      }
      v5 += 2;
      if ( v5 >= a3 - 1 )
        return 0;
    }
    v9 = (void *)(v18[0] - 12);
    if ( (uint32_t *)(v18[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    v10 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) == dword_213B808 )
    {
      return -2147483646;
    }
    else
    {
      result = -2147483646;
      if ( __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
        return -2147483646;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Rule::read  (binary VA: 0x15344f0)
// Original: iap::Rule::read
// ----------------------------------------------------------------------------
int iap::Rule::read(iap::Rule::Self *self, const glwebtools::JsonReader::Self *a2)
{
  glwebtools::Json::Value::Self *v2;
  int v3;
  const glwebtools::Json::Value::Self *v4;
  void *v5;
  void *v6;
  const glwebtools::Json::Value::Self *v8;
  glwebtools::Self **v9;
  glwebtools::Self *v10;
  glwebtools::Self *v11;
  char *v12;
  int v13;
  uint32_t *v14;
  glwebtools::Self *v15;
  glwebtools::Self *v16;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  void *v22;
  typedef glwebtools::Self **_g4_t_v23;
  typedef glwebtools::Self *_g4_t_v24;
  typedef glwebtools::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef glwebtools::Self *_g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef glwebtools::Self **_g4_t_v33;
  typedef int _g4_t_v34;
  typedef glwebtools::Self **_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39[3];
  typedef int _g4_t_v40[2];
  typedef uint8_t _g4_t_v41[8];
  typedef uint8_t _g4_t_v42[16];
  typedef uint32_t _g4_t_v43[10];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v27)) > _g4_s4 ? (12u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v28)) > _g4_s5 ? (20u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (21u + sizeof(_g4_t_v29)) > _g4_s6 ? (21u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v30)) > _g4_s7 ? (32u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v31)) > _g4_s8 ? (36u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v32)) > _g4_s9 ? (48u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v33)) > _g4_s10 ? (52u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v34)) > _g4_s11 ? (64u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v35)) > _g4_s12 ? (68u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v36)) > _g4_s13 ? (80u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v37)) > _g4_s14 ? (84u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v38)) > _g4_s15 ? (96u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v39)) > _g4_s16 ? (100u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v40)) > _g4_s17 ? (112u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v41)) > _g4_s18 ? (120u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v42)) > _g4_s19 ? (128u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v43)) > _g4_s20 ? (144u + sizeof(_g4_t_v43)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 21u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 120u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 128u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);

  v43[6] = (uint32_t)(uintptr_t)(&self);
  v2 = (glwebtools::Json::Value::Self *)(a2);
  v25 = (glwebtools::Self *)(self);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "name", (int)(uintptr_t)(&v28));
  v31 = (int)(uintptr_t)(v25);
  v3 = -2147483645;
  g4_std::string::construct_copy(&v36, &v30);
  v37 = v31;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(v2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(v2) != 0 )
  {
    LOWORD(v3) = 2;
    if ( glwebtools::Json::Value::isMember(v2, (char **)&v36) )
    {
      v4 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v2, (const char **)&v36);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v42, v4);
      v3 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v42, v37);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v42);
    }
  }
  v5 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  if ( v3 != 0 )
    return v3;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "actions", (int)(uintptr_t)(&v29));
  v33 = (glwebtools::Self **)((char *)v25 + 4);
  g4_std::string::construct_copy(&v34, &v32);
  v35 = v33;
  v26 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(v2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(v2) != 0 )
  {
    v26 = -2147483646;
    if ( glwebtools::Json::Value::isMember(v2, (char **)&v34) )
    {
      v8 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v2, (const char **)&v34);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v42, v8);
      v9 = v35;
      v10 = *v35;
      v27 = *v35;
      v24 = v35[1];
      if ( *v35 != v24 )
      {
        v23 = v35;
        v11 = *v35;
        v12 = (char *)v10 + 4;
        do
        {
          v13 = *(uint32_t *)&v12[v11 - v27];
          if ( (uint32_t *)(v13 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v13 - 12));
          }
          v14 = (uint32_t *)(*(uint32_t *)v11 - 12);
          if ( v14 != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v11 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v14);
          }
          v11 = (glwebtools::Self *)((char *)v11 + 8);
        }
        while ( v24 != v11 );
        v9 = v23;
        v10 = v27;
      }
      v9[1] = v10;
      glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v40);
      while ( 1 )
      {
        glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v41);
        if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                (glwebtools::JsonReader::Iterator::Self *)v40,
                                (const glwebtools::JsonReader::Iterator::Self *)v41) == 0 )
        {
          v26 = 0;
          goto LABEL_32;
        }
        iap::Rule::Action::Construct((iap::Rule::Action::Self *)&v38);
        glwebtools::JsonReader::Iterator::opMul(
          (glwebtools::JsonReader::Iterator::Self *)v43,
          (glwebtools::Json::ValueIteratorBase::Self *)v40);
        v26 = -2147483645;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v43) != 0 )
          v26 = iap::Rule::Action::read((iap::Rule::Action::Self *)&v38, (const glwebtools::JsonReader::Self *)v43);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v43);
        if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v26) )
          break;
        v15 = v9[1];
        if ( v15 == v9[2] )
        {
          g4_std::vector_iap_Rule_Action_glwebtoo_4daa0c::M_insert_aux(
            v9,
            v9[1],
            &v38);
        }
        else
        {
          v16 = nullptr;
          if ( v15 != nullptr )
          {
            g4_std::string::construct_copy(v9[1], &v38);
            g4_std::string::construct_copy((char *)v15 + 4, v39);
            v16 = v9[1];
          }
          v9[1] = (glwebtools::Self *)((char *)v16 + 8);
        }
        v17 = (void *)(v39[0] - 12);
        if ( (uint32_t *)(v39[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v17);
        }
        v18 = (void *)(v38 - 12);
        if ( (uint32_t *)(v38 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v18);
        }
        glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v40);
      }
      v21 = (void *)(v39[0] - 12);
      if ( (uint32_t *)(v39[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v21);
      }
      v22 = (void *)(v38 - 12);
      if ( (uint32_t *)(v38 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v22);
      }
LABEL_32:
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v42);
    }
  }
  v19 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  v20 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808 )
  {
    v3 = v26;
    if ( __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v20);
    return v3;
  }
  return v26;
}


