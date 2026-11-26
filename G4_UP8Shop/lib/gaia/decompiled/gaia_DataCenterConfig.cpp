#include "Core/Utils/DecompTypes.h"
#include "gaia_DataCenterConfig.h"

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterConfig::GetJsonValue  (binary VA: 0x14d6120)
// Original: gaia::DataCenterConfig::GetJsonValue
// ----------------------------------------------------------------------------
int gaia::DataCenterConfig::GetJsonValue(int a1, Json::Value::Self *a2, const char **a3, int a4)
{
  int v4;
  Json::Value::Self *v5;
  void *v6;
  uint8_t v8[16];

  v4 = -24;
  if ( Json::Value::isMember(a2, (char **)a3) )
  {
    v5 = (Json::Value::Self *)Json::Value::opIndex(a2, a3);
    if ( Json::Value::type(v5) == 4 )
    {
      v6 = Json::Value::opIndex(a2, a3);
      v4 = 0;
      Json::Value::asString((Json::Value::Self *)v8, (int)(uintptr_t)(v6));
      g4_std::string::assign_str(a4, v8);
      g4_std::string::Destroy(v8);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterConfig::GetJsonValue  (binary VA: 0x14d61d0)
// Original: gaia::DataCenterConfig::GetJsonValue
// ----------------------------------------------------------------------------
int gaia::DataCenterConfig::GetJsonValue(int a1, Json::Value::Self *a2, const char **a3, char *a4)
{
  int v4;
  Json::Value::Self *v5;
  Json::Value::Self *v6;

  v4 = -24;
  if ( Json::Value::isMember(a2, (char **)a3) )
  {
    v5 = (Json::Value::Self *)Json::Value::opIndex(a2, a3);
    if ( Json::Value::type(v5) == 5 )
    {
      v6 = (Json::Value::Self *)Json::Value::opIndex(a2, a3);
      v4 = 0;
      *a4 = Json::Value::asBool(v6);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterConfig::Construct  (binary VA: 0x14d6260)
// Original: gaia::DataCenterConfig::DataCenterConfig
// ----------------------------------------------------------------------------
gaia::DataCenterConfig::Self * gaia::DataCenterConfig::Construct(gaia::DataCenterConfig::Self *self)
{
  *(uint8_t *)self = 0;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  return (gaia::DataCenterConfig::Self *)Json::Value::Construct((int)(uintptr_t)(self) + 16, nullptr);
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterConfig::Destroy  (binary VA: 0x14d62b0)
// Original: gaia::DataCenterConfig::~DataCenterConfig
// ----------------------------------------------------------------------------
void gaia::DataCenterConfig::Destroy(gaia::DataCenterConfig::Self *self)
{
  Json::Value::Destroy((gaia::DataCenterConfig::Self *)((char *)self + 16));
  g4_std::string::Destroy((char *)self + 12);
  g4_std::string::Destroy((char *)self + 8);
  g4_std::string::Destroy((char *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterConfig::Serialize  (binary VA: 0x14d63c0)
// Original: gaia::DataCenterConfig::Serialize
// ----------------------------------------------------------------------------
gaia::DataCenterConfig::Self * gaia::DataCenterConfig::Serialize(gaia::DataCenterConfig::Self *self, int a2)
{
  typedef void (**_g4_t_v3)(Json::FastWriter::Self *);
  typedef uint8_t _g4_t_v4[8];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);

  Json::FastWriter::Construct((Json::FastWriter::Self *)&v3);
  Json::FastWriter::write(self, (const Json::Value::Self *)&v3, (Json::Value::Self *)(a2 + 16));
  v3 = (void (**)(Json::FastWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B78));
  g4_std::string::Destroy(v4);
  Json::Writer::Destroy((Json::Writer::Self *)&v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataCenterConfig::Deserialize  (binary VA: 0x14d6440)
// Original: gaia::DataCenterConfig::Deserialize
// ----------------------------------------------------------------------------
int gaia::DataCenterConfig::Deserialize(gaia::DataCenterConfig::Self *self, const Json::Value::Self *a2)
{
  int result;
  typedef int _g4_t_JsonValue;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_JsonValue)) > _g4_s0 ? (12u + sizeof(_g4_t_JsonValue)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v5)) > _g4_s2 ? (12u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v6)) > _g4_s3 ? (12u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v7)) > _g4_s4 ? (28u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_JsonValue &JsonValue = *reinterpret_cast<_g4_t_JsonValue *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "name", (int)(uintptr_t)(&v7));
  JsonValue = gaia::DataCenterConfig::GetJsonValue((int)(uintptr_t)(self), a2, (const char **)&v8, (int)(uintptr_t)(self) + 4);
  g4_std::string::Destroy(&v8);
  result = JsonValue;
  if ( JsonValue == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "status", (int)(uintptr_t)(&v7) + 1);
    v4 = gaia::DataCenterConfig::GetJsonValue((int)(uintptr_t)(self), a2, (const char **)&v9, (int)(uintptr_t)(self) + 8);
    g4_std::string::Destroy(&v9);
    result = v4;
    if ( v4 == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "preferred", (int)(uintptr_t)(&v7) + 2);
      v5 = gaia::DataCenterConfig::GetJsonValue((int)(uintptr_t)(self), a2, (const char **)&v10, (char *)self);
      g4_std::string::Destroy(&v10);
      result = v5;
      if ( v5 == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "country_code", (int)(uintptr_t)(&v7) + 3);
        v6 = gaia::DataCenterConfig::GetJsonValue((int)(uintptr_t)(self), a2, (const char **)v11, (int)(uintptr_t)(self) + 12);
        g4_std::string::Destroy(v11);
        return v6;
      }
    }
  }
  return result;
}


