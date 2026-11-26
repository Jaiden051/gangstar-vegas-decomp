#include "Core/Utils/DecompTypes.h"
#include "gaia_internal.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: ISingleton_gaia_GaiaActionsManager_b0d300::Destroy  (binary VA: 0x14a4d00)
// Original: ISingleton<gaia::GaiaActionsManager>::~ISingleton
// ----------------------------------------------------------------------------
void ISingleton_gaia_GaiaActionsManager_b0d300::Destroy(ISingleton<gaia::GaiaActionsManager::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095AE0);
}

// ----------------------------------------------------------------------------
// Function: ISingleton_gaia_GaiaActionsManager_b0d300::Destroy_ea14a4d20  (binary VA: 0x14a4d20)
// Original: ISingleton<gaia::GaiaActionsManager>::~ISingleton
// ----------------------------------------------------------------------------
void ISingleton_gaia_GaiaActionsManager_b0d300::Destroy_ea14a4d20(ISingleton<gaia::GaiaActionsManager::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095AE0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_gaia_GaiaRequestCallback_6a5543::Destroy  (binary VA: 0x14a4d50)
// Original: std::vector<gaia::GaiaRequestCallback *>::~vector
// ----------------------------------------------------------------------------
void g4_std::vector_gaia_GaiaRequestCallback_6a5543::Destroy(void **self)
{
  if ( *self != nullptr )
    opDelete(*self);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_long_pair_unsig_4fe1b0::M_erase  (binary VA: 0x14a4d80)
// Original: std::_Rb_tree<unsigned long,std::pair<unsigned long const,gaia::ConfigInfo>,std::_Select1st<std::pair<unsigned long const,gaia::ConfigInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,gaia::ConfigInfo>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_unsigned_long_pair_unsig_4fe1b0::M_erase(int a1, void **a2)
{
  void **v2;
  volatile int32_t *v3;
  void **v4;
  volatile int32_t *v5;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_unsigned_long_pair_unsig_4fe1b0::M_erase(
        a1,
        v2[3]);
      v3 = (volatile int32_t *)v2[6];
      v4 = (void **)v2[2];
      if ( v3 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v3 - 3));
      v5 = (volatile int32_t *)v2[5];
      if ( v5 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v5 - 3));
      opDelete(v2);
      if ( v4 == nullptr )
        break;
      v2 = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_erase  (binary VA: 0x14a4e30)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_erase(int a1, void **a2)
{
  void **v2;
  volatile int32_t *v3;
  void **v4;
  volatile int32_t *v5;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_erase(
        a1,
        (void **)(v2[3]));
      v3 = (volatile int32_t *)v2[7];
      v4 = (void **)v2[2];
      if ( v3 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v3 - 3));
      v5 = (volatile int32_t *)v2[6];
      if ( v5 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v5 - 3));
      opDelete(v2);
      if ( v4 == nullptr )
        break;
      v2 = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux  (binary VA: 0x14a4ee0)
// Original: std::vector<gaia::BaseJSONServiceResponse>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux(int a1, Json::Value::Self *a2, Json::Value::Self *a3)
{
  int v3;
  int v4;
  int v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  int v8;
  char *v9;
  char *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  Json::Value::Self *v18;
  const Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  int v26;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef Json::Value::Self *_g4_t_v31;
  typedef Json::Value::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef void **_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[16];
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v28)) > _g4_s1 ? (28u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v29)) > _g4_s2 ? (28u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v30)) > _g4_s3 ? (28u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v31)) > _g4_s4 ? (32u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v32)) > _g4_s5 ? (32u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v33)) > _g4_s6 ? (36u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v34)) > _g4_s7 ? (36u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v35)) > _g4_s8 ? (40u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v36)) > _g4_s9 ? (60u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v37)) > _g4_s10 ? (76u + sizeof(_g4_t_v37)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);

  v3 = a1;
  v4 = *(uint32_t *)(a1 + 4);
  if ( v4 != *(uint32_t *)(a1 + 8) )
  {
    v5 = 0;
    if ( v4 != 0 )
    {
      Json::Value::Construct(*(Json::Value::Self **)(a1 + 4), (const Json::Value::Self *)(v4 - 20));
      *(uint32_t *)(v4 + 16) = *(uint32_t *)(v4 - 4);
      v5 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v5 + 20;
    Json::Value::Construct((Json::Value::Self *)v36, a3);
    v6 = *(Json::Value::Self **)(a1 + 4);
    v37 = *((uint32_t *)a3 + 4);
    v7 = (Json::Value::Self *)((char *)v6 - 40);
    v31 = v6;
    v8 = -858993459 * (((Json::Value::Self *)((char *)v6 - 40) - a2) >> 2);
    if ( v8 > 0 )
    {
      v9 = (char *)v6 - 60;
      v10 = (char *)v6 - 40;
      while ( 1 )
      {
        v11 = (Json::Value::Self *)((char *)v7 - 20);
        v28 = v9;
        Json::Value::opAssign(v7, (Json::Value::Self *)((char *)v7 - 20));
        v9 = v28;
        --v8;
        *(uint32_t *)&v10[v11 - v31 + 76] = *(uint32_t *)&v28[v11 - v31 + 76];
        if ( v8 == 0 )
          break;
        v7 = v11;
      }
    }
    Json::Value::opAssign(a2, (const Json::Value::Self *)v36);
    *((uint32_t *)a2 + 4) = v37;
    gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v36);
    return;
  }
  v12 = *(Json::Value::Self **)a1;
  v13 = -858993459 * ((v4 - *(uint32_t *)a1) >> 2);
  if ( v13 != 0 )
  {
    v14 = 2 * v13;
    if ( v13 > 2 * v13 || v14 > 0xCCCCCCC )
    {
      v35 = -16;
      v15 = -858993459 * ((a2 - v12) >> 2);
    }
    else
    {
      v35 = 40 * v13;
      v15 = -858993459 * ((a2 - v12) >> 2);
      if ( v14 == 0 )
      {
        v17 = 20;
        v32 = nullptr;
        goto LABEL_14;
      }
    }
    v16 = opNew(v35);
  }
  else
  {
    v35 = 20;
    v15 = -858993459 * ((a2 - v12) >> 2);
    v16 = opNew(0x14u);
  }
  v32 = (Json::Value::Self *)v16;
  v17 = v16 + 20;
LABEL_14:
  v18 = (Json::Value::Self *)((char *)v32 + 20 * v15);
  if ( v18 != nullptr )
  {
    v29 = v17;
    Json::Value::Construct(v18, a3);
    *((uint32_t *)v18 + 4) = *((uint32_t *)a3 + 4);
    v17 = v29;
  }
  v19 = *(const Json::Value::Self **)a1;
  if ( *(Json::Value::Self **)a1 != a2 )
  {
    v20 = v32;
    do
    {
      if ( v20 != nullptr )
      {
        Json::Value::Construct(v20, v19);
        *((uint32_t *)v20 + 4) = *((uint32_t *)v19 + 4);
      }
      v19 = (const Json::Value::Self *)((char *)v19 + 20);
      v20 = (Json::Value::Self *)((char *)v20 + 20);
    }
    while ( v19 != a2 );
    v3 = a1;
    v17 = (int)(uintptr_t)(v20) + 20;
  }
  v21 = *(Json::Value::Self **)(v3 + 4);
  if ( v21 != a2 )
  {
    v33 = v3;
    v22 = a2;
    v23 = *(Json::Value::Self **)(v3 + 4);
    v24 = (Json::Value::Self *)v17;
    do
    {
      if ( v24 != nullptr )
      {
        Json::Value::Construct(v24, v22);
        *((uint32_t *)v24 + 4) = *((uint32_t *)v22 + 4);
      }
      v22 = (Json::Value::Self *)((char *)v22 + 20);
      v24 = (Json::Value::Self *)((char *)v24 + 20);
    }
    while ( v23 != v22 );
    v3 = v33;
    v17 = (int)(uintptr_t)(v24);
    v21 = *(Json::Value::Self **)(v33 + 4);
  }
  v25 = *(Json::Value::Self **)v3;
  if ( *(Json::Value::Self **)v3 != v21 )
  {
    v34 = (void **)v3;
    v26 = v17;
    do
    {
      v27 = (gaia::BaseJSONServiceResponse::Self *)(v25);
      v25 = (Json::Value::Self *)((char *)v25 + 20);
      gaia::BaseJSONServiceResponse::Destroy(v27);
    }
    while ( v25 != v21 );
    v17 = v26;
    v3 = (int)(uintptr_t)(v34);
    v25 = (Json::Value::Self *)*v34;
  }
  if ( v25 != nullptr )
  {
    v30 = v17;
    opDelete(v25);
    v17 = v30;
  }
  *(uint32_t *)(v3 + 4) = v17;
  *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v32);
  *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)((char *)v32 + v35);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_erase  (binary VA: 0x14a5170)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,std::string>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,std::string>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,std::string>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_erase(int a1, void **a2)
{
  void **v2;
  volatile int32_t *v3;
  void **v4;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_erase(
        a1,
        (void **)(v2[3]));
      v3 = (volatile int32_t *)v2[5];
      v4 = (void **)v2[2];
      if ( v3 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v3 - 3));
      opDelete(v2);
      if ( v4 == nullptr )
        break;
      v2 = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_8e26f5::M_erase  (binary VA: 0x14a51f0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,gaia::BaseServiceManager::Credentials>,std::_Select1st<std::pair<std::string const,gaia::BaseServiceManager::Credentials>>,std::less<std::string>,std::allocator<std::pair<std::string const,gaia::BaseServiceManager::Credentials>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_8e26f5::M_erase(int a1, void **a2)
{
  void **v2;
  volatile int32_t *v3;
  void **v4;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_string_pair_string_const_8e26f5::M_erase(
        a1,
        (void **)(v2[3]));
      v3 = (volatile int32_t *)v2[4];
      v4 = (void **)v2[2];
      if ( v3 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v3 - 3));
      opDelete(v2);
      if ( v4 == nullptr )
        break;
      v2 = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_erase  (binary VA: 0x14a5270)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_erase(int a1, void **a2)
{
  void **v2;
  void **v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_erase(
        a1,
        (void **)(v2[3]));
      v3 = (void **)v2[2];
      if ( v2[5] != nullptr )
        opDelete(v2[5]);
      opDelete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_long_pair_unsig_4fe1b0::M_insert  (binary VA: 0x14a5350)
// Original: std::_Rb_tree<unsigned long,std::pair<unsigned long const,gaia::ConfigInfo>,std::_Select1st<std::pair<unsigned long const,gaia::ConfigInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,gaia::ConfigInfo>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_unsigned_long_pair_unsig_4fe1b0::M_insert(int *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v7;
  int v8;
  char v9;

  v9 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v9 = *(uint32_t *)a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x28u);
  if ( v5 != -16 )
  {
    *(uint32_t *)(v5 + 16) = *(uint32_t *)a5;
    v7 = v5;
    g4_std::string::construct_copy(v5 + 20, a5 + 4);
    g4_std::string::construct_copy(v7 + 24, a5 + 8);
    v5 = v7;
    *(uint32_t *)(v7 + 28) = *(uint32_t *)(a5 + 12);
    *(uint64_t *)(v7 + 32) = *(uint64_t *)(a5 + 16);
  }
  v8 = v5;
  sub_1904970(v9, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_gaia_GaiaSimpleEventDisp_96cc60::M_insert_aux  (binary VA: 0x14a5460)
// Original: std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_gaia_GaiaSimpleEventDisp_96cc60::M_insert_aux(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v3 = *(uint32_t **)(a1 + 4);
  if ( v3 != *(uint32_t **)(a1 + 8) )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 3);
      v3[1] = *(v3 - 2);
      v3[2] = *(v3 - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    v5 = v4 + 12;
    v6 = v4 - 12;
    *(uint32_t *)(a1 + 4) = v5;
    v25 = *a3;
    v26 = a3[1];
    v27 = a3[2];
    v7 = v6;
    if ( -1431655765 * ((v6 - a2) >> 2) > 0 )
    {
      v21 = -1431655765 * ((v6 - a2) >> 2);
      while ( 1 )
      {
        v7 -= 12;
        *(uint32_t *)v6 = *(uint32_t *)v7;
        *(uint32_t *)(v6 + 4) = *(uint32_t *)(v7 + 4);
        *(uint8_t *)(v6 + 8) = *(uint8_t *)(v7 + 8);
        if ( --v21 == 0 )
          break;
        v6 -= 12;
      }
    }
    *(uint32_t *)a2 = v25;
    *(uint32_t *)(a2 + 4) = v26;
    *(uint8_t *)(a2 + 8) = v27;
    return (uint8_t)v27;
  }
  v9 = *(uint32_t **)a1;
  v10 = -1431655765 * (((int)(uintptr_t)(v3) - *(uint32_t *)a1) >> 2);
  if ( v10 != 0 )
  {
    v11 = 2 * v10;
    if ( v10 > 2 * v10 || v11 > 0x15555555 )
    {
      v24 = -4;
      v12 = -1431655765 * ((a2 - (int)(uintptr_t)(v9)) >> 2);
    }
    else
    {
      v24 = 24 * v10;
      v12 = -1431655765 * ((a2 - (int)(uintptr_t)(v9)) >> 2);
      if ( v11 == 0 )
      {
        v23 = 12;
        v22 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v24 = 12;
    v12 = -1431655765 * ((a2 - (int)(uintptr_t)(v9)) >> 2);
  }
  v20 = v12;
  v22 = opNew(v24);
  v23 = v22 + 12;
  v12 = v20;
LABEL_13:
  v13 = (int *)(v22 + 12 * v12);
  if ( v13 != nullptr )
  {
    *v13 = *a3;
    v13[1] = a3[1];
    v13[2] = a3[2];
  }
  v14 = *(uint32_t **)a1;
  if ( *(uint32_t *)a1 != a2 )
  {
    v15 = *(uint32_t **)a1;
    v16 = (uint32_t *)v22;
    do
    {
      if ( v16 != nullptr )
      {
        *v16 = *v15;
        v16[1] = v15[1];
        v16[2] = v15[2];
      }
      v15 += 3;
      v16 += 3;
    }
    while ( v15 != (uint32_t *)a2 );
    v23 = v22 + 4 * ((unsigned int)(a2 - (uint32_t)(uintptr_t)(v14 + 3)) >> 2) + 24;
  }
  v17 = *(uint32_t **)(a1 + 4);
  if ( v17 != (uint32_t *)a2 )
  {
    v18 = (uint32_t *)a2;
    v19 = (uint32_t *)v23;
    do
    {
      if ( v19 != nullptr )
      {
        *v19 = *v18;
        v19[1] = v18[1];
        v19[2] = v18[2];
      }
      v18 += 3;
      v19 += 3;
    }
    while ( v17 != v18 );
    v23 += 4 * (((unsigned int)(uintptr_t)(v17) - a2 - 12) >> 2) + 12;
  }
  if ( *(uint32_t *)a1 != 0 )
    opDelete(*(void **)a1);
  *(uint32_t *)a1 = v22;
  *(uint32_t *)(a1 + 4) = v23;
  *(uint32_t *)(a1 + 8) = v24 + v22;
  return v24 + v22;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_erase  (binary VA: 0x14a56c0)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_erase(int a1, void **a2)
{
  void **v2;
  void **v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_erase(
        a1,
        (void **)(v2[3]));
      v3 = (void **)v2[2];
      if ( v2[5] != nullptr )
        opDelete(v2[5]);
      opDelete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaActionsManager::thunk_Destroy  (binary VA: 0x14a57a0)
// Original: `non-virtual thunk to'gaia::GaiaActionsManager::~GaiaActionsManager
// ----------------------------------------------------------------------------
void gaia::GaiaActionsManager::thunk_Destroy(gaia::GaiaActionsManager::Self *self)
{
  gaia::GaiaActionsManager::Destroy((gaia::GaiaActionsManager::Self *)((char *)self - 28));
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert  (binary VA: 0x14a5850)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int v7;
  int v8;
  char v9;

  v9 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v9 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x20u);
  if ( v5 != -16 )
  {
    *(uint32_t *)(v5 + 16) = *a5;
    *(uint32_t *)(v5 + 20) = a5[1];
    v7 = v5;
    g4_std::string::construct_copy(v5 + 24, a5 + 2);
    g4_std::string::construct_copy(v7 + 28, a5 + 3);
    v5 = v7;
  }
  v8 = v5;
  sub_1904970(v9, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique  (binary VA: 0x14a5950)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  int v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v3[4] >= v4 )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      (uint32_t *)(a3));
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( v7[4] < *a3 )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique  (binary VA: 0x14a5a30)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Gaia::LoginCredentials_struct>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v5,
        v5,
        (uint32_t *)(a4));
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          a3,
          a3,
          (uint32_t *)(a4));
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        v6,
        (uint32_t *)(v9));
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v8,
      v8,
      (uint32_t *)(a4));
  else
    g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      (uint32_t *)(a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert  (binary VA: 0x14a5bc0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,gaia::BaseServiceManager::Credentials>,std::_Select1st<std::pair<std::string const,gaia::BaseServiceManager::Credentials>>,std::less<std::string>,std::allocator<std::pair<std::string const,gaia::BaseServiceManager::Credentials>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert(int *a1, int a2, int a3, int a4, int a5)
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
    v8 = *(uint32_t *)(*(uint32_t *)a5 - 12);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v14 = n;
    if ( n > v8 )
      n = *(uint32_t *)(*(uint32_t *)a5 - 12);
    v10 = memcmp(*(const void **)a5, *(const void **)(a4 + 16), n);
    v11 = v8 - v14;
    if ( v10 != 0 )
      v11 = v10;
    v5 = v11 >> 31;
  }
  v6 = opNew(0x18u);
  if ( v6 != -16 )
  {
    v12 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    v6 = v12;
    *(uint32_t *)(v12 + 20) = *(uint32_t *)(a5 + 4);
  }
  v13 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert_unique  (binary VA: 0x14a5cb0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,gaia::BaseServiceManager::Credentials>,std::_Select1st<std::pair<std::string const,gaia::BaseServiceManager::Credentials>>,std::less<std::string>,std::allocator<std::pair<std::string const,gaia::BaseServiceManager::Credentials>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert_unique(int a1, int a2, void **a3)
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
  typedef size_t _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef void *_g4_t_s1;
  typedef int _g4_t_v23[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_s1)) > _g4_s4 ? (24u + sizeof(_g4_t_s1)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);

  if ( *(uint32_t *)(a2 + 8) == 0 )
  {
    v11 = a2 + 4;
    goto LABEL_17;
  }
  v3 = *(uint32_t *)(a2 + 8);
  s1 = *a3;
  v4 = *((uint32_t *)*a3 - 3);
  while ( 1 )
  {
    v6 = *(uint32_t **)(v3 + 16);
    v7 = *(v6 - 3);
    n = v7;
    v19 = v3;
    if ( v4 <= v7 )
      n = v4;
    v18 = n;
    v9 = memcmp(s1, *(const void **)(v3 + 16), n);
    if ( v9 == 0 )
      v9 = v4 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v19 + 8);
    v21 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = *(uint32_t *)(v19 + 12);
  v21 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v19;
  v12 = v10;
  v13 = v18;
  v14 = v19;
  if ( v21 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( v11 == *(uint32_t *)(a2 + 12) )
  {
    g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert(
      v23,
      a2,
      0,
      v11,
      (int)(uintptr_t)(a3));
  }
  else
  {
    v14 = sub_19048F0(v11);
    s1 = *a3;
    v4 = *((uint32_t *)*a3 - 3);
    v12 = *(uint32_t **)(v14 + 16);
    v13 = v4;
    v7 = *(v12 - 3);
    if ( v7 <= v4 )
      v13 = *(v12 - 3);
LABEL_12:
    v20 = v14;
    v15 = v7 - v4;
    v16 = memcmp(v12, s1, v13);
    if ( v16 != 0 )
      v15 = v16;
    if ( v15 >= 0 )
    {
      *(uint32_t *)a1 = v20;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert(
      v23,
      a2,
      0,
      v11,
      (int)(uintptr_t)(a3));
  }
  *(uint32_t *)a1 = v23[0];
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert_unique  (binary VA: 0x14a5e30)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,gaia::BaseServiceManager::Credentials>,std::_Select1st<std::pair<std::string const,gaia::BaseServiceManager::Credentials>>,std::less<std::string>,std::allocator<std::pair<std::string const,gaia::BaseServiceManager::Credentials>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert_unique(int *a1, int *a2, int a3, const void **a4)
{
  size_t v4;
  size_t n;
  size_t v6;
  int v7;
  int v8;
  const void **v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  size_t v18;
  int v19;
  int v20;
  int v21;
  size_t v22;
  size_t v23;
  size_t v24;
  int v25;
  int v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef void *_g4_t_v30;
  typedef const void **_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef void *_g4_t_s1;
  typedef int _g4_t_v34[5];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v27)) > _g4_s0 ? (12u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v28)) > _g4_s1 ? (16u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v29)) > _g4_s2 ? (36u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v30)) > _g4_s3 ? (44u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v31)) > _g4_s4 ? (44u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v32)) > _g4_s5 ? (44u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_s1)) > _g4_s6 ? (48u + sizeof(_g4_t_s1)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v34)) > _g4_s7 ? (56u + sizeof(_g4_t_v34)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);

  if ( (int *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v21 = a2[4];
      v22 = *(uint32_t *)(*(uint32_t *)(v21 + 16) - 12);
      v23 = *((uint32_t *)*a4 - 3);
      v24 = v22;
      if ( v23 <= v22 )
        v24 = *((uint32_t *)*a4 - 3);
      v25 = v22 - v23;
      v26 = memcmp(*(const void **)(v21 + 16), *a4, v24);
      if ( v26 == 0 )
        v26 = v25;
      if ( v26 < 0 )
      {
        v27 = v21;
        v28 = (int)(uintptr_t)(a4);
        goto LABEL_36;
      }
    }
LABEL_33:
    g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert_unique(
      (int)(uintptr_t)(v34),
      (int)(uintptr_t)(a2),
      (void **)a4);
    *a1 = v34[0];
    return a1;
  }
  s1 = (void *)*a4;
  v4 = *((uint32_t *)*a4 - 3);
  n = v4;
  v6 = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
  v30 = *(void **)(a3 + 16);
  if ( v6 <= v4 )
    n = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
  v29 = n;
  v7 = memcmp(s1, *(const void **)(a3 + 16), n);
  if ( v7 == 0 )
    v7 = v4 - v6;
  if ( v7 < 0 )
  {
    v8 = a2[3];
    if ( v8 == a3 )
    {
      g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v8,
        a2[3],
        (int)(uintptr_t)(a4));
      return a1;
    }
    v9 = (const void **)sub_1904940(a3);
    v10 = v4;
    v11 = *((uint32_t *)v9[4] - 3);
    v31 = v9;
    if ( v11 <= v4 )
      v10 = *((uint32_t *)v9[4] - 3);
    v12 = v11 - v4;
    v13 = memcmp(v9[4], s1, v10);
    if ( v13 != 0 )
      v12 = v13;
    if ( v12 < 0 )
    {
      v28 = (int)(uintptr_t)(a4);
      if ( v31[3] != nullptr )
      {
        g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          a3,
          a3,
          (int)(uintptr_t)(a4));
        return a1;
      }
      v27 = (int)(uintptr_t)(v31);
LABEL_36:
      g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        v27,
        v28);
      return a1;
    }
    goto LABEL_33;
  }
  v15 = v6 - v4;
  v16 = memcmp(v30, s1, v29);
  if ( v16 != 0 )
    v15 = v16;
  if ( v15 >= 0 )
  {
    *a1 = a3;
    return a1;
  }
  if ( a2[4] == a3 )
  {
    g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a2[4],
      (int)(uintptr_t)(a4));
    return a1;
  }
  v17 = sub_19048E0(a3);
  v18 = v4;
  v32 = *(void **)(*(uint32_t *)(v17 + 16) - 12);
  if ( (unsigned int)(uintptr_t)(v32) <= v4 )
    v18 = *(uint32_t *)(*(uint32_t *)(v17 + 16) - 12);
  v19 = memcmp(s1, *(const void **)(v17 + 16), v18);
  v20 = v4 - (uint32_t)(uintptr_t)(v32);
  if ( v19 != 0 )
    v20 = v19;
  if ( v20 >= 0 )
    goto LABEL_33;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v17,
      v17,
      (int)(uintptr_t)(a4));
  else
    g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      (int)(uintptr_t)(a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert  (binary VA: 0x14a60f0)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,std::string>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,std::string>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,std::string>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int v7;
  int v8;
  char v9;

  v9 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v9 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x18u);
  if ( v5 != -16 )
  {
    *(uint32_t *)(v5 + 16) = *a5;
    v7 = v5;
    g4_std::string::construct_copy(v5 + 20, a5 + 1);
    v5 = v7;
  }
  v8 = v5;
  sub_1904970(v9, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert_unique  (binary VA: 0x14a61d0)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,std::string>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,std::string>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,std::string>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  int v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v3[4] >= v4 )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      (uint32_t *)(a3));
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( v7[4] < *a3 )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert_unique  (binary VA: 0x14a62b0)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,std::string>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,std::string>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,std::string>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v5,
        v5,
        (uint32_t *)(a4));
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          a3,
          a3,
          (uint32_t *)(a4));
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        v6,
        (uint32_t *)(v9));
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v8,
      v8,
      (uint32_t *)(a4));
  else
    g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      (uint32_t *)(a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert  (binary VA: 0x14a6440)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>>>::_M_insert_
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  char *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  char v16;

  v16 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v16 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x20u);
  v6 = (uint32_t *)v5;
  if ( v5 != -16 )
  {
    v7 = 0;
    *(uint32_t *)(v5 + 16) = *a5;
    v8 = 0;
    v9 = (a5[2] - a5[1]) >> 2;
    v6[5] = 0;
    v10 = -1431655765 * v9;
    v6[6] = 0;
    v6[7] = 0;
    if ( -1431655765 * v9 != 0 )
    {
      if ( v10 > 0x15555555 )
        sub_18FFEE0(v10, v9);
      v7 = 4 * v9;
      v8 = opNew(4 * v9);
    }
    v6[5] = v8;
    v6[6] = v8;
    v6[7] = v8 + v7;
    v11 = (char *)a5[2];
    v12 = (char *)a5[1];
    if ( v11 != v12 )
    {
      v13 = (char *)a5[1];
      v14 = (uint32_t *)v8;
      do
      {
        if ( v14 != nullptr )
        {
          *v14 = *(uint32_t *)v13;
          v14[1] = *((uint32_t *)v13 + 1);
          v14[2] = *((uint32_t *)v13 + 2);
        }
        v13 += 12;
        v14 += 3;
      }
      while ( v11 != v13 );
      v8 += 4 * ((unsigned int)(v11 - (v12 + 12)) >> 2) + 12;
    }
    v6[6] = v8;
  }
  sub_1904970(v16, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert_unique  (binary VA: 0x14a65a0)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  uint32_t v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v3[4] )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      (uint32_t *)(a3));
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( *a3 > v7[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert_unique  (binary VA: 0x14a6680)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert(
        (uint32_t *)(a1),
        (int)(uintptr_t)(a2),
        v5,
        v5,
        (uint32_t *)(a4));
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert(
          (uint32_t *)(a1),
          (int)(uintptr_t)(a2),
          a3,
          a3,
          (uint32_t *)(a4));
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert(
        (uint32_t *)(a1),
        (int)(uintptr_t)(a2),
        0,
        v6,
        (uint32_t *)(v9));
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert(
      (uint32_t *)(a1),
      (int)(uintptr_t)(a2),
      v8,
      v8,
      (uint32_t *)(a4));
  else
    g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert(
      (uint32_t *)(a1),
      (int)(uintptr_t)(a2),
      0,
      a3,
      (uint32_t *)(a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert  (binary VA: 0x14a6970)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>>>::_M_insert_
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  char *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  char v16;

  v16 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v16 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x20u);
  v6 = (uint32_t *)v5;
  if ( v5 != -16 )
  {
    v7 = 0;
    *(uint32_t *)(v5 + 16) = *a5;
    v8 = 0;
    v9 = (a5[2] - a5[1]) >> 2;
    v6[5] = 0;
    v10 = -1431655765 * v9;
    v6[6] = 0;
    v6[7] = 0;
    if ( -1431655765 * v9 != 0 )
    {
      if ( v10 > 0x15555555 )
        sub_18FFEE0(v10, v9);
      v7 = 4 * v9;
      v8 = opNew(4 * v9);
    }
    v6[5] = v8;
    v6[6] = v8;
    v6[7] = v8 + v7;
    v11 = (char *)a5[2];
    v12 = (char *)a5[1];
    if ( v11 != v12 )
    {
      v13 = (char *)a5[1];
      v14 = (uint32_t *)v8;
      do
      {
        if ( v14 != nullptr )
        {
          *v14 = *(uint32_t *)v13;
          v14[1] = *((uint32_t *)v13 + 1);
          v14[2] = *((uint32_t *)v13 + 2);
        }
        v13 += 12;
        v14 += 3;
      }
      while ( v11 != v13 );
      v8 += 4 * ((unsigned int)(v11 - (v12 + 12)) >> 2) + 12;
    }
    v6[6] = v8;
  }
  sub_1904970(v16, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert_unique  (binary VA: 0x14a6ad0)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  uint32_t v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v3[4] )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      (uint32_t *)(a3));
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( *a3 > v7[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert_unique  (binary VA: 0x14a6bb0)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert(
        (uint32_t *)(a1),
        (int)(uintptr_t)(a2),
        v5,
        v5,
        (uint32_t *)(a4));
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert(
          (uint32_t *)(a1),
          (int)(uintptr_t)(a2),
          a3,
          a3,
          (uint32_t *)(a4));
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert(
        (uint32_t *)(a1),
        (int)(uintptr_t)(a2),
        0,
        v6,
        (uint32_t *)(v9));
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert(
      (uint32_t *)(a1),
      (int)(uintptr_t)(a2),
      v8,
      v8,
      (uint32_t *)(a4));
  else
    g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert(
      (uint32_t *)(a1),
      (int)(uintptr_t)(a2),
      0,
      a3,
      (uint32_t *)(a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert  (binary VA: 0x14a6fc0)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>>>::_M_insert_
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  char *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  char v16;

  v16 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v16 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x20u);
  v6 = (uint32_t *)v5;
  if ( v5 != -16 )
  {
    v7 = 0;
    *(uint32_t *)(v5 + 16) = *a5;
    v8 = 0;
    v9 = (a5[2] - a5[1]) >> 2;
    v6[5] = 0;
    v10 = -1431655765 * v9;
    v6[6] = 0;
    v6[7] = 0;
    if ( -1431655765 * v9 != 0 )
    {
      if ( v10 > 0x15555555 )
        sub_18FFEE0(v10, v9);
      v7 = 4 * v9;
      v8 = opNew(4 * v9);
    }
    v6[5] = v8;
    v6[6] = v8;
    v6[7] = v8 + v7;
    v11 = (char *)a5[2];
    v12 = (char *)a5[1];
    if ( v11 != v12 )
    {
      v13 = (char *)a5[1];
      v14 = (uint32_t *)v8;
      do
      {
        if ( v14 != nullptr )
        {
          *v14 = *(uint32_t *)v13;
          v14[1] = *((uint32_t *)v13 + 1);
          v14[2] = *((uint32_t *)v13 + 2);
        }
        v13 += 12;
        v14 += 3;
      }
      while ( v11 != v13 );
      v8 += 4 * ((unsigned int)(v11 - (v12 + 12)) >> 2) + 12;
    }
    v6[6] = v8;
  }
  sub_1904970(v16, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert_unique  (binary VA: 0x14a7120)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  uint32_t v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v3[4] )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      (uint32_t *)(a3));
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( *a3 > v7[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert_unique  (binary VA: 0x14a7200)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<std::string>::SCallback>>>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert(
        (uint32_t *)(a1),
        (int)(uintptr_t)(a2),
        v5,
        v5,
        (uint32_t *)(a4));
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert(
          (uint32_t *)(a1),
          (int)(uintptr_t)(a2),
          a3,
          a3,
          (uint32_t *)(a4));
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert(
        (uint32_t *)(a1),
        (int)(uintptr_t)(a2),
        0,
        v6,
        (uint32_t *)(v9));
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert(
      (uint32_t *)(a1),
      (int)(uintptr_t)(a2),
      v8,
      v8,
      (uint32_t *)(a4));
  else
    g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert(
      (uint32_t *)(a1),
      (int)(uintptr_t)(a2),
      0,
      a3,
      (uint32_t *)(a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_14A7660  (binary VA: 0x14a7660)
// Original: sub_14A7660
// ----------------------------------------------------------------------------
int * sub_14A7660()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (2u + sizeof(_g4_t_v5)) > _g4_s0 ? (2u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v9)) > _g4_s4 ? (16u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v10)) > _g4_s5 ? (20u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v11)) > _g4_s6 ? (24u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v12)) > _g4_s7 ? (28u + sizeof(_g4_t_v12)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 2u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  sub_1900D70(&unk_2119BB8);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119BB8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119BBC), "UNKNOWN", (int)(uintptr_t)(&v5));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119BBC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119BC0), "IMEI", (int)(uintptr_t)(&v5) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119BC0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119BC4), "HDIDFV", (int)(uintptr_t)(&v6));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119BC4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B50), "client_id", (int)(uintptr_t)(&v6) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B50, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B54), "country", (int)(uintptr_t)(&v6) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B54, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119BC8), "datacenter", (int)(uintptr_t)(&v6) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119BC8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B98), "global_device_id", (int)(uintptr_t)(&v7));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B98, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B58), "device_type", (int)(uintptr_t)(&v7) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B58, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B9C), "device_id_type", (int)(uintptr_t)(&v7) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B9C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B5C), "device_version", (int)(uintptr_t)(&v7) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B5C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B60), "source_version", (int)(uintptr_t)(&v8));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B60, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B64), "idfv", (int)(uintptr_t)(&v8) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B64, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B68), "idfa", (int)(uintptr_t)(&v8) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B68, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B6C), "aid", (int)(uintptr_t)(&v8) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B6C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B70), (char *)&off_1B6EB3F, (int)(uintptr_t)(&v9));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B70, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B74), "macw32", (int)(uintptr_t)(&v9) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B74, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B78), "hdidfv", (int)(uintptr_t)(&v9) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B78, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B7C), "imei", (int)(uintptr_t)(&v9) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B7C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B80), "udid", (int)(uintptr_t)(&v10));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B80, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B84), "sn", (int)(uintptr_t)(&v10) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B84, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&dword_2119B94), "gdid", (int)(uintptr_t)(&v10) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119B94, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B88), "phid", (int)(uintptr_t)(&v10) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B88, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119BA0), "username", (int)(uintptr_t)(&v11));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119BA0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119BA4), "password", (int)(uintptr_t)(&v11) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119BA4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119BA8), "credential_type", (int)(uintptr_t)(&v11) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119BA8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119BAC), "credentialsToLinkTo", (int)(uintptr_t)(&v11) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119BAC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119BB0), "if_exists", (int)(uintptr_t)(&v12));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119BB0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119BB4), "accountType", (int)(uintptr_t)(&v12) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119BB4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B8C), "X-GL-mimetype", (int)(uintptr_t)(&v12) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B8C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B90), "json", (int)(uintptr_t)(&v12) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B90, &unk_20D1280);
  dword_2119BCC = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2119BD0 = v0;
  dword_2119BD4 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2119BD8 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2119BDC = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2119BE0 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2119BE4 = (int)(uintptr_t)(&dword_20D3F88);
  dword_2119BE8 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119BE8, &unk_20D1280);
  dword_2119BEC = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119BEC, &unk_20D1280);
  dword_2119BF0 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119BF0, &unk_20D1280);
  dword_2119BF4 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119BF4, &unk_20D1280);
  dword_2119BF8 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119BF8, &unk_20D1280);
  dword_2119BFC = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119BFC, &unk_20D1280);
  dword_2119C00 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119C00, &unk_20D1280);
  dword_2119C04 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119C04, &unk_20D1280);
  dword_2119C08 = opNewArray(0x10u);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)&gaia::Gaia::s_InstanceMutex);
  __cxa_atexit((void (*)(void *))glwebtools::Mutex::Destroy, &gaia::Gaia::s_InstanceMutex, &unk_20D1280);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)&gaia::Gaia::s_CallbackRequestMutex);
  __cxa_atexit((void (*)(void *))glwebtools::Mutex::Destroy, &gaia::Gaia::s_CallbackRequestMutex, &unk_20D1280);
  gaia::Gaia::s_CallbackRequest = 0;
  *(uintptr_t *)(unk_2119B2C) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2119B30) = (uintptr_t)(0);
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_gaia_GaiaRequestCallback_6a5543::Destroy,
    &gaia::Gaia::s_CallbackRequest,
    &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_14A80C0  (binary VA: 0x14a80c0)
// Original: sub_14A80C0
// ----------------------------------------------------------------------------
void sub_14A80C0()
{
  typedef int _g4_t_v0;
  typedef uint8_t _g4_t_v1[4];
  typedef uint8_t _g4_t_v2[4];
  typedef void (**_g4_t_v3)(boost::exception_detail::error_info_injector<std::runtime_error> *);
  typedef uint8_t _g4_t_v4[4];
  typedef void (**_g4_t_v5)(boost::exception_detail::error_info_injector<std::runtime_error> *);
  typedef int _g4_t_v6;
  typedef const char *_g4_t_v7;
  typedef const char *_g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v0)) > _g4_s0 ? (7u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v1)) > _g4_s1 ? (12u + sizeof(_g4_t_v1)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v2)) > _g4_s2 ? (16u + sizeof(_g4_t_v2)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v3)) > _g4_s3 ? (20u + sizeof(_g4_t_v3)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v4)) > _g4_s4 ? (24u + sizeof(_g4_t_v4)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v5)) > _g4_s5 ? (28u + sizeof(_g4_t_v5)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v6)) > _g4_s6 ? (32u + sizeof(_g4_t_v6)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v7)) > _g4_s7 ? (36u + sizeof(_g4_t_v7)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v8)) > _g4_s8 ? (40u + sizeof(_g4_t_v8)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v9)) > _g4_s9 ? (44u + sizeof(_g4_t_v9)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 7u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 16u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 20u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v0) + 1, "sha1 too many bytes", (int)(uintptr_t)(&v0));
  sub_19042E0(v1, (char *)&v0 + 1);
  v3 = (void (**)(boost::exception_detail::error_info_injector<std::runtime_error> *))((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std::string::construct_copy(v4, v2);
  v6 = 0;
  v9 = 104;
  v5 = (void (**)(boost::exception_detail::error_info_injector<std::runtime_error> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209383C));
  v3 = (void (**)(boost::exception_detail::error_info_injector<std::runtime_error> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2093828));
  v7 = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
  v8 = "../../../../../lib/glitch/include/boost/uuid/sha1.hpp";
  std::terminate();
}

// ----------------------------------------------------------------------------
// Function: sub_14A8160  (binary VA: 0x14a8160)
// Original: sub_14A8160
// ----------------------------------------------------------------------------
int sub_14A8160(unsigned int **a1, int a2, int a3)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm0_8
  uint64_t v10; // rax
  int v12;
  uint64_t v13;

  v12 = a2;
  if ( a3 != a2 )
  {
    v13 = (unsigned int)(a3 - a2);
    do
    {
      v4 = *a1;
      v5 = 0;
      v6 = **a1;
      if ( v6 <= 0xADD0 )
      {
        v5 = v6 + 1;
      }
      else
      {
        do
        {
          v7 = *(double *)&v4[2 * v5 + 46927] + *(double *)&v4[2 * v5 + 1];
          if ( v7 >= 1.0 )
            v7 = v7 - 1.0;
          *(double *)&v4[2 * v5++ + 1] = v7;
        }
        while ( v5 != 21034 );
        do
        {
          v8 = *(double *)&v4[2 * v5 - 42067] + *(double *)&v4[2 * v5 + 1];
          if ( v8 >= 1.0 )
            v8 = v8 - 1.0;
          *(double *)&v4[2 * v5++ + 1] = v8;
        }
        while ( v5 != 44497 );
        LOWORD(v5) = 1;
        v6 = 0;
      }
      v9 = *(double *)&v4[2 * v6 + 1];
      *v4 = v5;
      v10 = (uint64_t)(v9 * 281474976710656.0) / (0x1000000000000LL / (v13 + 1));
    }
    while ( v13 < v10 );
    v12 += v10;
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: identifiers::GetCurrentHDIDFV  (binary VA: 0x14a82b0)
// Original: identifiers::GetCurrentHDIDFV
// ----------------------------------------------------------------------------
identifiers::Self * identifiers::GetCurrentHDIDFV(identifiers::Self *self)
{
  int v1;
  typedef uint8_t _g4_t_v3[7];
  typedef uint8_t _g4_t_v4[128];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (9u + sizeof(_g4_t_v3)) > _g4_s0 ? (9u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 9u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);

  memset(v4, 0, sizeof(v4));
  v4[0] = 48;
  if ( (uint8_t)DeviceUtils_GetHDIDFV((DeviceUtils::Self *)v4, &v3[3], 0x80u) != 0 )
  {
    if ( *(int *)&v3[3] <= 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "11111111-1111-1111-1111-111111111111", (int)(uintptr_t)(&v3[1]));
    }
    else
    {
      v1 = 128;
      if ( *(int *)&v3[3] <= 128 )
        v1 = *(uint32_t *)&v3[3];
      *(uint32_t *)&v3[3] = v1;
      sub_193A970((int)(uintptr_t)(self), v4, v1, (int)(uintptr_t)(&v3[2]));
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "00000000-0000-0000-0000-000000000000", (int)(uintptr_t)(v3));
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: identifiers::GetHDIDFVGeneratorVersion  (binary VA: 0x14a83b0)
// Original: identifiers::GetHDIDFVGeneratorVersion
// ----------------------------------------------------------------------------
identifiers::Self * identifiers::GetHDIDFVGeneratorVersion(identifiers::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "v1.0.0", (int)(uintptr_t)(&v2));
  return self;
}

// ----------------------------------------------------------------------------
// Function: identifiers::Convert_HDIDFV_to4IntsSeparatedBySpace  (binary VA: 0x14a8400)
// Original: identifiers::Convert_HDIDFV_to4IntsSeparatedBySpace
// ----------------------------------------------------------------------------
uint32_t * identifiers::Convert_HDIDFV_to4IntsSeparatedBySpace(uint32_t *a1)
{
  char *v1;
  int v2;
  char *src;
  int v4;
  void *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  void *v10;
  void *v11;
  char *v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef void *_g4_t_v20;
  typedef void *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef void *_g4_t_v27;
  typedef int (**_g4_t_v28)(int);
  typedef int _g4_t_v29;
  typedef uint32_t _g4_t_v30[7];
  typedef char _g4_t_v31[4];
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_v34[29];
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int (**_g4_t_v41)(int);
  typedef int _g4_t_v42;
  typedef int (**_g4_t_v43)(int);
  typedef uint32_t _g4_t_v44[3];
  typedef int _g4_t_v45;
  typedef void *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef char _g4_t_v49[4];
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t _g4_t_v52[29];
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v17)) > _g4_s3 ? (20u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v18)) > _g4_s4 ? (48u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v19)) > _g4_s5 ? (52u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v20)) > _g4_s6 ? (60u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v21)) > _g4_s7 ? (64u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v22)) > _g4_s8 ? (68u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v23)) > _g4_s9 ? (72u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v24)) > _g4_s10 ? (76u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v25)) > _g4_s11 ? (80u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v26)) > _g4_s12 ? (84u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v27)) > _g4_s13 ? (88u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v28)) > _g4_s14 ? (92u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v29)) > _g4_s15 ? (96u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v30)) > _g4_s16 ? (100u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_v31)) > _g4_s17 ? (128u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (132u + sizeof(_g4_t_v32)) > _g4_s18 ? (132u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v33)) > _g4_s19 ? (136u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v34)) > _g4_s20 ? (140u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (256u + sizeof(_g4_t_v35)) > _g4_s21 ? (256u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (257u + sizeof(_g4_t_v36)) > _g4_s22 ? (257u + sizeof(_g4_t_v36)) : _g4_s22,
    _g4_s24 = (260u + sizeof(_g4_t_v37)) > _g4_s23 ? (260u + sizeof(_g4_t_v37)) : _g4_s23,
    _g4_s25 = (264u + sizeof(_g4_t_v38)) > _g4_s24 ? (264u + sizeof(_g4_t_v38)) : _g4_s24,
    _g4_s26 = (268u + sizeof(_g4_t_v39)) > _g4_s25 ? (268u + sizeof(_g4_t_v39)) : _g4_s25,
    _g4_s27 = (272u + sizeof(_g4_t_v40)) > _g4_s26 ? (272u + sizeof(_g4_t_v40)) : _g4_s26,
    _g4_s28 = (276u + sizeof(_g4_t_v41)) > _g4_s27 ? (276u + sizeof(_g4_t_v41)) : _g4_s27,
    _g4_s29 = (280u + sizeof(_g4_t_v42)) > _g4_s28 ? (280u + sizeof(_g4_t_v42)) : _g4_s28,
    _g4_s30 = (284u + sizeof(_g4_t_v43)) > _g4_s29 ? (284u + sizeof(_g4_t_v43)) : _g4_s29,
    _g4_s31 = (288u + sizeof(_g4_t_v44)) > _g4_s30 ? (288u + sizeof(_g4_t_v44)) : _g4_s30,
    _g4_s32 = (300u + sizeof(_g4_t_v45)) > _g4_s31 ? (300u + sizeof(_g4_t_v45)) : _g4_s31,
    _g4_s33 = (304u + sizeof(_g4_t_v46)) > _g4_s32 ? (304u + sizeof(_g4_t_v46)) : _g4_s32,
    _g4_s34 = (308u + sizeof(_g4_t_v47)) > _g4_s33 ? (308u + sizeof(_g4_t_v47)) : _g4_s33,
    _g4_s35 = (312u + sizeof(_g4_t_v48)) > _g4_s34 ? (312u + sizeof(_g4_t_v48)) : _g4_s34,
    _g4_s36 = (316u + sizeof(_g4_t_v49)) > _g4_s35 ? (316u + sizeof(_g4_t_v49)) : _g4_s35,
    _g4_s37 = (320u + sizeof(_g4_t_v50)) > _g4_s36 ? (320u + sizeof(_g4_t_v50)) : _g4_s36,
    _g4_s38 = (324u + sizeof(_g4_t_v51)) > _g4_s37 ? (324u + sizeof(_g4_t_v51)) : _g4_s37,
    _g4_s39 = (328u + sizeof(_g4_t_v52)) > _g4_s38 ? (328u + sizeof(_g4_t_v52)) : _g4_s38,
    _g4_s40 = (444u + sizeof(_g4_t_v53)) > _g4_s39 ? (444u + sizeof(_g4_t_v53)) : _g4_s39,
    _g4_s41 = (445u + sizeof(_g4_t_v54)) > _g4_s40 ? (445u + sizeof(_g4_t_v54)) : _g4_s40,
    _g4_s42 = (448u + sizeof(_g4_t_v55)) > _g4_s41 ? (448u + sizeof(_g4_t_v55)) : _g4_s41,
    _g4_s43 = (452u + sizeof(_g4_t_v56)) > _g4_s42 ? (452u + sizeof(_g4_t_v56)) : _g4_s42,
    _g4_s44 = (456u + sizeof(_g4_t_v57)) > _g4_s43 ? (456u + sizeof(_g4_t_v57)) : _g4_s43,
    _g4_s45 = (460u + sizeof(_g4_t_v58)) > _g4_s44 ? (460u + sizeof(_g4_t_v58)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 132u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 136u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 256u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 257u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 260u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 264u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 268u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 272u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 276u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 280u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 284u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 288u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 300u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 304u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 308u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 312u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 316u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 320u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 324u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 328u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 444u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 445u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 448u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 452u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 456u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 460u);

  boost::algorithm::erase_all_copy<std::string,char [2]>(&v20);
  v1 = (char *)v20;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = nullptr;
  v2 = *((uint32_t *)v20 - 1);
  if ( v2 >= 0 )
  {
    sub_19397C0(&v20);
    v1 = (char *)v20;
    v2 = *((uint32_t *)v20 - 1);
  }
  src = v1;
  v4 = 0;
  while ( 1 )
  {
    if ( v2 >= 0 )
    {
      sub_19397C0(&v20);
      v1 = (char *)v20;
    }
    if ( src == &v1[*((uint32_t *)v1 - 3)] )
      break;
    v16 = (char *)sub_1938930(8, 0);
    memcpy(v16 + 12, src, 8u);
    if ( v16 != (char *)dword_213B808 )
    {
      *((uint32_t *)v16 + 2) = 0;
      *(uint32_t *)v16 = 8;
      v16[20] = 0;
    }
    sub_1900810(v34);
    v34[28] = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v34[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v40 = 0;
    v28 = (int (**)(int))(uintptr_t)(&off_20AADEC);
    *(int (***)(int))((char *)&v28 + (uint32_t)*(&off_20AADEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE00);
    v29 = 0;
    sub_19119D0((char *)&v28 + (uint32_t)(uintptr_t)(*(v28 - 3)), 0);
    memset(&v30[1], 0, 24);
    v28 = (int (**)(int))(uintptr_t)(&off_20AAE2C);
    v34[0] = (uint32_t)(uintptr_t)(&off_20AAE40);
    v30[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v31);
    v32 = 0;
    v30[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    sub_193A970((int)(uintptr_t)(&v33), v16 + 12, *(uint32_t *)v16, (int)(uintptr_t)(&v18) + 1);
    v32 = 8;
    sub_1931CD0(v30, v33, 0, 0);
    sub_19119D0(v34, v30);
    if ( v16 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v16 + 2, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v16);
    *(int (***)(int))((char *)&v28 + (uint32_t)(uintptr_t)(*(v28 - 3)) + 12) = (int (**)(int))(*(int *)((uint8_t *)&v28 + (uint32_t)(uintptr_t)(*(v28 - 3)) + 12)
                                                                                              & 0xFFFFFFB5
                                                                                              | 8);
    sub_1915250(&v28, &v24 + v4);
    v28 = (int (**)(int))(uintptr_t)(&off_20AAE2C);
    v34[0] = (uint32_t)(uintptr_t)(&off_20AAE40);
    v30[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v5 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    ++v4;
    v30[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v31);
    v28 = (int (**)(int))(uintptr_t)(&off_20AADEC);
    *(int (***)(int))((char *)&v28 + (uint32_t)*(&off_20AADEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE00);
    v29 = 0;
    v34[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v34);
    v1 = (char *)v20;
    src += 8;
    v2 = *((uint32_t *)v20 - 1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), (char *)&unk_1B15112, (int)(uintptr_t)(&v18));
  sub_1900810(v52);
  v52[28] = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v52[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v58 = 0;
  v41 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v41 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v42 = 0;
  sub_19119D0((char *)&v41 + (uint32_t)(uintptr_t)(*(v41 - 3)), 0);
  v43 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v44[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v44[-1] + (uint32_t)(uintptr_t)(*(v43 - 3)), 0);
  v41 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v41 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v44[1] = 0;
  v41 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v44[2] = 0;
  v45 = 0;
  v52[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v46 = nullptr;
  v47 = 0;
  v43 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v48 = 0;
  v44[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v49);
  v50 = 0;
  v44[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v51), v21, *((uint32_t *)v21 - 3), (int)(uintptr_t)(&v19));
  v50 = 24;
  sub_1931CD0(v44, v51, 0, 0);
  sub_19119D0(v52, v44);
  v6 = (char *)v21 - 12;
  if ( (char *)v21 - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v21 - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v17 = v27;
  v14 = v26;
  v15 = v25;
  v7 = (int)(uintptr_t)(sub_192D8B0(&v43, v24));
  g4_std_compat::ostream_write(v7, " ", 1);
  v8 = (int)(uintptr_t)(sub_192D8B0(v7, v15));
  g4_std_compat::ostream_write(v8, " ", 1);
  v9 = (int)(uintptr_t)(sub_192D8B0(v8, v14));
  g4_std_compat::ostream_write(v9, " ", 1);
  sub_192D8B0(v9, v17);
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v47 == 0 )
  {
    g4_std::string::assign_str(a1, &v51);
    goto LABEL_16;
  }
  if ( v47 > (unsigned int)v45 )
  {
    sub_11A9950(&v23, v46, (uint8_t *)v47);
    g4_std::string::assign_str(a1, &v23);
    v10 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      goto LABEL_21;
    }
  }
  else
  {
    sub_11A9950(&v22, v46, (uint8_t *)v45);
    g4_std::string::assign_str(a1, &v22);
    v10 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
LABEL_21:
      g4_std::string::Rep::M_destroy(v10);
    }
  }
LABEL_16:
  v41 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v52[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v43 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v44[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v11 = (void *)(v51 - 12);
  if ( (uint32_t *)(v51 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v44[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v49);
  v41 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v41 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v43 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v44[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v41 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v41 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v42 = 0;
  v52[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v52);
  v12 = (char *)v20 - 12;
  if ( (char *)v20 - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v20 - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: identifiers::GetCurrentHDIDFV_to4IntsSeparatedBySpace  (binary VA: 0x14a8d70)
// Original: identifiers::GetCurrentHDIDFV_to4IntsSeparatedBySpace
// ----------------------------------------------------------------------------
identifiers::Self * identifiers::GetCurrentHDIDFV_to4IntsSeparatedBySpace(identifiers::Self *self)
{
  void *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  identifiers::GetCurrentHDIDFV((identifiers::Self *)&v3);
  identifiers::Convert_HDIDFV_to4IntsSeparatedBySpace((uint32_t *)(self));
  v1 = (void *)(v3 - 12);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: identifiers::GenerateHDIDFV  (binary VA: 0x14a8e00)
// Original: identifiers::GenerateHDIDFV
// ----------------------------------------------------------------------------
identifiers::Self * identifiers::GenerateHDIDFV(identifiers::Self *self)
{
  uint32_t *v1;
  int v2;
  int v3;
  unsigned int *v4;
  uint8_t *v5;
  unsigned int v6;
  int v7;
  uint32_t *v8;
  int v9;
  unsigned int *v10;
  char *v11;
  uint32_t *v12;
  bool v13;
  typedef char *_g4_t_modes;
  typedef unsigned int *_g4_t_v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18[2];
  typedef uint8_t _g4_t_v19[6];
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef unsigned int *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int (**_g4_t_v24)(int);
  typedef uint32_t _g4_t_v25[2];
  typedef int _g4_t_v26;
  typedef FILE *_g4_t_stream;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[4];
  typedef int _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t _g4_t_v34[29];
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (4u + sizeof(_g4_t_modes)) > _g4_s0 ? (4u + sizeof(_g4_t_modes)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v16)) > _g4_s1 ? (48u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (75u + sizeof(_g4_t_v17)) > _g4_s2 ? (75u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v18)) > _g4_s3 ? (76u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v19)) > _g4_s4 ? (84u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (90u + sizeof(_g4_t_v20)) > _g4_s5 ? (90u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v21)) > _g4_s6 ? (92u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v22)) > _g4_s7 ? (100u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v23)) > _g4_s8 ? (104u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v24)) > _g4_s9 ? (108u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v25)) > _g4_s10 ? (112u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v26)) > _g4_s11 ? (120u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_stream)) > _g4_s12 ? (124u + sizeof(_g4_t_stream)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v28)) > _g4_s13 ? (128u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (132u + sizeof(_g4_t_v29)) > _g4_s14 ? (132u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (136u + sizeof(_g4_t_v30)) > _g4_s15 ? (136u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (140u + sizeof(_g4_t_v31)) > _g4_s16 ? (140u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (144u + sizeof(_g4_t_v32)) > _g4_s17 ? (144u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (148u + sizeof(_g4_t_v33)) > _g4_s18 ? (148u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v34)) > _g4_s19 ? (152u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (268u + sizeof(_g4_t_v35)) > _g4_s20 ? (268u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (269u + sizeof(_g4_t_v36)) > _g4_s21 ? (269u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (272u + sizeof(_g4_t_v37)) > _g4_s22 ? (272u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (276u + sizeof(_g4_t_v38)) > _g4_s23 ? (276u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (280u + sizeof(_g4_t_v39)) > _g4_s24 ? (280u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (284u + sizeof(_g4_t_v40)) > _g4_s25 ? (284u + sizeof(_g4_t_v40)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_modes &modes = *reinterpret_cast<_g4_t_modes *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 75u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 90u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);
  _g4_t_stream &stream = *reinterpret_cast<_g4_t_stream *>(_g4_sf + 124u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 128u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 132u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 136u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 140u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 144u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 148u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 152u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 268u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 269u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 272u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 276u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 280u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 284u);

  v16 = (unsigned int *)opNew(0x56E8Cu);
  v18[0] = 331;
  v22 = (unsigned int *)v18;
  boost::random::detail::seed_array_real<48,44497u,boost::random::detail::generator_seed_seq<boost::random::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>>,double>(
    &v22,
    (int)(uintptr_t)(v16 + 1));
  *v16 = 44497;
  v1 = (uint32_t *)opNew(0x10u);
  v1[1] = 1;
  v1[2] = 1;
  *v1 = ((uint32_t)(uintptr_t)&off_2095B48);
  v1[3] = (uint32_t)(uintptr_t)(v16);
  v26 = 5;
  stream = fopen("/dev/urandom", "rb");
  v2 = v26;
  v18[0] = (int)(uintptr_t)(&v22);
  v3 = v26 + 1;
  if ( v26 > 4 )
  {
    boost::uuids::detail::seed_rng::sha1_random_digest_((FILE **)&v22);
    v3 = 1;
    v2 = 0;
  }
  v4 = (&v22)[v2];
  v26 = v3;
  v18[1] = (int)(uintptr_t)(v4);
  boost::random::detail::fill_array_real<48,44497u,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng::Self>,double>(
    v18,
    0,
    0,
    (int)(uintptr_t)(v16 + 1));
  *v16 = 44497;
  if ( stream != nullptr )
    fclose(stream);
  v22 = v16;
  v5 = v19;
  v6 = sub_14A8160(&v22, 0, -1);
  v7 = 0;
  while ( 1 )
  {
    *v5++ = v6 >> (8 * v7);
    if ( v5 == (uint8_t *)&v22 )
      break;
    if ( ++v7 == 4 )
    {
      LOBYTE(v7) = 0;
      v22 = v16;
      v6 = sub_14A8160(&v22, v7, -1);
      v7 = 0;
    }
  }
  v21 = v21 & 0x3F | 0x80;
  v22 = (unsigned int *)v18;
  v20 = v20 & 0xF | 0x40;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  v23 = (char *)v18 + 2;
  sub_1900810(v34);
  v34[28] = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v34[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v24 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)*(&off_20AAE6C - 3) + (uint32_t)(uintptr_t)(v5) + 8) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)&v25[-1] + (uint32_t)(uintptr_t)(*(v24 - 3)), 0);
  v25[1] = 0;
  v26 = 0;
  v24 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  stream = nullptr;
  v28 = 0;
  v34[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v29 = 0;
  v30 = 0;
  v25[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v31);
  v33 = &dword_213B814;
  v25[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v32 = 16;
  sub_19119D0(v34, v25);
  v8 = (uint32_t *)boost::uuids::op_char_std_char_traits_char(&v24, v19);
  v9 = *(uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 12) + 20);
  v10 = *((unsigned int **)v5 + 7);
  v22 = v10;
  v11 = *((char **)v5 + 8);
  v23 = v11;
  if ( (v9 & 5) != 0 )
    std::terminate();
  sub_193A9B0((int)(uintptr_t)(self), 0, *(uint32_t *)(*(uint32_t *)self - 12), v10, v11 - (char *)v10);
  v24 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v34[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v25[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v12 = v33 - 3;
  if ( v33 - 3 != dword_213B808 && __sync_fetch_and_add(v33 - 1, 0xFFFFFFFF) <= 0 )
  {
    modes = &v17;
    g4_std::string::Rep::M_destroy(v12);
  }
  v25[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v31);
  v24 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v25[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  v34[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v34);
  v13 = v1[1]-- == 1;
  if ( v13 )
  {
    G4_VCALL<void>(v1, 8, modes);
    v13 = v1[2]-- == 1;
    if ( v13 )
      G4_VCALL<void>(v1, 12);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: boost::uuids::op_char_std_char_traits_char  (binary VA: 0x14a9870)
// Original: boost::uuids::operator<<<char,std::char_traits<char>>
// ----------------------------------------------------------------------------
uint32_t * boost::uuids::op_char_std_char_traits_char(uint32_t *a1, uint8_t *a2)
{
  int v2;
  char *v3;
  char *v4;
  int v5;
  uint8_t *v7;
  uint8_t *v8;
  char v9;
  char *v10;
  int v11;
  char *v12;
  int i;
  char *v14;
  uint8_t *v15;
  char v16;
  uint8_t *v17;
  int v18;
  char v19;
  int v20;
  uint8_t *v21;
  int j;
  uint8_t *v23;
  char v24;
  typedef int _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34[4];
  typedef uint32_t *_g4_t_v35;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v26)) > _g4_s1 ? (4u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v27)) > _g4_s2 ? (8u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (18u + sizeof(_g4_t_v28)) > _g4_s3 ? (18u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v29)) > _g4_s4 ? (19u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v30)) > _g4_s5 ? (20u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v31)) > _g4_s6 ? (24u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v32)) > _g4_s7 ? (28u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (39u + sizeof(_g4_t_v33)) > _g4_s8 ? (39u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v34)) > _g4_s9 ? (40u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v35)) > _g4_s10 ? (44u + sizeof(_g4_t_v35)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 18u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 19u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 39u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);

  v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  v27 = v3;
  v30 = *((uint32_t *)v3 + 3);
  if ( v3[117] != 0 )
  {
    v29 = v3[116];
  }
  else
  {
    v7 = *((uint8_t **)v3 + 31);
    if ( v7 == nullptr )
      goto LABEL_58;
    if ( v7[28] != 0 )
    {
      v29 = v7[61];
    }
    else
    {
      sub_18FFC70(*((uint32_t *)v3 + 31));
      v29 = G4_VCALL<int>(v7, 24, 32);
    }
    v27[116] = v29;
    v27[117] = 1;
  }
  sub_192C8D0(v34, a1);
  if ( v34[0] != 0 )
  {
    v10 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v11 = *((uint32_t *)v10 + 2);
    *((uint32_t *)v10 + 2) = 0;
    v32 = v11;
    v12 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v31 = *((uint32_t *)v12 + 3);
    if ( v12[117] != 0 )
    {
      v28 = v12[116];
    }
    else
    {
      v21 = *((uint8_t **)v12 + 31);
      if ( v21 == nullptr )
        goto LABEL_58;
      if ( v21[28] != 0 )
      {
        v28 = v21[61];
      }
      else
      {
        sub_18FFC70(*((uint32_t *)v12 + 31));
        v28 = G4_VCALL<int>(v21, 24, 32);
      }
      v12[117] = 1;
      v12[116] = v28;
    }
    if ( (v31 & 0x90) != 0 && v32 > 36 )
    {
      for ( i = 36; i != v32; ++i )
      {
        v33 = v28;
        g4_std_compat::ostream_write(a1, &v33, 1);
      }
    }
    *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12) = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12)
                                                         & 0xFFFFFFB5
                                                         | 8;
    v14 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v15 = *((uint8_t **)v14 + 31);
    if ( v15 == nullptr )
LABEL_58:
      sub_18FFF30(v2);
    if ( v15[28] != 0 )
    {
      v16 = v15[77];
    }
    else
    {
      sub_18FFC70(*((uint32_t *)v14 + 31));
      v16 = G4_VCALL<int>(v15, 24, 48);
      v14 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    }
    if ( v14[117] == 0 )
    {
      v23 = *((uint8_t **)v14 + 31);
      if ( v23 == nullptr )
        goto LABEL_58;
      if ( v23[28] != 0 )
      {
        v24 = v23[61];
      }
      else
      {
        v26 = v16;
        sub_18FFC70(v23);
        v24 = G4_VCALL<int>(v23, 24, 32);
        v16 = v26;
      }
      v14[116] = v24;
      v14[117] = 1;
    }
    v17 = a2;
    v14[116] = v16;
    v18 = 0;
    do
    {
      *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 8) = 2;
      sub_192D8B0(a1, *v17);
      if ( v18 == 5 || v18 == 3 || v18 == 9 || v18 == 7 )
      {
        v20 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
        if ( v20 == 0 )
          goto LABEL_58;
        if ( *(uint8_t *)(v20 + 28) != 0 )
        {
          v19 = *(uint8_t *)(v20 + 74);
        }
        else
        {
          v25 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
          sub_18FFC70(v25);
          v19 = G4_VCALL<int>(v25, 24, 45);
        }
        v33 = v19;
        g4_std_compat::ostream_write(a1, &v33, 1);
      }
      ++v17;
      ++v18;
    }
    while ( v17 != a2 + 16 );
    if ( (v31 & 0x20) != 0 && v32 > 36 )
    {
      for ( j = 36; j != v32; ++j )
      {
        v33 = v28;
        g4_std_compat::ostream_write(a1, &v33, 1);
      }
    }
    *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 8) = 0;
  }
  v4 = (char *)v35 + *(uint32_t *)(*v35 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 30);
    if ( v5 != 0 && (*(int (**)(uint32_t))(*(uint32_t *)v5 + 24))(*((uint32_t *)v4 + 30)) == -1 )
      sub_1911530((char *)v35 + *(uint32_t *)(*v35 - 12), *(uint32_t *)((char *)v35 + *(uint32_t *)(*v35 - 12) + 20) | 1);
  }
  if ( v27[117] == 0 )
  {
    v8 = *((uint8_t **)v27 + 31);
    if ( v8 != nullptr )
    {
      if ( v8[28] != 0 )
      {
        v9 = v8[61];
      }
      else
      {
        sub_18FFC70(*((uint32_t *)v27 + 31));
        v9 = G4_VCALL<int>(v8, 24, 32);
      }
      v27[116] = v9;
      v27[117] = 1;
      goto LABEL_10;
    }
    goto LABEL_58;
  }
LABEL_10:
  v27[116] = v29;
  *((uint32_t *)v27 + 3) = v30;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_14A9E30  (binary VA: 0x14a9e30)
// Original: sub_14A9E30
// ----------------------------------------------------------------------------
int sub_14A9E30()
{
  int v1[7];

  sub_1900D70(&unk_2119C1C);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119C1C, &unk_20D1280);
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&identifiers::k_hdidfvFileStorageWP8), "GTkI", (int)(uintptr_t)(v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &identifiers::k_hdidfvFileStorageWP8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&identifiers::k_hdidfvTmpFileStorageWP8), "GTkITMP", (int)(uintptr_t)(v1));
  return __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &identifiers::k_hdidfvTmpFileStorageWP8, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_14AA000  (binary VA: 0x14aa000)
// Original: sub_14AA000
// ----------------------------------------------------------------------------
int sub_14AA000(int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4;
  int v6;
  int result;
  int v8;
  int v9;

  v4 = a2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( a2 != 0 )
  {
    if ( a2 > 0x3FFFFFFF )
      sub_18FFEE0(a3, a2);
    v8 = 4 * a2;
    v6 = opNew(4 * a2);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = v6 + v8;
    do
    {
      if ( v6 != 0 )
      {
        v9 = v6;
        g4_std::string::construct_copy(v6, a4);
        v6 = v9;
      }
      v6 += 4;
      --v4;
    }
    while ( v4 != 0 );
  }
  else
  {
    a1[2] = 0;
  }
  result = a1[2];
  a1[1] = result;
  return result;
}


