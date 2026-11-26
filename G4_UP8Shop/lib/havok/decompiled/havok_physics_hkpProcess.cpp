#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpProcess.h"

// ----------------------------------------------------------------------------
// Function: hkpProcessFlyingColors  (binary VA: 0x17def80)
// Original: hkpProcessFlyingColors
// ----------------------------------------------------------------------------
int hkpProcessFlyingColors(uint8_t *a1)
{
  int v2;
  int v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  int v10;
  const char *v11;
  char v12;
  const char *v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint8_t *v21;
  uint8_t *v22;
  int v23;
  int v24;
  uint8_t v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  const char *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint32_t v35[16];

  *a1 = 0;
  if ( a0x7b5fdcf20x7c /* "0x7b5fdcf2-0x7c0abd7b:2015-04-15.Physics_2012..." */[0] != 48 || a0x7b5fdcf20x7c /* "0x7b5fdcf2-0x7c0abd7b:2015-04-15.Physics_2012..." */[1] != 120 )
    goto LABEL_2;
  v2 = a0x7b5fdcf20x7c /* "0x7b5fdcf2-0x7c0abd7b:2015-04-15.Physics_2012..." */[2];
  if ( (uint8_t)(a0x7b5fdcf20x7c /* "0x7b5fdcf2-0x7c0abd7b:2015-04-15.Physics_2012..." */[2] - 48) > 9u )
  {
    if ( (uint8_t)(v2 - 65) <= 5u )
    {
      v3 = v2 - 55;
    }
    else
    {
      if ( (uint8_t)(v2 - 97) > 5u )
      {
        v4 = "b5fdcf2-0x7c0abd7b:2015-04-15.Physics_2012.Gameloft_GangstarIV_iOS-Android-Linux";
        v5 = -1;
        goto LABEL_12;
      }
      v3 = v2 - 87;
    }
  }
  else
  {
    v3 = v2 - 48;
  }
  v4 = "b5fdcf2-0x7c0abd7b:2015-04-15.Physics_2012.Gameloft_GangstarIV_iOS-Android-Linux";
  v5 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        ++v4;
        v5 = v3 + 16 * v5;
        v2 = *(v4 - 1);
        if ( (uint8_t)(*(v4 - 1) - 48) > 9u )
          break;
        v3 = v2 - 48;
      }
      if ( (uint8_t)(v2 - 65) > 5u )
        break;
      v3 = v2 - 55;
    }
    if ( (uint8_t)(v2 - 97) > 5u )
      break;
    v3 = v2 - 87;
  }
LABEL_12:
  if ( (uint8_t)v2 != 58 && ((uint8_t)v2 != 45 || *v4 != 48 || v4[1] != 120) )
    goto LABEL_2;
  v6 = v4[2];
  if ( (uint8_t)(v4[2] - 48) > 9u )
  {
    if ( (uint8_t)(v6 - 65) <= 5u )
    {
      v7 = v6 - 55;
      goto LABEL_18;
    }
    v25 = v6 - 97;
    v7 = v6 - 87;
    if ( v25 <= 5u )
      goto LABEL_18;
    if ( v5 != 0 )
    {
      v31 = -1;
      goto LABEL_31;
    }
LABEL_2:
    hkErrorMessage((hkString::Self *)"Product:hkp Key Code is invalid or is for a different product version.\n"
                               "Please contact Havok.com\n"
                               "No simulation possible.");
    return 1;
  }
  v7 = v6 - 48;
LABEL_18:
  v8 = v4 + 3;
  v31 = -1;
  v28 = v5;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        ++v8;
        v9 = v7;
        v10 = *(v8 - 1);
        v31 = 16 * v31 + v9;
        if ( (uint8_t)(*(v8 - 1) - 48) > 9u )
          break;
        v7 = v10 - 48;
      }
      if ( (uint8_t)(v10 - 65) > 5u )
        break;
      v7 = v10 - 55;
    }
    if ( (uint8_t)(v10 - 97) > 5u )
      break;
    v7 = v10 - 87;
  }
  v5 = v28;
  if ( v28 == 0 || v31 == 0 )
    goto LABEL_2;
LABEL_31:
  v11 = "0x7b5fdcf2-0x7c0abd7b:2015-04-15.Physics_2012.Gameloft_GangstarIV_iOS-Android-Linux";
  while ( *v11 != 0 && *v11 != 46 )
  {
    if ( ++v11 == nullptr )
      goto LABEL_2;
  }
  v30 = v11 + 1;
  if ( v11 == (const char *)-1 )
    goto LABEL_2;
  v12 = v11[1];
  if ( v12 != 0 )
  {
    v13 = v30;
    if ( v12 != 46 )
    {
      while ( ++v13 != nullptr )
      {
        if ( *v13 == 0 || *v13 == 46 )
        {
          v30 = v13;
          goto LABEL_43;
        }
      }
      goto LABEL_2;
    }
  }
LABEL_43:
  v29 = v5 & 0x7FFFFFFF ^ 0x7B0AF209;
  v27 = (unsigned int)v5 >> 31;
  if ( v5 < 0 )
  {
    v20 = hkGetSystemTime() >> 8;
    if ( v20 <= 5300436 || v29 < v20 )
    {
LABEL_53:
      hkErrorMessage((hkString::Self *)"Product:hkp Key Code has expired or is for a different product version.\n"
                                 "Please contact Havok.com for an extension.\n"
                                 "No simulation possible.");
      return 2;
    }
    v26 = (unsigned int)(v29 - v20 - 1) < 0xD2E ? 3 : 0;
    v14 = "0x7c0abd7b:2015-04-15.Physics_2012.Gameloft_GangstarIV_iOS-Android-Linux";
  }
  else
  {
    v26 = 0;
    v14 = "2015-04-15.Physics_2012.Gameloft_GangstarIV_iOS-Android-Linux";
  }
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  do
  {
    v18 = v14[v16];
    if ( (uint8_t)v18 == 46 )
      break;
    if ( (uint8_t)v18 == 45 )
    {
      v18 = v14[v16 + 1];
      ++v17;
      ++v16;
      v15 = *(&v32 + v17);
    }
    ++v16;
    v15 = v18 + 10 * v15 - 48;
    *(&v32 + v17) = v15;
  }
  while ( v16 <= 9 );
  v19 = v32 - 1967;
  v35[1] = 0;
  v35[2] = 31;
  v35[3] = 59;
  if ( v32 - 1970 >= 0 )
    v19 = v32 - 1970;
  v35[4] = 90;
  v35[5] = 120;
  v35[6] = 151;
  v35[7] = 181;
  v35[8] = 212;
  v35[9] = 243;
  v35[10] = 273;
  v35[11] = 304;
  v35[12] = 334;
  if ( (int64_t)__builtin_llabs(
                  ((86400LL
                  * (v35[v33]
                   + ((int)((uint64_t)(1374389535LL * (v32 - 1970)) >> 32) >> 7)
                   + (v19 >> 2)
                   + 365 * (v32 - 1970)
                   - ((int)((uint64_t)(1374389535LL * (v32 - 1970)) >> 32) >> 5)
                   + v34
                   - 1)) >> 8)
                - v29) > 1012 )
    goto LABEL_53;
  if ( (uint8_t)v27 == 0 )
  {
    v21 = (uint8_t *)(v30 + 2);
    if ( v30[1] != 0 )
    {
      v22 = (uint8_t *)(v30 + 1);
      v23 = 0;
      while ( 1 )
      {
        v23 = (char)v22[1] + 23 * v23;
        if ( *v21 == 0 )
          break;
        v22 = v21++;
      }
      v24 = (v23 ^ 0x7B0AF209) & 0x7FFFFFFF;
    }
    else
    {
      v24 = 2064314889;
    }
    if ( v31 != v24 )
      goto LABEL_2;
  }
  *a1 = 1;
  return v26;
}


