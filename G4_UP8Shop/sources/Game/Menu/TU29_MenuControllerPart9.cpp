#include "Core/Utils/DecompTypes.h"
#include "TU29_MenuControllerPart9.h"

// ----------------------------------------------------------------------------
// Function: sub_C05710  (binary VA: 0xc05710)
// Original: sub_C05710
// ----------------------------------------------------------------------------
int sub_C05710()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE740);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE740, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE744), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE744, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE748), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE748, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE74C), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE74C, &unk_20D1280);
  dword_20DE750 = 1056964608;
  dword_20DE754 = 1056964608;
  dword_20DE758 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_C05830  (binary VA: 0xc05830)
// Original: sub_C05830
// ----------------------------------------------------------------------------
int * sub_C05830(int *a1, int a2, int a3, int a4, int *a5)
{
  int v7;
  int v8;
  int v9;
  int v11;
  char v12;
  int v13;

  v7 = a2 + 4;
  v12 = 1;
  v11 = v7;
  if ( a3 == 0 && a4 != v7 )
    v12 = *a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    v9 = *a5;
    *(uint32_t *)(v8 + 20) = a5[1];
    *(uint32_t *)(v8 + 16) = v9;
  }
  v13 = v8;
  sub_1904970(v12, v8, a4, v11);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C058F0  (binary VA: 0xc058f0)
// Original: sub_C058F0
// ----------------------------------------------------------------------------
int sub_C058F0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v17)) > _g4_s4 ? (36u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);

  v4 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v9 = 2 * (v4 + 1) - 1;
      v10 = a1 + 8 * v9;
      if ( *(uint32_t *)(16 * (v4 + 1) + a1 + 4) >= *(uint32_t *)(v10 + 4) )
      {
        v10 = 16 * (v4 + 1) + a1;
        v9 = 2 * (v4 + 1);
      }
      v11 = a1 + 8 * v4;
      g4_std::string::assign_str(v11, v10);
      *(uint32_t *)(v11 + 4) = *(uint32_t *)(v10 + 4);
      if ( v9 >= (a3 - 1) / 2 )
        break;
      v4 = v9;
    }
  }
  else
  {
    v9 = a2;
    v10 = a1 + 8 * a2;
  }
  if ( (a3 & 1) == 0 && v9 == (a3 - 2) / 2 )
  {
    v9 = 2 * v9 + 1;
    g4_std::string::assign_str(v10, a1 + 8 * v9);
    *(uint32_t *)(v10 + 4) = *(uint32_t *)(a1 + 8 * v9 + 4);
    v10 = a1 + 8 * v9;
  }
  g4_std::string::construct_copy(&v16, a4);
  v17 = *(uint32_t *)(a4 + 4);
  if ( v9 > a2 && *(uint32_t *)(a1 + 8 * ((v9 - 1) / 2) + 4) < v17 )
  {
    v6 = a1;
    v7 = (v9 - 1) / 2;
    do
    {
      v8 = v9;
      v10 = v6 + 8 * v7;
      v9 = v7;
      v13 = v6;
      v12 = v6 + 8 * v8;
      g4_std::string::assign_str(v12, v10);
      *(uint32_t *)(v12 + 4) = *(uint32_t *)(v10 + 4);
      v6 = v13;
      if ( a2 >= v9 )
        break;
      v7 = (v9 - 1) / 2;
    }
    while ( *(uint32_t *)(v13 + 8 * v7 + 4) < v17 );
  }
  g4_std::string::assign_str(v10, &v16);
  *(uint32_t *)(v10 + 4) = v17;
  { g4_std::string::Destroy(&v16); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C05AA0  (binary VA: 0xc05aa0)
// Original: sub_C05AA0
// ----------------------------------------------------------------------------
int sub_C05AA0(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v21[4];
  typedef unsigned int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v18)) > _g4_s5 ? (20u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v19)) > _g4_s6 ? (24u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v21)) > _g4_s7 ? (40u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v22)) > _g4_s8 ? (44u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);

  v18 = result;
  if ( result != a2 )
  {
    v2 = result + 8;
    while ( a2 != v2 )
    {
      v3 = v2;
      if ( *(uint32_t *)(v2 + 4) >= *(uint32_t *)(v18 + 4) )
      {
        g4_std::string::construct_copy(v21, v2);
        v7 = *(uint32_t *)(v2 + 4) < *(uint32_t *)(v2 - 4);
        v22 = *(uint32_t *)(v2 + 4);
        v8 = v2;
        if ( v7 )
        {
          v9 = v2 - 8;
          v10 = v2 - 4;
          v16 = v2;
          while ( 1 )
          {
            v14 = v10;
            v11 = v9;
            g4_std::string::assign_str(v3, v9);
            v10 = v14;
            v12 = v9 - v16;
            v9 -= 8;
            *(uint32_t *)(v3 + 4) = *(uint32_t *)(v12 + v14 + 8);
            if ( v22 >= *(uint32_t *)(v9 + 4) )
              break;
            v3 = v11;
          }
          v8 = v11;
          v2 = v16;
        }
        v2 += 8;
        g4_std::string::assign_str(v8, v21);
        *(uint32_t *)(v8 + 4) = v22;
        g4_std::string::Destroy(v21);
      }
      else
      {
        g4_std::string::construct_copy(v21, v2);
        v22 = *(uint32_t *)(v2 + 4);
        v19 = v2 + 8;
        if ( (v2 - v18) >> 3 > 0 )
        {
          v4 = v2;
          v5 = v2 - 4;
          v17 = v2;
          v15 = v2 + 4;
          v6 = (v2 - v18) >> 3;
          do
          {
            v13 = v5;
            g4_std::string::assign_str(v4, v4 - 8);
            v5 = v13;
            --v6;
            *(uint32_t *)(v4 - v17 + v15) = *(uint32_t *)(v4 - v17 + v13);
            v4 -= 8;
          }
          while ( v6 != 0 );
        }
        g4_std::string::assign_str(v18, v21);
        *(uint32_t *)(v18 + 4) = v22;
        g4_std::string::Destroy(v21);
        v2 = v19;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C05C20  (binary VA: 0xc05c20)
// Original: sub_C05C20
// ----------------------------------------------------------------------------
int sub_C05C20(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  char v8; // bp
  int v9;
  char v11; // bp
  int v12;
  int v13;
  int v14;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v17 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v16 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v17 != v16 )
      v11 = v16[4] > v6;
    v12 = opNew(0x18u);
    if ( v12 != -16 )
    {
      v13 = *a3;
      *(uint32_t *)(v12 + 20) = a3[1];
      *(uint32_t *)(v12 + 16) = v13;
    }
    sub_1904970(v11, v12, v16, v17);
    *(uint32_t *)a1 = v12;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_C05830(v18, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v14 = v18[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v14;
  }
  else
  {
    v16 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < *a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C05D60  (binary VA: 0xc05d60)
// Original: sub_C05D60
// ----------------------------------------------------------------------------
char * sub_C05D60(int a1, unsigned int a2)
{
  uint32_t *v3;
  char *result;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  uint32_t *v8;
  unsigned int i;
  __m128i *v10;
  unsigned int v11;
  unsigned int v12;
  bool v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  uint32_t *v17;
  unsigned int v18;
  unsigned int j;
  __m128i *v20;
  unsigned int v21;
  int v22;
  int v23;
  char *v24;
  int v25;
  int v26;
  char *v27;
  char *v28;
  int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  char *v35;
  int v36;
  uint32_t *v37;
  unsigned int v38;
  uint8_t *v39;

  v3 = *(uint32_t **)(a1 + 4);
  result = *(char **)a1;
  v39 = *(uint8_t **)(a1 + 4);
  v5 = (v39 - (uint8_t *)(result)) >> 2;
  if ( v5 < a2 )
  {
    v6 = a2 - v5;
    v38 = v6;
    if ( v6 == 0 )
      return result;
    if ( v6 <= (*(uint32_t *)(a1 + 8) - (int)(uintptr_t)(v3)) >> 2 )
    {
      v7 = -((uint8_t)((uint8_t)(uintptr_t)v3 & 0xF) >> 2) & 3;
      if ( v7 > v6 )
        v7 = v6;
      if ( v7 != 0 )
      {
        v8 = v3;
        for ( i = 0; i < v7; ++i )
        {
          --v6;
          *v8++ = 0;
        }
        if ( v38 == v7 )
        {
LABEL_15:
          result = (char *)(4 * v38);
          *(uint32_t *)(a1 + 4) += 4 * v38;
          return result;
        }
      }
      else
      {
        v8 = *(uint32_t **)(a1 + 4);
      }
      v32 = v38 - v7;
      v34 = (v38 - v7) >> 2;
      v36 = 4 * v34;
      if ( 4 * v34 == 0 )
        goto LABEL_51;
      v10 = (__m128i *)&v39[4 * v7];
      v11 = 0;
      do
      {
        ++v11;
        *v10++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v34 > v11 );
      v6 -= v36;
      v8 += 4 * v34;
      if ( v32 != v36 )
      {
LABEL_51:
        do
        {
          --v6;
          *v8++ = 0;
        }
        while ( v6 != 0 );
      }
      goto LABEL_15;
    }
    if ( v6 > 0x3FFFFFFF - v5 )
      sub_1900180("vector::_M_fill_insert");
    v12 = v6;
    if ( v6 < v5 )
      v12 = v5;
    v29 = -4;
    v13 = __CFADD__(v5, v12);
    v14 = v5 + v12;
    if ( v13 || v14 > 0x3FFFFFFF )
    {
      v15 = opNew(0xFFFFFFFC);
    }
    else
    {
      if ( v14 == 0 )
      {
        v35 = nullptr;
        v29 = 0;
        v15 = 0;
        goto LABEL_25;
      }
      v29 = 4 * v14;
      v15 = opNew(4 * v14);
    }
    v35 = (char *)v15;
LABEL_25:
    v16 = v38;
    v17 = (uint32_t *)(v15 + 4 * v5);
    v37 = v17;
    v18 = -((uint8_t)((uint8_t)(uintptr_t)v17 & 0xF) >> 2) & 3;
    if ( v18 > v38 )
      v18 = v38;
    if ( v18 == 0 )
      goto LABEL_52;
    for ( j = 0; j < v18; ++j )
    {
      --v16;
      *v17++ = 0;
    }
    if ( v18 != v38 )
    {
LABEL_52:
      v30 = v38 - v18;
      v33 = (v38 - v18) >> 2;
      v31 = 4 * v33;
      if ( 4 * v33 == 0 )
        goto LABEL_53;
      v20 = (__m128i *)&v37[v18];
      v21 = 0;
      do
      {
        ++v21;
        *v20++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v33 > v21 );
      v16 -= v31;
      v17 += 4 * v33;
      if ( v30 != v31 )
      {
LABEL_53:
        do
        {
          --v16;
          *v17++ = 0;
        }
        while ( v16 != 0 );
      }
    }
    v22 = 0;
    v23 = (int)(uintptr_t)(&v39[-*(uint32_t *)a1]) >> 2;
    if ( v23 != 0 )
    {
      v22 = 4 * v23;
      memmove(v35, *(const void **)a1, 4 * v23);
    }
    v24 = &v35[4 * v38 + v22];
    v25 = 0;
    v26 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(v39)) >> 2;
    if ( v26 != 0 )
    {
      v25 = 4 * v26;
      v28 = v24;
      memmove(v24, v39, 4 * v26);
      v24 = v28;
    }
    v27 = &v24[v25];
    if ( *(uint32_t *)a1 != 0 )
      opDelete(*(void **)a1);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v27);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v35);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&v35[v29]);
    return &v35[v29];
  }
  if ( v5 > a2 )
  {
    result += 4 * a2;
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C06040  (binary VA: 0xc06040)
// Original: sub_C06040
// ----------------------------------------------------------------------------
int sub_C06040(int a1, unsigned int a2, int a3)
{
  unsigned int v3;
  int result;
  unsigned int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int i;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int j;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  int v57;
  unsigned int v58;
  unsigned int v59;
  int v60;
  int v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  int v73;
  typedef unsigned int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef unsigned int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef unsigned int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef unsigned int _g4_t_v84;
  typedef unsigned int _g4_t_v85;
  typedef unsigned int _g4_t_v86;
  typedef unsigned int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef unsigned int _g4_t_v92;
  typedef unsigned int _g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef unsigned int _g4_t_v95;
  typedef unsigned int _g4_t_v96;
  typedef unsigned int _g4_t_v97;
  typedef uint8_t _g4_t_v98[4];
  typedef int _g4_t_v99;
  typedef uint8_t _g4_t_v100[4];
  typedef int _g4_t_v101;
  typedef uint8_t _g4_t_v102[4];
  typedef int _g4_t_v103;
  typedef uint8_t _g4_t_v104[4];
  typedef int _g4_t_v105;
  typedef uint8_t _g4_t_v106[4];
  typedef int _g4_t_v107;
  typedef uint8_t _g4_t_v108[4];
  typedef int _g4_t_v109;
  typedef uint8_t _g4_t_v110[4];
  typedef int _g4_t_v111;
  typedef uint8_t _g4_t_v112[4];
  typedef int _g4_t_v113;
  typedef uint8_t _g4_t_v114[4];
  typedef int _g4_t_v115;
  typedef uint8_t _g4_t_v116[4];
  typedef int _g4_t_v117;
  typedef uint8_t _g4_t_v118[4];
  typedef int _g4_t_v119;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v74)) > _g4_s0 ? (8u + sizeof(_g4_t_v74)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v75)) > _g4_s1 ? (8u + sizeof(_g4_t_v75)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v76)) > _g4_s2 ? (8u + sizeof(_g4_t_v76)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v77)) > _g4_s3 ? (8u + sizeof(_g4_t_v77)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v78)) > _g4_s4 ? (8u + sizeof(_g4_t_v78)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v79)) > _g4_s5 ? (8u + sizeof(_g4_t_v79)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v80)) > _g4_s6 ? (8u + sizeof(_g4_t_v80)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v81)) > _g4_s7 ? (12u + sizeof(_g4_t_v81)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v82)) > _g4_s8 ? (16u + sizeof(_g4_t_v82)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v83)) > _g4_s9 ? (16u + sizeof(_g4_t_v83)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v84)) > _g4_s10 ? (16u + sizeof(_g4_t_v84)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v85)) > _g4_s11 ? (20u + sizeof(_g4_t_v85)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v86)) > _g4_s12 ? (24u + sizeof(_g4_t_v86)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v88)) > _g4_s13 ? (32u + sizeof(_g4_t_v88)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v89)) > _g4_s14 ? (36u + sizeof(_g4_t_v89)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v90)) > _g4_s15 ? (40u + sizeof(_g4_t_v90)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v91)) > _g4_s16 ? (44u + sizeof(_g4_t_v91)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v92)) > _g4_s17 ? (48u + sizeof(_g4_t_v92)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v93)) > _g4_s18 ? (52u + sizeof(_g4_t_v93)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v94)) > _g4_s19 ? (56u + sizeof(_g4_t_v94)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v95)) > _g4_s20 ? (60u + sizeof(_g4_t_v95)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v96)) > _g4_s21 ? (68u + sizeof(_g4_t_v96)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v97)) > _g4_s22 ? (76u + sizeof(_g4_t_v97)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v98)) > _g4_s23 ? (88u + sizeof(_g4_t_v98)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v99)) > _g4_s24 ? (92u + sizeof(_g4_t_v99)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v100)) > _g4_s25 ? (96u + sizeof(_g4_t_v100)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v101)) > _g4_s26 ? (100u + sizeof(_g4_t_v101)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v102)) > _g4_s27 ? (104u + sizeof(_g4_t_v102)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v103)) > _g4_s28 ? (108u + sizeof(_g4_t_v103)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v104)) > _g4_s29 ? (112u + sizeof(_g4_t_v104)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v105)) > _g4_s30 ? (116u + sizeof(_g4_t_v105)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v106)) > _g4_s31 ? (120u + sizeof(_g4_t_v106)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v107)) > _g4_s32 ? (124u + sizeof(_g4_t_v107)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v108)) > _g4_s33 ? (128u + sizeof(_g4_t_v108)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v109)) > _g4_s34 ? (132u + sizeof(_g4_t_v109)) : _g4_s34,
    _g4_s36 = (136u + sizeof(_g4_t_v110)) > _g4_s35 ? (136u + sizeof(_g4_t_v110)) : _g4_s35,
    _g4_s37 = (140u + sizeof(_g4_t_v111)) > _g4_s36 ? (140u + sizeof(_g4_t_v111)) : _g4_s36,
    _g4_s38 = (144u + sizeof(_g4_t_v112)) > _g4_s37 ? (144u + sizeof(_g4_t_v112)) : _g4_s37,
    _g4_s39 = (148u + sizeof(_g4_t_v113)) > _g4_s38 ? (148u + sizeof(_g4_t_v113)) : _g4_s38,
    _g4_s40 = (152u + sizeof(_g4_t_v114)) > _g4_s39 ? (152u + sizeof(_g4_t_v114)) : _g4_s39,
    _g4_s41 = (156u + sizeof(_g4_t_v115)) > _g4_s40 ? (156u + sizeof(_g4_t_v115)) : _g4_s40,
    _g4_s42 = (160u + sizeof(_g4_t_v116)) > _g4_s41 ? (160u + sizeof(_g4_t_v116)) : _g4_s41,
    _g4_s43 = (164u + sizeof(_g4_t_v117)) > _g4_s42 ? (164u + sizeof(_g4_t_v117)) : _g4_s42,
    _g4_s44 = (168u + sizeof(_g4_t_v118)) > _g4_s43 ? (168u + sizeof(_g4_t_v118)) : _g4_s43,
    _g4_s45 = (172u + sizeof(_g4_t_v119)) > _g4_s44 ? (172u + sizeof(_g4_t_v119)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 8u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 8u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 8u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 8u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 8u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 8u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 8u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 12u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 16u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 16u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 16u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 20u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 24u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 32u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 36u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 40u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 44u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 48u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 52u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 56u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 60u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 68u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 76u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 88u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 92u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 96u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 100u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 104u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 108u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 112u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 116u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 120u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 124u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 128u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 132u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 136u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 140u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 144u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 148u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 152u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 156u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 160u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 164u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 168u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 172u);

  v3 = a2;
  result = a2 - a1;
  v95 = a2;
  if ( result <= 135 )
    return result;
  if ( a3 == 0 )
  {
    v85 = a2;
    goto LABEL_140;
  }
LABEL_3:
  --a3;
  v5 = *(uint32_t *)(a1 + 4);
  v6 = a1 + 8 * ((int)(((v95 - a1) >> 31) + ((int)(v95 - a1) >> 3)) >> 1);
  v7 = *(uint32_t *)(v3 - 4);
  v8 = *(uint32_t *)(v6 + 4);
  if ( v5 >= v8 )
  {
    if ( v5 < v7 )
      goto LABEL_6;
    if ( v8 >= v7 )
      goto LABEL_5;
LABEL_18:
    sub_1937C90(a1, v3 - 8);
    v7 = *(uint32_t *)(a1 + 4);
    *(uint32_t *)(a1 + 4) = *(uint32_t *)(v3 - 4);
    *(uint32_t *)(v3 - 4) = v7;
    v5 = *(uint32_t *)(a1 + 4);
    goto LABEL_6;
  }
  if ( v8 >= v7 )
  {
    if ( v5 >= v7 )
      goto LABEL_6;
    goto LABEL_18;
  }
LABEL_5:
  sub_1937C90(a1, a1 + 8 * ((int)(((v95 - a1) >> 31) + ((int)(v95 - a1) >> 3)) >> 1));
  v9 = *(uint32_t *)(a1 + 4);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(v6 + 4);
  *(uint32_t *)(v6 + 4) = v9;
  v7 = *(uint32_t *)(v3 - 4);
  v5 = *(uint32_t *)(a1 + 4);
LABEL_6:
  v10 = a1 + 8;
  for ( i = v3; ; i = v12 )
  {
    for ( ; *(uint32_t *)(v10 + 4) < v5; v10 += 8 )
      ;
    v12 = i - 8;
    if ( v5 < v7 )
    {
      v13 = i - 16;
      do
      {
        v12 = v13;
        v13 -= 8;
      }
      while ( *(uint32_t *)(v13 + 12) > v5 );
    }
    if ( v12 <= v10 )
      break;
    sub_1937C90(v10, v12);
    v14 = *(uint32_t *)(v10 + 4);
    *(uint32_t *)(v10 + 4) = *(uint32_t *)(v12 + 4);
    *(uint32_t *)(v12 + 4) = v14;
    v10 += 8;
    v7 = *(uint32_t *)(v12 - 4);
    v5 = *(uint32_t *)(a1 + 4);
  }
  v85 = v10;
  v16 = v3 - v10;
  v92 = v3;
  v95 = v10;
  if ( (int)(v3 - v10) <= 135 )
    goto LABEL_133;
  if ( a3 == 0 )
  {
    v86 = v3;
    goto LABEL_128;
  }
  v89 = a3;
  v96 = v10 + 8;
LABEL_22:
  --v89;
  v17 = *(uint32_t *)(v85 + 4);
  v18 = v85 + 8 * ((int)(((v92 - v85) >> 31) + ((int)(v92 - v85) >> 3)) >> 1);
  v19 = *(uint32_t *)(v3 - 4);
  v20 = *(uint32_t *)(v18 + 4);
  if ( v17 >= v20 )
  {
    if ( v17 < v19 )
      goto LABEL_25;
    if ( v20 < v19 )
    {
      sub_1937C90(v85, v3 - 8);
      v26 = v85;
      goto LABEL_34;
    }
LABEL_123:
    sub_1937C90(v85, v85 + 8 * ((int)(((v92 - v85) >> 31) + ((int)(v92 - v85) >> 3)) >> 1));
    v68 = *(uint32_t *)(v85 + 4);
    *(uint32_t *)(v85 + 4) = *(uint32_t *)(v18 + 4);
    *(uint32_t *)(v18 + 4) = v68;
    v17 = *(uint32_t *)(v85 + 4);
    v19 = *(uint32_t *)(v3 - 4);
    goto LABEL_25;
  }
  if ( v20 < v19 )
    goto LABEL_123;
  if ( v17 < v19 )
  {
    v26 = v85;
    sub_1937C90(v85, v3 - 8);
LABEL_34:
    v19 = *(uint32_t *)(v26 + 4);
    *(uint32_t *)(v26 + 4) = *(uint32_t *)(v3 - 4);
    *(uint32_t *)(v3 - 4) = v19;
    v17 = *(uint32_t *)(v26 + 4);
  }
LABEL_25:
  v21 = v96;
  for ( j = v3; ; j = v23 )
  {
    while ( v17 > *(uint32_t *)(v21 + 4) )
      v21 += 8;
    v23 = j - 8;
    if ( v19 > v17 )
    {
      v24 = j - 16;
      do
      {
        v23 = v24;
        v24 -= 8;
      }
      while ( v17 < *(uint32_t *)(v24 + 12) );
    }
    if ( v23 <= v21 )
      break;
    sub_1937C90(v21, v23);
    v25 = *(uint32_t *)(v21 + 4);
    *(uint32_t *)(v21 + 4) = *(uint32_t *)(v23 + 4);
    *(uint32_t *)(v23 + 4) = v25;
    v21 += 8;
    v19 = *(uint32_t *)(v23 - 4);
    v17 = *(uint32_t *)(v85 + 4);
  }
  v86 = v21;
  v27 = v3 - v21;
  v93 = v3;
  v92 = v21;
  if ( (int)(v3 - v21) <= 135 )
    goto LABEL_120;
  if ( v89 == 0 )
  {
    v81 = v3;
    goto LABEL_115;
  }
  v28 = v3;
  v90 = v89;
LABEL_38:
  --v90;
  v29 = *(uint32_t *)(v28 - 4);
  v30 = v86 + 8 * ((int)(((v93 - v86) >> 31) + ((int)(v93 - v86) >> 3)) >> 1);
  v31 = *(uint32_t *)(v86 + 4);
  v32 = *(uint32_t *)(v30 + 4);
  if ( v31 >= v32 )
  {
    if ( v31 < v29 )
      goto LABEL_41;
    if ( v32 < v29 )
    {
LABEL_113:
      sub_1937C90(v86, v28 - 8);
      v29 = *(uint32_t *)(v86 + 4);
      *(uint32_t *)(v86 + 4) = *(uint32_t *)(v28 - 4);
      *(uint32_t *)(v28 - 4) = v29;
      v31 = *(uint32_t *)(v86 + 4);
      goto LABEL_41;
    }
LABEL_112:
    sub_1937C90(v86, v86 + 8 * ((int)(((v93 - v86) >> 31) + ((int)(v93 - v86) >> 3)) >> 1));
    v64 = *(uint32_t *)(v86 + 4);
    *(uint32_t *)(v86 + 4) = *(uint32_t *)(v30 + 4);
    *(uint32_t *)(v30 + 4) = v64;
    v29 = *(uint32_t *)(v28 - 4);
    v31 = *(uint32_t *)(v86 + 4);
    goto LABEL_41;
  }
  if ( v32 < v29 )
    goto LABEL_112;
  if ( v31 < v29 )
    goto LABEL_113;
LABEL_41:
  v33 = v86 + 8;
  v34 = v28;
  while ( 1 )
  {
    for ( ; *(uint32_t *)(v33 + 4) < v31; v33 += 8 )
      ;
    v35 = v34 - 8;
    if ( v29 > v31 )
      break;
    v34 -= 8;
    if ( v35 <= v33 )
      goto LABEL_50;
LABEL_48:
    sub_1937C90(v33, v34);
    v37 = *(uint32_t *)(v33 + 4);
    *(uint32_t *)(v33 + 4) = *(uint32_t *)(v34 + 4);
    *(uint32_t *)(v34 + 4) = v37;
    v33 += 8;
    v29 = *(uint32_t *)(v34 - 4);
    v31 = *(uint32_t *)(v86 + 4);
  }
  v36 = v34 - 16;
  do
  {
    v34 = v36;
    v36 -= 8;
  }
  while ( *(uint32_t *)(v36 + 12) > v31 );
  if ( v34 > v33 )
    goto LABEL_48;
LABEL_50:
  v81 = v33;
  v38 = v28 - v33;
  v94 = v28;
  v93 = v33;
  if ( (int)(v28 - v33) <= 135 )
    goto LABEL_107;
  if ( v90 == 0 )
    goto LABEL_102;
  v39 = v28;
  v91 = v90;
  v97 = v33 + 8;
  while ( 2 )
  {
    --v91;
    v40 = *(uint32_t *)(v39 - 4);
    v41 = v81 + 8 * ((int)(((v94 - v81) >> 31) + ((int)(v94 - v81) >> 3)) >> 1);
    v42 = *(uint32_t *)(v81 + 4);
    v43 = *(uint32_t *)(v41 + 4);
    if ( v42 >= v43 )
    {
      if ( v42 < v40 )
        goto LABEL_56;
      if ( v43 < v40 )
      {
        sub_1937C90(v81, v39 - 8);
        v59 = v81;
        goto LABEL_99;
      }
    }
    else if ( v43 >= v40 )
    {
      if ( v42 < v40 )
      {
        v59 = v81;
        sub_1937C90(v81, v39 - 8);
LABEL_99:
        v40 = *(uint32_t *)(v59 + 4);
        *(uint32_t *)(v59 + 4) = *(uint32_t *)(v39 - 4);
        *(uint32_t *)(v39 - 4) = v40;
        v42 = *(uint32_t *)(v59 + 4);
      }
LABEL_56:
      v28 = v97;
      v44 = v39;
      while ( 2 )
      {
        while ( *(uint32_t *)(v28 + 4) < v42 )
          v28 += 8;
        v45 = v44 - 8;
        if ( v40 <= v42 )
        {
          v44 -= 8;
          if ( v45 <= v28 )
            break;
          goto LABEL_63;
        }
        v46 = v44 - 16;
        do
        {
          v44 = v46;
          v46 -= 8;
        }
        while ( *(uint32_t *)(v46 + 12) > v42 );
        if ( v44 > v28 )
        {
LABEL_63:
          sub_1937C90(v28, v44);
          v47 = *(uint32_t *)(v28 + 4);
          *(uint32_t *)(v28 + 4) = *(uint32_t *)(v44 + 4);
          *(uint32_t *)(v44 + 4) = v47;
          v28 += 8;
          v40 = *(uint32_t *)(v44 - 4);
          v42 = *(uint32_t *)(v81 + 4);
          continue;
        }
        break;
      }
      v74 = v39;
      v48 = v39 - v28;
      v94 = v28;
      if ( (int)(v39 - v28) <= 135 )
        goto LABEL_87;
      if ( v91 == 0 )
      {
LABEL_82:
        v83 = v48 >> 3;
        v75 = ((v48 >> 3) - 2) >> 1;
        v58 = v28 + 8 * v75;
        while ( 1 )
        {
          g4_std::string::construct_copy(v116, v58);
          v117 = *(uint32_t *)(v58 + 4);
          g4_std::string::construct_copy(v114, v116);
          v115 = v117;
          sub_C058F0(v83, v114);
          g4_std::string::Destroy(v114);
          v58 -= 8;
          if ( v75 == 0 )
            break;
          --v75;
          g4_std::string::Destroy(v116);
        }
        g4_std::string::Destroy(v116);
        v88 = v39;
        v76 = v39 - 8;
        v84 = v39 - 4;
        do
        {
          v39 -= 8;
          g4_std::string::construct_copy(v116, v39);
          v117 = *(uint32_t *)(v39 - v88 + v76 + 12);
          g4_std::string::assign_str(v39, v28);
          *(uint32_t *)(v39 - v88 + v84 + 8) = *(uint32_t *)(v28 + 4);
          g4_std::string::construct_copy(v118, v116);
          v119 = v117;
          sub_C058F0((int)(v39 - v28) >> 3, v118);
          g4_std::string::Destroy(v118);
          g4_std::string::Destroy(v116);
        }
        while ( (int)(v39 - v28) > 15 );
        goto LABEL_87;
      }
      v82 = v91;
      while ( 2 )
      {
        --v82;
        v49 = *(uint32_t *)(v74 - 4);
        v50 = v28 + 8 * ((int)(((v74 - v28) >> 31) + ((int)(v74 - v28) >> 3)) >> 1);
        v51 = *(uint32_t *)(v28 + 4);
        v52 = *(uint32_t *)(v50 + 4);
        if ( v51 >= v52 )
        {
          if ( v51 >= v49 )
          {
            if ( v52 < v49 )
              goto LABEL_92;
LABEL_70:
            sub_1937C90(v28, v28 + 8 * ((int)(((v74 - v28) >> 31) + ((int)(v74 - v28) >> 3)) >> 1));
            v53 = *(uint32_t *)(v28 + 4);
            *(uint32_t *)(v28 + 4) = *(uint32_t *)(v50 + 4);
            *(uint32_t *)(v50 + 4) = v53;
            v51 = *(uint32_t *)(v28 + 4);
            v49 = *(uint32_t *)(v74 - 4);
          }
        }
        else
        {
          if ( v52 < v49 )
            goto LABEL_70;
          if ( v51 < v49 )
          {
LABEL_92:
            sub_1937C90(v28, v74 - 8);
            v49 = *(uint32_t *)(v28 + 4);
            *(uint32_t *)(v28 + 4) = *(uint32_t *)(v74 - 4);
            *(uint32_t *)(v74 - 4) = v49;
            v51 = *(uint32_t *)(v28 + 4);
          }
        }
        v39 = v28 + 8;
        v54 = v74;
        while ( 2 )
        {
          while ( v51 > *(uint32_t *)(v39 + 4) )
            v39 += 8;
          v55 = v54 - 8;
          if ( v49 <= v51 )
          {
            v54 -= 8;
            if ( v55 <= v39 )
              break;
            goto LABEL_78;
          }
          v56 = v54 - 16;
          do
          {
            v54 = v56;
            v56 -= 8;
          }
          while ( v51 < *(uint32_t *)(v56 + 12) );
          if ( v54 > v39 )
          {
LABEL_78:
            sub_1937C90(v39, v54);
            v57 = *(uint32_t *)(v39 + 4);
            *(uint32_t *)(v39 + 4) = *(uint32_t *)(v54 + 4);
            *(uint32_t *)(v54 + 4) = v57;
            v39 += 8;
            v51 = *(uint32_t *)(v28 + 4);
            v49 = *(uint32_t *)(v54 - 4);
            continue;
          }
          break;
        }
        sub_C06040(v82);
        v74 = v39;
        v48 = v39 - v28;
        if ( (int)(v39 - v28) > 135 )
        {
          if ( v82 == 0 )
            goto LABEL_82;
          continue;
        }
        break;
      }
LABEL_87:
      v38 = v28 - v81;
      if ( (int)(v28 - v81) > 135 )
      {
        if ( v91 != 0 )
        {
          v39 = v28;
          continue;
        }
LABEL_102:
        v77 = v38 >> 3;
        v61 = ((v38 >> 3) - 2) >> 1;
        v62 = v81 + 8 * v61;
        while ( 1 )
        {
          g4_std::string::construct_copy(v116, v62);
          v117 = *(uint32_t *)(v62 + 4);
          g4_std::string::construct_copy(v110, v116);
          v111 = v117;
          v62 -= 8;
          sub_C058F0(v77, v110);
          g4_std::string::Destroy(v110);
          if ( v61 == 0 )
            break;
          --v61;
          g4_std::string::Destroy(v116);
        }
        v63 = v28;
        g4_std::string::Destroy(v116);
        do
        {
          v63 -= 8;
          g4_std::string::construct_copy(v116, v63);
          v117 = *(uint32_t *)(v63 - 8 + 12);
          g4_std::string::assign_str(v63, v81);
          *(uint32_t *)(v63 - 4 + 8) = *(uint32_t *)(v81 + 4);
          g4_std::string::construct_copy(v112, v116);
          v113 = v117;
          sub_C058F0((int)(v63 - v81) >> 3, v112);
          g4_std::string::Destroy(v112);
          g4_std::string::Destroy(v116);
        }
        while ( (int)(v63 - v81) > 15 );
      }
LABEL_107:
      v27 = v81 - v86;
      if ( (int)(v81 - v86) > 135 )
      {
        if ( v90 != 0 )
        {
          v28 = v81;
          goto LABEL_38;
        }
LABEL_115:
        v78 = v27 >> 3;
        v65 = ((v27 >> 3) - 2) >> 1;
        v66 = v86 + 8 * v65;
        while ( 1 )
        {
          g4_std::string::construct_copy(v116, v66);
          v117 = *(uint32_t *)(v66 + 4);
          v66 -= 8;
          g4_std::string::construct_copy(v106, v116);
          v107 = v117;
          sub_C058F0(v78, v106);
          g4_std::string::Destroy(v106);
          if ( v65 == 0 )
            break;
          --v65;
          g4_std::string::Destroy(v116);
        }
        g4_std::string::Destroy(v116);
        v67 = v81;
        do
        {
          v67 -= 8;
          g4_std::string::construct_copy(v116, v67);
          v117 = *(uint32_t *)(v67 - 8 + 12);
          g4_std::string::assign_str(v67, v86);
          *(uint32_t *)(v67 - 4 + 8) = *(uint32_t *)(v86 + 4);
          g4_std::string::construct_copy(v108, v116);
          v109 = v117;
          sub_C058F0((int)(v67 - v86) >> 3, v108);
          g4_std::string::Destroy(v108);
          g4_std::string::Destroy(v116);
        }
        while ( (int)(v67 - v86) > 15 );
      }
LABEL_120:
      v16 = v86 - v85;
      if ( (int)(v86 - v85) > 135 )
      {
        if ( v89 != 0 )
        {
          v3 = v86;
          goto LABEL_22;
        }
LABEL_128:
        v79 = v16 >> 3;
        v69 = ((v16 >> 3) - 2) >> 1;
        v70 = v85 + 8 * v69;
        while ( 1 )
        {
          g4_std::string::construct_copy(v116, v70);
          v117 = *(uint32_t *)(v70 + 4);
          v70 -= 8;
          g4_std::string::construct_copy(v102, v116);
          v103 = v117;
          sub_C058F0(v79, v102);
          g4_std::string::Destroy(v102);
          if ( v69 == 0 )
            break;
          --v69;
          g4_std::string::Destroy(v116);
        }
        g4_std::string::Destroy(v116);
        v71 = v86;
        do
        {
          v71 -= 8;
          g4_std::string::construct_copy(v116, v71);
          v117 = *(uint32_t *)(v71 - 8 + 12);
          g4_std::string::assign_str(v71, v85);
          *(uint32_t *)(v71 - 4 + 8) = *(uint32_t *)(v85 + 4);
          g4_std::string::construct_copy(v104, v116);
          v105 = v117;
          sub_C058F0((int)(v71 - v85) >> 3, v104);
          g4_std::string::Destroy(v104);
          g4_std::string::Destroy(v116);
        }
        while ( (int)(v71 - v85) > 15 );
      }
LABEL_133:
      result = v85 - a1;
      if ( (int)(v85 - a1) > 135 )
      {
        if ( a3 != 0 )
        {
          v3 = v85;
          goto LABEL_3;
        }
LABEL_140:
        v80 = result >> 3;
        v72 = ((result >> 3) - 2) >> 1;
        v73 = a1 + 8 * v72;
        while ( 1 )
        {
          g4_std::string::construct_copy(v116, v73);
          v117 = *(uint32_t *)(v73 + 4);
          v73 -= 8;
          g4_std::string::construct_copy(v98, v116);
          v99 = v117;
          sub_C058F0(v80, v98);
          g4_std::string::Destroy(v98);
          if ( v72 == 0 )
            break;
          --v72;
          g4_std::string::Destroy(v116);
        }
        g4_std::string::Destroy(v116);
        v15 = v85;
        do
        {
          v15 -= 8;
          g4_std::string::construct_copy(v116, v15);
          v117 = *(uint32_t *)(v15 - 8 + 12);
          g4_std::string::assign_str(v15, a1);
          *(uint32_t *)(v15 - 4 + 8) = *(uint32_t *)(a1 + 4);
          g4_std::string::construct_copy(v100, v116);
          v101 = v117;
          sub_C058F0((int)(v15 - a1) >> 3, v100);
          g4_std::string::Destroy(v100);
          g4_std::string::Destroy(v116);
        }
        while ( (int)(v15 - a1) > 15 );
      }
      return result;
    }
    break;
  }
  sub_1937C90(v81, v81 + 8 * ((int)(((v94 - v81) >> 31) + ((int)(v94 - v81) >> 3)) >> 1));
  v60 = *(uint32_t *)(v81 + 4);
  *(uint32_t *)(v81 + 4) = *(uint32_t *)(v41 + 4);
  *(uint32_t *)(v41 + 4) = v60;
  v42 = *(uint32_t *)(v81 + 4);
  v40 = *(uint32_t *)(v39 - 4);
  goto LABEL_56;
}

// ----------------------------------------------------------------------------
// Function: sub_C06EE0  (binary VA: 0xc06ee0)
// Original: sub_C06EE0
// ----------------------------------------------------------------------------
int * sub_C06EE0(int *result, uint32_t *a2, int a3, int *a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef char _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v17)) > _g4_s4 ? (12u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v18)) > _g4_s5 ? (12u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v19)) > _g4_s6 ? (16u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v20)) > _g4_s7 ? (20u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v21)) > _g4_s8 ? (20u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v22)) > _g4_s9 ? (20u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v23)) > _g4_s10 ? (24u + sizeof(_g4_t_v23)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);

  v19 = result;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_19;
    v10 = a2[4];
    v22 = v10;
    if ( *(uint32_t *)(v10 + 16) >= *a4 )
      goto LABEL_19;
    v13 = a3 == v10;
    v11 = opNew(0x18u);
    if ( v11 != -16 )
    {
      v12 = *a4;
      *(uint32_t *)(v11 + 20) = a4[1];
      *(uint32_t *)(v11 + 16) = v12;
    }
    v18 = v11;
    sub_1904970(v13, v11, v22, a3);
    ++a2[5];
    *v19 = v18;
    return v19;
  }
  else
  {
    if ( *a4 < *(uint32_t *)(a3 + 16) )
    {
      if ( a3 == a2[3] )
      {
        sub_C05830(result, (int)(uintptr_t)(a2), a3, a3, a4);
        return v19;
      }
      v16 = *a4;
      v14 = a2 + 1;
      v5 = sub_1904940(a3);
      if ( v16 > *(uint32_t *)(v5 + 16) )
      {
        if ( *(uint32_t *)(v5 + 12) != 0 )
        {
          v6 = opNew(0x18u);
          v20 = v6;
          if ( v6 != -16 )
          {
            v7 = a4[1];
            *(uint32_t *)(v6 + 16) = *a4;
            *(uint32_t *)(v6 + 20) = v7;
          }
          sub_1904970(1, v6, a3, v14);
          ++a2[5];
          *v19 = v20;
          return v19;
        }
        sub_C05830(v19, (int)(uintptr_t)(a2), 0, v5, a4);
        return v19;
      }
LABEL_19:
      sub_C05C20((int)(uintptr_t)(v23), a2, a4);
      *v19 = v23[0];
      return v19;
    }
    if ( *a4 <= *(uint32_t *)(a3 + 16) )
    {
      *result = a3;
      return result;
    }
    if ( a3 == a2[4] )
      goto LABEL_26;
    v17 = *a4;
    v15 = a2 + 1;
    v21 = sub_19048E0(a3);
    if ( v17 >= *(uint32_t *)(v21 + 16) )
      goto LABEL_19;
    if ( *(uint32_t *)(a3 + 12) == 0 )
    {
LABEL_26:
      sub_C05830(v19, (int)(uintptr_t)(a2), 0, a3, a4);
      return v19;
    }
    v8 = opNew(0x18u);
    if ( v8 != -16 )
    {
      v9 = *a4;
      *(uint32_t *)(v8 + 20) = a4[1];
      *(uint32_t *)(v8 + 16) = v9;
    }
    sub_1904970(1, v8, v21, v15);
    ++a2[5];
    *v19 = v8;
    return v19;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C07180  (binary VA: 0xc07180)
// Original: sub_C07180
// ----------------------------------------------------------------------------
int * sub_C07180(int *a1, int a2, int a3, int a4, int a5)
{
  int v7;
  int v8;
  size_t n;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  size_t v15;
  int v16;
  size_t v17;

  v7 = a2 + 4;
  LOBYTE(v14) = 1;
  v16 = v7;
  if ( a3 == 0 && a4 != v7 )
  {
    v15 = *(uint32_t *)(*(uint32_t *)a5 - 12);
    v17 = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    n = v15;
    if ( v17 <= v15 )
      n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v11 = memcmp(*(const void **)a5, *(const void **)(a4 + 16), n);
    if ( v11 == 0 )
      v11 = v15 - v17;
    v14 = v11 >> 31;
  }
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    v12 = v8;
    g4_std::string::construct_copy(v8 + 16, a5);
    v8 = v12;
    *(uint32_t *)(v12 + 20) = *(uint32_t *)(a5 + 4);
  }
  v13 = v8;
  sub_1904970(v14, v8, a4, v16);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C07290  (binary VA: 0xc07290)
// Original: sub_C07290
// ----------------------------------------------------------------------------
int * sub_C07290(int *a1, int a2, int a3, int a4, int a5)
{
  int v7;
  int v8;
  int v9;
  size_t n;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  size_t v16;
  int v17;
  size_t v18;

  v7 = a2 + 4;
  LOBYTE(v15) = 1;
  v17 = v7;
  if ( a3 == 0 && a4 != v7 )
  {
    v16 = *(uint32_t *)(*(uint32_t *)a5 - 12);
    v18 = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    n = v16;
    if ( v18 <= v16 )
      n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v12 = memcmp(*(const void **)a5, *(const void **)(a4 + 16), n);
    if ( v12 == 0 )
      v12 = v16 - v18;
    v15 = v12 >> 31;
  }
  v8 = opNew(0x1Cu);
  if ( v8 != -16 )
  {
    v13 = v8;
    g4_std::string::construct_copy(v8 + 16, a5);
    v8 = v13;
    v9 = *(uint32_t *)(a5 + 4);
    *(uint32_t *)(v13 + 24) = *(uint32_t *)(a5 + 8);
    *(uint32_t *)(v13 + 20) = v9;
  }
  v14 = v8;
  sub_1904970(v15, v8, a4, v17);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v14;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C073A0  (binary VA: 0xc073a0)
// Original: sub_C073A0
// ----------------------------------------------------------------------------
int sub_C073A0(int a1, uint32_t *a2, void **a3)
{
  size_t v3;
  uint32_t *v4;
  size_t v5;
  size_t i;
  size_t v7;
  uint32_t *v8;
  size_t v9;
  size_t n;
  int v11;
  uint32_t *v12;
  int v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v19;
  int v20;
  int v21;
  void *v22;
  typedef size_t _g4_t_v23;
  typedef char _g4_t_v24;
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_s1)) > _g4_s2 ? (8u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v29)) > _g4_s4 ? (20u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v30)) > _g4_s5 ? (24u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v31)) > _g4_s6 ? (28u + sizeof(_g4_t_v31)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);

  v3 = a2[2];
  v4 = a2 + 1;
  v30 = v4;
  if ( v3 == 0 )
  {
    v13 = (int)(uintptr_t)(v4);
    goto LABEL_17;
  }
  s1 = *a3;
  v5 = *((uint32_t *)*a3 - 3);
  for ( i = v3; ; i = v7 )
  {
    v8 = *(uint32_t **)(i + 16);
    v9 = *(v8 - 3);
    n = v9;
    v23 = i;
    if ( v5 <= v9 )
      n = v5;
    v28 = n;
    v11 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v11 == 0 )
      v11 = v5 - v9;
    if ( v11 >= 0 )
      break;
    v7 = *(uint32_t *)(v23 + 8);
    v24 = 1;
    if ( v7 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v7 = *(uint32_t *)(v23 + 12);
  v24 = 0;
  if ( v7 != 0 )
    goto LABEL_4;
LABEL_11:
  v12 = v8;
  v13 = v23;
  v14 = v28;
  v15 = v12;
  v29 = v23;
  if ( v24 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( a2[3] == v13 )
  {
    sub_C07290(v31, (int)(uintptr_t)(a2), 0, v13, (int)(uintptr_t)(a3));
    *(uint32_t *)a1 = v31[0];
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    v19 = sub_19048F0(v13);
    v15 = *(uint32_t **)(v19 + 16);
    v29 = v13;
    v13 = v19;
    v9 = *(v15 - 3);
    s1 = *a3;
    v5 = *((uint32_t *)*a3 - 3);
    v14 = v5;
    if ( v9 <= v5 )
      v14 = *(v15 - 3);
LABEL_12:
    v16 = memcmp(v15, s1, v14);
    v17 = v9 - v5;
    if ( v16 != 0 )
      v17 = v16;
    if ( v17 < 0 )
    {
      LOBYTE(v20) = 1;
      if ( v30 != (uint32_t *)v29 )
        v20 = g4_std::string::compare_str(a3, v29 + 16) >> 31;
      v21 = opNew(0x1Cu);
      if ( v21 != -16 )
      {
        g4_std::string::construct_copy(v21 + 16, a3);
        v22 = a3[1];
        *(uint32_t *)(v21 + 24) = (uint32_t)(uintptr_t)(a3[2]);
        *(uint32_t *)(v21 + 20) = (uint32_t)(uintptr_t)(v22);
      }
      sub_1904970(v20, v21, v29, v30);
      ++a2[5];
      *(uint32_t *)a1 = v21;
      *(uint8_t *)(a1 + 4) = 1;
      return a1;
    }
    else
    {
      *(uint32_t *)a1 = v13;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C07590  (binary VA: 0xc07590)
// Original: sub_C07590
// ----------------------------------------------------------------------------
int sub_C07590(uint32_t *a1, void **a2)
{
  int result;
  int v3;
  size_t v4;
  size_t v5;
  size_t n;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  bool v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  typedef void *_g4_t_s2;
  typedef uint32_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_s2)) > _g4_s0 ? (0u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v28)) > _g4_s4 ? (20u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v29)) > _g4_s5 ? (24u + sizeof(_g4_t_v29)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);

  result = 0;
  v3 = a1[6];
  if ( v3 != 0 )
  {
    v25 = a1 + 5;
    s2 = *a2;
    v4 = *((uint32_t *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        n = v5;
        if ( v4 <= v5 )
          n = v4;
        v7 = v5 - v4;
        v8 = memcmp(*(const void **)(v3 + 16), s2, n);
        if ( v8 != 0 )
          v7 = v8;
        if ( v7 < 0 )
          break;
        v25 = (uint32_t *)v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_10;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_10:
    if ( a1 + 5 == v25 )
      return 0;
    v9 = *(uint32_t *)(v25[4] - 12);
    v10 = v9;
    if ( v4 <= v9 )
      v10 = v4;
    v11 = v4 - v9;
    v12 = memcmp(s2, (const void *)v25[4], v10);
    if ( v12 != 0 )
      v11 = v12;
    result = 0;
    if ( v11 >= 0 )
    {
      v13 = sub_8F0680();
      sub_8F5CD0(&v27, v13);
      v14 = sub_C04770(v27);
      v15 = v28;
      v16 = v14;
      if ( v28 != nullptr
        && (v17 = v28[1] == 1, --v28[1], v17)
        && (G4_VCALL<void>(v15, 8), v17 = v15[2] == 1, --v15[2], v17) )
      {
        G4_VCALL<void>(v15, 12);
        v18 = 1;
        if ( v16 <= 0 )
          return v25[5] * v18;
      }
      else
      {
        v18 = 1;
        if ( v16 <= 0 )
          return v25[5] * v18;
      }
      v19 = (uint32_t *)a1[74];
      if ( v19 != nullptr )
      {
        v20 = (uint32_t *)a1[74];
        v21 = a1 + 73;
        v22 = a1 + 73;
        do
        {
          while ( v16 <= v20[4] )
          {
            v22 = v20;
            v20 = (uint32_t *)v20[2];
            if ( v20 == nullptr )
              goto LABEL_24;
          }
          v20 = (uint32_t *)v20[3];
        }
        while ( v20 != nullptr );
LABEL_24:
        v18 = 1;
        if ( v21 != v22 && v16 >= v22[4] )
        {
          v23 = (int)(uintptr_t)(a1 + 73);
          do
          {
            while ( v16 <= v19[4] )
            {
              v23 = (int)(uintptr_t)(v19);
              v19 = (uint32_t *)v19[2];
              if ( v19 == nullptr )
                goto LABEL_30;
            }
            v19 = (uint32_t *)v19[3];
          }
          while ( v19 != nullptr );
LABEL_30:
          if ( v21 == (uint32_t *)v23 || v16 < *(uint32_t *)(v23 + 16) )
          {
            v29[0] = v16;
            v29[1] = 0;
            sub_C06EE0(&v26, a1 + 72, v23, v29);
            v23 = v26;
          }
          v18 = *(uint32_t *)(v23 + 20);
        }
      }
      return v25[5] * v18;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C07780  (binary VA: 0xc07780)
// Original: sub_C07780
// ----------------------------------------------------------------------------
int sub_C07780(int a1, void **a2)
{
  int result;
  int v3;
  size_t v4;
  size_t n;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  void *s2;
  int v14;

  result = 0;
  v3 = *(uint32_t *)(a1 + 48);
  if ( v3 != 0 )
  {
    v14 = a1 + 44;
    s2 = *a2;
    v4 = *((uint32_t *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        n = v4;
        v6 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        if ( v6 <= v4 )
          n = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        v7 = v6 - v4;
        v8 = memcmp(*(const void **)(v3 + 16), s2, n);
        if ( v8 != 0 )
          v7 = v8;
        if ( v7 < 0 )
          break;
        v14 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_10;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_10:
    if ( a1 + 44 == v14 )
    {
      return 0;
    }
    else
    {
      v9 = v4;
      v10 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
      if ( v10 <= v4 )
        v9 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
      v11 = v4 - v10;
      v12 = memcmp(s2, *(const void **)(v14 + 16), v9);
      if ( v12 != 0 )
        v11 = v12;
      result = 0;
      if ( v11 >= 0 )
        return *(uint32_t *)(v14 + 20);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C07850  (binary VA: 0xc07850)
// Original: sub_C07850
// ----------------------------------------------------------------------------
char sub_C07850(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  typedef int _g4_t_v9[3];
  typedef int _g4_t_v10[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v10)) > _g4_s1 ? (24u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  LOBYTE(v2) = 1;
  if ( a2 > 0 )
  {
    v3 = (uint32_t *)a1[62];
    if ( v3 != nullptr )
    {
      v4 = a1 + 61;
      v5 = (uint32_t *)a1[62];
      v6 = a1 + 61;
      do
      {
        while ( v5[4] >= a2 )
        {
          v6 = v5;
          v5 = (uint32_t *)v5[2];
          if ( v5 == nullptr )
            goto LABEL_7;
        }
        v5 = (uint32_t *)v5[3];
      }
      while ( v5 != nullptr );
LABEL_7:
      if ( v4 == v6 )
      {
        LOBYTE(v2) = 1;
      }
      else
      {
        LOBYTE(v2) = 1;
        if ( v6[4] <= a2 )
        {
          v7 = (int)(uintptr_t)(a1 + 61);
          do
          {
            while ( v3[4] >= a2 )
            {
              v7 = (int)(uintptr_t)(v3);
              v3 = (uint32_t *)v3[2];
              if ( v3 == nullptr )
                goto LABEL_13;
            }
            v3 = (uint32_t *)v3[3];
          }
          while ( v3 != nullptr );
LABEL_13:
          if ( v4 == (uint32_t *)v7 || *(uint32_t *)(v7 + 16) > a2 )
          {
            v10[0] = a2;
            v10[1] = 0;
            sub_C06EE0(v9, a1 + 60, v7, v10);
            v7 = v9[0];
          }
          return *(uint32_t *)(v7 + 20);
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_C07910  (binary VA: 0xc07910)
// Original: sub_C07910
// ----------------------------------------------------------------------------
int sub_C07910(uint32_t *a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  bool v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);

  v1 = sub_8F0680();
  sub_8F5CD0(&v13, v1);
  v2 = sub_C04770(v13);
  v3 = v14;
  v4 = v2;
  if ( v14 != nullptr )
  {
    v5 = v14[1]-- == 1;
    if ( v5 )
    {
      G4_VCALL<void>(v3, 8);
      v5 = v3[2]-- == 1;
      if ( v5 )
        G4_VCALL<void>(v3, 12);
    }
  }
  v6 = 1;
  if ( v4 > 0 )
  {
    v7 = (uint32_t *)a1[68];
    if ( v7 != nullptr )
    {
      v8 = a1 + 67;
      v6 = a1[68];
      v9 = a1 + 67;
      do
      {
        while ( v4 <= *(uint32_t *)(v6 + 16) )
        {
          v9 = (uint32_t *)v6;
          v6 = *(uint32_t *)(v6 + 8);
          if ( v6 == 0 )
            goto LABEL_9;
        }
        v6 = *(uint32_t *)(v6 + 12);
      }
      while ( v6 != 0 );
LABEL_9:
      if ( v9 == v8 )
      {
        v6 = 1;
      }
      else
      {
        LOBYTE(v6) = 1;
        if ( v4 >= v9[4] )
        {
          v10 = (int)(uintptr_t)(a1 + 67);
          do
          {
            while ( v4 <= v7[4] )
            {
              v10 = (int)(uintptr_t)(v7);
              v7 = (uint32_t *)v7[2];
              if ( v7 == nullptr )
                goto LABEL_15;
            }
            v7 = (uint32_t *)v7[3];
          }
          while ( v7 != nullptr );
LABEL_15:
          if ( v8 == (uint32_t *)v10 || v4 < *(uint32_t *)(v10 + 16) )
          {
            v15[0] = v4;
            v15[1] = 0;
            sub_C06EE0(&v12, a1 + 66, v10, v15);
            v10 = v12;
          }
          v6 = *(uint32_t *)(v10 + 20);
        }
      }
    }
  }
  return v6 * a1[17];
}

// ----------------------------------------------------------------------------
// Function: sub_C07A50  (binary VA: 0xc07a50)
// Original: sub_C07A50
// ----------------------------------------------------------------------------
uint32_t * sub_C07A50(uint32_t *a1, int a2)
{
  uint32_t *result;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  typedef int _g4_t_v7[3];
  typedef int _g4_t_v8[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v8)) > _g4_s1 ? (24u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  result = nullptr;
  if ( a2 > 0 )
  {
    v3 = (uint32_t *)a1[80];
    if ( v3 != nullptr )
    {
      v4 = a1 + 79;
      result = (uint32_t *)a1[80];
      v5 = a1 + 79;
      do
      {
        while ( result[4] >= a2 )
        {
          v5 = result;
          result = (uint32_t *)result[2];
          if ( result == nullptr )
            goto LABEL_7;
        }
        result = (uint32_t *)result[3];
      }
      while ( result != nullptr );
LABEL_7:
      if ( v4 == v5 )
      {
        return nullptr;
      }
      else if ( v5[4] <= a2 )
      {
        v6 = (int)(uintptr_t)(a1 + 79);
        do
        {
          while ( v3[4] >= a2 )
          {
            v6 = (int)(uintptr_t)(v3);
            v3 = (uint32_t *)v3[2];
            if ( v3 == nullptr )
              goto LABEL_13;
          }
          v3 = (uint32_t *)v3[3];
        }
        while ( v3 != nullptr );
LABEL_13:
        if ( v4 == (uint32_t *)v6 || *(uint32_t *)(v6 + 16) > a2 )
        {
          v8[0] = a2;
          v8[1] = 0;
          sub_C06EE0(v7, a1 + 78, v6, v8);
          v6 = v7[0];
        }
        return *(uint32_t **)(v6 + 20);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C07B10  (binary VA: 0xc07b10)
// Original: sub_C07B10
// ----------------------------------------------------------------------------
int sub_C07B10(uint32_t *a1, unsigned int a2)
{
  int result;

  if ( a2 >= a1[19] )
  {
    result = 0;
    if ( a2 < a1[20] )
      return result;
LABEL_6:
    result = 1;
    if ( a2 < a1[21] )
      return result;
    return 3 - (a2 < a1[22]);
  }
  if ( a2 >= a1[20] )
    goto LABEL_6;
  if ( a1[21] > a2 )
    return 3;
  return 3 - (a2 < a1[22]);
}

// ----------------------------------------------------------------------------
// Function: sub_C07B60  (binary VA: 0xc07b60)
// Original: sub_C07B60
// ----------------------------------------------------------------------------
int sub_C07B60(int a1, unsigned int a2)
{
  if ( a2 <= 3 )
    return *(uint32_t *)(a1 + 4 * a2 + 76);
  else
    return *(uint32_t *)(a1 + 76);
}

// ----------------------------------------------------------------------------
// Function: sub_C07B80  (binary VA: 0xc07b80)
// Original: sub_C07B80
// ----------------------------------------------------------------------------
int sub_C07B80(int a1, int a2, unsigned int a3)
{
  char *v3;
  size_t v4;
  int v5;
  unsigned int v6;
  char *v7;
  char *v8;
  iap::StoreItemLegacy::Self *v9;
  char *v10;
  int v11;
  uint32_t *v12;
  int v13;
  char *v14;
  iap::StoreItemLegacy::Self *v15;
  char *Type;
  char *v17;
  unsigned int v19;
  int v20;
  char *v21;
  int v22;
  char *v23;
  char *v24;
  char *v25;
  typedef size_t _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef iap::StoreItemLegacy::Self *_g4_t_v28;
  typedef iap::StoreItemLegacy::Self *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef char *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef char _g4_t_v43[4];
  typedef int _g4_t_v44;
  typedef char _g4_t_v45[4];
  typedef unsigned int _g4_t_v46;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v27)) > _g4_s1 ? (0u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v29)) > _g4_s3 ? (16u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v32)) > _g4_s6 ? (20u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v33)) > _g4_s7 ? (20u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v34)) > _g4_s8 ? (24u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v35)) > _g4_s9 ? (24u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v36)) > _g4_s10 ? (28u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v37)) > _g4_s11 ? (36u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v38)) > _g4_s12 ? (40u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v39)) > _g4_s13 ? (40u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (53u + sizeof(_g4_t_v40)) > _g4_s14 ? (53u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v41)) > _g4_s15 ? (56u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v42)) > _g4_s16 ? (60u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v43)) > _g4_s17 ? (64u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v44)) > _g4_s18 ? (68u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v45)) > _g4_s19 ? (72u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v46)) > _g4_s20 ? (76u + sizeof(_g4_t_v46)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 53u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);

  v36 = nullptr;
  v34 = 0;
  if ( *(uint32_t *)(a2 + 28) != a2 + 20 )
  {
    v30 = nullptr;
    v3 = *(char **)(a2 + 28);
    v4 = 0;
    do
    {
      g4_std::string::construct_copy(v43, v3 + 16);
      v44 = *((uint32_t *)v3 + 5);
      if ( v30 == (char *)v4 )
      {
        v19 = (int)(v4 - (uint32_t)(uintptr_t)(v36)) >> 3;
        v35 = 8;
        if ( v19 != 0 )
        {
          if ( v19 > 2 * v19 || 2 * v19 > 0x1FFFFFFF )
            v35 = -8;
          else
            v35 = 16 * v19;
        }
        v37 = opNew(v35);
        v38 = v37 + 8;
        v20 = v37 + 8 * ((int)(v4 - (uint32_t)(uintptr_t)(v36)) >> 3);
        if ( v20 != 0 )
        {
          g4_std::string::construct_copy(v20, v43);
          *(uint32_t *)(v37 + 8 * ((int)(v4 - (uint32_t)(uintptr_t)(v36)) >> 3) + 4) = v44;
        }
        if ( (char *)v4 != v36 )
        {
          v39 = v3;
          v32 = (char *)v4;
          v21 = v36;
          v22 = v37;
          do
          {
            if ( v22 != 0 )
            {
              g4_std::string::construct_copy(v22, v21);
              *(uint32_t *)(v22 + 4) = *((uint32_t *)v21 + 1);
            }
            v22 += 8;
            v21 += 8;
          }
          while ( v32 != v21 );
          v23 = v32;
          v33 = v39;
          v38 = v22 + 8;
          v24 = v23;
          v25 = v36;
          do
          {
            v27 = (size_t)v25;
            v25 += 8;
            g4_std::string::Destroy(v27);
          }
          while ( v24 != v25 );
          v3 = v33;
        }
        if ( v36 != nullptr )
          opDelete(v36);
        v30 = (char *)(v35 + v37);
        v4 = v38;
        v36 = (char *)v37;
      }
      else
      {
        if ( v4 != 0 )
        {
          g4_std::string::construct_copy(v4, v43);
          *(uint32_t *)(v4 + 4) = v44;
        }
        v4 += 8;
      }
      g4_std::string::Destroy(v43);
      v3 = (char *)sub_19048E0(v3);
    }
    while ( v3 != (char *)(a2 + 20) );
    v34 = v4;
    if ( v36 != (char *)v4 )
    {
      v5 = v4 - (uint32_t)(uintptr_t)(v36);
      _BitScanReverse(&v6, v5 >> 3);
      sub_C06040((int)(uintptr_t)(v36), v34, 2 * (31 - (v6 ^ 0x1F)));
      if ( v5 <= 135 )
      {
        sub_C05AA0();
        if ( byte_20D2450 != 0 )
          goto LABEL_18;
        goto LABEL_53;
      }
      sub_C05AA0();
      if ( v36 + 128 != (char *)v34 )
      {
        v31 = v36 + 128;
        do
        {
          v7 = v31;
          g4_std::string::construct_copy(v45, v31);
          v8 = v31;
          v46 = *((uint32_t *)v31 + 1);
          if ( *((uint32_t *)v31 - 1) > v46 )
          {
            v9 = (iap::StoreItemLegacy::Self *)(v31 - 4);
            v10 = v31 - 8;
            while ( 1 )
            {
              v28 = v9;
              v8 = v10;
              g4_std::string::assign_str(v7, v10);
              v9 = v28;
              v11 = v10 - v31;
              v10 -= 8;
              *((uint32_t *)v7 + 1) = *(uint32_t *)((char *)v28 + v11 + 8);
              if ( v46 >= *((uint32_t *)v10 + 1) )
                break;
              v7 = v8;
            }
          }
          g4_std::string::assign_str(v8, v45);
          *((uint32_t *)v8 + 1) = v46;
          g4_std::string::Destroy(v45);
          v31 += 8;
        }
        while ( (char *)v34 != v31 );
      }
    }
  }
  if ( byte_20D2450 == 0 )
  {
LABEL_53:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
    {
      sub_557B70(&unk_20D2460);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
      __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
    }
  }
LABEL_18:
  v12 = nullptr;
  if ( byte_20D2464 == 0 )
    v12 = (uint32_t *)(&unk_20D2460);
  v13 = v12[40];
  if ( (char *)v34 == v36 )
  {
LABEL_27:
    if ( (int)(v34 - (uint32_t)(uintptr_t)(v36)) >> 3 != 0 )
      g4_std::string::construct_copy(a1, &v36[8 * ((int)(v34 - (uint32_t)(uintptr_t)(v36)) >> 3) - 8]);
    else
      g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(&v40) + 2);
    if ( (char *)v34 == v36 )
      goto LABEL_32;
  }
  else
  {
    v14 = v36;
    while ( 1 )
    {
      v15 = (iap::StoreItemLegacy::Self *)sub_562A50(v13, v14);
      if ( *((uint32_t *)v14 + 1) >= a3 && v15 != nullptr && v13 != 0 )
      {
        v29 = v15;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "diamonds", (int)(uintptr_t)(&v40) + 1);
        Type = (char *)iap::StoreItemLegacy::GetType(v29);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), Type, (int)(uintptr_t)(&v40));
        LOBYTE(v29) = sub_A45170(&v41, &v42, 0);
        g4_std::string::Destroy(&v41);
        g4_std::string::Destroy(&v42);
        if ( (uint8_t)(uintptr_t)(v29) != 0 )
          break;
      }
      v14 += 8;
      if ( (char *)v34 == v14 )
        goto LABEL_27;
    }
    g4_std::string::construct_copy(a1, v14);
  }
  v17 = v36;
  do
  {
    v26 = (size_t)v17;
    v17 += 8;
    g4_std::string::Destroy(v26);
  }
  while ( (char *)v34 != v17 );
LABEL_32:
  if ( v36 != nullptr )
    opDelete(v36);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C08070  (binary VA: 0xc08070)
// Original: sub_C08070
// ----------------------------------------------------------------------------
int sub_C08070(int a1, int a2, int a3)
{
  int v3;

  v3 = *(uint32_t *)(a1 + 204);
  if ( a3 + 1 > (unsigned int)((*(uint32_t *)(a1 + 208) - v3) >> 2) )
  {
    sub_C05D60(a1 + 204, a3 + 1);
    v3 = *(uint32_t *)(a1 + 204);
  }
  *(uint32_t *)(v3 + 4 * a3) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_C08110  (binary VA: 0xc08110)
// Original: sub_C08110
// ----------------------------------------------------------------------------
int sub_C08110(int a1)
{
  int *v1;
  char v2;
  int result;
  int *v4;

  if ( byte_20D12E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
  {
    sub_A3F880((int)(uintptr_t)(&dword_20D1300));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
    __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D1304 == 0 )
    v1 = (int *)(&dword_20D1300);
  v2 = sub_A41690((int)(uintptr_t)(v1));
  result = -1;
  if ( v2 != 0 )
  {
    if ( byte_20D12E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
    {
      sub_A3F880((int)(uintptr_t)(&dword_20D1300));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
      __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D1304 == 0 )
      v4 = (int *)(&dword_20D1300);
    return sub_A41350((int)(uintptr_t)(v4)) - *(uint32_t *)(a1 + 344);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C08240  (binary VA: 0xc08240)
// Original: sub_C08240
// ----------------------------------------------------------------------------
int sub_C08240(int a1)
{
  char v1;
  char v2;
  int v4;
  char v5;
  uint32_t *v6;
  char v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef uint8_t _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int (**_g4_t_v26)(int);
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[3];
  typedef int _g4_t_v29;
  typedef uint32_t _g4_t_v30[4];
  typedef int _g4_t_v31[19];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v14)) > _g4_s1 ? (0u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v15)) > _g4_s2 ? (0u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v16)) > _g4_s3 ? (0u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v17)) > _g4_s4 ? (0u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v18)) > _g4_s5 ? (0u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v19)) > _g4_s6 ? (0u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v20)) > _g4_s7 ? (0u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v21)) > _g4_s8 ? (12u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v22)) > _g4_s9 ? (12u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v23)) > _g4_s10 ? (12u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v24)) > _g4_s11 ? (12u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v25)) > _g4_s12 ? (12u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v26)) > _g4_s13 ? (16u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v27)) > _g4_s14 ? (20u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v28)) > _g4_s15 ? (32u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v29)) > _g4_s16 ? (44u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v30)) > _g4_s17 ? (48u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v31)) > _g4_s18 ? (64u + sizeof(_g4_t_v31)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);

  sub_C223C0((int)(uintptr_t)(v31), *(char **)(a1 + 12), 129);
  v1 = sub_C22150(v31);
  v2 = 0;
  if ( v1 == 0 )
    goto LABEL_2;
  sub_C21360(v30, v31, 0);
  sub_6E4630(a1, v30);
  v4 = sub_C21CC0(v31);
  v5 = 0;
  if ( v4 <= 0 )
    goto LABEL_17;
  v26 = (int (**)(int))(uintptr_t)(&off_2058860);
  while ( (uint8_t)sub_6E46B0(a1, &v26) != 0 )
  {
    if ( v27 == 2 )
    {
      v28[0] = (uint32_t)(uintptr_t)(&off_2058880);
      v5 = sub_6E4750(a1, v28);
      if ( v5 != 0 )
      {
        v9 = *(uint32_t *)(a1 + 204);
        v23 = v29;
        if ( (unsigned int)(*(uint32_t *)(a1 + 208) - v9) <= 7 )
        {
          v17 = v5;
          sub_C05D60();
          v9 = *(uint32_t *)(a1 + 204);
          v5 = v17;
        }
        *(uint32_t *)(v9 + 4) = v23;
      }
      goto LABEL_15;
    }
    if ( v27 > 2 )
    {
      if ( v27 == 4 )
      {
        v28[0] = (uint32_t)(uintptr_t)(&off_2058880);
        v5 = sub_6E4750(a1, v28);
        if ( v5 != 0 )
        {
          v11 = *(uint32_t *)(a1 + 204);
          v25 = v29;
          if ( (unsigned int)(*(uint32_t *)(a1 + 208) - v11) <= 0xF )
          {
            v19 = v5;
            sub_C05D60();
            v11 = *(uint32_t *)(a1 + 204);
            v5 = v19;
          }
          *(uint32_t *)(v11 + 12) = v25;
        }
        goto LABEL_15;
      }
      if ( v27 < 4 )
      {
        v28[0] = (uint32_t)(uintptr_t)(&off_2058880);
        v5 = sub_6E4750(a1, v28);
        if ( v5 != 0 )
        {
          v10 = *(uint32_t *)(a1 + 204);
          v24 = v29;
          if ( (unsigned int)(*(uint32_t *)(a1 + 208) - v10) <= 0xB )
          {
            v18 = v5;
            sub_C05D60();
            v10 = *(uint32_t *)(a1 + 204);
            v5 = v18;
          }
          *(uint32_t *)(v10 + 8) = v24;
        }
        goto LABEL_15;
      }
      if ( v27 == 2989 )
        break;
    }
    else
    {
      if ( v27 == 0 )
      {
        v28[0] = (uint32_t)(uintptr_t)(&off_2058880);
        v7 = sub_6E4750(a1, v28);
        v5 = v7;
        if ( v7 != 0 && *(uint32_t *)(a1 + 344) == -1 )
        {
          v22 = v29;
          if ( byte_20D12E0 == 0 )
          {
            v20 = v7;
            v12 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0);
            v5 = v20;
            if ( v12 != 0 )
            {
              sub_A3F880(&dword_20D1300);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
              __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
              v5 = v20;
            }
          }
          v8 = nullptr;
          v16 = v5;
          if ( byte_20D1304 == 0 )
            v8 = (int *)(&dword_20D1300);
          *(uint32_t *)(a1 + 344) = sub_A40990(v8, v22);
          v5 = v16;
        }
        goto LABEL_15;
      }
      if ( v27 == 1 )
      {
        v28[0] = (uint32_t)(uintptr_t)(&off_2058880);
        v5 = sub_6E4750(a1, v28);
        if ( v5 != 0 )
        {
          v6 = *(uint32_t **)(a1 + 204);
          v21 = v29;
          if ( (unsigned int)(*(uint32_t *)(a1 + 208) - (uint32_t)(uintptr_t)(v6)) >> 2 == 0 )
          {
            v14 = v5;
            sub_C05D60();
            v6 = *(uint32_t **)(a1 + 204);
            v5 = v14;
          }
          *v6 = v21;
        }
LABEL_15:
        v28[0] = (uint32_t)(uintptr_t)(&off_2058860);
        if ( v5 == 0 )
          goto LABEL_16;
      }
    }
  }
  v5 = 1;
LABEL_16:
  v26 = (int (**)(int))(uintptr_t)(&off_2058860);
LABEL_17:
  v15 = v5;
  sub_6E4630(a1, 0);
  sub_C21EB0(v31);
  *(uint8_t *)(a1 + 336) = 1;
  v30[0] = (uint32_t)(uintptr_t)(&off_206B7E8);
  v2 = v15;
LABEL_2:
  v13 = v2;
  sub_C21F30(v31);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: sub_C08660  (binary VA: 0xc08660)
// Original: sub_C08660
// ----------------------------------------------------------------------------
int sub_C08660(int a1)
{
  int v2;
  int *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  unsigned int v10;
  char *v11;
  bool v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v16;
  int v17;
  size_t v18;
  unsigned int v19;
  char *v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef void *_g4_t_v23;
  typedef void *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef char *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef size_t _g4_t_v36;
  typedef char *_g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef uint8_t _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[4];
  typedef uint32_t _g4_t_v43[4];
  typedef uint32_t _g4_t_v44[4];
  typedef uint32_t _g4_t_v45[4];
  typedef int _g4_t_v46[16];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v23)) > _g4_s2 ? (12u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v24)) > _g4_s3 ? (12u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v25)) > _g4_s4 ? (12u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v26)) > _g4_s5 ? (12u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v27)) > _g4_s6 ? (12u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v28)) > _g4_s7 ? (12u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v29)) > _g4_s8 ? (12u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v30)) > _g4_s9 ? (16u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v31)) > _g4_s10 ? (32u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v32)) > _g4_s11 ? (32u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v33)) > _g4_s12 ? (36u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v34)) > _g4_s13 ? (36u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v35)) > _g4_s14 ? (36u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v36)) > _g4_s15 ? (40u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v37)) > _g4_s16 ? (40u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v38)) > _g4_s17 ? (40u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v39)) > _g4_s18 ? (44u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v40)) > _g4_s19 ? (44u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v41)) > _g4_s20 ? (44u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v42)) > _g4_s21 ? (48u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v43)) > _g4_s22 ? (64u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v44)) > _g4_s23 ? (80u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v45)) > _g4_s24 ? (96u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v46)) > _g4_s25 ? (112u + sizeof(_g4_t_v46)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);

  sub_C223C0((int)(uintptr_t)(v46), *(char **)(a1 + 12), 178);
  v39 = 0;
  if ( (uint8_t)sub_C22150(v46) != 0 )
  {
    sub_C21360(v42, v46, 0);
    sub_6E4630(a1, v42);
    v43[1] = 0;
    v2 = *(uint32_t *)(a1 + 344);
    v43[0] = (uint32_t)(uintptr_t)(&off_2058880);
    if ( byte_20D12E0 == 0 )
    {
      v22 = v2;
      v9 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0);
      v2 = v22;
      if ( v9 != 0 )
      {
        sub_A3F880(&dword_20D1300);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
        __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
        v2 = v22;
      }
    }
    v3 = nullptr;
    if ( byte_20D1304 == 0 )
      v3 = (int *)(&dword_20D1300);
    v43[3] = sub_A409A0(v3, v2);
    sub_6E4640(a1, v43);
    if ( (unsigned int)(*(uint32_t *)(a1 + 208) - *(uint32_t *)(a1 + 204)) <= 0xF )
      sub_C08C40(a1, 0);
    v40 = *(uint32_t **)(a1 + 204);
    v4 = (uint32_t *)opNew(4u);
    v5 = v4;
    if ( v4 != nullptr )
    {
      *v4 = *v40;
      v6 = *(uint32_t *)(a1 + 204);
      v7 = (int)(uintptr_t)(v4 + 1);
    }
    else
    {
      v6 = *(uint32_t *)(a1 + 204);
      v7 = 4;
    }
    v8 = (uint32_t *)(v6 + 4);
    v31 = (v7 - (int)(uintptr_t)(v5)) >> 2;
    if ( v31 != 0 )
    {
      v36 = 0xFFFFFFFC;
      v10 = 2 * v31;
      if ( v31 > 2 * v31 || v10 > 0x3FFFFFFF )
        goto LABEL_16;
      if ( v10 == 0 )
      {
        v36 = 0;
        v21 = nullptr;
LABEL_17:
        v33 = &v21[4 * v31];
        if ( v33 != nullptr )
          *(uint32_t *)v33 = *v8;
        if ( v31 != 0 )
        {
          v24 = v5;
          memmove(v21, v5, 4 * v31);
          v5 = v24;
        }
        v11 = v33 + 4;
        if ( v5 != nullptr )
        {
          opDelete(v5);
          v11 = v33 + 4;
        }
        v12 = &v21[v36] == v11;
        v37 = &v21[v36];
        v41 = *(uint32_t *)(a1 + 204);
        if ( !v12 )
        {
          if ( v11 != nullptr )
          {
            *((uint32_t *)v33 + 1) = *(uint32_t *)(v41 + 8);
            v41 = *(uint32_t *)(a1 + 204);
          }
          v13 = v33 + 8;
          goto LABEL_27;
        }
        v38 = (v11 - v21) >> 2;
        if ( v38 != 0 )
        {
          v35 = 0xFFFFFFFC;
          v19 = 2 * v38;
          if ( v38 > 2 * v38 || v19 > 0x3FFFFFFF )
            goto LABEL_47;
          if ( v19 == 0 )
          {
            v35 = 0;
            v20 = nullptr;
            goto LABEL_48;
          }
        }
        else
        {
          v19 = 1;
        }
        v35 = 4 * v19;
LABEL_47:
        v20 = (char *)opNew(v35);
LABEL_48:
        v32 = &v20[4 * v38];
        if ( v32 != nullptr )
          *(uint32_t *)v32 = *(uint32_t *)(v41 + 8);
        if ( v38 != 0 )
        {
          v28 = v20;
          memmove(v20, v21, 4 * v38);
          v20 = v28;
        }
        v13 = v32 + 4;
        if ( v21 != nullptr )
        {
          v29 = v20;
          opDelete(v21);
          v13 = v32 + 4;
          v20 = v29;
        }
        v21 = v20;
        v37 = &v20[v35];
        v41 = *(uint32_t *)(a1 + 204);
LABEL_27:
        if ( v13 != v37 )
        {
          if ( v13 != nullptr )
            *(uint32_t *)v13 = *(uint32_t *)(v41 + 12);
          v14 = (uint32_t *)(v21);
LABEL_31:
          v44[1] = 1;
          v44[0] = (uint32_t)(uintptr_t)(&off_2058880);
          v44[3] = *v14;
          v25 = v14;
          sub_6E4640(a1, v44);
          v44[1] = 2;
          v44[3] = v25[1];
          sub_6E4640(a1, v44);
          v44[1] = 3;
          v44[3] = v25[2];
          sub_6E4640(a1, v44);
          v44[1] = 4;
          v44[3] = v25[3];
          sub_6E4640(a1, v44);
          v44[0] = (uint32_t)(uintptr_t)(&off_2058860);
          opDelete(v25);
          v45[0] = (uint32_t)(uintptr_t)(&off_2058880);
          v45[1] = 2989;
          sub_6E4640(a1, v45);
          sub_6E4630(a1, 0);
          sub_C21EB0(v46);
          v45[0] = (uint32_t)(uintptr_t)(&off_2058860);
          v43[0] = (uint32_t)(uintptr_t)(&off_2058860);
          v42[0] = (uint32_t)(uintptr_t)(&off_206B7E8);
          v39 = 1;
          goto LABEL_2;
        }
        v15 = (v13 - v21) >> 2;
        v16 = 1;
        v34 = v15;
        if ( v15 != 0 )
        {
          v17 = v15;
          v18 = 0xFFFFFFFC;
          v16 = 2 * v17;
          if ( v34 > v16 || v16 > 0x3FFFFFFF )
            goto LABEL_34;
          v14 = nullptr;
          if ( v16 == 0 )
            goto LABEL_35;
        }
        v18 = 4 * v16;
LABEL_34:
        v14 = (uint32_t *)opNew(v18);
LABEL_35:
        if ( &v14[v34] != nullptr )
          v14[v34] = *(uint32_t *)(v41 + 12);
        if ( v34 != 0 )
        {
          v26 = v14;
          memmove(v14, v21, 4 * v34);
          v14 = v26;
        }
        if ( v21 != nullptr )
        {
          v27 = v14;
          opDelete(v21);
          v14 = v27;
        }
        goto LABEL_31;
      }
    }
    else
    {
      v10 = 1;
    }
    v36 = 4 * v10;
LABEL_16:
    v23 = v5;
    v30 = v8;
    v21 = (char *)opNew(v36);
    v5 = v23;
    v8 = v30;
    goto LABEL_17;
  }
LABEL_2:
  sub_C21F30(v46);
  return v39;
}

// ----------------------------------------------------------------------------
// Function: sub_C08C40  (binary VA: 0xc08c40)
// Original: sub_C08C40
// ----------------------------------------------------------------------------
int sub_C08C40(int a1, char a2)
{
  int v2;
  int *v3;
  char v4;
  int v5;
  int *v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  int v24;
  uint32_t *v25;
  uint32_t *v26;
  int v27;
  unsigned int v28;
  size_t v29;
  char *v30;
  char *v31;
  int v32;
  int v33;
  char *v34;
  int v35;
  int v36;
  void *v37;
  char *v38;
  unsigned int v39;
  size_t v40;
  char *v41;
  size_t v42;
  int v43;
  int v44;
  char *v45;
  int v46;
  int v47;
  void *v48;
  char *v49;
  unsigned int v50;
  size_t v51;
  char *v52;
  size_t v53;
  int v54;
  int v55;
  char *v56;
  int v57;
  int v58;
  void *v59;
  char *v60;
  unsigned int v61;
  size_t v62;
  char *v63;
  size_t v64;
  int v65;
  int v66;
  char *v67;
  int v68;
  int v69;
  void *v70;
  char *v71;
  int v72;
  char *v73;
  size_t v74;
  size_t v75;
  size_t v76;
  size_t v77;
  size_t v78;
  size_t v79;
  size_t v80;
  size_t v81;
  size_t v82;
  char *v83;
  char *v84;
  char *v85;
  int v86;
  int v87;
  int v88;
  char *v89;
  char *v90;
  char *v91;
  char *dest;
  char *desta;
  char *destb;
  char *destc;

  v2 = sub_C08240(a1);
  if ( byte_20D12E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
  {
    sub_A3F880(&dword_20D1300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
    __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D1304 == 0 )
    v3 = (int *)(&dword_20D1300);
  v4 = sub_A41690(v3);
  v5 = -1;
  if ( v4 != 0 )
  {
    if ( byte_20D12E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
    {
      sub_A3F880(&dword_20D1300);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
      __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
    }
    v6 = nullptr;
    if ( byte_20D1304 == 0 )
      v6 = (int *)(&dword_20D1300);
    v5 = sub_A41350(v6) - *(uint32_t *)(a1 + 344);
  }
  result = v2;
  if ( (uint8_t)v2 != 0 || v5 > 0 || a2 != 0 )
  {
    *(uint32_t *)(a1 + 208) = *(uint32_t *)(a1 + 204);
    v8 = (*(uint32_t *)(a1 + 160) - *(uint32_t *)(a1 + 156)) >> 2;
    if ( v8 != 0 )
    {
      v24 = sub_A45060(0, v8 - 1);
      v25 = *(uint32_t **)(a1 + 208);
      v26 = (uint32_t *)(*(uint32_t *)(a1 + 156) + 4 * v24);
      if ( v25 == *(uint32_t **)(a1 + 212) )
      {
        v50 = ((int)(uintptr_t)(v25) - *(uint32_t *)(a1 + 204)) >> 2;
        v51 = 4;
        if ( v50 != 0 )
        {
          v51 = 0xFFFFFFFC;
          if ( v50 <= 2 * v50 && 2 * v50 <= 0x3FFFFFFF )
            v51 = 8 * v50;
        }
        v87 = ((int)(uintptr_t)(v25) - *(uint32_t *)(a1 + 204)) >> 2;
        v76 = v51;
        v52 = (char *)opNew(v51);
        destb = v52;
        v53 = v76;
        if ( &v52[4 * v87] != nullptr )
          *(uint32_t *)&v52[4 * v87] = *v26;
        v54 = ((int)(uintptr_t)(v25) - *(uint32_t *)(a1 + 204)) >> 2;
        if ( v54 != 0 )
        {
          v55 = 4 * v54;
          memmove(v52, *(const void **)(a1 + 204), 4 * v54);
          v53 = v76;
        }
        else
        {
          v55 = 0;
        }
        v56 = &destb[v55 + 4];
        v57 = (*(uint32_t *)(a1 + 208) - (int)(uintptr_t)(v25)) >> 2;
        if ( v57 != 0 )
        {
          v58 = 4 * v57;
          v90 = v56;
          v81 = v53;
          memmove(v56, v25, 4 * v57);
          v56 = v90;
          v53 = v81;
        }
        else
        {
          v58 = 0;
        }
        v59 = *(void **)(a1 + 204);
        v60 = &v56[v58];
        if ( v59 != nullptr )
        {
          v77 = v53;
          opDelete(v59);
          v53 = v77;
        }
        *(uint32_t *)(a1 + 208) = (uint32_t)(uintptr_t)(v60);
        *(uint32_t *)(a1 + 204) = (uint32_t)(uintptr_t)(destb);
        *(uint32_t *)(a1 + 212) = (uint32_t)(uintptr_t)(&destb[v53]);
      }
      else
      {
        if ( v25 != nullptr )
        {
          *v25 = *v26;
          v27 = *(uint32_t *)(a1 + 208);
        }
        else
        {
          v27 = 0;
        }
        *(uint32_t *)(a1 + 208) = v27 + 4;
      }
    }
    v9 = (*(uint32_t *)(a1 + 172) - *(uint32_t *)(a1 + 168)) >> 2;
    if ( v9 != 0 )
    {
      v20 = sub_A45060(0, v9 - 1);
      v21 = *(uint32_t **)(a1 + 208);
      v22 = (uint32_t *)(*(uint32_t *)(a1 + 168) + 4 * v20);
      if ( v21 == *(uint32_t **)(a1 + 212) )
      {
        v39 = ((int)(uintptr_t)(v21) - *(uint32_t *)(a1 + 204)) >> 2;
        v40 = 4;
        if ( v39 != 0 )
        {
          v40 = 0xFFFFFFFC;
          if ( v39 <= 2 * v39 && 2 * v39 <= 0x3FFFFFFF )
            v40 = 8 * v39;
        }
        v86 = ((int)(uintptr_t)(v21) - *(uint32_t *)(a1 + 204)) >> 2;
        v74 = v40;
        v41 = (char *)opNew(v40);
        desta = v41;
        v42 = v74;
        if ( &v41[4 * v86] != nullptr )
          *(uint32_t *)&v41[4 * v86] = *v22;
        v43 = ((int)(uintptr_t)(v21) - *(uint32_t *)(a1 + 204)) >> 2;
        if ( v43 != 0 )
        {
          v44 = 4 * v43;
          memmove(v41, *(const void **)(a1 + 204), 4 * v43);
          v42 = v74;
        }
        else
        {
          v44 = 0;
        }
        v45 = &desta[v44 + 4];
        v46 = (*(uint32_t *)(a1 + 208) - (int)(uintptr_t)(v21)) >> 2;
        if ( v46 != 0 )
        {
          v47 = 4 * v46;
          v91 = v45;
          v82 = v42;
          memmove(v45, v21, 4 * v46);
          v45 = v91;
          v42 = v82;
        }
        else
        {
          v47 = 0;
        }
        v48 = *(void **)(a1 + 204);
        v49 = &v45[v47];
        if ( v48 != nullptr )
        {
          v75 = v42;
          opDelete(v48);
          v42 = v75;
        }
        *(uint32_t *)(a1 + 208) = (uint32_t)(uintptr_t)(v49);
        *(uint32_t *)(a1 + 204) = (uint32_t)(uintptr_t)(desta);
        *(uint32_t *)(a1 + 212) = (uint32_t)(uintptr_t)(&desta[v42]);
      }
      else
      {
        if ( v21 != nullptr )
        {
          *v21 = *v22;
          v23 = *(uint32_t *)(a1 + 208);
        }
        else
        {
          v23 = 0;
        }
        *(uint32_t *)(a1 + 208) = v23 + 4;
      }
    }
    v10 = (*(uint32_t *)(a1 + 184) - *(uint32_t *)(a1 + 180)) >> 2;
    if ( v10 != 0 )
    {
      v16 = sub_A45060(0, v10 - 1);
      v17 = *(uint32_t **)(a1 + 208);
      v18 = (uint32_t *)(*(uint32_t *)(a1 + 180) + 4 * v16);
      if ( v17 == *(uint32_t **)(a1 + 212) )
      {
        v61 = ((int)(uintptr_t)(v17) - *(uint32_t *)(a1 + 204)) >> 2;
        v62 = 4;
        if ( v61 != 0 )
        {
          v62 = 0xFFFFFFFC;
          if ( v61 <= 2 * v61 && 2 * v61 <= 0x3FFFFFFF )
            v62 = 8 * v61;
        }
        v88 = ((int)(uintptr_t)(v17) - *(uint32_t *)(a1 + 204)) >> 2;
        v78 = v62;
        v63 = (char *)opNew(v62);
        destc = v63;
        v64 = v78;
        if ( &v63[4 * v88] != nullptr )
          *(uint32_t *)&v63[4 * v88] = *v18;
        v65 = ((int)(uintptr_t)(v17) - *(uint32_t *)(a1 + 204)) >> 2;
        if ( v65 != 0 )
        {
          v66 = 4 * v65;
          memmove(v63, *(const void **)(a1 + 204), 4 * v65);
          v64 = v78;
        }
        else
        {
          v66 = 0;
        }
        v67 = &destc[v66 + 4];
        v68 = (*(uint32_t *)(a1 + 208) - (int)(uintptr_t)(v17)) >> 2;
        if ( v68 != 0 )
        {
          v69 = 4 * v68;
          v89 = v67;
          v80 = v64;
          memmove(v67, v17, 4 * v68);
          v67 = v89;
          v64 = v80;
        }
        else
        {
          v69 = 0;
        }
        v70 = *(void **)(a1 + 204);
        v71 = &v67[v69];
        if ( v70 != nullptr )
        {
          v79 = v64;
          opDelete(v70);
          v64 = v79;
        }
        *(uint32_t *)(a1 + 208) = (uint32_t)(uintptr_t)(v71);
        *(uint32_t *)(a1 + 204) = (uint32_t)(uintptr_t)(destc);
        *(uint32_t *)(a1 + 212) = (uint32_t)(uintptr_t)(&destc[v64]);
      }
      else
      {
        if ( v17 != nullptr )
        {
          *v17 = *v18;
          v19 = *(uint32_t *)(a1 + 208);
        }
        else
        {
          v19 = 0;
        }
        *(uint32_t *)(a1 + 208) = v19 + 4;
      }
    }
    v11 = (*(uint32_t *)(a1 + 196) - *(uint32_t *)(a1 + 192)) >> 2;
    if ( v11 != 0 )
    {
      v12 = sub_A45060(0, v11 - 1);
      v13 = *(uint32_t **)(a1 + 208);
      v14 = (uint32_t *)(*(uint32_t *)(a1 + 192) + 4 * v12);
      if ( v13 == *(uint32_t **)(a1 + 212) )
      {
        v28 = ((int)(uintptr_t)(v13) - *(uint32_t *)(a1 + 204)) >> 2;
        v29 = 4;
        if ( v28 != 0 )
        {
          v29 = 0xFFFFFFFC;
          if ( v28 <= 2 * v28 && 2 * v28 <= 0x3FFFFFFF )
            v29 = 8 * v28;
        }
        v83 = (char *)v29;
        v72 = ((int)(uintptr_t)(v13) - *(uint32_t *)(a1 + 204)) >> 2;
        v30 = (char *)opNew(v29);
        dest = v30;
        v31 = v83;
        if ( &v30[4 * v72] != nullptr )
          *(uint32_t *)&v30[4 * v72] = *v14;
        v32 = 0;
        v33 = ((int)(uintptr_t)(v13) - *(uint32_t *)(a1 + 204)) >> 2;
        if ( v33 != 0 )
        {
          v32 = 4 * v33;
          memmove(v30, *(const void **)(a1 + 204), 4 * v33);
          v31 = v83;
        }
        v34 = &dest[v32 + 4];
        v35 = 0;
        v36 = (*(uint32_t *)(a1 + 208) - (int)(uintptr_t)(v13)) >> 2;
        if ( v36 != 0 )
        {
          v35 = 4 * v36;
          v84 = v31;
          v73 = v34;
          memmove(v34, v13, 4 * v36);
          v34 = v73;
          v31 = v84;
        }
        v37 = *(void **)(a1 + 204);
        v38 = &v34[v35];
        if ( v37 != nullptr )
        {
          v85 = v31;
          opDelete(v37);
          v31 = v85;
        }
        *(uint32_t *)(a1 + 208) = (uint32_t)(uintptr_t)(v38);
        *(uint32_t *)(a1 + 204) = (uint32_t)(uintptr_t)(dest);
        *(uint32_t *)(a1 + 212) = (uint32_t)(uintptr_t)(&v31[(uint32_t)(uintptr_t)(dest)]);
      }
      else
      {
        v15 = 0;
        if ( v13 != nullptr )
        {
          *v13 = *v14;
          v15 = *(uint32_t *)(a1 + 208);
        }
        *(uint32_t *)(a1 + 208) = v15 + 4;
      }
    }
    return sub_C08660(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C09440  (binary VA: 0xc09440)
// Original: sub_C09440
// ----------------------------------------------------------------------------
int sub_C09440(int a1)
{
  int *v1;

  if ( byte_20D12E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
  {
    sub_A3F880((int)(uintptr_t)(&dword_20D1300));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
    __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D1304 == 0 )
    v1 = (int *)(&dword_20D1300);
  *(uint32_t *)(a1 + 344) = sub_A41350((int)(uintptr_t)(v1)) + 86400;
  return sub_C08C40(a1, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_C09510  (binary VA: 0xc09510)
// Original: sub_C09510
// ----------------------------------------------------------------------------
const void ** sub_C09510(const void **a1, int a2, unsigned int a3)
{
  int v3;
  const void **v4;
  char *v5;
  char *src;
  int v7;
  unsigned int v8;
  char *v9;
  uint32_t *v10;
  unsigned int v11;
  unsigned int v12;
  size_t v13;
  char *v15;
  int v16;
  int v17;
  char *v18;
  int v19;
  int v20;
  int i;
  const void **v22;
  const void **v23;
  const void **v24;
  char *v25;
  unsigned int v26;
  char *dest;
  int v28;

  v3 = a2;
  v4 = a1;
  if ( a3 + 1 > (*(uint32_t *)(a2 + 208) - *(uint32_t *)(a2 + 204)) >> 2 )
  {
    sub_C08C40(a2, 0);
    v3 = a2;
    v4 = a1;
  }
  *v4 = nullptr;
  v4[1] = nullptr;
  v4[2] = nullptr;
  v5 = nullptr;
  src = nullptr;
  v7 = 0;
  v8 = 0;
  for ( i = v3; ; v3 = i )
  {
    v10 = (uint32_t *)(*(uint32_t *)(v3 + 204) + 4 * v7);
    if ( src == v5 )
    {
      v11 = (src - (char *)((uint8_t *)*v4)) >> 2;
      v12 = 1;
      v26 = v11;
      if ( v11 != 0 && ((v12 = 2 * v11, v11 > 2 * v11) || v12 > 0x3FFFFFFF) )
      {
        v28 = -4;
        v13 = 0xFFFFFFFC;
      }
      else
      {
        v13 = 4 * v12;
        v28 = v13;
      }
      v22 = v4;
      dest = (char *)opNew(v13);
      v4 = v22;
      v15 = &dest[4 * v26];
      if ( v15 != nullptr )
        *(uint32_t *)v15 = *v10;
      v16 = 0;
      v17 = (src - (char *)((uint8_t *)*v22)) >> 2;
      if ( v17 != 0 )
      {
        v16 = 4 * v17;
        memmove(dest, *v22, 4 * v17);
        v4 = v22;
      }
      v18 = &dest[v16 + 4];
      v19 = 0;
      v20 = ((uint8_t *)v4[1] - (uint8_t *)(src)) >> 2;
      if ( v20 != 0 )
      {
        v19 = 4 * v20;
        v23 = v4;
        v25 = v18;
        memmove(v18, src, 4 * v20);
        v18 = v25;
        v4 = v23;
      }
      src = &v18[v19];
      if ( *v4 != nullptr )
      {
        v24 = v4;
        opDelete((void *)*v4);
        v4 = v24;
      }
      v4[1] = src;
      *v4 = dest;
      v4[2] = &dest[v28];
    }
    else
    {
      v9 = nullptr;
      if ( src != nullptr )
      {
        *(uint32_t *)src = *v10;
        v9 = (char *)v4[1];
      }
      src = v9 + 4;
      v4[1] = v9 + 4;
    }
    v7 = ++v8;
    if ( a3 < v8 )
      break;
    v5 = (char *)v4[2];
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_C096F0  (binary VA: 0xc096f0)
// Original: sub_C096F0
// ----------------------------------------------------------------------------
int sub_C096F0(int a1, int a2)
{
  g4_std::string::construct_copy(a1, a2 + 72);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C09730  (binary VA: 0xc09730)
// Original: sub_C09730
// ----------------------------------------------------------------------------
int sub_C09730(int a1, int a2)
{
  return *(uint32_t *)(a1 + 4 * a2 + 92);
}

// ----------------------------------------------------------------------------
// Function: sub_C09A90  (binary VA: 0xc09a90)
// Original: sub_C09A90
// ----------------------------------------------------------------------------
int sub_C09A90(int a1, int a2, int a3)
{
  int v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  int v13;
  size_t v14;
  size_t v15;
  size_t v16;
  int v17;
  int v18;
  size_t v19;
  size_t v20;
  int v21;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_s2a;
  typedef uint32_t _g4_t_v33[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_n)) > _g4_s0 ? (0u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_na)) > _g4_s1 ? (0u + sizeof(_g4_t_na)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v25)) > _g4_s2 ? (4u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v28)) > _g4_s5 ? (20u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v29)) > _g4_s6 ? (24u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v30)) > _g4_s7 ? (24u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_s2)) > _g4_s8 ? (28u + sizeof(_g4_t_s2)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_s2a)) > _g4_s9 ? (28u + sizeof(_g4_t_s2a)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v33)) > _g4_s10 ? (32u + sizeof(_g4_t_v33)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 0u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 28u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);

  v33[6] = (uint32_t)(uintptr_t)(&a1);
  v28 = a1;
  v25 = a3;
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0(&dword_20D3C40);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  sub_6342F0(v33);
  v27 = v28 + 220;
  v26 = 0;
  v3 = *(uint32_t *)(v28 + 224);
  if ( v3 != 0 )
  {
    s2 = (void *)v33[0];
    v29 = v28 + 220;
    v4 = *(uint32_t *)(v33[0] - 12);
    do
    {
      while ( 1 )
      {
        v5 = v4;
        v6 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        n = v4;
        if ( v6 <= v4 )
          v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        v7 = memcmp(*(const void **)(v3 + 16), s2, v5);
        v4 = n;
        v8 = v6 - n;
        if ( v7 == 0 )
          v7 = v8;
        if ( v7 < 0 )
          break;
        v29 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_11;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_11:
    if ( v27 == v29 )
    {
      v26 = 0;
    }
    else
    {
      v9 = n;
      v10 = *(uint32_t *)(*(uint32_t *)(v29 + 16) - 12);
      if ( v10 <= n )
        v9 = *(uint32_t *)(*(uint32_t *)(v29 + 16) - 12);
      v11 = memcmp(s2, *(const void **)(v29 + 16), v9);
      v26 = 0;
      if ( v11 == 0 )
        v11 = n - v10;
      if ( v11 >= 0 )
        v26 = *(uint32_t *)g4_std::map_string_VIPSettingStorage_5b10c4::opIndex(v28 + 216, v33);
    }
  }
  g4_std::string::Destroy(v33);
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0(&dword_20D3C40);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v12 = 5;
  sub_6342F0(v33);
  v13 = *(uint32_t *)(v28 + 224);
  if ( v13 != 0 )
  {
    s2a = (void *)v33[0];
    v14 = *(uint32_t *)(v33[0] - 12);
    v30 = v28 + 220;
    do
    {
      while ( 1 )
      {
        v15 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
        v16 = v15;
        na = v14;
        if ( v14 <= v15 )
          v16 = v14;
        v17 = memcmp(*(const void **)(v13 + 16), s2a, v16);
        v14 = na;
        v18 = v15 - na;
        if ( v17 == 0 )
          v17 = v18;
        if ( v17 < 0 )
          break;
        v30 = v13;
        v13 = *(uint32_t *)(v13 + 8);
        if ( v13 == 0 )
          goto LABEL_28;
      }
      v13 = *(uint32_t *)(v13 + 12);
    }
    while ( v13 != 0 );
LABEL_28:
    if ( v30 == v27 )
    {
      v12 = 5;
    }
    else
    {
      v12 = 5;
      v19 = *(uint32_t *)(*(uint32_t *)(v30 + 16) - 12);
      v20 = v19;
      if ( na <= v19 )
        v20 = na;
      v21 = memcmp(s2a, *(const void **)(v30 + 16), v20);
      if ( v21 == 0 )
        v21 = na - v19;
      if ( v21 >= 0 )
        v12 = *(uint32_t *)(g4_std::map_string_VIPSettingStorage_5b10c4::opIndex(v28 + 216, v33) + 4);
    }
  }
  g4_std::string::Destroy(v33);
  return v25 * v12 + v26;
}

// ----------------------------------------------------------------------------
// Function: sub_C09DC0  (binary VA: 0xc09dc0)
// Original: sub_C09DC0
// ----------------------------------------------------------------------------
void sub_C09DC0(int a1, Json::Value::Self *a2, std::map<int,int> *a3, int a4)
{
  const Json::Value::Self *v4;
  Json::Value::Self *v5;
  uint32_t *v6;
  Json::Value::Self *v7;
  uint32_t *v8;
  Json::Value::Self *v9;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v11)) > _g4_s1 ? (20u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  if ( (uint8_t)Json::Value::isMember(a2, a4) != 0 )
  {
    v4 = (const Json::Value::Self *)Json::Value::opIndex(a2, a4);
    Json::Value::Construct((Json::Value::Self *)v14, v4);
    if ( (uint8_t)Json::Value::isObject((Json::Value::Self *)v14) != 0
      && (uint8_t)Json::Value::isMember((Json::Value::Self *)v14, "bronze") != 0
      && (uint8_t)Json::Value::isMember((Json::Value::Self *)v14, "silver") != 0
      && (uint8_t)Json::Value::isMember((Json::Value::Self *)v14, "gold") != 0 )
    {
      v11 = 1;
      v10 = (uint32_t *)g4_std::map_int_int_f837c9::opIndex(a3, &v11);
      v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v14, "bronze");
      *v10 = Json::Value::asInt(v5);
      v12 = 2;
      v6 = (uint32_t *)g4_std::map_int_int_f837c9::opIndex(a3, &v12);
      v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v14, "silver");
      *v6 = Json::Value::asInt(v7);
      v13 = 3;
      v8 = (uint32_t *)g4_std::map_int_int_f837c9::opIndex(a3, &v13);
      v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v14, "gold");
      *v8 = Json::Value::asInt(v9);
    }
    Json::Value::Destroy((Json::Value::Self *)v14);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C09F40  (binary VA: 0xc09f40)
// Original: sub_C09F40
// ----------------------------------------------------------------------------
void sub_C09F40(Json::Value::Self *a1, std::map<int,int> *a2, int a3)
{
  const Json::Value::Self *v4;
  Json::Value::Self *v5;
  uint32_t *v6;
  Json::Value::Self *v7;
  uint32_t *v8;
  Json::Value::Self *v9;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v11)) > _g4_s1 ? (20u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v4 = (const Json::Value::Self *)Json::Value::opIndex(a1, a3);
  Json::Value::Construct((Json::Value::Self *)v14, v4);
  if ( (uint8_t)Json::Value::isObject((Json::Value::Self *)v14) != 0
    && (uint8_t)Json::Value::isMember((Json::Value::Self *)v14, "bronze") != 0
    && (uint8_t)Json::Value::isMember((Json::Value::Self *)v14, "silver") != 0
    && (uint8_t)Json::Value::isMember((Json::Value::Self *)v14, "gold") != 0 )
  {
    v11 = 1;
    v10 = (uint32_t *)g4_std::map_int_int_f837c9::opIndex(a2, &v11);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v14, "bronze");
    *v10 = Json::Value::asInt(v5);
    v12 = 2;
    v6 = (uint32_t *)g4_std::map_int_int_f837c9::opIndex(a2, &v12);
    v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v14, "silver");
    *v6 = Json::Value::asInt(v7);
    v13 = 3;
    v8 = (uint32_t *)g4_std::map_int_int_f837c9::opIndex(a2, &v13);
    v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v14, "gold");
    *v8 = Json::Value::asInt(v9);
  }
  Json::Value::Destroy((Json::Value::Self *)v14);
}

// ----------------------------------------------------------------------------
// Function: sub_C0A0A0  (binary VA: 0xc0a0a0)
// Original: sub_C0A0A0
// ----------------------------------------------------------------------------
uint32_t * sub_C0A0A0(int a1)
{
  int v1;
  void **v2;
  char *v3;
  char *v4;
  void *v6;
  int v7;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B440);
  g4_std::Rb_tree_int_pair_int_const_int_S_bf339a::M_erase(
    a1 + 312,
    *(uint32_t **)(a1 + 320));
  g4_std::Rb_tree_int_pair_int_const_int_S_bf339a::M_erase(
    a1 + 288,
    *(uint32_t **)(a1 + 296));
  g4_std::Rb_tree_int_pair_int_const_int_S_bf339a::M_erase(
    a1 + 264,
    *(uint32_t **)(a1 + 272));
  g4_std::Rb_tree_int_pair_int_const_int_S_bf339a::M_erase(
    a1 + 240,
    *(uint32_t **)(a1 + 248));
  g4_std::Rb_tree_string_pair_string_const_d5a7e2::M_erase(
    a1 + 216,
    *(void **)(a1 + 224));
  if ( *(uint32_t *)(a1 + 204) != 0 )
    opDelete(*(void **)(a1 + 204));
  v1 = a1 + 204;
  do
  {
    if ( *(uint32_t *)(v1 - 12) != 0 )
      opDelete(*(void **)(v1 - 12));
    v1 -= 12;
  }
  while ( a1 + 156 != v1 );
  v7 = a1 + 156;
  v2 = (void **)(a1 + 148);
  do
  {
    v3 = (char *)*v2;
    v4 = (char *)*(v2 - 1);
    if ( *v2 != v4 )
    {
      do
      {
        v6 = v4;
        v4 += 4;
        g4_std::string::Destroy(v6);
      }
      while ( v3 != v4 );
    }
    if ( *(uint32_t *)(v7 - 12) != 0 )
      opDelete(*(void **)(v7 - 12));
    v7 -= 12;
    v2 -= 3;
  }
  while ( a1 + 108 != v7 );
  g4_std::string::Destroy(a1 + 72);
  g4_std::Rb_tree_string_pair_string_const_46467f::M_erase(
    a1 + 40,
    *(void **)(a1 + 48));
  g4_std::Rb_tree_string_pair_string_const_46467f::M_erase(
    a1 + 16,
    *(void **)(a1 + 24));
  g4_std::string::Destroy(a1 + 12);
  g4_std::string::Destroy(a1 + 8);
  return sub_6D4070((uint32_t *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C0A260  (binary VA: 0xc0a260)
// Original: sub_C0A260
// ----------------------------------------------------------------------------
void sub_C0A260(void *a1)
{
  sub_C0A0A0((int)(uintptr_t)(a1));
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C0A2A0  (binary VA: 0xc0a2a0)
// Original: sub_C0A2A0
// ----------------------------------------------------------------------------
void sub_C0A2A0(size_t a1, Json::Value::Self *a2)
{
  const void **v2;
  int v3;
  int *src;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  unsigned int v13;
  int *v14;
  int v15;
  int v16;
  char *v17;
  int v18;
  int v19;
  char *v20;
  void *v21;
  void *v22;
  void *v23;
  const Json::Value::Self *v24;
  const Json::Value::Self *v25;
  size_t v26;
  const Json::Value::Self *v27;
  const Json::Value::Self *v28;
  const Json::Value::Self *v29;
  const Json::Value::Self *v30;
  Json::Value::Self *v31;
  int v32;
  size_t v33;
  size_t j;
  size_t v35;
  uint32_t *v36;
  size_t v37;
  size_t n;
  int v39;
  uint32_t *v40;
  size_t v41;
  size_t v42;
  int v43;
  int v44;
  int v45;
  Json::Value::Self *v46;
  int v47;
  size_t v48;
  size_t v49;
  size_t v50;
  uint32_t *v51;
  size_t v52;
  size_t v53;
  int v54;
  uint32_t *v55;
  size_t v56;
  size_t v57;
  int v58;
  int v59;
  int v60;
  const Json::Value::Self *v61;
  Json::Value::Self *v62;
  Json::Value::Self *v63;
  size_t *v64;
  char *v65;
  char *v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int m;
  const Json::Value::Self *v72;
  Json::Value::Self *v73;
  Json::Value::Self *v74;
  int v75;
  int v76;
  typedef void *_g4_t_dest;
  typedef size_t _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef size_t _g4_t_v82;
  typedef size_t _g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef char *_g4_t_obj;
  typedef char _g4_t_v87;
  typedef char _g4_t_v88;
  typedef Json::Value::Self *_g4_t_v89;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_s1a;
  typedef size_t _g4_t_k;
  typedef Json::Value::Self *_g4_t_v93;
  typedef size_t _g4_t_v94;
  typedef size_t _g4_t_i;
  typedef unsigned int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef size_t _g4_t_v99;
  typedef Json::Value::Self *_g4_t_v100;
  typedef size_t _g4_t_v101;
  typedef size_t _g4_t_v102;
  typedef int _g4_t_v103;
  typedef char _g4_t_v104[4];
  typedef char _g4_t_v105[4];
  typedef char _g4_t_v106[4];
  typedef char _g4_t_v107[4];
  typedef char _g4_t_v108[4];
  typedef char _g4_t_v109[4];
  typedef char _g4_t_v110[4];
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef uint8_t _g4_t_v115[8];
  typedef uint8_t _g4_t_v116[8];
  typedef uint8_t _g4_t_v117[8];
  typedef uint8_t _g4_t_v118[8];
  typedef char _g4_t_v119[4];
  typedef int _g4_t_v120;
  typedef void *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef char _g4_t_v123[4];
  typedef int _g4_t_v124;
  typedef void *_g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef uint8_t _g4_t_v129[16];
  typedef uint8_t _g4_t_v130[16];
  typedef uint8_t _g4_t_v131[16];
  typedef uint8_t _g4_t_v132[16];
  typedef uint8_t _g4_t_v133[16];
  typedef uint8_t _g4_t_v134[44];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v78)) > _g4_s1 ? (16u + sizeof(_g4_t_v78)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v79)) > _g4_s2 ? (20u + sizeof(_g4_t_v79)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v80)) > _g4_s3 ? (20u + sizeof(_g4_t_v80)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v81)) > _g4_s4 ? (20u + sizeof(_g4_t_v81)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v82)) > _g4_s5 ? (20u + sizeof(_g4_t_v82)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v83)) > _g4_s6 ? (20u + sizeof(_g4_t_v83)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v84)) > _g4_s7 ? (20u + sizeof(_g4_t_v84)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v85)) > _g4_s8 ? (20u + sizeof(_g4_t_v85)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_obj)) > _g4_s9 ? (24u + sizeof(_g4_t_obj)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v87)) > _g4_s10 ? (28u + sizeof(_g4_t_v87)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v88)) > _g4_s11 ? (28u + sizeof(_g4_t_v88)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v89)) > _g4_s12 ? (28u + sizeof(_g4_t_v89)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_s1)) > _g4_s13 ? (32u + sizeof(_g4_t_s1)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_s1a)) > _g4_s14 ? (32u + sizeof(_g4_t_s1a)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_k)) > _g4_s15 ? (36u + sizeof(_g4_t_k)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v93)) > _g4_s16 ? (36u + sizeof(_g4_t_v93)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v94)) > _g4_s17 ? (36u + sizeof(_g4_t_v94)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_i)) > _g4_s18 ? (36u + sizeof(_g4_t_i)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v96)) > _g4_s19 ? (40u + sizeof(_g4_t_v96)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v97)) > _g4_s20 ? (40u + sizeof(_g4_t_v97)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v98)) > _g4_s21 ? (44u + sizeof(_g4_t_v98)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v99)) > _g4_s22 ? (44u + sizeof(_g4_t_v99)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v100)) > _g4_s23 ? (48u + sizeof(_g4_t_v100)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v101)) > _g4_s24 ? (60u + sizeof(_g4_t_v101)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v102)) > _g4_s25 ? (64u + sizeof(_g4_t_v102)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v103)) > _g4_s26 ? (84u + sizeof(_g4_t_v103)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v104)) > _g4_s27 ? (88u + sizeof(_g4_t_v104)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v105)) > _g4_s28 ? (92u + sizeof(_g4_t_v105)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v106)) > _g4_s29 ? (96u + sizeof(_g4_t_v106)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v107)) > _g4_s30 ? (100u + sizeof(_g4_t_v107)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v108)) > _g4_s31 ? (104u + sizeof(_g4_t_v108)) : _g4_s31,
    _g4_s33 = (108u + sizeof(_g4_t_v109)) > _g4_s32 ? (108u + sizeof(_g4_t_v109)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v110)) > _g4_s33 ? (112u + sizeof(_g4_t_v110)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v111)) > _g4_s34 ? (116u + sizeof(_g4_t_v111)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v112)) > _g4_s35 ? (120u + sizeof(_g4_t_v112)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_v113)) > _g4_s36 ? (124u + sizeof(_g4_t_v113)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v114)) > _g4_s37 ? (128u + sizeof(_g4_t_v114)) : _g4_s37,
    _g4_s39 = (132u + sizeof(_g4_t_v115)) > _g4_s38 ? (132u + sizeof(_g4_t_v115)) : _g4_s38,
    _g4_s40 = (140u + sizeof(_g4_t_v116)) > _g4_s39 ? (140u + sizeof(_g4_t_v116)) : _g4_s39,
    _g4_s41 = (148u + sizeof(_g4_t_v117)) > _g4_s40 ? (148u + sizeof(_g4_t_v117)) : _g4_s40,
    _g4_s42 = (156u + sizeof(_g4_t_v118)) > _g4_s41 ? (156u + sizeof(_g4_t_v118)) : _g4_s41,
    _g4_s43 = (164u + sizeof(_g4_t_v119)) > _g4_s42 ? (164u + sizeof(_g4_t_v119)) : _g4_s42,
    _g4_s44 = (168u + sizeof(_g4_t_v120)) > _g4_s43 ? (168u + sizeof(_g4_t_v120)) : _g4_s43,
    _g4_s45 = (172u + sizeof(_g4_t_v121)) > _g4_s44 ? (172u + sizeof(_g4_t_v121)) : _g4_s44,
    _g4_s46 = (176u + sizeof(_g4_t_v122)) > _g4_s45 ? (176u + sizeof(_g4_t_v122)) : _g4_s45,
    _g4_s47 = (180u + sizeof(_g4_t_v123)) > _g4_s46 ? (180u + sizeof(_g4_t_v123)) : _g4_s46,
    _g4_s48 = (184u + sizeof(_g4_t_v124)) > _g4_s47 ? (184u + sizeof(_g4_t_v124)) : _g4_s47,
    _g4_s49 = (188u + sizeof(_g4_t_v125)) > _g4_s48 ? (188u + sizeof(_g4_t_v125)) : _g4_s48,
    _g4_s50 = (192u + sizeof(_g4_t_v126)) > _g4_s49 ? (192u + sizeof(_g4_t_v126)) : _g4_s49,
    _g4_s51 = (196u + sizeof(_g4_t_v127)) > _g4_s50 ? (196u + sizeof(_g4_t_v127)) : _g4_s50,
    _g4_s52 = (200u + sizeof(_g4_t_v128)) > _g4_s51 ? (200u + sizeof(_g4_t_v128)) : _g4_s51,
    _g4_s53 = (208u + sizeof(_g4_t_v129)) > _g4_s52 ? (208u + sizeof(_g4_t_v129)) : _g4_s52,
    _g4_s54 = (224u + sizeof(_g4_t_v130)) > _g4_s53 ? (224u + sizeof(_g4_t_v130)) : _g4_s53,
    _g4_s55 = (240u + sizeof(_g4_t_v131)) > _g4_s54 ? (240u + sizeof(_g4_t_v131)) : _g4_s54,
    _g4_s56 = (256u + sizeof(_g4_t_v132)) > _g4_s55 ? (256u + sizeof(_g4_t_v132)) : _g4_s55,
    _g4_s57 = (272u + sizeof(_g4_t_v133)) > _g4_s56 ? (272u + sizeof(_g4_t_v133)) : _g4_s56,
    _g4_s58 = (288u + sizeof(_g4_t_v134)) > _g4_s57 ? (288u + sizeof(_g4_t_v134)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 16u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 20u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 20u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 20u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 20u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 20u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 20u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 20u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 24u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 28u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 28u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 28u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 32u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 32u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 36u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 36u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 36u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 36u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 40u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 40u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 44u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 44u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 48u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 60u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 64u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 84u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 88u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 92u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 96u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 100u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 104u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 108u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 112u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 116u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 120u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 124u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 128u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 132u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 140u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 148u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 156u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 164u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 168u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 172u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 176u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 180u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 184u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 188u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 192u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 196u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 200u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 208u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 224u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 240u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 256u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 272u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 288u);

  if ( (uint8_t)Json::Value::isMember(a2, "vip_levels_table") != 0 )
  {
    v61 = (const Json::Value::Self *)Json::Value::opIndex(a2, "vip_levels_table");
    Json::Value::Construct((Json::Value::Self *)v130, v61);
    Json::Value::begin((Json::Value::Self *)&v127);
    v97 = 0;
    for ( i = a1; ; i += 4 )
    {
      Json::Value::end((Json::Value::Self *)v115);
      if ( (uint8_t)Json::ValueIteratorBase::isEqual(
                              (Json::ValueIteratorBase::Self *)&v127,
                              (const Json::ValueIteratorBase::Self *)v115) != 0 )
        break;
      v89 = (Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)&v127);
      Json::Value::opIndex(v89, "vip_level_key");
      Json::Value::asString((Json::Value::Self *)v104);
      v62 = (Json::Value::Self *)Json::Value::opIndex(v89, "vip_level_value");
      *(uint32_t *)(i + 76) = Json::Value::asUInt(v62);
      v63 = (Json::Value::Self *)Json::Value::opIndex(v89, "vip_level_skill_points_reward");
      *(uint32_t *)(i + 92) = Json::Value::asUInt(v63);
      if ( (uint8_t)Json::Value::isMember(v89, "vip_bonus_items") != 0 )
      {
        v64 = (size_t *)(a1 + 12 * v97 + 108);
        v65 = *(char **)(a1 + 12 * v97 + 112);
        v99 = *v64;
        if ( (char *)*v64 != v65 )
        {
          v66 = (char *)*v64;
          do
          {
            dest = v66;
            v66 += 4;
            g4_std::string::Destroy(dest);
          }
          while ( v65 != v66 );
        }
        *(uint32_t *)(a1 + 12 * v97 + 112) = v99;
        Json::Value::opIndex(v89, "vip_bonus_items");
        Json::Value::begin((Json::Value::Self *)v116);
        Json::ValueIterator::Construct((Json::ValueIterator::Self *)v129, (const Json::ValueConstIterator::Self *)v116);
        while ( 1 )
        {
          Json::Value::opIndex(v89, "vip_bonus_items");
          Json::Value::end((Json::Value::Self *)v117);
          if ( (uint8_t)Json::ValueIteratorBase::isEqual(
                                  (Json::ValueIteratorBase::Self *)v129,
                                  (const Json::ValueIteratorBase::Self *)v117) != 0 )
            break;
          Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v129);
          Json::Value::asString((Json::Value::Self *)v105);
          v67 = *(uint32_t *)(a1 + 12 * v97 + 112);
          if ( v67 == *(uint32_t *)(a1 + 12 * v97 + 116) )
          {
            g4_std::vector_string_86c307::M_insert_aux(v64, v67, v105);
          }
          else
          {
            v68 = 0;
            if ( v67 != 0 )
            {
              g4_std::string::construct_copy(v67, v105);
              v68 = *(uint32_t *)(a1 + 12 * v97 + 112);
            }
            *(uint32_t *)(a1 + 12 * v97 + 112) = v68 + 4;
          }
          g4_std::string::Destroy(v105);
          Json::ValueIteratorBase::increment((Json::ValueIteratorBase::Self *)v129);
        }
      }
      ++v97;
      g4_std::string::Destroy(v104);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase::Self *)&v127);
    }
    Json::Value::Destroy((Json::Value::Self *)v130);
  }
  if ( (uint8_t)Json::Value::isMember(a2, "vip_iaps_points") != 0 )
  {
    g4_std::Rb_tree_string_pair_string_const_46467f::M_erase(
      a1 + 16,
      *(void **)(a1 + 24));
    v101 = a1 + 20;
    *(uint32_t *)(a1 + 28) = a1 + 20;
    *(uint32_t *)(a1 + 32) = a1 + 20;
    *(uint32_t *)(a1 + 24) = 0;
    *(uint32_t *)(a1 + 36) = 0;
    g4_std::Rb_tree_string_pair_string_const_46467f::M_erase(
      a1 + 40,
      *(void **)(a1 + 48));
    v102 = a1 + 44;
    *(uint32_t *)(a1 + 52) = a1 + 44;
    *(uint32_t *)(a1 + 56) = a1 + 44;
    *(uint32_t *)(a1 + 48) = 0;
    *(uint32_t *)(a1 + 60) = 0;
    v30 = (const Json::Value::Self *)Json::Value::opIndex(a2, "vip_iaps_points");
    Json::Value::Construct((Json::Value::Self *)v130, v30);
    Json::Value::begin((Json::Value::Self *)v129);
    while ( 1 )
    {
      Json::Value::end((Json::Value::Self *)v118);
      if ( (uint8_t)Json::ValueIteratorBase::isEqual(
                              (Json::ValueIteratorBase::Self *)v129,
                              (const Json::ValueIteratorBase::Self *)v118) != 0 )
      {
        Json::Value::Destroy((Json::Value::Self *)v130);
        break;
      }
      v93 = (Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v129);
      Json::Value::opIndex(v93, "vip_iap_key");
      Json::Value::asString((Json::Value::Self *)v106);
      sub_784990(&v127);
      g4_std::string::Destroy(v106);
      v31 = (Json::Value::Self *)Json::Value::opIndex(v93, "vip_iap_value");
      v32 = Json::Value::asUInt(v31);
      g4_std::string::construct_copy(v107, &v127);
      g4_std::string::construct_copy(v119, v107);
      v120 = v32;
      g4_std::string::construct_copy(&v121, v119);
      v122 = v120;
      if ( *(uint32_t *)(a1 + 24) == 0 )
      {
        v42 = a1 + 20;
        goto LABEL_64;
      }
      s1 = v121;
      v33 = *((uint32_t *)v121 - 3);
      for ( j = *(uint32_t *)(a1 + 24); ; j = v35 )
      {
        v36 = *(uint32_t **)(j + 16);
        v37 = *(v36 - 3);
        n = v37;
        v82 = j;
        if ( v33 <= v37 )
          n = v33;
        v78 = n;
        v39 = memcmp(s1, *(const void **)(j + 16), n);
        if ( v39 == 0 )
          v39 = v33 - v37;
        if ( v39 >= 0 )
          break;
        v35 = *(uint32_t *)(v82 + 8);
        v87 = 1;
        if ( v35 == 0 )
          goto LABEL_57;
LABEL_50:
        ;
      }
      v35 = *(uint32_t *)(v82 + 12);
      v87 = 0;
      if ( v35 != 0 )
        goto LABEL_50;
LABEL_57:
      v40 = v36;
      v41 = v78;
      v42 = v82;
      if ( v87 == 0 )
        goto LABEL_58;
LABEL_64:
      if ( *(uint32_t *)(a1 + 28) == v42 )
      {
        sub_C07180(0, v42, &v121);
      }
      else
      {
        v45 = sub_19048F0(v42);
        s1 = v121;
        v33 = *((uint32_t *)v121 - 3);
        v40 = *(uint32_t **)(v45 + 16);
        v37 = *(v40 - 3);
        v41 = v37;
        if ( v33 <= v37 )
          v41 = *((uint32_t *)v121 - 3);
LABEL_58:
        v43 = memcmp(v40, s1, v41);
        v44 = v37 - v33;
        if ( v43 == 0 )
          v43 = v44;
        if ( v43 < 0 )
        {
          LOBYTE(v69) = 1;
          if ( v101 != v42 )
            v69 = g4_std::string::compare_str(&v121, v42 + 16) >> 31;
          v70 = opNew(0x18u);
          if ( v70 != -16 )
          {
            g4_std::string::construct_copy(v70 + 16, &v121);
            *(uint32_t *)(v70 + 20) = v122;
          }
          sub_1904970(v69, v70, v42, v101);
          ++*(uint32_t *)(a1 + 36);
        }
      }
      g4_std::string::Destroy(&v121);
      g4_std::string::Destroy(v119);
      g4_std::string::Destroy(v107);
      if ( (uint8_t)Json::Value::isMember(v93, "vip_time_days") == 0 )
        goto LABEL_62;
      v46 = (Json::Value::Self *)Json::Value::opIndex(v93, "vip_time_days");
      v47 = Json::Value::asUInt(v46);
      g4_std::string::construct_copy(v108, &v127);
      g4_std::string::construct_copy(v123, v108);
      v124 = v47;
      g4_std::string::construct_copy(&v125, v123);
      v126 = v124;
      if ( *(uint32_t *)(a1 + 48) == 0 )
      {
        v57 = a1 + 44;
        goto LABEL_84;
      }
      s1a = v125;
      v48 = *((uint32_t *)v125 - 3);
      v49 = *(uint32_t *)(a1 + 48);
      while ( 2 )
      {
        v51 = *(uint32_t **)(v49 + 16);
        v52 = v48;
        v53 = *(v51 - 3);
        v83 = v49;
        if ( v53 <= v48 )
          v52 = *(v51 - 3);
        v94 = v52;
        v54 = memcmp(s1a, *(const void **)(v49 + 16), v52);
        if ( v54 == 0 )
          v54 = v48 - v53;
        if ( v54 < 0 )
        {
          v50 = *(uint32_t *)(v83 + 8);
          v88 = 1;
          if ( v50 == 0 )
            goto LABEL_78;
LABEL_71:
          v49 = v50;
          continue;
        }
        break;
      }
      v50 = *(uint32_t *)(v83 + 12);
      v88 = 0;
      if ( v50 != 0 )
        goto LABEL_71;
LABEL_78:
      v55 = v51;
      v56 = v94;
      v57 = v83;
      if ( v88 == 0 )
        goto LABEL_79;
LABEL_84:
      if ( *(uint32_t *)(a1 + 52) == v57 )
      {
        sub_C07180(0, v57, &v125);
      }
      else
      {
        v60 = sub_19048F0(v57);
        s1a = v125;
        v48 = *((uint32_t *)v125 - 3);
        v55 = *(uint32_t **)(v60 + 16);
        v53 = *(v55 - 3);
        v56 = v53;
        if ( v48 <= v53 )
          v56 = *((uint32_t *)v125 - 3);
LABEL_79:
        v58 = memcmp(v55, s1a, v56);
        v59 = v53 - v48;
        if ( v58 == 0 )
          v58 = v59;
        if ( v58 < 0 )
        {
          LOBYTE(v75) = 1;
          if ( v102 != v57 )
            v75 = g4_std::string::compare_str(&v125, v57 + 16) >> 31;
          v76 = opNew(0x18u);
          if ( v76 != -16 )
          {
            g4_std::string::construct_copy(v76 + 16, &v125);
            *(uint32_t *)(v76 + 20) = v126;
          }
          sub_1904970(v75, v76, v57, v102);
          ++*(uint32_t *)(a1 + 60);
        }
      }
      g4_std::string::Destroy(&v125);
      g4_std::string::Destroy(v123);
      g4_std::string::Destroy(v108);
LABEL_62:
      g4_std::string::Destroy(&v127);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase::Self *)v129);
    }
  }
  if ( (uint8_t)Json::Value::isMember(a2, "vip_mission_points") != 0 )
  {
    v29 = (const Json::Value::Self *)Json::Value::opIndex(a2, "vip_mission_points");
    Json::Value::Construct((Json::Value::Self *)v130, v29);
    *(uint32_t *)(a1 + 64) = Json::Value::asUInt((Json::Value::Self *)v130);
    Json::Value::Destroy((Json::Value::Self *)v130);
  }
  if ( (uint8_t)Json::Value::isMember(a2, "vip_bonus_points") != 0 )
  {
    v28 = (const Json::Value::Self *)Json::Value::opIndex(a2, "vip_bonus_points");
    Json::Value::Construct((Json::Value::Self *)v130, v28);
    *(uint32_t *)(a1 + 68) = Json::Value::asUInt((Json::Value::Self *)v130);
    Json::Value::Destroy((Json::Value::Self *)v130);
  }
  if ( (uint8_t)Json::Value::isMember(a2, "vip_activation_item") != 0 )
  {
    v25 = (const Json::Value::Self *)Json::Value::opIndex(a2, "vip_activation_item");
    Json::Value::Construct((Json::Value::Self *)v130, v25);
    Json::Value::asString((Json::Value::Self *)v109);
    sub_784990(v110);
    g4_std::string::assign_str(a1 + 72, v110);
    g4_std::string::Destroy(v110);
    g4_std::string::Destroy(v109);
    Json::Value::Destroy((Json::Value::Self *)v130);
  }
  for ( k = 0; k != 4; ++k )
  {
    v2 = (const void **)(a1 + 12 * k + 156);
    *(uint32_t *)(a1 + 12 * k + 160) = (uint32_t)(uintptr_t)(*v2);
    v3 = *(uint32_t *)(a1 + 12 * k + 108);
    if ( *(uint32_t *)(a1 + 12 * k + 112) != v3 )
    {
      while ( 1 )
      {
        v6 = g4_std::string::compare(v3, "Key");
        v7 = 0;
        if ( v6 != 0
          && (v8 = g4_std::string::compare(v3, "Cash"), v7 = 1, v8 != 0)
          && (v9 = g4_std::string::compare(v3, "Ammo"), v7 = 2, v9 != 0) )
        {
          if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
          {
            sub_5B54D0(&dword_20D34C0);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
            __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
          }
          v10 = nullptr;
          if ( byte_20D34C4 == 0 )
            v10 = (int *)(&dword_20D34C0);
          v11 = sub_5B8B10(v10, v3);
          src = *(int **)(a1 + 12 * k + 160);
          v7 = v11;
          if ( src == *(int **)(a1 + 12 * k + 164) )
            goto LABEL_23;
LABEL_13:
          v5 = 0;
          if ( src != nullptr )
          {
            *src = v7;
            v5 = *(uint32_t *)(a1 + 12 * k + 160);
          }
          *(uint32_t *)(a1 + 12 * k + 160) = v5 + 4;
          v3 += 4;
          if ( v3 == *(uint32_t *)(a1 + 12 * k + 112) )
            break;
        }
        else
        {
          src = *(int **)(a1 + 12 * k + 160);
          if ( src != *(int **)(a1 + 12 * k + 164) )
            goto LABEL_13;
LABEL_23:
          v12 = ((char *)src - (char *)((uint8_t *)*v2)) >> 2;
          v98 = 4;
          v96 = v12;
          if ( v12 != 0 )
          {
            v13 = 2 * v12;
            if ( v96 > v13 || v13 > 0x3FFFFFFF )
              v98 = -4;
            else
              v98 = 8 * v96;
          }
          v79 = v7;
          v100 = (Json::Value::Self *)opNew(v98);
          v14 = (int *)((char *)v100 + 4 * v96);
          if ( v14 != nullptr )
            *v14 = v79;
          v15 = 0;
          v16 = ((char *)src - (char *)((uint8_t *)*v2)) >> 2;
          if ( v16 != 0 )
          {
            v80 = 4 * v16;
            memmove(v100, *v2, 4 * v16);
            v15 = v80;
          }
          v17 = (char *)v100 + v15 + 4;
          v18 = 0;
          v19 = (*(uint32_t *)(a1 + 12 * k + 160) - (int)(uintptr_t)(src)) >> 2;
          if ( v19 != 0 )
          {
            v81 = 4 * v19;
            obj = v17;
            memmove(v17, src, 4 * v19);
            v17 = obj;
            v18 = v81;
          }
          v20 = &v17[v18];
          if ( *v2 != nullptr )
            opDelete((void *)*v2);
          *v2 = v100;
          *(uint32_t *)(a1 + 12 * k + 160) = (uint32_t)(uintptr_t)(v20);
          *(uint32_t *)(a1 + 12 * k + 164) = (uint32_t)(uintptr_t)((char *)v100 + v98);
          v3 += 4;
          if ( v3 == *(uint32_t *)(a1 + 12 * k + 112) )
            break;
        }
      }
    }
  }
  if ( (uint8_t)Json::Value::isMember(a2, "per_mission_values") != 0 )
  {
    v26 = a1 + 216;
    g4_std::Rb_tree_string_pair_string_const_d5a7e2::M_erase(
      a1 + 216,
      *(void **)(a1 + 224));
    *(uint32_t *)(a1 + 228) = a1 + 220;
    *(uint32_t *)(a1 + 224) = 0;
    *(uint32_t *)(a1 + 232) = a1 + 220;
    *(uint32_t *)(a1 + 236) = 0;
    v27 = (const Json::Value::Self *)Json::Value::opIndex(a2, "per_mission_values");
    Json::Value::Construct((Json::Value::Self *)v129, v27);
    if ( (uint8_t)Json::Value::isObject((Json::Value::Self *)v129) != 0 )
    {
      Json::Value::getMemberNames((Json::Value::Self *)&v127);
      for ( m = v127; m != v128; m += 4 )
      {
        v72 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v129, m);
        Json::Value::Construct((Json::Value::Self *)v130, v72);
        if ( (uint8_t)Json::Value::isObject((Json::Value::Self *)v130) != 0 )
        {
          if ( (uint8_t)Json::Value::isMember((Json::Value::Self *)v130, "points") != 0 )
          {
            v84 = (uint32_t *)g4_std::map_string_VIPSettingStorage_5b10c4::opIndex(v26, m);
            v73 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v130, "points");
            *v84 = Json::Value::asInt(v73);
          }
          else
          {
            *(uint32_t *)g4_std::map_string_VIPSettingStorage_5b10c4::opIndex(v26, m) = 0;
          }
          if ( (uint8_t)Json::Value::isMember((Json::Value::Self *)v130, "star_bonus") != 0 )
          {
            v85 = g4_std::map_string_VIPSettingStorage_5b10c4::opIndex(v26, m);
            v74 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v130, "star_bonus");
            *(uint32_t *)(v85 + 4) = Json::Value::asInt(v74);
          }
          else
          {
            *(uint32_t *)(g4_std::map_string_VIPSettingStorage_5b10c4::opIndex(v26, m) + 4) = 0;
          }
        }
        Json::Value::Destroy((Json::Value::Self *)v130);
      }
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v127);
    }
    Json::Value::Destroy((Json::Value::Self *)v129);
  }
  if ( (uint8_t)Json::Value::isMember(a2, "multipliers_for_vip_level") != 0 )
  {
    g4_std::Rb_tree_int_pair_int_const_int_S_bf339a::M_erase(
      a1 + 240,
      *(void **)(a1 + 248));
    *(uint32_t *)(a1 + 252) = a1 + 244;
    *(uint32_t *)(a1 + 256) = a1 + 244;
    *(uint32_t *)(a1 + 248) = 0;
    v21 = *(void **)(a1 + 272);
    *(uint32_t *)(a1 + 260) = 0;
    g4_std::Rb_tree_int_pair_int_const_int_S_bf339a::M_erase(
      a1 + 264,
      v21);
    *(uint32_t *)(a1 + 276) = a1 + 268;
    *(uint32_t *)(a1 + 280) = a1 + 268;
    *(uint32_t *)(a1 + 272) = 0;
    v22 = *(void **)(a1 + 296);
    *(uint32_t *)(a1 + 284) = 0;
    g4_std::Rb_tree_int_pair_int_const_int_S_bf339a::M_erase(
      a1 + 288,
      v22);
    *(uint32_t *)(a1 + 300) = a1 + 292;
    *(uint32_t *)(a1 + 304) = a1 + 292;
    *(uint32_t *)(a1 + 296) = 0;
    v23 = *(void **)(a1 + 320);
    *(uint32_t *)(a1 + 308) = 0;
    g4_std::Rb_tree_int_pair_int_const_int_S_bf339a::M_erase(
      a1 + 312,
      v23);
    *(uint32_t *)(a1 + 324) = a1 + 316;
    *(uint32_t *)(a1 + 320) = 0;
    *(uint32_t *)(a1 + 328) = a1 + 316;
    *(uint32_t *)(a1 + 332) = 0;
    v24 = (const Json::Value::Self *)Json::Value::opIndex(a2, "multipliers_for_vip_level");
    Json::Value::Construct((Json::Value::Self *)v130, v24);
    if ( (uint8_t)Json::Value::isObject((Json::Value::Self *)v130) != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v111), "per_mission", (int)(uintptr_t)(&v103));
      Json::Value::Construct((Json::Value::Self *)v131, (const Json::Value::Self *)v130);
      if ( (uint8_t)Json::Value::isMember((Json::Value::Self *)v131, (int)(uintptr_t)(&v111)) != 0 )
        sub_C09F40(&v111);
      Json::Value::Destroy((Json::Value::Self *)v131);
      g4_std::string::Destroy(&v111);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v112), "daily", (int)(uintptr_t)(&v103) + 1);
      Json::Value::Construct((Json::Value::Self *)v132, (const Json::Value::Self *)v130);
      if ( (uint8_t)Json::Value::isMember((Json::Value::Self *)v132, (int)(uintptr_t)(&v112)) != 0 )
        sub_C09F40(&v112);
      Json::Value::Destroy((Json::Value::Self *)v132);
      g4_std::string::Destroy(&v112);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v113), "iap", (int)(uintptr_t)(&v103) + 2);
      Json::Value::Construct((Json::Value::Self *)v133, (const Json::Value::Self *)v130);
      if ( (uint8_t)Json::Value::isMember((Json::Value::Self *)v133, (int)(uintptr_t)(&v113)) != 0 )
        sub_C09F40(&v113);
      Json::Value::Destroy((Json::Value::Self *)v133);
      g4_std::string::Destroy(&v113);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v114), "missionRespectPercent", (int)(uintptr_t)(&v103) + 3);
      Json::Value::Construct((Json::Value::Self *)v134, (const Json::Value::Self *)v130);
      if ( (uint8_t)Json::Value::isMember((Json::Value::Self *)v134, (int)(uintptr_t)(&v114)) != 0 )
        sub_C09F40(&v114);
      Json::Value::Destroy((Json::Value::Self *)v134);
      g4_std::string::Destroy(&v114);
    }
    Json::Value::Destroy((Json::Value::Self *)v130);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C0B5A0  (binary VA: 0xc0b5a0)
// Original: sub_C0B5A0
// ----------------------------------------------------------------------------
void sub_C0B5A0(size_t a1)
{
  gaia::CrmManager::Self *Instance;
  char *v2;
  char *v3;
  int v4;
  const Json::Value::Self *v5;
  int v6;
  uint32_t *v7;
  bool v8;
  char *v9;
  typedef gaia::CrmManager::Self *_g4_t_v10;
  typedef char *_g4_t_v11;
  typedef size_t _g4_t_v12;
  typedef Json::Value::Self *_g4_t_GameSpecificValues;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef uint32_t _g4_t_v19[10];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v11)) > _g4_s1 ? (0u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_GameSpecificValues)) > _g4_s3 ? (20u + sizeof(_g4_t_GameSpecificValues)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v17)) > _g4_s7 ? (48u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v18)) > _g4_s8 ? (52u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v19)) > _g4_s9 ? (64u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_GameSpecificValues &GameSpecificValues = *reinterpret_cast<_g4_t_GameSpecificValues *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);

  v19[6] = (uint32_t)(uintptr_t)(&a1);
  v12 = a1;
  Instance = (gaia::CrmManager::Self *)gaia::CrmManager::GetInstance(v10);
  GameSpecificValues = (Json::Value::Self *)gaia::CrmManager::GetGameSpecificValues(Instance);
  if ( (uint8_t)Json::Value::isNull(GameSpecificValues) == 0 )
  {
    Json::Value::getMemberNames((Json::Value::Self *)&v17);
    v2 = v18;
    v3 = (char *)v17;
    v14 = (v18 - (char *)((uint8_t *)v17)) >> 2;
    if ( v14 > 0 )
    {
      v4 = 0;
      while ( g4_std::string::compare((int)(uintptr_t)(&v3[4 * v4]), "Vip") != 0 )
      {
        if ( ++v4 == v14 )
        {
          v2 = v18;
          v3 = (char *)v17;
          goto LABEL_12;
        }
        v3 = (char *)v17;
      }
      v5 = (const Json::Value::Self *)Json::Value::opIndex(GameSpecificValues, (int)(uintptr_t)(v17) + 4 * v4);
      Json::Value::Construct((Json::Value::Self *)v19, v5);
      sub_C0A2A0(v12, (Json::Value::Self *)v19);
      if ( sub_8F0680() != 0 )
      {
        v6 = sub_8F0680();
        sub_8F5CD0(&v15, v6);
        sub_C05120(v15, 1);
        v7 = v16;
        if ( v16 != nullptr )
        {
          v8 = v16[1]-- == 1;
          if ( v8 )
          {
            G4_VCALL<void>(v7, 8);
            v8 = v7[2]-- == 1;
            if ( v8 )
              G4_VCALL<void>(v7, 12);
          }
        }
      }
      Json::Value::Destroy((Json::Value::Self *)v19);
      v2 = v18;
      v3 = (char *)v17;
    }
LABEL_12:
    if ( v2 != v3 )
    {
      v9 = v3;
      do
      {
        v11 = v9;
        v9 += 4;
        g4_std::string::Destroy(v11);
      }
      while ( v9 != v2 );
      v3 = (char *)v17;
    }
    if ( v3 != nullptr )
      opDelete(v3);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C0B740  (binary VA: 0xc0b740)
// Original: sub_C0B740
// ----------------------------------------------------------------------------
void sub_C0B740(size_t a1)
{
  char *Path;
  size_t Size;
  char * v3;
  void *v4;
  int v5;
  const Json::Value::Self *v6;
  char *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  char *v15;
  void *v16;
  void **v17;
  unsigned int v18;
  void *v19;
  void *v20;
  void **v21;
  unsigned int v22;
  void *v23;
  char *v24;
  char *v25;
  typedef char *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef int _g4_t_v30;
  typedef void *_g4_t_src;
  typedef char *_g4_t_srca;
  typedef char *_g4_t_dest;
  typedef int *_g4_t_desta;
  typedef int *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef void *_g4_t_v40;
  typedef char *_g4_t_v41;
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint32_t _g4_t_v44[13];
  typedef void *_g4_t_v45[5];
  typedef unsigned int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef void *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef char _g4_t_v55[24];
  typedef uint32_t _g4_t_v56[8];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v27)) > _g4_s1 ? (32u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v28)) > _g4_s2 ? (36u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v29)) > _g4_s3 ? (44u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v30)) > _g4_s4 ? (44u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_src)) > _g4_s5 ? (48u + sizeof(_g4_t_src)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_srca)) > _g4_s6 ? (48u + sizeof(_g4_t_srca)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_dest)) > _g4_s7 ? (52u + sizeof(_g4_t_dest)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_desta)) > _g4_s8 ? (52u + sizeof(_g4_t_desta)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v35)) > _g4_s9 ? (56u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v36)) > _g4_s10 ? (60u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v37)) > _g4_s11 ? (60u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (71u + sizeof(_g4_t_v38)) > _g4_s12 ? (71u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v39)) > _g4_s13 ? (76u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v40)) > _g4_s14 ? (80u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v41)) > _g4_s15 ? (84u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v42)) > _g4_s16 ? (92u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v43)) > _g4_s17 ? (108u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v44)) > _g4_s18 ? (124u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (176u + sizeof(_g4_t_v45)) > _g4_s19 ? (176u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (196u + sizeof(_g4_t_v46)) > _g4_s20 ? (196u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (212u + sizeof(_g4_t_v47)) > _g4_s21 ? (212u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (216u + sizeof(_g4_t_v48)) > _g4_s22 ? (216u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (224u + sizeof(_g4_t_v49)) > _g4_s23 ? (224u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (232u + sizeof(_g4_t_v50)) > _g4_s24 ? (232u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (236u + sizeof(_g4_t_v51)) > _g4_s25 ? (236u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (240u + sizeof(_g4_t_v52)) > _g4_s26 ? (240u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (244u + sizeof(_g4_t_v53)) > _g4_s27 ? (244u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (252u + sizeof(_g4_t_v54)) > _g4_s28 ? (252u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (256u + sizeof(_g4_t_v55)) > _g4_s29 ? (256u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (280u + sizeof(_g4_t_v56)) > _g4_s30 ? (280u + sizeof(_g4_t_v56)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 48u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 48u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 52u);
  _g4_t_desta &desta = *reinterpret_cast<_g4_t_desta *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 71u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 124u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 176u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 196u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 212u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 216u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 224u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 232u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 236u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 240u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 244u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 252u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 256u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 280u);

  v56[4] = (uint32_t)(uintptr_t)(&a1);
  v29 = a1;
  Json::Value::Construct(v42, 0);
  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v44, *(uint32_t *)(v29 + 8), 1);
  v44[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  Path = (char *)glf::FileStreamImpl::GetPath(v44, (char *)&v38 + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), Path, (int)(uintptr_t)(&v38));
  Size = glf::FileStreamImpl::GetSize((glf::FileStreamImpl::Self *)v44);
  src = (void *)sub_4EBC30(Size, 1);
  glf::FileStreamImpl::Read((glf::FileStreamImpl::Self *)v44, src, Size);
  glf::FileStreamImpl::Close((glf::FileStreamImpl::Self *)v44);
  Json::Reader::Construct((Json::Reader::Self *)v45);
  dest = (char *)sub_4EBC30(Size + 1, 1);
  memcpy(dest, src, Size);
  v3 = &dest[Size];
  *((char *)v3) = 0;
  Json::Reader::parse((Json::Reader::Self *)v45, dest, v3, (Json::Value::Self *)v42, true);
  Json::Value::getMemberNames((Json::Value::Self *)&v40);
  v4 = v40;
  v36 = (v41 - (char *)((uint8_t *)v40)) >> 2;
  if ( v36 > 0 )
  {
    v5 = 0;
    while ( g4_std::string::compare((int)(uintptr_t)(v4) + 4 * v5, "Vip") != 0 )
    {
      if ( ++v5 == v36 )
        goto LABEL_7;
      v4 = v40;
    }
    v6 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v42, (int)(uintptr_t)(v40) + 4 * v5);
    Json::Value::Construct((Json::Value::Self *)v43, v6);
    sub_C0A2A0(v29, (Json::Value::Self *)v43);
    Json::Value::Destroy((Json::Value::Self *)v43);
  }
LABEL_7:
  if ( dest != nullptr )
    opDeleteArray(dest);
  if ( src != nullptr )
    opDeleteArray(src);
  v7 = v41;
  v8 = (char *)v40;
  if ( v41 != v40 )
  {
    do
    {
      v26 = v8;
      v8 += 4;
      g4_std::string::Destroy(v26);
    }
    while ( v7 != v8 );
    v8 = (char *)v40;
  }
  if ( v8 != nullptr )
    opDelete(v8);
  g4_std::string::Destroy(v56);
  g4_std::string::Destroy(v55);
  v27 = v53;
  srca = v52;
  v30 = v49;
  v35 = (int *)v54;
  desta = (int *)v51;
  v28 = v50;
  v37 = (int *)(v51 + 4);
  if ( v54 > v51 + 4 )
  {
    do
    {
      v9 = *v37;
      v10 = *v37 + 500;
      do
      {
        v11 = v9 + 12;
        v9 += 20;
        g4_std::string::Destroy(v11);
      }
      while ( v9 != v10 );
      ++v37;
    }
    while ( v35 > v37 );
  }
  if ( v35 == desta )
  {
    if ( srca != (char *)v30 )
    {
      v24 = (char *)v30;
      do
      {
        v25 = v24 + 12;
        v24 += 20;
        g4_std::string::Destroy(v25);
      }
      while ( srca != v24 );
    }
  }
  else
  {
    if ( v30 != v28 )
    {
      v12 = v30;
      do
      {
        v13 = v12 + 12;
        v12 += 20;
        g4_std::string::Destroy(v13);
      }
      while ( v28 != v12 );
    }
    if ( srca != v27 )
    {
      v14 = v27;
      do
      {
        v15 = v14 + 12;
        v14 += 20;
        g4_std::string::Destroy(v15);
      }
      while ( srca != v14 );
    }
  }
  v16 = v48;
  if ( v48 != nullptr )
  {
    v17 = (void **)v51;
    v18 = v54 + 4;
    if ( v54 + 4 > v51 )
    {
      do
      {
        v19 = *v17++;
        opDelete(v19);
      }
      while ( v18 > (unsigned int)(uintptr_t)(v17) );
      v16 = v48;
    }
    opDelete(v16);
  }
  v20 = v45[0];
  if ( v45[0] != nullptr )
  {
    v21 = (void **)v46;
    v22 = v47 + 4;
    if ( v47 + 4 > v46 )
    {
      do
      {
        v23 = *v21++;
        opDelete(v23);
      }
      while ( v22 > (unsigned int)(uintptr_t)(v21) );
      v20 = v45[0];
    }
    opDelete(v20);
  }
  g4_std::string::Destroy(&v39);
  v44[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v44);
  Json::Value::Destroy((Json::Value::Self *)v42);
}

// ----------------------------------------------------------------------------
// Function: sub_C0BBB0  (binary VA: 0xc0bbb0)
// Original: sub_C0BBB0
// ----------------------------------------------------------------------------
void sub_C0BBB0(size_t a1)
{
  int v1[2];

  sub_6E45E0((uint32_t *)a1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B440);
  g4_std::string::construct_from_cstr(a1 + 8, "crmGameConfig.json", (int)(uintptr_t)(v1));
  g4_std::string::construct_from_cstr(a1 + 12, "vipStatus.save", (int)(uintptr_t)(v1) + 1);
  *(uint32_t *)(a1 + 28) = a1 + 20;
  *(uint32_t *)(a1 + 32) = a1 + 20;
  *(uint32_t *)(a1 + 52) = a1 + 44;
  *(uint32_t *)(a1 + 56) = a1 + 44;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 72) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(__m128i *)(a1 + 108) = g4_m128_from<__m128i>(0LL);
  *(__m128i *)(a1 + 124) = g4_m128_from<__m128i>(0LL);
  *(__m128i *)(a1 + 140) = g4_m128_from<__m128i>(0LL);
  *(__m128i *)(a1 + 156) = g4_m128_from<__m128i>(0LL);
  *(__m128i *)(a1 + 172) = g4_m128_from<__m128i>(0LL);
  *(__m128i *)(a1 + 188) = g4_m128_from<__m128i>(0LL);
  *(uint32_t *)(a1 + 228) = a1 + 220;
  *(uint32_t *)(a1 + 232) = a1 + 220;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 252) = a1 + 244;
  *(uint32_t *)(a1 + 256) = a1 + 244;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 204) = 0;
  *(uint32_t *)(a1 + 208) = 0;
  *(uint32_t *)(a1 + 212) = 0;
  *(uint32_t *)(a1 + 220) = 0;
  *(uint32_t *)(a1 + 224) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 260) = 0;
  *(uint32_t *)(a1 + 268) = 0;
  *(uint32_t *)(a1 + 276) = a1 + 268;
  *(uint32_t *)(a1 + 280) = a1 + 268;
  *(uint32_t *)(a1 + 272) = 0;
  *(uint32_t *)(a1 + 284) = 0;
  *(uint32_t *)(a1 + 300) = a1 + 292;
  *(uint32_t *)(a1 + 304) = a1 + 292;
  *(uint32_t *)(a1 + 292) = 0;
  *(uint32_t *)(a1 + 296) = 0;
  *(uint32_t *)(a1 + 308) = 0;
  *(uint32_t *)(a1 + 316) = 0;
  *(uint32_t *)(a1 + 320) = 0;
  *(uint32_t *)(a1 + 332) = 0;
  *(uint32_t *)(a1 + 324) = a1 + 316;
  *(uint32_t *)(a1 + 328) = a1 + 316;
  *(uint8_t *)(a1 + 336) = 0;
  *(uint32_t *)(a1 + 340) = -1;
  *(uint32_t *)(a1 + 344) = -1;
  sub_C0B740(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C0BDD0  (binary VA: 0xc0bdd0)
// Original: sub_C0BDD0
// ----------------------------------------------------------------------------
int sub_C0BDD0()
{
  int result;
  size_t v1;

  result = dword_20DE760;
  if ( dword_20DE760 == 0 )
  {
    v1 = opNew(0x15Cu);
    sub_C0BBB0(v1);
    dword_20DE760 = v1;
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_string_VIPSettingStorage_5b10c4::opIndex  (binary VA: 0xc0be20)
// Original: std::map<std::string,VIPSettingStorage::MissionInfo>::operator[]
// ----------------------------------------------------------------------------
int g4_std::map_string_VIPSettingStorage_5b10c4::opIndex(uint32_t *a1, const void **a2)
{
  int v2;
  size_t v3;
  size_t v4;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  uint32_t *v11;
  size_t v12;
  int v13;
  int v14;
  uint32_t *v15;
  size_t v16;
  size_t v17;
  int v18;
  int v19;
  int v20;
  int v22;
  int v23;
  uint32_t *v24;
  size_t v25;
  size_t v26;
  int v27;
  size_t v28;
  size_t v29;
  size_t v30;
  int v31;
  int v32;
  typedef size_t _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef const void *_g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[3];
  typedef int _g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v34)) > _g4_s1 ? (0u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v35)) > _g4_s2 ? (4u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v36)) > _g4_s3 ? (12u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v37)) > _g4_s4 ? (16u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v38)) > _g4_s5 ? (24u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v39)) > _g4_s6 ? (28u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v40)) > _g4_s7 ? (28u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v41)) > _g4_s8 ? (28u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v42)) > _g4_s9 ? (32u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v43)) > _g4_s10 ? (44u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v44)) > _g4_s11 ? (48u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v45)) > _g4_s12 ? (52u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v46)) > _g4_s13 ? (56u + sizeof(_g4_t_v46)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);

  v2 = a1[2];
  if ( v2 != 0 )
  {
    v37 = a1 + 1;
    v38 = (int)(uintptr_t)(a1 + 1);
    v39 = *a2;
    v3 = *((uint32_t *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        v4 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
        v5 = v4;
        v33 = v3;
        if ( v3 <= v4 )
          v5 = v3;
        v6 = memcmp(*(const void **)(v2 + 16), v39, v5);
        v3 = v33;
        v7 = v4 - v33;
        if ( v6 == 0 )
          v6 = v7;
        if ( v6 < 0 )
          break;
        v38 = v2;
        v2 = *(uint32_t *)(v2 + 8);
        if ( v2 == 0 )
          goto LABEL_10;
      }
      v2 = *(uint32_t *)(v2 + 12);
    }
    while ( v2 != 0 );
LABEL_10:
    v36 = v38;
    if ( v37 != (uint32_t *)v38 )
    {
      v8 = *(uint32_t *)(*(uint32_t *)(v38 + 16) - 12);
      v9 = v8;
      if ( v33 <= v8 )
        v9 = v33;
      v10 = memcmp(v39, *(const void **)(v38 + 16), v9);
      if ( v10 == 0 )
        v10 = v33 - v8;
      if ( v10 < 0 )
      {
        g4_std::string::construct_copy(&v44, a2);
        v45 = 0;
        v46 = 0;
        v11 = *(uint32_t **)(v38 + 16);
        v12 = *(v44 - 3);
        v40 = v12;
        v34 = v44;
        v35 = *(v11 - 3);
        if ( v35 <= v12 )
          v12 = *(v11 - 3);
        v13 = memcmp(v44, *(const void **)(v38 + 16), v12);
        if ( v13 == 0 )
          v13 = v40 - v35;
        if ( v13 < 0 )
        {
          if ( a1[3] == v38 )
          {
            sub_C07290(&v43, (int)(uintptr_t)(a1), v38, v38, (int)(uintptr_t)(&v44));
            v38 = v43;
            goto LABEL_31;
          }
          v14 = sub_1904940(v38);
          v15 = *(uint32_t **)(v14 + 16);
          v16 = v40;
          v17 = *(v15 - 3);
          if ( v17 <= v40 )
            v16 = *(v15 - 3);
          v18 = memcmp(v15, v34, v16);
          v19 = v17 - v40;
          if ( v18 == 0 )
            v18 = v19;
          if ( v18 < 0 )
          {
            if ( *(uint32_t *)(v14 + 12) != 0 )
            {
              v38 = opNew(0x1Cu);
              if ( v38 != -16 )
              {
                g4_std::string::construct_copy(v38 + 16, &v44);
                v20 = v46;
                *(uint32_t *)(v38 + 20) = v45;
                *(uint32_t *)(v38 + 24) = v20;
              }
              sub_1904970(1, v38, v36, v37);
              ++a1[5];
              goto LABEL_31;
            }
            sub_C07290(&v43, (int)(uintptr_t)(a1), 0, v14, (int)(uintptr_t)(&v44));
            goto LABEL_44;
          }
          goto LABEL_52;
        }
        v22 = memcmp(v11, v34, v12);
        if ( v22 == 0 )
          v22 = v35 - v40;
        if ( v22 >= 0 )
          goto LABEL_31;
        if ( a1[4] == v38 )
        {
          sub_C07290(&v43, (int)(uintptr_t)(a1), 0, v38, (int)(uintptr_t)(&v44));
          v38 = v43;
          goto LABEL_31;
        }
        v23 = sub_19048E0(v38);
        v24 = *(uint32_t **)(v23 + 16);
        v25 = v40;
        v26 = *(v24 - 3);
        if ( v26 <= v40 )
          v25 = *(v24 - 3);
        v27 = memcmp(v34, v24, v25);
        if ( v27 == 0 )
          v27 = v40 - v26;
        if ( v27 >= 0 )
        {
LABEL_52:
          sub_C073A0((int)(uintptr_t)(v42), a1, (void **)&v44);
LABEL_53:
          v38 = v42[0];
          goto LABEL_31;
        }
        if ( *(uint32_t *)(v38 + 12) != 0 )
          sub_C07290(&v43, (int)(uintptr_t)(a1), v23, v23, (int)(uintptr_t)(&v44));
        else
          sub_C07290(&v43, (int)(uintptr_t)(a1), 0, v38, (int)(uintptr_t)(&v44));
LABEL_44:
        v38 = v43;
LABEL_31:
        g4_std::string::Destroy(&v44);
      }
      return v38 + 20;
    }
  }
  g4_std::string::construct_copy(&v44, a2);
  v45 = 0;
  v46 = 0;
  if ( a1[5] != 0 )
  {
    v41 = a1[4];
    v28 = *(uint32_t *)(*(uint32_t *)(v41 + 16) - 12);
    v29 = *(v44 - 3);
    v30 = v28;
    if ( v29 <= v28 )
      v30 = *(v44 - 3);
    v31 = v28 - v29;
    v32 = memcmp(*(const void **)(v41 + 16), v44, v30);
    if ( v32 == 0 )
      v32 = v31;
    if ( v32 < 0 )
    {
      sub_C07290(&v43, (int)(uintptr_t)(a1), 0, v41, (int)(uintptr_t)(&v44));
      goto LABEL_44;
    }
  }
  sub_C073A0((int)(uintptr_t)(v42), a1, (void **)&v44);
  goto LABEL_53;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_int_int_f837c9::opIndex  (binary VA: 0xc0c240)
// Original: std::map<int,int>::operator[]
// ----------------------------------------------------------------------------
uint32_t * g4_std::map_int_int_f837c9::opIndex(std::map<int,int> *self, int *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  typedef int _g4_t_v6[3];
  typedef int _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  v2 = *((uint32_t **)self + 2);
  v3 = *a2;
  v4 = (uint32_t *)((char *)self + 4);
  if ( v2 == nullptr )
    goto LABEL_8;
  do
  {
    while ( v3 <= v2[4] )
    {
      v4 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( (uint32_t *)((char *)self + 4) == v4 || v4[4] > v3 )
  {
LABEL_8:
    v7[0] = *a2;
    v7[1] = 0;
    sub_C06EE0(v6, self, (int)(uintptr_t)(v4), v7);
    v4 = (uint32_t *)v6[0];
  }
  return v4 + 5;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_46467f::M_erase  (binary VA: 0xc0c2b0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_46467f::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_46467f::M_erase(
                                        a1,
                                        *(void **)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      g4_std::string::Destroy(v9 + 16);
                                      opDelete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  g4_std::string::Destroy(v19 + 4);
                                  opDelete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              g4_std::string::Destroy(v20 + 4);
                              opDelete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          g4_std::string::Destroy(v25 + 4);
                          opDelete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      g4_std::string::Destroy(v24 + 4);
                      opDelete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  g4_std::string::Destroy(v23 + 4);
                  opDelete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              g4_std::string::Destroy(v22 + 4);
              opDelete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          g4_std::string::Destroy(v21 + 4);
          opDelete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      g4_std::string::Destroy(a2 + 4);
      opDelete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_d5a7e2::M_erase  (binary VA: 0xc0c4f0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,VIPSettingStorage::MissionInfo>,std::_Select1st<std::pair<std::string const,VIPSettingStorage::MissionInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,VIPSettingStorage::MissionInfo>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_d5a7e2::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_d5a7e2::M_erase(
                                        a1,
                                        *(void **)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      g4_std::string::Destroy(v9 + 16);
                                      opDelete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  g4_std::string::Destroy(v19 + 4);
                                  opDelete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              g4_std::string::Destroy(v20 + 4);
                              opDelete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          g4_std::string::Destroy(v25 + 4);
                          opDelete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      g4_std::string::Destroy(v24 + 4);
                      opDelete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  g4_std::string::Destroy(v23 + 4);
                  opDelete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              g4_std::string::Destroy(v22 + 4);
              opDelete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          g4_std::string::Destroy(v21 + 4);
          opDelete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      g4_std::string::Destroy(a2 + 4);
      opDelete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}


