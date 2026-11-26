#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia_Hestia.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::SetSaveConfigFlag  (binary VA: 0x1442db0)
// Original: gaia::Gaia_Hestia::SetSaveConfigFlag
// ----------------------------------------------------------------------------
gaia::Gaia_Hestia::Self * gaia::Gaia_Hestia::SetSaveConfigFlag(gaia::Gaia_Hestia::Self *self, bool a2)
{
  *((uint8_t *)self + 60) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetSaveConfigFlag  (binary VA: 0x1442dc0)
// Original: gaia::Gaia_Hestia::GetSaveConfigFlag
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::GetSaveConfigFlag(gaia::Gaia_Hestia::Self *self)
{
  return *((uint8_t *)self + 60);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::DecryptConfig  (binary VA: 0x1442dd0)
// Original: gaia::Gaia_Hestia::DecryptConfig
// ----------------------------------------------------------------------------
char * gaia::Gaia_Hestia::DecryptConfig(int a1, int *a2, int a3)
{
  int v3;
  int *s;
  size_t v5;
  size_t n;
  char v7;
  int v8;
  int v9;
  int v10;
  void *v12;
  typedef char *_g4_t_s2;
  typedef char *_g4_t_s2a;
  typedef char *_g4_t_s2b;
  typedef char *_g4_t_s2c;
  typedef char _g4_t_v17;
  typedef uint8_t _g4_t_v18[7];
  typedef int _g4_t_v19;
  typedef char _g4_t_v20[60];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_s2)) > _g4_s0 ? (12u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_s2a)) > _g4_s1 ? (12u + sizeof(_g4_t_s2a)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_s2b)) > _g4_s2 ? (12u + sizeof(_g4_t_s2b)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_s2c)) > _g4_s3 ? (12u + sizeof(_g4_t_s2c)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v17)) > _g4_s4 ? (20u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (21u + sizeof(_g4_t_v18)) > _g4_s5 ? (21u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v19)) > _g4_s6 ? (28u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v20)) > _g4_s7 ? (32u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 12u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 12u);
  _g4_t_s2b &s2b = *reinterpret_cast<_g4_t_s2b *>(_g4_sf + 12u);
  _g4_t_s2c &s2c = *reinterpret_cast<_g4_t_s2c *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 21u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);

  v3 = 0;
  s = nullptr;
  v5 = a2[1] - *a2;
  if ( v5 != 0 )
  {
    s2 = (char *)(a2[1] - *a2);
    v3 = opNew(v5);
    s = (int *)v3;
    v5 = (size_t)s2;
  }
  n = (size_t)s + v5 - v3;
  s2a = (char *)v5;
  memset(s, 0, n);
  v7 = glwebtools::Codec::DecryptXXTEA(
         *a2,
         (glwebtools::Codec::Self *)*a2,
         (size_t)s2a,
         (glwebtools::Codec::Self *)s,
         s2a,
         (unsigned int)(uintptr_t)(&unk_20C68A0));
  v8 = -3;
  if ( v7 != 0 )
  {
    v9 = *s;
    if ( *s <= n - 4 )
    {
      sub_193A970((int)(uintptr_t)(&v18[3]), (char *)s + v9 + 4, 32, (int)(uintptr_t)(&v17));
      glwebtools::Codec::GenerateMD5((glwebtools::Codec::Self *)s, v9 + 4, (unsigned int)(uintptr_t)(v20));
      v10 = *(uint32_t *)&v18[3];
      if ( strncmp(*(const char **)&v18[3], v20, 0x20u) == 0 )
      {
        sub_193A970((int)(uintptr_t)(&v19), s + 1, v9, (int)(uintptr_t)(v18));
        g4_std::string::assign_str(a3, &v19);
        v12 = (void *)(v19 - 12);
        if ( (uint32_t *)(v19 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
        v10 = *(uint32_t *)&v18[3];
        v8 = 0;
      }
      else
      {
        v8 = -4;
      }
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        s2c = (char *)v8;
        g4_std::string::Rep::M_destroy((void *)(v10 - 12));
        v8 = (int)(uintptr_t)(s2c);
      }
    }
  }
  if ( s != nullptr )
  {
    s2b = (char *)v8;
    opDelete(s);
    return s2b;
  }
  return (char *)v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::SaveConfig  (binary VA: 0x1442f90)
// Original: gaia::Gaia_Hestia::SaveConfig
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::SaveConfig(int a1, int a2, int a3)
{
  FILE *s;
  void *v4;
  int result;
  typedef size_t _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v7)) > _g4_s1 ? (26u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 26u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), "wb", (int)(uintptr_t)(&v7));
  s = (FILE *)gaia::IStorageWrapper::OpenFile(a1 + 48, a3, v8);
  v4 = (void *)(v8[0] - 12);
  if ( (uint32_t *)(v8[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( s == nullptr )
    return -6;
  v6 = fwrite(*(const void **)a2, 1u, *(uint32_t *)(a2 + 4) - *(uint32_t *)a2, s);
  gaia::IStorageWrapper::CloseFile(a1 + 48, s);
  result = -6;
  if ( v6 == *(uint32_t *)(a2 + 4) - *(uint32_t *)a2 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::ConvertTimeStringToSec  (binary VA: 0x1443090)
// Original: gaia::Gaia_Hestia::ConvertTimeStringToSec
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::ConvertTimeStringToSec(int a1, int *a2)
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
    v6 = (struct tm *)gaia::utils::gmtimeMx((gaia::utils::Self *)&timer, (const int *)"%Y-%m-%d %H:%M:%SZ");
    v7 = v5 - mktime(v6);
    return v7 + mktime(&tp);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetTimeString  (binary VA: 0x1443140)
// Original: gaia::Gaia_Hestia::GetTimeString
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::GetTimeString(int a1, int a2, int a3)
{
  struct tm *v3;
  time_t v4;
  struct tm *v5;
  struct tm *v6;
  int v7;
  int tm_mon;
  size_t v9;
  typedef signed int _g4_t_tm_mday;
  typedef signed int _g4_t_tm_hour;
  typedef signed int _g4_t_tm_min;
  typedef size_t _g4_t_tm_sec;
  typedef time_t _g4_t_timer;
  typedef time_t _g4_t_v16;
  typedef char _g4_t_s[20];
  typedef char _g4_t_dest[49];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_tm_mday)) > _g4_s0 ? (8u + sizeof(_g4_t_tm_mday)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_tm_hour)) > _g4_s1 ? (8u + sizeof(_g4_t_tm_hour)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_tm_min)) > _g4_s2 ? (8u + sizeof(_g4_t_tm_min)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_tm_sec)) > _g4_s3 ? (8u + sizeof(_g4_t_tm_sec)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_timer)) > _g4_s4 ? (44u + sizeof(_g4_t_timer)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v16)) > _g4_s5 ? (48u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (55u + sizeof(_g4_t_s)) > _g4_s6 ? (55u + sizeof(_g4_t_s)) : _g4_s6,
    _g4_s8 = (75u + sizeof(_g4_t_dest)) > _g4_s7 ? (75u + sizeof(_g4_t_dest)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_tm_mday &tm_mday = *reinterpret_cast<_g4_t_tm_mday *>(_g4_sf + 8u);
  _g4_t_tm_hour &tm_hour = *reinterpret_cast<_g4_t_tm_hour *>(_g4_sf + 8u);
  _g4_t_tm_min &tm_min = *reinterpret_cast<_g4_t_tm_min *>(_g4_sf + 8u);
  _g4_t_tm_sec &tm_sec = *reinterpret_cast<_g4_t_tm_sec *>(_g4_sf + 8u);
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 55u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 75u);

  time(&timer);
  v3 = localtime(&timer);
  v4 = mktime(v3);
  v5 = gmtime(&timer);
  v16 = a2 - (v4 - mktime(v5));
  v6 = localtime(&v16);
  v6->tm_yday = -1;
  v6->tm_isdst = -1;
  v7 = v6->tm_year + 1900;
  dest[0] = 0;
  sprintf(s, "%d-", v7);
  strcat(dest, s);
  tm_mon = v6->tm_mon;
  if ( tm_mon <= 8 )
    sprintf(s, "0%d-", tm_mon + 1);
  else
    sprintf(s, "%d-", tm_mon + 1);
  strcat(dest, s);
  tm_mday = v6->tm_mday;
  if ( tm_mday <= 9 )
    sprintf(s, "0%d ", tm_mday);
  else
    sprintf(s, "%d ", tm_mday);
  strcat(dest, s);
  tm_hour = v6->tm_hour;
  if ( tm_hour <= 9 )
    sprintf(s, "0%d:", tm_hour);
  else
    sprintf(s, "%d:", tm_hour);
  strcat(dest, s);
  tm_min = v6->tm_min;
  if ( tm_min <= 9 )
    sprintf(s, "0%d:", tm_min);
  else
    sprintf(s, "%d:", tm_min);
  strcat(dest, s);
  tm_sec = v6->tm_sec;
  if ( v6->tm_sec > 9 )
    sprintf(s, "%dZ", tm_sec);
  else
    sprintf(s, "0%dZ", tm_sec);
  strcat(dest, s);
  sub_1939D80(a3, 0x14u, 0);
  v9 = strlen(dest);
  return (int)(uintptr_t)(g4_std_compat::string_assign(a3, dest, v9));
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::SetAccountToUse  (binary VA: 0x14433a0)
// Original: gaia::Gaia_Hestia::SetAccountToUse
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::SetAccountToUse(int a1, int a2)
{
  *(uint32_t *)(a1 + 56) = a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::UpdateCRMLanguage  (binary VA: 0x14433b0)
// Original: gaia::Gaia_Hestia::UpdateCRMLanguage
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::UpdateCRMLanguage(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 52, a2));
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::Construct  (binary VA: 0x1443450)
// Original: gaia::Gaia_Hestia::Gaia_Hestia
// ----------------------------------------------------------------------------
gaia::Gaia_Hestia::Self * gaia::Gaia_Hestia::Construct(gaia::Gaia_Hestia::Self *self)
{
  gaia::defaultCRMConfig::Self *v1;
  gaia::Gaia_Hestia::Self *result;
  int v3[7];

  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095A78);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  glwebtools::Mutex::Construct((gaia::Gaia_Hestia::Self *)((char *)self + 40));
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&off_2095EA8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 52, (char *)&unk_1B15112, (int)(uintptr_t)(v3));
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)((char *)self + 68);
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)((char *)self + 68);
  *((uint32_t *)self + 14) = 19;
  *((uint8_t *)self + 60) = 1;
  *((uint8_t *)self + 61) = 1;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint8_t *)self + 88) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 19;
  *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 108, "en", 2u);
  *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 132, &unk_1B15112, 0);
  *((uint32_t *)self + 36) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 136) = 0;
  *((uint8_t *)self + 137) = 0;
  *((uint8_t *)self + 138) = 0;
  *((uint8_t *)self + 139) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 144, &unk_1B15112, 0);
  *((uint8_t *)self + 148) = 0;
  *((uint8_t *)self + 153) = 0;
  *((uint8_t *)self + 149) = 0;
  *((uint8_t *)self + 150) = 0;
  *((uint8_t *)self + 151) = 0;
  *((uint8_t *)self + 152) = 0;
  *((uint32_t *)self + 39) = -1;
  *((uint32_t *)self + 40) = -1;
  v1 = (gaia::defaultCRMConfig::Self *)opNew(8u);
  result = (gaia::Gaia_Hestia::Self *)(gaia::defaultCRMConfig::defaultCRMConfig(v1));
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)(v1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::IAPRefreshCB  (binary VA: 0x1444b70)
// Original: gaia::Gaia_Hestia::IAPRefreshCB
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::IAPRefreshCB(gaia::Gaia_Hestia::Self *self)
{
  int result;
  void (*v2)(int);
  int v3;
  uint8_t *v4;
  void (*v5)(int);
  int v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int Instance;

  if ( *(uint32_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 160) == 1 )
  {
    if ( *(uint32_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 156) == 1 )
    {
      *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 152) = (uint8_t)(uintptr_t)self;
      if ( (uint8_t)(uintptr_t)self != 0 )
      {
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 152) = 1;
      }
      else
      {
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 148) = 1;
        Instance = gaia::Gaia::GetInstance();
        g4_std::string::append(*(uint32_t *)(Instance + 588) + 144, "Failed to refresh IAP with default config", 0x29u);
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 152) = 0;
      }
    }
    if ( *(uint32_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 156) == 2 )
    {
      *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 152) = (uint8_t)(uintptr_t)self;
      if ( (uint8_t)(uintptr_t)self != 0 )
      {
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 152) = 1;
      }
      else
      {
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 148) = 1;
        v10 = gaia::Gaia::GetInstance();
        g4_std::string::append(*(uint32_t *)(v10 + 588) + 144, "Failed to refresh IAP with cached config", 0x28u);
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 152) = 0;
      }
    }
    v5 = *(void (**)(int))(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 32);
    v6 = gaia::Gaia::GetInstance();
    v5(*(uint32_t *)(v6 + 588) + 140);
    v7 = *(uint8_t **)(gaia::Gaia::GetInstance() + 588);
    g4_std_compat::string_assign((int)(uintptr_t)(v7 + 144), &unk_1B15112, 0);
    v7[148] = 0;
    v7[153] = 0;
    v7[149] = 0;
    v7[150] = 0;
    v7[151] = 0;
    v7[152] = 0;
  }
  result = *(uint32_t *)(gaia::Gaia::GetInstance() + 588);
  if ( *(uint32_t *)(result + 160) == 2 )
  {
    if ( *(uint32_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 156) == 1 )
    {
      *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 139) = (uint8_t)(uintptr_t)self;
      if ( (uint8_t)(uintptr_t)self != 0 )
      {
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 139) = 1;
      }
      else
      {
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 136) = 1;
        v8 = gaia::Gaia::GetInstance();
        g4_std::string::append(*(uint32_t *)(v8 + 588) + 132, "Failed to refresh IAP with default config", 0x29u);
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 139) = 0;
      }
    }
    if ( *(uint32_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 156) == 2 )
    {
      *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 139) = (uint8_t)(uintptr_t)self;
      if ( (uint8_t)(uintptr_t)self != 0 )
      {
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 139) = 1;
      }
      else
      {
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 136) = 1;
        v9 = gaia::Gaia::GetInstance();
        g4_std::string::append(*(uint32_t *)(v9 + 588) + 132, "Failed to refresh IAP with cached config", 0x28u);
        *(uint8_t *)(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 139) = 0;
      }
    }
    v2 = *(void (**)(int))(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 36);
    v3 = gaia::Gaia::GetInstance();
    v2(*(uint32_t *)(v3 + 588) + 132);
    v4 = *(uint8_t **)(gaia::Gaia::GetInstance() + 588);
    result = (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(v4 + 132), &unk_1B15112, 0));
    v4[136] = 0;
    v4[137] = 0;
    v4[138] = 0;
    v4[139] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::DispatchDefaultConfig  (binary VA: 0x1444f40)
// Original: gaia::Gaia_Hestia::DispatchDefaultConfig
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::DispatchDefaultConfig(int a1, int a2, char a3, int a4, int a5)
{
  oi::OfflineStore::Self *v5;
  int v6;
  gaia::CrmManager::Self *v7;
  void (*v8)(int);
  int v9;
  void *v10;
  uint32_t *v12;
  int Instance;
  typedef oi::OfflineStore::Self *_g4_t_sa;
  typedef char *_g4_t_s;
  typedef gaia::ThreadManager::Self *_g4_t_sb;
  typedef uint16_t _g4_t_v17[3];
  typedef char _g4_t_v18[32];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_sa)) > _g4_s0 ? (0u + sizeof(_g4_t_sa)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_s)) > _g4_s1 ? (0u + sizeof(_g4_t_s)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_sb)) > _g4_s2 ? (0u + sizeof(_g4_t_sb)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v17)) > _g4_s3 ? (38u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 0u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 38u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  if ( a3 != 0 )
  {
    v12 = (uint32_t *)opNew(0x44u);
    *v12 = a5;
    v12[1] = a4;
    v12[2] = 6505;
    Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
    v12[7] = 0;
    v12[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
    v12[13] = 0;
    v12[14] = 0;
    v12[15] = a1 + 104;
    v12[16] = a2;
    Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(sb));
    gaia::ThreadManager::pushTask(Instance, v12);
    return 0;
  }
  else
  {
    *(uint32_t *)(a1 + 36) = a2;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v17));
    gaia::defaultCRMConfig::GetOfflineItemsConfig(*(uint32_t *)(a1 + 128), (int)(uintptr_t)(&v17[1]));
    v5 = (oi::OfflineStore::Self *)oi::OfflineStore::GetInstance(sa);
    v6 = oi::OfflineStore::Refresh(v5, (int)(uintptr_t)(&v17[1]));
    if ( v6 != 0 )
    {
      *(uint8_t *)(a1 + 136) = 1;
      g4_std::string::append(a1 + 132, "Failed to refresh offline items with cached config, error: ", 0x3Bu);
      sprintf(v18, "%d\n", v6);
      g4_std::string::append(a1 + 132, v18, strlen(v18));
      *(uint8_t *)(a1 + 137) = 0;
    }
    else
    {
      *(uint8_t *)(a1 + 137) = 1;
    }
    v7 = (gaia::CrmManager::Self *)gaia::CrmManager::GetInstance((gaia::CrmManager::Self *)s);
    gaia::CrmManager::ResetCrmManager(v7);
    v8 = *(void (**)(int))(a1 + 36);
    v9 = gaia::Gaia::GetInstance();
    v8(*(uint32_t *)(v9 + 588) + 132);
    v10 = (void *)(*(uint32_t *)&v17[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v17[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v17[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetFeedEtag  (binary VA: 0x1445160)
// Original: gaia::Gaia_Hestia::GetFeedEtag
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::GetFeedEtag(int a1, int a2)
{
  int Instance;

  Instance = gaia::Gaia::GetInstance();
  return gaia::Hestia::GetFeedEtag(*(uint32_t *)(Instance + 52), a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::CancelRequest  (binary VA: 0x1445780)
// Original: gaia::Gaia_Hestia::CancelRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::CancelRequest(int a1, int a2)
{
  int v2;
  glwebtools::Mutex::Self *v3;
  int v4;
  int Instance;
  int v7;
  glwebtools::Mutex::Self *v8;

  v2 = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    v3 = (glwebtools::Mutex::Self *)(a1 + 40);
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 40));
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 52) != 0 )
    {
      if ( a2 == 1 )
      {
        Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v8));
        gaia::ThreadManager::CancelRequest(Instance, 6500);
      }
      v4 = gaia::Gaia::GetInstance();
      v2 = gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v4 + 52), a2);
      glwebtools::Mutex::Unlock(v3);
    }
    else
    {
      v7 = gaia::Gaia::GetInstance();
      v2 = 0;
      gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v7 + 48), 3016);
      glwebtools::Mutex::Unlock(v3);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetHestiaStatus  (binary VA: 0x1451540)
// Original: gaia::Gaia_Hestia::GetHestiaStatus
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::GetHestiaStatus(gaia::Gaia_Hestia::Self *self)
{
  glwebtools::Mutex::Self *v1;
  int ServiceUrl;
  int Instance;
  typedef gaia::BaseServiceManager::Self *_g4_t_v5;
  typedef glwebtools::Mutex::Self *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v8)) > _g4_s3 ? (27u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 27u);

  v1 = (glwebtools::Mutex::Self *)(gaia::Gaia::GetInstance() + 496);
  glwebtools::Mutex::Lock(v1);
  ServiceUrl = 0;
  if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 52) == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v8) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(v8));
    Instance = gaia::Gaia::GetInstance();
    ServiceUrl = gaia::Gaia::GetServiceUrl(Instance, "config", (int)(uintptr_t)(v8) + 1, 0, 0, 0);
    v6 = (glwebtools::Mutex::Self *)((gaia::Gaia_Hestia::Self *)((char *)self + 40));
    glwebtools::Mutex::Lock((gaia::Gaia_Hestia::Self *)((char *)self + 40));
    if ( ServiceUrl != 0
      || (v7 = gaia::Gaia::GetInstance(),
          v5 = (gaia::BaseServiceManager::Self *)opNew(0xA0u),
          gaia::Hestia::Construct(v5, (int)(uintptr_t)(v8) + 1, v7 + 240),
          *(uint32_t *)(gaia::Gaia::GetInstance() + 52) = (uint32_t)(uintptr_t)(v5),
          *(uint32_t *)(gaia::Gaia::GetInstance() + 52) == 0) )
    {
      ServiceUrl = -1;
      glwebtools::Mutex::Unlock(v6);
      g4_std::string::Destroy((char *)v8 + 1);
    }
    else
    {
      glwebtools::Mutex::Unlock(v6);
      g4_std::string::Destroy((char *)v8 + 1);
    }
  }
  glwebtools::Mutex::Unlock(v1);
  return ServiceUrl;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::Destroy  (binary VA: 0x1453090)
// Original: gaia::Gaia_Hestia::~Gaia_Hestia
// ----------------------------------------------------------------------------
void gaia::Gaia_Hestia::Destroy(gaia::Gaia_Hestia::Self *self)
{
  gaia::defaultCRMConfig::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = *((gaia::defaultCRMConfig::Self **)self + 32);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095A78);
  if ( v1 != nullptr )
  {
    gaia::defaultCRMConfig::Destroy(v1);
    opDelete(v1);
  }
  v2 = *((uint32_t *)self + 36);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 33);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 27);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  g4_std::Rb_tree_unsigned_long_pair_unsig_4fe1b0::M_erase(
    (int)(uintptr_t)(self) + 64,
    *((void **)self + 18));
  v5 = *((uint32_t *)self + 13);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  glwebtools::Mutex::Destroy((gaia::Gaia_Hestia::Self *)((char *)self + 40));
  gaia::GaiaSimpleEventDispatcher_string_4c037c::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::Destroy_ea14531d0  (binary VA: 0x14531d0)
// Original: gaia::Gaia_Hestia::~Gaia_Hestia
// ----------------------------------------------------------------------------
void gaia::Gaia_Hestia::Destroy_ea14531d0(gaia::Gaia_Hestia::Self *self)
{
  gaia::Gaia_Hestia::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetCurrentConfig  (binary VA: 0x1453210)
// Original: gaia::Gaia_Hestia::GetCurrentConfig
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::GetCurrentConfig(int a1, int a2)
{
  int v2;
  int v3;
  void *v4;
  void *ptr;
  size_t n;
  int v7;
  volatile int32_t *v8;
  typedef FILE *_g4_t_stream;
  typedef size_t _g4_t_v11;
  typedef int _g4_t_v12;
  typedef volatile int32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef size_t _g4_t_v15;
  typedef void *_g4_t_v16;
  typedef void *_g4_t_src;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_stream)) > _g4_s0 ? (8u + sizeof(_g4_t_stream)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_src)) > _g4_s7 ? (40u + sizeof(_g4_t_src)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v18)) > _g4_s8 ? (44u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_stream &stream = *reinterpret_cast<_g4_t_stream *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  v16 = nullptr;
  src = nullptr;
  v18 = 0;
  v13 = (volatile int32_t *)&dword_213B814;
  v2 = *(uint32_t *)(a1 + 76);
  if ( v2 == a1 + 68 )
  {
    v8 = (volatile int32_t *)&dword_213B814;
    v7 = -12;
  }
  else
  {
    if ( *(uint32_t *)(*(uint32_t *)(v2 + 20) - 12) == 0 )
      __assert2(
        "../../../../../lib/gaia/include/../source/GaiaImplementation/Gaia_Hestia.cpp",
        1549,
        "int gaia::Gaia_Hestia::GetCurrentConfig(std::string&)",
        "arr.fileName.size()");
    v3 = v2 + 20;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "rb", (int)(uintptr_t)(&v12));
    stream = (FILE *)gaia::IStorageWrapper::OpenFile(a1 + 48, v3, &v14);
    v4 = (void *)(v14 - 12);
    if ( (uint32_t *)(v14 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    if ( stream != nullptr )
    {
      g4_std::string::assign_str(&v13, v3);
      gaia::IStorageWrapper::GetFileSize(a1 + 48, &v13, &v15);
      ptr = v16;
      n = v15;
      BYTE2(v12) = 0;
      if ( v15 > (uint8_t *)src - (uint8_t *)v16 )
      {
        g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v16), src, v15 - ((uint8_t *)src - (uint8_t *)v16), (int)(uintptr_t)(&v12) + 2);
        ptr = v16;
      }
      else if ( v15 < (uint8_t *)src - (uint8_t *)v16 )
      {
        src = (char *)v16 + v15;
      }
      v11 = fread(ptr, 1u, n, stream);
      gaia::IStorageWrapper::CloseFile(a1 + 48, stream);
      if ( v11 == n )
      {
        v7 = (int)(uintptr_t)(gaia::Gaia_Hestia::DecryptConfig(a1, &v16, a2));
        v8 = v13;
      }
      else
      {
        v8 = v13;
        src = v16;
        v7 = -5;
      }
    }
    else
    {
      v8 = v13;
      v7 = -12;
    }
  }
  if ( v8 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v8 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)(v8 - 3));
  if ( v16 != nullptr )
    opDelete(v16);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::EncryptConfig  (binary VA: 0x1453470)
// Original: gaia::Gaia_Hestia::EncryptConfig
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Hestia::EncryptConfig(int a1, const void **a2, glwebtools::Codec::Self **a3)
{
  size_t *s;
  glwebtools::Codec::Self *EncryptedXXTEADataSize;
  size_t *v5;
  glwebtools::Codec::Self *v6;
  size_t v7;
  glwebtools::Codec::Self *v8;
  glwebtools::Codec::Self *v9;
  glwebtools::Codec::Self *v10;
  unsigned int v11;
  typedef size_t _g4_t_n;
  typedef char _g4_t_v14;
  typedef uint32_t _g4_t_v15[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_n)) > _g4_s0 ? (8u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v14)) > _g4_s1 ? (31u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v15)) > _g4_s2 ? (32u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 31u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);

  s = nullptr;
  n = *((uint32_t *)*a2 - 3);
  EncryptedXXTEADataSize = glwebtools::Codec::GetEncryptedXXTEADataSize((glwebtools::Codec::Self *)(n + 36));
  v5 = nullptr;
  v6 = EncryptedXXTEADataSize;
  if ( EncryptedXXTEADataSize != nullptr )
  {
    s = (size_t *)opNew((size_t)EncryptedXXTEADataSize);
    v5 = s;
  }
  memset(s, 0, (glwebtools::Codec::Self *)((char *)v6 + (uint32_t)(uintptr_t)(s)) - (glwebtools::Codec::Self *)v5);
  *s = n;
  memcpy(s + 1, *a2, n);
  v7 = n + 4;
  glwebtools::Codec::GenerateMD5((glwebtools::Codec::Self *)s, n + 4, (unsigned int)(uintptr_t)(v15));
  *(size_t *)((char *)s + n + 4) = v15[0];
  *(size_t *)((char *)s + v7 + 4) = v15[1];
  *(size_t *)((char *)s + v7 + 8) = v15[2];
  *(size_t *)((char *)s + v7 + 12) = v15[3];
  *(size_t *)((char *)s + v7 + 16) = v15[4];
  *(size_t *)((char *)s + v7 + 20) = v15[5];
  *(size_t *)((char *)s + v7 + 24) = v15[6];
  *(size_t *)((char *)s + v7 + 28) = v15[7];
  v8 = a3[1];
  v9 = *a3;
  v10 = (glwebtools::Codec::Self *)(v8 - *a3);
  v14 = 0;
  if ( v6 > v10 )
  {
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(a3), v8, v6 - v10, (int)(uintptr_t)(&v14));
    v9 = *a3;
  }
  else if ( v6 < v10 )
  {
    a3[1] = (glwebtools::Codec::Self *)((char *)v6 + (uint32_t)(uintptr_t)(v9));
  }
  v11 = (uint8_t)glwebtools::Codec::EncryptXXTEA(
                           (glwebtools::Codec::Self *)s,
                           n + 36,
                           v9,
                           v6,
                           (unsigned int)(uintptr_t)(&unk_20C68A0)) == 0
      ? 0xFFFFFFFE
      : 0;
  opDelete(s);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::SaveConfigTable  (binary VA: 0x14535f0)
// Original: gaia::Gaia_Hestia::SaveConfigTable
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Hestia::SaveConfigTable(long double a1, gaia::Gaia_Hestia::Self *self)
{
  int i;
  void (***v3)(Json::StyledWriter::Self *);
  unsigned int v4;
  Json::Value::Self *v5;
  void *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  void *v11;
  unsigned int v12;
  FILE *s;
  void *v14;
  void *v15;
  int v16;
  void *v17;
  void *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  volatile int32_t *v22;
  typedef char *_g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef int _g4_t_v26;
  typedef volatile int32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef void *_g4_t_ptr;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[36];
  typedef void (**_g4_t_v42)(Json::StyledWriter::Self *);
  typedef void *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (46u + sizeof(_g4_t_v26)) > _g4_s2 ? (46u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v27)) > _g4_s3 ? (56u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v28)) > _g4_s4 ? (60u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v29)) > _g4_s5 ? (64u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v30)) > _g4_s6 ? (68u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v31)) > _g4_s7 ? (72u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_ptr)) > _g4_s8 ? (76u + sizeof(_g4_t_ptr)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v33)) > _g4_s9 ? (80u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v34)) > _g4_s10 ? (84u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v35)) > _g4_s11 ? (88u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v36)) > _g4_s12 ? (104u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v37)) > _g4_s13 ? (120u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (136u + sizeof(_g4_t_v38)) > _g4_s14 ? (136u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (152u + sizeof(_g4_t_v39)) > _g4_s15 ? (152u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (168u + sizeof(_g4_t_v40)) > _g4_s16 ? (168u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (184u + sizeof(_g4_t_v41)) > _g4_s17 ? (184u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (220u + sizeof(_g4_t_v42)) > _g4_s18 ? (220u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (224u + sizeof(_g4_t_v43)) > _g4_s19 ? (224u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (228u + sizeof(_g4_t_v44)) > _g4_s20 ? (228u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (236u + sizeof(_g4_t_v45)) > _g4_s21 ? (236u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v46)) > _g4_s22 ? (240u + sizeof(_g4_t_v46)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 46u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 136u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 152u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 168u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 184u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 220u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 224u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 228u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 236u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 240u);

  ptr = nullptr;
  v33 = 0;
  v34 = 0;
  v27 = (volatile int32_t *)(&dword_213B814);
  Json::Value::Construct((int)(uintptr_t)(v35), nullptr);
  for ( i = *((uint32_t *)self + 19); (gaia::Gaia_Hestia::Self *)i != (gaia::Gaia_Hestia::Self *)((char *)self + 68); i = sub_1904890(i) )
  {
    v3 = &v42;
    Json::Value::Construct((int)(uintptr_t)(v36), nullptr);
    v4 = *(uint32_t *)(i + 16);
    v28 = (int)(uintptr_t)(&dword_213B814);
    while ( 1 )
    {
      *((uint8_t *)v3 - 1) = v4 % 0xA + 48;
      v4 /= 0xAu;
      if ( v4 == 0 )
        break;
      v3 = (void (***)(Json::StyledWriter::Self *))((char *)v3 - 1);
    }
    sub_193A9B0((int)(uintptr_t)(&v28), 0, dword_213B808[0], (char *)v3 - 1, (char *)&v42 - ((char *)v3 - 1));
    Json::Value::Construct((int)(uintptr_t)(v37), &v28);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v36, "key");
    Json::Value::opAssign(v5, (const Json::Value::Self *)v37);
    Json::Value::Destroy((Json::Value::Self *)v37);
    v6 = (void *)(v28 - 12);
    if ( (uint32_t *)(v28 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    Json::Value::Construct((Json::Value::Self *)v38, *(const char **)(i + 20));
    v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v36, "fileName");
    Json::Value::opAssign(v7, (const Json::Value::Self *)v38);
    Json::Value::Destroy((Json::Value::Self *)v38);
    Json::Value::Construct((Json::Value::Self *)v39, *(const char **)(i + 24));
    v8 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v36, "etag");
    Json::Value::opAssign(v8, (const Json::Value::Self *)v39);
    Json::Value::Destroy((Json::Value::Self *)v39);
    Json::Value::Construct((Json::Value::Self *)v40, *(uint32_t *)(i + 28));
    v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v36, "UTC");
    Json::Value::opAssign(v9, (const Json::Value::Self *)v40);
    Json::Value::Destroy((Json::Value::Self *)v40);
    Json::Value::Construct((Json::Value::Self *)v41, *(double *)(i + 32));
    v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v36, "monotonic");
    Json::Value::opAssign(v10, (const Json::Value::Self *)v41);
    Json::Value::Destroy((Json::Value::Self *)v41);
    Json::Value::append((Json::Value::Self *)v35, (const Json::Value::Self *)v36);
    Json::Value::Destroy((Json::Value::Self *)v36);
  }
  Json::StyledWriter::Construct((Json::StyledWriter::Self *)&v42);
  Json::StyledWriter::write(a1, (Json::StyledWriter::Self *)&v29, (const Json::Value::Self *)&v42, (Json::Value::Self *)v35);
  g4_std::string::assign_str(&v27, &v29);
  v11 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = 0xFFFFFFF4;
  if ( *((uint32_t *)self + 21) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "wb", (int)(uintptr_t)(&v26) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "filesConfig.dat", (int)(uintptr_t)(&v26));
    v24 = (char *)self + 48;
    s = (FILE *)gaia::IStorageWrapper::OpenFile((char *)self + 48, &v30, &v31);
    v14 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    if ( s != nullptr )
    {
      v12 = gaia::Gaia_Hestia::EncryptConfig((int)(uintptr_t)(self), (const void **)&v27, (glwebtools::Codec::Self **)&ptr);
      if ( v12 != 0 )
      {
        gaia::IStorageWrapper::CloseFile((int)(uintptr_t)(v24), s);
      }
      else
      {
        v16 = v33 - (uint32_t)(uintptr_t)(ptr);
        v25 = fwrite(ptr, 1u, v33 - (uint32_t)(uintptr_t)(ptr), s);
        gaia::IStorageWrapper::CloseFile((int)(uintptr_t)(v24), s);
        if ( v25 != v16 )
          v12 = 0xFFFFFFFA;
      }
    }
    else
    {
      v12 = 0xFFFFFFF4;
    }
  }
  v42 = (void (**)(Json::StyledWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B90));
  v17 = (void *)(v46 - 12);
  if ( (uint32_t *)(v46 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = v44;
  v20 = (uint32_t *)(v43);
  if ( v44 != v43 )
  {
    do
    {
      v21 = (uint32_t *)(*v20 - 12);
      if ( v21 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v20 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v21);
      ++v20;
    }
    while ( v19 != v20 );
    v20 = (uint32_t *)(v43);
  }
  if ( v20 != nullptr )
    opDelete(v20);
  Json::Writer::Destroy((Json::Writer::Self *)&v42);
  Json::Value::Destroy((Json::Value::Self *)v35);
  if ( ptr != nullptr )
    opDelete(ptr);
  v22 = v27 - 3;
  if ( v27 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v22);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::InvalidateConfigsStartingFrom  (binary VA: 0x1453ca0)
// Original: gaia::Gaia_Hestia::InvalidateConfigsStartingFrom
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Hestia::InvalidateConfigsStartingFrom(long double a1, gaia::Gaia_Hestia::Self *self, int a3)
{
  char **v3;
  void *v4;
  char *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v10;
  char **v11;
  int v12;
  char **v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v3 = *((char ***)self + 19);
  if ( (unsigned int)a3 < *((uint32_t *)self + 21) )
  {
    if ( a3 <= 0 )
    {
      if ( a3 != 0 )
      {
        v12 = a3 + 1;
        v13 = *((char ***)self + 19);
        do
        {
          ++v12;
          v13 = (char **)sub_19048F0(v13);
        }
        while ( v12 != 1 );
        v3 = v13;
      }
    }
    else
    {
      v10 = a3 - 1;
      v11 = *((char ***)self + 19);
      do
      {
        --v10;
        v11 = (char **)sub_1904890(v11);
      }
      while ( v10 != -1 );
      v3 = v11;
    }
  }
  v16 = (char *)self + 68;
  if ( (char **)((char *)self + 68) != v3 )
  {
    while ( 1 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), v3[5], (int)(uintptr_t)(&v17));
      gaia::IStorageWrapper::Remove((char *)self + 48, v18);
      v4 = (void *)(v18[0] - 12);
      if ( (uint32_t *)(v18[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      v5 = (char *)sub_1904890(v3);
      v6 = (uint32_t *)sub_1904AE0(v3, v16);
      v7 = v6[6];
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        v15 = v6;
        g4_std::string::Rep::M_destroy((void *)(v7 - 12));
        v6 = v15;
      }
      v8 = v6[5];
      if ( (uint32_t *)(v8 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        v14 = v6;
        g4_std::string::Rep::M_destroy((void *)(v8 - 12));
        v6 = v14;
      }
      opDelete(v6);
      --*((uint32_t *)self + 21);
      if ( v5 == v16 )
        break;
      v3 = (char **)v5;
    }
  }
  return gaia::Gaia_Hestia::SaveConfigTable(a1, self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::InvalidateAllCRMConfigs  (binary VA: 0x1453e70)
// Original: gaia::Gaia_Hestia::InvalidateAllCRMConfigs
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Hestia::InvalidateAllCRMConfigs(long double a1, gaia::Gaia_Hestia::Self *self)
{
  return gaia::Gaia_Hestia::InvalidateConfigsStartingFrom(a1, self, 0);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::DeleteExpiredConfigs  (binary VA: 0x1453ea0)
// Original: gaia::Gaia_Hestia::DeleteExpiredConfigs
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::DeleteExpiredConfigs(long double a1, gaia::Gaia_Hestia::Self *self)
{
  int Instance;
  unsigned int TimeStamp;
  char *v4;
  char *v5;
  uint32_t *v6;
  int v7;
  int v8;
  char *v10;
  uint32_t *v11;
  uint32_t *v12;
  char *v13;

  Instance = gaia::Gaia::GetInstance();
  TimeStamp = gaia::BaseServiceManager::GetTimeStamp(*(gaia::BaseServiceManager::Self **)(Instance + 52));
  v4 = *((char **)self + 19);
  v5 = (char *)self + 68;
  while ( v5 != v4 )
  {
    while ( TimeStamp > *((uint32_t *)v4 + 4) && *((uint32_t *)self + 21) > 1u )
    {
      v10 = v4;
      gaia::IStorageWrapper::Remove((char *)self + 48, v4 + 20);
      v13 = (char *)sub_1904890(v10);
      v6 = (uint32_t *)sub_1904AE0(v10, (char *)self + 68);
      v7 = v6[6];
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        v11 = v6;
        g4_std::string::Rep::M_destroy((void *)(v7 - 12));
        v6 = v11;
      }
      v8 = v6[5];
      if ( (uint32_t *)(v8 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        v12 = v6;
        g4_std::string::Rep::M_destroy((void *)(v8 - 12));
        v6 = v12;
      }
      opDelete(v6);
      v4 = v13;
      --*((uint32_t *)self + 21);
      if ( v5 == v13 )
        goto LABEL_8;
    }
    v4 = (char *)sub_1904890(v4);
  }
LABEL_8:
  gaia::Gaia_Hestia::SaveConfigTable(a1, self);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::storeNewConfig  (binary VA: 0x1453ff0)
// Original: gaia::Gaia_Hestia::storeNewConfig
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::storeNewConfig(long double a1, gaia::Gaia_Hestia::Self *a2, int a3, int a4)
{
  const Json::Value::Self *JSONMessage;
  int v5;
  Json::Value::Self *v7;
  int v8;
  int v9;
  long double v10; // fst7
  uint32_t *v11;
  uint32_t *v12;
  unsigned int v13;
  int *i;
  uint32_t *v15;
  uint32_t *v16;
  char v17; // di
  unsigned int v18;
  char v19;
  bool v20;
  uint32_t *v21;
  typedef uint32_t *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint16_t _g4_t_v27[3];
  typedef const void *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef char _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef char _g4_t_v34;
  typedef void *_g4_t_v35[3];
  typedef uint8_t _g4_t_v36[16];
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int64_t _g4_t_v40 __attribute__((aligned(1)));
  typedef char _g4_t_v41[4];
  typedef char _g4_t_v42[4];
  typedef int _g4_t_v43;
  typedef int64_t _g4_t_v44;
  typedef int _g4_t_v45;
  typedef char _g4_t_v46[4];
  typedef char _g4_t_v47[4];
  typedef int _g4_t_v48;
  typedef int64_t _g4_t_v49 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v50;
  typedef char _g4_t_v51[4];
  typedef char _g4_t_v52[4];
  typedef int _g4_t_v53;
  typedef int64_t _g4_t_v54 __attribute__((aligned(1)));
  typedef void (**_g4_t_v55)(Json::StyledWriter::Self *);
  typedef void *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef char _g4_t_v58[4];
  typedef char _g4_t_v59[28];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v25)) > _g4_s3 ? (20u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v26)) > _g4_s4 ? (28u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (34u + sizeof(_g4_t_v27)) > _g4_s5 ? (34u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v28)) > _g4_s6 ? (40u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v29)) > _g4_s7 ? (44u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v30)) > _g4_s8 ? (48u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v31)) > _g4_s9 ? (52u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v32)) > _g4_s10 ? (56u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v33)) > _g4_s11 ? (60u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v34)) > _g4_s12 ? (64u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v35)) > _g4_s13 ? (68u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v36)) > _g4_s14 ? (80u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v37)) > _g4_s15 ? (96u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v38)) > _g4_s16 ? (100u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v39)) > _g4_s17 ? (104u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v40)) > _g4_s18 ? (108u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v41)) > _g4_s19 ? (116u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v42)) > _g4_s20 ? (120u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v43)) > _g4_s21 ? (124u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v44)) > _g4_s22 ? (128u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v45)) > _g4_s23 ? (156u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (160u + sizeof(_g4_t_v46)) > _g4_s24 ? (160u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (164u + sizeof(_g4_t_v47)) > _g4_s25 ? (164u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v48)) > _g4_s26 ? (168u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v49)) > _g4_s27 ? (172u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (180u + sizeof(_g4_t_v50)) > _g4_s28 ? (180u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (184u + sizeof(_g4_t_v51)) > _g4_s29 ? (184u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (188u + sizeof(_g4_t_v52)) > _g4_s30 ? (188u + sizeof(_g4_t_v52)) : _g4_s30,
    _g4_s32 = (192u + sizeof(_g4_t_v53)) > _g4_s31 ? (192u + sizeof(_g4_t_v53)) : _g4_s31,
    _g4_s33 = (196u + sizeof(_g4_t_v54)) > _g4_s32 ? (196u + sizeof(_g4_t_v54)) : _g4_s32,
    _g4_s34 = (204u + sizeof(_g4_t_v55)) > _g4_s33 ? (204u + sizeof(_g4_t_v55)) : _g4_s33,
    _g4_s35 = (208u + sizeof(_g4_t_v56)) > _g4_s34 ? (208u + sizeof(_g4_t_v56)) : _g4_s34,
    _g4_s36 = (212u + sizeof(_g4_t_v57)) > _g4_s35 ? (212u + sizeof(_g4_t_v57)) : _g4_s35,
    _g4_s37 = (220u + sizeof(_g4_t_v58)) > _g4_s36 ? (220u + sizeof(_g4_t_v58)) : _g4_s36,
    _g4_s38 = (224u + sizeof(_g4_t_v59)) > _g4_s37 ? (224u + sizeof(_g4_t_v59)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 34u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 96u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 100u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 104u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 108u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 116u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 120u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 156u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 160u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 164u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 168u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 172u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 180u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 184u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 188u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 192u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 196u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 204u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 208u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 212u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 220u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 224u);

  if ( *(uint32_t *)(a3 + 4) == *(uint32_t *)a3 )
    return -12;
  JSONMessage = (const Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(*(gaia::BaseJSONServiceResponse::Self **)a3);
  v5 = -34;
  Json::Value::Construct((Json::Value::Self *)v36, JSONMessage);
  if ( Json::Value::isMember((Json::Value::Self *)v36, "expiry") )
  {
    v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v36, "expiry");
    v8 = Json::Value::type(v7);
    if ( v8 == 0 || v8 == 4 )
    {
      v9 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v36, "expiry"));
      Json::Value::asString((Json::Value::Self *)&v27[1], v9);
      Json::StyledWriter::Construct((Json::StyledWriter::Self *)&v55);
      Json::StyledWriter::write(a1, (Json::StyledWriter::Self *)&v28, (const Json::Value::Self *)&v55, (Json::Value::Self *)v36);
      memset(v35, 0, sizeof(v35));
      v5 = gaia::Gaia_Hestia::EncryptConfig((int)(uintptr_t)(a2), &v28, (glwebtools::Codec::Self **)v35);
      if ( v5 != 0 || (uint8_t)gaia::Gaia_Hestia::GetSaveConfigFlag(a2) == 0 )
      {
LABEL_8:
        if ( v35[0] != nullptr )
          opDelete(v35[0]);
        g4_std::string::Destroy(&v28);
        v55 = (void (**)(Json::StyledWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B90));
        g4_std::string::Destroy(v59);
        g4_std::string::Destroy(v58);
        v11 = (uint32_t *)(v56);
        v22 = v57;
        if ( v57 != v56 )
        {
          do
          {
            v12 = (uint32_t *)(*v11 - 12);
            if ( v12 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v11 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v12);
            ++v11;
          }
          while ( v22 != v11 );
          v11 = (uint32_t *)(v56);
        }
        if ( v11 != nullptr )
          opDelete(v11);
        Json::Writer::Destroy((Json::Writer::Self *)&v55);
        g4_std::string::Destroy(&v27[1]);
        goto LABEL_3;
      }
      v31 = nullptr;
      v32 = 0;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "config", (int)(uintptr_t)(v27));
      v25 = 2145938400;
      if ( *(uint32_t *)(*(uint32_t *)&v27[1] - 12) != 0 )
        v25 = gaia::Gaia_Hestia::ConvertTimeStringToSec((int)(uintptr_t)(a2), (int *)&v27[1]);
      v13 = v25;
      v30 = (int)(uintptr_t)(&dword_213B814);
      for ( i = &v45; ; i = (int *)((char *)i - 1) )
      {
        v23 = (char *)i - 1;
        *((uint8_t *)i - 1) = v13 % 0xA + 48;
        v13 /= 0xAu;
        if ( v13 == 0 )
          break;
      }
      v5 = 0;
      sub_193A9B0((int)(uintptr_t)(&v30), 0, dword_213B808[0], v23, (char *)&v45 - v23);
      g4_std::string::append_str(&v29, &v30);
      g4_std::string::Destroy(&v30);
      v40 = 0;
      v37 = &dword_213B814;
      v38 = &dword_213B814;
      v39 = 0;
      g4_std::string::assign_str(&v37, &v29);
      g4_std::string::assign_str(&v38, a4);
      g4_std::string::construct_copy(v41, &v37);
      g4_std::string::construct_copy(v42, &v38);
      v43 = v39;
      v44 = v40;
      v45 = v25;
      g4_std::string::construct_copy(v46, v41);
      g4_std::string::construct_copy(v47, v42);
      v48 = v43;
      v49 = v44;
      v50 = v45;
      g4_std::string::construct_copy(v51, v46);
      g4_std::string::construct_copy(v52, v47);
      v53 = v48;
      v54 = v49;
      v24 = v50;
      v15 = *((uint32_t **)a2 + 18);
      if ( v15 != nullptr )
      {
        while ( 1 )
        {
          v18 = v15[4];
          if ( v18 > v50 )
          {
            v16 = (uint32_t *)v15[2];
            v17 = 1;
          }
          else
          {
            v16 = (uint32_t *)v15[3];
            v17 = 0;
          }
          if ( v16 == nullptr )
            break;
          v15 = v16;
        }
        v19 = v17;
        v5 = 0;
        v20 = v19 == 0;
        v21 = v15;
        if ( v20 )
          goto LABEL_32;
      }
      else
      {
        v15 = (uint32_t *)((char *)a2 + 68);
      }
      if ( *((uint32_t **)a2 + 19) == v15 )
        goto LABEL_40;
      v21 = (uint32_t *)sub_19048F0(v15);
      v24 = v50;
      v18 = v21[4];
LABEL_32:
      if ( v24 <= v18 )
      {
        v33 = v21;
        v34 = 0;
LABEL_34:
        v31 = v33;
        v32 = v34;
        g4_std::string::Destroy(v52);
        g4_std::string::Destroy(v51);
        g4_std::string::Destroy(v47);
        g4_std::string::Destroy(v46);
        g4_std::string::Destroy(v42);
        g4_std::string::Destroy(v41);
        if ( v32 != 0 )
        {
          gaia::Gaia_Hestia::SaveConfigTable(v10, a2);
          v5 = gaia::Gaia_Hestia::SaveConfig((int)(uintptr_t)(a2), (int)(uintptr_t)(v35), (int)(uintptr_t)(&v37));
        }
        g4_std::string::Destroy(&v38);
        g4_std::string::Destroy(&v37);
        g4_std::string::Destroy(&v29);
        goto LABEL_8;
      }
LABEL_40:
      g4_std::Rb_tree_unsigned_long_pair_unsig_4fe1b0::M_insert(&v26);
      v34 = 1;
      v33 = v26;
      goto LABEL_34;
    }
  }
LABEL_3:
  Json::Value::Destroy((Json::Value::Self *)v36);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::LoadConfigTable  (binary VA: 0x14546a0)
// Original: gaia::Gaia_Hestia::LoadConfigTable
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::LoadConfigTable(gaia::Gaia_Hestia::Self *self)
{
  void *v1;
  void *v2;
  int FileSize;
  void *v4;
  int n;
  char *v6;
  char *s;
  char *v8;
  size_t v9;
  int result;
  void *v11;
  char *v12;
  char v13;
  int v14;
  Json::Value::Self *v15;
  int v16;
  Json::Value::Self *v17;
  int v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  int v24;
  uint8_t *v25;
  unsigned int v26;
  bool v27; // bp
  char v28;
  int v29;
  char v30; // bp
  unsigned int v31;
  int v32;
  uint32_t *v33;
  unsigned int v34;
  uint32_t *v35;
  char v36; // bp
  unsigned int v37;
  bool v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef char *_g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef FILE *_g4_t_stream;
  typedef FILE *_g4_t_v46;
  typedef char _g4_t_v47;
  typedef int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef char _g4_t_v50[9];
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef size_t _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef char _g4_t_v57[4];
  typedef char _g4_t_v58[4];
  typedef uint8_t *_g4_t_v59;
  typedef uint8_t _g4_t_v60[8];
  typedef uint8_t _g4_t_v61[8];
  typedef void *_g4_t_ptr;
  typedef char *_g4_t_v63;
  typedef char *_g4_t_v64;
  typedef uint8_t _g4_t_v65[16];
  typedef uint32_t *_g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef double _g4_t_v69 __attribute__((aligned(1)));
  typedef char _g4_t_v70[4];
  typedef char _g4_t_v71[4];
  typedef int _g4_t_v72;
  typedef double _g4_t_v73;
  typedef int _g4_t_v74;
  typedef char _g4_t_v75[4];
  typedef char _g4_t_v76[4];
  typedef int _g4_t_v77;
  typedef double _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef char _g4_t_v80[4];
  typedef char _g4_t_v81[4];
  typedef int _g4_t_v82;
  typedef double _g4_t_v83;
  typedef const char *_g4_t_v84[35];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (4u + sizeof(_g4_t_v39)) > _g4_s0 ? (4u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v40)) > _g4_s1 ? (4u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v41)) > _g4_s2 ? (4u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v42)) > _g4_s3 ? (4u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v43)) > _g4_s4 ? (8u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v44)) > _g4_s5 ? (8u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_stream)) > _g4_s6 ? (12u + sizeof(_g4_t_stream)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v46)) > _g4_s7 ? (12u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (19u + sizeof(_g4_t_v47)) > _g4_s8 ? (19u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v48)) > _g4_s9 ? (20u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v49)) > _g4_s10 ? (24u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v50)) > _g4_s11 ? (28u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (37u + sizeof(_g4_t_v51)) > _g4_s12 ? (37u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v52)) > _g4_s13 ? (44u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v53)) > _g4_s14 ? (48u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v54)) > _g4_s15 ? (52u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v55)) > _g4_s16 ? (56u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v56)) > _g4_s17 ? (60u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v57)) > _g4_s18 ? (64u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v58)) > _g4_s19 ? (68u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v59)) > _g4_s20 ? (72u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v60)) > _g4_s21 ? (76u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v61)) > _g4_s22 ? (84u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_ptr)) > _g4_s23 ? (92u + sizeof(_g4_t_ptr)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v63)) > _g4_s24 ? (96u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v64)) > _g4_s25 ? (100u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v65)) > _g4_s26 ? (104u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v66)) > _g4_s27 ? (120u + sizeof(_g4_t_v66)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v67)) > _g4_s28 ? (124u + sizeof(_g4_t_v67)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v68)) > _g4_s29 ? (128u + sizeof(_g4_t_v68)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v69)) > _g4_s30 ? (132u + sizeof(_g4_t_v69)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v70)) > _g4_s31 ? (140u + sizeof(_g4_t_v70)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v71)) > _g4_s32 ? (144u + sizeof(_g4_t_v71)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v72)) > _g4_s33 ? (148u + sizeof(_g4_t_v72)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v73)) > _g4_s34 ? (152u + sizeof(_g4_t_v73)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v74)) > _g4_s35 ? (160u + sizeof(_g4_t_v74)) : _g4_s35,
    _g4_s37 = (164u + sizeof(_g4_t_v75)) > _g4_s36 ? (164u + sizeof(_g4_t_v75)) : _g4_s36,
    _g4_s38 = (168u + sizeof(_g4_t_v76)) > _g4_s37 ? (168u + sizeof(_g4_t_v76)) : _g4_s37,
    _g4_s39 = (172u + sizeof(_g4_t_v77)) > _g4_s38 ? (172u + sizeof(_g4_t_v77)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v78)) > _g4_s39 ? (176u + sizeof(_g4_t_v78)) : _g4_s39,
    _g4_s41 = (184u + sizeof(_g4_t_v79)) > _g4_s40 ? (184u + sizeof(_g4_t_v79)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v80)) > _g4_s41 ? (188u + sizeof(_g4_t_v80)) : _g4_s41,
    _g4_s43 = (192u + sizeof(_g4_t_v81)) > _g4_s42 ? (192u + sizeof(_g4_t_v81)) : _g4_s42,
    _g4_s44 = (196u + sizeof(_g4_t_v82)) > _g4_s43 ? (196u + sizeof(_g4_t_v82)) : _g4_s43,
    _g4_s45 = (200u + sizeof(_g4_t_v83)) > _g4_s44 ? (200u + sizeof(_g4_t_v83)) : _g4_s44,
    _g4_s46 = (208u + sizeof(_g4_t_v84)) > _g4_s45 ? (208u + sizeof(_g4_t_v84)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_stream &stream = *reinterpret_cast<_g4_t_stream *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 19u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 37u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 84u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 100u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 104u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 120u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 132u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 140u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 144u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 148u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 152u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 160u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 164u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 168u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 172u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 176u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 184u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 188u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 192u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 196u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 200u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 208u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "rb", (int)(uintptr_t)(&v51) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "filesConfig.dat", (int)(uintptr_t)(&v51));
  v43 = (char *)self + 48;
  stream = (FILE *)gaia::IStorageWrapper::OpenFile((char *)self + 48, &v52, &v53);
  v1 = (void *)(v52 - 12);
  if ( (uint32_t *)(v52 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (void *)(v53 - 12);
  if ( (uint32_t *)(v53 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( stream == nullptr )
    return -7;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "filesConfig.dat", (int)(uintptr_t)(&v51) + 2);
  FileSize = gaia::IStorageWrapper::GetFileSize(v43, &v55, &v54);
  v4 = (void *)(v55 - 12);
  if ( (uint32_t *)(v55 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
  {
    v41 = FileSize;
    g4_std::string::Rep::M_destroy(v4);
    FileSize = v41;
  }
  if ( FileSize != 0 )
    return -7;
  n = v54;
  v6 = nullptr;
  v56 = (int)(uintptr_t)(&dword_213B814);
  s = nullptr;
  ptr = nullptr;
  v63 = nullptr;
  v64 = nullptr;
  if ( v54 != 0 )
  {
    s = (char *)opNew(v54);
    v6 = s;
  }
  v8 = &s[n];
  ptr = s;
  v64 = &s[n];
  memset(s, 0, &s[n] - v6);
  v63 = v8;
  if ( n <= 0 )
  {
    result = -5;
    goto LABEL_10;
  }
  v9 = fread(ptr, 1u, n, stream);
  gaia::IStorageWrapper::CloseFile((int)(uintptr_t)(v43), stream);
  result = -5;
  if ( v9 == n )
  {
    v12 = gaia::Gaia_Hestia::DecryptConfig((int)(uintptr_t)(self), (int *)&ptr, (int)(uintptr_t)(&v56));
    result = -3;
    if ( v12 == nullptr )
    {
      Json::Reader::Construct((Json::Reader::Self *)v84);
      Json::Value::Construct((int)(uintptr_t)(v65), nullptr);
      v13 = Json::Reader::parse(v84, (int)(uintptr_t)(&v56), (Json::Value::Self *)v65, 1);
      v14 = -15;
      if ( v13 == 0 )
        goto LABEL_17;
      Json::Value::begin((Json::Value::Self *)v60, v65);
      while ( 1 )
      {
        Json::Value::end((Json::Value::Self *)v61, (int)(uintptr_t)(v65));
        if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase::Self *)v60, (const Json::ValueIteratorBase::Self *)v61) != 0 )
        {
          v14 = 0;
LABEL_17:
          v40 = v14;
          Json::Value::Destroy((Json::Value::Self *)v65);
          sub_545800((int)(uintptr_t)(v84));
          result = v40;
          break;
        }
        v68 = 0;
        v66 = &dword_213B814;
        v67 = &dword_213B814;
        v69 = 0.0;
        v15 = (Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v60);
        v16 = (int)(uintptr_t)(Json::Value::opIndex(v15, "fileName"));
        Json::Value::asString((Json::Value::Self *)v57, v16);
        g4_std::string::assign_str(&v66, v57);
        g4_std::string::Destroy(v57);
        v17 = (Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v60);
        v18 = (int)(uintptr_t)(Json::Value::opIndex(v17, "etag"));
        Json::Value::asString((Json::Value::Self *)v58, v18);
        g4_std::string::assign_str(&v67, v58);
        g4_std::string::Destroy(v58);
        v19 = (Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v60);
        v20 = (Json::Value::Self *)Json::Value::opIndex(v19, "UTC");
        v68 = Json::Value::asUInt(v20);
        v21 = (Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v60);
        v22 = (Json::Value::Self *)Json::Value::opIndex(v21, "monotonic");
        v69 = Json::Value::asDouble(v22);
        v23 = (Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v60);
        v24 = (int)(uintptr_t)(Json::Value::opIndex(v23, "key"));
        Json::Value::asString((Json::Value::Self *)&v59, v24);
        g4_std::string::construct_copy(v70, &v66);
        g4_std::string::construct_copy(v71, &v67);
        v72 = v68;
        v73 = v69;
        v25 = &v59[*((uint32_t *)v59 - 3)];
        if ( v59 == v25 )
          goto LABEL_57;
        if ( *v59 == 45 )
        {
          v26 = (unsigned int)(uintptr_t)(v59 + 1);
          v47 = 1;
        }
        else
        {
          v47 = 0;
          v26 = (unsigned int)(uintptr_t)(&v59[*v59 == 43]);
        }
        v27 = false;
        v44 = 0;
        if ( v26 <= (unsigned int)(uintptr_t)(v25 - 1) )
        {
          v28 = *(v25 - 1);
          if ( v28 > 47 && v28 <= 57 )
          {
            v44 = v28 - 48;
            v46 = (FILE *)(v25 - 2);
            v29 = 10;
            if ( v26 > (unsigned int)(uintptr_t)(v25 - 2) )
            {
LABEL_63:
              v27 = true;
            }
            else
            {
              v49 = v26;
              v30 = 0;
              while ( (uint8_t)(LOBYTE((*(const uint8_t *)v46)) - 48) <= 9u )
              {
                v31 = SLOBYTE((*(const uint8_t *)v46)) - 48;
                v48 = v29 * v31;
                if ( LOBYTE((*(const uint8_t *)v46)) != 48 && v29 != v29 * v31 / v31 )
                  break;
                if ( v44 > ~v48 || v30 != 0 && LOBYTE((*(const uint8_t *)v46)) != 48 )
                  break;
                v46 = (FILE *)((char *)v46 - 1);
                v44 += v48;
                if ( v49 > (unsigned int)(uintptr_t)(v46) )
                  goto LABEL_63;
                v38 = v29 == 10 * v29 / 0xAu;
                v29 *= 10;
                if ( !v38 )
                  v30 = 1;
              }
              v27 = false;
            }
          }
        }
        if ( v47 != 0 )
        {
          if ( v27 )
            v27 = v44 <= 0x80000000;
          v32 = -v44;
        }
        else
        {
          if ( !v27 )
LABEL_57:
            std::terminate();
          v32 = v44;
          v27 = (v44 & 0x80000000) == 0;
        }
        if ( !v27 )
          goto LABEL_57;
        v74 = v32;
        g4_std::string::construct_copy(v75, v70);
        g4_std::string::construct_copy(v76, v71);
        v77 = v72;
        v78 = v73;
        v79 = v74;
        g4_std::string::construct_copy(v80, v75);
        g4_std::string::construct_copy(v81, v76);
        v82 = v77;
        v83 = v78;
        v33 = *((uint32_t **)self + 18);
        v34 = v79;
        if ( v33 != nullptr )
        {
          while ( 1 )
          {
            v37 = v33[4];
            if ( v79 < v37 )
            {
              v35 = (uint32_t *)v33[2];
              v36 = 1;
            }
            else
            {
              v35 = (uint32_t *)v33[3];
              v36 = 0;
            }
            if ( v35 == nullptr )
              break;
            v33 = v35;
          }
          if ( v36 == 0 )
            goto LABEL_55;
        }
        else
        {
          v33 = (uint32_t *)((char *)self + 68);
        }
        if ( *((uint32_t **)self + 19) != v33 )
        {
          v37 = *(uint32_t *)(sub_19048F0(v33) + 16);
          v34 = v79;
LABEL_55:
          if ( v37 >= v34 )
            goto LABEL_56;
        }
        g4_std::Rb_tree_unsigned_long_pair_unsig_4fe1b0::M_insert(v50);
LABEL_56:
        g4_std::string::Destroy(v81);
        g4_std::string::Destroy(v80);
        g4_std::string::Destroy(v76);
        g4_std::string::Destroy(v75);
        g4_std::string::Destroy(v71);
        g4_std::string::Destroy(v70);
        g4_std::string::Destroy(&v59);
        g4_std::string::Destroy(&v67);
        g4_std::string::Destroy(&v66);
        Json::ValueIterator::Construct((Json::ValueIterator::Self *)&v66, (const Json::ValueIterator::Self *)v60);
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase::Self *)v60);
      }
    }
  }
LABEL_10:
  if ( ptr != nullptr )
  {
    v39 = result;
    opDelete(ptr);
    result = v39;
  }
  v11 = (void *)(v56 - 12);
  if ( (uint32_t *)(v56 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
  {
    v42 = result;
    g4_std::string::Rep::M_destroy(v11);
    return v42;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::InitializeLocalData  (binary VA: 0x1454f80)
// Original: gaia::Gaia_Hestia::InitializeLocalData
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Hestia::InitializeLocalData(gaia::Gaia_Hestia::Self *self)
{
  unsigned int result;
  int ConfigTable;

  result = 0;
  if ( *((uint8_t *)self + 88) == 0 )
  {
    ConfigTable = gaia::Gaia_Hestia::LoadConfigTable(self);
    *((uint8_t *)self + 88) = ConfigTable == 0;
    return ConfigTable != 0 ? 0xFFFFFFF2 : 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetNumberOfStoredConfigs  (binary VA: 0x1454fd0)
// Original: gaia::Gaia_Hestia::GetNumberOfStoredConfigs
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::GetNumberOfStoredConfigs(gaia::Gaia_Hestia::Self *self)
{
  int v1;
  unsigned int v2;

  v1 = -11;
  if ( *((uint8_t *)self + 61) != 0 )
  {
    v2 = gaia::Gaia_Hestia::InitializeLocalData(self);
    v1 = 0;
    if ( v2 == 0 )
      return *((uint32_t *)self + 21);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetCurrentExpiryDate  (binary VA: 0x1455020)
// Original: gaia::Gaia_Hestia::GetCurrentExpiryDate
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::GetCurrentExpiryDate(gaia::Gaia_Hestia::Self *a1, int a2)
{
  int v2;
  int NumberOfStoredConfigs;

  v2 = -11;
  if ( *((uint8_t *)a1 + 61) != 0 )
  {
    NumberOfStoredConfigs = gaia::Gaia_Hestia::GetNumberOfStoredConfigs(a1);
    v2 = -12;
    if ( NumberOfStoredConfigs > 0 )
    {
      gaia::Gaia_Hestia::GetTimeString((int)(uintptr_t)(a1), *(uint32_t *)(*((uint32_t *)a1 + 19) + 16), a2);
      return 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::StartAndAuthorizeHestia  (binary VA: 0x1491900)
// Original: gaia::Gaia_Hestia::StartAndAuthorizeHestia
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::StartAndAuthorizeHestia(gaia::Gaia::Self *a1, int a2, uint32_t *a3)
{
  int result;
  int Instance;

  result = gaia::Gaia_Hestia::GetHestiaStatus((gaia::Gaia_Hestia::Self *)(a1));
  if ( result == 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    return gaia::Gaia::Authorize(Instance, a3, a2, 0, 0, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetClustersByUser  (binary VA: 0x1491960)
// Original: gaia::Gaia_Hestia::GetClustersByUser
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::GetClustersByUser(gaia::Gaia::Self *a1, int a2, uint32_t *a3, int a4, char a5, int a6, int a7)
{
  int result;
  void *v8;
  void *v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef int _g4_t_v18;
  typedef int _g4_t_ClustersByUser;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[4];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v18)) > _g4_s1 ? (44u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_ClustersByUser)) > _g4_s2 ? (44u + sizeof(_g4_t_ClustersByUser)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v20)) > _g4_s3 ? (44u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v21)) > _g4_s4 ? (44u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v22)) > _g4_s5 ? (44u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (51u + sizeof(_g4_t_v23)) > _g4_s6 ? (51u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v24)) > _g4_s7 ? (52u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v25)) > _g4_s8 ? (56u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v26)) > _g4_s9 ? (60u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v27)) > _g4_s10 ? (64u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v28)) > _g4_s11 ? (68u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v29)) > _g4_s12 ? (72u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v30)) > _g4_s13 ? (76u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v31)) > _g4_s14 ? (80u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v32)) > _g4_s15 ? (96u + sizeof(_g4_t_v32)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_ClustersByUser &ClustersByUser = *reinterpret_cast<_g4_t_ClustersByUser *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 51u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);

  if ( a5 != 0 )
  {
    v13 = (uint32_t *)opNew(0x44u);
    *v13 = a7;
    v13[1] = a6;
    v13[2] = 6507;
    Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
    v13[7] = 0;
    v13[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
    v13[13] = 0;
    v13[14] = 0;
    v13[15] = 0;
    v13[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v31, a2);
    v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
    Json::Value::opAssign(v14, (const Json::Value::Self *)v31);
    Json::Value::Destroy((Json::Value::Self *)v31);
    Json::Value::Construct((int)(uintptr_t)(v32), a3);
    v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "credential");
    Json::Value::opAssign(v15, (const Json::Value::Self *)v32);
    Json::Value::Destroy((Json::Value::Self *)v32);
    v13[7] = a4;
    Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
    return gaia::ThreadManager::pushTask(Instance, v13);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "config", (int)(uintptr_t)(&v23));
    result = gaia::Gaia_Hestia::StartAndAuthorizeHestia(a1, a2, (uint32_t *)(&v25));
    v8 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      v21 = result;
      g4_std::string::Rep::M_destroy(v8);
      result = v21;
    }
    if ( result == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "storage", (int)(uintptr_t)(&v24));
      result = gaia::Gaia_Hestia::StartAndAuthorizeHestia(a1, a2, (uint32_t *)(&v26));
      v9 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        v22 = result;
        g4_std::string::Rep::M_destroy(v9);
        result = v22;
      }
      if ( result == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "config_structure", (int)(uintptr_t)(&v24) + 1);
        v18 = gaia::Gaia_Hestia::StartAndAuthorizeHestia(a1, a2, (uint32_t *)(&v27));
        g4_std::string::Destroy(&v27);
        result = v18;
        if ( v18 == 0 )
        {
          v28 = nullptr;
          v29 = 0;
          v10 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v30), v10);
          v11 = gaia::Gaia::GetInstance();
          ClustersByUser = gaia::Hestia::GetClustersByUser(*(uint32_t *)(v11 + 52), &v28, &v29, v30, a3, nullptr);
          g4_std::string::Destroy(v30);
          v12 = ClustersByUser;
          if ( ClustersByUser == 0 )
            v12 = gaia::BaseServiceManager::ParseMessages(v28, v29, a4, 29);
          v20 = v12;
          free(v28);
          return v20;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetClusters  (binary VA: 0x1491cd0)
// Original: gaia::Gaia_Hestia::GetClusters
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::GetClusters(gaia::Gaia::Self *a1, int a2, int a3, char a4, int a5, int a6)
{
  int result;
  void *v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  Json::Value::Self *v13;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef int _g4_t_v16;
  typedef int _g4_t_Clusters;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
  typedef uint8_t _g4_t_v29[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v16)) > _g4_s1 ? (44u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_Clusters)) > _g4_s2 ? (44u + sizeof(_g4_t_Clusters)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v18)) > _g4_s3 ? (44u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v19)) > _g4_s4 ? (44u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (51u + sizeof(_g4_t_v21)) > _g4_s6 ? (51u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v22)) > _g4_s7 ? (52u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v23)) > _g4_s8 ? (56u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v24)) > _g4_s9 ? (60u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v25)) > _g4_s10 ? (64u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v26)) > _g4_s11 ? (68u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v27)) > _g4_s12 ? (72u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v28)) > _g4_s13 ? (76u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v29)) > _g4_s14 ? (80u + sizeof(_g4_t_v29)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_Clusters &Clusters = *reinterpret_cast<_g4_t_Clusters *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 51u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);

  if ( a4 != 0 )
  {
    v12 = (uint32_t *)opNew(0x44u);
    *v12 = a6;
    v12[1] = a5;
    v12[2] = 6506;
    Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
    v12[7] = 0;
    v12[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
    v12[13] = 0;
    v12[14] = 0;
    v12[15] = 0;
    v12[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v29, a2);
    v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "accountType");
    Json::Value::opAssign(v13, (const Json::Value::Self *)v29);
    Json::Value::Destroy((Json::Value::Self *)v29);
    v12[7] = a3;
    Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
    return gaia::ThreadManager::pushTask(Instance, v12);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "config", (int)(uintptr_t)(&v21));
    result = gaia::Gaia_Hestia::StartAndAuthorizeHestia(a1, a2, (uint32_t *)(&v23));
    v7 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      v19 = result;
      g4_std::string::Rep::M_destroy(v7);
      result = v19;
    }
    if ( result == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "storage", (int)(uintptr_t)(&v22));
      result = gaia::Gaia_Hestia::StartAndAuthorizeHestia(a1, a2, (uint32_t *)(&v24));
      v8 = (void *)(v24 - 12);
      if ( (uint32_t *)(v24 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
        v20 = result;
        g4_std::string::Rep::M_destroy(v8);
        result = v20;
      }
      if ( result == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "config_structure", (int)(uintptr_t)(&v22) + 1);
        v16 = gaia::Gaia_Hestia::StartAndAuthorizeHestia(a1, a2, (uint32_t *)(&v25));
        g4_std::string::Destroy(&v25);
        result = v16;
        if ( v16 == 0 )
        {
          v26 = nullptr;
          v27 = 0;
          v9 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v28), v9);
          v10 = gaia::Gaia::GetInstance();
          Clusters = gaia::Hestia::GetClusters(*(uint32_t *)(v10 + 52), &v26, &v27, v28, nullptr);
          g4_std::string::Destroy(v28);
          v11 = Clusters;
          if ( Clusters == 0 )
            v11 = gaia::BaseServiceManager::ParseMessages(v26, v27, a3, 28);
          v18 = v11;
          free(v26);
          return v18;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetClientConfig  (binary VA: 0x1491fe0)
// Original: gaia::Gaia_Hestia::GetClientConfig
// ----------------------------------------------------------------------------
Json::Value::Self * gaia::Gaia_Hestia::GetClientConfig(gaia::Gaia_Hestia::Self *self, gaia::GaiaRequest::Self *a2)
{
  int HestiaStatus;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  int v8;
  void *v9;
  gaia::BaseJSONServiceResponse::Self *v10;
  gaia::BaseJSONServiceResponse::Self *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  Json::Value::Self *result;
  int Instance;
  int v19;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v22;
  typedef int _g4_t_ClientConfig;
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint8_t _g4_t_v39[4];
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v40;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[16];
  typedef uint8_t _g4_t_v48[16];
  typedef uint8_t _g4_t_v49[96];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_started)) > _g4_s1 ? (56u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v22)) > _g4_s2 ? (56u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_ClientConfig)) > _g4_s3 ? (60u + sizeof(_g4_t_ClientConfig)) : _g4_s3,
    _g4_s5 = (71u + sizeof(_g4_t_v24)) > _g4_s4 ? (71u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v25)) > _g4_s5 ? (84u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (88u + sizeof(_g4_t_v26)) > _g4_s6 ? (88u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v27)) > _g4_s7 ? (92u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v28)) > _g4_s8 ? (96u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v29)) > _g4_s9 ? (100u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v30)) > _g4_s10 ? (104u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v31)) > _g4_s11 ? (108u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v32)) > _g4_s12 ? (112u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (116u + sizeof(_g4_t_v33)) > _g4_s13 ? (116u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v34)) > _g4_s14 ? (120u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v35)) > _g4_s15 ? (124u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v36)) > _g4_s16 ? (128u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v37)) > _g4_s17 ? (132u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v38)) > _g4_s18 ? (136u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v39)) > _g4_s19 ? (140u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v40)) > _g4_s20 ? (144u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v41)) > _g4_s21 ? (148u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (152u + sizeof(_g4_t_v42)) > _g4_s22 ? (152u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v43)) > _g4_s23 ? (156u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v44)) > _g4_s24 ? (172u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v45)) > _g4_s25 ? (188u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (204u + sizeof(_g4_t_v46)) > _g4_s26 ? (204u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (220u + sizeof(_g4_t_v47)) > _g4_s27 ? (220u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (236u + sizeof(_g4_t_v48)) > _g4_s28 ? (236u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (252u + sizeof(_g4_t_v49)) > _g4_s29 ? (252u + sizeof(_g4_t_v49)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_ClientConfig &ClientConfig = *reinterpret_cast<_g4_t_ClientConfig *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 71u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 116u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 120u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 132u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 136u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 140u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 144u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 148u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 152u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 156u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 172u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 188u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 204u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 220u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 236u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 252u);

  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 6501);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v49, a2);
    started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v49);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v49);
    return started;
  }
  else
  {
    HestiaStatus = gaia::Gaia_Hestia::GetHestiaStatus(self);
    if ( HestiaStatus != 0 )
    {
      v22 = (Json::Value::Self *)HestiaStatus;
      gaia::GaiaRequest::SetResponseCode(a2, HestiaStatus);
      return v22;
    }
    else
    {
      v40 = nullptr;
      v41 = nullptr;
      v42 = 0;
      v30 = nullptr;
      v31 = 0;
      v25 = &dword_213B814;
      v26 = &dword_213B814;
      v27 = &dword_213B814;
      v28 = &dword_213B814;
      v29 = &dword_213B814;
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v43, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)&v32, (int)(uintptr_t)(v43));
      g4_std::string::assign_str(&v25, &v32);
      v3 = (void *)(v32 - 12);
      if ( (uint32_t *)(v32 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
      Json::Value::Destroy((Json::Value::Self *)v43);
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v44, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)&v33, (int)(uintptr_t)(v44));
      g4_std::string::assign_str(&v27, &v33);
      v4 = (void *)(v33 - 12);
      if ( (uint32_t *)(v33 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      Json::Value::Destroy((Json::Value::Self *)v44);
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v45, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)&v34, (int)(uintptr_t)(v45));
      g4_std::string::assign_str(&v28, &v34);
      v5 = (void *)(v34 - 12);
      if ( (uint32_t *)(v34 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
      Json::Value::Destroy((Json::Value::Self *)v45);
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v46, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)&v35, (int)(uintptr_t)(v46));
      g4_std::string::assign_str(&v29, &v35);
      v6 = (void *)(v35 - 12);
      if ( (uint32_t *)(v35 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      Json::Value::Destroy((Json::Value::Self *)v46);
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v47, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)&v36, (int)(uintptr_t)(v47));
      g4_std::string::assign_str(&v26, &v36);
      v7 = (void *)(v36 - 12);
      if ( (uint32_t *)(v36 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      Json::Value::Destroy((Json::Value::Self *)v47);
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v48, (const char *)a2);
      v8 = Json::Value::asUInt((Json::Value::Self *)v48);
      Json::Value::Destroy((Json::Value::Self *)v48);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "config", (int)(uintptr_t)(&v24));
      ClientConfig = gaia::Gaia_Hestia::StartAndAuthorizeHestia((gaia::Gaia::Self *)(self), v8, (uint32_t *)(&v37));
      v9 = (void *)(v37 - 12);
      if ( (uint32_t *)(v37 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      if ( ClientConfig == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "storage", (int)(uintptr_t)(&v24) + 1);
        ClientConfig = gaia::Gaia_Hestia::StartAndAuthorizeHestia((gaia::Gaia::Self *)(self), v8, (uint32_t *)(&v38));
        g4_std::string::Destroy(&v38);
        if ( ClientConfig == 0 )
        {
          Instance = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v39), Instance);
          v19 = gaia::Gaia::GetInstance();
          ClientConfig = gaia::Hestia::GetClientConfig(
                           *(uint32_t *)(v19 + 52),
                           &v30,
                           &v31,
                           &v25,
                           v39,
                           &v27,
                           &v28,
                           &v29,
                           &v26,
                           nullptr);
          g4_std::string::Destroy(v39);
          if ( ClientConfig == 0 )
          {
            gaia::GaiaRequest::SetEtag(a2, &v25);
            ClientConfig = gaia::BaseServiceManager::ParseMessages(v30, v31, (int)(uintptr_t)(&v40), 27);
          }
          gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v40);
          gaia::GaiaRequest::SetResponseCode(a2, 0);
          free(v30);
        }
      }
      v10 = v41;
      v11 = v40;
      if ( v41 != v40 )
      {
        do
        {
          ptr = v11;
          v11 = (gaia::BaseJSONServiceResponse::Self *)((char *)v11 + 20);
          gaia::BaseJSONServiceResponse::Destroy(ptr);
        }
        while ( v10 != v11 );
        v11 = v40;
      }
      if ( v11 != nullptr )
        opDelete(v11);
      v12 = v29 - 3;
      if ( v29 - 3 != dword_213B808 && __sync_fetch_and_add(v29 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v12);
      v13 = v28 - 3;
      if ( v28 - 3 != dword_213B808 && __sync_fetch_and_add(v28 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v13);
      v14 = v27 - 3;
      if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v14);
      v15 = v26 - 3;
      if ( v26 - 3 != dword_213B808 && __sync_fetch_and_add(v26 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v15);
      v16 = v25 - 3;
      if ( v25 - 3 == dword_213B808 )
      {
        return (Json::Value::Self *)ClientConfig;
      }
      else
      {
        result = (Json::Value::Self *)ClientConfig;
        if ( __sync_fetch_and_add(v25 - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v16);
          return (Json::Value::Self *)ClientConfig;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::GetClientConfig  (binary VA: 0x1492720)
// Original: gaia::Gaia_Hestia::GetClientConfig
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::GetClientConfig(gaia::Gaia::Self *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, char a9, int a10, int a11)
{
  int result;
  void *v12;
  void *v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef int _g4_t_ClientConfig;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint8_t _g4_t_v35[4];
  typedef uint8_t _g4_t_v36[4];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[44];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_ClientConfig)) > _g4_s1 ? (60u + sizeof(_g4_t_ClientConfig)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v27)) > _g4_s2 ? (60u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v28)) > _g4_s3 ? (60u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v29)) > _g4_s4 ? (60u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v30)) > _g4_s5 ? (68u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v31)) > _g4_s6 ? (72u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v32)) > _g4_s7 ? (76u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v33)) > _g4_s8 ? (80u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v34)) > _g4_s9 ? (84u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v35)) > _g4_s10 ? (88u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v36)) > _g4_s11 ? (92u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v37)) > _g4_s12 ? (96u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v38)) > _g4_s13 ? (112u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v39)) > _g4_s14 ? (128u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v40)) > _g4_s15 ? (144u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (160u + sizeof(_g4_t_v41)) > _g4_s16 ? (160u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (176u + sizeof(_g4_t_v42)) > _g4_s17 ? (176u + sizeof(_g4_t_v42)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_ClientConfig &ClientConfig = *reinterpret_cast<_g4_t_ClientConfig *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 92u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 96u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 128u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 144u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 160u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 176u);

  if ( a9 != 0 )
  {
    v17 = (uint32_t *)opNew(0x44u);
    *v17 = a11;
    v17[1] = a10;
    v17[2] = 6501;
    Json::Value::Construct((int)(uintptr_t)(v17 + 3), nullptr);
    v17[7] = 0;
    v17[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v17 + 9), nullptr);
    v17[13] = 0;
    v17[14] = 0;
    v17[15] = 0;
    v17[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v37, a2);
    v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "accountType");
    Json::Value::opAssign(v18, (const Json::Value::Self *)v37);
    Json::Value::Destroy((Json::Value::Self *)v37);
    Json::Value::Construct((int)(uintptr_t)(v38), a5);
    v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "profile_name");
    Json::Value::opAssign(v19, (const Json::Value::Self *)v38);
    Json::Value::Destroy((Json::Value::Self *)v38);
    Json::Value::Construct((int)(uintptr_t)(v39), a6);
    v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "clusters_space");
    Json::Value::opAssign(v20, (const Json::Value::Self *)v39);
    Json::Value::Destroy((Json::Value::Self *)v39);
    Json::Value::Construct((int)(uintptr_t)(v40), a7);
    v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "selector");
    Json::Value::opAssign(v21, (const Json::Value::Self *)v40);
    Json::Value::Destroy((Json::Value::Self *)v40);
    Json::Value::Construct((int)(uintptr_t)(v41), a8);
    v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), (char *)&off_1B673D3);
    Json::Value::opAssign(v22, (const Json::Value::Self *)v41);
    Json::Value::Destroy((Json::Value::Self *)v41);
    Json::Value::Construct((int)(uintptr_t)(v42), a3);
    v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "Etag");
    Json::Value::opAssign(v23, (const Json::Value::Self *)v42);
    Json::Value::Destroy((Json::Value::Self *)v42);
    v17[7] = a4;
    Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
    return gaia::ThreadManager::pushTask(Instance, v17);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "config", (int)(uintptr_t)(&v30));
    result = gaia::Gaia_Hestia::StartAndAuthorizeHestia(a1, a2, (uint32_t *)(&v31));
    v12 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      v28 = result;
      g4_std::string::Rep::M_destroy(v12);
      result = v28;
    }
    if ( result == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "storage", (int)(uintptr_t)(&v30) + 1);
      result = gaia::Gaia_Hestia::StartAndAuthorizeHestia(a1, a2, (uint32_t *)(&v32));
      v13 = (void *)(v32 - 12);
      if ( (uint32_t *)(v32 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
      {
        v29 = result;
        g4_std::string::Rep::M_destroy(v13);
        result = v29;
      }
      if ( result == 0 )
      {
        v33 = nullptr;
        v34 = 0;
        g4_std::string::construct_copy(v35, a3);
        v14 = gaia::Gaia::GetInstance();
        gaia::Gaia::GetJanusToken((int)(uintptr_t)(v36), v14);
        v15 = gaia::Gaia::GetInstance();
        ClientConfig = gaia::Hestia::GetClientConfig(
                         *(uint32_t *)(v15 + 52),
                         &v33,
                         &v34,
                         v35,
                         v36,
                         a5,
                         a6,
                         a7,
                         a8,
                         nullptr);
        g4_std::string::Destroy(v36);
        v16 = ClientConfig;
        if ( ClientConfig == 0 )
          v16 = gaia::BaseServiceManager::ParseMessages(v33, v34, a4, 27);
        v27 = v16;
        free(v33);
        g4_std::string::Destroy(v35);
        return v27;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::RefreshConfigs  (binary VA: 0x1492b70)
// Original: gaia::Gaia_Hestia::RefreshConfigs
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::RefreshConfigs(long double a1, gaia::Gaia_Hestia::Self *a2, int a3, int a4, char a5, int a6, int a7)
{
  gaia::Gaia_Hestia::Self *v7;
  long double v8; // fst7
  unsigned int v9;
  int v10;
  int v11;
  int i;
  int v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  char *v18;
  char *v19;
  bool v20;
  void *v21;
  void *v22;
  char *v24;
  unsigned int v25;
  char *v26;
  void *v27;
  uint32_t *v28;
  Json::Value::Self *v29;
  int Instance;
  unsigned int v31;
  typedef char *_g4_t_s;
  typedef char *_g4_t_sa;
  typedef gaia::ThreadManager::Self *_g4_t_sb;
  typedef char *_g4_t_format;
  typedef int _g4_t_ClientConfig;
  typedef gaia::Gaia_Hestia::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef char _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef int _g4_t_v55;
  typedef void *_g4_t_v56;
  typedef char *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef char _g4_t_v59[16];
  typedef char _g4_t_v60[48];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_sa)) > _g4_s1 ? (0u + sizeof(_g4_t_sa)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_sb)) > _g4_s2 ? (0u + sizeof(_g4_t_sb)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_format)) > _g4_s3 ? (4u + sizeof(_g4_t_format)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_ClientConfig)) > _g4_s4 ? (64u + sizeof(_g4_t_ClientConfig)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v37)) > _g4_s5 ? (72u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (88u + sizeof(_g4_t_v38)) > _g4_s6 ? (88u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v39)) > _g4_s7 ? (92u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v40)) > _g4_s8 ? (96u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v41)) > _g4_s9 ? (100u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (101u + sizeof(_g4_t_v42)) > _g4_s10 ? (101u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (102u + sizeof(_g4_t_v43)) > _g4_s11 ? (102u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v44)) > _g4_s12 ? (104u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v45)) > _g4_s13 ? (108u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v46)) > _g4_s14 ? (112u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v47)) > _g4_s15 ? (116u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v48)) > _g4_s16 ? (120u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v49)) > _g4_s17 ? (124u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v50)) > _g4_s18 ? (128u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v51)) > _g4_s19 ? (132u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v52)) > _g4_s20 ? (136u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (137u + sizeof(_g4_t_v53)) > _g4_s21 ? (137u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (138u + sizeof(_g4_t_v54)) > _g4_s22 ? (138u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v55)) > _g4_s23 ? (140u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v56)) > _g4_s24 ? (144u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v57)) > _g4_s25 ? (148u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v58)) > _g4_s26 ? (152u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v59)) > _g4_s27 ? (156u + sizeof(_g4_t_v59)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v60)) > _g4_s28 ? (172u + sizeof(_g4_t_v60)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 0u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 0u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 4u);
  _g4_t_ClientConfig &ClientConfig = *reinterpret_cast<_g4_t_ClientConfig *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 100u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 101u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 102u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 128u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 132u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 136u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 137u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 138u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 140u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 144u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 148u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 152u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 156u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 172u);

  v7 = a2;
  if ( a5 != 0 )
  {
    v28 = (uint32_t *)opNew(0x44u);
    *v28 = a7;
    v28[1] = a6;
    v28[2] = 6502;
    Json::Value::Construct((int)(uintptr_t)(v28 + 3), nullptr);
    v28[7] = 0;
    v28[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v28 + 9), nullptr);
    v28[13] = 0;
    v28[14] = 0;
    v28[15] = 0;
    v28[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v59, a3);
    v29 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v28 + 3), "number");
    Json::Value::opAssign(v29, (const Json::Value::Self *)v59);
    Json::Value::Destroy((Json::Value::Self *)v59);
    v28[15] = a4;
    Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(sb));
    gaia::ThreadManager::pushTask(Instance, v28);
    return 0;
  }
  v52 = 0;
  v53 = 0;
  v54 = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), (char *)&unk_1B15112, (int)(uintptr_t)(&v40));
  *((uint32_t *)a2 + 7) = a4;
  *((uint8_t *)a2 + 61) = 0;
  gaia::Gaia_Hestia::InitializeLocalData(a2);
  ClientConfig = gaia::Gaia_Hestia::DeleteExpiredConfigs(a1, a2);
  if ( a3 <= 0 )
    goto LABEL_24;
  v9 = 0;
  while ( 1 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&unk_1B15112, (int)(uintptr_t)(&v38));
    v10 = *((uint32_t *)v7 + 19);
    if ( v9 < *((uint32_t *)v7 + 21) )
    {
      if ( v9 != 0 )
      {
        v31 = v9 - 1;
        do
        {
          --v31;
          v10 = sub_1904890(v10);
        }
        while ( v31 != -1 );
      }
      g4_std::string::assign_str(&v44, v10 + 24);
    }
    v56 = nullptr;
    v57 = nullptr;
    v58 = 0;
    if ( v9 != 0 )
    {
      v11 = *((uint32_t *)v7 + 19);
      if ( v9 != 1 )
      {
        for ( i = 1; i != v9; ++i )
          v11 = sub_19048E0(v11);
      }
      v13 = *(uint32_t *)(v11 + 16);
      if ( v13 != 0 )
      {
        if ( v13 == 2145938400 )
        {
          ClientConfig = 305;
          goto LABEL_23;
        }
        *(uint32_t *)v60 = (uint32_t)(uintptr_t)(&dword_213B814);
        gaia::Gaia_Hestia::GetTimeString((int)(uintptr_t)(v7), v13 + 150, (int)(uintptr_t)(v60));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), (char *)&unk_1B15112, (int)(uintptr_t)(&v39) + 3);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), (char *)&unk_1B15112, (int)(uintptr_t)(&v39) + 2);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), (char *)&unk_1B15112, (int)(uintptr_t)(&v39) + 1);
        ClientConfig = gaia::Gaia_Hestia::GetClientConfig(
                         v7,
                         *((uint32_t *)v7 + 14),
                         &v44,
                         (int)(uintptr_t)(&v56),
                         &v49,
                         &v50,
                         &v51,
                         v60,
                         0,
                         0,
                         0);
        v14 = (void *)(v49 - 12);
        if ( (uint32_t *)(v49 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
        {
          format = (char *)&v40 + 1;
          g4_std::string::Rep::M_destroy(v14);
        }
        v15 = (void *)(v50 - 12);
        if ( (uint32_t *)(v50 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
        {
          format = (char *)&v40 + 2;
          g4_std::string::Rep::M_destroy(v15);
        }
        v16 = (void *)(v51 - 12);
        if ( (uint32_t *)(v51 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
        {
          format = (char *)&v40 + 3;
          g4_std::string::Rep::M_destroy(v16);
        }
        v17 = (void *)(*(uint32_t *)v60 - 12);
        if ( (uint32_t *)(*(uint32_t *)v60 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v60 - 4), 0xFFFFFFFF) <= 0 )
        {
          format = &v41;
          g4_std::string::Rep::M_destroy(v17);
        }
      }
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), (char *)&unk_1B15112, (int)(uintptr_t)(&v39));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), (char *)&unk_1B15112, (int)(uintptr_t)(&v38) + 3);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "default", (int)(uintptr_t)(&v38) + 2);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "myprofile", (int)(uintptr_t)(&v38) + 1);
      ClientConfig = gaia::Gaia_Hestia::GetClientConfig(
                       v7,
                       *((uint32_t *)v7 + 14),
                       &v44,
                       (int)(uintptr_t)(&v56),
                       &v45,
                       &v46,
                       &v47,
                       &v48,
                       0,
                       0,
                       0);
      g4_std::string::Destroy(&v45);
      g4_std::string::Destroy(&v46);
      g4_std::string::Destroy(&v47);
      g4_std::string::Destroy(&v48);
    }
    if ( ClientConfig == 304 )
    {
      if ( v9 == 0 )
        *((uint8_t *)v7 + 61) = 1;
      v53 = 1;
      v54 = 0;
      goto LABEL_29;
    }
    if ( ClientConfig == 0 )
    {
      if ( g4_std::string::compare((int)(uintptr_t)(&v44), (char *)&unk_1B15112) != 0 )
        gaia::Gaia_Hestia::InvalidateConfigsStartingFrom(v8, v7, v9);
      gaia::Gaia_Hestia::GetFeedEtag((int)(uintptr_t)(v7), (int)(uintptr_t)(&v44));
      ClientConfig = gaia::Gaia_Hestia::storeNewConfig(v8, v7, (int)(uintptr_t)(&v56), (int)(uintptr_t)(&v44));
      if ( ClientConfig != 0 )
      {
        v53 = 0;
        v52 = 1;
        g4_std::string::append((int)(uintptr_t)(&v55), "Config not stored", 0x11u);
        v54 = 0;
      }
      else
      {
        v53 = 1;
        if ( v9 == 0 )
        {
          *((uint8_t *)v7 + 61) = 1;
          v54 = 1;
        }
      }
      goto LABEL_29;
    }
    if ( v9 == 0 )
      break;
LABEL_29:
    v24 = (char *)v56;
    if ( v57 != v56 )
    {
      v37 = v7;
      v25 = v9;
      v26 = v57;
      do
      {
        sa = v24;
        v24 += 20;
        gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)sa);
      }
      while ( v26 != v24 );
      v9 = v25;
      v24 = (char *)v56;
      v7 = v37;
    }
    if ( v24 != nullptr )
      opDelete(v24);
    v27 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      format = &v42;
      g4_std::string::Rep::M_destroy(v27);
    }
    if ( ++v9 == a3 )
      goto LABEL_24;
  }
  v53 = 0;
  v52 = 1;
  g4_std::string::append((int)(uintptr_t)(&v55), "Failed to download config, error: ", 0x22u);
  v54 = 0;
  sprintf(v60, "%d \n", ClientConfig);
  g4_std::string::append((int)(uintptr_t)(&v55), v60, strlen(v60));
  v18 = v57;
  v19 = (char *)v56;
  v20 = v56 == v57;
  *((uint8_t *)v7 + 61) = 1;
  if ( !v20 )
  {
    do
    {
      s = v19;
      v19 += 20;
      gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)s);
    }
    while ( v18 != v19 );
    v19 = (char *)v56;
  }
  if ( v19 != nullptr )
    opDelete(v19);
LABEL_23:
  v21 = (void *)(v44 - 12);
  if ( (uint32_t *)(v44 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
  {
    format = &v43;
    g4_std::string::Rep::M_destroy(v21);
  }
LABEL_24:
  (*((void (**)(char *, char *))v7 + 7))(&v52, format);
  v22 = (void *)(v55 - 12);
  if ( (uint32_t *)(v55 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  return ClientConfig;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::DispatchCurrentConfig  (binary VA: 0x149b640)
// Original: gaia::Gaia_Hestia::DispatchCurrentConfig
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::DispatchCurrentConfig(gaia::Gaia_Hestia::Self *a1, int a2, char a3, int a4, int a5)
{
  int NumberOfStoredConfigs;
  int CurrentConfig;
  void *v7;
  uint32_t *v9;
  int Instance;
  unsigned int v11;
  oi::OfflineStore::Self *v12;
  gaia::CrmManager::Self *v13;
  gaia::CrmManager::Self *v14;
  char *v15;
  int v16;
  unsigned int v17;
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v18;
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v19;
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v20;
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v21;
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v22;
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v23;
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v24;
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v25;
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v26;
  int v27;
  void (*v28)(int);
  int v29;
  bool (__high *v52)(void *, bool, Json::Value::Self);
  bool (__high *v53)(void *, bool, Json::Value::Self);
  bool (__high *v54)(void *, bool, Json::Value::Self);
  bool (__high *v55)(void *, bool, Json::Value::Self);
  bool (__high *v56)(void *, bool, Json::Value::Self);
  bool (__high *v57)(void *, bool, Json::Value::Self);
  bool (__high *v58)(void *, bool, Json::Value::Self);
  bool (__high *v59)(void *, bool, Json::Value::Self);
  bool (__high *v60)(void *, bool, Json::Value::Self);
  bool (__high *v61)(void *, bool, Json::Value::Self);
  typedef gaia::ThreadManager::Self *_g4_t_sb;
  typedef oi::OfflineStore::Self *_g4_t_sc;
  typedef char *_g4_t_s;
  typedef gaia::CrmManager::Self *_g4_t_sd;
  typedef char *_g4_t_sa;
  typedef gaia::CrmManager::Self *_g4_t_se;
  typedef gaia::CrmManager::Self *_g4_t_sf;
  typedef gaia::CrmManager::Self *_g4_t_sg;
  typedef gaia::CrmManager::Self *_g4_t_sh;
  typedef gaia::CrmManager::Self *_g4_t_si;
  typedef gaia::CrmManager::Self *_g4_t_sj;
  typedef gaia::CrmManager::Self *_g4_t_sk;
  typedef gaia::CrmManager::Self *_g4_t_sl;
  typedef gaia::CrmManager::Self *_g4_t_v43;
  typedef gaia::CrmManager::Self *_g4_t_v44;
  typedef gaia::CrmManager::Self *_g4_t_v45;
  typedef gaia::CrmManager::Self *_g4_t_v46;
  typedef gaia::CrmManager::Self *_g4_t_v47;
  typedef gaia::CrmManager::Self *_g4_t_v48;
  typedef gaia::CrmManager::Self *_g4_t_v49;
  typedef gaia::CrmManager::Self *_g4_t_v50;
  typedef gaia::CrmManager::Self *_g4_t_v51;
  typedef int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef uint16_t _g4_t_v64[3];
  typedef int _g4_t_v65;
  typedef uint8_t _g4_t_v66[4];
  typedef char _g4_t_v67[16];
  typedef char _g4_t_v68[16];
  typedef char _g4_t_v69[32];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_sb)) > _g4_s0 ? (0u + sizeof(_g4_t_sb)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_sc)) > _g4_s1 ? (0u + sizeof(_g4_t_sc)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_s)) > _g4_s2 ? (0u + sizeof(_g4_t_s)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_sd)) > _g4_s3 ? (0u + sizeof(_g4_t_sd)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_sa)) > _g4_s4 ? (0u + sizeof(_g4_t_sa)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_se)) > _g4_s5 ? (0u + sizeof(_g4_t_se)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_sf)) > _g4_s6 ? (0u + sizeof(_g4_t_sf)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_sg)) > _g4_s7 ? (0u + sizeof(_g4_t_sg)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_sh)) > _g4_s8 ? (0u + sizeof(_g4_t_sh)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_si)) > _g4_s9 ? (0u + sizeof(_g4_t_si)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_sj)) > _g4_s10 ? (0u + sizeof(_g4_t_sj)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_sk)) > _g4_s11 ? (0u + sizeof(_g4_t_sk)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_sl)) > _g4_s12 ? (0u + sizeof(_g4_t_sl)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v43)) > _g4_s13 ? (32u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v44)) > _g4_s14 ? (32u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v45)) > _g4_s15 ? (32u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v46)) > _g4_s16 ? (32u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v47)) > _g4_s17 ? (32u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v48)) > _g4_s18 ? (32u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v49)) > _g4_s19 ? (32u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v50)) > _g4_s20 ? (32u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v51)) > _g4_s21 ? (32u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v62)) > _g4_s22 ? (40u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v63)) > _g4_s23 ? (40u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (62u + sizeof(_g4_t_v64)) > _g4_s24 ? (62u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v65)) > _g4_s25 ? (68u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v66)) > _g4_s26 ? (72u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v67)) > _g4_s27 ? (76u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v68)) > _g4_s28 ? (92u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v69)) > _g4_s29 ? (108u + sizeof(_g4_t_v69)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 0u);
  _g4_t_sc &sc = *reinterpret_cast<_g4_t_sc *>(_g4_sf + 0u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_sd &sd = *reinterpret_cast<_g4_t_sd *>(_g4_sf + 0u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 0u);
  _g4_t_se &se = *reinterpret_cast<_g4_t_se *>(_g4_sf + 0u);
  _g4_t_sf &sf = *reinterpret_cast<_g4_t_sf *>(_g4_sf + 0u);
  _g4_t_sg &sg = *reinterpret_cast<_g4_t_sg *>(_g4_sf + 0u);
  _g4_t_sh &sh = *reinterpret_cast<_g4_t_sh *>(_g4_sf + 0u);
  _g4_t_si &si = *reinterpret_cast<_g4_t_si *>(_g4_sf + 0u);
  _g4_t_sj &sj = *reinterpret_cast<_g4_t_sj *>(_g4_sf + 0u);
  _g4_t_sk &sk = *reinterpret_cast<_g4_t_sk *>(_g4_sf + 0u);
  _g4_t_sl &sl = *reinterpret_cast<_g4_t_sl *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 62u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 92u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 108u);

  if ( a3 != 0 )
  {
    v9 = (uint32_t *)opNew(0x44u);
    *v9 = a5;
    v9[1] = a4;
    v9[2] = 6504;
    Json::Value::Construct((int)(uintptr_t)(v9 + 3), nullptr);
    v9[7] = 0;
    v9[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v9 + 9), nullptr);
    v9[13] = 0;
    v9[14] = 0;
    v9[15] = (uint32_t)(uintptr_t)((char *)a1 + 104);
    v9[16] = a2;
    Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(sb));
    gaia::ThreadManager::pushTask(Instance, v9);
    return 0;
  }
  else
  {
    *((uint32_t *)a1 + 9) = a2;
    NumberOfStoredConfigs = gaia::Gaia_Hestia::GetNumberOfStoredConfigs(a1);
    CurrentConfig = -11;
    if ( NumberOfStoredConfigs != -11 )
    {
      v52 = (bool (__high *)(void *, bool, Json::Value::Self))NumberOfStoredConfigs;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v64));
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v67);
      if ( (int)(uintptr_t)(v52) <= 0 )
      {
        *((uint8_t *)a1 + 136) = 1;
        CurrentConfig = -12;
        g4_std::string::append((int)(uintptr_t)(a1) + 132, "No cached config available", 0x1Au);
        *((uint8_t *)a1 + 137) = 0;
        *((uint8_t *)a1 + 138) = 0;
        *((uint8_t *)a1 + 139) = 0;
      }
      else
      {
        CurrentConfig = gaia::Gaia_Hestia::GetCurrentConfig((int)(uintptr_t)(a1), (int)(uintptr_t)(&v64[1]));
        if ( CurrentConfig == 0 )
        {
          v11 = glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v67, (int)(uintptr_t)(&v64[1]));
          if ( v11 != 0 )
          {
            *((uint8_t *)a1 + 136) = 1;
            g4_std::string::append((int)(uintptr_t)(a1) + 132, "Failed to parse current config, error: ", 0x27u);
            sprintf(v69, "%d \n", v11);
            g4_std::string::append((int)(uintptr_t)(a1) + 132, v69, strlen(v69));
          }
          glwebtools::JsonReader::opIndex(
            (glwebtools::JsonReader::Self *)v68,
            (glwebtools::Json::Value::Self *)v67,
            "offline_store");
          glwebtools::JsonReader::ToString((glwebtools::JsonReader::Self *)&v65);
          v12 = (oi::OfflineStore::Self *)oi::OfflineStore::GetInstance(sc);
          v62 = oi::OfflineStore::Refresh(v12, (int)(uintptr_t)(&v65));
          g4_std::string::Destroy(&v65);
          if ( v62 != 0 )
          {
            *((uint8_t *)a1 + 136) = 1;
            g4_std::string::append((int)(uintptr_t)(a1) + 132, "Failed to refresh offline items with cached config, error: ", 0x3Bu);
            sprintf(v69, "%d\n", v62);
            g4_std::string::append((int)(uintptr_t)(a1) + 132, v69, strlen(v69));
            *((uint8_t *)a1 + 137) = 0;
          }
          else
          {
            *((uint8_t *)a1 + 137) = 1;
          }
          v13 = (gaia::CrmManager::Self *)gaia::CrmManager::GetInstance((gaia::CrmManager::Self *)s);
          gaia::CrmManager::ResetCrmManager(v13);
          glwebtools::JsonReader::ToString((glwebtools::JsonReader::Self *)v66);
          v14 = (gaia::CrmManager::Self *)gaia::CrmManager::GetInstance(sd);
          CurrentConfig = gaia::CrmManager::Initialize(v14, (int)(uintptr_t)(v66));
          g4_std::string::Destroy(v66);
          if ( CurrentConfig != 0 )
          {
            g4_std::string::append((int)(uintptr_t)(a1) + 132, "Failed to refresh crm manager with cached config, error: ", 0x39u);
            sprintf(v69, "%d \n", CurrentConfig);
            v15 = v69;
            do
            {
              v16 = *(uint32_t *)v15;
              v15 += 4;
              v63 = ~v16 & (v16 - 16843009) & 0x80808080;
            }
            while ( v63 == 0 );
            v17 = HIWORD(v63);
            if ( (v63 & 0x8080) != 0 )
              LOBYTE(v17) = v63;
            else
              v15 += 2;
            g4_std::string::append((int)(uintptr_t)(a1) + 132, v69, &v15[-__CFADD__((uint8_t)v17, (uint8_t)v17) - 3] - v69);
            *((uint8_t *)a1 + 138) = 0;
          }
          else
          {
            v53 = *((bool (__high **)(void *, bool, Json::Value::Self))a1 + 30);
            v43 = *((gaia::CrmManager::Self **)a1 + 31);
            v18 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance((gaia::CrmManager::Self *)sa);
            gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v18, 6, v53, v43);
            v54 = *((bool (__high **)(void *, bool, Json::Value::Self))a1 + 30);
            v44 = *((gaia::CrmManager::Self **)a1 + 31);
            v19 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(se);
            gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v19, 9, v54, v44);
            v55 = *((bool (__high **)(void *, bool, Json::Value::Self))a1 + 30);
            v45 = *((gaia::CrmManager::Self **)a1 + 31);
            v20 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sf);
            gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v20, 7, v55, v45);
            v56 = *((bool (__high **)(void *, bool, Json::Value::Self))a1 + 30);
            v46 = *((gaia::CrmManager::Self **)a1 + 31);
            v21 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sg);
            gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v21, 8, v56, v46);
            v57 = *((bool (__high **)(void *, bool, Json::Value::Self))a1 + 30);
            v47 = *((gaia::CrmManager::Self **)a1 + 31);
            v22 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sh);
            gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v22, 10, v57, v47);
            v58 = *((bool (__high **)(void *, bool, Json::Value::Self))a1 + 30);
            v48 = *((gaia::CrmManager::Self **)a1 + 31);
            v23 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(si);
            gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v23, 11, v58, v48);
            v59 = *((bool (__high **)(void *, bool, Json::Value::Self))a1 + 30);
            v49 = *((gaia::CrmManager::Self **)a1 + 31);
            v24 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sj);
            gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v24, 13, v59, v49);
            v60 = *((bool (__high **)(void *, bool, Json::Value::Self))a1 + 30);
            v50 = *((gaia::CrmManager::Self **)a1 + 31);
            v25 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sk);
            gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v25, 14, v60, v50);
            v61 = *((bool (__high **)(void *, bool, Json::Value::Self))a1 + 30);
            v51 = *((gaia::CrmManager::Self **)a1 + 31);
            v26 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sl);
            gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v26, 15, v61, v51);
            v27 = *((uint32_t *)a1 + 31);
            *((uint8_t *)a1 + 138) = 1;
            *((uint32_t *)a1 + 24) = v27;
            *((uint32_t *)a1 + 25) = *((uint32_t *)a1 + 30);
          }
          v28 = *((void (**)(int))a1 + 9);
          v29 = gaia::Gaia::GetInstance();
          v28(*(uint32_t *)(v29 + 588) + 132);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v68);
        }
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v67);
      v7 = (void *)(*(uint32_t *)&v64[1] - 12);
      if ( (uint32_t *)(*(uint32_t *)&v64[1] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v64[1] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
    }
  }
  return CurrentConfig;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hestia::InitializeCRM  (binary VA: 0x149bd10)
// Original: gaia::Gaia_Hestia::InitializeCRM
// ----------------------------------------------------------------------------
int gaia::Gaia_Hestia::InitializeCRM(long double a1, gaia::Gaia::Self *a2, int a3, int a4, char a5, int a6, int a7)
{
  int result;
  int v8;
  gaia::Gaia::Self *v9;
  size_t v10;
  char *v11;
  char *v12;
  signed int n;
  char *v14;
  int v15;
  bool (__high *v16)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v17;
  bool (__high *v18)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v19;
  bool (__high *v20)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v21;
  bool (__high *v22)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v23;
  bool (__high *v24)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v25;
  bool (__high *v26)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v27;
  bool (__high *v28)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v29;
  bool (__high *v30)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v31;
  bool (__high *v32)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v33;
  int NumberOfStoredConfigs;
  oi::OfflineStore::Self *v35;
  int v36;
  void *v37;
  bool (__high *v38)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v39;
  void *v40;
  bool (__high *v41)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v42;
  void *v43;
  bool (__high *v44)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v45;
  void *v46;
  bool (__high *v47)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v48;
  void *v49;
  bool (__high *v50)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v51;
  void *v52;
  bool (__high *v53)(void *, bool, Json::Value::Self);
  gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *v54;
  void *v55;
  void (*v56)(int, char *);
  int v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  int Instance;
  gaia::UserProfile::Self *StandardUserProfile;
  int v63;
  gaia::Gaia::Self *v64;
  int v65;
  void *v66;
  size_t v67;
  char *v68;
  char *v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int i;
  int v75;
  gaia::UserProfile::Self *v76;
  int v77;
  char *v78;
  int v79;
  unsigned int v80;
  oi::OfflineStore::Self *v81;
  int v82;
  void *v83;
  oi::OfflineStore::Self *v84;
  int v85;
  gaia::CrmManager::Self *v86;
  gaia::CrmManager::Self *v87;
  int v88;
  void *v89;
  int v90;
  typedef gaia::CrmManager::Self *_g4_t_s;
  typedef gaia::CrmManager::Self *_g4_t_sc;
  typedef gaia::CrmManager::Self *_g4_t_sd;
  typedef gaia::CrmManager::Self *_g4_t_se;
  typedef gaia::CrmManager::Self *_g4_t_sf;
  typedef gaia::CrmManager::Self *_g4_t_sg;
  typedef gaia::CrmManager::Self *_g4_t_sh;
  typedef gaia::CrmManager::Self *_g4_t_si;
  typedef gaia::CrmManager::Self *_g4_t_sj;
  typedef oi::OfflineStore::Self *_g4_t_sk;
  typedef gaia::CrmManager::Self *_g4_t_sa;
  typedef gaia::CrmManager::Self *_g4_t_sl;
  typedef gaia::CrmManager::Self *_g4_t_sm;
  typedef gaia::CrmManager::Self *_g4_t_sn;
  typedef gaia::CrmManager::Self *_g4_t_so;
  typedef gaia::CrmManager::Self *_g4_t_sp;
  typedef gaia::ThreadManager::Self *_g4_t_sq;
  typedef oi::OfflineStore::Self *_g4_t_sr;
  typedef oi::OfflineStore::Self *_g4_t_ss;
  typedef gaia::CrmManager::Self *_g4_t_sb;
  typedef gaia::CrmManager::Self *_g4_t_st;
  typedef char *_g4_t_c;
  typedef char *_g4_t_v113;
  typedef void *_g4_t_v114;
  typedef void *_g4_t_v115;
  typedef void *_g4_t_v116;
  typedef void *_g4_t_v117;
  typedef void *_g4_t_v118;
  typedef void *_g4_t_v119;
  typedef void *_g4_t_v120;
  typedef void *_g4_t_v121;
  typedef void *_g4_t_v122;
  typedef void *_g4_t_v123;
  typedef int _g4_t_v124;
  typedef char *_g4_t_format;
  typedef unsigned int _g4_t_formata;
  typedef char *_g4_t_formatb;
  typedef char *_g4_t_formatc;
  typedef char *_g4_t_v129;
  typedef size_t _g4_t_v130;
  typedef size_t _g4_t_v131;
  typedef char *_g4_t_v132;
  typedef int _g4_t_v133;
  typedef char _g4_t_v134;
  typedef char _g4_t_v135;
  typedef uint32_t *_g4_t_v136;
  typedef int _g4_t_v137;
  typedef uint32_t *_g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef void *_g4_t_dest;
  typedef char *_g4_t_v143;
  typedef char *_g4_t_v144;
  typedef void *_g4_t_s1[4];
  typedef void *_g4_t_s2[4];
  typedef char _g4_t_v147[20];
  typedef char _g4_t_v148[4];
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef uint8_t _g4_t_v153[32];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_sc)) > _g4_s1 ? (0u + sizeof(_g4_t_sc)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_sd)) > _g4_s2 ? (0u + sizeof(_g4_t_sd)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_se)) > _g4_s3 ? (0u + sizeof(_g4_t_se)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_sf)) > _g4_s4 ? (0u + sizeof(_g4_t_sf)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_sg)) > _g4_s5 ? (0u + sizeof(_g4_t_sg)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_sh)) > _g4_s6 ? (0u + sizeof(_g4_t_sh)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_si)) > _g4_s7 ? (0u + sizeof(_g4_t_si)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_sj)) > _g4_s8 ? (0u + sizeof(_g4_t_sj)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_sk)) > _g4_s9 ? (0u + sizeof(_g4_t_sk)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_sa)) > _g4_s10 ? (0u + sizeof(_g4_t_sa)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_sl)) > _g4_s11 ? (0u + sizeof(_g4_t_sl)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_sm)) > _g4_s12 ? (0u + sizeof(_g4_t_sm)) : _g4_s12,
    _g4_s14 = (0u + sizeof(_g4_t_sn)) > _g4_s13 ? (0u + sizeof(_g4_t_sn)) : _g4_s13,
    _g4_s15 = (0u + sizeof(_g4_t_so)) > _g4_s14 ? (0u + sizeof(_g4_t_so)) : _g4_s14,
    _g4_s16 = (0u + sizeof(_g4_t_sp)) > _g4_s15 ? (0u + sizeof(_g4_t_sp)) : _g4_s15,
    _g4_s17 = (0u + sizeof(_g4_t_sq)) > _g4_s16 ? (0u + sizeof(_g4_t_sq)) : _g4_s16,
    _g4_s18 = (0u + sizeof(_g4_t_sr)) > _g4_s17 ? (0u + sizeof(_g4_t_sr)) : _g4_s17,
    _g4_s19 = (0u + sizeof(_g4_t_ss)) > _g4_s18 ? (0u + sizeof(_g4_t_ss)) : _g4_s18,
    _g4_s20 = (0u + sizeof(_g4_t_sb)) > _g4_s19 ? (0u + sizeof(_g4_t_sb)) : _g4_s19,
    _g4_s21 = (0u + sizeof(_g4_t_st)) > _g4_s20 ? (0u + sizeof(_g4_t_st)) : _g4_s20,
    _g4_s22 = (4u + sizeof(_g4_t_c)) > _g4_s21 ? (4u + sizeof(_g4_t_c)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v113)) > _g4_s22 ? (56u + sizeof(_g4_t_v113)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v114)) > _g4_s23 ? (56u + sizeof(_g4_t_v114)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v115)) > _g4_s24 ? (56u + sizeof(_g4_t_v115)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v116)) > _g4_s25 ? (56u + sizeof(_g4_t_v116)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v117)) > _g4_s26 ? (56u + sizeof(_g4_t_v117)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v118)) > _g4_s27 ? (56u + sizeof(_g4_t_v118)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v119)) > _g4_s28 ? (56u + sizeof(_g4_t_v119)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v120)) > _g4_s29 ? (56u + sizeof(_g4_t_v120)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v121)) > _g4_s30 ? (56u + sizeof(_g4_t_v121)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v122)) > _g4_s31 ? (56u + sizeof(_g4_t_v122)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v123)) > _g4_s32 ? (56u + sizeof(_g4_t_v123)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v124)) > _g4_s33 ? (60u + sizeof(_g4_t_v124)) : _g4_s33,
    _g4_s35 = (64u + sizeof(_g4_t_format)) > _g4_s34 ? (64u + sizeof(_g4_t_format)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_formata)) > _g4_s35 ? (64u + sizeof(_g4_t_formata)) : _g4_s35,
    _g4_s37 = (64u + sizeof(_g4_t_formatb)) > _g4_s36 ? (64u + sizeof(_g4_t_formatb)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_formatc)) > _g4_s37 ? (64u + sizeof(_g4_t_formatc)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_v129)) > _g4_s38 ? (68u + sizeof(_g4_t_v129)) : _g4_s38,
    _g4_s40 = (72u + sizeof(_g4_t_v130)) > _g4_s39 ? (72u + sizeof(_g4_t_v130)) : _g4_s39,
    _g4_s41 = (72u + sizeof(_g4_t_v131)) > _g4_s40 ? (72u + sizeof(_g4_t_v131)) : _g4_s40,
    _g4_s42 = (76u + sizeof(_g4_t_v132)) > _g4_s41 ? (76u + sizeof(_g4_t_v132)) : _g4_s41,
    _g4_s43 = (86u + sizeof(_g4_t_v133)) > _g4_s42 ? (86u + sizeof(_g4_t_v133)) : _g4_s42,
    _g4_s44 = (92u + sizeof(_g4_t_v134)) > _g4_s43 ? (92u + sizeof(_g4_t_v134)) : _g4_s43,
    _g4_s45 = (93u + sizeof(_g4_t_v135)) > _g4_s44 ? (93u + sizeof(_g4_t_v135)) : _g4_s44,
    _g4_s46 = (96u + sizeof(_g4_t_v136)) > _g4_s45 ? (96u + sizeof(_g4_t_v136)) : _g4_s45,
    _g4_s47 = (100u + sizeof(_g4_t_v137)) > _g4_s46 ? (100u + sizeof(_g4_t_v137)) : _g4_s46,
    _g4_s48 = (104u + sizeof(_g4_t_v138)) > _g4_s47 ? (104u + sizeof(_g4_t_v138)) : _g4_s47,
    _g4_s49 = (108u + sizeof(_g4_t_v139)) > _g4_s48 ? (108u + sizeof(_g4_t_v139)) : _g4_s48,
    _g4_s50 = (112u + sizeof(_g4_t_v140)) > _g4_s49 ? (112u + sizeof(_g4_t_v140)) : _g4_s49,
    _g4_s51 = (116u + sizeof(_g4_t_v141)) > _g4_s50 ? (116u + sizeof(_g4_t_v141)) : _g4_s50,
    _g4_s52 = (120u + sizeof(_g4_t_dest)) > _g4_s51 ? (120u + sizeof(_g4_t_dest)) : _g4_s51,
    _g4_s53 = (124u + sizeof(_g4_t_v143)) > _g4_s52 ? (124u + sizeof(_g4_t_v143)) : _g4_s52,
    _g4_s54 = (128u + sizeof(_g4_t_v144)) > _g4_s53 ? (128u + sizeof(_g4_t_v144)) : _g4_s53,
    _g4_s55 = (132u + sizeof(_g4_t_s1)) > _g4_s54 ? (132u + sizeof(_g4_t_s1)) : _g4_s54,
    _g4_s56 = (148u + sizeof(_g4_t_s2)) > _g4_s55 ? (148u + sizeof(_g4_t_s2)) : _g4_s55,
    _g4_s57 = (164u + sizeof(_g4_t_v147)) > _g4_s56 ? (164u + sizeof(_g4_t_v147)) : _g4_s56,
    _g4_s58 = (184u + sizeof(_g4_t_v148)) > _g4_s57 ? (184u + sizeof(_g4_t_v148)) : _g4_s57,
    _g4_s59 = (188u + sizeof(_g4_t_v149)) > _g4_s58 ? (188u + sizeof(_g4_t_v149)) : _g4_s58,
    _g4_s60 = (192u + sizeof(_g4_t_v150)) > _g4_s59 ? (192u + sizeof(_g4_t_v150)) : _g4_s59,
    _g4_s61 = (196u + sizeof(_g4_t_v151)) > _g4_s60 ? (196u + sizeof(_g4_t_v151)) : _g4_s60,
    _g4_s62 = (200u + sizeof(_g4_t_v152)) > _g4_s61 ? (200u + sizeof(_g4_t_v152)) : _g4_s61,
    _g4_s63 = (204u + sizeof(_g4_t_v153)) > _g4_s62 ? (204u + sizeof(_g4_t_v153)) : _g4_s62
  };
  alignas(16) uint8_t _g4_sf[_g4_s63];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_sc &sc = *reinterpret_cast<_g4_t_sc *>(_g4_sf + 0u);
  _g4_t_sd &sd = *reinterpret_cast<_g4_t_sd *>(_g4_sf + 0u);
  _g4_t_se &se = *reinterpret_cast<_g4_t_se *>(_g4_sf + 0u);
  _g4_t_sf &sf = *reinterpret_cast<_g4_t_sf *>(_g4_sf + 0u);
  _g4_t_sg &sg = *reinterpret_cast<_g4_t_sg *>(_g4_sf + 0u);
  _g4_t_sh &sh = *reinterpret_cast<_g4_t_sh *>(_g4_sf + 0u);
  _g4_t_si &si = *reinterpret_cast<_g4_t_si *>(_g4_sf + 0u);
  _g4_t_sj &sj = *reinterpret_cast<_g4_t_sj *>(_g4_sf + 0u);
  _g4_t_sk &sk = *reinterpret_cast<_g4_t_sk *>(_g4_sf + 0u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 0u);
  _g4_t_sl &sl = *reinterpret_cast<_g4_t_sl *>(_g4_sf + 0u);
  _g4_t_sm &sm = *reinterpret_cast<_g4_t_sm *>(_g4_sf + 0u);
  _g4_t_sn &sn = *reinterpret_cast<_g4_t_sn *>(_g4_sf + 0u);
  _g4_t_so &so = *reinterpret_cast<_g4_t_so *>(_g4_sf + 0u);
  _g4_t_sp &sp = *reinterpret_cast<_g4_t_sp *>(_g4_sf + 0u);
  _g4_t_sq &sq = *reinterpret_cast<_g4_t_sq *>(_g4_sf + 0u);
  _g4_t_sr &sr = *reinterpret_cast<_g4_t_sr *>(_g4_sf + 0u);
  _g4_t_ss &ss = *reinterpret_cast<_g4_t_ss *>(_g4_sf + 0u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 0u);
  _g4_t_st &st = *reinterpret_cast<_g4_t_st *>(_g4_sf + 0u);
  _g4_t_c &c = *reinterpret_cast<_g4_t_c *>(_g4_sf + 4u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 56u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 56u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 56u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 56u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 56u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 56u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 56u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 56u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 56u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 56u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 56u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 60u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 64u);
  _g4_t_formata &formata = *reinterpret_cast<_g4_t_formata *>(_g4_sf + 64u);
  _g4_t_formatb &formatb = *reinterpret_cast<_g4_t_formatb *>(_g4_sf + 64u);
  _g4_t_formatc &formatc = *reinterpret_cast<_g4_t_formatc *>(_g4_sf + 64u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 68u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 72u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 72u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 76u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 86u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 92u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 93u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 96u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 100u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 104u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 108u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 112u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 116u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 120u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 124u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 128u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 132u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 148u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 164u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 184u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 188u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 192u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 196u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 200u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 204u);

  result = -22;
  v8 = a3;
  v9 = a2;
  if ( *(int *)(a3 + 12) > 0 )
  {
    *((uint32_t *)a2 + 26) = *(uint32_t *)a3;
    g4_std::string::assign_str((char *)a2 + 108, a3 + 4);
    *((uint32_t *)a2 + 28) = *(uint32_t *)(a3 + 8);
    *((uint32_t *)a2 + 29) = *(uint32_t *)(a3 + 12);
    *((uint32_t *)a2 + 30) = *(uint32_t *)(a3 + 16);
    *((uint32_t *)a2 + 31) = *(uint32_t *)(a3 + 20);
    if ( a5 != 0 )
    {
      v60 = (uint32_t *)opNew(0x44u);
      *v60 = a7;
      v60[1] = a6;
      v60[2] = 6503;
      Json::Value::Construct((int)(uintptr_t)(v60 + 3), nullptr);
      v60[7] = 0;
      v60[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v60 + 9), nullptr);
      v60[15] = (uint32_t)(uintptr_t)((char *)a2 + 104);
      v60[16] = a4;
      v60[13] = 0;
      v60[14] = 0;
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(sq));
      gaia::ThreadManager::pushTask(Instance, v60);
      return 0;
    }
    else
    {
      v132 = (char *)a2 + 52;
      g4_std::string::assign_str((char *)a2 + 52, a3 + 4);
      v10 = *(uint32_t *)(a3 + 12);
      v11 = nullptr;
      dest = nullptr;
      v143 = nullptr;
      v144 = nullptr;
      v136 = &dword_213B814;
      v12 = nullptr;
      if ( v10 != 0 )
      {
        v12 = (char *)opNew(v10);
        v11 = v12;
      }
      dest = v12;
      v144 = &v12[v10];
      memset(v12, 0, &v12[v10] - v11);
      n = *(uint32_t *)(a3 + 12);
      v143 = v144;
      if ( n <= 0 )
      {
        v129 = (char *)a2 + 144;
        g4_std::string::append((int)(uintptr_t)(a2) + 144, "Default config is empty !", 0x19u);
      }
      else
      {
        memcpy(dest, *(const void **)(a3 + 8), n);
        v129 = (char *)a2 + 144;
      }
      v14 = gaia::Gaia_Hestia::DecryptConfig((int)(uintptr_t)(a2), (int *)&dest, (int)(uintptr_t)(&v136));
      if ( v14 != nullptr )
      {
        v113 = v14;
        g4_std::string::append((int)(uintptr_t)(v129), "Default config failed to decrypt, error: ", 0x29u);
        sprintf(v148, "%d\n", v113);
        g4_std::string::append((int)(uintptr_t)(v129), v148, strlen(v148));
      }
      else
      {
        gaia::defaultCRMConfig::Initialize(*((uint32_t *)a2 + 32), (int)(uintptr_t)(&v136));
      }
      if ( gaia::Gaia_Hestia::InitializeLocalData((gaia::Gaia_Hestia::Self *)(a2)) == -14 )
      {
        g4_std::string::append((int)(uintptr_t)(v129), "Could not init local data, error: ", 0x22u);
        sprintf(v148, "%d\n", -14);
        g4_std::string::append((int)(uintptr_t)(v129), v148, strlen(v148));
      }
      *((uint32_t *)a2 + 8) = a4;
      gaia::Gaia::GetInstance();
      StandardUserProfile = (gaia::UserProfile::Self *)gaia::Gaia_Seshat::GetStandardUserProfile();
      *((uint32_t *)a2 + 23) = (uint32_t)(uintptr_t)(StandardUserProfile);
      if ( *((uint8_t *)StandardUserProfile + 36) != 0 )
      {
        v63 = *(uint32_t *)a3;
        s1[0] = &dword_213B814;
        s2[0] = &dword_213B814;
        v64 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
        gaia::Gaia::GetCredentialDetails(v64, v63, 2, (gaia::Gaia::Self *)s1);
        Json::Value::Construct((int)(uintptr_t)(v147), nullptr);
        gaia::UserProfile::GetProfile(*((gaia::UserProfile::Self **)a2 + 23), (Json::Value::Self *)v147);
        v65 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v147, "credential"));
        Json::Value::asString((Json::Value::Self *)&v137, v65);
        g4_std::string::assign_str(s2, &v137);
        v66 = (void *)(v137 - 12);
        if ( (uint32_t *)(v137 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v137 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v66);
        }
        format = *((char **)s1[0] - 3);
        v130 = *((uint32_t *)s2[0] - 3);
        v67 = (size_t)format;
        if ( v130 <= (unsigned int)(uintptr_t)(format) )
          v67 = *((uint32_t *)s2[0] - 3);
        if ( memcmp(s1[0], s2[0], v67) != 0 || format != (char *)v130 )
        {
          gaia::Gaia_Hestia::InvalidateAllCRMConfigs(a1, (gaia::Gaia_Hestia::Self *)(a2));
          gaia::Gaia::GetInstance();
          gaia::Gaia_Seshat::ReleaseStandardUserProfile();
          gaia::Gaia::GetInstance();
          v76 = (gaia::UserProfile::Self *)gaia::Gaia_Seshat::GetStandardUserProfile();
          *((uint32_t *)a2 + 23) = (uint32_t)(uintptr_t)(v76);
          v77 = gaia::UserProfile::Initialize(v76, *(uint32_t *)a3, 0, 0, 0);
          if ( v77 != 0 )
          {
            v123 = (void *)v77;
            g4_std::string::append((int)(uintptr_t)(v129), "UserProfile failed to initialize, error: ", 0x29u);
            *(uint32_t *)v148 = 0;
            v149 = 0;
            v150 = 0;
            v151 = 0;
            v152 = 0;
            sprintf(v148, "%d\n", v123);
            v78 = v148;
            do
            {
              v79 = *(uint32_t *)v78;
              v78 += 4;
              formata = ~v79 & (v79 - 16843009) & 0x80808080;
            }
            while ( formata == 0 );
            v80 = HIWORD(formata);
            if ( (formata & 0x8080) != 0 )
              LOBYTE(v80) = formata;
            else
              v78 += 2;
            g4_std::string::append((int)(uintptr_t)(v129), v148, &v78[-__CFADD__((uint8_t)v80, (uint8_t)v80) - 3] - v148);
          }
          else
          {
            *((uint8_t *)a2 + 151) = 1;
            gaia::GameloftID::RetrieveDeviceInfo((gaia::GameloftID::Self *)v148);
            g4_std::string::assign_str(&v151, v132);
            formatc = *(char **)a3;
            v131 = gaia::Gaia::GetInstance();
            gaia::Gaia_Janus::SetDeviceInfo(
              *(gaia::Gaia::Self **)(v131 + 560),
              (int)(uintptr_t)(formatc),
              v148,
              &v149,
              &v150,
              &v151,
              0,
              0,
              0);
            g4_std::string::Destroy(v153);
            g4_std::string::Destroy(&v152);
            g4_std::string::Destroy(&v151);
            g4_std::string::Destroy(&v150);
            g4_std::string::Destroy(&v149);
            g4_std::string::Destroy(v148);
          }
        }
        Json::Value::Destroy((Json::Value::Self *)v147);
        v68 = (char *)s2[0] - 12;
        if ( (char *)s2[0] - 12 != (char *)dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)s2[0] - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v68);
        }
        v69 = (char *)s1[0] - 12;
        if ( (char *)s1[0] - 12 != (char *)dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)s1[0] - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v69);
        }
      }
      else
      {
        v75 = gaia::UserProfile::Initialize(StandardUserProfile, *(uint32_t *)a3, 0, 0, 0);
        if ( v75 != 0 )
        {
          *((uint8_t *)a2 + 148) = 1;
          g4_std::string::append((int)(uintptr_t)(v129), "UserProfile failed to initialize, error: ", 0x29u);
          *(uint32_t *)v148 = 0;
          v149 = 0;
          v150 = 0;
          v151 = 0;
          v152 = 0;
          sprintf(v148, "%d\n", v75);
          g4_std::string::append((int)(uintptr_t)(v129), v148, strlen(v148));
        }
        else
        {
          *((uint8_t *)a2 + 151) = 1;
          gaia::GameloftID::RetrieveDeviceInfo((gaia::GameloftID::Self *)v148);
          g4_std::string::assign_str(&v151, v132);
          formatb = *(char **)a3;
          v90 = gaia::Gaia::GetInstance();
          gaia::Gaia_Janus::SetDeviceInfo(*(gaia::Gaia::Self **)(v90 + 560), (int)(uintptr_t)(formatb), v148, &v149, &v150, &v151, 0, 0, 0);
          g4_std::string::Destroy(v153);
          g4_std::string::Destroy(&v152);
          g4_std::string::Destroy(&v151);
          g4_std::string::Destroy(&v150);
          g4_std::string::Destroy(&v149);
          g4_std::string::Destroy(v148);
        }
      }
      v70 = *((uint32_t *)a2 + 24);
      if ( v70 != 0 )
      {
        v124 = *((uint32_t *)a2 + 25);
        v71 = (int)(uintptr_t)(gaia::CrmManager::GetInstance(s));
        v15 = *(uint32_t *)(v71 + 16);
        v72 = v71 + 8;
        if ( v15 != v72 )
        {
          v73 = v72;
          do
          {
            for ( i = *(uint32_t *)(v15 + 20); i != *(uint32_t *)(v15 + 24); i += 12 )
            {
              if ( v70 == *(uint32_t *)(i + 4) && v124 == *(uint32_t *)i )
                *(uint8_t *)(i + 8) = 0;
            }
            v15 = sub_1904890(v15);
          }
          while ( v15 != v73 );
          v9 = a2;
          v8 = a3;
        }
      }
      v16 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
      v114 = *(void **)(v8 + 20);
      v17 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(s);
      gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v17, 6, v16, v114);
      v18 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
      v115 = *(void **)(v8 + 20);
      v19 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sc);
      gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v19, 9, v18, v115);
      v20 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
      v116 = *(void **)(v8 + 20);
      v21 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sd);
      gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v21, 7, v20, v116);
      v22 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
      v117 = *(void **)(v8 + 20);
      v23 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(se);
      gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v23, 8, v22, v117);
      v24 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
      v118 = *(void **)(v8 + 20);
      v25 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sf);
      gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v25, 10, v24, v118);
      v26 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
      v119 = *(void **)(v8 + 20);
      v27 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sg);
      gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v27, 11, v26, v119);
      v28 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
      v120 = *(void **)(v8 + 20);
      v29 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sh);
      gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v29, 13, v28, v120);
      v30 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
      v121 = *(void **)(v8 + 20);
      v31 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(si);
      gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v31, 14, v30, v121);
      v32 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
      v122 = *(void **)(v8 + 20);
      v33 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sj);
      gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v33, 15, v32, v122);
      *((uint32_t *)v9 + 24) = *(uint32_t *)(v8 + 20);
      *((uint32_t *)v9 + 25) = *(uint32_t *)(v8 + 16);
      NumberOfStoredConfigs = gaia::Gaia_Hestia::GetNumberOfStoredConfigs((gaia::Gaia_Hestia::Self *)(v9));
      v138 = &dword_213B814;
      if ( NumberOfStoredConfigs <= 0
        || gaia::Gaia_Hestia::DeleteExpiredConfigs(a1, (gaia::Gaia_Hestia::Self *)(v9)) != 0
        || gaia::Gaia_Hestia::GetCurrentConfig((int)(uintptr_t)(v9), (int)(uintptr_t)(&v138)) != 0 )
      {
        g4_std::string::append(
          (int)(uintptr_t)(v129),
          "Error getting a stored config, the CrmManager will not be Initialized and Offline Items and IAP will be using "
          "the default game config \n",
          0x87u);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v147), (char *)&unk_1B15112, (int)(uintptr_t)(&v133) + 1);
        gaia::defaultCRMConfig::GetOfflineItemsConfig(*((uint32_t *)v9 + 32), (int)(uintptr_t)(v147));
        v35 = (oi::OfflineStore::Self *)oi::OfflineStore::GetInstance(sk);
        v36 = oi::OfflineStore::Initialize(v35, (int)(uintptr_t)(v147));
        if ( v36 != 0 )
        {
          *((uint8_t *)v9 + 148) = 1;
          g4_std::string::append((int)(uintptr_t)(v129), "Error initializing OfflineItems with the default game config \n", 0x3Eu);
          sprintf(v148, "%d", v36);
          g4_std::string::append((int)(uintptr_t)(v129), v148, strlen(v148));
        }
        else
        {
          *((uint8_t *)v9 + 149) = 1;
        }
        v37 = *(void **)(v8 + 20);
        v38 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
        v39 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sa);
        gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v39, 6, v38, v37);
        v40 = *(void **)(v8 + 20);
        v41 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
        v42 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sl);
        gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v42, 9, v41, v40);
        v43 = *(void **)(v8 + 20);
        v44 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
        v45 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sm);
        gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v45, 7, v44, v43);
        v46 = *(void **)(v8 + 20);
        v47 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
        v48 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sn);
        gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v48, 8, v47, v46);
        v49 = *(void **)(v8 + 20);
        v50 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
        v51 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(so);
        gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v51, 10, v50, v49);
        v52 = *(void **)(v8 + 20);
        v53 = *(bool (__high **)(void *, bool, Json::Value::Self))(v8 + 16);
        v54 = (gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)gaia::CrmManager::GetInstance(sp);
        gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(v54, 11, v53, v52);
        v55 = (void *)(*(uint32_t *)v147 - 12);
        if ( (uint32_t *)(*(uint32_t *)v147 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v147 - 4), 0xFFFFFFFF) <= 0 )
        {
          c = &v135;
          g4_std::string::Rep::M_destroy(v55);
        }
      }
      else
      {
        glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)s1, (int)(uintptr_t)(&v138));
        glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)s2, (glwebtools::Json::Value::Self *)s1, "offline_store");
        glwebtools::JsonReader::ToString((glwebtools::JsonReader::Self *)&v139);
        v81 = (oi::OfflineStore::Self *)oi::OfflineStore::GetInstance(sr);
        v82 = oi::OfflineStore::Initialize(v81, (int)(uintptr_t)(&v139));
        v83 = (void *)(v139 - 12);
        if ( (uint32_t *)(v139 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v139 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v83);
        }
        if ( v82 != 0 )
        {
          g4_std::string::append((int)(uintptr_t)(v129), "OfflineItems failed to initialize with the cached game config, error: ", 0x46u);
          sprintf(v147, "%d\n", v82);
          g4_std::string::append((int)(uintptr_t)(v129), v147, strlen(v147));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v140), (char *)&unk_1B15112, (int)(uintptr_t)(&v133));
          gaia::defaultCRMConfig::GetOfflineItemsConfig(*((uint32_t *)v9 + 32), (int)(uintptr_t)(&v140));
          v84 = (oi::OfflineStore::Self *)oi::OfflineStore::GetInstance(ss);
          v85 = oi::OfflineStore::Initialize(v84, (int)(uintptr_t)(&v140));
          if ( v85 != 0 )
          {
            *((uint8_t *)v9 + 148) = 1;
            g4_std::string::append((int)(uintptr_t)(v129), "Error initializing OfflineItems with the default game config, error: ", 0x45u);
            sprintf(v148, "%d\n", v85);
            g4_std::string::append((int)(uintptr_t)(v129), v148, strlen(v148));
          }
          else
          {
            g4_std::string::append((int)(uintptr_t)(v129), "OfflineItems initialized with the default game config\n", 0x36u);
            *((uint8_t *)v9 + 149) = 1;
          }
          g4_std::string::Destroy(&v140);
        }
        else
        {
          g4_std::string::append((int)(uintptr_t)(v129), "OfflineItems initialized with the cached game config\n", 0x35u);
          *((uint8_t *)v9 + 149) = 1;
        }
        v86 = (gaia::CrmManager::Self *)gaia::CrmManager::GetInstance(sb);
        gaia::CrmManager::ResetCrmManager(v86);
        glwebtools::JsonReader::ToString((glwebtools::JsonReader::Self *)&v141);
        v87 = (gaia::CrmManager::Self *)gaia::CrmManager::GetInstance(st);
        v88 = gaia::CrmManager::Initialize(v87, (int)(uintptr_t)(&v141));
        v89 = (void *)(v141 - 12);
        if ( (uint32_t *)(v141 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v141 - 4), 0xFFFFFFFF) <= 0 )
        {
          c = &v134;
          g4_std::string::Rep::M_destroy(v89);
        }
        if ( v88 != 0 )
        {
          g4_std::string::append((int)(uintptr_t)(v129), "\nCrmManager failed to initialize, error: ", 0x29u);
          sprintf(v148, "%d\n", v88);
          g4_std::string::append((int)(uintptr_t)(v129), v148, strlen(v148));
        }
        else
        {
          *((uint8_t *)v9 + 150) = 1;
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)s2);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)s1);
      }
      v56 = *(void (**)(int, char *))(*(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 32);
      v57 = gaia::Gaia::GetInstance();
      v56(*(uint32_t *)(v57 + 588) + 140, c);
      v58 = v138 - 3;
      if ( v138 - 3 != dword_213B808 && __sync_fetch_and_add(v138 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v58);
      if ( dest != nullptr )
        opDelete(dest);
      v59 = v136 - 3;
      if ( v136 - 3 == dword_213B808 )
      {
        return 0;
      }
      else
      {
        result = 0;
        if ( __sync_fetch_and_add(v136 - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v59);
          return 0;
        }
      }
    }
  }
  return result;
}


