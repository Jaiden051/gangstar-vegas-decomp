#include "Core/Utils/DecompTypes.h"
#include "oi_internal.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_pair_string_glwebtools_J_91bc19::opAssign  (binary VA: 0x151e340)
// Original: std::vector<std::pair<std::string,glwebtools::JSONValue>>::operator=
// ----------------------------------------------------------------------------
std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> * g4_std::vector_pair_string_glwebtools_J_91bc19::opAssign(std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *self, const std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *a2)
{
  std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *result;
  char *v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  void *v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  char *v20;
  int v21;
  uint32_t *v22;
  unsigned int v23;
  int v24;
  int v25;
  uint32_t *v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  char *v32;
  char *v33;
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  int v38;
  char *v39;

  result = self;
  if ( a2 != self )
  {
    v3 = *(char **)self;
    v4 = *((uint32_t *)a2 + 1);
    v5 = *(uint32_t *)a2;
    v6 = (v4 - *(uint32_t *)a2) >> 3;
    v34 = v6;
    if ( v6 <= (*((uint32_t *)self + 2) - *(uint32_t *)self) >> 3 )
    {
      v15 = *((char **)self + 1);
      v16 = (v15 - v3) >> 3;
      if ( v34 > (unsigned int)v16 )
      {
        v23 = v5 + 8 * v16;
        if ( v16 > 0 )
        {
          v24 = (*((uint32_t *)self + 1) - (int)(uintptr_t)(v3)) >> 3;
          do
          {
            g4_std::string::assign_str(v3, v5);
            v25 = v5 + 4;
            v5 += 8;
            v30 = v25;
            v26 = (uint32_t *)(v3 + 4);
            v3 += 8;
            g4_std::string::assign_str(v26, v30);
            --v24;
          }
          while ( v24 != 0 );
          v15 = *((char **)self + 1);
          v3 = *(char **)self;
          v4 = *((uint32_t *)a2 + 1);
          v23 = *(uint32_t *)a2 + ((unsigned int)(uintptr_t)(&v15[-*(uint32_t *)self]) & 0xFFFFFFF8);
        }
        if ( v4 == v23 )
        {
          v14 = (int)(uintptr_t)(&v3[8 * v34]);
          v13 = self;
        }
        else
        {
          v27 = v23;
          v28 = v4;
          do
          {
            if ( v15 != nullptr )
            {
              g4_std::string::construct_copy(v15, v27);
              g4_std::string::construct_copy(v15 + 4, v27 + 4);
            }
            v27 += 8;
            v15 += 8;
          }
          while ( v27 != v28 );
          v13 = self;
          v14 = *(uint32_t *)self + 8 * v34;
        }
      }
      else
      {
        if ( v34 > 0 )
        {
          v39 = *((char **)self + 1);
          v36 = *(uint32_t *)self;
          v17 = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 3;
          do
          {
            g4_std::string::assign_str(v3, v5);
            v18 = v5 + 4;
            v5 += 8;
            v29 = v18;
            v19 = (uint32_t *)(v3 + 4);
            v3 += 8;
            g4_std::string::assign_str(v19, v29);
            --v17;
          }
          while ( v17 != 0 );
          v15 = v39;
          v3 = (char *)(v36 + 8 * v34);
        }
        if ( v15 != v3 )
        {
          v20 = v3;
          do
          {
            v21 = *((uint32_t *)v20 + 1);
            if ( (uint32_t *)(v21 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
            {
              v32 = v20;
              g4_std::string::Rep::M_destroy((void *)(v21 - 12));
              v20 = v32;
            }
            v22 = (uint32_t *)(*(uint32_t *)v20 - 12);
            if ( v22 != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v20 - 4), 0xFFFFFFFF) <= 0 )
            {
              v33 = v20;
              g4_std::string::Rep::M_destroy(v22);
              v20 = v33;
            }
            v20 += 8;
          }
          while ( v15 != v20 );
        }
        v13 = self;
        v14 = *(uint32_t *)self + 8 * v34;
      }
    }
    else
    {
      v38 = 0;
      v37 = 0;
      if ( v6 != 0 )
      {
        if ( v6 > 0x1FFFFFFF )
          sub_18FFEE0(v4, v6);
        v31 = *((uint32_t *)a2 + 1);
        v38 = 8 * v6;
        v37 = opNew(8 * v6);
        v4 = v31;
      }
      if ( v5 != v4 )
      {
        v7 = v37;
        v8 = v4;
        do
        {
          if ( v7 != 0 )
          {
            g4_std::string::construct_copy(v7, v5);
            g4_std::string::construct_copy(v7 + 4, v5 + 4);
          }
          v5 += 8;
          v7 += 8;
        }
        while ( v8 != v5 );
      }
      v35 = *((uint32_t **)self + 1);
      v9 = *(void **)self;
      if ( v35 != *(uint32_t **)self )
      {
        v10 = *(uint32_t **)self;
        do
        {
          v11 = v10[1];
          if ( (uint32_t *)(v11 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v11 - 12));
          }
          v12 = (uint32_t *)(*v10 - 12);
          if ( v12 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v10 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v12);
          v10 += 2;
        }
        while ( v35 != v10 );
        v9 = *(void **)self;
      }
      if ( v9 != nullptr )
        opDelete(v9);
      v13 = self;
      *(uint32_t *)self = v37;
      v14 = v37 + v38;
      *((uint32_t *)self + 2) = v37 + v38;
    }
    *((uint32_t *)v13 + 1) = v14;
    return v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase  (binary VA: 0x151e6d0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v24 = (uint32_t *)v2[3];
      if ( v24 != nullptr )
      {
        while ( 1 )
        {
          v25 = (uint32_t *)v24[3];
          if ( v25 != nullptr )
          {
            while ( 1 )
            {
              v26 = (uint32_t *)v25[3];
              if ( v26 != nullptr )
              {
                while ( 1 )
                {
                  v27 = (uint32_t *)v26[3];
                  if ( v27 != nullptr )
                  {
                    while ( 1 )
                    {
                      v28 = (uint32_t *)v27[3];
                      if ( v28 != nullptr )
                      {
                        while ( 1 )
                        {
                          v23 = (uint32_t *)v28[3];
                          if ( v23 != nullptr )
                          {
                            while ( 1 )
                            {
                              v22 = (uint32_t *)v23[3];
                              if ( v22 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v3 = v22[3];
                                  if ( v3 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                        a1,
                                        (uint32_t *)(*(void **)(v3 + 12)));
                                      v4 = *(uint32_t *)(v3 + 8);
                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v3 + 20));
                                      v5 = *(uint32_t *)(v3 + 16);
                                      if ( (uint32_t *)(v5 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
                                      }
                                      opDelete((void *)v3);
                                      if ( v4 == 0 )
                                        break;
                                      v3 = v4;
                                    }
                                  }
                                  v6 = (uint32_t *)v22[2];
                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v22 + 5));
                                  v7 = v22[4];
                                  if ( (uint32_t *)(v7 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
                                  }
                                  opDelete(v22);
                                  if ( v6 == nullptr )
                                    break;
                                  v22 = v6;
                                }
                              }
                              v8 = (uint32_t *)v23[2];
                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v23 + 5));
                              v9 = v23[4];
                              if ( (uint32_t *)(v9 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v9 - 12));
                              }
                              opDelete(v23);
                              if ( v8 == nullptr )
                                break;
                              v23 = v8;
                            }
                          }
                          v10 = (uint32_t *)v28[2];
                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v28 + 5));
                          v11 = v28[4];
                          if ( (uint32_t *)(v11 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v11 - 12));
                          }
                          opDelete(v28);
                          if ( v10 == nullptr )
                            break;
                          v28 = v10;
                        }
                      }
                      v12 = (uint32_t *)v27[2];
                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v27 + 5));
                      v13 = v27[4];
                      if ( (uint32_t *)(v13 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v13 - 12));
                      }
                      opDelete(v27);
                      if ( v12 == nullptr )
                        break;
                      v27 = v12;
                    }
                  }
                  v16 = (uint32_t *)v26[2];
                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v26 + 5));
                  v17 = v26[4];
                  if ( (uint32_t *)(v17 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v17 - 12));
                  }
                  opDelete(v26);
                  if ( v16 == nullptr )
                    break;
                  v26 = v16;
                }
              }
              v18 = (uint32_t *)v25[2];
              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v25 + 5));
              v19 = v25[4];
              if ( (uint32_t *)(v19 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v19 - 12));
              }
              opDelete(v25);
              if ( v18 == nullptr )
                break;
              v25 = v18;
            }
          }
          v14 = (uint32_t *)v24[2];
          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v24 + 5));
          v15 = v24[4];
          if ( (uint32_t *)(v15 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v15 - 12));
          }
          opDelete(v24);
          if ( v14 == nullptr )
            break;
          v24 = v14;
        }
      }
      v20 = (uint32_t *)a2[2];
      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(a2 + 5));
      v21 = a2[4];
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v21 - 12));
      }
      opDelete(a2);
      if ( v20 == nullptr )
        break;
      a2 = v20;
      v2 = v20;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_151FD40  (binary VA: 0x151fd40)
// Original: sub_151FD40
// ----------------------------------------------------------------------------
int sub_151FD40()
{
  sub_1900D70(&unk_211A3C4);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3C4, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_151FD90  (binary VA: 0x151fd90)
// Original: sub_151FD90
// ----------------------------------------------------------------------------
glwebtools::Self * sub_151FD90(glwebtools::Json::Value::Self *a1, int a2)
{
  glwebtools::Self *v3;
  void *v4;
  const glwebtools::Json::Value::Self *v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[4];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[16];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v9)) > _g4_s1 ? (32u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v10)) > _g4_s2 ? (48u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v11)) > _g4_s3 ? (52u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v12)) > _g4_s4 ? (64u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);

  g4_std::string::construct_copy(&v10, a2);
  v11 = *(uint32_t *)(a2 + 4);
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a1) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a1) != 0
    && glwebtools::Json::Value::isMember(a1, (char **)&v10) )
  {
    v6 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a1, (const char **)&v10);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v12, v6);
    v8 = v11;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v12) != 0 )
    {
      v9[0] = (int)(uintptr_t)(&dword_213B814);
      v3 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v12, (int)(uintptr_t)(v9));
      if ( glwebtools::IsOperationSuccess(v3) )
      {
        v3 = nullptr;
        g4_std::string::assign_str(v8, v9);
        *(uint8_t *)(v8 + 6) = 1;
      }
      g4_std::string::Destroy(v9);
    }
    else
    {
      v3 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
  }
  else
  {
    v3 = nullptr;
  }
  v4 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetItemListCB  (binary VA: 0x1526260)
// Original: InAppBilling_GetItemListCB
// ----------------------------------------------------------------------------
int InAppBilling_GetItemListCB(char *a1, int a2)
{
  glwebtools::Mutex::Self **Instance;

  Instance = (glwebtools::Mutex::Self **)iap::ItemManager::getInstance();
  return iap::ItemManager::ProcessCallback(Instance, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::opShr_223bbf  (binary VA: 0x1527130)
// Original: glwebtools::operator>><glwebtools::OptionalArgument<int,iap::AmountValidator,glwebtools::AttributeFormatter>>
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::opShr_223bbf(glwebtools::Json::Value::Self *a1, int a2)
{
  char IsValid;
  glwebtools::Self *v3;
  void *v4;
  char isObject;
  bool isMember;
  const glwebtools::Json::Value::Self *v8;
  int v9;
  char v10;
  glwebtools::Self *v11;
  bool IsOperationSuccess;
  int v13;
  typedef glwebtools::Self *_g4_t_v14;
  typedef glwebtools::Self *_g4_t_v15;
  typedef glwebtools::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[16];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v15)) > _g4_s1 ? (0u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v16)) > _g4_s2 ? (0u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v20)) > _g4_s6 ? (36u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);

  g4_std::string::construct_copy(&v18, a2);
  v19 = *(uint32_t *)(a2 + 4);
  IsValid = glwebtools::JsonReader::IsValid(a1);
  v3 = nullptr;
  if ( IsValid != 0 )
  {
    isObject = glwebtools::JsonReader::isObject(a1);
    v3 = nullptr;
    if ( isObject != 0 )
    {
      isMember = glwebtools::Json::Value::isMember(a1, (char **)&v18);
      v3 = nullptr;
      if ( isMember )
      {
        v8 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a1, (const char **)&v18);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v20, v8);
        v9 = v19;
        v10 = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v20);
        v11 = nullptr;
        if ( v10 != 0 )
        {
          v15 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v20, &v17);
          IsOperationSuccess = glwebtools::IsOperationSuccess(v15);
          v11 = v15;
          if ( IsOperationSuccess )
          {
            v13 = v17;
            *(uint8_t *)(v9 + 6) = 1;
            *(uint32_t *)v9 = v13;
            v11 = nullptr;
          }
        }
        v14 = v11;
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v20);
        v3 = v14;
      }
    }
  }
  v4 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = v3;
    g4_std::string::Rep::M_destroy(v4);
    return v16;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_39d424::M_erase  (binary VA: 0x1527480)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_39d424::M_erase(int a1, uint32_t *a2)
{
  uint32_t *i;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  iap::BillingMethodAndroid::Self *v21;
  iap::BillingMethodAndroid::Self *v22;
  int v23;
  int v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  iap::BillingMethodAndroid::Self *v34;
  iap::BillingMethodAndroid::Self *v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  iap::BillingMethodAndroid::Self *v47;
  iap::BillingMethodAndroid::Self *v48;
  int v49;
  int v50;
  int v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  iap::BillingMethodAndroid::Self *v60;
  iap::BillingMethodAndroid::Self *v61;
  int v62;
  int v63;
  int v64;
  int v65;
  uint32_t *v66;
  uint32_t *v67;
  uint32_t *v68;
  uint32_t *v69;
  uint32_t *v70;
  uint32_t *v71;
  uint32_t *v72;
  uint32_t *v73;
  iap::BillingMethodAndroid::Self *v74;
  iap::BillingMethodAndroid::Self *v75;
  int v76;
  int v77;
  int v78;
  uint32_t *v79;
  uint32_t *v80;
  uint32_t *v81;
  uint32_t *v82;
  uint32_t *v83;
  uint32_t *v84;
  uint32_t *v85;
  uint32_t *v86;
  iap::BillingMethodAndroid::Self *v87;
  iap::BillingMethodAndroid::Self *v88;
  int v89;
  int v90;
  int v91;
  uint32_t *v92;
  uint32_t *v93;
  uint32_t *v94;
  uint32_t *v95;
  uint32_t *v96;
  uint32_t *v97;
  uint32_t *v98;
  uint32_t *v99;
  iap::BillingMethodAndroid::Self *v100;
  iap::BillingMethodAndroid::Self *v101;
  int v102;
  int v103;
  int v104;
  uint32_t *v105;
  uint32_t *v106;
  uint32_t *v107;
  uint32_t *v108;
  uint32_t *v109;
  uint32_t *v110;
  uint32_t *v111;
  int v112;
  uint32_t *v113;
  iap::BillingMethodAndroid::Self *v114;
  iap::BillingMethodAndroid::Self *v115;
  int v116;
  int v117;
  int v118;
  uint32_t *v119;
  uint32_t *v120;
  uint32_t *v121;
  uint32_t *v122;
  uint32_t *v123;
  uint32_t *v124;
  uint32_t *v125;
  uint32_t *v126;
  iap::BillingMethodAndroid::Self *v127;
  iap::BillingMethodAndroid::Self *v128;
  int v129;
  iap::BillingMethodAndroid::Self *v130;
  iap::BillingMethodAndroid::Self *v131;
  iap::BillingMethodAndroid::Self *v132;
  iap::BillingMethodAndroid::Self *v133;
  iap::BillingMethodAndroid::Self *v134;
  iap::BillingMethodAndroid::Self *v135;
  iap::BillingMethodAndroid::Self *v136;
  iap::BillingMethodAndroid::Self *v137;
  iap::BillingMethodAndroid::Self *v138;
  uint32_t *v139;
  uint32_t *v140;
  uint32_t *v141;
  uint32_t *v142;
  uint32_t *v143;
  uint32_t *v144;
  uint32_t *v145;
  uint32_t *v146;
  uint32_t *v147;
  uint32_t *v148;
  uint32_t *v149;
  uint32_t *v150;
  uint32_t *v151;
  uint32_t *v152;
  uint32_t *v153;
  uint32_t *v154;
  uint32_t *v155;
  uint32_t *v156;
  uint32_t *v157;
  uint32_t *v158;
  uint32_t *v159;
  uint32_t *v160;
  uint32_t *v161;
  uint32_t *v162;
  uint32_t *v163;
  uint32_t *v164;
  uint32_t *v165;
  uint32_t *v166;
  uint32_t *v167;
  uint32_t *v168;
  uint32_t *v169;
  uint32_t *v170;
  uint32_t *v171;
  uint32_t *v172;
  uint32_t *v173;
  uint32_t *v174;
  uint32_t *v175;
  uint32_t *v176;
  uint32_t *v177;
  uint32_t *v178;
  uint32_t *v179;
  uint32_t *v180;
  uint32_t *v181;
  uint32_t *v182;
  uint32_t *v183;
  uint32_t *v184;
  uint32_t *v185;
  uint32_t *v186;
  uint32_t *v187;
  uint32_t *v188;
  uint32_t *v189;
  uint32_t *v190;
  uint32_t *v191;
  uint32_t *v192;
  uint32_t *v193;
  uint32_t *v194;
  uint32_t *v195;
  uint32_t *v196;
  uint32_t *v197;
  uint32_t *v198;
  uint32_t *v199;
  uint32_t *v200;
  uint32_t *v201;
  uint32_t *v202;
  uint32_t *v203;
  uint32_t *v204;
  uint32_t *v205;
  uint32_t *v206;
  uint32_t *v207;
  uint32_t *v208;
  uint32_t *v209;
  uint32_t *v210;
  uint32_t *v211;
  uint32_t *v212;
  uint32_t *v213;
  uint32_t *v214;
  uint32_t *v215;
  uint32_t *v216;
  uint32_t *v217;
  uint32_t *v218;
  uint32_t *v219;
  uint32_t *v220;
  uint32_t *v221;
  uint32_t *v222;
  uint32_t *v223;
  uint32_t *v224;
  uint32_t *v225;
  uint32_t *v226;
  uint32_t *v227;

  if ( a2 != nullptr )
  {
    for ( i = a2; ; i = v163 )
    {
      v3 = (uint32_t *)i[3];
      v216 = v3;
      if ( v3 != nullptr )
      {
        while ( 1 )
        {
          v4 = (uint32_t *)v3[3];
          v208 = v4;
          if ( v4 != nullptr )
          {
            while ( 1 )
            {
              v5 = (uint32_t *)v4[3];
              v198 = v5;
              if ( v5 != nullptr )
              {
                while ( 1 )
                {
                  v6 = (uint32_t *)v5[3];
                  v186 = v6;
                  if ( v6 != nullptr )
                  {
                    while ( 1 )
                    {
                      v7 = (uint32_t *)v6[3];
                      v180 = v7;
                      if ( v7 != nullptr )
                      {
                        while ( 1 )
                        {
                          v8 = (uint32_t *)v7[3];
                          v173 = v8;
                          if ( v8 != nullptr )
                          {
                            while ( 1 )
                            {
                              v9 = (uint32_t *)v8[3];
                              v157 = v9;
                              if ( v9 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v10 = (uint32_t *)v9[3];
                                  v165 = v10;
                                  if ( v10 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_39d424::M_erase(
                                        a1,
                                        (void *)v10[3]);
                                      v227 = (uint32_t *)v165[2];
                                      v165[5] = (uint32_t)(uintptr_t)(&off_2096648);
                                      v191 = (uint32_t *)v165[33];
                                      if ( v191 != nullptr )
                                      {
                                        while ( 1 )
                                        {
                                          v202 = (uint32_t *)v191[3];
                                          if ( v202 != nullptr )
                                          {
                                            while ( 1 )
                                            {
                                              v211 = (uint32_t *)v202[3];
                                              if ( v211 != nullptr )
                                              {
                                                while ( 1 )
                                                {
                                                  v218 = (uint32_t *)v211[3];
                                                  if ( v218 != nullptr )
                                                  {
                                                    while ( 1 )
                                                    {
                                                      v222 = (uint32_t *)v218[3];
                                                      if ( v222 != nullptr )
                                                      {
                                                        while ( 1 )
                                                        {
                                                          v225 = (uint32_t *)v222[3];
                                                          if ( v225 != nullptr )
                                                          {
                                                            while ( 1 )
                                                            {
                                                              v148 = (uint32_t *)v225[3];
                                                              if ( v148 != nullptr )
                                                              {
                                                                while ( 1 )
                                                                {
                                                                  v139 = (uint32_t *)v148[3];
                                                                  if ( v139 != nullptr )
                                                                  {
                                                                    while ( 1 )
                                                                    {
                                                                      v11 = v139[3];
                                                                      if ( v11 != 0 )
                                                                      {
                                                                        while ( 1 )
                                                                        {
                                                                          g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                                                            (int)(uintptr_t)(v165 + 31),
                                                                            *(uint32_t **)(v11 + 12));
                                                                          v12 = *(uint32_t *)(v11 + 8);
                                                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v11 + 20));
                                                                          g4_std::string::Destroy(v11 + 16);
                                                                          opDelete((void *)v11);
                                                                          if ( v12 == 0 )
                                                                            break;
                                                                          v11 = v12;
                                                                        }
                                                                      }
                                                                      v13 = (uint32_t *)v139[2];
                                                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v139 + 5));
                                                                      g4_std::string::Destroy(v139 + 4);
                                                                      opDelete(v139);
                                                                      if ( v13 == nullptr )
                                                                        break;
                                                                      v139 = v13;
                                                                    }
                                                                  }
                                                                  v14 = (uint32_t *)v148[2];
                                                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v148 + 5));
                                                                  g4_std::string::Destroy(v148 + 4);
                                                                  opDelete(v148);
                                                                  if ( v14 == nullptr )
                                                                    break;
                                                                  v148 = v14;
                                                                }
                                                              }
                                                              v15 = (uint32_t *)v225[2];
                                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v225 + 5));
                                                              g4_std::string::Destroy(v225 + 4);
                                                              opDelete(v225);
                                                              if ( v15 == nullptr )
                                                                break;
                                                              v225 = v15;
                                                            }
                                                          }
                                                          v16 = (uint32_t *)v222[2];
                                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v222 + 5));
                                                          g4_std::string::Destroy(v222 + 4);
                                                          opDelete(v222);
                                                          if ( v16 == nullptr )
                                                            break;
                                                          v222 = v16;
                                                        }
                                                      }
                                                      v17 = (uint32_t *)v218[2];
                                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v218 + 5));
                                                      g4_std::string::Destroy(v218 + 4);
                                                      opDelete(v218);
                                                      if ( v17 == nullptr )
                                                        break;
                                                      v218 = v17;
                                                    }
                                                  }
                                                  v18 = (uint32_t *)v211[2];
                                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v211 + 5));
                                                  g4_std::string::Destroy(v211 + 4);
                                                  opDelete(v211);
                                                  if ( v18 == nullptr )
                                                    break;
                                                  v211 = v18;
                                                }
                                              }
                                              v19 = (uint32_t *)v202[2];
                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v202 + 5));
                                              g4_std::string::Destroy(v202 + 4);
                                              opDelete(v202);
                                              if ( v19 == nullptr )
                                                break;
                                              v202 = v19;
                                            }
                                          }
                                          v20 = (uint32_t *)v191[2];
                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v191 + 5));
                                          g4_std::string::Destroy(v191 + 4);
                                          opDelete(v191);
                                          if ( v20 == nullptr )
                                            break;
                                          v191 = v20;
                                        }
                                      }
                                      v21 = (iap::BillingMethodAndroid::Self *)v165[29];
                                      v22 = (iap::BillingMethodAndroid::Self *)v165[28];
                                      if ( v21 != v22 )
                                      {
                                        do
                                        {
                                          g4_std::string::Destroy((char *)v22 + 4);
                                          v130 = v22;
                                          v22 = (iap::BillingMethodAndroid::Self *)((char *)v22 + 8);
                                          g4_std::string::Destroy(v130);
                                        }
                                        while ( v21 != v22 );
                                        v22 = (iap::BillingMethodAndroid::Self *)v165[28];
                                      }
                                      if ( v22 != nullptr )
                                        opDelete(v22);
                                      g4_std::string::Destroy(v165 + 20);
                                      g4_std::string::Destroy(v165 + 18);
                                      g4_std::string::Destroy(v165 + 16);
                                      g4_std::string::Destroy(v165 + 14);
                                      g4_std::string::Destroy(v165 + 12);
                                      g4_std::string::Destroy(v165 + 10);
                                      g4_std::string::Destroy(v165 + 8);
                                      g4_std::string::Destroy(v165 + 6);
                                      v23 = v165[4];
                                      if ( (uint32_t *)(v23 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v23 - 12));
                                      }
                                      opDelete(v165);
                                      if ( v227 == nullptr )
                                        break;
                                      v165 = v227;
                                      v10 = v227;
                                    }
                                  }
                                  v226 = (uint32_t *)v157[2];
                                  v157[5] = (uint32_t)(uintptr_t)(&off_2096648);
                                  v149 = (uint32_t *)v157[33];
                                  if ( v149 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      v166 = (uint32_t *)v149[3];
                                      if ( v166 != nullptr )
                                      {
                                        while ( 1 )
                                        {
                                          v192 = (uint32_t *)v166[3];
                                          if ( v192 != nullptr )
                                          {
                                            while ( 1 )
                                            {
                                              v203 = (uint32_t *)v192[3];
                                              if ( v203 != nullptr )
                                              {
                                                while ( 1 )
                                                {
                                                  v212 = (uint32_t *)v203[3];
                                                  if ( v212 != nullptr )
                                                  {
                                                    while ( 1 )
                                                    {
                                                      v219 = (uint32_t *)v212[3];
                                                      if ( v219 != nullptr )
                                                      {
                                                        while ( 1 )
                                                        {
                                                          v223 = (uint32_t *)v219[3];
                                                          if ( v223 != nullptr )
                                                          {
                                                            while ( 1 )
                                                            {
                                                              v140 = (uint32_t *)v223[3];
                                                              if ( v140 != nullptr )
                                                              {
                                                                while ( 1 )
                                                                {
                                                                  v24 = v140[3];
                                                                  if ( v24 != 0 )
                                                                  {
                                                                    while ( 1 )
                                                                    {
                                                                      g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                                                        (int)(uintptr_t)(v157 + 31),
                                                                        *(uint32_t **)(v24 + 12));
                                                                      v25 = *(uint32_t *)(v24 + 8);
                                                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v24 + 20));
                                                                      g4_std::string::Destroy(v24 + 16);
                                                                      opDelete((void *)v24);
                                                                      if ( v25 == 0 )
                                                                        break;
                                                                      v24 = v25;
                                                                    }
                                                                  }
                                                                  v26 = (uint32_t *)v140[2];
                                                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v140 + 5));
                                                                  g4_std::string::Destroy(v140 + 4);
                                                                  opDelete(v140);
                                                                  if ( v26 == nullptr )
                                                                    break;
                                                                  v140 = v26;
                                                                }
                                                              }
                                                              v27 = (uint32_t *)v223[2];
                                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v223 + 5));
                                                              g4_std::string::Destroy(v223 + 4);
                                                              opDelete(v223);
                                                              if ( v27 == nullptr )
                                                                break;
                                                              v223 = v27;
                                                            }
                                                          }
                                                          v28 = (uint32_t *)v219[2];
                                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v219 + 5));
                                                          g4_std::string::Destroy(v219 + 4);
                                                          opDelete(v219);
                                                          if ( v28 == nullptr )
                                                            break;
                                                          v219 = v28;
                                                        }
                                                      }
                                                      v29 = (uint32_t *)v212[2];
                                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v212 + 5));
                                                      g4_std::string::Destroy(v212 + 4);
                                                      opDelete(v212);
                                                      if ( v29 == nullptr )
                                                        break;
                                                      v212 = v29;
                                                    }
                                                  }
                                                  v30 = (uint32_t *)v203[2];
                                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v203 + 5));
                                                  g4_std::string::Destroy(v203 + 4);
                                                  opDelete(v203);
                                                  if ( v30 == nullptr )
                                                    break;
                                                  v203 = v30;
                                                }
                                              }
                                              v31 = (uint32_t *)v192[2];
                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v192 + 5));
                                              g4_std::string::Destroy(v192 + 4);
                                              opDelete(v192);
                                              if ( v31 == nullptr )
                                                break;
                                              v192 = v31;
                                            }
                                          }
                                          v32 = (uint32_t *)v166[2];
                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v166 + 5));
                                          g4_std::string::Destroy(v166 + 4);
                                          opDelete(v166);
                                          if ( v32 == nullptr )
                                            break;
                                          v166 = v32;
                                        }
                                      }
                                      v33 = (uint32_t *)v149[2];
                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v149 + 5));
                                      g4_std::string::Destroy(v149 + 4);
                                      opDelete(v149);
                                      if ( v33 == nullptr )
                                        break;
                                      v149 = v33;
                                    }
                                  }
                                  v34 = (iap::BillingMethodAndroid::Self *)v157[29];
                                  v35 = (iap::BillingMethodAndroid::Self *)v157[28];
                                  if ( v34 != v35 )
                                  {
                                    do
                                    {
                                      g4_std::string::Destroy((char *)v35 + 4);
                                      v131 = v35;
                                      v35 = (iap::BillingMethodAndroid::Self *)((char *)v35 + 8);
                                      g4_std::string::Destroy(v131);
                                    }
                                    while ( v34 != v35 );
                                    v35 = (iap::BillingMethodAndroid::Self *)v157[28];
                                  }
                                  if ( v35 != nullptr )
                                    opDelete(v35);
                                  g4_std::string::Destroy(v157 + 20);
                                  g4_std::string::Destroy(v157 + 18);
                                  g4_std::string::Destroy(v157 + 16);
                                  g4_std::string::Destroy(v157 + 14);
                                  g4_std::string::Destroy(v157 + 12);
                                  g4_std::string::Destroy(v157 + 10);
                                  g4_std::string::Destroy(v157 + 8);
                                  g4_std::string::Destroy(v157 + 6);
                                  v36 = v157[4];
                                  if ( (uint32_t *)(v36 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v36 - 12));
                                  }
                                  opDelete(v157);
                                  if ( v226 == nullptr )
                                    break;
                                  v157 = v226;
                                  v9 = v226;
                                }
                              }
                              v224 = (uint32_t *)v173[2];
                              v173[5] = (uint32_t)(uintptr_t)(&off_2096648);
                              v150 = (uint32_t *)v173[33];
                              if ( v150 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v158 = (uint32_t *)v150[3];
                                  if ( v158 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      v167 = (uint32_t *)v158[3];
                                      if ( v167 != nullptr )
                                      {
                                        while ( 1 )
                                        {
                                          v193 = (uint32_t *)v167[3];
                                          if ( v193 != nullptr )
                                          {
                                            while ( 1 )
                                            {
                                              v204 = (uint32_t *)v193[3];
                                              if ( v204 != nullptr )
                                              {
                                                while ( 1 )
                                                {
                                                  v213 = (uint32_t *)v204[3];
                                                  if ( v213 != nullptr )
                                                  {
                                                    while ( 1 )
                                                    {
                                                      v220 = (uint32_t *)v213[3];
                                                      if ( v220 != nullptr )
                                                      {
                                                        while ( 1 )
                                                        {
                                                          v141 = (uint32_t *)v220[3];
                                                          if ( v141 != nullptr )
                                                          {
                                                            while ( 1 )
                                                            {
                                                              v37 = v141[3];
                                                              if ( v37 != 0 )
                                                              {
                                                                while ( 1 )
                                                                {
                                                                  g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                                                    (int)(uintptr_t)(v173 + 31),
                                                                    *(uint32_t **)(v37 + 12));
                                                                  v38 = *(uint32_t *)(v37 + 8);
                                                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v37 + 20));
                                                                  g4_std::string::Destroy(v37 + 16);
                                                                  opDelete((void *)v37);
                                                                  if ( v38 == 0 )
                                                                    break;
                                                                  v37 = v38;
                                                                }
                                                              }
                                                              v39 = (uint32_t *)v141[2];
                                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v141 + 5));
                                                              g4_std::string::Destroy(v141 + 4);
                                                              opDelete(v141);
                                                              if ( v39 == nullptr )
                                                                break;
                                                              v141 = v39;
                                                            }
                                                          }
                                                          v40 = (uint32_t *)v220[2];
                                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v220 + 5));
                                                          g4_std::string::Destroy(v220 + 4);
                                                          opDelete(v220);
                                                          if ( v40 == nullptr )
                                                            break;
                                                          v220 = v40;
                                                        }
                                                      }
                                                      v41 = (uint32_t *)v213[2];
                                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v213 + 5));
                                                      g4_std::string::Destroy(v213 + 4);
                                                      opDelete(v213);
                                                      if ( v41 == nullptr )
                                                        break;
                                                      v213 = v41;
                                                    }
                                                  }
                                                  v42 = (uint32_t *)v204[2];
                                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v204 + 5));
                                                  g4_std::string::Destroy(v204 + 4);
                                                  opDelete(v204);
                                                  if ( v42 == nullptr )
                                                    break;
                                                  v204 = v42;
                                                }
                                              }
                                              v43 = (uint32_t *)v193[2];
                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v193 + 5));
                                              g4_std::string::Destroy(v193 + 4);
                                              opDelete(v193);
                                              if ( v43 == nullptr )
                                                break;
                                              v193 = v43;
                                            }
                                          }
                                          v44 = (uint32_t *)v167[2];
                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v167 + 5));
                                          g4_std::string::Destroy(v167 + 4);
                                          opDelete(v167);
                                          if ( v44 == nullptr )
                                            break;
                                          v167 = v44;
                                        }
                                      }
                                      v45 = (uint32_t *)v158[2];
                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v158 + 5));
                                      g4_std::string::Destroy(v158 + 4);
                                      opDelete(v158);
                                      if ( v45 == nullptr )
                                        break;
                                      v158 = v45;
                                    }
                                  }
                                  v46 = (uint32_t *)v150[2];
                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v150 + 5));
                                  g4_std::string::Destroy(v150 + 4);
                                  opDelete(v150);
                                  if ( v46 == nullptr )
                                    break;
                                  v150 = v46;
                                }
                              }
                              v47 = (iap::BillingMethodAndroid::Self *)v173[29];
                              v48 = (iap::BillingMethodAndroid::Self *)v173[28];
                              if ( v47 != v48 )
                              {
                                do
                                {
                                  g4_std::string::Destroy((char *)v48 + 4);
                                  v132 = v48;
                                  v48 = (iap::BillingMethodAndroid::Self *)((char *)v48 + 8);
                                  g4_std::string::Destroy(v132);
                                }
                                while ( v47 != v48 );
                                v48 = (iap::BillingMethodAndroid::Self *)v173[28];
                              }
                              if ( v48 != nullptr )
                                opDelete(v48);
                              g4_std::string::Destroy(v173 + 20);
                              g4_std::string::Destroy(v173 + 18);
                              g4_std::string::Destroy(v173 + 16);
                              g4_std::string::Destroy(v173 + 14);
                              g4_std::string::Destroy(v173 + 12);
                              g4_std::string::Destroy(v173 + 10);
                              g4_std::string::Destroy(v173 + 8);
                              g4_std::string::Destroy(v173 + 6);
                              v49 = v173[4];
                              if ( (uint32_t *)(v49 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v49 - 12));
                              }
                              opDelete(v173);
                              if ( v224 == nullptr )
                                break;
                              v173 = v224;
                              v8 = v224;
                            }
                          }
                          v221 = (uint32_t *)v180[2];
                          v180[5] = (uint32_t)(uintptr_t)(&off_2096648);
                          v151 = (uint32_t *)v180[33];
                          if ( v151 != nullptr )
                          {
                            while ( 1 )
                            {
                              v174 = (uint32_t *)v151[3];
                              if ( v174 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v159 = (uint32_t *)v174[3];
                                  if ( v159 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      v168 = (uint32_t *)v159[3];
                                      if ( v168 != nullptr )
                                      {
                                        while ( 1 )
                                        {
                                          v194 = (uint32_t *)v168[3];
                                          if ( v194 != nullptr )
                                          {
                                            while ( 1 )
                                            {
                                              v205 = (uint32_t *)v194[3];
                                              if ( v205 != nullptr )
                                              {
                                                while ( 1 )
                                                {
                                                  v214 = (uint32_t *)v205[3];
                                                  if ( v214 != nullptr )
                                                  {
                                                    while ( 1 )
                                                    {
                                                      v142 = (uint32_t *)v214[3];
                                                      if ( v142 != nullptr )
                                                      {
                                                        while ( 1 )
                                                        {
                                                          v50 = v142[3];
                                                          if ( v50 != 0 )
                                                          {
                                                            while ( 1 )
                                                            {
                                                              g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                                                (int)(uintptr_t)(v180 + 31),
                                                                *(uint32_t **)(v50 + 12));
                                                              v51 = *(uint32_t *)(v50 + 8);
                                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v50 + 20));
                                                              g4_std::string::Destroy(v50 + 16);
                                                              opDelete((void *)v50);
                                                              if ( v51 == 0 )
                                                                break;
                                                              v50 = v51;
                                                            }
                                                          }
                                                          v52 = (uint32_t *)v142[2];
                                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v142 + 5));
                                                          g4_std::string::Destroy(v142 + 4);
                                                          opDelete(v142);
                                                          if ( v52 == nullptr )
                                                            break;
                                                          v142 = v52;
                                                        }
                                                      }
                                                      v53 = (uint32_t *)v214[2];
                                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v214 + 5));
                                                      g4_std::string::Destroy(v214 + 4);
                                                      opDelete(v214);
                                                      if ( v53 == nullptr )
                                                        break;
                                                      v214 = v53;
                                                    }
                                                  }
                                                  v54 = (uint32_t *)v205[2];
                                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v205 + 5));
                                                  g4_std::string::Destroy(v205 + 4);
                                                  opDelete(v205);
                                                  if ( v54 == nullptr )
                                                    break;
                                                  v205 = v54;
                                                }
                                              }
                                              v55 = (uint32_t *)v194[2];
                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v194 + 5));
                                              g4_std::string::Destroy(v194 + 4);
                                              opDelete(v194);
                                              if ( v55 == nullptr )
                                                break;
                                              v194 = v55;
                                            }
                                          }
                                          v56 = (uint32_t *)v168[2];
                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v168 + 5));
                                          g4_std::string::Destroy(v168 + 4);
                                          opDelete(v168);
                                          if ( v56 == nullptr )
                                            break;
                                          v168 = v56;
                                        }
                                      }
                                      v57 = (uint32_t *)v159[2];
                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v159 + 5));
                                      g4_std::string::Destroy(v159 + 4);
                                      opDelete(v159);
                                      if ( v57 == nullptr )
                                        break;
                                      v159 = v57;
                                    }
                                  }
                                  v58 = (uint32_t *)v174[2];
                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v174 + 5));
                                  g4_std::string::Destroy(v174 + 4);
                                  opDelete(v174);
                                  if ( v58 == nullptr )
                                    break;
                                  v174 = v58;
                                }
                              }
                              v59 = (uint32_t *)v151[2];
                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v151 + 5));
                              g4_std::string::Destroy(v151 + 4);
                              opDelete(v151);
                              if ( v59 == nullptr )
                                break;
                              v151 = v59;
                            }
                          }
                          v60 = (iap::BillingMethodAndroid::Self *)v180[29];
                          v61 = (iap::BillingMethodAndroid::Self *)v180[28];
                          if ( v60 != v61 )
                          {
                            do
                            {
                              g4_std::string::Destroy((char *)v61 + 4);
                              v133 = v61;
                              v61 = (iap::BillingMethodAndroid::Self *)((char *)v61 + 8);
                              g4_std::string::Destroy(v133);
                            }
                            while ( v60 != v61 );
                            v61 = (iap::BillingMethodAndroid::Self *)v180[28];
                          }
                          if ( v61 != nullptr )
                            opDelete(v61);
                          g4_std::string::Destroy(v180 + 20);
                          v62 = v180[18];
                          if ( (uint32_t *)(v62 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v62 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v62 - 12));
                          }
                          g4_std::string::Destroy(v180 + 16);
                          g4_std::string::Destroy(v180 + 14);
                          g4_std::string::Destroy(v180 + 12);
                          g4_std::string::Destroy(v180 + 10);
                          g4_std::string::Destroy(v180 + 8);
                          g4_std::string::Destroy(v180 + 6);
                          v63 = v180[4];
                          if ( (uint32_t *)(v63 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v63 - 12));
                          }
                          opDelete(v180);
                          if ( v221 == nullptr )
                            break;
                          v180 = v221;
                          v7 = v221;
                        }
                      }
                      v215 = (uint32_t *)v186[2];
                      v186[5] = (uint32_t)(uintptr_t)(&off_2096648);
                      v153 = (uint32_t *)v186[33];
                      if ( v153 != nullptr )
                      {
                        while ( 1 )
                        {
                          v182 = (uint32_t *)v153[3];
                          if ( v182 != nullptr )
                          {
                            while ( 1 )
                            {
                              v176 = (uint32_t *)v182[3];
                              if ( v176 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v161 = (uint32_t *)v176[3];
                                  if ( v161 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      v170 = (uint32_t *)v161[3];
                                      if ( v170 != nullptr )
                                      {
                                        while ( 1 )
                                        {
                                          v196 = (uint32_t *)v170[3];
                                          if ( v196 != nullptr )
                                          {
                                            while ( 1 )
                                            {
                                              v206 = (uint32_t *)v196[3];
                                              if ( v206 != nullptr )
                                              {
                                                while ( 1 )
                                                {
                                                  v144 = (uint32_t *)v206[3];
                                                  if ( v144 != nullptr )
                                                  {
                                                    while ( 1 )
                                                    {
                                                      v77 = v144[3];
                                                      if ( v77 != 0 )
                                                      {
                                                        while ( 1 )
                                                        {
                                                          g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                                            (int)(uintptr_t)(v186 + 31),
                                                            *(uint32_t **)(v77 + 12));
                                                          v78 = *(uint32_t *)(v77 + 8);
                                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v77 + 20));
                                                          g4_std::string::Destroy(v77 + 16);
                                                          opDelete((void *)v77);
                                                          if ( v78 == 0 )
                                                            break;
                                                          v77 = v78;
                                                        }
                                                      }
                                                      v79 = (uint32_t *)v144[2];
                                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v144 + 5));
                                                      g4_std::string::Destroy(v144 + 4);
                                                      opDelete(v144);
                                                      if ( v79 == nullptr )
                                                        break;
                                                      v144 = v79;
                                                    }
                                                  }
                                                  v80 = (uint32_t *)v206[2];
                                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v206 + 5));
                                                  g4_std::string::Destroy(v206 + 4);
                                                  opDelete(v206);
                                                  if ( v80 == nullptr )
                                                    break;
                                                  v206 = v80;
                                                }
                                              }
                                              v81 = (uint32_t *)v196[2];
                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v196 + 5));
                                              g4_std::string::Destroy(v196 + 4);
                                              opDelete(v196);
                                              if ( v81 == nullptr )
                                                break;
                                              v196 = v81;
                                            }
                                          }
                                          v82 = (uint32_t *)v170[2];
                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v170 + 5));
                                          g4_std::string::Destroy(v170 + 4);
                                          opDelete(v170);
                                          if ( v82 == nullptr )
                                            break;
                                          v170 = v82;
                                        }
                                      }
                                      v83 = (uint32_t *)v161[2];
                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v161 + 5));
                                      g4_std::string::Destroy(v161 + 4);
                                      opDelete(v161);
                                      if ( v83 == nullptr )
                                        break;
                                      v161 = v83;
                                    }
                                  }
                                  v84 = (uint32_t *)v176[2];
                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v176 + 5));
                                  g4_std::string::Destroy(v176 + 4);
                                  opDelete(v176);
                                  if ( v84 == nullptr )
                                    break;
                                  v176 = v84;
                                }
                              }
                              v85 = (uint32_t *)v182[2];
                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v182 + 5));
                              g4_std::string::Destroy(v182 + 4);
                              opDelete(v182);
                              if ( v85 == nullptr )
                                break;
                              v182 = v85;
                            }
                          }
                          v86 = (uint32_t *)v153[2];
                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v153 + 5));
                          g4_std::string::Destroy(v153 + 4);
                          opDelete(v153);
                          if ( v86 == nullptr )
                            break;
                          v153 = v86;
                        }
                      }
                      v87 = (iap::BillingMethodAndroid::Self *)v186[29];
                      v88 = (iap::BillingMethodAndroid::Self *)v186[28];
                      if ( v87 != v88 )
                      {
                        do
                        {
                          g4_std::string::Destroy((char *)v88 + 4);
                          v135 = v88;
                          v88 = (iap::BillingMethodAndroid::Self *)((char *)v88 + 8);
                          g4_std::string::Destroy(v135);
                        }
                        while ( v87 != v88 );
                        v88 = (iap::BillingMethodAndroid::Self *)v186[28];
                      }
                      if ( v88 != nullptr )
                        opDelete(v88);
                      g4_std::string::Destroy(v186 + 20);
                      g4_std::string::Destroy(v186 + 18);
                      g4_std::string::Destroy(v186 + 16);
                      g4_std::string::Destroy(v186 + 14);
                      g4_std::string::Destroy(v186 + 12);
                      g4_std::string::Destroy(v186 + 10);
                      g4_std::string::Destroy(v186 + 8);
                      g4_std::string::Destroy(v186 + 6);
                      v89 = v186[4];
                      if ( (uint32_t *)(v89 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v89 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v89 - 12));
                      }
                      opDelete(v186);
                      if ( v215 == nullptr )
                        break;
                      v186 = v215;
                      v6 = v215;
                    }
                  }
                  v207 = (uint32_t *)v198[2];
                  v198[5] = (uint32_t)(uintptr_t)(&off_2096648);
                  v154 = (uint32_t *)v198[33];
                  if ( v154 != nullptr )
                  {
                    while ( 1 )
                    {
                      v188 = (uint32_t *)v154[3];
                      if ( v188 != nullptr )
                      {
                        while ( 1 )
                        {
                          v183 = (uint32_t *)v188[3];
                          if ( v183 != nullptr )
                          {
                            while ( 1 )
                            {
                              v177 = (uint32_t *)v183[3];
                              if ( v177 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v162 = (uint32_t *)v177[3];
                                  if ( v162 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      v171 = (uint32_t *)v162[3];
                                      if ( v171 != nullptr )
                                      {
                                        while ( 1 )
                                        {
                                          v197 = (uint32_t *)v171[3];
                                          if ( v197 != nullptr )
                                          {
                                            while ( 1 )
                                            {
                                              v145 = (uint32_t *)v197[3];
                                              if ( v145 != nullptr )
                                              {
                                                while ( 1 )
                                                {
                                                  v90 = v145[3];
                                                  if ( v90 != 0 )
                                                  {
                                                    while ( 1 )
                                                    {
                                                      g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                                        (int)(uintptr_t)(v198 + 31),
                                                        *(uint32_t **)(v90 + 12));
                                                      v91 = *(uint32_t *)(v90 + 8);
                                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v90 + 20));
                                                      g4_std::string::Destroy(v90 + 16);
                                                      opDelete((void *)v90);
                                                      if ( v91 == 0 )
                                                        break;
                                                      v90 = v91;
                                                    }
                                                  }
                                                  v92 = (uint32_t *)v145[2];
                                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v145 + 5));
                                                  g4_std::string::Destroy(v145 + 4);
                                                  opDelete(v145);
                                                  if ( v92 == nullptr )
                                                    break;
                                                  v145 = v92;
                                                }
                                              }
                                              v93 = (uint32_t *)v197[2];
                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v197 + 5));
                                              g4_std::string::Destroy(v197 + 4);
                                              opDelete(v197);
                                              if ( v93 == nullptr )
                                                break;
                                              v197 = v93;
                                            }
                                          }
                                          v94 = (uint32_t *)v171[2];
                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v171 + 5));
                                          g4_std::string::Destroy(v171 + 4);
                                          opDelete(v171);
                                          if ( v94 == nullptr )
                                            break;
                                          v171 = v94;
                                        }
                                      }
                                      v95 = (uint32_t *)v162[2];
                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v162 + 5));
                                      g4_std::string::Destroy(v162 + 4);
                                      opDelete(v162);
                                      if ( v95 == nullptr )
                                        break;
                                      v162 = v95;
                                    }
                                  }
                                  v96 = (uint32_t *)v177[2];
                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v177 + 5));
                                  g4_std::string::Destroy(v177 + 4);
                                  opDelete(v177);
                                  if ( v96 == nullptr )
                                    break;
                                  v177 = v96;
                                }
                              }
                              v97 = (uint32_t *)v183[2];
                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v183 + 5));
                              g4_std::string::Destroy(v183 + 4);
                              opDelete(v183);
                              if ( v97 == nullptr )
                                break;
                              v183 = v97;
                            }
                          }
                          v98 = (uint32_t *)v188[2];
                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v188 + 5));
                          g4_std::string::Destroy(v188 + 4);
                          opDelete(v188);
                          if ( v98 == nullptr )
                            break;
                          v188 = v98;
                        }
                      }
                      v99 = (uint32_t *)v154[2];
                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v154 + 5));
                      g4_std::string::Destroy(v154 + 4);
                      opDelete(v154);
                      if ( v99 == nullptr )
                        break;
                      v154 = v99;
                    }
                  }
                  v100 = (iap::BillingMethodAndroid::Self *)v198[29];
                  v101 = (iap::BillingMethodAndroid::Self *)v198[28];
                  if ( v100 != v101 )
                  {
                    do
                    {
                      g4_std::string::Destroy((char *)v101 + 4);
                      v136 = v101;
                      v101 = (iap::BillingMethodAndroid::Self *)((char *)v101 + 8);
                      g4_std::string::Destroy(v136);
                    }
                    while ( v100 != v101 );
                    v101 = (iap::BillingMethodAndroid::Self *)v198[28];
                  }
                  if ( v101 != nullptr )
                    opDelete(v101);
                  g4_std::string::Destroy(v198 + 20);
                  g4_std::string::Destroy(v198 + 18);
                  g4_std::string::Destroy(v198 + 16);
                  g4_std::string::Destroy(v198 + 14);
                  g4_std::string::Destroy(v198 + 12);
                  g4_std::string::Destroy(v198 + 10);
                  g4_std::string::Destroy(v198 + 8);
                  g4_std::string::Destroy(v198 + 6);
                  v102 = v198[4];
                  if ( (uint32_t *)(v102 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v102 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v102 - 12));
                  }
                  opDelete(v198);
                  if ( v207 == nullptr )
                    break;
                  v198 = v207;
                  v5 = v207;
                }
              }
              v195 = (uint32_t *)v208[2];
              v208[5] = (uint32_t)(uintptr_t)(&off_2096648);
              v152 = (uint32_t *)v208[33];
              if ( v152 != nullptr )
              {
                while ( 1 )
                {
                  v199 = (uint32_t *)v152[3];
                  if ( v199 != nullptr )
                  {
                    while ( 1 )
                    {
                      v187 = (uint32_t *)v199[3];
                      if ( v187 != nullptr )
                      {
                        while ( 1 )
                        {
                          v181 = (uint32_t *)v187[3];
                          if ( v181 != nullptr )
                          {
                            while ( 1 )
                            {
                              v175 = (uint32_t *)v181[3];
                              if ( v175 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v160 = (uint32_t *)v175[3];
                                  if ( v160 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      v169 = (uint32_t *)v160[3];
                                      if ( v169 != nullptr )
                                      {
                                        while ( 1 )
                                        {
                                          v143 = (uint32_t *)v169[3];
                                          if ( v143 != nullptr )
                                          {
                                            while ( 1 )
                                            {
                                              v64 = v143[3];
                                              if ( v64 != 0 )
                                              {
                                                while ( 1 )
                                                {
                                                  g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                                    (int)(uintptr_t)(v208 + 31),
                                                    *(uint32_t **)(v64 + 12));
                                                  v65 = *(uint32_t *)(v64 + 8);
                                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v64 + 20));
                                                  g4_std::string::Destroy(v64 + 16);
                                                  opDelete((void *)v64);
                                                  if ( v65 == 0 )
                                                    break;
                                                  v64 = v65;
                                                }
                                              }
                                              v66 = (uint32_t *)v143[2];
                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v143 + 5));
                                              g4_std::string::Destroy(v143 + 4);
                                              opDelete(v143);
                                              if ( v66 == nullptr )
                                                break;
                                              v143 = v66;
                                            }
                                          }
                                          v67 = (uint32_t *)v169[2];
                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v169 + 5));
                                          g4_std::string::Destroy(v169 + 4);
                                          opDelete(v169);
                                          if ( v67 == nullptr )
                                            break;
                                          v169 = v67;
                                        }
                                      }
                                      v68 = (uint32_t *)v160[2];
                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v160 + 5));
                                      g4_std::string::Destroy(v160 + 4);
                                      opDelete(v160);
                                      if ( v68 == nullptr )
                                        break;
                                      v160 = v68;
                                    }
                                  }
                                  v69 = (uint32_t *)v175[2];
                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v175 + 5));
                                  g4_std::string::Destroy(v175 + 4);
                                  opDelete(v175);
                                  if ( v69 == nullptr )
                                    break;
                                  v175 = v69;
                                }
                              }
                              v70 = (uint32_t *)v181[2];
                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v181 + 5));
                              g4_std::string::Destroy(v181 + 4);
                              opDelete(v181);
                              if ( v70 == nullptr )
                                break;
                              v181 = v70;
                            }
                          }
                          v71 = (uint32_t *)v187[2];
                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v187 + 5));
                          g4_std::string::Destroy(v187 + 4);
                          opDelete(v187);
                          if ( v71 == nullptr )
                            break;
                          v187 = v71;
                        }
                      }
                      v72 = (uint32_t *)v199[2];
                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v199 + 5));
                      g4_std::string::Destroy(v199 + 4);
                      opDelete(v199);
                      if ( v72 == nullptr )
                        break;
                      v199 = v72;
                    }
                  }
                  v73 = (uint32_t *)v152[2];
                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v152 + 5));
                  g4_std::string::Destroy(v152 + 4);
                  opDelete(v152);
                  if ( v73 == nullptr )
                    break;
                  v152 = v73;
                }
              }
              v74 = (iap::BillingMethodAndroid::Self *)v208[29];
              v75 = (iap::BillingMethodAndroid::Self *)v208[28];
              if ( v74 != v75 )
              {
                do
                {
                  g4_std::string::Destroy((char *)v75 + 4);
                  v134 = v75;
                  v75 = (iap::BillingMethodAndroid::Self *)((char *)v75 + 8);
                  g4_std::string::Destroy(v134);
                }
                while ( v74 != v75 );
                v75 = (iap::BillingMethodAndroid::Self *)v208[28];
              }
              if ( v75 != nullptr )
                opDelete(v75);
              g4_std::string::Destroy(v208 + 20);
              g4_std::string::Destroy(v208 + 18);
              g4_std::string::Destroy(v208 + 16);
              g4_std::string::Destroy(v208 + 14);
              g4_std::string::Destroy(v208 + 12);
              g4_std::string::Destroy(v208 + 10);
              g4_std::string::Destroy(v208 + 8);
              g4_std::string::Destroy(v208 + 6);
              v76 = v208[4];
              if ( (uint32_t *)(v76 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v76 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v76 - 12));
              }
              opDelete(v208);
              if ( v195 == nullptr )
                break;
              v208 = v195;
              v4 = v195;
            }
          }
          v172 = (uint32_t *)v216[2];
          v216[5] = (uint32_t)(uintptr_t)(&off_2096648);
          v156 = (uint32_t *)v216[33];
          if ( v156 != nullptr )
          {
            while ( 1 )
            {
              v210 = (uint32_t *)v156[3];
              if ( v210 != nullptr )
              {
                while ( 1 )
                {
                  v201 = (uint32_t *)v210[3];
                  if ( v201 != nullptr )
                  {
                    while ( 1 )
                    {
                      v190 = (uint32_t *)v201[3];
                      if ( v190 != nullptr )
                      {
                        while ( 1 )
                        {
                          v185 = (uint32_t *)v190[3];
                          if ( v185 != nullptr )
                          {
                            while ( 1 )
                            {
                              v179 = (uint32_t *)v185[3];
                              if ( v179 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v164 = (uint32_t *)v179[3];
                                  if ( v164 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      v147 = (uint32_t *)v164[3];
                                      if ( v147 != nullptr )
                                      {
                                        while ( 1 )
                                        {
                                          v117 = v147[3];
                                          if ( v117 != 0 )
                                          {
                                            while ( 1 )
                                            {
                                              g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                                (int)(uintptr_t)(v216 + 31),
                                                *(uint32_t **)(v117 + 12));
                                              v118 = *(uint32_t *)(v117 + 8);
                                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v117 + 20));
                                              g4_std::string::Destroy(v117 + 16);
                                              opDelete((void *)v117);
                                              if ( v118 == 0 )
                                                break;
                                              v117 = v118;
                                            }
                                          }
                                          v119 = (uint32_t *)v147[2];
                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v147 + 5));
                                          g4_std::string::Destroy(v147 + 4);
                                          opDelete(v147);
                                          if ( v119 == nullptr )
                                            break;
                                          v147 = v119;
                                        }
                                      }
                                      v120 = (uint32_t *)v164[2];
                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v164 + 5));
                                      g4_std::string::Destroy(v164 + 4);
                                      opDelete(v164);
                                      if ( v120 == nullptr )
                                        break;
                                      v164 = v120;
                                    }
                                  }
                                  v121 = (uint32_t *)v179[2];
                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v179 + 5));
                                  g4_std::string::Destroy(v179 + 4);
                                  opDelete(v179);
                                  if ( v121 == nullptr )
                                    break;
                                  v179 = v121;
                                }
                              }
                              v122 = (uint32_t *)v185[2];
                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v185 + 5));
                              g4_std::string::Destroy(v185 + 4);
                              opDelete(v185);
                              if ( v122 == nullptr )
                                break;
                              v185 = v122;
                            }
                          }
                          v123 = (uint32_t *)v190[2];
                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v190 + 5));
                          g4_std::string::Destroy(v190 + 4);
                          opDelete(v190);
                          if ( v123 == nullptr )
                            break;
                          v190 = v123;
                        }
                      }
                      v124 = (uint32_t *)v201[2];
                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v201 + 5));
                      g4_std::string::Destroy(v201 + 4);
                      opDelete(v201);
                      if ( v124 == nullptr )
                        break;
                      v201 = v124;
                    }
                  }
                  v125 = (uint32_t *)v210[2];
                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v210 + 5));
                  g4_std::string::Destroy(v210 + 4);
                  opDelete(v210);
                  if ( v125 == nullptr )
                    break;
                  v210 = v125;
                }
              }
              v126 = (uint32_t *)v156[2];
              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v156 + 5));
              g4_std::string::Destroy(v156 + 4);
              opDelete(v156);
              if ( v126 == nullptr )
                break;
              v156 = v126;
            }
          }
          v127 = (iap::BillingMethodAndroid::Self *)v216[29];
          v128 = (iap::BillingMethodAndroid::Self *)v216[28];
          if ( v127 != v128 )
          {
            do
            {
              g4_std::string::Destroy((char *)v128 + 4);
              v138 = v128;
              v128 = (iap::BillingMethodAndroid::Self *)((char *)v128 + 8);
              g4_std::string::Destroy(v138);
            }
            while ( v127 != v128 );
            v128 = (iap::BillingMethodAndroid::Self *)v216[28];
          }
          if ( v128 != nullptr )
            opDelete(v128);
          g4_std::string::Destroy(v216 + 20);
          g4_std::string::Destroy(v216 + 18);
          g4_std::string::Destroy(v216 + 16);
          g4_std::string::Destroy(v216 + 14);
          g4_std::string::Destroy(v216 + 12);
          g4_std::string::Destroy(v216 + 10);
          g4_std::string::Destroy(v216 + 8);
          g4_std::string::Destroy(v216 + 6);
          v129 = v216[4];
          if ( (uint32_t *)(v129 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v129 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v129 - 12));
          }
          opDelete(v216);
          if ( v172 == nullptr )
            break;
          v216 = v172;
          v3 = v172;
        }
      }
      v163 = (uint32_t *)a2[2];
      a2[5] = (uint32_t)(uintptr_t)(&off_2096648);
      v217 = (uint32_t *)a2[33];
      if ( v217 != nullptr )
      {
        while ( 1 )
        {
          v209 = (uint32_t *)v217[3];
          if ( v209 != nullptr )
          {
            while ( 1 )
            {
              v200 = (uint32_t *)v209[3];
              if ( v200 != nullptr )
              {
                while ( 1 )
                {
                  v189 = (uint32_t *)v200[3];
                  if ( v189 != nullptr )
                  {
                    while ( 1 )
                    {
                      v184 = (uint32_t *)v189[3];
                      if ( v184 != nullptr )
                      {
                        while ( 1 )
                        {
                          v178 = (uint32_t *)v184[3];
                          if ( v178 != nullptr )
                          {
                            while ( 1 )
                            {
                              v155 = (uint32_t *)v178[3];
                              if ( v155 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v146 = (uint32_t *)v155[3];
                                  if ( v146 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      v103 = v146[3];
                                      if ( v103 != 0 )
                                      {
                                        while ( 1 )
                                        {
                                          g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                            (int)(uintptr_t)(a2 + 31),
                                            *(uint32_t **)(v103 + 12));
                                          v104 = *(uint32_t *)(v103 + 8);
                                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v103 + 20));
                                          g4_std::string::Destroy(v103 + 16);
                                          opDelete((void *)v103);
                                          if ( v104 == 0 )
                                            break;
                                          v103 = v104;
                                        }
                                      }
                                      v105 = (uint32_t *)v146[2];
                                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v146 + 5));
                                      g4_std::string::Destroy(v146 + 4);
                                      opDelete(v146);
                                      if ( v105 == nullptr )
                                        break;
                                      v146 = v105;
                                    }
                                  }
                                  v106 = (uint32_t *)v155[2];
                                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v155 + 5));
                                  g4_std::string::Destroy(v155 + 4);
                                  opDelete(v155);
                                  if ( v106 == nullptr )
                                    break;
                                  v155 = v106;
                                }
                              }
                              v107 = (uint32_t *)v178[2];
                              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v178 + 5));
                              g4_std::string::Destroy(v178 + 4);
                              opDelete(v178);
                              if ( v107 == nullptr )
                                break;
                              v178 = v107;
                            }
                          }
                          v108 = (uint32_t *)v184[2];
                          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v184 + 5));
                          g4_std::string::Destroy(v184 + 4);
                          opDelete(v184);
                          if ( v108 == nullptr )
                            break;
                          v184 = v108;
                        }
                      }
                      v109 = (uint32_t *)v189[2];
                      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v189 + 5));
                      g4_std::string::Destroy(v189 + 4);
                      opDelete(v189);
                      if ( v109 == nullptr )
                        break;
                      v189 = v109;
                    }
                  }
                  v110 = (uint32_t *)v200[2];
                  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v200 + 5));
                  g4_std::string::Destroy(v200 + 4);
                  opDelete(v200);
                  if ( v110 == nullptr )
                    break;
                  v200 = v110;
                }
              }
              v111 = (uint32_t *)v209[2];
              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v209 + 5));
              v112 = v209[4];
              if ( (uint32_t *)(v112 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v112 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v112 - 12));
              }
              opDelete(v209);
              if ( v111 == nullptr )
                break;
              v209 = v111;
            }
          }
          v113 = (uint32_t *)v217[2];
          iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v217 + 5));
          g4_std::string::Destroy(v217 + 4);
          opDelete(v217);
          if ( v113 == nullptr )
            break;
          v217 = v113;
        }
      }
      v114 = (iap::BillingMethodAndroid::Self *)a2[29];
      v115 = (iap::BillingMethodAndroid::Self *)a2[28];
      if ( v114 != v115 )
      {
        do
        {
          g4_std::string::Destroy((char *)v115 + 4);
          v137 = v115;
          v115 = (iap::BillingMethodAndroid::Self *)((char *)v115 + 8);
          g4_std::string::Destroy(v137);
        }
        while ( v114 != v115 );
        v115 = (iap::BillingMethodAndroid::Self *)a2[28];
      }
      if ( v115 != nullptr )
        opDelete(v115);
      g4_std::string::Destroy(a2 + 20);
      g4_std::string::Destroy(a2 + 18);
      g4_std::string::Destroy(a2 + 16);
      g4_std::string::Destroy(a2 + 14);
      g4_std::string::Destroy(a2 + 12);
      g4_std::string::Destroy(a2 + 10);
      g4_std::string::Destroy(a2 + 8);
      g4_std::string::Destroy(a2 + 6);
      v116 = a2[4];
      if ( (uint32_t *)(v116 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v116 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v116 - 12));
      }
      opDelete(a2);
      if ( v163 == nullptr )
        break;
      a2 = v163;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy  (binary VA: 0x1529830)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(int a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  int *v13;
  uint32_t *v14;
  uint32_t *v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  int *v26;
  uint32_t *v27;
  uint32_t *v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  uint32_t *v33;
  uint32_t *v34;
  int v35;
  int *v36;
  uint32_t *v37;
  uint32_t *v38;
  int v39;
  int v40;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;
  int *v55;
  uint32_t *v56;

  v56 = (uint32_t *)opNew(0x9Cu);
  if ( v56 != (uint32_t *)-16 )
  {
    g4_std::string::construct_copy(v56 + 4, a2 + 4);
    iap::BillingMethodAndroid::Construct(
      (iap::BillingMethodAndroid::Self *)(v56 + 5),
      (const iap::BillingMethodAndroid::Self *)(a2 + 5));
  }
  *v56 = *a2;
  v56[3] = 0;
  v56[2] = 0;
  v56[1] = a3;
  v46 = (uint32_t *)a2[3];
  if ( v46 != nullptr )
  {
    v52 = (uint32_t *)opNew(0x9Cu);
    if ( v52 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v52 + 4, v46 + 4);
      iap::BillingMethodAndroid::Construct(
        (iap::BillingMethodAndroid::Self *)(v52 + 5),
        (const iap::BillingMethodAndroid::Self *)(v46 + 5));
    }
    *v52 = *v46;
    v52[3] = 0;
    v52[2] = 0;
    v52[1] = (uint32_t)(uintptr_t)(v56);
    v3 = v46;
    v4 = (uint32_t *)v46[3];
    if ( v4 != nullptr )
    {
      v42 = (uint32_t *)opNew(0x9Cu);
      if ( v42 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v42 + 4, v4 + 4);
        iap::BillingMethodAndroid::Construct(
          (iap::BillingMethodAndroid::Self *)(v42 + 5),
          (const iap::BillingMethodAndroid::Self *)(v4 + 5));
      }
      *v42 = *v4;
      v42[2] = 0;
      v42[3] = 0;
      v42[1] = (uint32_t)(uintptr_t)(v52);
      v5 = v4[3];
      if ( v5 != 0 )
        v42[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                   a1,
                   (uint32_t *)(uintptr_t)(v5),
                   (int)(uintptr_t)(v42)));
      v6 = (int *)v4[2];
      v7 = v42;
      if ( v6 != nullptr )
      {
        while ( 1 )
        {
          v18 = (uint32_t *)opNew(0x9Cu);
          if ( v18 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v18 + 4, v6 + 4);
            iap::BillingMethodAndroid::Construct(
              (iap::BillingMethodAndroid::Self *)(v18 + 5),
              (const iap::BillingMethodAndroid::Self *)(v6 + 5));
          }
          v19 = *v6;
          v18[2] = 0;
          *v18 = v19;
          v18[3] = 0;
          v7[2] = (uint32_t)(uintptr_t)(v18);
          v18[1] = (uint32_t)(uintptr_t)(v7);
          v20 = v6[3];
          if ( v20 != 0 )
            v18[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v20),
                       (int)(uintptr_t)(v18)));
          v6 = (int *)v6[2];
          if ( v6 == nullptr )
            break;
          v7 = v18;
        }
      }
      v52[3] = (uint32_t)(uintptr_t)(v42);
      v3 = v46;
    }
    v8 = v52;
    v50 = (uint32_t *)v3[2];
    if ( v50 != nullptr )
    {
      while ( 1 )
      {
        v43 = (uint32_t *)opNew(0x9Cu);
        if ( v43 != (uint32_t *)-16 )
        {
          g4_std::string::construct_copy(v43 + 4, v50 + 4);
          iap::BillingMethodAndroid::Construct(
            (iap::BillingMethodAndroid::Self *)(v43 + 5),
            (const iap::BillingMethodAndroid::Self *)(v50 + 5));
        }
        v9 = *v50;
        v43[3] = 0;
        *v43 = v9;
        v43[2] = 0;
        v8[2] = (uint32_t)(uintptr_t)(v43);
        v43[1] = (uint32_t)(uintptr_t)(v8);
        v10 = v50;
        v11 = (uint32_t *)v50[3];
        if ( v11 != nullptr )
        {
          v47 = (uint32_t *)opNew(0x9Cu);
          if ( v47 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v47 + 4, v11 + 4);
            iap::BillingMethodAndroid::Construct(
              (iap::BillingMethodAndroid::Self *)(v47 + 5),
              (const iap::BillingMethodAndroid::Self *)(v11 + 5));
          }
          *v47 = *v11;
          v47[2] = 0;
          v47[3] = 0;
          v47[1] = (uint32_t)(uintptr_t)(v43);
          v12 = v11[3];
          if ( v12 != 0 )
            v47[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v12),
                       (int)(uintptr_t)(v47)));
          v13 = (int *)v11[2];
          v14 = v47;
          if ( v13 != nullptr )
          {
            while ( 1 )
            {
              v15 = (uint32_t *)opNew(0x9Cu);
              if ( v15 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v15 + 4, v13 + 4);
                iap::BillingMethodAndroid::Construct(
                  (iap::BillingMethodAndroid::Self *)(v15 + 5),
                  (const iap::BillingMethodAndroid::Self *)(v13 + 5));
              }
              v16 = *v13;
              v15[2] = 0;
              *v15 = v16;
              v15[3] = 0;
              v14[2] = (uint32_t)(uintptr_t)(v15);
              v15[1] = (uint32_t)(uintptr_t)(v14);
              v17 = v13[3];
              if ( v17 != 0 )
                v15[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v17),
                           (int)(uintptr_t)(v15)));
              v13 = (int *)v13[2];
              if ( v13 == nullptr )
                break;
              v14 = v15;
            }
          }
          v43[3] = (uint32_t)(uintptr_t)(v47);
          v10 = v50;
        }
        v50 = (uint32_t *)v10[2];
        if ( v50 == nullptr )
          break;
        v8 = v43;
      }
    }
    v56[3] = (uint32_t)(uintptr_t)(v52);
  }
  v21 = v56;
  v55 = (int *)a2[2];
  if ( v55 != nullptr )
  {
    while ( 1 )
    {
      v53 = (uint32_t *)opNew(0x9Cu);
      if ( v53 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v53 + 4, v55 + 4);
        iap::BillingMethodAndroid::Construct(
          (iap::BillingMethodAndroid::Self *)(v53 + 5),
          (const iap::BillingMethodAndroid::Self *)(v55 + 5));
      }
      v22 = *v55;
      v53[3] = 0;
      *v53 = v22;
      v53[2] = 0;
      v21[2] = (uint32_t)(uintptr_t)(v53);
      v53[1] = (uint32_t)(uintptr_t)(v21);
      v44 = (uint32_t *)v55[3];
      if ( v44 != nullptr )
      {
        v54 = (uint32_t *)opNew(0x9Cu);
        if ( v54 != (uint32_t *)-16 )
        {
          g4_std::string::construct_copy(v54 + 4, v44 + 4);
          iap::BillingMethodAndroid::Construct(
            (iap::BillingMethodAndroid::Self *)(v54 + 5),
            (const iap::BillingMethodAndroid::Self *)(v44 + 5));
        }
        *v54 = *v44;
        v54[3] = 0;
        v54[2] = 0;
        v54[1] = (uint32_t)(uintptr_t)(v53);
        v23 = v44;
        v24 = (uint32_t *)v44[3];
        if ( v24 != nullptr )
        {
          v48 = (uint32_t *)opNew(0x9Cu);
          if ( v48 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v48 + 4, v24 + 4);
            iap::BillingMethodAndroid::Construct(
              (iap::BillingMethodAndroid::Self *)(v48 + 5),
              (const iap::BillingMethodAndroid::Self *)(v24 + 5));
          }
          *v48 = *v24;
          v48[2] = 0;
          v48[3] = 0;
          v48[1] = (uint32_t)(uintptr_t)(v54);
          v25 = v24[3];
          if ( v25 != 0 )
            v48[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v25),
                       (int)(uintptr_t)(v48)));
          v26 = (int *)v24[2];
          v27 = v48;
          if ( v26 != nullptr )
          {
            while ( 1 )
            {
              v28 = (uint32_t *)opNew(0x9Cu);
              if ( v28 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v28 + 4, v26 + 4);
                iap::BillingMethodAndroid::Construct(
                  (iap::BillingMethodAndroid::Self *)(v28 + 5),
                  (const iap::BillingMethodAndroid::Self *)(v26 + 5));
              }
              v29 = *v26;
              v28[2] = 0;
              *v28 = v29;
              v28[3] = 0;
              v27[2] = (uint32_t)(uintptr_t)(v28);
              v28[1] = (uint32_t)(uintptr_t)(v27);
              v30 = v26[3];
              if ( v30 != 0 )
                v28[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v30),
                           (int)(uintptr_t)(v28)));
              v26 = (int *)v26[2];
              if ( v26 == nullptr )
                break;
              v27 = v28;
            }
          }
          v54[3] = (uint32_t)(uintptr_t)(v48);
          v23 = v44;
        }
        v31 = v54;
        v51 = (uint32_t *)v23[2];
        if ( v51 != nullptr )
        {
          while ( 1 )
          {
            v45 = (uint32_t *)opNew(0x9Cu);
            if ( v45 != (uint32_t *)-16 )
            {
              g4_std::string::construct_copy(v45 + 4, v51 + 4);
              iap::BillingMethodAndroid::Construct(
                (iap::BillingMethodAndroid::Self *)(v45 + 5),
                (const iap::BillingMethodAndroid::Self *)(v51 + 5));
            }
            v32 = *v51;
            v45[3] = 0;
            *v45 = v32;
            v45[2] = 0;
            v31[2] = (uint32_t)(uintptr_t)(v45);
            v45[1] = (uint32_t)(uintptr_t)(v31);
            v33 = v51;
            v34 = (uint32_t *)v51[3];
            if ( v34 != nullptr )
            {
              v49 = (uint32_t *)opNew(0x9Cu);
              if ( v49 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v49 + 4, v34 + 4);
                iap::BillingMethodAndroid::Construct(
                  (iap::BillingMethodAndroid::Self *)(v49 + 5),
                  (const iap::BillingMethodAndroid::Self *)(v34 + 5));
              }
              *v49 = *v34;
              v49[2] = 0;
              v49[3] = 0;
              v49[1] = (uint32_t)(uintptr_t)(v45);
              v35 = v34[3];
              if ( v35 != 0 )
                v49[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v35),
                           (int)(uintptr_t)(v49)));
              v36 = (int *)v34[2];
              v37 = v49;
              if ( v36 != nullptr )
              {
                while ( 1 )
                {
                  v38 = (uint32_t *)opNew(0x9Cu);
                  if ( v38 != (uint32_t *)-16 )
                  {
                    g4_std::string::construct_copy(v38 + 4, v36 + 4);
                    iap::BillingMethodAndroid::Construct(
                      (iap::BillingMethodAndroid::Self *)(v38 + 5),
                      (const iap::BillingMethodAndroid::Self *)(v36 + 5));
                  }
                  v39 = *v36;
                  v38[2] = 0;
                  *v38 = v39;
                  v38[3] = 0;
                  v37[2] = (uint32_t)(uintptr_t)(v38);
                  v38[1] = (uint32_t)(uintptr_t)(v37);
                  v40 = v36[3];
                  if ( v40 != 0 )
                    v38[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                               a1,
                               (uint32_t *)(uintptr_t)(v40),
                               (int)(uintptr_t)(v38)));
                  v36 = (int *)v36[2];
                  if ( v36 == nullptr )
                    break;
                  v37 = v38;
                }
              }
              v45[3] = (uint32_t)(uintptr_t)(v49);
              v33 = v51;
            }
            v51 = (uint32_t *)v33[2];
            if ( v51 == nullptr )
              break;
            v31 = v45;
          }
        }
        v53[3] = (uint32_t)(uintptr_t)(v54);
      }
      v55 = (int *)v55[2];
      if ( v55 == nullptr )
        break;
      v21 = v53;
    }
  }
  return v56;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert  (binary VA: 0x152a220)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert(int *a1, int a2, int a3, int a4, const void **a5)
{
  unsigned int v5;
  int v6;
  size_t v8;
  size_t n;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  size_t v14;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v8 = *((uint32_t *)*a5 - 3);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v14 = n;
    if ( n > v8 )
      n = *((uint32_t *)*a5 - 3);
    v10 = memcmp(*a5, *(const void **)(a4 + 16), n);
    v11 = v8 - v14;
    if ( v10 != 0 )
      v11 = v10;
    v5 = v11 >> 31;
  }
  v6 = opNew(0x9Cu);
  if ( v6 != -16 )
  {
    v12 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    iap::BillingMethodAndroid::Construct(
      (iap::BillingMethodAndroid::Self *)(v12 + 20),
      (const iap::BillingMethodAndroid::Self *)(a5 + 1));
    v6 = v12;
  }
  v13 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert_unique  (binary VA: 0x152a330)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert_unique(int a1, uint32_t *a2, const void **a3)
{
  int v3;
  size_t v4;
  int v5;
  uint32_t *v6;
  size_t v7;
  size_t n;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  int v18;
  size_t v19;
  size_t v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef void *_g4_t_s1;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_s1)) > _g4_s5 ? (20u + sizeof(_g4_t_s1)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v30)) > _g4_s6 ? (24u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v31)) > _g4_s7 ? (28u + sizeof(_g4_t_v31)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);

  v30 = a2 + 1;
  if ( a2[2] == 0 )
  {
    v11 = (int)(uintptr_t)(a2 + 1);
    goto LABEL_17;
  }
  v3 = a2[2];
  s1 = (void *)*a3;
  v4 = *((uint32_t *)*a3 - 3);
  while ( 1 )
  {
    v6 = *(uint32_t **)(v3 + 16);
    v7 = *(v6 - 3);
    n = v7;
    v25 = v3;
    if ( v4 <= v7 )
      n = v4;
    v24 = n;
    v9 = memcmp(s1, *(const void **)(v3 + 16), n);
    if ( v9 == 0 )
      v9 = v4 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v25 + 8);
    v27 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = *(uint32_t *)(v25 + 12);
  v27 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v25;
  v12 = v10;
  v13 = v24;
  v14 = v25;
  if ( v27 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( v11 == a2[3] )
  {
    g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert(
      v31,
      (int)(uintptr_t)(a2),
      0,
      v11,
      a3);
    *(uint32_t *)a1 = v31[0];
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    v18 = sub_19048F0(v11);
    v12 = *(uint32_t **)(v18 + 16);
    v14 = v18;
    v7 = *(v12 - 3);
    s1 = (void *)*a3;
    v4 = *((uint32_t *)*a3 - 3);
    v13 = v7;
    if ( v4 <= v7 )
      v13 = *((uint32_t *)s1 - 3);
LABEL_12:
    v26 = v14;
    v15 = v7 - v4;
    v16 = memcmp(v12, s1, v13);
    if ( v16 != 0 )
      v15 = v16;
    if ( v15 < 0 )
    {
      LOBYTE(v28) = 1;
      if ( (uint32_t *)v11 != v30 )
      {
        v19 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v20 = v19;
        if ( v4 <= v19 )
          v20 = v4;
        v21 = v4 - v19;
        v22 = memcmp(s1, *(const void **)(v11 + 16), v20);
        if ( v22 == 0 )
          v22 = v21;
        v28 = v22 >> 31;
      }
      v23 = opNew(0x9Cu);
      if ( v23 != -16 )
      {
        g4_std::string::construct_copy(v23 + 16, a3);
        iap::BillingMethodAndroid::Construct(
          (iap::BillingMethodAndroid::Self *)(v23 + 20),
          (const iap::BillingMethodAndroid::Self *)(a3 + 1));
      }
      sub_1904970(v28, v23, v11, v30);
      ++a2[5];
      *(uint32_t *)a1 = v23;
      *(uint8_t *)(a1 + 4) = 1;
      return a1;
    }
    else
    {
      *(uint32_t *)a1 = v26;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert_unique  (binary VA: 0x152a540)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert_unique(int *a1, uint32_t *a2, int a3, const void **a4)
{
  size_t v4;
  size_t n;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  int v11;
  int v13;
  size_t v14;
  int v15;
  int v16;
  uint32_t *v17;
  size_t v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  typedef uint32_t *_g4_t_v27;
  typedef void *_g4_t_v28;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef uint32_t *_g4_t_s2;
  typedef int _g4_t_v42[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v30)) > _g4_s3 ? (12u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v31)) > _g4_s4 ? (16u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v32)) > _g4_s5 ? (16u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v33)) > _g4_s6 ? (20u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v34)) > _g4_s7 ? (20u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v35)) > _g4_s8 ? (20u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_s1)) > _g4_s9 ? (24u + sizeof(_g4_t_s1)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v37)) > _g4_s10 ? (24u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v38)) > _g4_s11 ? (28u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v39)) > _g4_s12 ? (28u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v40)) > _g4_s13 ? (32u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_s2)) > _g4_s14 ? (36u + sizeof(_g4_t_s2)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v42)) > _g4_s15 ? (40u + sizeof(_g4_t_v42)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);

  v40 = a2 + 1;
  if ( a2 + 1 == (uint32_t *)a3 )
  {
    if ( a2[5] != 0 )
    {
      v34 = a2[4];
      v17 = *(uint32_t **)(v34 + 16);
      v37 = (void *)*(v17 - 3);
      v18 = (size_t)v37;
      v19 = *((uint32_t *)*a4 - 3);
      if ( v19 <= (unsigned int)(uintptr_t)(v37) )
        v18 = *((uint32_t *)*a4 - 3);
      v30 = *(void **)(v34 + 16);
      v32 = (void *)*a4;
      v39 = v18;
      v20 = memcmp(v17, *a4, v18);
      if ( v20 == 0 )
        v20 = (int)(uintptr_t)(v37) - v19;
      if ( v20 < 0 )
      {
        LOBYTE(v21) = 1;
        if ( v40 != (uint32_t *)v34 )
        {
          v22 = v19 - (uint32_t)(uintptr_t)(v37);
          v23 = memcmp(v32, v30, v39);
          if ( v23 == 0 )
            v23 = v22;
          v21 = v23 >> 31;
        }
        v24 = opNew(0x9Cu);
        if ( v24 != -16 )
        {
          g4_std::string::construct_copy(v24 + 16, a4);
          iap::BillingMethodAndroid::Construct(
            (iap::BillingMethodAndroid::Self *)(v24 + 20),
            (const iap::BillingMethodAndroid::Self *)(a4 + 1));
        }
LABEL_45:
        sub_1904970(v21, v24, v34, v40);
        ++a2[5];
        *a1 = v24;
        return a1;
      }
    }
LABEL_37:
    g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert_unique(
      (int)(uintptr_t)(v42),
      a2,
      a4);
    *a1 = v42[0];
    return a1;
  }
  s2 = *(uint32_t **)(a3 + 16);
  s1 = (void *)*a4;
  v4 = *((uint32_t *)*a4 - 3);
  n = v4;
  v28 = (void *)*(s2 - 3);
  if ( (unsigned int)(uintptr_t)(v28) <= v4 )
    n = *(s2 - 3);
  v33 = n;
  v6 = memcmp(s1, s2, n);
  if ( v6 == 0 )
    v6 = v4 - (uint32_t)(uintptr_t)(v28);
  if ( v6 >= 0 )
  {
    v13 = memcmp(s2, s1, v33);
    if ( v13 == 0 )
      v13 = (int)(uintptr_t)(v28) - v4;
    if ( v13 >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    if ( a2[4] == a3 )
    {
      g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        a2[4],
        a4);
    }
    else
    {
      v35 = sub_19048E0(a3);
      v14 = v4;
      v31 = *(void **)(*(uint32_t *)(v35 + 16) - 12);
      if ( (unsigned int)(uintptr_t)(v31) <= v4 )
        v14 = *(uint32_t *)(*(uint32_t *)(v35 + 16) - 12);
      v15 = memcmp(s1, *(const void **)(v35 + 16), v14);
      v16 = v4 - (uint32_t)(uintptr_t)(v31);
      if ( v15 != 0 )
        v16 = v15;
      if ( v16 >= 0 )
        goto LABEL_37;
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v11 = opNew(0x9Cu);
        if ( v11 != -16 )
        {
          g4_std::string::construct_copy(v11 + 16, a4);
          iap::BillingMethodAndroid::Construct(
            (iap::BillingMethodAndroid::Self *)(v11 + 20),
            (const iap::BillingMethodAndroid::Self *)(a4 + 1));
        }
        sub_1904970(1, v11, v35, v40);
        goto LABEL_17;
      }
      g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        a3,
        a4);
    }
  }
  else
  {
    v7 = a2[3];
    if ( v7 != a3 )
    {
      v8 = sub_1904940(a3);
      v9 = v4;
      v27 = *(uint32_t **)(v8 + 16);
      v34 = v8;
      v29 = (void *)*(v27 - 3);
      if ( (unsigned int)(uintptr_t)(v29) <= v4 )
        v9 = *(v27 - 3);
      v38 = v9;
      v10 = memcmp(v27, s1, v9);
      if ( v10 == 0 )
        v10 = (int)(uintptr_t)(v29) - v4;
      if ( v10 < 0 )
      {
        if ( *(uint32_t *)(v34 + 12) != 0 )
        {
          v11 = opNew(0x9Cu);
          if ( v11 != -16 )
          {
            g4_std::string::construct_copy(v11 + 16, a4);
            iap::BillingMethodAndroid::Construct(
              (iap::BillingMethodAndroid::Self *)(v11 + 20),
              (const iap::BillingMethodAndroid::Self *)(a4 + 1));
          }
          sub_1904970(1, v11, a3, v40);
LABEL_17:
          ++a2[5];
          *a1 = v11;
          return a1;
        }
        LOBYTE(v21) = 1;
        if ( v40 != (uint32_t *)v34 )
        {
          v25 = memcmp(s1, v27, v38);
          v26 = v4 - (uint32_t)(uintptr_t)(v29);
          if ( v25 == 0 )
            v25 = v26;
          v21 = v25 >> 31;
        }
        v24 = opNew(0x9Cu);
        if ( v24 != -16 )
        {
          g4_std::string::construct_copy(v24 + 16, a4);
          iap::BillingMethodAndroid::Construct(
            (iap::BillingMethodAndroid::Self *)(v24 + 20),
            (const iap::BillingMethodAndroid::Self *)(a4 + 1));
        }
        goto LABEL_45;
      }
      goto LABEL_37;
    }
    g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v7,
      a2[3],
      a4);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_string_iap_BillingMethod_5b0621::opIndex  (binary VA: 0x152a9b0)
// Original: std::map<std::string,iap::BillingMethodAndroid>::operator[]
// ----------------------------------------------------------------------------
int g4_std::map_string_iap_BillingMethod_5b0621::opIndex(uint32_t *a1, void **a2)
{
  int v2;
  size_t v3;
  size_t v4;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  typedef size_t _g4_t_n;
  typedef void **_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef void *_g4_t_s2;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[37];
  typedef const void *_g4_t_v20;
  typedef uint32_t _g4_t_v21[40];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_n)) > _g4_s0 ? (0u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v16)) > _g4_s4 ? (16u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_s2)) > _g4_s5 ? (20u + sizeof(_g4_t_s2)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v18)) > _g4_s6 ? (24u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (176u + sizeof(_g4_t_v20)) > _g4_s8 ? (176u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (180u + sizeof(_g4_t_v21)) > _g4_s9 ? (180u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 176u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 180u);

  v21[36] = (uint32_t)(uintptr_t)(&a1);
  v15 = a1;
  v14 = a1 + 1;
  v13 = a2;
  v2 = a1[2];
  if ( v2 == 0 )
  {
    v16 = (int)(uintptr_t)(a1 + 1);
LABEL_16:
    memset(v19, 0, 0x88u);
    v19[24] = (uint32_t)(uintptr_t)(&v19[22]);
    v19[25] = (uint32_t)(uintptr_t)(&v19[22]);
    v19[0] = ((uint32_t)(uintptr_t)&off_20966C8);
    v19[1] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19[3] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19[5] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19[7] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19[12] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19[17] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19[19] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19[20] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19[27] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19[29] = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::construct_copy(&v20, v13);
    iap::BillingMethodAndroid::Construct(
      (iap::BillingMethodAndroid::Self *)v21,
      (const iap::BillingMethodAndroid::Self *)v19);
    g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert_unique(
      &v18,
      v15,
      v16,
      &v20);
    v16 = v18;
    iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v21);
    g4_std::string::Destroy(&v20);
    iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v19);
    return v16 + 20;
  }
  s2 = *a2;
  v3 = *((uint32_t *)*a2 - 3);
  v16 = (int)(uintptr_t)(a1 + 1);
  do
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
      v5 = v4;
      n = v3;
      if ( v3 <= v4 )
        v5 = v3;
      v6 = memcmp(*(const void **)(v2 + 16), s2, v5);
      v3 = n;
      v7 = v4 - n;
      if ( v6 != 0 )
        v7 = v6;
      if ( v7 < 0 )
        break;
      v16 = v2;
      v2 = *(uint32_t *)(v2 + 8);
      if ( v2 == 0 )
        goto LABEL_10;
    }
    v2 = *(uint32_t *)(v2 + 12);
  }
  while ( v2 != 0 );
LABEL_10:
  if ( (uint32_t *)v16 == v14 )
    goto LABEL_16;
  v8 = *(uint32_t *)(*(uint32_t *)(v16 + 16) - 12);
  v9 = v8;
  if ( n <= v8 )
    v9 = n;
  v10 = memcmp(s2, *(const void **)(v16 + 16), v9);
  if ( v10 == 0 )
    v10 = n - v8;
  if ( v10 < 0 )
    goto LABEL_16;
  return v16 + 20;
}

// ----------------------------------------------------------------------------
// Function: IAB_STORE_ITEM::getProperty  (binary VA: 0x152abe0)
// Original: IAB_STORE_ITEM::getProperty
// ----------------------------------------------------------------------------
IAB_STORE_ITEM::Self * IAB_STORE_ITEM::getProperty(IAB_STORE_ITEM::Self *self, const char *a2, char *a3)
{
  int v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  size_t v13;
  size_t v14;
  size_t v15;
  int v16;
  int v17;
  size_t v18;
  size_t v19;
  int v20;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef char *_g4_t_v24;
  typedef const char *_g4_t_v25;
  typedef IAB_STORE_ITEM::Self *_g4_t_v26;
  typedef const char *_g4_t_v27;
  typedef const char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef char *_g4_t_s2;
  typedef void *_g4_t_s2a;
  typedef int _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34[4];
  typedef int _g4_t_v35[4];
  typedef uint32_t _g4_t_v36[2];
  typedef const void *_g4_t_v37;
  typedef uint32_t _g4_t_v38[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_n)) > _g4_s0 ? (0u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_na)) > _g4_s1 ? (0u + sizeof(_g4_t_na)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v24)) > _g4_s2 ? (4u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v25)) > _g4_s3 ? (8u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v26)) > _g4_s4 ? (12u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v27)) > _g4_s5 ? (16u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v28)) > _g4_s6 ? (20u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v29)) > _g4_s7 ? (20u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_s2)) > _g4_s8 ? (24u + sizeof(_g4_t_s2)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_s2a)) > _g4_s9 ? (24u + sizeof(_g4_t_s2a)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v32)) > _g4_s10 ? (28u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v33)) > _g4_s11 ? (44u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v34)) > _g4_s12 ? (48u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v35)) > _g4_s13 ? (64u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v36)) > _g4_s14 ? (80u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v37)) > _g4_s15 ? (88u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v38)) > _g4_s16 ? (92u + sizeof(_g4_t_v38)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 0u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 24u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 92u);

  v38[3] = (uint32_t)(uintptr_t)(&self);
  v25 = a2;
  v26 = self;
  v24 = a3;
  v27 = a2 + 12;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v34), a3, (int)(uintptr_t)(&v33));
  v3 = *((uint32_t *)v25 + 4);
  if ( v3 == 0 )
  {
    s2 = (char *)v34[0];
LABEL_36:
    v28 = v27;
    goto LABEL_16;
  }
  s2 = (char *)v34[0];
  v4 = *(uint32_t *)(v34[0] - 12);
  v28 = v27;
  do
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
      v6 = v5;
      n = v4;
      if ( v4 <= v5 )
        v6 = v4;
      v7 = memcmp(*(const void **)(v3 + 16), s2, v6);
      v4 = n;
      v8 = v5 - n;
      if ( v7 == 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v28 = (const char *)v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_10;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_10:
  if ( v27 == v28 )
    goto LABEL_36;
  v9 = *(uint32_t *)(*((uint32_t *)v28 + 4) - 12);
  v10 = v9;
  if ( n <= v9 )
    v10 = n;
  v11 = memcmp(s2, *((const void **)v28 + 4), v10);
  if ( v11 == 0 )
    v11 = n - v9;
  if ( v11 < 0 )
    goto LABEL_36;
LABEL_16:
  if ( s2 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)s2 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(s2 - 12);
  if ( v27 == v28 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v33) + 2);
    return v26;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), v24, (int)(uintptr_t)(&v33) + 1);
  v12 = *((uint32_t *)v25 + 4);
  if ( v12 != 0 )
  {
    s2a = (void *)v35[0];
    v13 = *(uint32_t *)(v35[0] - 12);
    v29 = (int)(uintptr_t)(v27);
    do
    {
      while ( 1 )
      {
        v14 = v13;
        v15 = *(uint32_t *)(*(uint32_t *)(v12 + 16) - 12);
        na = v13;
        if ( v15 <= v13 )
          v14 = *(uint32_t *)(*(uint32_t *)(v12 + 16) - 12);
        v16 = memcmp(*(const void **)(v12 + 16), s2a, v14);
        v13 = na;
        v17 = v15 - na;
        if ( v16 == 0 )
          v16 = v17;
        if ( v16 < 0 )
          break;
        v29 = v12;
        v12 = *(uint32_t *)(v12 + 8);
        if ( v12 == 0 )
          goto LABEL_27;
      }
      v12 = *(uint32_t *)(v12 + 12);
    }
    while ( v12 != 0 );
LABEL_27:
    if ( v27 != (const char *)v29 )
    {
      v18 = na;
      v19 = *(uint32_t *)(*(uint32_t *)(v29 + 16) - 12);
      if ( v19 <= na )
        v18 = *(uint32_t *)(*(uint32_t *)(v29 + 16) - 12);
      v20 = memcmp(s2a, *(const void **)(v29 + 16), v18);
      if ( v20 == 0 )
        v20 = na - v19;
      if ( v20 >= 0 )
        goto LABEL_33;
    }
  }
  else
  {
    v29 = (int)(uintptr_t)(v27);
  }
  v36[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_copy(&v37, v35);
  g4_std::string::construct_copy(v38, v36);
  g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
    v32,
    (uint32_t *)v25 + 2,
    v29,
    &v37);
  v29 = v32[0];
  g4_std::string::Destroy(v38);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(v36);
LABEL_33:
  g4_std::string::construct_copy(v26, v29 + 20);
  g4_std::string::Destroy(v35);
  return v26;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_39d424::M_insert  (binary VA: 0x152aed0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_39d424::M_insert(int *a1, int a2, int a3, int a4, const void **a5)
{
  unsigned int v5;
  int v6;
  size_t v8;
  size_t n;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  size_t v14;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v8 = *((uint32_t *)*a5 - 3);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v14 = n;
    if ( n > v8 )
      n = *((uint32_t *)*a5 - 3);
    v10 = memcmp(*a5, *(const void **)(a4 + 16), n);
    v11 = v8 - v14;
    if ( v10 != 0 )
      v11 = v10;
    v5 = v11 >> 31;
  }
  v6 = opNew(0x94u);
  if ( v6 != -16 )
  {
    v12 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    iap::iABAndroidItemV1::Construct(
      (iap::iABAndroidItemV1::Self *)(v12 + 20),
      (const iap::iABAndroidItemV1::Self *)(a5 + 1));
    v6 = v12;
  }
  v13 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_39d424::M_insert_unique  (binary VA: 0x152afe0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_39d424::M_insert_unique(int a1, uint32_t *a2, const void **a3)
{
  int v3;
  size_t v4;
  int v5;
  uint32_t *v6;
  size_t v7;
  size_t n;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  int v18;
  size_t v19;
  size_t v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef void *_g4_t_s1;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_s1)) > _g4_s5 ? (20u + sizeof(_g4_t_s1)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v30)) > _g4_s6 ? (24u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v31)) > _g4_s7 ? (28u + sizeof(_g4_t_v31)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);

  v30 = a2 + 1;
  if ( a2[2] == 0 )
  {
    v11 = (int)(uintptr_t)(a2 + 1);
    goto LABEL_17;
  }
  v3 = a2[2];
  s1 = (void *)*a3;
  v4 = *((uint32_t *)*a3 - 3);
  while ( 1 )
  {
    v6 = *(uint32_t **)(v3 + 16);
    v7 = *(v6 - 3);
    n = v7;
    v25 = v3;
    if ( v4 <= v7 )
      n = v4;
    v24 = n;
    v9 = memcmp(s1, *(const void **)(v3 + 16), n);
    if ( v9 == 0 )
      v9 = v4 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v25 + 8);
    v27 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = *(uint32_t *)(v25 + 12);
  v27 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v25;
  v12 = v10;
  v13 = v24;
  v14 = v25;
  if ( v27 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( v11 == a2[3] )
  {
    g4_std::Rb_tree_string_pair_string_const_39d424::M_insert(
      v31,
      (int)(uintptr_t)(a2),
      0,
      v11,
      a3);
    *(uint32_t *)a1 = v31[0];
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    v18 = sub_19048F0(v11);
    v12 = *(uint32_t **)(v18 + 16);
    v14 = v18;
    v7 = *(v12 - 3);
    s1 = (void *)*a3;
    v4 = *((uint32_t *)*a3 - 3);
    v13 = v7;
    if ( v4 <= v7 )
      v13 = *((uint32_t *)s1 - 3);
LABEL_12:
    v26 = v14;
    v15 = v7 - v4;
    v16 = memcmp(v12, s1, v13);
    if ( v16 != 0 )
      v15 = v16;
    if ( v15 < 0 )
    {
      LOBYTE(v28) = 1;
      if ( (uint32_t *)v11 != v30 )
      {
        v19 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v20 = v19;
        if ( v4 <= v19 )
          v20 = v4;
        v21 = v4 - v19;
        v22 = memcmp(s1, *(const void **)(v11 + 16), v20);
        if ( v22 == 0 )
          v22 = v21;
        v28 = v22 >> 31;
      }
      v23 = opNew(0x94u);
      if ( v23 != -16 )
      {
        g4_std::string::construct_copy(v23 + 16, a3);
        iap::iABAndroidItemV1::Construct(
          (iap::iABAndroidItemV1::Self *)(v23 + 20),
          (const iap::iABAndroidItemV1::Self *)(a3 + 1));
      }
      sub_1904970(v28, v23, v11, v30);
      ++a2[5];
      *(uint32_t *)a1 = v23;
      *(uint8_t *)(a1 + 4) = 1;
      return a1;
    }
    else
    {
      *(uint32_t *)a1 = v26;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_39d424::M_insert_unique  (binary VA: 0x152b1f0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_39d424::M_insert_unique(int *a1, uint32_t *a2, int a3, const void **a4)
{
  size_t v4;
  size_t n;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  int v11;
  int v13;
  size_t v14;
  int v15;
  int v16;
  uint32_t *v17;
  size_t v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  typedef uint32_t *_g4_t_v27;
  typedef void *_g4_t_v28;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef uint32_t *_g4_t_s2;
  typedef int _g4_t_v42[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v30)) > _g4_s3 ? (12u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v31)) > _g4_s4 ? (16u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v32)) > _g4_s5 ? (16u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v33)) > _g4_s6 ? (20u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v34)) > _g4_s7 ? (20u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v35)) > _g4_s8 ? (20u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_s1)) > _g4_s9 ? (24u + sizeof(_g4_t_s1)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v37)) > _g4_s10 ? (24u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v38)) > _g4_s11 ? (28u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v39)) > _g4_s12 ? (28u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v40)) > _g4_s13 ? (32u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_s2)) > _g4_s14 ? (36u + sizeof(_g4_t_s2)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v42)) > _g4_s15 ? (40u + sizeof(_g4_t_v42)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);

  v40 = a2 + 1;
  if ( a2 + 1 == (uint32_t *)a3 )
  {
    if ( a2[5] != 0 )
    {
      v34 = a2[4];
      v17 = *(uint32_t **)(v34 + 16);
      v37 = (void *)*(v17 - 3);
      v18 = (size_t)v37;
      v19 = *((uint32_t *)*a4 - 3);
      if ( v19 <= (unsigned int)(uintptr_t)(v37) )
        v18 = *((uint32_t *)*a4 - 3);
      v30 = *(void **)(v34 + 16);
      v32 = (void *)*a4;
      v39 = v18;
      v20 = memcmp(v17, *a4, v18);
      if ( v20 == 0 )
        v20 = (int)(uintptr_t)(v37) - v19;
      if ( v20 < 0 )
      {
        LOBYTE(v21) = 1;
        if ( v40 != (uint32_t *)v34 )
        {
          v22 = v19 - (uint32_t)(uintptr_t)(v37);
          v23 = memcmp(v32, v30, v39);
          if ( v23 == 0 )
            v23 = v22;
          v21 = v23 >> 31;
        }
        v24 = opNew(0x94u);
        if ( v24 != -16 )
        {
          g4_std::string::construct_copy(v24 + 16, a4);
          iap::iABAndroidItemV1::Construct(
            (iap::iABAndroidItemV1::Self *)(v24 + 20),
            (const iap::iABAndroidItemV1::Self *)(a4 + 1));
        }
LABEL_45:
        sub_1904970(v21, v24, v34, v40);
        ++a2[5];
        *a1 = v24;
        return a1;
      }
    }
LABEL_37:
    g4_std::Rb_tree_string_pair_string_const_39d424::M_insert_unique(
      (int)(uintptr_t)(v42),
      a2,
      a4);
    *a1 = v42[0];
    return a1;
  }
  s2 = *(uint32_t **)(a3 + 16);
  s1 = (void *)*a4;
  v4 = *((uint32_t *)*a4 - 3);
  n = v4;
  v28 = (void *)*(s2 - 3);
  if ( (unsigned int)(uintptr_t)(v28) <= v4 )
    n = *(s2 - 3);
  v33 = n;
  v6 = memcmp(s1, s2, n);
  if ( v6 == 0 )
    v6 = v4 - (uint32_t)(uintptr_t)(v28);
  if ( v6 >= 0 )
  {
    v13 = memcmp(s2, s1, v33);
    if ( v13 == 0 )
      v13 = (int)(uintptr_t)(v28) - v4;
    if ( v13 >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    if ( a2[4] == a3 )
    {
      g4_std::Rb_tree_string_pair_string_const_39d424::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        a2[4],
        a4);
    }
    else
    {
      v35 = sub_19048E0(a3);
      v14 = v4;
      v31 = *(void **)(*(uint32_t *)(v35 + 16) - 12);
      if ( (unsigned int)(uintptr_t)(v31) <= v4 )
        v14 = *(uint32_t *)(*(uint32_t *)(v35 + 16) - 12);
      v15 = memcmp(s1, *(const void **)(v35 + 16), v14);
      v16 = v4 - (uint32_t)(uintptr_t)(v31);
      if ( v15 != 0 )
        v16 = v15;
      if ( v16 >= 0 )
        goto LABEL_37;
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v11 = opNew(0x94u);
        if ( v11 != -16 )
        {
          g4_std::string::construct_copy(v11 + 16, a4);
          iap::iABAndroidItemV1::Construct(
            (iap::iABAndroidItemV1::Self *)(v11 + 20),
            (const iap::iABAndroidItemV1::Self *)(a4 + 1));
        }
        sub_1904970(1, v11, v35, v40);
        goto LABEL_17;
      }
      g4_std::Rb_tree_string_pair_string_const_39d424::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        a3,
        a4);
    }
  }
  else
  {
    v7 = a2[3];
    if ( v7 != a3 )
    {
      v8 = sub_1904940(a3);
      v9 = v4;
      v27 = *(uint32_t **)(v8 + 16);
      v34 = v8;
      v29 = (void *)*(v27 - 3);
      if ( (unsigned int)(uintptr_t)(v29) <= v4 )
        v9 = *(v27 - 3);
      v38 = v9;
      v10 = memcmp(v27, s1, v9);
      if ( v10 == 0 )
        v10 = (int)(uintptr_t)(v29) - v4;
      if ( v10 < 0 )
      {
        if ( *(uint32_t *)(v34 + 12) != 0 )
        {
          v11 = opNew(0x94u);
          if ( v11 != -16 )
          {
            g4_std::string::construct_copy(v11 + 16, a4);
            iap::iABAndroidItemV1::Construct(
              (iap::iABAndroidItemV1::Self *)(v11 + 20),
              (const iap::iABAndroidItemV1::Self *)(a4 + 1));
          }
          sub_1904970(1, v11, a3, v40);
LABEL_17:
          ++a2[5];
          *a1 = v11;
          return a1;
        }
        LOBYTE(v21) = 1;
        if ( v40 != (uint32_t *)v34 )
        {
          v25 = memcmp(s1, v27, v38);
          v26 = v4 - (uint32_t)(uintptr_t)(v29);
          if ( v25 == 0 )
            v25 = v26;
          v21 = v25 >> 31;
        }
        v24 = opNew(0x94u);
        if ( v24 != -16 )
        {
          g4_std::string::construct_copy(v24 + 16, a4);
          iap::iABAndroidItemV1::Construct(
            (iap::iABAndroidItemV1::Self *)(v24 + 20),
            (const iap::iABAndroidItemV1::Self *)(a4 + 1));
        }
        goto LABEL_45;
      }
      goto LABEL_37;
    }
    g4_std::Rb_tree_string_pair_string_const_39d424::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v7,
      a2[3],
      a4);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_string_iap_iABAndroidIte_35eed1::opIndex  (binary VA: 0x152b660)
// Original: std::map<std::string,iap::iABAndroidItemV1>::operator[]
// ----------------------------------------------------------------------------
int g4_std::map_string_iap_iABAndroidIte_35eed1::opIndex(uint32_t *a1, void **a2)
{
  int v2;
  size_t v3;
  size_t v4;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  char *v11;
  char *v12;
  char *v13;
  char *v14;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef size_t _g4_t_n;
  typedef void **_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef void *_g4_t_s2;
  typedef int _g4_t_v24;
  typedef uint32_t _g4_t_v25[32];
  typedef const void *_g4_t_v26;
  typedef uint32_t (**_g4_t_v27)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *);
  typedef char _g4_t_v28[8];
  typedef char _g4_t_v29[8];
  typedef char _g4_t_v30[8];
  typedef char _g4_t_v31[8];
  typedef char _g4_t_v32[8];
  typedef char _g4_t_v33[8];
  typedef char _g4_t_v34[8];
  typedef char _g4_t_v35[32];
  typedef void *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef int _g4_t_v38[15];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_n)) > _g4_s2 ? (32u + sizeof(_g4_t_n)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v19)) > _g4_s3 ? (36u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v20)) > _g4_s4 ? (40u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v21)) > _g4_s5 ? (44u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v22)) > _g4_s6 ? (48u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_s2)) > _g4_s7 ? (52u + sizeof(_g4_t_s2)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v24)) > _g4_s8 ? (56u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v25)) > _g4_s9 ? (60u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (188u + sizeof(_g4_t_v26)) > _g4_s10 ? (188u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (192u + sizeof(_g4_t_v27)) > _g4_s11 ? (192u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (196u + sizeof(_g4_t_v28)) > _g4_s12 ? (196u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (204u + sizeof(_g4_t_v29)) > _g4_s13 ? (204u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (212u + sizeof(_g4_t_v30)) > _g4_s14 ? (212u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (220u + sizeof(_g4_t_v31)) > _g4_s15 ? (220u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (228u + sizeof(_g4_t_v32)) > _g4_s16 ? (228u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (236u + sizeof(_g4_t_v33)) > _g4_s17 ? (236u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (244u + sizeof(_g4_t_v34)) > _g4_s18 ? (244u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (252u + sizeof(_g4_t_v35)) > _g4_s19 ? (252u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (284u + sizeof(_g4_t_v36)) > _g4_s20 ? (284u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (288u + sizeof(_g4_t_v37)) > _g4_s21 ? (288u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (296u + sizeof(_g4_t_v38)) > _g4_s22 ? (296u + sizeof(_g4_t_v38)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 188u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 192u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 196u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 204u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 212u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 220u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 228u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 236u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 244u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 252u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 284u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 288u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 296u);

  v38[11] = (int)(uintptr_t)(&a1);
  v21 = a1;
  v20 = a1 + 1;
  v19 = a2;
  v2 = a1[2];
  if ( v2 == 0 )
  {
    v22 = (int)(uintptr_t)(a1 + 1);
LABEL_16:
    memset(v25, 0, sizeof(v25));
    v25[1] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25[3] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25[5] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25[7] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25[0] = (uint32_t)(uintptr_t)(&off_2096648);
    v25[9] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25[11] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25[13] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25[15] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25[29] = (uint32_t)(uintptr_t)(&v25[27]);
    v25[30] = (uint32_t)(uintptr_t)(&v25[27]);
    g4_std::string::construct_copy(&v26, v19);
    iap::iABAndroidItemV1::Construct((iap::iABAndroidItemV1::Self *)&v27, (const iap::iABAndroidItemV1::Self *)v25);
    g4_std::Rb_tree_string_pair_string_const_39d424::M_insert_unique(
      &v24,
      v21,
      v22,
      &v26);
    v27 = (uint32_t (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
    v22 = v24;
    g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
      (int)(uintptr_t)(v38),
      (uint32_t *)v38[2]);
    v11 = v37;
    v12 = (char *)v36;
    if ( v37 != v36 )
    {
      do
      {
        g4_std::string::Destroy(v12 + 4);
        v16 = v12;
        v12 += 8;
        g4_std::string::Destroy(v16);
      }
      while ( v11 != v12 );
      v12 = (char *)v36;
    }
    if ( v12 != nullptr )
      opDelete(v12);
    g4_std::string::Destroy(v35);
    g4_std::string::Destroy(v34);
    g4_std::string::Destroy(v33);
    g4_std::string::Destroy(v32);
    g4_std::string::Destroy(v31);
    g4_std::string::Destroy(v30);
    g4_std::string::Destroy(v29);
    g4_std::string::Destroy(v28);
    g4_std::string::Destroy(&v26);
    v25[0] = (uint32_t)(uintptr_t)(&off_2096648);
    g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
      (int)(uintptr_t)(&v25[26]),
      (uint32_t *)v25[28]);
    v13 = (char *)v25[24];
    v14 = (char *)v25[23];
    if ( v25[24] != v25[23] )
    {
      do
      {
        g4_std::string::Destroy(v14 + 4);
        v17 = v14;
        v14 += 8;
        g4_std::string::Destroy(v17);
      }
      while ( v13 != v14 );
      v14 = (char *)v25[23];
    }
    if ( v14 != nullptr )
      opDelete(v14);
    g4_std::string::Destroy(&v25[15]);
    g4_std::string::Destroy(&v25[13]);
    g4_std::string::Destroy(&v25[11]);
    g4_std::string::Destroy(&v25[9]);
    g4_std::string::Destroy(&v25[7]);
    g4_std::string::Destroy(&v25[5]);
    g4_std::string::Destroy(&v25[3]);
    g4_std::string::Destroy(&v25[1]);
    return v22 + 20;
  }
  s2 = *a2;
  v3 = *((uint32_t *)*a2 - 3);
  v22 = (int)(uintptr_t)(a1 + 1);
  do
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
      v5 = v4;
      n = v3;
      if ( v3 <= v4 )
        v5 = v3;
      v6 = memcmp(*(const void **)(v2 + 16), s2, v5);
      v3 = n;
      v7 = v4 - n;
      if ( v6 == 0 )
        v6 = v7;
      if ( v6 < 0 )
        break;
      v22 = v2;
      v2 = *(uint32_t *)(v2 + 8);
      if ( v2 == 0 )
        goto LABEL_10;
    }
    v2 = *(uint32_t *)(v2 + 12);
  }
  while ( v2 != 0 );
LABEL_10:
  if ( v20 == (uint32_t *)v22 )
    goto LABEL_16;
  v8 = *(uint32_t *)(*(uint32_t *)(v22 + 16) - 12);
  v9 = v8;
  if ( n <= v8 )
    v9 = n;
  v10 = memcmp(s2, *(const void **)(v22 + 16), v9);
  if ( v10 == 0 )
    v10 = n - v8;
  if ( v10 < 0 )
    goto LABEL_16;
  return v22 + 20;
}

// ----------------------------------------------------------------------------
// Function: sub_152BA00  (binary VA: 0x152ba00)
// Original: sub_152BA00
// ----------------------------------------------------------------------------
int sub_152BA00()
{
  sub_1900D70(&unk_211A3D4);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3D4, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_152C7B0  (binary VA: 0x152c7b0)
// Original: sub_152C7B0
// ----------------------------------------------------------------------------
void sub_152C7B0(int a1, glwebtools::JsonWriter::Self *a2, int a3)
{
  glwebtools::Self *v4;
  void *v5;
  void *v6;
  glwebtools::Self *v7;
  void *v8;
  void *v9;
  glwebtools::Self *v10;
  void *v11;
  void *v12;
  glwebtools::Self *v13;
  void *v14;
  void *v15;
  int v16;
  glwebtools::Self *v17;
  void *v18;
  void *v19;
  int v20;
  glwebtools::Self *v21;
  void *v22;
  void *v23;
  int *v24;
  glwebtools::Self *v25;
  void *v26;
  void *v27;
  int v28;
  glwebtools::Self *v29;
  void *v30;
  void *v31;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v33;
  glwebtools::Json::Value::Self *v34;
  glwebtools::Json::Value::Self *v35;
  glwebtools::Json::Value::Self *v36;
  const glwebtools::Json::Value::Self *v37;
  glwebtools::Json::Value::Self *v38;
  glwebtools::Json::Value::Self *v39;
  glwebtools::Json::Value::Self *v40;
  const glwebtools::Json::Value::Self *v41;
  glwebtools::Json::Value::Self *v42;
  glwebtools::Json::Value::Self *v43;
  glwebtools::Json::Value::Self *v44;
  const glwebtools::Json::Value::Self *v45;
  glwebtools::Json::Value::Self *v46;
  glwebtools::Json::Value::Self *v47;
  glwebtools::Json::Value::Self *v48;
  glwebtools::Json::Value::Self *v49;
  glwebtools::Json::Value::Self *v50;
  glwebtools::Json::Value::Self *v51;
  glwebtools::Json::Value::Self *v52;
  glwebtools::Json::Value::Self *v53;
  glwebtools::Json::Value::Self *v54;
  glwebtools::Json::Value::Self *v55;
  glwebtools::Json::Value::Self *v56;
  glwebtools::Json::Value::Self *v57;
  glwebtools::Json::Value::Self *v58;
  glwebtools::Json::Value::Self *v59;
  typedef glwebtools::Json::Value::Self *_g4_t_v60;
  typedef glwebtools::Json::Value::Self *_g4_t_v61;
  typedef glwebtools::Json::Value::Self *_g4_t_v62;
  typedef glwebtools::Json::Value::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88[4];
  typedef int _g4_t_v89[4];
  typedef int _g4_t_v90[4];
  typedef int _g4_t_v91[4];
  typedef int _g4_t_v92[4];
  typedef int _g4_t_v93[4];
  typedef int _g4_t_v94[4];
  typedef int _g4_t_v95[2];
  typedef uint8_t _g4_t_v96[16];
  typedef uint8_t _g4_t_v97[16];
  typedef uint8_t _g4_t_v98[16];
  typedef uint8_t _g4_t_v99[16];
  typedef uint8_t _g4_t_v100[16];
  typedef uint8_t _g4_t_v101[16];
  typedef uint8_t _g4_t_v102[16];
  typedef uint8_t _g4_t_v103[16];
  typedef uint8_t _g4_t_v104[20];
  typedef uint32_t _g4_t_v105[11];
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (0u + sizeof(_g4_t_v60)) > _g4_s0 ? (0u + sizeof(_g4_t_v60)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v61)) > _g4_s1 ? (0u + sizeof(_g4_t_v61)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v62)) > _g4_s2 ? (0u + sizeof(_g4_t_v62)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v63)) > _g4_s3 ? (0u + sizeof(_g4_t_v63)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v64)) > _g4_s4 ? (4u + sizeof(_g4_t_v64)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v65)) > _g4_s5 ? (8u + sizeof(_g4_t_v65)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v66)) > _g4_s6 ? (12u + sizeof(_g4_t_v66)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v67)) > _g4_s7 ? (12u + sizeof(_g4_t_v67)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v68)) > _g4_s8 ? (12u + sizeof(_g4_t_v68)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v70)) > _g4_s9 ? (28u + sizeof(_g4_t_v70)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v71)) > _g4_s10 ? (32u + sizeof(_g4_t_v71)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v72)) > _g4_s11 ? (52u + sizeof(_g4_t_v72)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v73)) > _g4_s12 ? (56u + sizeof(_g4_t_v73)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v74)) > _g4_s13 ? (68u + sizeof(_g4_t_v74)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v75)) > _g4_s14 ? (72u + sizeof(_g4_t_v75)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v76)) > _g4_s15 ? (84u + sizeof(_g4_t_v76)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v77)) > _g4_s16 ? (88u + sizeof(_g4_t_v77)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v78)) > _g4_s17 ? (100u + sizeof(_g4_t_v78)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v79)) > _g4_s18 ? (104u + sizeof(_g4_t_v79)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v80)) > _g4_s19 ? (116u + sizeof(_g4_t_v80)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v81)) > _g4_s20 ? (120u + sizeof(_g4_t_v81)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v82)) > _g4_s21 ? (132u + sizeof(_g4_t_v82)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v83)) > _g4_s22 ? (136u + sizeof(_g4_t_v83)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v84)) > _g4_s23 ? (148u + sizeof(_g4_t_v84)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v85)) > _g4_s24 ? (152u + sizeof(_g4_t_v85)) : _g4_s24,
    _g4_s26 = (164u + sizeof(_g4_t_v86)) > _g4_s25 ? (164u + sizeof(_g4_t_v86)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v87)) > _g4_s26 ? (168u + sizeof(_g4_t_v87)) : _g4_s26,
    _g4_s28 = (180u + sizeof(_g4_t_v88)) > _g4_s27 ? (180u + sizeof(_g4_t_v88)) : _g4_s27,
    _g4_s29 = (196u + sizeof(_g4_t_v89)) > _g4_s28 ? (196u + sizeof(_g4_t_v89)) : _g4_s28,
    _g4_s30 = (212u + sizeof(_g4_t_v90)) > _g4_s29 ? (212u + sizeof(_g4_t_v90)) : _g4_s29,
    _g4_s31 = (228u + sizeof(_g4_t_v91)) > _g4_s30 ? (228u + sizeof(_g4_t_v91)) : _g4_s30,
    _g4_s32 = (244u + sizeof(_g4_t_v92)) > _g4_s31 ? (244u + sizeof(_g4_t_v92)) : _g4_s31,
    _g4_s33 = (260u + sizeof(_g4_t_v93)) > _g4_s32 ? (260u + sizeof(_g4_t_v93)) : _g4_s32,
    _g4_s34 = (276u + sizeof(_g4_t_v94)) > _g4_s33 ? (276u + sizeof(_g4_t_v94)) : _g4_s33,
    _g4_s35 = (292u + sizeof(_g4_t_v95)) > _g4_s34 ? (292u + sizeof(_g4_t_v95)) : _g4_s34,
    _g4_s36 = (300u + sizeof(_g4_t_v96)) > _g4_s35 ? (300u + sizeof(_g4_t_v96)) : _g4_s35,
    _g4_s37 = (316u + sizeof(_g4_t_v97)) > _g4_s36 ? (316u + sizeof(_g4_t_v97)) : _g4_s36,
    _g4_s38 = (332u + sizeof(_g4_t_v98)) > _g4_s37 ? (332u + sizeof(_g4_t_v98)) : _g4_s37,
    _g4_s39 = (348u + sizeof(_g4_t_v99)) > _g4_s38 ? (348u + sizeof(_g4_t_v99)) : _g4_s38,
    _g4_s40 = (364u + sizeof(_g4_t_v100)) > _g4_s39 ? (364u + sizeof(_g4_t_v100)) : _g4_s39,
    _g4_s41 = (380u + sizeof(_g4_t_v101)) > _g4_s40 ? (380u + sizeof(_g4_t_v101)) : _g4_s40,
    _g4_s42 = (396u + sizeof(_g4_t_v102)) > _g4_s41 ? (396u + sizeof(_g4_t_v102)) : _g4_s41,
    _g4_s43 = (412u + sizeof(_g4_t_v103)) > _g4_s42 ? (412u + sizeof(_g4_t_v103)) : _g4_s42,
    _g4_s44 = (428u + sizeof(_g4_t_v104)) > _g4_s43 ? (428u + sizeof(_g4_t_v104)) : _g4_s43,
    _g4_s45 = (448u + sizeof(_g4_t_v105)) > _g4_s44 ? (448u + sizeof(_g4_t_v105)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 0u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 0u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 0u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 8u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 12u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 12u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 68u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 72u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 84u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 88u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 100u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 104u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 116u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 120u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 132u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 136u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 148u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 152u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 164u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 168u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 180u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 196u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 212u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 228u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 244u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 260u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 276u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 292u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 300u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 316u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 332u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 348u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 364u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 380u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 396u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 412u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 428u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 448u);

  v105[7] = (uint32_t)(uintptr_t)(&a3);
  v64 = a1 + 64;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v86), "item_id", (int)(uintptr_t)(&v71) + 3);
  v87 = v64;
  g4_std::string::construct_copy(v88, &v86);
  v65 = v87;
  v88[1] = v87;
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v96), (char *)&loc_6 + 1);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v96);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v96);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v105);
  v4 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v105, v65);
  if ( glwebtools::IsOperationSuccess(v4) )
  {
    v63 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v105);
    v58 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v59 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v58, (char **)v88);
    glwebtools::Json::Value::opAssign(v59, v63);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v105);
  v5 = (void *)(v88[0] - 12);
  if ( (uint32_t *)(v88[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v88[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v86 - 12);
  if ( (uint32_t *)(v86 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v86 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v84), "quantity", (int)(uintptr_t)(&v71) + 2);
  v85 = a1 + 68;
  g4_std::string::construct_copy(v89, &v84);
  v66 = (int *)v85;
  v89[1] = v85;
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v97), (char *)&loc_6 + 1);
    v57 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v57, (const glwebtools::Json::Value::Self *)v97);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v97);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v105);
  v7 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v105, *v66);
  if ( glwebtools::IsOperationSuccess(v7) )
  {
    v62 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v105);
    v55 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v56 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v55, (char **)v89);
    glwebtools::Json::Value::opAssign(v56, v62);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v105);
  v8 = (void *)(v89[0] - 12);
  if ( (uint32_t *)(v89[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v89[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v84 - 12);
  if ( (uint32_t *)(v84 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v84 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v82), "transaction_notify", (int)(uintptr_t)(&v71) + 1);
  v83 = a1 + 72;
  g4_std::string::construct_copy(v90, &v82);
  v67 = v83;
  v90[1] = v83;
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v98), (char *)&loc_6 + 1);
    v54 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v54, (const glwebtools::Json::Value::Self *)v98);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v98);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v105);
  v10 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v105, v67);
  if ( glwebtools::IsOperationSuccess(v10) )
  {
    v61 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v105);
    v52 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v53 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v52, (char **)v90);
    glwebtools::Json::Value::opAssign(v53, v61);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v105);
  v11 = (void *)(v90[0] - 12);
  if ( (uint32_t *)(v90[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v90[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = (void *)(v82 - 12);
  if ( (uint32_t *)(v82 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v82 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "shop_name", (int)(uintptr_t)(&v71));
  v81 = a1 + 88;
  g4_std::string::construct_copy(v91, &v80);
  v68 = v81;
  v91[1] = v81;
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v99), (char *)&loc_6 + 1);
    v51 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v51, (const glwebtools::Json::Value::Self *)v99);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v99);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v105);
  v13 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v105, v68);
  if ( glwebtools::IsOperationSuccess(v13) )
  {
    v60 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v105);
    v49 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v50 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v49, (char **)v91);
    glwebtools::Json::Value::opAssign(v50, v60);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v105);
  v14 = (void *)(v91[0] - 12);
  if ( (uint32_t *)(v91[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v91[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = (void *)(v80 - 12);
  if ( (uint32_t *)(v80 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v80 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v104, a2, "item");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), "id", (int)(uintptr_t)(&v70) + 3);
  v79 = a1 + 76;
  g4_std::string::construct_copy(v92, &v78);
  v16 = v79;
  v92[1] = v79;
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v104) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v100), (char *)&loc_6 + 1);
    v48 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v104);
    glwebtools::Json::Value::opAssign(v48, (const glwebtools::Json::Value::Self *)v100);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v100);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v105);
  v17 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v105, v16);
  if ( glwebtools::IsOperationSuccess(v17) )
  {
    v45 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v105);
    v46 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v104);
    v47 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v46, (char **)v92);
    glwebtools::Json::Value::opAssign(v47, v45);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v105);
  v18 = (void *)(v92[0] - 12);
  if ( (uint32_t *)(v92[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v92[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v78 - 12);
  if ( (uint32_t *)(v78 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), "type", (int)(uintptr_t)(&v70) + 2);
  v77 = a1 + 80;
  g4_std::string::construct_copy(v93, &v76);
  v20 = v77;
  v93[1] = v77;
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v104) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v101), (char *)&loc_6 + 1);
    v44 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v104);
    glwebtools::Json::Value::opAssign(v44, (const glwebtools::Json::Value::Self *)v101);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v101);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v105);
  v21 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v105, v20);
  if ( glwebtools::IsOperationSuccess(v21) )
  {
    v41 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v105);
    v42 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v104);
    v43 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v42, (char **)v93);
    glwebtools::Json::Value::opAssign(v43, v41);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v105);
  v22 = (void *)(v93[0] - 12);
  if ( (uint32_t *)(v93[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v93[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  v23 = (void *)(v76 - 12);
  if ( (uint32_t *)(v76 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v76 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v23);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v74), "amount", (int)(uintptr_t)(&v70) + 1);
  v75 = a1 + 68;
  g4_std::string::construct_copy(v94, &v74);
  v24 = (int *)v75;
  v94[1] = v75;
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v104) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v102), (char *)&loc_6 + 1);
    v40 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v104);
    glwebtools::Json::Value::opAssign(v40, (const glwebtools::Json::Value::Self *)v102);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v102);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v105);
  v25 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v105, *v24);
  if ( glwebtools::IsOperationSuccess(v25) )
  {
    v37 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v105);
    v38 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v104);
    v39 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v38, (char **)v94);
    glwebtools::Json::Value::opAssign(v39, v37);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v105);
  v26 = (void *)(v94[0] - 12);
  if ( (uint32_t *)(v94[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v94[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v26);
  }
  v27 = (void *)(v74 - 12);
  if ( (uint32_t *)(v74 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v74 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v27);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v72), "virtual_cash_type", (int)(uintptr_t)(&v70));
  v73 = a1 + 84;
  g4_std::string::construct_copy(v95, &v72);
  v28 = v73;
  v95[1] = v73;
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v104) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v103), (char *)&loc_6 + 1);
    v36 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v104);
    glwebtools::Json::Value::opAssign(v36, (const glwebtools::Json::Value::Self *)v103);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v103);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v105);
  v29 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v105, v28);
  if ( glwebtools::IsOperationSuccess(v29) )
  {
    v33 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v105);
    v34 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v104);
    v35 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v34, (char **)v95);
    glwebtools::Json::Value::opAssign(v35, v33);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v105);
  v30 = (void *)(v95[0] - 12);
  if ( (uint32_t *)(v95[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v95[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v30);
  }
  v31 = (void *)(v72 - 12);
  if ( (uint32_t *)(v72 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v72 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v31);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v104);
}

// ----------------------------------------------------------------------------
// Function: sub_152D580  (binary VA: 0x152d580)
// Original: sub_152D580
// ----------------------------------------------------------------------------
int sub_152D580()
{
  sub_1900D70(&unk_211A3D8);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3D8, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_RestoreTransactionCB  (binary VA: 0x152ec40)
// Original: InAppBilling_RestoreTransactionCB
// ----------------------------------------------------------------------------
int InAppBilling_RestoreTransactionCB(char *a1)
{
  int *Instance;
  void *v2;
  void *v3;
  int result;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  typedef int _g4_t_v9[3];
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v6)) > _g4_s0 ? (14u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v9)) > _g4_s3 ? (36u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v10)) > _g4_s4 ? (48u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 14u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), (char *)&unk_1B15112, (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), (char *)&unk_1B15112, (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), a1, (int)(uintptr_t)(&v6));
  Instance = (int *)iap::TransactionManager::GetInstance();
  iap::TransactionManager::AddTransaction(Instance, (int)(uintptr_t)(v10), 2, (int)(uintptr_t)(v8), (int)(uintptr_t)(v9));
  v2 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v8[0] - 12);
  if ( (uint32_t *)(v8[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  result = v9[0];
  v5 = (void *)(v9[0] - 12);
  if ( (uint32_t *)(v9[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v5)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_BuyItemCB  (binary VA: 0x152ed60)
// Original: InAppBilling_BuyItemCB
// ----------------------------------------------------------------------------
int InAppBilling_BuyItemCB(char *a1, int a2, char *a3, char *a4)
{
  int result;
  int *Instance;
  void *v6;
  void *v7;
  void *v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[4];
  typedef int _g4_t_v12[3];
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v9)) > _g4_s0 ? (14u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v12)) > _g4_s3 ? (36u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v13)) > _g4_s4 ? (48u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 14u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);

  result = a2;
  if ( a2 != 3 && a1 != nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), a4, (int)(uintptr_t)(&v10));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), a3, (int)(uintptr_t)(&v9) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), a1, (int)(uintptr_t)(&v9));
    Instance = (int *)iap::TransactionManager::GetInstance();
    iap::TransactionManager::AddTransaction(Instance, (int)(uintptr_t)(&v13), a2 == 0 ? 1 : -3, (int)(uintptr_t)(v11), (int)(uintptr_t)(v12));
    v6 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v11[0] - 12);
    if ( (uint32_t *)(v11[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    result = v12[0];
    v8 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v8)), (int)0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_152F580  (binary VA: 0x152f580)
// Original: sub_152F580
// ----------------------------------------------------------------------------
int sub_152F580(int a1, uint32_t *a2, const void **a3)
{
  size_t v3;
  uint32_t *v4;
  size_t v5;
  size_t i;
  size_t v7;
  uint32_t *v8;
  size_t v9;
  size_t n;
  int v11;
  uint32_t *v12;
  size_t v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  size_t v19;
  unsigned int v20;
  size_t v21;
  size_t v22;
  size_t v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  size_t v28;
  size_t v29;
  unsigned int v30;
  int v31;
  size_t v32;
  char v33;
  void *s1;
  size_t v37;
  size_t v38;
  uint32_t *v39;

  v3 = a2[2];
  v4 = a2 + 1;
  v39 = v4;
  if ( v3 == 0 )
  {
    v13 = (size_t)v4;
    goto LABEL_17;
  }
  s1 = (void *)*a3;
  v5 = *((uint32_t *)*a3 - 3);
  for ( i = v3; ; i = v7 )
  {
    v8 = *(uint32_t **)(i + 16);
    v9 = *(v8 - 3);
    n = v9;
    v32 = i;
    if ( v5 <= v9 )
      n = v5;
    v37 = n;
    v11 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v11 == 0 )
      v11 = v5 - v9;
    if ( v11 >= 0 )
      break;
    v7 = *(uint32_t *)(v32 + 8);
    v33 = 1;
    if ( v7 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v7 = *(uint32_t *)(v32 + 12);
  v33 = 0;
  if ( v7 != 0 )
    goto LABEL_4;
LABEL_11:
  v12 = v8;
  v13 = v32;
  v14 = v37;
  v15 = v12;
  v38 = v32;
  if ( v33 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( a2[3] == v13 )
  {
    LOBYTE(v20) = 1;
    if ( v39 != (uint32_t *)v13 )
    {
      v21 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v22 = *((uint32_t *)*a3 - 3);
      v23 = v22;
      if ( v21 <= v22 )
        v23 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v24 = v22 - v21;
      v25 = memcmp(*a3, *(const void **)(v13 + 16), v23);
      if ( v25 == 0 )
        v25 = v24;
      v20 = v25 >> 31;
    }
    v26 = opNew(0x9Cu);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      iap::BillingMethodAndroid::Construct(
        (iap::BillingMethodAndroid::Self *)(v26 + 20),
        (const iap::BillingMethodAndroid::Self *)(a3 + 1));
    }
    sub_1904970(v20, v26, v13, v39);
  }
  else
  {
    v19 = sub_19048F0(v13);
    v15 = *(uint32_t **)(v19 + 16);
    v38 = v13;
    v13 = v19;
    v9 = *(v15 - 3);
    s1 = (void *)*a3;
    v5 = *((uint32_t *)*a3 - 3);
    v14 = v5;
    if ( v9 <= v5 )
      v14 = *(v15 - 3);
LABEL_12:
    v16 = memcmp(v15, s1, v14);
    v17 = v9 - v5;
    if ( v16 != 0 )
      v17 = v16;
    if ( v17 >= 0 )
    {
      *(uint32_t *)a1 = v13;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    LOBYTE(v27) = 1;
    if ( v39 != (uint32_t *)v38 )
    {
      v28 = *(uint32_t *)(*(uint32_t *)(v38 + 16) - 12);
      v29 = v28;
      if ( v5 <= v28 )
        v29 = v5;
      v30 = v5 - v28;
      v31 = memcmp(s1, *(const void **)(v38 + 16), v29);
      if ( v31 != 0 )
        v30 = v31;
      v27 = v30 >> 31;
    }
    v26 = opNew(0x9Cu);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      iap::BillingMethodAndroid::Construct(
        (iap::BillingMethodAndroid::Self *)(v26 + 20),
        (const iap::BillingMethodAndroid::Self *)(a3 + 1));
    }
    sub_1904970(v27, v26, v38, v39);
  }
  ++a2[5];
  *(uint32_t *)a1 = v26;
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1530FC0  (binary VA: 0x1530fc0)
// Original: sub_1530FC0
// ----------------------------------------------------------------------------
int sub_1530FC0()
{
  sub_1900D70(&unk_211A3E4);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3E4, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_copy  (binary VA: 0x1532bc0)
// Original: std::_Rb_tree<iap::Rule,iap::Rule,std::_Identity<iap::Rule>,std::less<iap::Rule>,glwebtools::SAllocator<iap::Rule,(glwebtools::MemHint)4>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_copy(int a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int i;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int m;
  uint32_t *v31;
  uint32_t *v32;
  int v33;
  uint32_t *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  uint32_t *v40;
  uint32_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v51;
  uint32_t *v52;
  uint32_t *j;
  uint32_t *k;
  uint32_t *v55;
  uint32_t *n;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;
  uint32_t *v63;
  uint32_t *v64;
  uint32_t *v65;

  v65 = (uint32_t *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v65 != (uint32_t *)-16 )
  {
    v3 = 0;
    v4 = 0;
    g4_std::string::construct_copy(v65 + 4, a2 + 4);
    v5 = (a2[6] - a2[5]) >> 3;
    v65[5] = 0;
    v65[6] = 0;
    v65[7] = 0;
    if ( v5 != 0 )
    {
      v3 = 8 * v5;
      v4 = sub_4EBE70(8 * v5, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    }
    v65[5] = v4;
    v65[6] = v4;
    v65[7] = v4 + v3;
    v6 = a2[6];
    for ( i = a2[5]; v6 != i; v4 += 8 )
    {
      if ( v4 != 0 )
      {
        g4_std::string::construct_copy(v4, i);
        g4_std::string::construct_copy(v4 + 4, i + 4);
      }
      i += 8;
    }
    v65[6] = v4;
  }
  *v65 = *a2;
  v65[3] = 0;
  v65[2] = 0;
  v65[1] = a3;
  v8 = a2;
  v9 = (uint32_t *)a2[3];
  if ( v9 != nullptr )
  {
    v58 = (uint32_t *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v58 != (uint32_t *)-16 )
    {
      v10 = 0;
      g4_std::string::construct_copy(v58 + 4, v9 + 4);
      v11 = 0;
      v12 = (v9[6] - v9[5]) >> 3;
      v58[5] = 0;
      v58[6] = 0;
      v58[7] = 0;
      if ( v12 != 0 )
      {
        v10 = 8 * v12;
        v11 = sub_4EBE70(8 * v12, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      }
      v58[5] = v11;
      v58[6] = v11;
      v58[7] = v11 + v10;
      v13 = v9[5];
      if ( v9[6] != v13 )
      {
        v52 = v9;
        v14 = v9[6];
        do
        {
          if ( v11 != 0 )
          {
            g4_std::string::construct_copy(v11, v13);
            g4_std::string::construct_copy(v11 + 4, v13 + 4);
          }
          v13 += 8;
          v11 += 8;
        }
        while ( v14 != v13 );
        v9 = v52;
      }
      v58[6] = v11;
    }
    *v58 = *v9;
    v58[2] = 0;
    v58[3] = 0;
    v58[1] = (uint32_t)(uintptr_t)(v65);
    v15 = v9[3];
    if ( v15 != 0 )
      v58[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_copy(
                 a1,
                 v15,
                 v58));
    v16 = (uint32_t *)v9[2];
    if ( v16 != nullptr )
    {
      for ( j = v58; ; j = v17 )
      {
        v17 = (uint32_t *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v17 != (uint32_t *)-16 )
        {
          v18 = 0;
          g4_std::string::construct_copy(v17 + 4, v16 + 4);
          v19 = v16[6] - v16[5];
          v20 = 0;
          v17[5] = 0;
          v21 = v19 >> 3;
          v17[6] = 0;
          v17[7] = 0;
          if ( v21 != 0 )
          {
            v51 = 8 * v21;
            v18 = sub_4EBE70(8 * v21, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            v20 = v51;
          }
          v17[5] = v18;
          v17[6] = v18;
          v17[7] = v18 + v20;
          v22 = v16[5];
          if ( v16[6] != v22 )
          {
            v60 = v16;
            v62 = v17;
            v23 = v16[6];
            v24 = v22;
            do
            {
              if ( v18 != 0 )
              {
                g4_std::string::construct_copy(v18, v24);
                g4_std::string::construct_copy(v18 + 4, v24 + 4);
              }
              v24 += 8;
              v18 += 8;
            }
            while ( v23 != v24 );
            v16 = v60;
            v17 = v62;
          }
          v17[6] = v18;
        }
        *v17 = *v16;
        v17[2] = 0;
        v17[3] = 0;
        j[2] = (uint32_t)(uintptr_t)(v17);
        v17[1] = (uint32_t)(uintptr_t)(j);
        v25 = v16[3];
        if ( v25 != 0 )
          v17[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_copy(
                     a1,
                     v25,
                     v17));
        v16 = (uint32_t *)v16[2];
        if ( v16 == nullptr )
          break;
      }
    }
    v65[3] = (uint32_t)(uintptr_t)(v58);
    v8 = a2;
  }
  v64 = (uint32_t *)v8[2];
  if ( v64 != nullptr )
  {
    for ( k = v65; ; k = v57 )
    {
      v57 = (uint32_t *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v57 != (uint32_t *)-16 )
      {
        v26 = 0;
        v27 = 0;
        g4_std::string::construct_copy(v57 + 4, v64 + 4);
        v28 = (v64[6] - v64[5]) >> 3;
        v57[5] = 0;
        v57[6] = 0;
        v57[7] = 0;
        if ( v28 != 0 )
        {
          v26 = 8 * v28;
          v27 = sub_4EBE70(8 * v28, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        }
        v57[5] = v27;
        v57[6] = v27;
        v57[7] = v27 + v26;
        v29 = v64[6];
        for ( m = v64[5]; v29 != m; v27 += 8 )
        {
          if ( v27 != 0 )
          {
            g4_std::string::construct_copy(v27, m);
            g4_std::string::construct_copy(v27 + 4, m + 4);
          }
          m += 8;
        }
        v57[6] = v27;
      }
      *v57 = *v64;
      v57[3] = 0;
      v57[2] = 0;
      k[2] = (uint32_t)(uintptr_t)(v57);
      v57[1] = (uint32_t)(uintptr_t)(k);
      v31 = v64;
      v32 = (uint32_t *)v64[3];
      if ( v32 != nullptr )
      {
        v59 = (uint32_t *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v59 != (uint32_t *)-16 )
        {
          v33 = 0;
          g4_std::string::construct_copy(v59 + 4, v32 + 4);
          v34 = v59;
          v35 = 0;
          v36 = (v32[6] - v32[5]) >> 3;
          v59[5] = 0;
          v59[6] = 0;
          v59[7] = 0;
          if ( v36 != 0 )
          {
            v33 = 8 * v36;
            v35 = sub_4EBE70(8 * v36, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            v34 = v59;
          }
          v59[5] = v35;
          v59[6] = v35;
          v34[7] = v35 + v33;
          v37 = v32[5];
          if ( v32[6] != v37 )
          {
            v55 = v32;
            v38 = v32[6];
            do
            {
              if ( v35 != 0 )
              {
                g4_std::string::construct_copy(v35, v37);
                g4_std::string::construct_copy(v35 + 4, v37 + 4);
              }
              v37 += 8;
              v35 += 8;
            }
            while ( v38 != v37 );
            v32 = v55;
          }
          v59[6] = v35;
        }
        *v59 = *v32;
        v59[2] = 0;
        v59[3] = 0;
        v59[1] = (uint32_t)(uintptr_t)(v57);
        v39 = v32[3];
        if ( v39 != 0 )
          v59[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_copy(
                     a1,
                     v39,
                     v59));
        v40 = (uint32_t *)v32[2];
        if ( v40 != nullptr )
        {
          for ( n = v59; ; n = v41 )
          {
            v41 = (uint32_t *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            if ( v41 != (uint32_t *)-16 )
            {
              v42 = 0;
              g4_std::string::construct_copy(v41 + 4, v40 + 4);
              v43 = v40[6] - v40[5];
              v44 = 0;
              v41[5] = 0;
              v45 = v43 >> 3;
              v41[6] = 0;
              v41[7] = 0;
              if ( v45 != 0 )
              {
                v42 = 8 * v45;
                v44 = sub_4EBE70(8 * v45, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
              }
              v41[5] = v44;
              v41[6] = v44;
              v41[7] = v44 + v42;
              v46 = v40[5];
              if ( v40[6] != v46 )
              {
                v61 = v40;
                v63 = v41;
                v47 = v40[6];
                v48 = v44;
                do
                {
                  if ( v48 != 0 )
                  {
                    g4_std::string::construct_copy(v48, v46);
                    g4_std::string::construct_copy(v48 + 4, v46 + 4);
                  }
                  v46 += 8;
                  v48 += 8;
                }
                while ( v47 != v46 );
                v44 = v48;
                v40 = v61;
                v41 = v63;
              }
              v41[6] = v44;
            }
            *v41 = *v40;
            v41[2] = 0;
            v41[3] = 0;
            n[2] = (uint32_t)(uintptr_t)(v41);
            v41[1] = (uint32_t)(uintptr_t)(n);
            v49 = v40[3];
            if ( v49 != 0 )
              v41[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_copy(
                         a1,
                         v49,
                         v41));
            v40 = (uint32_t *)v40[2];
            if ( v40 == nullptr )
              break;
          }
        }
        v57[3] = (uint32_t)(uintptr_t)(v59);
        v31 = v64;
      }
      v64 = (uint32_t *)v31[2];
      if ( v64 == nullptr )
        break;
    }
  }
  return v65;
}

// ----------------------------------------------------------------------------
// Function: sub_15333D0  (binary VA: 0x15333d0)
// Original: sub_15333D0
// ----------------------------------------------------------------------------
int sub_15333D0()
{
  sub_1900D70(&unk_211A3E8);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3E8, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_iap_Rule_Action_glwebtoo_4daa0c::M_insert_aux  (binary VA: 0x1534a90)
// Original: std::vector<iap::Rule::Action,glwebtools::SAllocator<iap::Rule::Action,(glwebtools::MemHint)4>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_iap_Rule_Action_glwebtoo_4daa0c::M_insert_aux(int *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  void *v7;
  int result;
  void *v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  unsigned int v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[6];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v24)) > _g4_s1 ? (0u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v27)) > _g4_s4 ? (20u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v28)) > _g4_s5 ? (24u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v29)) > _g4_s6 ? (28u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v30)) > _g4_s7 ? (48u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v31)) > _g4_s8 ? (52u + sizeof(_g4_t_v31)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    v4 = 0;
    if ( v3 != 0 )
    {
      g4_std::string::construct_copy(a1[1], v3 - 8);
      g4_std::string::construct_copy(v3 + 4, v3 - 4);
      v4 = a1[1];
    }
    a1[1] = v4 + 8;
    g4_std::string::construct_copy(&v30, a3);
    g4_std::string::construct_copy(v31, a3 + 4);
    v5 = a1[1] - 16;
    v6 = (v5 - (int)(uintptr_t)(a2)) >> 3;
    if ( v6 > 0 )
    {
      while ( 1 )
      {
        g4_std::string::assign_str(v5, v5 - 8);
        g4_std::string::assign_str(v5 + 4, v5 - 4);
        if ( --v6 == 0 )
          break;
        v5 -= 8;
      }
    }
    g4_std::string::assign_str(a2, &v30);
    g4_std::string::assign_str(a2 + 1, v31);
    v7 = (void *)(v31[0] - 12);
    if ( (uint32_t *)(v31[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    result = v30;
    v9 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v9)), (int)0);
    }
    return result;
  }
  v10 = *a1;
  v11 = (v3 - *a1) >> 3;
  if ( v11 != 0 )
  {
    v22 = 2 * v11;
    if ( v11 > 2 * v11 || v22 > 0x1FFFFFFF )
    {
      v25 = 0xFFFFFFF8;
      v12 = ((int)(uintptr_t)(a2) - v10) >> 3;
    }
    else
    {
      v25 = 16 * v11;
      v12 = ((int)(uintptr_t)(a2) - v10) >> 3;
      if ( v22 == 0 )
      {
        v26 = 0;
        v13 = 8;
        v14 = 0;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v25 = 8;
    v12 = ((int)(uintptr_t)(a2) - v10) >> 3;
  }
  v23 = v12;
  v26 = sub_4EBE70(v25, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  v13 = v26 + 8;
  v12 = v23;
  v14 = v26;
LABEL_14:
  if ( v14 + 8 * v12 != 0 )
  {
    v24 = v14 + 8 * v12;
    g4_std::string::construct_copy(v24, a3);
    g4_std::string::construct_copy(v24 + 4, a3 + 4);
  }
  v15 = *a1;
  if ( (uint32_t *)*a1 != a2 )
  {
    v16 = v26;
    do
    {
      if ( v16 != 0 )
      {
        g4_std::string::construct_copy(v16, v15);
        g4_std::string::construct_copy(v16 + 4, v15 + 4);
      }
      v15 += 8;
      v16 += 8;
    }
    while ( (uint32_t *)v15 != a2 );
    v13 = v16 + 8;
  }
  v17 = (uint32_t *)a1[1];
  v28 = v17;
  if ( v17 != a2 )
  {
    v18 = a2;
    do
    {
      if ( v13 != 0 )
      {
        g4_std::string::construct_copy(v13, v18);
        g4_std::string::construct_copy(v13 + 4, v18 + 1);
      }
      v13 += 8;
      v18 += 2;
    }
    while ( v28 != v18 );
    v17 = (uint32_t *)a1[1];
    v28 = v17;
  }
  v29 = *a1;
  if ( (uint32_t *)*a1 != v17 )
  {
    v19 = (uint32_t *)*a1;
    v27 = *a1 + 4;
    do
    {
      v20 = *(uint32_t *)((char *)v19 + v27 - v29);
      if ( (uint32_t *)(v20 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v20 - 12));
      }
      v21 = (uint32_t *)(*v19 - 12);
      if ( v21 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v19 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v21);
      v19 += 2;
    }
    while ( v28 != v19 );
    v29 = *a1;
  }
  if ( v29 != 0 )
    sub_4EBEE0(v29);
  *a1 = v26;
  a1[1] = v13;
  a1[2] = v26 + v25;
  return v26;
}

// ----------------------------------------------------------------------------
// Function: sub_1534E60  (binary VA: 0x1534e60)
// Original: sub_1534E60
// ----------------------------------------------------------------------------
int sub_1534E60()
{
  sub_1900D70(&unk_211A3EC);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3EC, &unk_20D1280);
}


