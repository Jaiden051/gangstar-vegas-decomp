#include "Core/Utils/DecompTypes.h"
#include "gaia_DataParser.h"

// ----------------------------------------------------------------------------
// Function: gaia::DataParser::skipWhiteSpaces  (binary VA: 0x14cf450)
// Original: gaia::DataParser::skipWhiteSpaces
// ----------------------------------------------------------------------------
int gaia::DataParser::skipWhiteSpaces(gaia::DataParser::Self *self, char *a2)
{
  int v2;
  int v3;
  char v4;

  v2 = 0;
  v3 = *(uint32_t *)a2;
  v4 = *((uint8_t *)self + *(uint32_t *)a2);
  if ( v4 != 0 )
  {
    v2 = 1;
    if ( v4 == 32 )
    {
      do
        *(uint32_t *)a2 = ++v3;
      while ( *((uint8_t *)self + v3) == 32 );
      return 1;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataParser::str_lwr  (binary VA: 0x14cf4b0)
// Original: gaia::DataParser::_str_lwr
// ----------------------------------------------------------------------------
int gaia::DataParser::str_lwr(gaia::DataParser::Self *self)
{
  int result;

  result = (char)(uintptr_t)self;
  if ( (uint8_t)((uint8_t)(uintptr_t)self - 65) <= 0x19u )
    return (char)(uintptr_t)self + 32;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataParser::detectString  (binary VA: 0x14cf4d0)
// Original: gaia::DataParser::detectString
// ----------------------------------------------------------------------------
int gaia::DataParser::detectString(gaia::DataParser::Self *self, char *a2, int *a3, char **a4)
{
  int v4;
  int v5;
  int v6;
  char v7;
  int v8;
  int v9;
  char v10;

  v4 = 0;
  if ( (int)(uintptr_t)(a4) <= 0 )
    return -1;
  while ( *(uint8_t *)a3[v4] != 0 )
  {
    v5 = 0;
    v6 = 0;
    v7 = *((uint8_t *)self + *(uint32_t *)a2);
    if ( v7 != 0 )
    {
      while ( 1 )
      {
        v8 = gaia::DataParser::str_lwr((gaia::DataParser::Self *)v7);
        v9 = a3[v4];
        v10 = *(uint8_t *)(v9 + v5);
        if ( v8 != v10 )
          break;
        v5 = ++v6;
        if ( *(uint8_t *)(v9 + v6) == 0 )
          goto LABEL_12;
        v7 = *((uint8_t *)self + v6 + *(uint32_t *)a2);
        if ( v7 == 0 )
          goto LABEL_9;
      }
      if ( v10 == 0 )
        goto LABEL_12;
    }
LABEL_9:
    if ( (char **)++v4 == a4 )
      return -1;
  }
  v6 = 0;
LABEL_12:
  *(uint32_t *)a2 += v6;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataParser::detectAndReadInt  (binary VA: 0x14cf590)
// Original: gaia::DataParser::detectAndReadInt
// ----------------------------------------------------------------------------
int gaia::DataParser::detectAndReadInt(gaia::DataParser::Self *self, char *a2, int *a3)
{
  char *v3;
  int *v4;
  uint8_t *v5;
  int result;
  char v7;
  int v8;
  char v9;

  if ( (int)(uintptr_t)(a3) <= 0 )
  {
    if ( a3 == nullptr )
      return 0;
    v4 = nullptr;
    goto LABEL_3;
  }
  v3 = *(char **)a2;
  v4 = nullptr;
  v8 = *(uint32_t *)a2;
  v5 = (uint8_t *)((char *)self + *(uint32_t *)a2);
  if ( *v5 == 0 )
  {
LABEL_3:
    *(uint32_t *)a2 -= (uint32_t)(uintptr_t)v4;
    return -1;
  }
  result = 0;
  if ( (uint8_t)(*v5 - 48) > 9u )
  {
LABEL_10:
    *(uint32_t *)a2 = v3 - (char *)v4;
    return -1;
  }
  else
  {
    v9 = *((uint8_t *)self + *(uint32_t *)a2);
    while ( 1 )
    {
      v4 = (int *)((char *)v4 + 1);
      v3 = (char *)v4 + v8;
      *(uint32_t *)a2 = (uint32_t)(uintptr_t)((char *)v4 + v8);
      result = v9 + 10 * result - 48;
      if ( v4 == a3 )
        break;
      v7 = *((uint8_t *)v4 + (uint32_t)(uintptr_t)(v5));
      v9 = v7;
      if ( v7 == 0 )
        goto LABEL_3;
      if ( (uint8_t)(v7 - 48) > 9u )
        goto LABEL_10;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::DataParser::ConvertDataToSec  (binary VA: 0x14cf640)
// Original: gaia::DataParser::ConvertDataToSec
// ----------------------------------------------------------------------------
int gaia::DataParser::ConvertDataToSec(gaia::DataParser::Self *self, char *a2, char *a3)
{
  struct tm *v3;
  time_t v4;
  struct tm *v5;
  int v6;
  int v7;
  int result;
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

  memset(&tp, 0, sizeof(tp));
  if ( strptime(self) == 0 )
    return -22;
  time(&timer);
  v3 = localtime(&timer);
  v4 = mktime(v3);
  v5 = gmtime(&timer);
  v6 = v4 - mktime(v5);
  v7 = mktime(&tp) + v6;
  result = 0;
  *(uint32_t *)a3 = v7;
  return result;
}


