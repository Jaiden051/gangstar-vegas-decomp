#include "Core/Utils/DecompTypes.h"
#include "gaia_Pandora.h"

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::getServerDate  (binary VA: 0x14aa3a0)
// Original: gaia::Pandora::getServerDate
// ----------------------------------------------------------------------------
gaia::Pandora::Self * gaia::Pandora::getServerDate(gaia::Pandora::Self *self, int a2)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a2 + 156));
  g4_std::string::construct_copy(self, a2 + 164);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a2 + 156));
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::setServerDate  (binary VA: 0x14aa410)
// Original: gaia::Pandora::setServerDate
// ----------------------------------------------------------------------------
int gaia::Pandora::setServerDate(int a1, int a2)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 156));
  g4_std::string::assign_str(a1 + 164, a2);
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 156));
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::Destroy  (binary VA: 0x14aa9e0)
// Original: gaia::Pandora::~Pandora
// ----------------------------------------------------------------------------
void gaia::Pandora::Destroy(gaia::Pandora::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095D68);
  v1 = *((uint32_t *)self + 46);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  Json::Value::Destroy((gaia::Pandora::Self *)((char *)self + 168));
  v2 = *((uint32_t *)self + 41);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  glwebtools::Mutex::Destroy((gaia::Pandora::Self *)((char *)self + 156));
  gaia::BaseServiceManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::Destroy_ea14aaaa0  (binary VA: 0x14aaaa0)
// Original: gaia::Pandora::~Pandora
// ----------------------------------------------------------------------------
void gaia::Pandora::Destroy_ea14aaaa0(gaia::Pandora::Self *self)
{
  gaia::Pandora::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::setFinalServicesUrls  (binary VA: 0x14aac40)
// Original: gaia::Pandora::setFinalServicesUrls
// ----------------------------------------------------------------------------
void gaia::Pandora::setFinalServicesUrls(gaia::Pandora::Self *self, char *a2, gaia::ServiceRequest::Self *a3)
{
  int v3;
  typedef char _g4_t_v4;
  typedef char *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[4];
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[4];
  typedef uint8_t _g4_t_v10[4];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[124];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v6)) > _g4_s2 ? (27u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v7)) > _g4_s3 ? (32u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v8)) > _g4_s4 ? (36u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v9)) > _g4_s5 ? (40u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v10)) > _g4_s6 ? (44u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v11)) > _g4_s7 ? (48u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v12)) > _g4_s8 ? (64u + sizeof(_g4_t_v12)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 27u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);

  if ( *((uint32_t *)a3 + 7) == 0 )
  {
    v5 = (char *)self + 52;
    g4_std::string::construct_copy((char *)&v6 + 1, (char *)self + 52);
    gaia::ServiceRequest::GetFullUrl(v7);
    v3 = g4_std_compat::string_find(v7, "eve.gameloft.com:20001", 0, 22);
    g4_std::string::Destroy(v7);
    g4_std::string::Destroy((char *)&v6 + 1);
    if ( v3 != -1 )
    {
      Json::Value::Construct(v11, 0);
      Json::Reader::Construct((Json::Reader::Self *)v12);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), a2, (int)(uintptr_t)(&v6));
      v4 = Json::Reader::parse((Json::Reader::Self *)v12, (int)(uintptr_t)(&v8), (Json::Value::Self *)v11, 1);
      g4_std::string::Destroy(&v8);
      if ( v4 != 0 )
      {
        g4_std::string::clear(v5, 0, *(uint32_t *)(*((uint32_t *)self + 13) - 12), 0);
        Json::Value::opIndex((Json::Value::Self *)v11, "pandora");
        Json::Value::asString((Json::Value::Self *)v9);
        g4_std::string::append_str(v5, v9);
        g4_std::string::Destroy(v9);
        Json::Value::opIndex((Json::Value::Self *)v11, "status");
        Json::Value::asString((Json::Value::Self *)v10);
        g4_std::string::append_str((char *)self + 184, v10);
        g4_std::string::Destroy(v10);
        Json::Value::opAssign((gaia::Pandora::Self *)((char *)self + 168), (const Json::Value::Self *)v11);
      }
      sub_545800(v12);
      Json::Value::Destroy((Json::Value::Self *)v11);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::GetVersionUpdateStatus  (binary VA: 0x14abf60)
// Original: gaia::Pandora::GetVersionUpdateStatus
// ----------------------------------------------------------------------------
gaia::Pandora::Self * gaia::Pandora::GetVersionUpdateStatus(gaia::Pandora::Self *self, int a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( *(uint32_t *)(*(uint32_t *)(a2 + 184) - 12) != 0 )
    g4_std::string::construct_copy(self, a2 + 184);
  else
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "Info Unavailable", (int)(uintptr_t)(&v3));
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::ConvertTimeStringToSec  (binary VA: 0x14abfd0)
// Original: gaia::Pandora::ConvertTimeStringToSec
// ----------------------------------------------------------------------------
int gaia::Pandora::ConvertTimeStringToSec(int a1, int *a2)
{
  int v2;
  int result;
  struct tm *v4;
  time_t v5;
  struct tm *v6;
  int v7;
  typedef time_t _g4_t_timer;
  typedef struct tm _g4_t_tp;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_timer)) > _g4_s0 ? (0u + sizeof(_g4_t_timer)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_tp)) > _g4_s1 ? (4u + sizeof(_g4_t_tp)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 0u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 4u);

  v2 = *a2;
  result = -1;
  if ( *(uint32_t *)(*a2 - 12) != 0 )
  {
    memset(&tp, 0, sizeof(tp));
    strptime(v2);
    time(&timer);
    v4 = localtime(&timer);
    v5 = mktime(v4);
    v6 = (struct tm *)gaia::utils::gmtimeMx((gaia::utils::Self *)&timer, (const int *)"%a, %d %b %Y %H:%M:%S %Z");
    v7 = v5 - mktime(v6);
    return v7 + mktime(&tp);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::GetCachedUrlFromEve  (binary VA: 0x14ac080)
// Original: gaia::Pandora::GetCachedUrlFromEve
// ----------------------------------------------------------------------------
int gaia::Pandora::GetCachedUrlFromEve(int a1, const char **a2, int a3)
{
  int v3;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  void *v6;
  uint8_t v8[16];

  v3 = -3;
  if ( *((uint32_t *)*a2 - 3) != 0 )
  {
    v4 = (Json::Value::Self *)(a1 + 168);
    if ( Json::Value::isMember((Json::Value::Self *)(a1 + 168), (char **)a2) )
    {
      v5 = (Json::Value::Self *)Json::Value::opIndex(v4, a2);
      LOWORD(v3) = -34;
      if ( Json::Value::type(v5) == 4 )
      {
        v6 = Json::Value::opIndex(v4, a2);
        v3 = 0;
        Json::Value::asString((Json::Value::Self *)v8, (int)(uintptr_t)(v6));
        g4_std::string::assign_str(a3, v8);
        g4_std::string::Destroy(v8);
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::GetOpCode  (binary VA: 0x14ac140)
// Original: gaia::Pandora::GetOpCode
// ----------------------------------------------------------------------------
int gaia::Pandora::GetOpCode(int a1)
{
  int v1;

  v1 = 3006;
  if ( g4_std::string::compare(a1, "auth") != 0 )
  {
    LOWORD(v1) = 3007;
    if ( g4_std::string::compare(a1, "storage") != 0 )
    {
      LOWORD(v1) = 3009;
      if ( g4_std::string::compare(a1, "feeds") != 0 )
      {
        LOWORD(v1) = 3010;
        if ( g4_std::string::compare(a1, "leaderboard") != 0 )
        {
          LOWORD(v1) = 3011;
          if ( g4_std::string::compare(a1, "social") != 0 )
          {
            LOWORD(v1) = 3008;
            if ( g4_std::string::compare(a1, "message") != 0 )
            {
              LOWORD(v1) = 3012;
              if ( g4_std::string::compare(a1, "asset") != 0 )
              {
                LOWORD(v1) = 3013;
                if ( g4_std::string::compare(a1, "matchmaker") != 0 && g4_std::string::compare(a1, "lobby") != 0 )
                {
                  LOWORD(v1) = 3014;
                  if ( g4_std::string::compare(a1, "lottery") != 0 )
                  {
                    LOWORD(v1) = 3015;
                    if ( g4_std::string::compare(a1, "voice") != 0 )
                    {
                      LOWORD(v1) = 3016;
                      if ( g4_std::string::compare(a1, "config") != 0 )
                      {
                        LOWORD(v1) = 3017;
                        if ( g4_std::string::compare(a1, "alert") != 0 )
                        {
                          LOWORD(v1) = 3018;
                          if ( g4_std::string::compare(a1, "schedule") != 0 )
                            return g4_std::string::compare(a1, "transaction") == 0 ? 0xBCB : 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::GetServerTimeStamp  (binary VA: 0x14ae830)
// Original: gaia::Pandora::GetServerTimeStamp
// ----------------------------------------------------------------------------
int gaia::Pandora::GetServerTimeStamp(gaia::Pandora::Self *self, int *a2, gaia::GaiaRequest::Self *a3)
{
  int v3;
  gaia::ServiceRequest::Self *v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (13u + sizeof(_g4_t_v6)) > _g4_s0 ? (13u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v9)) > _g4_s3 ? (24u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v10)) > _g4_s4 ? (28u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v11)) > _g4_s5 ? (32u + sizeof(_g4_t_v11)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 13u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);

  v3 = -4;
  if ( *(uint32_t *)(*((uint32_t *)self + 13) - 12) != 0 )
  {
    v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
    gaia::ServiceRequest::Construct(v4, a3);
    *((uint32_t *)v4 + 8) = 3001;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "/locate", (int)(uintptr_t)(&v6));
    v8 = &dword_213B814;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "auth", (int)(uintptr_t)(&v6) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "service=", (int)(uintptr_t)(&v6) + 1);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(self), (int)(uintptr_t)(&v8), &v9, (char **)&v10);
    g4_std::string::Destroy(&v9);
    g4_std::string::Destroy(&v10);
    g4_std::string::assign_str((char *)v4 + 44, &v7);
    g4_std::string::assign_str((char *)v4 + 48, &v8);
    v3 = gaia::BaseServiceManager::SendCompleteRequest(self, v4);
    if ( v3 != 0 )
    {
      *a2 = -1;
    }
    else
    {
      (*(void (**)(int *))(*(uint32_t *)self + 32))(v11);
      *a2 = gaia::Pandora::ConvertTimeStringToSec((int)(uintptr_t)(self), v11);
      g4_std::string::Destroy(v11);
    }
    g4_std::string::Destroy(&v8);
    g4_std::string::Destroy(&v7);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::GetPandoraUrlFromDataCenter  (binary VA: 0x14b38f0)
// Original: gaia::Pandora::GetPandoraUrlFromDataCenter
// ----------------------------------------------------------------------------
int gaia::Pandora::GetPandoraUrlFromDataCenter(int a1, const char **a2, int a3, gaia::GaiaRequest::Self *a4)
{
  char *v4;
  size_t v5;
  Json::Value::Self *v7;
  int v8;
  typedef gaia::ServiceRequest::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint8_t _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef uint8_t _g4_t_v17[16];
  typedef const char *_g4_t_v18[35];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (26u + sizeof(_g4_t_v11)) > _g4_s2 ? (26u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v14)) > _g4_s5 ? (36u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v15)) > _g4_s6 ? (40u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v16)) > _g4_s7 ? (44u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v17)) > _g4_s8 ? (48u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v18)) > _g4_s9 ? (64u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 26u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);

  v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v9, a4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "http://", (int)(uintptr_t)(&v11));
  g4_std::string::append((int)(uintptr_t)(&v12), "eve.gameloft.com:20001", 0x16u);
  g4_std::string::append((int)(uintptr_t)(&v12), "/config/", 8u);
  v13 = &dword_213B814;
  glwebtools::Codec::EncodeUrlRFC3986((char **)(a1 + 132), (int)(uintptr_t)(&v13));
  g4_std::string::append_str(&v12, &v13);
  g4_std::string::append((int)(uintptr_t)(&v12), "/datacenters/", 0xDu);
  v4 = (char *)*a2;
  v5 = strlen(*a2);
  g4_std::string::append((int)(uintptr_t)(&v12), v4, v5);
  g4_std::string::append((int)(uintptr_t)(&v12), "/urls", 5u);
  *((uint32_t *)v9 + 8) = 3005;
  g4_std::string::construct_copy(v14, &v12);
  g4_std::string::assign_str((char *)v9 + 36, v14);
  g4_std::string::Destroy(v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
  v10 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9, (int)(uintptr_t)(&v15));
  if ( v10 == 0 )
  {
    Json::Reader::Construct((Json::Reader::Self *)v18);
    Json::Value::Construct((int)(uintptr_t)(v17), nullptr);
    if ( (uint8_t)Json::Reader::parse(v18, (int)(uintptr_t)(&v15), (Json::Value::Self *)v17, 1) != 0
      && Json::Value::isMember((Json::Value::Self *)v17, "pandora")
      && (v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v17, "pandora"), Json::Value::type(v7) == 4) )
    {
      v8 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v17, "pandora"));
      Json::Value::asString((Json::Value::Self *)v16, v8);
      g4_std::string::assign_str(a3, v16);
      g4_std::string::Destroy(v16);
    }
    else
    {
      v10 = -34;
    }
    Json::Value::Destroy((Json::Value::Self *)v17);
    sub_545800((int)(uintptr_t)(v18));
  }
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::GetPandoraUrl  (binary VA: 0x14b3bb0)
// Original: gaia::Pandora::GetPandoraUrl
// ----------------------------------------------------------------------------
int gaia::Pandora::GetPandoraUrl(int a1, int a2, gaia::GaiaRequest::Self *a3)
{
  gaia::ServiceRequest::Self *v3;
  int v4;
  Json::Value::Self *v6;
  int v7;
  typedef int _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[4];
  typedef uint8_t _g4_t_v13[16];
  typedef const char *_g4_t_v14[35];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (11u + sizeof(_g4_t_v8)) > _g4_s0 ? (11u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v14)) > _g4_s6 ? (48u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 11u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

  v3 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v3, a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8) + 1, "http://", (int)(uintptr_t)(&v8));
  g4_std::string::append((int)(uintptr_t)(&v8) + 1, "eve.gameloft.com:20001", 0x16u);
  g4_std::string::append((int)(uintptr_t)(&v8) + 1, "/config/", 8u);
  v9 = &dword_213B814;
  glwebtools::Codec::EncodeUrlRFC3986((char **)(a1 + 132), (int)(uintptr_t)(&v9));
  g4_std::string::append_str((char *)&v8 + 1, &v9);
  *((uint32_t *)v3 + 8) = 3005;
  g4_std::string::construct_copy(v10, (char *)&v8 + 1);
  g4_std::string::assign_str((char *)v3 + 36, v10);
  g4_std::string::Destroy(v10);
  v11 = (int)(uintptr_t)(&dword_213B814);
  v4 = gaia::BaseServiceManager::SendCompleteRequest(a1, v3, (int)(uintptr_t)(&v11));
  if ( v4 == 0 )
  {
    Json::Reader::Construct((Json::Reader::Self *)v14);
    Json::Value::Construct((int)(uintptr_t)(v13), nullptr);
    if ( (uint8_t)Json::Reader::parse(v14, (int)(uintptr_t)(&v11), (Json::Value::Self *)v13, 1) != 0
      && Json::Value::isMember((Json::Value::Self *)v13, "pandora")
      && (v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v13, "pandora"), Json::Value::type(v6) == 4) )
    {
      v7 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v13, "pandora"));
      Json::Value::asString((Json::Value::Self *)v12, v7);
      g4_std::string::assign_str(a2, v12);
      g4_std::string::Destroy(v12);
    }
    else
    {
      v4 = -34;
    }
    Json::Value::Destroy((Json::Value::Self *)v13);
    sub_545800((int)(uintptr_t)(v14));
  }
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy((char *)&v8 + 1);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::GetServiceUrl  (binary VA: 0x14b3e10)
// Original: gaia::Pandora::GetServiceUrl
// ----------------------------------------------------------------------------
int gaia::Pandora::GetServiceUrl(int a1, Json::Value::Self *a2, int a3, gaia::GaiaRequest::Self *a4, char a5, void (*a6)(int, int *, uint32_t, int), int a7)
{
  int v7;
  gaia::ServiceRequest::Self *v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef char *_g4_t_v17;
  typedef uint8_t _g4_t_v18[4];
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v17)) > _g4_s7 ? (36u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v18)) > _g4_s8 ? (40u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v19)) > _g4_s9 ? (44u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v20)) > _g4_s10 ? (48u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v21)) > _g4_s11 ? (64u + sizeof(_g4_t_v21)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);

  v7 = -3;
  if ( *(uint8_t *)a2 != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), (char *)a2, (int)(uintptr_t)(&v10));
    if ( Json::Value::isMember((Json::Value::Self *)(a1 + 168), (char *)a2) )
    {
      Json::Value::Construct((Json::Value::Self *)v20, (const char *)&unk_1B15112);
      Json::Value::get((Json::Value::Self *)v21, (Json::Value::Self *)(a1 + 168), a2, (Json::Value::Self *)v20);
      Json::Value::asString((Json::Value::Self *)&v17, (int)(uintptr_t)(v21));
      Json::Value::Destroy((Json::Value::Self *)v21);
      Json::Value::Destroy((Json::Value::Self *)v20);
      if ( a5 == 0 )
      {
        g4_std::string::assign_str(a3, &v17);
        v7 = 0;
        g4_std::string::Destroy(&v17);
        goto LABEL_12;
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), v17, (int)(uintptr_t)(&v10) + 1);
      a6(3004, &v12, 0, a7);
      g4_std::string::Destroy(&v12);
      g4_std::string::Destroy(&v17);
    }
    v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
    gaia::ServiceRequest::Construct(v8, a4);
    v13 = (int)(uintptr_t)(&dword_213B814);
    v14 = &dword_213B814;
    if ( g4_std::string::compare((int)(uintptr_t)(&v11), "pandora") != 0 )
    {
      if ( *(uint32_t *)(*(uint32_t *)(a1 + 52) - 12) == 0 )
      {
        gaia::ServiceRequest::Drop(v8);
        v7 = -4;
        g4_std::string::Destroy(&v14);
LABEL_11:
        g4_std::string::Destroy(&v13);
LABEL_12:
        g4_std::string::Destroy(&v11);
        return v7;
      }
      g4_std::string::append((int)(uintptr_t)(&v13), "/locate", 7u);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "service=", (int)(uintptr_t)(&v10) + 2);
      gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), &v15, (char **)&v11);
      g4_std::string::Destroy(&v15);
      g4_std::string::construct_copy(v16, &v11);
      *((uint32_t *)v8 + 8) = gaia::Pandora::GetOpCode((int)(uintptr_t)(v16));
      g4_std::string::Destroy(v16);
      g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, &unk_1B15112, 0);
      g4_std::string::assign_str((char *)v8 + 44, &v13);
      g4_std::string::assign_str((char *)v8 + 48, &v14);
    }
    else
    {
      g4_std::string::append((int)(uintptr_t)(&v13), "http://", 7u);
      g4_std::string::append((int)(uintptr_t)(&v13), "eve.gameloft.com:20001", 0x16u);
      g4_std::string::append((int)(uintptr_t)(&v13), "/config/", 8u);
      v17 = (char *)&dword_213B814;
      glwebtools::Codec::EncodeUrlRFC3986((char **)(a1 + 132), (int)(uintptr_t)(&v17));
      g4_std::string::append_str(&v13, &v17);
      *((uint32_t *)v8 + 8) = 3005;
      g4_std::string::construct_copy(v18, &v13);
      g4_std::string::assign_str((char *)v8 + 36, v18);
      g4_std::string::Destroy(v18);
      g4_std::string::Destroy(&v17);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 3);
    v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, (int)(uintptr_t)(&v19));
    if ( v7 == 0 )
      g4_std::string::assign_str(a3, &v19);
    g4_std::string::Destroy(&v19);
    g4_std::string::Destroy(&v14);
    goto LABEL_11;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::GetServiceUrl  (binary VA: 0x14b4260)
// Original: gaia::Pandora::GetServiceUrl
// ----------------------------------------------------------------------------
int gaia::Pandora::GetServiceUrl(int a1, int a2, Json::Value::Self *a3, int a4, gaia::GaiaRequest::Self *a5, char a6, void (*a7)(int, int *, uint32_t, int), int a8)
{
  int v8;
  gaia::ServiceRequest::Self *v9;
  gaia::Gaia::Self *Instance;
  typedef gaia::ServiceRequest::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int64_t _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[44];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (45u + sizeof(_g4_t_v13)) > _g4_s1 ? (45u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v14)) > _g4_s2 ? (48u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v15)) > _g4_s3 ? (56u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v16)) > _g4_s4 ? (60u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v17)) > _g4_s5 ? (64u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v18)) > _g4_s6 ? (68u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v19)) > _g4_s7 ? (72u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v20)) > _g4_s8 ? (76u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v21)) > _g4_s9 ? (80u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v22)) > _g4_s10 ? (84u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v23)) > _g4_s11 ? (88u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v24)) > _g4_s12 ? (92u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v25)) > _g4_s13 ? (96u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v26)) > _g4_s14 ? (112u + sizeof(_g4_t_v26)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 45u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 84u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 92u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 112u);

  v8 = -3;
  if ( *(uint8_t *)a3 != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14) + 4, (char *)a3, (int)(uintptr_t)(&v13));
    if ( Json::Value::isMember((Json::Value::Self *)(a1 + 168), (char *)a3) )
    {
      Json::Value::Construct((Json::Value::Self *)v25, (const char *)&unk_1B15112);
      Json::Value::get((Json::Value::Self *)v26, (Json::Value::Self *)(a1 + 168), a3, (Json::Value::Self *)v25);
      Json::Value::asString((Json::Value::Self *)&v22, (int)(uintptr_t)(v26));
      Json::Value::Destroy((Json::Value::Self *)v26);
      Json::Value::Destroy((Json::Value::Self *)v25);
      if ( a6 == 0 )
      {
        v8 = 0;
        g4_std::string::assign_str(a4, &v22);
        g4_std::string::Destroy(&v22);
        goto LABEL_11;
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), v22, (int)(uintptr_t)(&v13) + 1);
      a7(3004, &v15, 0, a8);
      g4_std::string::Destroy(&v15);
      g4_std::string::Destroy(&v22);
    }
    v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
    gaia::ServiceRequest::Construct(v9, a5);
    v16 = (int)(uintptr_t)(&dword_213B814);
    v17 = &dword_213B814;
    if ( g4_std::string::compare((int)(uintptr_t)(&v14) + 4, "pandora") != 0 )
    {
      if ( *(uint32_t *)(*(uint32_t *)(a1 + 52) - 12) == 0 )
      {
        gaia::ServiceRequest::Drop(v9);
        v8 = -4;
        goto LABEL_10;
      }
      g4_std::string::append((int)(uintptr_t)(&v16), "/locate", 7u);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "service=", (int)(uintptr_t)(&v13) + 2);
      gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v17), &v18, (char **)&v14 + 1);
      g4_std::string::Destroy(&v18);
      g4_std::string::construct_copy(v19, (char *)&v14 + 4);
      *((uint32_t *)v9 + 8) = gaia::Pandora::GetOpCode((int)(uintptr_t)(v19));
      g4_std::string::Destroy(v19);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v14));
      Instance = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
      if ( gaia::Gaia::GetCredentialDetails(Instance, a2, 2, (gaia::Gaia::Self *)&v22) != 0 )
      {
        v12 = v9;
        v8 = -4;
        gaia::ServiceRequest::Drop(v12);
        g4_std::string::Destroy(&v22);
LABEL_10:
        g4_std::string::Destroy(&v17);
        g4_std::string::Destroy(&v16);
LABEL_11:
        g4_std::string::Destroy((char *)&v14 + 4);
        return v8;
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "&client_id=", (int)(uintptr_t)(&v14) + 1);
      gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v17), &v20, (char **)(a1 + 132));
      g4_std::string::Destroy(&v20);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "&credential=", (int)(uintptr_t)(&v14) + 2);
      gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v17), &v21, &v22);
      g4_std::string::Destroy(&v21);
      g4_std::string::Destroy(&v22);
      g4_std_compat::string_assign((int)(uintptr_t)(v9) + 40, &unk_1B15112, 0);
      g4_std::string::assign_str((char *)v9 + 44, &v16);
      g4_std::string::assign_str((char *)v9 + 48, &v17);
    }
    else
    {
      g4_std::string::append((int)(uintptr_t)(&v16), "http://", 7u);
      g4_std::string::append((int)(uintptr_t)(&v16), "eve.gameloft.com:20001", 0x16u);
      g4_std::string::append((int)(uintptr_t)(&v16), "/config/", 8u);
      v22 = (char *)&dword_213B814;
      glwebtools::Codec::EncodeUrlRFC3986((char **)(a1 + 132), (int)(uintptr_t)(&v22));
      g4_std::string::append_str(&v16, &v22);
      *((uint32_t *)v9 + 8) = 3005;
      g4_std::string::construct_copy(v23, &v16);
      g4_std::string::assign_str((char *)v9 + 36, v23);
      g4_std::string::Destroy(v23);
      g4_std::string::Destroy(&v22);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 3);
    v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9, (int)(uintptr_t)(&v24));
    if ( v8 == 0 )
      g4_std::string::assign_str(a4, &v24);
    g4_std::string::Destroy(&v24);
    goto LABEL_10;
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::Construct  (binary VA: 0x14c08b0)
// Original: gaia::Pandora::Pandora
// ----------------------------------------------------------------------------
int gaia::Pandora::Construct(gaia::BaseServiceManager::Self *a1, int a2)
{
  int MaxParalelRequests;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (6u + sizeof(_g4_t_v4)) > _g4_s0 ? (6u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 6u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  MaxParalelRequests = gaia::utils::GetMaxParalelRequests(11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "pandora", (int)(uintptr_t)(&v4));
  gaia::BaseServiceManager::Construct(a1, (int)(uintptr_t)(&v5), a2, MaxParalelRequests);
  g4_std::string::Destroy(&v5);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095D68);
  glwebtools::Mutex::Construct((gaia::BaseServiceManager::Self *)((char *)a1 + 156));
  *((uint32_t *)a1 + 41) = (uint32_t)(uintptr_t)(&dword_213B814);
  Json::Value::Construct((int)(uintptr_t)(a1) + 168, nullptr);
  *((uint32_t *)a1 + 46) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), (char *)&unk_1B15112, (int)(uintptr_t)(&v4) + 1);
  gaia::Pandora::setServerDate((int)(uintptr_t)(a1), (int)(uintptr_t)(v6));
  return ((g4_std::string::Destroy(v6)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: gaia::Pandora::NeedsLinkRefreshing  (binary VA: 0x14c7160)
// Original: gaia::Pandora::NeedsLinkRefreshing
// ----------------------------------------------------------------------------
int gaia::Pandora::NeedsLinkRefreshing()
{
  return 0;
}


