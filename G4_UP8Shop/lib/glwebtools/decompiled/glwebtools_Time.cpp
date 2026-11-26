#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Time.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Time::GetCurrentTimestamp  (binary VA: 0x13eaef0)
// Original: glwebtools::Time::GetCurrentTimestamp
// ----------------------------------------------------------------------------
time_t glwebtools::Time::GetCurrentTimestamp()
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  time(&timer);
  return timer;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Time::ConvertISOTimeUTCToTimestamp  (binary VA: 0x13eaf20)
// Original: glwebtools::Time::ConvertISOTimeUTCToTimestamp
// ----------------------------------------------------------------------------
int glwebtools::Time::ConvertISOTimeUTCToTimestamp(glwebtools::Time::Self *self, char *a2)
{
  size_t v2;
  int v3;
  char v4;
  time_t v5;
  typedef char _g4_t_nptr[4];
  typedef char _g4_t_v8;
  typedef struct tm _g4_t_v9;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_nptr)) > _g4_s0 ? (12u + sizeof(_g4_t_nptr)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v9)) > _g4_s2 ? (17u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 17u);

  if ( self == nullptr )
    return -2147483646;
  v2 = strlen((const char *)self);
  v3 = -2147483646;
  if ( v2 == 20
    && *((uint8_t *)self + 4) == 45
    && *((uint8_t *)self + 7) == 45
    && *((uint8_t *)self + 10) == 32
    && *((uint8_t *)self + 13) == 58
    && *((uint8_t *)self + 16) == 58 )
  {
    v4 = *((uint8_t *)self + 19);
    if ( v4 == 90 || v4 == 122 )
    {
      memset(&v9, 0, sizeof(v9));
      v8 = 0;
      *(uint32_t *)nptr = *(uint32_t *)self;
      v9.tm_year = atoi(nptr) - 1900;
      *(uint32_t *)nptr = *(uint32_t *)((char *)self + 5);
      v9.tm_mon = atoi(nptr) - 1;
      *(uint32_t *)nptr = *((uint32_t *)self + 2);
      v9.tm_mday = atoi(nptr);
      *(uint32_t *)nptr = *(uint32_t *)((char *)self + 11);
      v9.tm_hour = atoi(nptr);
      *(uint32_t *)nptr = *(uint32_t *)((char *)self + 14);
      v9.tm_min = atoi(nptr);
      *(uint32_t *)nptr = *(uint32_t *)((char *)self + 17);
      v9.tm_sec = atoi(nptr);
      v9.tm_isdst = -1;
      v5 = mktime(&v9);
      *(uint32_t *)a2 = v9.tm_gmtoff + v5;
      return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Time::ConvertRFC1123ToTimestamp  (binary VA: 0x13eb090)
// Original: glwebtools::Time::ConvertRFC1123ToTimestamp
// ----------------------------------------------------------------------------
int glwebtools::Time::ConvertRFC1123ToTimestamp(glwebtools::Time::Self *self, char *a2)
{
  int v2;
  size_t v3;
  time_t v5;
  int v6;
  typedef char _g4_t_nptr[4];
  typedef char _g4_t_v8;
  typedef struct tm _g4_t_tp;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_nptr)) > _g4_s0 ? (12u + sizeof(_g4_t_nptr)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_tp)) > _g4_s2 ? (17u + sizeof(_g4_t_tp)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 17u);

  if ( self == nullptr )
    return -2147483646;
  v2 = -2147483646;
  v3 = strlen((const char *)self);
  if ( v3 == 29 )
  {
    LOBYTE(v3) = 0;
    memset32(&tp, v3, 0xBu);
    tp.tm_mday = sub_13EAE30((glwebtools::Time::Self *)((char *)self + 5));
    v2 = sub_13EAE60((int)(uintptr_t)(self) + 8, &tp.tm_mon);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v2) )
    {
      *(uint32_t *)nptr = *((uint32_t *)self + 3);
      v8 = 0;
      v2 = -2147483646;
      tp.tm_year = atoi(nptr) - 1900;
      tp.tm_hour = sub_13EAE30((glwebtools::Time::Self *)((char *)self + 17));
      tp.tm_min = sub_13EAE30((uint16_t *)self + 10);
      tp.tm_sec = sub_13EAE30((glwebtools::Time::Self *)((char *)self + 23));
      tp.tm_isdst = -1;
      v5 = mktime(&tp);
      v6 = tp.tm_gmtoff + v5;
      *(uint32_t *)a2 = v6;
      if ( v6 != -1 )
        return 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Time::ConvertRFC1036ToTimestamp  (binary VA: 0x13eb1a0)
// Original: glwebtools::Time::ConvertRFC1036ToTimestamp
// ----------------------------------------------------------------------------
int glwebtools::Time::ConvertRFC1036ToTimestamp(glwebtools::Time::Self *self, char *a2)
{
  int v2;
  size_t v3;
  size_t n;
  void *v5;
  time_t v7;
  int v8;
  time_t v9;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_dest[2];
  typedef int16_t _g4_t_v15;
  typedef struct tm _g4_t_tp;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (2u + sizeof(_g4_t_v13)) > _g4_s1 ? (2u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_dest)) > _g4_s2 ? (8u + sizeof(_g4_t_dest)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (18u + sizeof(_g4_t_tp)) > _g4_s4 ? (18u + sizeof(_g4_t_tp)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 2u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 18u);

  if ( self == nullptr )
    return -2147483646;
  v2 = -2147483646;
  v3 = strlen((const char *)self);
  if ( v3 - 30 <= 3 )
  {
    memset(&tp, 0, sizeof(tp));
    sub_193A970((int)(uintptr_t)(&v13), self, v3, (int)(uintptr_t)(&v12));
    n = (size_t)(uintptr_t)(sub_1937EB0(&v13, 44, 0));
    v5 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v2 = -2147483646;
    if ( n <= 9 )
    {
      dest[0] = 0;
      dest[1] = 0;
      v15 = 0;
      v11 = 0;
      memcpy(dest, self, n);
      while ( strcmp(&aSunday /* "Sunday" */[10 * v11], (const char *)dest) != 0 )
      {
        if ( ++v11 == 12 )
        {
          v2 = -2147483646;
          goto LABEL_5;
        }
      }
      tp.tm_wday = v11;
      v2 = 0;
    }
LABEL_5:
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v2) )
    {
      tp.tm_mday = sub_13EAE30((glwebtools::Time::Self *)((char *)self + n + 2));
      v2 = sub_13EAE60((int)(uintptr_t)(self) + n + 5, &tp.tm_mon);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v2) )
      {
        v2 = 0;
        tp.tm_year = sub_13EAE30((glwebtools::Time::Self *)((char *)self + n + 9)) + 100;
        tp.tm_hour = sub_13EAE30((glwebtools::Time::Self *)((char *)self + n + 12));
        tp.tm_min = sub_13EAE30((glwebtools::Time::Self *)((char *)self + n + 15));
        tp.tm_sec = sub_13EAE30((glwebtools::Time::Self *)((char *)self + n + 18));
        tp.tm_isdst = -1;
        v7 = mktime(&tp);
        v8 = tp.tm_gmtoff + v7;
        *(uint32_t *)a2 = v8;
        if ( v8 == -1 )
        {
          tp.tm_year = sub_13EAE30((glwebtools::Time::Self *)((char *)self + n + 9));
          v9 = mktime(&tp);
          v10 = tp.tm_gmtoff + v9;
          *(uint32_t *)a2 = v10;
          if ( v10 == -1 )
            return -2147483646;
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Time::ConvertDateToTimestamp  (binary VA: 0x13eb3f0)
// Original: glwebtools::Time::ConvertDateToTimestamp
// ----------------------------------------------------------------------------
int glwebtools::Time::ConvertDateToTimestamp(glwebtools::Time::Self *self, char *a2)
{
  size_t v2;
  unsigned int v3;
  int result;

  v2 = strlen((const char *)self);
  if ( v2 == 20 )
    return glwebtools::Time::ConvertISOTimeUTCToTimestamp(self, a2);
  if ( v2 == 29 )
    return glwebtools::Time::ConvertRFC1123ToTimestamp(self, a2);
  v3 = v2 - 30;
  result = -2147483646;
  if ( v3 <= 3 )
    return glwebtools::Time::ConvertRFC1036ToTimestamp(self, a2);
  return result;
}


