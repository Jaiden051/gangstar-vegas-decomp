#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMeshWel.h"

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::testWindingConsistency  (binary VA: 0x1ad4d30)
// Original: hkpMeshWeldingUtility::testWindingConsistency
// ----------------------------------------------------------------------------
hkpMeshWeldingUtility::Self * hkpMeshWeldingUtility::testWindingConsistency(hkpMeshWeldingUtility::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkpTriangleShape::Self *a5, const hkVector4f::Self *a6)
{
  float v6; // xmm3_4
  hkpMeshWeldingUtility::Self *result;
  float v8; // xmm2_4
  __m128 v9;
  __m128 v10;
  float v11; // xmm6_4
  __m128 v12;
  float v13; // xmm7_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  __m128 v22;
  __m128 v23;
  float v24; // xmm6_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;

  v6 = *((float *)a2 + 1);
  result = self;
  v38 = *((float *)a3 + 2);
  v8 = *((float *)a2 + 2);
  v33 = *((float *)a5 + 9) - v6;
  v36 = *((float *)a5 + 8) - *(float *)a2;
  v39 = *((float *)a3 + 1);
  v32 = *((float *)a5 + 10) - v8;
g4_m128_raw(v9) = LODWORD(v36);
g4_m128_lane<float>(v9, 0) = (float)((float)(v36 * *(float *)a3) + (float)(v33 * v39)) + (float)(v38 * v32);
  v10 = _mm_cmplt_ss(g4_m128_from<__m128>(0xFF7FFFEE), v9);
  LODWORD(v11) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v10, g4_m128_from<__m128>(0xFF7FFFEE)), 0))
               |g4_m128_lane<int32_t>(v9, 0) &g4_m128_lane<int32_t>(v10, 0);
  v12 = _mm_cmplt_ss(v9, *(__m128 *)&dword_1C7BD7C);
  LODWORD(v34) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v12, g4_m128_u32(0x7F7FFFEEu)), 0))
               |g4_m128_lane<int32_t>(v9, 0) &g4_m128_lane<int32_t>(v12, 0);
  v31 = *((float *)a5 + 12) - *(float *)a2;
  v30 = *((float *)a5 + 13) - v6;
  v13 = *((float *)a5 + 17) - v6;
  v29 = *((float *)a5 + 14) - v8;
  v14 = *((float *)a5 + 18) - v8;
g4_m128_lane<float>(v12, 0) = fminf((float)((float)(v31 * *(float *)a3) + (float)(v30 * v39)) + (float)(v29 * v38), v34);
  v35 = *((float *)a5 + 16) - *(float *)a2;
  v15 = (float)((float)(v35 * *(float *)a3) + (float)(v39 * v13)) + (float)(v38 * v14);
  v16 = fminf(v15,g4_m128_lane<float>(v12, 0));
  v17 = fmaxf(v15, fmaxf((float)((float)(v31 * *(float *)a3) + (float)(v30 * v39)) + (float)(v29 * v38), v11));
  if ( v17 <= 0.01f && v16 >= 0.01f )
  {
    v18 = *(float *)a4;
    v21 = *((float *)a4 + 1);
    v20 = *((float *)a4 + 2);
  }
  else
  {
    if ( v17 > 0.2f && v16 < 0.2f )
      goto LABEL_19;
    v18 = *(float *)a4;
    if ( fabs(v17) > fabs(v16) )
      v19 = 1.0;
    else
      v19 = 0.0;
    if ( (float)((float)((float)((float)(*(float *)a6 * v18) + (float)(*((float *)a4 + 1) * *((float *)a6 + 1)))
                       + (float)(*((float *)a4 + 2) * *((float *)a6 + 2)))
               * v19) < 0.0 )
      goto LABEL_16;
    v20 = *((float *)a4 + 2);
    v21 = *((float *)a4 + 1);
  }
g4_m128_raw(v22) = LODWORD(v36);
g4_m128_lane<float>(v22, 0) = (float)((float)(v36 * v18) + (float)(v33 * v21)) + (float)(v32 * v20);
  v23 = _mm_cmplt_ss(g4_m128_from<__m128>(0xFF7FFFEE), v22);
  LODWORD(v37) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v23, g4_m128_from<__m128>(0xFF7FFFEE)), 0))
               | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(v22, v23)));
  v24 =g4_m128_lane<float>(v22, 0);
g4_m128_lane<float>(v22, 0) = (float)((float)(v31 * v18) + (float)(v30 * v21)) + (float)(v29 * v20);
  v25 = (float)((float)(v18 * v35) + (float)(v21 * v13)) + (float)(v14 * v20);
  v26 = fminf(v25, fminf(g4_m128_lane<float>(v22, 0), fminf(v24, 3.40282e38f)));
  v27 = fmaxf(v25, fmaxf(g4_m128_lane<float>(v22, 0), v37));
  if ( (v27 > 0.01f || v26 < 0.01f) && (v27 <= 0.2f || v26 >= 0.2f) )
  {
    v28 = fabs(v27) <= fabs(v26) ? 0.0 : 1.0;
    if ( (float)((float)((float)((float)(*(float *)a3 * *(float *)a6) + (float)(v39 * *((float *)a6 + 1)))
                       + (float)(v38 * *((float *)a6 + 2)))
               * v28) > 0.0 )
    {
LABEL_16:
      *(uint32_t *)self = 1;
      return result;
    }
  }
LABEL_19:
  *(uint32_t *)self = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::calcAngleForEdge  (binary VA: 0x1ad50f0)
// Original: hkpMeshWeldingUtility::calcAngleForEdge
// ----------------------------------------------------------------------------
long double hkpMeshWeldingUtility::calcAngleForEdge(hkpMeshWeldingUtility::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  return atan2f(
           (float)((float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a2 + 1) * *((float *)a3 + 1)))
         + (float)(*((float *)a3 + 2) * *((float *)a2 + 2)),
           (float)((float)(*(float *)a3 * *(float *)self) + (float)(*((float *)a3 + 1) * *((float *)self + 1)))
         + (float)(*((float *)self + 2) * *((float *)a3 + 2)));
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal  (binary VA: 0x1ad5170)
// Original: hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(hkpMeshWeldingUtility::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4)
{
  const hkVector4f::Self *result;
  __m128i v5;
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm6_4
  __m128i v11;
  float v12; // xmm1_4
  float v13; // xmm0_4
  __m128i v14;
  float v15; // xmm5_4
  int v16;
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm6_4
  float v20; // xmm3_4

  result = a4;
g4_m128_raw(v5) = *((unsigned int *)a2 + 1);
  v6 = *(float *)a3 - *(float *)a2;
  *(float *)g4_m128_ptr<int32_t>(v5) = *(float *)g4_m128_ptr<int32_t>(v5) - *((float *)self + 1);
  v7 = *((float *)a3 + 1) - *((float *)a2 + 1);
  v8 = *((float *)a2 + 2) - *((float *)self + 2);
  v9 = *((float *)a3 + 2) - *((float *)a2 + 2);
  v10 = *(float *)a2 - *(float *)self;
  v11 = v5;
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)(*(float *)g4_m128_ptr<int32_t>(v5) * v9) - (float)(v8 * v7);
  v12 = (float)(v8 * v6) - (float)(v9 * v10);
  v13 = (float)(v7 * v10) - (float)(v6 * *(float *)g4_m128_ptr<int32_t>(v5));
  v14 = v11;
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)g4_m128_ptr<int32_t>(v11)) + (float)(v12 * v12))
                          + (float)(v13 * v13);
  if ( *(float *)g4_m128_ptr<int32_t>(v14) <= 0.0 )
  {
    v20 = 0.0;
    v19 = 0.0;
  }
  else
  {
    v15 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v14);
    v16 = ((_mm_cvtsi128_si32(v14) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v14) >> 1));
    v17 = (float)(*(float *)&v16 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * *(float *)&v16)
                * (float)(*(float *)&v16 * *(float *)&v16));
    v18 = (float)((float)((float)(*(float *)&v16 * 1.5)
                        - (float)((float)(v15 * *(float *)&v16) * (float)(*(float *)&v16 * *(float *)&v16)))
                * 1.5)
        - (float)((float)(v15 * v17) * (float)(v17 * v17));
    v19 = (float)(1.5 * v18) - (float)((float)(v15 * v18) * (float)(v18 * v18));
    v20 = 0.0 * v19;
  }
  *((float *)a4 + 3) = v20;
  *(float *)a4 = *(float *)g4_m128_ptr<int32_t>(v11) * v19;
  *((float *)a4 + 1) = v12 * v19;
  *((float *)a4 + 2) = v19 * v13;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::modifyCombinedEdgesBitcode  (binary VA: 0x1ad5850)
// Original: hkpMeshWeldingUtility::modifyCombinedEdgesBitcode
// ----------------------------------------------------------------------------
int hkpMeshWeldingUtility::modifyCombinedEdgesBitcode(hkpMeshWeldingUtility::Self *self, uint16_t a2, int a3)
{
  int v3;

  v3 = ~(31 << (5 * a2));
  LOWORD(v3) = (uint16_t)(uintptr_t)self & v3;
  return (a3 << (5 * a2)) | v3;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::calcSingleEdgeBitcode  (binary VA: 0x1ad5880)
// Original: hkpMeshWeldingUtility::calcSingleEdgeBitcode
// ----------------------------------------------------------------------------
int hkpMeshWeldingUtility::calcSingleEdgeBitcode(hkpMeshWeldingUtility::Self *self, uint16_t a2)
{
  return ((int)(uint16_t)(uintptr_t)self >> (5 * a2)) & 0x1F;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::createSingularVertexArray  (binary VA: 0x1ad58a0)
// Original: hkpMeshWeldingUtility::createSingularVertexArray
// ----------------------------------------------------------------------------
int hkpMeshWeldingUtility::createSingularVertexArray(hkpMeshWeldingUtility::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float *a4, hkVector4f::Self *a5)
{
  float *v5;
  float *v6;
  float *v7;
  float v8;
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  int v13;
  float v14; // xmm6_4
  float v15; // xmm4_4
  float v16; // xmm0_4
  float v17; // xmm5_4
  int v18;
  float *v19;
  float v20; // xmm6_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  float *v24;
  int v25;
  int v26;
  int v27;
  float v28;

  v5 = (float *)((char *)self + 16 * ((int)(uintptr_t)(a3) % 3));
  *a4 = *v5;
  a4[1] = v5[1];
  a4[2] = v5[2];
  a4[3] = v5[3];
  v6 = (float *)((char *)self + 16 * (((int)(uintptr_t)(a3) + 1) % 3));
  a4[4] = *v6;
  a4[5] = v6[1];
  a4[6] = v6[2];
  a4[7] = v6[3];
  v7 = (float *)((char *)self + 16 * (((int)(uintptr_t)(a3) + 2) % 3));
  a4[8] = *v7;
  a4[9] = v7[1];
  a4[10] = v7[2];
  a4[11] = v7[3];
  v8 = a4[1];
  v9 = *a4;
  v10 = *(float *)a2;
  v11 = *((float *)a2 + 1);
  v28 = *((float *)a2 + 2);
  v12 = a4[2];
  if ( (float)((float)((float)((float)(*a4 - v10) * (float)(*a4 - v10)) + (float)((float)(v8 - v11) * (float)(v8 - v11)))
             + (float)((float)(v12 - v28) * (float)(v12 - v28))) == 0.0 )
  {
    v27 = 0;
  }
  else
  {
    if ( (float)((float)((float)((float)(a4[4] - v10) * (float)(a4[4] - v10))
                       + (float)((float)(a4[5] - v11) * (float)(a4[5] - v11)))
               + (float)((float)(a4[6] - v28) * (float)(a4[6] - v28))) != 0.0 )
    {
      a4[12] = *(float *)a2;
      a4[13] = *((float *)a2 + 1);
      a4[14] = *((float *)a2 + 2);
      a4[15] = *((float *)a2 + 3);
      v13 = 4;
      goto LABEL_4;
    }
    v27 = 4;
  }
  *(uint32_t *)((char *)a5 + v27) = 0;
  v13 = 3;
  v9 = *a4;
  v8 = a4[1];
  v12 = a4[2];
LABEL_4:
  v14 = *((float *)a2 + 4);
  v15 = *((float *)a2 + 6);
  v16 = v9 - v14;
  v17 = *((float *)a2 + 5);
  if ( (float)((float)((float)(v16 * v16) + (float)((float)(v8 - v17) * (float)(v8 - v17)))
             + (float)((float)(v12 - v15) * (float)(v12 - v15))) == 0.0 )
  {
    v25 = 0;
  }
  else
  {
    if ( (float)((float)((float)((float)(a4[4] - v14) * (float)(a4[4] - v14))
                       + (float)((float)(a4[5] - v17) * (float)(a4[5] - v17)))
               + (float)((float)(a4[6] - v15) * (float)(a4[6] - v15))) != 0.0 )
    {
      v18 = v13 + 1;
      v19 = &a4[4 * v13];
      *v19 = *((float *)a2 + 4);
      v19[1] = *((float *)a2 + 5);
      v19[2] = *((float *)a2 + 6);
      v19[3] = *((float *)a2 + 7);
      goto LABEL_7;
    }
    v25 = 4;
  }
  *(uint32_t *)((char *)a5 + v25) = 1;
  v18 = v13;
LABEL_7:
  v20 = *((float *)a2 + 8);
  v21 = *((float *)a2 + 9);
  v22 = *((float *)a2 + 10);
  if ( (float)((float)((float)((float)(*a4 - v20) * (float)(*a4 - v20))
                     + (float)((float)(a4[1] - v21) * (float)(a4[1] - v21)))
             + (float)((float)(a4[2] - v22) * (float)(a4[2] - v22))) == 0.0 )
  {
    v26 = 0;
  }
  else
  {
    if ( (float)((float)((float)((float)(a4[4] - v20) * (float)(a4[4] - v20))
                       + (float)((float)(a4[5] - v21) * (float)(a4[5] - v21)))
               + (float)((float)(a4[6] - v22) * (float)(a4[6] - v22))) != 0.0 )
    {
      v24 = &a4[4 * v18];
      *v24 = *((float *)a2 + 8);
      v24[1] = *((float *)a2 + 9);
      v24[2] = *((float *)a2 + 10);
      v24[3] = *((float *)a2 + 11);
      return v18 + 1;
    }
    v26 = 4;
  }
  *(uint32_t *)((char *)a5 + v26) = 2;
  return v18;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::calcAngleFromVertices  (binary VA: 0x1ad5bf0)
// Original: hkpMeshWeldingUtility::calcAngleFromVertices
// ----------------------------------------------------------------------------
long double hkpMeshWeldingUtility::calcAngleFromVertices(hkpMeshWeldingUtility::Self *self, const hkVector4f::Self *a2, float *a3)
{
  __m128i v4;
  float v5; // xmm5_4
  float v6; // xmm2_4
  __m128i v7;
  float v8; // xmm1_4
  float v9; // xmm4_4
  int v10;
  float v11; // xmm3_4
  float v12; // xmm0_4
  long double result; // fst7
  typedef float _g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16[4];
  typedef float _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v17)) > _g4_s3 ? (32u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(
    self,
    (hkpMeshWeldingUtility::Self *)((char *)self + 16),
    (hkpMeshWeldingUtility::Self *)((char *)self + 32),
    (const hkVector4f::Self *)v16);
  hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(
    (hkpMeshWeldingUtility::Self *)((char *)self + 16),
    self,
    (hkpMeshWeldingUtility::Self *)((char *)self + 48),
    (const hkVector4f::Self *)v17);
g4_m128_raw(v4) = *((unsigned int *)self + 4);
  *(float *)g4_m128_ptr<int32_t>(v4) = *(float *)g4_m128_ptr<int32_t>(v4) - *(float *)self;
  v5 = *((float *)self + 5) - *((float *)self + 1);
  v6 = *((float *)self + 6) - *((float *)self + 2);
  v7 = v4;
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v4) * *(float *)g4_m128_ptr<int32_t>(v4)) + (float)(v5 * v5))
                         + (float)(v6 * v6);
  v8 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v7) > 0.0 )
  {
    v9 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v7);
    v10 = ((_mm_cvtsi128_si32(v7) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v7) >> 1));
    v11 = (float)(*(float *)&v10 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * *(float *)&v10)
                * (float)(*(float *)&v10 * *(float *)&v10));
    v12 = (float)(v11 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v11) * (float)(v11 * v11));
    v8 = (float)(1.5 * v12) - (float)((float)(v9 * v12) * (float)(v12 * v12));
  }
  v14 = (float)((float)(v16[0] * v17[0]) + (float)(v16[1] * v17[1])) + (float)(v16[2] * v17[2]);
  v15 = (float)((float)((float)((float)(v16[2] * (float)(v5 * v8)) - (float)(v16[1] * (float)(v8 * v6))) * v17[0])
              + (float)((float)((float)((float)(v8 * v6) * v16[0])
                              - (float)(v16[2] * (float)(*(float *)g4_m128_ptr<int32_t>(v4) * v8)))
                      * v17[1]))
      + (float)((float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v4) * v8) * v16[1]) - (float)((float)(v5 * v8) * v16[0]))
              * v17[2]);
  result = atan2f(v15, v14);
  *(float *)a2 = v15;
  *a3 = v14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::calcEdgeAngleBitcode  (binary VA: 0x1ad5dd0)
// Original: hkpMeshWeldingUtility::calcEdgeAngleBitcode
// ----------------------------------------------------------------------------
int hkpMeshWeldingUtility::calcEdgeAngleBitcode(hkpMeshWeldingUtility::Self *self)
{
  int result;
  float v2; // xmm0_4
  typedef float _g4_t_v3;
  typedef uint8_t _g4_t_v4[16];
  typedef float _g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v5)) > _g4_s2 ? (32u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 32u);

  v3 = hkpMeshWeldingUtility::calcAngleFromVertices(self, (const hkVector4f::Self *)v4, v5);
  result = 0;
  while ( 1 )
  {
    v2 = (float)((float)result * 0.20943952f) - 3.1415927f;
    if ( v2 >= v3 )
      break;
    if ( ++result == 31 )
      return result;
  }
  if ( v3 > 0.0 && v3 != v2 )
    --result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::clipLineAgainstTriangle  (binary VA: 0x1ad5e60)
// Original: hkpMeshWeldingUtility::clipLineAgainstTriangle
// ----------------------------------------------------------------------------
hkpMeshWeldingUtility::Self * hkpMeshWeldingUtility::clipLineAgainstTriangle(hkpMeshWeldingUtility::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, float a6, float *a7, float *a8)
{
  int v8;
  float v9; // xmm7_4
  float *v10;
  float v11; // xmm0_4
  __m128i v12;
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  __m128i v16;
  float v17; // xmm1_4
  float v18; // xmm0_4
  __m128i v19;
  float v20; // xmm4_4
  float v21; // xmm6_4
  int v22;
  int v23;
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm5_4
  __m128i v29;
  float v30; // xmm2_4
  __m128i v32;
  int v33;
  int v34; // xmm0_4
  float v35; // xmm1_4
  __m128i v36;
  int v37;
  int v38;
  float v39; // xmm1_4
  float v40; // xmm6_4
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  char v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  const hkVector4f::Self *v54;
  float v55;

  v8 = -2;
  v47 = 0;
  v54 = a4;
  v44 = *(float *)a2;
  v45 = *((float *)a2 + 1);
  v46 = *((float *)a2 + 2);
  v41 = *(float *)a3;
  v42 = *((float *)a3 + 1);
  v43 = *((float *)a3 + 2);
  v55 = -a6;
  v48 = v43;
  v50 = v42;
  v49 = *(float *)a3;
  v51 = v46;
  v52 = v45;
  v53 = *(float *)a2;
  do
  {
    if ( v8 == -2 )
    {
      v25 = *(float *)a5;
      v26 = *((float *)a5 + 1);
      v27 = *((float *)a5 + 2);
      goto LABEL_21;
    }
    if ( v8 == -1 )
    {
      v25 = -*(float *)a5;
      v26 = -*((float *)a5 + 1);
      v27 = -*((float *)a5 + 2);
LABEL_21:
      v28 = v55
          - (float)((float)((float)(*(float *)a4 * v25) + (float)(*((float *)a4 + 1) * v26))
                  + (float)(*((float *)a4 + 2) * v27));
      goto LABEL_7;
    }
    v9 = *((float *)a5 + 2);
    v10 = (float *)((char *)a4 + 16 * ((v8 + 1) % 3));
    v11 = *v10 - *((float *)v54 - 8);
g4_m128_raw(v12) = *((unsigned int *)v10 + 1);
    v13 = *((float *)v54 - 6);
    *(float *)g4_m128_ptr<int32_t>(v12) = *(float *)g4_m128_ptr<int32_t>(v12) - *((float *)v54 - 7);
    v14 = v10[2] - v13;
    v15 = *((float *)a5 + 1);
    v16 = v12;
    *(float *)g4_m128_ptr<int32_t>(v16) = (float)(*(float *)g4_m128_ptr<int32_t>(v12) * v9) - (float)(v14 * v15);
    v17 = (float)(v14 * *(float *)a5) - (float)(v9 * v11);
    v18 = (float)(v11 * v15) - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)a5);
    v19 = v16;
    *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)) + (float)(v17 * v17))
                            + (float)(v18 * v18);
    v20 = 0.0;
    if ( *(float *)g4_m128_ptr<int32_t>(v19) > 0.0 )
    {
      v21 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v19);
      v22 = _mm_cvtsi128_si32(v19) >> 1;
      v23 = (_mm_cvtsi128_si32(v19) + 2139095040) >> 31;
      v24 = (float)(1.5 * COERCE_FLOAT(v23 & (1597463174 - v22)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * COERCE_FLOAT(v23 & (1597463174 - v22)))
                  * (float)(COERCE_FLOAT(v23 & (1597463174 - v22)) * COERCE_FLOAT(v23 & (1597463174 - v22))));
      v20 = (float)(1.5 * (float)((float)(1.5 * v24) - (float)((float)(v21 * v24) * (float)(v24 * v24))))
          - (float)((float)(v21 * (float)((float)(1.5 * v24) - (float)((float)(v21 * v24) * (float)(v24 * v24))))
                  * (float)((float)((float)(1.5 * v24) - (float)((float)(v21 * v24) * (float)(v24 * v24)))
                          * (float)((float)(1.5 * v24) - (float)((float)(v21 * v24) * (float)(v24 * v24)))));
    }
    v25 = *(float *)g4_m128_ptr<int32_t>(v16) * v20;
    v26 = v17 * v20;
    v27 = v18 * v20;
    v28 = v55
        - (float)((float)((float)(*((float *)v54 - 8) * v25) + (float)(*((float *)v54 - 7) * v26)) + (float)(v13 * v27));
LABEL_7:
g4_m128_raw(v29) = LODWORD(v53);
    *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)((float)(v53 * v25) + (float)(v52 * v26)) + (float)(v51 * v27)) + v28;
    v30 = (float)((float)((float)(v25 * v49) + (float)(v26 * v50)) + (float)(v27 * v48)) + v28;
    if ( *(float *)g4_m128_ptr<int32_t>(v29) >= 0.0 && v30 >= 0.0 )
    {
      *(uint8_t *)self = 0;
      return self;
    }
    if ( (float)(*(float *)g4_m128_ptr<int32_t>(v29) * v30) < 0.0 )
    {
      v32 = v29;
      *(float *)g4_m128_ptr<int32_t>(v32) = *(float *)g4_m128_ptr<int32_t>(v29) - v30;
      v33 = _mm_cvtsi128_si32(v32);
      v34 = (2130706432 - v33) & ((v33 ^ (v33 + 2139095040)) >> 31);
      v35 = (float)((float)(2.0
                          - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) - v30)
                                  * (float)((float)(2.0
                                                  - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) - v30)
                                                          * (float)((float)(2.0
                                                                          - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) - v30)
                                                                                  * *(float *)&v34))
                                                                  * *(float *)&v34)))
                                          * (float)((float)(2.0
                                                          - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) - v30)
                                                                  * *(float *)&v34))
                                                  * *(float *)&v34))))
                  * (float)((float)(2.0
                                  - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) - v30)
                                          * (float)((float)(2.0
                                                          - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) - v30)
                                                                  * *(float *)&v34))
                                                  * *(float *)&v34)))
                          * (float)((float)(2.0 - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) - v30) * *(float *)&v34))
                                  * *(float *)&v34)))
          * *(float *)g4_m128_ptr<int32_t>(v29);
      if ( *(float *)g4_m128_ptr<int32_t>(v29) <= 0.0 )
      {
        v48 = (float)((float)(v48 - v51) * v35) + v51;
        v50 = (float)((float)(v50 - v52) * v35) + v52;
        v49 = (float)((float)(v49 - v53) * v35) + v53;
      }
      else
      {
        v51 = (float)((float)(v48 - v51) * v35) + v51;
        v52 = (float)((float)(v50 - v52) * v35) + v52;
        v53 = (float)((float)(v49 - v53) * v35) + v53;
      }
      v47 = 1;
    }
    ++v8;
    v54 = (const hkVector4f::Self *)((char *)v54 + 16);
  }
  while ( v8 != 3 );
  if ( v47 != 0 )
  {
g4_m128_raw(v36) = LODWORD(v41);
    *(float *)g4_m128_ptr<int32_t>(v36) = (float)((float)((float)(v41 - v44) * (float)(v41 - v44))
                                    + (float)((float)(v42 - v45) * (float)(v42 - v45)))
                            + (float)((float)(v43 - v46) * (float)(v43 - v46));
    v37 = _mm_cvtsi128_si32(v36);
    v38 = (2130706432 - v37) & ((v37 ^ (v37 + 2139095040)) >> 31);
    v39 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v36)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v36) * *(float *)&v38)) * *(float *)&v38)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v36) * *(float *)&v38)) * *(float *)&v38);
    v40 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v36) * v39)) * v39;
    *a7 = (float)((float)((float)((float)(v53 - v44) * (float)(v41 - v44))
                        + (float)((float)(v52 - v45) * (float)(v42 - v45)))
                + (float)((float)(v51 - v46) * (float)(v43 - v46)))
        * v40;
    *a8 = (float)((float)((float)((float)(v49 - v44) * (float)(v41 - v44))
                        + (float)((float)(v50 - v45) * (float)(v42 - v45)))
                + (float)((float)(v48 - v46) * (float)(v43 - v46)))
        * v40;
  }
  else
  {
    *a7 = 0.0;
    *a8 = 1.0;
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::computeTriangleWeldingInfo  (binary VA: 0x1ad6560)
// Original: hkpMeshWeldingUtility::computeTriangleWeldingInfo
// ----------------------------------------------------------------------------
int hkpMeshWeldingUtility::computeTriangleWeldingInfo(float *a1, float *a2, int a3, char a4, float a5)
{
  float *v5;
  int v7; // xmm0_4
  float *v8;
  int v9;
  float *v10;
  __m128i v11;
  float v12; // xmm1_4
  float v13; // xmm0_4
  __m128i v14;
  float v15; // xmm5_4
  int v16;
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  __m128i v23;
  float v24; // xmm0_4
  float v25; // xmm2_4
  __m128i v26;
  float v27; // xmm6_4
  int v28;
  float v29; // xmm4_4
  float v30; // xmm1_4
  float v31; // xmm6_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  int *v34;
  int v35;
  float *v36;
  float *v37;
  int v38;
  int v39;
  float *v40;
  int v41;
  hkpMeshWeldingUtility::Self *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  float v47; // xmm1_4
  int v48;
  float v49; // xmm0_4
  int v50; // xmm0_4
  float v51; // xmm1_4
  float v52;
  float *v53;
  int v54;
  float *v55;
  float v56; // xmm1_4
  char v57;
  int v58;
  uint16_t v59;
  int v60;
  int v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef float *_g4_t_v68;
  typedef int *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef hkVector4f::Self *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef float _g4_t_v73;
  typedef hkVector4f::Self *_g4_t_v74;
  typedef hkVector4f::Self *_g4_t_v75;
  typedef uint16_t _g4_t_v76;
  typedef hkpMeshWeldingUtility::Self *_g4_t_v77;
  typedef hkpMeshWeldingUtility::Self *_g4_t_v78;
  typedef hkVector4f::Self *_g4_t_v79;
  typedef hkVector4f::Self *_g4_t_v80;
  typedef char _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef uint8_t _g4_t_v84[7];
  typedef bool _g4_t_v85;
  typedef float _g4_t_v86[4];
  typedef float _g4_t_v87[4];
  typedef uint32_t _g4_t_v88[4];
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef float _g4_t_v104[4];
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float **_g4_t_v109;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v62)) > _g4_s0 ? (0u + sizeof(_g4_t_v62)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v63)) > _g4_s1 ? (40u + sizeof(_g4_t_v63)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v64)) > _g4_s2 ? (44u + sizeof(_g4_t_v64)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v65)) > _g4_s3 ? (48u + sizeof(_g4_t_v65)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v66)) > _g4_s4 ? (52u + sizeof(_g4_t_v66)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v67)) > _g4_s5 ? (56u + sizeof(_g4_t_v67)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v68)) > _g4_s6 ? (60u + sizeof(_g4_t_v68)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v69)) > _g4_s7 ? (60u + sizeof(_g4_t_v69)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v70)) > _g4_s8 ? (64u + sizeof(_g4_t_v70)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v71)) > _g4_s9 ? (76u + sizeof(_g4_t_v71)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v72)) > _g4_s10 ? (84u + sizeof(_g4_t_v72)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v73)) > _g4_s11 ? (88u + sizeof(_g4_t_v73)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v74)) > _g4_s12 ? (92u + sizeof(_g4_t_v74)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v75)) > _g4_s13 ? (92u + sizeof(_g4_t_v75)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v76)) > _g4_s14 ? (92u + sizeof(_g4_t_v76)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v77)) > _g4_s15 ? (96u + sizeof(_g4_t_v77)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v78)) > _g4_s16 ? (96u + sizeof(_g4_t_v78)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v79)) > _g4_s17 ? (100u + sizeof(_g4_t_v79)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v80)) > _g4_s18 ? (100u + sizeof(_g4_t_v80)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v81)) > _g4_s19 ? (104u + sizeof(_g4_t_v81)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v82)) > _g4_s20 ? (104u + sizeof(_g4_t_v82)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v83)) > _g4_s21 ? (104u + sizeof(_g4_t_v83)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v84)) > _g4_s22 ? (108u + sizeof(_g4_t_v84)) : _g4_s22,
    _g4_s24 = (115u + sizeof(_g4_t_v85)) > _g4_s23 ? (115u + sizeof(_g4_t_v85)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v86)) > _g4_s24 ? (116u + sizeof(_g4_t_v86)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v87)) > _g4_s25 ? (132u + sizeof(_g4_t_v87)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v88)) > _g4_s26 ? (148u + sizeof(_g4_t_v88)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v89)) > _g4_s27 ? (164u + sizeof(_g4_t_v89)) : _g4_s27,
    _g4_s29 = (168u + sizeof(_g4_t_v90)) > _g4_s28 ? (168u + sizeof(_g4_t_v90)) : _g4_s28,
    _g4_s30 = (172u + sizeof(_g4_t_v91)) > _g4_s29 ? (172u + sizeof(_g4_t_v91)) : _g4_s29,
    _g4_s31 = (180u + sizeof(_g4_t_v92)) > _g4_s30 ? (180u + sizeof(_g4_t_v92)) : _g4_s30,
    _g4_s32 = (184u + sizeof(_g4_t_v93)) > _g4_s31 ? (184u + sizeof(_g4_t_v93)) : _g4_s31,
    _g4_s33 = (188u + sizeof(_g4_t_v94)) > _g4_s32 ? (188u + sizeof(_g4_t_v94)) : _g4_s32,
    _g4_s34 = (192u + sizeof(_g4_t_v95)) > _g4_s33 ? (192u + sizeof(_g4_t_v95)) : _g4_s33,
    _g4_s35 = (196u + sizeof(_g4_t_v96)) > _g4_s34 ? (196u + sizeof(_g4_t_v96)) : _g4_s34,
    _g4_s36 = (200u + sizeof(_g4_t_v97)) > _g4_s35 ? (200u + sizeof(_g4_t_v97)) : _g4_s35,
    _g4_s37 = (204u + sizeof(_g4_t_v98)) > _g4_s36 ? (204u + sizeof(_g4_t_v98)) : _g4_s36,
    _g4_s38 = (208u + sizeof(_g4_t_v99)) > _g4_s37 ? (208u + sizeof(_g4_t_v99)) : _g4_s37,
    _g4_s39 = (212u + sizeof(_g4_t_v100)) > _g4_s38 ? (212u + sizeof(_g4_t_v100)) : _g4_s38,
    _g4_s40 = (216u + sizeof(_g4_t_v101)) > _g4_s39 ? (216u + sizeof(_g4_t_v101)) : _g4_s39,
    _g4_s41 = (220u + sizeof(_g4_t_v102)) > _g4_s40 ? (220u + sizeof(_g4_t_v102)) : _g4_s40,
    _g4_s42 = (224u + sizeof(_g4_t_v103)) > _g4_s41 ? (224u + sizeof(_g4_t_v103)) : _g4_s41,
    _g4_s43 = (228u + sizeof(_g4_t_v104)) > _g4_s42 ? (228u + sizeof(_g4_t_v104)) : _g4_s42,
    _g4_s44 = (244u + sizeof(_g4_t_v105)) > _g4_s43 ? (244u + sizeof(_g4_t_v105)) : _g4_s43,
    _g4_s45 = (248u + sizeof(_g4_t_v106)) > _g4_s44 ? (248u + sizeof(_g4_t_v106)) : _g4_s44,
    _g4_s46 = (252u + sizeof(_g4_t_v107)) > _g4_s45 ? (252u + sizeof(_g4_t_v107)) : _g4_s45,
    _g4_s47 = (256u + sizeof(_g4_t_v108)) > _g4_s46 ? (256u + sizeof(_g4_t_v108)) : _g4_s46,
    _g4_s48 = (268u + sizeof(_g4_t_v109)) > _g4_s47 ? (268u + sizeof(_g4_t_v109)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 0u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 60u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 64u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 84u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 88u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 92u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 92u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 92u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 96u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 96u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 100u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 100u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 104u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 104u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 104u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 108u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 115u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 116u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 132u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 148u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 164u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 168u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 172u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 180u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 184u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 188u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 192u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 196u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 200u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 204u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 208u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 212u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 216u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 220u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 224u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 228u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 244u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 248u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 252u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 256u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 268u);

  v109 = &a1;
  v77 = (hkpMeshWeldingUtility::Self *)a1;
  v5 = a2;
  v72 = a3;
  v81 = a4;
  v73 = a5;
  if ( a3 == 0 )
    return 0;
  v74 = (hkVector4f::Self *)(a1 + 8);
  v79 = (hkVector4f::Self *)(a1 + 4);
  v105 = hkDefaultTriangleDegeneracyTolerance;
  if ( hkcdTriangleUtil::isDegenerate(a1, a1 + 4, a1 + 8, &v105) )
    return 0;
  hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(v77, v79, v74, (const hkVector4f::Self *)&v89);
  v93 = 0;
  v94 = 0;
  v7 = 0;
  v95 = 0x80000000;
  if ( v81 == 0 )
    v7 = 1078530011;
  v88[0] = (uint32_t)(uintptr_t)(&v92);
  v92 = v7;
  v97 = 0;
  v88[1] = (uint32_t)(uintptr_t)(&v96);
  v98 = 0;
  v99 = 0x80000000;
  v101 = 0;
  v96 = v7;
  v102 = 0;
  v103 = 0x80000000;
  v88[2] = (uint32_t)(uintptr_t)(&v100);
  v100 = v7;
  if ( v72 <= 0 )
  {
    v41 = 0;
    goto LABEL_29;
  }
  v82 = 0;
  while ( 2 )
  {
    v105 = hkDefaultTriangleDegeneracyTolerance;
    if ( hkcdTriangleUtil::isDegenerate(v5, v5 + 4, v5 + 8, &v105) )
      goto LABEL_8;
    hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(
      (hkpMeshWeldingUtility::Self *)v5,
      (const hkVector4f::Self *)(v5 + 4),
      (const hkVector4f::Self *)(v5 + 8),
      (const hkVector4f::Self *)v104);
    v71 = (hkVector4f::Self *)v5;
    v8 = (float *)v77;
    v9 = 0;
    do
    {
      v10 = (float *)((char *)v77 + 16 * (++v9 % 3));
g4_m128_raw(v11) = *(unsigned int *)v10;
      *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) - *v8;
      v12 = v10[1] - v8[1];
      v13 = v10[2] - v8[2];
      v14 = v11;
      *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)g4_m128_ptr<int32_t>(v11)) + (float)(v12 * v12))
                              + (float)(v13 * v13);
      if ( *(float *)g4_m128_ptr<int32_t>(v14) <= 0.0 )
      {
        v19 = 0.0;
      }
      else
      {
        v15 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v14);
        v16 = ((_mm_cvtsi128_si32(v14) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v14) >> 1));
        v17 = (float)(*(float *)&v16 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * *(float *)&v16)
                    * (float)(*(float *)&v16 * *(float *)&v16));
        v18 = (float)((float)((float)(*(float *)&v16 * 1.5)
                            - (float)((float)(v15 * *(float *)&v16) * (float)(*(float *)&v16 * *(float *)&v16)))
                    * 1.5)
            - (float)((float)(v15 * v17) * (float)(v17 * v17));
        v19 = (float)(1.5 * v18) - (float)((float)(v15 * v18) * (float)(v18 * v18));
      }
      v20 = *(float *)g4_m128_ptr<int32_t>(v11) * v19;
      v21 = v12 * v19;
      v22 = v19 * v13;
      if ( v73 > fabs((float)((float)(v104[0] * v20) + (float)(v104[1] * v21)) + (float)(v104[2] * v22)) )
      {
        v86[0] = 0.0;
        v87[0] = 1.0;
        hkpMeshWeldingUtility::clipLineAgainstTriangle(
          (hkpMeshWeldingUtility::Self *)&v85,
          (const hkVector4f::Self *)v8,
          (const hkVector4f::Self *)((hkpMeshWeldingUtility::Self *)((char *)v77 + 16 * (v9 % 3))),
          v71,
          (const hkVector4f::Self *)v104,
          v73,
          v86,
          v87);
        if ( v85 )
        {
g4_m128_raw(v23) = LODWORD(v91);
          *(float *)g4_m128_ptr<int32_t>(v23) = (float)(v91 * v21) - (float)(v90 * v22);
          v24 = (float)(v22 * v89) - (float)(v91 * v20);
          v25 = (float)(v20 * v90) - (float)(v21 * v89);
          v26 = v23;
          *(float *)g4_m128_ptr<int32_t>(v26) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v23) * *(float *)g4_m128_ptr<int32_t>(v23))
                                          + (float)(v24 * v24))
                                  + (float)(v25 * v25);
          if ( *(float *)g4_m128_ptr<int32_t>(v26) <= 0.0 )
          {
            v31 = 0.0;
            v32 = 0.0;
          }
          else
          {
            v27 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v26);
            v28 = ((_mm_cvtsi128_si32(v26) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v26) >> 1));
            v29 = (float)(*(float *)&v28 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v26)) * *(float *)&v28)
                        * (float)(*(float *)&v28 * *(float *)&v28));
            v30 = (float)(v29 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v26)) * v29) * (float)(v29 * v29));
            v31 = (float)(1.5 * v30) - (float)((float)(v27 * v30) * (float)(v30 * v30));
            v32 = 0.0 * v31;
          }
          v108 = v32;
          v106 = v24 * v31;
          v105 = *(float *)g4_m128_ptr<int32_t>(v23) * v31;
          v107 = v25 * v31;
          v64 = hkpMeshWeldingUtility::calcAngleForEdge(
                  (hkpMeshWeldingUtility::Self *)&v89,
                  (const hkVector4f::Self *)&v105,
                  (const hkVector4f::Self *)v104);
          v63 = v87[0];
          v33 = v86[0];
          v34 = (int *)v88[v9 - 1];
          v75 = (hkVector4f::Self *)v34;
          v35 = v34[2];
          if ( v35 <= 0 )
          {
            v69 = v34 + 1;
            v67 = v35 + 1;
            if ( v35 + 1 <= (v34[3] & 0x3FFFFFFF) )
            {
              v68 = (float *)v34[1];
              v70 = 3 * v35;
              v66 = 12 * v35 + 12;
              v65 = 0;
LABEL_26:
              hkMemUtil::memMove((hkMemUtil::Self *)((char *)v68 + v66), (char *)&v68[v70], v65);
              v40 = (float *)(*((uint32_t *)v75 + 1) + v70 * 4);
              v40[1] = v63;
              *v40 = v33;
              v40[2] = v64;
              *((uint32_t *)v75 + 2) = v67;
              goto LABEL_14;
            }
            v65 = 0;
            v70 = 3 * v35;
            v67 = 1;
            v66 = 12 * v35 + 12;
            v39 = 0;
          }
          else
          {
            v36 = (float *)v34[1];
            v68 = v36;
            if ( v86[0] > *v36 )
            {
              v66 = 24;
              v70 = 3;
              v60 = 1;
            }
            else
            {
              v37 = v36;
              v38 = 0;
              do
              {
                if ( ++v38 == v35 )
                {
                  v65 = 0;
                  v70 = 3 * v35;
                  v66 = 12 * v35 + 12;
                  goto LABEL_25;
                }
                v37 += 3;
              }
              while ( v86[0] <= *v37 );
              v60 = v38 + 1;
              v70 = 3 * v60;
              v66 = 12 * v60 + 12;
            }
            v65 = 12 * (v35 - v60);
LABEL_25:
            v67 = v35 + 1;
            v39 = *((uint32_t *)v75 + 3) & 0x3FFFFFFF;
            if ( v35 + 1 <= v39 )
              goto LABEL_26;
            v69 = (int *)((char *)v75 + 4);
          }
          v61 = 2 * v39;
          if ( v61 < v67 )
            v61 = v67;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v84,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v69,
            v61,
            12);
          v68 = *((float **)v75 + 1);
          goto LABEL_26;
        }
      }
LABEL_14:
      v8 += 4;
    }
    while ( v9 != 3 );
    v5 = (float *)v71;
LABEL_8:
    ++v82;
    v5 += 12;
    if ( v82 != v72 )
      continue;
    break;
  }
  v41 = *(uint32_t *)(v88[0] + 8);
LABEL_29:
  v78 = nullptr;
  v76 = 0;
  v42 = nullptr;
  while ( 2 )
  {
    v43 = v88[(uint32_t)(uintptr_t)(v42)];
    v83 = v43;
    if ( v41 == 0 )
    {
      v56 = *(float *)v43;
      goto LABEL_53;
    }
    if ( v41 > 1 )
    {
      LOBYTE(v62) = 0;
      hkAlgorithm::quickSortRecursive_5ae545(*(uint32_t *)(v43 + 4), 0, v41 - 1);
      v41 = *(uint32_t *)(v43 + 8);
    }
    v105 = 0.0;
    v106 = 0.0;
    v107 = -0.0;
    if ( v41 <= 0 )
    {
      v54 = 0x80000000;
LABEL_68:
      v56 = 0.0;
      goto LABEL_51;
    }
    v44 = 0;
    v45 = 1;
    while ( 2 )
    {
      if ( v41 <= v45 )
      {
        v80 = (hkVector4f::Self *)(12 * v44);
        goto LABEL_37;
      }
      v80 = (hkVector4f::Self *)(12 * v44);
      g4_hkEntry_ne(&v85, (int)(uintptr_t)(12 * v44 + *(uint32_t *)(v83 + 4)), (int)(uintptr_t)(*(uint32_t *)(v83 + 4) + 12 * v45));
      if ( v85 )
      {
LABEL_37:
        if ( v45 - v44 <= 0 )
        {
          v50 = *(uint32_t *)((char *)v80 + *(uint32_t *)(v83 + 4) + 8);
          v51 = 0.0;
LABEL_42:
          v52 = v106;
          if ( LODWORD(v106) == (LODWORD(v107) & 0x3FFFFFFF) )
            goto LABEL_58;
        }
        else
        {
          v46 = *(uint32_t *)(v83 + 4);
          v47 = 0.0;
          v48 = v46 + 12 * v44;
          do
          {
            v49 = *(float *)(v48 + 4);
            v48 += 12;
            v47 = (float)(v49 - *(float *)(v48 - 12)) + v47;
          }
          while ( v48 != v46 + 12 * v45 );
          v50 = *(uint32_t *)((char *)v80 + v46 + 8);
          if ( v47 >= 0.0 )
          {
            v51 = fminf(1.0, v47);
            goto LABEL_42;
          }
          v52 = v106;
          v51 = 0.0;
          if ( LODWORD(v106) == (LODWORD(v107) & 0x3FFFFFFF) )
          {
LABEL_58:
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v105,
              12,
              v62);
            v52 = v106;
          }
        }
        v44 = v45;
        v53 = (float *)(LODWORD(v105) + 12 * LODWORD(v52));
        v53[1] = v51;
        *v53 = 0.0;
        *((uint32_t *)v53 + 2) = v50;
        ++LODWORD(v106);
      }
      ++v45;
      v41 = *(uint32_t *)(v83 + 8);
      if ( v41 >= v45 )
        continue;
      break;
    }
    v54 = LODWORD(v107);
    if ( SLODWORD(v106) <= 0 )
      goto LABEL_68;
    v55 = (float *)LODWORD(v105);
    v56 = 3.1415927f;
    v57 = 0;
    do
    {
      if ( (float)(v55[1] - *v55) >= 0.6f )
      {
        v57 = 1;
        v56 = fminf(v56, v55[2]);
      }
      v55 += 3;
    }
    while ( v55 != (float *)(LODWORD(v105) + 12 * LODWORD(v106)) );
    if ( v57 == 0 )
      goto LABEL_68;
LABEL_51:
    v106 = 0.0;
    if ( v54 >= 0 )
      (*(void (**)(uint32_t *, float, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        COERCE_FLOAT(LODWORD(v105)),
        12 * v54);
LABEL_53:
    v58 = hkpWeldingUtility::calcEdgeAngleBitcode((hkpWeldingUtility::Self *)LODWORD(v56));
    v59 = hkpMeshWeldingUtility::modifyCombinedEdgesBitcode((hkpMeshWeldingUtility::Self *)v76, (uint16_t)(uintptr_t)v78, v58);
    v78 = (hkpMeshWeldingUtility::Self *)((char *)v78 + 1);
    v76 = v59;
    if ( v78 != (hkpMeshWeldingUtility::Self *)((char *)&dword_0 + 3) )
    {
      v42 = v78;
      v41 = *(uint32_t *)(v88[(uint32_t)(uintptr_t)(v78)] + 8);
      continue;
    }
    break;
  }
  v102 = 0;
  if ( v103 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v101,
      12 * v103);
  v101 = 0;
  v103 = 0x80000000;
  v98 = 0;
  if ( v99 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v97,
      12 * v99);
  v97 = 0;
  v99 = 0x80000000;
  v94 = 0;
  if ( v95 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v93,
      12 * v95);
  return v76;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::computeWeldingInfoMultiShape  (binary VA: 0x1ad7120)
// Original: hkpMeshWeldingUtility::computeWeldingInfoMultiShape
// ----------------------------------------------------------------------------
void hkpMeshWeldingUtility::computeWeldingInfoMultiShape(long double a1, float *a2, int a3, int a4, uint32_t *a5, char a6, char a7)
{
  int v7;
  int v8;
  int v9;
  float *v10;
  int v11; // xmm0_4
  float *v12;
  int v13;
  int v14;
  float v15; // xmm6_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm4_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  float v28; // xmm5_4
  float v29; // xmm7_4
  float v30; // xmm4_4
  float v31; // xmm0_4
  float v32; // xmm6_4
  float v33; // xmm4_4
  __m128i v34;
  __m128i v35;
  float v36; // xmm3_4
  __m128i v37;
  float v38; // xmm2_4
  float v39; // xmm6_4
  int v40;
  int v41;
  float v42; // xmm2_4
  __m128i v43;
  float v44;
  __m128i v45;
  float v46;
  __m128i v47;
  int v48;
  char *v49;
  int v50;
  int v51;
  float *v52;
  float v53; // xmm0_4
  uint8_t v54;
  char v55;
  float v56; // xmm0_4
  uint8_t v57;
  char v58;
  float v59; // xmm7_4
  float v60; // xmm7_4
  uint8_t v61;
  uint8_t v62;
  float v63; // xmm0_4
  uint8_t v64;
  char v65;
  bool v66;
  float v67; // xmm0_4
  uint8_t v68;
  int v69;
  float v70; // xmm2_4
  char v71;
  float v72; // xmm1_4
  char v73;
  float v74; // xmm0_4
  float v75; // xmm5_4
  float v76; // xmm4_4
  int v77;
  char v78;
  char v79;
  int v80;
  float v81; // xmm0_4
  uint8_t v82;
  char v83;
  float v84; // xmm4_4
  uint8_t v85;
  char v86;
  float v87; // xmm0_4
  uint8_t v88;
  int v89;
  __m128i v90;
  float v91; // xmm2_4
  float v92; // xmm1_4
  __m128i v93;
  float v94; // xmm5_4
  int v95;
  float v96; // xmm4_4
  float v97; // xmm4_4
  float v98; // xmm5_4
  float v99; // xmm0_4
  int v100;
  float *v101;
  float *v102;
  __m128i v103;
  float v104; // xmm3_4
  float v105; // xmm2_4
  __m128i v106;
  float v107; // xmm1_4
  float v108; // xmm5_4
  int v109;
  int v110;
  float v111; // xmm1_4
  float v112; // xmm3_4
  float v113; // xmm6_4
  float v114; // xmm0_4
  float v115; // xmm5_4
  float v116; // xmm0_4
  float *v117;
  int v118;
  int v119;
  int v120;
  int v121;
  hkVector4f::Self *v122;
  char *v123;
  char *v124;
  float v125; // xmm0_4
  uint8_t v126;
  char v127;
  float v128; // xmm1_4
  int v129;
  int v130;
  int v131;
  float v132; // xmm1_4
  float *v133;
  float v134; // xmm0_4
  float v135; // xmm0_4
  float v136; // xmm1_4
  int v137;
  float *v138;
  int v139;
  float *v140;
  char v141;
  int v142;
  __m128i v143;
  __m128i v144;
  int v145;
  int v146;
  float v147; // xmm0_4
  float v148; // xmm1_4
  float v149; // xmm6_4
  float v150; // xmm3_4
  float v151; // xmm0_4
  float v152; // xmm6_4
  float v153; // xmm3_4
  float *v154;
  int v155;
  int v156;
  float *v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  typedef float _g4_t_v166;
  typedef const hkVector4f::Self *_g4_t_v167;
  typedef hkVector4f::Self *_g4_t_v168;
  typedef bool _g4_t_v169;
  typedef uint8_t *_g4_t_v170;
  typedef char _g4_t_v171;
  typedef char _g4_t_v172;
  typedef uint16_t _g4_t_v173;
  typedef uint16_t _g4_t_v174[2];
  typedef bool _g4_t_v175;
  typedef bool _g4_t_v176;
  typedef bool _g4_t_v177;
  typedef float _g4_t_v178;
  typedef float _g4_t_v179;
  typedef int _g4_t_v180;
  typedef int _g4_t_v181;
  typedef float *_g4_t_v182;
  typedef char *_g4_t_v183;
  typedef float _g4_t_v184;
  typedef bool _g4_t_v185;
  typedef bool _g4_t_v186;
  typedef float _g4_t_v187;
  typedef float _g4_t_v188;
  typedef float _g4_t_v189;
  typedef float _g4_t_v190;
  typedef hkVector4f::Self *_g4_t_v191;
  typedef float _g4_t_v192;
  typedef float *_g4_t_v193;
  typedef float _g4_t_v194;
  typedef float _g4_t_v195;
  typedef float _g4_t_v196;
  typedef float _g4_t_v197;
  typedef float _g4_t_v198;
  typedef uint32_t *_g4_t_v199;
  typedef int _g4_t_v200;
  typedef float _g4_t_v201;
  typedef float _g4_t_v202;
  typedef int _g4_t_v203;
  typedef float _g4_t_v204;
  typedef hkpTriangleShape::Self *_g4_t_v205;
  typedef hkpTriangleShape::Self *_g4_t_v206;
  typedef float _g4_t_v207;
  typedef float _g4_t_v208;
  typedef float _g4_t_v209;
  typedef float _g4_t_v210;
  typedef float _g4_t_v211;
  typedef float _g4_t_v212;
  typedef float _g4_t_v213;
  typedef char _g4_t_v214;
  typedef float _g4_t_v215;
  typedef float _g4_t_v216;
  typedef float _g4_t_v217;
  typedef bool _g4_t_v218;
  typedef float _g4_t_v219;
  typedef int _g4_t_v220;
  typedef size_t _g4_t_v221;
  typedef float _g4_t_v222;
  typedef float _g4_t_v223;
  typedef float _g4_t_v224;
  typedef bool _g4_t_v225;
  typedef float *_g4_t_v226;
  typedef float _g4_t_v227;
  typedef hkpMeshWeldingUtility::Self *_g4_t_v228;
  typedef hkpMeshWeldingUtility::Self *_g4_t_v229;
  typedef float _g4_t_v230;
  typedef float _g4_t_v231;
  typedef float _g4_t_v232;
  typedef int _g4_t_v233;
  typedef signed int _g4_t_v234;
  typedef float _g4_t_v235;
  typedef float _g4_t_v236;
  typedef hkVector4f::Self *_g4_t_v237;
  typedef float _g4_t_v238;
  typedef float _g4_t_v239;
  typedef hkVector4f::Self *_g4_t_v240;
  typedef hkVector4f::Self *_g4_t_v241;
  typedef float _g4_t_v242;
  typedef float _g4_t_v243;
  typedef unsigned int _g4_t_v244;
  typedef float _g4_t_v245;
  typedef float _g4_t_v246;
  typedef hkVector4f::Self *_g4_t_v247;
  typedef float _g4_t_v248;
  typedef float _g4_t_v249;
  typedef hkVector4f::Self *_g4_t_v250;
  typedef hkVector4f::Self *_g4_t_v251;
  typedef int _g4_t_v252;
  typedef float _g4_t_v253;
  typedef char *_g4_t_v254;
  typedef char *_g4_t_v255;
  typedef float _g4_t_v256;
  typedef int _g4_t_v257;
  typedef int _g4_t_v258;
  typedef char _g4_t_v259;
  typedef int16_t _g4_t_v260;
  typedef char _g4_t_v261;
  typedef char _g4_t_v262[4];
  typedef float _g4_t_v263[4];
  typedef float _g4_t_v264[4];
  typedef float _g4_t_v265;
  typedef float _g4_t_v266;
  typedef float _g4_t_v267;
  typedef hkpWeldingUtility::Self *_g4_t_v268;
  typedef float *_g4_t_v269;
  typedef int _g4_t_v270;
  typedef int _g4_t_v271;
  typedef float _g4_t_v272;
  typedef float _g4_t_v273;
  typedef float _g4_t_v274;
  typedef int _g4_t_v275;
  typedef float _g4_t_v276;
  typedef float _g4_t_v277;
  typedef float _g4_t_v278;
  typedef int _g4_t_v279;
  typedef float _g4_t_v280;
  typedef float _g4_t_v281;
  typedef float _g4_t_v282;
  typedef int _g4_t_v283;
  typedef float _g4_t_v284;
  typedef float _g4_t_v285;
  typedef float _g4_t_v286;
  typedef float _g4_t_v287;
  typedef float _g4_t_v288;
  typedef float _g4_t_v289;
  typedef float _g4_t_v290;
  typedef float _g4_t_v291;
  typedef float _g4_t_v292;
  typedef float _g4_t_v293;
  typedef float _g4_t_v294;
  typedef float _g4_t_v295;
  typedef float _g4_t_v296[4];
  typedef float _g4_t_v297[4];
  typedef char _g4_t_v298[512];
  typedef int _g4_t_v299[128];
  typedef float _g4_t_v300;
  typedef int _g4_t_v301;
  typedef int _g4_t_v302;
  typedef uint32_t _g4_t_v303[135];
  enum : size_t {
    _g4_s0 = 2640u,
    _g4_s1 = (0u + sizeof(_g4_t_v166)) > _g4_s0 ? (0u + sizeof(_g4_t_v166)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v167)) > _g4_s1 ? (8u + sizeof(_g4_t_v167)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v168)) > _g4_s2 ? (12u + sizeof(_g4_t_v168)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v169)) > _g4_s3 ? (64u + sizeof(_g4_t_v169)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v170)) > _g4_s4 ? (84u + sizeof(_g4_t_v170)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v171)) > _g4_s5 ? (88u + sizeof(_g4_t_v171)) : _g4_s5,
    _g4_s7 = (89u + sizeof(_g4_t_v172)) > _g4_s6 ? (89u + sizeof(_g4_t_v172)) : _g4_s6,
    _g4_s8 = (90u + sizeof(_g4_t_v173)) > _g4_s7 ? (90u + sizeof(_g4_t_v173)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v174)) > _g4_s8 ? (92u + sizeof(_g4_t_v174)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v175)) > _g4_s9 ? (104u + sizeof(_g4_t_v175)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v176)) > _g4_s10 ? (108u + sizeof(_g4_t_v176)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v177)) > _g4_s11 ? (112u + sizeof(_g4_t_v177)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v178)) > _g4_s12 ? (116u + sizeof(_g4_t_v178)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v179)) > _g4_s13 ? (120u + sizeof(_g4_t_v179)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v180)) > _g4_s14 ? (128u + sizeof(_g4_t_v180)) : _g4_s14,
    _g4_s16 = (132u + sizeof(_g4_t_v181)) > _g4_s15 ? (132u + sizeof(_g4_t_v181)) : _g4_s15,
    _g4_s17 = (136u + sizeof(_g4_t_v182)) > _g4_s16 ? (136u + sizeof(_g4_t_v182)) : _g4_s16,
    _g4_s18 = (144u + sizeof(_g4_t_v183)) > _g4_s17 ? (144u + sizeof(_g4_t_v183)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v184)) > _g4_s18 ? (152u + sizeof(_g4_t_v184)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v185)) > _g4_s19 ? (152u + sizeof(_g4_t_v185)) : _g4_s19,
    _g4_s21 = (156u + sizeof(_g4_t_v186)) > _g4_s20 ? (156u + sizeof(_g4_t_v186)) : _g4_s20,
    _g4_s22 = (156u + sizeof(_g4_t_v187)) > _g4_s21 ? (156u + sizeof(_g4_t_v187)) : _g4_s21,
    _g4_s23 = (160u + sizeof(_g4_t_v188)) > _g4_s22 ? (160u + sizeof(_g4_t_v188)) : _g4_s22,
    _g4_s24 = (164u + sizeof(_g4_t_v189)) > _g4_s23 ? (164u + sizeof(_g4_t_v189)) : _g4_s23,
    _g4_s25 = (168u + sizeof(_g4_t_v190)) > _g4_s24 ? (168u + sizeof(_g4_t_v190)) : _g4_s24,
    _g4_s26 = (172u + sizeof(_g4_t_v191)) > _g4_s25 ? (172u + sizeof(_g4_t_v191)) : _g4_s25,
    _g4_s27 = (176u + sizeof(_g4_t_v192)) > _g4_s26 ? (176u + sizeof(_g4_t_v192)) : _g4_s26,
    _g4_s28 = (180u + sizeof(_g4_t_v193)) > _g4_s27 ? (180u + sizeof(_g4_t_v193)) : _g4_s27,
    _g4_s29 = (184u + sizeof(_g4_t_v194)) > _g4_s28 ? (184u + sizeof(_g4_t_v194)) : _g4_s28,
    _g4_s30 = (188u + sizeof(_g4_t_v195)) > _g4_s29 ? (188u + sizeof(_g4_t_v195)) : _g4_s29,
    _g4_s31 = (192u + sizeof(_g4_t_v196)) > _g4_s30 ? (192u + sizeof(_g4_t_v196)) : _g4_s30,
    _g4_s32 = (196u + sizeof(_g4_t_v197)) > _g4_s31 ? (196u + sizeof(_g4_t_v197)) : _g4_s31,
    _g4_s33 = (196u + sizeof(_g4_t_v198)) > _g4_s32 ? (196u + sizeof(_g4_t_v198)) : _g4_s32,
    _g4_s34 = (200u + sizeof(_g4_t_v199)) > _g4_s33 ? (200u + sizeof(_g4_t_v199)) : _g4_s33,
    _g4_s35 = (208u + sizeof(_g4_t_v200)) > _g4_s34 ? (208u + sizeof(_g4_t_v200)) : _g4_s34,
    _g4_s36 = (212u + sizeof(_g4_t_v201)) > _g4_s35 ? (212u + sizeof(_g4_t_v201)) : _g4_s35,
    _g4_s37 = (212u + sizeof(_g4_t_v202)) > _g4_s36 ? (212u + sizeof(_g4_t_v202)) : _g4_s36,
    _g4_s38 = (212u + sizeof(_g4_t_v203)) > _g4_s37 ? (212u + sizeof(_g4_t_v203)) : _g4_s37,
    _g4_s39 = (216u + sizeof(_g4_t_v204)) > _g4_s38 ? (216u + sizeof(_g4_t_v204)) : _g4_s38,
    _g4_s40 = (216u + sizeof(_g4_t_v205)) > _g4_s39 ? (216u + sizeof(_g4_t_v205)) : _g4_s39,
    _g4_s41 = (216u + sizeof(_g4_t_v206)) > _g4_s40 ? (216u + sizeof(_g4_t_v206)) : _g4_s40,
    _g4_s42 = (220u + sizeof(_g4_t_v207)) > _g4_s41 ? (220u + sizeof(_g4_t_v207)) : _g4_s41,
    _g4_s43 = (220u + sizeof(_g4_t_v208)) > _g4_s42 ? (220u + sizeof(_g4_t_v208)) : _g4_s42,
    _g4_s44 = (224u + sizeof(_g4_t_v209)) > _g4_s43 ? (224u + sizeof(_g4_t_v209)) : _g4_s43,
    _g4_s45 = (224u + sizeof(_g4_t_v210)) > _g4_s44 ? (224u + sizeof(_g4_t_v210)) : _g4_s44,
    _g4_s46 = (228u + sizeof(_g4_t_v211)) > _g4_s45 ? (228u + sizeof(_g4_t_v211)) : _g4_s45,
    _g4_s47 = (228u + sizeof(_g4_t_v212)) > _g4_s46 ? (228u + sizeof(_g4_t_v212)) : _g4_s46,
    _g4_s48 = (228u + sizeof(_g4_t_v213)) > _g4_s47 ? (228u + sizeof(_g4_t_v213)) : _g4_s47,
    _g4_s49 = (228u + sizeof(_g4_t_v214)) > _g4_s48 ? (228u + sizeof(_g4_t_v214)) : _g4_s48,
    _g4_s50 = (232u + sizeof(_g4_t_v215)) > _g4_s49 ? (232u + sizeof(_g4_t_v215)) : _g4_s49,
    _g4_s51 = (232u + sizeof(_g4_t_v216)) > _g4_s50 ? (232u + sizeof(_g4_t_v216)) : _g4_s50,
    _g4_s52 = (232u + sizeof(_g4_t_v217)) > _g4_s51 ? (232u + sizeof(_g4_t_v217)) : _g4_s51,
    _g4_s53 = (232u + sizeof(_g4_t_v218)) > _g4_s52 ? (232u + sizeof(_g4_t_v218)) : _g4_s52,
    _g4_s54 = (232u + sizeof(_g4_t_v219)) > _g4_s53 ? (232u + sizeof(_g4_t_v219)) : _g4_s53,
    _g4_s55 = (232u + sizeof(_g4_t_v220)) > _g4_s54 ? (232u + sizeof(_g4_t_v220)) : _g4_s54,
    _g4_s56 = (232u + sizeof(_g4_t_v221)) > _g4_s55 ? (232u + sizeof(_g4_t_v221)) : _g4_s55,
    _g4_s57 = (236u + sizeof(_g4_t_v222)) > _g4_s56 ? (236u + sizeof(_g4_t_v222)) : _g4_s56,
    _g4_s58 = (236u + sizeof(_g4_t_v223)) > _g4_s57 ? (236u + sizeof(_g4_t_v223)) : _g4_s57,
    _g4_s59 = (236u + sizeof(_g4_t_v224)) > _g4_s58 ? (236u + sizeof(_g4_t_v224)) : _g4_s58,
    _g4_s60 = (236u + sizeof(_g4_t_v225)) > _g4_s59 ? (236u + sizeof(_g4_t_v225)) : _g4_s59,
    _g4_s61 = (236u + sizeof(_g4_t_v226)) > _g4_s60 ? (236u + sizeof(_g4_t_v226)) : _g4_s60,
    _g4_s62 = (240u + sizeof(_g4_t_v227)) > _g4_s61 ? (240u + sizeof(_g4_t_v227)) : _g4_s61,
    _g4_s63 = (240u + sizeof(_g4_t_v228)) > _g4_s62 ? (240u + sizeof(_g4_t_v228)) : _g4_s62,
    _g4_s64 = (240u + sizeof(_g4_t_v229)) > _g4_s63 ? (240u + sizeof(_g4_t_v229)) : _g4_s63,
    _g4_s65 = (244u + sizeof(_g4_t_v230)) > _g4_s64 ? (244u + sizeof(_g4_t_v230)) : _g4_s64,
    _g4_s66 = (244u + sizeof(_g4_t_v231)) > _g4_s65 ? (244u + sizeof(_g4_t_v231)) : _g4_s65,
    _g4_s67 = (244u + sizeof(_g4_t_v232)) > _g4_s66 ? (244u + sizeof(_g4_t_v232)) : _g4_s66,
    _g4_s68 = (244u + sizeof(_g4_t_v233)) > _g4_s67 ? (244u + sizeof(_g4_t_v233)) : _g4_s67,
    _g4_s69 = (244u + sizeof(_g4_t_v234)) > _g4_s68 ? (244u + sizeof(_g4_t_v234)) : _g4_s68,
    _g4_s70 = (248u + sizeof(_g4_t_v235)) > _g4_s69 ? (248u + sizeof(_g4_t_v235)) : _g4_s69,
    _g4_s71 = (248u + sizeof(_g4_t_v236)) > _g4_s70 ? (248u + sizeof(_g4_t_v236)) : _g4_s70,
    _g4_s72 = (248u + sizeof(_g4_t_v237)) > _g4_s71 ? (248u + sizeof(_g4_t_v237)) : _g4_s71,
    _g4_s73 = (248u + sizeof(_g4_t_v238)) > _g4_s72 ? (248u + sizeof(_g4_t_v238)) : _g4_s72,
    _g4_s74 = (248u + sizeof(_g4_t_v239)) > _g4_s73 ? (248u + sizeof(_g4_t_v239)) : _g4_s73,
    _g4_s75 = (248u + sizeof(_g4_t_v240)) > _g4_s74 ? (248u + sizeof(_g4_t_v240)) : _g4_s74,
    _g4_s76 = (248u + sizeof(_g4_t_v241)) > _g4_s75 ? (248u + sizeof(_g4_t_v241)) : _g4_s75,
    _g4_s77 = (252u + sizeof(_g4_t_v242)) > _g4_s76 ? (252u + sizeof(_g4_t_v242)) : _g4_s76,
    _g4_s78 = (252u + sizeof(_g4_t_v243)) > _g4_s77 ? (252u + sizeof(_g4_t_v243)) : _g4_s77,
    _g4_s79 = (256u + sizeof(_g4_t_v244)) > _g4_s78 ? (256u + sizeof(_g4_t_v244)) : _g4_s78,
    _g4_s80 = (256u + sizeof(_g4_t_v245)) > _g4_s79 ? (256u + sizeof(_g4_t_v245)) : _g4_s79,
    _g4_s81 = (260u + sizeof(_g4_t_v246)) > _g4_s80 ? (260u + sizeof(_g4_t_v246)) : _g4_s80,
    _g4_s82 = (260u + sizeof(_g4_t_v247)) > _g4_s81 ? (260u + sizeof(_g4_t_v247)) : _g4_s81,
    _g4_s83 = (260u + sizeof(_g4_t_v248)) > _g4_s82 ? (260u + sizeof(_g4_t_v248)) : _g4_s82,
    _g4_s84 = (260u + sizeof(_g4_t_v249)) > _g4_s83 ? (260u + sizeof(_g4_t_v249)) : _g4_s83,
    _g4_s85 = (260u + sizeof(_g4_t_v250)) > _g4_s84 ? (260u + sizeof(_g4_t_v250)) : _g4_s84,
    _g4_s86 = (260u + sizeof(_g4_t_v251)) > _g4_s85 ? (260u + sizeof(_g4_t_v251)) : _g4_s85,
    _g4_s87 = (260u + sizeof(_g4_t_v252)) > _g4_s86 ? (260u + sizeof(_g4_t_v252)) : _g4_s86,
    _g4_s88 = (264u + sizeof(_g4_t_v253)) > _g4_s87 ? (264u + sizeof(_g4_t_v253)) : _g4_s87,
    _g4_s89 = (264u + sizeof(_g4_t_v254)) > _g4_s88 ? (264u + sizeof(_g4_t_v254)) : _g4_s88,
    _g4_s90 = (264u + sizeof(_g4_t_v255)) > _g4_s89 ? (264u + sizeof(_g4_t_v255)) : _g4_s89,
    _g4_s91 = (268u + sizeof(_g4_t_v256)) > _g4_s90 ? (268u + sizeof(_g4_t_v256)) : _g4_s90,
    _g4_s92 = (272u + sizeof(_g4_t_v257)) > _g4_s91 ? (272u + sizeof(_g4_t_v257)) : _g4_s91,
    _g4_s93 = (272u + sizeof(_g4_t_v258)) > _g4_s92 ? (272u + sizeof(_g4_t_v258)) : _g4_s92,
    _g4_s94 = (276u + sizeof(_g4_t_v259)) > _g4_s93 ? (276u + sizeof(_g4_t_v259)) : _g4_s93,
    _g4_s95 = (277u + sizeof(_g4_t_v260)) > _g4_s94 ? (277u + sizeof(_g4_t_v260)) : _g4_s94,
    _g4_s96 = (279u + sizeof(_g4_t_v261)) > _g4_s95 ? (279u + sizeof(_g4_t_v261)) : _g4_s95,
    _g4_s97 = (280u + sizeof(_g4_t_v262)) > _g4_s96 ? (280u + sizeof(_g4_t_v262)) : _g4_s96,
    _g4_s98 = (284u + sizeof(_g4_t_v263)) > _g4_s97 ? (284u + sizeof(_g4_t_v263)) : _g4_s97,
    _g4_s99 = (300u + sizeof(_g4_t_v264)) > _g4_s98 ? (300u + sizeof(_g4_t_v264)) : _g4_s98,
    _g4_s100 = (316u + sizeof(_g4_t_v265)) > _g4_s99 ? (316u + sizeof(_g4_t_v265)) : _g4_s99,
    _g4_s101 = (320u + sizeof(_g4_t_v266)) > _g4_s100 ? (320u + sizeof(_g4_t_v266)) : _g4_s100,
    _g4_s102 = (324u + sizeof(_g4_t_v267)) > _g4_s101 ? (324u + sizeof(_g4_t_v267)) : _g4_s101,
    _g4_s103 = (332u + sizeof(_g4_t_v268)) > _g4_s102 ? (332u + sizeof(_g4_t_v268)) : _g4_s102,
    _g4_s104 = (336u + sizeof(_g4_t_v269)) > _g4_s103 ? (336u + sizeof(_g4_t_v269)) : _g4_s103,
    _g4_s105 = (340u + sizeof(_g4_t_v270)) > _g4_s104 ? (340u + sizeof(_g4_t_v270)) : _g4_s104,
    _g4_s106 = (344u + sizeof(_g4_t_v271)) > _g4_s105 ? (344u + sizeof(_g4_t_v271)) : _g4_s105,
    _g4_s107 = (348u + sizeof(_g4_t_v272)) > _g4_s106 ? (348u + sizeof(_g4_t_v272)) : _g4_s106,
    _g4_s108 = (352u + sizeof(_g4_t_v273)) > _g4_s107 ? (352u + sizeof(_g4_t_v273)) : _g4_s107,
    _g4_s109 = (356u + sizeof(_g4_t_v274)) > _g4_s108 ? (356u + sizeof(_g4_t_v274)) : _g4_s108,
    _g4_s110 = (360u + sizeof(_g4_t_v275)) > _g4_s109 ? (360u + sizeof(_g4_t_v275)) : _g4_s109,
    _g4_s111 = (364u + sizeof(_g4_t_v276)) > _g4_s110 ? (364u + sizeof(_g4_t_v276)) : _g4_s110,
    _g4_s112 = (368u + sizeof(_g4_t_v277)) > _g4_s111 ? (368u + sizeof(_g4_t_v277)) : _g4_s111,
    _g4_s113 = (372u + sizeof(_g4_t_v278)) > _g4_s112 ? (372u + sizeof(_g4_t_v278)) : _g4_s112,
    _g4_s114 = (376u + sizeof(_g4_t_v279)) > _g4_s113 ? (376u + sizeof(_g4_t_v279)) : _g4_s113,
    _g4_s115 = (380u + sizeof(_g4_t_v280)) > _g4_s114 ? (380u + sizeof(_g4_t_v280)) : _g4_s114,
    _g4_s116 = (384u + sizeof(_g4_t_v281)) > _g4_s115 ? (384u + sizeof(_g4_t_v281)) : _g4_s115,
    _g4_s117 = (388u + sizeof(_g4_t_v282)) > _g4_s116 ? (388u + sizeof(_g4_t_v282)) : _g4_s116,
    _g4_s118 = (392u + sizeof(_g4_t_v283)) > _g4_s117 ? (392u + sizeof(_g4_t_v283)) : _g4_s117,
    _g4_s119 = (396u + sizeof(_g4_t_v284)) > _g4_s118 ? (396u + sizeof(_g4_t_v284)) : _g4_s118,
    _g4_s120 = (400u + sizeof(_g4_t_v285)) > _g4_s119 ? (400u + sizeof(_g4_t_v285)) : _g4_s119,
    _g4_s121 = (404u + sizeof(_g4_t_v286)) > _g4_s120 ? (404u + sizeof(_g4_t_v286)) : _g4_s120,
    _g4_s122 = (408u + sizeof(_g4_t_v287)) > _g4_s121 ? (408u + sizeof(_g4_t_v287)) : _g4_s121,
    _g4_s123 = (412u + sizeof(_g4_t_v288)) > _g4_s122 ? (412u + sizeof(_g4_t_v288)) : _g4_s122,
    _g4_s124 = (416u + sizeof(_g4_t_v289)) > _g4_s123 ? (416u + sizeof(_g4_t_v289)) : _g4_s123,
    _g4_s125 = (420u + sizeof(_g4_t_v290)) > _g4_s124 ? (420u + sizeof(_g4_t_v290)) : _g4_s124,
    _g4_s126 = (424u + sizeof(_g4_t_v291)) > _g4_s125 ? (424u + sizeof(_g4_t_v291)) : _g4_s125,
    _g4_s127 = (428u + sizeof(_g4_t_v292)) > _g4_s126 ? (428u + sizeof(_g4_t_v292)) : _g4_s126,
    _g4_s128 = (432u + sizeof(_g4_t_v293)) > _g4_s127 ? (432u + sizeof(_g4_t_v293)) : _g4_s127,
    _g4_s129 = (436u + sizeof(_g4_t_v294)) > _g4_s128 ? (436u + sizeof(_g4_t_v294)) : _g4_s128,
    _g4_s130 = (440u + sizeof(_g4_t_v295)) > _g4_s129 ? (440u + sizeof(_g4_t_v295)) : _g4_s129,
    _g4_s131 = (444u + sizeof(_g4_t_v296)) > _g4_s130 ? (444u + sizeof(_g4_t_v296)) : _g4_s130,
    _g4_s132 = (460u + sizeof(_g4_t_v297)) > _g4_s131 ? (460u + sizeof(_g4_t_v297)) : _g4_s131,
    _g4_s133 = (476u + sizeof(_g4_t_v298)) > _g4_s132 ? (476u + sizeof(_g4_t_v298)) : _g4_s132,
    _g4_s134 = (1500u + sizeof(_g4_t_v299)) > _g4_s133 ? (1500u + sizeof(_g4_t_v299)) : _g4_s133,
    _g4_s135 = (2012u + sizeof(_g4_t_v300)) > _g4_s134 ? (2012u + sizeof(_g4_t_v300)) : _g4_s134,
    _g4_s136 = (2016u + sizeof(_g4_t_v301)) > _g4_s135 ? (2016u + sizeof(_g4_t_v301)) : _g4_s135,
    _g4_s137 = (2020u + sizeof(_g4_t_v302)) > _g4_s136 ? (2020u + sizeof(_g4_t_v302)) : _g4_s136,
    _g4_s138 = (2024u + sizeof(_g4_t_v303)) > _g4_s137 ? (2024u + sizeof(_g4_t_v303)) : _g4_s137
  };
  alignas(16) uint8_t _g4_sf[_g4_s138];
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 0u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 8u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 12u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 64u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 84u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 88u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 89u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 90u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 92u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 104u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 108u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 112u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 116u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 120u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 128u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 132u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 136u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 144u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 152u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 152u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 156u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 156u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 160u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 164u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 168u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 172u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 176u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 180u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 184u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 188u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 192u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 196u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 196u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 200u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 208u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 212u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 212u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 212u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 216u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 216u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 216u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 220u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 220u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 224u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 224u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 228u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 228u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 228u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 228u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 232u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 232u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 232u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 232u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 232u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 232u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 232u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 236u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 236u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 236u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 236u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 236u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 240u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 240u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 240u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 244u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 244u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 244u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 244u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 244u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 248u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 248u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 248u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 248u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 248u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 248u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 248u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 252u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 252u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 256u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 256u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 260u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 260u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 260u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 260u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 260u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 260u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 260u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 264u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 264u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 264u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 268u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 272u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 272u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 276u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 277u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 279u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 280u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 284u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 300u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 316u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 320u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 324u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 332u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 336u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 340u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 344u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 348u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 352u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 356u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 360u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 364u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 368u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 372u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 376u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 380u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 384u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 388u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 392u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 396u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 400u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 404u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 408u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 412u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 416u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 420u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 424u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 428u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 432u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 436u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 440u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 444u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 460u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 476u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 1500u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 2012u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 2016u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 2020u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 2024u);

  v303[131] = (uint32_t)(uintptr_t)(&a2);
  v182 = a2;
  v7 = a3;
  v181 = a3;
  v8 = a4;
  v199 = a5;
  v172 = a6;
  v171 = a7;
  if ( (uint8_t)(*(uint8_t *)(a3 + 21) - 1) > 1u )
  {
    if ( (uint8_t)(*(uint8_t *)(a3 + 21) - 4) > 2u )
    {
      hkErrStream::Construct((hkErrStream::Self *)v299, (hkString::Self *)&v300, 512);
      hkOstream::opShl(
        (int)(uintptr_t)(v299),
        (hkString::Self *)"hkpShapeCollection must be a triangle collection that supports welding.");
      hkError::messageWarning(
        (hkError::Self *)0x3F508C6A,
        (int)(uintptr_t)(&v300),
        "Util/Welding/hkpMeshWeldingUtility.cpp",
        (const char *)&dword_110 + 3,
        (int)(uintptr_t)(v168));
      hkErrStream::Destroy((hkErrStream::Self *)v299);
      return;
    }
    v7 = a3;
  }
  G4_VCALL<void>(v7, 80, a4);
  if ( v8 != 6 )
  {
    v169 = v8 != 5;
    v180 = v181 + 16;
    v9 = *(uint32_t *)(v181 + 16);
    *(uint8_t *)(v181 + 20) = 1;
    v183 = (char *)(*(int (**)(int))(v9 + 12))(v181 + 16);
    if ( v183 != (char *)-1 )
    {
LABEL_10:
      v10 = (float *)(*(int (**)(int, char *, char *))(*(uint32_t *)(v181 + 16) + 24))(v180, v183, v298);
      v193 = v10;
      if ( *((uint8_t *)v10 + 8) != 2 )
        goto LABEL_9;
      v170 = (uint8_t *)(v10 + 8);
      hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(
        (hkpMeshWeldingUtility::Self *)(v10 + 8),
        (const hkVector4f::Self *)(v10 + 12),
        (const hkVector4f::Self *)(v10 + 16),
        (const hkVector4f::Self *)&v265,
        v168);
      *(uint32_t *)v174 = 0;
      v173 = 0;
LABEL_12:
      v269 = nullptr;
      v270 = 0;
      v271 = 0x80000000;
      *(float *)&v11 = 3.1415927f;
      if ( v172 != 0 )
        *(float *)&v11 = 0.0;
      v268 = (hkpWeldingUtility::Self *)v11;
      v272 = *(float *)&v170[16 * *(uint32_t *)v174];
      v273 = *(float *)&v170[16 * *(uint32_t *)v174 + 4];
      v274 = *(float *)&v170[16 * *(uint32_t *)v174 + 8];
      v275 = *(uint32_t *)&v170[16 * *(uint32_t *)v174 + 12];
      v12 = (float *)&v170[16 * ((*(uint32_t *)v174 + 1) % 3)];
      v276 = *v12;
      v277 = v12[1];
      v278 = v12[2];
      v279 = *((uint32_t *)v12 + 3);
      v13 = 16 * ((*(uint32_t *)v174 + 2) % 3);
      v280 = *(float *)&v170[v13];
      v281 = *(float *)&v170[v13 + 4];
      v282 = *(float *)&v170[v13 + 8];
      v283 = *(uint32_t *)&v170[v13 + 12];
      v300 = 0.00001f;
      if ( hkcdTriangleUtil::isDegenerate(&v272, &v276, &v280, &v300) != 0 )
      {
        v270 = 0;
        if ( v271 >= 0 )
          goto LABEL_89;
        goto LABEL_90;
      }
      if ( (int)v199[1] <= 0 )
      {
        v259 = 0;
        goto LABEL_102;
      }
      v200 = 0;
      v259 = 0;
      while ( 1 )
      {
        v14 = *v199 + 80 * v200;
        v242 = *(float *)(v14 + 20);
        v257 = *(uint32_t *)(v14 + 64);
        v222 = *(float *)(v14 + 32);
        v215 = *(float *)(v14 + 36);
        v15 = v182[8];
        v16 = *(float *)(v14 + 4);
        v235 = *(float *)(v14 + 24);
        v211 = *(float *)(v14 + 40);
        v17 = v182[9];
        v18 = *(float *)(v14 + 8);
        v19 = *(float *)(v14 + 16);
        v20 = v182[10];
        v230 = (float)((float)(v16 * v17) + (float)(*(float *)v14 * v15)) + (float)(v18 * v20);
        v253 = (float)((float)(v242 * v17) + (float)(v19 * v15)) + (float)(v235 * v20);
        v201 = (float)((float)(v17 * v215) + (float)(v15 * v222)) + (float)(v20 * v211);
        v21 = v182[4];
        v22 = v182[5];
        v23 = v182[6];
        v227 = (float)((float)(v16 * v22) + (float)(*(float *)v14 * v21)) + (float)(v18 * v23);
        v246 = (float)((float)(v242 * v22) + (float)(v19 * v21)) + (float)(v235 * v23);
        v209 = (float)((float)(v22 * v215) + (float)(v21 * v222)) + (float)(v23 * v211);
        v24 = v182[1];
        v25 = v182[2];
        *(float *)&v244 = (float)((float)(v24 * v16) + (float)(*v182 * *(float *)v14)) + (float)(v25 * v18);
        v256 = (float)((float)(v242 * v24) + (float)(*v182 * v19)) + (float)(v235 * v25);
        v26 = (float)(*v182 * v222) + (float)(v24 * v215);
        v27 = v182[12] - *(float *)(v14 + 48);
        v28 = v182[13] - *(float *)(v14 + 52);
        v29 = v26 + (float)(v25 * v211);
        v30 = v182[14] - *(float *)(v14 + 56);
        v207 = (float)((float)(v16 * v28) + (float)(*(float *)v14 * v27)) + (float)(v18 * v30);
        v31 = (float)(v242 * v28) + (float)(v19 * v27);
        v32 = (float)((float)(v27 * v222) + (float)(v28 * v215)) + (float)(v30 * v211);
        v204 = (float)(v235 * v30) + v31;
        v284 = (float)((float)(*(float *)&v244 * v265) + (float)(v227 * v266)) + (float)(v230 * v267);
        v285 = (float)((float)(v256 * v265) + (float)(v246 * v266)) + (float)(v253 * v267);
        v286 = (float)((float)(v265 * v29) + (float)(v266 * v209)) + (float)(v267 * v201);
        v287 = v286;
        v223 = (float)((float)((float)(v227 * v273) + (float)(*(float *)&v244 * v272)) + (float)(v230 * v274)) + v207;
        v288 = v223;
        v216 = (float)((float)((float)(v246 * v273) + (float)(v256 * v272)) + (float)(v253 * v274)) + v204;
        v289 = v216;
g4_m128_raw(v34) = v244;
        v33 = (float)((float)((float)(v272 * v29) + (float)(v273 * v209)) + (float)(v274 * v201)) + v32;
        v290 = v33;
        v291 = v33;
        *(float *)g4_m128_ptr<int32_t>(v34) = (float)((float)((float)(*(float *)&v244 * v276) + (float)(v227 * v277))
                                        + (float)(v230 * v278))
                                + v207;
        v292 = *(float *)g4_m128_ptr<int32_t>(v34);
        v236 = (float)((float)((float)(v246 * v277) + (float)(v256 * v276)) + (float)(v253 * v278)) + v204;
        v293 = v236;
        v212 = (float)((float)((float)(v277 * v209) + (float)(v276 * v29)) + (float)(v278 * v201)) + v32;
        v294 = v212;
        v295 = v212;
        v243 = (float)((float)((float)(v227 * v281) + (float)(*(float *)&v244 * v280)) + (float)(v230 * v282)) + v207;
        v188 = (float)((float)((float)(v209 * v281) + (float)(v29 * v280)) + (float)(v282 * v201)) + v32;
        v35 = v34;
        v245 = (float)((float)((float)(v246 * v281) + (float)(v256 * v280)) + (float)(v253 * v282)) + v204;
        *(float *)g4_m128_ptr<int32_t>(v35) = *(float *)g4_m128_ptr<int32_t>(v34) - v223;
        v36 = v236 - v216;
        v37 = v35;
        *(float *)g4_m128_ptr<int32_t>(v37) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v35) * *(float *)g4_m128_ptr<int32_t>(v35)) + (float)(v36 * v36))
                                + (float)((float)(v212 - v33) * (float)(v212 - v33));
        v38 = 0.0;
        if ( *(float *)g4_m128_ptr<int32_t>(v37) > 0.0 )
        {
          v39 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v37);
          v40 = _mm_cvtsi128_si32(v37) >> 1;
          v41 = (_mm_cvtsi128_si32(v37) + 2139095040) >> 31;
          v42 = (float)(1.5 * COERCE_FLOAT(v41 & (1597463174 - v40)))
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v37)) * COERCE_FLOAT(v41 & (1597463174 - v40)))
                      * (float)(COERCE_FLOAT(v41 & (1597463174 - v40)) * COERCE_FLOAT(v41 & (1597463174 - v40))));
          v38 = (float)(1.5 * (float)((float)(1.5 * v42) - (float)((float)(v39 * v42) * (float)(v42 * v42))))
              - (float)((float)(v39 * (float)((float)(1.5 * v42) - (float)((float)(v39 * v42) * (float)(v42 * v42))))
                      * (float)((float)((float)(1.5 * v42) - (float)((float)(v39 * v42) * (float)(v42 * v42)))
                              * (float)((float)(1.5 * v42) - (float)((float)(v39 * v42) * (float)(v42 * v42)))));
        }
        v300 = COERCE_FLOAT(v303);
        v301 = 0;
        v302 = -2147483520;
        v189 = (float)(*(float *)g4_m128_ptr<int32_t>(v34) - v223) * v38;
        v192 = v36 * v38;
        v190 = v38 * (float)(v212 - v33);
g4_m128_raw(v43) = 0x7F7FFFEEu;
        *(float *)g4_m128_ptr<int32_t>(v43) = fminf(3.40282e38f, v223);
        v44 = COERCE_FLOAT(_mm_cvtsi128_si32(v43));
g4_m128_raw(v45) = 0x7F7FFFEEu;
        *(float *)g4_m128_ptr<int32_t>(v45) = fminf(3.40282e38f, v33);
        v46 = COERCE_FLOAT(_mm_cvtsi128_si32(v45));
        v47 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_xor_ps(g4_m128_u32(0x7F7FFFEEu), *(__m128 *)&dword_1C7C1B0))));
        *(float *)g4_m128_ptr<int32_t>(v47) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v47), v33);
        v299[0] = fminf(v44, *(float *)g4_m128_ptr<int32_t>(v34));
        v299[4] = fmaxf(fmaxf(-3.40282e38f, v223), *(float *)g4_m128_ptr<int32_t>(v34));
        v299[1] = fminf(fminf(3.40282e38f, v216), v236);
        v299[5] = fmaxf(fmaxf(-3.40282e38f, v216), v236);
        v299[6] = fmaxf(fmaxf(-3.40282e38f, v33), v212);
        v299[2] = fminf(fminf(3.40282e38f, v33), v212);
        v299[3] = fminf(v46, v212);
        v299[7] = fmaxf(COERCE_FLOAT(_mm_cvtsi128_si32(v47)), v212);
        v166 = COERCE_FLOAT(v299);
        G4_VCALL<void>(v257, 76);
        if ( v301 > 0 )
          break;
LABEL_81:
        v301 = 0;
        if ( v302 >= 0 )
        {
          v166 = v300;
          (*(void (**)(uint32_t *))(hkContainerHeapAllocator::s_alloc + 20))((uint32_t *)(&hkContainerHeapAllocator::s_alloc));
        }
        if ( v199[1] <= ++v200 )
        {
          if ( v259 != 0 && v171 != 0 )
          {
            v173 = hkpMeshWeldingUtility::modifyCombinedEdgesBitcode(
                     (hkpMeshWeldingUtility::Self *)v173,
                     v174[0],
                     31);
            goto LABEL_87;
          }
LABEL_102:
          v128 = *(float *)&v268;
          v129 = v270;
          if ( v270 == 0 )
            goto LABEL_126;
          if ( v270 > 1 )
          {
            LOBYTE(v167) = 0;
            v166 = 0.0;
            hkAlgorithm::quickSortRecursive_5ae545(v269);
            v129 = v270;
          }
          v300 = 0.0;
          v301 = 0;
          v302 = 0x80000000;
          if ( v129 <= 0 )
          {
            v139 = 0x80000000;
LABEL_135:
            v128 = 0.0;
            goto LABEL_124;
          }
          v130 = 0;
          v131 = 1;
          while ( 2 )
          {
            if ( v131 >= v129 )
            {
              v258 = 3 * v130;
              goto LABEL_109;
            }
            v258 = 3 * v130;
            LODWORD(v166) = (uint32_t)(uintptr_t)(&v269[3 * v130]);
            g4_hkEntry_ne(&v261);
            if ( v261 != 0 )
            {
LABEL_109:
              if ( v131 - v130 <= 0 )
              {
                v135 = v269[v258 + 2];
                v136 = 0.0;
              }
              else
              {
                v132 = 0.0;
                v133 = &v269[3 * v130];
                do
                {
                  v134 = v133[1];
                  v133 += 3;
                  v132 = (float)(v134 - *(v133 - 3)) + v132;
                }
                while ( v133 != &v269[3 * v131] );
                v135 = v269[v258 + 2];
                if ( v132 < 0.0 )
                  v136 = 0.0;
                else
                  v136 = fminf(1.0, v132);
              }
              v137 = v301;
              if ( v301 == (v302 & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)&v300,
                  &byte_9[3]);
                v137 = v301;
              }
              v130 = v131;
              v138 = (float *)(LODWORD(v300) + 12 * v137);
              v138[1] = v136;
              *v138 = 0.0;
              v138[2] = v135;
              ++v301;
            }
            ++v131;
            v129 = v270;
            if ( v270 >= v131 )
              continue;
            break;
          }
          v139 = v302;
          if ( v301 <= 0 )
            goto LABEL_135;
          v140 = (float *)LODWORD(v300);
          v128 = 3.1415927f;
          v141 = 0;
          do
          {
            if ( (float)(v140[1] - *v140) >= 0.6f )
            {
              v141 = 1;
              v128 = fminf(v128, v140[2]);
            }
            v140 += 3;
          }
          while ( v140 != (float *)(LODWORD(v300) + 12 * v301) );
          if ( v141 == 0 )
            goto LABEL_135;
LABEL_124:
          v301 = 0;
          if ( v139 >= 0 )
          {
            v166 = v300;
            (*(void (**)(uint32_t *))(hkContainerHeapAllocator::s_alloc + 20))((uint32_t *)(&hkContainerHeapAllocator::s_alloc));
          }
LABEL_126:
          v142 = hkpWeldingUtility::calcEdgeAngleBitcode((hkpWeldingUtility::Self *)LODWORD(v128), v166);
          v173 = hkpMeshWeldingUtility::modifyCombinedEdgesBitcode(
                   (hkpMeshWeldingUtility::Self *)v173,
                   v174[0],
                   v142);
          if ( v259 != 0 )
LABEL_87:
            v173 |= 0x8000u;
          v270 = 0;
          if ( v271 >= 0 )
LABEL_89:
            (*(void (**)(uint32_t *, float *, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v269,
              12 * v271);
LABEL_90:
          if ( *(uint32_t *)v174 != 2 )
          {
            ++*(uint32_t *)v174;
            goto LABEL_12;
          }
          G4_VCALL<void>(v181, 84, v183, (int16_t)v173);
LABEL_9:
          v183 = (char *)(*(int (**)(int, char *))(*(uint32_t *)(v181 + 16) + 16))(v180, v183);
          if ( v183 == (char *)-1 )
            return;
          goto LABEL_10;
        }
      }
      v48 = 0;
LABEL_22:
      v49 = *(char **)(LODWORD(v300) + 4 * v48);
      v254 = v49;
      v50 = G4_VCALL<int>(v257, 64);
      v166 = *(float *)&v49;
      v51 = G4_VCALL<int>(v50, 24);
      v52 = (float *)v51;
      if ( *(uint8_t *)(v51 + 8) != 2 )
        goto LABEL_21;
      v237 = (hkVector4f::Self *)(v51 + 64);
      v191 = (hkVector4f::Self *)(v51 + 48);
      v228 = (hkpMeshWeldingUtility::Self *)(v51 + 32);
      v299[0] = 925353388;
      if ( hkcdTriangleUtil::isDegenerate(v51 + 32, v51 + 48, v51 + 64, v299) != 0 )
        goto LABEL_21;
      v210 = v52[11];
      v213 = v52[10];
      v224 = v52[8];
      v53 = fabs(v193[10] - v213);
      v217 = v52[9];
      v54 = (fabs(v193[8] - v224) <= 0.001f) | (fabs(v193[9] - v217) <= 0.001f ? 2 : 0);
      v55 = v53 <= 0.001f ? 4 : 0;
      if ( fabs(v193[11] - v210) <= 0.001f )
        v55 = v53 > 0.001f ? 8 : 12;
      if ( (((uint8_t)v55 | v54) & 7) == 7 )
      {
        v56 = fabs(v193[14] - v52[14]);
        v57 = (fabs(v193[12] - v52[12]) <= 0.001f) | (fabs(v193[13] - v52[13]) <= 0.001f ? 2 : 0);
        v58 = v56 <= 0.001f ? 4 : 0;
        if ( fabs(v193[15] - v52[15]) <= 0.001f )
          v58 = v56 > 0.001f ? 8 : 12;
        if ( (((uint8_t)v58 | v57) & 7) == 7 )
        {
          v231 = v52[19];
          v125 = fabs(v193[18] - v52[18]);
          v126 = (fabs(v193[16] - v52[16]) <= 0.001f) | (fabs(v193[17] - v52[17]) <= 0.001f ? 2 : 0);
          v127 = v125 <= 0.001f ? 4 : 0;
          if ( fabs(v193[19] - v231) <= 0.001f )
            v127 = v125 > 0.001f ? 8 : 12;
          if ( (((uint8_t)v127 | v126) & 7) == 7 )
            goto LABEL_21;
          v59 = v52[12];
          v202 = v52[16];
          *(float *)&v205 = v59;
          v208 = v52[18];
          v195 = v52[17];
          v196 = v52[15];
          v197 = v52[14];
          v194 = v52[13];
        }
        else
        {
          v59 = v52[12];
          v195 = v52[17];
          v208 = v52[18];
          v231 = v52[19];
          v202 = v52[16];
          *(float *)&v205 = v59;
          v196 = v52[15];
          v197 = v52[14];
          v194 = v52[13];
        }
      }
      else
      {
        v197 = v52[14];
        v196 = v52[15];
        v195 = v52[17];
        v208 = v52[18];
        v231 = v52[19];
        v59 = v52[12];
        v194 = v52[13];
        *(float *)&v205 = v59;
        v202 = v52[16];
      }
      v60 = v59 - v292;
      v61 = (fabs(v224 - v292) <= 0.001f) | (fabs(v217 - v293) <= 0.001f ? 2 : 0);
      v62 = fabs(v213 - v294) <= 0.001f ? 4 : 0;
      v247 = (hkVector4f::Self *)(fabs(v213 - v294) > 0.001f ? 8 : 12);
      if ( fabs(v210 - v295) <= 0.001f )
        v62 = (uint8_t)(uintptr_t)v247;
      v186 = ((v62 | v61) & 7) == 7;
      v63 = fabs(v197 - v294);
      v64 = (fabs(v60) <= 0.001f) | (fabs(v194 - v293) <= 0.001f ? 2 : 0);
      v65 = v63 <= 0.001f ? 4 : 0;
      if ( fabs(v196 - v295) <= 0.001f )
        v65 = v63 > 0.001f ? 8 : 12;
      v66 = (((uint8_t)v65 | v64) & 7) == 7;
      v67 = fabs(v208 - v294);
      v68 = (fabs(v202 - v292) <= 0.001f) | (fabs(v195 - v293) <= 0.001f ? 2 : 0);
      v69 = v67 > 0.001f ? 8 : 12;
      if ( fabs(v231 - v295) > 0.001f )
        LOBYTE(v69) = v67 <= 0.001f ? 4 : 0;
      if ( v186 || v66 || ((v68 | (uint8_t)v69) & 7) == 7 )
      {
        v184 = fabs(v217 - v245);
        v70 = fabs(v213 - v188);
        v176 = fabs(v224 - v243) <= 0.001f;
        v179 = fabs(v210 - v188);
        v71 = v70 <= 0.001f ? 4 : 0;
        if ( v179 <= 0.001f )
          v71 = v70 > 0.001f ? 8 : 12;
        v187 = fabs(v194 - v245);
        HIBYTE(v260) = (v71 & 7 | v176 & 7 | (v184 <= 0.001f ? 2 : 0)) == 7;
        v178 = fabs(v196 - v188);
        v72 = fabs(v197 - v188);
        v175 = fabs(*(float *)&v205 - v243) <= 0.001f;
        v73 = v72 <= 0.001f ? 4 : 0;
        if ( v178 <= 0.001f )
          v73 = v72 > 0.001f ? 8 : 12;
        v74 = fabs(v208 - v188);
        v75 = fabs(v195 - v245);
        v76 = fabs(v231 - v188);
        v177 = fabs(v202 - v243) <= 0.001f;
        v77 = v74 > 0.001f ? 8 : 12;
        if ( v76 > 0.001f )
          LOBYTE(v77) = v74 <= 0.001f ? 4 : 0;
        LOBYTE(v260) = (v73 & 7 | v175 & 7 | (v187 <= 0.001f ? 2 : 0)) == 7;
        if ( v260 != 0 || (v177 & 7 | (v75 <= 0.001f ? 2 : 0) | v77 & 7) == 7 )
          goto LABEL_21;
      }
      else
      {
        v187 = fabs(v194 - v245);
        v179 = fabs(v210 - v188);
        v184 = fabs(v217 - v245);
        v70 = fabs(v213 - v188);
        v76 = fabs(v231 - v188);
        v178 = fabs(v196 - v188);
        v72 = fabs(v197 - v188);
        v75 = fabs(v195 - v245);
        v74 = fabs(v208 - v188);
        v177 = fabs(v202 - v243) <= 0.001f;
        v176 = fabs(v224 - v243) <= 0.001f;
        v175 = fabs(*(float *)&v205 - v243) <= 0.001f;
      }
      v78 = v70 <= 0.001f ? 4 : 0;
      if ( v179 <= 0.001f )
        v78 = v70 > 0.001f ? 8 : 12;
      v185 = (v78 & 7 | v176 & 7 | (v184 <= 0.001f ? 2 : 0)) == 7;
      v79 = v72 <= 0.001f ? 4 : 0;
      if ( v178 <= 0.001f )
        v79 = v72 > 0.001f ? 8 : 12;
      v80 = v74 > 0.001f ? 8 : 12;
      if ( v76 > 0.001f )
        LOBYTE(v80) = v74 <= 0.001f ? 4 : 0;
      if ( v185
        || (v79 & 7 | v175 & 7 | (v187 <= 0.001f ? 2 : 0)) == 7
        || (v177 & 7 | (v75 <= 0.001f ? 2 : 0) | v80 & 7) == 7 )
      {
        v81 = fabs(v213 - v290);
        v82 = (fabs(v224 - v288) <= 0.001f) | (fabs(v217 - v289) <= 0.001f ? 2 : 0);
        v83 = v81 <= 0.001f ? 4 : 0;
        if ( fabs(v210 - v291) <= 0.001f )
          v83 = v81 > 0.001f ? 8 : 12;
        v84 = fabs(v197 - v290);
        v225 = (((uint8_t)v83 | v82) & 7) == 7;
        v85 = (fabs(*(float *)&v205 - v288) <= 0.001f) | (fabs(v194 - v289) <= 0.001f ? 2 : 0);
        v86 = v84 <= 0.001f ? 4 : 0;
        if ( fabs(v196 - v291) <= 0.001f )
          v86 = v84 > 0.001f ? 8 : 12;
        v87 = fabs(v208 - v290);
        v218 = (((uint8_t)v86 | v85) & 7) == 7;
        v88 = (fabs(v202 - v288) <= 0.001f) | (fabs(v195 - v289) <= 0.001f ? 2 : 0);
        v89 = v87 > 0.001f ? 8 : 12;
        if ( fabs(v231 - v291) > 0.001f )
          LOBYTE(v89) = v87 <= 0.001f ? 4 : 0;
        if ( v225 || v218 || ((v88 | (uint8_t)v89) & 7) == 7 )
          goto LABEL_21;
      }
      hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(v228, v191, v237, (const hkVector4f::Self *)v296, v168);
      if ( fabs((float)((float)(v189 * v296[0]) + (float)(v192 * v296[1])) + (float)(v190 * v296[2])) >= 0.05f )
        goto LABEL_21;
g4_m128_raw(v90) = LODWORD(v192);
      *(float *)g4_m128_ptr<int32_t>(v90) = (float)(v192 * v286) - (float)(v190 * v285);
      v91 = (float)(v190 * v284) - (float)(v286 * v189);
      v92 = (float)(v285 * v189) - (float)(v284 * v192);
      v93 = v90;
      *(float *)g4_m128_ptr<int32_t>(v93) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v90) * *(float *)g4_m128_ptr<int32_t>(v90)) + (float)(v91 * v91))
                              + (float)(v92 * v92);
      if ( *(float *)g4_m128_ptr<int32_t>(v93) <= 0.0 )
      {
        v98 = 0.0;
        v99 = 0.0;
      }
      else
      {
        v94 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v93);
        v95 = ((_mm_cvtsi128_si32(v93) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v93) >> 1));
        v96 = (float)(1.5 * *(float *)&v95)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v93)) * *(float *)&v95)
                    * (float)(*(float *)&v95 * *(float *)&v95));
        v97 = (float)(1.5 * (float)((float)(1.5 * v96) - (float)((float)(v94 * v96) * (float)(v96 * v96))))
            - (float)((float)(v94 * (float)((float)(1.5 * v96) - (float)((float)(v94 * v96) * (float)(v96 * v96))))
                    * (float)((float)((float)(1.5 * v96) - (float)((float)(v94 * v96) * (float)(v96 * v96)))
                            * (float)((float)(1.5 * v96) - (float)((float)(v94 * v96) * (float)(v96 * v96)))));
        v98 = 0.0 * v97;
        v99 = v97;
      }
      v297[3] = v98;
      v297[0] = *(float *)g4_m128_ptr<int32_t>(v90) * v99;
      v297[1] = v91 * v99;
      v297[2] = v92 * v99;
      hkpMeshWeldingUtility::calcAngleForEdge(
        (hkpMeshWeldingUtility::Self *)&v284,
        (const hkVector4f::Self *)v297,
        (const hkVector4f::Self *)v296);
      v206 = (hkpTriangleShape::Self *)v52;
      v203 = v48;
      v198 = a1;
      v214 = 0;
      v100 = 0;
      v101 = (float *)v228;
      while ( 1 )
      {
        ++v100;
        v248 = v101[1];
        v102 = (float *)((char *)v228 + 16 * (v100 % 3));
g4_m128_raw(v103) = *(unsigned int *)v102;
        *(float *)g4_m128_ptr<int32_t>(v103) = *(float *)g4_m128_ptr<int32_t>(v103) - *v101;
        v104 = v102[1] - v248;
        v105 = v102[2] - v101[2];
        v238 = v101[2];
        v106 = v103;
        v219 = v102[2];
        *(float *)g4_m128_ptr<int32_t>(v106) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v103) * *(float *)g4_m128_ptr<int32_t>(v103))
                                         + (float)(v104 * v104))
                                 + (float)(v105 * v105);
        v107 = 0.0;
        if ( *(float *)g4_m128_ptr<int32_t>(v106) > 0.0 )
        {
          v108 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v106);
          v109 = _mm_cvtsi128_si32(v106) >> 1;
          v110 = (_mm_cvtsi128_si32(v106) + 2139095040) >> 31;
          v111 = (float)(1.5 * COERCE_FLOAT(v110 & (1597463174 - v109)))
               - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v106)) * COERCE_FLOAT(v110 & (1597463174 - v109)))
                       * (float)(COERCE_FLOAT(v110 & (1597463174 - v109)) * COERCE_FLOAT(v110 & (1597463174 - v109))));
          v107 = (float)(1.5 * (float)((float)(1.5 * v111) - (float)((float)(v108 * v111) * (float)(v111 * v111))))
               - (float)((float)(v108
                               * (float)((float)(1.5 * v111) - (float)((float)(v108 * v111) * (float)(v111 * v111))))
                       * (float)((float)((float)(1.5 * v111) - (float)((float)(v108 * v111) * (float)(v111 * v111)))
                               * (float)((float)(1.5 * v111) - (float)((float)(v108 * v111) * (float)(v111 * v111)))));
        }
        v112 = v104 * v107;
        if ( (float)((float)((float)((float)((float)(v192 * (float)(v105 * v107)) - (float)(v190 * v112))
                                   * (float)((float)(v192 * (float)(v105 * v107)) - (float)(v190 * v112)))
                           + (float)((float)((float)(v190 * (float)(*(float *)g4_m128_ptr<int32_t>(v103) * v107))
                                           - (float)((float)(v105 * v107) * v189))
                                   * (float)((float)(v190 * (float)(*(float *)g4_m128_ptr<int32_t>(v103) * v107))
                                           - (float)((float)(v105 * v107) * v189))))
                   + (float)((float)((float)(v112 * v189) - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v103) * v107) * v192))
                           * (float)((float)(v112 * v189) - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v103) * v107) * v192)))) >= 0.000000009999999f )
          goto LABEL_70;
        v113 = *v101 - v288;
        v114 = v190 * (float)(v248 - v289);
        v249 = v248 - v289;
        v115 = v238 - v290;
        if ( (float)((float)((float)((float)(v114 - (float)(v192 * (float)(v238 - v290)))
                                   * (float)(v114 - (float)(v192 * (float)(v238 - v290))))
                           + (float)((float)((float)(v189 * v115) - (float)(v190 * v113))
                                   * (float)((float)(v189 * v115) - (float)(v190 * v113))))
                   + (float)((float)((float)(v192 * v113) - (float)(v249 * v189))
                           * (float)((float)(v192 * v113) - (float)(v249 * v189)))) > 0.0001f )
          goto LABEL_70;
        v232 = *v102 - v288;
        v239 = v102[1] - v289;
        if ( (float)((float)((float)((float)((float)(v190 * v239) - (float)((float)(v219 - v290) * v192))
                                   * (float)((float)(v190 * v239) - (float)((float)(v219 - v290) * v192)))
                           + (float)((float)((float)((float)(v219 - v290) * v189) - (float)(v190 * v232))
                                   * (float)((float)((float)(v219 - v290) * v189) - (float)(v190 * v232))))
                   + (float)((float)((float)(v192 * v232) - (float)(v239 * v189))
                           * (float)((float)(v192 * v232) - (float)(v239 * v189)))) > 0.0001f )
          goto LABEL_70;
g4_m128_raw(v143) = LODWORD(v292);
        *(float *)g4_m128_ptr<int32_t>(v143) = v292 - v288;
        v144 = v143;
        *(float *)g4_m128_ptr<int32_t>(v144) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v143) * *(float *)g4_m128_ptr<int32_t>(v143))
                                         + (float)((float)(v293 - v289) * (float)(v293 - v289)))
                                 + (float)((float)(v294 - v290) * (float)(v294 - v290));
        v145 = _mm_cvtsi128_si32(v144);
        v146 = (2130706432 - v145) & ((v145 ^ (v145 + 2139095040)) >> 31);
        v147 = (float)(2.0
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v144)
                             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v144) * *(float *)&v146))
                                     * *(float *)&v146)))
             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v144) * *(float *)&v146)) * *(float *)&v146);
        v148 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v144) * v147)) * v147;
        v149 = fmaxf(
                 fminf(
                   (float)((float)((float)(v113 * (float)(v292 - v288)) + (float)(v249 * (float)(v293 - v289)))
                         + (float)(v115 * (float)(v294 - v290)))
                 * v148,
                   1.0),
                 0.0);
        v150 = fmaxf(
                 fminf(
                   (float)((float)((float)((float)(v292 - v288) * v232) + (float)((float)(v293 - v289) * v239))
                         + (float)((float)(v219 - v290) * (float)(v294 - v290)))
                 * v148,
                   1.0),
                 0.0);
        if ( fabs(v150 - v149) <= 0.1f )
          goto LABEL_70;
        if ( v169 )
        {
          if ( v150 > v149 )
          {
            hkErrStream::Construct((hkErrStream::Self *)v264, (hkString::Self *)v299, 512);
            v158 = hkOstream::opShl(
                     (int)(uintptr_t)(v264),
                     (hkString::Self *)"Inconsistent triangle winding between at least triangle ");
            v159 = hkOstream::opShl(v158, v183);
            v160 = hkOstream::opShl(v159, (hkString::Self *)" and triangle ");
            v161 = hkOstream::opShl(v160, v254);
            hkOstream::opShl(v161, (hkString::Self *)". One sided welding will not work.");
            hkError::messageWarning(
              (hkError::Self *)0xABBA751E,
              (int)(uintptr_t)(v299),
              "Util/Welding/hkpMeshWeldingUtility.cpp",
              (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_1B4)->st_shndx,
              (int)(uintptr_t)(v168));
            hkErrStream::Destroy((hkErrStream::Self *)v264);
            v166 = *(float *)&v254;
            G4_VCALL<void>(v181, 84);
            v259 = 1;
            goto LABEL_70;
          }
        }
        else if ( v150 > v149 )
        {
          v151 = v149;
          goto LABEL_144;
        }
        v151 = v150;
LABEL_144:
        v152 = fmaxf(v149, v150);
        v153 = v152;
        if ( v270 > 0 )
        {
          v226 = v269;
          if ( v151 > *v269 )
          {
            v241 = (hkVector4f::Self *)&dword_18;
            v252 = 3;
            v162 = 1;
          }
          else
          {
            v154 = v269;
            v155 = 0;
            do
            {
              if ( ++v155 == v270 )
              {
                v220 = 0;
                v252 = 3 * v270;
                v241 = (hkVector4f::Self *)(12 * v270 + 12);
                goto LABEL_150;
              }
              v154 += 3;
            }
            while ( v151 <= *v154 );
            v162 = v155 + 1;
            v252 = 3 * v162;
            v241 = (hkVector4f::Self *)(12 * v162 + 12);
          }
          v220 = 12 * (v270 - v162);
LABEL_150:
          v234 = v270 + 1;
          v156 = v271 & 0x3FFFFFFF;
          if ( v270 + 1 <= (v271 & 0x3FFFFFFF) )
            goto LABEL_151;
          goto LABEL_162;
        }
        v234 = v270 + 1;
        if ( v270 + 1 > (v271 & 0x3FFFFFFF) )
        {
          v220 = 0;
          v234 = 1;
          v252 = 3 * v270;
          v241 = (hkVector4f::Self *)(12 * v270 + 12);
          v156 = 0;
LABEL_162:
          v165 = 2 * v156;
          if ( v165 < v234 )
            v165 = v234;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v262,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            &v269,
            v165,
            12);
          v226 = v269;
          v153 = v152;
          goto LABEL_151;
        }
        v220 = 0;
        v226 = v269;
        v252 = 3 * v270;
        v241 = (hkVector4f::Self *)(12 * v270 + 12);
LABEL_151:
        hkMemUtil::memMove((hkMemUtil::Self *)((char *)v241 + (uint32_t)(uintptr_t)(v226)), &v226[v252], v220, (int)(uintptr_t)(v167));
        v157 = &v269[v252];
        v214 = 1;
        *v157 = v151;
        v157[1] = v153;
        v157[2] = v198;
        v270 = v234;
LABEL_70:
        v101 += 4;
        if ( v100 == 3 )
        {
          v48 = v203;
          if ( v214 == 0 )
          {
            hkBuildClipPlanesForTriangle((hkVector4f::Self *)v299, v206, 0.05f);
            if ( (uint8_t)hkClipEdgeAgainstPlanes(
                                    (const hkVector4f::Self *)&v288,
                                    (const hkVector4f::Self *)&v292,
                                    5,
                                    (const hkVector4f::Self *)v299,
                                    v263,
                                    v264) != 0 )
            {
              v229 = (hkpMeshWeldingUtility::Self *)LODWORD(v264[0]);
              v116 = v263[0];
              if ( v270 <= 0 )
              {
                v240 = (hkVector4f::Self *)(v270 + 1);
                if ( v270 + 1 <= (v271 & 0x3FFFFFFF) )
                {
                  v233 = 0;
                  v250 = (hkVector4f::Self *)v269;
                  v119 = 12 * v270;
                  v255 = (char *)(12 * v270 + 12);
                  goto LABEL_80;
                }
                v240 = (hkVector4f::Self *)(&dword_0 + 1);
                v119 = 12 * v270;
                v233 = 0;
                v120 = 1;
                v255 = (char *)(12 * v270 + 12);
                v121 = 0;
              }
              else
              {
                v250 = (hkVector4f::Self *)v269;
                if ( v263[0] > *v269 )
                {
                  v255 = (char *)&dword_18;
                  v119 = 12;
                  v163 = 1;
                }
                else
                {
                  v117 = v269;
                  v118 = 0;
                  do
                  {
                    if ( ++v118 == v270 )
                    {
                      v233 = 0;
                      v119 = 12 * v270;
                      v255 = (char *)(12 * v270 + 12);
                      goto LABEL_79;
                    }
                    v117 += 3;
                  }
                  while ( v263[0] <= *v117 );
                  v163 = v118 + 1;
                  v119 = 12 * v163;
                  v255 = (char *)(12 * v163 + 12);
                }
                v233 = 12 * (v270 - v163);
LABEL_79:
                v120 = v270 + 1;
                v240 = (hkVector4f::Self *)(v270 + 1);
                v121 = v271 & 0x3FFFFFFF;
                if ( v270 + 1 <= (v271 & 0x3FFFFFFF) )
                {
LABEL_80:
                  v122 = v250;
                  v123 = (char *)v250 + v119;
                  v251 = (hkVector4f::Self *)v119;
                  hkMemUtil::memMove((hkMemUtil::Self *)&v255[(uint32_t)(uintptr_t)(v122)], v123, v233, (int)(uintptr_t)(v167));
                  v124 = (char *)v269 + (uint32_t)(uintptr_t)(v251);
                  *((uint32_t *)v124 + 1) = (uint32_t)(uintptr_t)(v229);
                  *(float *)v124 = v116;
                  *((float *)v124 + 2) = v198;
                  v270 = (int)(uintptr_t)(v240);
                  goto LABEL_21;
                }
              }
              v164 = 2 * v121;
              v221 = v119;
              if ( v164 < v120 )
                v164 = v120;
              hkArrayUtil::reserve(
                (hkArrayUtil::Self *)v262,
                (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                &v269,
                v164,
                12);
              v250 = (hkVector4f::Self *)v269;
              v119 = v221;
              goto LABEL_80;
            }
          }
LABEL_21:
          if ( v301 <= ++v48 )
            goto LABEL_81;
          goto LABEL_22;
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::computeWeldingInfo  (binary VA: 0x1ad9c60)
// Original: hkpMeshWeldingUtility::computeWeldingInfo
// ----------------------------------------------------------------------------
int hkpMeshWeldingUtility::computeWeldingInfo(long double a1, int a2, int a3, int a4, char a5, char a6)
{
  int **address;
  int *v7;
  char *v8;
  int v9;
  int v10;
  int *v11;
  signed int v12;
  int result;
  typedef int **_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint64_t _g4_t_v20[10];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v19)) > _g4_s5 ? (32u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v20)) > _g4_s6 ? (48u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);

  v20[0] = 1065353216;
  v20[1] = 0;
  v20[2] = 0x3F80000000000000LL;
  memset(&v20[3], 0, 16);
  v20[5] = 1065353216;
  v15 = nullptr;
  v16 = 0;
  v17 = 0x80000000;
  v19 = 1;
  address = (int **)_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v7 = *address;
  v14 = address;
  v8 = (char *)(*address)[3];
  if ( v7[2] > 127 && (unsigned int)(uintptr_t)(v8 + 128) <= v7[4] )
  {
    v7[3] = (int)(uintptr_t)(v8 + 128);
    v15 = v8;
    v17 = -2147483647;
    v18 = v8;
    v9 = 0;
  }
  else
  {
    v8 = (char *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v7, 128);
    v9 = v16;
    v15 = v8;
    v17 = -2147483647;
    v18 = v8;
  }
  LODWORD(v20[8]) = a3;
  *(g4_int128_t *)&v20[6] = 0;
  std::memcpy(&v8[80 * v9], v20, 80);
  ++v16;
  hkpMeshWeldingUtility::computeWeldingInfoMultiShape(a1, (float *)&xmmword_1D12FD0, a2, a4, (uint32_t *)(&v15), a5, a6);
  v10 = 0;
  if ( v15 != v18 )
    v10 = v16;
  v16 = v10;
  v11 = *v14;
  v12 = (80 * v19 + 127) & 0xFFFFFF80;
  if ( v12 > (*v14)[2] || (char *)v11[3] != &v18[v12] || v18 == (char *)v11[5] )
    hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v11, v18, (80 * v19 + 127) & 0xFFFFFF80);
  else
    v11[3] = (int)(uintptr_t)(v18);
  result = v17;
  v16 = 0;
  if ( v17 >= 0 )
    return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v15,
             80 * v17);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::calcWeldingInfoForTriangle  (binary VA: 0x1ad9f00)
// Original: hkpMeshWeldingUtility::calcWeldingInfoForTriangle
// ----------------------------------------------------------------------------
uint32_t * hkpMeshWeldingUtility::calcWeldingInfoForTriangle(float *a1, int a2, int a3, void *a4, uint16_t *a5)
{
  int v5;
  int v6;
  float *v7;
  int v8;
  int v9;
  uint16_t *v11;
  float *v12;
  void *v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  float v18[4];
  uint32_t v19[134];
  int savedregs;
  void *retaddr;

  v19[130] = (uint32_t)(uintptr_t)(&a1);
  v16 = (uint32_t *)(a1);
  v5 = a2;
  v15 = a2;
  v14 = a3;
  v11 = a5;
  v13 = a4;
  v6 = G4_VCALL<int>(a3, 64);
  v7 = (float *)G4_VCALL<int>(v6, 24, v5, v19);
  LODWORD(v18[0]) = hkDefaultTriangleDegeneracyTolerance;
  if ( hkcdTriangleUtil::isDegenerate(v7 + 8, v7 + 12, v7 + 16, v18) )
  {
    *v11 = 0;
    *v16 = 1;
    return v16;
  }
  else
  {
    v8 = 0;
    v12 = v7;
    LOWORD(v18[0]) = 0;
    v9 = 0;
    do
    {
      savedregs = v8;
      a1 = v18;
      retaddr = v13;
      v19[133] = v15;
      v19[132] = (uint32_t)(uintptr_t)(v12);
      v19[131] = v14;
      hkpMeshWeldingUtility::calcBitcodeForTriangleEdge(&v17);
      if ( v17 == 1 )
        v9 = 1;
      ++v8;
    }
    while ( v8 != 3 );
    *v11 = LOWORD(v18[0]);
    *v16 = v9;
    return v16;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMeshWeldingUtility::isTriangleWindingValid  (binary VA: 0x1ada3f0)
// Original: hkpMeshWeldingUtility::isTriangleWindingValid
// ----------------------------------------------------------------------------
hkpMeshWeldingUtility::Self * hkpMeshWeldingUtility::isTriangleWindingValid(hkpMeshWeldingUtility::Self *self, unsigned int a2, const hkpBvTreeShape::Self *a3)
{
  const hkpBvTreeShape::Self *v3;
  unsigned int v4;
  int v5;
  int v6;
  void (*v7)(uint32_t, int, int);
  void (*v9)(uint32_t, int, int);
  int savedregs;
  void *retaddr;
  typedef char _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef hkpMeshWeldingUtility::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef uint32_t _g4_t_v17[132];
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (15u + sizeof(_g4_t_v10)) > _g4_s0 ? (15u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v11)) > _g4_s1 ? (24u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (43u + sizeof(_g4_t_v15)) > _g4_s5 ? (43u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v17)) > _g4_s7 ? (60u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (588u + sizeof(_g4_t_v18)) > _g4_s8 ? (588u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (592u + sizeof(_g4_t_v19)) > _g4_s9 ? (592u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 15u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 43u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 588u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 592u);

  v17[130] = (uint32_t)(uintptr_t)(&self);
  v3 = a3;
  v13 = self;
  v4 = a2;
  v11 = a2;
  v5 = G4_VCALL<int>(a3, 64);
  v12 = G4_VCALL<int>(v5, 24, v4, v17);
  (*(void (**)(char *, uint32_t, int))(*hkSingleton<hkError::Self>::s_instance + 28))(
    &v15,
    (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
    -23562978);
  v10 = v15;
  if ( v15 != 0 )
  {
    v9 = *(void (**)(uint32_t, int, int))(*hkSingleton<hkError::Self>::s_instance + 24);
    LOBYTE(v18) = 0;
    v9((uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance), -23562978, v18);
  }
  v16 = 0;
  v6 = 0;
  *(uint8_t *)v13 = 1;
  while ( 1 )
  {
    retaddr = nullptr;
    self = (hkpMeshWeldingUtility::Self *)&v16;
    v19 = v11;
    v18 = v12;
    savedregs = v6;
    v17[131] = (uint32_t)(uintptr_t)(v3);
    hkpMeshWeldingUtility::calcBitcodeForTriangleEdge(&v14);
    if ( v14 == 1 )
      break;
    if ( ++v6 == 3 )
      goto LABEL_6;
  }
  *(uint8_t *)v13 = 0;
LABEL_6:
  if ( v10 != 0 )
  {
    v7 = *(void (**)(uint32_t, int, int))(*hkSingleton<hkError::Self>::s_instance + 24);
    LOBYTE(v18) = 1;
    v7((uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance), -23562978, v18);
  }
  return v13;
}


