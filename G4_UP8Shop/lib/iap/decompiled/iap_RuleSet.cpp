#include "Core/Utils/DecompTypes.h"
#include "iap_RuleSet.h"

// ============================================================================
// G4_UP8Shop/lib/iap/decompiled/iap_RuleSet.cpp
// Library: iap | Module: iap_RuleSet
// Binary Address Span: 0x1534eb0 .. 0x1535b20 (11 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1534eb0 (size: 57 bytes)
// Symbol:    _ZN3iap7RuleSetC1Ev
// Demangled: iap::RuleSet::RuleSet(void)
// ============================================================================
// Alternative name is '_ZN3iap7RuleSetC2Ev'
struct iap::RuleSet::Self *iap::RuleSet::Construct(iap::RuleSet::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  return self;
}
// ----------------------------------------------------------------------------
// Function: iap::RuleSet::Construct  (binary VA: 0x1534ef0)
// Original: iap::RuleSet::RuleSet
// ----------------------------------------------------------------------------
iap::RuleSet::Self * iap::RuleSet::Construct(iap::RuleSet::Self *self, char *s)
{
  iap::RuleSet::Self *result;
  size_t v3;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = 0;
  result = (iap::RuleSet::Self *)((char *)self + 8);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  if ( s != nullptr )
  {
    v3 = strlen(s);
    return (iap::RuleSet::Self *)g4_std_compat::string_assign((int)(uintptr_t)(self), s, v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::RuleSet::AddRule  (binary VA: 0x1534f70)
// Original: iap::RuleSet::AddRule
// ----------------------------------------------------------------------------
int iap::RuleSet::AddRule(iap::RuleSet::Self *self, const iap::Rule::Self *a2)
{
  const iap::Rule::Self *v2;
  iap::RuleSet::Self *v3;
  char IsValid;
  int v5;
  char *v6;
  char *v7;
  char v8;
  const char *s2;
  const char *s1;
  const char *v11;
  int v12;
  const char *v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  const char *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  char *Name;
  char *v33;
  char *v34;
  char *v35;
  char *v36;
  uint32_t *v37;
  uint32_t *v38;
  char *v39;
  int v40;
  int v41;
  int v42;
  iap::RuleSet::Self *v43;
  unsigned int v44;
  unsigned int v45;
  iap::RuleSet::Self *v46;

  v2 = a2;
  v3 = self;
  IsValid = iap::Rule::IsValid(a2);
  v5 = -2147483646;
  if ( IsValid == 0 )
    return v5;
  v6 = *((char **)self + 3);
  v39 = (char *)self + 8;
  if ( v6 != nullptr )
  {
    while ( 1 )
    {
      s2 = (const char *)iap::Rule::GetName((iap::Rule::Self *)(v6 + 16));
      s1 = (const char *)iap::Rule::GetName(a2);
      if ( strcmp(s1, s2) < 0 )
      {
        v7 = *((char **)v6 + 2);
        v8 = 1;
        if ( v7 == nullptr )
          goto LABEL_8;
      }
      else
      {
        v7 = *((char **)v6 + 3);
        v8 = 0;
        if ( v7 == nullptr )
        {
LABEL_8:
          v2 = a2;
          v3 = self;
          if ( v8 != 0 )
            goto LABEL_9;
          v36 = v6;
LABEL_11:
          Name = (char *)iap::Rule::GetName(v2);
          v11 = (const char *)iap::Rule::GetName((iap::Rule::Self *)(v36 + 16));
          v12 = strcmp(v11, Name);
          v5 = 0;
          if ( v12 >= 0 )
            return v5;
          LOBYTE(v45) = 1;
          if ( v39 != v6 )
          {
            v33 = (char *)iap::Rule::GetName((iap::Rule::Self *)(v6 + 16));
            v14 = (const char *)iap::Rule::GetName(v2);
            v45 = (unsigned int)strcmp(v14, v33) >> 31;
          }
          v37 = (uint32_t *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
          if ( v37 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v37 + 4, v2);
            v15 = *((uint32_t *)v2 + 2) - *((uint32_t *)v2 + 1);
            v16 = nullptr;
            v37[5] = 0;
            v37[6] = 0;
            v37[7] = 0;
            v17 = 0;
            v18 = v15 >> 3;
            if ( v18 != 0 )
            {
              v34 = (char *)(8 * v18);
              v17 = sub_4EBE70(8 * v18, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
              v16 = v34;
            }
            v37[5] = v17;
            v37[6] = v17;
            v37[7] = (uint32_t)(uintptr_t)(&v16[v17]);
            v19 = *((uint32_t *)v2 + 2);
            v20 = *((uint32_t *)v2 + 1);
            if ( v19 != v20 )
            {
              v40 = (int)(uintptr_t)(v6);
              v43 = v3;
              v21 = v17;
              v22 = v19;
              do
              {
                if ( v21 != 0 )
                {
                  g4_std::string::construct_copy(v21, v20);
                  g4_std::string::construct_copy(v21 + 4, v20 + 4);
                }
                v20 += 8;
                v21 += 8;
              }
              while ( v22 != v20 );
              v17 = v21;
              v3 = v43;
              v6 = (char *)v40;
            }
            v37[6] = v17;
          }
          sub_1904970(v45, v37, v6, v39);
          ++*((uint32_t *)v3 + 6);
          return 0;
        }
      }
      v6 = v7;
    }
  }
  v6 = (char *)self + 8;
LABEL_9:
  if ( *((char **)v3 + 4) != v6 )
  {
    v36 = (char *)sub_19048F0(v6);
    goto LABEL_11;
  }
  LOBYTE(v44) = 1;
  if ( v39 != v6 )
  {
    v35 = (char *)iap::Rule::GetName((iap::Rule::Self *)(v6 + 16));
    v23 = (const char *)iap::Rule::GetName(v2);
    v44 = (unsigned int)strcmp(v23, v35) >> 31;
  }
  v38 = (uint32_t *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v38 != (uint32_t *)-16 )
  {
    g4_std::string::construct_copy(v38 + 4, v2);
    v24 = *((uint32_t *)v2 + 2) - *((uint32_t *)v2 + 1);
    v41 = 0;
    v38[5] = 0;
    v38[6] = 0;
    v38[7] = 0;
    v25 = 0;
    v26 = v24 >> 3;
    if ( v26 != 0 )
    {
      v41 = 8 * v26;
      v25 = sub_4EBE70(8 * v26, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    }
    v38[5] = v25;
    v38[6] = v25;
    v38[7] = v25 + v41;
    v27 = *((uint32_t *)v2 + 2);
    v28 = *((uint32_t *)v2 + 1);
    if ( v27 != v28 )
    {
      v42 = (int)(uintptr_t)(v6);
      v46 = v3;
      v29 = v28;
      v30 = v27;
      v31 = v25;
      do
      {
        if ( v31 != 0 )
        {
          g4_std::string::construct_copy(v31, v29);
          g4_std::string::construct_copy(v31 + 4, v29 + 4);
        }
        v29 += 8;
        v31 += 8;
      }
      while ( v30 != v29 );
      v6 = (char *)v42;
      v25 = v31;
      v3 = v46;
    }
    v38[6] = v25;
  }
  sub_1904970(v44, v38, v6, v39);
  ++*((uint32_t *)v3 + 6);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::RuleSet::GetName  (binary VA: 0x1535380)
// Original: iap::RuleSet::GetName
// ----------------------------------------------------------------------------
int iap::RuleSet::GetName(iap::RuleSet::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: iap::RuleSet::GetRuleCount  (binary VA: 0x1535390)
// Original: iap::RuleSet::GetRuleCount
// ----------------------------------------------------------------------------
int iap::RuleSet::GetRuleCount(iap::RuleSet::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: iap::RuleSet::Begin  (binary VA: 0x15353a0)
// Original: iap::RuleSet::Begin
// ----------------------------------------------------------------------------
iap::RuleSet::Self * iap::RuleSet::Begin(iap::RuleSet::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 16);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::RuleSet::End  (binary VA: 0x15353b0)
// Original: iap::RuleSet::End
// ----------------------------------------------------------------------------
iap::RuleSet::Self * iap::RuleSet::End(iap::RuleSet::Self *self, int a2)
{
  *(uint32_t *)self = a2 + 8;
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::RuleSet::IsValid  (binary VA: 0x15353c0)
// Original: iap::RuleSet::IsValid
// ----------------------------------------------------------------------------
int iap::RuleSet::IsValid(iap::RuleSet::Self *self)
{
  int result;
  int i;
  uint32_t v3[8];

  result = 0;
  if ( *(uint32_t *)(*(uint32_t *)self - 12) != 0 )
  {
    iap::RuleSet::Begin((iap::RuleSet::Self *)v3, (int)(uintptr_t)(self));
    for ( i = v3[0]; ; i = sub_19048E0(i) )
    {
      iap::RuleSet::End((iap::RuleSet::Self *)v3, (int)(uintptr_t)(self));
      if ( i == v3[0] )
        return 1;
      if ( (uint8_t)iap::Rule::IsValid((iap::Rule::Self *)(i + 16)) == 0 )
        break;
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::RuleSet::write  (binary VA: 0x1535460)
// Original: iap::RuleSet::write
// ----------------------------------------------------------------------------
glwebtools::Self * iap::RuleSet::write(iap::RuleSet::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;
  glwebtools::Self *v3;
  void *v4;
  void *v5;
  char *v7;
  char *v8;
  char *v9;
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
  typedef char *_g4_t_v24;
  typedef glwebtools::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef iap::RuleSet::Self *_g4_t_v28;
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
  g4_std::string::construct_copy(v31, &v27);
  v2 = (int)(uintptr_t)(v28);
  v31[1] = (int)(uintptr_t)(v28);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v33), (char *)&loc_6 + 1);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v33);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v33);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v38);
  v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v38, v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v15 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v38);
    v16 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v17 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v16, (char **)v31);
    glwebtools::Json::Value::opAssign(v17, v15);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v38);
  v4 = (void *)(v31[0] - 12);
  if ( (uint32_t *)(v31[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "rules", (int)(uintptr_t)(&v26) + 1);
  v30 = (char *)self + 4;
  g4_std::string::construct_copy(v32, &v29);
  v7 = v30;
  v32[1] = (int)(uintptr_t)(v30);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v34), (char *)&loc_6 + 1);
    v19 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v19, (const glwebtools::Json::Value::Self *)v34);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v34);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v37);
  v8 = v7 + 4;
  v9 = *((char **)v7 + 3);
  v24 = v8;
  v25 = nullptr;
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      if ( (uint8_t)glwebtools::JsonWriter::isArray((glwebtools::JsonWriter::Self *)v37) == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v36), &loc_6);
        v11 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v37);
        glwebtools::Json::Value::opAssign(v11, (const glwebtools::Json::Value::Self *)v36);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v36);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v38);
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v35), nullptr);
      v10 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v38);
      glwebtools::Json::Value::opAssign(v10, (const glwebtools::Json::Value::Self *)v35);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v35);
      v25 = iap::Rule::write((iap::Rule::Self *)(v9 + 16), (glwebtools::JsonWriter::Self *)v38);
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
      v9 = (char *)sub_19048E0(v9);
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
    v22 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v21, (char **)v32);
    glwebtools::Json::Value::opAssign(v22, v20);
    v25 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v37);
  v13 = (void *)(v32[0] - 12);
  if ( (uint32_t *)(v32[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32[0] - 4), 0xFFFFFFFF) <= 0 )
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
// Function: iap::RuleSet::GetRule  (binary VA: 0x1535900)
// Original: iap::RuleSet::GetRule
// ----------------------------------------------------------------------------
int iap::RuleSet::GetRule(iap::RuleSet::Self *self, char *a2, iap::Rule::Self *a3)
{
  char *v3;
  const char *Name;
  const char *v5;
  const char *v6;
  const char *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  void *v11;
  typedef char *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v18)) > _g4_s5 ? (48u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  iap::Rule::Construct((iap::Rule::Self *)v18, a2);
  v3 = *((char **)self + 3);
  v13 = (char *)self + 8;
  if ( v3 == nullptr )
    goto LABEL_19;
  v15 = (char *)self + 8;
  do
  {
    while ( 1 )
    {
      Name = (const char *)iap::Rule::GetName((iap::Rule::Self *)v18);
      v5 = (const char *)iap::Rule::GetName((iap::Rule::Self *)(v3 + 16));
      if ( strcmp(v5, Name) < 0 )
        break;
      v15 = v3;
      v3 = *((char **)v3 + 2);
      if ( v3 == nullptr )
        goto LABEL_6;
    }
    v3 = *((char **)v3 + 3);
  }
  while ( v3 != nullptr );
LABEL_6:
  if ( v13 == v15
    || (v6 = (const char *)iap::Rule::GetName((iap::Rule::Self *)(v15 + 16)),
        v7 = (const char *)iap::Rule::GetName((iap::Rule::Self *)v18),
        strcmp(v7, v6) < 0) )
  {
LABEL_19:
    v15 = (char *)self + 8;
  }
  v16 = (uint32_t *)v18[2];
  v17 = v18[1];
  if ( v18[2] != v18[1] )
  {
    v8 = (uint32_t *)v18[1];
    v14 = v18[1] + 4;
    do
    {
      v9 = *(uint32_t *)((char *)v8 + v14 - v17);
      if ( (uint32_t *)(v9 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v9 - 12));
      }
      v10 = (uint32_t *)(*v8 - 12);
      if ( v10 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v8 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v10);
      v8 += 2;
    }
    while ( v16 != v8 );
    v17 = v18[1];
  }
  if ( v17 != 0 )
    sub_4EBEE0(v17);
  v11 = (void *)(v18[0] - 12);
  if ( (uint32_t *)(v18[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  if ( v13 == v15 )
    return -2147483646;
  g4_std::string::assign_str(a3, v15 + 16);
  g4_std::vector_iap_Rule_Action_glwebtoo_4daa0c::opAssign(
    (std::vector<iap::Rule::Action::Self, glwebtools::SAllocator<iap::Rule::Action::Self, (glwebtools::MemHint)4>> *)((char *)a3 + 4),
    (const std::vector<iap::Rule::Action::Self, glwebtools::SAllocator<iap::Rule::Action::Self, (glwebtools::MemHint)4>> *)(v15 + 20));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::RuleSet::read  (binary VA: 0x1535b20)
// Original: iap::RuleSet::read
// ----------------------------------------------------------------------------
int iap::RuleSet::read(iap::RuleSet::Self *self, const glwebtools::JsonReader::Self *a2)
{
  glwebtools::JsonReader::Self *v2;
  char IsValid;
  int v4;
  const glwebtools::Json::Value::Self *v6;
  uint32_t *v7;
  uint32_t *v8;
  char v9;
  const char *Name;
  const char *v11;
  char *v12;
  int v13;
  uint32_t *v14;
  void *v15;
  void *v16;
  void *v17;
  char isObject;
  bool isMember;
  const glwebtools::Json::Value::Self *v20;
  char *v21;
  int v22;
  uint32_t *v23;
  void *v24;
  const char *v25;
  int v26;
  int v27;
  int v28;
  glwebtools::Self *v29;
  const char *v30;
  int v31;
  int v32;
  glwebtools::Self *v33;
  typedef glwebtools::Self *_g4_t_v34;
  typedef glwebtools::Self *_g4_t_v35;
  typedef size_t _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef char *_g4_t_s2;
  typedef char *_g4_t_s2a;
  typedef char *_g4_t_s2b;
  typedef char *_g4_t_s2c;
  typedef char *_g4_t_s2d;
  typedef char *_g4_t_s2e;
  typedef char *_g4_t_s2f;
  typedef char *_g4_t_s2g;
  typedef char *_g4_t_s2h;
  typedef unsigned int _g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef void *_g4_t_v54;
  typedef void *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef glwebtools::Self *_g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef glwebtools::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef glwebtools::Self *_g4_t_v61;
  typedef glwebtools::Self *_g4_t_v62;
  typedef glwebtools::Self *_g4_t_v63;
  typedef glwebtools::Self *_g4_t_v64;
  typedef char _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75[2];
  typedef uint8_t _g4_t_v76[8];
  typedef int _g4_t_v77;
  typedef glwebtools::Self *_g4_t_v78;
  typedef glwebtools::Self *_g4_t_v79;
  typedef uint8_t _g4_t_v80[16];
  typedef uint32_t _g4_t_v81[10];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v35)) > _g4_s1 ? (0u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v36)) > _g4_s2 ? (12u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v37)) > _g4_s3 ? (12u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_s2)) > _g4_s4 ? (16u + sizeof(_g4_t_s2)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_s2a)) > _g4_s5 ? (16u + sizeof(_g4_t_s2a)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_s2b)) > _g4_s6 ? (16u + sizeof(_g4_t_s2b)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_s2c)) > _g4_s7 ? (16u + sizeof(_g4_t_s2c)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_s2d)) > _g4_s8 ? (16u + sizeof(_g4_t_s2d)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_s2e)) > _g4_s9 ? (16u + sizeof(_g4_t_s2e)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_s2f)) > _g4_s10 ? (16u + sizeof(_g4_t_s2f)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_s2g)) > _g4_s11 ? (16u + sizeof(_g4_t_s2g)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_s2h)) > _g4_s12 ? (16u + sizeof(_g4_t_s2h)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v47)) > _g4_s13 ? (20u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v48)) > _g4_s14 ? (24u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v49)) > _g4_s15 ? (32u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v50)) > _g4_s16 ? (32u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v51)) > _g4_s17 ? (36u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v52)) > _g4_s18 ? (36u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v53)) > _g4_s19 ? (36u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v54)) > _g4_s20 ? (40u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v55)) > _g4_s21 ? (40u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v56)) > _g4_s22 ? (40u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v57)) > _g4_s23 ? (40u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v58)) > _g4_s24 ? (40u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v59)) > _g4_s25 ? (44u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v60)) > _g4_s26 ? (44u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v61)) > _g4_s27 ? (44u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (44u + sizeof(_g4_t_v62)) > _g4_s28 ? (44u + sizeof(_g4_t_v62)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v63)) > _g4_s29 ? (44u + sizeof(_g4_t_v63)) : _g4_s29,
    _g4_s31 = (44u + sizeof(_g4_t_v64)) > _g4_s30 ? (44u + sizeof(_g4_t_v64)) : _g4_s30,
    _g4_s32 = (52u + sizeof(_g4_t_v65)) > _g4_s31 ? (52u + sizeof(_g4_t_v65)) : _g4_s31,
    _g4_s33 = (53u + sizeof(_g4_t_v66)) > _g4_s32 ? (53u + sizeof(_g4_t_v66)) : _g4_s32,
    _g4_s34 = (64u + sizeof(_g4_t_v67)) > _g4_s33 ? (64u + sizeof(_g4_t_v67)) : _g4_s33,
    _g4_s35 = (68u + sizeof(_g4_t_v68)) > _g4_s34 ? (68u + sizeof(_g4_t_v68)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v69)) > _g4_s35 ? (80u + sizeof(_g4_t_v69)) : _g4_s35,
    _g4_s37 = (84u + sizeof(_g4_t_v70)) > _g4_s36 ? (84u + sizeof(_g4_t_v70)) : _g4_s36,
    _g4_s38 = (96u + sizeof(_g4_t_v71)) > _g4_s37 ? (96u + sizeof(_g4_t_v71)) : _g4_s37,
    _g4_s39 = (100u + sizeof(_g4_t_v72)) > _g4_s38 ? (100u + sizeof(_g4_t_v72)) : _g4_s38,
    _g4_s40 = (112u + sizeof(_g4_t_v73)) > _g4_s39 ? (112u + sizeof(_g4_t_v73)) : _g4_s39,
    _g4_s41 = (116u + sizeof(_g4_t_v74)) > _g4_s40 ? (116u + sizeof(_g4_t_v74)) : _g4_s40,
    _g4_s42 = (128u + sizeof(_g4_t_v75)) > _g4_s41 ? (128u + sizeof(_g4_t_v75)) : _g4_s41,
    _g4_s43 = (136u + sizeof(_g4_t_v76)) > _g4_s42 ? (136u + sizeof(_g4_t_v76)) : _g4_s42,
    _g4_s44 = (144u + sizeof(_g4_t_v77)) > _g4_s43 ? (144u + sizeof(_g4_t_v77)) : _g4_s43,
    _g4_s45 = (148u + sizeof(_g4_t_v78)) > _g4_s44 ? (148u + sizeof(_g4_t_v78)) : _g4_s44,
    _g4_s46 = (152u + sizeof(_g4_t_v79)) > _g4_s45 ? (152u + sizeof(_g4_t_v79)) : _g4_s45,
    _g4_s47 = (160u + sizeof(_g4_t_v80)) > _g4_s46 ? (160u + sizeof(_g4_t_v80)) : _g4_s46,
    _g4_s48 = (176u + sizeof(_g4_t_v81)) > _g4_s47 ? (176u + sizeof(_g4_t_v81)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 16u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 16u);
  _g4_t_s2b &s2b = *reinterpret_cast<_g4_t_s2b *>(_g4_sf + 16u);
  _g4_t_s2c &s2c = *reinterpret_cast<_g4_t_s2c *>(_g4_sf + 16u);
  _g4_t_s2d &s2d = *reinterpret_cast<_g4_t_s2d *>(_g4_sf + 16u);
  _g4_t_s2e &s2e = *reinterpret_cast<_g4_t_s2e *>(_g4_sf + 16u);
  _g4_t_s2f &s2f = *reinterpret_cast<_g4_t_s2f *>(_g4_sf + 16u);
  _g4_t_s2g &s2g = *reinterpret_cast<_g4_t_s2g *>(_g4_sf + 16u);
  _g4_t_s2h &s2h = *reinterpret_cast<_g4_t_s2h *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 53u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 64u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 68u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 80u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 84u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 96u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 100u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 112u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 116u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 128u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 136u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 144u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 148u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 152u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 160u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 176u);

  v81[6] = (uint32_t)(uintptr_t)(&self);
  v2 = (glwebtools::JsonReader::Self *)(a2);
  v59 = (glwebtools::Self *)(self);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), "name", (int)(uintptr_t)(&v65));
  v68 = (int)(uintptr_t)(v59);
  g4_std::string::construct_copy(&v71, &v67);
  v72 = v68;
  IsValid = glwebtools::JsonReader::IsValid(v2);
  v4 = -2147483645;
  if ( IsValid != 0 )
  {
    isObject = glwebtools::JsonReader::isObject(v2);
    v4 = -2147483645;
    if ( isObject != 0 )
    {
      isMember = glwebtools::Json::Value::isMember(v2, (char **)&v71);
      v4 = -2147483646;
      if ( isMember )
      {
        v20 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v2, (const char **)&v71);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v80, v20);
        s2b = (char *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v80, v72);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v80);
        v4 = (int)(uintptr_t)(s2b);
      }
    }
  }
  v54 = (void *)(v71 - 12);
  if ( (uint32_t *)(v71 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v71 - 4), 0xFFFFFFFF) <= 0 )
  {
    s2g = (char *)v4;
    g4_std::string::Rep::M_destroy(v54);
    v4 = (int)(uintptr_t)(s2g);
  }
  v55 = (void *)(v67 - 12);
  if ( (uint32_t *)(v67 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
  {
    s2h = (char *)v4;
    g4_std::string::Rep::M_destroy(v55);
    v4 = (int)(uintptr_t)(s2h);
  }
  if ( v4 != 0 )
    return v4;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "rules", (int)(uintptr_t)(&v66));
  v70 = (int)(uintptr_t)(v59) + 4;
  g4_std::string::construct_copy(&v73, &v69);
  v74 = v70;
  v60 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(v2) == 0 )
    goto LABEL_37;
  if ( (uint8_t)glwebtools::JsonReader::isObject(v2) == 0 )
    goto LABEL_37;
  v60 = -2147483646;
  if ( !glwebtools::Json::Value::isMember(v2, (char **)&v73) )
    goto LABEL_37;
  v6 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v2, (const char **)&v73);
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v80, v6);
  v49 = (uint32_t *)v74;
  g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
    v74,
    *(uint32_t **)(v74 + 8));
  v48 = v49 + 1;
  v49[3] = (uint32_t)(uintptr_t)(v49 + 1);
  v49[4] = (uint32_t)(uintptr_t)(v49 + 1);
  v49[2] = 0;
  v49[5] = 0;
  glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v75);
LABEL_10:
  glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v76);
  if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                          (glwebtools::JsonReader::Iterator::Self *)v75,
                          (const glwebtools::JsonReader::Iterator::Self *)v76) == 0 )
  {
    v60 = 0;
    goto LABEL_36;
  }
  iap::Rule::Construct((iap::Rule::Self *)&v77);
  glwebtools::JsonReader::Iterator::opMul(
    (glwebtools::JsonReader::Iterator::Self *)v81,
    (glwebtools::Json::ValueIteratorBase::Self *)v75);
  v60 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v81) != 0 )
    v60 = iap::Rule::read((iap::Rule::Self *)&v77, (const glwebtools::JsonReader::Self *)v81);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v81);
  if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v60) )
  {
    v7 = (uint32_t *)v49[2];
    if ( v7 == nullptr )
    {
      v7 = v49 + 1;
      goto LABEL_21;
    }
    while ( 1 )
    {
      s2 = (char *)iap::Rule::GetName((iap::Rule::Self *)(v7 + 4));
      Name = (const char *)iap::Rule::GetName((iap::Rule::Self *)&v77);
      if ( strcmp(Name, s2) < 0 )
      {
        v8 = (uint32_t *)v7[2];
        v9 = 1;
        if ( v8 == nullptr )
          goto LABEL_20;
      }
      else
      {
        v8 = (uint32_t *)v7[3];
        v9 = 0;
        if ( v8 == nullptr )
        {
LABEL_20:
          if ( v9 != 0 )
          {
LABEL_21:
            if ( (uint32_t *)v49[3] != v7 )
            {
              v61 = (glwebtools::Self *)sub_19048F0(v7);
              goto LABEL_23;
            }
            LOBYTE(v47) = 1;
            if ( v48 != v7 )
            {
              s2e = (char *)iap::Rule::GetName((iap::Rule::Self *)(v7 + 4));
              v30 = (const char *)iap::Rule::GetName((iap::Rule::Self *)&v77);
              v47 = (unsigned int)strcmp(v30, s2e) >> 31;
            }
            v58 = (uint32_t *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            if ( v58 != (uint32_t *)-16 )
            {
              g4_std::string::construct_copy(v58 + 4, &v77);
              v35 = v78;
              v64 = v79;
              v31 = v79 - v78;
              v37 = 0;
              v58[5] = 0;
              v58[6] = 0;
              v58[7] = 0;
              v27 = 0;
              v32 = v31 >> 3;
              if ( v32 != 0 )
              {
                v37 = 8 * v32;
                v27 = sub_4EBE70(8 * v32, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
                v64 = v79;
                v35 = v78;
              }
              v58[5] = v27;
              v58[6] = v27;
              v58[7] = v27 + v37;
              if ( v64 != v35 )
              {
                v53 = v7;
                v33 = v35;
                do
                {
                  if ( v27 != 0 )
                  {
                    s2f = (char *)v27;
                    g4_std::string::construct_copy(v27, v33);
                    g4_std::string::construct_copy(s2f + 4, (char *)v33 + 4);
                    v27 = (int)(uintptr_t)(s2f);
                  }
                  v27 += 8;
                  v33 = (glwebtools::Self *)((char *)v33 + 8);
                }
                while ( v64 != v33 );
LABEL_64:
                v7 = v53;
              }
              goto LABEL_65;
            }
            goto LABEL_66;
          }
          v61 = (glwebtools::Self *)v7;
LABEL_23:
          s2a = (char *)iap::Rule::GetName((iap::Rule::Self *)&v77);
          v11 = (const char *)iap::Rule::GetName((glwebtools::Self *)((char *)v61 + 16));
          if ( strcmp(v11, s2a) < 0 )
          {
            LOBYTE(v47) = 1;
            if ( v48 != v7 )
            {
              s2c = (char *)iap::Rule::GetName((iap::Rule::Self *)(v7 + 4));
              v25 = (const char *)iap::Rule::GetName((iap::Rule::Self *)&v77);
              v47 = (unsigned int)strcmp(v25, s2c) >> 31;
            }
            v58 = (uint32_t *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            if ( v58 != (uint32_t *)-16 )
            {
              g4_std::string::construct_copy(v58 + 4, &v77);
              v34 = v78;
              v63 = v79;
              v26 = v79 - v78;
              v36 = 0;
              v58[5] = 0;
              v58[6] = 0;
              v58[7] = 0;
              v27 = 0;
              v28 = v26 >> 3;
              if ( v28 != 0 )
              {
                v36 = 8 * v28;
                v27 = sub_4EBE70(8 * v28, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
                v63 = v79;
                v34 = v78;
              }
              v58[5] = v27;
              v58[6] = v27;
              v58[7] = v27 + v36;
              if ( v63 != v34 )
              {
                v53 = v7;
                v29 = v34;
                do
                {
                  if ( v27 != 0 )
                  {
                    s2d = (char *)v27;
                    g4_std::string::construct_copy(v27, v29);
                    g4_std::string::construct_copy(s2d + 4, (char *)v29 + 4);
                    v27 = (int)(uintptr_t)(s2d);
                  }
                  v27 += 8;
                  v29 = (glwebtools::Self *)((char *)v29 + 8);
                }
                while ( v63 != v29 );
                goto LABEL_64;
              }
LABEL_65:
              v58[6] = v27;
            }
LABEL_66:
            sub_1904970(v47, v58, v7, v48);
            ++v49[5];
          }
          v56 = (char *)v79;
          v62 = v78;
          if ( v79 != v78 )
          {
            v12 = (char *)v78;
            v51 = (char *)v78 + 4;
            do
            {
              v13 = *(uint32_t *)&v51[v12 - (char *)v62];
              if ( (uint32_t *)(v13 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v13 - 12));
              }
              v14 = (uint32_t *)(*(uint32_t *)v12 - 12);
              if ( v14 != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v12 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v14);
              }
              v12 += 8;
            }
            while ( v56 != v12 );
            v62 = v78;
          }
          if ( v62 != nullptr )
            sub_4EBEE0((int)(uintptr_t)(v62));
          v15 = (void *)(v77 - 12);
          if ( (uint32_t *)(v77 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v15);
          }
          glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v75);
          goto LABEL_10;
        }
      }
      v7 = v8;
    }
  }
  v52 = (char *)v79;
  v57 = v78;
  if ( v79 != v78 )
  {
    v21 = (char *)v78;
    v50 = (char *)v78 + 4;
    do
    {
      v22 = *(uint32_t *)&v50[v21 - (char *)v57];
      if ( (uint32_t *)(v22 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v22 - 12));
      }
      v23 = (uint32_t *)(*(uint32_t *)v21 - 12);
      if ( v23 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v23);
      }
      v21 += 8;
    }
    while ( v52 != v21 );
    v57 = v78;
  }
  if ( v57 != nullptr )
    sub_4EBEE0((int)(uintptr_t)(v57));
  v24 = (void *)(v77 - 12);
  if ( (uint32_t *)(v77 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
LABEL_36:
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v80);
LABEL_37:
  v16 = (void *)(v73 - 12);
  if ( (uint32_t *)(v73 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v73 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  v17 = (void *)(v69 - 12);
  if ( (uint32_t *)(v69 - 12) != dword_213B808 )
  {
    v4 = v60;
    if ( __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
      return v60;
    }
    return v4;
  }
  return v60;
}


