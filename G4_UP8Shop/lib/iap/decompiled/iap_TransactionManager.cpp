#include "Core/Utils/DecompTypes.h"
#include "iap_TransactionManager.h"

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::CreationSettings::Update  (binary VA: 0x152d5d0)
// Original: iap::TransactionManager::CreationSettings::Update
// ----------------------------------------------------------------------------
int iap::TransactionManager::CreationSettings::Update(iap::TransactionManager::CreationSettings::Self *self, const glwebtools::CustomAttribute::Self *a2)
{
  glwebtools::CustomAttribute::Self *v2;
  glwebtools::CustomAttribute::Self *v3;
  glwebtools::CustomAttribute::Self *v4;
  int v5;
  int result;
  char *v7;
  char *v8;
  char *v9;

  v2 = glwebtools::CustomAttribute::key(a2);
  if ( g4_std::string::compare((int)(uintptr_t)(v2), "IGP_shortcode") != 0 )
  {
    v3 = glwebtools::CustomAttribute::key(a2);
    if ( g4_std::string::compare((int)(uintptr_t)(v3), "product_id") != 0 )
    {
      v4 = glwebtools::CustomAttribute::key(a2);
      v5 = g4_std::string::compare((int)(uintptr_t)(v4), "app_version");
      result = -2147483646;
      if ( v5 == 0 )
      {
        v7 = glwebtools::CustomAttribute::value(a2);
        return glwebtools::CustomArgument::opShr((glwebtools::CustomArgument::Self *)v7, (int)(uintptr_t)(self) + 32);
      }
    }
    else
    {
      v8 = glwebtools::CustomAttribute::value(a2);
      return glwebtools::CustomArgument::opShr((glwebtools::CustomArgument::Self *)v8, (int)(uintptr_t)(self) + 4);
    }
  }
  else
  {
    v9 = glwebtools::CustomAttribute::value(a2);
    return glwebtools::CustomArgument::opShr((glwebtools::CustomArgument::Self *)v9, (int)(uintptr_t)(self));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::CreationSettings::Get  (binary VA: 0x152d6b0)
// Original: iap::TransactionManager::CreationSettings::Get
// ----------------------------------------------------------------------------
int iap::TransactionManager::CreationSettings::Get(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  if ( g4_std::string::compare(a2, "IGP_shortcode") == 0 )
    goto LABEL_7;
  if ( g4_std::string::compare(a2, "product_id") == 0 )
  {
    g4_std::string::assign_str(a3, a1 + 4);
    return 0;
  }
  if ( g4_std::string::compare(a2, "app_version") == 0 )
  {
    g4_std::string::assign_str(a3, a1 + 32);
    return 0;
  }
  if ( g4_std::string::compare(a2, "anonymous_credential") == 0 )
  {
    g4_std::string::assign_str(a3, a1 + 16);
    return 0;
  }
  v4 = g4_std::string::compare(a2, "federation_dc");
  result = -2147483646;
  if ( v4 == 0 )
  {
    v3 = a1 + 24;
LABEL_7:
    g4_std::string::assign_str(a3, v3);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::CreationSettings::Clear  (binary VA: 0x152d7d0)
// Original: iap::TransactionManager::CreationSettings::Clear
// ----------------------------------------------------------------------------
int iap::TransactionManager::CreationSettings::Clear(iap::TransactionManager::CreationSettings::Self *self)
{
  uint32_t *v2;
  int result;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  g4_std::string::clear(self, 0, *(uint32_t *)(*(uint32_t *)self - 12), 0);
  g4_std::string::clear((char *)self + 4, 0, *(uint32_t *)(*((uint32_t *)self + 1) - 12), 0);
  g4_std::string::clear((char *)self + 32, 0, *(uint32_t *)(*((uint32_t *)self + 8) - 12), 0);
  v6 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 8, &v6);
  v2 = v6 - 3;
  if ( v6 - 3 != dword_213B808 && __sync_fetch_and_add(v6 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  *((uint8_t *)self + 14) = 0;
  v5 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 16, &v5);
  result = (int)(uintptr_t)(v5);
  v4 = v5 - 3;
  if ( v5 - 3 != dword_213B808 && __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  *((uint8_t *)self + 22) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::CreationSettings::read  (binary VA: 0x152d900)
// Original: iap::TransactionManager::CreationSettings::read
// ----------------------------------------------------------------------------
int iap::TransactionManager::CreationSettings::read(iap::TransactionManager::CreationSettings::Self *self, const glwebtools::JsonReader::Self *a2)
{
  int v2;
  const glwebtools::Json::Value::Self *v3;
  void *v4;
  void *v5;
  const glwebtools::Json::Value::Self *v6;
  void *v7;
  void *v8;
  const glwebtools::Json::Value::Self *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  const glwebtools::Json::Value::Self *v17;
  void *v18;
  const glwebtools::Json::Value::Self *v19;
  char *v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[3];
  typedef int _g4_t_v26[4];
  typedef int _g4_t_v27;
  typedef iap::TransactionManager::CreationSettings::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef iap::TransactionManager::CreationSettings::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef char *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef char *_g4_t_v46;
  typedef uint8_t _g4_t_v47[28];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v23)) > _g4_s2 ? (12u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v24)) > _g4_s3 ? (16u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v25)) > _g4_s4 ? (20u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v26)) > _g4_s5 ? (32u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v27)) > _g4_s6 ? (48u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v28)) > _g4_s7 ? (52u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v29)) > _g4_s8 ? (64u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v30)) > _g4_s9 ? (68u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v31)) > _g4_s10 ? (80u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v32)) > _g4_s11 ? (84u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v33)) > _g4_s12 ? (96u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v34)) > _g4_s13 ? (100u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v35)) > _g4_s14 ? (112u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v36)) > _g4_s15 ? (116u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v37)) > _g4_s16 ? (128u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v38)) > _g4_s17 ? (132u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (144u + sizeof(_g4_t_v39)) > _g4_s18 ? (144u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (148u + sizeof(_g4_t_v40)) > _g4_s19 ? (148u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v41)) > _g4_s20 ? (160u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v42)) > _g4_s21 ? (164u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (176u + sizeof(_g4_t_v43)) > _g4_s22 ? (176u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (180u + sizeof(_g4_t_v44)) > _g4_s23 ? (180u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (192u + sizeof(_g4_t_v45)) > _g4_s24 ? (192u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (196u + sizeof(_g4_t_v46)) > _g4_s25 ? (196u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (208u + sizeof(_g4_t_v47)) > _g4_s26 ? (208u + sizeof(_g4_t_v47)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 132u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 144u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 148u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 160u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 164u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 176u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 180u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 192u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 196u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 208u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "IGP_shortcode", (int)(uintptr_t)(&v24));
  v28 = self;
  v2 = -2147483645;
  g4_std::string::construct_copy(&v37, &v27);
  v38 = v28;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
  {
    LOWORD(v2) = 2;
    if ( glwebtools::Json::Value::isMember(a2, (char **)&v37) )
    {
      v3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v37);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v47, v3);
      v2 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v47, (int)(uintptr_t)(v38));
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v47);
    }
  }
  v4 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( v2 != 0 )
  {
    iap::TransactionManager::CreationSettings::Clear(self);
    return v2;
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "product_id", (int)(uintptr_t)(&v24) + 1);
    v30 = (char *)self + 4;
    g4_std::string::construct_copy(&v39, &v29);
    v40 = v30;
    v22 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
    {
      v22 = -2147483646;
      if ( glwebtools::Json::Value::isMember(a2, (char **)&v39) )
      {
        v6 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v39);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v47, v6);
        v22 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v47, (int)(uintptr_t)(v40));
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v47);
      }
    }
    v7 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    if ( v22 != 0 )
    {
      iap::TransactionManager::CreationSettings::Clear(self);
      return v22;
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "app_version", (int)(uintptr_t)(&v24) + 2);
      v32 = (char *)self + 32;
      g4_std::string::construct_copy(&v41, &v31);
      v42 = v32;
      v23 = -2147483645;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
      {
        v23 = -2147483646;
        if ( glwebtools::Json::Value::isMember(a2, (char **)&v41) )
        {
          v9 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v41);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v47, v9);
          v23 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v47, (int)(uintptr_t)(v42));
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v47);
        }
      }
      v10 = (void *)(v41 - 12);
      if ( (uint32_t *)(v41 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
      v11 = (void *)(v31 - 12);
      if ( (uint32_t *)(v31 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      if ( v23 != 0 )
        goto LABEL_30;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "anonymous_credential", (int)(uintptr_t)(&v24) + 3);
      v34 = (char *)self + 16;
      g4_std::string::construct_copy(&v43, &v33);
      v44 = v34;
      v23 = 0;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
        && glwebtools::Json::Value::isMember(a2, (char **)&v43) )
      {
        v17 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v43);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v47, v17);
        v21 = v44;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v47) != 0 )
        {
          v26[0] = (int)(uintptr_t)(&dword_213B814);
          v23 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v47, (int)(uintptr_t)(v26));
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v23) )
          {
            g4_std::string::assign_str(v21, v26);
            v23 = 0;
            v21[6] = 1;
          }
          v18 = (void *)(v26[0] - 12);
          if ( (uint32_t *)(v26[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v18);
          }
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v47);
      }
      v12 = (void *)(v43 - 12);
      if ( (uint32_t *)(v43 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      v13 = (void *)(v33 - 12);
      if ( (uint32_t *)(v33 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v13);
      }
      if ( v23 != 0 )
        goto LABEL_30;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "federation_dc", (int)(uintptr_t)(v25));
      v36 = (char *)self + 24;
      g4_std::string::construct_copy(&v45, &v35);
      v46 = v36;
      v23 = 0;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
        && glwebtools::Json::Value::isMember(a2, (char **)&v45) )
      {
        v19 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v45);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v47, v19);
        v20 = v46;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v47) != 0 )
        {
          v26[0] = (int)(uintptr_t)(&dword_213B814);
          v23 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v47, (int)(uintptr_t)(v26));
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v23) )
          {
            g4_std::string::assign_str(v20, v26);
            v20[6] = 1;
            v23 = 0;
          }
          g4_std::string::Destroy(v26);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v47);
      }
      v14 = (void *)(v45 - 12);
      if ( (uint32_t *)(v45 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      v15 = (void *)(v35 - 12);
      if ( (uint32_t *)(v35 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v15);
      }
      if ( v23 != 0 )
      {
LABEL_30:
        iap::TransactionManager::CreationSettings::Clear(self);
        return v23;
      }
    }
    return v2;
  }
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::Construct  (binary VA: 0x152e170)
// Original: iap::TransactionManager::TransactionManager
// ----------------------------------------------------------------------------
iap::TransactionManager::Self * iap::TransactionManager::Construct(iap::TransactionManager::Self *self)
{
  glwebtools::Mutex::Self *v1;
  iap::TransactionManager::Self *result;

  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 22) = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 30) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 38) = 0;
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&dword_213B814);
  v1 = (glwebtools::Mutex::Self *)sub_4EBE70(8u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  glwebtools::Mutex::Construct(v1);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v1);
  result = (iap::TransactionManager::Self *)sub_4EBE70(8u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  *(uint32_t *)result = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)result + 1) = (uint32_t)(uintptr_t)(result);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::Destroy  (binary VA: 0x152e240)
// Original: iap::TransactionManager::~TransactionManager
// ----------------------------------------------------------------------------
void iap::TransactionManager::Destroy(iap::TransactionManager::Self *self)
{
  void (***v1)(uint32_t);
  int *v2;
  int v3;
  uint32_t *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;

  v1 = *((void (****)(uint32_t))self + 1);
  if ( v1 != nullptr )
  {
    (**v1)(*((uint32_t *)self + 1));
    sub_4EBEE0(*((uint32_t *)self + 1));
    *((uint32_t *)self + 1) = 0;
  }
  v2 = *(int **)self;
  v15 = *(uint32_t **)self;
  if ( *(uint32_t *)self != 0 )
  {
    v3 = *v2;
    if ( (int *)*v2 != v2 )
    {
      while ( 1 )
      {
        v4 = *(uint32_t **)v3;
        (**(void (***)(int))(v3 + 8))(v3 + 8);
        sub_4EBEE0(v3);
        if ( v4 == v15 )
          break;
        v3 = (int)(uintptr_t)(v4);
      }
    }
    *v15 = (uint32_t)(uintptr_t)(v15);
    v15[1] = (uint32_t)(uintptr_t)(v15);
    v5 = *(int **)self;
    v16 = *(uint32_t *)self;
    if ( *(uint32_t *)self != 0 )
    {
      v6 = *v5;
      if ( v5 == (int *)*v5 )
      {
        v14 = *(uint32_t *)self;
      }
      else
      {
        while ( 1 )
        {
          v7 = *(uint32_t *)v6;
          (**(void (***)(int))(v6 + 8))(v6 + 8);
          sub_4EBEE0(v6);
          if ( v16 == v7 )
            break;
          v6 = v7;
        }
        v14 = *(uint32_t *)self;
      }
      sub_4EBEE0(v14);
    }
    *(uint32_t *)self = 0;
  }
  if ( iap::TransactionManager::s_instance != 0 )
  {
    iap::TransactionManager::Destroy(iap::TransactionManager::s_instance);
    sub_4EBEE0((int)iap::TransactionManager::s_instance);
    iap::TransactionManager::s_instance = (uintptr_t)(uintptr_t)(nullptr);
  }
  v8 = *((uint32_t *)self + 10);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  v9 = *((uint32_t *)self + 8);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v9 - 12));
  }
  v10 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v10 - 12));
  }
  v11 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v11 - 12));
  }
  v12 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v12 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v12 - 12));
  }
  v13 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v13 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::GetInstance  (binary VA: 0x152e470)
// Original: iap::TransactionManager::GetInstance
// ----------------------------------------------------------------------------
iap::TransactionManager::Self * iap::TransactionManager::GetInstance()
{
  iap::TransactionManager::Self *result;
  iap::TransactionManager::Self *v1;

  result = (iap::TransactionManager::Self *)(uintptr_t)(iap::TransactionManager::s_instance);
  if ( iap::TransactionManager::s_instance == 0 )
  {
    v1 = (iap::TransactionManager::Self *)sub_4EBE70(0x2Cu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::TransactionManager::Construct(v1);
    iap::TransactionManager::s_instance = (uintptr_t)(uintptr_t)(v1);
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::Initialize  (binary VA: 0x152e4f0)
// Original: iap::TransactionManager::Initialize
// ----------------------------------------------------------------------------
int iap::TransactionManager::Initialize(iap::TransactionManager::Self *self, char *a2)
{
  int v2;
  uint8_t v4[16];

  if ( a2 == nullptr )
    return -2147483646;
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v4);
  v2 = glwebtools::JsonReader::parse((glwebtools::JsonReader::Self *)v4, a2);
  if ( v2 == 0 )
    v2 = iap::TransactionManager::CreationSettings::read(
           (iap::TransactionManager::CreationSettings::Self *)((iap::TransactionManager::Self *)((char *)self + 8)),
           (const glwebtools::JsonReader::Self *)v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::UpdateSettings  (binary VA: 0x152e570)
// Original: iap::TransactionManager::UpdateSettings
// ----------------------------------------------------------------------------
int iap::TransactionManager::UpdateSettings(iap::TransactionManager::Self *self, const glwebtools::CustomAttribute::Self *a2)
{
  iap::TransactionManager::CreationSettings::Update((iap::TransactionManager::Self *)((char *)self + 8), a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::GetSettings  (binary VA: 0x152e5a0)
// Original: iap::TransactionManager::GetSettings
// ----------------------------------------------------------------------------
int iap::TransactionManager::GetSettings(int a1, int a2, int a3)
{
  return iap::TransactionManager::CreationSettings::Get(a1 + 8, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::AddTransaction  (binary VA: 0x152e5e0)
// Original: iap::TransactionManager::AddTransaction
// ----------------------------------------------------------------------------
int iap::TransactionManager::AddTransaction(int *a1, int a2)
{
  glwebtools::Mutex::Self *v2;
  bool v3;
  int v4;
  int v5;
  typedef int _g4_t_v7;
  typedef void (**_g4_t_v8)(iap::android_billing::TransactionInfo::Self *);
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[2];
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[8];
  typedef uint8_t _g4_t_v15[6];
  typedef char _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[2];
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t _g4_t_v27[5];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v12)) > _g4_s5 ? (32u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v13)) > _g4_s6 ? (40u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v14)) > _g4_s7 ? (44u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v15)) > _g4_s8 ? (52u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (58u + sizeof(_g4_t_v16)) > _g4_s9 ? (58u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v17)) > _g4_s10 ? (60u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v18)) > _g4_s11 ? (64u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v19)) > _g4_s12 ? (68u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v20)) > _g4_s13 ? (72u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v21)) > _g4_s14 ? (76u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v22)) > _g4_s15 ? (80u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v23)) > _g4_s16 ? (88u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v24)) > _g4_s17 ? (92u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v25)) > _g4_s18 ? (96u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v26)) > _g4_s19 ? (100u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v27)) > _g4_s20 ? (104u + sizeof(_g4_t_v27)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 58u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 92u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);

  v2 = (glwebtools::Mutex::Self *)a1[1];
  glwebtools::Mutex::Lock(v2);
  iap::TransactionInfo::Construct((iap::TransactionInfo::Self *)&v8);
  v8 = (void (**)(iap::android_billing::TransactionInfo::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096688));
  v22[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v23 = &dword_213B814;
  v24 = &dword_213B814;
  v25 = &dword_213B814;
  v26 = &dword_213B814;
  v27[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::assign_str(&v24, a2 + 16);
  g4_std::string::assign_str(&v23, a2 + 20);
  g4_std::string::assign_str(v27, a2 + 36);
  g4_std::string::assign_str(v15, a2 + 32);
  v16 = 1;
  g4_std::string::assign_str(v14, a2 + 40);
  v3 = *(uint8_t *)(a2 + 12) == 0;
  v17 = 0;
  v4 = *(uint32_t *)a2;
  if ( !v3 )
  {
    v10 = *(uint32_t *)a2;
    v9 = v4;
    goto LABEL_3;
  }
  if ( v4 == 0 )
  {
    v10 = 1;
    v9 = 1;
    goto LABEL_4;
  }
  if ( v4 != 2 )
  {
    if ( v4 == 1 )
    {
      v10 = -3;
      v9 = -3;
      g4_std_compat::string_assign((int)(uintptr_t)(&v18), "USER_CANCELLED", 0xEu);
    }
    else if ( v4 == 3 )
    {
      v10 = -3;
      v9 = -3;
      g4_std_compat::string_assign((int)(uintptr_t)(&v18), "PENDING_TRANSACTION", 0x13u);
    }
    v4 = v9;
LABEL_3:
    if ( v4 >= 0 )
      goto LABEL_4;
    goto LABEL_15;
  }
  v10 = -3;
  v9 = -3;
LABEL_15:
  v17 = *(uint32_t *)(a2 + 4);
  g4_std::string::assign_str(&v19, a2 + 28);
  g4_std::string::assign_str(&v20, a2 + 44);
  v21 = *(uint32_t *)(a2 + 8);
LABEL_4:
  v7 = *a1;
  v5 = sub_4EBE70(0x64u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v5 != -8 )
  {
    *(uint32_t *)(v5 + 8) = ((uint32_t)(uintptr_t)&off_20960A8);
    *(uint32_t *)(v5 + 12) = v9;
    *(uint32_t *)(v5 + 16) = v10;
    g4_std::string::construct_copy(v5 + 20, &v11);
    g4_std::string::construct_copy(v5 + 24, v12);
    *(uint32_t *)(v5 + 28) = v12[1];
    g4_std::string::construct_copy(v5 + 32, &v13);
    g4_std::string::construct_copy(v5 + 36, v14);
    *(uint8_t *)(v5 + 40) = v14[4];
    *(uint32_t *)(v5 + 44) = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::assign_str(v5 + 44, v15);
    *(uint8_t *)(v5 + 50) = v16;
    *(uint32_t *)(v5 + 52) = v17;
    g4_std::string::construct_copy(v5 + 56, &v18);
    g4_std::string::construct_copy(v5 + 60, &v19);
    g4_std::string::construct_copy(v5 + 64, &v20);
    *(uint32_t *)(v5 + 68) = v21;
    *(uint32_t *)(v5 + 8) = ((uint32_t)(uintptr_t)&off_2096688);
    g4_std::string::construct_copy(v5 + 72, v22);
    *(uint32_t *)(v5 + 76) = v22[1];
    g4_std::string::construct_copy(v5 + 80, &v23);
    g4_std::string::construct_copy(v5 + 84, &v24);
    g4_std::string::construct_copy(v5 + 88, &v25);
    g4_std::string::construct_copy(v5 + 92, &v26);
    g4_std::string::construct_copy(v5 + 96, v27);
  }
  sub_1901920(v5, v7);
  iap::android_billing::TransactionInfo::Destroy((iap::android_billing::TransactionInfo::Self *)&v8);
  return glwebtools::Mutex::Unlock(v2);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::AddTransaction  (binary VA: 0x152e9a0)
// Original: iap::TransactionManager::AddTransaction
// ----------------------------------------------------------------------------
int iap::TransactionManager::AddTransaction(int *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  char v6;
  typedef int _g4_t_v8;
  typedef glwebtools::Mutex::Self *_g4_t_v9;
  typedef void (**_g4_t_v10)(iap::android_billing::TransactionInfo::Self *);
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[2];
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[8];
  typedef uint8_t _g4_t_v17[8];
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[2];
  typedef uint32_t _g4_t_v22[2];
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v14)) > _g4_s6 ? (32u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v15)) > _g4_s7 ? (40u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v16)) > _g4_s8 ? (44u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v17)) > _g4_s9 ? (52u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v18)) > _g4_s10 ? (60u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v19)) > _g4_s11 ? (64u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v20)) > _g4_s12 ? (68u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v21)) > _g4_s13 ? (72u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v22)) > _g4_s14 ? (80u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v23)) > _g4_s15 ? (88u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v24)) > _g4_s16 ? (92u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v25)) > _g4_s17 ? (96u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v26)) > _g4_s18 ? (100u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v27)) > _g4_s19 ? (104u + sizeof(_g4_t_v27)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 92u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);

  v9 = (glwebtools::Mutex::Self *)a1[1];
  glwebtools::Mutex::Lock(v9);
  iap::TransactionInfo::Construct((iap::TransactionInfo::Self *)&v10);
  v10 = (void (**)(iap::android_billing::TransactionInfo::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096688));
  v22[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v23 = &dword_213B814;
  v24 = &dword_213B814;
  v25 = &dword_213B814;
  v26 = &dword_213B814;
  v27 = &dword_213B814;
  g4_std::string::assign_str(&v24, a2);
  g4_std::string::assign_str(&v23, a4);
  v18 = a3;
  v12 = a3;
  g4_std::string::assign_str(v16, a5);
  v11 = v12;
  v8 = *a1;
  v5 = sub_4EBE70(0x64u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v5 != -8 )
  {
    *(uint32_t *)(v5 + 8) = ((uint32_t)(uintptr_t)&off_20960A8);
    *(uint32_t *)(v5 + 12) = v11;
    *(uint32_t *)(v5 + 16) = v12;
    g4_std::string::construct_copy(v5 + 20, &v13);
    g4_std::string::construct_copy(v5 + 24, v14);
    *(uint32_t *)(v5 + 28) = v14[1];
    g4_std::string::construct_copy(v5 + 32, &v15);
    g4_std::string::construct_copy(v5 + 36, v16);
    v6 = v16[4];
    *(uint32_t *)(v5 + 44) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint8_t *)(v5 + 40) = v6;
    g4_std::string::assign_str(v5 + 44, v17);
    *(uint8_t *)(v5 + 50) = v17[6];
    *(uint32_t *)(v5 + 52) = v18;
    g4_std::string::construct_copy(v5 + 56, &v19);
    g4_std::string::construct_copy(v5 + 60, &v20);
    g4_std::string::construct_copy(v5 + 64, v21);
    *(uint32_t *)(v5 + 68) = v21[1];
    *(uint32_t *)(v5 + 8) = ((uint32_t)(uintptr_t)&off_2096688);
    g4_std::string::construct_copy(v5 + 72, v22);
    *(uint32_t *)(v5 + 76) = v22[1];
    g4_std::string::construct_copy(v5 + 80, &v23);
    g4_std::string::construct_copy(v5 + 84, &v24);
    g4_std::string::construct_copy(v5 + 88, &v25);
    g4_std::string::construct_copy(v5 + 92, &v26);
    g4_std::string::construct_copy(v5 + 96, &v27);
  }
  sub_1901920(v5, v8);
  iap::android_billing::TransactionInfo::Destroy((iap::android_billing::TransactionInfo::Self *)&v10);
  return glwebtools::Mutex::Unlock(v9);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::CompleteTransaction  (binary VA: 0x152eec0)
// Original: iap::TransactionManager::CompleteTransaction
// ----------------------------------------------------------------------------
int iap::TransactionManager::CompleteTransaction(iap::TransactionManager::Self *self, iap::android_billing::TransactionInfo::Self *a2)
{
  int result;
  InAppBilling::Self *v3;

  result = -2147483645;
  if ( a2 != nullptr )
  {
    v3 = *((InAppBilling::Self **)a2 + 18);
    if ( *((uint32_t *)v3 - 3) != 0 )
    {
      InAppBilling_SendNotifyConfirmation(v3);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::RestoreTransactions  (binary VA: 0x152ef00)
// Original: iap::TransactionManager::RestoreTransactions
// ----------------------------------------------------------------------------
int iap::TransactionManager::RestoreTransactions()
{
  InAppBilling_RestoreTransactions();
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionManager::PopTransaction  (binary VA: 0x152ef20)
// Original: iap::TransactionManager::PopTransaction
// ----------------------------------------------------------------------------
int iap::TransactionManager::PopTransaction(iap::TransactionManager::Self *self, iap::android_billing::TransactionInfo::Self *a2)
{
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  iap::ItemManager::Self *Instance;
  glwebtools::Self *ItemById;
  int v7;
  char *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  typedef int _g4_t_v20;
  typedef glwebtools::Self *_g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef glwebtools::Mutex::Self *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef volatile int32_t *_g4_t_v27;
  typedef uint32_t (**_g4_t_v28)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v29;
  typedef char _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef char _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef char _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef char _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef char _g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef char _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef char _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef char _g4_t_v44;
  typedef int _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int *_g4_t_v55;
  typedef int *_g4_t_v56;
  typedef int _g4_t_v57;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v21)) > _g4_s1 ? (0u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v22)) > _g4_s2 ? (4u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v23)) > _g4_s3 ? (20u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v26)) > _g4_s6 ? (32u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v27)) > _g4_s7 ? (48u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v28)) > _g4_s8 ? (52u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v29)) > _g4_s9 ? (56u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (62u + sizeof(_g4_t_v30)) > _g4_s10 ? (62u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v31)) > _g4_s11 ? (64u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (70u + sizeof(_g4_t_v32)) > _g4_s12 ? (70u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v33)) > _g4_s13 ? (72u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (78u + sizeof(_g4_t_v34)) > _g4_s14 ? (78u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v35)) > _g4_s15 ? (80u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (86u + sizeof(_g4_t_v36)) > _g4_s16 ? (86u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v37)) > _g4_s17 ? (88u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (94u + sizeof(_g4_t_v38)) > _g4_s18 ? (94u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v39)) > _g4_s19 ? (96u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (102u + sizeof(_g4_t_v40)) > _g4_s20 ? (102u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v41)) > _g4_s21 ? (104u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (110u + sizeof(_g4_t_v42)) > _g4_s22 ? (110u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v43)) > _g4_s23 ? (112u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (118u + sizeof(_g4_t_v44)) > _g4_s24 ? (118u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v45)) > _g4_s25 ? (120u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (126u + sizeof(_g4_t_v46)) > _g4_s26 ? (126u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (134u + sizeof(_g4_t_v47)) > _g4_s27 ? (134u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (142u + sizeof(_g4_t_v48)) > _g4_s28 ? (142u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v49)) > _g4_s29 ? (144u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v50)) > _g4_s30 ? (148u + sizeof(_g4_t_v50)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v51)) > _g4_s31 ? (152u + sizeof(_g4_t_v51)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v52)) > _g4_s32 ? (156u + sizeof(_g4_t_v52)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v53)) > _g4_s33 ? (160u + sizeof(_g4_t_v53)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v54)) > _g4_s34 ? (164u + sizeof(_g4_t_v54)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v55)) > _g4_s35 ? (168u + sizeof(_g4_t_v55)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v56)) > _g4_s36 ? (172u + sizeof(_g4_t_v56)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v57)) > _g4_s37 ? (176u + sizeof(_g4_t_v57)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 62u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 70u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 78u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 86u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 94u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 102u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 110u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 118u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 120u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 126u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 134u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 142u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 144u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 148u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 152u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 156u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 160u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 164u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 168u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 172u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 176u);

  v23 = *((glwebtools::Mutex::Self **)self + 1);
  glwebtools::Mutex::Lock(v23);
  v2 = -2147483645;
  v3 = *(uint32_t **)self;
  if ( *(uint32_t *)self != 0 )
  {
    v4 = (uint32_t *)*v3;
    if ( (uint32_t *)*v3 != v3 )
    {
      *((uint32_t *)a2 + 1) = v4[3];
      *((uint32_t *)a2 + 2) = v4[4];
      g4_std::string::assign_str((char *)a2 + 12, v4 + 5);
      g4_std::string::assign_str((char *)a2 + 16, v4 + 6);
      *((uint32_t *)a2 + 5) = v4[7];
      g4_std::string::assign_str((char *)a2 + 24, v4 + 8);
      g4_std::string::assign_str((char *)a2 + 28, v4 + 9);
      *((uint8_t *)a2 + 32) = *((uint8_t *)v4 + 40);
      g4_std::string::assign_str((char *)a2 + 36, v4 + 11);
      *((uint8_t *)a2 + 42) = *((uint8_t *)v4 + 50);
      *((uint32_t *)a2 + 11) = v4[13];
      g4_std::string::assign_str((char *)a2 + 48, v4 + 14);
      g4_std::string::assign_str((char *)a2 + 52, v4 + 15);
      g4_std::string::assign_str((char *)a2 + 56, v4 + 16);
      *((uint32_t *)a2 + 15) = v4[17];
      g4_std::string::assign_str((char *)a2 + 64, v4 + 18);
      *((uint32_t *)a2 + 17) = v4[19];
      g4_std::string::assign_str((char *)a2 + 72, v4 + 20);
      g4_std::string::assign_str((char *)a2 + 76, v4 + 21);
      g4_std::string::assign_str((char *)a2 + 80, v4 + 22);
      g4_std::string::assign_str((char *)a2 + 84, v4 + 23);
      g4_std::string::assign_str((char *)a2 + 88, v4 + 24);
      v30 = 0;
      v32 = 0;
      v34 = 0;
      v28 = (uint32_t (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
      v36 = 0;
      v38 = 0;
      v29 = &dword_213B814;
      v31 = &dword_213B814;
      v33 = &dword_213B814;
      v35 = &dword_213B814;
      v37 = &dword_213B814;
      v39 = &dword_213B814;
      v41 = &dword_213B814;
      v43 = &dword_213B814;
      v40 = 0;
      v42 = 0;
      v55 = &v53;
      v56 = &v53;
      v44 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = nullptr;
      v50 = nullptr;
      v51 = 0;
      v53 = 0;
      v54 = nullptr;
      v57 = 0;
      g4_std::string::construct_copy(&v27, (char *)a2 + 76);
      Instance = iap::ItemManager::getInstance();
      ItemById = (glwebtools::Self *)iap::ItemManager::getItemById((int)(uintptr_t)(Instance), (void **)&v27, (int)(uintptr_t)(&v28));
      v22 = v27 - 3;
      if ( v27 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
      {
        v21 = ItemById;
        g4_std::string::Rep::M_destroy((void *)v22);
        ItemById = v21;
      }
      if ( glwebtools::IsOperationSuccess(ItemById) )
      {
        *((uint32_t *)a2 + 17) = v45;
        g4_std_compat::string_assign((int)(uintptr_t)(a2) + 16, "legacy", 6u);
        g4_std_compat::string_assign((int)(uintptr_t)(a2) + 12, "android", 7u);
        g4_std::string::assign_str((char *)a2 + 64, &v29);
        g4_std::string::assign_str((char *)a2 + 80, &v31);
        g4_std::string::assign_str((char *)a2 + 84, &v31);
        v7 = **(uint32_t **)self;
        sub_1901940(v7);
        (**(void (***)(int))(v7 + 8))(v7 + 8);
        sub_4EBEE0(v7);
        v28 = (uint32_t (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
        g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
          (int)(uintptr_t)(&v52),
          v54);
        v25 = v50;
        v26 = v49;
        if ( v50 != v49 )
        {
          v8 = v49;
          v24 = v49 + 4;
          do
          {
            v9 = *(uint32_t *)&v24[v8 - v26];
            if ( (uint32_t *)(v9 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v9 - 12));
            }
            v10 = (uint32_t *)(*(uint32_t *)v8 - 12);
            if ( v10 != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v8 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v10);
            }
            v8 += 8;
          }
          while ( v25 != v8 );
          v26 = v49;
        }
        if ( v26 != nullptr )
          opDelete(v26);
        v11 = v43 - 3;
        if ( v43 - 3 != dword_213B808 && __sync_fetch_and_add(v43 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v11);
        v12 = v41 - 3;
        if ( v41 - 3 != dword_213B808 && __sync_fetch_and_add(v41 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v12);
        v13 = v39 - 3;
        if ( v39 - 3 != dword_213B808 && __sync_fetch_and_add(v39 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v13);
        v14 = v37 - 3;
        if ( v37 - 3 != dword_213B808 && __sync_fetch_and_add(v37 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v14);
        v15 = v35 - 3;
        if ( v35 - 3 != dword_213B808 && __sync_fetch_and_add(v35 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v15);
        v16 = v33 - 3;
        if ( v33 - 3 != dword_213B808 && __sync_fetch_and_add(v33 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v16);
        v17 = v31 - 3;
        if ( v31 - 3 != dword_213B808 && __sync_fetch_and_add(v31 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v17);
        v18 = v29 - 3;
        if ( v29 - 3 == dword_213B808 )
        {
          v2 = 0;
        }
        else
        {
          v2 = 0;
          if ( __sync_fetch_and_add(v29 - 1, 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v18);
            v2 = 0;
          }
        }
      }
      else
      {
        iap::iABAndroidItemV1::Destroy((iap::iABAndroidItemV1::Self *)&v28);
        v2 = -2147483645;
      }
    }
  }
  v20 = v2;
  glwebtools::Mutex::Unlock(v23);
  return v20;
}


