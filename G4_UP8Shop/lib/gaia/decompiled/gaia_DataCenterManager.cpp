#include "Core/Utils/DecompTypes.h"
#include "gaia_DataCenterManager.h"

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::Destroy  (binary VA: 0x14d6310)
// Original: gaia::DataCenterManager::~DataCenterManager
// ----------------------------------------------------------------------------
void gaia::DataCenterManager::Destroy(gaia::DataCenterManager::Self *self)
{
  glwebtools::Mutex::Self *v1;
  glwebtools::Mutex::Self *v2;
  glwebtools::Mutex::Self *v3;

  v1 = *((glwebtools::Mutex::Self **)self + 4);
  v2 = *((glwebtools::Mutex::Self **)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095EB8);
  if ( v1 != v2 )
  {
    do
    {
      v3 = v2;
      v2 = (glwebtools::Mutex::Self *)((char *)v2 + 32);
      gaia::DataCenterConfig::Destroy(v3);
    }
    while ( v1 != v2 );
    v2 = *((glwebtools::Mutex::Self **)self + 3);
  }
  if ( v2 != nullptr )
    opDelete(v2);
  glwebtools::Mutex::Destroy((gaia::DataCenterManager::Self *)((char *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096008);
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::Destroy_ea14d6380  (binary VA: 0x14d6380)
// Original: gaia::DataCenterManager::~DataCenterManager
// ----------------------------------------------------------------------------
void gaia::DataCenterManager::Destroy_ea14d6380(gaia::DataCenterManager::Self *self)
{
  gaia::DataCenterManager::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::Construct  (binary VA: 0x14d65b0)
// Original: gaia::DataCenterManager::DataCenterManager
// ----------------------------------------------------------------------------
pthread_mutex_t ** gaia::DataCenterManager::Construct(gaia::DataCenterManager::Self *self)
{
  pthread_mutex_t **result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095EB8);
  result = glwebtools::Mutex::Construct((gaia::DataCenterManager::Self *)((char *)self + 4));
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::GetCachedDataCenters  (binary VA: 0x14d6610)
// Original: gaia::DataCenterManager::GetCachedDataCenters
// ----------------------------------------------------------------------------
int gaia::DataCenterManager::GetCachedDataCenters(gaia::DataCenterManager::Self *self, gaia::DataCenterConfig::Self **a2)
{
  uint8_t *v2;
  uint8_t *v3;
  gaia::DataCenterConfig::Self *v4;
  gaia::DataCenterConfig::Self *v5;
  unsigned int v6;
  gaia::DataCenterConfig::Self *v7;
  int v8;
  int v9;
  int v10;
  int v12;
  unsigned int v13;
  int v14;
  int i;
  uint8_t *v16;
  uint8_t *v17;
  int v18;
  uint8_t *v19;
  uint8_t *v20;
  gaia::DataCenterConfig::Self *v21;
  gaia::DataCenterConfig::Self *v22;
  gaia::DataCenterConfig::Self *v23;
  gaia::DataCenterConfig::Self *v24;
  uint8_t *v25;
  unsigned int v26;
  int v27;
  gaia::DataCenterConfig::Self *v28;
  int v29;
  gaia::DataCenterConfig::Self *v30;

  glwebtools::Mutex::Lock((gaia::DataCenterManager::Self *)((char *)self + 4));
  v2 = *((uint8_t **)self + 4);
  v3 = *((uint8_t **)self + 3);
  if ( v2 == v3 )
  {
    v10 = 404;
    goto LABEL_13;
  }
  if ( a2 == (gaia::DataCenterConfig::Self **)((char *)self + 12) )
  {
    v10 = 0;
    goto LABEL_13;
  }
  v26 = (v2 - v3) >> 5;
  v4 = *a2;
  if ( v26 > (a2[2] - *a2) >> 5 )
  {
    if ( v26 != 0 )
    {
      if ( v26 > 0x7FFFFFF )
        sub_18FFEE0(v2, a2);
      v25 = *((uint8_t **)self + 4);
      v18 = 32 * v26;
      v27 = opNew(32 * v26);
      v2 = v25;
    }
    else
    {
      v18 = 0;
      v27 = 0;
    }
    v29 = v18;
    v19 = (uint8_t *)v27;
    v20 = v2;
    do
    {
      if ( v19 != nullptr )
      {
        *v19 = *v3;
        g4_std::string::construct_copy(v19 + 4, v3 + 4);
        g4_std::string::construct_copy(v19 + 8, v3 + 8);
        g4_std::string::construct_copy(v19 + 12, v3 + 12);
        Json::Value::Construct((Json::Value::Self *)(v19 + 16), (const Json::Value::Self *)(v3 + 16));
      }
      v3 += 32;
      v19 += 32;
    }
    while ( v20 != v3 );
    v21 = a2[1];
    v22 = *a2;
    if ( v21 != *a2 )
    {
      do
      {
        v24 = v22;
        v22 = (gaia::DataCenterConfig::Self *)((char *)v22 + 32);
        gaia::DataCenterConfig::Destroy(v24);
      }
      while ( v21 != v22 );
      v22 = *a2;
    }
    if ( v22 != nullptr )
      opDelete(v22);
    v9 = v29 + v27;
    *a2 = (gaia::DataCenterConfig::Self *)v27;
    a2[2] = (gaia::DataCenterConfig::Self *)(v29 + v27);
    goto LABEL_12;
  }
  v5 = a2[1];
  v6 = (v5 - v4) >> 5;
  if ( v26 > v6 )
  {
    v12 = 32 * v6;
    v13 = (unsigned int)(uintptr_t)(&v3[v12]);
    v14 = v12 >> 5;
    if ( v14 > 0 )
    {
      for ( i = v14; i != 0; --i )
      {
        *(uint8_t *)v4 = *v3;
        g4_std::string::assign_str((char *)v4 + 4, v3 + 4);
        g4_std::string::assign_str((char *)v4 + 8, v3 + 8);
        g4_std::string::assign_str((char *)v4 + 12, v3 + 12);
        Json::Value::opAssign((gaia::DataCenterConfig::Self *)((char *)v4 + 16), (const Json::Value::Self *)(v3 + 16));
        v3 += 32;
        v4 = (gaia::DataCenterConfig::Self *)((char *)v4 + 32);
      }
      v5 = a2[1];
      v2 = *((uint8_t **)self + 4);
      v4 = *a2;
      v13 = *((uint32_t *)self + 3) + ((v5 - *a2) & 0xFFFFFFE0);
    }
    if ( v2 == (uint8_t *)v13 )
    {
      v9 = (int)(uintptr_t)(v4) + 32 * v26;
      goto LABEL_12;
    }
    v16 = (uint8_t *)v13;
    v17 = v2;
    do
    {
      if ( v5 != nullptr )
      {
        *(uint8_t *)v5 = *v16;
        g4_std::string::construct_copy((char *)v5 + 4, v16 + 4);
        g4_std::string::construct_copy((char *)v5 + 8, v16 + 8);
        g4_std::string::construct_copy((char *)v5 + 12, v16 + 12);
        Json::Value::Construct((gaia::DataCenterConfig::Self *)((char *)v5 + 16), (const Json::Value::Self *)(v16 + 16));
      }
      v16 += 32;
      v5 = (gaia::DataCenterConfig::Self *)((char *)v5 + 32);
    }
    while ( v17 != v16 );
  }
  else
  {
    if ( (int)v26 <= 0 )
      goto LABEL_10;
    v28 = a2[1];
    v30 = *a2;
    v7 = *a2;
    v8 = (v2 - v3) >> 5;
    do
    {
      *(uint8_t *)v7 = *v3;
      g4_std::string::assign_str((char *)v7 + 4, v3 + 4);
      g4_std::string::assign_str((char *)v7 + 8, v3 + 8);
      g4_std::string::assign_str((char *)v7 + 12, v3 + 12);
      Json::Value::opAssign((gaia::DataCenterConfig::Self *)((char *)v7 + 16), (const Json::Value::Self *)(v3 + 16));
      --v8;
      v3 += 32;
      v7 = (gaia::DataCenterConfig::Self *)((char *)v7 + 32);
    }
    while ( v8 != 0 );
    v5 = v28;
    v4 = (gaia::DataCenterConfig::Self *)((char *)v30 + 32 * v26);
    if ( v28 != v4 )
    {
      do
      {
        v23 = v4;
        v4 = (gaia::DataCenterConfig::Self *)((char *)v4 + 32);
        gaia::DataCenterConfig::Destroy(v23);
LABEL_10:
        ;
      }
      while ( v5 != v4 );
    }
  }
  v9 = (int)(uintptr_t)(*a2) + 32 * v26;
LABEL_12:
  v10 = 0;
  a2[1] = (gaia::DataCenterConfig::Self *)v9;
LABEL_13:
  glwebtools::Mutex::Unlock((gaia::DataCenterManager::Self *)((char *)self + 4));
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::GetCachedPreferredDataCenter  (binary VA: 0x14d6980)
// Original: gaia::DataCenterManager::GetCachedPreferredDataCenter
// ----------------------------------------------------------------------------
int gaia::DataCenterManager::GetCachedPreferredDataCenter(gaia::DataCenterManager::Self *self, gaia::DataCenterConfig::Self *a2)
{
  uint8_t *v2;
  uint8_t *v3;
  int v4;
  int v6;

  glwebtools::Mutex::Lock((gaia::DataCenterManager::Self *)((char *)self + 4));
  v2 = *((uint8_t **)self + 3);
  v3 = *((uint8_t **)self + 4);
  v4 = 404;
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 != 0 )
      {
        *(uint8_t *)a2 = *v2;
        g4_std::string::assign_str((char *)a2 + 4, v2 + 4);
        g4_std::string::assign_str((char *)a2 + 8, v2 + 8);
        g4_std::string::assign_str((char *)a2 + 12, v2 + 12);
        Json::Value::opAssign((gaia::DataCenterConfig::Self *)((char *)a2 + 16), (const Json::Value::Self *)(v2 + 16));
        v4 = 0;
        goto LABEL_6;
      }
      v2 += 32;
    }
    while ( v2 != v3 );
    v4 = 404;
  }
LABEL_6:
  v6 = v4;
  glwebtools::Mutex::Unlock((gaia::DataCenterManager::Self *)((char *)self + 4));
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::SaveDataCenter  (binary VA: 0x14d6a40)
// Original: gaia::DataCenterManager::SaveDataCenter
// ----------------------------------------------------------------------------
int gaia::DataCenterManager::SaveDataCenter(gaia::DataCenterManager::Self *self, const gaia::DataCenterConfig::Self *a2)
{
  typedef DataSharing::Self *_g4_t_v3;
  typedef DataSharing::Self *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  GameUtils_GetGameName((int)(uintptr_t)(&v3));
  g4_std::string::append((int)(uintptr_t)(&v3), "_SELECTED_DC", 0xCu);
  g4_std::string::construct_copy(&v4, (char *)a2 + 4);
  DataSharing_setSharedValue(v3, v4);
  g4_std::string::Destroy(&v4);
  { g4_std::string::Destroy(&v3); return 0; }
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::GetDataCenter  (binary VA: 0x14d6ae0)
// Original: gaia::DataCenterManager::GetDataCenter
// ----------------------------------------------------------------------------
int gaia::DataCenterManager::GetDataCenter(gaia::DataCenterManager::Self *self, gaia::DataCenterConfig::Self *a2)
{
  int v2;
  typedef uint32_t *_g4_t_v4;
  typedef DataSharing::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v4 = &dword_213B814;
  v2 = 0;
  GameUtils_GetGameName((int)(uintptr_t)(&v5));
  g4_std::string::append((int)(uintptr_t)(&v5), "_SELECTED_DC", 0xCu);
  if ( (uint8_t)DataSharing_isSharedValue(v5) != 0 )
  {
    DataSharing_getSharedValue((DataSharing::Self *)v6, v5);
    g4_std::string::assign_str(&v4, v6);
    v2 = 1;
    g4_std::string::Destroy(v6);
    g4_std::string::assign_str((char *)a2 + 4, &v4);
  }
  g4_std::string::Destroy(&v5);
  g4_std::string::Destroy(&v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::DeleteDataCenter  (binary VA: 0x14d6bc0)
// Original: gaia::DataCenterManager::DeleteDataCenter
// ----------------------------------------------------------------------------
int gaia::DataCenterManager::DeleteDataCenter()
{
  DataSharing::Self *v1[2];

  GameUtils_GetGameName((int)(uintptr_t)(v1));
  g4_std::string::append((int)(uintptr_t)(v1), "_SELECTED_DC", 0xCu);
  DataSharing_deleteSharedValue(v1[0]);
  { g4_std::string::Destroy(v1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::ProcessDataCenterMessage  (binary VA: 0x14d6c30)
// Original: gaia::DataCenterManager::ProcessDataCenterMessage
// ----------------------------------------------------------------------------
int gaia::DataCenterManager::ProcessDataCenterMessage(gaia::DataCenterManager::Self *self, Json::Value::Self *a2)
{
  int v2;
  Json::Value::Self *v4;
  int v5;
  int v6;
  int v7;
  Json::Value::Self *v8;
  int v9;
  Json::Value::Self *v10;
  int v11;
  Json::Value::Self *v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef bool _g4_t_isString;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[4];
  typedef uint8_t _g4_t_v21[4];
  typedef uint8_t _g4_t_v22[40];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_isString)) > _g4_s2 ? (12u + sizeof(_g4_t_isString)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v17)) > _g4_s4 ? (32u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v18)) > _g4_s5 ? (36u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v19)) > _g4_s6 ? (40u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v20)) > _g4_s7 ? (44u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v21)) > _g4_s8 ? (48u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v22)) > _g4_s9 ? (52u + sizeof(_g4_t_v22)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_isString &isString = *reinterpret_cast<_g4_t_isString *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);

  v2 = 0;
  if ( Json::Value::isMember(a2, "type") )
  {
    v4 = (Json::Value::Self *)Json::Value::opIndex(a2, "type");
    if ( Json::Value::isString(v4) )
    {
      v5 = (int)(uintptr_t)(Json::Value::opIndex(a2, "type"));
      Json::Value::asString((Json::Value::Self *)&v16, v5);
      if ( g4_std::string::compare((int)(uintptr_t)(&v16), "gift") == 0
        && Json::Value::isMember(a2, "gift_type")
        && (v10 = (Json::Value::Self *)Json::Value::opIndex(a2, "gift_type"), Json::Value::isString(v10)) )
      {
        v11 = (int)(uintptr_t)(Json::Value::opIndex(a2, "gift_type"));
        Json::Value::asString((Json::Value::Self *)&v17, v11);
        isString = false;
        if ( g4_std::string::compare((int)(uintptr_t)(&v17), "alter_DC") == 0 && Json::Value::isMember(a2, "action") )
        {
          v12 = (Json::Value::Self *)Json::Value::opIndex(a2, "action");
          isString = Json::Value::isString(v12);
        }
        g4_std::string::Destroy(&v17);
      }
      else
      {
        isString = false;
      }
      g4_std::string::Destroy(&v16);
      if ( isString )
      {
        v6 = (int)(uintptr_t)(Json::Value::opIndex(a2, "action"));
        Json::Value::asString((Json::Value::Self *)&v18, v6);
        v13 = g4_std::string::compare((int)(uintptr_t)(&v18), "reset");
        g4_std::string::Destroy(&v18);
        if ( v13 != 0 )
        {
          v7 = (int)(uintptr_t)(Json::Value::opIndex(a2, "action"));
          Json::Value::asString((Json::Value::Self *)&v19, v7);
          v14 = g4_std::string::compare((int)(uintptr_t)(&v19), "switch");
          g4_std::string::Destroy(&v19);
          v2 = 0;
          if ( v14 == 0 && Json::Value::isMember(a2, "dataCenterName") )
          {
            v8 = (Json::Value::Self *)Json::Value::opIndex(a2, "dataCenterName");
            if ( Json::Value::isString(v8) )
            {
              gaia::DataCenterConfig::Construct((gaia::DataCenterConfig::Self *)v21);
              v9 = (int)(uintptr_t)(Json::Value::opIndex(a2, "dataCenterName"));
              Json::Value::asString((Json::Value::Self *)v20, v9);
              g4_std::string::assign_str(v22, v20);
              g4_std::string::Destroy(v20);
              gaia::DataCenterManager::SaveDataCenter(self, (const gaia::DataCenterConfig::Self *)v21);
              v2 = 1;
              gaia::DataCenterConfig::Destroy((gaia::DataCenterConfig::Self *)v21);
            }
          }
        }
        else
        {
          v2 = 1;
          gaia::DataCenterManager::DeleteDataCenter();
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::GetServerDataConfigsAsync  (binary VA: 0x14db130)
// Original: gaia::DataCenterManager::GetServerDataConfigsAsync
// ----------------------------------------------------------------------------
int gaia::DataCenterManager::GetServerDataConfigsAsync(void *a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  uint32_t *v7;
  int Instance;
  int v9;
  typedef uint16_t _g4_t_v11[3];
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[16];
  typedef uint8_t _g4_t_v14[16];
  typedef uint8_t _g4_t_v15[96];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (2u + sizeof(_g4_t_v11)) > _g4_s0 ? (2u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v15)) > _g4_s4 ? (44u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 2u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v15);
  Json::Value::Construct((int)(uintptr_t)(v13), a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11[1]), "client_id", (int)(uintptr_t)(v11));
  v5 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(v15), (char **)&v11[1]);
  Json::Value::opAssign(v5, (const Json::Value::Self *)v13);
  g4_std::string::Destroy(&v11[1]);
  Json::Value::Destroy((Json::Value::Self *)v13);
  Json::Value::Construct((int)(uintptr_t)(v14), a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "country", (int)(uintptr_t)(v11) + 1);
  v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(v15), (char **)&v12);
  Json::Value::opAssign(v6, (const Json::Value::Self *)v14);
  g4_std::string::Destroy(&v12);
  Json::Value::Destroy((Json::Value::Self *)v14);
  v7 = (uint32_t *)opNew(8u);
  *v7 = a4;
  v7[1] = a5;
  gaia::GaiaRequest::SetUserData((gaia::GaiaRequest::Self *)v15, v7);
  gaia::GaiaRequest::SetRunAsynchronous(
    (gaia::GaiaRequest::Self *)v15,
    (void (__high *)(gaia::GaiaRequest::Self))gaia::DataCenterManager::InternalStaticCallback,
    a1);
  Instance = gaia::Gaia::GetInstance();
  v9 = gaia::Gaia_Eve::ListDataCenters(*(gaia::Gaia_Eve::Self **)(Instance + 564), (gaia::GaiaRequest::Self *)v15);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v15);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterManager::InternalStaticCallback  (binary VA: 0x14dd140)
// Original: gaia::DataCenterManager::InternalStaticCallback
// ----------------------------------------------------------------------------
void gaia::DataCenterManager::InternalStaticCallback(gaia::GaiaRequest::Self *a1)
{
  gaia::BaseJSONServiceResponse::Self *v1;
  unsigned int v2;
  gaia::BaseJSONServiceResponse::Self *JSONMessage;
  gaia::DataCenterConfig::Self *v4;
  gaia::DataCenterConfig::Self *v5;
  uint32_t *Caller;
  gaia::DataCenterConfig::Self *v7;
  gaia::DataCenterConfig::Self *v8;
  gaia::DataCenterConfig::Self *v9;
  gaia::DataCenterConfig::Self *v10;
  gaia::DataCenterConfig::Self *v11;
  gaia::BaseJSONServiceResponse::Self *v12;
  gaia::BaseJSONServiceResponse::Self *v13;
  void (**v14)(int, int *, int, int);
  void (*v15)(int, int *, int, int);
  size_t v16;
  gaia::DataCenterConfig::Self *v17;
  gaia::DataCenterConfig::Self *v18;
  typedef gaia::DataCenterConfig::Self *_g4_t_v19;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v20;
  typedef gaia::DataCenterConfig::Self *_g4_t_v21;
  typedef gaia::DataCenterConfig::Self *_g4_t_v22;
  typedef void (*_g4_t_v23)(int, int *, int, int);
  typedef int _g4_t_ResponseCode;
  typedef gaia::DataCenterConfig::Self *_g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef uint8_t _g4_t_v27[5];
  typedef int _g4_t_v28;
  typedef void *_g4_t_v29;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef gaia::DataCenterConfig::Self *_g4_t_v32;
  typedef gaia::DataCenterConfig::Self *_g4_t_v33;
  typedef gaia::DataCenterConfig::Self *_g4_t_v34;
  typedef char _g4_t_v35[4];
  typedef char _g4_t_v36[4];
  typedef char _g4_t_v37[4];
  typedef char _g4_t_v38[4];
  typedef char _g4_t_v39[44];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v20)) > _g4_s1 ? (0u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v21)) > _g4_s2 ? (0u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_ResponseCode)) > _g4_s5 ? (20u + sizeof(_g4_t_ResponseCode)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v25)) > _g4_s6 ? (24u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v26)) > _g4_s7 ? (28u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (47u + sizeof(_g4_t_v27)) > _g4_s8 ? (47u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v28)) > _g4_s9 ? (52u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v29)) > _g4_s10 ? (56u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v30)) > _g4_s11 ? (60u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v31)) > _g4_s12 ? (64u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v32)) > _g4_s13 ? (68u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v33)) > _g4_s14 ? (72u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v34)) > _g4_s15 ? (76u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v35)) > _g4_s16 ? (80u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v36)) > _g4_s17 ? (84u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v37)) > _g4_s18 ? (88u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v38)) > _g4_s19 ? (92u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v39)) > _g4_s20 ? (96u + sizeof(_g4_t_v39)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_ResponseCode &ResponseCode = *reinterpret_cast<_g4_t_ResponseCode *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 47u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 92u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);

  ResponseCode = gaia::GaiaRequest::GetResponseCode(a1);
  if ( ResponseCode != 0 )
    goto LABEL_21;
  v29 = nullptr;
  v30 = nullptr;
  v31 = 0;
  gaia::GaiaRequest::GetResponse(a1, (std::vector<gaia::BaseJSONServiceResponse::Self> *)&v29);
  v1 = (gaia::BaseJSONServiceResponse::Self *)v29;
  v32 = nullptr;
  v33 = nullptr;
  v34 = nullptr;
  v2 = -858993459 * ((v30 - (gaia::BaseJSONServiceResponse::Self *)v29) >> 2);
  if ( v2 > 0x7FFFFFF )
    sub_1900180("vector::reserve");
  if ( v2 != 0 )
  {
    v16 = -1717986912 * ((v30 - (gaia::BaseJSONServiceResponse::Self *)v29) >> 2);
    v25 = (gaia::DataCenterConfig::Self *)opNew(v16);
    v17 = v32;
    if ( v33 != v32 )
    {
      v26 = v16;
      v18 = v33;
      do
      {
        v21 = v17;
        v17 = (gaia::DataCenterConfig::Self *)((char *)v17 + 32);
        gaia::DataCenterConfig::Destroy(v21);
      }
      while ( v18 != v17 );
      v16 = v26;
      v17 = v32;
    }
    if ( v17 != nullptr )
      opDelete(v17);
    v32 = v25;
    v34 = (gaia::DataCenterConfig::Self *)((char *)v25 + v16);
    v1 = (gaia::BaseJSONServiceResponse::Self *)v29;
    v33 = v25;
    if ( v30 == v29 )
      goto LABEL_11;
    goto LABEL_5;
  }
  if ( v30 != v29 )
  {
    do
    {
LABEL_5:
      gaia::DataCenterConfig::Construct((gaia::DataCenterConfig::Self *)v35);
      JSONMessage = gaia::BaseJSONServiceResponse::GetJSONMessage(v1);
      if ( gaia::DataCenterConfig::Deserialize((gaia::DataCenterConfig::Self *)v35, JSONMessage) == 0 )
      {
        v4 = v33;
        if ( v33 == v34 )
        {
          g4_std::vector_gaia_DataCenterConfig_0a0a5c::M_insert_aux(&v32, v33, v35);
        }
        else
        {
          v5 = nullptr;
          if ( v33 != nullptr )
          {
            *(uint8_t *)v33 = v35[0];
            v22 = v4;
            g4_std::string::construct_copy((char *)v4 + 4, v36);
            g4_std::string::construct_copy((char *)v22 + 8, v37);
            g4_std::string::construct_copy((char *)v22 + 12, v38);
            Json::Value::Construct((gaia::DataCenterConfig::Self *)((char *)v22 + 16), (const Json::Value::Self *)v39);
            v5 = v33;
          }
          v33 = (gaia::DataCenterConfig::Self *)((char *)v5 + 32);
        }
      }
      v1 = (gaia::BaseJSONServiceResponse::Self *)((char *)v1 + 20);
      gaia::DataCenterConfig::Destroy((gaia::DataCenterConfig::Self *)v35);
    }
    while ( v1 != v30 );
  }
LABEL_11:
  Caller = (uint32_t *)gaia::GaiaRequest::GetCaller(a1);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(Caller + 1));
  v7 = (gaia::DataCenterConfig::Self *)Caller[3];
  Caller[3] = (uint32_t)(uintptr_t)(v32);
  v32 = v7;
  v8 = (gaia::DataCenterConfig::Self *)Caller[4];
  Caller[4] = (uint32_t)(uintptr_t)(v33);
  v33 = v8;
  v9 = (gaia::DataCenterConfig::Self *)Caller[5];
  Caller[5] = (uint32_t)(uintptr_t)(v34);
  v34 = v9;
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(Caller + 1));
  v10 = v33;
  v11 = v32;
  if ( v33 != v32 )
  {
    do
    {
      v19 = v11;
      v11 = (gaia::DataCenterConfig::Self *)((char *)v11 + 32);
      gaia::DataCenterConfig::Destroy(v19);
    }
    while ( v10 != v11 );
    v11 = v32;
  }
  if ( v11 != nullptr )
    opDelete(v11);
  v12 = v30;
  v13 = (gaia::BaseJSONServiceResponse::Self *)v29;
  if ( v30 != v29 )
  {
    do
    {
      v20 = v13;
      v13 = (gaia::BaseJSONServiceResponse::Self *)((char *)v13 + 20);
      gaia::BaseJSONServiceResponse::Destroy(v20);
    }
    while ( v12 != v13 );
    v13 = (gaia::BaseJSONServiceResponse::Self *)v29;
  }
  if ( v13 != nullptr )
    opDelete(v13);
LABEL_21:
  gaia::GaiaRequest::GetUserData(a1, (void **)&v27[1]);
  v14 = *(void (***)(int, int *, int, int))&v27[1];
  if ( *(uint32_t *)&v27[1] != 0 )
    opDelete(nullptr);
  v15 = *v14;
  v23 = v14[1];
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), (char *)&unk_1B15112, (int)(uintptr_t)(v27));
  v15(9500, &v28, ResponseCode, (int)(uintptr_t)(v23));
  g4_std::string::Destroy(&v28);
  opDelete(v14);
}


