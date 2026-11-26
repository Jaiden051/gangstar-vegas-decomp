#include "Core/Utils/DecompTypes.h"
#include "gaia_utils.h"

// ----------------------------------------------------------------------------
// Function: gaia::utils::detectService  (binary VA: 0x14cff90)
// Original: gaia::utils::detectService
// ----------------------------------------------------------------------------
int gaia::utils::detectService(int a1)
{
  int result;

  result = -1;
  if ( a1 > 499 )
  {
    if ( a1 <= 999 )
    {
      return 500;
    }
    else if ( a1 <= 1499 )
    {
      return 1000;
    }
    else if ( a1 <= 1999 )
    {
      return 1500;
    }
    else if ( a1 <= 2499 )
    {
      return 2000;
    }
    else if ( a1 <= 2999 )
    {
      return 2500;
    }
    else if ( a1 <= 3499 )
    {
      return 3000;
    }
    else if ( a1 <= 3999 )
    {
      return 3500;
    }
    else if ( a1 <= 4499 )
    {
      return 4000;
    }
    else if ( a1 <= 4999 )
    {
      return 4500;
    }
    else if ( a1 <= 5499 )
    {
      return 5000;
    }
    else if ( a1 <= 5999 )
    {
      return 5500;
    }
    else if ( a1 <= 6499 )
    {
      return 6000;
    }
    else if ( a1 <= 6999 )
    {
      return 6500;
    }
    else if ( a1 <= 7499 )
    {
      return 7000;
    }
    else if ( a1 <= 7999 )
    {
      return 7500;
    }
    else if ( a1 <= 8499 )
    {
      return 8000;
    }
    else
    {
      result = 8500;
      if ( a1 > 8999 )
        return 9000;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::utils::GetMaxParalelRequests  (binary VA: 0x14d00c0)
// Original: gaia::utils::GetMaxParalelRequests
// ----------------------------------------------------------------------------
int gaia::utils::GetMaxParalelRequests()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::utils::DetectGaiaServiceIdentifier  (binary VA: 0x14d00d0)
// Original: gaia::utils::DetectGaiaServiceIdentifier
// ----------------------------------------------------------------------------
int gaia::utils::DetectGaiaServiceIdentifier(int a1)
{
  int v1;
  int v2;

  v1 = gaia::utils::detectService(a1);
  v2 = 8;
  if ( v1 != 5000 )
  {
    if ( v1 <= 5000 )
    {
      LOBYTE(v2) = 10;
      if ( v1 == 2500 )
        return v2;
      if ( v1 > 2500 )
      {
        v2 = 2;
        if ( v1 == 3500 )
          return v2;
        if ( v1 <= 3500 )
        {
          LOBYTE(v2) = 11;
          if ( v1 == 3000 )
            return v2;
          return 0;
        }
        v2 = 5;
        if ( v1 != 4000 )
        {
          LOBYTE(v2) = 6;
          if ( v1 != 4500 )
            return 0;
        }
      }
      else
      {
        LOBYTE(v2) = 3;
        if ( v1 != 1500 )
        {
          LOBYTE(v2) = 4;
          if ( v1 != 2000 )
          {
            LOBYTE(v2) = 1;
            if ( v1 != 1000 )
              return 0;
          }
        }
      }
    }
    else
    {
      v2 = 13;
      if ( v1 != 7000 )
      {
        if ( v1 > 7000 )
        {
          v2 = 15;
          if ( v1 == 8000 )
            return v2;
          if ( v1 <= 8000 )
          {
            LOBYTE(v2) = 14;
            if ( v1 == 7500 )
              return v2;
            return 0;
          }
          v2 = 16;
          if ( v1 != 8500 )
          {
            LOBYTE(v2) = 17;
            if ( v1 != 9000 )
              return 0;
          }
        }
        else
        {
          LOBYTE(v2) = 9;
          if ( v1 != 6000 )
          {
            LOBYTE(v2) = 12;
            if ( v1 != 6500 )
            {
              LOBYTE(v2) = 7;
              if ( v1 != 5500 )
                return 0;
            }
          }
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::utils::GetUnixTimeStampInMillisec  (binary VA: 0x14d01f0)
// Original: gaia::utils::GetUnixTimeStampInMillisec
// ----------------------------------------------------------------------------
int64_t gaia::utils::GetUnixTimeStampInMillisec()
{
  typedef struct timeval _g4_t_tv;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_tv)) > _g4_s0 ? (8u + sizeof(_g4_t_tv)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 8u);

  gettimeofday(&tv, nullptr);
  return tv.tv_usec / 1000 + (int64_t)(1000 * tv.tv_sec);
}

// ----------------------------------------------------------------------------
// Function: gaia::utils::GetStringUnixTimeStampInMillisec  (binary VA: 0x14d0260)
// Original: gaia::utils::GetStringUnixTimeStampInMillisec
// ----------------------------------------------------------------------------
gaia::utils::Self * gaia::utils::GetStringUnixTimeStampInMillisec(gaia::utils::Self *self)
{
  int64_t UnixTimeStampInMillisec; // rax
  char s[65];

  UnixTimeStampInMillisec = gaia::utils::GetUnixTimeStampInMillisec();
  sprintf(&s[1], "%lld", UnixTimeStampInMillisec);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), &s[1], (int)(uintptr_t)(s));
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::utils::gmtimeMx  (binary VA: 0x14d02d0)
// Original: gaia::utils::gmtimeMx
// ----------------------------------------------------------------------------
int * gaia::utils::gmtimeMx(gaia::utils::Self *self)
{
  unsigned int v1; // kr00_4
  unsigned int v2;
  unsigned int v3;
  int i;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int j;
  bool v10;
  int v11;
  bool v12;
  int v14;
  int v15;

  v1 = *(uint32_t *)self;
  v2 = *(uint32_t *)self % 0x15180u;
  dword_211A260 = v2 % 0x3C;
  dword_211A268 = v2 / 0xE10;
  v3 = v1 / 0x15180;
  dword_211A264 = v2 % 0xE10 / 0x3C;
  dword_211A278 = (v1 / 0x15180 + 4) % 7;
  for ( i = 1970; ; ++i )
  {
    v6 = 365;
    v7 = i & 3;
    if ( (i & 3) == 0 )
    {
      v6 = 366;
      if ( i == 100 * (i / 100) )
        v6 = 366 - (i != 400 * (i / 400));
    }
    if ( v3 < v6 )
      break;
    v5 = 365;
    if ( (i & 3) == 0 )
    {
      v5 = 366;
      if ( i == 100 * (i / 100) )
        v5 = 366 - (i != 400 * (i / 400));
    }
    v3 -= v5;
  }
  dword_211A274 = i - 1900;
  dword_211A27C = v3;
  v15 = i % 400;
  v14 = i % 100;
  v8 = 0;
  for ( j = 0; ; ++j )
  {
    v12 = false;
    if ( v7 == 0 )
    {
      LOBYTE(v12) = 1;
      if ( v14 == 0 )
        v12 = v15 == 0;
    }
    if ( v3 < dword_1D11BA0[12 * v12 + j] )
      break;
    v10 = false;
    if ( v7 == 0 )
    {
      LOBYTE(v10) = 1;
      if ( v14 == 0 )
        v10 = v15 == 0;
    }
    v8 = j + 1;
    v11 = j + 12 * v10;
    v3 -= dword_1D11BA0[v11];
  }
  dword_211A270 = v8;
  dword_211A26C = v3 + 1;
  dword_211A280 = 0;
  return (int *)(&dword_211A260);
}


