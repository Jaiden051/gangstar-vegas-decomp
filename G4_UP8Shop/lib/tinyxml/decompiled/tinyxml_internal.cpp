#include "Core/Utils/DecompTypes.h"
#include "tinyxml_internal.h"

// ----------------------------------------------------------------------------
// Function: AdpcmState::Construct  (binary VA: 0x1046a00)
// Original: AdpcmState::AdpcmState
// ----------------------------------------------------------------------------
void AdpcmState::Construct(AdpcmState::Self *self)
{
  *(uint16_t *)self = -1;
  *((uint8_t *)self + 2) = 0;
}

// ----------------------------------------------------------------------------
// Function: AdpcmState::Destroy  (binary VA: 0x1046a10)
// Original: AdpcmState::~AdpcmState
// ----------------------------------------------------------------------------
void AdpcmState::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1046AC0  (binary VA: 0x1046ac0)
// Original: sub_1046AC0
// ----------------------------------------------------------------------------
int sub_1046AC0(int a1)
{
  unsigned int v1;
  unsigned int v2;
  unsigned int v3;

  v1 = ((a1 & 0xAAAAAAAA) >> 1) | (2 * (a1 & 0x55555555));
  v2 = ((v1 & 0xCCCCCCCC) >> 2) | (4 * (v1 & 0x33333333));
  v3 = ((v2 & 0xF0F0F0F0) >> 4) | (16 * (v2 & 0xF0F0F0F));
  return __builtin_rotateleft32(((v3 & 0xFF00FF00) >> 8) | ((v3 & 0xFF00FF) << 8), 16);
}

// ----------------------------------------------------------------------------
// Function: sub_1046B20  (binary VA: 0x1046b20)
// Original: sub_1046B20
// ----------------------------------------------------------------------------
int sub_1046B20(uint32_t *a1, uint32_t *a2)
{
  int result;

  result = -1;
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: point_compare  (binary VA: 0x1046b60)
// Original: point_compare
// ----------------------------------------------------------------------------
int point_compare(uint16_t *a1, uint16_t *a2)
{
  int result;

  result = -1;
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1046BA0  (binary VA: 0x1046ba0)
// Original: sub_1046BA0
// ----------------------------------------------------------------------------
int sub_1046BA0(int a1, int a2, int a3, int a4, float *a5)
{
  int result;
  float *v7;
  float *v8;
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm2_4

  result = a1 >> 2;
  if ( result > 0 )
  {
    v7 = (float *)(a2 + 4 * a3);
    v8 = &v7[a4];
    do
    {
      v9 = *(v7 - 1);
      v10 = *v7 - *v8;
      v11 = v9 - *(v8 - 1);
      *v7 = *v7 + *v8;
      *(v7 - 1) = v9 + *(v8 - 1);
      v12 = *(v8 - 2);
      *v8 = (float)(*a5 * v10) - (float)(a5[1] * v11);
      *(v8 - 1) = (float)(v10 * a5[1]) + (float)(v11 * *a5);
      v13 = *(v7 - 2);
      v14 = v13 + v12;
      v15 = *(v7 - 3);
      v16 = v13 - v12;
      v17 = v15 - *(v8 - 3);
      *(v7 - 2) = v14;
      *(v7 - 3) = v15 + *(v8 - 3);
      v18 = *(v8 - 4);
      *(v8 - 2) = (float)(a5[8] * v16) - (float)(a5[9] * v17);
      *(v8 - 3) = (float)(v16 * a5[9]) + (float)(v17 * a5[8]);
      v19 = *(v7 - 4);
      v20 = v19 + v18;
      v21 = *(v7 - 5);
      v22 = v19 - v18;
      v23 = v21 - *(v8 - 5);
      *(v7 - 4) = v20;
      *(v7 - 5) = v21 + *(v8 - 5);
      *(v8 - 4) = (float)(a5[16] * v22) - (float)(a5[17] * v23);
      v24 = *(v8 - 6);
      *(v8 - 5) = (float)(v22 * a5[17]) + (float)(v23 * a5[16]);
      v25 = *(v7 - 6);
      v26 = v25 + v24;
      v27 = *(v7 - 7);
      v28 = v25 - v24;
      v29 = v27 - *(v8 - 7);
      *(v7 - 6) = v26;
      *(v7 - 7) = v27 + *(v8 - 7);
      v7 -= 8;
      *(v8 - 6) = (float)(a5[24] * v28) - (float)(a5[25] * v29);
      v30 = v28 * a5[25];
      v31 = v29 * a5[24];
      a5 += 32;
      --result;
      *(v8 - 7) = v30 + v31;
      v8 -= 8;
    }
    while ( result != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1046D50  (binary VA: 0x1046d50)
// Original: sub_1046D50
// ----------------------------------------------------------------------------
int sub_1046D50(int a1, int a2, int a3, int a4, float *a5, int a6)
{
  int result;
  float *v8;
  float *v9;
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm2_4

  result = a1 >> 2;
  if ( result > 0 )
  {
    v8 = (float *)(a2 + 4 * a3);
    v9 = &v8[a4];
    do
    {
      v10 = *(v8 - 1);
      v11 = *v8 - *v9;
      v12 = v10 - *(v9 - 1);
      *v8 = *v8 + *v9;
      *(v8 - 1) = v10 + *(v9 - 1);
      v13 = *(v9 - 2);
      *v9 = (float)(*a5 * v11) - (float)(a5[1] * v12);
      *(v9 - 1) = (float)(v11 * a5[1]) + (float)(v12 * *a5);
      v14 = *(v8 - 2);
      v15 = v14 + v13;
      v16 = *(v8 - 3);
      v17 = v14 - v13;
      v18 = v16 - *(v9 - 3);
      *(v8 - 2) = v15;
      *(v8 - 3) = v16 + *(v9 - 3);
      v19 = *(v9 - 4);
      *(v9 - 2) = (float)(a5[a6] * v17) - (float)(a5[a6 + 1] * v18);
      *(v9 - 3) = (float)(v17 * a5[a6 + 1]) + (float)(v18 * a5[a6]);
      v20 = *(v8 - 4);
      v21 = v20 + v19;
      v22 = *(v8 - 5);
      v23 = v20 - v19;
      v24 = v22 - *(v9 - 5);
      *(v8 - 4) = v21;
      *(v8 - 5) = v22 + *(v9 - 5);
      *(v9 - 4) = (float)(a5[2 * a6] * v23) - (float)(a5[2 * a6 + 1] * v24);
      v25 = *(v9 - 6);
      *(v9 - 5) = (float)(v23 * a5[2 * a6 + 1]) + (float)(v24 * a5[2 * a6]);
      v26 = *(v8 - 6);
      v27 = v26 + v25;
      v28 = *(v8 - 7);
      v29 = v26 - v25;
      v30 = v28 - *(v9 - 7);
      *(v8 - 6) = v27;
      *(v8 - 7) = v28 + *(v9 - 7);
      v8 -= 8;
      *(v9 - 6) = (float)(a5[3 * a6] * v29) - (float)(a5[3 * a6 + 1] * v30);
      v31 = v29 * a5[3 * a6 + 1];
      v32 = v30 * a5[3 * a6];
      a5 += 4 * a6;
      --result;
      *(v9 - 7) = v31 + v32;
      v9 -= 8;
    }
    while ( result != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1046F30  (binary VA: 0x1046f30)
// Original: sub_1046F30
// ----------------------------------------------------------------------------
int sub_1046F30(uint32_t *a1, int a2)
{
  size_t v2;
  int v4;
  int v5;
  int result;

  v2 = (a2 + 3) & 0xFFFFFFFC;
  a1[2] += v2;
  v4 = a1[24];
  if ( v4 != 0 )
  {
    v5 = a1[26];
    if ( (signed int)(v2 + v5) <= a1[27] )
    {
      a1[26] = v2 + v5;
      return v5 + v4;
    }
    else
    {
      result = 0;
      if ( v2 != 0 )
        return sub_4EC020(v2, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"), (int)(uintptr_t)("setup_malloc"), 639);
    }
  }
  else
  {
    result = 0;
    if ( v2 != 0 )
      return sub_4EC020(v2, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"), (int)(uintptr_t)("setup_malloc"), 643);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1046FC0  (binary VA: 0x1046fc0)
// Original: sub_1046FC0
// ----------------------------------------------------------------------------
int sub_1046FC0(int a1)
{
  int result;

  if ( (unsigned int)a1 > 0x3FFF )
  {
    if ( (unsigned int)a1 > 0xFFFFFF )
    {
      if ( (unsigned int)a1 <= 0x1FFFFFFF )
      {
        return byte_1CC1C80[a1 >> 25] + 25;
      }
      else
      {
        result = 0;
        if ( a1 >= 0 )
          return byte_1CC1C80[a1 >> 30] + 30;
      }
    }
    else if ( (unsigned int)a1 > 0x7FFFF )
    {
      return byte_1CC1C80[a1 >> 20] + 20;
    }
    else
    {
      return byte_1CC1C80[a1 >> 15] + 15;
    }
  }
  else if ( (unsigned int)a1 <= 0xF )
  {
    return byte_1CC1C80[a1];
  }
  else if ( (unsigned int)a1 > 0x1FF )
  {
    return byte_1CC1C80[a1 >> 10] + 10;
  }
  else
  {
    return byte_1CC1C80[a1 >> 5] + 5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1047070  (binary VA: 0x1047070)
// Original: sub_1047070
// ----------------------------------------------------------------------------
int sub_1047070(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  uint32_t *v8;
  float *v9;
  int v10;
  float *v11;
  float v12; // xmm0_4
  float v13; // xmm1_4
  int *v14;
  uint32_t *v15;
  int v16;
  int v17;
  int result;
  int v19;
  int v20;
  int j;
  int v22;
  int v23;
  int i;
  int v27;

  v4 = a1[252];
  v22 = v4;
  if ( v4 != 0 )
  {
    v5 = a1;
    v6 = 2 * v4;
    if ( v6 == a1[32] )
    {
      v5 = a1;
      v27 = a1[277];
    }
    else
    {
      v27 = 0;
      if ( v6 == a1[33] )
      {
        v5 = a1;
        v27 = a1[278];
      }
    }
    v7 = v5[1];
    if ( v7 <= 0 )
    {
      v5[252] = a2 - a4;
LABEL_22:
      v19 = a2;
      if ( a4 <= a2 )
        v19 = a4;
      result = v19 - a3;
      a1[358] += result;
      return result;
    }
    v8 = (uint32_t *)(v5 + 204);
    for ( i = 0; i < v7; ++i )
    {
      if ( v22 > 0 )
      {
        v9 = (float *)(v27 + 4 * v22 - 4);
        v10 = 0;
        v20 = 4 * a3;
        do
        {
          v11 = (float *)(*v8 + v20);
          v20 += 4;
          v12 = *(float *)(v8[32] + 4 * v10) * *v9--;
          v13 = *v11 * *(float *)(v27 + 4 * v10++);
          *v11 = v12 + v13;
        }
        while ( v10 != v22 );
        v7 = a1[1];
      }
      ++v8;
    }
    v23 = a1[252];
    v14 = a1;
  }
  else
  {
    v23 = 0;
    v14 = a1;
    v7 = a1[1];
  }
  v14[252] = a2 - a4;
  if ( v7 > 0 )
  {
    v15 = (uint32_t *)(v14 + 236);
    for ( j = 0; j < v7; ++j )
    {
      if ( a2 > a4 )
      {
        v16 = a4;
        v17 = 0;
        do
        {
          *(uint32_t *)(*v15 + 4 * v17++) = *(uint32_t *)(*(v15 - 32) + 4 * v16);
          v16 = v17 + a4;
        }
        while ( v17 != a2 - a4 );
        v7 = a1[1];
      }
      ++v15;
    }
  }
  result = 0;
  if ( v23 != 0 )
    goto LABEL_22;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1047250  (binary VA: 0x1047250)
// Original: sub_1047250
// ----------------------------------------------------------------------------
int sub_1047250(int result, int a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int i;
  int v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[140];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v22)) > _g4_s6 ? (36u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v23)) > _g4_s7 ? (44u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v24)) > _g4_s8 ? (52u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v25)) > _g4_s9 ? (56u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v26)) > _g4_s10 ? (60u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v27)) > _g4_s11 ? (64u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);

  v17 = result;
  if ( result > 0 )
  {
    v18 = 0;
    v16 = (char *)&unk_1CC20DC + 8 * result;
    while ( 1 )
    {
      v23 = *(uint32_t *)&v16[4 * v18];
      if ( a7 > 0 )
        break;
LABEL_24:
      ++v18;
      result = v17;
      if ( v18 == v17 )
        return result;
    }
    v19 = *(uint32_t *)(a2 + 4 * v18) + 2 * a3;
    v26 = 32;
    v21 = 4 * a6;
    v22 = 0;
    while ( 1 )
    {
      memset(v27, 0, 0x80u);
      v7 = a7 - v22;
      if ( v26 + v22 <= a7 )
        v7 = v26;
      v26 = v7;
      if ( a4 > 0 )
        break;
LABEL_18:
      if ( v26 > 0 )
      {
        for ( i = 0; i != v26; ++i )
        {
          v15 = (int)(float)(*(float *)&v27[4 * i] * 32768.0);
          if ( (unsigned int)(v15 + 0x8000) > 0xFFFF )
            LOWORD(v15) = ((v15 >> 31) & 1) + 0x7FFF;
          *(uint16_t *)(v19 + 2 * i) = v15;
        }
      }
      v22 += 32;
      v19 += 64;
      v21 += 128;
      if ( a7 <= v22 )
        goto LABEL_24;
    }
    v25 = 0;
    v20 = v7 >> 2;
    v8 = v7;
    v24 = 4 * (v7 >> 2);
    while ( 1 )
    {
      if ( (byte_1CC2100[6 * a4 + v25] & v23) == 0 || v8 <= 0 )
        goto LABEL_17;
      v9 = *(uint32_t *)(a5 + 4 * v25);
      if ( (unsigned int)v8 > 3 && v24 != 0 )
      {
        v10 = v21 + v9;
        v11 = 0;
        v12 = 0;
        do
        {
          ++v12;
          *(__m128 *)&v27[v11] = _mm_add_ps(_mm_loadh_ps((const double *)(v10 + v11 + 8)), *(__m128 *)&v27[v11]);
          v11 += 16;
        }
        while ( v20 > v12 );
        v13 = v24;
        if ( v8 == v24 )
          goto LABEL_17;
      }
      else
      {
        v13 = 0;
        v10 = v21 + v9;
      }
      do
      {
        *(float *)&v27[4 * v13] = *(float *)&v27[4 * v13] + *(float *)(v10 + 4 * v13);
        ++v13;
      }
      while ( v8 > v13 );
LABEL_17:
      if ( ++v25 == a4 )
        goto LABEL_18;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1047480  (binary VA: 0x1047480)
// Original: sub_1047480
// ----------------------------------------------------------------------------
int sub_1047480(int result, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  int v16;
  float v17; // xmm0_4
  int v18;
  int v19;
  int v20;
  int i;
  int v22;
  int j;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint16_t _g4_t_v35[70];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v26)) > _g4_s2 ? (24u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v27)) > _g4_s3 ? (28u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v28)) > _g4_s4 ? (32u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v29)) > _g4_s5 ? (36u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v30)) > _g4_s6 ? (40u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v31)) > _g4_s7 ? (44u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v32)) > _g4_s8 ? (48u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v33)) > _g4_s9 ? (56u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v34)) > _g4_s10 ? (60u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v35)) > _g4_s11 ? (64u + sizeof(_g4_t_v35)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);

  v24 = result;
  v25 = 0;
  if ( result > 0 )
  {
    while ( a6 <= 0 )
    {
LABEL_27:
      ++v25;
      result = v24;
      if ( v25 == v24 )
        return result;
    }
    v32 = 0;
    v31 = 16;
    v33 = 4 * a5;
    v6 = 0;
    while ( 1 )
    {
      memset(v35, 0, 0x80u);
      v26 = 2 * v6;
      v7 = a6 - v32;
      if ( v31 + v32 <= a6 )
        v7 = v31;
      v31 = v7;
      if ( a3 > 0 )
        break;
LABEL_21:
      if ( 2 * v31 > 0 )
      {
        v18 = 0;
        do
        {
          v19 = (int)(float)(*(float *)&v35[2 * v18] * 32768.0);
          if ( (unsigned int)(v19 + 0x8000) > 0xFFFF )
            LOWORD(v19) = ((v19 >> 31) & 1) + 0x7FFF;
          *(uint16_t *)(a2 + 2 * v26 + 2 * v18++) = v19;
        }
        while ( v18 != 2 * v31 );
      }
      v32 += 16;
      v33 += 64;
      v6 = v32;
      if ( a6 <= v32 )
        goto LABEL_27;
    }
    v34 = 0;
    v28 = v7 >> 2;
    v8 = v7;
    v30 = 4 * (v7 >> 2);
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = byte_1CC2100[6 * a3 + v34] & 6;
        if ( v9 != 6 )
        {
          if ( v9 == 2 )
          {
            if ( v8 > 0 )
            {
              v20 = *(uint32_t *)(a4 + 4 * v34) + v33;
              for ( i = 0; i != v8; ++i )
                *(float *)&v35[4 * i] = *(float *)(v20 + 4 * i) + *(float *)&v35[4 * i];
            }
          }
          else if ( v9 == 4 && v8 > 0 )
          {
            v22 = *(uint32_t *)(a4 + 4 * v34) + v33;
            for ( j = 0; j != v8; ++j )
              *(float *)&v35[4 * j + 2] = *(float *)(v22 + 4 * j) + *(float *)&v35[4 * j + 2];
          }
          goto LABEL_10;
        }
        if ( v8 > 0 )
          break;
LABEL_10:
        if ( ++v34 == a3 )
          goto LABEL_21;
      }
      v29 = *(uint32_t *)(a4 + 4 * v34);
      if ( v30 != 0 && (unsigned int)v8 > 3 )
      {
        v10 = *(uint32_t *)(a4 + 4 * v34) + v33;
        v11 = 0;
        v12 = 0;
        do
        {
          v13 = *(__m128 *)&v35[v12 + 8];
          v14 = _mm_add_ps(
                  _mm_shuffle_ps(*(__m128 *)&v35[v12], v13, 136),
                  _mm_loadh_ps((const double *)(v10 + v12 + 8)));
          ++v11;
          v15 = _mm_add_ps(
                  _mm_shuffle_ps(*(__m128 *)&v35[v12], v13, 221),
                  _mm_loadh_ps((const double *)(v10 + v12 + 8)));
          *(__m128 *)&v35[v12] = _mm_unpacklo_ps(v14, v15);
          *(__m128 *)&v35[v12 + 8] = _mm_unpackhi_ps(v14, v15);
          v12 += 16;
        }
        while ( v28 > v11 );
        v27 = v30;
        if ( v8 != v30 )
          goto LABEL_18;
        goto LABEL_10;
      }
      v27 = 0;
      v10 = v29 + v33;
LABEL_18:
      v16 = v27;
      do
      {
        v17 = *(float *)(v10 + 4 * v16);
        v10 = v33 + v29;
        *(float *)&v35[4 * v16] = v17 + *(float *)&v35[4 * v16];
        *(float *)&v35[4 * v16 + 2] = *(float *)&v35[4 * v16 + 2] + *(float *)(v33 + v29 + 4 * v16);
        ++v16;
      }
      while ( v8 > v16 );
      if ( ++v34 == a3 )
        goto LABEL_21;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1047790  (binary VA: 0x1047790)
// Original: sub_1047790
// ----------------------------------------------------------------------------
int sub_1047790(int a1)
{
  uint8_t *v1;
  int result;

  v1 = *(uint8_t **)(a1 + 32);
  if ( v1 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v1) < *(uint32_t *)(a1 + 40) )
    {
      result = *v1;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v1 + 1);
      return result;
    }
    goto LABEL_3;
  }
  result = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
  if ( result == -1 )
  {
LABEL_3:
    *(uint32_t *)(a1 + 112) = 1;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1047800  (binary VA: 0x1047800)
// Original: sub_1047800
// ----------------------------------------------------------------------------
int sub_1047800(int *a1)
{
  int v2;
  int v3;
  int v4;
  int j;
  int v6;
  int v7;
  int v8;
  int v9;
  int k;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int *v24;
  int m;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int result;
  int v43;
  int v44;
  int v45;
  int v46;
  int i;

  v2 = a1[24];
  if ( a1[70] > 0 )
  {
    v45 = 0;
    for ( i = 0; a1[70] > i; ++i )
    {
      v3 = a1[103] + v45;
      v4 = *(uint32_t *)(v3 + 16);
      if ( v4 != 0 )
      {
        v43 = *(uint32_t *)(a1[35] + 2096 * *(uint8_t *)(v3 + 13) + 4);
        if ( v43 > 0 )
        {
          for ( j = 0; j < v43; ++j )
          {
            v6 = *(uint32_t *)(v4 + 4 * j);
            if ( v2 == 0 || v2 > v6 || v6 >= v2 + a1[25] )
            {
              sub_4EC120(*(uint32_t *)(v4 + 4 * j));
              v2 = a1[24];
              v4 = *(uint32_t *)(v3 + 16);
              v43 = *(uint32_t *)(a1[35] + 2096 * *(uint8_t *)(v3 + 13) + 4);
            }
          }
        }
        if ( v2 != 0 && v2 <= v4 && v4 < v2 + a1[25] )
        {
          v7 = *(uint32_t *)(v3 + 20);
LABEL_16:
          if ( v7 >= v2 && v7 < v2 + a1[25] )
            goto LABEL_19;
          goto LABEL_18;
        }
        sub_4EC120(v4);
        v2 = a1[24];
      }
      v7 = *(uint32_t *)(v3 + 20);
      if ( v2 != 0 )
        goto LABEL_16;
LABEL_18:
      sub_4EC120(v7);
      v2 = a1[24];
LABEL_19:
      v45 += 24;
    }
  }
  v8 = a1[35];
  if ( v8 == 0 )
  {
LABEL_52:
    v18 = a1[69];
    if ( v2 == 0 )
      goto LABEL_54;
    goto LABEL_53;
  }
  if ( a1[34] > 0 )
  {
    v9 = 0;
    for ( k = a1[35]; ; k = a1[35] )
    {
      v16 = (int *)(k + 2096 * v9);
      v17 = v16[2];
      if ( v2 != 0 && v2 <= v17 && v17 < v2 + a1[25] )
      {
        v11 = v16[7];
      }
      else
      {
        sub_4EC120(v16[2]);
        v2 = a1[24];
        v11 = v16[7];
        if ( v2 == 0 )
          goto LABEL_26;
      }
      if ( v11 < v2 || v11 >= v2 + a1[25] )
      {
LABEL_26:
        sub_4EC120(v11);
        v2 = a1[24];
        v12 = v16[8];
        if ( v2 == 0 )
          goto LABEL_29;
        goto LABEL_27;
      }
      v12 = v16[8];
LABEL_27:
      if ( v12 >= v2 && v12 < v2 + a1[25] )
      {
        v13 = v16[521];
        goto LABEL_30;
      }
LABEL_29:
      sub_4EC120(v12);
      v2 = a1[24];
      v13 = v16[521];
      if ( v2 == 0 )
        goto LABEL_32;
LABEL_30:
      if ( v13 < v2 || v13 >= v2 + a1[25] )
      {
LABEL_32:
        sub_4EC120(v13);
        v2 = a1[24];
      }
      v14 = v16[522];
      v15 = v14 - 4;
      if ( v14 == 0 )
        v15 = 0;
      if ( v2 == 0 || v2 > v15 || v15 >= v2 + a1[25] )
      {
        sub_4EC120(v15);
        v2 = a1[24];
      }
      if ( a1[34] <= ++v9 )
      {
        v8 = a1[35];
        break;
      }
    }
  }
  if ( v2 == 0 || v2 > v8 || v8 >= v2 + a1[25] )
  {
    sub_4EC120(v8);
    v2 = a1[24];
    goto LABEL_52;
  }
  v18 = a1[69];
LABEL_53:
  if ( v18 >= v2 && v18 < v2 + a1[25] )
  {
    v19 = a1[103];
    goto LABEL_55;
  }
LABEL_54:
  sub_4EC120(v18);
  v2 = a1[24];
  v19 = a1[103];
  if ( v2 == 0 )
  {
LABEL_56:
    sub_4EC120(v19);
    v2 = a1[24];
    goto LABEL_57;
  }
LABEL_55:
  if ( v19 < v2 || v19 >= v2 + a1[25] )
    goto LABEL_56;
LABEL_57:
  v20 = a1[105];
  v44 = a1[104];
  if ( v44 > 0 )
  {
    v21 = 0;
    v22 = 0;
    v46 = a1[105];
    do
    {
      v23 = *(uint32_t *)(v46 + v21 + 4);
      if ( v2 == 0 || v2 > v23 || v23 >= v2 + a1[25] )
      {
        sub_4EC120(*(uint32_t *)(v46 + v21 + 4));
        v46 = a1[105];
        v2 = a1[24];
        v44 = a1[104];
      }
      ++v22;
      v21 += 40;
    }
    while ( v22 < v44 );
    v20 = v46;
  }
  if ( v2 == 0 || v2 > v20 || v20 >= v2 + a1[25] )
  {
    sub_4EC120(v20);
    v2 = a1[24];
  }
  if ( a1[1] > 0 )
  {
    v24 = a1;
    for ( m = 0; a1[1] > m; ++m )
    {
      v28 = v24[204];
      if ( v2 != 0 && v2 <= v28 && v28 < v2 + a1[25] )
      {
        v26 = v24[236];
      }
      else
      {
        sub_4EC120(v24[204]);
        v2 = a1[24];
        v26 = v24[236];
        if ( v2 == 0 )
          goto LABEL_73;
      }
      if ( v26 >= v2 && v26 < v2 + a1[25] )
      {
        v27 = v24[253];
LABEL_74:
        if ( v27 >= v2 && v27 < v2 + a1[25] )
          goto LABEL_77;
        goto LABEL_76;
      }
LABEL_73:
      sub_4EC120(v26);
      v2 = a1[24];
      v27 = v24[253];
      if ( v2 != 0 )
        goto LABEL_74;
LABEL_76:
      sub_4EC120(v27);
      v2 = a1[24];
LABEL_77:
      ++v24;
    }
  }
  v29 = a1[271];
  if ( v2 != 0 && v29 >= v2 && v2 + a1[25] > v29 )
  {
    v30 = a1[273];
  }
  else
  {
    sub_4EC120(a1[271]);
    v2 = a1[24];
    v30 = a1[273];
    if ( v2 == 0 )
      goto LABEL_87;
  }
  if ( v30 >= v2 && v2 + a1[25] > v30 )
  {
    v31 = a1[275];
    goto LABEL_88;
  }
LABEL_87:
  sub_4EC120(v30);
  v2 = a1[24];
  v31 = a1[275];
  if ( v2 == 0 )
    goto LABEL_89;
LABEL_88:
  if ( v31 < v2 || a1[25] + v2 <= v31 )
  {
LABEL_89:
    sub_4EC120(v31);
    v2 = a1[24];
    v32 = a1[277];
    if ( v2 == 0 )
      goto LABEL_91;
    goto LABEL_90;
  }
  v32 = a1[277];
LABEL_90:
  v33 = v2;
  if ( v32 >= v2 && v32 < v2 + a1[25] )
  {
    v34 = a1[279];
    goto LABEL_92;
  }
LABEL_91:
  sub_4EC120(v32);
  v2 = a1[24];
  v34 = a1[279];
  v33 = v2;
  if ( v2 == 0 )
  {
LABEL_93:
    sub_4EC120(v34);
    v2 = a1[24];
    goto LABEL_94;
  }
LABEL_92:
  if ( v34 < v33 || v34 >= a1[25] + v33 )
    goto LABEL_93;
LABEL_94:
  v35 = a1[272];
  if ( v2 != 0 && v2 <= v35 && v35 < v2 + a1[25] )
  {
    v36 = a1[274];
    v37 = v2;
  }
  else
  {
    sub_4EC120(a1[272]);
    v2 = a1[24];
    v36 = a1[274];
    if ( v2 == 0 )
      goto LABEL_99;
    v37 = a1[24];
  }
  if ( v36 >= v2 && v36 < a1[25] + v2 )
  {
    v38 = a1[276];
    v39 = v37;
    goto LABEL_101;
  }
LABEL_99:
  sub_4EC120(v36);
  v37 = a1[24];
  v38 = a1[276];
  if ( v37 != 0 )
  {
    v39 = a1[24];
LABEL_101:
    if ( v38 >= v37 && v38 < a1[25] + v37 )
    {
      v40 = a1[278];
      v41 = v39;
      goto LABEL_104;
    }
  }
  sub_4EC120(v38);
  v39 = a1[24];
  v40 = a1[278];
  if ( v39 != 0 )
  {
    v41 = a1[24];
LABEL_104:
    if ( v40 >= v39 && v40 < a1[25] + v39 )
    {
      result = a1[280];
      goto LABEL_106;
    }
  }
  sub_4EC120(v40);
  v41 = a1[24];
  result = a1[280];
  if ( v41 != 0 )
  {
LABEL_106:
    if ( result >= v41 && result < a1[25] + v41 )
      goto LABEL_108;
  }
  result = sub_4EC120(result);
LABEL_108:
  if ( a1[7] != 0 )
    return fclose();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1047E00  (binary VA: 0x1047e00)
// Original: sub_1047E00
// ----------------------------------------------------------------------------
int sub_1047E00(int a1)
{
  uint8_t *v2;
  uint8_t v3;
  int v4;
  int v5;
  int v6;
  bool v8;
  bool v9;
  uint8_t v10;
  int v11;
  int v12;
  int v13;
  uint8_t v14;
  int v15;
  int v16;
  int v17;

  v2 = *(uint8_t **)(a1 + 32);
  if ( v2 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v2) >= *(uint32_t *)(a1 + 40) )
    {
      v4 = 0;
      v8 = *(uint32_t *)(a1 + 40) < (unsigned int)(uintptr_t)(v2);
      v9 = *(uint32_t *)(a1 + 40) == (uint32_t)(uintptr_t)(v2);
      *(uint32_t *)(a1 + 112) = 1;
      if ( v8 || v9 )
        goto LABEL_6;
LABEL_13:
      v10 = *v2++;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
      v11 = v10 << 8;
      goto LABEL_14;
    }
    v3 = *v2++;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
    v4 = v3;
  }
  else
  {
    v17 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v4 = (uint8_t)v17;
    if ( v17 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v4 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
  }
  if ( v2 != nullptr )
  {
    if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
    {
LABEL_6:
      *(uint32_t *)(a1 + 112) = 1;
      goto LABEL_7;
    }
    goto LABEL_13;
  }
  v16 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
  v11 = (uint8_t)v16 << 8;
  if ( v16 == -1 )
  {
    *(uint32_t *)(a1 + 112) = 1;
    v11 = 0;
  }
  v2 = *(uint8_t **)(a1 + 32);
LABEL_14:
  v4 += v11;
  if ( v2 == nullptr )
  {
    v12 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v13 = (uint8_t)v12 << 16;
    if ( v12 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v13 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_19;
  }
LABEL_7:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_9;
  }
  v14 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v13 = v14 << 16;
LABEL_19:
  v4 += v13;
  if ( v2 == nullptr )
  {
    v15 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v15 << 24;
    if ( v15 != -1 )
      return v4 + v6;
LABEL_21:
    *(uint32_t *)(a1 + 112) = 1;
    v6 = 0;
    return v4 + v6;
  }
LABEL_9:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
    goto LABEL_21;
  v5 = *v2;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2 + 1);
  v6 = v5 << 24;
  return v4 + v6;
}

// ----------------------------------------------------------------------------
// Function: sub_1047F90  (binary VA: 0x1047f90)
// Original: sub_1047F90
// ----------------------------------------------------------------------------
int sub_1047F90(int a1)
{
  uint8_t *v2;
  int v3;
  char v5;
  int v6;
  int v7;
  unsigned int v8;
  uint8_t v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint8_t v21;
  int v22;
  int v23;
  uint8_t v24;
  int v25;
  int v26;
  uint8_t v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint8_t v35;
  int v36;
  uint8_t v37;
  int v38;
  uint8_t v39;
  int v40;
  int v41;
  int v42;
  uint8_t v43;
  int v44;
  uint8_t v45;
  int v46;
  int v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  int v52;
  __m128i *v53;
  unsigned int v54;
  __m128i v55;
  __m128i v56;
  __m128i v57;
  __m128i v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  unsigned int v87;
  int v88;
  unsigned int v89;
  int v90;
  int v91;
  int v92;
  int v93;

  v2 = *(uint8_t **)(a1 + 32);
  if ( v2 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v2) >= *(uint32_t *)(a1 + 40) )
    {
      *(uint32_t *)(a1 + 112) = 1;
      goto LABEL_7;
    }
    LOBYTE(v3) = *v2;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2 + 1);
  }
  else
  {
    v3 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    if ( v3 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      goto LABEL_183;
    }
  }
  if ( (uint8_t)v3 != 0 )
  {
    *(uint32_t *)(a1 + 116) = 31;
    return 0;
  }
LABEL_183:
  v2 = *(uint8_t **)(a1 + 32);
  if ( v2 == nullptr )
  {
    v62 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v5 = v62;
    if ( v62 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v5 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_9;
  }
LABEL_7:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    *(uint8_t *)(a1 + 1391) = 0;
    goto LABEL_11;
  }
  v5 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
LABEL_9:
  *(uint8_t *)(a1 + 1391) = v5;
  if ( v2 != nullptr )
  {
    if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
    {
LABEL_11:
      *(uint32_t *)(a1 + 112) = 1;
      v84 = 0;
      goto LABEL_12;
    }
    v9 = *v2++;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
    v84 = v9;
  }
  else
  {
    v63 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v84 = (uint8_t)v63;
    if ( v63 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v84 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
  }
  if ( v2 == nullptr )
  {
    v10 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v88 = (uint8_t)v10 << 8;
    if ( v10 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v88 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_155;
  }
LABEL_12:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    v88 = 0;
    goto LABEL_14;
  }
  v45 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v88 = v45 << 8;
LABEL_155:
  if ( v2 == nullptr )
  {
    v46 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v90 = (uint8_t)v46 << 16;
    if ( v46 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v90 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_150;
  }
LABEL_14:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    v90 = 0;
    goto LABEL_16;
  }
  v43 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v90 = v43 << 16;
LABEL_150:
  if ( v2 == nullptr )
  {
    v44 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v83 = v44 << 24;
    if ( v44 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v83 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_145;
  }
LABEL_16:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    v83 = 0;
    goto LABEL_18;
  }
  v41 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v83 = v41 << 24;
LABEL_145:
  if ( v2 == nullptr )
  {
    v42 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v82 = (uint8_t)v42;
    if ( v42 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v82 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_140;
  }
LABEL_18:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    v82 = 0;
    goto LABEL_20;
  }
  v39 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v82 = v39;
LABEL_140:
  if ( v2 == nullptr )
  {
    v40 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = (uint8_t)v40 << 8;
    if ( v40 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v6 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_135;
  }
LABEL_20:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    v6 = 0;
    goto LABEL_22;
  }
  v37 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v6 = v37 << 8;
LABEL_135:
  if ( v2 == nullptr )
  {
    v79 = v6;
    v38 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v79;
    v92 = (uint8_t)v38 << 16;
    if ( v38 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v92 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_130;
  }
LABEL_22:
  if ( (unsigned int)(uintptr_t)(v2) >= *(uint32_t *)(a1 + 40) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    v92 = 0;
    goto LABEL_24;
  }
  v35 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v92 = v35 << 16;
LABEL_130:
  if ( v2 == nullptr )
  {
    v78 = v6;
    v36 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v78;
    v81 = v36 << 24;
    if ( v36 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v81 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_125;
  }
LABEL_24:
  if ( (unsigned int)(uintptr_t)(v2) >= *(uint32_t *)(a1 + 40) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    v81 = 0;
    goto LABEL_26;
  }
  v33 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v81 = v33 << 24;
LABEL_125:
  if ( v2 == nullptr )
  {
    v77 = v6;
    v34 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v77;
    if ( v34 == -1 )
      *(uint32_t *)(a1 + 112) = 1;
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_120;
  }
LABEL_26:
  if ( (unsigned int)(uintptr_t)(v2) >= *(uint32_t *)(a1 + 40) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_28;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(++v2);
LABEL_120:
  if ( v2 == nullptr )
  {
    v76 = v6;
    v32 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v76;
    if ( v32 == -1 )
      *(uint32_t *)(a1 + 112) = 1;
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_115;
  }
LABEL_28:
  if ( (unsigned int)(uintptr_t)(v2) >= *(uint32_t *)(a1 + 40) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_30;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(++v2);
LABEL_115:
  if ( v2 == nullptr )
  {
    v75 = v6;
    v31 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v75;
    if ( v31 == -1 )
      *(uint32_t *)(a1 + 112) = 1;
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_110;
  }
LABEL_30:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_32;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(++v2);
LABEL_110:
  if ( v2 == nullptr )
  {
    v74 = v6;
    v30 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v74;
    if ( v30 == -1 )
      *(uint32_t *)(a1 + 112) = 1;
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_105;
  }
LABEL_32:
  if ( (unsigned int)(uintptr_t)(v2) >= *(uint32_t *)(a1 + 40) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_34;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(++v2);
LABEL_105:
  if ( v2 == nullptr )
  {
    v73 = v6;
    v29 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v73;
    v7 = (uint8_t)v29;
    if ( v29 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v7 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_100;
  }
LABEL_34:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    v7 = 0;
    goto LABEL_36;
  }
  v27 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v7 = v27;
LABEL_100:
  if ( v2 == nullptr )
  {
    v72 = v6;
    v28 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v72;
    v25 = (uint8_t)v28 << 8;
    if ( v28 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v25 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_95;
  }
LABEL_36:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_38;
  }
  v24 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v25 = v24 << 8;
LABEL_95:
  v7 += v25;
  if ( v2 == nullptr )
  {
    v71 = v6;
    v26 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v71;
    v22 = (uint8_t)v26 << 16;
    if ( v26 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v22 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_90;
  }
LABEL_38:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_40;
  }
  v21 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v22 = v21 << 16;
LABEL_90:
  v7 += v22;
  if ( v2 == nullptr )
  {
    v70 = v6;
    v23 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v70;
    v19 = v23 << 24;
    if ( v23 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v19 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_85;
  }
LABEL_40:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    *(uint32_t *)(a1 + 1128) = v7;
    goto LABEL_42;
  }
  v18 = *v2++;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v19 = v18 << 24;
LABEL_85:
  *(uint32_t *)(a1 + 1128) = v19 + v7;
  if ( v2 == nullptr )
  {
    v69 = v6;
    v20 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v69;
    if ( v20 == -1 )
      *(uint32_t *)(a1 + 112) = 1;
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_80;
  }
LABEL_42:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_44;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(++v2);
LABEL_80:
  if ( v2 == nullptr )
  {
    v68 = v6;
    v17 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v68;
    if ( v17 == -1 )
      *(uint32_t *)(a1 + 112) = 1;
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_75;
  }
LABEL_44:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_46;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(++v2);
LABEL_75:
  if ( v2 == nullptr )
  {
    v67 = v6;
    v16 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v67;
    if ( v16 == -1 )
      *(uint32_t *)(a1 + 112) = 1;
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_70;
  }
LABEL_46:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_48;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(++v2);
LABEL_70:
  if ( v2 == nullptr )
  {
    v66 = v6;
    v15 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v6 = v66;
    if ( v15 == -1 )
      *(uint32_t *)(a1 + 112) = 1;
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_65;
  }
LABEL_48:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_50;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(++v2);
LABEL_65:
  if ( v2 == nullptr )
  {
    v65 = v6;
    v14 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v11 = (uint8_t)v14;
    v8 = (uint8_t)v14;
    v6 = v65;
    if ( v14 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v8 = 0;
      v11 = 0;
    }
    v2 = *(uint8_t **)(a1 + 32);
    goto LABEL_61;
  }
LABEL_50:
  if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v2) )
  {
    *(uint32_t *)(a1 + 112) = 1;
    v86 = a1 + 1136;
    *(uint32_t *)(a1 + 1132) = 0;
    v8 = 0;
    goto LABEL_52;
  }
  LOBYTE(v11) = *v2++;
  v11 = (uint8_t)v11;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  v8 = (uint8_t)v11;
LABEL_61:
  *(uint32_t *)(a1 + 1132) = v11;
  v86 = a1 + 1136;
  if ( v2 == nullptr )
  {
    v64 = v6;
    v12 = fread((void *)v86, v8, 1u, *(vox::StreamCursorInterface::Self **)(a1 + 20));
    v13 = v64;
    if ( v12 != 1 )
      goto LABEL_53;
    goto LABEL_160;
  }
LABEL_52:
  if ( *(uint32_t *)(a1 + 40) < (unsigned int)(uintptr_t)(&v2[v8]) )
  {
LABEL_53:
    *(uint32_t *)(a1 + 112) = 1;
    *(uint32_t *)(a1 + 116) = 10;
    return 0;
  }
  v80 = v6;
  memcpy((void *)v86, v2, v8);
  *(uint32_t *)(a1 + 32) += v8;
  v13 = v80;
LABEL_160:
  v47 = v83 + v90 + v84 + v88;
  v91 = v47;
  *(uint32_t *)(a1 + 1420) = -2;
  if ( v92 + v82 + v13 + v81 != -1 || v47 != -1 )
  {
    v61 = *(uint32_t *)(a1 + 1132) - 1;
    if ( v61 >= 0 )
    {
      while ( *(uint8_t *)(a1 + v61 + 1136) == 0xFF )
      {
        if ( --v61 == -1 )
          goto LABEL_162;
      }
      *(uint32_t *)(a1 + 1420) = v61;
      *(uint32_t *)(a1 + 1424) = v91;
    }
  }
LABEL_162:
  if ( *(uint8_t *)(a1 + 1393) != 0 )
  {
    v48 = *(uint32_t *)(a1 + 1132);
    v93 = v48;
    if ( v48 <= 0 )
    {
      v50 = 0;
    }
    else
    {
      v49 = -v86 & 0xF;
      if ( v49 > v48 )
        v49 = *(uint32_t *)(a1 + 1132);
      v50 = 0;
      v51 = 0;
      if ( v49 == 0 )
        goto LABEL_169;
      do
      {
        v52 = *(uint8_t *)(a1 + v51++ + 1136);
        v50 += v52;
      }
      while ( v51 < v49 );
      if ( v93 != v49 )
      {
LABEL_169:
        v87 = v93 - v49;
        v89 = (v93 - v49) >> 4;
        v85 = 16 * v89;
        if ( 16 * v89 == 0 )
          goto LABEL_193;
        v53 = (__m128i *)(a1 + v49 + 1136);
        v54 = 0;
g4_m128_raw(v55) = 0;
        do
        {
          ++v54;
          v56 = _mm_unpackhi_epi8(*v53, g4_m128_from<__m128i>(0LL));
          v57 = _mm_unpacklo_epi8(*v53++, g4_m128_from<__m128i>(0LL));
          v55 = _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(v55, _mm_unpacklo_epi16(v57, g4_m128_from<__m128i>(0LL))),
                      _mm_unpackhi_epi16(v57, g4_m128_from<__m128i>(0LL))),
                    _mm_unpacklo_epi16(v56, g4_m128_from<__m128i>(0LL))),
                  _mm_unpackhi_epi16(v56, g4_m128_from<__m128i>(0LL)));
        }
        while ( v89 > v54 );
        v51 += v85;
        v58 = _mm_add_epi32(v55, _mm_srli_si128(v55, 8));
        v50 += _mm_cvtsi128_si32(_mm_add_epi32(v58, _mm_srli_si128(v58, 4)));
        if ( v87 != v85 )
        {
LABEL_193:
          do
          {
            v59 = *(uint8_t *)(a1 + v51++ + 1136);
            v50 += v59;
          }
          while ( v93 > (int)v51 );
        }
      }
    }
    v60 = *(uint32_t *)(a1 + 52);
    *(uint32_t *)(a1 + 56) = v60;
    *(uint32_t *)(a1 + 64) = v60;
    *(uint32_t *)(a1 + 68) = 0;
    *(uint32_t *)(a1 + 60) = v60 + v50 + v93 + 27;
    *(uint32_t *)(a1 + 72) = v91;
  }
  *(uint32_t *)(a1 + 1396) = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1048AA0  (binary VA: 0x1048aa0)
// Original: sub_1048AA0
// ----------------------------------------------------------------------------
int sub_1048AA0(int a1)
{
  uint8_t v2;
  int v3;
  uint8_t *v4;
  uint8_t v6;
  uint8_t *v7;
  int v8;
  int v9;

  v2 = *(uint8_t *)(a1 + 1392);
  if ( v2 == 0 )
  {
    v3 = -1;
    if ( *(uint32_t *)(a1 + 1400) != 0 )
      return v3;
    v3 = *(uint32_t *)(a1 + 1396);
    if ( v3 != -1 )
      goto LABEL_4;
    *(uint32_t *)(a1 + 1404) = *(uint32_t *)(a1 + 1132) - 1;
    v7 = *(uint8_t **)(a1 + 32);
    if ( v7 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(a1 + 40) )
      {
        LOBYTE(v8) = *v7;
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v7 + 1);
LABEL_17:
        if ( (uint8_t)v8 == 79
          && (uint8_t)sub_1047790(a1) == 103
          && (uint8_t)sub_1047790(a1) == 103
          && (uint8_t)sub_1047790(a1) == 83 )
        {
          if ( sub_1047F90(a1) != 0 )
          {
            if ( (*(uint8_t *)(a1 + 1391) & 1) == 0 )
            {
              *(uint32_t *)(a1 + 116) = 32;
              return v3;
            }
            v3 = *(uint32_t *)(a1 + 1396);
LABEL_4:
            v2 = *(uint8_t *)(a1 + v3 + 1136);
            *(uint32_t *)(a1 + 1396) = v3 + 1;
            if ( v2 != 255 )
            {
              *(uint32_t *)(a1 + 1400) = 1;
              *(uint32_t *)(a1 + 1404) = v3;
            }
            if ( v3 + 1 >= *(uint32_t *)(a1 + 1132) )
              *(uint32_t *)(a1 + 1396) = -1;
            *(uint8_t *)(a1 + 1392) = v2;
            if ( v2 == 0 )
              return -1;
            goto LABEL_9;
          }
LABEL_29:
          *(uint32_t *)(a1 + 1400) = 1;
          return v3;
        }
LABEL_28:
        *(uint32_t *)(a1 + 116) = 30;
        goto LABEL_29;
      }
    }
    else
    {
      v8 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v8 != -1 )
        goto LABEL_17;
    }
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_28;
  }
LABEL_9:
  ++*(uint32_t *)(a1 + 1416);
  *(uint8_t *)(a1 + 1392) = v2 - 1;
  v4 = *(uint8_t **)(a1 + 32);
  if ( v4 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(a1 + 40) )
    {
      v6 = *v4;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v4 + 1);
      return v6;
    }
  }
  else
  {
    v9 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    v3 = (uint8_t)v9;
    if ( v9 != -1 )
      return v3;
  }
  *(uint32_t *)(a1 + 112) = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1048C60  (binary VA: 0x1048c60)
// Original: sub_1048C60
// ----------------------------------------------------------------------------
int sub_1048C60(int a1, int a2)
{
  int v3;
  uint8_t v4;
  int v5;
  int v6;
  int v7;
  uint8_t v8;
  uint8_t *v9;
  int v10;
  int v11;
  int result;
  uint8_t v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char *v24;
  char v25;
  char *v26;
  char v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;

  v3 = *(uint32_t *)(a1 + 1412);
  if ( v3 <= 24 )
  {
    if ( v3 == 0 )
      *(uint32_t *)(a1 + 1408) = 0;
    while ( 1 )
    {
      v8 = *(uint8_t *)(a1 + 1392);
      if ( *(uint32_t *)(a1 + 1400) != 0 )
      {
        if ( v8 == 0 )
          goto LABEL_18;
      }
      else if ( v8 == 0 )
      {
        v10 = *(uint32_t *)(a1 + 1396);
        if ( v10 == -1 )
        {
          *(uint32_t *)(a1 + 1404) = *(uint32_t *)(a1 + 1132) - 1;
          v24 = *(char **)(a1 + 32);
          if ( v24 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v24) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_53;
            v25 = *v24;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v24 + 1);
          }
          else
          {
            v29 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v29 == -1 )
              goto LABEL_53;
            v25 = v29;
          }
          if ( v25 != 79 )
            goto LABEL_54;
          v26 = *(char **)(a1 + 32);
          if ( v26 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v26) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_53;
            v27 = *v26;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v26 + 1);
          }
          else
          {
            v30 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v30 == -1 )
            {
LABEL_53:
              *(uint32_t *)(a1 + 112) = 1;
LABEL_54:
              *(uint32_t *)(a1 + 116) = 30;
LABEL_55:
              *(uint32_t *)(a1 + 1400) = 1;
              goto LABEL_18;
            }
            v27 = v30;
          }
          if ( v27 != 103 || (uint8_t)sub_1047790(a1) != 103 || (uint8_t)sub_1047790(a1) != 83 )
            goto LABEL_54;
          if ( sub_1047F90(a1) == 0 )
            goto LABEL_55;
          if ( (*(uint8_t *)(a1 + 1391) & 1) == 0 )
          {
            *(uint32_t *)(a1 + 116) = 32;
            goto LABEL_18;
          }
          v10 = *(uint32_t *)(a1 + 1396);
        }
        v8 = *(uint8_t *)(a1 + v10 + 1136);
        *(uint32_t *)(a1 + 1396) = v10 + 1;
        if ( v8 != 255 )
        {
          *(uint32_t *)(a1 + 1400) = 1;
          *(uint32_t *)(a1 + 1404) = v10;
        }
        if ( v10 + 1 >= *(uint32_t *)(a1 + 1132) )
          *(uint32_t *)(a1 + 1396) = -1;
        *(uint8_t *)(a1 + 1392) = v8;
        if ( v8 == 0 )
          goto LABEL_18;
      }
      v9 = *(uint8_t **)(a1 + 32);
      ++*(uint32_t *)(a1 + 1416);
      *(uint8_t *)(a1 + 1392) = v8 - 1;
      if ( v9 == nullptr )
        break;
      if ( (unsigned int)(uintptr_t)(v9) >= *(uint32_t *)(a1 + 40) )
        goto LABEL_10;
      v4 = *v9;
      v5 = *(uint32_t *)(a1 + 1412);
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v9 + 1);
      v6 = v4 << v5;
LABEL_5:
      v7 = v5 + 8;
      *(uint32_t *)(a1 + 1408) += v6;
      *(uint32_t *)(a1 + 1412) = v7;
      if ( v7 > 24 )
        goto LABEL_18;
    }
    v23 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    if ( v23 != -1 )
    {
      v5 = *(uint32_t *)(a1 + 1412);
      v6 = (uint8_t)v23 << v5;
      goto LABEL_5;
    }
LABEL_10:
    *(uint32_t *)(a1 + 112) = 1;
    v5 = *(uint32_t *)(a1 + 1412);
    v6 = 0;
    goto LABEL_5;
  }
LABEL_18:
  v11 = *(uint32_t *)(a2 + 4);
  if ( v11 > 8 )
  {
    if ( *(uint32_t *)(a2 + 2084) == 0 )
      goto LABEL_20;
LABEL_28:
    v15 = 0;
    v16 = ((*(uint32_t *)(a1 + 1408) & 0xAAAAAAAA) >> 1) | (2 * (*(uint32_t *)(a1 + 1408) & 0x55555555));
    v32 = *(uint32_t *)(a1 + 1408);
    v17 = ((v16 & 0xCCCCCCCC) >> 2) | (4 * (v16 & 0x33333333));
    v18 = ((v17 & 0xF0F0F0F0) >> 4) | (16 * (v17 & 0xF0F0F0F));
    v31 = __builtin_rotateright32(((v18 & 0xFF00FF00) >> 8) | ((v18 & 0xFF00FF) << 8), 16);
    v19 = *(uint32_t *)(a2 + 2092);
    result = 0;
    if ( v19 > 1 )
    {
      do
      {
        v20 = v19 >> 1;
        v19 -= v19 >> 1;
        if ( *(uint32_t *)(*(uint32_t *)(a2 + 2084) + 4 * (v20 + result)) <= v31 )
          result += v20;
        else
          v19 = v20;
      }
      while ( v19 > 1 );
      v15 = result;
    }
    if ( *(uint8_t *)(a2 + 23) == 0 )
    {
      v15 = *(uint32_t *)(*(uint32_t *)(a2 + 2088) + 4 * v15);
      result = v15;
    }
    v21 = *(uint8_t *)(*(uint32_t *)(a2 + 8) + v15);
    v22 = *(uint32_t *)(a1 + 1412);
    if ( v21 <= v22 )
    {
      *(uint32_t *)(a1 + 1412) = v22 - v21;
      *(uint32_t *)(a1 + 1408) = v32 >> v21;
      return result;
    }
LABEL_26:
    *(uint32_t *)(a1 + 1412) = 0;
    return -1;
  }
  if ( *(uint32_t *)(a2 + 32) == 0 )
    goto LABEL_28;
LABEL_20:
  if ( v11 <= 0 )
  {
LABEL_25:
    *(uint32_t *)(a1 + 116) = 21;
    goto LABEL_26;
  }
  result = 0;
  while ( 1 )
  {
    v13 = *(uint8_t *)(*(uint32_t *)(a2 + 8) + result);
    if ( v13 != 0xFF )
    {
      v14 = *(uint32_t *)(a1 + 1408);
      if ( *(uint32_t *)(*(uint32_t *)(a2 + 32) + 4 * result) == (v14 & ((1 << v13) - 1)) )
        break;
    }
    if ( ++result == v11 )
      goto LABEL_25;
  }
  v28 = *(uint32_t *)(a1 + 1412);
  if ( v28 < v13 )
    goto LABEL_26;
  *(uint32_t *)(a1 + 1408) = v14 >> v13;
  *(uint32_t *)(a1 + 1412) = v28 - *(uint8_t *)(*(uint32_t *)(a2 + 8) + result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1049070  (binary VA: 0x1049070)
// Original: sub_1049070
// ----------------------------------------------------------------------------
int sub_1049070(int a1)
{
  uint8_t *v2;
  int v3;
  int v5;
  uint8_t *v6;
  char *v7;
  char v8;
  char *v9;
  char v10;
  int v11;
  int v12;

  while ( 1 )
  {
    if ( *(uint32_t *)(a1 + 1396) != -1 )
    {
      *(uint32_t *)(a1 + 1400) = 0;
      *(uint32_t *)(a1 + 1412) = 0;
      *(uint32_t *)(a1 + 1416) = 0;
      *(uint8_t *)(a1 + 1392) = 0;
      return 1;
    }
    v2 = *(uint8_t **)(a1 + 32);
    if ( v2 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v2) >= *(uint32_t *)(a1 + 40) )
        goto LABEL_8;
      LOBYTE(v3) = *v2;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2 + 1);
    }
    else
    {
      v3 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v3 == -1 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        goto LABEL_6;
      }
    }
    if ( (uint8_t)v3 != 79 )
      goto LABEL_6;
    v6 = *(uint8_t **)(a1 + 32);
    if ( v6 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v6) >= *(uint32_t *)(a1 + 40) )
        goto LABEL_8;
      LOBYTE(v5) = *v6;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v6 + 1);
    }
    else
    {
      v5 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v5 == -1 )
        goto LABEL_8;
    }
    if ( (uint8_t)v5 != 103 )
      goto LABEL_6;
    v7 = *(char **)(a1 + 32);
    if ( v7 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v7) >= *(uint32_t *)(a1 + 40) )
        goto LABEL_8;
      v8 = *v7;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v7 + 1);
    }
    else
    {
      v11 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v11 == -1 )
        goto LABEL_8;
      v8 = v11;
    }
    if ( v8 != 103 )
      goto LABEL_6;
    v9 = *(char **)(a1 + 32);
    if ( v9 == nullptr )
    {
      v12 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v12 != -1 )
      {
        v10 = v12;
        goto LABEL_20;
      }
LABEL_8:
      *(uint32_t *)(a1 + 112) = 1;
LABEL_6:
      *(uint32_t *)(a1 + 116) = 30;
      return 0;
    }
    if ( (unsigned int)(uintptr_t)(v9) >= *(uint32_t *)(a1 + 40) )
      goto LABEL_8;
    v10 = *v9;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v9 + 1);
LABEL_20:
    if ( v10 != 83 )
      goto LABEL_6;
    if ( sub_1047F90(a1) == 0 )
      return 0;
    if ( (*(uint8_t *)(a1 + 1391) & 1) != 0 )
    {
      *(uint32_t *)(a1 + 116) = 32;
      return 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1049200  (binary VA: 0x1049200)
// Original: sub_1049200
// ----------------------------------------------------------------------------
int sub_1049200(int a1, int a2, int a3)
{
  int v5;
  int result;
  unsigned int v7;
  uint8_t v8;
  int v9;
  int v10;
  uint8_t v11;
  int v12;
  uint8_t *v13;
  char *v14;
  char v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  char v20;
  int v21;
  int v22;

  v5 = *(uint32_t *)(a1 + 1412);
  result = 0;
  if ( v5 >= 0 )
  {
    if ( v5 >= a2 )
    {
      v7 = *(uint32_t *)(a1 + 1408);
      goto LABEL_7;
    }
    if ( a2 > 24 )
    {
      v17 = sub_1049200(a3, 24);
      return v17 + (sub_1049200(v18, a2 - 24) << 24);
    }
    if ( v5 == 0 )
      *(uint32_t *)(a1 + 1408) = 0;
    while ( 1 )
    {
      v11 = *(uint8_t *)(a1 + 1392);
      if ( v11 == 0 )
      {
        if ( *(uint32_t *)(a1 + 1400) != 0 )
          goto LABEL_28;
        v12 = *(uint32_t *)(a1 + 1396);
        if ( v12 == -1 )
        {
          *(uint32_t *)(a1 + 1404) = *(uint32_t *)(a1 + 1132) - 1;
          v14 = *(char **)(a1 + 32);
          if ( v14 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v14) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_33;
            v15 = *v14;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v14 + 1);
          }
          else
          {
            v21 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v21 == -1 )
              goto LABEL_33;
            v15 = v21;
          }
          if ( v15 != 79 )
            goto LABEL_26;
          v19 = *(char **)(a1 + 32);
          if ( v19 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v19) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_33;
            v20 = *v19;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v19 + 1);
          }
          else
          {
            v22 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v22 == -1 )
            {
LABEL_33:
              *(uint32_t *)(a1 + 112) = 1;
LABEL_26:
              *(uint32_t *)(a1 + 116) = 30;
LABEL_27:
              *(uint32_t *)(a1 + 1400) = 1;
LABEL_28:
              *(uint32_t *)(a1 + 1412) = -1;
              return 0;
            }
            v20 = v22;
          }
          if ( v20 != 103 || (uint8_t)sub_1047790(a1) != 103 || (uint8_t)sub_1047790(a1) != 83 )
            goto LABEL_26;
          if ( sub_1047F90(a1) == 0 )
            goto LABEL_27;
          if ( (*(uint8_t *)(a1 + 1391) & 1) == 0 )
          {
            *(uint32_t *)(a1 + 116) = 32;
            goto LABEL_28;
          }
          v12 = *(uint32_t *)(a1 + 1396);
        }
        v11 = *(uint8_t *)(a1 + v12 + 1136);
        *(uint32_t *)(a1 + 1396) = v12 + 1;
        if ( v11 != 255 )
        {
          *(uint32_t *)(a1 + 1400) = 1;
          *(uint32_t *)(a1 + 1404) = v12;
        }
        if ( v12 + 1 >= *(uint32_t *)(a1 + 1132) )
          *(uint32_t *)(a1 + 1396) = -1;
        *(uint8_t *)(a1 + 1392) = v11;
        if ( v11 == 0 )
          goto LABEL_28;
      }
      ++*(uint32_t *)(a1 + 1416);
      *(uint8_t *)(a1 + 1392) = v11 - 1;
      v13 = *(uint8_t **)(a1 + 32);
      if ( v13 == nullptr )
        break;
      if ( (unsigned int)(uintptr_t)(v13) >= *(uint32_t *)(a1 + 40) )
        goto LABEL_21;
      v8 = *v13;
      v9 = *(uint32_t *)(a1 + 1412);
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v13 + 1);
      v10 = v8 << v9;
LABEL_10:
      v5 = v9 + 8;
      v7 = *(uint32_t *)(a1 + 1408) + v10;
      *(uint32_t *)(a1 + 1408) = v7;
      *(uint32_t *)(a1 + 1412) = v9 + 8;
      if ( a2 <= v9 + 8 )
      {
        result = 0;
        if ( v5 < 0 )
          return result;
LABEL_7:
        *(uint32_t *)(a1 + 1412) = v5 - a2;
        result = v7 & ((1 << a2) - 1);
        *(uint32_t *)(a1 + 1408) = v7 >> a2;
        return result;
      }
    }
    v16 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    if ( v16 != -1 )
    {
      v9 = *(uint32_t *)(a1 + 1412);
      v10 = (uint8_t)v16 << v9;
      goto LABEL_10;
    }
LABEL_21:
    *(uint32_t *)(a1 + 112) = 1;
    v9 = *(uint32_t *)(a1 + 1412);
    v10 = 0;
    goto LABEL_10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10494C0  (binary VA: 0x10494c0)
// Original: sub_10494C0
// ----------------------------------------------------------------------------
int sub_10494C0(int a1, int *a2, int a3, int *a4, int *a5, int *a6, int *a7)
{
  int v9;
  int result;
  uint8_t v11;
  int v12;
  unsigned int v13;
  char *v14;
  int v15;
  char *v16;
  char v17;
  char v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  bool v26;
  int v27;
  char *v28;
  int v29;
  char v30;
  char *v31;
  char v32;
  char *v33;
  char v34;
  char v35;
  char *v36;
  char v37;
  int v38;
  int v39;
  int v40;
  uint8_t *v41;
  int v42;
  char *v43;
  char v44;
  char *v45;
  char v46;
  uint8_t *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;

  *(uint32_t *)(a1 + 1444) = 0;
  *(uint32_t *)(a1 + 1440) = 0;
  v9 = *(uint32_t *)(a1 + 112);
  result = 0;
  if ( v9 != 0 )
    return result;
LABEL_2:
  if ( *(uint32_t *)(a1 + 1396) == -1 )
  {
    v14 = *(char **)(a1 + 32);
    if ( v14 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v14) >= *(uint32_t *)(a1 + 40) )
      {
        *(uint32_t *)(a1 + 112) = 1;
        return 0;
      }
      v18 = *v14;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v14 + 1);
      result = *(uint32_t *)(a1 + 112);
    }
    else
    {
      v29 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v29 == -1 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        return 0;
      }
      v18 = v29;
      result = *(uint32_t *)(a1 + 112);
    }
    if ( result != 0 )
      return 0;
    if ( v18 != 79 )
    {
      *(uint32_t *)(a1 + 116) = 30;
      return result;
    }
    v28 = *(char **)(a1 + 32);
    if ( v28 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v28) >= *(uint32_t *)(a1 + 40) )
      {
LABEL_55:
        *(uint32_t *)(a1 + 112) = 1;
        goto LABEL_56;
      }
      v35 = *v28;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v28 + 1);
    }
    else
    {
      v51 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v51 == -1 )
        goto LABEL_55;
      v35 = v51;
    }
    if ( v35 != 103 )
      goto LABEL_56;
    v36 = *(char **)(a1 + 32);
    if ( v36 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v36) >= *(uint32_t *)(a1 + 40) )
        goto LABEL_55;
      v37 = *v36;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v36 + 1);
    }
    else
    {
      v52 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v52 == -1 )
        goto LABEL_55;
      v37 = v52;
    }
    if ( v37 == 103 && (uint8_t)sub_1047790(a1) == 83 )
    {
      if ( sub_1047F90(a1) == 0 )
        return 0;
      if ( (*(uint8_t *)(a1 + 1391) & 1) != 0 )
      {
        *(uint32_t *)(a1 + 1400) = 0;
        *(uint8_t *)(a1 + 1392) = 0;
        *(uint32_t *)(a1 + 116) = 32;
        return 0;
      }
      else
      {
        do
        {
          if ( *(uint32_t *)(a1 + 1396) != -1 )
            goto LABEL_3;
          v47 = *(uint8_t **)(a1 + 32);
          if ( v47 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v47) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_55;
            LOBYTE(v40) = *v47;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v47 + 1);
          }
          else
          {
            v40 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v40 == -1 )
              goto LABEL_55;
          }
          if ( (uint8_t)v40 != 79 )
            goto LABEL_56;
          v41 = *(uint8_t **)(a1 + 32);
          if ( v41 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v41) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_55;
            LOBYTE(v42) = *v41;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v41 + 1);
          }
          else
          {
            v42 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v42 == -1 )
              goto LABEL_55;
          }
          if ( (uint8_t)v42 != 103 )
            goto LABEL_56;
          v43 = *(char **)(a1 + 32);
          if ( v43 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v43) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_55;
            v44 = *v43;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v43 + 1);
          }
          else
          {
            v48 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v48 == -1 )
              goto LABEL_55;
            v44 = v48;
          }
          if ( v44 != 103 )
            goto LABEL_56;
          v45 = *(char **)(a1 + 32);
          if ( v45 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v45) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_55;
            v46 = *v45;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v45 + 1);
          }
          else
          {
            v49 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v49 == -1 )
              goto LABEL_55;
            v46 = v49;
          }
          if ( v46 != 83 )
            goto LABEL_56;
          if ( sub_1047F90(a1) == 0 )
            return 0;
        }
        while ( (*(uint8_t *)(a1 + 1391) & 1) == 0 );
        *(uint32_t *)(a1 + 116) = 32;
        return 0;
      }
    }
LABEL_56:
    *(uint32_t *)(a1 + 116) = 30;
    return 0;
  }
LABEL_3:
  *(uint32_t *)(a1 + 1400) = 0;
  *(uint32_t *)(a1 + 1412) = 0;
  *(uint32_t *)(a1 + 1416) = 0;
  *(uint8_t *)(a1 + 1392) = 0;
  if ( sub_1049200(a1, 1, a3) != 0 )
  {
    v11 = *(uint8_t *)(a1 + 1392);
    while ( 1 )
    {
      if ( v11 == 0 )
      {
        if ( *(uint32_t *)(a1 + 1400) != 0 )
          goto LABEL_22;
        v12 = *(uint32_t *)(a1 + 1396);
        if ( v12 == -1 )
        {
          *(uint32_t *)(a1 + 1404) = *(uint32_t *)(a1 + 1132) - 1;
          v16 = *(char **)(a1 + 32);
          if ( v16 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v16) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_41;
            v17 = *v16;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v16 + 1);
          }
          else
          {
            v38 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v38 == -1 )
              goto LABEL_128;
            v17 = v38;
          }
          if ( v17 != 79 )
            goto LABEL_32;
          v19 = *(char **)(a1 + 32);
          if ( v19 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v19) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_41;
            v30 = *v19;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v19 + 1);
          }
          else
          {
            v50 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v50 == -1 )
              goto LABEL_128;
            v30 = v50;
          }
          if ( v30 != 103 )
            goto LABEL_32;
          v31 = *(char **)(a1 + 32);
          if ( v31 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v31) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_41;
            v32 = *v31;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v31 + 1);
          }
          else
          {
            v54 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v54 == -1 )
            {
LABEL_128:
              *(uint32_t *)(a1 + 112) = 1;
LABEL_32:
              v15 = *(uint32_t *)(a1 + 112);
              goto LABEL_33;
            }
            v32 = v54;
          }
          if ( v32 != 103 )
            goto LABEL_32;
          v33 = *(char **)(a1 + 32);
          if ( v33 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v33) >= *(uint32_t *)(a1 + 40) )
            {
LABEL_41:
              *(uint32_t *)(a1 + 112) = 1;
              v15 = 1;
LABEL_33:
              *(uint32_t *)(a1 + 116) = 30;
LABEL_34:
              *(uint32_t *)(a1 + 1400) = 1;
              goto LABEL_23;
            }
            v34 = *v33;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v33 + 1);
          }
          else
          {
            v53 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v53 == -1 )
              goto LABEL_128;
            v34 = v53;
          }
          if ( v34 != 83 )
            goto LABEL_32;
          if ( sub_1047F90(a1) == 0 )
          {
            v15 = *(uint32_t *)(a1 + 112);
            goto LABEL_34;
          }
          if ( (*(uint8_t *)(a1 + 1391) & 1) == 0 )
          {
            *(uint32_t *)(a1 + 116) = 32;
            v15 = *(uint32_t *)(a1 + 112);
LABEL_23:
            *(uint32_t *)(a1 + 1412) = 0;
            if ( v15 != 0 )
              return 0;
            goto LABEL_2;
          }
          v12 = *(uint32_t *)(a1 + 1396);
        }
        v11 = *(uint8_t *)(a1 + v12 + 1136);
        a3 = v11;
        *(uint32_t *)(a1 + 1396) = v12 + 1;
        if ( v11 != 255 )
        {
          *(uint32_t *)(a1 + 1400) = 1;
          *(uint32_t *)(a1 + 1404) = v12;
        }
        if ( v12 + 1 >= *(uint32_t *)(a1 + 1132) )
          *(uint32_t *)(a1 + 1396) = -1;
        *(uint8_t *)(a1 + 1392) = v11;
        if ( v11 == 0 )
        {
LABEL_22:
          v15 = *(uint32_t *)(a1 + 112);
          goto LABEL_23;
        }
      }
      v13 = *(uint32_t *)(a1 + 32);
      --v11;
      ++*(uint32_t *)(a1 + 1416);
      *(uint8_t *)(a1 + 1392) = v11;
      if ( v13 != 0 )
      {
        if ( v13 >= *(uint32_t *)(a1 + 40) )
          *(uint32_t *)(a1 + 112) = 1;
        else
          *(uint32_t *)(a1 + 32) = v13 + 1;
      }
      else
      {
        if ( fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20)) == -1 )
          *(uint32_t *)(a1 + 112) = 1;
        v11 = *(uint8_t *)(a1 + 1392);
      }
      *(uint32_t *)(a1 + 1412) = 0;
    }
  }
  v20 = *(uint32_t *)(a1 + 424);
  v21 = v20 - 1;
  if ( (unsigned int)(v20 - 1) > 0x3FFF )
  {
    if ( (unsigned int)v21 > 0xFFFFFF )
    {
      if ( (unsigned int)v21 <= 0x1FFFFFFF )
      {
        v22 = byte_1CC1C80[v21 >> 25] + 25;
      }
      else
      {
        v22 = 0;
        if ( v21 >= 0 )
          v22 = byte_1CC1C80[v21 >> 30] + 30;
      }
    }
    else if ( (unsigned int)v21 > 0x7FFFF )
    {
      v22 = byte_1CC1C80[v21 >> 20] + 20;
    }
    else
    {
      v22 = byte_1CC1C80[v21 >> 15] + 15;
    }
  }
  else if ( (unsigned int)v21 <= 0xF )
  {
    v22 = byte_1CC1C7F[v20];
  }
  else if ( (unsigned int)v21 > 0x1FF )
  {
    v22 = byte_1CC1C80[v21 >> 10] + 10;
  }
  else
  {
    v22 = byte_1CC1C80[v21 >> 5] + 5;
  }
  v23 = sub_1049200(a1, v22, a3);
  result = 0;
  if ( v23 != -1 && v23 < *(uint32_t *)(a1 + 424) )
  {
    *a7 = v23;
    v56 = a1 + 6 * v23 + 416;
    if ( *(uint8_t *)(a1 + 6 * v23 + 428) == 0 )
    {
      v25 = *(uint32_t *)(a1 + 128);
      v26 = true;
      v27 = v25 >> 1;
      goto LABEL_50;
    }
    v25 = *(uint32_t *)(a1 + 132);
    v55 = sub_1049200(a1, 1, v24);
    v39 = sub_1049200(a1, 1, v55);
    v27 = v25 >> 1;
    if ( v55 != 0 || *(uint8_t *)(v56 + 12) == 0 )
    {
      v26 = v39 == 0;
LABEL_50:
      *a2 = 0;
      *a4 = v27;
    }
    else
    {
      *a2 = (v25 - *(uint32_t *)(a1 + 128)) >> 2;
      *a4 = (v25 + *(uint32_t *)(a1 + 128)) >> 2;
      v26 = v39 == 0;
    }
    if ( v26 && *(uint8_t *)(v56 + 12) != 0 )
    {
      *a5 = (3 * v25 - *(uint32_t *)(a1 + 128)) >> 2;
      *a6 = (*(uint32_t *)(a1 + 128) + 3 * v25) >> 2;
      return 1;
    }
    else
    {
      *a5 = v27;
      *a6 = v25;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1049C70  (binary VA: 0x1049c70)
// Original: sub_1049C70
// ----------------------------------------------------------------------------
unsigned int sub_1049C70(int a1)
{
  unsigned int result;
  uint8_t v3;
  int v4;
  int v5;
  uint8_t *v6;
  int v7;
  int v8;
  char v9;
  char v10;
  char v11;

  result = *(uint32_t *)(a1 + 1412);
  if ( (int)result <= 24 )
  {
    if ( result == 0 )
      *(uint32_t *)(a1 + 1408) = 0;
    while ( 1 )
    {
      result = *(uint8_t *)(a1 + 1392);
      if ( *(uint32_t *)(a1 + 1400) != 0 )
      {
        if ( (uint8_t)result == 0 )
          return result;
      }
      else if ( (uint8_t)result == 0 )
      {
        v7 = *(uint32_t *)(a1 + 1396);
        if ( v7 == -1 )
        {
          *(uint32_t *)(a1 + 1404) = *(uint32_t *)(a1 + 1132) - 1;
          result = *(uint32_t *)(a1 + 32);
          if ( result != 0 )
          {
            if ( result >= *(uint32_t *)(a1 + 40) )
              goto LABEL_37;
            v9 = *(uint8_t *)result++;
            *(uint32_t *)(a1 + 32) = result;
          }
          else
          {
            result = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( result == -1 )
              goto LABEL_37;
            v9 = result;
          }
          if ( v9 != 79 )
            goto LABEL_38;
          result = *(uint32_t *)(a1 + 32);
          if ( result != 0 )
          {
            if ( result >= *(uint32_t *)(a1 + 40) )
              goto LABEL_37;
            v10 = *(uint8_t *)result++;
            *(uint32_t *)(a1 + 32) = result;
          }
          else
          {
            result = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( result == -1 )
              goto LABEL_37;
            v10 = result;
          }
          if ( v10 != 103 )
            goto LABEL_38;
          result = *(uint32_t *)(a1 + 32);
          if ( result != 0 )
          {
            if ( result >= *(uint32_t *)(a1 + 40) )
              goto LABEL_37;
            v11 = *(uint8_t *)result++;
            *(uint32_t *)(a1 + 32) = result;
          }
          else
          {
            result = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( result == -1 )
            {
LABEL_37:
              *(uint32_t *)(a1 + 112) = 1;
LABEL_38:
              *(uint32_t *)(a1 + 116) = 30;
LABEL_39:
              *(uint32_t *)(a1 + 1400) = 1;
              return result;
            }
            v11 = result;
          }
          if ( v11 != 103 )
            goto LABEL_38;
          result = sub_1047790(a1);
          if ( (uint8_t)result != 83 )
            goto LABEL_38;
          result = sub_1047F90(a1);
          if ( result == 0 )
            goto LABEL_39;
          if ( (*(uint8_t *)(a1 + 1391) & 1) == 0 )
          {
            *(uint32_t *)(a1 + 116) = 32;
            return result;
          }
          v7 = *(uint32_t *)(a1 + 1396);
        }
        result = *(uint8_t *)(a1 + v7 + 1136);
        *(uint32_t *)(a1 + 1396) = v7 + 1;
        if ( (uint8_t)result != 255 )
        {
          *(uint32_t *)(a1 + 1400) = 1;
          *(uint32_t *)(a1 + 1404) = v7;
        }
        if ( v7 + 1 >= *(uint32_t *)(a1 + 1132) )
          *(uint32_t *)(a1 + 1396) = -1;
        *(uint8_t *)(a1 + 1392) = result;
        if ( (uint8_t)result == 0 )
          return result;
      }
      v6 = *(uint8_t **)(a1 + 32);
      ++*(uint32_t *)(a1 + 1416);
      *(uint8_t *)(a1 + 1392) = result - 1;
      if ( v6 == nullptr )
        break;
      if ( (unsigned int)(uintptr_t)(v6) >= *(uint32_t *)(a1 + 40) )
        goto LABEL_10;
      v3 = *v6;
      v4 = *(uint32_t *)(a1 + 1412);
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v6 + 1);
      result = v3 << v4;
LABEL_5:
      v5 = v4 + 8;
      *(uint32_t *)(a1 + 1408) += result;
      *(uint32_t *)(a1 + 1412) = v5;
      if ( v5 > 24 )
        return result;
    }
    v8 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    if ( v8 != -1 )
    {
      v4 = *(uint32_t *)(a1 + 1412);
      result = (uint8_t)v8 << v4;
      goto LABEL_5;
    }
LABEL_10:
    *(uint32_t *)(a1 + 112) = 1;
    v4 = *(uint32_t *)(a1 + 1412);
    result = 0;
    goto LABEL_5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1049EC0  (binary VA: 0x1049ec0)
// Original: sub_1049EC0
// ----------------------------------------------------------------------------
int sub_1049EC0(uint32_t *a1, int *a2, int a3, int a4, int a5, uint8_t *a6)
{
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int i;
  int v12;
  int v13;
  int v14;
  int *v15;
  int k;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  float *v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  float *v43;
  int v44;
  float v45; // xmm2_4
  float v46; // xmm0_4
  int v47;
  float *v48;
  int result;
  int v50;
  int v51;
  unsigned int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  float v61; // xmm0_4
  uint8_t v62;
  int v63;
  int v64;
  int v65;
  uint8_t v66;
  uint8_t *v67;
  int v68;
  int v69;
  float v70; // xmm0_4
  float v71; // xmm0_4
  int v72;
  uint8_t v73;
  int v74;
  int v75;
  int v76;
  int v77;
  uint8_t v78;
  uint8_t *v79;
  int v80;
  int v81;
  int v82;
  char *v83;
  char v84;
  char *v85;
  char v86;
  int v87;
  float v88; // xmm0_4
  float *v89;
  uint8_t v90;
  int v91;
  int v92;
  uint8_t v93;
  uint8_t *v94;
  int v95;
  int v96;
  int v97;
  char *v98;
  char v99;
  int v100;
  char *v101;
  char v102;
  char *v103;
  char v104;
  char *v105;
  char v106;
  char *v107;
  char v108;
  char *v109;
  char v110;
  int v111;
  int v112;
  int *v113;
  int j;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  unsigned int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  float v127; // xmm0_4
  int v128;
  float *v129;
  int v130;
  int v131;
  int v132;
  float v133; // xmm0_4
  uint8_t v134;
  int v135;
  int v136;
  uint8_t v137;
  uint8_t *v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  char *v144;
  char v145;
  char *v146;
  char v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  void *s;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  uint32_t *v181;
  int v182;
  int v183;
  int v184;
  uint32_t *v185;
  int v186;
  float *v187;
  int v188;
  int v189;
  float *v190;
  int v191;
  uint32_t *v192;
  int v193;
  int v194;
  int v196;
  int v197;
  int v198;
  signed int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  signed int v205;
  int v206;
  int v207;
  int v208;
  uint32_t *v209;
  int v210;
  int v211;
  int v212;
  signed int v213;
  int v214;
  signed int v215;
  int v216;
  int v217;

  v6 = a1;
  v217 = a1[27];
  v216 = *((uint16_t *)a1 + a5 + 142);
  v202 = a1[103] + 24 * a5;
  v214 = *(uint32_t *)(a1[35] + 2096 * *(uint8_t *)(v202 + 13));
  v7 = a1[1];
  v213 = (unsigned int)(*(uint32_t *)(v202 + 4) - *(uint32_t *)v202) / *(uint32_t *)(v202 + 8);
  v8 = sub_4EC020(4 * v7 * (v213 + 1), (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"), (int)(uintptr_t)("decode_residue"), 1862);
  v209 = (uint32_t *)v8;
  if ( v7 > 0 )
  {
    v9 = v8;
    v10 = v8 + 4 * v7;
    for ( i = 0; i != v7; ++i )
    {
      *(uint32_t *)(v9 + 4 * i) = v10;
      v10 += 4 * v213;
    }
  }
  if ( a3 > 0 )
  {
    v12 = 0;
    v13 = a3;
    do
    {
      while ( a6[v12] != 0 )
      {
        if ( ++v12 == v13 )
          goto LABEL_9;
      }
      v169 = v13;
      s = (void *)a2[v12++];
      memset(s, 0, 4 * a4);
      v13 = v169;
    }
    while ( v12 != v169 );
  }
LABEL_9:
  if ( v216 == 2 && a3 != 1 )
  {
    if ( a3 <= 0 )
    {
      if ( a3 == 0 )
        goto LABEL_73;
    }
    else if ( *a6 != 0 )
    {
      v14 = 0;
      while ( ++v14 != a3 )
      {
        if ( a6[v14] == 0 )
          goto LABEL_16;
      }
      goto LABEL_73;
    }
LABEL_16:
    v207 = 0;
    while ( 1 )
    {
      if ( a3 == 2 )
      {
        if ( v213 > 0 )
        {
          v113 = (int *)v202;
          v212 = 0;
          v205 = 0;
          for ( j = *(uint32_t *)(v202 + 8); ; j = *(uint32_t *)(v202 + 8) )
          {
            v178 = *v113;
            if ( v207 == 0 )
            {
              v163 = v6[35] + 2096 * *(uint8_t *)(v202 + 13);
              if ( (int)v6[353] <= 9 )
                sub_1049C70();
              v164 = *(int16_t *)(v163 + 2 * (v6[352] & 0x3FF) + 36);
              if ( v164 < 0 )
              {
                v164 = ((int (*)(void))sub_1048C60)();
              }
              else
              {
                v165 = *(uint8_t *)(*(uint32_t *)(v163 + 8) + v164);
                v6[352] >>= v165;
                v166 = v6[353] - v165;
                v6[353] = v166;
                if ( v166 < 0 )
                {
                  v6[353] = 0;
                  v164 = -1;
                }
              }
              if ( *(uint8_t *)(v163 + 23) != 0 )
                v164 = *(uint32_t *)(*(uint32_t *)(v163 + 2088) + 4 * v164);
              if ( v164 == -1 )
                goto LABEL_73;
              *(uint32_t *)(*v209 + v212) = *(uint32_t *)(*(uint32_t *)(v202 + 16) + 4 * v164);
            }
            if ( v213 > v205 && v214 > 0 )
              break;
LABEL_267:
            v212 += 4;
            if ( v213 <= v205 )
              goto LABEL_322;
            v113 = (int *)v202;
          }
          v115 = v205 * j + v178;
          v201 = 0;
          v188 = v115 & 1;
          v179 = v115 >> 1;
          while ( 2 )
          {
            v116 = *(uint32_t *)v202;
            v117 = *(uint32_t *)(v202 + 8);
            v118 = *(int16_t *)(*(uint32_t *)(v202 + 20)
                              + 16 * *(uint8_t *)(*(uint32_t *)(*v209 + v212) + v201)
                              + 2 * v207);
            if ( v118 < 0 )
            {
              v140 = v117 + v116;
              v141 = v205 * v117;
              v188 = ((uint8_t)v140 + (uint8_t)v141) & 1;
              v120 = (v140 + v141) >> 1;
LABEL_264:
              v179 = v120;
            }
            else
            {
              v119 = v6[35] + 2096 * v118;
              v173 = *(uint32_t *)v119;
              if ( *(uint8_t *)(v119 + 21) == 0 )
                goto LABEL_72;
              v198 = *(uint32_t *)(v202 + 8);
              v120 = v179;
              if ( v117 > 0 )
              {
                while ( 1 )
                {
                  v121 = v6[353];
                  if ( v121 <= 9 )
                    break;
LABEL_251:
                  v122 = v6[352];
LABEL_252:
                  v123 = *(int16_t *)(v119 + 2 * (v122 & 0x3FF) + 36);
                  v180 = v123;
                  if ( v123 < 0 )
                  {
                    v180 = sub_1048C60(v116, v119);
                    if ( v180 < 0 )
                      goto LABEL_111;
                  }
                  else
                  {
                    v116 = *(uint8_t *)(*(uint32_t *)(v119 + 8) + v123);
                    v6[352] = v122 >> v116;
                    v124 = v6[353] - v116;
                    v6[353] = v124;
                    if ( v124 < 0 )
                      goto LABEL_110;
                  }
                  if ( v173 + v188 + 2 * v120 > 2 * a4 )
                    v173 = v188 + 2 * (a4 - v120);
                  v125 = *(uint32_t *)v119 * v180;
                  v193 = v125;
                  if ( *(uint8_t *)(v119 + 22) != 0 )
                  {
                    if ( v173 > 0 )
                    {
                      v181 = v6;
                      v116 = 4 * v125;
                      v126 = 0;
                      v127 = 0.0;
                      v194 = v120;
                      v128 = v188;
                      do
                      {
                        while ( 1 )
                        {
                          v127 = v127 + *(float *)(*(uint32_t *)(v119 + 28) + v116);
                          v129 = (float *)(a2[v128] + 4 * v194);
                          *v129 = *v129 + v127;
                          if ( v128 == 1 )
                            break;
                          ++v126;
                          v116 += 4;
                          v128 = 1;
                          if ( v126 == v173 )
                            goto LABEL_262;
                        }
                        ++v194;
                        LOWORD(v128) = 0;
                        ++v126;
                        v116 += 4;
                      }
                      while ( v126 != v173 );
LABEL_262:
                      v188 = v128;
                      v120 = v194;
                      v6 = v181;
                    }
LABEL_263:
                    v198 -= v173;
                    if ( v198 <= 0 )
                      goto LABEL_264;
                    continue;
                  }
                  v130 = 0;
                  v131 = 1;
                  if ( v188 == 1 )
                  {
                    v143 = 4 * v120++;
                    v130 = 1;
                    *(float *)(a2[1] + v143) = *(float *)(a2[1] + v143) + *(float *)(*(uint32_t *)(v119 + 28) + 4 * v193);
                    v131 = 2;
                  }
                  v182 = *a2;
                  v116 = a2[1];
                  if ( v173 > v131 )
                  {
                    v132 = 4 * (v130 + v193);
                    do
                    {
                      v130 += 2;
                      *(float *)(v182 + 4 * v120) = *(float *)(v182 + 4 * v120)
                                                  + *(float *)(*(uint32_t *)(v119 + 28) + v132);
                      v133 = *(float *)(v116 + 4 * v120) + *(float *)(*(uint32_t *)(v119 + 28) + v132 + 4);
                      v132 += 8;
                      *(float *)(v116 + 4 * v120++) = v133;
                    }
                    while ( v173 > v130 + 1 );
                  }
                  v188 = 0;
                  if ( v173 <= v130 )
                    goto LABEL_263;
                  v188 = 1;
                  v116 = *a2 + 4 * v120;
                  v198 -= v173;
                  *(float *)v116 = *(float *)v116 + *(float *)(*(uint32_t *)(v119 + 28) + 4 * (v193 + v130));
                  if ( v198 <= 0 )
                    goto LABEL_264;
                }
                if ( v121 == 0 )
                  v6[352] = 0;
                while ( 2 )
                {
                  v116 = v6[350];
                  v137 = *((uint8_t *)v6 + 1392);
                  if ( v116 != 0 )
                  {
                    if ( v137 == 0 )
                    {
                      v122 = v6[352];
                      goto LABEL_252;
                    }
                  }
                  else if ( v137 == 0 )
                  {
                    v139 = v6[349];
                    if ( v139 == -1 )
                    {
                      v6[351] = v6[283] - 1;
                      v144 = (char *)v6[8];
                      if ( v144 != nullptr )
                      {
                        if ( (unsigned int)(uintptr_t)(v144) >= v6[10] )
                          goto LABEL_306;
                        v145 = *v144;
                        v6[8] = (uint32_t)(uintptr_t)(v144 + 1);
                      }
                      else
                      {
                        v148 = fgetc((vox::StreamCursorInterface::Self *)v6[5]);
                        if ( v148 == -1 )
                          goto LABEL_306;
                        v145 = v148;
                      }
                      if ( v145 != 79 )
                        goto LABEL_303;
                      v146 = (char *)v6[8];
                      if ( v146 != nullptr )
                      {
                        if ( (unsigned int)(uintptr_t)(v146) >= v6[10] )
                          goto LABEL_306;
                        v147 = *v146;
                        v6[8] = (uint32_t)(uintptr_t)(v146 + 1);
                      }
                      else
                      {
                        v162 = fgetc((vox::StreamCursorInterface::Self *)v6[5]);
                        if ( v162 == -1 )
                        {
LABEL_306:
                          v6[28] = 1;
LABEL_303:
                          v6[29] = 30;
LABEL_304:
                          v6[350] = 1;
                          goto LABEL_251;
                        }
                        v147 = v162;
                      }
                      if ( v147 != 103
                        || (uint8_t)((int (*)(void))sub_1047790)() != 103
                        || (uint8_t)((int (*)(void))sub_1047790)() != 83 )
                      {
                        goto LABEL_303;
                      }
                      if ( sub_1047F90() == 0 )
                        goto LABEL_304;
                      if ( (*((uint8_t *)v6 + 1391) & 1) == 0 )
                      {
                        v6[29] = 32;
                        goto LABEL_251;
                      }
                      v139 = v6[349];
                    }
                    v137 = *((uint8_t *)v6 + v139 + 1136);
                    v116 = v137;
                    v6[349] = v139 + 1;
                    if ( v137 != 255 )
                    {
                      v6[350] = 1;
                      v6[351] = v139;
                    }
                    if ( v139 + 1 >= v6[283] )
                      v6[349] = -1;
                    *((uint8_t *)v6 + 1392) = v137;
                    if ( v137 == 0 )
                      goto LABEL_251;
                  }
                  v138 = (uint8_t *)v6[8];
                  ++v6[354];
                  *((uint8_t *)v6 + 1392) = v137 - 1;
                  if ( v138 != nullptr )
                  {
                    if ( (unsigned int)(uintptr_t)(v138) >= v6[10] )
                      goto LABEL_285;
                    v134 = *v138;
                    v135 = v6[353];
                    v6[8] = (uint32_t)(uintptr_t)(v138 + 1);
                    v136 = v134 << v135;
                  }
                  else
                  {
                    v142 = fgetc((vox::StreamCursorInterface::Self *)v6[5]);
                    if ( v142 == -1 )
                    {
LABEL_285:
                      v6[28] = 1;
                      v135 = v6[353];
                      v136 = 0;
                    }
                    else
                    {
                      v135 = v6[353];
                      v136 = (uint8_t)v142 << v135;
                    }
                  }
                  v116 = v135 + 8;
                  v122 = v6[352] + v136;
                  v6[352] = v122;
                  v6[353] = v116;
                  if ( v116 > 24 )
                    goto LABEL_252;
                  continue;
                }
              }
            }
            ++v205;
            ++v201;
            if ( v213 <= v205 || v214 <= v201 )
              goto LABEL_267;
            continue;
          }
        }
      }
      else if ( v213 > 0 )
      {
        v15 = (int *)v202;
        v204 = 0;
        v199 = 0;
        for ( k = *(uint32_t *)(v202 + 8); ; k = *(uint32_t *)(v202 + 8) )
        {
          v17 = v207;
          v174 = *v15;
          if ( v207 == 0 )
          {
            v158 = v6[35] + 2096 * *(uint8_t *)(v202 + 13);
            if ( (int)v6[353] <= 9 )
              sub_1049C70();
            v159 = *(int16_t *)(v158 + 2 * (v6[352] & 0x3FF) + 36);
            if ( v159 < 0 )
            {
              v159 = sub_1048C60(v17, v158);
            }
            else
            {
              v160 = *(uint8_t *)(*(uint32_t *)(v158 + 8) + v159);
              v6[352] >>= v160;
              v161 = v6[353] - v160;
              v6[353] = v161;
              if ( v161 < 0 )
              {
                v6[353] = 0;
                v159 = -1;
              }
            }
            if ( *(uint8_t *)(v158 + 23) != 0 )
              v159 = *(uint32_t *)(*(uint32_t *)(v158 + 2088) + 4 * v159);
            if ( v159 == -1 )
              goto LABEL_73;
            *(uint32_t *)(*v209 + v204) = *(uint32_t *)(*(uint32_t *)(v202 + 16) + 4 * v159);
          }
          if ( v213 > v199 && v214 > 0 )
            break;
LABEL_44:
          v204 += 4;
          if ( v213 <= v199 )
            goto LABEL_322;
          v15 = (int *)v202;
        }
        v189 = 0;
        v18 = (v174 + k * v199) % a3;
        v175 = (v174 + k * v199) / a3;
        v183 = v18;
        while ( 1 )
        {
          v19 = *(uint32_t *)v202;
          v20 = *(uint32_t *)(v202 + 8);
          v21 = *(int16_t *)(*(uint32_t *)(v202 + 20)
                           + 16 * *(uint8_t *)(*(uint32_t *)(*v209 + v204) + v189)
                           + 2 * v207);
          if ( v21 < 0 )
          {
            v96 = v20 + v19;
            v183 = (v96 + v199 * v20) % a3;
            v175 = (v96 + v199 * v20) / a3;
            goto LABEL_42;
          }
          v22 = v6[35] + 2096 * v21;
          v170 = *(uint32_t *)v22;
          if ( *(uint8_t *)(v22 + 21) == 0 )
            goto LABEL_72;
          v196 = *(uint32_t *)(v202 + 8);
          v23 = v183;
          if ( v20 > 0 )
            break;
LABEL_42:
          ++v199;
          ++v189;
          if ( v213 <= v199 || v214 <= v189 )
            goto LABEL_44;
        }
        while ( 1 )
        {
          v24 = v6[353];
          if ( v24 <= 9 )
            break;
LABEL_28:
          v25 = v6[352];
LABEL_29:
          v26 = *(int16_t *)(v22 + 2 * (v25 & 0x3FF) + 36);
          v184 = v26;
          if ( v26 < 0 )
          {
            v184 = sub_1048C60(v19, v22);
            if ( v184 < 0 )
              goto LABEL_111;
          }
          else
          {
            v19 = *(uint8_t *)(*(uint32_t *)(v22 + 8) + v26);
            v6[352] = v25 >> v19;
            v27 = v6[353] - v19;
            v6[353] = v27;
            if ( v27 < 0 )
              goto LABEL_110;
          }
          if ( v170 + v23 + v175 * a3 > a4 * a3 )
            v170 = v23 + a3 * (a4 - v175);
          v28 = *(uint32_t *)v22 * v184;
          if ( *(uint8_t *)(v22 + 22) != 0 )
          {
            if ( v170 <= 0 )
              goto LABEL_40;
            v87 = 4 * v28;
            v19 = 0;
            v88 = 0.0;
            v185 = v6;
            do
            {
              v88 = v88 + *(float *)(*(uint32_t *)(v22 + 28) + v87);
              v89 = (float *)(a2[v23++] + 4 * v175);
              *v89 = *v89 + v88;
              if ( a3 == v23 )
              {
                ++v175;
                v23 = 0;
              }
              ++v19;
              v87 += 4;
            }
            while ( v19 != v170 );
            goto LABEL_39;
          }
          v19 = 0;
          v29 = 4 * v28;
          if ( v170 > 0 )
          {
            v185 = v6;
            do
            {
              while ( 1 )
              {
                v30 = (float *)(a2[v23++] + 4 * v175);
                *v30 = *v30 + *(float *)(*(uint32_t *)(v22 + 28) + v29);
                if ( a3 == v23 )
                  break;
                ++v19;
                v29 += 4;
                if ( v19 == v170 )
                  goto LABEL_39;
              }
              ++v175;
              v23 = 0;
              ++v19;
              v29 += 4;
            }
            while ( v19 != v170 );
LABEL_39:
            v6 = v185;
          }
LABEL_40:
          v196 -= v170;
          if ( v196 <= 0 )
          {
            v183 = v23;
            goto LABEL_42;
          }
        }
        if ( v24 == 0 )
          v6[352] = 0;
        while ( 2 )
        {
          v93 = *((uint8_t *)v6 + 1392);
          if ( v6[350] != 0 )
          {
            if ( v93 == 0 )
            {
              v25 = v6[352];
              goto LABEL_29;
            }
          }
          else if ( v93 == 0 )
          {
            v95 = v6[349];
            if ( v95 == -1 )
            {
              v6[351] = v6[283] - 1;
              v98 = (char *)v6[8];
              if ( v98 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v98) >= v6[10] )
                  goto LABEL_200;
                v99 = *v98;
                v6[8] = (uint32_t)(uintptr_t)(v98 + 1);
              }
              else
              {
                v100 = fgetc((vox::StreamCursorInterface::Self *)v6[5]);
                if ( v100 == -1 )
                  goto LABEL_200;
                v99 = v100;
              }
              if ( v99 != 79 )
                goto LABEL_196;
              v107 = (char *)v6[8];
              if ( v107 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v107) >= v6[10] )
                  goto LABEL_200;
                v108 = *v107;
                v6[8] = (uint32_t)(uintptr_t)(v107 + 1);
              }
              else
              {
                v149 = fgetc((vox::StreamCursorInterface::Self *)v6[5]);
                if ( v149 == -1 )
                  goto LABEL_200;
                v108 = v149;
              }
              if ( v108 != 103 )
                goto LABEL_196;
              v109 = (char *)v6[8];
              if ( v109 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v109) >= v6[10] )
                  goto LABEL_200;
                v110 = *v109;
                v6[8] = (uint32_t)(uintptr_t)(v109 + 1);
              }
              else
              {
                v167 = fgetc((vox::StreamCursorInterface::Self *)v6[5]);
                if ( v167 == -1 )
                {
LABEL_200:
                  v6[28] = 1;
LABEL_196:
                  v6[29] = 30;
LABEL_197:
                  v6[350] = 1;
                  goto LABEL_28;
                }
                v110 = v167;
              }
              if ( v110 != 103 || (uint8_t)sub_1047790(v19) != 83 )
                goto LABEL_196;
              if ( sub_1047F90() == 0 )
                goto LABEL_197;
              if ( (*((uint8_t *)v6 + 1391) & 1) == 0 )
              {
                v6[29] = 32;
                goto LABEL_28;
              }
              v95 = v6[349];
            }
            v93 = *((uint8_t *)v6 + v95 + 1136);
            v19 = v93;
            v6[349] = v95 + 1;
            if ( v93 != 255 )
            {
              v6[350] = 1;
              v6[351] = v95;
            }
            if ( v95 + 1 >= v6[283] )
              v6[349] = -1;
            *((uint8_t *)v6 + 1392) = v93;
            if ( v93 == 0 )
              goto LABEL_28;
          }
          v94 = (uint8_t *)v6[8];
          ++v6[354];
          *((uint8_t *)v6 + 1392) = v93 - 1;
          if ( v94 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v94) >= v6[10] )
              goto LABEL_178;
            v90 = *v94;
            v91 = v6[353];
            v6[8] = (uint32_t)(uintptr_t)(v94 + 1);
            v92 = v90 << v91;
          }
          else
          {
            v97 = fgetc((vox::StreamCursorInterface::Self *)v6[5]);
            if ( v97 == -1 )
            {
LABEL_178:
              v6[28] = 1;
              v91 = v6[353];
              v92 = 0;
            }
            else
            {
              v91 = v6[353];
              v92 = (uint8_t)v97 << v91;
            }
          }
          v19 = v91 + 8;
          v25 = v6[352] + v92;
          v6[352] = v25;
          v6[353] = v19;
          if ( v19 > 24 )
            goto LABEL_29;
          continue;
        }
      }
LABEL_322:
      if ( ++v207 == 8 )
        goto LABEL_73;
    }
  }
  v210 = 0;
  v31 = v6;
  while ( 1 )
  {
    v211 = 0;
    v215 = 0;
    if ( v213 > 0 )
      break;
LABEL_78:
    if ( ++v210 == 8 )
    {
LABEL_79:
      v6 = v31;
      goto LABEL_73;
    }
  }
  while ( 1 )
  {
    if ( v210 == 0 )
    {
      v153 = 0;
      if ( a3 > 0 )
      {
        do
        {
          if ( a6[v153] == 0 )
          {
            v154 = v31[35] + 2096 * *(uint8_t *)(v202 + 13);
            if ( (int)v31[353] <= 9 )
              sub_1049C70();
            v155 = *(int16_t *)(v154 + 2 * (v31[352] & 0x3FF) + 36);
            if ( v155 < 0 )
            {
              v155 = ((int (*)(void))sub_1048C60)();
            }
            else
            {
              v156 = *(uint8_t *)(*(uint32_t *)(v154 + 8) + v155);
              v31[352] >>= v156;
              v157 = v31[353] - v156;
              v31[353] = v157;
              if ( v157 < 0 )
              {
                v31[353] = 0;
                v155 = -1;
              }
            }
            if ( *(uint8_t *)(v154 + 23) != 0 )
              v155 = *(uint32_t *)(*(uint32_t *)(v154 + 2088) + 4 * v155);
            if ( v155 == -1 )
              goto LABEL_79;
            *(uint32_t *)(v209[v153] + v211) = *(uint32_t *)(*(uint32_t *)(v202 + 16) + 4 * v155);
          }
          ++v153;
        }
        while ( v153 != a3 );
      }
    }
    if ( v213 > v215 )
    {
      v208 = 0;
      if ( v214 > 0 )
        break;
    }
LABEL_77:
    v211 += 4;
    if ( v213 <= v215 )
      goto LABEL_78;
  }
  while ( 1 )
  {
    v197 = 0;
    if ( a3 > 0 )
      break;
LABEL_75:
    ++v215;
    ++v208;
    if ( v213 <= v215 || v214 <= v208 )
      goto LABEL_77;
  }
  while ( 1 )
  {
    if ( a6[v197] != 0 )
      goto LABEL_74;
    v32 = *(int16_t *)(*(uint32_t *)(v202 + 20)
                     + 16 * *(uint8_t *)(*(uint32_t *)(v209[v197] + v211) + v208)
                     + 2 * v210);
    if ( v32 < 0 )
      goto LABEL_74;
    v200 = a2[v197];
    v33 = v31[35] + 2096 * v32;
    v171 = *(uint32_t *)(v202 + 8);
    v34 = *(uint32_t *)v202 + v171 * v215;
    v186 = v34;
    if ( v216 != 0 )
      break;
    v206 = v171 / *(uint32_t *)v33;
    if ( v206 > 0 )
    {
      if ( *(uint8_t *)(v33 + 21) != 0 )
      {
        v172 = v171 - v34;
        v176 = v172 - 1;
        v190 = (float *)(v200 + 4 * v34);
        v187 = v190 + 1;
        v203 = v172 - v206;
        while ( 1 )
        {
          v35 = v31[353];
          if ( v35 <= 9 )
            break;
LABEL_59:
          v36 = v31[352];
LABEL_60:
          v37 = *(int16_t *)(v33 + 2 * (v36 & 0x3FF) + 36);
          if ( v37 < 0 )
          {
            v37 = ((int (*)(void))sub_1048C60)();
            if ( v37 < 0 )
            {
              v6 = v31;
              goto LABEL_111;
            }
          }
          else
          {
            v38 = *(uint8_t *)(*(uint32_t *)(v33 + 8) + v37);
            v31[352] = v36 >> v38;
            v39 = v31[353] - v38;
            v31[353] = v39;
            if ( v39 < 0 )
              goto LABEL_109;
          }
          v40 = v172;
          if ( v172 > *(uint32_t *)v33 )
            v40 = *(uint32_t *)v33;
          v41 = v37 * *(uint32_t *)v33;
          if ( v40 > 0 )
          {
            v42 = 0;
            v43 = v190;
            v44 = 4 * v41;
            v45 = 0.0;
            do
            {
              v46 = *(float *)(*(uint32_t *)(v33 + 28) + v44) + v45;
              *v43 = v46 + *v43;
              if ( *(uint8_t *)(v33 + 22) != 0 )
                v45 = v46;
              ++v42;
              v44 += 4;
              v43 += v206;
            }
            while ( v42 != v40 );
          }
          if ( v176 == v203 )
            goto LABEL_74;
          v47 = v176--;
          v172 = v47;
          v48 = v187++;
          v190 = v48;
          if ( *(uint8_t *)(v33 + 21) == 0 )
            goto LABEL_71;
        }
        if ( v35 == 0 )
          v31[352] = 0;
        while ( 1 )
        {
          v78 = *((uint8_t *)v31 + 1392);
          if ( v31[350] != 0 )
          {
            if ( v78 == 0 )
              goto LABEL_59;
          }
          else if ( v78 == 0 )
          {
            v80 = v31[349];
            if ( v80 == -1 )
            {
              v31[351] = v31[283] - 1;
              v85 = (char *)v31[8];
              if ( v85 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v85) >= v31[10] )
                  goto LABEL_161;
                v86 = *v85;
                v31[8] = (uint32_t)(uintptr_t)(v85 + 1);
              }
              else
              {
                v111 = fgetc((vox::StreamCursorInterface::Self *)v31[5]);
                if ( v111 == -1 )
                  goto LABEL_161;
                v86 = v111;
              }
              if ( v86 != 79 )
                goto LABEL_157;
              v101 = (char *)v31[8];
              if ( v101 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v101) >= v31[10] )
                  goto LABEL_161;
                v102 = *v101;
                v31[8] = (uint32_t)(uintptr_t)(v101 + 1);
              }
              else
              {
                v151 = fgetc((vox::StreamCursorInterface::Self *)v31[5]);
                if ( v151 == -1 )
                {
LABEL_161:
                  v31[28] = 1;
LABEL_157:
                  v31[29] = 30;
LABEL_158:
                  v31[350] = 1;
                  goto LABEL_59;
                }
                v102 = v151;
              }
              if ( v102 != 103
                || (uint8_t)((int (*)(void))sub_1047790)() != 103
                || (uint8_t)((int (*)(void))sub_1047790)() != 83 )
              {
                goto LABEL_157;
              }
              if ( sub_1047F90() == 0 )
                goto LABEL_158;
              if ( (*((uint8_t *)v31 + 1391) & 1) == 0 )
              {
                v31[29] = 32;
                goto LABEL_59;
              }
              v80 = v31[349];
            }
            v78 = *((uint8_t *)v31 + v80 + 1136);
            v31[349] = v80 + 1;
            if ( v78 != 255 )
            {
              v31[350] = 1;
              v31[351] = v80;
            }
            if ( v80 + 1 >= v31[283] )
              v31[349] = -1;
            *((uint8_t *)v31 + 1392) = v78;
            if ( v78 == 0 )
              goto LABEL_59;
          }
          v79 = (uint8_t *)v31[8];
          ++v31[354];
          *((uint8_t *)v31 + 1392) = v78 - 1;
          if ( v79 == nullptr )
            break;
          if ( (unsigned int)(uintptr_t)(v79) >= v31[10] )
            goto LABEL_130;
          v73 = *v79;
          v74 = v31[353];
          v31[8] = (uint32_t)(uintptr_t)(v79 + 1);
          v75 = v73 << v74;
LABEL_125:
          v76 = v74 + 8;
          v77 = v31[352] + v75;
          v31[352] = v77;
          v31[353] = v76;
          if ( v76 > 24 )
          {
            v36 = v77;
            goto LABEL_60;
          }
        }
        v81 = fgetc((vox::StreamCursorInterface::Self *)v31[5]);
        if ( v81 != -1 )
        {
          v74 = v31[353];
          v75 = (uint8_t)v81 << v74;
          goto LABEL_125;
        }
LABEL_130:
        v31[28] = 1;
        v74 = v31[353];
        v75 = 0;
        goto LABEL_125;
      }
      goto LABEL_71;
    }
LABEL_74:
    if ( ++v197 == a3 )
      goto LABEL_75;
  }
  if ( v171 <= 0 )
    goto LABEL_74;
  if ( *(uint8_t *)(v33 + 21) == 0 )
  {
LABEL_71:
    v6 = v31;
LABEL_72:
    v6[29] = 21;
    goto LABEL_73;
  }
  v177 = 0;
  v50 = v200 + 4 * v34;
  v191 = *(uint32_t *)(v202 + 8);
  v51 = v31[353];
  if ( v51 <= 9 )
  {
LABEL_96:
    if ( v51 == 0 )
      v31[352] = 0;
    while ( 1 )
    {
      v66 = *((uint8_t *)v31 + 1392);
      if ( v31[350] != 0 )
      {
        if ( v66 == 0 )
        {
          v52 = v31[352];
          goto LABEL_84;
        }
      }
      else if ( v66 == 0 )
      {
        v72 = v31[349];
        if ( v72 == -1 )
        {
          v31[351] = v31[283] - 1;
          v83 = (char *)v31[8];
          if ( v83 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v83) >= v31[10] )
              goto LABEL_160;
            v84 = *v83;
            v31[8] = (uint32_t)(uintptr_t)(v83 + 1);
          }
          else
          {
            v112 = fgetc((vox::StreamCursorInterface::Self *)v31[5]);
            if ( v112 == -1 )
              goto LABEL_160;
            v84 = v112;
          }
          if ( v84 != 79 )
            goto LABEL_151;
          v103 = (char *)v31[8];
          if ( v103 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v103) >= v31[10] )
              goto LABEL_160;
            v104 = *v103;
            v31[8] = (uint32_t)(uintptr_t)(v103 + 1);
          }
          else
          {
            v150 = fgetc((vox::StreamCursorInterface::Self *)v31[5]);
            if ( v150 == -1 )
              goto LABEL_160;
            v104 = v150;
          }
          if ( v104 != 103 )
            goto LABEL_151;
          v105 = (char *)v31[8];
          if ( v105 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v105) >= v31[10] )
              goto LABEL_160;
            v106 = *v105;
            v31[8] = (uint32_t)(uintptr_t)(v105 + 1);
          }
          else
          {
            v152 = fgetc((vox::StreamCursorInterface::Self *)v31[5]);
            if ( v152 == -1 )
            {
LABEL_160:
              v31[28] = 1;
LABEL_151:
              v31[29] = 30;
LABEL_152:
              v31[350] = 1;
              goto LABEL_83;
            }
            v106 = v152;
          }
          if ( v106 != 103 || (uint8_t)((int (*)(void))sub_1047790)() != 83 )
            goto LABEL_151;
          if ( sub_1047F90() == 0 )
            goto LABEL_152;
          if ( (*((uint8_t *)v31 + 1391) & 1) == 0 )
          {
            v31[29] = 32;
            goto LABEL_83;
          }
          v72 = v31[349];
        }
        v66 = *((uint8_t *)v31 + v72 + 1136);
        v31[349] = v72 + 1;
        if ( v66 != 255 )
        {
          v31[350] = 1;
          v31[351] = v72;
        }
        if ( v72 + 1 >= v31[283] )
          v31[349] = -1;
        *((uint8_t *)v31 + 1392) = v66;
        if ( v66 == 0 )
          goto LABEL_83;
      }
      v67 = (uint8_t *)v31[8];
      ++v31[354];
      *((uint8_t *)v31 + 1392) = v66 - 1;
      if ( v67 == nullptr )
        break;
      if ( (unsigned int)(uintptr_t)(v67) >= v31[10] )
        goto LABEL_104;
      v62 = *v67;
      v63 = v31[353];
      v31[8] = (uint32_t)(uintptr_t)(v67 + 1);
      v64 = v62 << v63;
LABEL_99:
      v65 = v63 + 8;
      v52 = v31[352] + v64;
      v31[352] = v52;
      v31[353] = v65;
      if ( v65 > 24 )
        goto LABEL_84;
    }
    v82 = fgetc((vox::StreamCursorInterface::Self *)v31[5]);
    if ( v82 != -1 )
    {
      v63 = v31[353];
      v64 = (uint8_t)v82 << v63;
      goto LABEL_99;
    }
LABEL_104:
    v31[28] = 1;
    v63 = v31[353];
    v64 = 0;
    goto LABEL_99;
  }
LABEL_83:
  while ( 2 )
  {
    v52 = v31[352];
LABEL_84:
    v53 = *(int16_t *)(v33 + 2 * (v52 & 0x3FF) + 36);
    if ( v53 < 0 )
    {
      v53 = ((int (*)(void))sub_1048C60)();
      if ( v53 < 0 )
      {
        v6 = v31;
        goto LABEL_111;
      }
LABEL_86:
      v56 = *(uint32_t *)v33;
      v57 = v191;
      if ( v191 > *(uint32_t *)v33 )
        v57 = *(uint32_t *)v33;
      v58 = v56 * v53;
      if ( *(uint8_t *)(v33 + 22) != 0 )
      {
        if ( v57 <= 0 )
          goto LABEL_93;
        v192 = v31;
        v68 = 0;
        v69 = 4 * v58;
        v70 = 0.0;
        do
        {
          v71 = v70 + *(float *)(*(uint32_t *)(v33 + 28) + v69);
          v69 += 4;
          *(float *)(v50 + 4 * v68) = *(float *)(v50 + 4 * v68) + v71;
          ++v68;
          v70 = v71 + *(float *)(v33 + 12);
        }
        while ( v68 != v57 );
      }
      else
      {
        if ( v57 <= 0 )
        {
LABEL_93:
          v177 += v56;
          if ( v171 <= v177 )
            goto LABEL_74;
          v186 += v56;
          v191 = v171 - v177;
          v50 = v200 + 4 * v186;
          if ( *(uint8_t *)(v33 + 21) == 0 )
            goto LABEL_71;
          v51 = v31[353];
          if ( v51 <= 9 )
            goto LABEL_96;
          continue;
        }
        v192 = v31;
        v59 = 0;
        v60 = 4 * v58;
        do
        {
          v61 = *(float *)(v50 + 4 * v59) + *(float *)(*(uint32_t *)(v33 + 28) + v60);
          v60 += 4;
          *(float *)(v50 + 4 * v59++) = v61;
        }
        while ( v59 != v57 );
      }
      v31 = v192;
      v56 = *(uint32_t *)v33;
      goto LABEL_93;
    }
    break;
  }
  v54 = *(uint8_t *)(*(uint32_t *)(v33 + 8) + v53);
  v31[352] = v52 >> v54;
  v55 = v31[353] - v54;
  v31[353] = v55;
  if ( v55 >= 0 )
    goto LABEL_86;
LABEL_109:
  v6 = v31;
LABEL_110:
  v6[353] = 0;
LABEL_111:
  if ( *((uint8_t *)v6 + 1392) != 0 || v6[350] == 0 )
    goto LABEL_72;
LABEL_73:
  result = sub_4EC120((int)(uintptr_t)(v209));
  v6[27] = v217;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_104B770  (binary VA: 0x104b770)
// Original: sub_104B770
// ----------------------------------------------------------------------------
int sub_104B770(int a1, uint32_t *a2, uint8_t *a3, uint8_t a4, int a5, int a6, int a7, uint32_t *a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int16_t v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint8_t v30;
  int v31;
  int v32;
  int v33;
  uint8_t v34;
  uint8_t *v35;
  int v36;
  int v37;
  int i;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  char *v45;
  char v46;
  char *v47;
  char v48;
  char *v49;
  char v50;
  uint8_t v51;
  int v52;
  int v53;
  int v54;
  uint8_t v55;
  uint8_t *v56;
  int v57;
  int v58;
  char *v59;
  char v60;
  int v61;
  int j;
  char *v63;
  char v64;
  char *v65;
  char v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int k;
  int v77;
  int v78;
  uint8_t *v79;
  float *v80;
  int m;
  float v82; // xmm3_4
  float v83; // xmm0_4
  float v84; // xmm1_4
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int16_t v91;
  int v92;
  int v93;
  int v94;
  unsigned int v95;
  int v96;
  int v97;
  __m128 v98;
  unsigned int v99;
  float *v100;
  unsigned int v101;
  int v102;
  unsigned int v103;
  unsigned int v104;
  char *v105;
  int v106;
  __m128 v107;
  unsigned int v108;
  int v109;
  int v111;
  int v112;
  int v113;
  int v114;
  float *v115;
  float *v116;
  float *v117;
  float *v118;
  float *v119;
  float v120; // xmm0_4
  float v121; // xmm1_4
  float v122; // xmm0_4
  float v123; // xmm1_4
  float *v124;
  float v125; // xmm0_4
  float v126; // xmm1_4
  float v127; // xmm0_4
  float *v128;
  float *v129;
  float *v130;
  float *v131;
  float *v132;
  float v133; // xmm3_4
  float v134; // xmm1_4
  float v135; // xmm2_4
  float v136; // xmm1_4
  float v137; // xmm0_4
  float v138; // xmm3_4
  float v139; // xmm1_4
  float v140; // xmm2_4
  float v141; // xmm1_4
  float v142; // xmm0_4
  float v143; // xmm2_4
  float v144; // xmm2_4
  float v145; // xmm1_4
  float v146; // xmm0_4
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  float *v154;
  float *v155;
  float *v156;
  float v157; // xmm1_4
  float v158; // xmm0_4
  float v159; // xmm2_4
  float v160; // xmm4_4
  float v161; // xmm0_4
  float v162; // xmm3_4
  float v163; // xmm1_4
  float v164; // xmm0_4
  float v165; // xmm2_4
  float v166; // xmm4_4
  float v167; // xmm0_4
  float v168; // xmm3_4
  float v169; // xmm1_4
  float v170; // xmm0_4
  float v171; // xmm2_4
  float v172; // xmm4_4
  float v173; // xmm0_4
  float v174; // xmm3_4
  float v175; // xmm1_4
  float v176; // xmm0_4
  float v177; // xmm2_4
  float v178; // xmm0_4
  float v179; // xmm2_4
  bool v180;
  int v181;
  char v182;
  int v183;
  float *v184;
  float v185; // xmm5_4
  float v186; // xmm6_4
  float v187; // xmm7_4
  float *v188;
  float *v189;
  int v190;
  float v191; // xmm2_4
  float v192; // xmm1_4
  float v193; // xmm0_4
  float v194; // xmm4_4
  float v195; // xmm1_4
  float v196; // xmm3_4
  float v197; // xmm2_4
  float v198; // xmm1_4
  float v199; // xmm0_4
  float v200; // xmm4_4
  float v201; // xmm1_4
  float v202; // xmm3_4
  float v203; // xmm2_4
  float v204; // xmm1_4
  float v205; // xmm0_4
  float v206; // xmm4_4
  float v207; // xmm1_4
  float v208; // xmm3_4
  float v209; // xmm2_4
  float v210; // xmm1_4
  float v211; // xmm0_4
  float *v212;
  float v213; // xmm5_4
  float v214; // xmm1_4
  float v215; // xmm5_4
  float v216; // xmm4_4
  float v217; // xmm6_4
  float v218; // xmm2_4
  float v219; // xmm1_4
  float v220; // xmm1_4
  float v221; // xmm3_4
  float v222; // xmm0_4
  float v223; // xmm3_4
  float v224; // xmm2_4
  float v225; // xmm6_4
  float v226; // xmm7_4
  float v227; // xmm3_4
  float v228; // xmm0_4
  float v229; // xmm3_4
  float v230; // xmm1_4
  float v231; // xmm6_4
  float v232; // xmm4_4
  float v233; // xmm0_4
  float v234; // xmm3_4
  float v235; // xmm7_4
  float v236; // xmm2_4
  float v237; // xmm1_4
  float v238; // xmm4_4
  float v239; // xmm6_4
  float v240; // xmm5_4
  float v241; // xmm2_4
  float v242; // xmm1_4
  float v243; // xmm5_4
  float v244; // xmm3_4
  float v245; // xmm2_4
  float v246; // xmm0_4
  int v247;
  uint16_t *v248;
  float *v249;
  uint32_t *v250;
  uint32_t *v251;
  int v252;
  int v253;
  int v254;
  float *v255;
  float *v256;
  float v257; // xmm1_4
  float v258; // xmm6_4
  float v259; // xmm5_4
  float v260; // xmm2_4
  float v261; // xmm1_4
  float v262; // xmm7_4
  float v263; // xmm5_4
  float v264; // xmm3_4
  float v265; // xmm2_4
  float v266; // xmm1_4
  float v267; // xmm4_4
  float v268; // xmm6_4
  float v269; // xmm5_4
  float v270; // xmm3_4
  float v271; // xmm1_4
  float v272; // xmm0_4
  float v273; // xmm5_4
  float v274; // xmm2_4
  float *v275;
  float *v276;
  float *v277;
  float *v278;
  float v279; // xmm4_4
  float v280; // xmm1_4
  float v281; // xmm2_4
  float v282; // xmm1_4
  float v283; // xmm4_4
  float v284; // xmm1_4
  float v285; // xmm2_4
  float v286; // xmm1_4
  float v287; // xmm4_4
  float v288; // xmm1_4
  float v289; // xmm2_4
  float v290; // xmm1_4
  float v291; // xmm3_4
  float v292; // xmm5_4
  float v293; // xmm1_4
  float v294; // xmm4_4
  float v295; // xmm6_4
  float v296; // xmm2_4
  float v297; // xmm1_4
  bool v298; // cc
  uint8_t v299;
  int v300;
  unsigned int v301;
  int v302;
  int v303;
  int v304;
  int v305;
  int v306;
  int v307;
  int v308;
  int v309;
  char *v310;
  char v311;
  int v312;
  int v313;
  int v314;
  int v315;
  int v316;
  unsigned int v317;
  unsigned int v318;
  int v319;
  int v320;
  int v321;
  char *v322;
  char v323;
  int v324;
  int v325;
  int v326;
  typedef int _g4_t_v327;
  typedef int _g4_t_v328;
  typedef int _g4_t_v329;
  typedef int _g4_t_v330;
  typedef int _g4_t_v332;
  typedef int _g4_t_v333;
  typedef int _g4_t_v334;
  typedef int _g4_t_v335;
  typedef int _g4_t_v336;
  typedef int _g4_t_v337;
  typedef size_t _g4_t_v338;
  typedef int _g4_t_v339;
  typedef float *_g4_t_v340;
  typedef int _g4_t_v341;
  typedef int _g4_t_v342;
  typedef int _g4_t_v343;
  typedef int _g4_t_v344;
  typedef int _g4_t_v345;
  typedef float *_g4_t_v346;
  typedef unsigned int _g4_t_v347;
  typedef int _g4_t_v348;
  typedef int _g4_t_v350;
  typedef int _g4_t_v351;
  typedef int _g4_t_v352;
  typedef int _g4_t_v353;
  typedef int _g4_t_v354;
  typedef int _g4_t_v355;
  typedef float *_g4_t_v356;
  typedef uint16_t *_g4_t_v357;
  typedef int _g4_t_v358;
  typedef int _g4_t_v359;
  typedef int _g4_t_v360;
  typedef int _g4_t_v361;
  typedef int _g4_t_v362;
  typedef int _g4_t_v363;
  typedef int _g4_t_v364;
  typedef float *_g4_t_v365;
  typedef int _g4_t_v366;
  typedef int16_t *_g4_t_v367;
  typedef int _g4_t_v368;
  typedef int _g4_t_v369;
  typedef int _g4_t_v370;
  typedef int _g4_t_v371;
  typedef float _g4_t_v372;
  typedef int _g4_t_v373;
  typedef int _g4_t_v374;
  typedef int _g4_t_v375;
  typedef int _g4_t_v376;
  typedef int _g4_t_v377;
  typedef int _g4_t_v378;
  typedef int _g4_t_v379;
  typedef float _g4_t_v380;
  typedef uint8_t _g4_t_v381;
  typedef int _g4_t_v382;
  typedef int _g4_t_v383;
  typedef int _g4_t_v384;
  typedef float *_g4_t_v385;
  typedef float _g4_t_v386;
  typedef int _g4_t_n;
  typedef float *_g4_t_v388;
  typedef float _g4_t_v389;
  typedef uint8_t _g4_t_v390;
  typedef int _g4_t_v391;
  typedef int _g4_t_v392;
  typedef float *_g4_t_v393;
  typedef float _g4_t_v394;
  typedef uint16_t *_g4_t_v395;
  typedef int _g4_t_v396;
  typedef float _g4_t_v397;
  typedef float _g4_t_v398;
  typedef uint8_t *_g4_t_v399;
  typedef int _g4_t_v400;
  typedef int _g4_t_v401;
  typedef float _g4_t_v402;
  typedef float _g4_t_v403;
  typedef int _g4_t_v404;
  typedef int _g4_t_v405;
  typedef int _g4_t_v406;
  typedef unsigned int _g4_t_v407;
  typedef unsigned int _g4_t_v408;
  typedef int _g4_t_v409;
  typedef int _g4_t_v410;
  typedef float *_g4_t_v411;
  typedef float _g4_t_v412;
  typedef float _g4_t_v413;
  typedef int _g4_t_v414;
  typedef int _g4_t_v415;
  typedef int _g4_t_v416;
  typedef int _g4_t_v417;
  typedef int _g4_t_v418;
  typedef int _g4_t_v419;
  typedef float _g4_t_v420;
  typedef float _g4_t_v421;
  typedef float _g4_t_v422;
  typedef int _g4_t_v423;
  typedef int _g4_t_v424;
  typedef uint8_t *_g4_t_v425;
  typedef int _g4_t_v426;
  typedef int _g4_t_v427;
  typedef float *_g4_t_v428;
  typedef int _g4_t_v429;
  typedef float _g4_t_v430;
  typedef float _g4_t_v431;
  typedef int _g4_t_v432[16];
  typedef uint8_t _g4_t_v433[256];
  typedef uint32_t _g4_t_v434[256];
  typedef uint32_t _g4_t_dest[259];
  enum : size_t {
    _g4_s0 = 2704u,
    _g4_s1 = (8u + sizeof(_g4_t_v327)) > _g4_s0 ? (8u + sizeof(_g4_t_v327)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v328)) > _g4_s1 ? (44u + sizeof(_g4_t_v328)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v329)) > _g4_s2 ? (76u + sizeof(_g4_t_v329)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v330)) > _g4_s3 ? (80u + sizeof(_g4_t_v330)) : _g4_s3,
    _g4_s5 = (108u + sizeof(_g4_t_v332)) > _g4_s4 ? (108u + sizeof(_g4_t_v332)) : _g4_s4,
    _g4_s6 = (112u + sizeof(_g4_t_v333)) > _g4_s5 ? (112u + sizeof(_g4_t_v333)) : _g4_s5,
    _g4_s7 = (116u + sizeof(_g4_t_v334)) > _g4_s6 ? (116u + sizeof(_g4_t_v334)) : _g4_s6,
    _g4_s8 = (120u + sizeof(_g4_t_v335)) > _g4_s7 ? (120u + sizeof(_g4_t_v335)) : _g4_s7,
    _g4_s9 = (124u + sizeof(_g4_t_v336)) > _g4_s8 ? (124u + sizeof(_g4_t_v336)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v337)) > _g4_s9 ? (128u + sizeof(_g4_t_v337)) : _g4_s9,
    _g4_s11 = (132u + sizeof(_g4_t_v338)) > _g4_s10 ? (132u + sizeof(_g4_t_v338)) : _g4_s10,
    _g4_s12 = (140u + sizeof(_g4_t_v339)) > _g4_s11 ? (140u + sizeof(_g4_t_v339)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v340)) > _g4_s12 ? (144u + sizeof(_g4_t_v340)) : _g4_s12,
    _g4_s14 = (148u + sizeof(_g4_t_v341)) > _g4_s13 ? (148u + sizeof(_g4_t_v341)) : _g4_s13,
    _g4_s15 = (152u + sizeof(_g4_t_v342)) > _g4_s14 ? (152u + sizeof(_g4_t_v342)) : _g4_s14,
    _g4_s16 = (156u + sizeof(_g4_t_v343)) > _g4_s15 ? (156u + sizeof(_g4_t_v343)) : _g4_s15,
    _g4_s17 = (160u + sizeof(_g4_t_v344)) > _g4_s16 ? (160u + sizeof(_g4_t_v344)) : _g4_s16,
    _g4_s18 = (164u + sizeof(_g4_t_v345)) > _g4_s17 ? (164u + sizeof(_g4_t_v345)) : _g4_s17,
    _g4_s19 = (168u + sizeof(_g4_t_v346)) > _g4_s18 ? (168u + sizeof(_g4_t_v346)) : _g4_s18,
    _g4_s20 = (172u + sizeof(_g4_t_v347)) > _g4_s19 ? (172u + sizeof(_g4_t_v347)) : _g4_s19,
    _g4_s21 = (176u + sizeof(_g4_t_v348)) > _g4_s20 ? (176u + sizeof(_g4_t_v348)) : _g4_s20,
    _g4_s22 = (184u + sizeof(_g4_t_v350)) > _g4_s21 ? (184u + sizeof(_g4_t_v350)) : _g4_s21,
    _g4_s23 = (184u + sizeof(_g4_t_v351)) > _g4_s22 ? (184u + sizeof(_g4_t_v351)) : _g4_s22,
    _g4_s24 = (188u + sizeof(_g4_t_v352)) > _g4_s23 ? (188u + sizeof(_g4_t_v352)) : _g4_s23,
    _g4_s25 = (188u + sizeof(_g4_t_v353)) > _g4_s24 ? (188u + sizeof(_g4_t_v353)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v354)) > _g4_s25 ? (188u + sizeof(_g4_t_v354)) : _g4_s25,
    _g4_s27 = (192u + sizeof(_g4_t_v355)) > _g4_s26 ? (192u + sizeof(_g4_t_v355)) : _g4_s26,
    _g4_s28 = (192u + sizeof(_g4_t_v356)) > _g4_s27 ? (192u + sizeof(_g4_t_v356)) : _g4_s27,
    _g4_s29 = (196u + sizeof(_g4_t_v357)) > _g4_s28 ? (196u + sizeof(_g4_t_v357)) : _g4_s28,
    _g4_s30 = (200u + sizeof(_g4_t_v358)) > _g4_s29 ? (200u + sizeof(_g4_t_v358)) : _g4_s29,
    _g4_s31 = (200u + sizeof(_g4_t_v359)) > _g4_s30 ? (200u + sizeof(_g4_t_v359)) : _g4_s30,
    _g4_s32 = (200u + sizeof(_g4_t_v360)) > _g4_s31 ? (200u + sizeof(_g4_t_v360)) : _g4_s31,
    _g4_s33 = (204u + sizeof(_g4_t_v361)) > _g4_s32 ? (204u + sizeof(_g4_t_v361)) : _g4_s32,
    _g4_s34 = (204u + sizeof(_g4_t_v362)) > _g4_s33 ? (204u + sizeof(_g4_t_v362)) : _g4_s33,
    _g4_s35 = (204u + sizeof(_g4_t_v363)) > _g4_s34 ? (204u + sizeof(_g4_t_v363)) : _g4_s34,
    _g4_s36 = (208u + sizeof(_g4_t_v364)) > _g4_s35 ? (208u + sizeof(_g4_t_v364)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v365)) > _g4_s36 ? (208u + sizeof(_g4_t_v365)) : _g4_s36,
    _g4_s38 = (212u + sizeof(_g4_t_v366)) > _g4_s37 ? (212u + sizeof(_g4_t_v366)) : _g4_s37,
    _g4_s39 = (212u + sizeof(_g4_t_v367)) > _g4_s38 ? (212u + sizeof(_g4_t_v367)) : _g4_s38,
    _g4_s40 = (216u + sizeof(_g4_t_v368)) > _g4_s39 ? (216u + sizeof(_g4_t_v368)) : _g4_s39,
    _g4_s41 = (216u + sizeof(_g4_t_v369)) > _g4_s40 ? (216u + sizeof(_g4_t_v369)) : _g4_s40,
    _g4_s42 = (216u + sizeof(_g4_t_v370)) > _g4_s41 ? (216u + sizeof(_g4_t_v370)) : _g4_s41,
    _g4_s43 = (216u + sizeof(_g4_t_v371)) > _g4_s42 ? (216u + sizeof(_g4_t_v371)) : _g4_s42,
    _g4_s44 = (216u + sizeof(_g4_t_v372)) > _g4_s43 ? (216u + sizeof(_g4_t_v372)) : _g4_s43,
    _g4_s45 = (220u + sizeof(_g4_t_v373)) > _g4_s44 ? (220u + sizeof(_g4_t_v373)) : _g4_s44,
    _g4_s46 = (220u + sizeof(_g4_t_v374)) > _g4_s45 ? (220u + sizeof(_g4_t_v374)) : _g4_s45,
    _g4_s47 = (220u + sizeof(_g4_t_v375)) > _g4_s46 ? (220u + sizeof(_g4_t_v375)) : _g4_s46,
    _g4_s48 = (220u + sizeof(_g4_t_v376)) > _g4_s47 ? (220u + sizeof(_g4_t_v376)) : _g4_s47,
    _g4_s49 = (220u + sizeof(_g4_t_v377)) > _g4_s48 ? (220u + sizeof(_g4_t_v377)) : _g4_s48,
    _g4_s50 = (220u + sizeof(_g4_t_v378)) > _g4_s49 ? (220u + sizeof(_g4_t_v378)) : _g4_s49,
    _g4_s51 = (220u + sizeof(_g4_t_v379)) > _g4_s50 ? (220u + sizeof(_g4_t_v379)) : _g4_s50,
    _g4_s52 = (220u + sizeof(_g4_t_v380)) > _g4_s51 ? (220u + sizeof(_g4_t_v380)) : _g4_s51,
    _g4_s53 = (224u + sizeof(_g4_t_v381)) > _g4_s52 ? (224u + sizeof(_g4_t_v381)) : _g4_s52,
    _g4_s54 = (224u + sizeof(_g4_t_v382)) > _g4_s53 ? (224u + sizeof(_g4_t_v382)) : _g4_s53,
    _g4_s55 = (224u + sizeof(_g4_t_v383)) > _g4_s54 ? (224u + sizeof(_g4_t_v383)) : _g4_s54,
    _g4_s56 = (224u + sizeof(_g4_t_v384)) > _g4_s55 ? (224u + sizeof(_g4_t_v384)) : _g4_s55,
    _g4_s57 = (224u + sizeof(_g4_t_v385)) > _g4_s56 ? (224u + sizeof(_g4_t_v385)) : _g4_s56,
    _g4_s58 = (224u + sizeof(_g4_t_v386)) > _g4_s57 ? (224u + sizeof(_g4_t_v386)) : _g4_s57,
    _g4_s59 = (228u + sizeof(_g4_t_n)) > _g4_s58 ? (228u + sizeof(_g4_t_n)) : _g4_s58,
    _g4_s60 = (228u + sizeof(_g4_t_v388)) > _g4_s59 ? (228u + sizeof(_g4_t_v388)) : _g4_s59,
    _g4_s61 = (228u + sizeof(_g4_t_v389)) > _g4_s60 ? (228u + sizeof(_g4_t_v389)) : _g4_s60,
    _g4_s62 = (232u + sizeof(_g4_t_v390)) > _g4_s61 ? (232u + sizeof(_g4_t_v390)) : _g4_s61,
    _g4_s63 = (232u + sizeof(_g4_t_v391)) > _g4_s62 ? (232u + sizeof(_g4_t_v391)) : _g4_s62,
    _g4_s64 = (232u + sizeof(_g4_t_v392)) > _g4_s63 ? (232u + sizeof(_g4_t_v392)) : _g4_s63,
    _g4_s65 = (232u + sizeof(_g4_t_v393)) > _g4_s64 ? (232u + sizeof(_g4_t_v393)) : _g4_s64,
    _g4_s66 = (232u + sizeof(_g4_t_v394)) > _g4_s65 ? (232u + sizeof(_g4_t_v394)) : _g4_s65,
    _g4_s67 = (236u + sizeof(_g4_t_v395)) > _g4_s66 ? (236u + sizeof(_g4_t_v395)) : _g4_s66,
    _g4_s68 = (236u + sizeof(_g4_t_v396)) > _g4_s67 ? (236u + sizeof(_g4_t_v396)) : _g4_s67,
    _g4_s69 = (236u + sizeof(_g4_t_v397)) > _g4_s68 ? (236u + sizeof(_g4_t_v397)) : _g4_s68,
    _g4_s70 = (236u + sizeof(_g4_t_v398)) > _g4_s69 ? (236u + sizeof(_g4_t_v398)) : _g4_s69,
    _g4_s71 = (240u + sizeof(_g4_t_v399)) > _g4_s70 ? (240u + sizeof(_g4_t_v399)) : _g4_s70,
    _g4_s72 = (240u + sizeof(_g4_t_v400)) > _g4_s71 ? (240u + sizeof(_g4_t_v400)) : _g4_s71,
    _g4_s73 = (240u + sizeof(_g4_t_v401)) > _g4_s72 ? (240u + sizeof(_g4_t_v401)) : _g4_s72,
    _g4_s74 = (240u + sizeof(_g4_t_v402)) > _g4_s73 ? (240u + sizeof(_g4_t_v402)) : _g4_s73,
    _g4_s75 = (240u + sizeof(_g4_t_v403)) > _g4_s74 ? (240u + sizeof(_g4_t_v403)) : _g4_s74,
    _g4_s76 = (244u + sizeof(_g4_t_v404)) > _g4_s75 ? (244u + sizeof(_g4_t_v404)) : _g4_s75,
    _g4_s77 = (244u + sizeof(_g4_t_v405)) > _g4_s76 ? (244u + sizeof(_g4_t_v405)) : _g4_s76,
    _g4_s78 = (244u + sizeof(_g4_t_v406)) > _g4_s77 ? (244u + sizeof(_g4_t_v406)) : _g4_s77,
    _g4_s79 = (244u + sizeof(_g4_t_v407)) > _g4_s78 ? (244u + sizeof(_g4_t_v407)) : _g4_s78,
    _g4_s80 = (244u + sizeof(_g4_t_v408)) > _g4_s79 ? (244u + sizeof(_g4_t_v408)) : _g4_s79,
    _g4_s81 = (244u + sizeof(_g4_t_v409)) > _g4_s80 ? (244u + sizeof(_g4_t_v409)) : _g4_s80,
    _g4_s82 = (244u + sizeof(_g4_t_v410)) > _g4_s81 ? (244u + sizeof(_g4_t_v410)) : _g4_s81,
    _g4_s83 = (244u + sizeof(_g4_t_v411)) > _g4_s82 ? (244u + sizeof(_g4_t_v411)) : _g4_s82,
    _g4_s84 = (244u + sizeof(_g4_t_v412)) > _g4_s83 ? (244u + sizeof(_g4_t_v412)) : _g4_s83,
    _g4_s85 = (244u + sizeof(_g4_t_v413)) > _g4_s84 ? (244u + sizeof(_g4_t_v413)) : _g4_s84,
    _g4_s86 = (248u + sizeof(_g4_t_v414)) > _g4_s85 ? (248u + sizeof(_g4_t_v414)) : _g4_s85,
    _g4_s87 = (248u + sizeof(_g4_t_v415)) > _g4_s86 ? (248u + sizeof(_g4_t_v415)) : _g4_s86,
    _g4_s88 = (248u + sizeof(_g4_t_v416)) > _g4_s87 ? (248u + sizeof(_g4_t_v416)) : _g4_s87,
    _g4_s89 = (248u + sizeof(_g4_t_v417)) > _g4_s88 ? (248u + sizeof(_g4_t_v417)) : _g4_s88,
    _g4_s90 = (248u + sizeof(_g4_t_v418)) > _g4_s89 ? (248u + sizeof(_g4_t_v418)) : _g4_s89,
    _g4_s91 = (248u + sizeof(_g4_t_v419)) > _g4_s90 ? (248u + sizeof(_g4_t_v419)) : _g4_s90,
    _g4_s92 = (248u + sizeof(_g4_t_v420)) > _g4_s91 ? (248u + sizeof(_g4_t_v420)) : _g4_s91,
    _g4_s93 = (248u + sizeof(_g4_t_v421)) > _g4_s92 ? (248u + sizeof(_g4_t_v421)) : _g4_s92,
    _g4_s94 = (248u + sizeof(_g4_t_v422)) > _g4_s93 ? (248u + sizeof(_g4_t_v422)) : _g4_s93,
    _g4_s95 = (252u + sizeof(_g4_t_v423)) > _g4_s94 ? (252u + sizeof(_g4_t_v423)) : _g4_s94,
    _g4_s96 = (252u + sizeof(_g4_t_v424)) > _g4_s95 ? (252u + sizeof(_g4_t_v424)) : _g4_s95,
    _g4_s97 = (252u + sizeof(_g4_t_v425)) > _g4_s96 ? (252u + sizeof(_g4_t_v425)) : _g4_s96,
    _g4_s98 = (252u + sizeof(_g4_t_v426)) > _g4_s97 ? (252u + sizeof(_g4_t_v426)) : _g4_s97,
    _g4_s99 = (252u + sizeof(_g4_t_v427)) > _g4_s98 ? (252u + sizeof(_g4_t_v427)) : _g4_s98,
    _g4_s100 = (252u + sizeof(_g4_t_v428)) > _g4_s99 ? (252u + sizeof(_g4_t_v428)) : _g4_s99,
    _g4_s101 = (252u + sizeof(_g4_t_v429)) > _g4_s100 ? (252u + sizeof(_g4_t_v429)) : _g4_s100,
    _g4_s102 = (252u + sizeof(_g4_t_v430)) > _g4_s101 ? (252u + sizeof(_g4_t_v430)) : _g4_s101,
    _g4_s103 = (252u + sizeof(_g4_t_v431)) > _g4_s102 ? (252u + sizeof(_g4_t_v431)) : _g4_s102,
    _g4_s104 = (256u + sizeof(_g4_t_v432)) > _g4_s103 ? (256u + sizeof(_g4_t_v432)) : _g4_s103,
    _g4_s105 = (320u + sizeof(_g4_t_v433)) > _g4_s104 ? (320u + sizeof(_g4_t_v433)) : _g4_s104,
    _g4_s106 = (576u + sizeof(_g4_t_v434)) > _g4_s105 ? (576u + sizeof(_g4_t_v434)) : _g4_s105,
    _g4_s107 = (1600u + sizeof(_g4_t_dest)) > _g4_s106 ? (1600u + sizeof(_g4_t_dest)) : _g4_s106
  };
  alignas(16) uint8_t _g4_sf[_g4_s107];
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 8u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 44u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 76u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 80u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 108u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 112u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 116u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 120u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 124u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 128u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 132u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 140u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 144u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 148u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 152u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 156u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 160u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 164u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 168u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 172u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 176u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 184u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 184u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 188u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 188u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 188u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 192u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 192u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 196u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 200u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 200u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 200u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 204u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 204u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 204u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 208u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 208u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 212u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 212u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 216u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 216u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 216u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 216u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 216u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 220u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 220u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 220u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 220u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 220u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 220u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 220u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 220u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 224u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 224u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 224u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 224u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 224u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 224u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 228u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 228u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 228u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 232u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 232u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 232u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 232u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 232u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 236u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 236u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 236u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 236u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 240u);
  _g4_t_v400 &v400 = *reinterpret_cast<_g4_t_v400 *>(_g4_sf + 240u);
  _g4_t_v401 &v401 = *reinterpret_cast<_g4_t_v401 *>(_g4_sf + 240u);
  _g4_t_v402 &v402 = *reinterpret_cast<_g4_t_v402 *>(_g4_sf + 240u);
  _g4_t_v403 &v403 = *reinterpret_cast<_g4_t_v403 *>(_g4_sf + 240u);
  _g4_t_v404 &v404 = *reinterpret_cast<_g4_t_v404 *>(_g4_sf + 244u);
  _g4_t_v405 &v405 = *reinterpret_cast<_g4_t_v405 *>(_g4_sf + 244u);
  _g4_t_v406 &v406 = *reinterpret_cast<_g4_t_v406 *>(_g4_sf + 244u);
  _g4_t_v407 &v407 = *reinterpret_cast<_g4_t_v407 *>(_g4_sf + 244u);
  _g4_t_v408 &v408 = *reinterpret_cast<_g4_t_v408 *>(_g4_sf + 244u);
  _g4_t_v409 &v409 = *reinterpret_cast<_g4_t_v409 *>(_g4_sf + 244u);
  _g4_t_v410 &v410 = *reinterpret_cast<_g4_t_v410 *>(_g4_sf + 244u);
  _g4_t_v411 &v411 = *reinterpret_cast<_g4_t_v411 *>(_g4_sf + 244u);
  _g4_t_v412 &v412 = *reinterpret_cast<_g4_t_v412 *>(_g4_sf + 244u);
  _g4_t_v413 &v413 = *reinterpret_cast<_g4_t_v413 *>(_g4_sf + 244u);
  _g4_t_v414 &v414 = *reinterpret_cast<_g4_t_v414 *>(_g4_sf + 248u);
  _g4_t_v415 &v415 = *reinterpret_cast<_g4_t_v415 *>(_g4_sf + 248u);
  _g4_t_v416 &v416 = *reinterpret_cast<_g4_t_v416 *>(_g4_sf + 248u);
  _g4_t_v417 &v417 = *reinterpret_cast<_g4_t_v417 *>(_g4_sf + 248u);
  _g4_t_v418 &v418 = *reinterpret_cast<_g4_t_v418 *>(_g4_sf + 248u);
  _g4_t_v419 &v419 = *reinterpret_cast<_g4_t_v419 *>(_g4_sf + 248u);
  _g4_t_v420 &v420 = *reinterpret_cast<_g4_t_v420 *>(_g4_sf + 248u);
  _g4_t_v421 &v421 = *reinterpret_cast<_g4_t_v421 *>(_g4_sf + 248u);
  _g4_t_v422 &v422 = *reinterpret_cast<_g4_t_v422 *>(_g4_sf + 248u);
  _g4_t_v423 &v423 = *reinterpret_cast<_g4_t_v423 *>(_g4_sf + 252u);
  _g4_t_v424 &v424 = *reinterpret_cast<_g4_t_v424 *>(_g4_sf + 252u);
  _g4_t_v425 &v425 = *reinterpret_cast<_g4_t_v425 *>(_g4_sf + 252u);
  _g4_t_v426 &v426 = *reinterpret_cast<_g4_t_v426 *>(_g4_sf + 252u);
  _g4_t_v427 &v427 = *reinterpret_cast<_g4_t_v427 *>(_g4_sf + 252u);
  _g4_t_v428 &v428 = *reinterpret_cast<_g4_t_v428 *>(_g4_sf + 252u);
  _g4_t_v429 &v429 = *reinterpret_cast<_g4_t_v429 *>(_g4_sf + 252u);
  _g4_t_v430 &v430 = *reinterpret_cast<_g4_t_v430 *>(_g4_sf + 252u);
  _g4_t_v431 &v431 = *reinterpret_cast<_g4_t_v431 *>(_g4_sf + 252u);
  _g4_t_v432 &v432 = *reinterpret_cast<_g4_t_v432 *>(_g4_sf + 256u);
  _g4_t_v433 &v433 = *reinterpret_cast<_g4_t_v433 *>(_g4_sf + 320u);
  _g4_t_v434 &v434 = *reinterpret_cast<_g4_t_v434 *>(_g4_sf + 576u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 1600u);

  v348 = *(uint32_t *)(a1 + 4 * *a3 + 120);
  v357 = (uint16_t *)(*(uint32_t *)(a1 + 420) + 40 * a4);
  v8 = *(uint32_t *)(a1 + 4);
  if ( v8 <= 0 )
    goto LABEL_160;
  v434[0] = 0;
  v9 = *((uint8_t *)v357 + *(uint8_t *)(*((uint32_t *)v357 + 1) + 2) + 9);
  if ( *(uint16_t *)(a1 + 2 * v9 + 148) == 0 )
  {
LABEL_229:
    *(uint32_t *)(a1 + 116) = 21;
    return 0;
  }
  v350 = 3;
  v352 = 0;
  v10 = a1;
  while ( 2 )
  {
    v423 = *(uint32_t *)(v10 + 276);
    if ( sub_1049200(v10, 1, v423) == 0 )
    {
LABEL_4:
      v434[v352] = 1;
      goto LABEL_5;
    }
    v399 = (uint8_t *)(v423 + 1596 * v9);
    v14 = dword_1CC1C8C[v399[1588]];
    v366 = v14;
    v395 = *(uint16_t **)(v10 + 4 * v352 + 1012);
    if ( (unsigned int)v14 > 0x3FFF )
    {
      if ( (unsigned int)v14 > 0xFFFFFF )
      {
        if ( (unsigned int)v14 > 0x1FFFFFFF )
        {
          v68 = -1;
          if ( v14 >= 0 )
            v68 = byte_1CC1C80[v14 >> 30] + 29;
          *v395 = sub_1049200(v10, v68, v13);
          v15 = -1;
          if ( v366 >= 0 )
            v15 = byte_1CC1C80[v366 >> 30] + 29;
          goto LABEL_13;
        }
        v15 = byte_1CC1C80[v14 >> 25] + 24;
        goto LABEL_12;
      }
      if ( (unsigned int)v14 <= 0x7FFFF )
      {
        v15 = byte_1CC1C80[v14 >> 15] + 14;
        goto LABEL_12;
      }
      v15 = byte_1CC1C80[v14 >> 20] + 19;
LABEL_159:
      *v395 = sub_1049200(v10, v15, v13);
      goto LABEL_13;
    }
    if ( (unsigned int)v14 <= 0xF )
    {
      v15 = byte_1CC1C80[v14] - 1;
      goto LABEL_159;
    }
    if ( (unsigned int)v14 > 0x1FF )
    {
      v15 = byte_1CC1C80[v14 >> 10] + 9;
      goto LABEL_159;
    }
    v15 = byte_1CC1C80[v14 >> 5] + 4;
LABEL_12:
    v16 = sub_1049200(v10, v15, v13);
    v17 = (int)(uintptr_t)(v395);
    *v395 = v16;
LABEL_13:
    v395[1] = sub_1049200(v10, v15, v17);
    if ( *v399 == 0 )
      goto LABEL_55;
    v404 = 2;
    v368 = 0;
    do
    {
      v424 = 0;
      v18 = v399[v368 + 1];
      v381 = v399[v18 + 33];
      v390 = v399[v18 + 49];
      if ( v390 != 0 )
      {
        v414 = *(uint32_t *)(v10 + 140) + 2096 * v399[v18 + 65];
        v19 = *(uint32_t *)(v10 + 1412);
        if ( v19 > 9 )
        {
LABEL_17:
          v20 = *(uint32_t *)(v10 + 1408);
LABEL_18:
          v424 = *(int16_t *)(v414 + 2 * (v20 & 0x3FF) + 36);
          if ( v424 < 0 )
          {
            v424 = sub_1048C60(v10, v414);
          }
          else
          {
            v373 = *(uint8_t *)(*(uint32_t *)(v414 + 8) + v424);
            *(uint32_t *)(v10 + 1408) = v20 >> v373;
            v21 = *(uint32_t *)(v10 + 1412) - v373;
            *(uint32_t *)(v10 + 1412) = v21;
            if ( v21 < 0 )
            {
              *(uint32_t *)(v10 + 1412) = 0;
              v424 = -1;
            }
          }
          if ( *(uint8_t *)(v414 + 23) != 0 )
            v424 = *(uint32_t *)(*(uint32_t *)(v414 + 2088) + 4 * v424);
          goto LABEL_23;
        }
        if ( v19 == 0 )
          *(uint32_t *)(v10 + 1408) = 0;
        while ( 1 )
        {
          v55 = *(uint8_t *)(v10 + 1392);
          if ( *(uint32_t *)(v10 + 1400) != 0 )
          {
            if ( v55 == 0 )
            {
              v20 = *(uint32_t *)(v10 + 1408);
              goto LABEL_18;
            }
          }
          else if ( v55 == 0 )
          {
            v57 = *(uint32_t *)(v10 + 1396);
            if ( v57 == -1 )
            {
              *(uint32_t *)(v10 + 1404) = *(uint32_t *)(v10 + 1132) - 1;
              v59 = *(char **)(v10 + 32);
              if ( v59 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v59) >= *(uint32_t *)(v10 + 40) )
                  goto LABEL_127;
                v60 = *v59;
                *(uint32_t *)(v10 + 32) = (uint32_t)(uintptr_t)(v59 + 1);
              }
              else
              {
                v111 = fgetc(*(vox::StreamCursorInterface::Self **)(v10 + 20));
                if ( v111 == -1 )
                  goto LABEL_127;
                v60 = v111;
              }
              if ( v60 != 79 )
                goto LABEL_121;
              v63 = *(char **)(v10 + 32);
              if ( v63 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v63) >= *(uint32_t *)(v10 + 40) )
                  goto LABEL_127;
                v64 = *v63;
                *(uint32_t *)(v10 + 32) = (uint32_t)(uintptr_t)(v63 + 1);
              }
              else
              {
                v112 = fgetc(*(vox::StreamCursorInterface::Self **)(v10 + 20));
                if ( v112 == -1 )
                  goto LABEL_127;
                v64 = v112;
              }
              if ( v64 != 103 )
                goto LABEL_121;
              v65 = *(char **)(v10 + 32);
              if ( v65 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v65) >= *(uint32_t *)(v10 + 40) )
                  goto LABEL_127;
                v66 = *v65;
                *(uint32_t *)(v10 + 32) = (uint32_t)(uintptr_t)(v65 + 1);
              }
              else
              {
                v113 = fgetc(*(vox::StreamCursorInterface::Self **)(v10 + 20));
                if ( v113 == -1 )
                {
LABEL_127:
                  *(uint32_t *)(v10 + 112) = 1;
LABEL_121:
                  *(uint32_t *)(v10 + 116) = 30;
LABEL_122:
                  *(uint32_t *)(v10 + 1400) = 1;
                  goto LABEL_17;
                }
                v66 = v113;
              }
              if ( v66 != 103 || (uint8_t)sub_1047790(v10) != 83 )
                goto LABEL_121;
              if ( sub_1047F90(v10) == 0 )
                goto LABEL_122;
              if ( (*(uint8_t *)(v10 + 1391) & 1) == 0 )
              {
                *(uint32_t *)(v10 + 116) = 32;
                goto LABEL_17;
              }
              v57 = *(uint32_t *)(v10 + 1396);
            }
            v55 = *(uint8_t *)(v10 + v57 + 1136);
            *(uint32_t *)(v10 + 1396) = v57 + 1;
            if ( v55 != 255 )
            {
              *(uint32_t *)(v10 + 1400) = 1;
              *(uint32_t *)(v10 + 1404) = v57;
            }
            if ( v57 + 1 >= *(uint32_t *)(v10 + 1132) )
              *(uint32_t *)(v10 + 1396) = -1;
            *(uint8_t *)(v10 + 1392) = v55;
            if ( v55 == 0 )
              goto LABEL_17;
          }
          v56 = *(uint8_t **)(v10 + 32);
          ++*(uint32_t *)(v10 + 1416);
          *(uint8_t *)(v10 + 1392) = v55 - 1;
          if ( v56 == nullptr )
            break;
          if ( (unsigned int)(uintptr_t)(v56) >= *(uint32_t *)(v10 + 40) )
            goto LABEL_105;
          v51 = *v56;
          v52 = *(uint32_t *)(v10 + 1412);
          *(uint32_t *)(v10 + 32) = (uint32_t)(uintptr_t)(v56 + 1);
          v53 = v51 << v52;
LABEL_100:
          v54 = v52 + 8;
          v20 = *(uint32_t *)(v10 + 1408) + v53;
          *(uint32_t *)(v10 + 1408) = v20;
          *(uint32_t *)(v10 + 1412) = v54;
          if ( v54 > 24 )
            goto LABEL_18;
        }
        v58 = fgetc(*(vox::StreamCursorInterface::Self **)(v10 + 20));
        if ( v58 != -1 )
        {
          v52 = *(uint32_t *)(v10 + 1412);
          v53 = (uint8_t)v58 << v52;
          goto LABEL_100;
        }
LABEL_105:
        *(uint32_t *)(v10 + 112) = 1;
        v52 = *(uint32_t *)(v10 + 1412);
        v53 = 0;
        goto LABEL_100;
      }
LABEL_23:
      if ( v381 == 0 )
        goto LABEL_54;
      v358 = v381;
      v361 = v404 + 1;
      v405 = v404 + 1;
      v382 = v381 + 1;
      v415 = 1;
      v374 = 8 * v18;
      do
      {
        v28 = ((1 << v390) - 1) & v424;
        v424 >>= v390;
        v29 = *(int16_t *)&v399[2 * v28 + 82 + 2 * v374];
        if ( v29 < 0 )
        {
          v395[v405 - 1] = 0;
          goto LABEL_33;
        }
        v22 = *(uint32_t *)(v10 + 1412);
        v23 = *(uint32_t *)(v10 + 140) + 2096 * v29;
        if ( v22 <= 9 )
        {
          if ( v22 == 0 )
            *(uint32_t *)(v10 + 1408) = 0;
          while ( 1 )
          {
            v34 = *(uint8_t *)(v10 + 1392);
            if ( *(uint32_t *)(v10 + 1400) != 0 )
            {
              if ( v34 == 0 )
              {
                v24 = *(uint32_t *)(v10 + 1408);
                goto LABEL_27;
              }
            }
            else if ( v34 == 0 )
            {
              v36 = *(uint32_t *)(v10 + 1396);
              if ( v36 == -1 )
              {
                *(uint32_t *)(v10 + 1404) = *(uint32_t *)(v10 + 1132) - 1;
                v45 = *(char **)(v10 + 32);
                if ( v45 != nullptr )
                {
                  if ( (unsigned int)(uintptr_t)(v45) >= *(uint32_t *)(v10 + 40) )
                    goto LABEL_81;
                  v46 = *v45;
                  *(uint32_t *)(v10 + 32) = (uint32_t)(uintptr_t)(v45 + 1);
                }
                else
                {
                  v61 = fgetc(*(vox::StreamCursorInterface::Self **)(v10 + 20));
                  if ( v61 == -1 )
                    goto LABEL_81;
                  v46 = v61;
                }
                if ( v46 != 79 )
                  goto LABEL_75;
                v47 = *(char **)(v10 + 32);
                if ( v47 != nullptr )
                {
                  if ( (unsigned int)(uintptr_t)(v47) >= *(uint32_t *)(v10 + 40) )
                    goto LABEL_81;
                  v48 = *v47;
                  *(uint32_t *)(v10 + 32) = (uint32_t)(uintptr_t)(v47 + 1);
                }
                else
                {
                  v67 = fgetc(*(vox::StreamCursorInterface::Self **)(v10 + 20));
                  if ( v67 == -1 )
                    goto LABEL_81;
                  v48 = v67;
                }
                if ( v48 != 103 )
                  goto LABEL_75;
                v49 = *(char **)(v10 + 32);
                if ( v49 != nullptr )
                {
                  if ( (unsigned int)(uintptr_t)(v49) >= *(uint32_t *)(v10 + 40) )
                    goto LABEL_81;
                  v50 = *v49;
                  *(uint32_t *)(v10 + 32) = (uint32_t)(uintptr_t)(v49 + 1);
                }
                else
                {
                  v325 = fgetc(*(vox::StreamCursorInterface::Self **)(v10 + 20));
                  if ( v325 == -1 )
                  {
LABEL_81:
                    *(uint32_t *)(v10 + 112) = 1;
LABEL_75:
                    *(uint32_t *)(v10 + 116) = 30;
LABEL_76:
                    *(uint32_t *)(v10 + 1400) = 1;
                    goto LABEL_26;
                  }
                  v50 = v325;
                }
                if ( v50 != 103 || (uint8_t)sub_1047790(v10) != 83 )
                  goto LABEL_75;
                if ( sub_1047F90(v10) == 0 )
                  goto LABEL_76;
                if ( (*(uint8_t *)(v10 + 1391) & 1) == 0 )
                {
                  *(uint32_t *)(v10 + 116) = 32;
                  goto LABEL_26;
                }
                v36 = *(uint32_t *)(v10 + 1396);
              }
              v34 = *(uint8_t *)(v10 + v36 + 1136);
              *(uint32_t *)(v10 + 1396) = v36 + 1;
              if ( v34 != 255 )
              {
                *(uint32_t *)(v10 + 1400) = 1;
                *(uint32_t *)(v10 + 1404) = v36;
              }
              if ( v36 + 1 >= *(uint32_t *)(v10 + 1132) )
                *(uint32_t *)(v10 + 1396) = -1;
              *(uint8_t *)(v10 + 1392) = v34;
              if ( v34 == 0 )
                goto LABEL_26;
            }
            v35 = *(uint8_t **)(v10 + 32);
            ++*(uint32_t *)(v10 + 1416);
            *(uint8_t *)(v10 + 1392) = v34 - 1;
            if ( v35 == nullptr )
              break;
            if ( (unsigned int)(uintptr_t)(v35) >= *(uint32_t *)(v10 + 40) )
              goto LABEL_44;
            v30 = *v35;
            v31 = *(uint32_t *)(v10 + 1412);
            *(uint32_t *)(v10 + 32) = (uint32_t)(uintptr_t)(v35 + 1);
            v32 = v30 << v31;
LABEL_39:
            v33 = v31 + 8;
            v24 = *(uint32_t *)(v10 + 1408) + v32;
            *(uint32_t *)(v10 + 1408) = v24;
            *(uint32_t *)(v10 + 1412) = v33;
            if ( v33 > 24 )
              goto LABEL_27;
          }
          v44 = fgetc(*(vox::StreamCursorInterface::Self **)(v10 + 20));
          if ( v44 != -1 )
          {
            v31 = *(uint32_t *)(v10 + 1412);
            v32 = (uint8_t)v44 << v31;
            goto LABEL_39;
          }
LABEL_44:
          *(uint32_t *)(v10 + 112) = 1;
          v31 = *(uint32_t *)(v10 + 1412);
          v32 = 0;
          goto LABEL_39;
        }
LABEL_26:
        v24 = *(uint32_t *)(v10 + 1408);
LABEL_27:
        v25 = *(int16_t *)(v23 + 2 * (v24 & 0x3FF) + 36);
        if ( v25 < 0 )
        {
          v25 = sub_1048C60(v10, v23);
        }
        else
        {
          v26 = *(uint8_t *)(*(uint32_t *)(v23 + 8) + v25);
          *(uint32_t *)(v10 + 1408) = v24 >> v26;
          v27 = *(uint32_t *)(v10 + 1412) - v26;
          *(uint32_t *)(v10 + 1412) = v27;
          if ( v27 < 0 )
          {
            *(uint32_t *)(v10 + 1412) = 0;
            v25 = -1;
          }
        }
        if ( *(uint8_t *)(v23 + 23) != 0 )
          v25 = *(uint32_t *)(*(uint32_t *)(v23 + 2088) + 4 * v25);
        v395[v405 - 1] = v25;
LABEL_33:
        ++v415;
        ++v405;
      }
      while ( v415 != v382 );
      v404 = v361 + v358 - 1;
LABEL_54:
      ++v368;
    }
    while ( v368 < *v399 );
LABEL_55:
    if ( *(uint32_t *)(v10 + 1412) == -1 )
      goto LABEL_4;
    v433[1] = 1;
    v433[0] = 1;
    v37 = *((uint32_t *)v399 + 398);
    if ( v37 > 2 )
    {
      v383 = v10;
      v425 = v399 + 1092;
      for ( i = 2; i < v37; ++i )
      {
        v406 = *v425;
        v391 = v425[1];
        v375 = *(uint16_t *)&v399[2 * v406 + 338];
        v416 = (int16_t)v395[v406];
        v39 = (int16_t)v395[v391] - v416;
        v40 = (int)((*((uint16_t *)v425 - 375) - v375) * __builtin_abs(v39))
            / (*(uint16_t *)&v399[2 * v391 + 338] - v375);
        v376 = (int16_t)v395[i];
        v41 = v416 - v40;
        v42 = v416 + v40;
        if ( v39 >= 0 )
          v41 = v42;
        v43 = 2 * (v366 - v41);
        if ( v41 <= v366 - v41 )
          v43 = 2 * v41;
        if ( v395[i] != 0 )
        {
          v433[v391] = 1;
          v433[v406] = 1;
          v433[i] = 1;
          if ( v376 < v43 )
          {
            if ( (v376 & 1) != 0 )
              LOWORD(v41) = v41 - ((v376 + 1) >> 1);
            else
              v41 += v376 >> 1;
            v395[i] = v41;
          }
          else if ( v41 >= v366 - v41 )
          {
            v395[i] = ~(uint16_t)v376 + v366;
          }
        }
        else
        {
          v433[i] = 0;
          v395[i] = v41;
        }
        v425 += 2;
        v37 = *((uint32_t *)v399 + 398);
      }
      v10 = v383;
    }
    if ( v37 > 0 )
    {
      for ( j = 0; j < v37; ++j )
      {
        if ( v433[j] == 0 )
        {
          v395[j] = -1;
          v37 = *((uint32_t *)v399 + 398);
        }
      }
    }
LABEL_5:
    ++v352;
    v8 = *(uint32_t *)(v10 + 4);
    if ( v352 < v8 )
    {
      v11 = v350;
      v350 += 3;
      v12 = *(uint8_t *)(*((uint32_t *)v357 + 1) + v11 + 2);
      v434[v352] = 0;
      v9 = *((uint8_t *)v357 + v12 + 9);
      if ( *(uint16_t *)(v10 + 2 * v9 + 148) == 0 )
        goto LABEL_229;
      continue;
    }
    break;
  }
LABEL_160:
  memcpy(dest, v434, 4 * v8);
  v69 = *v357;
  if ( *v357 != 0 )
  {
    v70 = *((uint32_t *)v357 + 1);
    v71 = 0;
    do
    {
      v72 = *(uint8_t *)(v70 + v71);
      v73 = *(uint8_t *)(v70 + v71 + 1);
      if ( v434[v72] == 0 || v434[v73] == 0 )
      {
        v434[v73] = 0;
        v434[v72] = 0;
      }
      v71 += 3;
    }
    while ( v71 != 3 * v69 );
  }
  v351 = v348 >> 1;
  if ( *((uint8_t *)v357 + 8) != 0 )
  {
    v74 = 0;
    do
    {
      v426 = *(uint32_t *)(a1 + 4);
      if ( v426 <= 0 )
      {
        v417 = 0;
      }
      else
      {
        v75 = 0;
        v417 = 0;
        for ( k = 0; k < v426; ++k )
        {
          while ( *(uint8_t *)(*((uint32_t *)v357 + 1) + v75 + 2) != v74 )
          {
            ++k;
            v75 += 3;
            if ( k >= v426 )
              goto LABEL_175;
          }
          if ( v434[k] != 0 )
          {
            v433[v417] = 1;
            v432[v417] = 0;
          }
          else
          {
            v85 = *(uint32_t *)(a1 + 4 * k + 816);
            v433[v417] = 0;
            v432[v417] = v85;
          }
          ++v417;
          v75 += 3;
        }
      }
LABEL_175:
      v327 = *((uint8_t *)v357 + v74++ + 24);
      sub_1049EC0((uint32_t *)a1, v432, v417, v351, v327, v433);
    }
    while ( v74 < *((uint8_t *)v357 + 8) );
    v69 = *v357;
  }
  v77 = v69 - 1;
  if ( v77 != -1 )
  {
    v78 = 3 * v77;
    do
    {
      v79 = (uint8_t *)(*((uint32_t *)v357 + 1) + v78);
      v427 = *(uint32_t *)(a1 + 4 * *v79 + 816);
      v80 = *(float **)(a1 + 4 * v79[1] + 816);
      if ( v351 > 0 )
      {
        for ( m = 0; m != v351; ++m )
        {
          v83 = *(float *)(v427 + 4 * m);
          v84 = *v80;
          if ( v83 > 0.0 )
          {
            v82 = *(float *)(v427 + 4 * m);
            if ( v84 <= 0.0 )
              v83 = v83 + v84;
            else
              v82 = v83 - v84;
          }
          else if ( v84 <= 0.0 )
          {
            v82 = *(float *)(v427 + 4 * m);
            v83 = v83 - v84;
          }
          else
          {
            v82 = v84 + v83;
          }
          *(float *)(v427 + 4 * m) = v83;
          *v80++ = v82;
        }
      }
      v78 -= 3;
    }
    while ( v78 != -3 );
  }
  if ( *(int *)(a1 + 4) > 0 )
  {
    v338 = 4 * v351;
    v364 = a1 + 816;
    v359 = 0;
    v362 = 0;
    v355 = v351 + 1;
    do
    {
      if ( dest[v362] != 0 )
      {
        memset(*(void **)v364, 0, v338);
      }
      else
      {
        v367 = *(int16_t **)(v364 + 196);
        v428 = *(float **)v364;
        v86 = *((uint8_t *)v357 + *(uint8_t *)(*((uint32_t *)v357 + 1) + v359 + 2) + 9);
        if ( *(uint16_t *)(a1 + 2 * v86 + 148) != 0 )
        {
          v369 = *(uint32_t *)(a1 + 276) + 1596 * v86;
          v418 = 0;
          v88 = *(uint32_t *)(v369 + 1592);
          v89 = *(uint8_t *)(v369 + 1588) * *v367;
          if ( v88 > 1 )
          {
            for ( n = 1; n < v88; ++n )
            {
              v90 = *(uint8_t *)(v369 + n + 838);
              v91 = v367[v90];
              if ( v91 >= 0 )
              {
                v384 = v91 * *(uint8_t *)(v369 + 1588);
                v377 = *(uint16_t *)(v369 + 2 * v90 + 338);
                v407 = __builtin_abs(v384 - v89);
                v400 = (v384 - v89) / (v377 - v418);
                v92 = v400 + 1;
                if ( v384 - v89 < 0 )
                  v92 = v400 - 1;
                v396 = v92;
                v93 = v348 >> 1;
                v408 = v407 - (v377 - v418) * __builtin_abs((v384 - v89) / (v377 - v418));
                if ( v377 <= v351 )
                  v93 = v377;
                v392 = v93;
                v428[v418] = v428[v418] * dword_1CC1CA0[v89];
                v94 = v418 + 1;
                v95 = 0;
                if ( v418 + 1 >= v392 )
                {
                  v418 = v377;
                  v88 = *(uint32_t *)(v369 + 1592);
                  v89 = v384;
                }
                else
                {
                  v353 = v377 - v418;
                  do
                  {
                    v96 = v89 + v396;
                    v97 = v95 + v408;
                    v89 += v400;
                    v95 = v95 + v408 - v353;
                    if ( v353 > v97 )
                      v95 = v97;
                    else
                      v89 = v96;
                    v428[v94] = v428[v94] * dword_1CC1CA0[v89];
                    ++v94;
                  }
                  while ( v94 != v392 );
                  v89 = v384;
                  v88 = *(uint32_t *)(v369 + 1592);
                  v418 = v377;
                }
              }
            }
          }
          if ( v351 > v418 )
          {
g4_m128_raw(v98) = LODWORD(dword_1CC1CA0[v89]);
            v99 = v355 + ~v418;
            v100 = &v428[v418];
            v101 = -((uint8_t)(((uint8_t)(uintptr_t)(v428) + 4 * v418) & 0xF) >> 2) & 3;
            if ( v101 > v99 )
              v101 = v355 + ~v418;
            if ( v101 == 0 )
              goto LABEL_366;
            v409 = v418;
            v102 = v418;
            do
            {
              v428[v102] = v428[v102] *g4_m128_lane<float>(v98, 0);
              v418 = ++v102;
            }
            while ( v101 > v102 - v409 );
            if ( v101 != v99 )
            {
LABEL_366:
              v103 = v99 - v101;
              v104 = (v99 - v101) >> 2;
              v410 = 4 * v104;
              if ( 4 * v104 == 0 )
                goto LABEL_224;
              v105 = (char *)&v100[v101];
              v106 = 0;
              v107 = _mm_shuffle_ps(v98, v98, 0);
              v108 = 0;
              do
              {
                ++v108;
                *(__m128 *)&v105[v106] = _mm_mul_ps(*(__m128 *)&v105[v106], v107);
                v106 += 16;
              }
              while ( v108 < v104 );
              v418 += v410;
              if ( v103 != v410 )
              {
LABEL_224:
                v109 = v418;
                do
                {
                  v428[v109] = v428[v109] *g4_m128_lane<float>(v98, 0);
                  ++v109;
                }
                while ( v351 > v109 );
              }
            }
          }
        }
        else
        {
          *(uint32_t *)(a1 + 116) = 21;
        }
      }
      ++v362;
      v364 += 4;
      v359 += 3;
      v87 = *(uint32_t *)(a1 + 4);
    }
    while ( v362 < v87 );
    if ( v87 > 0 )
    {
      v334 = 4 * (v348 >> 2);
      v342 = 4 * v351 - 32;
      v344 = v351 - 1;
      v336 = -(v348 >> 3);
      v335 = v348 >> 4;
      v339 = -(v348 >> 4);
      v330 = *(uint32_t *)(a1 + 108);
      v343 = v348 >> 5;
      v333 = v334 - 16;
      v332 = 4 * v351 - 16;
      v328 = v351 - 1;
      v341 = 0;
      v114 = a1;
      do
      {
        v337 = *a3;
        v356 = *(float **)(v114 + 4 * v341 + 816);
        v347 = sub_4EC020(v338, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"), (int)(uintptr_t)("inverse_mdct"), 2429);
        v329 = 4 * v351 - 8;
        v115 = (float *)(v329 + v347);
        v365 = *(float **)(a1 + 4 * v337 + 1084);
        v340 = &v356[v338 / 4];
        v116 = v365;
        if ( v356 != &v356[v338 / 4] )
        {
          v117 = *(float **)(a1 + 4 * v337 + 1084);
          v118 = (float *)(v329 + v347);
          v119 = v356;
          do
          {
            v118[1] = (float)(*v117 * *v119) - (float)(v117[1] * v119[2]);
            v120 = *v117;
            v121 = v117[1];
            v117 += 2;
            v122 = v120 * v119[2];
            v123 = v121 * *v119;
            v119 += 4;
            *v118 = v122 + v123;
            v118 -= 2;
          }
          while ( &v356[v338 / 4] != v119 );
          v116 = &v365[2 * ((v338 - 16) >> 4) + 2];
          v115 = &v115[-2 * ((v338 - 16) >> 4) - 2];
        }
        if ( v347 <= (unsigned int)(uintptr_t)(v115) )
        {
          v124 = &v356[v351 - 3];
          do
          {
            v115[1] = (float)(v116[1] * *v124) - (float)(v124[2] * *v116);
            v125 = -v124[2];
            v126 = *v124 * *v116;
            v124 -= 4;
            v127 = v125 * v116[1];
            v116 += 2;
            *v115 = v127 - v126;
            v115 -= 2;
          }
          while ( v347 <= (unsigned int)(uintptr_t)(v115) );
        }
        v128 = (float *)((char *)v365 + v342);
        if ( !__CFADD__(v342, v365) )
        {
          v129 = (float *)(v334 + v347);
          v130 = &v356[v334 / 4u];
          v131 = v356;
          v132 = (float *)v347;
          do
          {
            v133 = v132[1];
            v134 = v129[1];
            v135 = v134 + v133;
            v136 = v134 - v133;
            v137 = *v129 - *v132;
            v130[1] = v135;
            *v130 = *v132 + *v129;
            v131[1] = (float)(v128[4] * v136) - (float)(v128[5] * v137);
            *v131 = (float)(v136 * v128[5]) + (float)(v137 * v128[4]);
            v138 = v132[3];
            v139 = v129[3];
            v140 = v139 + v138;
            v141 = v139 - v138;
            v142 = v129[2] - v132[2];
            v130[3] = v140;
            v143 = v132[2];
            v132 += 4;
            v144 = v143 + v129[2];
            v129 += 4;
            v130[2] = v144;
            v130 += 4;
            v131[3] = (float)(*v128 * v141) - (float)(v128[1] * v142);
            v145 = v141 * v128[1];
            v146 = v142 * *v128;
            v128 -= 8;
            v131[2] = v145 + v146;
            v131 += 4;
          }
          while ( v365 <= v128 );
        }
        if ( (unsigned int)v348 > 0x3FFF )
        {
          if ( (unsigned int)v348 > 0xFFFFFF )
          {
            if ( (unsigned int)v348 <= 0x1FFFFFFF )
            {
              v309 = byte_1CC1C80[v348 >> 25];
              v345 = v309 + 18;
              v370 = (v309 + 21) >> 1;
            }
            else
            {
              v345 = -7;
              v370 = -2;
              if ( v348 >= 0 )
              {
                v306 = byte_1CC1C80[v348 >> 30];
                v345 = v306 + 23;
                v370 = (v306 + 26) >> 1;
              }
            }
          }
          else
          {
            if ( (unsigned int)v348 > 0x7FFFF )
            {
              v308 = byte_1CC1C80[v348 >> 20];
              v303 = v308 + 16;
              v304 = v308 + 13;
            }
            else
            {
              v302 = byte_1CC1C80[v348 >> 15];
              v303 = v302 + 11;
              v304 = v302 + 8;
            }
            v345 = v304;
            v370 = v303 >> 1;
          }
        }
        else if ( (unsigned int)v348 <= 0xF )
        {
          v305 = byte_1CC1C80[v348];
          v345 = v305 - 7;
          v370 = (v305 - 4) >> 1;
        }
        else
        {
          if ( (unsigned int)v348 > 0x1FF )
          {
            v307 = byte_1CC1C80[v348 >> 10];
            v148 = v307 + 6;
            v149 = v307 + 3;
          }
          else
          {
            v147 = byte_1CC1C80[v343];
            v148 = v147 + 1;
            v149 = v147 - 2;
          }
          v345 = v149;
          v370 = v148 >> 1;
        }
        sub_1046BA0(v335, (int)(uintptr_t)(v356), v344, v336, v365);
        sub_1046BA0(v335, (int)(uintptr_t)(v356), v351 - 1 - (v348 >> 2), v336, v365);
        sub_1046D50(v343, (int)(uintptr_t)(v356), v344, v339, v365, 16);
        sub_1046D50(v343, (int)(uintptr_t)(v356), v351 - 1 - (v348 >> 3), v339, v365, 16);
        sub_1046D50(v343, (int)(uintptr_t)(v356), v351 - 1 - 2 * (v348 >> 3), v339, v365, 16);
        sub_1046D50(v343, (int)(uintptr_t)(v356), v351 - 1 - 3 * (v348 >> 3), v339, v365, 16);
        v378 = 2;
        v346 = &v356[v328];
        while ( 1 )
        {
          v150 = v370;
          if ( v378 >= v370 )
            break;
          while ( 1 << ++v378 > 0 )
          {
            v401 = 0;
            v151 = 1 << (v378 + 2);
            v152 = 2 * v151;
            v411 = &v356[v328];
            v153 = 3 * v151;
            v419 = 16 * v151;
            do
            {
              if ( v348 >> (v378 + 3) >> 2 > 0 )
              {
                v154 = v411;
                v429 = v348 >> (v378 + 3) >> 2;
                v155 = &v411[-(v348 >> (v378 + 1) >> 1)];
                v156 = v365;
                do
                {
                  v157 = *(v154 - 1);
                  v158 = *v154 - *v155;
                  v159 = v157 - *(v155 - 1);
                  *v154 = *v154 + *v155;
                  *(v154 - 1) = v157 + *(v155 - 1);
                  v160 = *(v155 - 2);
                  *v155 = (float)(*v156 * v158) - (float)(v156[1] * v159);
                  *(v155 - 1) = (float)(v158 * v156[1]) + (float)(v159 * *v156);
                  v161 = *(v154 - 2);
                  v162 = v161 + v160;
                  v163 = *(v154 - 3);
                  v164 = v161 - v160;
                  v165 = v163 - *(v155 - 3);
                  *(v154 - 2) = v162;
                  *(v154 - 3) = v163 + *(v155 - 3);
                  v166 = *(v155 - 4);
                  *(v155 - 2) = (float)(v156[v152 / 2u] * v164) - (float)(v156[v152 / 2u + 1] * v165);
                  *(v155 - 3) = (float)(v164 * v156[v152 / 2u + 1]) + (float)(v165 * v156[v152 / 2u]);
                  v167 = *(v154 - 4);
                  v168 = v167 + v166;
                  v169 = *(v154 - 5);
                  v170 = v167 - v166;
                  v171 = v169 - *(v155 - 5);
                  *(v154 - 4) = v168;
                  *(v154 - 5) = v169 + *(v155 - 5);
                  *(v155 - 4) = (float)(v156[v152] * v170) - (float)(v156[v152 + 1] * v171);
                  v172 = *(v155 - 6);
                  *(v155 - 5) = (float)(v170 * v156[v152 + 1]) + (float)(v171 * v156[v152]);
                  v173 = *(v154 - 6);
                  v174 = v173 + v172;
                  v175 = *(v154 - 7);
                  v176 = v173 - v172;
                  v177 = v175 - *(v155 - 7);
                  *(v154 - 6) = v174;
                  *(v154 - 7) = v175 + *(v155 - 7);
                  v154 -= 8;
                  *(v155 - 6) = (float)(v156[v153] * v176) - (float)(v156[v153 + 1] * v177);
                  v178 = v176 * v156[v153 + 1];
                  v179 = v177 * v156[v153];
                  v156 = (float *)((char *)v156 + v419);
                  v180 = v429-- == 1;
                  *(v155 - 7) = v178 + v179;
                  v155 -= 8;
                }
                while ( !v180 );
              }
              ++v401;
              v411 -= v348 >> (v378 + 1);
            }
            while ( v401 != 1 << v378 );
            v150 = v370;
            if ( v378 >= v370 )
              goto LABEL_265;
          }
        }
LABEL_265:
        v181 = 2;
        if ( v150 >= 2 )
          v181 = v150;
        v354 = v181;
        while ( v354 < v345 )
        {
          while ( 1 )
          {
            v182 = v354++ + 6;
            v379 = v348 >> v182;
            if ( v348 >> v182 <= 0 )
              break;
            v183 = 1 << (v354 + 2);
            v371 = 16 * v183;
            v363 = v183;
            v360 = 4 * v183 + 4;
            v393 = &v365[2 * v183];
            v184 = v365;
            v388 = &v365[3 * v183];
            v385 = &v356[v328];
            do
            {
              v430 = *v184;
              v412 = v184[v363];
              v402 = *(float *)((char *)v184 + v360);
              v185 = v393[1];
              v186 = *v388;
              v187 = v388[1];
              v420 = v184[1];
              v397 = *v393;
              if ( 1 << v354 > 0 )
              {
                v188 = v385;
                v189 = &v385[-(v348 >> (v354 + 1) >> 1)];
                v190 = 1 << v354;
                do
                {
                  --v190;
                  v191 = *(v188 - 1);
                  v192 = *v188 - *v189;
                  v193 = v191 - *(v189 - 1);
                  *v188 = *v188 + *v189;
                  *(v188 - 1) = v191 + *(v189 - 1);
                  v194 = *(v189 - 2);
                  *v189 = (float)(v430 * v192) - (float)(v420 * v193);
                  *(v189 - 1) = (float)(v192 * v420) + (float)(v193 * v430);
                  v195 = *(v188 - 2);
                  v196 = v195 + v194;
                  v197 = *(v188 - 3);
                  v198 = v195 - v194;
                  v199 = v197 - *(v189 - 3);
                  *(v188 - 2) = v196;
                  *(v188 - 3) = v197 + *(v189 - 3);
                  v200 = *(v189 - 4);
                  *(v189 - 2) = (float)(v412 * v198) - (float)(v402 * v199);
                  *(v189 - 3) = (float)(v198 * v402) + (float)(v199 * v412);
                  v201 = *(v188 - 4);
                  v202 = v201 + v200;
                  v203 = *(v188 - 5);
                  v204 = v201 - v200;
                  v205 = v203 - *(v189 - 5);
                  *(v188 - 4) = v202;
                  *(v188 - 5) = v203 + *(v189 - 5);
                  *(v189 - 4) = (float)(v397 * v204) - (float)(v205 * v185);
                  v206 = *(v189 - 6);
                  *(v189 - 5) = (float)(v204 * v185) + (float)(v205 * v397);
                  v207 = *(v188 - 6);
                  v208 = v207 + v206;
                  v209 = *(v188 - 7);
                  v210 = v207 - v206;
                  v211 = v209 - *(v189 - 7);
                  *(v188 - 6) = v208;
                  *(v188 - 7) = v209 + *(v189 - 7);
                  v188 -= v348 >> (v354 + 1);
                  *(v189 - 6) = (float)(v210 * v186) - (float)(v211 * v187);
                  *(v189 - 7) = (float)(v210 * v187) + (float)(v211 * v186);
                  v189 -= v348 >> (v354 + 1);
                }
                while ( v190 != 0 );
              }
              v184 = (float *)((char *)v184 + v371);
              v393 = (float *)((char *)v393 + v371);
              v388 = (float *)((char *)v388 + v371);
              v385 -= 8;
              --v379;
            }
            while ( v379 != 0 );
            if ( v354 >= v345 )
              goto LABEL_276;
          }
        }
LABEL_276:
        v212 = &v356[v328];
        v413 = v365[v348 >> 3];
        if ( __CFADD__(v346, -64 * (v348 >> 5)) )
        {
          do
          {
            v213 = *(v212 - 8);
            v214 = *v212 - v213;
            v215 = v213 + *v212;
            v216 = *(v212 - 2);
            v217 = *(v212 - 10);
            v218 = *(v212 - 3);
            v403 = v214;
            v219 = *(v212 - 9);
            v398 = *(v212 - 1) - v219;
            v394 = v219 + *(v212 - 1);
            v220 = v216 - v217;
            v221 = *(v212 - 11);
            v222 = v218 - v221;
            v223 = v221 + v218;
            v224 = *(v212 - 13);
            v421 = v217 + v216;
            v225 = *(v212 - 4);
            v226 = *(v212 - 12) - v225;
            v389 = v223;
            v227 = v222;
            v228 = v222 - v220;
            v229 = v227 + v220;
            v230 = *(v212 - 5);
            v231 = v225 + *(v212 - 12);
            v232 = *(v212 - 7) - *(v212 - 15);
            v386 = v226;
            v233 = v228 * v413;
            v234 = v229 * v413;
            v380 = v230 - v224;
            v372 = v224 + v230;
            v235 = *(v212 - 6);
            v431 = *(v212 - 15) + *(v212 - 7);
            v236 = (float)(*(v212 - 14) - v235) + v232;
            v237 = (float)(*(v212 - 14) - v235) - v232;
            v238 = v215 - v231;
            v239 = v231 + v215;
            v240 = (float)(v235 + *(v212 - 14)) + v421;
            v241 = v236 * v413;
            v242 = v237 * v413;
            v422 = v421 - (float)(v235 + *(v212 - 14));
            *v212 = v240 + v239;
            *(v212 - 2) = v239 - v240;
            *(v212 - 4) = (float)(v389 - v431) + v238;
            *(v212 - 6) = v238 - (float)(v389 - v431);
            *(v212 - 1) = (float)(v372 + v394) + (float)(v431 + v389);
            *(v212 - 3) = (float)(v372 + v394) - (float)(v431 + v389);
            *(v212 - 5) = (float)(v394 - v372) - v422;
            v243 = v241 + v234;
            v244 = v234 - v241;
            *(v212 - 7) = (float)(v394 - v372) + v422;
            *(v212 - 8) = (float)(v380 + v403) + v243;
            v245 = v233 - v242;
            *(v212 - 10) = (float)(v380 + v403) - v243;
            v246 = v233 + v242;
            *(v212 - 12) = (float)(v403 - v380) + v245;
            *(v212 - 14) = (float)(v403 - v380) - v245;
            *(v212 - 9) = (float)(v386 + v398) + v246;
            *(v212 - 11) = (float)(v386 + v398) - v246;
            *(v212 - 13) = (float)(v398 - v386) - v244;
            *(v212 - 15) = (float)(v398 - v386) + v244;
            v212 -= 16;
          }
          while ( &v346[-16 * (v348 >> 5)] < v212 );
        }
        v247 = v337;
        v248 = *(uint16_t **)(a1 + 4 * v337 + 1116);
        v249 = (float *)(v332 + v347);
        v250 = (uint32_t *)(v333 + v347);
        if ( !__CFADD__(v333, v347) )
        {
          v251 = (uint32_t *)(v332 + v347);
          do
          {
            v252 = *v248;
            v251[3] = LODWORD(v356[v252]);
            v251[2] = LODWORD(v356[v252 + 1]);
            v250[3] = LODWORD(v356[v252 + 2]);
            v250[2] = LODWORD(v356[v252 + 3]);
            v253 = v248[1];
            v248 += 2;
            v251[1] = LODWORD(v356[v253]);
            *v251 = LODWORD(v356[v253 + 1]);
            v251 -= 4;
            v250[1] = LODWORD(v356[v253 + 2]);
            *v250 = LODWORD(v356[v253 + 3]);
            v250 -= 4;
          }
          while ( v347 <= (unsigned int)(uintptr_t)(v250) );
          v249 = (float *)(v332 + v347);
          v247 = v337;
        }
        v254 = v247 + 272;
        v255 = *(float **)(a1 + 4 * v254 + 12);
        if ( v347 < (unsigned int)(uintptr_t)(v249) )
        {
          v256 = (float *)v347;
          do
          {
            v257 = v256[1];
            v258 = v249[3] + v257;
            v259 = v255[1];
            v260 = *v256 + v249[2];
            v261 = v257 - v249[3];
            v262 = (float)(*v256 - v249[2]) * v259;
            v263 = (float)(v259 * v258) - (float)(*v255 * (float)(*v256 - v249[2]));
            v264 = (float)((float)(v258 * *v255) + v262) + v260;
            v265 = v260 - (float)((float)(v258 * *v255) + v262);
            *v256 = v264;
            v256[1] = v263 + v261;
            v249[2] = v265;
            v249[3] = v263 - v261;
            v266 = v256[3];
            v267 = v256[2] - *v249;
            v268 = v249[1] + v266;
            v269 = v255[3];
            v270 = v255[2];
            v255 += 4;
            v271 = v266 - v249[1];
            v272 = (float)(v268 * v270) + (float)(v267 * v269);
            v273 = (float)(v269 * v268) - (float)(v270 * v267);
            v274 = (float)(v256[2] + *v249) - v272;
            v256[2] = (float)(v256[2] + *v249) + v272;
            v256[3] = v273 + v271;
            v256 += 4;
            *v249 = v274;
            v249[1] = v273 - v271;
            v249 -= 4;
          }
          while ( v256 < v249 );
        }
        v275 = (float *)(v342 + v347);
        if ( !__CFADD__(v342, v347) )
        {
          v276 = (float *)(v342 + *(uint32_t *)(a1 + 4 * v254 + 4));
          v277 = (float *)((char *)v356 + v332);
          v278 = &v356[v348 - 4];
          do
          {
            v279 = v275[7];
            v280 = v275[6];
            v281 = (float)(v276[7] * v280) - (float)(v276[6] * v279);
            v282 = (float)((float)-v280 * v276[6]) - (float)(v276[7] * v279);
            *v356 = v281;
            v277[3] = -v281;
            *v340 = v282;
            v278[3] = v282;
            v283 = v275[5];
            v284 = v275[4];
            v285 = (float)(v276[5] * v284) - (float)(v276[4] * v283);
            v286 = (float)((float)-v284 * v276[4]) - (float)(v276[5] * v283);
            v356[1] = v285;
            v277[2] = -v285;
            v340[1] = v286;
            v278[2] = v286;
            v287 = v275[3];
            v288 = v275[2];
            v289 = (float)(v276[3] * v288) - (float)(v276[2] * v287);
            v290 = (float)((float)-v288 * v276[2]) - (float)(v276[3] * v287);
            v356[2] = v289;
            v277[1] = -v289;
            v340[2] = v290;
            v278[1] = v290;
            v291 = v276[1];
            v292 = *v276;
            v293 = *v275;
            v294 = v275[1];
            v275 -= 8;
            v295 = *v276 * v294;
            v276 -= 8;
            v296 = (float)(v291 * v293) - v295;
            v297 = (float)((float)-v293 * v292) - (float)(v291 * v294);
            v356[3] = v296;
            v356 += 4;
            *v277 = -v296;
            v277 -= 4;
            v340[3] = v297;
            *v278 = v297;
            v278 -= 4;
            v340 += 4;
          }
          while ( v347 <= (unsigned int)(uintptr_t)(v275) );
        }
        sub_4EC120(v347);
        v114 = a1;
        v298 = ++v341 < *(uint32_t *)(a1 + 4);
        *(uint32_t *)(a1 + 108) = v330;
      }
      while ( v298 );
    }
  }
  v299 = *(uint8_t *)(a1 + 1392);
LABEL_290:
  while ( 2 )
  {
    if ( v299 != 0 )
      goto LABEL_298;
LABEL_291:
    if ( *(uint32_t *)(a1 + 1400) != 0 )
      goto LABEL_323;
    v300 = *(uint32_t *)(a1 + 1396);
    if ( v300 != -1 )
    {
LABEL_293:
      v299 = *(uint8_t *)(a1 + v300 + 1136);
      *(uint32_t *)(a1 + 1396) = v300 + 1;
      if ( v299 != 255 )
      {
        *(uint32_t *)(a1 + 1400) = 1;
        *(uint32_t *)(a1 + 1404) = v300;
      }
      if ( v300 + 1 >= *(uint32_t *)(a1 + 1132) )
        *(uint32_t *)(a1 + 1396) = -1;
      *(uint8_t *)(a1 + 1392) = v299;
      if ( v299 == 0 )
        goto LABEL_323;
LABEL_298:
      while ( 1 )
      {
        v301 = *(uint32_t *)(a1 + 32);
        --v299;
        ++*(uint32_t *)(a1 + 1416);
        *(uint8_t *)(a1 + 1392) = v299;
        if ( v301 == 0 )
          break;
        if ( v301 < *(uint32_t *)(a1 + 40) )
        {
          *(uint32_t *)(a1 + 32) = v301 + 1;
          goto LABEL_290;
        }
        *(uint32_t *)(a1 + 112) = 1;
        if ( v299 == 0 )
          goto LABEL_291;
      }
      if ( fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20)) == -1 )
        *(uint32_t *)(a1 + 112) = 1;
      v299 = *(uint8_t *)(a1 + 1392);
      continue;
    }
    break;
  }
  *(uint32_t *)(a1 + 1404) = *(uint32_t *)(a1 + 1132) - 1;
  v310 = *(char **)(a1 + 32);
  if ( v310 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v310) >= *(uint32_t *)(a1 + 40) )
      goto LABEL_353;
    v311 = *v310;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v310 + 1);
  }
  else
  {
    v326 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    if ( v326 == -1 )
    {
LABEL_353:
      *(uint32_t *)(a1 + 112) = 1;
LABEL_321:
      v312 = a1;
      *(uint32_t *)(a1 + 116) = 30;
LABEL_322:
      *(uint32_t *)(v312 + 1400) = 1;
      goto LABEL_323;
    }
    v311 = v326;
  }
  if ( v311 != 79 )
    goto LABEL_321;
  v322 = *(char **)(a1 + 32);
  if ( v322 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v322) >= *(uint32_t *)(a1 + 40) )
      goto LABEL_353;
    v323 = *v322;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v322 + 1);
  }
  else
  {
    v324 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    if ( v324 == -1 )
      goto LABEL_353;
    v323 = v324;
  }
  if ( v323 != 103 || (uint8_t)sub_1047790(a1) != 103 || (uint8_t)sub_1047790(a1) != 83 )
    goto LABEL_321;
  if ( sub_1047F90(a1) == 0 )
  {
    v312 = a1;
    goto LABEL_322;
  }
  if ( (*(uint8_t *)(a1 + 1391) & 1) != 0 )
  {
    v300 = *(uint32_t *)(a1 + 1396);
    goto LABEL_293;
  }
  *(uint32_t *)(a1 + 116) = 32;
LABEL_323:
  if ( *(uint8_t *)(a1 + 1393) != 0 )
  {
    v313 = a1;
    *(uint32_t *)(a1 + 1076) = -v351;
    *(uint32_t *)(a1 + 1080) = 1;
    *(uint32_t *)(a1 + 1428) = v348 - a7;
    *(uint8_t *)(a1 + 1393) = 0;
    v314 = 1;
  }
  else
  {
    v321 = *(uint32_t *)(a1 + 1428);
    if ( v321 != 0 )
    {
      a5 += v321;
      v313 = a1;
      *a8 = a5;
      *(uint32_t *)(a1 + 1428) = 0;
      v314 = *(uint32_t *)(a1 + 1080);
    }
    else
    {
      v314 = *(uint32_t *)(a1 + 1080);
      v313 = a1;
    }
  }
  if ( *(uint32_t *)(v313 + 1404) != *(uint32_t *)(v313 + 1420) )
  {
    if ( v314 != 0 )
    {
      v315 = *(uint32_t *)(a1 + 1076);
      goto LABEL_328;
    }
    goto LABEL_329;
  }
  if ( v314 == 0 )
  {
    v313 = a1;
  }
  else if ( (*(uint8_t *)(v313 + 1391) & 4) != 0 )
  {
    v316 = *(uint32_t *)(a1 + 1424);
    v317 = *(uint32_t *)(a1 + 1076);
    v318 = v316 + a7 - v348;
    if ( v318 < v317 + a7 )
    {
      v319 = 0;
      if ( v318 >= v317 )
        v319 = v318 - v317;
      v320 = a5 + v319;
      *a2 = v320;
      *(uint32_t *)(a1 + 1076) += v320;
      return 1;
    }
LABEL_349:
    v315 = a5 - v351 + v316;
    *(uint32_t *)(a1 + 1080) = 1;
LABEL_328:
    *(uint32_t *)(a1 + 1076) = a6 - a5 + v315;
LABEL_329:
    *a2 = a7;
    return 1;
  }
  v316 = *(uint32_t *)(v313 + 1424);
  goto LABEL_349;
}

// ----------------------------------------------------------------------------
// Function: get_stb_vorbis_struct_size  (binary VA: 0x104e450)
// Original: get_stb_vorbis_struct_size
// ----------------------------------------------------------------------------
int get_stb_vorbis_struct_size()
{
  return 1448;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_stream_offset  (binary VA: 0x104e460)
// Original: stb_vorbis_get_stream_offset
// ----------------------------------------------------------------------------
int stb_vorbis_get_stream_offset(int a1)
{
  int result;
  int v2;

  result = 0;
  if ( a1 != 0 )
  {
    v2 = *(uint32_t *)(a1 + 20);
    if ( v2 != 0 )
      return G4_VCALL<int>(v2, 24);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_channel  (binary VA: 0x104e490)
// Original: stb_vorbis_get_channel
// ----------------------------------------------------------------------------
int stb_vorbis_get_channel(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_previous_window  (binary VA: 0x104e4a0)
// Original: stb_vorbis_get_previous_window
// ----------------------------------------------------------------------------
int stb_vorbis_get_previous_window(int a1, int a2)
{
  int result;

  result = 0;
  if ( a1 != 0 && *(uint32_t *)(a1 + 4) > a2 )
    return a1 + 4 * a2 + 944;
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_buffer  (binary VA: 0x104e4c0)
// Original: stb_vorbis_get_buffer
// ----------------------------------------------------------------------------
int stb_vorbis_get_buffer(int a1, int a2)
{
  int result;

  result = 0;
  if ( a1 != 0 && *(uint32_t *)(a1 + 4) > a2 )
    return a1 + 4 * a2 + 816;
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_set_stream  (binary VA: 0x104e4e0)
// Original: stb_vorbis_set_stream
// ----------------------------------------------------------------------------
int stb_vorbis_set_stream(int a1, int a2)
{
  int result;

  result = a2;
  if ( a2 != 0 && a1 != 0 )
    *(uint32_t *)(a1 + 20) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_blocksize_1  (binary VA: 0x104e500)
// Original: stb_vorbis_get_blocksize_1
// ----------------------------------------------------------------------------
int stb_vorbis_get_blocksize_1(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 132);
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_copy  (binary VA: 0x104e520)
// Original: stb_vorbis_copy
// ----------------------------------------------------------------------------
void * stb_vorbis_copy(void *a1, const void *a2)
{
  std::memcpy(a1, a2, 1448);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: dct_iv_slow  (binary VA: 0x104e550)
// Original: dct_iv_slow
// ----------------------------------------------------------------------------
int dct_iv_slow(float *src, int a2)
{
  int v2;
  float v3; // xmm0_4
  float *v4;
  int v5;
  float v6; // xmm1_4
  int v7;
  float v8; // xmm0_4
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_dest[18435];
  enum : size_t {
    _g4_s0 = 73824u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_dest)) > _g4_s1 ? (16u + sizeof(_g4_t_dest)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 16u);

  memcpy(dest, src, 4 * a2);
  if ( 8 * a2 > 0 )
  {
    v2 = 0;
    do
    {
      v3 = cos((double)v2 * (1.0 / (double)a2 * 0.7853981633974483));
      *(float *)&dest[v2++ + 2048] = v3;
    }
    while ( v2 != 8 * a2 );
  }
  if ( a2 > 0 )
  {
    v10 = 1;
    do
    {
      v4 = (float *)dest;
      v5 = v10;
      v6 = 0.0;
      do
      {
        v7 = v5 & (8 * a2 - 1);
        v5 += 2 * v10;
        v8 = *(float *)&dest[v7 + 2048] * *v4++;
        v6 = v6 + v8;
      }
      while ( v4 != (float *)&dest[a2] );
      *(float *)((char *)src + 2 * v10 - 2) = v6;
      v10 += 2;
    }
    while ( v10 != 2 * a2 + 1 );
  }
  return sub_4EC120((int)(uintptr_t)(dest));
}

// ----------------------------------------------------------------------------
// Function: inverse_mdct_slow  (binary VA: 0x104e680)
// Original: inverse_mdct_slow
// ----------------------------------------------------------------------------
int inverse_mdct_slow(char *src, int a2)
{
  char *v2;
  float *v3;
  unsigned int v4;
  unsigned int v5;
  char *v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  __m128 v11;
  signed int v12;
  float *v13;
  int result;
  unsigned int v15;
  int v16;
  char v17;
  unsigned int v18;
  float *v19;
  signed int v20;
  unsigned int v21;
  float v22; // xmm1_4
  __m128 *v23;
  unsigned int v24;
  unsigned int v25;
  double *v26;
  unsigned int v27;
  __m128 v28;
  float *v29;
  float v30; // xmm1_4
  unsigned int v31;
  char v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  char *v36;
  unsigned int v37;
  char *v38;
  unsigned int v39;
  int v40;
  __m128 v41;
  typedef int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef float *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef float _g4_t_dest[4099];
  enum : size_t {
    _g4_s0 = 16496u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v43)) > _g4_s1 ? (4u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v44)) > _g4_s2 ? (4u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v45)) > _g4_s3 ? (8u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v46)) > _g4_s4 ? (8u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v47)) > _g4_s5 ? (8u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v48)) > _g4_s6 ? (12u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v49)) > _g4_s7 ? (16u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v50)) > _g4_s8 ? (20u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v51)) > _g4_s9 ? (24u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v52)) > _g4_s10 ? (28u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_dest)) > _g4_s11 ? (32u + sizeof(_g4_t_dest)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 32u);

  v2 = src;
  v51 = a2 >> 2;
  v48 = a2 - (a2 >> 2);
  memcpy(dest, src, 4 * (a2 >> 1));
  dct_iv_slow(dest, a2 >> 1);
  if ( a2 >> 2 <= 0 )
  {
    v52 = 0;
    result = 0;
  }
  else
  {
    v3 = &dest[v51];
    v4 = -((uint8_t)((uint8_t)(uintptr_t)(v3) & 0xF) >> 2) & 3;
    if ( v4 > v51 )
      v4 = v51;
    v5 = 0;
    if ( v4 == 0 )
      goto LABEL_44;
    do
    {
      *(float *)&src[4 * v5] = v3[v5];
      ++v5;
    }
    while ( v4 > v5 );
    if ( v51 != v4 )
    {
LABEL_44:
      v50 = v51 - v4;
      v52 = (v51 - v4) >> 2;
      v49 = 4 * v52;
      if ( 4 * v52 == 0 )
        goto LABEL_11;
      v6 = &src[4 * v4];
      v7 = v4 + v51;
      v43 = v5;
      v8 = 0;
      v9 = v52;
      v52 = (unsigned int)(uintptr_t)(src);
      v45 = &dest[v7];
      v10 = 0;
      do
      {
        ++v10;
        v11 = *(__m128 *)&v45[v8];
        _mm_storel_ps((double *)&v6[v8 * 4], v11);
        _mm_storeh_ps((double *)&v6[v8 * 4 + 8], v11);
        v8 += 4;
      }
      while ( v10 < v9 );
      v5 = v49 + v43;
      v2 = (char *)v52;
      if ( v50 != v49 )
      {
LABEL_11:
        v12 = v51;
        v13 = &dest[v51];
        do
        {
          *(float *)&v2[4 * v5] = v13[v5];
          ++v5;
        }
        while ( v12 > (int)v5 );
      }
    }
    v52 = v51;
    result = v51;
  }
  if ( v48 > result )
  {
    v46 = ~result;
    v15 = v48 + ~result + 1;
    v16 = 4 * (v48 - v52) - 4;
    v18 = (uint8_t)((v17 + 36 + v16) & 0xF) >> 2;
    if ( v15 <= v18 )
      v18 = v15;
    v50 = v18;
    if ( v18 != 0 )
    {
      v49 = v15;
      v19 = (float *)((char *)dest + v16);
      v20 = v52;
      v21 = v50;
      do
      {
        v22 = *v19--;
        *(float *)&v2[4 * v20++] = -v22;
      }
      while ( v21 > v20 - v52 );
      v15 = v49;
      if ( v49 == v50 )
      {
LABEL_27:
        v52 += v48 + v46 + 1;
        result = v52;
        goto LABEL_28;
      }
    }
    else
    {
      v20 = v52;
    }
    v44 = v15 - v50;
    v49 = (v15 - v50) >> 2;
    v42 = 4 * v49;
    if ( 4 * v49 == 0 )
      goto LABEL_25;
    v23 = (__m128 *)(&v49 + -v50 - v52 - (v51 - a2));
    v24 = v50;
    v50 = v20;
    v25 = v49;
    v26 = (double *)&v2[4 * v52 + 4 * v24];
    v27 = 0;
    do
    {
      ++v27;
      v28 = _mm_xor_ps(_mm_shuffle_ps(*v23, *v23, 27), G4_BITCAST<__m128>(xmmword_1C7C2A0));
      --v23;
      _mm_storel_ps(v26, v28);
      _mm_storeh_ps(v26 + 1, v28);
      v26 += 2;
    }
    while ( v27 < v25 );
    v20 = v42 + v50;
    if ( v44 != v42 )
    {
LABEL_25:
      v29 = &dest[v48 - v20 - 1];
      do
      {
        v30 = *v29--;
        *(float *)&v2[4 * v20++] = -v30;
      }
      while ( v48 > v20 );
    }
    goto LABEL_27;
  }
LABEL_28:
  if ( a2 > result )
  {
    v31 = a2 - result;
    v49 = v52 + v51 - a2;
    v50 = v31;
    result = v52;
    v33 = -((uint8_t)((v32 + 48 + 4 * v49) & 0xF) >> 2) & 3;
    if ( v33 > v31 )
      v33 = v31;
    if ( v33 == 0 )
      goto LABEL_34;
    do
    {
      *(float *)&v2[4 * result] = -dest[result - v48];
      ++result;
    }
    while ( result - v52 < v33 );
    if ( v50 != v33 )
    {
LABEL_34:
      v50 -= v33;
      v51 = v50 >> 2;
      v47 = 4 * (v50 >> 2);
      if ( v47 == 0 )
        goto LABEL_45;
      v34 = v52;
      v52 = result;
      v35 = v51;
      v51 = (unsigned int)(uintptr_t)(v2);
      v49 = (unsigned int)(uintptr_t)(&dest[v33 + v49]);
      v36 = &v2[4 * v34];
      v37 = 0;
      v38 = &v36[4 * v33];
      v39 = v49;
      v40 = 0;
      do
      {
        ++v37;
        v41 = _mm_xor_ps(*(__m128 *)(v39 + v40), G4_BITCAST<__m128>(xmmword_1C7C2A0));
        _mm_storel_ps((double *)&v38[v40], v41);
        _mm_storeh_ps((double *)&v38[v40 + 8], v41);
        v40 += 16;
      }
      while ( v37 < v35 );
      result = v47 + v52;
      v2 = (char *)v51;
      if ( v50 != v47 )
      {
LABEL_45:
        do
        {
          *(float *)&v2[4 * result] = -dest[result - v48];
          ++result;
        }
        while ( a2 > result );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_close  (binary VA: 0x104ea50)
// Original: stb_vorbis_close
// ----------------------------------------------------------------------------
void stb_vorbis_close(int *a1)
{
  int v1;

  if ( a1 != nullptr )
  {
    sub_1047800(a1);
    v1 = a1[24];
    if ( v1 == 0 || v1 > (int)(uintptr_t)(a1) || (int)(uintptr_t)(a1) >= a1[25] + v1 )
      sub_4EC120((int)(uintptr_t)(a1));
  }
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_sample_offset  (binary VA: 0x104eab0)
// Original: stb_vorbis_get_sample_offset
// ----------------------------------------------------------------------------
int stb_vorbis_get_sample_offset(int a1)
{
  int result;

  result = -1;
  if ( *(uint32_t *)(a1 + 1080) != 0 )
    return *(uint32_t *)(a1 + 1076);
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_info  (binary VA: 0x104ead0)
// Original: stb_vorbis_get_info
// ----------------------------------------------------------------------------
uint32_t * stb_vorbis_get_info(uint32_t *a1, uint32_t *a2)
{
  int v3;

  a1[1] = a2[1];
  *a1 = *a2;
  a1[2] = a2[2];
  a1[3] = a2[4];
  v3 = a2[33];
  a1[4] = a2[3];
  a1[5] = v3 >> 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_error  (binary VA: 0x104eb10)
// Original: stb_vorbis_get_error
// ----------------------------------------------------------------------------
int stb_vorbis_get_error(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 116);
  *(uint32_t *)(a1 + 116) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_file_offset  (binary VA: 0x104eb30)
// Original: stb_vorbis_get_file_offset
// ----------------------------------------------------------------------------
int stb_vorbis_get_file_offset(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 32);
  if ( v1 != 0 )
    return v1 - *(uint32_t *)(a1 + 36);
  else
    return ftell(*(vox::StreamCursorInterface::Self **)(a1 + 20)) - *(uint32_t *)(a1 + 24);
}

// ----------------------------------------------------------------------------
// Function: sub_104EB90  (binary VA: 0x104eb90)
// Original: sub_104EB90
// ----------------------------------------------------------------------------
int sub_104EB90(int a1, int *a2, uint32_t *a3)
{
  int v3;
  int v4;
  uint8_t *v5;
  int v6;
  int v7;
  int v9;
  unsigned int v10;
  unsigned int v11;
  uint8_t *v12;
  int v13;
  uint8_t *v14;
  int v15;
  uint8_t *v16;
  int v17;
  int v18;
  int v19;
  unsigned int i;
  int v21;
  uint8_t *v22;
  int j;
  int v24;
  unsigned int v25;
  uint8_t v26;
  int v27;
  uint8_t *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  uint8_t *v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  typedef int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v46;
  typedef uint8_t _g4_t_v47;
  typedef uint8_t _g4_t_v48;
  typedef uint8_t _g4_t_v49;
  typedef int _g4_t_file_offset;
  typedef int _g4_t_v51;
  typedef uint8_t _g4_t_v52[22];
  typedef uint8_t _g4_t_v53;
  typedef uint8_t _g4_t_v54;
  typedef uint8_t _g4_t_v55;
  typedef uint8_t _g4_t_v56;
  typedef uint8_t _g4_t_v57;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v42)) > _g4_s0 ? (4u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v43)) > _g4_s1 ? (8u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v44)) > _g4_s2 ? (8u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v46)) > _g4_s3 ? (16u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (33u + sizeof(_g4_t_v47)) > _g4_s4 ? (33u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (34u + sizeof(_g4_t_v48)) > _g4_s5 ? (34u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (35u + sizeof(_g4_t_v49)) > _g4_s6 ? (35u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_file_offset)) > _g4_s7 ? (36u + sizeof(_g4_t_file_offset)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v51)) > _g4_s8 ? (44u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v52)) > _g4_s9 ? (48u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (70u + sizeof(_g4_t_v53)) > _g4_s10 ? (70u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (71u + sizeof(_g4_t_v54)) > _g4_s11 ? (71u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v55)) > _g4_s12 ? (72u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (73u + sizeof(_g4_t_v56)) > _g4_s13 ? (73u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (74u + sizeof(_g4_t_v57)) > _g4_s14 ? (74u + sizeof(_g4_t_v57)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 33u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 34u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 35u);
  _g4_t_file_offset &file_offset = *reinterpret_cast<_g4_t_file_offset *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 70u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 71u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 73u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 74u);

  v3 = a1;
  v4 = *(uint32_t *)(a1 + 112);
LABEL_2:
  if ( v4 != 0 )
    return 0;
  while ( 2 )
  {
    v5 = *(uint8_t **)(v3 + 32);
    if ( v5 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v5) >= *(uint32_t *)(v3 + 40) )
        goto LABEL_16;
      LOBYTE(v6) = *v5;
      *(uint32_t *)(v3 + 32) = (uint32_t)(uintptr_t)(v5 + 1);
    }
    else
    {
      v6 = fgetc(*(vox::StreamCursorInterface::Self **)(v3 + 20));
      if ( v6 == -1 )
      {
        *(uint32_t *)(v3 + 112) = 1;
        goto LABEL_7;
      }
    }
    if ( (uint8_t)v6 != 79 )
      goto LABEL_7;
    file_offset = stb_vorbis_get_file_offset(v3);
    if ( (unsigned int)(file_offset - 25) > *(uint32_t *)(v3 + 44) )
      return 0;
    v12 = *(uint8_t **)(v3 + 32);
    if ( v12 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v12) >= *(uint32_t *)(v3 + 40) )
        goto LABEL_51;
      LOBYTE(v13) = *v12;
      *(uint32_t *)(v3 + 32) = (uint32_t)(uintptr_t)(v12 + 1);
    }
    else
    {
      v13 = fgetc(*(vox::StreamCursorInterface::Self **)(v3 + 20));
      if ( v13 == -1 )
      {
        *(uint32_t *)(v3 + 112) = 1;
        goto LABEL_76;
      }
    }
    if ( (uint8_t)v13 != 103 )
    {
LABEL_76:
      v18 = *(uint32_t *)(v3 + 112);
      v19 = 1;
      goto LABEL_31;
    }
    v14 = *(uint8_t **)(v3 + 32);
    if ( v14 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v14) >= *(uint32_t *)(v3 + 40) )
        goto LABEL_51;
      LOBYTE(v15) = *v14;
      *(uint32_t *)(v3 + 32) = (uint32_t)(uintptr_t)(v14 + 1);
    }
    else
    {
      v15 = fgetc(*(vox::StreamCursorInterface::Self **)(v3 + 20));
      if ( v15 == -1 )
      {
        *(uint32_t *)(v3 + 112) = 1;
        goto LABEL_79;
      }
    }
    if ( (uint8_t)v15 != 103 )
    {
LABEL_79:
      v18 = *(uint32_t *)(v3 + 112);
      v19 = 2;
      goto LABEL_31;
    }
    v16 = *(uint8_t **)(v3 + 32);
    if ( v16 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v16) >= *(uint32_t *)(v3 + 40) )
      {
LABEL_51:
        *(uint32_t *)(v3 + 112) = 1;
        return 0;
      }
      LOBYTE(v17) = *v16;
      *(uint32_t *)(v3 + 32) = (uint32_t)(uintptr_t)(v16 + 1);
    }
    else
    {
      v17 = fgetc(*(vox::StreamCursorInterface::Self **)(v3 + 20));
      if ( v17 == -1 )
      {
        *(uint32_t *)(v3 + 112) = 1;
        v18 = 1;
        goto LABEL_82;
      }
    }
    v18 = *(uint32_t *)(v3 + 112);
    if ( (uint8_t)v17 != 83 )
    {
LABEL_82:
      v19 = 3;
      goto LABEL_31;
    }
    v19 = 4;
LABEL_31:
    if ( v18 != 0 )
      return 0;
    if ( v19 != 4 )
      goto LABEL_12;
    std::memcpy(v52, "OggS", 4);
    for ( i = 4; i != 27; ++i )
    {
      while ( 1 )
      {
        v22 = *(uint8_t **)(v3 + 32);
        if ( v22 == nullptr )
          break;
        if ( (unsigned int)(uintptr_t)(v22) >= *(uint32_t *)(v3 + 40) )
        {
          *(uint32_t *)(v3 + 112) = 1;
          goto LABEL_39;
        }
        LOBYTE(v21) = *v22;
        *(uint32_t *)(v3 + 32) = (uint32_t)(uintptr_t)(v22 + 1);
LABEL_35:
        v52[i++] = v21;
        if ( i == 27 )
          goto LABEL_40;
      }
      v21 = fgetc(*(vox::StreamCursorInterface::Self **)(v3 + 20));
      if ( v21 != -1 )
        goto LABEL_35;
      *(uint32_t *)(v3 + 112) = 1;
LABEL_39:
      v52[i] = 0;
    }
LABEL_40:
    if ( *(uint32_t *)(v3 + 112) != 0 )
      return 0;
    if ( v52[4] != 0 )
      goto LABEL_12;
    LOWORD(i) = 0;
    v49 = v53;
    v48 = v54;
    v53 = 0;
    v54 = 0;
    v47 = v55;
    v46 = v56;
    v55 = 0;
    v56 = 0;
    for ( j = 0; j != 27; ++j )
    {
      v24 = (uint8_t)v52[j];
      i = (i << 8) ^ dword_20E28C0[HIBYTE(i) ^ v24];
    }
    if ( v57 == 0 )
      goto LABEL_11;
    v51 = 0;
    v25 = 0;
    while ( 2 )
    {
      v28 = *(uint8_t **)(v3 + 32);
      if ( v28 != nullptr )
      {
        if ( (unsigned int)(uintptr_t)(v28) >= *(uint32_t *)(v3 + 40) )
          goto LABEL_50;
        v26 = *v28;
        *(uint32_t *)(v3 + 32) = (uint32_t)(uintptr_t)(v28 + 1);
        v27 = v26;
        v42 = v26;
      }
      else
      {
        v43 = v25;
        v34 = fgetc(*(vox::StreamCursorInterface::Self **)(v3 + 20));
        v25 = v43;
        v27 = (uint8_t)v34;
        v42 = (uint8_t)v34;
        if ( v34 == -1 )
        {
LABEL_50:
          *(uint32_t *)(v3 + 112) = 1;
          v42 = 0;
          v27 = 0;
        }
      }
      v51 += v27;
      ++v25;
      i = (i << 8) ^ dword_20E28C0[v42 ^ HIBYTE(i)];
      if ( v57 > v25 )
        continue;
      break;
    }
    if ( v51 != 0 )
    {
      if ( *(uint32_t *)(v3 + 112) != 0 )
        return 0;
      v29 = v3;
      v30 = 0;
      v31 = v29;
      while ( 2 )
      {
        v33 = *(uint8_t **)(v31 + 32);
        if ( v33 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v33) >= *(uint32_t *)(v31 + 40) )
            goto LABEL_64;
          LOBYTE(v32) = *v33;
          *(uint32_t *)(v31 + 32) = (uint32_t)(uintptr_t)(v33 + 1);
          v32 = (uint8_t)v32;
        }
        else
        {
          v44 = v31;
          v35 = fgetc(*(vox::StreamCursorInterface::Self **)(v31 + 20));
          v31 = v44;
          v32 = (uint8_t)v35;
          if ( v35 == -1 )
          {
LABEL_64:
            *(uint32_t *)(v31 + 112) = 1;
            v32 = 0;
          }
        }
        ++v30;
        i = (i << 8) ^ dword_20E28C0[v32 ^ HIBYTE(i)];
        if ( v30 == v51 )
        {
          v3 = v31;
          break;
        }
        continue;
      }
    }
LABEL_11:
    if ( i != (v46 << 24) + (v48 << 8) + v49 + (v47 << 16) )
    {
LABEL_12:
      v9 = *(uint32_t *)(v3 + 32);
      *(uint32_t *)(v3 + 112) = 0;
      if ( v9 != 0 )
      {
        v10 = *(uint32_t *)(v3 + 36) + file_offset;
        v11 = *(uint32_t *)(v3 + 40);
        if ( file_offset < 0 || v10 >= v11 )
        {
          *(uint32_t *)(v3 + 32) = v11;
LABEL_16:
          *(uint32_t *)(v3 + 112) = 1;
          return 0;
        }
        *(uint32_t *)(v3 + 32) = v10;
        continue;
      }
      v36 = *(uint32_t *)(v3 + 24) + file_offset;
      if ( file_offset < 0 || file_offset > v36 )
      {
        *(uint32_t *)(v3 + 112) = 1;
        v36 = 0x7FFFFFFF;
      }
      if ( fseek(*(vox::StreamCursorInterface::Self **)(v3 + 20), v36, 0) != 0 )
      {
        *(uint32_t *)(v3 + 112) = 1;
        fseek(*(vox::StreamCursorInterface::Self **)(v3 + 20), *(uint32_t *)(v3 + 24), 2);
        v4 = *(uint32_t *)(v3 + 112);
        goto LABEL_2;
      }
LABEL_7:
      if ( *(uint32_t *)(v3 + 112) != 0 )
        return 0;
      continue;
    }
    break;
  }
  if ( a2 != nullptr )
    *a2 = stb_vorbis_get_file_offset(v3);
  if ( a3 != nullptr )
    *a3 = (v52[5] & 4) != 0;
  v37 = *(uint32_t *)(v3 + 32);
  v38 = file_offset - 1;
  *(uint32_t *)(v3 + 112) = 0;
  if ( v37 != 0 )
  {
    v39 = *(uint32_t *)(v3 + 36) + v38;
    v40 = *(uint32_t *)(v3 + 40);
    if ( v38 < 0 || v39 >= v40 )
    {
      *(uint32_t *)(v3 + 32) = v40;
      *(uint32_t *)(v3 + 112) = 1;
      return 1;
    }
    else
    {
      *(uint32_t *)(v3 + 32) = v39;
      return 1;
    }
  }
  else
  {
    if ( v38 < 0 || v38 > (unsigned int)(*(uint32_t *)(v3 + 24) + v38) )
    {
      *(uint32_t *)(v3 + 112) = 1;
      v41 = 0x7FFFFFFF;
    }
    else
    {
      v41 = *(uint32_t *)(v3 + 24) + v38;
    }
    v7 = 1;
    if ( fseek(*(vox::StreamCursorInterface::Self **)(v3 + 20), v41, 0) != 0 )
    {
      *(uint32_t *)(v3 + 112) = 1;
      fseek(*(vox::StreamCursorInterface::Self **)(v3 + 20), *(uint32_t *)(v3 + 24), 2);
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_104F160  (binary VA: 0x104f160)
// Original: sub_104F160
// ----------------------------------------------------------------------------
int sub_104F160(int a1)
{
  int v1;
  uint8_t *v2;
  int v3;
  int v4;
  int v6;
  uint8_t *v7;
  int v8;
  uint8_t *v9;
  int v10;
  uint8_t *v11;
  int v12;
  char v13;
  int v14;
  uint8_t *v15;
  int v16;
  int v17;
  int v18;
  bool v19;
  uint8_t v20;
  int v21;
  int v22;
  uint8_t v23;
  int v24;
  int v25;
  int v26;
  bool v27; // cc
  int v28;
  uint8_t *v29;
  int v30;
  uint8_t *v31;
  int v32;
  uint8_t *v33;
  int v34;
  uint8_t *v35;
  int v36;
  int v37;
  uint8_t v38;
  int v39;
  char *v40;
  char *v41;
  bool v42;
  int i;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  char v49;
  int j;
  int v51;
  int v52;
  void *v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  uint32_t *v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  uint32_t *v71;
  int m;
  int v73;
  char v74;
  int v75;
  int v76;
  int v77;
  void *v78;
  size_t v79;
  uint8_t *v80;
  int v81;
  int n;
  unsigned int v83;
  int v84;
  int ii;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  size_t v91;
  int v92;
  uint32_t *v93;
  char v94;
  int jj;
  char v96;
  int v97;
  int kk;
  uint8_t v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int mm;
  int v105;
  int i2;
  int v107;
  int v108;
  int i3;
  unsigned int v110;
  uint32_t *v111;
  int v112;
  uint32_t *nn;
  int *v114;
  int v115;
  int v116;
  int v117;
  int v118;
  uint8_t v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  uint16_t v126;
  int v127;
  uint8_t *v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int i1;
  uint8_t v134;
  uint8_t *v135;
  int v136;
  char v137;
  int v138;
  int i9;
  int16_t v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  uint8_t v148;
  uint8_t *v149;
  int v150;
  uint8_t v151;
  int v152;
  int v153;
  int v154;
  int v155;
  signed int v156;
  signed int v157;
  int16_t v158; // di
  uint8_t v159;
  int v160;
  int v161;
  int v162;
  char v163;
  int v164;
  int v165;
  uint32_t *v166;
  int i4;
  int v168;
  int v169;
  int v170;
  int v171;
  uint16_t v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  char v183;
  int v184;
  int i12;
  int v186;
  int v187;
  int v188;
  uint16_t *v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  uint16_t *v195;
  int v196;
  int i18;
  int v198;
  int v199;
  uint8_t v200;
  int v201;
  int i17;
  int16_t v203;
  int i16;
  int v205;
  int v206;
  int v207;
  int v208;
  char *v209;
  int v210;
  int v211;
  int v212;
  uint8_t v213;
  int v214;
  int v215;
  void *v216;
  int *v217;
  int *v218;
  int i14;
  int v220;
  uint32_t *v221;
  int v222;
  int v223;
  uint32_t *v224;
  int v225;
  int v226;
  int i5;
  int v228;
  int i8;
  int i7;
  int v231;
  float v232; // xmm0_4
  long double v233; // fst7
  int v234;
  long double v235; // fst7
  int v236;
  uint16_t v237; // si
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  signed int v246;
  unsigned int v247;
  uint32_t *v248;
  int v249;
  unsigned int v250;
  typedef int _g4_t_v251;
  typedef int _g4_t_v252;
  typedef int _g4_t_v253;
  typedef int _g4_t_v254;
  typedef int _g4_t_v255;
  typedef int _g4_t_v256;
  typedef int _g4_t_v257;
  typedef int _g4_t_v258;
  typedef int _g4_t_v259;
  typedef int _g4_t_v260;
  typedef int _g4_t_v261;
  typedef uint32_t *_g4_t_v262;
  typedef int *_g4_t_v263;
  typedef int _g4_t_v264;
  typedef uint8_t _g4_t_v265;
  typedef int _g4_t_v266;
  typedef int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int _g4_t_v269;
  typedef int _g4_t_v270;
  typedef int _g4_t_v271;
  typedef int _g4_t_v272;
  typedef int _g4_t_v273;
  typedef int _g4_t_v274;
  typedef unsigned int _g4_t_v275;
  typedef int _g4_t_v276;
  typedef int _g4_t_v277;
  typedef int _g4_t_v278;
  typedef char _g4_t_v279;
  typedef uint8_t *_g4_t_v280;
  typedef int _g4_t_v281;
  typedef uint8_t *_g4_t_v282;
  typedef int _g4_t_v283;
  typedef uint8_t *_g4_t_v284;
  typedef int _g4_t_v285;
  typedef int _g4_t_v286;
  typedef int _g4_t_v287;
  typedef int _g4_t_v288;
  typedef int _g4_t_v289;
  typedef int _g4_t_v290;
  typedef int _g4_t_v291;
  typedef int _g4_t_v292;
  typedef uint8_t *_g4_t_v293;
  typedef uint8_t _g4_t_v294;
  typedef int _g4_t_v295;
  typedef int _g4_t_v296;
  typedef int _g4_t_v297;
  typedef uint8_t _g4_t_v298;
  typedef uint8_t *_g4_t_v299;
  typedef int _g4_t_v300;
  typedef char _g4_t_v301;
  typedef int _g4_t_v302;
  typedef int _g4_t_v303;
  typedef int _g4_t_v304;
  typedef int _g4_t_v305;
  typedef int _g4_t_v306;
  typedef uint32_t *_g4_t_v307;
  typedef int _g4_t_k;
  typedef char _g4_t_v309;
  typedef uint8_t *_g4_t_v310;
  typedef int _g4_t_v311;
  typedef int _g4_t_v312;
  typedef int _g4_t_i10;
  typedef int _g4_t_v314;
  typedef int _g4_t_i6;
  typedef int _g4_t_v316;
  typedef uint8_t _g4_t_v317;
  typedef uint8_t *_g4_t_v318;
  typedef int _g4_t_v319;
  typedef int _g4_t_v320;
  typedef uint8_t _g4_t_v321;
  typedef int _g4_t_i11;
  typedef int _g4_t_i15;
  typedef int _g4_t_i13;
  typedef int _g4_t_v325;
  typedef int _g4_t_v326;
  typedef int _g4_t_v327;
  typedef uint16_t _g4_t_s1[3];
  typedef uint8_t _g4_t_base[1008];
  enum : size_t {
    _g4_s0 = 1168u,
    _g4_s1 = (0u + sizeof(_g4_t_v251)) > _g4_s0 ? (0u + sizeof(_g4_t_v251)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v252)) > _g4_s1 ? (0u + sizeof(_g4_t_v252)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v253)) > _g4_s2 ? (0u + sizeof(_g4_t_v253)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v254)) > _g4_s3 ? (0u + sizeof(_g4_t_v254)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v255)) > _g4_s4 ? (0u + sizeof(_g4_t_v255)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v256)) > _g4_s5 ? (0u + sizeof(_g4_t_v256)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v257)) > _g4_s6 ? (0u + sizeof(_g4_t_v257)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v258)) > _g4_s7 ? (0u + sizeof(_g4_t_v258)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v259)) > _g4_s8 ? (4u + sizeof(_g4_t_v259)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v260)) > _g4_s9 ? (4u + sizeof(_g4_t_v260)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v261)) > _g4_s10 ? (4u + sizeof(_g4_t_v261)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v262)) > _g4_s11 ? (4u + sizeof(_g4_t_v262)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v263)) > _g4_s12 ? (4u + sizeof(_g4_t_v263)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v264)) > _g4_s13 ? (4u + sizeof(_g4_t_v264)) : _g4_s13,
    _g4_s15 = (11u + sizeof(_g4_t_v265)) > _g4_s14 ? (11u + sizeof(_g4_t_v265)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v266)) > _g4_s15 ? (12u + sizeof(_g4_t_v266)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v267)) > _g4_s16 ? (16u + sizeof(_g4_t_v267)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v268)) > _g4_s17 ? (20u + sizeof(_g4_t_v268)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v269)) > _g4_s18 ? (24u + sizeof(_g4_t_v269)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v270)) > _g4_s19 ? (24u + sizeof(_g4_t_v270)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v271)) > _g4_s20 ? (24u + sizeof(_g4_t_v271)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v272)) > _g4_s21 ? (28u + sizeof(_g4_t_v272)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v273)) > _g4_s22 ? (28u + sizeof(_g4_t_v273)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v274)) > _g4_s23 ? (32u + sizeof(_g4_t_v274)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v275)) > _g4_s24 ? (32u + sizeof(_g4_t_v275)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v276)) > _g4_s25 ? (32u + sizeof(_g4_t_v276)) : _g4_s25,
    _g4_s27 = (36u + sizeof(_g4_t_v277)) > _g4_s26 ? (36u + sizeof(_g4_t_v277)) : _g4_s26,
    _g4_s28 = (36u + sizeof(_g4_t_v278)) > _g4_s27 ? (36u + sizeof(_g4_t_v278)) : _g4_s27,
    _g4_s29 = (36u + sizeof(_g4_t_v279)) > _g4_s28 ? (36u + sizeof(_g4_t_v279)) : _g4_s28,
    _g4_s30 = (36u + sizeof(_g4_t_v280)) > _g4_s29 ? (36u + sizeof(_g4_t_v280)) : _g4_s29,
    _g4_s31 = (36u + sizeof(_g4_t_v281)) > _g4_s30 ? (36u + sizeof(_g4_t_v281)) : _g4_s30,
    _g4_s32 = (36u + sizeof(_g4_t_v282)) > _g4_s31 ? (36u + sizeof(_g4_t_v282)) : _g4_s31,
    _g4_s33 = (40u + sizeof(_g4_t_v283)) > _g4_s32 ? (40u + sizeof(_g4_t_v283)) : _g4_s32,
    _g4_s34 = (40u + sizeof(_g4_t_v284)) > _g4_s33 ? (40u + sizeof(_g4_t_v284)) : _g4_s33,
    _g4_s35 = (40u + sizeof(_g4_t_v285)) > _g4_s34 ? (40u + sizeof(_g4_t_v285)) : _g4_s34,
    _g4_s36 = (44u + sizeof(_g4_t_v286)) > _g4_s35 ? (44u + sizeof(_g4_t_v286)) : _g4_s35,
    _g4_s37 = (44u + sizeof(_g4_t_v287)) > _g4_s36 ? (44u + sizeof(_g4_t_v287)) : _g4_s36,
    _g4_s38 = (44u + sizeof(_g4_t_v288)) > _g4_s37 ? (44u + sizeof(_g4_t_v288)) : _g4_s37,
    _g4_s39 = (44u + sizeof(_g4_t_v289)) > _g4_s38 ? (44u + sizeof(_g4_t_v289)) : _g4_s38,
    _g4_s40 = (44u + sizeof(_g4_t_v290)) > _g4_s39 ? (44u + sizeof(_g4_t_v290)) : _g4_s39,
    _g4_s41 = (44u + sizeof(_g4_t_v291)) > _g4_s40 ? (44u + sizeof(_g4_t_v291)) : _g4_s40,
    _g4_s42 = (48u + sizeof(_g4_t_v292)) > _g4_s41 ? (48u + sizeof(_g4_t_v292)) : _g4_s41,
    _g4_s43 = (48u + sizeof(_g4_t_v293)) > _g4_s42 ? (48u + sizeof(_g4_t_v293)) : _g4_s42,
    _g4_s44 = (48u + sizeof(_g4_t_v294)) > _g4_s43 ? (48u + sizeof(_g4_t_v294)) : _g4_s43,
    _g4_s45 = (48u + sizeof(_g4_t_v295)) > _g4_s44 ? (48u + sizeof(_g4_t_v295)) : _g4_s44,
    _g4_s46 = (48u + sizeof(_g4_t_v296)) > _g4_s45 ? (48u + sizeof(_g4_t_v296)) : _g4_s45,
    _g4_s47 = (48u + sizeof(_g4_t_v297)) > _g4_s46 ? (48u + sizeof(_g4_t_v297)) : _g4_s46,
    _g4_s48 = (48u + sizeof(_g4_t_v298)) > _g4_s47 ? (48u + sizeof(_g4_t_v298)) : _g4_s47,
    _g4_s49 = (48u + sizeof(_g4_t_v299)) > _g4_s48 ? (48u + sizeof(_g4_t_v299)) : _g4_s48,
    _g4_s50 = (48u + sizeof(_g4_t_v300)) > _g4_s49 ? (48u + sizeof(_g4_t_v300)) : _g4_s49,
    _g4_s51 = (48u + sizeof(_g4_t_v301)) > _g4_s50 ? (48u + sizeof(_g4_t_v301)) : _g4_s50,
    _g4_s52 = (48u + sizeof(_g4_t_v302)) > _g4_s51 ? (48u + sizeof(_g4_t_v302)) : _g4_s51,
    _g4_s53 = (48u + sizeof(_g4_t_v303)) > _g4_s52 ? (48u + sizeof(_g4_t_v303)) : _g4_s52,
    _g4_s54 = (48u + sizeof(_g4_t_v304)) > _g4_s53 ? (48u + sizeof(_g4_t_v304)) : _g4_s53,
    _g4_s55 = (48u + sizeof(_g4_t_v305)) > _g4_s54 ? (48u + sizeof(_g4_t_v305)) : _g4_s54,
    _g4_s56 = (52u + sizeof(_g4_t_v306)) > _g4_s55 ? (52u + sizeof(_g4_t_v306)) : _g4_s55,
    _g4_s57 = (52u + sizeof(_g4_t_v307)) > _g4_s56 ? (52u + sizeof(_g4_t_v307)) : _g4_s56,
    _g4_s58 = (52u + sizeof(_g4_t_k)) > _g4_s57 ? (52u + sizeof(_g4_t_k)) : _g4_s57,
    _g4_s59 = (52u + sizeof(_g4_t_v309)) > _g4_s58 ? (52u + sizeof(_g4_t_v309)) : _g4_s58,
    _g4_s60 = (52u + sizeof(_g4_t_v310)) > _g4_s59 ? (52u + sizeof(_g4_t_v310)) : _g4_s59,
    _g4_s61 = (52u + sizeof(_g4_t_v311)) > _g4_s60 ? (52u + sizeof(_g4_t_v311)) : _g4_s60,
    _g4_s62 = (52u + sizeof(_g4_t_v312)) > _g4_s61 ? (52u + sizeof(_g4_t_v312)) : _g4_s61,
    _g4_s63 = (52u + sizeof(_g4_t_i10)) > _g4_s62 ? (52u + sizeof(_g4_t_i10)) : _g4_s62,
    _g4_s64 = (52u + sizeof(_g4_t_v314)) > _g4_s63 ? (52u + sizeof(_g4_t_v314)) : _g4_s63,
    _g4_s65 = (52u + sizeof(_g4_t_i6)) > _g4_s64 ? (52u + sizeof(_g4_t_i6)) : _g4_s64,
    _g4_s66 = (52u + sizeof(_g4_t_v316)) > _g4_s65 ? (52u + sizeof(_g4_t_v316)) : _g4_s65,
    _g4_s67 = (60u + sizeof(_g4_t_v317)) > _g4_s66 ? (60u + sizeof(_g4_t_v317)) : _g4_s66,
    _g4_s68 = (60u + sizeof(_g4_t_v318)) > _g4_s67 ? (60u + sizeof(_g4_t_v318)) : _g4_s67,
    _g4_s69 = (60u + sizeof(_g4_t_v319)) > _g4_s68 ? (60u + sizeof(_g4_t_v319)) : _g4_s68,
    _g4_s70 = (60u + sizeof(_g4_t_v320)) > _g4_s69 ? (60u + sizeof(_g4_t_v320)) : _g4_s69,
    _g4_s71 = (60u + sizeof(_g4_t_v321)) > _g4_s70 ? (60u + sizeof(_g4_t_v321)) : _g4_s70,
    _g4_s72 = (60u + sizeof(_g4_t_i11)) > _g4_s71 ? (60u + sizeof(_g4_t_i11)) : _g4_s71,
    _g4_s73 = (60u + sizeof(_g4_t_i15)) > _g4_s72 ? (60u + sizeof(_g4_t_i15)) : _g4_s72,
    _g4_s74 = (60u + sizeof(_g4_t_i13)) > _g4_s73 ? (60u + sizeof(_g4_t_i13)) : _g4_s73,
    _g4_s75 = (60u + sizeof(_g4_t_v325)) > _g4_s74 ? (60u + sizeof(_g4_t_v325)) : _g4_s74,
    _g4_s76 = (60u + sizeof(_g4_t_v326)) > _g4_s75 ? (60u + sizeof(_g4_t_v326)) : _g4_s75,
    _g4_s77 = (60u + sizeof(_g4_t_v327)) > _g4_s76 ? (60u + sizeof(_g4_t_v327)) : _g4_s76,
    _g4_s78 = (78u + sizeof(_g4_t_s1)) > _g4_s77 ? (78u + sizeof(_g4_t_s1)) : _g4_s77,
    _g4_s79 = (84u + sizeof(_g4_t_base)) > _g4_s78 ? (84u + sizeof(_g4_t_base)) : _g4_s78
  };
  alignas(16) uint8_t _g4_sf[_g4_s79];
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 0u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 0u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 0u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 0u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 0u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 0u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 0u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 0u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 4u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 4u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 4u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 4u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 4u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 4u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 11u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 12u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 16u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 20u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 24u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 24u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 24u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 28u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 28u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 32u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 32u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 32u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 36u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 36u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 36u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 36u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 36u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 36u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 40u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 40u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 40u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 44u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 44u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 44u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 44u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 44u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 44u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 48u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 48u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 48u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 48u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 48u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 48u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 48u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 48u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 48u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 48u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 48u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 48u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 48u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 48u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 52u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 52u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 52u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 52u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 52u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 52u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 52u);
  _g4_t_i10 &i10 = *reinterpret_cast<_g4_t_i10 *>(_g4_sf + 52u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 52u);
  _g4_t_i6 &i6 = *reinterpret_cast<_g4_t_i6 *>(_g4_sf + 52u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 52u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 60u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 60u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 60u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 60u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 60u);
  _g4_t_i11 &i11 = *reinterpret_cast<_g4_t_i11 *>(_g4_sf + 60u);
  _g4_t_i15 &i15 = *reinterpret_cast<_g4_t_i15 *>(_g4_sf + 60u);
  _g4_t_i13 &i13 = *reinterpret_cast<_g4_t_i13 *>(_g4_sf + 60u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 60u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 60u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 60u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 78u);
  _g4_t_base &base = *reinterpret_cast<_g4_t_base *>(_g4_sf + 84u);

  v1 = a1;
  v2 = *(uint8_t **)(a1 + 32);
  if ( v2 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v2) >= *(uint32_t *)(v1 + 40) )
      goto LABEL_7;
    LOBYTE(v3) = *v2;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2 + 1);
  }
  else
  {
    v14 = a1;
    v3 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    if ( v3 == -1 )
      goto LABEL_25;
  }
  if ( (uint8_t)v3 != 79 )
  {
LABEL_5:
    v4 = 0;
    *(uint32_t *)(a1 + 116) = 30;
    return v4;
  }
  v6 = a1;
  v7 = *(uint8_t **)(a1 + 32);
  if ( v7 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v7) >= *(uint32_t *)(a1 + 40) )
      goto LABEL_23;
    LOBYTE(v8) = *v7;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v7 + 1);
  }
  else
  {
    v14 = a1;
    v8 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    if ( v8 == -1 )
      goto LABEL_25;
  }
  if ( (uint8_t)v8 != 103 )
    goto LABEL_5;
  v6 = a1;
  v9 = *(uint8_t **)(a1 + 32);
  if ( v9 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v9) >= *(uint32_t *)(a1 + 40) )
      goto LABEL_23;
    LOBYTE(v10) = *v9;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v9 + 1);
  }
  else
  {
    v14 = a1;
    v10 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    if ( v10 == -1 )
      goto LABEL_25;
  }
  if ( (uint8_t)v10 != 103 )
    goto LABEL_5;
  v6 = a1;
  v11 = *(uint8_t **)(a1 + 32);
  if ( v11 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(a1 + 40) )
    {
      LOBYTE(v12) = *v11;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v11 + 1);
      goto LABEL_19;
    }
LABEL_23:
    *(uint32_t *)(v6 + 112) = 1;
    goto LABEL_5;
  }
  v14 = a1;
  v12 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
  if ( v12 == -1 )
    goto LABEL_25;
LABEL_19:
  if ( (uint8_t)v12 != 83 )
    goto LABEL_5;
  v4 = 0;
  if ( sub_1047F90(a1) == 0 )
    return v4;
  v13 = *(uint8_t *)(a1 + 1391);
  if ( (v13 & 2) == 0 )
  {
    *(uint32_t *)(a1 + 116) = 34;
    return 0;
  }
  if ( (v13 & 4) != 0 )
  {
    *(uint32_t *)(a1 + 116) = 34;
    return 0;
  }
  if ( (v13 & 1) != 0 || *(uint32_t *)(a1 + 1132) != 1 || *(uint8_t *)(a1 + 1136) != 30 )
  {
    *(uint32_t *)(a1 + 116) = 34;
    return 0;
  }
  v15 = *(uint8_t **)(a1 + 32);
  if ( v15 != nullptr )
  {
    if ( (unsigned int)(uintptr_t)(v15) >= *(uint32_t *)(a1 + 40) )
    {
      *(uint32_t *)(a1 + 112) = 1;
      goto LABEL_35;
    }
    LOBYTE(v17) = *v15;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v15 + 1);
  }
  else
  {
    v17 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
    if ( v17 == -1 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      goto LABEL_35;
    }
  }
  if ( (uint8_t)v17 != 1 )
    goto LABEL_35;
  v18 = *(uint32_t *)(a1 + 32);
  if ( v18 != 0 )
  {
    if ( (unsigned int)(v18 + 6) > *(uint32_t *)(a1 + 40) )
    {
      *(uint32_t *)(a1 + 112) = 1;
LABEL_44:
      v4 = 0;
      *(uint32_t *)(a1 + 116) = 10;
      return v4;
    }
    *(uint32_t *)s1 = *(uint32_t *)v18;
    s1[2] = *(uint16_t *)(v18 + 4);
    *(uint32_t *)(a1 + 32) = v18 + 6;
  }
  else if ( fread(s1, 6u, 1u, *(vox::StreamCursorInterface::Self **)(a1 + 20)) != 1 )
  {
    *(uint32_t *)(a1 + 112) = 1;
    goto LABEL_44;
  }
  v19 = memcmp(s1, aVorbis_0 /* "vorbis" */, 6u) == 0;
  v16 = a1;
  if ( !v19 )
    goto LABEL_36;
  v19 = sub_1047E00(a1) == 0;
  v16 = a1;
  if ( !v19 )
    goto LABEL_36;
  v20 = sub_1047790(a1);
  v21 = a1;
  *(uint32_t *)(a1 + 4) = v20;
  if ( v20 != 0 )
  {
    if ( v20 > 0x10u )
    {
      *(uint32_t *)(a1 + 116) = 5;
      return 0;
    }
    v22 = sub_1047E00(a1);
    v21 = a1;
    *(uint32_t *)a1 = v22;
    if ( v22 != 0 )
    {
      sub_1047E00(a1);
      sub_1047E00(a1);
      sub_1047E00(a1);
      v23 = sub_1047790(a1);
      v24 = v23;
      v25 = v23 & 0xF;
      v26 = v24 >> 4;
      *(uint32_t *)(a1 + 128) = 1 << v25;
      *(uint32_t *)(a1 + 132) = 1 << v26;
      if ( (unsigned int)(v25 - 6) > 7 || (unsigned int)(v26 - 6) > 7 )
        goto LABEL_67;
      v27 = v25 <= v26;
      v28 = a1;
      if ( !v27 )
      {
LABEL_64:
        *(uint32_t *)(v28 + 116) = 20;
        return 0;
      }
      if ( (sub_1047790(a1) & 1) == 0 )
      {
LABEL_35:
        v16 = a1;
LABEL_36:
        *(uint32_t *)(v16 + 116) = 34;
        return 0;
      }
      v1 = a1;
      v29 = *(uint8_t **)(a1 + 32);
      if ( v29 != nullptr )
      {
        if ( (unsigned int)(uintptr_t)(v29) >= *(uint32_t *)(a1 + 40) )
          goto LABEL_7;
        LOBYTE(v30) = *v29;
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v29 + 1);
      }
      else
      {
        v14 = a1;
        v30 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
        if ( v30 == -1 )
          goto LABEL_25;
      }
      if ( (uint8_t)v30 != 79 )
        goto LABEL_5;
      v1 = a1;
      v31 = *(uint8_t **)(a1 + 32);
      if ( v31 != nullptr )
      {
        if ( (unsigned int)(uintptr_t)(v31) >= *(uint32_t *)(a1 + 40) )
          goto LABEL_7;
        LOBYTE(v32) = *v31;
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v31 + 1);
      }
      else
      {
        v14 = a1;
        v32 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
        if ( v32 == -1 )
          goto LABEL_25;
      }
      if ( (uint8_t)v32 != 103 )
        goto LABEL_5;
      v1 = a1;
      v33 = *(uint8_t **)(a1 + 32);
      if ( v33 != nullptr )
      {
        if ( (unsigned int)(uintptr_t)(v33) < *(uint32_t *)(a1 + 40) )
        {
          LOBYTE(v34) = *v33;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v33 + 1);
          goto LABEL_80;
        }
LABEL_7:
        *(uint32_t *)(v1 + 112) = 1;
        goto LABEL_5;
      }
      v14 = a1;
      v34 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v34 == -1 )
        goto LABEL_25;
LABEL_80:
      if ( (uint8_t)v34 != 103 )
        goto LABEL_5;
      v1 = a1;
      v35 = *(uint8_t **)(a1 + 32);
      if ( v35 == nullptr )
      {
        v14 = a1;
        v36 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
        if ( v36 != -1 )
          goto LABEL_84;
LABEL_25:
        *(uint32_t *)(v14 + 112) = 1;
        goto LABEL_5;
      }
      if ( (unsigned int)(uintptr_t)(v35) >= *(uint32_t *)(a1 + 40) )
        goto LABEL_7;
      LOBYTE(v36) = *v35;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v35 + 1);
LABEL_84:
      if ( (uint8_t)v36 != 83 )
        goto LABEL_5;
      v4 = 0;
      if ( sub_1047F90(a1) == 0 || sub_1049070(a1) == 0 )
        return v4;
      do
      {
        if ( *(uint32_t *)(a1 + 1400) != 0 )
        {
          v39 = 0;
          v40 = *(char **)(a1 + 32);
          goto LABEL_94;
        }
        if ( *(uint32_t *)(a1 + 1396) != -1 )
          goto LABEL_89;
        *(uint32_t *)(a1 + 1404) = *(uint32_t *)(a1 + 1132) - 1;
        v40 = *(char **)(a1 + 32);
        if ( v40 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v40) >= *(uint32_t *)(a1 + 40) )
            goto LABEL_115;
          v49 = *v40;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v40 + 1);
        }
        else
        {
          v73 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          v49 = v73;
          if ( v73 == -1 )
            goto LABEL_136;
        }
        v40 = *(char **)(a1 + 32);
        if ( v49 != 79 )
          goto LABEL_110;
        if ( v40 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v40) >= *(uint32_t *)(a1 + 40) )
          {
LABEL_115:
            *(uint32_t *)(a1 + 112) = 1;
LABEL_110:
            *(uint32_t *)(a1 + 116) = 30;
LABEL_111:
            *(uint32_t *)(a1 + 1400) = 1;
            v39 = 0;
            goto LABEL_94;
          }
          v74 = *v40;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v40 + 1);
        }
        else
        {
          v75 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          v74 = v75;
          if ( v75 == -1 )
          {
LABEL_136:
            *(uint32_t *)(a1 + 112) = 1;
            v40 = *(char **)(a1 + 32);
            goto LABEL_110;
          }
        }
        if ( v74 != 103 || (uint8_t)sub_1047790(a1) != 103 || (uint8_t)sub_1047790(a1) != 83 )
        {
          v40 = *(char **)(a1 + 32);
          goto LABEL_110;
        }
        if ( sub_1047F90(a1) == 0 )
        {
          v40 = *(char **)(a1 + 32);
          goto LABEL_111;
        }
        if ( (*(uint8_t *)(a1 + 1391) & 1) == 0 )
        {
          *(uint32_t *)(a1 + 116) = 32;
          v39 = 0;
          v40 = *(char **)(a1 + 32);
          goto LABEL_94;
        }
LABEL_89:
        v37 = *(uint32_t *)(a1 + 1396);
        v38 = *(uint8_t *)(a1 + v37 + 1136);
        v39 = v38;
        *(uint32_t *)(a1 + 1396) = v37 + 1;
        if ( v38 != 255 )
        {
          *(uint32_t *)(a1 + 1400) = 1;
          *(uint32_t *)(a1 + 1404) = v37;
        }
        if ( v37 + 1 >= *(uint32_t *)(a1 + 1132) )
          *(uint32_t *)(a1 + 1396) = -1;
        *(uint8_t *)(a1 + 1392) = v38;
        v40 = *(char **)(a1 + 32);
LABEL_94:
        if ( v40 != nullptr )
        {
          v41 = &v40[v39];
          v42 = (unsigned int)(uintptr_t)(v41) < *(uint32_t *)(a1 + 40);
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v41);
          if ( !v42 )
            *(uint32_t *)(a1 + 112) = 1;
        }
        else
        {
          v48 = ftell(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), v39 + v48, 0);
        }
        *(uint8_t *)(a1 + 1392) = 0;
      }
      while ( v39 != 0 );
      v4 = 0;
      if ( sub_1049070(a1) == 0 )
        return v4;
      for ( i = 0; i != 256; ++i )
      {
        v44 = 8;
        v45 = i << 24;
        do
        {
          v45 = (2 * v45) ^ (v45 >> 31) & 0x4C11DB7;
          --v44;
        }
        while ( v44 != 0 );
        dword_20E28C0[i] = v45;
      }
      v46 = sub_1048AA0(a1);
      v47 = a1;
      *(uint32_t *)(a1 + 1412) = 0;
      if ( v46 != 5 )
      {
LABEL_104:
        *(uint32_t *)(v47 + 116) = 20;
        return 0;
      }
      for ( j = 0; j != 6; ++j )
      {
        *((uint8_t *)s1 + j) = sub_1048AA0(a1);
        *(uint32_t *)(a1 + 1412) = 0;
      }
      if ( memcmp(s1, aVorbis_0 /* "vorbis" */, 6u) != 0 )
        goto LABEL_67;
      v52 = sub_1049200(a1, 8, v51) + 1;
      *(uint32_t *)(a1 + 136) = v52;
      v53 = (void *)sub_1046F30((uint32_t *)a1, 2096 * v52);
      *(uint32_t *)(a1 + 140) = (uint32_t)(uintptr_t)(v53);
      if ( v53 == nullptr )
      {
        *(uint32_t *)(a1 + 116) = 3;
        return 0;
      }
      memset(v53, 0, 2096 * *(uint32_t *)(a1 + 136));
      v283 = 0;
      v272 = 0;
      while ( 2 )
      {
        if ( v272 < *(uint32_t *)(a1 + 136) )
        {
          v55 = *(uint32_t *)(a1 + 140);
          if ( (uint8_t)sub_1049200(a1, 8, v54) != 66
            || (uint8_t)sub_1049200(a1, 8, v56) != 67
            || (uint8_t)sub_1049200(a1, 8, v57) != 86 )
          {
            goto LABEL_67;
          }
          v59 = (uint32_t *)(v283 + v55);
          v60 = (uint8_t)sub_1049200(a1, 8, v58);
          *v59 = v60 + (sub_1049200(a1, 8, v61) << 8);
          v63 = (uint8_t)sub_1049200(a1, 8, v62);
          v317 = sub_1049200(a1, 8, v64);
          v59[1] = (v317 << 8) + v63 + (sub_1049200(a1, 8, v65) << 16);
          v68 = sub_1049200(a1, 1, v66);
          if ( v68 != 0 )
          {
            *((uint8_t *)v59 + 23) = 0;
            goto LABEL_127;
          }
          v96 = sub_1049200(a1, 1, v67);
          *((uint8_t *)v59 + 23) = v96;
          if ( v96 != 0 )
          {
            v318 = (uint8_t *)sub_105503D();
          }
          else
          {
LABEL_127:
            v318 = (uint8_t *)sub_1046F30((uint32_t *)a1, v59[1]);
            v59[2] = (uint32_t)(uintptr_t)(v318);
          }
          if ( v318 == nullptr )
            goto LABEL_162;
          if ( v68 != 0 )
          {
            v88 = 0;
            for ( k = sub_1049200(a1, 5, v69) + 1; ; ++k )
            {
              v77 = v59[1];
              if ( v88 >= v77 )
                break;
              v89 = sub_1046FC0(v77 - v88);
              v91 = sub_1049200(a1, v89, v90);
              if ( (signed int)(v88 + v91) > v59[1] )
                goto LABEL_67;
              v259 = v88 + v91;
              memset(&v318[v88], k, v91);
              v88 = v259;
            }
            v76 = 0;
          }
          else
          {
            v70 = 0;
            v306 = 0;
            v71 = v59;
            for ( m = 0; m < v71[1]; ++m )
            {
              if ( *((uint8_t *)v71 + 23) == 0 || sub_1049200(a1, 1, v70) != 0 )
              {
                ++v306;
                v318[m] = sub_1049200(a1, 5, v70) + 1;
              }
              else
              {
                v70 = (int)(uintptr_t)(v318);
                v318[m] = -1;
              }
            }
            v59 = v71;
            v76 = v306;
            v77 = v59[1];
          }
          if ( *((uint8_t *)v59 + 23) != 0 )
          {
            if ( v77 >> 2 <= v76 )
            {
              if ( v77 > *(uint32_t *)(a1 + 16) )
              {
                *(uint32_t *)(a1 + 16) = v77;
                v77 = v59[1];
              }
              v78 = (void *)sub_1046F30((uint32_t *)a1, v77);
              v79 = v59[1];
              v59[2] = (uint32_t)(uintptr_t)(v78);
              memcpy(v78, v318, v79);
              sub_105548C(v59[1]);
              v80 = (uint8_t *)v59[2];
              *((uint8_t *)v59 + 23) = 0;
              v318 = v80;
              v77 = v59[1];
              goto LABEL_148;
            }
            v59[523] = v76;
            if ( v76 != 0 )
            {
              v86 = sub_1046F30((uint32_t *)a1, v76);
              v59[2] = v86;
              if ( v86 == 0 )
                goto LABEL_162;
              v87 = sub_105503D();
              v59[8] = v87;
              if ( v87 == 0 )
                goto LABEL_162;
              v307 = (uint32_t *)sub_105503D();
              if ( v307 == nullptr )
                goto LABEL_162;
            }
            else
            {
              v307 = nullptr;
            }
            v83 = v59[1] + 8 * v59[523];
            if ( v83 > *(uint32_t *)(a1 + 16) )
              *(uint32_t *)(a1 + 16) = v83;
          }
          else
          {
LABEL_148:
            v81 = 0;
            for ( n = 0; n < v77; ++n )
              v81 += (uint8_t)(v318[n] - 11) < 0xF4u;
            v59[523] = v81;
            v92 = sub_1046F30((uint32_t *)a1, 4 * v77);
            v59[8] = v92;
            if ( v92 == 0 )
              goto LABEL_162;
            v307 = nullptr;
          }
          v277 = v59[1];
          memset(base, 0, 0x80u);
          v84 = 0;
          for ( ii = 0; v277 > ii && v318[ii] == 0xFF; ++ii )
            ;
          if ( v277 != ii )
          {
            v93 = (uint32_t *)v59[8];
            v94 = v318[ii];
            if ( *((uint8_t *)v59 + 23) != 0 )
            {
              *v93 = 0;
              *(uint8_t *)v59[2] = v94;
              *v307 = ii;
            }
            else
            {
              v93[ii] = 0;
            }
            for ( jj = 1; ; ++jj )
            {
              v84 = (int)(uintptr_t)(&v318[ii]);
              if ( jj > (uint8_t)v318[ii] )
                break;
              *(uint32_t *)&base[4 * jj] = 1 << (32 - jj);
            }
            v97 = ii + 1;
            v269 = 4 * v97;
            for ( kk = 1; v277 > v97; kk = v268 )
            {
              v84 = (int)(uintptr_t)(v318);
              v99 = v318[v97];
              if ( v99 == 0xFF )
              {
                v268 = kk;
              }
              else
              {
                v100 = 0;
                do
                {
                  v292 = v100 + v99;
                  if ( v292 <= 0 )
                    break;
                  --v100;
                }
                while ( *(uint32_t *)&base[4 * v99 + 4 + 4 * v100] == 0 );
                if ( v292 == 0 )
                {
                  if ( *((uint8_t *)v59 + 23) != 0 )
                    sub_105548C(0);
                  goto LABEL_67;
                }
                v101 = *(uint32_t *)&base[4 * v292];
                *(uint32_t *)&base[4 * v292] = 0;
                v274 = v101;
                v268 = kk + 1;
                v260 = kk;
                v265 = v318[v97];
                v84 = sub_1046AC0(v101);
                v102 = v59[8];
                if ( *((uint8_t *)v59 + 23) != 0 )
                {
                  *(uint32_t *)(v102 + 4 * v260) = v84;
                  v84 = v265;
                  *(uint8_t *)(v59[2] + v260) = v265;
                  v307[v260] = v97;
                }
                else
                {
                  *(uint32_t *)(v102 + v269) = v84;
                }
                v103 = (uint8_t)v318[v97];
                if ( v103 != v292 )
                {
                  for ( mm = v103 - 1; ; --mm )
                  {
                    v84 = mm + 1;
                    if ( v292 >= mm + 1 )
                      break;
                    *(uint32_t *)&base[4 * mm + 4] = v274 + (1 << (31 - mm));
                  }
                }
              }
              ++v97;
              v269 += 4;
            }
          }
          v105 = v59[523];
          if ( v105 != 0 )
          {
            v59[521] = sub_1046F30((uint32_t *)a1, 4 * v105 + 4);
            v111 = (uint32_t *)sub_1046F30((uint32_t *)a1, 4 * v59[523] + 4);
            v59[522] = (uint32_t)(uintptr_t)(v111);
            if ( v111 != nullptr )
            {
              v59[522] = (uint32_t)(uintptr_t)(v111 + 1);
              *v111 = -1;
            }
            if ( *((uint8_t *)v59 + 23) != 0 )
            {
              v112 = 0;
              for ( nn = v59; v112 < nn[523]; nn = v262 )
              {
                v114 = (int *)(nn[521] + 4 * v112);
                v262 = nn;
                *v114 = sub_1046AC0(*(uint32_t *)(nn[8] + 4 * v112++));
              }
              v59 = nn;
            }
            else
            {
              v132 = 0;
              for ( i1 = 0; i1 < v59[1]; ++i1 )
              {
                v134 = v318[i1];
                if ( *((uint8_t *)v59 + 23) != 0 || v134 != 0xFF && v134 > 0xAu )
                {
                  v263 = (int *)(v59[521] + 4 * v132);
                  v251 = v132;
                  *v263 = sub_1046AC0(*(uint32_t *)(v59[8] + 4 * i1));
                  v132 = v251 + 1;
                }
              }
            }
            qsort((void *)v59[521], v59[523], 4u, (__compar_fn_t)sub_1046B20);
            *(uint32_t *)(v59[521] + 4 * v59[523]) = -1;
            if ( *((uint8_t *)v59 + 23) != 0 )
            {
              v84 = v59[523];
              v270 = v84;
            }
            else
            {
              v270 = v59[1];
            }
            v115 = 0;
            while ( v115 < v270 )
            {
              v279 = *((uint8_t *)v59 + 23);
              if ( v279 != 0 )
              {
                v294 = v318[v307[v115]];
LABEL_232:
                v116 = sub_1046AC0(*(uint32_t *)(v59[8] + 4 * v115));
                v84 = v59[523];
                v275 = v116;
                v286 = v84;
                v117 = 0;
                while ( v286 > 1 )
                {
                  v118 = v286 >> 1;
                  v84 = v275;
                  if ( v275 >= *(uint32_t *)(v59[521] + 4 * ((v286 >> 1) + v117)) )
                  {
                    v117 += v286 >> 1;
                    v118 = v286 - v118;
                  }
                  v286 = v118;
                }
                if ( v279 != 0 )
                {
                  *(uint32_t *)(v59[522] + 4 * v117) = v307[v115];
                  v84 = v294;
                  *(uint8_t *)(v59[2] + v117) = v294;
                }
                else
                {
                  *(uint32_t *)(v59[522] + 4 * v117) = v115;
                }
              }
              else
              {
                v119 = v318[v115];
                v294 = v119;
                if ( v119 != 0xFF && v119 > 0xAu )
                  goto LABEL_232;
              }
              ++v115;
              continue;
            }
          }
          if ( *((uint8_t *)v59 + 23) != 0 )
          {
            sub_105548C(4 * v59[523]);
            sub_105548C(4 * v59[523]);
            sub_105548C(v59[1]);
            v59[8] = 0;
          }
          for ( i2 = 0; i2 != 1024; ++i2 )
            *((uint16_t *)v59 + i2 + 18) = -1;
          v309 = *((uint8_t *)v59 + 23);
          if ( v309 != 0 )
            v107 = v59[523];
          else
            v107 = v59[1];
          if ( v107 > 0x7FFF )
            v107 = 0x7FFF;
          v108 = 0;
          v319 = v107;
          for ( i3 = 0; i3 < v319; ++i3 )
          {
            v84 = v59[2] + i3;
            v293 = (uint8_t *)v84;
            if ( *(uint8_t *)v84 <= 0xAu )
            {
              if ( v309 != 0 )
              {
                v261 = v108;
                v110 = sub_1046AC0(*(uint32_t *)(v59[521] + v108));
                v278 = v261;
              }
              else
              {
                v278 = v108;
                v110 = *(uint32_t *)(v59[8] + v108);
              }
              while ( v110 <= 0x3FF )
              {
                *((uint16_t *)v59 + v110 + 18) = i3;
                v84 = (uint8_t)*v293;
                v110 += 1 << *v293;
              }
              v108 = v278;
            }
            v108 += 4;
          }
          v159 = sub_1049200(a1, 4, v84);
          *((uint8_t *)v59 + 21) = v159;
          if ( v159 > 2u )
          {
LABEL_67:
            v4 = 0;
            *(uint32_t *)(a1 + 116) = 20;
            return v4;
          }
          if ( v159 == 0 )
          {
LABEL_304:
            ++v272;
            v283 += 2096;
            continue;
          }
          sub_1049200(a1, 32, v54);
          *((float *)v59 + 3) =g4_m128_lane<float>(sub_10550A8(), 0);
          sub_1049200(a1, 32, v160);
          v59[4] =g4_m128_lane<uint32_t>(sub_10550A8(), 0);
          *((uint8_t *)v59 + 20) = sub_1049200(a1, 4, v161) + 1;
          v163 = sub_1049200(a1, 1, v162);
          v19 = *((uint8_t *)v59 + 21) == 1;
          *((uint8_t *)v59 + 22) = v163;
          if ( v19 )
          {
            v326 = *v59;
            v264 = v59[1];
            v232 = log((float)v264);
            v233 = exp((float)(v232 / (float)v326));
            v234 = (int)floor(v233);
            v235 = pow((float)((float)v234 + 1.0), (double)v326);
            v59[6] = (v264 >= (int)floor(v235)) + v234;
          }
          else
          {
            v59[6] = *v59 * v59[1];
          }
          v164 = sub_105503D();
          if ( v164 == 0 )
          {
LABEL_162:
            v4 = 0;
            *(uint32_t *)(a1 + 116) = 3;
            return v4;
          }
          v165 = v164;
          v166 = v59;
          for ( i4 = 0; ; ++i4 )
          {
            v168 = v166[6];
            if ( i4 >= v168 )
              break;
            v253 = v165;
            v169 = sub_1049200(a1, *((uint8_t *)v166 + 20), v165);
            v165 = v253;
            if ( v169 == -1 )
            {
              v4 = 0;
              sub_105548C(2 * v166[6]);
              *(uint32_t *)(a1 + 116) = 20;
              return v4;
            }
            *(uint16_t *)(v253 + 2 * i4) = v169;
          }
          v224 = v166;
          v225 = v165;
          if ( *((uint8_t *)v224 + 21) == 1 )
          {
            v54 = *((uint8_t *)v224 + 23);
            v304 = v54;
            if ( *((uint8_t *)v224 + 23) != 0 )
            {
              v226 = v224[523];
              if ( v226 == 0 )
                goto LABEL_304;
            }
            else
            {
              v226 = v224[1];
            }
            v224[7] = sub_1046F30((uint32_t *)a1, 4 * *v224 * v226);
            if ( v224[7] == 0 )
            {
              sub_105548C(2 * v224[6]);
              goto LABEL_162;
            }
            if ( v304 != 0 )
              v281 = v224[523];
            else
              v281 = v224[1];
            for ( i5 = 0; i5 < v281; ++i5 )
            {
              v290 = i5;
              if ( v304 != 0 )
                v290 = *(uint32_t *)(v224[522] + 4 * i5);
              v325 = 1;
              for ( i6 = 0; i6 < *v224; ++i6 )
              {
                v271 = i6 + i5 * *v224;
                *(float *)(v224[7] + 4 * v271) = (float)((float)*(uint16_t *)(v225
                                                                                    + 2
                                                                                    * ((unsigned int)(v290 / v325)
                                                                                     % v224[6]))
                                                       * *((float *)v224 + 4))
                                               + *((float *)v224 + 3);
                v325 *= v224[6];
              }
            }
            sub_105548C(2 * v224[6]);
            *((uint8_t *)v224 + 21) = 2;
          }
          else
          {
            v224[7] = sub_1046F30((uint32_t *)a1, 4 * v168);
            for ( i7 = 0; ; ++i7 )
            {
              v231 = v224[6];
              if ( i7 >= v231 )
                break;
              *(float *)(v224[7] + 4 * i7) = (float)((float)*(uint16_t *)(v225 + 2 * i7) * *((float *)v224 + 4))
                                           + *((float *)v224 + 3);
            }
            sub_105548C(2 * v231);
            if ( *((uint8_t *)v224 + 21) != 2 )
              goto LABEL_304;
          }
          if ( *((uint8_t *)v224 + 22) != 0 )
          {
            v228 = 4;
            for ( i8 = 1; i8 < v224[6]; ++i8 )
            {
              v54 = v224[7];
              *(uint32_t *)(v54 + v228) = *(uint32_t *)(v54 + v228 - 4);
              v228 += 4;
            }
            *((uint8_t *)v224 + 22) = 0;
          }
          goto LABEL_304;
        }
        break;
      }
      v120 = 0;
      v122 = (uint8_t)(sub_1049200(a1, 6, v54) + 1);
      while ( v120 < v122 )
      {
        if ( sub_1049200(a1, 16, v121) != 0 )
          goto LABEL_67;
        ++v120;
      }
      v123 = sub_1049200(a1, 6, v121) + 1;
      *(uint32_t *)(a1 + 144) = v123;
      v124 = sub_1046F30((uint32_t *)a1, 1596 * v123);
      v125 = a1;
      v273 = 0;
      v320 = 0;
      *(uint32_t *)(a1 + 276) = v124;
      while ( v320 < *(uint32_t *)(a1 + 144) )
      {
        v126 = sub_1049200(a1, 16, v125);
        *(uint16_t *)(a1 + 2 * v320 + 148) = v126;
        if ( v126 > 1u )
        {
          *(uint32_t *)(a1 + 116) = 20;
          return 0;
        }
        v128 = (uint8_t *)(*(uint32_t *)(a1 + 276) + 1596 * v320);
        if ( v126 == 0 )
        {
          v141 = 0;
          *v128 = sub_1049200(a1, 8, v127);
          *((uint16_t *)v128 + 1) = sub_1049200(a1, 16, v142);
          *((uint16_t *)v128 + 2) = sub_1049200(a1, 16, v143);
          v128[6] = sub_1049200(a1, 6, v144);
          v128[7] = sub_1049200(a1, 8, v145);
          v128[8] = sub_1049200(a1, 4, v146) + 1;
          while ( v141 < v128[8] )
            v128[v141++ + 9] = sub_1049200(a1, 8, v147);
          v4 = 0;
          *(uint32_t *)(a1 + 116) = 4;
          return v4;
        }
        v129 = 0;
        *v128 = sub_1049200(a1, 5, v127);
        v295 = -1;
        while ( v129 < *v128 )
        {
          LOBYTE(v131) = sub_1049200(a1, 4, v130);
          v128[v129 + 1] = v131;
          v131 = (uint8_t)v131;
          if ( v295 >= (uint8_t)v131 )
            v131 = v295;
          ++v129;
          v295 = v131;
        }
        v135 = v128;
        v284 = v128;
        v310 = v128;
        v287 = 0;
        v280 = v128;
        while ( v287 <= v295 )
        {
          v310[33] = sub_1049200(a1, 3, v130) + 1;
          v137 = sub_1049200(a1, 2, v136);
          v310[49] = v137;
          if ( v137 != 0 )
          {
            v148 = sub_1049200(a1, 8, v138);
            v310[65] = v148;
            if ( v148 >= *(int *)(a1 + 136) )
              goto LABEL_67;
          }
          for ( i9 = 0; ; ++i9 )
          {
            v130 = (uint8_t)v310[49];
            if ( i9 >= 1 << v130 )
              break;
            v140 = sub_1049200(a1, 8, v130) - 1;
            *(uint16_t *)&v284[2 * i9 + 82] = v140;
            if ( v140 >= *(uint32_t *)(a1 + 136) )
            {
              *(uint32_t *)(a1 + 116) = 20;
              return 0;
            }
          }
          ++v287;
          ++v310;
          v284 += 16;
        }
        v149 = v280;
        v280[1588] = sub_1049200(a1, 2, v130) + 1;
        v151 = sub_1049200(a1, 4, v150);
        v280[1589] = v151;
        v152 = (int)(uintptr_t)(v135);
        v153 = 0;
        *((uint16_t *)v280 + 169) = 0;
        *((uint16_t *)v280 + 170) = 1 << v151;
        *((uint32_t *)v280 + 398) = 2;
        v154 = v152;
        while ( v153 < *v280 )
        {
          v311 = 0;
          v296 = v280[v153 + 1];
          while ( v311 < v280[v296 + 33] )
          {
            v288 = *((uint32_t *)v280 + 398);
            v252 = v154;
            ++v311;
            *(uint16_t *)&v280[2 * v288 + 338] = sub_1049200(a1, v280[1589], v154);
            ++*((uint32_t *)v280 + 398);
            v154 = v252;
          }
          ++v153;
        }
        v155 = v154;
        v156 = 0;
        v157 = *((uint32_t *)v280 + 398);
        v312 = v155;
        while ( v156 < v157 )
        {
          v158 = *(uint16_t *)&v280[2 * v156 + 338];
          *(uint16_t *)&base[4 * v156 + 2] = v156;
          *(uint16_t *)&base[4 * v156++] = v158;
        }
        v222 = v312;
        qsort(base, v157, 4u, (__compar_fn_t)point_compare);
        v223 = 0;
        v303 = *((uint32_t *)v280 + 398);
        while ( v223 < v303 )
        {
          v280[v223 + 838] = *(uint16_t *)&base[4 * v223 + 2];
          ++v223;
        }
        v291 = 2;
        while ( 1 )
        {
          v125 = v291;
          if ( v303 <= v291 )
            break;
          v236 = 0;
          v285 = 0x10000;
          v282 = v149;
          v276 = -1;
          while ( 1 )
          {
            v149 = v282;
            if ( v236 >= v291 )
              break;
            v237 = *(uint16_t *)&v282[2 * v236 + 338];
            v238 = v237;
            if ( v237 > v276 )
            {
              v42 = v237 < *(uint16_t *)(v222 + 342);
              v239 = v267;
              v240 = v276;
              if ( v42 )
              {
                v239 = v236;
                v240 = v238;
              }
              v267 = v239;
              v276 = v240;
            }
            if ( v238 < v285 )
            {
              v241 = v266;
              if ( *(uint16_t *)&v282[2 * v236 + 338] > *(uint16_t *)(v222 + 342) )
                v241 = v236;
              else
                v238 = v285;
              v285 = v238;
              v266 = v241;
            }
            ++v236;
          }
          ++v291;
          *(uint8_t *)(v222 + 1092) = v267;
          *(uint8_t *)(v222 + 1093) = v266;
          v222 += 2;
        }
        v242 = v303;
        if ( v273 >= v303 )
          v242 = v273;
        ++v320;
        v273 = v242;
      }
      v170 = sub_1049200(a1, 6, v125) + 1;
      *(uint32_t *)(a1 + 280) = v170;
      *(uint32_t *)(a1 + 412) = sub_1046F30((uint32_t *)a1, 24 * v170);
      v289 = 0;
      for ( i10 = 0; i10 < *(uint32_t *)(a1 + 280); ++i10 )
      {
        v171 = *(uint32_t *)(a1 + 412);
        v172 = sub_1049200(a1, 16, i10);
        *(uint16_t *)(a1 + 2 * i10 + 284) = v172;
        if ( v172 > 2u )
        {
          *(uint32_t *)(a1 + 116) = 20;
          return 0;
        }
        v173 = v289 + v171;
        v174 = 0;
        *(uint32_t *)v173 = sub_1049200(a1, 24, i10);
        *(uint32_t *)(v173 + 4) = sub_1049200(a1, 24, v175);
        *(uint32_t *)(v173 + 8) = sub_1049200(a1, 24, v176) + 1;
        *(uint8_t *)(v173 + 12) = sub_1049200(a1, 6, v177) + 1;
        *(uint8_t *)(v173 + 13) = sub_1049200(a1, 8, v178);
        while ( v174 < *(uint8_t *)(v173 + 12) )
        {
          v321 = sub_1049200(a1, 3, v179);
          v181 = sub_1049200(a1, 1, v180);
          v183 = 0;
          if ( v181 != 0 )
            v183 = sub_1049200(a1, 5, v182);
          v179 = v321;
          base[v174++] = v321 + 8 * v183;
        }
        *(uint32_t *)(v173 + 20) = sub_1046F30((uint32_t *)a1, 16 * *(uint8_t *)(v173 + 12));
        for ( i11 = 0; i11 < *(uint8_t *)(v173 + 12); ++i11 )
        {
          v184 = v173;
          for ( i12 = 0; i12 != 8; ++i12 )
          {
            v186 = (uint8_t)base[i11];
            if ( _bittest(&v186, (uint8_t)i12) )
            {
              v215 = *(uint32_t *)(v184 + 20) + 16 * i11;
              v257 = v184;
              *(uint16_t *)(v215 + 2 * i12) = sub_1049200(a1, 8, v184);
              v184 = v257;
              v47 = a1;
              if ( *(int16_t *)(*(uint32_t *)(v257 + 20) + 2 * i12 + 16 * i11) >= *(uint32_t *)(a1 + 136) )
                goto LABEL_104;
            }
            else
            {
              *(uint16_t *)(*(uint32_t *)(v184 + 20) + 2 * i12 + 16 * i11) = -1;
            }
          }
          v173 = v184;
        }
        v216 = (void *)sub_1046F30(
                         (uint32_t *)a1,
                         4 * *(uint32_t *)(*(uint32_t *)(a1 + 140) + 2096 * *(uint8_t *)(v173 + 13) + 4));
        *(uint32_t *)(v173 + 16) = (uint32_t)(uintptr_t)(v216);
        if ( v216 == nullptr )
          goto LABEL_162;
        memset(v216, 0, 4 * *(uint32_t *)(*(uint32_t *)(a1 + 140) + 2096 * *(uint8_t *)(v173 + 13) + 4));
        for ( i13 = 0; ; ++i13 )
        {
          v217 = (int *)(*(uint32_t *)(a1 + 140) + 2096 * *(uint8_t *)(v173 + 13));
          if ( i13 >= v217[1] )
            break;
          v218 = (int *)(*(uint32_t *)(v173 + 16) + 4 * i13);
          v258 = *v217;
          *v218 = sub_1046F30((uint32_t *)a1, *v217);
          v302 = v258;
          for ( i14 = i13; --v302 >= 0; i14 /= (int)*(uint8_t *)(v173 + 12) )
            *(uint8_t *)(*(uint32_t *)(*(uint32_t *)(v173 + 16) + 4 * i13) + v302) = i14 % *(uint8_t *)(v173 + 12);
        }
        v289 += 24;
      }
      v187 = sub_1049200(a1, 6, i10) + 1;
      *(uint32_t *)(a1 + 416) = v187;
      *(uint32_t *)(a1 + 420) = sub_1046F30((uint32_t *)a1, 40 * v187);
      v314 = 0;
      for ( i15 = 0; i15 < *(uint32_t *)(a1 + 416); ++i15 )
      {
        v188 = *(uint32_t *)(a1 + 420);
        if ( sub_1049200(a1, 16, i15) != 0 )
          goto LABEL_67;
        v189 = (uint16_t *)(v314 + v188);
        *((uint32_t *)v189 + 1) = sub_1046F30((uint32_t *)a1, 3 * *(uint32_t *)(a1 + 4));
        if ( sub_1049200(a1, 1, v190) != 0 )
          *((uint8_t *)v189 + 8) = sub_1049200(a1, 4, v191);
        else
          *((uint8_t *)v189 + 8) = 1;
        if ( sub_1049200(a1, 1, v191) != 0 )
        {
          v203 = sub_1049200(a1, 8, v192);
          v192 = 0;
          *v189 = v203 + 1;
          for ( i16 = 0; i16 < *v189; ++i16 )
          {
            v299 = (uint8_t *)(3 * i16 + *((uint32_t *)v189 + 1));
            v205 = sub_1046FC0(*(uint32_t *)(a1 + 4));
            *v299 = sub_1049200(a1, v205 - 1, v206);
            v300 = 3 * i16 + *((uint32_t *)v189 + 1);
            v207 = sub_1046FC0(*(uint32_t *)(a1 + 4));
            *(uint8_t *)(v300 + 1) = sub_1049200(a1, v207 - 1, v208);
            v209 = (char *)(*((uint32_t *)v189 + 1) + 3 * i16);
            v301 = *v209;
            v210 = *(uint32_t *)(a1 + 4);
            if ( (uint8_t)*v209 >= v210 )
              goto LABEL_67;
            v192 = (uint8_t)v209[1];
            if ( v210 <= (uint8_t)v192 || v301 == (uint8_t)v192 )
              goto LABEL_67;
          }
        }
        else
        {
          *v189 = 0;
        }
        if ( sub_1049200(a1, 2, v192) != 0 )
          goto LABEL_67;
        v193 = 0;
        if ( *((uint8_t *)v189 + 8) <= 1u )
        {
          v201 = 0;
          for ( i17 = 0; i17 < *(uint32_t *)(a1 + 4); ++i17 )
          {
            *(uint8_t *)(*((uint32_t *)v189 + 1) + v201 + 2) = 0;
            v201 += 3;
          }
        }
        else
        {
          while ( v193 < *(uint32_t *)(a1 + 4) )
          {
            v297 = 3 * v193;
            v194 = *((uint32_t *)v189 + 1) + 3 * v193;
            v254 = v193;
            *(uint8_t *)(v194 + 2) = sub_1049200(a1, 4, v193);
            if ( *(uint8_t *)(*((uint32_t *)v189 + 1) + v297 + 2) >= *((uint8_t *)v189 + 8) )
              goto LABEL_67;
            v193 = v254 + 1;
          }
        }
        v195 = v189;
        v196 = (int)(uintptr_t)(v189);
        for ( i18 = 0; i18 < *(uint8_t *)(v196 + 8); ++i18 )
        {
          v255 = v196;
          sub_1049200(a1, 8, v196);
          *((uint8_t *)v195 + 9) = sub_1049200(a1, 8, v198);
          v200 = sub_1049200(a1, 8, v199);
          v47 = a1;
          *((uint8_t *)v195 + 24) = v200;
          v298 = v200;
          v196 = v255;
          if ( *((uint8_t *)v195 + 9) >= *(int *)(a1 + 144) )
            goto LABEL_104;
          v28 = a1;
          v195 = (uint16_t *)((char *)v195 + 1);
          if ( v298 >= *(int *)(a1 + 280) )
            goto LABEL_64;
        }
        v314 += 40;
      }
      v211 = 0;
      *(uint32_t *)(a1 + 424) = sub_1049200(a1, 6, i15) + 1;
      while ( v211 < *(uint32_t *)(a1 + 424) )
      {
        v256 = a1 + 6 * v211 + 428;
        *(uint8_t *)v256 = sub_1049200(a1, 1, v256);
        *(uint16_t *)(v256 + 2) = sub_1049200(a1, 16, v212);
        *(uint16_t *)(v256 + 4) = sub_1049200(a1, 16, v256);
        v213 = sub_1049200(a1, 8, v256);
        v19 = *(uint16_t *)(a1 + 6 * v211 + 430) == 0;
        *(uint8_t *)(v256 + 1) = v213;
        if ( !v19 || *(uint16_t *)(a1 + 6 * v211 + 432) != 0 )
          goto LABEL_67;
        v214 = v213;
        v28 = a1;
        if ( v214 >= *(uint32_t *)(a1 + 416) )
          goto LABEL_64;
        ++v211;
      }
      while ( sub_1048AA0(a1) != -1 )
        ;
      v220 = 0;
      v221 = (uint32_t *)a1;
      *(uint32_t *)(a1 + 1008) = 0;
      while ( 1 )
      {
        ++v221;
        if ( v220 >= *(uint32_t *)(a1 + 4) )
          break;
        ++v220;
        v221[203] = sub_1046F30((uint32_t *)a1, 4 * *(uint32_t *)(a1 + 132));
        v221[235] = sub_1046F30((uint32_t *)a1, (unsigned int)(4 * *(uint32_t *)(a1 + 132)) >> 1);
        v221[252] = sub_1046F30((uint32_t *)a1, 2 * v273);
      }
      v4 = 0;
      if ( sub_1055122(*(uint32_t *)(a1 + 128)) != 0 && sub_1055122(*(uint32_t *)(a1 + 132)) != 0 )
      {
        v327 = 0;
        v316 = 0;
        v243 = *(uint32_t *)(a1 + 132);
        v244 = *(uint32_t *)(a1 + 280);
        v245 = *(uint32_t *)(a1 + 128);
        *(uint32_t *)(a1 + 124) = v243;
        v305 = v244;
        *(uint32_t *)(a1 + 120) = v245;
        v246 = 0;
        v247 = (unsigned int)(4 * v243) >> 1;
        while ( v316 < v305 )
        {
          v248 = (uint32_t *)(*(uint32_t *)(a1 + 412) + v327);
          if ( v246 < (int)((unsigned int)(v248[1] - *v248) / v248[2]) )
            v246 = (unsigned int)(v248[1] - *v248) / v248[2];
          ++v316;
          v327 += 24;
        }
        v4 = 1;
        v249 = *(uint32_t *)(a1 + 4);
        *(uint8_t *)(a1 + 1393) = 1;
        v250 = (v246 + 1) * 4 * v249;
        if ( v247 > v250 )
          v250 = v247;
        *(uint32_t *)(a1 + 12) = v250;
        *(uint32_t *)(a1 + 52) = stb_vorbis_get_file_offset(a1);
      }
      return v4;
    }
  }
  *(uint32_t *)(v21 + 116) = 34;
  return 0;
}


