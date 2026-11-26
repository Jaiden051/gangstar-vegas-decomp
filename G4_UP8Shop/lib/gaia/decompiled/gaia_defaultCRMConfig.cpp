#include "Core/Utils/DecompTypes.h"
#include "gaia_defaultCRMConfig.h"

// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_defaultCRMConfig.cpp
// Library: gaia | Module: gaia_defaultCRMConfig
// Binary Address Span: 0x14433e0 .. 0x14437d0 (5 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x14433e0 (size: 111 bytes)
// Symbol:    _ZN4gaia16defaultCRMConfigC2Ev
// Demangled: gaia::defaultCRMConfig::defaultCRMConfig(void)
// ============================================================================
// Alternative name is '_ZN4gaia16defaultCRMConfigC1Ev'
struct gaia::defaultCRMConfig::Self *gaia::defaultCRMConfig::defaultCRMConfig(gaia::defaultCRMConfig::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std_compat::string_assign((int)(uintptr_t)(self), &unk_1B15112, 0);
  return (struct gaia::defaultCRMConfig::Self *)g4_std_compat::string_assign((int)(uintptr_t)(self) + 4, &unk_1B15112, 0);
}
// ----------------------------------------------------------------------------
// Function: gaia::defaultCRMConfig::Destroy  (binary VA: 0x1443610)
// Original: gaia::defaultCRMConfig::~defaultCRMConfig
// ----------------------------------------------------------------------------
void gaia::defaultCRMConfig::Destroy(gaia::defaultCRMConfig::Self *self)
{
  int v1;
  uint32_t *v2;

  g4_std::string::clear(self, 0, *(uint32_t *)(*(uint32_t *)self - 12), 0);
  g4_std::string::clear((char *)self + 4, 0, *(uint32_t *)(*((uint32_t *)self + 1) - 12), 0);
  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v2 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: gaia::defaultCRMConfig::Initialize  (binary VA: 0x14436e0)
// Original: gaia::defaultCRMConfig::Initialize
// ----------------------------------------------------------------------------
void gaia::defaultCRMConfig::Initialize(int a1, int a2)
{
  typedef char _g4_t_v2[16];
  typedef uint8_t _g4_t_v3[16];
  typedef uint8_t _g4_t_v4[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v3)) > _g4_s1 ? (16u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v4)) > _g4_s2 ? (32u + sizeof(_g4_t_v4)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 32u);

  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v2, a2);
  glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v3, (glwebtools::Json::Value::Self *)v2, "iap");
  glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v4, (glwebtools::Json::Value::Self *)v2, "offline_store");
  glwebtools::JsonReader::ToString((glwebtools::Json::Value::Self *)v4, a1);
  glwebtools::JsonReader::ToString((glwebtools::Json::Value::Self *)v3, a1 + 4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v3);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v2);
}

// ----------------------------------------------------------------------------
// Function: gaia::defaultCRMConfig::GetOfflineItemsConfig  (binary VA: 0x14437a0)
// Original: gaia::defaultCRMConfig::GetOfflineItemsConfig
// ----------------------------------------------------------------------------
int gaia::defaultCRMConfig::GetOfflineItemsConfig(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a2, a1));
}

// ----------------------------------------------------------------------------
// Function: gaia::defaultCRMConfig::GetIAPConfig  (binary VA: 0x14437d0)
// Original: gaia::defaultCRMConfig::GetIAPConfig
// ----------------------------------------------------------------------------
void gaia::defaultCRMConfig::GetIAPConfig(int a1, int a2, int a3)
{
  void *v3;
  typedef uint16_t _g4_t_v4[3];
  typedef char _g4_t_v5[16];
  typedef uint8_t _g4_t_v6[16];
  typedef uint8_t _g4_t_v7[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (10u + sizeof(_g4_t_v4)) > _g4_s0 ? (10u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v7)) > _g4_s3 ? (48u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 10u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 48u);

  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v5, a1 + 4);
  glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v6, (glwebtools::Json::Value::Self *)v5, a3);
  if ( glwebtools::JsonReader::size((glwebtools::JsonReader::Self *)v6) == 0 )
  {
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v7, (glwebtools::Json::Value::Self *)v5, "en");
    glwebtools::Json::Value::opAssign((glwebtools::Json::Value::Self *)v6, (const glwebtools::Json::Value::Self *)v7);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v4));
  glwebtools::JsonReader::ToString((glwebtools::Json::Value::Self *)v6, (int)(uintptr_t)(&v4[1]));
  g4_std::string::assign_str(a2, &v4[1]);
  v3 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v6);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v5);
}


