#include "Core/Utils/DecompTypes.h"
#include "TU27_MenuControllerPart7.h"

// ----------------------------------------------------------------------------
// Function: sub_C00E90  (binary VA: 0xc00e90)
// Original: sub_C00E90
// ----------------------------------------------------------------------------
int sub_C00E90()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE6D8);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE6D8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE6DC), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE6DC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE6E0), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE6E0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE6E4), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE6E4, &unk_20D1280);
  dword_20DE6E8 = 1056964608;
  dword_20DE6EC = 1056964608;
  dword_20DE6F0 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_C00F90  (binary VA: 0xc00f90)
// Original: sub_C00F90
// ----------------------------------------------------------------------------
void sub_C00F90()
{
  int v0;
  int v1;
  int *v2;
  void *v3;

  v3 = (void *)dword_20DE720;
  if ( dword_20DE720 != 0 )
  {
    v0 = dword_20DE700;
    v1 = dword_20DE704;
    if ( dword_20DE700 != dword_20DE704 )
    {
      v2 = (int *)dword_20DE700;
      do
      {
        if ( *v2 != 0 )
          sub_4EB870(*v2);
        v2 += 3;
      }
      while ( (int *)v1 != v2 );
    }
    dword_20DE704 = v0;
    dword_20DE714 = dword_20DE710;
    opDelete(v3);
    dword_20DE720 = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C01030  (binary VA: 0xc01030)
// Original: sub_C01030
// ----------------------------------------------------------------------------
int sub_C01030(int a1)
{
  *(uint32_t *)(a1 + 72) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C01040  (binary VA: 0xc01040)
// Original: sub_C01040
// ----------------------------------------------------------------------------
int sub_C01040()
{
  int v0;
  int v1;
  int *v2;

  v0 = dword_20DE700;
  v1 = dword_20DE704;
  if ( dword_20DE700 != dword_20DE704 )
  {
    v2 = (int *)dword_20DE700;
    do
    {
      if ( *v2 != 0 )
        sub_4EB870(*v2);
      v2 += 3;
    }
    while ( (int *)v1 != v2 );
  }
  dword_20DE704 = v0;
  dword_20DE714 = dword_20DE710;
  return dword_20DE710;
}

// ----------------------------------------------------------------------------
// Function: sub_C010A0  (binary VA: 0xc010a0)
// Original: sub_C010A0
// ----------------------------------------------------------------------------
int sub_C010A0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;

  v3 = 0;
  v4 = *(uint32_t *)(a3 + 640);
  if ( v4 >= 0 )
  {
    v3 = 0;
    if ( v4 < (unsigned int)(-1431655765 * ((dword_20DE704 - dword_20DE700) >> 2)) )
      v3 = 12 * v4;
  }
  v5 = (int *)(dword_20DE700 + v3);
  v6 = *(uint32_t *)(dword_20DE700 + v3);
  result = a2 + 464;
  v8 = (v5[1] - *v5) >> 2;
  if ( v8 > 0 )
  {
    result = 0;
    while ( 1 )
    {
      v10 = *(uint32_t *)(v6 + 4 * result);
      v9 = 4 * result;
      if ( v10 != -4 )
        goto LABEL_6;
      v11 = *(uint32_t *)(a2 + 476);
      if ( v11 >= 0 && v11 < (unsigned int)(-1431655765 * ((dword_20DE704 - dword_20DE700) >> 2)) )
        break;
LABEL_7:
      if ( *(uint32_t *)(a1 + 72) <= result )
        v9 = 0;
      *(uint32_t *)(*(uint32_t *)(a2 + 464) + v9) = v10;
LABEL_10:
      if ( ++result == v8 )
        return result;
      v6 = *v5;
    }
    v10 = *(uint32_t *)(*(uint32_t *)(dword_20DE700 + 12 * v11) + 4 * result);
LABEL_6:
    if ( v10 == -3 )
      goto LABEL_10;
    goto LABEL_7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C011B0  (binary VA: 0xc011b0)
// Original: sub_C011B0
// ----------------------------------------------------------------------------
void sub_C011B0(int a1, int a2, uint32_t *a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = *a4;
  v5 = (a4[1] - *a4) >> 2;
  if ( v5 > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v8 = *(uint32_t *)(v4 + 4 * v6);
      v7 = 4 * v6;
      if ( v8 != -4 )
        goto LABEL_3;
      v9 = *(uint32_t *)(a2 + 476);
      if ( v9 >= 0 && v9 < (unsigned int)(-1431655765 * ((dword_20DE704 - dword_20DE700) >> 2)) )
        break;
LABEL_4:
      if ( v6 >= *(uint32_t *)(a1 + 72) )
        v7 = 0;
      *(uint32_t *)(*a3 + v7) = v8;
LABEL_7:
      if ( ++v6 == v5 )
        return;
      v4 = *a4;
    }
    v8 = *(uint32_t *)(*(uint32_t *)(dword_20DE700 + 12 * v9) + 4 * v6);
LABEL_3:
    if ( v8 == -3 )
      goto LABEL_7;
    goto LABEL_4;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C01270  (binary VA: 0xc01270)
// Original: sub_C01270
// ----------------------------------------------------------------------------
int sub_C01270(int a1, uint32_t *a2, int a3, uint32_t *a4, int a5)
{
  int result;

  result = 0;
  if ( a3 >= 0 && a3 < *(uint32_t *)(a1 + 72) )
    result = 4 * a3;
  *(uint32_t *)(*a2 + result) = *(uint32_t *)(*a4 + 4 * a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C012C0  (binary VA: 0xc012c0)
// Original: sub_C012C0
// ----------------------------------------------------------------------------
void sub_C012C0(int a1, int a2, uint32_t *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint8_t _g4_t_v20[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v20)) > _g4_s3 ? (32u + sizeof(_g4_t_v20)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);

  v3 = (uint32_t *)a2;
  *(uint32_t *)(a2 + 2884) = -1;
  *(uint32_t *)(a2 + 2888) = -1;
  sub_987840(a2, 0);
  *(uint32_t *)(a2 + 3576) = 0;
  *(uint32_t *)(a2 + 3580) = -1082130432;
  *(uint32_t *)(a2 + 3584) = 0;
  *(uint32_t *)(a2 + 3588) = 0;
  *(uint32_t *)(a2 + 3592) = -1082130432;
  *(uint32_t *)(a2 + 3596) = 0;
  *(uint32_t *)(a2 + 3600) = 0;
  *(uint32_t *)(a2 + 3604) = -1082130432;
  *(uint32_t *)(a2 + 3608) = 0;
  *(uint32_t *)(a2 + 3624) = 0;
  *(uint32_t *)(a2 + 3628) = 0;
  *(uint32_t *)(a2 + 3612) = 0;
  *(uint32_t *)(a2 + 3616) = 0;
  *(uint32_t *)(a2 + 3620) = 0;
  *(uint32_t *)(a2 + 3632) = 0;
  *(uint32_t *)(a2 + 3636) = -1082130432;
  *(uint32_t *)(a2 + 3640) = 0;
  if ( (uint8_t)sub_9878E0(a2) == 0 )
  {
    if ( G4_VCALL<int>(a2, 456) == 0
      || (v15 = *(uint32_t *)(a2 + 1872), v16 = *(uint32_t *)(a2 + 1876), (v15 & 0x100) == 0)
      || v15 < 0
      || (v16 & 1) != 0
      || (v16 & 4) != 0 )
    {
      sub_9DA470(a2, 1);
      v17 = *(uint32_t *)(a2 + 3908);
      sub_C17BB0(v20);
      sub_9D9CA0(a2, v20, v17, 1044975579, 0);
    }
  }
  v19 = (uint32_t *)(a2 + 464);
  if ( (uint8_t)sub_9878E0(a2) == 0 )
  {
    if ( *(uint8_t *)(a2 + 3793) != 0 )
    {
      v12 = a3[121];
      v13 = dword_20DE700;
      if ( v12 >= 0 )
        goto LABEL_22;
      goto LABEL_30;
    }
    if ( *(uint8_t *)(a2 + 189) == 0 || (v12 = a3[117]) == -1 )
    {
      if ( *(uint32_t *)(a2 + 1880) == 1 )
      {
        v12 = a3[115];
        v13 = dword_20DE700;
        if ( v12 < 0 )
        {
          v14 = 0;
          goto LABEL_24;
        }
        goto LABEL_22;
      }
      v12 = a3[116];
    }
    v13 = dword_20DE700;
    if ( v12 < 0 )
    {
LABEL_30:
      v14 = 0;
LABEL_24:
      sub_C011B0(a1, a2, v19, (int *)(v13 + v14));
      return;
    }
LABEL_22:
    v14 = 0;
    if ( v12 < (unsigned int)(-1431655765 * ((dword_20DE704 - v13) >> 2)) )
      v14 = 12 * v12;
    goto LABEL_24;
  }
  if ( *(uint8_t *)(a2 + 3793) != 0 )
    v4 = a3[122];
  else
    v4 = a3[118];
  v5 = 0;
  if ( v4 >= 0 )
  {
    v5 = 0;
    if ( v4 < (unsigned int)(-1431655765 * ((dword_20DE704 - dword_20DE700) >> 2)) )
      v5 = 12 * v4;
  }
  v18 = (int *)(dword_20DE700 + v5);
  v6 = *(uint32_t *)(dword_20DE700 + v5);
  v7 = (v18[1] - *v18) >> 2;
  if ( v7 > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v10 = *(uint32_t *)(v6 + 4 * v8);
      v9 = 4 * v8;
      if ( v10 != -4 )
        goto LABEL_10;
      v11 = *(uint32_t *)(a2 + 476);
      if ( v11 >= 0 && v11 < (unsigned int)(-1431655765 * ((dword_20DE704 - dword_20DE700) >> 2)) )
        break;
LABEL_11:
      if ( *(uint32_t *)(a1 + 72) <= v8 )
        v9 = 0;
      *(uint32_t *)(*v19 + v9) = v10;
LABEL_14:
      if ( ++v8 == v7 )
      {
        v3 = (uint32_t *)a2;
        goto LABEL_33;
      }
      v6 = *v18;
    }
    v10 = *(uint32_t *)(*(uint32_t *)(dword_20DE700 + 12 * v11) + 4 * v8);
LABEL_10:
    if ( v10 == -3 )
      goto LABEL_14;
    goto LABEL_11;
  }
LABEL_33:
  if ( G4_VCALL<uint8_t>(v3, 724) == 0 && v3[545] == 4 )
    sub_8E8FA0(v3);
}

// ----------------------------------------------------------------------------
// Function: sub_C01660  (binary VA: 0xc01660)
// Original: sub_C01660
// ----------------------------------------------------------------------------
int sub_C01660(int a1, uint32_t *a2)
{
  int result;
  int v3;
  unsigned int v4;
  int *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;

  result = (int)(uintptr_t)(a2);
  v3 = a2[119];
  if ( v3 < 0 )
    return result;
  result = dword_20DE700;
  v4 = -1431655765 * ((dword_20DE704 - dword_20DE700) >> 2);
  if ( v3 >= v4 || (unsigned int)(a2[117] - a2[116]) >> 2 == 0 )
    return result;
  v5 = (int *)(dword_20DE700 + 12 * v3);
  v6 = a2 + 116;
  v7 = *v5;
  v15 = (v5[1] - *v5) >> 2;
  if ( v15 <= 0 )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    v10 = *(uint32_t *)(v7 + 4 * v8);
    v9 = 4 * v8;
    if ( v10 != -4 )
      goto LABEL_6;
    v17 = a2[119];
    if ( v17 >= 0 && v17 < (unsigned int)(-1431655765 * ((dword_20DE704 - dword_20DE700) >> 2)) )
    {
      v10 = *(uint32_t *)(*(uint32_t *)(dword_20DE700 + 12 * v17) + 4 * v8);
LABEL_6:
      if ( v10 == -3 )
        goto LABEL_10;
    }
    if ( *(uint32_t *)(a1 + 72) <= v8 )
      v9 = 0;
    *(uint32_t *)(*v6 + v9) = v10;
LABEL_10:
    if ( ++v8 == v15 )
      break;
    v7 = *v5;
  }
  result = dword_20DE700;
  v4 = -1431655765 * ((dword_20DE704 - dword_20DE700) >> 2);
LABEL_18:
  v16 = (int *)(result + (v4 >= 0x4C ? 0x384 : 0));
  v11 = *v16;
  v12 = (v16[1] - *v16) >> 2;
  if ( v12 > 0 )
  {
    result = 0;
    while ( 1 )
    {
      v14 = *(uint32_t *)(v11 + 4 * result);
      v13 = 4 * result;
      if ( v14 != -4 )
        goto LABEL_20;
      v18 = a2[119];
      if ( v18 >= 0 && v18 < (unsigned int)(-1431655765 * ((dword_20DE704 - dword_20DE700) >> 2)) )
        break;
LABEL_21:
      if ( *(uint32_t *)(a1 + 72) <= result )
        v13 = 0;
      *(uint32_t *)(*v6 + v13) = v14;
LABEL_24:
      if ( ++result == v12 )
        return result;
      v11 = *v16;
    }
    v14 = *(uint32_t *)(*(uint32_t *)(dword_20DE700 + 12 * v18) + 4 * result);
LABEL_20:
    if ( v14 == -3 )
      goto LABEL_24;
    goto LABEL_21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C01840  (binary VA: 0xc01840)
// Original: sub_C01840
// ----------------------------------------------------------------------------
bool sub_C01840(int a1)
{
  bool result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  result = false;
  if ( a1 >= 0 )
  {
    v2 = dword_20DE710;
    v3 = 16 * a1;
    result = true;
    v4 = (dword_20DE714 - dword_20DE710) >> 4;
    v5 = dword_20DE710 + 16 * a1;
    if ( a1 >= v4 )
      v5 = dword_20DE710;
    if ( *(uint32_t *)(v5 + 4) != 1 )
    {
      v6 = dword_20DE710 + v3;
      if ( a1 >= v4 )
        v6 = dword_20DE710;
      if ( *(uint32_t *)(v6 + 4) != 4 )
      {
        v7 = dword_20DE710 + v3;
        if ( a1 < v4 )
          v2 = v7;
        return *(uint32_t *)(v2 + 4) == 6;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C018D0  (binary VA: 0xc018d0)
// Original: sub_C018D0
// ----------------------------------------------------------------------------
bool sub_C018D0(int a1)
{
  bool result;
  int v2;

  result = false;
  if ( a1 >= 0 )
  {
    result = true;
    v2 = dword_20DE710 + 16 * a1;
    if ( a1 >= (dword_20DE714 - dword_20DE710) >> 4 )
      v2 = dword_20DE710;
    if ( *(uint32_t *)(v2 + 4) != 6 )
      return *(uint32_t *)(v2 + 4) == 8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C01940  (binary VA: 0xc01940)
// Original: sub_C01940
// ----------------------------------------------------------------------------
bool sub_C01940(int a1)
{
  bool result;
  int v2;

  result = false;
  if ( a1 >= 0 )
  {
    result = true;
    v2 = dword_20DE710 + 16 * a1;
    if ( a1 >= (dword_20DE714 - dword_20DE710) >> 4 )
      v2 = dword_20DE710;
    if ( *(uint32_t *)(v2 + 4) != 7 )
      return *(uint32_t *)(v2 + 4) == 8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C019B0  (binary VA: 0xc019b0)
// Original: sub_C019B0
// ----------------------------------------------------------------------------
bool sub_C019B0(int a1)
{
  bool result;
  int v2;
  int v3;
  int v4;

  result = true;
  if ( a1 >= 0 )
  {
    v2 = (dword_20DE714 - dword_20DE710) >> 4;
    v3 = dword_20DE710 + 16 * a1;
    if ( a1 >= v2 )
      v3 = dword_20DE710;
    if ( *(uint32_t *)(v3 + 4) != 3 )
    {
      v4 = dword_20DE710 + 16 * a1;
      if ( a1 >= v2 )
        v4 = dword_20DE710;
      if ( *(uint32_t *)(v4 + 4) != 8 )
        return *(uint32_t *)(v4 + 4) == 7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C01A30  (binary VA: 0xc01a30)
// Original: sub_C01A30
// ----------------------------------------------------------------------------
bool sub_C01A30(int a1)
{
  bool result;
  int v2;
  int v3;
  int v4;

  result = false;
  if ( a1 >= 0 )
  {
    v2 = (dword_20DE714 - dword_20DE710) >> 4;
    v3 = dword_20DE710 + 16 * a1;
    if ( a1 >= v2 )
      v3 = dword_20DE710;
    if ( *(uint32_t *)(v3 + 4) != 3 )
    {
      v4 = dword_20DE710 + 16 * a1;
      if ( a1 >= v2 )
        v4 = dword_20DE710;
      if ( *(uint32_t *)(v4 + 4) != 8 )
        return *(uint32_t *)(v4 + 4) != 7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C01AB0  (binary VA: 0xc01ab0)
// Original: sub_C01AB0
// ----------------------------------------------------------------------------
bool sub_C01AB0(int a1)
{
  bool result;
  int v2;

  result = false;
  if ( a1 >= 0 )
  {
    v2 = dword_20DE710;
    if ( a1 < (dword_20DE714 - dword_20DE710) >> 4 )
      v2 = dword_20DE710 + 16 * a1;
    return *(uint32_t *)(v2 + 4) == 5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C01B00  (binary VA: 0xc01b00)
// Original: sub_C01B00
// ----------------------------------------------------------------------------
bool sub_C01B00(int a1)
{
  bool result;
  int v2;

  result = false;
  if ( a1 >= 0 )
  {
    v2 = dword_20DE710;
    if ( a1 < (dword_20DE714 - dword_20DE710) >> 4 )
      v2 = dword_20DE710 + 16 * a1;
    return *(uint32_t *)(v2 + 4) == 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C01B50  (binary VA: 0xc01b50)
// Original: sub_C01B50
// ----------------------------------------------------------------------------
bool sub_C01B50(int a1, int a2, int a3)
{
  return *(uint32_t *)(a3 + 24) == 5;
}

// ----------------------------------------------------------------------------
// Function: sub_C01B60  (binary VA: 0xc01b60)
// Original: sub_C01B60
// ----------------------------------------------------------------------------
int sub_C01B60(int result, int a2, int a3)
{
  int v3;

  v3 = a3;
  if ( a3 != 163 || (result = 1, a2 != 162) )
  {
    if ( a3 == 200 )
    {
      result = 1;
      if ( a2 == 160 )
        return result;
    }
    else if ( a3 == 77 )
    {
      result = 1;
      if ( a2 == 155 )
        return result;
    }
    LOBYTE(result) = a3 == 78;
    LOBYTE(v3) = a2 == 76;
    return v3 & result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C01BC0  (binary VA: 0xc01bc0)
// Original: sub_C01BC0
// ----------------------------------------------------------------------------
int sub_C01BC0()
{
  uint32_t *v0;
  int v1;
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  unsigned int v9;
  int v10;
  bool v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  int v21;
  size_t v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;

  v0 = (uint32_t *)dword_20DE714;
  v1 = dword_20DE710;
  v2 = (dword_20DE714 - dword_20DE710) >> 4;
  if ( v2 > 0x9E0 )
  {
    if ( v2 != 2529 )
      dword_20DE714 = dword_20DE710 + 40464;
    goto LABEL_4;
  }
  v25 = 2529 - v2;
  if ( 2529 - v2 <= (dword_20DE718 - dword_20DE714) >> 4 )
  {
    LOBYTE(v27) = 0;
    v9 = 2529 - v2;
    do
    {
      if ( v0 != nullptr )
      {
        *v0 = 0;
        v0[2] = v27;
        v0[1] = 0;
        *((uint8_t *)v0 + 8) = 0;
        v0[3] = 0;
      }
      v0 += 4;
      --v9;
    }
    while ( v9 != 0 );
    v1 = dword_20DE710;
    dword_20DE714 += 16 * v25;
    goto LABEL_4;
  }
  v10 = 2529 - v2;
  if ( v25 < v2 )
    v10 = (dword_20DE714 - dword_20DE710) >> 4;
  v22 = 0xFFFFFFF0;
  v11 = __CFADD__(v2, v10);
  v12 = v2 + v10;
  if ( v11 || v12 > 0xFFFFFFF )
    goto LABEL_16;
  if ( v12 != 0 )
  {
    v22 = 16 * v12;
LABEL_16:
    v20 = dword_20DE714;
    v1 = sub_4EB830(v22);
    v0 = (uint32_t *)v20;
    goto LABEL_17;
  }
  v22 = 0;
  v1 = 0;
LABEL_17:
  v13 = 2529 - v2;
  v14 = v1 + 16 * v2;
  do
  {
    if ( v14 != 0 )
    {
      *(uint32_t *)v14 = 0;
      *(uint32_t *)(v14 + 4) = 0;
      *(uint8_t *)(v14 + 8) = 0;
      *(uint32_t *)(v14 + 12) = 0;
    }
    v14 += 16;
    --v13;
  }
  while ( v13 != 0 );
  v23 = dword_20DE710;
  v15 = (uint32_t *)v1;
  if ( v0 != (uint32_t *)dword_20DE710 )
  {
    v16 = (uint32_t *)dword_20DE710;
    do
    {
      if ( v15 != nullptr )
      {
        *v15 = *v16;
        v15[1] = v16[1];
        v15[2] = v16[2];
        v15[3] = v16[3];
      }
      v16 += 4;
      v15 += 4;
    }
    while ( v0 != v16 );
    v15 = (uint32_t *)(v1 + (((unsigned int)(uintptr_t)(v0) - v23 - 16) & 0xFFFFFFF0) + 16);
  }
  v17 = &v15[4 * v25];
  v24 = (int)(uintptr_t)(v17);
  v26 = dword_20DE714;
  if ( v0 != (uint32_t *)dword_20DE714 )
  {
    v18 = v17;
    v19 = v0;
    do
    {
      if ( v18 != nullptr )
      {
        *v18 = *v19;
        v18[1] = v19[1];
        v18[2] = v19[2];
        v18[3] = v19[3];
      }
      v19 += 4;
      v18 += 4;
    }
    while ( (uint32_t *)v26 != v19 );
    v24 += ((v26 - (uint32_t)(uintptr_t)(v0 + 4)) & 0xFFFFFFF0) + 16;
  }
  if ( dword_20DE710 != 0 )
    sub_4EB870(dword_20DE710);
  dword_20DE710 = v1;
  dword_20DE714 = v24;
  dword_20DE718 = v1 + v22;
LABEL_4:
  v3 = 0;
  v21 = v1;
  v4 = dword_20DA210;
  do
  {
    v5 = 16 * *(uint32_t *)(v4 + v3 + 8);
    *(uint32_t *)(v21 + v5) = *(uint32_t *)(v4 + v3 + 8);
    v4 = dword_20DA210;
    v21 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_24714)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4));
    v6 = v21 + v5;
    v7 = dword_20DA210 + v3;
    v3 += 24;
    *(uint32_t *)(v6 + 4) = *(uint32_t *)(v7 + 12);
    result = *(uint8_t *)(v7 + 16);
    *(uint8_t *)(v6 + 8) = result;
    *(uint32_t *)(v6 + 12) = *(uint32_t *)(v7 + 20);
  }
  while ( v3 != 60696 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C01E70  (binary VA: 0xc01e70)
// Original: sub_C01E70
// ----------------------------------------------------------------------------
int sub_C01E70()
{
  return (dword_20DE714 - dword_20DE710) >> 4;
}

// ----------------------------------------------------------------------------
// Function: sub_C01E90  (binary VA: 0xc01e90)
// Original: sub_C01E90
// ----------------------------------------------------------------------------
int sub_C01E90(int a1)
{
  int result;

  result = dword_20DE710;
  if ( a1 >= 0 && a1 < (dword_20DE714 - dword_20DE710) >> 4 )
    return 16 * a1 + dword_20DE710;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C01ED0  (binary VA: 0xc01ed0)
// Original: sub_C01ED0
// ----------------------------------------------------------------------------
int sub_C01ED0(int a1, int a2)
{
  int v2;

  v2 = 0;
  if ( a2 >= 0 )
  {
    v2 = 0;
    if ( a2 < (unsigned int)(-1431655765 * ((dword_20DE704 - dword_20DE700) >> 2)) )
      v2 = 12 * a2;
  }
  return dword_20DE700 + v2;
}

// ----------------------------------------------------------------------------
// Function: sub_C01F40  (binary VA: 0xc01f40)
// Original: sub_C01F40
// ----------------------------------------------------------------------------
int sub_C01F40(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  if ( a2 >= 0 )
  {
    v3 = 0;
    if ( a2 < (unsigned int)(-1431655765 * ((dword_20DE704 - dword_20DE700) >> 2)) )
      v3 = 12 * a2;
  }
  return *(uint32_t *)(*(uint32_t *)(dword_20DE700 + v3) + 4 * a3);
}

// ----------------------------------------------------------------------------
// Function: sub_C01FB0  (binary VA: 0xc01fb0)
// Original: sub_C01FB0
// ----------------------------------------------------------------------------
int sub_C01FB0(int a1, uint32_t *a2, int a3)
{
  return *(uint32_t *)(*a2 + 4 * a3);
}

// ----------------------------------------------------------------------------
// Function: sub_C02000  (binary VA: 0xc02000)
// Original: sub_C02000
// ----------------------------------------------------------------------------
bool sub_C02000(int a1, int a2, int a3)
{
  switch ( a1 )
  {
    case 5:
      return *(uint32_t *)(*(uint32_t *)a3 + 828) != a2;
    case 11:
    case 38:
    case 39:
    case 45:
    case 47:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 151:
    case 172:
    case 179:
      return false;
    default:
      return a1 != 177 && a1 != 9;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C020A0  (binary VA: 0xc020a0)
// Original: sub_C020A0
// ----------------------------------------------------------------------------
int sub_C020A0()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_C020B0  (binary VA: 0xc020b0)
// Original: sub_C020B0
// ----------------------------------------------------------------------------
unsigned int sub_C020B0(int a1)
{
  unsigned int result;
  unsigned int v2;
  int v3;
  unsigned int j;
  int v5;
  uint32_t *v6;
  unsigned int v7;
  int v8;
  int *v9;
  unsigned int v10;
  int v11;
  bool v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned int v16;
  uint32_t *v17;
  int *i;
  int v19;
  int v20;
  uint32_t *v21;
  char *v22;
  char *v23;
  int *v24;
  int v25;
  int v26;
  uint32_t *v27;
  char *v28;
  char *v29;
  int *v30;
  unsigned int v31;
  uint32_t *v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef void *_g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t _g4_t_v47[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v33)) > _g4_s0 ? (4u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v34)) > _g4_s1 ? (8u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v35)) > _g4_s2 ? (12u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v36)) > _g4_s3 ? (16u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v37)) > _g4_s4 ? (16u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v38)) > _g4_s5 ? (20u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v39)) > _g4_s6 ? (24u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v40)) > _g4_s7 ? (24u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v41)) > _g4_s8 ? (28u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v42)) > _g4_s9 ? (28u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v43)) > _g4_s10 ? (28u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v44)) > _g4_s11 ? (28u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v45)) > _g4_s12 ? (32u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v46)) > _g4_s13 ? (32u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v47)) > _g4_s14 ? (48u + sizeof(_g4_t_v47)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);

  result = dword_20DE700;
  v45 = (int *)dword_20DE704;
  v2 = -1431655765 * ((dword_20DE704 - dword_20DE700) >> 2);
  v38 = dword_20DA240;
  if ( dword_20DA240 <= v2 )
  {
    if ( dword_20DA240 < v2 )
    {
      v8 = dword_20DE700 + 12 * dword_20DA240;
      if ( dword_20DE704 != v8 )
      {
        v9 = (int *)(dword_20DE700 + 12 * dword_20DA240);
        v42 = v9;
        do
        {
          result = *v9;
          if ( *v9 != 0 )
            result = sub_4EB870(*v9);
          v9 += 3;
        }
        while ( v45 != v9 );
        v8 = (int)(uintptr_t)(v42);
      }
      dword_20DE704 = v8;
    }
    goto LABEL_3;
  }
  v10 = dword_20DA240 - v2;
  v35 = dword_20DA240 - v2;
  if ( dword_20DA240 == v2 )
    goto LABEL_3;
  if ( v10 > -1431655765 * ((dword_20DE708 - dword_20DE704) >> 2) )
  {
    if ( v10 > 357913941 - v2 )
      sub_1900180("vector::_M_fill_insert");
    v11 = dword_20DA240 - v2;
    if ( v10 < v2 )
      v11 = -1431655765 * ((dword_20DE704 - dword_20DE700) >> 2);
    v33 = -4;
    v12 = __CFADD__(v2, v11);
    v13 = v2 + v11;
    if ( v12 || v13 > 0x15555555 )
    {
      v14 = sub_4EB830(0xFFFFFFFC);
    }
    else
    {
      if ( v13 == 0 )
      {
        v34 = 0;
        v33 = 0;
        v15 = 0;
LABEL_30:
        v16 = v35;
        v17 = (uint32_t *)(v15 + 12 * v2);
        do
        {
          if ( v17 != nullptr )
          {
            *v17 = 0;
            v17[1] = 0;
            v17[2] = 0;
          }
          v17 += 3;
          --v16;
        }
        while ( v16 != 0 );
        v39 = (int *)dword_20DE700;
        for ( i = (int *)v34; v45 != v39; i += 3 )
        {
          if ( i != nullptr )
          {
            v19 = 0;
            v43 = 0;
            v20 = (v39[1] - *v39) >> 2;
            *i = 0;
            i[1] = 0;
            i[2] = 0;
            if ( v20 != 0 )
            {
              v19 = 4 * v20;
              v43 = sub_4EB830(4 * v20);
            }
            v21 = (uint32_t *)v43;
            *i = v43;
            i[1] = v43;
            i[2] = v43 + v19;
            v22 = (char *)v39[1];
            v36 = (uint32_t *)*v39;
            if ( v22 != (char *)*v39 )
            {
              v23 = (char *)*v39;
              do
              {
                if ( v21 != nullptr )
                  *v21 = *(uint32_t *)v23;
                v23 += 4;
                ++v21;
              }
              while ( v22 != v23 );
              v21 = (uint32_t *)(v43 + 4 * ((unsigned int)(v22 - (char *)(v36 + 1)) >> 2) + 4);
            }
            i[1] = (int)(uintptr_t)(v21);
          }
          v39 += 3;
        }
        v37 = dword_20DE704;
        v24 = &i[3 * v35];
        if ( v45 != (int *)dword_20DE704 )
        {
          do
          {
            if ( v24 != nullptr )
            {
              v25 = 0;
              v44 = 0;
              v26 = (v45[1] - *v45) >> 2;
              *v24 = 0;
              v24[1] = 0;
              v24[2] = 0;
              if ( v26 != 0 )
              {
                v25 = 4 * v26;
                v44 = sub_4EB830(4 * v26);
              }
              v27 = (uint32_t *)v44;
              *v24 = v44;
              v24[1] = v44;
              v24[2] = v44 + v25;
              v28 = (char *)v45[1];
              v40 = (uint32_t *)*v45;
              if ( v28 != (char *)*v45 )
              {
                v29 = (char *)*v45;
                do
                {
                  if ( v27 != nullptr )
                    *v27 = *(uint32_t *)v29;
                  v29 += 4;
                  ++v27;
                }
                while ( v28 != v29 );
                v27 = (uint32_t *)(v44 + 4 * ((unsigned int)(v28 - (char *)(v40 + 1)) >> 2) + 4);
              }
              v24[1] = (int)(uintptr_t)(v27);
            }
            v45 += 3;
            v24 += 3;
          }
          while ( (int *)v37 != v45 );
          v37 = dword_20DE704;
        }
        v30 = (int *)dword_20DE700;
        if ( dword_20DE700 != v37 )
        {
          do
          {
            if ( *v30 != 0 )
              sub_4EB870(*v30);
            v30 += 3;
          }
          while ( v30 != (int *)v37 );
          v30 = (int *)dword_20DE700;
        }
        if ( v30 != nullptr )
          sub_4EB870((int)(uintptr_t)(v30));
        dword_20DE704 = (int)(uintptr_t)(v24);
        dword_20DE700 = v34;
        result = v33 + v34;
        dword_20DE708 = v33 + v34;
        goto LABEL_3;
      }
      v33 = 12 * v13;
      v14 = sub_4EB830(12 * v13);
    }
    v34 = v14;
    v15 = v14;
    goto LABEL_30;
  }
  v31 = dword_20DA240 - v2;
  memset(&v47[1], 0, 12);
  v32 = (uint32_t *)dword_20DE704;
  do
  {
    if ( v32 != nullptr )
    {
      *v32 = 0;
      v32[1] = 0;
      v32[2] = 0;
    }
    v32 += 3;
    --v31;
  }
  while ( v31 != 0 );
  result = 12 * v35;
  dword_20DE704 += 12 * v35;
LABEL_3:
  *(uint32_t *)(a1 + 72) = 571;
  if ( v38 > 0 )
  {
    v46 = 0;
    v3 = 0;
    for ( j = 571; ; j = *(uint32_t *)(a1 + 72) )
    {
      v5 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_24704)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4));
      v47[0] = 0;
      v6 = (uint32_t *)(v5 + v3);
      v41 = (void *)v6[1];
      result = ((int)(uintptr_t)(v41) - *v6) >> 2;
      if ( j <= result )
      {
        if ( j < result )
        {
          result = *v6 + 4 * j;
          v6[1] = result;
        }
      }
      else
      {
        g4_std::vector_int_GameAllocator_int_96185c::M_fill_insert((int)(uintptr_t)(v6), v41, j - result, (int)(uintptr_t)(v47));
      }
      ++v46;
      v3 += 12;
      if ( v38 == v46 )
        break;
    }
  }
  if ( dword_20DA240 != 0 )
  {
    result = 0;
    v7 = 0;
    do
    {
      ++v7;
      sub_C02650(
        dword_20DA230 + 2292 * result,
        *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_24704)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) + 12 * result);
      result = v7;
    }
    while ( v7 < dword_20DA240 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C025A0  (binary VA: 0xc025a0)
// Original: sub_C025A0
// ----------------------------------------------------------------------------
unsigned int sub_C025A0(int a1)
{
  sub_C01BC0();
  return sub_C020B0(a1);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_Data_AnimationDescriptor_f287e0::Destroy  (binary VA: 0xc025c0)
// Original: std::vector<Data::AnimationDescriptor,GameAllocator<Data::AnimationDescriptor>>::~vector
// ----------------------------------------------------------------------------
void g4_std::vector_Data_AnimationDescriptor_f287e0::Destroy(std::vector<Data::AnimationDescriptor, GameAllocator<Data::AnimationDescriptor>> *self)
{
  if ( *(uint32_t *)self != 0 )
    sub_4EB870(*(uint32_t *)self);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_vector_int_GameAllocator_9a14cd::Destroy  (binary VA: 0xc025f0)
// Original: std::vector<std::vector<int,GameAllocator<int>>,GameAllocator<std::vector<int,GameAllocator<int>>>>::~vector
// ----------------------------------------------------------------------------
void g4_std::vector_vector_int_GameAllocator_9a14cd::Destroy(std::vector<std::vector<int, GameAllocator<int>>, GameAllocator<std::vector<int, GameAllocator<int>>>> *self)
{
  int *v1;
  int *v2;

  v1 = *((int **)self + 1);
  v2 = *(int **)self;
  if ( v1 != *(int **)self )
  {
    do
    {
      if ( *v2 != 0 )
        sub_4EB870(*v2);
      v2 += 3;
    }
    while ( v1 != v2 );
    v2 = *(int **)self;
  }
  if ( v2 != nullptr )
    sub_4EB870((int)(uintptr_t)(v2));
}

// ----------------------------------------------------------------------------
// Function: sub_C02650  (binary VA: 0xc02650)
// Original: sub_C02650
// ----------------------------------------------------------------------------
int sub_C02650(uint32_t *a1, int a2)
{
  int result;

  **(uint32_t **)a2 = a1[2];
  *(uint32_t *)(*(uint32_t *)a2 + 4) = a1[3];
  *(uint32_t *)(*(uint32_t *)a2 + 8) = a1[4];
  *(uint32_t *)(*(uint32_t *)a2 + 12) = a1[5];
  *(uint32_t *)(*(uint32_t *)a2 + 16) = a1[6];
  *(uint32_t *)(*(uint32_t *)a2 + 20) = a1[7];
  *(uint32_t *)(*(uint32_t *)a2 + 24) = a1[8];
  *(uint32_t *)(*(uint32_t *)a2 + 28) = a1[9];
  *(uint32_t *)(*(uint32_t *)a2 + 32) = a1[10];
  *(uint32_t *)(*(uint32_t *)a2 + 36) = a1[11];
  *(uint32_t *)(*(uint32_t *)a2 + 40) = a1[12];
  *(uint32_t *)(*(uint32_t *)a2 + 44) = a1[13];
  *(uint32_t *)(*(uint32_t *)a2 + 48) = a1[14];
  *(uint32_t *)(*(uint32_t *)a2 + 52) = a1[15];
  *(uint32_t *)(*(uint32_t *)a2 + 56) = a1[16];
  *(uint32_t *)(*(uint32_t *)a2 + 60) = a1[17];
  *(uint32_t *)(*(uint32_t *)a2 + 64) = a1[18];
  *(uint32_t *)(*(uint32_t *)a2 + 68) = a1[19];
  *(uint32_t *)(*(uint32_t *)a2 + 72) = a1[20];
  *(uint32_t *)(*(uint32_t *)a2 + 76) = a1[21];
  *(uint32_t *)(*(uint32_t *)a2 + 80) = a1[22];
  *(uint32_t *)(*(uint32_t *)a2 + 84) = a1[23];
  *(uint32_t *)(*(uint32_t *)a2 + 88) = a1[24];
  *(uint32_t *)(*(uint32_t *)a2 + 92) = a1[25];
  *(uint32_t *)(*(uint32_t *)a2 + 96) = a1[26];
  *(uint32_t *)(*(uint32_t *)a2 + 100) = a1[27];
  *(uint32_t *)(*(uint32_t *)a2 + 104) = a1[28];
  *(uint32_t *)(*(uint32_t *)a2 + 108) = a1[29];
  *(uint32_t *)(*(uint32_t *)a2 + 112) = a1[30];
  *(uint32_t *)(*(uint32_t *)a2 + 116) = a1[31];
  *(uint32_t *)(*(uint32_t *)a2 + 120) = a1[32];
  *(uint32_t *)(*(uint32_t *)a2 + 124) = a1[33];
  *(uint32_t *)(*(uint32_t *)a2 + 128) = a1[34];
  *(uint32_t *)(*(uint32_t *)a2 + 132) = a1[35];
  *(uint32_t *)(*(uint32_t *)a2 + 136) = a1[36];
  *(uint32_t *)(*(uint32_t *)a2 + 140) = a1[37];
  *(uint32_t *)(*(uint32_t *)a2 + 144) = a1[38];
  *(uint32_t *)(*(uint32_t *)a2 + 148) = a1[39];
  *(uint32_t *)(*(uint32_t *)a2 + 152) = a1[40];
  *(uint32_t *)(*(uint32_t *)a2 + 156) = a1[41];
  *(uint32_t *)(*(uint32_t *)a2 + 160) = a1[42];
  *(uint32_t *)(*(uint32_t *)a2 + 164) = a1[43];
  *(uint32_t *)(*(uint32_t *)a2 + 168) = a1[44];
  *(uint32_t *)(*(uint32_t *)a2 + 172) = a1[45];
  *(uint32_t *)(*(uint32_t *)a2 + 176) = a1[46];
  *(uint32_t *)(*(uint32_t *)a2 + 180) = a1[47];
  *(uint32_t *)(*(uint32_t *)a2 + 184) = a1[48];
  *(uint32_t *)(*(uint32_t *)a2 + 188) = a1[49];
  *(uint32_t *)(*(uint32_t *)a2 + 192) = a1[50];
  *(uint32_t *)(*(uint32_t *)a2 + 196) = a1[51];
  *(uint32_t *)(*(uint32_t *)a2 + 200) = a1[52];
  *(uint32_t *)(*(uint32_t *)a2 + 204) = a1[53];
  *(uint32_t *)(*(uint32_t *)a2 + 208) = a1[54];
  *(uint32_t *)(*(uint32_t *)a2 + 212) = a1[55];
  *(uint32_t *)(*(uint32_t *)a2 + 216) = a1[56];
  *(uint32_t *)(*(uint32_t *)a2 + 220) = a1[57];
  *(uint32_t *)(*(uint32_t *)a2 + 224) = a1[58];
  *(uint32_t *)(*(uint32_t *)a2 + 228) = a1[59];
  *(uint32_t *)(*(uint32_t *)a2 + 232) = a1[60];
  *(uint32_t *)(*(uint32_t *)a2 + 236) = a1[61];
  *(uint32_t *)(*(uint32_t *)a2 + 240) = a1[62];
  *(uint32_t *)(*(uint32_t *)a2 + 244) = a1[63];
  *(uint32_t *)(*(uint32_t *)a2 + 248) = a1[64];
  *(uint32_t *)(*(uint32_t *)a2 + 252) = a1[65];
  *(uint32_t *)(*(uint32_t *)a2 + 256) = a1[66];
  *(uint32_t *)(*(uint32_t *)a2 + 260) = a1[67];
  *(uint32_t *)(*(uint32_t *)a2 + 264) = a1[68];
  *(uint32_t *)(*(uint32_t *)a2 + 268) = a1[69];
  *(uint32_t *)(*(uint32_t *)a2 + 272) = a1[70];
  *(uint32_t *)(*(uint32_t *)a2 + 276) = a1[71];
  *(uint32_t *)(*(uint32_t *)a2 + 280) = a1[72];
  *(uint32_t *)(*(uint32_t *)a2 + 284) = a1[73];
  *(uint32_t *)(*(uint32_t *)a2 + 288) = a1[74];
  *(uint32_t *)(*(uint32_t *)a2 + 292) = a1[75];
  *(uint32_t *)(*(uint32_t *)a2 + 296) = a1[76];
  *(uint32_t *)(*(uint32_t *)a2 + 300) = a1[77];
  *(uint32_t *)(*(uint32_t *)a2 + 304) = a1[78];
  *(uint32_t *)(*(uint32_t *)a2 + 308) = a1[79];
  *(uint32_t *)(*(uint32_t *)a2 + 312) = a1[80];
  *(uint32_t *)(*(uint32_t *)a2 + 316) = a1[81];
  *(uint32_t *)(*(uint32_t *)a2 + 320) = a1[82];
  *(uint32_t *)(*(uint32_t *)a2 + 324) = a1[83];
  *(uint32_t *)(*(uint32_t *)a2 + 328) = a1[84];
  *(uint32_t *)(*(uint32_t *)a2 + 332) = a1[85];
  *(uint32_t *)(*(uint32_t *)a2 + 336) = a1[86];
  *(uint32_t *)(*(uint32_t *)a2 + 340) = a1[87];
  *(uint32_t *)(*(uint32_t *)a2 + 344) = a1[88];
  *(uint32_t *)(*(uint32_t *)a2 + 348) = a1[89];
  *(uint32_t *)(*(uint32_t *)a2 + 352) = a1[90];
  *(uint32_t *)(*(uint32_t *)a2 + 356) = a1[91];
  *(uint32_t *)(*(uint32_t *)a2 + 360) = a1[92];
  *(uint32_t *)(*(uint32_t *)a2 + 364) = a1[93];
  *(uint32_t *)(*(uint32_t *)a2 + 368) = a1[94];
  *(uint32_t *)(*(uint32_t *)a2 + 372) = a1[95];
  *(uint32_t *)(*(uint32_t *)a2 + 376) = a1[96];
  *(uint32_t *)(*(uint32_t *)a2 + 380) = a1[97];
  *(uint32_t *)(*(uint32_t *)a2 + 384) = a1[98];
  *(uint32_t *)(*(uint32_t *)a2 + 388) = a1[99];
  *(uint32_t *)(*(uint32_t *)a2 + 392) = a1[100];
  *(uint32_t *)(*(uint32_t *)a2 + 396) = a1[101];
  *(uint32_t *)(*(uint32_t *)a2 + 400) = a1[102];
  *(uint32_t *)(*(uint32_t *)a2 + 404) = a1[103];
  *(uint32_t *)(*(uint32_t *)a2 + 408) = a1[104];
  *(uint32_t *)(*(uint32_t *)a2 + 412) = a1[105];
  *(uint32_t *)(*(uint32_t *)a2 + 416) = a1[106];
  *(uint32_t *)(*(uint32_t *)a2 + 420) = a1[107];
  *(uint32_t *)(*(uint32_t *)a2 + 424) = a1[108];
  *(uint32_t *)(*(uint32_t *)a2 + 428) = a1[109];
  *(uint32_t *)(*(uint32_t *)a2 + 432) = a1[110];
  *(uint32_t *)(*(uint32_t *)a2 + 436) = a1[111];
  *(uint32_t *)(*(uint32_t *)a2 + 440) = a1[112];
  *(uint32_t *)(*(uint32_t *)a2 + 444) = a1[113];
  *(uint32_t *)(*(uint32_t *)a2 + 448) = a1[114];
  *(uint32_t *)(*(uint32_t *)a2 + 452) = a1[115];
  *(uint32_t *)(*(uint32_t *)a2 + 456) = a1[116];
  *(uint32_t *)(*(uint32_t *)a2 + 460) = a1[117];
  *(uint32_t *)(*(uint32_t *)a2 + 464) = a1[118];
  *(uint32_t *)(*(uint32_t *)a2 + 468) = a1[119];
  *(uint32_t *)(*(uint32_t *)a2 + 472) = a1[120];
  *(uint32_t *)(*(uint32_t *)a2 + 476) = a1[121];
  *(uint32_t *)(*(uint32_t *)a2 + 480) = a1[122];
  *(uint32_t *)(*(uint32_t *)a2 + 484) = a1[123];
  *(uint32_t *)(*(uint32_t *)a2 + 488) = a1[124];
  *(uint32_t *)(*(uint32_t *)a2 + 492) = a1[125];
  *(uint32_t *)(*(uint32_t *)a2 + 496) = a1[126];
  *(uint32_t *)(*(uint32_t *)a2 + 500) = a1[127];
  *(uint32_t *)(*(uint32_t *)a2 + 504) = a1[128];
  *(uint32_t *)(*(uint32_t *)a2 + 508) = a1[129];
  *(uint32_t *)(*(uint32_t *)a2 + 512) = a1[130];
  *(uint32_t *)(*(uint32_t *)a2 + 516) = a1[131];
  *(uint32_t *)(*(uint32_t *)a2 + 520) = a1[132];
  *(uint32_t *)(*(uint32_t *)a2 + 524) = a1[133];
  *(uint32_t *)(*(uint32_t *)a2 + 528) = a1[134];
  *(uint32_t *)(*(uint32_t *)a2 + 532) = a1[135];
  *(uint32_t *)(*(uint32_t *)a2 + 536) = a1[136];
  *(uint32_t *)(*(uint32_t *)a2 + 540) = a1[137];
  *(uint32_t *)(*(uint32_t *)a2 + 544) = a1[138];
  *(uint32_t *)(*(uint32_t *)a2 + 548) = a1[139];
  *(uint32_t *)(*(uint32_t *)a2 + 552) = a1[140];
  *(uint32_t *)(*(uint32_t *)a2 + 556) = a1[141];
  *(uint32_t *)(*(uint32_t *)a2 + 560) = a1[142];
  *(uint32_t *)(*(uint32_t *)a2 + 564) = a1[143];
  *(uint32_t *)(*(uint32_t *)a2 + 568) = a1[144];
  *(uint32_t *)(*(uint32_t *)a2 + 572) = a1[145];
  *(uint32_t *)(*(uint32_t *)a2 + 576) = a1[146];
  *(uint32_t *)(*(uint32_t *)a2 + 580) = a1[147];
  *(uint32_t *)(*(uint32_t *)a2 + 584) = a1[148];
  *(uint32_t *)(*(uint32_t *)a2 + 588) = a1[149];
  *(uint32_t *)(*(uint32_t *)a2 + 592) = a1[150];
  *(uint32_t *)(*(uint32_t *)a2 + 596) = a1[151];
  *(uint32_t *)(*(uint32_t *)a2 + 600) = a1[152];
  *(uint32_t *)(*(uint32_t *)a2 + 604) = a1[153];
  *(uint32_t *)(*(uint32_t *)a2 + 608) = a1[154];
  *(uint32_t *)(*(uint32_t *)a2 + 612) = a1[155];
  *(uint32_t *)(*(uint32_t *)a2 + 616) = a1[156];
  *(uint32_t *)(*(uint32_t *)a2 + 620) = a1[157];
  *(uint32_t *)(*(uint32_t *)a2 + 624) = a1[158];
  *(uint32_t *)(*(uint32_t *)a2 + 628) = a1[159];
  *(uint32_t *)(*(uint32_t *)a2 + 632) = a1[160];
  *(uint32_t *)(*(uint32_t *)a2 + 636) = a1[161];
  *(uint32_t *)(*(uint32_t *)a2 + 640) = a1[162];
  *(uint32_t *)(*(uint32_t *)a2 + 644) = a1[163];
  *(uint32_t *)(*(uint32_t *)a2 + 648) = a1[164];
  *(uint32_t *)(*(uint32_t *)a2 + 652) = a1[165];
  *(uint32_t *)(*(uint32_t *)a2 + 656) = a1[166];
  *(uint32_t *)(*(uint32_t *)a2 + 660) = a1[167];
  *(uint32_t *)(*(uint32_t *)a2 + 664) = a1[168];
  *(uint32_t *)(*(uint32_t *)a2 + 668) = a1[169];
  *(uint32_t *)(*(uint32_t *)a2 + 672) = a1[170];
  *(uint32_t *)(*(uint32_t *)a2 + 676) = a1[171];
  *(uint32_t *)(*(uint32_t *)a2 + 680) = a1[172];
  *(uint32_t *)(*(uint32_t *)a2 + 684) = a1[173];
  *(uint32_t *)(*(uint32_t *)a2 + 688) = a1[174];
  *(uint32_t *)(*(uint32_t *)a2 + 692) = a1[175];
  *(uint32_t *)(*(uint32_t *)a2 + 696) = a1[176];
  *(uint32_t *)(*(uint32_t *)a2 + 700) = a1[177];
  *(uint32_t *)(*(uint32_t *)a2 + 704) = a1[178];
  *(uint32_t *)(*(uint32_t *)a2 + 708) = a1[179];
  *(uint32_t *)(*(uint32_t *)a2 + 712) = a1[180];
  *(uint32_t *)(*(uint32_t *)a2 + 716) = a1[181];
  *(uint32_t *)(*(uint32_t *)a2 + 720) = a1[182];
  *(uint32_t *)(*(uint32_t *)a2 + 724) = a1[183];
  *(uint32_t *)(*(uint32_t *)a2 + 728) = a1[184];
  *(uint32_t *)(*(uint32_t *)a2 + 732) = a1[185];
  *(uint32_t *)(*(uint32_t *)a2 + 736) = a1[186];
  *(uint32_t *)(*(uint32_t *)a2 + 740) = a1[187];
  *(uint32_t *)(*(uint32_t *)a2 + 744) = a1[188];
  *(uint32_t *)(*(uint32_t *)a2 + 748) = a1[189];
  *(uint32_t *)(*(uint32_t *)a2 + 752) = a1[190];
  *(uint32_t *)(*(uint32_t *)a2 + 756) = a1[191];
  *(uint32_t *)(*(uint32_t *)a2 + 760) = a1[192];
  *(uint32_t *)(*(uint32_t *)a2 + 764) = a1[193];
  *(uint32_t *)(*(uint32_t *)a2 + 768) = a1[194];
  *(uint32_t *)(*(uint32_t *)a2 + 772) = a1[195];
  *(uint32_t *)(*(uint32_t *)a2 + 776) = a1[196];
  *(uint32_t *)(*(uint32_t *)a2 + 780) = a1[197];
  *(uint32_t *)(*(uint32_t *)a2 + 784) = a1[198];
  *(uint32_t *)(*(uint32_t *)a2 + 788) = a1[199];
  *(uint32_t *)(*(uint32_t *)a2 + 792) = a1[200];
  *(uint32_t *)(*(uint32_t *)a2 + 796) = a1[201];
  *(uint32_t *)(*(uint32_t *)a2 + 800) = a1[202];
  *(uint32_t *)(*(uint32_t *)a2 + 804) = a1[203];
  *(uint32_t *)(*(uint32_t *)a2 + 808) = a1[204];
  *(uint32_t *)(*(uint32_t *)a2 + 812) = a1[205];
  *(uint32_t *)(*(uint32_t *)a2 + 816) = a1[206];
  *(uint32_t *)(*(uint32_t *)a2 + 820) = a1[207];
  *(uint32_t *)(*(uint32_t *)a2 + 824) = a1[208];
  *(uint32_t *)(*(uint32_t *)a2 + 828) = a1[209];
  *(uint32_t *)(*(uint32_t *)a2 + 832) = a1[210];
  *(uint32_t *)(*(uint32_t *)a2 + 836) = a1[211];
  *(uint32_t *)(*(uint32_t *)a2 + 840) = a1[212];
  *(uint32_t *)(*(uint32_t *)a2 + 844) = a1[213];
  *(uint32_t *)(*(uint32_t *)a2 + 848) = a1[214];
  *(uint32_t *)(*(uint32_t *)a2 + 852) = a1[215];
  *(uint32_t *)(*(uint32_t *)a2 + 856) = a1[216];
  *(uint32_t *)(*(uint32_t *)a2 + 860) = a1[217];
  *(uint32_t *)(*(uint32_t *)a2 + 864) = a1[218];
  *(uint32_t *)(*(uint32_t *)a2 + 868) = a1[219];
  *(uint32_t *)(*(uint32_t *)a2 + 872) = a1[220];
  *(uint32_t *)(*(uint32_t *)a2 + 876) = a1[221];
  *(uint32_t *)(*(uint32_t *)a2 + 880) = a1[222];
  *(uint32_t *)(*(uint32_t *)a2 + 884) = a1[223];
  *(uint32_t *)(*(uint32_t *)a2 + 888) = a1[224];
  *(uint32_t *)(*(uint32_t *)a2 + 892) = a1[225];
  *(uint32_t *)(*(uint32_t *)a2 + 896) = a1[226];
  *(uint32_t *)(*(uint32_t *)a2 + 900) = a1[227];
  *(uint32_t *)(*(uint32_t *)a2 + 904) = a1[228];
  *(uint32_t *)(*(uint32_t *)a2 + 908) = a1[229];
  *(uint32_t *)(*(uint32_t *)a2 + 912) = a1[230];
  *(uint32_t *)(*(uint32_t *)a2 + 916) = a1[231];
  *(uint32_t *)(*(uint32_t *)a2 + 920) = a1[232];
  *(uint32_t *)(*(uint32_t *)a2 + 924) = a1[233];
  *(uint32_t *)(*(uint32_t *)a2 + 928) = a1[234];
  *(uint32_t *)(*(uint32_t *)a2 + 932) = a1[235];
  *(uint32_t *)(*(uint32_t *)a2 + 936) = a1[236];
  *(uint32_t *)(*(uint32_t *)a2 + 940) = a1[237];
  *(uint32_t *)(*(uint32_t *)a2 + 944) = a1[238];
  *(uint32_t *)(*(uint32_t *)a2 + 948) = a1[239];
  *(uint32_t *)(*(uint32_t *)a2 + 952) = a1[240];
  *(uint32_t *)(*(uint32_t *)a2 + 956) = a1[241];
  *(uint32_t *)(*(uint32_t *)a2 + 960) = a1[242];
  *(uint32_t *)(*(uint32_t *)a2 + 964) = a1[243];
  *(uint32_t *)(*(uint32_t *)a2 + 968) = a1[244];
  *(uint32_t *)(*(uint32_t *)a2 + 972) = a1[245];
  *(uint32_t *)(*(uint32_t *)a2 + 976) = a1[246];
  *(uint32_t *)(*(uint32_t *)a2 + 980) = a1[247];
  *(uint32_t *)(*(uint32_t *)a2 + 984) = a1[248];
  *(uint32_t *)(*(uint32_t *)a2 + 988) = a1[249];
  *(uint32_t *)(*(uint32_t *)a2 + 992) = a1[250];
  *(uint32_t *)(*(uint32_t *)a2 + 996) = a1[251];
  *(uint32_t *)(*(uint32_t *)a2 + 1000) = a1[252];
  *(uint32_t *)(*(uint32_t *)a2 + 1004) = a1[253];
  *(uint32_t *)(*(uint32_t *)a2 + 1008) = a1[254];
  *(uint32_t *)(*(uint32_t *)a2 + 1012) = a1[255];
  *(uint32_t *)(*(uint32_t *)a2 + 1016) = a1[256];
  *(uint32_t *)(*(uint32_t *)a2 + 1020) = a1[257];
  *(uint32_t *)(*(uint32_t *)a2 + 1024) = a1[258];
  *(uint32_t *)(*(uint32_t *)a2 + 1028) = a1[259];
  *(uint32_t *)(*(uint32_t *)a2 + 1032) = a1[260];
  *(uint32_t *)(*(uint32_t *)a2 + 1036) = a1[261];
  *(uint32_t *)(*(uint32_t *)a2 + 1040) = a1[262];
  *(uint32_t *)(*(uint32_t *)a2 + 1044) = a1[263];
  *(uint32_t *)(*(uint32_t *)a2 + 1048) = a1[264];
  *(uint32_t *)(*(uint32_t *)a2 + 1052) = a1[265];
  *(uint32_t *)(*(uint32_t *)a2 + 1056) = a1[266];
  *(uint32_t *)(*(uint32_t *)a2 + 1060) = a1[267];
  *(uint32_t *)(*(uint32_t *)a2 + 1064) = a1[268];
  *(uint32_t *)(*(uint32_t *)a2 + 1068) = a1[269];
  *(uint32_t *)(*(uint32_t *)a2 + 1072) = a1[270];
  *(uint32_t *)(*(uint32_t *)a2 + 1076) = a1[271];
  *(uint32_t *)(*(uint32_t *)a2 + 1080) = a1[272];
  *(uint32_t *)(*(uint32_t *)a2 + 1084) = a1[273];
  *(uint32_t *)(*(uint32_t *)a2 + 1088) = a1[274];
  *(uint32_t *)(*(uint32_t *)a2 + 1092) = a1[275];
  *(uint32_t *)(*(uint32_t *)a2 + 1096) = a1[276];
  *(uint32_t *)(*(uint32_t *)a2 + 1100) = a1[277];
  *(uint32_t *)(*(uint32_t *)a2 + 1104) = a1[278];
  *(uint32_t *)(*(uint32_t *)a2 + 1108) = a1[279];
  *(uint32_t *)(*(uint32_t *)a2 + 1112) = a1[280];
  *(uint32_t *)(*(uint32_t *)a2 + 1116) = a1[281];
  *(uint32_t *)(*(uint32_t *)a2 + 1120) = a1[282];
  *(uint32_t *)(*(uint32_t *)a2 + 1124) = a1[283];
  *(uint32_t *)(*(uint32_t *)a2 + 1128) = a1[284];
  *(uint32_t *)(*(uint32_t *)a2 + 1132) = a1[285];
  *(uint32_t *)(*(uint32_t *)a2 + 1136) = a1[286];
  *(uint32_t *)(*(uint32_t *)a2 + 1140) = a1[287];
  *(uint32_t *)(*(uint32_t *)a2 + 1144) = a1[288];
  *(uint32_t *)(*(uint32_t *)a2 + 1148) = a1[289];
  *(uint32_t *)(*(uint32_t *)a2 + 1152) = a1[290];
  *(uint32_t *)(*(uint32_t *)a2 + 1156) = a1[291];
  *(uint32_t *)(*(uint32_t *)a2 + 1160) = a1[292];
  *(uint32_t *)(*(uint32_t *)a2 + 1164) = a1[293];
  *(uint32_t *)(*(uint32_t *)a2 + 1168) = a1[294];
  *(uint32_t *)(*(uint32_t *)a2 + 1172) = a1[295];
  *(uint32_t *)(*(uint32_t *)a2 + 1176) = a1[296];
  *(uint32_t *)(*(uint32_t *)a2 + 1180) = a1[297];
  *(uint32_t *)(*(uint32_t *)a2 + 1184) = a1[298];
  *(uint32_t *)(*(uint32_t *)a2 + 1188) = a1[299];
  *(uint32_t *)(*(uint32_t *)a2 + 1192) = a1[300];
  *(uint32_t *)(*(uint32_t *)a2 + 1196) = a1[301];
  *(uint32_t *)(*(uint32_t *)a2 + 1200) = a1[302];
  *(uint32_t *)(*(uint32_t *)a2 + 1204) = a1[303];
  *(uint32_t *)(*(uint32_t *)a2 + 1208) = a1[304];
  *(uint32_t *)(*(uint32_t *)a2 + 1212) = a1[305];
  *(uint32_t *)(*(uint32_t *)a2 + 1216) = a1[306];
  *(uint32_t *)(*(uint32_t *)a2 + 1220) = a1[307];
  *(uint32_t *)(*(uint32_t *)a2 + 1224) = a1[308];
  *(uint32_t *)(*(uint32_t *)a2 + 1228) = a1[309];
  *(uint32_t *)(*(uint32_t *)a2 + 1232) = a1[310];
  *(uint32_t *)(*(uint32_t *)a2 + 1236) = a1[311];
  *(uint32_t *)(*(uint32_t *)a2 + 1240) = a1[312];
  *(uint32_t *)(*(uint32_t *)a2 + 1244) = a1[313];
  *(uint32_t *)(*(uint32_t *)a2 + 1248) = a1[314];
  *(uint32_t *)(*(uint32_t *)a2 + 1252) = a1[315];
  *(uint32_t *)(*(uint32_t *)a2 + 1256) = a1[316];
  *(uint32_t *)(*(uint32_t *)a2 + 1260) = a1[317];
  *(uint32_t *)(*(uint32_t *)a2 + 1264) = a1[318];
  *(uint32_t *)(*(uint32_t *)a2 + 1268) = a1[319];
  *(uint32_t *)(*(uint32_t *)a2 + 1272) = a1[320];
  *(uint32_t *)(*(uint32_t *)a2 + 1276) = a1[321];
  *(uint32_t *)(*(uint32_t *)a2 + 1280) = a1[322];
  *(uint32_t *)(*(uint32_t *)a2 + 1284) = a1[323];
  *(uint32_t *)(*(uint32_t *)a2 + 1288) = a1[324];
  *(uint32_t *)(*(uint32_t *)a2 + 1292) = a1[325];
  *(uint32_t *)(*(uint32_t *)a2 + 1296) = a1[326];
  *(uint32_t *)(*(uint32_t *)a2 + 1300) = a1[327];
  *(uint32_t *)(*(uint32_t *)a2 + 1304) = a1[328];
  *(uint32_t *)(*(uint32_t *)a2 + 1308) = a1[329];
  *(uint32_t *)(*(uint32_t *)a2 + 1312) = a1[330];
  *(uint32_t *)(*(uint32_t *)a2 + 1316) = a1[331];
  *(uint32_t *)(*(uint32_t *)a2 + 1320) = a1[332];
  *(uint32_t *)(*(uint32_t *)a2 + 1324) = a1[333];
  *(uint32_t *)(*(uint32_t *)a2 + 1328) = a1[334];
  *(uint32_t *)(*(uint32_t *)a2 + 1332) = a1[335];
  *(uint32_t *)(*(uint32_t *)a2 + 1336) = a1[336];
  *(uint32_t *)(*(uint32_t *)a2 + 1340) = a1[337];
  *(uint32_t *)(*(uint32_t *)a2 + 1344) = a1[338];
  *(uint32_t *)(*(uint32_t *)a2 + 1348) = a1[339];
  *(uint32_t *)(*(uint32_t *)a2 + 1352) = a1[340];
  *(uint32_t *)(*(uint32_t *)a2 + 1356) = a1[341];
  *(uint32_t *)(*(uint32_t *)a2 + 1360) = a1[342];
  *(uint32_t *)(*(uint32_t *)a2 + 1364) = a1[343];
  *(uint32_t *)(*(uint32_t *)a2 + 1368) = a1[344];
  *(uint32_t *)(*(uint32_t *)a2 + 1372) = a1[345];
  *(uint32_t *)(*(uint32_t *)a2 + 1376) = a1[346];
  *(uint32_t *)(*(uint32_t *)a2 + 1380) = a1[347];
  *(uint32_t *)(*(uint32_t *)a2 + 1384) = a1[348];
  *(uint32_t *)(*(uint32_t *)a2 + 1388) = a1[349];
  *(uint32_t *)(*(uint32_t *)a2 + 1392) = a1[350];
  *(uint32_t *)(*(uint32_t *)a2 + 1396) = a1[351];
  *(uint32_t *)(*(uint32_t *)a2 + 1400) = a1[352];
  *(uint32_t *)(*(uint32_t *)a2 + 1404) = a1[353];
  *(uint32_t *)(*(uint32_t *)a2 + 1408) = a1[354];
  *(uint32_t *)(*(uint32_t *)a2 + 1412) = a1[355];
  *(uint32_t *)(*(uint32_t *)a2 + 1416) = a1[356];
  *(uint32_t *)(*(uint32_t *)a2 + 1420) = a1[357];
  *(uint32_t *)(*(uint32_t *)a2 + 1424) = a1[358];
  *(uint32_t *)(*(uint32_t *)a2 + 1428) = a1[359];
  *(uint32_t *)(*(uint32_t *)a2 + 1432) = a1[360];
  *(uint32_t *)(*(uint32_t *)a2 + 1436) = a1[361];
  *(uint32_t *)(*(uint32_t *)a2 + 1440) = a1[362];
  *(uint32_t *)(*(uint32_t *)a2 + 1444) = a1[363];
  *(uint32_t *)(*(uint32_t *)a2 + 1448) = a1[364];
  *(uint32_t *)(*(uint32_t *)a2 + 1452) = a1[365];
  *(uint32_t *)(*(uint32_t *)a2 + 1456) = a1[366];
  *(uint32_t *)(*(uint32_t *)a2 + 1460) = a1[367];
  *(uint32_t *)(*(uint32_t *)a2 + 1464) = a1[368];
  *(uint32_t *)(*(uint32_t *)a2 + 1468) = a1[369];
  *(uint32_t *)(*(uint32_t *)a2 + 1472) = a1[370];
  *(uint32_t *)(*(uint32_t *)a2 + 1476) = a1[371];
  *(uint32_t *)(*(uint32_t *)a2 + 1480) = a1[372];
  *(uint32_t *)(*(uint32_t *)a2 + 1484) = a1[373];
  *(uint32_t *)(*(uint32_t *)a2 + 1488) = a1[374];
  *(uint32_t *)(*(uint32_t *)a2 + 1492) = a1[375];
  *(uint32_t *)(*(uint32_t *)a2 + 1496) = a1[376];
  *(uint32_t *)(*(uint32_t *)a2 + 1500) = a1[377];
  *(uint32_t *)(*(uint32_t *)a2 + 1504) = a1[378];
  *(uint32_t *)(*(uint32_t *)a2 + 1508) = a1[379];
  *(uint32_t *)(*(uint32_t *)a2 + 1512) = a1[380];
  *(uint32_t *)(*(uint32_t *)a2 + 1516) = a1[381];
  *(uint32_t *)(*(uint32_t *)a2 + 1520) = a1[382];
  *(uint32_t *)(*(uint32_t *)a2 + 1524) = a1[383];
  *(uint32_t *)(*(uint32_t *)a2 + 1528) = a1[384];
  *(uint32_t *)(*(uint32_t *)a2 + 1532) = a1[385];
  *(uint32_t *)(*(uint32_t *)a2 + 1536) = a1[386];
  *(uint32_t *)(*(uint32_t *)a2 + 1540) = a1[387];
  *(uint32_t *)(*(uint32_t *)a2 + 1544) = a1[388];
  *(uint32_t *)(*(uint32_t *)a2 + 1548) = a1[389];
  *(uint32_t *)(*(uint32_t *)a2 + 1552) = a1[390];
  *(uint32_t *)(*(uint32_t *)a2 + 1556) = a1[391];
  *(uint32_t *)(*(uint32_t *)a2 + 1560) = a1[392];
  *(uint32_t *)(*(uint32_t *)a2 + 1564) = a1[393];
  *(uint32_t *)(*(uint32_t *)a2 + 1568) = a1[394];
  *(uint32_t *)(*(uint32_t *)a2 + 1572) = a1[395];
  *(uint32_t *)(*(uint32_t *)a2 + 1576) = a1[396];
  *(uint32_t *)(*(uint32_t *)a2 + 1580) = a1[397];
  *(uint32_t *)(*(uint32_t *)a2 + 1584) = a1[398];
  *(uint32_t *)(*(uint32_t *)a2 + 1588) = a1[399];
  *(uint32_t *)(*(uint32_t *)a2 + 1592) = a1[400];
  *(uint32_t *)(*(uint32_t *)a2 + 1596) = a1[401];
  *(uint32_t *)(*(uint32_t *)a2 + 1600) = a1[402];
  *(uint32_t *)(*(uint32_t *)a2 + 1604) = a1[403];
  *(uint32_t *)(*(uint32_t *)a2 + 1608) = a1[404];
  *(uint32_t *)(*(uint32_t *)a2 + 1612) = a1[405];
  *(uint32_t *)(*(uint32_t *)a2 + 1616) = a1[406];
  *(uint32_t *)(*(uint32_t *)a2 + 1620) = a1[407];
  *(uint32_t *)(*(uint32_t *)a2 + 1624) = a1[408];
  *(uint32_t *)(*(uint32_t *)a2 + 1628) = a1[409];
  *(uint32_t *)(*(uint32_t *)a2 + 1632) = a1[410];
  *(uint32_t *)(*(uint32_t *)a2 + 1636) = a1[411];
  *(uint32_t *)(*(uint32_t *)a2 + 1640) = a1[412];
  *(uint32_t *)(*(uint32_t *)a2 + 1644) = a1[413];
  *(uint32_t *)(*(uint32_t *)a2 + 1648) = a1[414];
  *(uint32_t *)(*(uint32_t *)a2 + 1652) = a1[415];
  *(uint32_t *)(*(uint32_t *)a2 + 1656) = a1[416];
  *(uint32_t *)(*(uint32_t *)a2 + 1660) = a1[417];
  *(uint32_t *)(*(uint32_t *)a2 + 1664) = a1[418];
  *(uint32_t *)(*(uint32_t *)a2 + 1668) = a1[419];
  *(uint32_t *)(*(uint32_t *)a2 + 1672) = a1[420];
  *(uint32_t *)(*(uint32_t *)a2 + 1676) = a1[421];
  *(uint32_t *)(*(uint32_t *)a2 + 1680) = a1[422];
  *(uint32_t *)(*(uint32_t *)a2 + 1684) = a1[423];
  *(uint32_t *)(*(uint32_t *)a2 + 1688) = a1[424];
  *(uint32_t *)(*(uint32_t *)a2 + 1692) = a1[425];
  *(uint32_t *)(*(uint32_t *)a2 + 1696) = a1[426];
  *(uint32_t *)(*(uint32_t *)a2 + 1700) = a1[427];
  *(uint32_t *)(*(uint32_t *)a2 + 1704) = a1[428];
  *(uint32_t *)(*(uint32_t *)a2 + 1708) = a1[429];
  *(uint32_t *)(*(uint32_t *)a2 + 1712) = a1[430];
  *(uint32_t *)(*(uint32_t *)a2 + 1716) = a1[431];
  *(uint32_t *)(*(uint32_t *)a2 + 1720) = a1[432];
  *(uint32_t *)(*(uint32_t *)a2 + 1724) = a1[433];
  *(uint32_t *)(*(uint32_t *)a2 + 1728) = a1[434];
  *(uint32_t *)(*(uint32_t *)a2 + 1732) = a1[435];
  *(uint32_t *)(*(uint32_t *)a2 + 1736) = a1[436];
  *(uint32_t *)(*(uint32_t *)a2 + 1740) = a1[437];
  *(uint32_t *)(*(uint32_t *)a2 + 1744) = a1[438];
  *(uint32_t *)(*(uint32_t *)a2 + 1748) = a1[439];
  *(uint32_t *)(*(uint32_t *)a2 + 1752) = a1[440];
  *(uint32_t *)(*(uint32_t *)a2 + 1756) = a1[441];
  *(uint32_t *)(*(uint32_t *)a2 + 1760) = a1[442];
  *(uint32_t *)(*(uint32_t *)a2 + 1764) = a1[443];
  *(uint32_t *)(*(uint32_t *)a2 + 1768) = a1[444];
  *(uint32_t *)(*(uint32_t *)a2 + 1772) = a1[445];
  *(uint32_t *)(*(uint32_t *)a2 + 1776) = a1[446];
  *(uint32_t *)(*(uint32_t *)a2 + 1780) = a1[447];
  *(uint32_t *)(*(uint32_t *)a2 + 1784) = a1[448];
  *(uint32_t *)(*(uint32_t *)a2 + 1788) = a1[449];
  *(uint32_t *)(*(uint32_t *)a2 + 1792) = a1[450];
  *(uint32_t *)(*(uint32_t *)a2 + 1796) = a1[451];
  *(uint32_t *)(*(uint32_t *)a2 + 1800) = a1[452];
  *(uint32_t *)(*(uint32_t *)a2 + 1804) = a1[453];
  *(uint32_t *)(*(uint32_t *)a2 + 1808) = a1[454];
  *(uint32_t *)(*(uint32_t *)a2 + 1812) = a1[455];
  *(uint32_t *)(*(uint32_t *)a2 + 1816) = a1[456];
  *(uint32_t *)(*(uint32_t *)a2 + 1820) = a1[457];
  *(uint32_t *)(*(uint32_t *)a2 + 1824) = a1[458];
  *(uint32_t *)(*(uint32_t *)a2 + 1828) = a1[459];
  *(uint32_t *)(*(uint32_t *)a2 + 1832) = a1[460];
  *(uint32_t *)(*(uint32_t *)a2 + 1836) = a1[461];
  *(uint32_t *)(*(uint32_t *)a2 + 1840) = a1[462];
  *(uint32_t *)(*(uint32_t *)a2 + 1844) = a1[463];
  *(uint32_t *)(*(uint32_t *)a2 + 1848) = a1[464];
  *(uint32_t *)(*(uint32_t *)a2 + 1852) = a1[465];
  *(uint32_t *)(*(uint32_t *)a2 + 1856) = a1[466];
  *(uint32_t *)(*(uint32_t *)a2 + 1860) = a1[467];
  *(uint32_t *)(*(uint32_t *)a2 + 1864) = a1[468];
  *(uint32_t *)(*(uint32_t *)a2 + 1868) = a1[469];
  *(uint32_t *)(*(uint32_t *)a2 + 1872) = a1[470];
  *(uint32_t *)(*(uint32_t *)a2 + 1876) = a1[471];
  *(uint32_t *)(*(uint32_t *)a2 + 1880) = a1[472];
  *(uint32_t *)(*(uint32_t *)a2 + 1884) = a1[473];
  *(uint32_t *)(*(uint32_t *)a2 + 1888) = a1[474];
  *(uint32_t *)(*(uint32_t *)a2 + 1892) = a1[475];
  *(uint32_t *)(*(uint32_t *)a2 + 1896) = a1[476];
  *(uint32_t *)(*(uint32_t *)a2 + 1900) = a1[477];
  *(uint32_t *)(*(uint32_t *)a2 + 1904) = a1[478];
  *(uint32_t *)(*(uint32_t *)a2 + 1908) = a1[479];
  *(uint32_t *)(*(uint32_t *)a2 + 1912) = a1[480];
  *(uint32_t *)(*(uint32_t *)a2 + 1916) = a1[481];
  *(uint32_t *)(*(uint32_t *)a2 + 1920) = a1[482];
  *(uint32_t *)(*(uint32_t *)a2 + 1924) = a1[483];
  *(uint32_t *)(*(uint32_t *)a2 + 1928) = a1[484];
  *(uint32_t *)(*(uint32_t *)a2 + 1932) = a1[485];
  *(uint32_t *)(*(uint32_t *)a2 + 1936) = a1[486];
  *(uint32_t *)(*(uint32_t *)a2 + 1940) = a1[487];
  *(uint32_t *)(*(uint32_t *)a2 + 1944) = a1[488];
  *(uint32_t *)(*(uint32_t *)a2 + 1948) = a1[489];
  *(uint32_t *)(*(uint32_t *)a2 + 1952) = a1[490];
  *(uint32_t *)(*(uint32_t *)a2 + 1956) = a1[491];
  *(uint32_t *)(*(uint32_t *)a2 + 1960) = a1[492];
  *(uint32_t *)(*(uint32_t *)a2 + 1964) = a1[493];
  *(uint32_t *)(*(uint32_t *)a2 + 1968) = a1[494];
  *(uint32_t *)(*(uint32_t *)a2 + 1972) = a1[495];
  *(uint32_t *)(*(uint32_t *)a2 + 1976) = a1[496];
  *(uint32_t *)(*(uint32_t *)a2 + 1980) = a1[497];
  *(uint32_t *)(*(uint32_t *)a2 + 1984) = a1[498];
  *(uint32_t *)(*(uint32_t *)a2 + 1988) = a1[499];
  *(uint32_t *)(*(uint32_t *)a2 + 1992) = a1[500];
  *(uint32_t *)(*(uint32_t *)a2 + 1996) = a1[501];
  *(uint32_t *)(*(uint32_t *)a2 + 2000) = a1[502];
  *(uint32_t *)(*(uint32_t *)a2 + 2004) = a1[503];
  *(uint32_t *)(*(uint32_t *)a2 + 2008) = a1[504];
  *(uint32_t *)(*(uint32_t *)a2 + 2012) = a1[505];
  *(uint32_t *)(*(uint32_t *)a2 + 2016) = a1[506];
  *(uint32_t *)(*(uint32_t *)a2 + 2020) = a1[507];
  *(uint32_t *)(*(uint32_t *)a2 + 2024) = a1[508];
  *(uint32_t *)(*(uint32_t *)a2 + 2028) = a1[509];
  *(uint32_t *)(*(uint32_t *)a2 + 2032) = a1[510];
  *(uint32_t *)(*(uint32_t *)a2 + 2036) = a1[511];
  *(uint32_t *)(*(uint32_t *)a2 + 2040) = a1[512];
  *(uint32_t *)(*(uint32_t *)a2 + 2044) = a1[513];
  *(uint32_t *)(*(uint32_t *)a2 + 2048) = a1[514];
  *(uint32_t *)(*(uint32_t *)a2 + 2052) = a1[515];
  *(uint32_t *)(*(uint32_t *)a2 + 2056) = a1[516];
  *(uint32_t *)(*(uint32_t *)a2 + 2060) = a1[517];
  *(uint32_t *)(*(uint32_t *)a2 + 2064) = a1[518];
  *(uint32_t *)(*(uint32_t *)a2 + 2068) = a1[519];
  *(uint32_t *)(*(uint32_t *)a2 + 2072) = a1[520];
  *(uint32_t *)(*(uint32_t *)a2 + 2076) = a1[521];
  *(uint32_t *)(*(uint32_t *)a2 + 2080) = a1[522];
  *(uint32_t *)(*(uint32_t *)a2 + 2084) = a1[523];
  *(uint32_t *)(*(uint32_t *)a2 + 2088) = a1[524];
  *(uint32_t *)(*(uint32_t *)a2 + 2092) = a1[525];
  *(uint32_t *)(*(uint32_t *)a2 + 2096) = a1[526];
  *(uint32_t *)(*(uint32_t *)a2 + 2100) = a1[527];
  *(uint32_t *)(*(uint32_t *)a2 + 2104) = a1[528];
  *(uint32_t *)(*(uint32_t *)a2 + 2108) = a1[529];
  *(uint32_t *)(*(uint32_t *)a2 + 2112) = a1[530];
  *(uint32_t *)(*(uint32_t *)a2 + 2116) = a1[531];
  *(uint32_t *)(*(uint32_t *)a2 + 2120) = a1[532];
  *(uint32_t *)(*(uint32_t *)a2 + 2124) = a1[533];
  *(uint32_t *)(*(uint32_t *)a2 + 2128) = a1[534];
  *(uint32_t *)(*(uint32_t *)a2 + 2132) = a1[535];
  *(uint32_t *)(*(uint32_t *)a2 + 2136) = a1[536];
  *(uint32_t *)(*(uint32_t *)a2 + 2140) = a1[537];
  *(uint32_t *)(*(uint32_t *)a2 + 2144) = a1[538];
  *(uint32_t *)(*(uint32_t *)a2 + 2148) = a1[539];
  *(uint32_t *)(*(uint32_t *)a2 + 2152) = a1[540];
  *(uint32_t *)(*(uint32_t *)a2 + 2156) = a1[541];
  *(uint32_t *)(*(uint32_t *)a2 + 2160) = a1[542];
  *(uint32_t *)(*(uint32_t *)a2 + 2164) = a1[543];
  *(uint32_t *)(*(uint32_t *)a2 + 2168) = a1[544];
  *(uint32_t *)(*(uint32_t *)a2 + 2172) = a1[545];
  *(uint32_t *)(*(uint32_t *)a2 + 2176) = a1[546];
  *(uint32_t *)(*(uint32_t *)a2 + 2180) = a1[547];
  *(uint32_t *)(*(uint32_t *)a2 + 2184) = a1[548];
  *(uint32_t *)(*(uint32_t *)a2 + 2188) = a1[549];
  *(uint32_t *)(*(uint32_t *)a2 + 2192) = a1[550];
  *(uint32_t *)(*(uint32_t *)a2 + 2196) = a1[551];
  *(uint32_t *)(*(uint32_t *)a2 + 2200) = a1[552];
  *(uint32_t *)(*(uint32_t *)a2 + 2204) = a1[553];
  *(uint32_t *)(*(uint32_t *)a2 + 2208) = a1[554];
  *(uint32_t *)(*(uint32_t *)a2 + 2212) = a1[555];
  *(uint32_t *)(*(uint32_t *)a2 + 2216) = a1[556];
  *(uint32_t *)(*(uint32_t *)a2 + 2220) = a1[557];
  *(uint32_t *)(*(uint32_t *)a2 + 2224) = a1[558];
  *(uint32_t *)(*(uint32_t *)a2 + 2228) = a1[559];
  *(uint32_t *)(*(uint32_t *)a2 + 2232) = a1[560];
  *(uint32_t *)(*(uint32_t *)a2 + 2236) = a1[561];
  *(uint32_t *)(*(uint32_t *)a2 + 2240) = a1[562];
  *(uint32_t *)(*(uint32_t *)a2 + 2244) = a1[563];
  *(uint32_t *)(*(uint32_t *)a2 + 2248) = a1[564];
  *(uint32_t *)(*(uint32_t *)a2 + 2252) = a1[565];
  *(uint32_t *)(*(uint32_t *)a2 + 2256) = a1[566];
  *(uint32_t *)(*(uint32_t *)a2 + 2260) = a1[567];
  *(uint32_t *)(*(uint32_t *)a2 + 2264) = a1[568];
  *(uint32_t *)(*(uint32_t *)a2 + 2268) = a1[569];
  *(uint32_t *)(*(uint32_t *)a2 + 2272) = a1[570];
  *(uint32_t *)(*(uint32_t *)a2 + 2276) = a1[571];
  result = a1[572];
  *(uint32_t *)(*(uint32_t *)a2 + 2280) = result;
  return result;
}


