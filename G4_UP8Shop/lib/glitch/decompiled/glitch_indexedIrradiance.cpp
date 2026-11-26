#include "Core/Utils/DecompTypes.h"
#include "glitch_indexedIrradiance.h"

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingNbNeighbours  (binary VA: 0xd8a520)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingNbNeighbours
// ----------------------------------------------------------------------------
bool glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingNbNeighbours(int a1, int a2)
{
  unsigned int v2;
  unsigned int v3;
  bool result;

  v2 = -1431655765 * ((*(uint32_t *)(a1 + 24) - *(uint32_t *)(a1 + 20)) >> 2);
  v3 = -1431655765 * ((*(uint32_t *)(a2 + 24) - *(uint32_t *)(a2 + 20)) >> 2);
  result = v2 > v3;
  if ( v2 == v3 )
    return *(float *)(a2 + 16) > *(float *)(a1 + 16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy  (binary VA: 0xd8a580)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::~CIndexedIrradiancePoint
// ----------------------------------------------------------------------------
void glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::clear  (binary VA: 0xd9ec80)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::clear
// ----------------------------------------------------------------------------
void glitch::indexedIrradiance::CIndexedIrradianceManager::clear(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *self)
{
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v1;
  int v2;
  void **v3;
  void *v4;
  int v5;
  void *v6;
  int v7;
  void **v8;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v9;
  int v10;
  int *v11;
  int *v12;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v13;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v14;
  int v15;
  int v16;
  void **v17;
  int v18;

  v1 = self;
  if ( *((int *)self + 18) > 0 )
  {
    v16 = 0;
    v15 = 0;
    do
    {
      v2 = *((uint32_t *)v1 + 12) + 3 * v16;
      v3 = *(void ***)v2;
      v17 = *(void ***)(v2 + 4);
      if ( *(void ***)v2 != v17 )
      {
        v14 = v1;
        do
        {
          v4 = *v3;
          if ( *v3 != nullptr )
          {
            glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
            opDelete(v4);
          }
          ++v3;
        }
        while ( v17 != v3 );
        v1 = v14;
        v2 = *((uint32_t *)v14 + 12) + 3 * v16;
        v3 = *(void ***)v2;
      }
      *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(v3);
      v5 = *((uint32_t *)v1 + 13);
      if ( v5 != 0 )
      {
        v6 = *(void **)(v5 + v16);
        if ( v6 != nullptr )
          opDelete(v6);
      }
      v7 = *((uint32_t *)v1 + 15);
      if ( v7 != 0 )
      {
        v8 = *(void ***)(v7 + v16);
        if ( *((uint32_t *)v1 + 23) * *((uint32_t *)v1 + 22) > 0 )
        {
          v9 = v1;
          v10 = 0;
          v18 = *((uint32_t *)v1 + 23) * *((uint32_t *)v1 + 22);
          do
          {
            if ( v8[v10] != nullptr )
            {
              v13 = v9;
              opDeleteArray(v8[v10]);
              v9 = v13;
              v8 = *(void ***)(*((uint32_t *)v13 + 15) + v16);
            }
            ++v10;
          }
          while ( v10 != v18 );
          v1 = v9;
        }
        if ( v8 != nullptr )
          opDeleteArray(v8);
      }
      ++v15;
      v16 += 4;
    }
    while ( *((uint32_t *)v1 + 18) > v15 );
  }
  v11 = *((int **)v1 + 12);
  if ( v11 != nullptr )
  {
    v12 = &v11[3 * *(v11 - 1)];
    while ( v12 != v11 )
    {
      while ( 1 )
      {
        v12 -= 3;
        if ( *v12 == 0 )
          break;
        gll_operator_delete_arr(*v12);
        v11 = *((int **)v1 + 12);
        if ( v12 == v11 )
          goto LABEL_27;
      }
    }
LABEL_27:
    opDeleteArray(v12 - 1);
    *((uint32_t *)v1 + 12) = 0;
  }
  if ( *((uint32_t *)v1 + 13) != 0 )
  {
    opDeleteArray(*((void **)v1 + 13));
    *((uint32_t *)v1 + 13) = 0;
  }
  if ( *((uint32_t *)v1 + 15) != 0 )
  {
    opDeleteArray(*((void **)v1 + 15));
    *((uint32_t *)v1 + 15) = 0;
  }
  *((uint32_t *)v1 + 9) = -8388609;
  *((uint32_t *)v1 + 10) = -8388609;
  *((uint32_t *)v1 + 11) = -8388609;
  *((uint32_t *)v1 + 6) = 2139095039;
  *((uint32_t *)v1 + 7) = 2139095039;
  *((uint32_t *)v1 + 8) = 2139095039;
  *(__m128i *)((char *)v1 + 72) = g4_m128_from<__m128i>(0LL);
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData  (binary VA: 0xd9ee40)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *self)
{
  float v1; // xmm1_4
  float v2; // xmm0_4
  __m128 v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  float v7; // xmm5_4
  __m128 v8;
  __m128 v9;
  __m128 v10;
  float v11; // xmm4_4
  __m128 v12;
  __m128 v13;
  __m128 v14;
  float v15; // xmm1_4
  unsigned int v16;
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  unsigned int *v21;
  __m128i *v22;
  unsigned int v23;
  unsigned int v24;
  int result;
  int v26;
  size_t v27;
  size_t v28;
  int v29;
  int v30;
  __m128 v31;
  int v32;
  __m128i *v33;
  int v34;
  unsigned int v35;
  int v36;
  int v37;

  v1 = *((float *)self + 26);
  v2 = 1.0 / v1;
g4_m128_raw(v4) = *((unsigned int *)self + 6);
g4_m128_raw(v3) = 0x4B000000u;
g4_m128_lane<float>(v4, 0) =g4_m128_lane<float>(v4, 0) * (float)(1.0 / v1);
  if ( fabs(g4_m128_lane<float>(v4, 0)) < 8388608.0 )
  {
g4_m128_lane<float>(v5, 0) = (float)(int)g4_m128_lane<float>(v4, 0);
g4_m128_lane<float>(v4, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v4, v5), 0) & 0x3F800000) +g4_m128_lane<float>(v5, 0);
  }
g4_m128_raw(v6) = *((unsigned int *)self + 7);
g4_m128_lane<float>(v6, 0) =g4_m128_lane<float>(v6, 0) * v2;
  v7 =g4_m128_lane<float>(v4, 0) * v1;
  if ( fabs(g4_m128_lane<float>(v6, 0)) < 8388608.0 )
  {
g4_m128_lane<float>(v8, 0) = (float)(int)g4_m128_lane<float>(v6, 0);
g4_m128_lane<float>(v6, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v6, v8), 0) & 0x3F800000) +g4_m128_lane<float>(v8, 0);
  }
g4_m128_lane<float>(v31, 3) =g4_m128_lane<float>(v6, 0) * v1;
g4_m128_raw(v9) = *((unsigned int *)self + 8);
g4_m128_lane<float>(v9, 0) =g4_m128_lane<float>(v9, 0) * v2;
  if ( fabs(g4_m128_lane<float>(v9, 0)) < 8388608.0 )
  {
g4_m128_lane<float>(v10, 0) = (float)(int)g4_m128_lane<float>(v9, 0);
g4_m128_lane<float>(v9, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v9, v10), 0) & 0x3F800000) +g4_m128_lane<float>(v10, 0);
  }
  v11 =g4_m128_lane<float>(v9, 0) * v1;
g4_m128_lane<float>(v31, 1) = *((float *)self + 9) * v2;
  if ( fabs(g4_m128_lane<float>(v31, 1)) < 8388608.0 )
g4_m128_lane<float>(v31, 1) = (float)(int)g4_m128_lane<float>(v31, 1)
                    - COERCE_FLOAT((float)(int)g4_m128_lane<float>(v31, 1) >g4_m128_lane<float>(v31, 1) ? 0x3F800000 : 0);
g4_m128_raw(v12) = *((unsigned int *)self + 10);
g4_m128_lane<float>(v12, 0) =g4_m128_lane<float>(v12, 0) * v2;
g4_m128_lane<float>(v31, 2) =g4_m128_lane<float>(v31, 1) * v1;
g4_m128_lane<int32_t>(v31, 0) =g4_m128_lane<int32_t>(v12, 0);
  v13 = _mm_and_ps(v12, g4_m128_u32(0x7FFFFFFFu));
  if (g4_m128_lane<float>(v13, 0) < 8388608.0 )
  {
g4_m128_lane<float>(v13, 0) = (float)(int)g4_m128_lane<float>(v31, 0);
g4_m128_lane<float>(v31, 0) =g4_m128_lane<float>(v13, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v13, v31), 0) & 0x3F800000);
  }
g4_m128_lane<float>(v31, 0) =g4_m128_lane<float>(v31, 0) * v1;
g4_m128_lane<float>(v14, 0) = *((float *)self + 11) * v2;
  if ( fabs(g4_m128_lane<float>(v14, 0)) < 8388608.0 )
  {
g4_m128_lane<float>(v3, 0) = (float)(int)g4_m128_lane<float>(v14, 0);
g4_m128_lane<float>(v14, 0) =g4_m128_lane<float>(v3, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v3, v14), 0) & 0x3F800000);
  }
  v15 = v1 *g4_m128_lane<float>(v14, 0);
  *((float *)self + 9) = v7;
  *((uint32_t *)self + 10) =g4_m128_lane<int32_t>(v31, 3);
  *((float *)self + 11) = v11;
  *((float *)self + 6) = v7;
  *((uint32_t *)self + 7) =g4_m128_lane<int32_t>(v31, 3);
  *((float *)self + 8) = v11;
  if (g4_m128_lane<float>(v31, 2) > v7 )
    *((uint32_t *)self + 9) =g4_m128_lane<int32_t>(v31, 2);
  if (g4_m128_lane<float>(v31, 0) >g4_m128_lane<float>(v31, 3) )
    *((uint32_t *)self + 10) =g4_m128_lane<int32_t>(v31, 0);
  if ( v15 > v11 )
    *((float *)self + 11) = v15;
  if ( v7 >g4_m128_lane<float>(v31, 2) )
    *((uint32_t *)self + 6) =g4_m128_lane<int32_t>(v31, 2);
  if (g4_m128_lane<float>(v31, 3) >g4_m128_lane<float>(v31, 0) )
    *((uint32_t *)self + 7) =g4_m128_lane<int32_t>(v31, 0);
  if ( v11 > v15 )
  {
    *((float *)self + 8) = v15;
    v11 = v15;
  }
  v16 = *((uint32_t *)self + 18);
  v17 = *((float *)self + 11);
  v18 = (float)(*((float *)self + 9) - *((float *)self + 6)) * v2;
  v19 = (float)(*((float *)self + 10) - *((float *)self + 7)) * v2;
  *((uint32_t *)self + 19) = (int)v18 + 1;
  v20 = (float)(v17 - v11) * v2;
  *((uint32_t *)self + 20) = (int)v19 + 1;
  *((uint32_t *)self + 21) = (int)v20 + 1;
  v21 = (unsigned int *)opNewArray(12 * v16 + 4);
  *v21 = v16;
  v22 = (__m128i *)(v21 + 1);
  v35 = v16 - 1;
  v33 = v22;
  if ( v16 != 0 )
  {
    v36 = 4 * (v16 >> 2);
    if ( v16 <= 3 )
      goto LABEL_31;
    if ( 4 * (v16 >> 2) == 0 )
      goto LABEL_31;
    v23 = 0;
    do
    {
      ++v23;
      *v22 = g4_m128_from<__m128i>(0LL);
      v22[1] = g4_m128_from<__m128i>(0LL);
      v22[2] = g4_m128_from<__m128i>(0LL);
      v22 += 3;
    }
    while ( v16 >> 2 > v23 );
    v35 -= v36;
    v22 = &v33[3 * (v16 >> 2)];
    if ( v16 != v36 )
    {
LABEL_31:
      v24 = v35;
      do
      {
        --v24;
g4_m128_lane<int32_t>(*(v22), 0) = 0;
g4_m128_lane<int32_t>(*(v22), 1) = 0;
g4_m128_lane<int32_t>(*(v22), 2) = 0;
        v22 = (__m128i *)((char *)v22 + 12);
      }
      while ( v24 != -1 );
    }
  }
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v33);
  result = opNewArray(4 * *((uint32_t *)self + 18));
  v26 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 13) = result;
  if ( v26 > 0 )
  {
    v37 = 0;
    v29 = (int)v20 + 1;
    v30 = (int)v19 + 1;
    v32 = (int)v18 + 1;
    v34 = v29 * v30 * v32;
    v27 = 2 * v34;
    while ( 1 )
    {
      v28 = v27;
      *(uint32_t *)(4 * v37 + result) = opNewArray(v27);
      result = v29 * v30 * v32;
      v27 = v28;
      if ( v34 > 0 )
      {
        result = 0;
        do
        {
          *(uint16_t *)(*(uint32_t *)(*((uint32_t *)self + 13) + 4 * v37) + result) = -1;
          result += 2;
        }
        while ( v28 != result );
      }
      if ( *((uint32_t *)self + 18) <= ++v37 )
        break;
      result = *((uint32_t *)self + 13);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData  (binary VA: 0xd9f270)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *a1, int a2, float a3, int *a4)
{
  float v4; // xmm6_4
  float v5; // xmm5_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm7_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v14;
  float v15;
  float v16;

  *((float *)a1 + 26) = a3;
  v4 = *((float *)a1 + 6);
  *((uint32_t *)a1 + 18) = a2;
  v5 = *((float *)a1 + 7);
  v6 = *((float *)a1 + 8);
  v7 = v4 - (float)((float)*a4 * a3);
  v8 = v5 - (float)((float)a4[1] * a3);
  v9 = v6 - (float)((float)a4[2] * a3);
  v14 = *((float *)a1 + 9);
  if ( v7 > v14 )
  {
    *((float *)a1 + 9) = v7;
    v14 = v7;
  }
  v15 = *((float *)a1 + 10);
  if ( v8 > v15 )
  {
    *((float *)a1 + 10) = v8;
    v15 = v8;
  }
  v16 = *((float *)a1 + 11);
  if ( v9 > v16 )
  {
    *((float *)a1 + 11) = v9;
    v16 = v9;
  }
  if ( v4 > v7 )
  {
    *((float *)a1 + 6) = v7;
    v4 = v7;
  }
  if ( v5 > v8 )
  {
    *((float *)a1 + 7) = v8;
    v5 = v8;
  }
  if ( v6 > v9 )
  {
    *((float *)a1 + 8) = v9;
    v6 = v9;
  }
  v10 = (float)((float)*a4 * a3) + v14;
  v11 = (float)((float)a4[1] * a3) + v15;
  v12 = (float)((float)a4[2] * a3) + v16;
  if ( v10 > v14 )
    *((float *)a1 + 9) = v10;
  if ( v11 > v15 )
    *((float *)a1 + 10) = v11;
  if ( v12 > v16 )
    *((float *)a1 + 11) = v12;
  if ( v4 > v10 )
    *((float *)a1 + 6) = v10;
  if ( v5 > v11 )
    *((float *)a1 + 7) = v11;
  if ( v6 > v12 )
    *((float *)a1 + 8) = v12;
  return glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData(a1);
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingAvgDistance  (binary VA: 0xd9f3d0)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingAvgDistance
// ----------------------------------------------------------------------------
bool glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingAvgDistance(int a1, int a2)
{
  unsigned int v2;
  float v3; // xmm0_4
  float v4; // xmm1_4
  unsigned int v5;

  v2 = -1431655765 * ((*(uint32_t *)(a1 + 24) - *(uint32_t *)(a1 + 20)) >> 2);
  v3 = (float)HIWORD(v2);
  v4 = (float)(uint16_t)v2;
  v5 = -1431655765 * ((*(uint32_t *)(a2 + 24) - *(uint32_t *)(a2 + 20)) >> 2);
  return (float)(*(float *)(a2 + 16) / (float)((float)((float)HIWORD(v5) * 65536.0) + (float)(uint16_t)v5)) > (float)(*(float *)(a1 + 16) / (float)((float)(v3 * 65536.0) + v4));
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradianceInternal  (binary VA: 0xd9f460)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradianceInternal
// ----------------------------------------------------------------------------
void glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradianceInternal(uint32_t *a1, int *a2, int a3)
{
  int v3;
  int v4;
  void **v5;
  int v6;
  int v7;
  int v8;
  int16_t v9; // bp
  int v10;
  int16_t v11;
  int v12;
  int v13;
  int v14;
  uint16_t *v15;
  void **v16;
  int v17;
  int v18;
  int v19;
  void *s;
  int v21;
  int v22;

  s = (void *)opNewArray(2 * a1[21] * a1[20] * a1[19]);
  memset(s, 0xFFFF, 2 * a1[21] * a1[20] * a1[19]);
  v3 = a1[21];
  if ( v3 > 0 )
  {
    v14 = a1[20];
    v4 = a1[13];
    v21 = 4 * a3;
    v18 = 0;
    v15 = *(uint16_t **)(v4 + 4 * a3);
    v5 = (void **)(v4 + 4 * a3);
    while ( v14 <= 0 )
    {
      v16 = v5;
LABEL_22:
      if ( ++v18 >= v3 )
        goto LABEL_23;
    }
    v6 = a1[19];
    v17 = 0;
LABEL_5:
    while ( 1 )
    {
      v7 = 0;
      v13 = v6;
      if ( v6 > 0 )
        break;
      ++v17;
      v16 = v5;
      if ( v17 >= v14 )
      {
LABEL_21:
        v3 = a1[21];
        goto LABEL_22;
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = v5;
        v8 = v7 + v6 * v17 + v14 * v6 * v18;
        v12 = v8;
        v9 = v15[v8];
        if ( v9 == -1 )
          break;
LABEL_7:
        *((uint16_t *)s + v8) = v9;
        v14 = a1[20];
        v5 = (void **)(a1[13] + v21);
        v16 = v5;
        v13 = a1[19];
        v15 = (uint16_t *)(*v5);
LABEL_8:
        ++v7;
        v6 = v13;
        if ( v7 >= v13 )
          goto LABEL_20;
      }
      v10 = a2[1];
      v19 = *a2;
      v22 = a2[2];
      if ( v6 - *a2 > v7 && v14 - v10 > v17 && a1[21] - v22 > v18 )
      {
        v9 = v15[v14 * v6 * (v22 + v18) + v6 * (v10 + v17) + v7 + v19];
        if ( v9 != -1 )
        {
          v8 = v12;
          goto LABEL_7;
        }
      }
      if ( v7 < v19 )
        goto LABEL_8;
      if ( v17 < v10 )
        goto LABEL_8;
      if ( v22 > v18 )
        goto LABEL_8;
      v11 = v15[v7 - v19 + v6 * (v17 - v10) + v14 * (v18 - v22) * v6];
      if ( v11 == -1 )
        goto LABEL_8;
      ++v7;
      *((uint16_t *)s + v12) = v11;
      v5 = (void **)(a1[13] + v21);
      v13 = a1[19];
      v14 = a1[20];
      v16 = v5;
      v6 = v13;
      v15 = (uint16_t *)(*v5);
      if ( v7 >= v13 )
      {
LABEL_20:
        if ( ++v17 >= v14 )
          goto LABEL_21;
        goto LABEL_5;
      }
    }
  }
  v16 = (void **)(4 * a3 + a1[13]);
  v15 = (uint16_t *)(*v16);
LABEL_23:
  *v16 = s;
  opDelete(v15);
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradiance  (binary VA: 0xd9f740)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradiance
// ----------------------------------------------------------------------------
void glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradiance(uint32_t *a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef const char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  glf::Console::Print((glf::Console::Self *)"Expanding probes...\n", v8);
  v12[0] = 1;
  v12[1] = 0;
  v3 = *a2;
  v12[2] = 0;
  if ( v3 > 0 )
  {
    v4 = 0;
    do
    {
      v9 = v4;
      glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradianceInternal(a1, v12, a3);
      v3 = *a2;
      v4 = v9 + 1;
    }
    while ( *a2 > v9 + 1 );
  }
  v5 = a2[2];
  v12[0] = 0;
  v12[1] = 0;
  v12[2] = 1;
  if ( v5 > 0 )
  {
    v6 = 0;
    do
    {
      v10 = v6;
      glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradianceInternal(a1, v12, a3);
      v6 = v10 + 1;
    }
    while ( a2[2] > v10 + 1 );
    v3 = *a2;
  }
  v12[0] = 0;
  v12[1] = 1;
  v12[2] = 0;
  if ( v3 > 0 )
  {
    v7 = 0;
    do
    {
      v11 = v7;
      glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradianceInternal(a1, v12, a3);
      v7 = v11 + 1;
    }
    while ( *a2 > v11 + 1 );
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::compressIndex  (binary VA: 0xd9f860)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::compressIndex
// ----------------------------------------------------------------------------
uint32_t * glitch::indexedIrradiance::CIndexedIrradianceManager::compressIndex(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *self)
{
  int v1;
  uint32_t *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int v13;
  void *s;
  int *v15;
  int v16;
  int v17;
  int16_t v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int j;
  int v30;
  int v31;
  int v32;
  int i;
  int v34;

  v1 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 22) = (*((uint32_t *)self + 19) - 1) / v1 + 1;
  *((uint32_t *)self + 23) = (*((uint32_t *)self + 21) - 1) / v1 + 1;
  result = (uint32_t *)opNewArray(4 * *((uint32_t *)self + 18));
  v3 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(result);
  if ( v3 > 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      result[v4] = opNewArray(4 * *((uint32_t *)self + 23) * *((uint32_t *)self + 22));
      s = *(void **)(*((uint32_t *)self + 15) + 4 * v4++);
      result = (uint32_t *)(memset(s, 0, 4 * *((uint32_t *)self + 23) * *((uint32_t *)self + 22)));
      v5 = *((uint32_t *)self + 18);
      if ( v5 <= v4 )
        break;
      result = *((uint32_t **)self + 15);
    }
    if ( v5 > 0 )
    {
      result = *((uint32_t **)self + 23);
      for ( i = 0; i < v5; ++i )
      {
        if ( (int)(uintptr_t)(result) > 0 )
        {
          v27 = *((uint32_t *)self + 22);
          for ( j = 0; j < (int)(uintptr_t)(result); ++j )
          {
            if ( v27 > 0 )
            {
              v25 = *((uint32_t *)self + 14);
              v34 = v27;
              v28 = 0;
              while ( 1 )
              {
                v32 = v25 * j;
                v6 = v25 * v28 + v25;
                v7 = *((uint32_t *)self + 19);
                v23 = v25 * v28;
                v30 = *((uint32_t *)self + 20);
                if ( v6 > v7 )
                  v6 = *((uint32_t *)self + 19);
                v8 = *((uint32_t *)self + 21);
                if ( v25 + v25 * j <= v8 )
                  v8 = v25 + v25 * j;
                v31 = v8;
                if ( v32 < v8 )
                {
                  v21 = v25 * j;
                  v9 = true;
                  v24 = 2 * v7 * v30;
                  v22 = 2 * (v23 + v30 * v7 * v32);
                  v19 = 2 * v7;
                  do
                  {
                    if ( v30 > 0 )
                    {
                      v16 = 0;
                      v17 = v22;
                      do
                      {
                        v10 = v25 * v28;
                        v11 = v17;
                        if ( v23 < v6 )
                        {
                          do
                          {
                            if ( v9 )
                              v9 = *(uint16_t *)(*(uint32_t *)(*((uint32_t *)self + 13) + 4 * i) + v11) == 0xFFFF;
                            ++v10;
                            v11 += 2;
                          }
                          while ( v10 != v6 );
                        }
                        ++v16;
                        v17 += v19;
                      }
                      while ( v16 != v30 );
                    }
                    ++v21;
                    v22 += v24;
                  }
                  while ( v21 != v31 );
                  if ( !v9 )
                  {
                    v15 = (int *)(*(uint32_t *)(*((uint32_t *)self + 15) + 4 * i) + 4 * (v28 + v27 * j));
                    *v15 = opNewArray(2 * v25 * v25 * v30);
                    memset(
                      *(void **)(*(uint32_t *)(*((uint32_t *)self + 15) + 4 * i) + 4 * (*((uint32_t *)self + 22) * j + v28)),
                      0xFFFF,
                      2 * *((uint32_t *)self + 14) * *((uint32_t *)self + 14) * *((uint32_t *)self + 20));
                    v26 = v25 * j;
                    do
                    {
                      v20 = 0;
                      if ( v30 > 0 )
                      {
                        do
                        {
                          v12 = v23;
                          if ( v23 < v6 )
                          {
                            do
                            {
                              v18 = *(uint16_t *)(*(uint32_t *)(*((uint32_t *)self + 13) + 4 * i)
                                             + 2
                                             * (v12
                                              + *((uint32_t *)self + 19) * v20
                                              + *((uint32_t *)self + 20) * v26 * *((uint32_t *)self + 19)));
                              v13 = *((uint32_t *)self + 14) * v20
                                  + v12
                                  - v23
                                  + *((uint32_t *)self + 20) * *((uint32_t *)self + 14) * (v26 - v32);
                              ++v12;
                              *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 15) + 4 * i)
                                                   + 4 * (v28 + *((uint32_t *)self + 22) * j))
                                       + 2 * v13) = v18;
                            }
                            while ( v12 != v6 );
                          }
                          ++v20;
                        }
                        while ( v20 != v30 );
                      }
                      ++v26;
                    }
                    while ( v26 != v31 );
                    v34 = *((uint32_t *)self + 22);
                  }
                }
                if ( ++v28 >= v34 )
                  break;
                v27 = v34;
                v25 = *((uint32_t *)self + 14);
              }
              result = *((uint32_t **)self + 23);
              v27 = v34;
            }
          }
          v5 = *((uint32_t *)self + 18);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::simulateIndexCompression  (binary VA: 0xd9fc00)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::simulateIndexCompression
// ----------------------------------------------------------------------------
uint32_t * glitch::indexedIrradiance::CIndexedIrradianceManager::simulateIndexCompression(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int i;
  const char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  void **v17;
  char *v19;
  char *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v25 = 0;
  v1 = *((uint32_t *)self + 21);
  v2 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 14) = 2;
  v3 = v1 / 2;
  if ( v2 / 2 <= v1 / 2 )
    v3 = v2 / 2;
  v24 = v3;
  v23 = 2 * *((uint32_t *)self + 20) * v2 * v1;
  v4 = 2;
LABEL_4:
  v22 = 0;
  while ( v22 < v23 && v24 > v4 )
  {
    glitch::indexedIrradiance::CIndexedIrradianceManager::compressIndex(self);
    v5 = *((uint32_t *)self + 23) * *((uint32_t *)self + 22);
    if ( v5 <= 0 )
    {
      v9 = *((const char **)self + 14);
      v12 = 0;
      v10 = 0;
    }
    else
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        if ( *(uint32_t *)(**((uint32_t **)self + 15) + 4 * i) != 0 )
          ++v6;
      }
      v9 = *((const char **)self + 14);
      v10 = 2 * *((uint32_t *)self + 20) * (uint32_t)(uintptr_t)(v9) * (uint32_t)(uintptr_t)(v9) * v6;
      v11 = v10 + 1023;
      if ( ((*((uint32_t *)self + 20) * (uint32_t)(uintptr_t)(v9) * (uint32_t)(uintptr_t)(v9) * v6) & 0x40000000) == 0 )
        v11 = 2 * *((uint32_t *)self + 20) * (uint32_t)(uintptr_t)(v9) * (uint32_t)(uintptr_t)(v9) * v6;
      v12 = v11 >> 10;
    }
    v13 = 4 * v5;
    v22 = v13 + v10;
    glf::Console::Print((glf::Console::Self *)"After compression with %d probes per sector:\n", v9);
    glf::Console::Print((glf::Console::Self *)"\t Sector Index Size: %d KB\n", (const char *)(v13 / 1024));
    glf::Console::Print((glf::Console::Self *)"\t Non-empty Sector Size: %d KB\n", (const char *)v12);
    glf::Console::Print((glf::Console::Self *)"\t Total Size: %d KB\n", (const char *)(v22 / 1024));
    v14 = *((uint32_t **)self + 15);
    if ( *((int *)self + 18) > 0 )
    {
      v21 = 0;
      do
      {
        v15 = *((uint32_t *)self + 23) * *((uint32_t *)self + 22);
        if ( v15 <= 0 )
        {
          v17 = (void **)v14[v21];
        }
        else
        {
          v16 = 0;
          v17 = (void **)v14[v21];
          do
          {
            if ( v17[v16] != nullptr )
            {
              opDeleteArray(v17[v16]);
              v14 = *((uint32_t **)self + 15);
              v17 = (void **)v14[v21];
            }
            ++v16;
          }
          while ( v16 != v15 );
        }
        if ( v17 != nullptr )
        {
          opDeleteArray(v17);
          v14 = *((uint32_t **)self + 15);
        }
        ++v21;
      }
      while ( *((uint32_t *)self + 18) > v21 );
    }
    if ( v14 != nullptr )
      opDeleteArray(v14);
    v4 = *((uint32_t *)self + 14);
    if ( v22 < v23 )
    {
      if ( v4 > 8 )
        v4 += 8;
      else
        v4 *= 2;
      *((uint32_t *)self + 14) = v4;
      ++v25;
      v23 = v22;
      goto LABEL_4;
    }
  }
  if ( v25 != 0 )
  {
    if ( v4 <= 8 )
      *((uint32_t *)self + 14) = v4 / 2;
    else
      *((uint32_t *)self + 14) = v4 - 8;
  }
  else
  {
    glf::Console::Print((glf::Console::Self *)"WARNING: Not enough empty areas, means you can disable index compression", v19);
    glf::Console::Print((glf::Console::Self *)"WARNING: your irradiance file size is not optimal :(", v20);
    *((uint32_t *)self + 14) = 1;
  }
  return glitch::indexedIrradiance::CIndexedIrradianceManager::compressIndex(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::findSHCoefRange  (binary VA: 0xd9fe80)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::findSHCoefRange
// ----------------------------------------------------------------------------
void glitch::indexedIrradiance::CIndexedIrradianceManager::findSHCoefRange(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *self)
{
  int v1;
  const char *v2;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v3;
  int *v4;
  int v5;
  int v6;
  float v7; // xmm1_4
  int v8;
  float v9; // xmm0_4
  int v10;
  float *v11;
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm0_4
  float v62; // xmm1_4
  float v63; // xmm2_4
  float v64; // xmm0_4
  float v65; // xmm1_4
  float v66; // xmm2_4
  float v67; // xmm0_4
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm0_4
  float v71; // xmm1_4
  float v72; // xmm2_4
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm2_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm2_4
  float v79; // xmm0_4
  float v80; // xmm1_4
  float v81; // xmm2_4
  float v82; // xmm0_4
  float v83; // xmm1_4
  float v84; // xmm2_4
  float v85; // xmm0_4
  float v86; // xmm1_4
  float v87; // xmm2_4
  double v88; // xmm1_8
  double v89; // xmm0_8
  char *v90;

  if ( *((int *)self + 18) > 0 )
  {
    v1 = 0;
    v2 = nullptr;
    v3 = self;
    do
    {
      v4 = (int *)(*((uint32_t *)v3 + 12) + v1);
      v5 = *v4;
      v6 = (uint16_t)((v4[1] - *v4) >> 2);
      if ( (uint16_t)((v4[1] - *v4) >> 2) != 0 )
      {
        v7 = 10000.0;
        v8 = 0;
        v9 = -10000.0;
        do
        {
          v10 = (uint16_t)v8++;
          v11 = *(float **)(v5 + 4 * v10);
          v12 = v11[1];
          v13 = fmaxf(fmaxf(v9, *v11), v12);
          v14 = fminf(fminf(v7, *v11), v12);
          v15 = v11[2];
          v16 = fmaxf(v13, v15);
          v17 = fminf(v14, v15);
          v18 = v11[3];
          v19 = fmaxf(v16, v18);
          v20 = fminf(v17, v18);
          v21 = v11[4];
          v22 = fmaxf(v19, v21);
          v23 = fminf(v20, v21);
          v24 = v11[5];
          v25 = fmaxf(v22, v24);
          v26 = fminf(v23, v24);
          v27 = v11[6];
          v28 = fmaxf(v25, v27);
          v29 = fminf(v26, v27);
          v30 = v11[7];
          v31 = fmaxf(v28, v30);
          v32 = fminf(v29, v30);
          v33 = v11[8];
          v34 = fmaxf(v31, v33);
          v35 = fminf(v32, v33);
          v36 = v11[9];
          v37 = fmaxf(v34, v36);
          v38 = fminf(v35, v36);
          v39 = v11[10];
          v40 = fmaxf(v37, v39);
          v41 = fminf(v38, v39);
          v42 = v11[11];
          v43 = fmaxf(v40, v42);
          v44 = fminf(v41, v42);
          v45 = v11[12];
          v46 = fmaxf(v43, v45);
          v47 = fminf(v44, v45);
          v48 = v11[13];
          v49 = fmaxf(v46, v48);
          v50 = fminf(v47, v48);
          v51 = v11[14];
          v52 = fmaxf(v49, v51);
          v53 = fminf(v50, v51);
          v54 = v11[15];
          v55 = fmaxf(v52, v54);
          v56 = fminf(v53, v54);
          v57 = v11[16];
          v58 = fmaxf(v55, v57);
          v59 = fminf(v56, v57);
          v60 = v11[17];
          v61 = fmaxf(v58, v60);
          v62 = fminf(v59, v60);
          v63 = v11[18];
          v64 = fmaxf(v61, v63);
          v65 = fminf(v62, v63);
          v66 = v11[19];
          v67 = fmaxf(v64, v66);
          v68 = fminf(v65, v66);
          v69 = v11[20];
          v70 = fmaxf(v67, v69);
          v71 = fminf(v68, v69);
          v72 = v11[21];
          v73 = fmaxf(v70, v72);
          v74 = fminf(v71, v72);
          v75 = v11[22];
          v76 = fmaxf(v73, v75);
          v77 = fminf(v74, v75);
          v78 = v11[23];
          v79 = fmaxf(v76, v78);
          v80 = fminf(v77, v78);
          v81 = v11[24];
          v82 = fmaxf(v79, v81);
          v83 = fminf(v80, v81);
          v84 = v11[25];
          v85 = fmaxf(v82, v84);
          v86 = fminf(v83, v84);
          v87 = v11[26];
          v9 = fmaxf(v85, v87);
          v7 = fminf(v86, v87);
        }
        while ( v8 < v6 );
        v88 = v7;
        v89 = v9;
      }
      else
      {
        v89 = -10000.0;
        v88 = 10000.0;
      }
      v1 += 12;
      glf::Console::Print((glf::Console::Self *)"Min SH coef for set %d = %f\n", v2, LODWORD(v88), HIDWORD(v88));
      v90 = (char *)v2++;
      glf::Console::Print((glf::Console::Self *)"Max SH coef for set %d = %f\n", v90, LODWORD(v89), HIDWORD(v89));
      v3 = self;
    }
    while ( *((uint32_t *)self + 18) > (int)(uintptr_t)(v2) );
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::getNbSHCoefs  (binary VA: 0xda00d0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::getNbSHCoefs
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradiancePoint::getNbSHCoefs()
{
  return 9;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::getSizeOfCoef  (binary VA: 0xda00e0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::getSizeOfCoef
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradiancePoint::getSizeOfCoef()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom  (binary VA: 0xda00f0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2)
{
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 12) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 15);
  *((uint32_t *)self + 16) = *((uint32_t *)a2 + 16);
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 17);
  *((uint32_t *)self + 18) = *((uint32_t *)a2 + 18);
  *((uint32_t *)self + 19) = *((uint32_t *)a2 + 19);
  *((uint32_t *)self + 20) = *((uint32_t *)a2 + 20);
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 21);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 22);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 23);
  *((uint32_t *)self + 24) = *((uint32_t *)a2 + 24);
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 25);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 26);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 27);
  *((uint32_t *)self + 30) = *((uint32_t *)a2 + 30);
  *((uint32_t *)self + 28) = *((uint32_t *)a2 + 28);
  *((uint32_t *)self + 31) = *((uint32_t *)a2 + 31);
  *((uint32_t *)self + 29) = *((uint32_t *)a2 + 29);
  *((uint32_t *)self + 32) = *((uint32_t *)a2 + 32);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom_eada01d0  (binary VA: 0xda01d0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom_eada01d0(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2)
{
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 12) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 15);
  *((uint32_t *)self + 16) = *((uint32_t *)a2 + 16);
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 17);
  *((uint32_t *)self + 18) = *((uint32_t *)a2 + 18);
  *((uint32_t *)self + 19) = *((uint32_t *)a2 + 19);
  *((uint32_t *)self + 20) = *((uint32_t *)a2 + 20);
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 21);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 22);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 23);
  *((uint32_t *)self + 24) = *((uint32_t *)a2 + 24);
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 25);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 26);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 27);
  *((uint32_t *)self + 30) = *((uint32_t *)a2 + 30);
  *((uint32_t *)self + 28) = *((uint32_t *)a2 + 28);
  *((uint32_t *)self + 31) = *((uint32_t *)a2 + 31);
  *((uint32_t *)self + 29) = *((uint32_t *)a2 + 29);
  *((uint32_t *)self + 32) = *((uint32_t *)a2 + 32);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::opAssign  (binary VA: 0xda02b0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::operator=
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::opAssign(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2)
{
  glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct  (binary VA: 0xda02f0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::CIndexedIrradiancePoint
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  return glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::opAddAssign  (binary VA: 0xda0370)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::operator+=
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::opAddAssign(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2)
{
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v2;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v3;
  __m128 v4;
  int v5;
  __m128 v6;
  int v7;
  __m128 v8;
  int v9;
  char *v10;
  int v11;
  char *v12;
  int v14;
  int i;

  v2 = a2;
  v3 = self;
  for ( i = 0; i != 3; ++i )
  {
    if ( v2 > (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 16)
      || v3 > (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v2 + 16) )
    {
      v4 = _mm_add_ps(_mm_loadh_ps((const double *)v2 + 1), _mm_loadh_ps((const double *)v3 + 1));
      v5 = 1;
      v6 = _mm_loadh_ps((const double *)v3 + 3);
      v7 = 8;
      _mm_storel_ps((double *)v3, v4);
      _mm_storeh_ps((double *)v3 + 1, v4);
      v8 = _mm_add_ps(_mm_loadh_ps((const double *)v2 + 3), v6);
      _mm_storel_ps((double *)v3 + 2, v8);
      _mm_storeh_ps((double *)v3 + 3, v8);
    }
    else
    {
      v5 = 9;
      v7 = 0;
    }
    v9 = 4 * v7;
    v14 = 4 * v5;
    v10 = (char *)self + 36 * i + v9;
    v11 = 0;
    v12 = (char *)a2 + 36 * i + v9;
    do
    {
      *(float *)&v10[v11] = *(float *)&v10[v11] + *(float *)&v12[v11];
      v11 += 4;
    }
    while ( v11 != v14 );
    v2 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v2 + 36);
    v3 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 36);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::opSubAssign  (binary VA: 0xda0470)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::operator-=
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::opSubAssign(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2)
{
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v2;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v3;
  __m128 v4;
  int v5;
  int v6;
  __m128 v7;
  int v8;
  char *v9;
  int v10;
  char *v11;
  int v13;
  int i;

  v2 = a2;
  v3 = self;
  for ( i = 0; i != 3; ++i )
  {
    if ( v2 > (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 16)
      || v3 > (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v2 + 16) )
    {
      v4 = _mm_sub_ps(_mm_loadh_ps((const double *)v3 + 1), _mm_loadh_ps((const double *)v2 + 1));
      v5 = 1;
      v6 = 8;
      _mm_storel_ps((double *)v3, v4);
      _mm_storeh_ps((double *)v3 + 1, v4);
      v7 = _mm_sub_ps(_mm_loadh_ps((const double *)v3 + 3), _mm_loadh_ps((const double *)v2 + 3));
      _mm_storel_ps((double *)v3 + 2, v7);
      _mm_storeh_ps((double *)v3 + 3, v7);
    }
    else
    {
      v5 = 9;
      v6 = 0;
    }
    v8 = 4 * v6;
    v13 = 4 * v5;
    v9 = (char *)self + 36 * i + v8;
    v10 = 0;
    v11 = (char *)a2 + 36 * i + v8;
    do
    {
      *(float *)&v9[v10] = *(float *)&v9[v10] - *(float *)&v11[v10];
      v10 += 4;
    }
    while ( v10 != v13 );
    v2 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v2 + 36);
    v3 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 36);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::opMulAssign  (binary VA: 0xda0570)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::operator*=
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::opMulAssign(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, unsigned int a2)
{
  __m128 v2;
  char *v3;
  unsigned int v4;
  unsigned int i;
  char *v6;
  int v7;
  unsigned int v8;
  int v9;
  char *v10;
  int v12;
  unsigned int v13;
  int v14;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v15;
  unsigned int v16;
  int v17;

  v15 = self;
  v17 = 0;
  v2 = _mm_shuffle_ps(G4_BITCAST<__m128>(a2), G4_BITCAST<__m128>(a2), 0);
  do
  {
    v3 = (char *)self + 36 * v17;
    v4 = -((uint8_t)((uint8_t)(uintptr_t)v15 & 0xF) >> 2) & 3;
    if ( v4 != 0 )
    {
      for ( i = 0; i < v4; ++i )
        *(float *)&v3[4 * i] = *(float *)&v3[4 * i] * *(float *)&a2;
      v14 = 9 - i;
    }
    else
    {
      v14 = 9;
      i = 0;
    }
    v16 = 9 - v4;
    v13 = (9 - v4) >> 2;
    v12 = 4 * v13;
    if ( 4 * v13 == 0 )
      goto LABEL_10;
    v6 = (char *)v15 + 4 * v4;
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      *(__m128 *)&v6[v7] = _mm_mul_ps(*(__m128 *)&v6[v7], v2);
      v7 += 16;
    }
    while ( v8 < v13 );
    i += v12;
    v14 -= v12;
    if ( v16 != v12 )
    {
LABEL_10:
      v9 = 0;
      v10 = &v3[4 * i];
      do
      {
        *(float *)&v10[v9] = *(float *)&v10[v9] * *(float *)&a2;
        v9 += 4;
      }
      while ( v9 != 4 * v14 );
    }
    ++v17;
    v15 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v15 + 36);
  }
  while ( v17 != 3 );
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::clear  (binary VA: 0xda06a0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::clear
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::clear(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 32) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct  (binary VA: 0xda0710)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::CIndexedIrradiancePoint
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  return glitch::indexedIrradiance::CIndexedIrradiancePoint::clear(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::load  (binary VA: 0xda0790)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::load
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradianceManager::load(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *a1, const char *a2)
{
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v2;
  const char *v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v15;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v16;
  int SizeOfCoef;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v18;
  int v19;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v20;
  int v21;
  int *v22;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v23;
  int v24;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v25;
  char *v26;
  uint32_t *v27;
  char *v28;
  uint32_t *v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  void *v40;
  int v41;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v42;
  int *v43;
  int v44;
  int v45;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v46;
  void **v47;
  int k;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef char *_g4_t_v53;
  typedef glitch::indexedIrradiance::CIndexedIrradianceManager::Self *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint16_t _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef int _g4_t_i;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef glitch::indexedIrradiance::CIndexedIrradianceManager::Self *_g4_t_v66;
  typedef glitch::indexedIrradiance::CIndexedIrradianceManager::Self *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef size_t _g4_t_v71;
  typedef size_t _g4_t_v72;
  typedef void (*_g4_t_v73)(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *, glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *, int);
  typedef void (*_g4_t_v74)(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *, char *, int);
  typedef void (*_g4_t_v75)(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *, char *, int);
  typedef int _g4_t_v76;
  typedef size_t _g4_t_j;
  typedef int _g4_t_v78;
  typedef int _g4_t_NbSHCoefs;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef unsigned int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef char *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v89;
  typedef char _g4_t_v90[4];
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98[3];
  typedef glitch::indexedIrradiance::CIndexedIrradianceManager::Self **_g4_t_v99;
  typedef const char *_g4_t_v100;
  typedef int _g4_t_v101;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v49)) > _g4_s0 ? (4u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v50)) > _g4_s1 ? (8u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v51)) > _g4_s2 ? (12u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v52)) > _g4_s3 ? (16u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v53)) > _g4_s4 ? (16u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v54)) > _g4_s5 ? (16u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v55)) > _g4_s6 ? (20u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (22u + sizeof(_g4_t_v56)) > _g4_s7 ? (22u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v57)) > _g4_s8 ? (24u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v58)) > _g4_s9 ? (28u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v59)) > _g4_s10 ? (28u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v60)) > _g4_s11 ? (32u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v61)) > _g4_s12 ? (32u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_i)) > _g4_s13 ? (32u + sizeof(_g4_t_i)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v63)) > _g4_s14 ? (36u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v64)) > _g4_s15 ? (36u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v65)) > _g4_s16 ? (36u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v66)) > _g4_s17 ? (40u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v67)) > _g4_s18 ? (40u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v68)) > _g4_s19 ? (44u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v69)) > _g4_s20 ? (44u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v70)) > _g4_s21 ? (44u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v71)) > _g4_s22 ? (48u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v72)) > _g4_s23 ? (48u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v73)) > _g4_s24 ? (48u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v74)) > _g4_s25 ? (48u + sizeof(_g4_t_v74)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v75)) > _g4_s26 ? (48u + sizeof(_g4_t_v75)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v76)) > _g4_s27 ? (48u + sizeof(_g4_t_v76)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_j)) > _g4_s28 ? (48u + sizeof(_g4_t_j)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v78)) > _g4_s29 ? (52u + sizeof(_g4_t_v78)) : _g4_s29,
    _g4_s31 = (52u + sizeof(_g4_t_NbSHCoefs)) > _g4_s30 ? (52u + sizeof(_g4_t_NbSHCoefs)) : _g4_s30,
    _g4_s32 = (52u + sizeof(_g4_t_v80)) > _g4_s31 ? (52u + sizeof(_g4_t_v80)) : _g4_s31,
    _g4_s33 = (52u + sizeof(_g4_t_v81)) > _g4_s32 ? (52u + sizeof(_g4_t_v81)) : _g4_s32,
    _g4_s34 = (52u + sizeof(_g4_t_v82)) > _g4_s33 ? (52u + sizeof(_g4_t_v82)) : _g4_s33,
    _g4_s35 = (52u + sizeof(_g4_t_v83)) > _g4_s34 ? (52u + sizeof(_g4_t_v83)) : _g4_s34,
    _g4_s36 = (52u + sizeof(_g4_t_v84)) > _g4_s35 ? (52u + sizeof(_g4_t_v84)) : _g4_s35,
    _g4_s37 = (56u + sizeof(_g4_t_v85)) > _g4_s36 ? (56u + sizeof(_g4_t_v85)) : _g4_s36,
    _g4_s38 = (60u + sizeof(_g4_t_v86)) > _g4_s37 ? (60u + sizeof(_g4_t_v86)) : _g4_s37,
    _g4_s39 = (64u + sizeof(_g4_t_v87)) > _g4_s38 ? (64u + sizeof(_g4_t_v87)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v88)) > _g4_s39 ? (68u + sizeof(_g4_t_v88)) : _g4_s39,
    _g4_s41 = (72u + sizeof(_g4_t_v89)) > _g4_s40 ? (72u + sizeof(_g4_t_v89)) : _g4_s40,
    _g4_s42 = (88u + sizeof(_g4_t_v90)) > _g4_s41 ? (88u + sizeof(_g4_t_v90)) : _g4_s41,
    _g4_s43 = (104u + sizeof(_g4_t_v91)) > _g4_s42 ? (104u + sizeof(_g4_t_v91)) : _g4_s42,
    _g4_s44 = (108u + sizeof(_g4_t_v92)) > _g4_s43 ? (108u + sizeof(_g4_t_v92)) : _g4_s43,
    _g4_s45 = (112u + sizeof(_g4_t_v93)) > _g4_s44 ? (112u + sizeof(_g4_t_v93)) : _g4_s44,
    _g4_s46 = (116u + sizeof(_g4_t_v94)) > _g4_s45 ? (116u + sizeof(_g4_t_v94)) : _g4_s45,
    _g4_s47 = (120u + sizeof(_g4_t_v95)) > _g4_s46 ? (120u + sizeof(_g4_t_v95)) : _g4_s46,
    _g4_s48 = (124u + sizeof(_g4_t_v96)) > _g4_s47 ? (124u + sizeof(_g4_t_v96)) : _g4_s47,
    _g4_s49 = (128u + sizeof(_g4_t_v97)) > _g4_s48 ? (128u + sizeof(_g4_t_v97)) : _g4_s48,
    _g4_s50 = (132u + sizeof(_g4_t_v98)) > _g4_s49 ? (132u + sizeof(_g4_t_v98)) : _g4_s49,
    _g4_s51 = (144u + sizeof(_g4_t_v99)) > _g4_s50 ? (144u + sizeof(_g4_t_v99)) : _g4_s50,
    _g4_s52 = (148u + sizeof(_g4_t_v100)) > _g4_s51 ? (148u + sizeof(_g4_t_v100)) : _g4_s51,
    _g4_s53 = (152u + sizeof(_g4_t_v101)) > _g4_s52 ? (152u + sizeof(_g4_t_v101)) : _g4_s52
  };
  alignas(16) uint8_t _g4_sf[_g4_s53];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 22u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 32u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 32u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 36u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 36u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 40u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 44u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 48u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 48u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 52u);
  _g4_t_NbSHCoefs &NbSHCoefs = *reinterpret_cast<_g4_t_NbSHCoefs *>(_g4_sf + 52u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 52u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 52u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 52u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 56u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 60u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 64u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 68u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 72u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 88u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 104u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 108u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 112u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 116u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 120u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 124u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 128u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 132u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 144u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 148u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 152u);

  v99 = &a1;
  v2 = a1;
  v3 = a2;
  v66 = a1;
  glf::Console::Print((glf::Console::Self *)"Loading irradiance data from %s\n", a2);
  (*(void (**)(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **, uint32_t, const char *, int, int, int, int, int, int, int, int, int, glitch::indexedIrradiance::CIndexedIrradianceManager::Self *, int, size_t, int, int, int, int, int))(**(uint32_t **)(*((uint32_t *)v2 + 2) + 32) + 12))(
    &v89,
    *(uint32_t *)(*((uint32_t *)v2 + 2) + 32),
    v3,
    v49,
    v50,
    v51,
    v52,
    v55,
    v57,
    v58,
    v60,
    v63,
    v66,
    v68,
    v71,
    v78,
    v85,
    v86,
    v87,
    v88);
  v4 = *(uint32_t *)v89;
  v100 = (const char *)((uint8_t *)&loc_4);
  v99 = (glitch::indexedIrradiance::CIndexedIrradianceManager::Self **)&v91;
  (*(void (**)(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *))(v4 + 12))(v89);
  if ( v91 != 1399343437 )
  {
    v101 = (int)(uintptr_t)(v3);
    v5 = 0;
    glitch::os::Printer::logf(
      3,
      (int)(uintptr_t)("ERROR: Irradiance Manager: The file %s is not a valid file for irradiance.\n"
           "*** IRRADIANCE WILL NOT BE ENABLE. ***"),
      v101);
    goto LABEL_3;
  }
  G4_VCALL<void>(v89, 12, &v92, 4);
  if ( v92 != 3 )
  {
    v101 = (int)(uintptr_t)(v3);
    v5 = 0;
    glitch::os::Printer::logf(
      2,
      (int)(uintptr_t)("WARNING: Irradiance Manager: The file %s is of a different version, please rebuild irradiance.\n"
           "*** IRRADIANCE WILL NOT BE ENABLE. ***"),
      v101);
    goto LABEL_3;
  }
  G4_VCALL<void>(v89, 12, (int)(uintptr_t)(v67) + 72, 4);
  G4_VCALL<void>(v89, 12, (int)(uintptr_t)(v67) + 104, 4);
  G4_VCALL<void>(v89, 12, &v93, 4);
  G4_VCALL<void>(v89, 12, &v94, 4);
  G4_VCALL<void>(v89, 12, &v95, 4);
  G4_VCALL<void>(v89, 12, &v96, 4);
  G4_VCALL<void>(v89, 12, &v97, 4);
  G4_VCALL<void>(v89, 12, v98, 4);
  *((uint32_t *)v67 + 6) = v93;
  *((uint32_t *)v67 + 7) = v94;
  *((uint32_t *)v67 + 8) = v95;
  *((uint32_t *)v67 + 9) = v96;
  *((uint32_t *)v67 + 10) = v97;
  *((uint32_t *)v67 + 11) = v98[0];
  G4_VCALL<void>(v89, 12, (int)(uintptr_t)(v67) + 16, 4);
  glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData(v67);
  v7 = *((uint32_t *)v67 + 19);
  v8 = *((uint32_t *)v67 + 20);
  v72 = *((uint32_t *)v67 + 21);
  G4_VCALL<void>(v89, 12, (char *)&v88 + 2, 1);
  if ( BYTE2(v88) != 0 )
  {
    G4_VCALL<void>(v89, 12, (int)(uintptr_t)(v67) + 88, 4);
    G4_VCALL<void>(v89, 12, (int)(uintptr_t)(v67) + 92, 4);
    G4_VCALL<void>(v89, 12, (int)(uintptr_t)(v67) + 56, 4);
    v31 = *((uint32_t *)v67 + 14);
    v32 = *((uint32_t *)v67 + 19) % v31;
    v33 = v31 - 1;
    v34 = v32 - 1;
    if ( v32 == 0 )
      v34 = v31 - 1;
    *((uint32_t *)v67 + 16) = v34;
    v35 = *((uint32_t *)v67 + 21) % v31;
    if ( v35 != 0 )
      v33 = v35 - 1;
    v36 = *((uint32_t *)v67 + 18);
    *((uint32_t *)v67 + 17) = v33;
    v37 = opNewArray(4 * v36);
    v38 = *((uint32_t *)v67 + 18);
    *((uint32_t *)v67 + 15) = v37;
    if ( v38 <= 0 )
      goto LABEL_71;
    v39 = 0;
    while ( 1 )
    {
      *(uint32_t *)(v37 + 4 * v39) = opNewArray(4 * *((uint32_t *)v67 + 23) * *((uint32_t *)v67 + 22));
      v40 = *(void **)(*((uint32_t *)v67 + 15) + 4 * v39++);
      memset(v40, 0, 4 * *((uint32_t *)v67 + 23) * *((uint32_t *)v67 + 22));
      v41 = *((uint32_t *)v67 + 18);
      if ( v41 <= v39 )
        break;
      v37 = *((uint32_t *)v67 + 15);
    }
    v42 = v67;
    v65 = *((uint32_t *)v67 + 23) * *((uint32_t *)v67 + 22);
    if ( v41 <= 0 )
    {
LABEL_71:
      v47 = *((void ***)v67 + 13);
    }
    else
    {
      for ( i = 0; i < v41; ++i )
      {
        if ( v65 > 0 )
        {
          for ( j = 0; j != v65; ++j )
          {
            while ( 1 )
            {
              G4_VCALL<void>(v89, 12, (char *)&v88 + 3, 1);
              if ( HIBYTE(v88) == 0 )
              {
                v43 = (int *)(*(uint32_t *)(*((uint32_t *)v42 + 15) + 4 * i) + 4 * j);
                *v43 = opNewArray(2 * *((uint32_t *)v42 + 20) * *((uint32_t *)v42 + 14) * *((uint32_t *)v42 + 14));
                v44 = *((uint32_t *)v42 + 20) * *((uint32_t *)v42 + 14) * *((uint32_t *)v42 + 14);
                if ( v44 > 0 )
                  break;
              }
              if ( ++j == v65 )
                goto LABEL_61;
            }
            v45 = 0;
            v70 = 2 * v44;
            v46 = v42;
            do
            {
              v54 = v46;
              G4_VCALL<void>(v89, 12, v90, 2);
              v46 = v54;
              *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v54 + 15) + 4 * i) + 4 * j) + v45) = *(uint16_t *)v90;
              v45 += 2;
            }
            while ( v45 != v70 );
            v42 = v54;
          }
LABEL_61:
          v41 = *((uint32_t *)v42 + 18);
        }
      }
      v47 = *((void ***)v67 + 13);
      if ( v41 > 0 )
      {
        for ( k = 0; k < v41; ++k )
        {
          if ( v47[k] != nullptr )
          {
            opDeleteArray(v47[k]);
            v41 = *((uint32_t *)v67 + 18);
            v47 = *((void ***)v67 + 13);
          }
        }
      }
    }
    if ( v47 != nullptr )
      opDeleteArray(v47);
    *((uint32_t *)v67 + 13) = 0;
    v13 = *((uint32_t *)v67 + 18);
    goto LABEL_12;
  }
  if ( *((int *)v67 + 18) > 0 )
  {
    v9 = v72 * v7 * v8;
    v10 = 0;
    do
    {
      v11 = *(uint32_t *)v89;
      v101 = 2 * v9;
      v12 = *(uint32_t *)(*((uint32_t *)v67 + 13) + 4 * v10++);
      (*(void (**)(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *, int, int))(v11 + 12))(v89, v12, 2 * v9);
      v13 = *((uint32_t *)v67 + 18);
    }
    while ( v13 > v10 );
LABEL_12:
    if ( v13 > 0 )
    {
      v69 = 0;
      v64 = 0;
      do
      {
        G4_VCALL<void>(v89, 12, v90, 4);
        if ( *(int *)v90 > 0 )
        {
          v56 = 0;
          do
          {
            v100 = nullptr;
            v15 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)opNew(0x84u);
            glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(v15);
            v16 = v89;
            v73 = *(void (**)(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *, glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *, int))(*(uint32_t *)v89 + 12);
            NbSHCoefs = glitch::indexedIrradiance::CIndexedIrradiancePoint::getNbSHCoefs();
            SizeOfCoef = glitch::indexedIrradiance::CIndexedIrradiancePoint::getSizeOfCoef();
            v73(v16, v15, NbSHCoefs * SizeOfCoef);
            v18 = v89;
            v74 = *(void (**)(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *, char *, int))(*(uint32_t *)v89 + 12);
            v80 = glitch::indexedIrradiance::CIndexedIrradiancePoint::getNbSHCoefs();
            v19 = glitch::indexedIrradiance::CIndexedIrradiancePoint::getSizeOfCoef();
            v74(v18, (char *)v15 + 36, v80 * v19);
            v20 = v89;
            v75 = *(void (**)(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *, char *, int))(*(uint32_t *)v89 + 12);
            v81 = glitch::indexedIrradiance::CIndexedIrradiancePoint::getNbSHCoefs();
            v21 = glitch::indexedIrradiance::CIndexedIrradiancePoint::getSizeOfCoef();
            v75(v20, (char *)v15 + 72, v81 * v21);
            G4_VCALL<void>(v89, 12, (int)(uintptr_t)(v15) + 108, 12);
            G4_VCALL<void>(v89, 12, (int)(uintptr_t)(v15) + 120, 12);
            v22 = (int *)(*((uint32_t *)v67 + 12) + v69);
            v23 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v22[1];
            if ( v23 == (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v22[2] )
            {
              v24 = ((int)(uintptr_t)(v23) - *v22) >> 2;
              v76 = 4;
              v82 = v24;
              if ( v24 != 0 )
              {
                v30 = 2 * v24;
                if ( v82 > v30 || v30 > 0x3FFFFFFF )
                  v76 = -4;
                else
                  v76 = 8 * v82;
              }
              v53 = (char *)v22[1];
              v100 = nullptr;
              v59 = sub_4EBDC0(v76);
              v61 = v59 + 4;
              v25 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v59 + 4 * v82);
              if ( v25 != nullptr )
                *v25 = v15;
              v83 = *v22;
              if ( v53 != (char *)*v22 )
              {
                v26 = (char *)*v22;
                v27 = (uint32_t *)v59;
                do
                {
                  if ( v27 != nullptr )
                    *v27 = *(uint32_t *)v26;
                  v26 += 4;
                  ++v27;
                }
                while ( v53 != v26 );
                v61 = v59 + 4 * ((unsigned int)(uintptr_t)(&v53[-v83 - 4]) >> 2) + 8;
              }
              v84 = (char *)v22[1];
              if ( v53 != v84 )
              {
                v28 = v53;
                v29 = (uint32_t *)v61;
                do
                {
                  if ( v29 != nullptr )
                    *v29 = *(uint32_t *)v28;
                  v28 += 4;
                  ++v29;
                }
                while ( v84 != v28 );
                v61 += 4 * ((unsigned int)(v84 - (v53 + 4)) >> 2) + 4;
              }
              if ( *v22 != 0 )
                gll_operator_delete_arr(*v22);
              *v22 = v59;
              v22[1] = v61;
              v22[2] = v76 + v59;
            }
            else
            {
              v14 = 0;
              if ( v23 != nullptr )
              {
                *v23 = v15;
                v14 = v22[1];
              }
              v22[1] = v14 + 4;
            }
            ++v56;
          }
          while ( v56 < *(int *)v90 );
        }
        ++v64;
        v69 += 12;
      }
      while ( *((uint32_t *)v67 + 18) > v64 );
    }
  }
  v5 = 1;
  glf::Console::Print((glf::Console::Self *)"Data loaded !\n", v100);
LABEL_3:
  if ( v89 != nullptr )
    sub_5459C0((volatile int32_t *)v89);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::load_eada0f90  (binary VA: 0xda0f90)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::load
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradianceManager::load_eada0f90(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *self, const char *a2)
{
  return glitch::indexedIrradiance::CIndexedIrradianceManager::load(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::opMul  (binary VA: 0xda0fd0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::operator*
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::opMul(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, float a2, float a3)
{
  __m128 v3;
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  unsigned int i;
  char *v8;
  int v9;
  unsigned int v10;
  int v11;
  uint32_t *v12;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  unsigned int v19;

  glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(self);
  v14 = 0;
  v18 = 0;
  v3 = _mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(a3)), g4_m128_from<__m128>(LODWORD(a3)), 0);
  do
  {
    v4 = (uint32_t *)((char *)self + 36 * v18);
    v5 = (uint32_t *)(LODWORD(a2) + 36 * v18);
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4[7] = v5[7];
    v4[8] = v5[8];
    v6 = -((uint8_t)((v14 + (uint8_t)(uintptr_t)self) & 0xF) >> 2) & 3;
    if ( v6 != 0 )
    {
      for ( i = 0; i < v6; ++i )
        *(float *)&v4[i] = *(float *)&v4[i] * a3;
      v17 = 9 - i;
    }
    else
    {
      v17 = 9;
      i = 0;
    }
    v19 = 9 - v6;
    v16 = (9 - v6) >> 2;
    v15 = 4 * v16;
    if ( 4 * v16 == 0 )
      goto LABEL_10;
    v8 = (char *)self + 4 * v6 + v14;
    v9 = 0;
    v10 = 0;
    do
    {
      ++v10;
      *(__m128 *)&v8[v9] = _mm_mul_ps(*(__m128 *)&v8[v9], v3);
      v9 += 16;
    }
    while ( v10 < v16 );
    i += v15;
    v17 -= v15;
    if ( v19 != v15 )
    {
LABEL_10:
      v11 = 0;
      v12 = &v4[i];
      do
      {
        *(float *)&v12[v11] = *(float *)&v12[v11] * a3;
        ++v11;
      }
      while ( v11 != v17 );
    }
    ++v18;
    v14 += 36;
  }
  while ( v18 != 3 );
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::modulate  (binary VA: 0xda1160)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::modulate
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::modulate(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a3)
{
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v3;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v4;
  uint32_t *v5;
  uint32_t *v6;
  __m128 v7;
  int v8;
  __m128 v9;
  int v10;
  __m128 v11;
  int v12;
  uint32_t *v13;
  unsigned int v14;
  char *v15;
  int v17;
  int i;

  glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(self);
  v3 = a3;
  v4 = self;
  for ( i = 0; i != 3; ++i )
  {
    v5 = (uint32_t *)((char *)self + 36 * i);
    v6 = (uint32_t *)((char *)a2 + 36 * i);
    *v5 = *v6;
    v5[1] = v6[1];
    v5[2] = v6[2];
    v5[3] = v6[3];
    v5[4] = v6[4];
    v5[5] = v6[5];
    v5[6] = v6[6];
    v5[7] = v6[7];
    v5[8] = v6[8];
    if ( v3 > (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v4 + 16)
      || v4 > (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 16) )
    {
      v7 = _mm_mul_ps(_mm_loadh_ps((const double *)v3 + 1), _mm_loadh_ps((const double *)v4 + 1));
      v8 = 1;
      v9 = _mm_loadh_ps((const double *)v4 + 3);
      v10 = 8;
      _mm_storel_ps((double *)v4, v7);
      _mm_storeh_ps((double *)v4 + 1, v7);
      v11 = _mm_mul_ps(_mm_loadh_ps((const double *)v3 + 3), v9);
      _mm_storel_ps((double *)v4 + 2, v11);
      _mm_storeh_ps((double *)v4 + 3, v11);
    }
    else
    {
      v8 = 9;
      v10 = 0;
    }
    v12 = v10;
    v17 = 4 * v8;
    v13 = &v5[v12];
    v14 = 0;
    v15 = (char *)a3 + 36 * i + v12 * 4;
    do
    {
      *(float *)&v13[v14 / 4] = *(float *)&v13[v14 / 4] * *(float *)&v15[v14];
      v14 += 4;
    }
    while ( v14 != v17 );
    v3 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 36);
    v4 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v4 + 36);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::setCoefficientAllChannel  (binary VA: 0xda12c0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::setCoefficientAllChannel
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradiancePoint::setCoefficientAllChannel(int a1, int a2, uint32_t *a3)
{
  *(uint32_t *)(a1 + 4 * a2) = *a3;
  *(uint32_t *)(a1 + 4 * a2 + 36) = a3[1];
  *(uint32_t *)(a1 + 4 * a2 + 72) = a3[2];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::setChannelCoefficient  (binary VA: 0xda12f0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::setChannelCoefficient
// ----------------------------------------------------------------------------
char * glitch::indexedIrradiance::CIndexedIrradiancePoint::setChannelCoefficient(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, int a2, int a3, float a4)
{
  char *result;

  result = (char *)self + 4 * a3;
  *(float *)&result[36 * a2] = a4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::setPlainColor  (binary VA: 0xda1310)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::setPlainColor
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradiancePoint::setPlainColor(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a1, uint32_t *a2)
{
  glitch::indexedIrradiance::CIndexedIrradiancePoint::clear(a1);
  return glitch::indexedIrradiance::CIndexedIrradiancePoint::setCoefficientAllChannel((int)(uintptr_t)(a1), 0, a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::setVerticalHemispheres  (binary VA: 0xda1360)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::setVerticalHemispheres
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradiancePoint::setVerticalHemispheres(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a1, float *a2, float *a3)
{
  float v3; // xmm6_4
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  typedef float _g4_t_v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);

  glitch::indexedIrradiance::CIndexedIrradiancePoint::clear(a1);
  v3 = *a3;
  v4 = a3[1];
  v5 = a3[2];
  v6 = a2[2];
  v7 = *a2;
  v10 = (float)(a2[1] - v4) * 0.5;
  v11 = (float)(v6 - v5) * 0.5;
  v9 = (float)(v7 - v3) * 0.5;
  v12[1] = v10 + v4;
  v12[2] = v11 + v5;
  v12[0] = v9 + v3;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::setCoefficientAllChannel((int)(uintptr_t)(a1), 2, (uint32_t *)(v12));
  return glitch::indexedIrradiance::CIndexedIrradiancePoint::setCoefficientAllChannel((int)(uintptr_t)(a1), 0, (uint32_t *)(&v9));
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakDirection  (binary VA: 0xda1450)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakDirection
// ----------------------------------------------------------------------------
uint32_t * glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakDirection(uint32_t *a1, uint32_t *a2)
{
  a1[27] = *a2;
  a1[28] = a2[1];
  a1[29] = a2[2];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::substract  (binary VA: 0xda1470)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::substract
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::substract(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a3)
{
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v3;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v4;
  uint32_t *v5;
  uint32_t *v6;
  __m128 v7;
  int v8;
  int v9;
  __m128 v10;
  int v11;
  uint32_t *v12;
  unsigned int v13;
  char *v14;
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm0_4
  typedef int _g4_t_v25;
  typedef int _g4_t_i;
  typedef float _g4_t_v27[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_i)) > _g4_s1 ? (8u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);

  glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(self);
  v3 = a3;
  v4 = self;
  for ( i = 0; i != 3; ++i )
  {
    v5 = (uint32_t *)((char *)self + 36 * i);
    v6 = (uint32_t *)((char *)a2 + 36 * i);
    *v5 = *v6;
    v5[1] = v6[1];
    v5[2] = v6[2];
    v5[3] = v6[3];
    v5[4] = v6[4];
    v5[5] = v6[5];
    v5[6] = v6[6];
    v5[7] = v6[7];
    v5[8] = v6[8];
    if ( v3 > (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v4 + 16)
      || v4 > (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 16) )
    {
      v7 = _mm_sub_ps(_mm_loadh_ps((const double *)v4 + 1), _mm_loadh_ps((const double *)v3 + 1));
      v8 = 1;
      v9 = 8;
      _mm_storel_ps((double *)v4, v7);
      _mm_storeh_ps((double *)v4 + 1, v7);
      v10 = _mm_sub_ps(_mm_loadh_ps((const double *)v4 + 3), _mm_loadh_ps((const double *)v3 + 3));
      _mm_storel_ps((double *)v4 + 2, v10);
      _mm_storeh_ps((double *)v4 + 3, v10);
    }
    else
    {
      v8 = 9;
      v9 = 0;
    }
    v11 = v9;
    v25 = 4 * v8;
    v12 = &v5[v11];
    v13 = 0;
    v14 = (char *)a3 + 36 * i + v11 * 4;
    do
    {
      *(float *)&v12[v13 / 4] = *(float *)&v12[v13 / 4] - *(float *)&v14[v13];
      v13 += 4;
    }
    while ( v13 != v25 );
    v3 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 36);
    v4 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v4 + 36);
  }
  v15 = *((float *)a2 + 27) - *((float *)a3 + 27);
  *((float *)self + 30) = *((float *)a2 + 30) - *((float *)a3 + 30);
  v16 = *((float *)a2 + 31) - *((float *)a3 + 31);
  v17 = *((float *)a2 + 28) - *((float *)a3 + 28);
  v27[0] = v15;
  *((float *)self + 31) = v16;
  v18 = *((float *)a2 + 32);
  v19 = *((float *)a2 + 29);
  v27[1] = v17;
  v20 = v19 - *((float *)a3 + 29);
  *((float *)self + 32) = v18 - *((float *)a3 + 32);
  v27[2] = v20;
  v21 = (float)((float)(v17 * v17) + (float)(v15 * v15)) + (float)(v20 * v20);
  if ( v21 != 0.0 )
  {
    v22 = 1.0 / fsqrt(v21);
    v23 = (float)((float)((float)(v21 * v22) * v22) + -3.0) * (float)(v22 * -0.5);
    v27[0] = v15 * v23;
    v27[1] = v17 * v23;
    v27[2] = v23 * v20;
  }
  glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakDirection((uint32_t *)(self), (uint32_t *)(v27));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::add  (binary VA: 0xda16d0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::add
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::add(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a3)
{
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v3;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v4;
  uint32_t *v5;
  uint32_t *v6;
  __m128 v7;
  int v8;
  __m128 v9;
  int v10;
  __m128 v11;
  int v12;
  uint32_t *v13;
  unsigned int v14;
  char *v15;
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  typedef int _g4_t_v26;
  typedef int _g4_t_i;
  typedef float _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_i)) > _g4_s1 ? (8u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);

  glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(self);
  v3 = a3;
  v4 = self;
  for ( i = 0; i != 3; ++i )
  {
    v5 = (uint32_t *)((char *)self + 36 * i);
    v6 = (uint32_t *)((char *)a2 + 36 * i);
    *v5 = *v6;
    v5[1] = v6[1];
    v5[2] = v6[2];
    v5[3] = v6[3];
    v5[4] = v6[4];
    v5[5] = v6[5];
    v5[6] = v6[6];
    v5[7] = v6[7];
    v5[8] = v6[8];
    if ( v3 > (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v4 + 16)
      || v4 > (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 16) )
    {
      v7 = _mm_add_ps(_mm_loadh_ps((const double *)v3 + 1), _mm_loadh_ps((const double *)v4 + 1));
      v8 = 1;
      v9 = _mm_loadh_ps((const double *)v4 + 3);
      v10 = 8;
      _mm_storel_ps((double *)v4, v7);
      _mm_storeh_ps((double *)v4 + 1, v7);
      v11 = _mm_add_ps(_mm_loadh_ps((const double *)v3 + 3), v9);
      _mm_storel_ps((double *)v4 + 2, v11);
      _mm_storeh_ps((double *)v4 + 3, v11);
    }
    else
    {
      v8 = 9;
      v10 = 0;
    }
    v12 = v10;
    v26 = 4 * v8;
    v13 = &v5[v12];
    v14 = 0;
    v15 = (char *)a3 + 36 * i + v12 * 4;
    do
    {
      *(float *)&v13[v14 / 4] = *(float *)&v13[v14 / 4] + *(float *)&v15[v14];
      v14 += 4;
    }
    while ( v14 != v26 );
    v3 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 36);
    v4 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v4 + 36);
  }
  v16 = *((float *)a3 + 27) + *((float *)a2 + 27);
  *((float *)self + 30) = *((float *)a3 + 30) + *((float *)a2 + 30);
  v17 = *((float *)a3 + 31) + *((float *)a2 + 31);
  v18 = *((float *)a3 + 28) + *((float *)a2 + 28);
  v28[0] = v16;
  *((float *)self + 31) = v17;
  v19 = *((float *)a3 + 32);
  v20 = *((float *)a3 + 29);
  v28[1] = v18;
  v21 = v20 + *((float *)a2 + 29);
  *((float *)self + 32) = v19 + *((float *)a2 + 32);
  v28[2] = v21;
  v22 = (float)((float)(v18 * v18) + (float)(v16 * v16)) + (float)(v21 * v21);
  if ( v22 != 0.0 )
  {
    v23 = 1.0 / fsqrt(v22);
    v24 = (float)((float)((float)(v22 * v23) * v23) + -3.0) * (float)(v23 * -0.5);
    v28[0] = v16 * v24;
    v28[1] = v18 * v24;
    v28[2] = v24 * v21;
  }
  glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakDirection((uint32_t *)(self), (uint32_t *)(v28));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp  (binary VA: 0xda1930)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a3, unsigned int a4)
{
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v4;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  int v16;
  uint32_t *v17;
  unsigned int v18;
  char *v19;
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm4_4
  float v29; // xmm2_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v33)) > _g4_s0 ? (4u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v34)) > _g4_s1 ? (8u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v35)) > _g4_s2 ? (16u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v36)) > _g4_s3 ? (20u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v37)) > _g4_s4 ? (24u + sizeof(_g4_t_v37)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);

  glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(self);
  v4 = a3;
g4_m128_raw(v6) = 0x3F800000u;
  v5 = self;
g4_m128_lane<float>(v6, 0) = 1.0 - *(float *)&a4;
  v34 = 0;
  v7 = _mm_shuffle_ps(v6, v6, 0);
  v8 = _mm_shuffle_ps(G4_BITCAST<__m128>(a4), G4_BITCAST<__m128>(a4), 0);
  do
  {
    v9 = (uint32_t *)((char *)self + 36 * v34);
    v10 = (uint32_t *)((char *)a2 + 36 * v34);
    *v9 = *v10;
    v9[1] = v10[1];
    v9[2] = v10[2];
    v9[3] = v10[3];
    v9[4] = v10[4];
    v9[5] = v10[5];
    v9[6] = v10[6];
    v9[7] = v10[7];
    v9[8] = v10[8];
    if ( v4 > (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v5 + 16)
      || v5 > (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v4 + 16) )
    {
      v11 = 1;
      v12 = 8;
      v13 = _mm_add_ps(
              _mm_mul_ps(_mm_loadh_ps((const double *)v4 + 1), v8),
              _mm_mul_ps(_mm_loadh_ps((const double *)v5 + 1), v7));
      v14 = _mm_mul_ps(_mm_loadh_ps((const double *)v5 + 3), v7);
      _mm_storel_ps((double *)v5, v13);
      _mm_storeh_ps((double *)v5 + 1, v13);
      v15 = _mm_add_ps(_mm_mul_ps(_mm_loadh_ps((const double *)v4 + 3), v8), v14);
      _mm_storel_ps((double *)v5 + 2, v15);
      _mm_storeh_ps((double *)v5 + 3, v15);
    }
    else
    {
      v11 = 9;
      v12 = 0;
    }
    v16 = v12;
    v33 = 4 * v11;
    v17 = &v9[v16];
    v18 = 0;
    v19 = (char *)a3 + 36 * v34 + v16 * 4;
    do
    {
      *(float *)&v17[v18 / 4] = (float)(*(float *)&v19[v18] * *(float *)&a4)
                              + (float)(*(float *)&v17[v18 / 4] *g4_m128_lane<float>(v6, 0));
      v18 += 4;
    }
    while ( v18 != v33 );
    ++v34;
    v4 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v4 + 36);
    v5 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v5 + 36);
  }
  while ( v34 != 3 );
  v20 = *((float *)a2 + 30);
  v22 = *((float *)a3 + 30) - v20;
  v35 = (float)((float)(*((float *)a3 + 27) - *((float *)a2 + 27)) * *(float *)&a4) + *((float *)a2 + 27);
  v21 = v35;
  *((float *)self + 30) = (float)(v22 * *(float *)&a4) + v20;
  v23 = *((float *)a2 + 31);
  v25 = *((float *)a3 + 31) - v23;
  v36 = (float)((float)(*((float *)a3 + 28) - *((float *)a2 + 28)) * *(float *)&a4) + *((float *)a2 + 28);
  v24 = v36;
  *((float *)self + 31) = (float)(v25 * *(float *)&a4) + v23;
  v26 = *((float *)a2 + 32);
  v28 = *((float *)a3 + 32) - v26;
  v37 = (float)((float)(*((float *)a3 + 29) - *((float *)a2 + 29)) * *(float *)&a4) + *((float *)a2 + 29);
  v27 = v37;
  *((float *)self + 32) = (float)(v28 * *(float *)&a4) + v26;
  v29 = (float)((float)(v24 * v24) + (float)(v21 * v21)) + (float)(v27 * v27);
  if ( v29 != 0.0 )
  {
    v30 = 1.0 / fsqrt(v29);
    v31 = (float)((float)((float)(v29 * v30) * v30) + -3.0) * (float)(v30 * -0.5);
    v35 = v21 * v31;
    v36 = v24 * v31;
    v37 = v31 * v27;
  }
  glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakDirection((uint32_t *)(self), (uint32_t *)(&v35));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp_eada1c20  (binary VA: 0xda1c20)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp_eada1c20(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a3, unsigned int a4)
{
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v4;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  int v16;
  uint32_t *v17;
  unsigned int v18;
  char *v19;
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm4_4
  float v29; // xmm2_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v33)) > _g4_s0 ? (4u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v34)) > _g4_s1 ? (8u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v35)) > _g4_s2 ? (16u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v36)) > _g4_s3 ? (20u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v37)) > _g4_s4 ? (24u + sizeof(_g4_t_v37)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);

  glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(self);
  v4 = a3;
g4_m128_raw(v6) = 0x3F800000u;
  v5 = self;
g4_m128_lane<float>(v6, 0) = 1.0 - *(float *)&a4;
  v34 = 0;
  v7 = _mm_shuffle_ps(v6, v6, 0);
  v8 = _mm_shuffle_ps(G4_BITCAST<__m128>(a4), G4_BITCAST<__m128>(a4), 0);
  do
  {
    v9 = (uint32_t *)((char *)self + 36 * v34);
    v10 = (uint32_t *)((char *)a2 + 36 * v34);
    *v9 = *v10;
    v9[1] = v10[1];
    v9[2] = v10[2];
    v9[3] = v10[3];
    v9[4] = v10[4];
    v9[5] = v10[5];
    v9[6] = v10[6];
    v9[7] = v10[7];
    v9[8] = v10[8];
    if ( v4 > (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v5 + 16)
      || v5 > (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v4 + 16) )
    {
      v11 = 1;
      v12 = 8;
      v13 = _mm_add_ps(
              _mm_mul_ps(_mm_loadh_ps((const double *)v4 + 1), v8),
              _mm_mul_ps(_mm_loadh_ps((const double *)v5 + 1), v7));
      v14 = _mm_mul_ps(_mm_loadh_ps((const double *)v5 + 3), v7);
      _mm_storel_ps((double *)v5, v13);
      _mm_storeh_ps((double *)v5 + 1, v13);
      v15 = _mm_add_ps(_mm_mul_ps(_mm_loadh_ps((const double *)v4 + 3), v8), v14);
      _mm_storel_ps((double *)v5 + 2, v15);
      _mm_storeh_ps((double *)v5 + 3, v15);
    }
    else
    {
      v11 = 9;
      v12 = 0;
    }
    v16 = v12;
    v33 = 4 * v11;
    v17 = &v9[v16];
    v18 = 0;
    v19 = (char *)a3 + 36 * v34 + v16 * 4;
    do
    {
      *(float *)&v17[v18 / 4] = (float)(*(float *)&v19[v18] * *(float *)&a4)
                              + (float)(*(float *)&v17[v18 / 4] *g4_m128_lane<float>(v6, 0));
      v18 += 4;
    }
    while ( v18 != v33 );
    ++v34;
    v4 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v4 + 36);
    v5 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v5 + 36);
  }
  while ( v34 != 3 );
  v20 = *((float *)a2 + 30);
  v22 = *((float *)a3 + 30) - v20;
  v35 = (float)((float)(*((float *)a3 + 27) - *((float *)a2 + 27)) * *(float *)&a4) + *((float *)a2 + 27);
  v21 = v35;
  *((float *)self + 30) = (float)(v22 * *(float *)&a4) + v20;
  v23 = *((float *)a2 + 31);
  v25 = *((float *)a3 + 31) - v23;
  v36 = (float)((float)(*((float *)a3 + 28) - *((float *)a2 + 28)) * *(float *)&a4) + *((float *)a2 + 28);
  v24 = v36;
  *((float *)self + 31) = (float)(v25 * *(float *)&a4) + v23;
  v26 = *((float *)a2 + 32);
  v28 = *((float *)a3 + 32) - v26;
  v37 = (float)((float)(*((float *)a3 + 29) - *((float *)a2 + 29)) * *(float *)&a4) + *((float *)a2 + 29);
  v27 = v37;
  *((float *)self + 32) = (float)(v28 * *(float *)&a4) + v26;
  v29 = (float)((float)(v24 * v24) + (float)(v21 * v21)) + (float)(v27 * v27);
  if ( v29 != 0.0 )
  {
    v30 = 1.0 / fsqrt(v29);
    v31 = (float)((float)((float)(v29 * v30) * v30) + -3.0) * (float)(v30 * -0.5);
    v35 = v21 * v31;
    v36 = v24 * v31;
    v37 = v31 * v27;
  }
  glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakDirection((uint32_t *)(self), (uint32_t *)(&v35));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPointOptim  (binary VA: 0xda1f10)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPointOptim
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPointOptim(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a1, int a2, float *a3, int a4)
{
  int v4;
  float *v5;
  __m128 v6;
  float v7; // xmm1_4
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  float v12; // xmm2_4
  __m128 v13;
  float v14; // xmm5_4
  __m128 v15;
  float v16; // xmm3_4
  __m128 v17;
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm2_4
  int v25;
  float v26; // xmm6_4
  float v27; // xmm3_4
  int v28;
  int v29;
  float v30; // xmm2_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  int v34;
  char *v35;
  float v37; // xmm2_4
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm6_4
  float v42; // xmm7_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm4_4
  int v46;
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49; // xmm4_4
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v50;
  int v51;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v52;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v53;
  int v54;
  int v55;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v56;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v62;
  int v63;
  uint16_t v64;
  int v65;
  int v66;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v67;
  int v68;
  int v69;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v70;
  int v71;
  int v72;
  uint16_t v73;
  int v74;
  int v75;
  int v76;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v77;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v78;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v79;
  int v80;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v81;
  int v82;
  int v83;
  uint16_t v84;
  int v85;
  int v86;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v87;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v88;
  int v89;
  int v90;
  int v91;
  uint16_t v92;
  int v93;
  int v94;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v95;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v96;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v97;
  int v98;
  int v99;
  int v100;
  int v101;
  uint16_t v102;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v103;
  int v104;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v105;
  int v106;
  int v107;
  int v108;
  uint16_t v109;
  int v110;
  int v111;
  int v112;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v113;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v114;
  int v115;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v116;
  int v117;
  int v118;
  uint16_t v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  uint16_t v125;
  int v126;
  uint16_t v127;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v128;
  uint16_t v129;
  uint16_t v130;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v131;
  uint16_t ProbeIndexWithClamp;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v133;
  int v134;
  int v135;
  uint16_t v136;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v137;
  typedef int _g4_t_v138;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v139;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v140;
  typedef float _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef bool _g4_t_v146;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v147;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v148;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v149;
  typedef bool _g4_t_v150;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v151;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v152;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v153;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v154;
  typedef int _g4_t_v155;
  typedef unsigned int _g4_t_v156;
  typedef bool _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef uint16_t _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef unsigned int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef bool _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef unsigned int _g4_t_v174;
  typedef int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v177;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v178;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v179;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v180;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v181;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v182;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v183;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v184;
  typedef int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef int _g4_t_v190;
  typedef uint16_t _g4_t_v191;
  typedef int _g4_t_v192;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v193;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v194;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v195;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v196;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v197;
  typedef int _g4_t_v198;
  typedef int _g4_t_v199;
  typedef int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef int _g4_t_v204;
  typedef int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef float _g4_t_v209;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v210;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v211;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v212;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v213;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v214;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v215;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v216;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v217;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v218;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v219;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v220;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v221;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v222;
  typedef uint8_t _g4_t_v223[132];
  typedef uint8_t _g4_t_v224[132];
  typedef uint8_t _g4_t_v225[132];
  typedef uint8_t _g4_t_v226[132];
  typedef uint8_t _g4_t_v227[132];
  typedef uint8_t _g4_t_v228[132];
  typedef uint8_t _g4_t_v229[132];
  typedef uint8_t _g4_t_v230[132];
  typedef uint32_t _g4_t_v231[39];
  enum : size_t {
    _g4_s0 = 1392u,
    _g4_s1 = (0u + sizeof(_g4_t_v138)) > _g4_s0 ? (0u + sizeof(_g4_t_v138)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v139)) > _g4_s1 ? (8u + sizeof(_g4_t_v139)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v140)) > _g4_s2 ? (8u + sizeof(_g4_t_v140)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v141)) > _g4_s3 ? (16u + sizeof(_g4_t_v141)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v142)) > _g4_s4 ? (20u + sizeof(_g4_t_v142)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v143)) > _g4_s5 ? (20u + sizeof(_g4_t_v143)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v144)) > _g4_s6 ? (28u + sizeof(_g4_t_v144)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v145)) > _g4_s7 ? (28u + sizeof(_g4_t_v145)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v146)) > _g4_s8 ? (32u + sizeof(_g4_t_v146)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v147)) > _g4_s9 ? (32u + sizeof(_g4_t_v147)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v148)) > _g4_s10 ? (32u + sizeof(_g4_t_v148)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v149)) > _g4_s11 ? (36u + sizeof(_g4_t_v149)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v150)) > _g4_s12 ? (40u + sizeof(_g4_t_v150)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v151)) > _g4_s13 ? (40u + sizeof(_g4_t_v151)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v152)) > _g4_s14 ? (40u + sizeof(_g4_t_v152)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v153)) > _g4_s15 ? (40u + sizeof(_g4_t_v153)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v154)) > _g4_s16 ? (40u + sizeof(_g4_t_v154)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v155)) > _g4_s17 ? (44u + sizeof(_g4_t_v155)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v156)) > _g4_s18 ? (44u + sizeof(_g4_t_v156)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v157)) > _g4_s19 ? (48u + sizeof(_g4_t_v157)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v158)) > _g4_s20 ? (48u + sizeof(_g4_t_v158)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v159)) > _g4_s21 ? (48u + sizeof(_g4_t_v159)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v160)) > _g4_s22 ? (48u + sizeof(_g4_t_v160)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v161)) > _g4_s23 ? (48u + sizeof(_g4_t_v161)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v162)) > _g4_s24 ? (52u + sizeof(_g4_t_v162)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v163)) > _g4_s25 ? (52u + sizeof(_g4_t_v163)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v164)) > _g4_s26 ? (52u + sizeof(_g4_t_v164)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v165)) > _g4_s27 ? (52u + sizeof(_g4_t_v165)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v166)) > _g4_s28 ? (56u + sizeof(_g4_t_v166)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v167)) > _g4_s29 ? (56u + sizeof(_g4_t_v167)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v168)) > _g4_s30 ? (56u + sizeof(_g4_t_v168)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v169)) > _g4_s31 ? (56u + sizeof(_g4_t_v169)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v170)) > _g4_s32 ? (56u + sizeof(_g4_t_v170)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v171)) > _g4_s33 ? (60u + sizeof(_g4_t_v171)) : _g4_s33,
    _g4_s35 = (60u + sizeof(_g4_t_v172)) > _g4_s34 ? (60u + sizeof(_g4_t_v172)) : _g4_s34,
    _g4_s36 = (60u + sizeof(_g4_t_v173)) > _g4_s35 ? (60u + sizeof(_g4_t_v173)) : _g4_s35,
    _g4_s37 = (60u + sizeof(_g4_t_v174)) > _g4_s36 ? (60u + sizeof(_g4_t_v174)) : _g4_s36,
    _g4_s38 = (60u + sizeof(_g4_t_v175)) > _g4_s37 ? (60u + sizeof(_g4_t_v175)) : _g4_s37,
    _g4_s39 = (64u + sizeof(_g4_t_v176)) > _g4_s38 ? (64u + sizeof(_g4_t_v176)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v177)) > _g4_s39 ? (68u + sizeof(_g4_t_v177)) : _g4_s39,
    _g4_s41 = (68u + sizeof(_g4_t_v178)) > _g4_s40 ? (68u + sizeof(_g4_t_v178)) : _g4_s40,
    _g4_s42 = (68u + sizeof(_g4_t_v179)) > _g4_s41 ? (68u + sizeof(_g4_t_v179)) : _g4_s41,
    _g4_s43 = (68u + sizeof(_g4_t_v180)) > _g4_s42 ? (68u + sizeof(_g4_t_v180)) : _g4_s42,
    _g4_s44 = (68u + sizeof(_g4_t_v181)) > _g4_s43 ? (68u + sizeof(_g4_t_v181)) : _g4_s43,
    _g4_s45 = (68u + sizeof(_g4_t_v182)) > _g4_s44 ? (68u + sizeof(_g4_t_v182)) : _g4_s44,
    _g4_s46 = (68u + sizeof(_g4_t_v183)) > _g4_s45 ? (68u + sizeof(_g4_t_v183)) : _g4_s45,
    _g4_s47 = (68u + sizeof(_g4_t_v184)) > _g4_s46 ? (68u + sizeof(_g4_t_v184)) : _g4_s46,
    _g4_s48 = (72u + sizeof(_g4_t_v185)) > _g4_s47 ? (72u + sizeof(_g4_t_v185)) : _g4_s47,
    _g4_s49 = (72u + sizeof(_g4_t_v186)) > _g4_s48 ? (72u + sizeof(_g4_t_v186)) : _g4_s48,
    _g4_s50 = (72u + sizeof(_g4_t_v187)) > _g4_s49 ? (72u + sizeof(_g4_t_v187)) : _g4_s49,
    _g4_s51 = (72u + sizeof(_g4_t_v188)) > _g4_s50 ? (72u + sizeof(_g4_t_v188)) : _g4_s50,
    _g4_s52 = (72u + sizeof(_g4_t_v189)) > _g4_s51 ? (72u + sizeof(_g4_t_v189)) : _g4_s51,
    _g4_s53 = (72u + sizeof(_g4_t_v190)) > _g4_s52 ? (72u + sizeof(_g4_t_v190)) : _g4_s52,
    _g4_s54 = (72u + sizeof(_g4_t_v191)) > _g4_s53 ? (72u + sizeof(_g4_t_v191)) : _g4_s53,
    _g4_s55 = (76u + sizeof(_g4_t_v192)) > _g4_s54 ? (76u + sizeof(_g4_t_v192)) : _g4_s54,
    _g4_s56 = (76u + sizeof(_g4_t_v193)) > _g4_s55 ? (76u + sizeof(_g4_t_v193)) : _g4_s55,
    _g4_s57 = (76u + sizeof(_g4_t_v194)) > _g4_s56 ? (76u + sizeof(_g4_t_v194)) : _g4_s56,
    _g4_s58 = (76u + sizeof(_g4_t_v195)) > _g4_s57 ? (76u + sizeof(_g4_t_v195)) : _g4_s57,
    _g4_s59 = (76u + sizeof(_g4_t_v196)) > _g4_s58 ? (76u + sizeof(_g4_t_v196)) : _g4_s58,
    _g4_s60 = (76u + sizeof(_g4_t_v197)) > _g4_s59 ? (76u + sizeof(_g4_t_v197)) : _g4_s59,
    _g4_s61 = (80u + sizeof(_g4_t_v198)) > _g4_s60 ? (80u + sizeof(_g4_t_v198)) : _g4_s60,
    _g4_s62 = (80u + sizeof(_g4_t_v199)) > _g4_s61 ? (80u + sizeof(_g4_t_v199)) : _g4_s61,
    _g4_s63 = (80u + sizeof(_g4_t_v200)) > _g4_s62 ? (80u + sizeof(_g4_t_v200)) : _g4_s62,
    _g4_s64 = (80u + sizeof(_g4_t_v201)) > _g4_s63 ? (80u + sizeof(_g4_t_v201)) : _g4_s63,
    _g4_s65 = (80u + sizeof(_g4_t_v202)) > _g4_s64 ? (80u + sizeof(_g4_t_v202)) : _g4_s64,
    _g4_s66 = (80u + sizeof(_g4_t_v203)) > _g4_s65 ? (80u + sizeof(_g4_t_v203)) : _g4_s65,
    _g4_s67 = (84u + sizeof(_g4_t_v204)) > _g4_s66 ? (84u + sizeof(_g4_t_v204)) : _g4_s66,
    _g4_s68 = (84u + sizeof(_g4_t_v205)) > _g4_s67 ? (84u + sizeof(_g4_t_v205)) : _g4_s67,
    _g4_s69 = (84u + sizeof(_g4_t_v206)) > _g4_s68 ? (84u + sizeof(_g4_t_v206)) : _g4_s68,
    _g4_s70 = (84u + sizeof(_g4_t_v207)) > _g4_s69 ? (84u + sizeof(_g4_t_v207)) : _g4_s69,
    _g4_s71 = (84u + sizeof(_g4_t_v208)) > _g4_s70 ? (84u + sizeof(_g4_t_v208)) : _g4_s70,
    _g4_s72 = (88u + sizeof(_g4_t_v209)) > _g4_s71 ? (88u + sizeof(_g4_t_v209)) : _g4_s71,
    _g4_s73 = (88u + sizeof(_g4_t_v210)) > _g4_s72 ? (88u + sizeof(_g4_t_v210)) : _g4_s72,
    _g4_s74 = (88u + sizeof(_g4_t_v211)) > _g4_s73 ? (88u + sizeof(_g4_t_v211)) : _g4_s73,
    _g4_s75 = (88u + sizeof(_g4_t_v212)) > _g4_s74 ? (88u + sizeof(_g4_t_v212)) : _g4_s74,
    _g4_s76 = (88u + sizeof(_g4_t_v213)) > _g4_s75 ? (88u + sizeof(_g4_t_v213)) : _g4_s75,
    _g4_s77 = (92u + sizeof(_g4_t_v214)) > _g4_s76 ? (92u + sizeof(_g4_t_v214)) : _g4_s76,
    _g4_s78 = (92u + sizeof(_g4_t_v215)) > _g4_s77 ? (92u + sizeof(_g4_t_v215)) : _g4_s77,
    _g4_s79 = (92u + sizeof(_g4_t_v216)) > _g4_s78 ? (92u + sizeof(_g4_t_v216)) : _g4_s78,
    _g4_s80 = (92u + sizeof(_g4_t_v217)) > _g4_s79 ? (92u + sizeof(_g4_t_v217)) : _g4_s79,
    _g4_s81 = (92u + sizeof(_g4_t_v218)) > _g4_s80 ? (92u + sizeof(_g4_t_v218)) : _g4_s80,
    _g4_s82 = (92u + sizeof(_g4_t_v219)) > _g4_s81 ? (92u + sizeof(_g4_t_v219)) : _g4_s81,
    _g4_s83 = (92u + sizeof(_g4_t_v220)) > _g4_s82 ? (92u + sizeof(_g4_t_v220)) : _g4_s82,
    _g4_s84 = (92u + sizeof(_g4_t_v221)) > _g4_s83 ? (92u + sizeof(_g4_t_v221)) : _g4_s83,
    _g4_s85 = (92u + sizeof(_g4_t_v222)) > _g4_s84 ? (92u + sizeof(_g4_t_v222)) : _g4_s84,
    _g4_s86 = (108u + sizeof(_g4_t_v223)) > _g4_s85 ? (108u + sizeof(_g4_t_v223)) : _g4_s85,
    _g4_s87 = (240u + sizeof(_g4_t_v224)) > _g4_s86 ? (240u + sizeof(_g4_t_v224)) : _g4_s86,
    _g4_s88 = (372u + sizeof(_g4_t_v225)) > _g4_s87 ? (372u + sizeof(_g4_t_v225)) : _g4_s87,
    _g4_s89 = (504u + sizeof(_g4_t_v226)) > _g4_s88 ? (504u + sizeof(_g4_t_v226)) : _g4_s88,
    _g4_s90 = (636u + sizeof(_g4_t_v227)) > _g4_s89 ? (636u + sizeof(_g4_t_v227)) : _g4_s89,
    _g4_s91 = (768u + sizeof(_g4_t_v228)) > _g4_s90 ? (768u + sizeof(_g4_t_v228)) : _g4_s90,
    _g4_s92 = (900u + sizeof(_g4_t_v229)) > _g4_s91 ? (900u + sizeof(_g4_t_v229)) : _g4_s91,
    _g4_s93 = (1032u + sizeof(_g4_t_v230)) > _g4_s92 ? (1032u + sizeof(_g4_t_v230)) : _g4_s92,
    _g4_s94 = (1164u + sizeof(_g4_t_v231)) > _g4_s93 ? (1164u + sizeof(_g4_t_v231)) : _g4_s93
  };
  alignas(16) uint8_t _g4_sf[_g4_s94];
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 0u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 8u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 8u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 16u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 20u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 20u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 28u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 28u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 32u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 32u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 32u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 36u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 40u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 40u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 40u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 40u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 40u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 44u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 44u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 48u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 48u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 48u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 48u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 48u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 52u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 52u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 52u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 52u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 56u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 56u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 56u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 56u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 56u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 60u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 60u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 60u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 60u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 60u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 64u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 68u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 68u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 68u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 68u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 68u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 68u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 68u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 68u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 72u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 72u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 72u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 72u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 72u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 72u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 72u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 76u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 76u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 76u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 76u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 76u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 76u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 80u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 80u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 80u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 80u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 80u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 80u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 84u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 84u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 84u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 84u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 84u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 88u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 88u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 88u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 88u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 88u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 92u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 92u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 92u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 92u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 92u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 92u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 92u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 92u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 92u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 108u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 240u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 372u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 504u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 636u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 768u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 900u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 1032u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 1164u);

  v231[35] = (uint32_t)(uintptr_t)(&a1);
  v4 = a2;
  v5 = a3;
  v149 = a1;
  v176 = a4;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(a1);
  glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(
    v149,
    (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe);
g4_m128_raw(v6) = *(unsigned int *)v5;
  v7 = *(float *)(v4 + 24);
  if (g4_m128_lane<float>(v6, 0) < v7
    ||g4_m128_lane<float>(v6, 0) > *(float *)(v4 + 36)
    || (v37 = v5[1], v38 = *(float *)(v4 + 28), v37 < v38)
    || v37 > *(float *)(v4 + 40)
    || (v39 = v5[2], v40 = *(float *)(v4 + 32), v39 < v40)
    || v39 > *(float *)(v4 + 44) )
  {
    if ( (*(uint8_t *)(v4 + 20) & 4) == 0 )
      return v149;
g4_m128_raw(v8) = *((unsigned int *)v5 + 2);
g4_m128_raw(v9) = *(unsigned int *)(v4 + 32);
g4_m128_lane<float>(v9, 0) = fmaxf(g4_m128_lane<float>(v9, 0),g4_m128_lane<float>(v8, 0));
    v10 = _mm_cmpgt_ss(v8, g4_m128_u32(*(unsigned int *)(v4 + 44)));
g4_m128_lane<int32_t>(v11, 0) = *(uint32_t *)(v4 + 40);
    LODWORD(v12) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v10, v9), 0) | *(uint32_t *)(v4 + 44) &g4_m128_lane<int32_t>(v10, 0);
    v204 = *(int *)(v4 + 28);
g4_m128_raw(v13) = (unsigned int)v204;
    v14 = v5[1];
g4_m128_lane<float>(v13, 0) = fmaxf(*(float *)&v204, v14);
    v15 = _mm_cmpgt_ss(g4_m128_from<__m128>(LODWORD(v14)), v11);
    LODWORD(v16) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v15, v13), 0) |g4_m128_lane<int32_t>(v11, 0) &g4_m128_lane<int32_t>(v15, 0);
g4_m128_lane<int32_t>(v15, 0) = *(uint32_t *)(v4 + 36);
    v17 = _mm_cmpgt_ss(v6, v15);
    LODWORD(v18) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v17, g4_m128_from<__m128>(COERCE_UNSIGNED_INT(fmaxf(g4_m128_lane<float>(v6, 0), v7)))), 0)
                 |g4_m128_lane<int32_t>(v15, 0) &g4_m128_lane<int32_t>(v17, 0);
    v19 = (float)((float)((float)(v14 - v16) * (float)(v14 - v16))
                + (float)((float)(g4_m128_lane<float>(v8, 0) - v12) * (float)(g4_m128_lane<float>(v8, 0) - v12)))
        + (float)((float)(g4_m128_lane<float>(v6, 0) - v18) * (float)(g4_m128_lane<float>(v6, 0) - v18));
    v20 = *(float *)(v4 + 16);
    v209 = fsqrt(v19);
    if ( v20 <= v209 )
      return v149;
    v21 = (float)*(int *)(v4 + 56);
    v22 = *(float *)(v4 + 104);
    v162 = *(uint32_t *)(v4 + 56);
    v185 = *(uint32_t *)(v4 + 80);
    v23 = (float)(v18 - v7) / (float)(v21 * v22);
    v171 = true;
    v24 = (float)(v12 - *(float *)(v4 + 32)) / (float)(v21 * v22);
    v144 = (int)v23;
    v25 = (int)v24;
    v26 = (float)(v23 - (float)(int)v23) * v21;
    v27 = (float)((float)((float)(v16 - *(float *)&v204) / (float)(v22 * (float)v185))
                - (float)(int)(float)((float)(v16 - *(float *)&v204) / (float)(v22 * (float)v185)))
        * (float)v185;
    v205 = (int)v26;
    v28 = (int)v26;
    v29 = (int)v27;
    v30 = (float)(v24 - (float)(int)v24) * v21;
    v31 = v26 - (float)(int)v26;
    v32 = v27 - (float)(int)v27;
    v192 = (int)v30;
    v33 = v30 - (float)(int)v30;
    v34 = 1;
    if ( (v144 | v28) != 0 )
    {
      LOBYTE(v34) = 0;
      v171 = false;
      if ( *(uint32_t *)(v4 + 88) - 1 == v144 )
      {
        v171 = v205 == *(uint32_t *)(v4 + 64);
        v34 = v171;
      }
    }
    v150 = true;
    v157 = true;
    if ( v29 != 0 )
    {
      v157 = v29 == v185 - 1;
      v150 = v157;
    }
    v186 = 1;
    v146 = true;
    if ( (v25 | v192) != 0 )
    {
      v186 = 0;
      v146 = false;
      if ( *(uint32_t *)(v4 + 92) - 1 == v25 )
      {
        v146 = v192 == *(uint32_t *)(v4 + 68);
        v186 = v146;
      }
    }
    v35 = (char *)(v186 + v34 + v150);
    if ( v35 != (char *)((uint8_t *)&dword_0 + 2) )
    {
      if ( v35 == (char *)((uint8_t *)&dword_0 + 3) )
      {
        ProbeIndexWithClamp = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                                (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                                v176,
                                v144,
                                v25,
                                v205,
                                v29,
                                v192);
        v133 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( ProbeIndexWithClamp != 0xFFFF )
          v133 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                          + 12 * v176)
                                                                              + 4 * ProbeIndexWithClamp);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(v149, v133);
        v20 = *(float *)(v4 + 16);
      }
      else if ( v35 == (char *)((uint8_t *)&dword_0 + 1) )
      {
        if ( v171 )
        {
          v170 = v192 + 1;
          v126 = v25;
          if ( v162 - 1 == v192 )
          {
            v126 = v25 + 1;
            v170 = 0;
          }
          v164 = v29 + 1;
          v203 = v126;
          v184 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v170;
          v222 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v192;
          v152 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v205;
          v156 = LODWORD(v32);
          v143 = v25;
          v174 = LODWORD(v33);
          v190 = v144;
        }
        else if ( v157 )
        {
          if ( v162 - 1 == v205 )
          {
            v164 = v29;
            v190 = v144 + 1;
            if ( v192 == v205 )
            {
              v143 = v25 + 1;
              v170 = v192;
              v203 = v25 + 1;
              v184 = nullptr;
              v156 = LODWORD(v33);
              v126 = v25;
              v174 = LODWORD(v31);
              v222 = nullptr;
              v152 = nullptr;
            }
            else
            {
              v203 = v25;
              v222 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v192 + 1);
              v184 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v192 + 1);
              v143 = v25;
              v170 = v192;
              v152 = nullptr;
              v156 = LODWORD(v33);
              v126 = v25;
              v174 = LODWORD(v31);
            }
          }
          else if ( v192 == v162 - 1 )
          {
            v143 = v25 + 1;
            v164 = v29;
            v152 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v205 + 1);
            v170 = v192;
            v203 = v25 + 1;
            v190 = v144;
            v156 = LODWORD(v33);
            v126 = v25;
            v174 = LODWORD(v31);
            v184 = nullptr;
            v222 = nullptr;
          }
          else
          {
            v164 = v29;
            v152 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v205 + 1);
            v203 = v25;
            v222 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v192 + 1);
            v184 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v192 + 1);
            v143 = v25;
            v170 = v192;
            v190 = v144;
            v156 = LODWORD(v33);
            v126 = v25;
            v174 = LODWORD(v31);
          }
        }
        else
        {
          v152 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v205 + 1);
          v190 = v144;
          if ( v162 - 1 == v205 )
          {
            v152 = nullptr;
            v190 = v144 + 1;
          }
          v164 = v29 + 1;
          v203 = v25;
          v184 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v192;
          v222 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v192;
          v170 = v192;
          v143 = v25;
          v156 = LODWORD(v32);
          v126 = v25;
          v174 = LODWORD(v31);
        }
        v139 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v29;
        v160 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                 (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                 v176,
                 v190,
                 v126,
                 (int)(uintptr_t)(v152),
                 v29,
                 v170);
        v148 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v160 != 0xFFFF )
          v148 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                        + 4 * v160);
        v127 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                 (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                 v176,
                 v144,
                 v25,
                 v205,
                 (int)(uintptr_t)(v139),
                 v192);
        v128 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v127 != 0xFFFF )
          v128 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                          + 12 * v176)
                                                                              + 4 * v127);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v228,
          v128,
          v148,
          v174);
        v129 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                 (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                 v176,
                 v190,
                 v203,
                 (int)(uintptr_t)(v152),
                 v164,
                 (int)(uintptr_t)(v184));
        v197 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v129 != 0xFFFF )
          v197 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                        + 4 * v129);
        v130 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                 (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                 v176,
                 v144,
                 v143,
                 v205,
                 v164,
                 (int)(uintptr_t)(v222));
        v131 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v130 != 0xFFFF )
          v131 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                          + 12 * v176)
                                                                              + 4 * v130);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v229,
          v131,
          v197,
          v174);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v230,
          (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v228,
          (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v229,
          v156);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::opAssign(
          v149,
          (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v230);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
        glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
        glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
        v20 = *(float *)(v4 + 16);
      }
LABEL_16:
      glitch::indexedIrradiance::CIndexedIrradiancePoint::opMulAssign(
        v149,
        COERCE_UNSIGNED_INT((float)((float)-v209 / v20) + 1.0));
      return v149;
    }
    if ( v171 )
    {
      if ( v157 )
      {
        if ( v162 - 1 == v192 )
        {
          v161 = v25 + 1;
          v175 = v144;
          v153 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v29;
          v165 = LODWORD(v33);
          v135 = v205;
          v134 = 0;
        }
        else
        {
          v161 = v25;
          v153 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v29;
          v175 = v144;
          v134 = v192 + 1;
          v165 = LODWORD(v33);
          v135 = v205;
        }
        goto LABEL_207;
      }
      if ( v146 )
      {
        v175 = v144;
        v153 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v29 + 1);
        v161 = v25;
        v135 = v205;
        v165 = LODWORD(v32);
        v134 = v192;
LABEL_207:
        v140 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v29;
        v191 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                 (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                 v176,
                 v175,
                 v161,
                 v135,
                 (int)(uintptr_t)(v153),
                 v134);
        v154 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v191 != 0xFFFF )
          v154 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                        + 4 * v191);
        v136 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                 (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                 v176,
                 v144,
                 v25,
                 v205,
                 (int)(uintptr_t)(v140),
                 v192);
        v137 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v136 != 0xFFFF )
          v137 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                          + 12 * v176)
                                                                              + 4 * v136);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v231,
          v137,
          v154,
          v165);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::opAssign(
          v149,
          (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v231);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
        v20 = *(float *)(v4 + 16);
        goto LABEL_16;
      }
    }
    if ( v162 - 1 == v205 )
    {
      v161 = v25;
      v153 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v29;
      v175 = v144 + 1;
      v135 = 0;
      v165 = LODWORD(v31);
      v134 = v192;
    }
    else
    {
      v175 = v144;
      v134 = v192;
      v135 = v205 + 1;
      v161 = v25;
      v165 = LODWORD(v31);
      v153 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v29;
    }
    goto LABEL_207;
  }
  v41 = (float)*(int *)(v4 + 56);
  v42 = *(float *)(v4 + 104) * v41;
  v206 = *(uint32_t *)(v4 + 56);
  v214 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v4 + 80);
  v147 = nullptr;
  v43 = (float)(g4_m128_lane<float>(v6, 0) - v7) / v42;
  v44 = (float)(v37 - v38) / (float)(*(float *)(v4 + 104) * (float)(int)(uintptr_t)(v214));
  v45 = (float)(v39 - v40) / v42;
  v46 = (int)v43;
  v47 = (float)(v43 - (float)(int)v43) * v41;
  v187 = (int)v45;
  v48 = (float)(v44 - (float)(int)v44) * (float)(int)(uintptr_t)(v214);
  v158 = (int)v47;
  v49 = (float)(v45 - (float)(int)v45) * v41;
  v172 = (int)v48;
  v50 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v206 - 1);
  v151 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(int)v49;
  v145 = v46 + 1;
  v141 = v48 - (float)(int)v48;
  *(float *)&v142 = v49 - (float)(int)v49;
  if ( v206 - 1 != (int)v47 )
  {
    v145 = v46;
    v147 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v158 + 1);
    v50 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v206 - 1);
  }
  v163 = 0;
  v51 = v187 + 1;
  if ( v151 != v50 )
  {
    v51 = v187;
    v163 = (int)(uintptr_t)(v151) + 1;
  }
  v52 = nullptr;
  v53 = nullptr;
  if ( v46 >= 0 )
    v52 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v46;
  v54 = *(uint32_t *)(v4 + 88);
  v210 = v52;
  if ( v51 >= 0 )
    v53 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v51;
  v193 = v53;
  v55 = *(uint32_t *)(v4 + 92);
  v56 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v54 - 1);
  if ( (int)(uintptr_t)(v52) < v54 )
    v56 = v52;
  v177 = v56;
  v57 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v55 - 1);
  if ( (int)(uintptr_t)(v193) < v55 )
    v57 = v193;
  v155 = *(uint32_t *)(*(uint32_t *)(v4 + 60) + 4 * v176);
  v58 = *(uint32_t *)(v155 + 4 * ((uint32_t)(uintptr_t)(v177) + v54 * (uint32_t)(uintptr_t)(v57)));
  v166 = v58;
  v178 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
  if ( v58 != 0 )
  {
    v59 = 0;
    if ( v158 >= 0 )
      v59 = (int)v47;
    v179 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v59;
    v60 = 0;
    if ( v172 >= 0 )
      v60 = (int)v48;
    v138 = v60;
    v61 = 0;
    if ( v163 >= 0 )
      v61 = v163;
    v62 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v206 - 1);
    if ( v206 > (int)(uintptr_t)(v179) )
      v62 = v179;
    v180 = v62;
    v63 = v138;
    if ( (int)(uintptr_t)(v214) <= v138 )
      v63 = (int)(uintptr_t)(v214) - 1;
    if ( v206 <= v61 )
      v61 = v206 - 1;
    v64 = *(uint16_t *)(v166 + 2 * ((uint32_t)(uintptr_t)(v180) + v206 * v63 + (uint32_t)(uintptr_t)(v214) * v206 * v61));
    v178 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
    if ( v64 != 0xFFFF )
      v178 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                    + 4 * v64);
  }
  v65 = 0;
  v66 = v187;
  if ( v187 < 0 )
    v66 = 0;
  v188 = v66;
  v67 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v54 - 1);
  if ( (int)(uintptr_t)(v210) < v54 )
    v67 = v210;
  v167 = (int)(uintptr_t)(v67);
  v68 = v55 - 1;
  if ( v188 < v55 )
    v68 = v188;
  v69 = *(uint32_t *)(v155 + 4 * (v167 + v54 * v68));
  v70 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
  if ( v69 != 0 )
  {
    v71 = (int)v47;
    if ( v158 < 0 )
      v71 = 0;
    v72 = (int)v48;
    if ( v172 < 0 )
      v72 = 0;
    if ( (int)(uintptr_t)(v151) >= 0 )
      v65 = (int)v49;
    if ( v206 <= v71 )
      v71 = v206 - 1;
    if ( (int)(uintptr_t)(v214) <= v72 )
      v72 = (int)(uintptr_t)(v214) - 1;
    if ( v206 <= v65 )
      v65 = v206 - 1;
    v73 = *(uint16_t *)(v69 + 2 * (v71 + v206 * v72 + (uint32_t)(uintptr_t)(v214) * v206 * v65));
    v70 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
    if ( v73 != 0xFFFF )
      v70 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                         + 4 * v73);
  }
  glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
    (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v223,
    v70,
    v178,
    v142);
  v74 = *(uint32_t *)(v4 + 88);
  v75 = *(uint32_t *)(v4 + 92);
  v76 = 0;
  if ( v145 >= 0 )
    v76 = v145;
  v207 = v76;
  v77 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v74 - 1);
  if ( v207 < v74 )
    v77 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v207;
  v215 = v77;
  v78 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v75 - 1);
  if ( (int)(uintptr_t)(v193) < v75 )
    v78 = v193;
  v181 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(v4 + 60) + 4 * v176);
  v168 = *((uint32_t *)v181 + (uint32_t)(uintptr_t)(v215) + v74 * (uint32_t)(uintptr_t)(v78));
  v216 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
  if ( v168 != 0 )
  {
    v79 = nullptr;
    if ( (int)(uintptr_t)(v147) >= 0 )
      v79 = v147;
    v198 = (int)(uintptr_t)(v79);
    v80 = 0;
    if ( v172 >= 0 )
      v80 = (int)v48;
    v81 = nullptr;
    if ( v163 >= 0 )
      v81 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v163;
    v217 = v81;
    v82 = v198;
    if ( v198 >= *(uint32_t *)(v4 + 56) )
      v82 = *(uint32_t *)(v4 + 56) - 1;
    v199 = v82;
    if ( v80 >= *(uint32_t *)(v4 + 80) )
      v80 = *(uint32_t *)(v4 + 80) - 1;
    v83 = (int)(uintptr_t)(v217);
    if ( (int)(uintptr_t)(v217) >= *(uint32_t *)(v4 + 56) )
      v83 = *(uint32_t *)(v4 + 56) - 1;
    v84 = *(uint16_t *)(v168 + 2 * (v199 + *(uint32_t *)(v4 + 56) * v80 + *(uint32_t *)(v4 + 80) * *(uint32_t *)(v4 + 56) * v83));
    v216 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
    if ( v84 != 0xFFFF )
      v216 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                    + 4 * v84);
  }
  v85 = v74 - 1;
  v86 = v75 - 1;
  if ( v207 < v74 )
    v85 = v207;
  if ( v188 < v75 )
    v86 = v188;
  v87 = *((glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v181 + v74 * v86 + v85);
  v88 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
  v182 = v87;
  if ( v87 != nullptr )
  {
    v89 = 0;
    v90 = (int)(uintptr_t)(v147);
    v91 = (int)v48;
    if ( (int)(uintptr_t)(v147) < 0 )
      v90 = 0;
    if ( v172 < 0 )
      v91 = 0;
    if ( (int)(uintptr_t)(v151) >= 0 )
      v89 = (int)v49;
    if ( v90 >= *(uint32_t *)(v4 + 56) )
      v90 = *(uint32_t *)(v4 + 56) - 1;
    if ( v91 >= *(uint32_t *)(v4 + 80) )
      v91 = *(uint32_t *)(v4 + 80) - 1;
    if ( v89 >= *(uint32_t *)(v4 + 56) )
      v89 = *(uint32_t *)(v4 + 56) - 1;
    v92 = *((uint16_t *)v182 + v90 + *(uint32_t *)(v4 + 56) * v91 + *(uint32_t *)(v4 + 80) * v89 * *(uint32_t *)(v4 + 56));
    v88 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
    if ( v92 != 0xFFFF )
      v88 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                         + 4 * v92);
  }
  glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
    (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v224,
    v88,
    v216,
    v142);
  v93 = *(uint32_t *)(v4 + 88);
  v94 = *(uint32_t *)(v4 + 92);
  v173 = v172 + 1;
  v95 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v93 - 1);
  if ( (int)(uintptr_t)(v210) < v93 )
    v95 = v210;
  v218 = v95;
  v96 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v94 - 1);
  if ( (int)(uintptr_t)(v193) < v94 )
    v96 = v193;
  v183 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(v4 + 60) + 4 * v176);
  v169 = *((uint32_t *)v183 + (uint32_t)(uintptr_t)(v218) + v93 * (uint32_t)(uintptr_t)(v96));
  v219 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
  if ( v169 != 0 )
  {
    v97 = nullptr;
    v98 = (int)v47;
    if ( v158 < 0 )
      v98 = 0;
    v200 = v98;
    v99 = v173;
    if ( v173 < 0 )
      v99 = 0;
    if ( v163 >= 0 )
      v97 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v163;
    v220 = v97;
    v100 = v200;
    if ( v200 >= *(uint32_t *)(v4 + 56) )
      v100 = *(uint32_t *)(v4 + 56) - 1;
    v201 = v100;
    if ( v99 >= *(uint32_t *)(v4 + 80) )
      v99 = *(uint32_t *)(v4 + 80) - 1;
    v101 = (int)(uintptr_t)(v220);
    if ( (int)(uintptr_t)(v220) >= *(uint32_t *)(v4 + 56) )
      v101 = *(uint32_t *)(v4 + 56) - 1;
    v102 = *(uint16_t *)(v169 + 2
                           * (v201 + *(uint32_t *)(v4 + 56) * v99 + *(uint32_t *)(v4 + 80) * *(uint32_t *)(v4 + 56) * v101));
    v219 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
    if ( v102 != 0xFFFF )
      v219 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                    + 4 * v102);
  }
  v103 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v93 - 1);
  if ( (int)(uintptr_t)(v210) < v93 )
    v103 = v210;
  v211 = v103;
  v104 = v94 - 1;
  if ( v188 < v94 )
    v104 = v188;
  v202 = *((uint32_t *)v183 + (uint32_t)(uintptr_t)(v211) + v104 * v93);
  v105 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
  if ( v202 != 0 )
  {
    v106 = 0;
    v107 = (int)v47;
    v108 = v173;
    if ( v158 < 0 )
      v107 = 0;
    if ( v173 < 0 )
      v108 = 0;
    if ( (int)(uintptr_t)(v151) >= 0 )
      v106 = (int)v49;
    if ( v107 >= *(uint32_t *)(v4 + 56) )
      v107 = *(uint32_t *)(v4 + 56) - 1;
    if ( v108 >= *(uint32_t *)(v4 + 80) )
      v108 = *(uint32_t *)(v4 + 80) - 1;
    if ( v106 >= *(uint32_t *)(v4 + 56) )
      v106 = *(uint32_t *)(v4 + 56) - 1;
    v109 = *(uint16_t *)(v202
                    + 2 * (v107 + *(uint32_t *)(v4 + 56) * v108 + *(uint32_t *)(v4 + 80) * v106 * *(uint32_t *)(v4 + 56)));
    v105 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
    if ( v109 != 0xFFFF )
      v105 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                          + 4 * v109);
  }
  glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
    (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v225,
    v105,
    v219,
    v142);
  v110 = *(uint32_t *)(v4 + 88);
  v111 = *(uint32_t *)(v4 + 92);
  v112 = v110 - 1;
  v113 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v111 - 1);
  if ( v207 < v110 )
    v112 = v207;
  if ( (int)(uintptr_t)(v193) < v111 )
    v113 = v193;
  v159 = *(uint32_t *)(*(uint32_t *)(v4 + 60) + 4 * v176);
  v221 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v159 + 4 * (v110 * (uint32_t)(uintptr_t)(v113) + v112));
  v194 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
  if ( v221 != nullptr )
  {
    v114 = nullptr;
    if ( (int)(uintptr_t)(v147) >= 0 )
      v114 = v147;
    v195 = v114;
    v115 = 0;
    if ( v173 >= 0 )
      v115 = v173;
    v116 = nullptr;
    if ( v163 >= 0 )
      v116 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v163;
    v212 = v116;
    v117 = (int)(uintptr_t)(v195);
    if ( (int)(uintptr_t)(v195) >= *(uint32_t *)(v4 + 56) )
      v117 = *(uint32_t *)(v4 + 56) - 1;
    v196 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v117;
    if ( v115 >= *(uint32_t *)(v4 + 80) )
      v115 = *(uint32_t *)(v4 + 80) - 1;
    v118 = (int)(uintptr_t)(v212);
    if ( (int)(uintptr_t)(v212) >= *(uint32_t *)(v4 + 56) )
      v118 = *(uint32_t *)(v4 + 56) - 1;
    v119 = *((uint16_t *)v221
           + (uint32_t)(uintptr_t)(v196)
           + v115 * *(uint32_t *)(v4 + 56)
           + *(uint32_t *)(v4 + 80) * v118 * *(uint32_t *)(v4 + 56));
    v194 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
    if ( v119 != 0xFFFF )
      v194 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                    + 4 * v119);
  }
  v120 = v110 - 1;
  if ( v207 < v110 )
    v120 = v207;
  v208 = v120;
  v121 = v111 - 1;
  if ( v188 < v111 )
    v121 = v188;
  v213 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
  v189 = *(uint32_t *)(v159 + 4 * (v208 + v121 * v110));
  if ( v189 != 0 )
  {
    v122 = 0;
    v123 = (int)(uintptr_t)(v147);
    v124 = v173;
    if ( (int)(uintptr_t)(v147) < 0 )
      v123 = 0;
    if ( v173 < 0 )
      v124 = 0;
    if ( (int)(uintptr_t)(v151) >= 0 )
      v122 = (int)v49;
    if ( v123 >= *(uint32_t *)(v4 + 56) )
      v123 = *(uint32_t *)(v4 + 56) - 1;
    if ( v124 >= *(uint32_t *)(v4 + 80) )
      v124 = *(uint32_t *)(v4 + 80) - 1;
    if ( v122 >= *(uint32_t *)(v4 + 56) )
      v122 = *(uint32_t *)(v4 + 56) - 1;
    v125 = *(uint16_t *)(v189
                    + 2 * (*(uint32_t *)(v4 + 56) * v124 + v123 + *(uint32_t *)(v4 + 80) * v122 * *(uint32_t *)(v4 + 56)));
    if ( v125 != 0xFFFF )
      v213 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v176)
                                                                    + 4 * v125);
  }
  glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
    (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v226,
    v213,
    v194,
    v142);
  glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
    (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v228,
    (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v223,
    (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v225,
    LODWORD(v141));
  glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
    (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v229,
    (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v224,
    (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v226,
    LODWORD(v141));
  glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
    (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v227,
    (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v228,
    (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v229,
    COERCE_UNSIGNED_INT(v47 - (float)(int)v47));
  glitch::indexedIrradiance::CIndexedIrradiancePoint::opAssign(
    v149,
    (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v227);
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
  return v149;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint  (binary VA: 0xda3820)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a1, int a2, float *a3, int a4)
{
  int v4;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v5;
  __m128 v7;
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v18;
  int v19;
  float v20; // xmm4_4
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v21;
  char *v22;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v23;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v24;
  uint16_t v25;
  int v26;
  char *v27;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v28;
  int v29;
  uint16_t v30;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v31;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v32;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v33;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v34;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v35;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v36;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v37;
  int v38;
  uint16_t v39;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v40;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v41;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v42;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v43;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v44;
  int v45;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v46;
  int v47;
  uint16_t v48;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v49;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v50;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v51;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v52;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v53;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v54;
  int v55;
  uint16_t v56;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v57;
  __m128 v58;
  __m128 v59;
  __m128 v60;
  __m128 v61;
  __m128 v62;
  float v63; // xmm2_4
  __m128 v64;
  __m128 v65;
  float v66; // xmm3_4
  __m128 v67;
  float v68; // xmm6_4
  float v69; // xmm0_4
  float v70; // xmm5_4
  float v71; // xmm4_4
  float v72; // xmm6_4
  float v73; // xmm3_4
  float v74; // xmm2_4
  int v75;
  float v76; // xmm6_4
  float v77; // xmm3_4
  float v78; // xmm2_4
  int v79;
  char *v80;
  int v81;
  uint16_t v82;
  uint16_t v83;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v84;
  uint16_t v85;
  uint16_t v86;
  uint16_t ProbeIndexWithClamp;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v88;
  int v89;
  uint16_t v90;
  uint16_t v91;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef float *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v100;
  typedef uint16_t _g4_t_v101;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v102;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v103;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v104;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v105;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v106;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v107;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef bool _g4_t_v112;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v113;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v114;
  typedef bool _g4_t_v115;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v116;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v117;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v118;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v119;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v120;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v121;
  typedef uint16_t _g4_t_v122;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v123;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef uint16_t _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v133;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v134;
  typedef float _g4_t_v135;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v136;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v137;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v138;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v139;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v140;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v141;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v146;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v147;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v148;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v149;
  typedef bool _g4_t_v150;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v151;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v152;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v153;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef bool _g4_t_v157;
  typedef unsigned int _g4_t_v158;
  typedef unsigned int _g4_t_v159;
  typedef uint8_t _g4_t_v160[132];
  typedef uint8_t _g4_t_v161[132];
  typedef uint8_t _g4_t_v162[132];
  typedef uint8_t _g4_t_v163[132];
  typedef uint8_t _g4_t_v164[132];
  typedef uint8_t _g4_t_v165[132];
  typedef uint8_t _g4_t_v166[132];
  typedef uint8_t _g4_t_v167[132];
  typedef uint8_t _g4_t_v168[132];
  typedef uint8_t _g4_t_v169[140];
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **_g4_t_v170;
  enum : size_t {
    _g4_s0 = 1520u,
    _g4_s1 = (4u + sizeof(_g4_t_v93)) > _g4_s0 ? (4u + sizeof(_g4_t_v93)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v94)) > _g4_s1 ? (4u + sizeof(_g4_t_v94)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v95)) > _g4_s2 ? (8u + sizeof(_g4_t_v95)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v96)) > _g4_s3 ? (16u + sizeof(_g4_t_v96)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v97)) > _g4_s4 ? (44u + sizeof(_g4_t_v97)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v98)) > _g4_s5 ? (44u + sizeof(_g4_t_v98)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v99)) > _g4_s6 ? (48u + sizeof(_g4_t_v99)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v100)) > _g4_s7 ? (52u + sizeof(_g4_t_v100)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v101)) > _g4_s8 ? (52u + sizeof(_g4_t_v101)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v102)) > _g4_s9 ? (52u + sizeof(_g4_t_v102)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v103)) > _g4_s10 ? (52u + sizeof(_g4_t_v103)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v104)) > _g4_s11 ? (56u + sizeof(_g4_t_v104)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v105)) > _g4_s12 ? (56u + sizeof(_g4_t_v105)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v106)) > _g4_s13 ? (56u + sizeof(_g4_t_v106)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v107)) > _g4_s14 ? (56u + sizeof(_g4_t_v107)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v108)) > _g4_s15 ? (56u + sizeof(_g4_t_v108)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v109)) > _g4_s16 ? (60u + sizeof(_g4_t_v109)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v110)) > _g4_s17 ? (60u + sizeof(_g4_t_v110)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v111)) > _g4_s18 ? (60u + sizeof(_g4_t_v111)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v112)) > _g4_s19 ? (60u + sizeof(_g4_t_v112)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v113)) > _g4_s20 ? (64u + sizeof(_g4_t_v113)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v114)) > _g4_s21 ? (64u + sizeof(_g4_t_v114)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v115)) > _g4_s22 ? (64u + sizeof(_g4_t_v115)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v116)) > _g4_s23 ? (64u + sizeof(_g4_t_v116)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v117)) > _g4_s24 ? (64u + sizeof(_g4_t_v117)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v118)) > _g4_s25 ? (64u + sizeof(_g4_t_v118)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v119)) > _g4_s26 ? (68u + sizeof(_g4_t_v119)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v120)) > _g4_s27 ? (68u + sizeof(_g4_t_v120)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v121)) > _g4_s28 ? (68u + sizeof(_g4_t_v121)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v122)) > _g4_s29 ? (68u + sizeof(_g4_t_v122)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v123)) > _g4_s30 ? (68u + sizeof(_g4_t_v123)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v124)) > _g4_s31 ? (68u + sizeof(_g4_t_v124)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v125)) > _g4_s32 ? (72u + sizeof(_g4_t_v125)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_v126)) > _g4_s33 ? (72u + sizeof(_g4_t_v126)) : _g4_s33,
    _g4_s35 = (72u + sizeof(_g4_t_v127)) > _g4_s34 ? (72u + sizeof(_g4_t_v127)) : _g4_s34,
    _g4_s36 = (72u + sizeof(_g4_t_v128)) > _g4_s35 ? (72u + sizeof(_g4_t_v128)) : _g4_s35,
    _g4_s37 = (72u + sizeof(_g4_t_v129)) > _g4_s36 ? (72u + sizeof(_g4_t_v129)) : _g4_s36,
    _g4_s38 = (72u + sizeof(_g4_t_v130)) > _g4_s37 ? (72u + sizeof(_g4_t_v130)) : _g4_s37,
    _g4_s39 = (72u + sizeof(_g4_t_v131)) > _g4_s38 ? (72u + sizeof(_g4_t_v131)) : _g4_s38,
    _g4_s40 = (72u + sizeof(_g4_t_v132)) > _g4_s39 ? (72u + sizeof(_g4_t_v132)) : _g4_s39,
    _g4_s41 = (76u + sizeof(_g4_t_v133)) > _g4_s40 ? (76u + sizeof(_g4_t_v133)) : _g4_s40,
    _g4_s42 = (76u + sizeof(_g4_t_v134)) > _g4_s41 ? (76u + sizeof(_g4_t_v134)) : _g4_s41,
    _g4_s43 = (76u + sizeof(_g4_t_v135)) > _g4_s42 ? (76u + sizeof(_g4_t_v135)) : _g4_s42,
    _g4_s44 = (76u + sizeof(_g4_t_v136)) > _g4_s43 ? (76u + sizeof(_g4_t_v136)) : _g4_s43,
    _g4_s45 = (76u + sizeof(_g4_t_v137)) > _g4_s44 ? (76u + sizeof(_g4_t_v137)) : _g4_s44,
    _g4_s46 = (80u + sizeof(_g4_t_v138)) > _g4_s45 ? (80u + sizeof(_g4_t_v138)) : _g4_s45,
    _g4_s47 = (80u + sizeof(_g4_t_v139)) > _g4_s46 ? (80u + sizeof(_g4_t_v139)) : _g4_s46,
    _g4_s48 = (80u + sizeof(_g4_t_v140)) > _g4_s47 ? (80u + sizeof(_g4_t_v140)) : _g4_s47,
    _g4_s49 = (80u + sizeof(_g4_t_v141)) > _g4_s48 ? (80u + sizeof(_g4_t_v141)) : _g4_s48,
    _g4_s50 = (80u + sizeof(_g4_t_v142)) > _g4_s49 ? (80u + sizeof(_g4_t_v142)) : _g4_s49,
    _g4_s51 = (84u + sizeof(_g4_t_v143)) > _g4_s50 ? (84u + sizeof(_g4_t_v143)) : _g4_s50,
    _g4_s52 = (84u + sizeof(_g4_t_v144)) > _g4_s51 ? (84u + sizeof(_g4_t_v144)) : _g4_s51,
    _g4_s53 = (84u + sizeof(_g4_t_v145)) > _g4_s52 ? (84u + sizeof(_g4_t_v145)) : _g4_s52,
    _g4_s54 = (88u + sizeof(_g4_t_v146)) > _g4_s53 ? (88u + sizeof(_g4_t_v146)) : _g4_s53,
    _g4_s55 = (88u + sizeof(_g4_t_v147)) > _g4_s54 ? (88u + sizeof(_g4_t_v147)) : _g4_s54,
    _g4_s56 = (88u + sizeof(_g4_t_v148)) > _g4_s55 ? (88u + sizeof(_g4_t_v148)) : _g4_s55,
    _g4_s57 = (88u + sizeof(_g4_t_v149)) > _g4_s56 ? (88u + sizeof(_g4_t_v149)) : _g4_s56,
    _g4_s58 = (88u + sizeof(_g4_t_v150)) > _g4_s57 ? (88u + sizeof(_g4_t_v150)) : _g4_s57,
    _g4_s59 = (88u + sizeof(_g4_t_v151)) > _g4_s58 ? (88u + sizeof(_g4_t_v151)) : _g4_s58,
    _g4_s60 = (88u + sizeof(_g4_t_v152)) > _g4_s59 ? (88u + sizeof(_g4_t_v152)) : _g4_s59,
    _g4_s61 = (92u + sizeof(_g4_t_v153)) > _g4_s60 ? (92u + sizeof(_g4_t_v153)) : _g4_s60,
    _g4_s62 = (92u + sizeof(_g4_t_v154)) > _g4_s61 ? (92u + sizeof(_g4_t_v154)) : _g4_s61,
    _g4_s63 = (92u + sizeof(_g4_t_v155)) > _g4_s62 ? (92u + sizeof(_g4_t_v155)) : _g4_s62,
    _g4_s64 = (92u + sizeof(_g4_t_v156)) > _g4_s63 ? (92u + sizeof(_g4_t_v156)) : _g4_s63,
    _g4_s65 = (92u + sizeof(_g4_t_v157)) > _g4_s64 ? (92u + sizeof(_g4_t_v157)) : _g4_s64,
    _g4_s66 = (92u + sizeof(_g4_t_v158)) > _g4_s65 ? (92u + sizeof(_g4_t_v158)) : _g4_s65,
    _g4_s67 = (92u + sizeof(_g4_t_v159)) > _g4_s66 ? (92u + sizeof(_g4_t_v159)) : _g4_s66,
    _g4_s68 = (104u + sizeof(_g4_t_v160)) > _g4_s67 ? (104u + sizeof(_g4_t_v160)) : _g4_s67,
    _g4_s69 = (236u + sizeof(_g4_t_v161)) > _g4_s68 ? (236u + sizeof(_g4_t_v161)) : _g4_s68,
    _g4_s70 = (368u + sizeof(_g4_t_v162)) > _g4_s69 ? (368u + sizeof(_g4_t_v162)) : _g4_s69,
    _g4_s71 = (500u + sizeof(_g4_t_v163)) > _g4_s70 ? (500u + sizeof(_g4_t_v163)) : _g4_s70,
    _g4_s72 = (632u + sizeof(_g4_t_v164)) > _g4_s71 ? (632u + sizeof(_g4_t_v164)) : _g4_s71,
    _g4_s73 = (764u + sizeof(_g4_t_v165)) > _g4_s72 ? (764u + sizeof(_g4_t_v165)) : _g4_s72,
    _g4_s74 = (896u + sizeof(_g4_t_v166)) > _g4_s73 ? (896u + sizeof(_g4_t_v166)) : _g4_s73,
    _g4_s75 = (1028u + sizeof(_g4_t_v167)) > _g4_s74 ? (1028u + sizeof(_g4_t_v167)) : _g4_s74,
    _g4_s76 = (1160u + sizeof(_g4_t_v168)) > _g4_s75 ? (1160u + sizeof(_g4_t_v168)) : _g4_s75,
    _g4_s77 = (1292u + sizeof(_g4_t_v169)) > _g4_s76 ? (1292u + sizeof(_g4_t_v169)) : _g4_s76,
    _g4_s78 = (1432u + sizeof(_g4_t_v170)) > _g4_s77 ? (1432u + sizeof(_g4_t_v170)) : _g4_s77
  };
  alignas(16) uint8_t _g4_sf[_g4_s78];
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 4u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 4u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 8u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 16u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 44u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 44u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 48u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 52u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 52u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 52u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 52u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 56u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 56u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 56u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 56u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 56u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 60u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 60u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 60u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 60u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 64u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 64u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 64u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 64u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 64u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 64u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 68u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 68u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 68u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 68u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 68u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 68u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 72u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 72u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 72u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 72u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 72u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 72u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 72u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 72u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 76u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 76u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 76u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 76u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 76u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 80u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 80u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 80u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 80u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 80u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 84u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 84u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 84u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 88u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 88u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 88u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 88u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 88u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 88u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 88u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 92u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 92u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 92u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 92u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 92u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 92u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 92u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 104u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 236u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 368u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 500u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 632u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 764u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 896u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 1028u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 1160u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 1292u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 1432u);

  v170 = &a1;
  v4 = a2;
  v5 = a1;
  if ( *(uint32_t *)(a2 + 60) == 0 )
  {
    v96 = a3;
    v95 = a4;
    glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct((glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v160);
    glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(
      (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v160,
      (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe);
g4_m128_raw(v7) = *(unsigned int *)v96;
    v8 = *(float *)(v4 + 24);
    if (g4_m128_lane<float>(v7, 0) >= v8 &&g4_m128_lane<float>(v7, 0) <= *(float *)(v4 + 36) )
    {
      v9 = v96[1];
      v10 = *(float *)(v4 + 28);
      if ( v9 >= v10 && v9 <= *(float *)(v4 + 40) )
      {
        v11 = v96[2];
        v12 = *(float *)(v4 + 32);
        if ( v11 >= v12 && v11 <= *(float *)(v4 + 44) )
        {
          v13 = 1.0 / *(float *)(v4 + 104);
          v14 = (float)(g4_m128_lane<float>(v7, 0) - v8) * v13;
          v15 = (float)(v9 - v10) * v13;
          v16 = (float)(v11 - v12) * v13;
          v138 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(int)v14;
          v133 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(int)v15;
          v125 = (int)v16;
          v17 = v15 - (float)(int)v15;
          v18 = nullptr;
          v19 = (int)v14;
          v20 = v16 - (float)(int)v16;
          if ( (int)v14 < 0 )
            v19 = 0;
          v109 = v19;
          v21 = v133;
          if ( (int)(uintptr_t)(v133) < 0 )
            v21 = nullptr;
          v153 = v21;
          if ( v125 + 1 >= 0 )
            v18 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v125 + 1);
          v113 = v18;
          v146 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v4 + 76);
          v22 = (char *)v146 - 1;
          if ( v109 < (int)(uintptr_t)(v146) )
            v22 = (char *)v109;
          v143 = (int)(uintptr_t)(v22);
          v93 = *(uint32_t *)(v4 + 80);
          v23 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v93 - 1);
          if ( (int)(uintptr_t)(v153) < v93 )
            v23 = v153;
          v104 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v4 + 84);
          v24 = v113;
          if ( (int)(uintptr_t)(v113) >= (int)(uintptr_t)(v104) )
            v24 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v104 - 1);
          v97 = *(uint32_t *)(*(uint32_t *)(v4 + 52) + 4 * v95);
          v25 = *(uint16_t *)(v97 + 2 * ((uint32_t)(uintptr_t)(v146) * ((uint32_t)(uintptr_t)(v23) + (uint32_t)(uintptr_t)(v24) * v93) + v143));
          v100 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
          if ( v25 != 0xFFFF )
            v100 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v95)
                                                                          + 4 * v25);
          v26 = 0;
          if ( v125 >= 0 )
            v26 = v125;
          v144 = v26;
          v27 = (char *)v146 - 1;
          if ( v109 < (int)(uintptr_t)(v146) )
            v27 = (char *)v109;
          v126 = (int)(uintptr_t)(v27);
          v28 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v93 - 1);
          if ( (int)(uintptr_t)(v153) < v93 )
            v28 = v153;
          v119 = v28;
          v29 = (int)(uintptr_t)(v104) - 1;
          if ( v144 < (int)(uintptr_t)(v104) )
            v29 = v144;
          v30 = *(uint16_t *)(v97 + 2 * ((uint32_t)(uintptr_t)(v146) * ((uint32_t)(uintptr_t)(v119) + v29 * v93) + v126));
          v31 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
          if ( v30 != 0xFFFF )
            v31 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                           + 12 * v95)
                                                                               + 4 * v30);
          glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
            (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v161,
            v31,
            v100,
            LODWORD(v20));
          v32 = nullptr;
          if ( (int)(uintptr_t)(v138) + 1 >= 0 )
            v32 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v138 + 1);
          v139 = v32;
          v147 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v4 + 76);
          v33 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v147 - 1);
          if ( (int)(uintptr_t)(v32) < (int)(uintptr_t)(v147) )
            v33 = v32;
          v120 = v33;
          v94 = *(uint32_t *)(v4 + 80);
          v34 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v94 - 1);
          if ( (int)(uintptr_t)(v153) < v94 )
            v34 = v153;
          v127 = *(uint32_t *)(v4 + 84);
          v35 = v113;
          if ( (int)(uintptr_t)(v113) >= v127 )
            v35 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v127 - 1);
          v105 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(v4 + 52) + 4 * v95);
          v101 = *((uint16_t *)v105 + (uint32_t)(uintptr_t)(v120) + (uint32_t)(uintptr_t)(v147) * ((uint32_t)(uintptr_t)(v34) + (uint32_t)(uintptr_t)(v35) * v94));
          v121 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
          if ( v101 != 0xFFFF )
            v121 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v95)
                                                                          + 4 * v101);
          v36 = v139;
          if ( (int)(uintptr_t)(v139) >= (int)(uintptr_t)(v147) )
            v36 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v147 - 1);
          v102 = v36;
          v37 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v94 - 1);
          if ( (int)(uintptr_t)(v153) < v94 )
            v37 = v153;
          v154 = v37;
          v38 = v144;
          if ( v144 >= v127 )
            v38 = v127 - 1;
          v39 = *((uint16_t *)v105 + (uint32_t)(uintptr_t)(v102) + (uint32_t)(uintptr_t)(v147) * ((uint32_t)(uintptr_t)(v154) + v38 * v94));
          v40 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
          if ( v39 != 0xFFFF )
            v40 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                           + 12 * v95)
                                                                               + 4 * v39);
          glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
            (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v162,
            v40,
            v121,
            LODWORD(v20));
          v41 = nullptr;
          if ( (int)(uintptr_t)(v133) + 1 >= 0 )
            v41 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v133 + 1);
          v134 = v41;
          v155 = *(uint32_t *)(v4 + 76);
          v42 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v155 - 1);
          if ( v109 < v155 )
            v42 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v109;
          v106 = v42;
          v98 = *(uint32_t *)(v4 + 80);
          v43 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v98 - 1);
          if ( (int)(uintptr_t)(v41) < v98 )
            v43 = v41;
          v148 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v4 + 84);
          v44 = v113;
          if ( (int)(uintptr_t)(v113) >= (int)(uintptr_t)(v148) )
            v44 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v148 - 1);
          v128 = *(uint32_t *)(*(uint32_t *)(v4 + 52) + 4 * v95);
          v122 = *(uint16_t *)(v128 + 2 * ((uint32_t)(uintptr_t)(v106) + v155 * ((uint32_t)(uintptr_t)(v43) + (uint32_t)(uintptr_t)(v44) * v98)));
          v107 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
          if ( v122 != 0xFFFF )
            v107 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v95)
                                                                          + 4 * v122);
          v45 = v109;
          if ( v109 >= v155 )
            v45 = v155 - 1;
          v110 = v45;
          v46 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v98 - 1);
          if ( (int)(uintptr_t)(v134) < v98 )
            v46 = v134;
          v123 = v46;
          v47 = v144;
          if ( v144 >= (int)(uintptr_t)(v148) )
            v47 = (int)(uintptr_t)(v148) - 1;
          v48 = *(uint16_t *)(v128 + 2 * (v110 + v155 * ((uint32_t)(uintptr_t)(v123) + v98 * v47)));
          v49 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
          if ( v48 != 0xFFFF )
            v49 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                           + 12 * v95)
                                                                               + 4 * v48);
          glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
            (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v163,
            v49,
            v107,
            LODWORD(v20));
          v156 = *(uint32_t *)(v4 + 76);
          v50 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v156 - 1);
          if ( (int)(uintptr_t)(v139) < v156 )
            v50 = v139;
          v129 = (int)(uintptr_t)(v50);
          v103 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v4 + 80);
          v51 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v103 - 1);
          if ( (int)(uintptr_t)(v134) < (int)(uintptr_t)(v103) )
            v51 = v134;
          v111 = *(uint32_t *)(v4 + 84);
          v52 = v113;
          if ( (int)(uintptr_t)(v113) >= v111 )
            v52 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v111 - 1);
          v149 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(v4 + 52) + 4 * v95);
          v130 = *((uint16_t *)v149 + v129 + v156 * ((uint32_t)(uintptr_t)(v51) + (uint32_t)(uintptr_t)(v52) * (uint32_t)(uintptr_t)(v103)));
          v114 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
          if ( v130 != 0xFFFF )
            v114 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v95)
                                                                          + 4 * v130);
          v53 = v139;
          if ( (int)(uintptr_t)(v139) >= v156 )
            v53 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(v156 - 1);
          v140 = v53;
          v54 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v103 - 1);
          if ( (int)(uintptr_t)(v134) < (int)(uintptr_t)(v103) )
            v54 = v134;
          v55 = v144;
          if ( v144 >= v111 )
            v55 = v111 - 1;
          v56 = *((uint16_t *)v149 + (uint32_t)(uintptr_t)(v140) + v156 * ((uint32_t)(uintptr_t)(v54) + v55 * (uint32_t)(uintptr_t)(v103)));
          v57 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
          if ( v56 != 0xFFFF )
            v57 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                           + 12 * v95)
                                                                               + 4 * v56);
          glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
            (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v164,
            v57,
            v114,
            LODWORD(v20));
          glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
            (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v166,
            (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v161,
            (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v163,
            LODWORD(v17));
          glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
            (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v167,
            (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v162,
            (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v164,
            LODWORD(v17));
          glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
            (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v165,
            (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v166,
            (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v167,
            COERCE_UNSIGNED_INT(v14 - (float)(int)v14));
          glitch::indexedIrradiance::CIndexedIrradiancePoint::opAssign(
            (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v160,
            (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v165);
          glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
          glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
          glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
          glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
          glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
          glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
          glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
          goto LABEL_87;
        }
      }
    }
    if ( (*(uint8_t *)(v4 + 20) & 4) == 0 )
      goto LABEL_87;
g4_m128_raw(v58) = *((unsigned int *)v96 + 2);
g4_m128_raw(v59) = *(unsigned int *)(v4 + 32);
g4_m128_lane<float>(v59, 0) = fmaxf(g4_m128_lane<float>(v59, 0),g4_m128_lane<float>(v58, 0));
g4_m128_lane<int32_t>(v60, 0) = *(uint32_t *)(v4 + 44);
    v61 = _mm_cmpgt_ss(v58, v60);
g4_m128_lane<int32_t>(v62, 0) = *(uint32_t *)(v4 + 40);
    LODWORD(v63) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v61, v59), 0) |g4_m128_lane<int32_t>(v60, 0) &g4_m128_lane<int32_t>(v61, 0);
    v135 = *(float *)(v4 + 28);
g4_m128_raw(v64) = LODWORD(v135);
g4_m128_lane<float>(v60, 0) = v96[1];
g4_m128_lane<float>(v64, 0) = fmaxf(v135,g4_m128_lane<float>(v60, 0));
    v65 = _mm_cmpgt_ss(G4_BITCAST<__m128>(v60), v62);
    LODWORD(v66) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v65, v64), 0) |g4_m128_lane<int32_t>(v62, 0) &g4_m128_lane<int32_t>(v65, 0);
g4_m128_lane<int32_t>(v65, 0) = *(uint32_t *)(v4 + 36);
    v67 = _mm_cmpgt_ss(v7, v65);
    LODWORD(v68) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v67, g4_m128_from<__m128>(COERCE_UNSIGNED_INT(fmaxf(g4_m128_lane<float>(v7, 0), v8)))), 0)
                 |g4_m128_lane<int32_t>(v65, 0) &g4_m128_lane<int32_t>(v67, 0);
g4_m128_lane<float>(v60, 0) = (float)((float)((float)(g4_m128_lane<float>(v60, 0) - v66) * (float)(g4_m128_lane<float>(v60, 0) - v66))
                            + (float)((float)(g4_m128_lane<float>(v58, 0) - v63) * (float)(g4_m128_lane<float>(v58, 0) - v63)))
                    + (float)((float)(g4_m128_lane<float>(v7, 0) - v68) * (float)(g4_m128_lane<float>(v7, 0) - v68));
    v69 = *(float *)(v4 + 16);
    v70 = fsqrt(g4_m128_lane<float>(v60, 0));
    if ( v69 <= v70 )
    {
LABEL_87:
      glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(
        v5,
        (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v160);
      glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
      return v5;
    }
    v71 = 1.0 / *(float *)(v4 + 104);
    v157 = true;
    v72 = (float)(v68 - v8) * v71;
    v73 = (float)(v66 - v135) * v71;
    v74 = (float)(v63 - *(float *)(v4 + 32)) * v71;
    v141 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(int)v72;
    v75 = (int)v72;
    v124 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(int)v73;
    v76 = v72 - (float)(int)v72;
    v77 = v73 - (float)(int)v73;
    v136 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(int)v74;
    v78 = v74 - (float)(int)v74;
    v79 = 1;
    if ( v75 != 0 )
    {
      v157 = v141 == (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(*(uint32_t *)(v4 + 76) - 1);
      v79 = v157;
    }
    v131 = 1;
    v112 = true;
    if ( v124 != nullptr )
    {
      v112 = v124 == (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(*(uint32_t *)(v4 + 80) - 1);
      v131 = v112;
    }
    v115 = true;
    v150 = true;
    if ( v136 != nullptr )
    {
      v150 = v136 == (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)(*(uint32_t *)(v4 + 84) - 1);
      v115 = v150;
    }
    v80 = (char *)(v115 + v79 + v131);
    if ( v80 != (char *)((uint8_t *)&dword_0 + 2) )
    {
      if ( v80 == (char *)((uint8_t *)&dword_0 + 3) )
      {
        ProbeIndexWithClamp = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                                (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                                v95,
                                (int)(uintptr_t)(v141),
                                (int)(uintptr_t)(v124),
                                (int)(uintptr_t)(v136));
        v88 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( ProbeIndexWithClamp != 0xFFFF )
          v88 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                         + 12 * v95)
                                                                             + 4 * ProbeIndexWithClamp);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v160,
          v88);
        v69 = *(float *)(v4 + 16);
      }
      else if ( v80 == (char *)((uint8_t *)&dword_0 + 1) )
      {
        if ( v157 )
        {
          v81 = (int)(uintptr_t)(v136) + 1;
          v116 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v124 + 1);
          v132 = (int)(uintptr_t)(v136);
          v108 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)LODWORD(v77);
          v99 = (int)(uintptr_t)(v136) + 1;
          v158 = LODWORD(v78);
          v145 = (int)(uintptr_t)(v141);
        }
        else
        {
          v145 = (int)(uintptr_t)(v141) + 1;
          if ( v112 )
          {
            v132 = (int)(uintptr_t)(v136) + 1;
            v99 = (int)(uintptr_t)(v136) + 1;
            v116 = v124;
            v81 = (int)(uintptr_t)(v136);
            v108 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)LODWORD(v78);
            v158 = LODWORD(v76);
          }
          else
          {
            v116 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v124 + 1);
            v81 = (int)(uintptr_t)(v136);
            v108 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)LODWORD(v77);
            v99 = (int)(uintptr_t)(v136);
            v158 = LODWORD(v76);
            v132 = (int)(uintptr_t)(v136);
          }
        }
        v82 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                v95,
                v145,
                (int)(uintptr_t)(v124),
                v81);
        v151 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v82 != 0xFFFF )
          v151 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v95)
                                                                        + 4 * v82);
        v83 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                v95,
                (int)(uintptr_t)(v141),
                (int)(uintptr_t)(v124),
                (int)(uintptr_t)(v136));
        v84 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v83 != 0xFFFF )
          v84 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                         + 12 * v95)
                                                                             + 4 * v83);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v166,
          v84,
          v151,
          v158);
        v85 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                v95,
                v145,
                (int)(uintptr_t)(v116),
                v99);
        v137 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v85 != 0xFFFF )
          v137 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v95)
                                                                        + 4 * v85);
        v86 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                v95,
                (int)(uintptr_t)(v141),
                (int)(uintptr_t)(v116),
                v132);
        v142 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v86 != 0xFFFF )
          v142 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v95)
                                                                        + 4 * v86);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v167,
          v142,
          v137,
          v158);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v168,
          (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v166,
          (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v167,
          (unsigned int)(uintptr_t)(v108));
        glitch::indexedIrradiance::CIndexedIrradiancePoint::opAssign(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v160,
          (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v168);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
        glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
        glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
        v69 = *(float *)(v4 + 16);
      }
LABEL_99:
      glitch::indexedIrradiance::CIndexedIrradiancePoint::opMulAssign(
        (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v160,
        COERCE_UNSIGNED_INT((float)((float)-v70 / v69) + 1.0));
      goto LABEL_87;
    }
    if ( v157 )
    {
      if ( v112 )
      {
        v152 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v136 + 1);
        v117 = v124;
        v89 = (int)(uintptr_t)(v141);
        v159 = LODWORD(v78);
LABEL_117:
        v90 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                v95,
                v89,
                (int)(uintptr_t)(v117),
                (int)(uintptr_t)(v152));
        v118 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v90 != 0xFFFF )
          v118 = *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48) + 12 * v95)
                                                                        + 4 * v90);
        v91 = glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(
                (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)v4,
                v95,
                (int)(uintptr_t)(v141),
                (int)(uintptr_t)(v124),
                (int)(uintptr_t)(v136));
        v92 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe;
        if ( v91 != 0xFFFF )
          v92 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 48)
                                                                                         + 12 * v95)
                                                                             + 4 * v91);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v169,
          v92,
          v118,
          v159);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::opAssign(
          (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v160,
          (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v169);
        glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
        v69 = *(float *)(v4 + 16);
        goto LABEL_99;
      }
      if ( v150 )
      {
        v117 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v124 + 1);
        v152 = v136;
        v89 = (int)(uintptr_t)(v141);
        v159 = LODWORD(v77);
        goto LABEL_117;
      }
    }
    v152 = v136;
    v89 = (int)(uintptr_t)(v141) + 1;
    v117 = v124;
    v159 = LODWORD(v76);
    goto LABEL_117;
  }
  glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPointOptim(a1, a2, a3, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint  (binary VA: 0xda4b10)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a1, int a2, float *a3)
{
  typedef uint8_t _g4_t_v4[132];
  typedef uint8_t _g4_t_v5[144];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (140u + sizeof(_g4_t_v5)) > _g4_s1 ? (140u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 140u);

  if ( (*(uint8_t *)(a2 + 20) & 8) != 0 )
  {
    glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint(
      (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v4,
      a2,
      a3,
      *(uint32_t *)(a2 + 12));
    glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint(
      (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v5,
      a2,
      a3,
      *(uint32_t *)(a2 + 96));
    glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(
      a1,
      (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v4,
      (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v5,
      *(uint32_t *)(a2 + 100));
    glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
    glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
  }
  else
  {
    glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint(a1, a2, a3, *(uint32_t *)(a2 + 12));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakIntensity  (binary VA: 0xda4c30)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakIntensity
// ----------------------------------------------------------------------------
uint32_t * glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakIntensity(uint32_t *a1, uint32_t *a2)
{
  a1[30] = *a2;
  a1[31] = a2[1];
  a1[32] = a2[2];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakDirection  (binary VA: 0xda4c50)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakDirection
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakDirection(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, uint32_t *a2)
{
  int v3;
  int v4;

  v3 = a2[29];
  v4 = a2[27];
  *((uint32_t *)self + 1) = a2[28];
  *(uint32_t *)self = v4;
  *((uint32_t *)self + 2) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakIntensity  (binary VA: 0xda4c70)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakIntensity
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakIntensity(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, uint32_t *a2)
{
  int v3;
  int v4;

  v3 = a2[32];
  v4 = a2[30];
  *((uint32_t *)self + 1) = a2[31];
  *(uint32_t *)self = v4;
  *((uint32_t *)self + 2) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::getParameters  (binary VA: 0xda4ca0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::getParameters
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradiancePoint::getParameters(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8, float *a9, float *a10)
{
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v10;
  float *v11;
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm7_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  unsigned int v28; // xmm6_4
  unsigned int v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm3_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  int result;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float *_g4_t_v44;
  typedef float *_g4_t_v45;
  typedef float *_g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float *_g4_t_v51;
  typedef float *_g4_t_v52;
  typedef float *_g4_t_v53;
  typedef float *_g4_t_v54;
  typedef float _g4_t_v55;
  typedef float *_g4_t_v56;
  typedef float _g4_t_v57;
  typedef float *_g4_t_v58;
  typedef float *_g4_t_v59;
  typedef float *_g4_t_v60;
  typedef uint32_t _g4_t_v61[3];
  typedef uint32_t _g4_t_v62[3];
  typedef g4_int128_t _g4_t_v63;
  typedef g4_int128_t _g4_t_v64;
  typedef float _g4_t_v65[6];
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **_g4_t_v66;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v40)) > _g4_s1 ? (4u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v41)) > _g4_s2 ? (8u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v42)) > _g4_s3 ? (12u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v43)) > _g4_s4 ? (16u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v44)) > _g4_s5 ? (20u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v45)) > _g4_s6 ? (24u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v46)) > _g4_s7 ? (28u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v47)) > _g4_s8 ? (32u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v48)) > _g4_s9 ? (36u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v49)) > _g4_s10 ? (36u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v50)) > _g4_s11 ? (40u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v51)) > _g4_s12 ? (44u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v52)) > _g4_s13 ? (48u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v53)) > _g4_s14 ? (52u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v54)) > _g4_s15 ? (56u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v55)) > _g4_s16 ? (56u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v56)) > _g4_s17 ? (60u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v57)) > _g4_s18 ? (60u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v58)) > _g4_s19 ? (64u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v59)) > _g4_s20 ? (68u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v60)) > _g4_s21 ? (72u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v61)) > _g4_s22 ? (88u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v62)) > _g4_s23 ? (100u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v63)) > _g4_s24 ? (112u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v64)) > _g4_s25 ? (128u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v65)) > _g4_s26 ? (144u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (168u + sizeof(_g4_t_v66)) > _g4_s27 ? (168u + sizeof(_g4_t_v66)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 72u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 100u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 128u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 144u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 168u);

  v66 = &self;
  v56 = a3;
  v54 = a4;
  v10 = self;
  v53 = a5;
  v11 = a2;
  v52 = a6;
  v51 = a7;
  v46 = a8;
  v45 = a9;
  v59 = (float *)((char *)self + 36);
  v44 = a10;
  v58 = (float *)self;
  v60 = (float *)((char *)self + 72);
  v63 = 0;
  v64 = 0;
  *(g4_int128_t *)v65 = 0;
  if ( byte_20E06A0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20E06A0) != 0 )
  {
    dword_20E06A8 = 1071833029;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20E06A0);
  }
  v12 = 1.7320508f / (float)(3.0 * *(float *)&dword_20E06A8);
  v13 = 3.8729835f / (float)(8.0 * *(float *)&dword_20E06A8);
  v14 = 2.236068f / (float)(16.0 * *(float *)&dword_20E06A8);
  v47 = 0.5 * v13;
  v15 = -v12;
  v48 = v58[1] * (float)-v12;
  v43 = v58[2] * v12;
  v42 = v59[3] * (float)-v12;
  v16 = v59[2] * v12;
  v17 = v12 * v60[2];
  v40 = v16;
  v18 = (float)(*v58 * (float)(0.5 / *(float *)&dword_20E06A8)) - (float)(v58[6] * v14);
  v41 = v59[1] * v15;
  v19 = (float)(*v59 * (float)(0.5 / *(float *)&dword_20E06A8)) - (float)(v59[6] * v14);
  v39 = v60[3] * v15;
  v20 = v60[1] * v15;
  v21 = (float)((float)(0.5 / *(float *)&dword_20E06A8) * *v60) - (float)(v60[6] * v14);
  *v11 = v58[3] * v15;
  v11[1] = v48;
  v11[2] = v43;
  v11[3] = v18;
  *v56 = v42;
  v56[1] = v41;
  v56[2] = v40;
  v56[3] = v19;
  v54[2] = v17;
  *v54 = v39;
  v54[1] = v20;
  v54[3] = v21;
  v22 = -v13;
  v23 = v14 * 3.0;
  v24 = v58[4];
  v25 = v58[5];
  v26 = v58[6];
  v27 = v58[7];
  *(float *)&v64 = v59[4] * v13;
  v57 = *(float *)&v64;
  *(float *)&v28 = v25 * (float)-v13;
  *(float *)&v29 = v26 * v23;
  v30 = v27 * (float)-v13;
  v31 = v59[5] * (float)-v13;
  *(uint64_t *)((char *)&v63 + 4) = __PAIR64__(v29, v28);
  *(float *)&v63 = v24 * v13;
  *((float *)&v63 + 3) = v30;
  v55 = v31;
  *((float *)&v64 + 1) = v31;
  v32 = v59[6] * v23;
  v33 = v13 * v60[4];
  v34 = v23 * v60[6];
  v50 = v32;
  *((float *)&v64 + 2) = v32;
  v35 = v59[7];
  v65[2] = v34;
  v65[0] = v33;
  v49 = v35 * v22;
  *((float *)&v64 + 3) = v35 * v22;
  v36 = v60[5] * v22;
  v37 = v22 * v60[7];
  *(uint32_t *)v53 = (uint32_t)(uintptr_t)(v63);
  v53[3] = v30;
  *((uint32_t *)v53 + 1) = v28;
  *((uint32_t *)v53 + 2) = v29;
  *v52 = v57;
  v52[1] = v55;
  v52[2] = v50;
  v52[3] = v49;
  v65[1] = v36;
  v65[3] = v37;
  *v51 = v33;
  v51[1] = v36;
  v51[2] = v34;
  v51[3] = v37;
  *v46 = v47 * *((float *)v10 + 8);
  v46[1] = v47 * *((float *)v10 + 17);
  v46[2] = v47 * *((float *)v10 + 26);
  glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakDirection(
    (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v61,
    (uint32_t *)(v10));
  *v45 = *(float *)v61;
  v45[1] = *(float *)&v61[1];
  v45[2] = *(float *)&v61[2];
  glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakIntensity(
    (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v62,
    (uint32_t *)(v10));
  *v44 = *(float *)v62;
  v44[1] = *(float *)&v62[1];
  result = v62[2];
  v44[2] = *(float *)&v62[2];
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::getParameters  (binary VA: 0xda5100)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::getParameters
// ----------------------------------------------------------------------------
void glitch::indexedIrradiance::CIndexedIrradianceManager::getParameters(int a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8, float *a9, float *a10, float *a11)
{
  uint8_t v11[144];

  if ( *(int *)(a1 + 72) > 0 )
  {
    glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint(
      (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v11,
      a1,
      a2);
    glitch::indexedIrradiance::CIndexedIrradiancePoint::getParameters(
      (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)v11,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11);
    glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::evalDiffuse  (binary VA: 0xda51d0)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::evalDiffuse
// ----------------------------------------------------------------------------
float * glitch::indexedIrradiance::CIndexedIrradiancePoint::evalDiffuse(float *a1, glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2, float *a3)
{
  float v3; // xmm4_4
  float v5; // xmm2_4
  float v6; // xmm6_4
  float v7; // xmm5_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  typedef float _g4_t_v13[4];
  typedef float _g4_t_v14[4];
  typedef float _g4_t_v15[4];
  typedef float _g4_t_v16[4];
  typedef float _g4_t_v17[4];
  typedef float _g4_t_v18[4];
  typedef float _g4_t_v19[3];
  typedef float _g4_t_v20[3];
  typedef float _g4_t_v21[6];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v14)) > _g4_s4 ? (48u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v15)) > _g4_s5 ? (64u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v16)) > _g4_s6 ? (80u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v17)) > _g4_s7 ? (96u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v18)) > _g4_s8 ? (112u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v19)) > _g4_s9 ? (128u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (140u + sizeof(_g4_t_v20)) > _g4_s10 ? (140u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (152u + sizeof(_g4_t_v21)) > _g4_s11 ? (152u + sizeof(_g4_t_v21)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 96u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 112u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 128u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 140u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 152u);

  glitch::indexedIrradiance::CIndexedIrradiancePoint::getParameters(a2, v13, v14, v15, v16, v17, v18, v19, v20, v21);
  v3 = *a3;
  v5 = -a3[2];
  v6 = a3[1];
  v12 = *a3 * v6;
  v7 = (float)(v3 * v3) - (float)(v5 * v5);
  v11 = v19[1] * v7;
  v10 = v19[2] * v7;
  v8 = (float)((float)((float)((float)((float)((float)((float)(v14[0] * v3) + (float)(v14[2] * v6)) + v14[3])
                                     + (float)(v14[1] * v5))
                             + (float)(v17[2] * (float)(v6 * v6)))
                     + (float)(v12 * v17[3]))
             + (float)((float)(v5 * v3) * v17[0]))
     + (float)((float)(v5 * v6) * v17[1]);
  v9 = (float)((float)((float)((float)((float)((float)((float)(v15[0] * *a3) + (float)(v15[2] * v6)) + v15[3])
                                     + (float)(v15[1] * v5))
                             + (float)(v18[2] * (float)(v6 * v6)))
                     + (float)(v12 * v18[3]))
             + (float)((float)(v5 * *a3) * v18[0]))
     + (float)((float)(v5 * v6) * v18[1]);
  *a1 = (float)((float)((float)((float)((float)((float)((float)((float)(*a3 * v13[0]) + (float)(v6 * v13[2])) + v13[3])
                                              + (float)(v5 * v13[1]))
                                      + (float)((float)(v6 * v6) * v16[2]))
                              + (float)(v12 * v16[3]))
                      + (float)((float)(v5 * *a3) * v16[0]))
              + (float)((float)(v5 * v6) * v16[1]))
      + (float)(v7 * v19[0]);
  a1[1] = v8 + v11;
  a1[2] = v9 + v10;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::sample  (binary VA: 0xda5470)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::sample
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradiancePoint::sample(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a1, int a2, unsigned int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  float *v8;
  int v9;
  typedef int _g4_t_v11;
  typedef glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef float _g4_t_v17[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v14)) > _g4_s3 ? (8u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v15)) > _g4_s4 ? (12u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v16)) > _g4_s5 ? (12u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v17)) > _g4_s6 ? (20u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);

  LODWORD(v17[5]) = (uint32_t)(uintptr_t)(&a1);
  v3 = a3;
  v12 = a1;
  v13 = a2;
  v11 = opNewArray(12 * a3);
  v15 = v3 - 1;
  if ( v3 != 0 )
  {
    v4 = v11;
    v5 = 4 * (v3 >> 2);
    if ( v3 <= 3 )
      goto LABEL_7;
    if ( v5 == 0 )
      goto LABEL_7;
    v6 = 0;
    do
    {
      ++v6;
      _mm_storel_ps((double *)v4, g4_m128_from<__m128>(0LL));
      _mm_storel_ps((double *)(v4 + 8), g4_m128_from<__m128>(0LL));
      _mm_storel_ps((double *)(v4 + 16), g4_m128_from<__m128>(0LL));
      _mm_storel_ps((double *)(v4 + 24), g4_m128_from<__m128>(0LL));
      _mm_storel_ps((double *)(v4 + 32), g4_m128_from<__m128>(0LL));
      _mm_storel_ps((double *)(v4 + 40), g4_m128_from<__m128>(0LL));
      v4 += 48;
    }
    while ( v3 >> 2 > v6 );
    v15 -= v5;
    v4 = v11 + 48 * (v3 >> 2);
    if ( v3 != v5 )
    {
LABEL_7:
      v7 = v15;
      do
      {
        --v7;
        *(uint32_t *)v4 = 0;
        *(uint32_t *)(v4 + 4) = 0;
        *(uint32_t *)(v4 + 8) = 0;
        v4 += 12;
      }
      while ( v7 != -1 );
    }
  }
  if ( (int)v3 > 0 )
  {
    v8 = (float *)v11;
    v16 = v3;
    v14 = v13 - v11;
    v9 = 0;
    do
    {
      ++v9;
      glitch::indexedIrradiance::CIndexedIrradiancePoint::evalDiffuse(v17, v12, (float *)((char *)v8 + v14));
      *v8 = v17[0];
      v8[1] = v17[1];
      v8[2] = v17[2];
      v8 += 3;
    }
    while ( v9 != v16 );
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::compressIrradiance  (binary VA: 0xda55a0)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::compressIrradiance
// ----------------------------------------------------------------------------
void glitch::indexedIrradiance::CIndexedIrradianceManager::compressIrradiance(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *self, float a2, char *a3)
{
  g4_int128_t *v4;
  int v5;
  int v6;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v7;
  int v8;
  long double v9; // fst7
  float v10; // xmm0_4
  int v11;
  float *v12;
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v16;
  int v17;
  int i;
  void **v19;
  void **v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint16_t v32;
  __m128 v33;
  __m128 v34;
  __m128 v35;
  float *v36;
  float *v37;
  int j;
  __m128 v39;
  __m128 v40;
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm1_4
  int v45;
  uint32_t *v46;
  void **v47;
  uint32_t *v48;
  uint32_t *k;
  uint32_t *v50;
  uint32_t *v51;
  bool v52;
  int *v53;
  char *v54;
  uint32_t *v55;
  void **m;
  int v57;
  char *v58;
  int *v59;
  int v60;
  __m128 v61;
  __m128 v62;
  __m128 v63;
  float *v64;
  float *v65;
  int n;
  __m128 v67;
  __m128 v68;
  float v69; // xmm2_4
  float v70; // xmm1_4
  void ***v71;
  int v72;
  uint16_t v73;
  char *v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  uint32_t *v80;
  int *v81;
  uint32_t *v82;
  int v83;
  uint32_t *v84;
  uint32_t *v85;
  int ii;
  void **v87;
  void **v88;
  int v89;
  uint32_t *v90;
  int v91;
  char *v92;
  uint32_t *v93;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v94;
  uint32_t *v95;
  uint32_t *v96;
  uint32_t *v97;
  uint32_t *v98;
  uint32_t *v99;
  uint32_t *v100;
  uint32_t *v101;
  void *v102;
  uint32_t *v103;
  void *v104;
  uint32_t *v105;
  typedef const char *_g4_t_v106;
  typedef double _g4_t_v107;
  typedef int _g4_t_v108;
  typedef uint32_t *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef uint32_t *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef uint32_t *_g4_t_v115;
  typedef uint32_t *_g4_t_v116;
  typedef uint32_t *_g4_t_v117;
  typedef double _g4_t_v118;
  typedef int _g4_t_v119;
  typedef uint32_t *_g4_t_v120;
  typedef uint32_t *_g4_t_v121;
  typedef uint32_t *_g4_t_v122;
  typedef unsigned int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef char *_g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef float _g4_t_v132;
  typedef char *_g4_t_v133;
  typedef const char *_g4_t_v134;
  typedef int _g4_t_v135;
  typedef size_t _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef signed int _g4_t_v143;
  typedef uint32_t *_g4_t_v144;
  typedef char *_g4_t_v145;
  typedef int _g4_t_v146;
  typedef unsigned int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef uint16_t _g4_t_v150;
  typedef size_t _g4_t_v151;
  typedef int _g4_t_v152;
  typedef int _g4_t_v153;
  typedef uint16_t _g4_t_v154;
  typedef int _g4_t_v155;
  typedef glitch::indexedIrradiance::CIndexedIrradianceManager::Self *_g4_t_v156;
  typedef glitch::indexedIrradiance::CIndexedIrradianceManager::Self *_g4_t_v157;
  typedef char *_g4_t_v158;
  typedef char *_g4_t_v159;
  typedef int _g4_t_v160;
  typedef double _g4_t_v161;
  typedef int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef uint32_t *_g4_t_v165;
  typedef glitch::indexedIrradiance::CIndexedIrradianceManager::Self *_g4_t_v166;
  typedef double _g4_t_v167;
  typedef int _g4_t_v168;
  typedef glitch::indexedIrradiance::CIndexedIrradianceManager::Self *_g4_t_v169;
  typedef char *_g4_t_v170;
  typedef char *_g4_t_v171;
  typedef int _g4_t_v172;
  typedef uint32_t *_g4_t_v173;
  typedef uint32_t *_g4_t_v174;
  typedef double _g4_t_v175;
  typedef glitch::indexedIrradiance::CIndexedIrradianceManager::Self *_g4_t_v176;
  typedef char *_g4_t_v177;
  typedef uint32_t *_g4_t_v178;
  typedef char *_g4_t_v179;
  typedef char *_g4_t_v180;
  typedef uint32_t *_g4_t_v181;
  typedef int _g4_t_v182;
  typedef void **_g4_t_v183;
  typedef void ***_g4_t_v184;
  typedef uint32_t _g4_t_v185[4];
  typedef int _g4_t_v186;
  typedef uint32_t *_g4_t_v187;
  typedef uint32_t *_g4_t_v188;
  typedef uint32_t _g4_t_v189[2];
  typedef uint8_t _g4_t_v190[504];
  typedef uint32_t _g4_t_v191[1879];
  enum : size_t {
    _g4_s0 = 8416u,
    _g4_s1 = (4u + sizeof(_g4_t_v106)) > _g4_s0 ? (4u + sizeof(_g4_t_v106)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v107)) > _g4_s1 ? (24u + sizeof(_g4_t_v107)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v108)) > _g4_s2 ? (40u + sizeof(_g4_t_v108)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v109)) > _g4_s3 ? (40u + sizeof(_g4_t_v109)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v110)) > _g4_s4 ? (40u + sizeof(_g4_t_v110)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v111)) > _g4_s5 ? (40u + sizeof(_g4_t_v111)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v112)) > _g4_s6 ? (40u + sizeof(_g4_t_v112)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v113)) > _g4_s7 ? (44u + sizeof(_g4_t_v113)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v114)) > _g4_s8 ? (44u + sizeof(_g4_t_v114)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v115)) > _g4_s9 ? (44u + sizeof(_g4_t_v115)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v116)) > _g4_s10 ? (44u + sizeof(_g4_t_v116)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v117)) > _g4_s11 ? (44u + sizeof(_g4_t_v117)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v118)) > _g4_s12 ? (48u + sizeof(_g4_t_v118)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v119)) > _g4_s13 ? (64u + sizeof(_g4_t_v119)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v120)) > _g4_s14 ? (64u + sizeof(_g4_t_v120)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v121)) > _g4_s15 ? (64u + sizeof(_g4_t_v121)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v122)) > _g4_s16 ? (64u + sizeof(_g4_t_v122)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v123)) > _g4_s17 ? (64u + sizeof(_g4_t_v123)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v124)) > _g4_s18 ? (96u + sizeof(_g4_t_v124)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v125)) > _g4_s19 ? (100u + sizeof(_g4_t_v125)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v126)) > _g4_s20 ? (104u + sizeof(_g4_t_v126)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v127)) > _g4_s21 ? (108u + sizeof(_g4_t_v127)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v128)) > _g4_s22 ? (112u + sizeof(_g4_t_v128)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v129)) > _g4_s23 ? (116u + sizeof(_g4_t_v129)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v130)) > _g4_s24 ? (120u + sizeof(_g4_t_v130)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v131)) > _g4_s25 ? (124u + sizeof(_g4_t_v131)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v132)) > _g4_s26 ? (128u + sizeof(_g4_t_v132)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v133)) > _g4_s27 ? (132u + sizeof(_g4_t_v133)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v134)) > _g4_s28 ? (136u + sizeof(_g4_t_v134)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v135)) > _g4_s29 ? (140u + sizeof(_g4_t_v135)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v136)) > _g4_s30 ? (148u + sizeof(_g4_t_v136)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v137)) > _g4_s31 ? (152u + sizeof(_g4_t_v137)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v138)) > _g4_s32 ? (156u + sizeof(_g4_t_v138)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v139)) > _g4_s33 ? (160u + sizeof(_g4_t_v139)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v140)) > _g4_s34 ? (164u + sizeof(_g4_t_v140)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v141)) > _g4_s35 ? (168u + sizeof(_g4_t_v141)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v142)) > _g4_s36 ? (168u + sizeof(_g4_t_v142)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v143)) > _g4_s37 ? (172u + sizeof(_g4_t_v143)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v144)) > _g4_s38 ? (180u + sizeof(_g4_t_v144)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v145)) > _g4_s39 ? (184u + sizeof(_g4_t_v145)) : _g4_s39,
    _g4_s41 = (184u + sizeof(_g4_t_v146)) > _g4_s40 ? (184u + sizeof(_g4_t_v146)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v147)) > _g4_s41 ? (188u + sizeof(_g4_t_v147)) : _g4_s41,
    _g4_s43 = (188u + sizeof(_g4_t_v148)) > _g4_s42 ? (188u + sizeof(_g4_t_v148)) : _g4_s42,
    _g4_s44 = (192u + sizeof(_g4_t_v149)) > _g4_s43 ? (192u + sizeof(_g4_t_v149)) : _g4_s43,
    _g4_s45 = (192u + sizeof(_g4_t_v150)) > _g4_s44 ? (192u + sizeof(_g4_t_v150)) : _g4_s44,
    _g4_s46 = (196u + sizeof(_g4_t_v151)) > _g4_s45 ? (196u + sizeof(_g4_t_v151)) : _g4_s45,
    _g4_s47 = (196u + sizeof(_g4_t_v152)) > _g4_s46 ? (196u + sizeof(_g4_t_v152)) : _g4_s46,
    _g4_s48 = (200u + sizeof(_g4_t_v153)) > _g4_s47 ? (200u + sizeof(_g4_t_v153)) : _g4_s47,
    _g4_s49 = (204u + sizeof(_g4_t_v154)) > _g4_s48 ? (204u + sizeof(_g4_t_v154)) : _g4_s48,
    _g4_s50 = (204u + sizeof(_g4_t_v155)) > _g4_s49 ? (204u + sizeof(_g4_t_v155)) : _g4_s49,
    _g4_s51 = (204u + sizeof(_g4_t_v156)) > _g4_s50 ? (204u + sizeof(_g4_t_v156)) : _g4_s50,
    _g4_s52 = (208u + sizeof(_g4_t_v157)) > _g4_s51 ? (208u + sizeof(_g4_t_v157)) : _g4_s51,
    _g4_s53 = (208u + sizeof(_g4_t_v158)) > _g4_s52 ? (208u + sizeof(_g4_t_v158)) : _g4_s52,
    _g4_s54 = (208u + sizeof(_g4_t_v159)) > _g4_s53 ? (208u + sizeof(_g4_t_v159)) : _g4_s53,
    _g4_s55 = (212u + sizeof(_g4_t_v160)) > _g4_s54 ? (212u + sizeof(_g4_t_v160)) : _g4_s54,
    _g4_s56 = (216u + sizeof(_g4_t_v161)) > _g4_s55 ? (216u + sizeof(_g4_t_v161)) : _g4_s55,
    _g4_s57 = (216u + sizeof(_g4_t_v162)) > _g4_s56 ? (216u + sizeof(_g4_t_v162)) : _g4_s56,
    _g4_s58 = (216u + sizeof(_g4_t_v163)) > _g4_s57 ? (216u + sizeof(_g4_t_v163)) : _g4_s57,
    _g4_s59 = (216u + sizeof(_g4_t_v164)) > _g4_s58 ? (216u + sizeof(_g4_t_v164)) : _g4_s58,
    _g4_s60 = (216u + sizeof(_g4_t_v165)) > _g4_s59 ? (216u + sizeof(_g4_t_v165)) : _g4_s59,
    _g4_s61 = (216u + sizeof(_g4_t_v166)) > _g4_s60 ? (216u + sizeof(_g4_t_v166)) : _g4_s60,
    _g4_s62 = (224u + sizeof(_g4_t_v167)) > _g4_s61 ? (224u + sizeof(_g4_t_v167)) : _g4_s61,
    _g4_s63 = (224u + sizeof(_g4_t_v168)) > _g4_s62 ? (224u + sizeof(_g4_t_v168)) : _g4_s62,
    _g4_s64 = (224u + sizeof(_g4_t_v169)) > _g4_s63 ? (224u + sizeof(_g4_t_v169)) : _g4_s63,
    _g4_s65 = (224u + sizeof(_g4_t_v170)) > _g4_s64 ? (224u + sizeof(_g4_t_v170)) : _g4_s64,
    _g4_s66 = (224u + sizeof(_g4_t_v171)) > _g4_s65 ? (224u + sizeof(_g4_t_v171)) : _g4_s65,
    _g4_s67 = (224u + sizeof(_g4_t_v172)) > _g4_s66 ? (224u + sizeof(_g4_t_v172)) : _g4_s66,
    _g4_s68 = (224u + sizeof(_g4_t_v173)) > _g4_s67 ? (224u + sizeof(_g4_t_v173)) : _g4_s67,
    _g4_s69 = (224u + sizeof(_g4_t_v174)) > _g4_s68 ? (224u + sizeof(_g4_t_v174)) : _g4_s68,
    _g4_s70 = (232u + sizeof(_g4_t_v175)) > _g4_s69 ? (232u + sizeof(_g4_t_v175)) : _g4_s69,
    _g4_s71 = (232u + sizeof(_g4_t_v176)) > _g4_s70 ? (232u + sizeof(_g4_t_v176)) : _g4_s70,
    _g4_s72 = (232u + sizeof(_g4_t_v177)) > _g4_s71 ? (232u + sizeof(_g4_t_v177)) : _g4_s71,
    _g4_s73 = (232u + sizeof(_g4_t_v178)) > _g4_s72 ? (232u + sizeof(_g4_t_v178)) : _g4_s72,
    _g4_s74 = (232u + sizeof(_g4_t_v179)) > _g4_s73 ? (232u + sizeof(_g4_t_v179)) : _g4_s73,
    _g4_s75 = (232u + sizeof(_g4_t_v180)) > _g4_s74 ? (232u + sizeof(_g4_t_v180)) : _g4_s74,
    _g4_s76 = (232u + sizeof(_g4_t_v181)) > _g4_s75 ? (232u + sizeof(_g4_t_v181)) : _g4_s75,
    _g4_s77 = (268u + sizeof(_g4_t_v182)) > _g4_s76 ? (268u + sizeof(_g4_t_v182)) : _g4_s76,
    _g4_s78 = (272u + sizeof(_g4_t_v183)) > _g4_s77 ? (272u + sizeof(_g4_t_v183)) : _g4_s77,
    _g4_s79 = (276u + sizeof(_g4_t_v184)) > _g4_s78 ? (276u + sizeof(_g4_t_v184)) : _g4_s78,
    _g4_s80 = (288u + sizeof(_g4_t_v185)) > _g4_s79 ? (288u + sizeof(_g4_t_v185)) : _g4_s79,
    _g4_s81 = (304u + sizeof(_g4_t_v186)) > _g4_s80 ? (304u + sizeof(_g4_t_v186)) : _g4_s80,
    _g4_s82 = (308u + sizeof(_g4_t_v187)) > _g4_s81 ? (308u + sizeof(_g4_t_v187)) : _g4_s81,
    _g4_s83 = (312u + sizeof(_g4_t_v188)) > _g4_s82 ? (312u + sizeof(_g4_t_v188)) : _g4_s82,
    _g4_s84 = (320u + sizeof(_g4_t_v189)) > _g4_s83 ? (320u + sizeof(_g4_t_v189)) : _g4_s83,
    _g4_s85 = (328u + sizeof(_g4_t_v190)) > _g4_s84 ? (328u + sizeof(_g4_t_v190)) : _g4_s84,
    _g4_s86 = (832u + sizeof(_g4_t_v191)) > _g4_s85 ? (832u + sizeof(_g4_t_v191)) : _g4_s85
  };
  alignas(16) uint8_t _g4_sf[_g4_s86];
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 4u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 24u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 40u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 40u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 40u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 40u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 40u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 44u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 44u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 44u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 44u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 44u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 48u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 64u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 64u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 64u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 64u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 64u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 96u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 100u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 104u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 108u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 112u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 116u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 120u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 124u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 128u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 132u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 136u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 140u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 148u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 152u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 156u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 160u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 164u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 168u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 168u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 172u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 180u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 184u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 184u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 188u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 188u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 192u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 192u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 196u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 196u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 200u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 204u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 204u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 204u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 208u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 208u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 208u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 212u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 216u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 216u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 216u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 216u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 216u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 216u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 224u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 224u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 224u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 224u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 224u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 224u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 224u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 224u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 232u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 232u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 232u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 232u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 232u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 232u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 232u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 268u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 272u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 276u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 288u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 304u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 308u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 312u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 320u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 328u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 832u);

  glf::Console::Print((glf::Console::Self *)"Compressing similar probes...\n", v106);
  v143 = *((uint32_t *)self + 21) * *((uint32_t *)self + 20) * *((uint32_t *)self + 19);
  v138 = (uint16_t)((*(uint32_t *)(*((uint32_t *)self + 12) + 12 * (uint32_t)(uintptr_t)(a3) + 4)
                           - *(uint32_t *)(*((uint32_t *)self + 12) + 12 * (uint32_t)(uintptr_t)(a3))) >> 2);
  v4 = (g4_int128_t *)(v191);
  do
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4 += 3;
  }
  while ( v4 != (g4_int128_t *)&v191[1872] );
  memset(&v191[1872], 0, 12);
  v5 = 0;
  v6 = 0;
  v7 = self;
  do
  {
    v8 = 0;
    v157 = v7;
    do
    {
      v108 = v6;
      v119 = lrand48();
      v113 = lrand48();
      v9 = acos(sqrt(1.0 - (float)((float)((float)((float)v119 * 4.656613e-10f) + (float)v5) * 0.04f)));
      v10 = (double)v9 + (double)v9;
      v175 = sin(v10);
      v118 = (float)((float)((float)((float)v113 * 4.656613e-10f) + (float)v8) * 0.25132743f);
      v167 = sin(v118);
      v161 = cos(v10);
      v107 = cos(v118);
      v6 = v108;
      v11 = v8 + v108;
      ++v8;
      v12 = (float *)&v191[3 * v11];
      v13 = v107 * v175;
      *v12 = v13;
      v14 = v161;
      v12[1] = v14;
      v15 = v167 * v175;
      v12[2] = v15;
    }
    while ( v8 != 25 );
    ++v5;
    v6 = v108 + 25;
    v7 = v157;
  }
  while ( v5 != 25 );
  v16 = v157;
  v144 = (uint32_t *)opNewArray(4 * v138);
  v136 = 2 * v143;
  v133 = (char *)opNewArray(2 * v143);
  if ( v143 > 0 )
  {
    v17 = 0;
    do
    {
      *(uint16_t *)&v133[v17] = *(uint16_t *)(*(uint32_t *)(*((uint32_t *)v157 + 13) + 4 * (uint32_t)(uintptr_t)(a3)) + v17);
      v17 += 2;
    }
    while ( v136 != v17 );
  }
  if ( v138 != 0 )
  {
    for ( i = 0; i < v138; ++i )
      v144[i] = glitch::indexedIrradiance::CIndexedIrradiancePoint::sample(
                  *(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*((uint32_t *)v157 + 12)
                                                                                     + 12 * (uint32_t)(uintptr_t)(a3))
                                                                         + 4 * (uint16_t)i),
                  (int)(uintptr_t)(v191),
                  0x271u);
  }
  v183 = (void **)&v183;
  v184 = &v183;
  v134 = nullptr;
  do
  {
    glf::Console::Print((glf::Console::Self *)"Set %d - Iteration %d\n", a3, v134);
    v19 = v183;
    if ( v183 != (void **)&v183 )
    {
      v176 = v16;
      while ( 1 )
      {
        v20 = (void **)*v19;
        if ( v19[7] != nullptr )
          opDelete(v19[7]);
        opDelete(v19);
        if ( v20 == (void **)&v183 )
          break;
        v19 = v20;
      }
      v16 = v176;
    }
    v183 = (void **)&v183;
    v184 = &v183;
    v21 = *((uint32_t *)v16 + 21);
    if ( v21 > 0 )
    {
      v22 = *((uint32_t *)v16 + 20);
      v141 = 1;
      do
      {
        v127 = v141 - 1;
        v124 = v141;
        if ( v22 <= 0 )
          goto LABEL_65;
        v23 = *((uint32_t *)v16 + 19);
        v139 = 1;
        do
        {
          v140 = 1;
          v126 = v139 - 1;
          v125 = v139;
          if ( v23 <= 0 )
            goto LABEL_64;
          v162 = v21;
          do
          {
            v154 = *(uint16_t *)(*(uint32_t *)(*((uint32_t *)v16 + 13) + 4 * (uint32_t)(uintptr_t)(a3))
                            + 2 * (v22 * v23 * v127 + v140 - 1 + v23 * v126));
            if ( v154 == 0xFFFF )
            {
              v128 = v140;
              goto LABEL_62;
            }
            v24 = 0;
            if ( v140 - 2 >= 0 )
              v24 = v140 - 2;
            v137 = v24;
            v25 = 0;
            if ( v139 - 2 >= 0 )
              v25 = v139 - 2;
            v135 = v25;
            v26 = v141 - 2;
            if ( v141 - 2 < 0 )
              v26 = 0;
            v128 = v140;
            v27 = v140;
            if ( v23 - 1 <= v140 )
              v27 = v23 - 1;
            v149 = v27;
            v28 = v139;
            if ( v22 - 1 <= v139 )
              v28 = v22 - 1;
            v131 = v28;
            v29 = v141;
            if ( v162 - 1 <= v141 )
              v29 = v162 - 1;
            v130 = v29;
            if ( v29 >= v26 )
            {
              v163 = v26;
              v132 = 0.0;
              v129 = nullptr;
              v145 = nullptr;
              v177 = nullptr;
              while ( 1 )
              {
                v168 = v135;
                v30 = (int)(uintptr_t)(v177);
                if ( v135 <= v131 )
                  break;
LABEL_58:
                if ( v130 < ++v163 )
                {
                  v45 = (int)(uintptr_t)(&v145[-v30]) >> 2;
                  if ( -1431655765 * v45 != 0 )
                  {
                    v123 = -1431655765 * v45;
                    v111 = (int)(uintptr_t)(&v145[-v30]) >> 2;
                    v89 = opNew(0x28u);
                    v90 = (uint32_t *)v89;
                    if ( v89 != -8 )
                    {
                      *(uint16_t *)(v89 + 8) = v154;
                      *(uint32_t *)(v89 + 12) = v140 - 1;
                      *(uint32_t *)(v89 + 16) = v126;
                      *(uint32_t *)(v89 + 20) = v127;
                      *(uint64_t *)(v89 + 24) = LODWORD(v132);
                      *(uint32_t *)(v89 + 32) = 0;
                      *(uint32_t *)(v89 + 36) = 0;
                      if ( v123 > 0x15555555 )
                        sub_18FFEE0(v111, v123);
                      v91 = opNew(4 * v111);
                      v90[7] = v91;
                      v90[8] = v91;
                      v92 = v177;
                      v90[9] = v91 + 4 * v111;
                      if ( v145 != v177 )
                      {
                        v93 = (uint32_t *)v91;
                        do
                        {
                          if ( v93 != nullptr )
                          {
                            *v93 = *(uint32_t *)v92;
                            v93[1] = *((uint32_t *)v92 + 1);
                            v93[2] = *((uint32_t *)v92 + 2);
                          }
                          v92 += 12;
                          v93 += 3;
                        }
                        while ( v92 != v145 );
                        v91 += 4 * ((unsigned int)(v92 - (v177 + 12)) >> 2) + 12;
                      }
                      v90[8] = v91;
                    }
                    sub_1901920(v90, &v183);
                  }
                  if ( v177 != nullptr )
                  {
                    opDelete(v177);
                    v23 = *((uint32_t *)v16 + 19);
                    v22 = *((uint32_t *)v16 + 20);
                    v162 = *((uint32_t *)v16 + 21);
                  }
                  else
                  {
                    v23 = *((uint32_t *)v16 + 19);
                    v162 = *((uint32_t *)v16 + 21);
                    v22 = *((uint32_t *)v16 + 20);
                  }
                  goto LABEL_62;
                }
              }
              while ( 1 )
              {
                v31 = v137;
                v30 = (int)(uintptr_t)(v177);
                if ( v137 <= v149 )
                  break;
LABEL_57:
                if ( ++v168 > v131 )
                  goto LABEL_58;
              }
              while ( 2 )
              {
                v32 = *(uint16_t *)(*(uint32_t *)(*((uint32_t *)v16 + 13) + 4 * (uint32_t)(uintptr_t)(a3))
                               + 2
                               * (*((uint32_t *)v16 + 20) * v163 * *((uint32_t *)v16 + 19)
                                + v31
                                + *((uint32_t *)v16 + 19) * v168));
                if ( v154 == v32 )
                  goto LABEL_55;
                if ( v32 == 0xFFFF )
                  goto LABEL_55;
g4_m128_raw(v33) = 0;
g4_m128_raw(v34) = 0;
g4_m128_raw(v35) = 0;
                v36 = (float *)v144[v32];
                v37 = (float *)v144[v154];
                for ( j = 0; j != 1872; j += 12 )
                {
                  v35 = _mm_max_ps(
                          v35,
                          _mm_and_ps(
                            _mm_sub_ps(
                              _mm_loadh_ps((const double *)&v36[j + 2]),
                              _mm_loadh_ps((const double *)&v37[j + 2])),
                            G4_BITCAST<__m128>(xmmword_1C7C250)));
                  v39 = _mm_loadh_ps((const double *)&v37[j + 10]);
                  v34 = _mm_max_ps(
                          v34,
                          _mm_and_ps(
                            _mm_sub_ps(
                              _mm_loadh_ps((const double *)&v36[j + 6]),
                              _mm_loadh_ps((const double *)&v37[j + 6])),
                            G4_BITCAST<__m128>(xmmword_1C7C250)));
                  v40 = _mm_loadh_ps((const double *)&v36[j + 10]);
                  v33 = _mm_max_ps(v33, _mm_and_ps(_mm_sub_ps(v40, v39), G4_BITCAST<__m128>(xmmword_1C7C250)));
                }
                v41 = fmaxf(
                        fmaxf(
                          fmaxf(
                            fmaxf(g4_m128_lane<float>(v35, 0),g4_m128_lane<float>(_mm_shuffle_ps(v35, v35, 255), 0)),
                            fabs(v36[1872] - v37[1872])),
g4_m128_lane<float>(_mm_unpackhi_ps(v34, v34), 0)),
g4_m128_lane<float>(_mm_shuffle_ps(v33, v33, 85), 0));
                v42 = fmaxf(
                        fmaxf(
                          fmaxf(
                            fmaxf(g4_m128_lane<float>(_mm_shuffle_ps(v35, v35, 85), 0),g4_m128_lane<float>(v34, 0)),
                            fabs(v36[1873] - v37[1873])),
g4_m128_lane<float>(_mm_shuffle_ps(v34, v34, 255), 0)),
g4_m128_lane<float>(_mm_unpackhi_ps(v33, v33), 0));
                v43 = fmaxf(
                        fmaxf(
                          fmaxf(
                            fmaxf(g4_m128_lane<float>(_mm_unpackhi_ps(v35, v35), 0),g4_m128_lane<float>(_mm_shuffle_ps(v34, v34, 85), 0)),
                            fabs(v36[1874] - v37[1874])),
g4_m128_lane<float>(v33, 0)),
g4_m128_lane<float>(_mm_shuffle_ps(v33, v33, 255), 0));
                if ( a2 <= v41 || a2 <= v42 || a2 <= v43 )
                {
LABEL_55:
                  v30 = (int)(uintptr_t)(v177);
                }
                else
                {
                  v44 = sqrt((float)((float)((float)(v42 * v42) + (float)(v41 * v41)) + (float)(v43 * v43))) + v132;
                  v132 = v44;
                  if ( v129 != v145 )
                  {
                    if ( v145 != nullptr )
                    {
                      *(uint32_t *)v145 = v31;
                      *((uint32_t *)v145 + 1) = v168;
                      *((uint32_t *)v145 + 2) = v163;
                    }
                    v145 += 12;
                    goto LABEL_55;
                  }
                  v151 = 12;
                  if ( -1431655765 * ((v145 - v177) >> 2) != 0 )
                  {
                    v151 = 0xFFFFFFFC;
                    if ( -1431655765 * ((v145 - v177) >> 2) <= (unsigned int)(1431655766 * ((v145 - v177) >> 2))
                      && (unsigned int)(1431655766 * ((v145 - v177) >> 2)) <= 0x15555555 )
                    {
                      v151 = 8 * ((v145 - v177) >> 2);
                    }
                  }
                  v30 = opNew(v151);
                  v158 = (char *)v30;
                  v147 = v30 + 12;
                  v53 = (int *)(v30 + 4 * ((v145 - v177) >> 2));
                  if ( v53 != nullptr )
                  {
                    *v53 = v31;
                    v53[1] = v168;
                    v53[2] = v163;
                  }
                  if ( v145 != v177 )
                  {
                    v54 = v177;
                    v55 = (uint32_t *)v30;
                    do
                    {
                      if ( v55 != nullptr )
                      {
                        *v55 = *(uint32_t *)v54;
                        v55[1] = *((uint32_t *)v54 + 1);
                        v55[2] = *((uint32_t *)v54 + 2);
                      }
                      v54 += 12;
                      v55 += 3;
                    }
                    while ( v145 != v54 );
                    v147 = v30 + 4 * ((unsigned int)(v145 - (v177 + 12)) >> 2) + 24;
                  }
                  if ( v177 != nullptr )
                  {
                    v114 = v30;
                    opDelete(v177);
                    v30 = v114;
                  }
                  v129 = &v158[v151];
                  v145 = (char *)v147;
                  v177 = v158;
                }
                if ( ++v31 > v149 )
                  goto LABEL_57;
                continue;
              }
            }
LABEL_62:
            ++v140;
          }
          while ( v23 > v128 );
          v21 = v162;
LABEL_64:
          ++v139;
        }
        while ( v22 > v125 );
LABEL_65:
        ++v141;
      }
      while ( v21 > v124 );
      if ( v183 != (void **)&v183 && *v183 != &v183 )
      {
        v185[0] = (uint32_t)(uintptr_t)(v185);
        v185[1] = (uint32_t)(uintptr_t)(v185);
        v46 = v189;
        do
        {
          *v46 = (uint32_t)(uintptr_t)(v46);
          v46[1] = (uint32_t)(uintptr_t)(v46);
          v46 += 2;
        }
        while ( v46 != v191 );
        v47 = v183;
        v178 = v189;
        v169 = v16;
        do
        {
          if ( (void **)v185[0] != v47 && (void *)v185[0] != *v47 )
            sub_19018A0(v185[0], v47, *v47);
          if ( v178 == v189 )
          {
            v48 = v189;
            v178 = (uint32_t *)(v190);
          }
          else
          {
            v48 = v189;
            if ( (uint32_t *)v189[0] != v189 )
            {
              for ( k = v189; ; k = v122 + 2 )
              {
                if ( k != v185 )
                {
                  v50 = (uint32_t *)*k;
                  v51 = (uint32_t *)v185[0];
                  if ( (uint32_t *)*k == k )
                  {
LABEL_83:
                    if ( v51 != v185 )
                    {
                      v121 = k;
                      sub_19018A0(k, v51, v185);
                      k = v121;
                    }
                  }
                  else
                  {
                    while ( v51 != v185 )
                    {
                      v120 = k;
                      v109 = v50;
                      v52 = glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingNbNeighbours(
                              (int)(uintptr_t)(v51 + 2),
                              (int)(uintptr_t)(v50 + 2));
                      k = v120;
                      if ( v52 )
                      {
                        v115 = (uint32_t *)*v51;
                        sub_19018A0(v109, v51, *v51);
                        k = v120;
                        v51 = v115;
                        v50 = v109;
                      }
                      else
                      {
                        v50 = (uint32_t *)*v109;
                      }
                      if ( k == v50 )
                        goto LABEL_83;
                    }
                  }
                }
                v122 = k;
                sub_1901820(v185, k);
                v48 = v122 + 2;
                if ( v122 + 2 == v178 )
                  break;
                if ( (uint32_t *)*v48 == v48 )
                  goto LABEL_189;
              }
              v178 = v122 + 4;
            }
          }
LABEL_189:
          sub_1901820(v185, v48);
          v47 = v183;
        }
        while ( v183 != (void **)&v183 );
        v94 = v169;
        if ( v178 != (uint32_t *)v190 )
        {
          v156 = v169;
          v95 = (uint32_t *)(v190);
          while ( 1 )
          {
            v96 = (uint32_t *)*v95;
            v97 = (uint32_t *)*(v95 - 2);
            v173 = v95 - 2;
            if ( (uint32_t *)*v95 == v95 )
              goto LABEL_214;
            if ( v97 != v95 - 2 )
              break;
LABEL_200:
            v95 += 2;
            if ( v95 == v178 )
            {
              v94 = v156;
              goto LABEL_202;
            }
          }
          v165 = v95;
          v98 = (uint32_t *)*(v95 - 2);
          while ( 1 )
          {
            v112 = v96;
            if ( glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingNbNeighbours(
                   (int)(uintptr_t)(v98 + 2),
                   (int)(uintptr_t)(v96 + 2)) )
            {
              v116 = (uint32_t *)*v98;
              sub_19018A0(v112, v98, *v98);
              v96 = v112;
              v98 = v116;
            }
            else
            {
              v96 = (uint32_t *)*v112;
            }
            if ( v96 == v165 )
              break;
            if ( v98 == v173 )
            {
              v95 = v165;
              goto LABEL_200;
            }
          }
          v97 = v98;
          v95 = v165;
LABEL_214:
          if ( v173 != v97 )
            sub_19018A0(v95, v97, v173);
          goto LABEL_200;
        }
LABEL_202:
        sub_1901820(&v183, v178 - 2);
        v99 = v191;
        v166 = v94;
        while ( 1 )
        {
          v100 = v99 - 2;
          v101 = (uint32_t *)*(v99 - 2);
          if ( v101 != v99 - 2 )
          {
            v174 = v99 - 2;
            while ( 1 )
            {
              v102 = (void *)v101[7];
              v181 = (uint32_t *)*v101;
              if ( v102 != nullptr )
                opDelete(v102);
              opDelete(v101);
              if ( v181 == v174 )
                break;
              v101 = v181;
            }
            v100 = v174;
          }
          if ( v100 == v189 )
            break;
          v99 = v100;
        }
        v103 = (uint32_t *)v185[0];
        v16 = v166;
        if ( (uint32_t *)v185[0] != v185 )
        {
          while ( 1 )
          {
            v104 = (void *)v103[7];
            v105 = (uint32_t *)*v103;
            if ( v104 != nullptr )
            {
              v117 = v103;
              opDelete(v104);
              v103 = v117;
            }
            opDelete(v103);
            if ( v105 == v185 )
              break;
            v103 = v105;
          }
          v16 = v166;
        }
      }
    }
    v179 = (char *)opNewArray(v143);
    memset(v179, 0, v143);
    for ( m = v183; m != (void **)&v183; m = (void **)*m )
    {
      v150 = *((uint16_t *)m + 4);
      v142 = *((uint32_t *)v16 + 19);
      v57 = *((uint32_t *)v16 + 20);
      v159 = (char *)m[3] + v142 * ((uint32_t)(uintptr_t)(m[4]) + v57 * (uint32_t)(uintptr_t)(m[5])) + (uint32_t)(uintptr_t)(v179);
      if ( *v159 == 0 )
      {
        v146 = -1431655765 * (((uint8_t *)m[8] - (uint8_t *)m[7]) >> 2);
        if ( v146 != 0 )
        {
          v155 = 0;
          v164 = 0;
          v58 = (char *)m[7];
          while ( 1 )
          {
            v59 = (int *)&v58[v155];
            v152 = *v59;
            v153 = v59[1];
            v148 = v59[2];
            v60 = *v59 + v142 * (v153 + v57 * v148);
            v170 = &v179[v60];
            if ( v179[v60] == 0 )
            {
g4_m128_raw(v61) = 0;
g4_m128_raw(v62) = 0;
g4_m128_raw(v63) = 0;
              v64 = (float *)v144[*(uint16_t *)&v133[2 * v60]];
              v65 = (float *)v144[v150];
              for ( n = 0; n != 1872; n += 12 )
              {
                v63 = _mm_max_ps(
                        v63,
                        _mm_and_ps(
                          _mm_sub_ps(
                            _mm_loadh_ps((const double *)&v64[n + 2]),
                            _mm_loadh_ps((const double *)&v65[n + 2])),
                          G4_BITCAST<__m128>(xmmword_1C7C250)));
                v67 = _mm_loadh_ps((const double *)&v65[n + 10]);
                v62 = _mm_max_ps(
                        v62,
                        _mm_and_ps(
                          _mm_sub_ps(
                            _mm_loadh_ps((const double *)&v64[n + 6]),
                            _mm_loadh_ps((const double *)&v65[n + 6])),
                          G4_BITCAST<__m128>(xmmword_1C7C250)));
                v68 = _mm_loadh_ps((const double *)&v64[n + 10]);
                v61 = _mm_max_ps(v61, _mm_and_ps(_mm_sub_ps(v68, v67), G4_BITCAST<__m128>(xmmword_1C7C250)));
              }
              v69 = fmaxf(
                      fmaxf(
                        fmaxf(
                          fmaxf(g4_m128_lane<float>(_mm_shuffle_ps(v63, v63, 85), 0),g4_m128_lane<float>(v62, 0)),
                          fabs(v64[1873] - v65[1873])),
g4_m128_lane<float>(_mm_shuffle_ps(v62, v62, 255), 0)),
g4_m128_lane<float>(_mm_unpackhi_ps(v61, v61), 0));
              v70 = fmaxf(
                      fmaxf(
                        fmaxf(
                          fmaxf(g4_m128_lane<float>(_mm_unpackhi_ps(v63, v63), 0),g4_m128_lane<float>(_mm_shuffle_ps(v62, v62, 85), 0)),
                          fabs(v64[1874] - v65[1874])),
g4_m128_lane<float>(v61, 0)),
g4_m128_lane<float>(_mm_shuffle_ps(v61, v61, 255), 0));
              if ( a2 > fmaxf(
                          fmaxf(
                            fmaxf(
                              fmaxf(g4_m128_lane<float>(v63, 0),g4_m128_lane<float>(_mm_shuffle_ps(v63, v63, 255), 0)),
                              fabs(v64[1872] - v65[1872])),
g4_m128_lane<float>(_mm_unpackhi_ps(v62, v62), 0)),
g4_m128_lane<float>(_mm_shuffle_ps(v61, v61, 85), 0))
                && a2 > v69
                && a2 > v70 )
              {
                *v159 = 1;
                *(uint16_t *)(*(uint32_t *)(*((uint32_t *)v16 + 13) + 4 * (uint32_t)(uintptr_t)(a3))
                         + 2
                         * (*((uint32_t *)v16 + 20) * v148 * *((uint32_t *)v16 + 19) + v152 + *((uint32_t *)v16 + 19) * v153)) = v150;
                *v170 = 1;
              }
            }
            ++v164;
            v155 += 12;
            if ( v164 == v146 )
              break;
            v58 = (char *)m[7];
            v57 = *((uint32_t *)v16 + 20);
            v142 = *((uint32_t *)v16 + 19);
          }
        }
      }
    }
    if ( v179 != nullptr )
      opDeleteArray(v179);
    ++v134;
    v71 = (void ***)v183;
    a2 = a2 * 0.75;
    if ( v183 == (void **)&v183 )
      break;
    do
      v71 = (void ***)*v71;
    while ( v71 != &v183 );
  }
  while ( v134 != (const char *)&dword_14 );
  glf::Console::Print((glf::Console::Self *)"Compression algorithm stopped after %d iterations\n", v134);
  v186 = 0;
  v187 = nullptr;
  v188 = nullptr;
  v180 = (char *)opNewArray(2 * v138);
  memset(v180, 0xFFFF, 2 * v138);
  if ( v143 > 0 )
  {
    v72 = 0;
    do
    {
      v73 = *(uint16_t *)(*(uint32_t *)(*((uint32_t *)v16 + 13) + 4 * (uint32_t)(uintptr_t)(a3)) + v72);
      if ( v73 != 0xFFFF )
      {
        v171 = &v180[2 * v73];
        if ( *(uint16_t *)v171 == 0xFFFF )
        {
          v83 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v16 + 12) + 12 * (uint32_t)(uintptr_t)(a3)) + 4 * v73);
          v182 = v83;
          if ( v187 == v188 )
          {
            v110 = v72;
            sub_D8C010(&v186, &v182);
            v85 = v187;
            v72 = v110;
          }
          else
          {
            v84 = nullptr;
            if ( v187 != nullptr )
            {
              *v187 = v83;
              v84 = v187;
            }
            v85 = v84 + 1;
            v187 = v84 + 1;
          }
          *(uint16_t *)v171 = (((int)(uintptr_t)(v85) - v186) >> 2) - 1;
        }
      }
      v72 += 2;
    }
    while ( v136 != v72 );
  }
  v74 = (char *)opNewArray(v136);
  memset(v74, 0xFFFF, v136);
  if ( v138 != 0 )
  {
    v75 = 1;
    do
    {
      if ( *(uint16_t *)&v180[2 * v75 - 2] != 0xFFFF && v143 > 0 )
      {
        v76 = 0;
        do
        {
          if ( v75 - 1 == *(uint16_t *)(*(uint32_t *)(*((uint32_t *)v16 + 13) + 4 * (uint32_t)(uintptr_t)(a3)) + v76) )
            *(uint16_t *)&v74[v76] = *(uint16_t *)&v180[2 * v75 - 2];
          v76 += 2;
        }
        while ( v136 != v76 );
      }
      ++v75;
    }
    while ( v75 != v138 + 1 );
  }
  if ( v143 > 0 )
  {
    v77 = 0;
    do
    {
      *(uint16_t *)(*(uint32_t *)(*((uint32_t *)v16 + 13) + 4 * (uint32_t)(uintptr_t)(a3)) + v77) = *(uint16_t *)&v74[v77];
      v77 += 2;
    }
    while ( v136 != v77 );
  }
  opDelete(v74);
  glf::Console::Print(
    (glf::Console::Self *)"Were %d probes in set %d\n",
    (const char *)((*(uint32_t *)(*((uint32_t *)v16 + 12) + 12 * (uint32_t)(uintptr_t)(a3) + 4)
                  - *(uint32_t *)(*((uint32_t *)v16 + 12) + 12 * (uint32_t)(uintptr_t)(a3))) >> 2),
    a3);
  glf::Console::Print(
    (glf::Console::Self *)"Now %d relevant probes for set %d !\n",
    (const char *)(((int)(uintptr_t)(v187) - v186) >> 2),
    a3);
  *(uint32_t *)(*((uint32_t *)v16 + 12) + 12 * (uint32_t)(uintptr_t)(a3) + 4) = *(uint32_t *)(*((uint32_t *)v16 + 12) + 12 * (uint32_t)(uintptr_t)(a3));
  v78 = v186;
  if ( ((unsigned int)(uintptr_t)(v187) - v186) >> 2 != 0 )
  {
    v172 = v186;
    v79 = 0;
    while ( 1 )
    {
      v80 = (uint32_t *)(v78 + 4 * v79);
      v81 = (int *)(*((uint32_t *)v16 + 12) + 12 * (uint32_t)(uintptr_t)(a3));
      v82 = (uint32_t *)v81[1];
      if ( v82 == (uint32_t *)v81[2] )
      {
        sub_D8C010(v81, v80);
        v78 = v186;
      }
      else
      {
        v160 = 0;
        if ( v82 != nullptr )
        {
          *v82 = *v80;
          v160 = v81[1];
          v172 = v186;
        }
        v81[1] = v160 + 4;
        v78 = v172;
      }
      if ( ++v79 >= (unsigned int)(((int)(uintptr_t)(v187) - v78) >> 2) )
        break;
      v172 = v78;
    }
  }
  if ( v180 != nullptr )
    opDeleteArray(v180);
  if ( v133 != nullptr )
    opDeleteArray(v133);
  if ( v138 != 0 )
  {
    for ( ii = 0; ii < v138; ++ii )
    {
      if ( v144[ii] != 0 )
        opDeleteArray((void *)v144[ii]);
    }
  }
  if ( v144 != nullptr )
    opDeleteArray(v144);
  if ( v186 != 0 )
    gll_operator_delete_arr(v186);
  v87 = v183;
  if ( v183 != (void **)&v183 )
  {
    while ( 1 )
    {
      v88 = (void **)*v87;
      if ( v87[7] != nullptr )
        opDelete(v87[7]);
      opDelete(v87);
      if ( v88 == (void **)&v183 )
        break;
      v87 = v88;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference  (binary VA: 0xda6d20)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2)
{
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v2;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v3;
  int v4;
  int v5;
  __m128 v6;
  __m128 v7;
  int v8;
  char *v9;
  int v10;
  char *v11;
  int v13;
  int i;

  v2 = a2;
  v3 = self;
  for ( i = 0; i != 3; ++i )
  {
    if ( v2 > (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 16)
      || v3 > (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v2 + 16) )
    {
      v4 = 1;
      v5 = 8;
      v6 = _mm_and_ps(
             _mm_sub_ps(_mm_loadh_ps((const double *)v3 + 1), _mm_loadh_ps((const double *)v2 + 1)),
             G4_BITCAST<__m128>(xmmword_1C7C250));
      _mm_storel_ps((double *)v3, v6);
      _mm_storeh_ps((double *)v3 + 1, v6);
      v7 = _mm_and_ps(
             _mm_sub_ps(_mm_loadh_ps((const double *)v3 + 3), _mm_loadh_ps((const double *)v2 + 3)),
             G4_BITCAST<__m128>(xmmword_1C7C250));
      _mm_storel_ps((double *)v3 + 2, v7);
      _mm_storeh_ps((double *)v3 + 3, v7);
    }
    else
    {
      v4 = 9;
      v5 = 0;
    }
    v8 = 4 * v5;
    v13 = 4 * v4;
    v9 = (char *)self + 36 * i + v8;
    v10 = 0;
    v11 = (char *)a2 + 36 * i + v8;
    do
    {
      *(float *)&v9[v10] = fabs(*(float *)&v9[v10] - *(float *)&v11[v10]);
      v10 += 4;
    }
    while ( v10 != v13 );
    v2 = (const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v2 + 36);
    v3 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)((char *)v3 + 36);
  }
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 32) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference  (binary VA: 0xda6e70)
// Original: glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradiancePoint::Self * glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference(glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *self, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *a3)
{
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(self);
  glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(self, a2);
  glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference(self, a3);
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 32) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::loadAndCompare  (binary VA: 0xda6ee0)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::loadAndCompare
// ----------------------------------------------------------------------------
void glitch::indexedIrradiance::CIndexedIrradianceManager::loadAndCompare(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *a1, const char *a2, const char *a3)
{
  unsigned int v4;
  unsigned int *v5;
  __m128i *v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v15;
  unsigned int v16;
  unsigned int v17;
  size_t v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int *v24;
  __m128i *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  int v29;
  int v30;
  int v31;
  int v32;
  size_t v33;
  int v34;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v35;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v36;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v37;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v38;
  uint32_t *v39;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v40;
  void **v41;
  void *v42;
  int v43;
  void *v44;
  char *v45;
  int v46;
  void **v47;
  int m;
  int v49;
  int v50;
  int v51;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v52;
  int v53;
  int v54;
  unsigned int v55;
  unsigned int v56;
  size_t v57;
  int v58;
  int v59;
  int v60;
  void *v61;
  int v62;
  int v63;
  int v64;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v65;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v66;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v67;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v68;
  uint32_t *v69;
  int *v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int *v75;
  int v76;
  uint16_t v77;
  uint16_t v78; // si
  int *v79;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  size_t v84;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v85;
  char *v86;
  uint32_t *v87;
  char *v88;
  uint32_t *v89;
  void *v90;
  int v91;
  int *v92;
  size_t v93;
  int v94;
  int *v95;
  int v96;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v97;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v98;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v99;
  char *v100;
  int v101;
  unsigned int v102;
  int *v103;
  unsigned int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  unsigned int v111;
  int v112;
  int v113;
  uint16_t v114;
  unsigned int v115;
  int v116;
  unsigned int v117;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v118;
  int v119;
  int v120;
  int v121;
  int i;
  int v123;
  int v124;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v125;
  unsigned int v126;
  int v127;
  int v128;
  int k;
  int v130;
  int v131;
  int v132;
  int v133;
  const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v134;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **v135;
  int v136;
  __m128i *v137;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v138;
  int v139;
  int v140;
  int v141;
  glitch::indexedIrradiance::CIndexedIrradianceManager::Self *v142;
  int v143;
  size_t v144;
  unsigned int v145;
  int v146;
  int v147;
  __m128i *v148;
  int v149;
  void ***v150;
  char *v151;
  int v152;
  int j;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v154;
  int v155;
  char *v156;
  int v157;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v158;
  int v159;
  size_t v160;
  unsigned int v161;
  int v162;
  int v163;
  int v164;
  char *v165;
  void **v166;
  uint16_t v167;
  glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *v168;
  int v169;
  char *v170;
  int v171;
  size_t v172;
  int v173;
  int v174;
  int v175;
  uint32_t v176[4];
  int v177;
  int v178;

  for ( i = 0; i != 2; ++i )
  {
    if ( i != 0 )
      glitch::indexedIrradiance::CIndexedIrradianceManager::load(a1, a3);
    else
      glitch::indexedIrradiance::CIndexedIrradianceManager::load(a1, a2);
    v4 = *((uint32_t *)a1 + 18);
    v5 = (unsigned int *)opNewArray(12 * v4 + 4);
    *v5 = v4;
    v6 = (__m128i *)(v5 + 1);
    v145 = v4 - 1;
    v137 = v6;
    if ( v4 != 0 )
    {
      v157 = 4 * (v4 >> 2);
      if ( v4 <= 3 )
        goto LABEL_10;
      if ( 4 * (v4 >> 2) == 0 )
        goto LABEL_10;
      v7 = 0;
      do
      {
        ++v7;
        *v6 = g4_m128_from<__m128i>(0LL);
        v6[1] = g4_m128_from<__m128i>(0LL);
        v6[2] = g4_m128_from<__m128i>(0LL);
        v6 += 3;
      }
      while ( v7 < v4 >> 2 );
      v145 -= v157;
      v6 = &v137[3 * (v4 >> 2)];
      if ( v4 != v157 )
      {
LABEL_10:
        v8 = v145;
        do
        {
          --v8;
g4_m128_lane<int32_t>(*(v6), 0) = 0;
g4_m128_lane<int32_t>(*(v6), 1) = 0;
g4_m128_lane<int32_t>(*(v6), 2) = 0;
          v6 = (__m128i *)((char *)v6 + 12);
        }
        while ( v8 != -1 );
      }
    }
    v9 = i;
    v10 = *((uint32_t *)a1 + 18);
    *(&v174 + i) = (int)(uintptr_t)(v137);
    if ( v10 > 0 )
    {
      v138 = a1;
      v146 = 0;
      v130 = 0;
      v11 = *((uint32_t *)a1 + 12);
      do
      {
        if ( (uint16_t)((unsigned int)(*(uint32_t *)(v11 + v146 + 4) - *(uint32_t *)(v11 + v146)) >> 2) != 0 )
        {
          v12 = 0;
          v13 = (int *)(*(&v174 + i) + v146);
          do
          {
            v92 = v13;
            v158 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)opNew(0x84u);
            glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(v158);
            glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(
              v158,
              *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(*((uint32_t *)v138 + 12) + v146)
                                                                           + 4 * v12));
            v13 = v92;
            v15 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v92[1];
            if ( v15 == (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v92[2] )
            {
              v16 = ((int)(uintptr_t)(v15) - *v92) >> 2;
              v17 = 1;
              v126 = v16;
              if ( v16 != 0 && ((v17 = 2 * v16, v16 > 2 * v16) || v17 > 0x3FFFFFFF) )
              {
                v110 = -4;
                v18 = 0xFFFFFFFC;
              }
              else
              {
                v18 = 4 * v17;
                v110 = v18;
              }
              v113 = sub_4EBDC0(v18);
              v117 = v113 + 4;
              v13 = v92;
              v35 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v113 + 4 * v126);
              if ( v35 != nullptr )
                *v35 = v158;
              v164 = *v92;
              if ( v15 != (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)*v92 )
              {
                v36 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)*v92;
                v37 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v113;
                do
                {
                  if ( v37 != nullptr )
                    *v37 = *v36;
                  ++v36;
                  ++v37;
                }
                while ( v15 != v36 );
                v117 = v113 + 4 * (((unsigned int)(uintptr_t)(v15) - v164 - 4) >> 2) + 8;
              }
              v165 = (char *)v92[1];
              if ( v15 != (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v165 )
              {
                v38 = v15;
                v39 = (uint32_t *)v117;
                do
                {
                  if ( v39 != nullptr )
                    *v39 = (uint32_t)(uintptr_t)(*v38);
                  ++v38;
                  ++v39;
                }
                while ( v165 != (char *)v38 );
                v117 += 4 * ((unsigned int)(v165 - (char *)(v15 + 1)) >> 2) + 4;
              }
              if ( *v92 != 0 )
              {
                gll_operator_delete_arr(*v92);
                v13 = v92;
              }
              v13[1] = v117;
              *v13 = v113;
              v13[2] = v113 + v110;
            }
            else
            {
              v14 = 0;
              if ( v15 != nullptr )
              {
                *v15 = v158;
                v14 = v92[1];
              }
              v92[1] = v14 + 4;
            }
            ++v12;
            v11 = *((uint32_t *)v138 + 12);
          }
          while ( (uint16_t)((*(uint32_t *)(v11 + v146 + 4) - *(uint32_t *)(v11 + v146)) >> 2) > v12 );
          v10 = *((uint32_t *)v138 + 18);
        }
        ++v130;
        v146 += 12;
      }
      while ( v130 < v10 );
      a1 = v138;
      v9 = i;
    }
    v176[v9] = 0;
    *(&v177 + v9) = 0;
    if ( *((uint32_t *)a1 + 13) != 0 )
    {
      v19 = *((uint32_t *)a1 + 19);
      v159 = *((uint32_t *)a1 + 20);
      v147 = *((uint32_t *)a1 + 21);
      v139 = opNewArray(4 * v10);
      v176[i] = v139;
      if ( *((int *)a1 + 18) > 0 )
      {
        v131 = v147 * v159 * v19;
        v160 = 2 * v131;
        v20 = 0;
        do
        {
          v21 = opNewArray(v160);
          *(uint32_t *)(v139 + 4 * v20) = v21;
          if ( v131 > 0 )
          {
            v22 = 0;
            while ( 1 )
            {
              *(uint16_t *)(v21 + v22) = *(uint16_t *)(*(uint32_t *)(*((uint32_t *)a1 + 13) + 4 * v20) + v22);
              v22 += 2;
              if ( v160 == v22 )
                break;
              v21 = *(uint32_t *)(v139 + 4 * v20);
            }
          }
          ++v20;
        }
        while ( *((uint32_t *)a1 + 18) > v20 );
      }
    }
    else
    {
      v58 = opNewArray(4 * v10);
      v59 = *((uint32_t *)a1 + 18);
      v143 = v58;
      *(&v177 + i) = v58;
      if ( v59 > 0 )
      {
        v60 = 0;
        do
        {
          v61 = (void *)opNewArray(4 * *((uint32_t *)a1 + 23) * *((uint32_t *)a1 + 22));
          *(uint32_t *)(v143 + 4 * v60++) = (uint32_t)(uintptr_t)(v61);
          memset(v61, 0, 4 * *((uint32_t *)a1 + 23) * *((uint32_t *)a1 + 22));
          v62 = *((uint32_t *)a1 + 18);
        }
        while ( v62 > v60 );
        v120 = *((uint32_t *)a1 + 23) * *((uint32_t *)a1 + 22);
        if ( v62 > 0 )
        {
          for ( j = 0; j < v62; ++j )
          {
            if ( v120 > 0 )
            {
              for ( k = 0; k != v120; ++k )
              {
                if ( *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a1 + 15) + 4 * j) + 4 * k) != 0 )
                {
                  v95 = (int *)(4 * k + *(uint32_t *)(v143 + 4 * j));
                  *v95 = opNewArray(2 * *((uint32_t *)a1 + 20) * *((uint32_t *)a1 + 14) * *((uint32_t *)a1 + 14));
                  v63 = *((uint32_t *)a1 + 20) * *((uint32_t *)a1 + 14) * *((uint32_t *)a1 + 14);
                  if ( v63 > 0 )
                  {
                    v136 = 2 * v63;
                    v64 = 0;
                    do
                    {
                      *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(v143 + 4 * j) + 4 * k) + v64) = *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)a1 + 15) + 4 * j) + 4 * k)
                                                                                                  + v64);
                      v64 += 2;
                    }
                    while ( v64 != v136 );
                  }
                }
              }
              v62 = *((uint32_t *)a1 + 18);
            }
          }
        }
      }
    }
    glitch::indexedIrradiance::CIndexedIrradianceManager::clear(a1);
  }
  v23 = *((uint32_t *)a1 + 18);
  v24 = (unsigned int *)opNewArray(12 * v23 + 4);
  *v24 = v23;
  v25 = (__m128i *)(v24 + 1);
  v161 = v23 - 1;
  v148 = v25;
  if ( v23 != 0 )
  {
    v140 = 4 * (v23 >> 2);
    if ( v140 == 0 )
      goto LABEL_41;
    if ( v23 <= 3 )
      goto LABEL_41;
    v26 = 0;
    do
    {
      ++v26;
      *v25 = g4_m128_from<__m128i>(0LL);
      v25[1] = g4_m128_from<__m128i>(0LL);
      v25[2] = g4_m128_from<__m128i>(0LL);
      v25 += 3;
    }
    while ( v23 >> 2 > v26 );
    v161 -= v140;
    v25 = &v148[3 * (v23 >> 2)];
    if ( v23 != v140 )
    {
LABEL_41:
      v27 = v161;
      do
      {
        --v27;
g4_m128_lane<int32_t>(*(v25), 0) = 0;
g4_m128_lane<int32_t>(*(v25), 1) = 0;
g4_m128_lane<int32_t>(*(v25), 2) = 0;
        v25 = (__m128i *)((char *)v25 + 12);
      }
      while ( v27 != -1 );
    }
  }
  v28 = v176[0] == 0;
  *((uint32_t *)a1 + 12) = (uint32_t)(uintptr_t)(v148);
  if ( v28 )
  {
    v71 = *((uint32_t *)a1 + 22);
    v171 = *((uint32_t *)a1 + 23);
    v72 = opNewArray(4 * *((uint32_t *)a1 + 18));
    v31 = *((uint32_t *)a1 + 18);
    *((uint32_t *)a1 + 15) = v72;
    if ( v31 > 0 )
    {
      v172 = 4 * v171 * v71;
      v73 = 0;
      while ( 1 )
      {
        *(uint32_t *)(v72 + 4 * v73) = opNewArray(v172);
        v90 = *(void **)(*((uint32_t *)a1 + 15) + 4 * v73++);
        memset(v90, 0, v172);
        v31 = *((uint32_t *)a1 + 18);
        if ( v31 <= v73 )
          break;
        v72 = *((uint32_t *)a1 + 15);
      }
      if ( v31 > 0 )
      {
        v132 = 0;
        v106 = 0;
        v40 = a1;
        do
        {
          v116 = *((uint32_t *)v40 + 23) * *((uint32_t *)v40 + 22);
          v112 = *((uint32_t *)v40 + 20) * *((uint32_t *)v40 + 14) * *((uint32_t *)v40 + 14);
          if ( v116 > 0 )
          {
            v144 = 2 * *((uint32_t *)v40 + 20) * *((uint32_t *)v40 + 14) * *((uint32_t *)v40 + 14);
            v74 = 0;
            v125 = v40;
            do
            {
              v121 = 4 * v74;
              v173 = *(uint32_t *)(*(uint32_t *)(v177 + 4 * v106) + 4 * v74);
              if ( *(uint32_t *)(*(uint32_t *)(v178 + 4 * v106) + 4 * v74) != 0 && v173 != 0 )
              {
                v75 = (int *)(*(uint32_t *)(*((uint32_t *)v125 + 15) + 4 * v106) + v121);
                v96 = *(uint32_t *)(*(uint32_t *)(v178 + 4 * v106) + 4 * v74);
                *v75 = opNewArray(v144);
                memset(*(void **)(*(uint32_t *)(*((uint32_t *)v125 + 15) + 4 * v106) + 4 * v74), 0xFFFF, v144);
                if ( v112 > 0 )
                {
                  v76 = 0;
                  v91 = v96;
                  v109 = v74;
                  do
                  {
                    while ( 1 )
                    {
                      v77 = *(uint16_t *)(v91 + v76);
                      v78 = *(uint16_t *)(v173 + v76);
                      if ( v77 != 0xFFFF && v78 != 0xFFFF )
                        break;
                      v76 += 2;
                      if ( v144 == v76 )
                        goto LABEL_171;
                    }
                    v97 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(v174 + v132)
                                                                                       + 4 * v78);
                    v99 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(v175 + v132)
                                                                                       + 4 * v77);
                    v154 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)opNew(0x84u);
                    glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(v154);
                    glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(v154, v97);
                    glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference(v154, v99);
                    v79 = (int *)(*((uint32_t *)v125 + 12) + v132);
                    v80 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v79[1];
                    if ( v80 == (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v79[2] )
                    {
                      v82 = ((int)(uintptr_t)(v80) - *v79) >> 2;
                      v83 = 1;
                      v104 = v82;
                      if ( v82 != 0 && ((v83 = 2 * v82, v82 > 2 * v82) || v83 > 0x3FFFFFFF) )
                      {
                        v101 = -4;
                        v84 = 0xFFFFFFFC;
                      }
                      else
                      {
                        v84 = 4 * v83;
                        v101 = v84;
                      }
                      v100 = (char *)v79[1];
                      v105 = sub_4EBDC0(v84);
                      v102 = v105 + 4;
                      v85 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v105 + 4 * v104);
                      if ( v85 != nullptr )
                        *v85 = v154;
                      v155 = *v79;
                      if ( v100 != (char *)*v79 )
                      {
                        v86 = (char *)*v79;
                        v87 = (uint32_t *)v105;
                        do
                        {
                          if ( v87 != nullptr )
                            *v87 = *(uint32_t *)v86;
                          v86 += 4;
                          ++v87;
                        }
                        while ( v100 != v86 );
                        v102 = v105 + 4 * ((unsigned int)(uintptr_t)(&v100[-v155 - 4]) >> 2) + 8;
                      }
                      v156 = (char *)v79[1];
                      if ( v100 != v156 )
                      {
                        v88 = v100;
                        v89 = (uint32_t *)v102;
                        do
                        {
                          if ( v89 != nullptr )
                            *v89 = *(uint32_t *)v88;
                          v88 += 4;
                          ++v89;
                        }
                        while ( v156 != v88 );
                        v102 += 4 * ((unsigned int)(v156 - (v100 + 4)) >> 2) + 4;
                      }
                      if ( *v79 != 0 )
                        gll_operator_delete_arr(*v79);
                      *v79 = v105;
                      v79[1] = v102;
                      v79[2] = v101 + v105;
                    }
                    else
                    {
                      v81 = 0;
                      if ( v80 != nullptr )
                      {
                        *v80 = v154;
                        v81 = v79[1];
                      }
                      v79[1] = v81 + 4;
                    }
                    *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v125 + 15) + 4 * v106) + v121) + v76) = ((*(uint32_t *)(*((uint32_t *)v125 + 12) + v132 + 4) - *(uint32_t *)(*((uint32_t *)v125 + 12) + v132)) >> 2) - 1;
                    v76 += 2;
                  }
                  while ( v144 != v76 );
LABEL_171:
                  v74 = v109;
                }
              }
              ++v74;
            }
            while ( v74 != v116 );
            v40 = v125;
            v31 = *((uint32_t *)v125 + 18);
          }
          ++v106;
          v132 += 12;
        }
        while ( v106 < v31 );
        a1 = v40;
      }
    }
  }
  else
  {
    v29 = *((uint32_t *)a1 + 19);
    v149 = *((uint32_t *)a1 + 21);
    v162 = *((uint32_t *)a1 + 20);
    v30 = opNewArray(4 * *((uint32_t *)a1 + 18));
    v31 = *((uint32_t *)a1 + 18);
    *((uint32_t *)a1 + 13) = v30;
    if ( v31 > 0 )
    {
      v32 = v149 * v162 * v29;
      v163 = 0;
      v33 = 2 * v32;
      while ( 1 )
      {
        v93 = v33;
        *(uint32_t *)(4 * v163 + v30) = opNewArray(v33);
        v33 = v93;
        if ( v32 > 0 )
        {
          v34 = 0;
          do
          {
            *(uint16_t *)(*(uint32_t *)(*((uint32_t *)a1 + 13) + 4 * v163) + v34) = -1;
            v34 += 2;
          }
          while ( v93 != v34 );
        }
        ++v163;
        v31 = *((uint32_t *)a1 + 18);
        if ( v31 <= v163 )
          break;
        v30 = *((uint32_t *)a1 + 13);
      }
      if ( v31 > 0 )
      {
        v152 = 0;
        v119 = 0;
        v142 = a1;
        do
        {
          v49 = *((uint32_t *)v142 + 21) * *((uint32_t *)v142 + 20) * *((uint32_t *)v142 + 19);
          if ( v49 > 0 )
          {
            v50 = v176[0];
            v124 = v176[1];
            v128 = 2 * v49;
            v51 = 0;
            do
            {
              while ( 1 )
              {
                v167 = *(uint16_t *)(*(uint32_t *)(v50 + 4 * v119) + v51);
                v114 = *(uint16_t *)(*(uint32_t *)(v124 + 4 * v119) + v51);
                if ( v114 != 0xFFFF && v167 != 0xFFFF )
                  break;
                v51 += 2;
                if ( v51 == v128 )
                  goto LABEL_111;
              }
              v134 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(v174 + v152) + 4 * v167);
              v94 = v50;
              v98 = *(const glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(*(uint32_t *)(v175 + v152) + 4 * v114);
              v168 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)opNew(0x84u);
              glitch::indexedIrradiance::CIndexedIrradiancePoint::Construct(v168);
              glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(v168, v134);
              glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference(v168, v98);
              v50 = v94;
              v103 = (int *)(*((uint32_t *)v142 + 12) + v152);
              v52 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v103[1];
              v135 = v52;
              if ( v52 == (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v103[2] )
              {
                v54 = (int)(uintptr_t)(v52) - *v103;
                v55 = 1;
                v56 = v54 >> 2;
                v111 = v56;
                if ( v56 != 0 && ((v55 = 2 * v56, v56 > 2 * v56) || v55 > 0x3FFFFFFF) )
                {
                  v107 = -4;
                  v57 = 0xFFFFFFFC;
                }
                else
                {
                  v57 = 4 * v55;
                  v107 = v57;
                }
                v108 = sub_4EBDC0(v57);
                v115 = v108 + 4;
                v50 = v94;
                v65 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)(v108 + 4 * v111);
                if ( v65 != nullptr )
                  *v65 = v168;
                v169 = *v103;
                if ( v135 != (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)*v103 )
                {
                  v66 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)*v103;
                  v67 = (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v108;
                  do
                  {
                    if ( v67 != nullptr )
                      *v67 = *v66;
                    ++v66;
                    ++v67;
                  }
                  while ( v135 != v66 );
                  v115 = v108 + 4 * (((unsigned int)(uintptr_t)(v135) - v169 - 4) >> 2) + 8;
                }
                v170 = (char *)v103[1];
                if ( v135 != (glitch::indexedIrradiance::CIndexedIrradiancePoint::Self **)v170 )
                {
                  v68 = v135;
                  v69 = (uint32_t *)v115;
                  do
                  {
                    if ( v69 != nullptr )
                      *v69 = (uint32_t)(uintptr_t)(*v68);
                    ++v68;
                    ++v69;
                  }
                  while ( v170 != (char *)v68 );
                  v115 += 4 * ((unsigned int)(v170 - (char *)(v135 + 1)) >> 2) + 4;
                }
                v70 = v103;
                if ( *v103 != 0 )
                {
                  gll_operator_delete_arr(*v103);
                  v50 = v94;
                  v70 = v103;
                }
                *v70 = v108;
                v70[1] = v115;
                v70[2] = v107 + v108;
              }
              else
              {
                v53 = 0;
                if ( v52 != nullptr )
                {
                  *v52 = v168;
                  v53 = v103[1];
                }
                v103[1] = v53 + 4;
              }
              *(uint16_t *)(*(uint32_t *)(*((uint32_t *)v142 + 13) + 4 * v119) + v51) = ((*(uint32_t *)(*((uint32_t *)v142 + 12)
                                                                                             + v152
                                                                                             + 4)
                                                                                 - *(uint32_t *)(*((uint32_t *)v142 + 12)
                                                                                             + v152)) >> 2)
                                                                               - 1;
              v51 += 2;
            }
            while ( v51 != v128 );
LABEL_111:
            v31 = *((uint32_t *)v142 + 18);
          }
          ++v119;
          v152 += 12;
        }
        while ( v119 < v31 );
        a1 = v142;
      }
    }
  }
  v133 = 0;
  v118 = a1;
  if ( v31 <= 0 )
    goto LABEL_96;
LABEL_74:
  v141 = 0;
  v127 = 0;
  v123 = 0;
  do
  {
    v150 = (void ***)(*(&v174 + v133) + v127);
    v41 = *v150;
    v166 = v150[1];
    if ( *v150 != v166 )
    {
      do
      {
        v42 = *v41;
        if ( *v41 != nullptr )
        {
          glitch::indexedIrradiance::CIndexedIrradiancePoint::Destroy();
          opDelete(v42);
        }
        ++v41;
      }
      while ( v166 != v41 );
      v41 = *v150;
    }
    v150[1] = v41;
    v43 = v176[v133];
    if ( v43 != 0 )
    {
      v44 = *(void **)(v43 + v141);
      if ( v44 != nullptr )
        opDeleteArray(v44);
    }
    v45 = (char *)*(&v177 + v133);
    v151 = v45;
    if ( v45 != nullptr )
    {
      v46 = *((uint32_t *)v118 + 23) * *((uint32_t *)v118 + 22);
      if ( v46 <= 0 )
      {
        v47 = *(void ***)&v45[v141];
      }
      else
      {
        v47 = *(void ***)&v45[v141];
        for ( m = 0; m != v46; ++m )
        {
          if ( v47[m] != nullptr )
          {
            opDeleteArray(v47[m]);
            v47 = *(void ***)&v151[v141];
          }
        }
      }
      if ( v47 != nullptr )
        opDeleteArray(v47);
    }
    ++v123;
    v127 += 12;
    v141 += 4;
  }
  while ( *((uint32_t *)v118 + 18) > v123 );
  while ( 1 )
  {
    if ( v151 != nullptr )
      opDeleteArray(v151);
    if ( ++v133 == 2 )
      break;
    if ( *((int *)v118 + 18) > 0 )
      goto LABEL_74;
LABEL_96:
    v151 = (char *)*(&v177 + v133);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::Construct  (binary VA: 0xda7f20)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::CIndexedIrradianceManager
// ----------------------------------------------------------------------------
glitch::indexedIrradiance::CIndexedIrradianceManager::Self * glitch::indexedIrradiance::CIndexedIrradianceManager::Construct(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *self, glitch::IDevice::Self *a2)
{
  glitch::irradiance::IIrradianceManager::Construct(self, a2);
  *((uint32_t *)self + 12) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048350);
  *((uint32_t *)self + 6) = 2139095039;
  *((uint32_t *)self + 7) = 2139095039;
  *((uint32_t *)self + 8) = 2139095039;
  *((uint32_t *)self + 9) = -8388609;
  *((uint32_t *)self + 10) = -8388609;
  *((uint32_t *)self + 11) = -8388609;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 1120403456;
  return (glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)(glitch::indexedIrradiance::CIndexedIrradiancePoint::clear((glitch::indexedIrradiance::CIndexedIrradiancePoint::Self *)&glitch::indexedIrradiance::CIndexedIrradianceManager::BlackProbe));
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp  (binary VA: 0xde03c0)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *self, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;

  v5 = a3;
  v6 = 0;
  v7 = a4;
  if ( a3 < 0 )
    v5 = 0;
  if ( a4 < 0 )
    v7 = 0;
  if ( a5 >= 0 )
    v6 = a5;
  v12 = v6;
  v8 = *((uint32_t *)self + 19);
  if ( v8 <= v5 )
    v5 = v8 - 1;
  v9 = *((uint32_t *)self + 20);
  if ( v7 >= v9 )
    v7 = v9 - 1;
  v10 = v12;
  if ( *((uint32_t *)self + 21) <= v12 )
    v10 = *((uint32_t *)self + 21) - 1;
  return *(uint16_t *)(*(uint32_t *)(*((uint32_t *)self + 13) + 4 * a2) + 2 * ((v7 + v9 * v10) * v8 + v5));
}

// ----------------------------------------------------------------------------
// Function: glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp  (binary VA: 0xde0450)
// Original: glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp
// ----------------------------------------------------------------------------
int glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(glitch::indexedIrradiance::CIndexedIrradianceManager::Self *self, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  int v15;
  int v16;

  v7 = 0;
  v8 = a3;
  v9 = a4;
  if ( a3 < 0 )
    v8 = 0;
  v10 = *((uint32_t *)self + 22);
  if ( a4 < 0 )
    v9 = 0;
  if ( v10 <= v8 )
    v8 = v10 - 1;
  if ( *((uint32_t *)self + 23) <= v9 )
    v9 = *((uint32_t *)self + 23) - 1;
  v11 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 15) + 4 * a2) + 4 * (v10 * v9 + v8));
  result = -1;
  if ( v11 != 0 )
  {
    v13 = a5;
    v14 = a6;
    if ( a5 < 0 )
      v13 = 0;
    if ( a6 < 0 )
      v14 = 0;
    v15 = *((uint32_t *)self + 14);
    if ( a7 >= 0 )
      v7 = a7;
    v16 = *((uint32_t *)self + 20);
    if ( v15 <= v13 )
      v13 = v15 - 1;
    if ( v16 <= v14 )
      v14 = v16 - 1;
    if ( v15 <= v7 )
      v7 = v15 - 1;
    return *(uint16_t *)(v11 + 2 * (v13 + v15 * v14 + v16 * v15 * v7));
  }
  return result;
}


