#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCollide.h"

// ----------------------------------------------------------------------------
// Function: hkpCollideTriangleUtil::setupClosestPointTriangleCache  (binary VA: 0x16df080)
// Original: hkpCollideTriangleUtil::setupClosestPointTriangleCache
// ----------------------------------------------------------------------------
void hkpCollideTriangleUtil::setupClosestPointTriangleCache(float *a1, float *a2)
{
  float v2; // xmm4_4
  float v3; // xmm0_4
  float v4; // xmm7_4
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float x; // xmm3_4
  float v16; // xmm0_4
  float v17;
  float v18;
  float v19;
  float v20;

  v2 = a1[4];
  v3 = *a1 - v2;
  v4 = a1[8] - v2;
  v5 = a1[5];
  v6 = a1[1] - v5;
  v7 = a1[6];
  v8 = a1[9] - v5;
  v9 = a1[2] - v7;
  v10 = a1[10] - v7;
  v19 = v6;
  v17 = v3;
  v20 = v8;
  v11 = (float)((float)(v3 * v3) + (float)(v6 * v6)) + (float)(v9 * v9);
  v12 = (float)((float)(v4 * v4) + (float)(v20 * v20)) + (float)(v10 * v10);
  v13 = (float)((float)(v3 * v4) + (float)(v19 * v20)) + (float)(v9 * v10);
  v14 = 1.0 / (float)((float)(v11 * v12) - (float)(v13 * v13));
  *a2 = v11 * v14;
  a2[1] = v12 * v14;
  a2[2] = v13 * v14;
  x = (float)((float)((float)((float)(v19 * v10) - (float)(v20 * v9)) * (float)((float)(v19 * v10) - (float)(v20 * v9)))
            + (float)((float)((float)(v9 * v4) - (float)(v10 * v17)) * (float)((float)(v9 * v4) - (float)(v10 * v17))))
    + (float)((float)((float)(v17 * v20) - (float)(v19 * v4)) * (float)((float)(v17 * v20) - (float)(v19 * v4)));
  v16 = fsqrt(x);
  if ( __builtin_isnan(v16) )
  {
    v18 = sqrtf(x);
    v16 = v18;
  }
  a2[3] = 1.0 / v16;
}

// ----------------------------------------------------------------------------
// Function: hkpCollideTriangleUtil::setupPointTriangleDistanceCache  (binary VA: 0x16df2a0)
// Original: hkpCollideTriangleUtil::setupPointTriangleDistanceCache
// ----------------------------------------------------------------------------
int hkpCollideTriangleUtil::setupPointTriangleDistanceCache(int a1, int a2)
{
  __m128i v3;
  float v4; // xmm5_4
  float v5; // xmm1_4
  float v6; // xmm7_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  __m128i v9;
  __m128i v10;
  __m128i v11;
  unsigned int v12;
  __m128i v13;
  __m128i v14;
  int v15;
  __m128i v16;
  __m128i v17;
  float v18;
  float v19; // xmm3_4
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  float v24;
  float v25;
  unsigned int v26;

g4_m128_raw(v3) = *(unsigned int *)(a1 + 16);
  *(float *)&v23 = *(float *)(a1 + 32) - *(float *)g4_m128_ptr<int32_t>(v3);
  v4 = *(float *)(a1 + 20);
  v25 = *(float *)(a1 + 40) - *(float *)(a1 + 24);
  v5 = *(float *)(a1 + 4);
  v6 = *(float *)(a1 + 36) - v4;
  *(float *)&v26 = *(float *)a1 - *(float *)(a1 + 32);
  v7 = v5 - *(float *)(a1 + 36);
  v8 = *(float *)(a1 + 8) - *(float *)(a1 + 40);
  *(float *)g4_m128_ptr<int32_t>(v3) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v3) - *(float *)a1)
                                         * (float)(*(float *)g4_m128_ptr<int32_t>(v3) - *(float *)a1))
                                 + (float)((float)(v4 - v5) * (float)(v4 - v5)))
                         + (float)((float)(*(float *)(a1 + 24) - *(float *)(a1 + 8))
                                 * (float)(*(float *)(a1 + 24) - *(float *)(a1 + 8)));
g4_m128_raw(v9) = v26;
  *(float *)g4_m128_ptr<int32_t>(v9) = *(float *)g4_m128_ptr<int32_t>(v9) * *(float *)g4_m128_ptr<int32_t>(v9);
  *(float *)&v22 = (float)((float)((float)((float)(v25 * *(float *)&v26) - (float)(*(float *)&v23 * v8))
                                 * (float)((float)(v25 * *(float *)&v26) - (float)(*(float *)&v23 * v8)))
                         + (float)((float)((float)(v6 * v8) - (float)(v25 * v7))
                                 * (float)((float)(v6 * v8) - (float)(v25 * v7))))
                 + (float)((float)((float)(*(float *)&v23 * v7) - (float)(v6 * *(float *)&v26))
                         * (float)((float)(*(float *)&v23 * v7) - (float)(v6 * *(float *)&v26)));
  v10 = v9;
g4_m128_raw(v11) = v23;
  *(float *)g4_m128_ptr<int32_t>(v10) = (float)(*(float *)g4_m128_ptr<int32_t>(v9) + (float)(v7 * v7)) + (float)(v8 * v8);
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)g4_m128_ptr<int32_t>(v11))
                                  + (float)((float)(*(float *)(a1 + 36) - v4) * (float)(*(float *)(a1 + 36) - v4)))
                          + (float)(v25 * v25);
  v12 = ((_mm_cvtsi128_si32(v11) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v11) >> 1));
  v13 = _mm_cvtsi32_si128(v12);
  *(float *)g4_m128_ptr<int32_t>(v13) = *(float *)g4_m128_ptr<int32_t>(v13) * 1.5;
  v14 = v13;
  v15 = ((_mm_cvtsi128_si32(v10) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v10) >> 1));
  *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)g4_m128_ptr<int32_t>(v13)
                          - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) * 0.5) * *(float *)&v12)
                                  * (float)(*(float *)&v12 * *(float *)&v12));
  v16 = v14;
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)(*(float *)g4_m128_ptr<int32_t>(v14) * 1.5)
                          - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) * 0.5) * *(float *)g4_m128_ptr<int32_t>(v14))
                                  * (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)));
  v17 = v16;
  *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)g4_m128_ptr<int32_t>(v16) * 1.5;
  v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  v24 = (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16))
      * (float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) * 0.5) * *(float *)g4_m128_ptr<int32_t>(v16));
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)(*(float *)&v15 * 1.5)
                          - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v10) * 0.5) * *(float *)&v15)
                                  * (float)(*(float *)&v15 * *(float *)&v15));
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)(*(float *)g4_m128_ptr<int32_t>(v14) * 1.5)
                          - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v10) * 0.5) * *(float *)g4_m128_ptr<int32_t>(v14))
                                  * (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)));
  v19 = (float)(*(float *)g4_m128_ptr<int32_t>(v10) * 0.5) * *(float *)g4_m128_ptr<int32_t>(v16);
  *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16);
g4_m128_lane<int32_t>(v16, 0) = ((_mm_cvtsi128_si32(v3) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v3) >> 1));
  *(float *)(a2 + 4) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * 1.5)
                                     - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v10) * 0.5) * *(float *)g4_m128_ptr<int32_t>(v14))
                                             * (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14))))
                             * 1.5)
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * v19);
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)(*(float *)g4_m128_ptr<int32_t>(v16) * 1.5)
                          - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v3) * 0.5) * *(float *)g4_m128_ptr<int32_t>(v16))
                                  * (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)));
  v20 = _mm_cvtsi128_si32(G4_BITCAST<__m128i>(v22));
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)(*(float *)g4_m128_ptr<int32_t>(v14) * 1.5)
                          - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v3) * 0.5) * *(float *)g4_m128_ptr<int32_t>(v14))
                                  * (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)));
  v21 = ((v20 + 2139095040) >> 31) & (1597463174 - (v20 >> 1));
  *(float *)(a2 + 8) = (float)(*(float *)g4_m128_ptr<int32_t>(v16) * 1.5)
                     - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v3) * 0.5) * *(float *)g4_m128_ptr<int32_t>(v16))
                             * (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)));
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)(*(float *)&v21 * 1.5)
                          - (float)((float)((float)(0.5 * *(float *)&v22) * *(float *)&v21)
                                  * (float)(*(float *)&v21 * *(float *)&v21));
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)(*(float *)g4_m128_ptr<int32_t>(v14) * 1.5)
                          - (float)((float)((float)(0.5 * *(float *)&v22) * *(float *)g4_m128_ptr<int32_t>(v14))
                                  * (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)));
  *(float *)a2 = v18 - v24;
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v16))
                          - (float)((float)((float)(0.5 * *(float *)&v22) * *(float *)g4_m128_ptr<int32_t>(v16))
                                  * (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)));
  *(uint32_t *)(a2 + 12) =g4_m128_lane<int32_t>(v11, 0);
  *(float *)(a2 + 16) = *(float *)g4_m128_ptr<int32_t>(v11) * *(float *)&v22;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpCollideTriangleUtil::calcTrianglePlaneDirections  (binary VA: 0x16df650)
// Original: hkpCollideTriangleUtil::calcTrianglePlaneDirections
// ----------------------------------------------------------------------------
int hkpCollideTriangleUtil::calcTrianglePlaneDirections(float *a1, float *a2, int a3, float *a4)
{
  float v4; // xmm0_4
  float v5; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm7_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  __m128i v20;
  float v21; // xmm4_4
  __m128i v22;
  __m128i v23;
  int v24;
  __m128i v25;
  float v26;
  float v27;
  float v28;
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
  unsigned int v40;
  float v41;
  float v42;

  v4 = a1[10];
  v5 = a1[9] - a1[5];
  v36 = a1[5];
  v35 = a1[6];
  v37 = a1[4];
  v32 = *a1;
  v31 = a1[1];
  v39 = a1[8] - v37;
  v26 = a2[4];
  v7 = *a1 - a1[8];
  v8 = v4 - v35;
  v30 = a1[2];
  v9 = v31 - a1[9];
  v10 = (float)(v4 - v35) * v9;
  v11 = v30 - v4;
  v41 = *a2;
  v28 = a2[1];
  v27 = a2[2];
  v12 = a2[3];
  v42 = (float)((float)(v5 * v11) - v10) * v12;
  v13 = (float)((float)(v8 * v7) - (float)(v39 * v11)) * v12;
  a4[1] = v13;
  *a4 = v42;
  v14 = (float)((float)(v39 * v9) - (float)(v5 * v7)) * v12;
  v34 = v5 * v41;
  a4[2] = v14;
  a4[3] = v12 * 0.0;
  *(float *)&v40 = v39 * v41;
  v15 = v8 * v41;
  v16 = v28;
  v17 = v7 * v28;
  v29 = v9 * v28;
  v18 = v16 * v11;
  v33 = v17;
  v19 = (float)(v36 - v31) * v27;
g4_m128_raw(v20) = LODWORD(v42);
  *(float *)g4_m128_ptr<int32_t>(v20) = v42 * v15;
  v38 = (float)(v37 - v32) * v27;
  v21 = (float)(v35 - v30) * v27;
  v22 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v20));
  *(float *)g4_m128_ptr<int32_t>(v22) = *(float *)g4_m128_ptr<int32_t>(v22) - (float)(*(float *)&v40 * v14);
g4_m128_raw(v23) = v40;
  *(float *)g4_m128_ptr<int32_t>(v23) = *(float *)&v40 * v13;
  v24 = _mm_cvtsi128_si32(v22);
  v25 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v23));
  *(float *)g4_m128_ptr<int32_t>(v25) = *(float *)g4_m128_ptr<int32_t>(v25) - (float)(v42 * v34);
  *(float *)a3 = (float)(v34 * v14) - (float)(v15 * v13);
  *(float *)(a3 + 20) = (float)(v18 * v42) - (float)(v33 * v14);
  *(uint32_t *)(a3 + 16) = v24;
  *(uint32_t *)(a3 + 32) = _mm_cvtsi128_si32(v25);
  *(float *)(a3 + 36) = (float)(v33 * v13) - (float)(v29 * v42);
  *(uint32_t *)(a3 + 48) = 0;
  *(float *)(a3 + 28) = v13;
  *(uint32_t *)(a3 + 52) = 0;
  *(uint32_t *)(a3 + 56) = 0;
  *(float *)(a3 + 4) = (float)(v29 * v14) - (float)(v13 * v18);
  *(float *)(a3 + 8) = (float)(v19 * v14) - (float)(v13 * v21);
  *(float *)(a3 + 40) = (float)(v38 * v13) - (float)(v19 * v42);
  *(float *)(a3 + 12) = v42;
  *(float *)(a3 + 24) = (float)(v21 * v42) - (float)(v38 * v14);
  *(float *)(a3 + 44) = v14;
  *(float *)(a3 + 60) = (float)-v41 * v26;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpCollideTriangleUtil::closestPointTriangle  (binary VA: 0x16df990)
// Original: hkpCollideTriangleUtil::closestPointTriangle
// ----------------------------------------------------------------------------
int hkpCollideTriangleUtil::closestPointTriangle(float *a1, int a2, int a3, int a4, int a5)
{
  float v5; // xmm6_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  __m128 v8;
  float v9; // xmm7_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  int v15;
  char v16;
  int v17;
  int v18;
  __m128i v19;
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22;
  float v23; // xmm0_4
  float v24; // xmm4_4
  __m128i v25;
  float v26; // xmm2_4
  __m128i v27;
  __m128i v28;
  float v29; // xmm7_4
  float v30; // xmm3_4
  int v31; // xmm2_4
  float v32; // xmm2_4
  float v34; // xmm5_4
  __m128 v35;
  __m128 v36;
  __m128 v37;
  float v38; // xmm2_4
  __m128 v39;
  int v40;
  float v41; // xmm4_4
  float v42; // xmm1_4
  int v43;
  __m128i v44;
  float v45; // xmm7_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  __m128i v48;
  float v49;
  __m128i v50;
  float v51; // xmm6_4
  int v52; // xmm4_4
  float v53; // xmm4_4
  typedef char _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef char _g4_t_v63;
  typedef float _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef float _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef char _g4_t_v70;
  typedef float _g4_t_v71[4];
  typedef float _g4_t_v72[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (7u + sizeof(_g4_t_v54)) > _g4_s0 ? (7u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v55)) > _g4_s1 ? (8u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v56)) > _g4_s2 ? (8u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v57)) > _g4_s3 ? (12u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v58)) > _g4_s4 ? (12u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v59)) > _g4_s5 ? (16u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v60)) > _g4_s6 ? (16u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v61)) > _g4_s7 ? (16u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v62)) > _g4_s8 ? (20u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v63)) > _g4_s9 ? (20u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v64)) > _g4_s10 ? (24u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v65)) > _g4_s11 ? (24u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v66)) > _g4_s12 ? (24u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v67)) > _g4_s13 ? (28u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v68)) > _g4_s14 ? (28u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v69)) > _g4_s15 ? (28u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v70)) > _g4_s16 ? (28u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v71)) > _g4_s17 ? (32u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v72)) > _g4_s18 ? (48u + sizeof(_g4_t_v72)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 7u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);

  if ( a5 != 0 )
    *(uint8_t *)a5 = 0;
  v5 = *(float *)(a2 + 16);
  v6 = *(float *)(a2 + 20);
  v7 = *(float *)(a2 + 24);
  v67 = v5 - *a1;
  v64 = v6 - a1[1];
  v62 = v7 - a1[2];
  v59 = *(float *)a2 - v5;
  v57 = *(float *)(a2 + 4) - v6;
g4_m128_raw(v8) = *(unsigned int *)(a2 + 8);
g4_m128_lane<float>(v8, 0) =g4_m128_lane<float>(v8, 0) - v7;
  v9 = *(float *)(a2 + 32) - v5;
  v10 = (float)((float)(v67 * v59) + (float)(v64 * v57)) + (float)(v62 *g4_m128_lane<float>(v8, 0));
  v11 = *(float *)(a2 + 40) - v7;
  v55 = *(float *)(a2 + 36) - v6;
  v12 = (float)((float)(v67 * v9) + (float)(v64 * v55)) + (float)(v62 * v11);
  v13 = (float)(*(float *)(a3 + 8) * v12) - (float)(*(float *)(a3 + 4) * v10);
  v14 = (float)(v10 * *(float *)(a3 + 8)) - (float)(v12 * *(float *)a3);
  v15 = ((float)(v13 + 0.001f) > 0.0) | (2 * ((float)((float)(1.001f - v13) - v14) > 0.0));
  if ( (float)(v14 + 0.001f) > 0.0 && (v15 |= 4u) == 7 )
  {
g4_m128_raw(v36) = LODWORD(v55);
g4_m128_raw(v35) = LODWORD(v57);
    *(uint32_t *)(a4 + 12) = 0;
g4_m128_lane<float>(v35, 0) = (float)(v57 * v11) - (float)(v55 *g4_m128_lane<float>(v8, 0));
    v34 = (float)(g4_m128_lane<float>(v8, 0) * v9) - (float)(v11 * v59);
    *(uint32_t *)a4 =g4_m128_lane<int32_t>(v35, 0);
g4_m128_lane<float>(v36, 0) = (float)(v55 * v59) - (float)(v57 * v9);
    *(float *)(a4 + 4) = v34;
    *(uint32_t *)(a4 + 8) =g4_m128_lane<int32_t>(v36, 0);
g4_m128_raw(v37) = *(unsigned int *)(a3 + 12);
g4_m128_lane<float>(v35, 0) =g4_m128_lane<float>(v35, 0) *g4_m128_lane<float>(v37, 0);
g4_m128_lane<float>(v8, 0) = v34 *g4_m128_lane<float>(v37, 0);
g4_m128_lane<float>(v36, 0) =g4_m128_lane<float>(v36, 0) *g4_m128_lane<float>(v37, 0);
g4_m128_lane<float>(v37, 0) =g4_m128_lane<float>(v37, 0) * 0.0;
    *(uint32_t *)a4 =g4_m128_lane<int32_t>(v35, 0);
    *(uint32_t *)(a4 + 4) =g4_m128_lane<int32_t>(v8, 0);
    *(uint32_t *)(a4 + 8) =g4_m128_lane<int32_t>(v36, 0);
    *(uint32_t *)(a4 + 12) =g4_m128_lane<int32_t>(v37, 0);
    v38 = (float)((float)(v67 *g4_m128_lane<float>(v35, 0)) + (float)(v64 *g4_m128_lane<float>(v8, 0))) + (float)(v62 *g4_m128_lane<float>(v36, 0));
    if ( v38 <= 0.0 )
    {
      v38 = -v38;
    }
    else
    {
g4_m128_lane<uint64_t>(v39, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v35, v8), 0);
g4_m128_lane<uint64_t>(v39, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v36, v37), 0);
      *(__m128 *)a4 = _mm_xor_ps(v39, G4_BITCAST<__m128>(xmmword_1C7C2A0));
    }
    *(float *)(a4 + 16) = v38;
    if ( a5 != 0 )
    {
      *(uint8_t *)a5 = 3;
      *(uint16_t *)(a5 + 2) = 0;
      *(uint16_t *)(a5 + 4) = 1;
      *(uint16_t *)(a5 + 6) = 2;
    }
    return 0;
  }
  else
  {
    v16 = hkpCollideTriangleUtil::maskToIndex[v15];
    v63 = v16;
    if ( v16 < 0 )
    {
      v66 = *((uint8_t *)&hkpCollideTriangleUtil::vertexToEdgeLut + v16 + 8);
      v70 = *((uint8_t *)&hkpCollideTriangleUtil::vertexToEdgeLut + v16 + 10);
      v43 = hkLineSegmentUtil::closestPointLineSeg(a1, 16 * v70 + a2, a2 + 16 * v66, v72);
      if ( a5 != 0 )
      {
        if ( v43 == 4 )
        {
          *(uint8_t *)a5 = 1;
          *(uint16_t *)(a5 + 2) = v66;
        }
        else if ( v43 == 8 )
        {
          *(uint8_t *)a5 = 1;
          *(uint16_t *)(a5 + 2) = v70;
        }
        else
        {
          *(uint16_t *)(a5 + 2) = v66;
          *(uint16_t *)(a5 + 4) = v70;
          *(uint8_t *)a5 = 2;
        }
      }
g4_m128_raw(v44) = *(unsigned int *)a1;
      *(float *)g4_m128_ptr<int32_t>(v44) = *(float *)g4_m128_ptr<int32_t>(v44) - v72[0];
      v45 = 0.0;
      *(uint32_t *)a4 =g4_m128_lane<int32_t>(v44, 0);
      v50 = v44;
      v46 = a1[1] - v72[1];
      *(float *)(a4 + 4) = v46;
      v47 = a1[2] - v72[2];
      *(float *)(a4 + 8) = v47;
      v48 = _mm_cvtsi32_si128(*((uint32_t *)a1 + 3));
      *(float *)g4_m128_ptr<int32_t>(v48) = *(float *)g4_m128_ptr<int32_t>(v48) - v72[3];
      v49 = COERCE_FLOAT(_mm_cvtsi128_si32(v48));
      *(float *)g4_m128_ptr<int32_t>(v50) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v44) * *(float *)g4_m128_ptr<int32_t>(v44)) + (float)(v46 * v46))
                              + (float)(v47 * v47);
      if ( *(float *)g4_m128_ptr<int32_t>(v50) > 0.0 )
      {
        v51 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v50);
        v52 = ((_mm_cvtsi128_si32(v50) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v50) >> 1));
        v53 = (float)(1.5
                    * (float)((float)(1.5 * *(float *)&v52)
                            - (float)((float)(v51 * *(float *)&v52) * (float)(*(float *)&v52 * *(float *)&v52))))
            - (float)((float)(v51
                            * (float)((float)(1.5 * *(float *)&v52)
                                    - (float)((float)(v51 * *(float *)&v52) * (float)(*(float *)&v52 * *(float *)&v52))))
                    * (float)((float)((float)(1.5 * *(float *)&v52)
                                    - (float)((float)(v51 * *(float *)&v52) * (float)(*(float *)&v52 * *(float *)&v52)))
                            * (float)((float)(1.5 * *(float *)&v52)
                                    - (float)((float)(v51 * *(float *)&v52) * (float)(*(float *)&v52 * *(float *)&v52)))));
        v45 = (float)(1.5 * v53) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v50)) * v53) * (float)(v53 * v53));
      }
      *(float *)(a4 + 8) = v47 * v45;
      *(float *)a4 = *(float *)g4_m128_ptr<int32_t>(v44) * v45;
      *(float *)(a4 + 4) = v46 * v45;
      *(float *)(a4 + 16) = *(float *)g4_m128_ptr<int32_t>(v50) * v45;
      *(float *)(a4 + 12) = v49 * v45;
      return 1;
    }
    else
    {
      v65 = *((uint8_t *)&hkpCollideTriangleUtil::vertexToEdgeLut + v16 + 2);
      v60 = v16;
      v68 = a2 + 16 * v16;
      v58 = hkLineSegmentUtil::closestPointLineSeg(a1, v68, a2 + 16 * v65, v71);
      v54 = *((uint8_t *)&hkpCollideTriangleUtil::vertexToEdgeLut + v60);
      v17 = hkLineSegmentUtil::closestPointLineSeg(a1, 16 * v54 + a2, v68, v72);
g4_m128_raw(v25) = *(unsigned int *)a1;
      v18 = v17;
      v19 = v25;
      *(float *)g4_m128_ptr<int32_t>(v19) = *(float *)g4_m128_ptr<int32_t>(v25) - v71[0];
      v20 = a1[1] - v71[1];
      v21 = a1[2];
      v22 = a1[3];
      v23 = v21 - v72[2];
      v24 = v21 - v71[2];
      v56 = v72[3];
      v27 = v19;
      v69 = v23;
      *(float *)g4_m128_ptr<int32_t>(v25) = *(float *)g4_m128_ptr<int32_t>(v25) - v72[0];
      v26 = a1[1] - v72[1];
      v61 = v71[3];
      *(float *)g4_m128_ptr<int32_t>(v27) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)) + (float)(v20 * v20))
                              + (float)(v24 * v24);
      v28 = v25;
      *(float *)g4_m128_ptr<int32_t>(v28) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)g4_m128_ptr<int32_t>(v25)) + (float)(v26 * v26))
                              + (float)(v69 * v69);
      v29 = 0.0;
      if ( *(float *)g4_m128_ptr<int32_t>(v28) <= *(float *)g4_m128_ptr<int32_t>(v27) )
      {
        if ( *(float *)g4_m128_ptr<int32_t>(v28) > 0.0 )
        {
          v40 = ((_mm_cvtsi128_si32(v28) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v28) >> 1));
          v41 = (float)(*(float *)&v40 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v28)) * *(float *)&v40)
                      * (float)(*(float *)&v40 * *(float *)&v40));
          v42 = (float)(v41 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v28)) * v41) * (float)(v41 * v41));
          v29 = (float)(1.5 * v42) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v28)) * v42) * (float)(v42 * v42));
        }
        if ( a5 != 0 )
        {
          if ( v18 == 4 )
          {
            *(uint8_t *)a5 = 1;
            *(uint16_t *)(a5 + 2) = v63;
          }
          else if ( v18 == 8 )
          {
            *(uint8_t *)a5 = 1;
            *(uint16_t *)(a5 + 2) = v54;
          }
          else
          {
            *(uint8_t *)a5 = 2;
            *(uint16_t *)(a5 + 2) = v63;
            *(uint16_t *)(a5 + 4) = v54;
          }
        }
        *(float *)(a4 + 16) = *(float *)g4_m128_ptr<int32_t>(v28) * v29;
        *(float *)a4 = *(float *)g4_m128_ptr<int32_t>(v25) * v29;
        *(float *)(a4 + 4) = v26 * v29;
        *(float *)(a4 + 8) = v69 * v29;
        *(float *)(a4 + 12) = (float)(v22 - v56) * v29;
      }
      else
      {
        if ( *(float *)g4_m128_ptr<int32_t>(v27) > 0.0 )
        {
          v30 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v27);
          v31 = ((_mm_cvtsi128_si32(v27) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v27) >> 1));
          v32 = (float)(1.5
                      * (float)((float)(1.5 * *(float *)&v31)
                              - (float)((float)(v30 * *(float *)&v31) * (float)(*(float *)&v31 * *(float *)&v31))))
              - (float)((float)(v30
                              * (float)((float)(1.5 * *(float *)&v31)
                                      - (float)((float)(v30 * *(float *)&v31) * (float)(*(float *)&v31 * *(float *)&v31))))
                      * (float)((float)((float)(1.5 * *(float *)&v31)
                                      - (float)((float)(v30 * *(float *)&v31) * (float)(*(float *)&v31 * *(float *)&v31)))
                              * (float)((float)(1.5 * *(float *)&v31)
                                      - (float)((float)(v30 * *(float *)&v31) * (float)(*(float *)&v31 * *(float *)&v31)))));
          v29 = (float)(1.5 * v32) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v27)) * v32) * (float)(v32 * v32));
        }
        if ( a5 != 0 )
        {
          if ( v58 == 4 )
          {
            *(uint8_t *)a5 = 1;
            *(uint16_t *)(a5 + 2) = v63;
          }
          else if ( v58 == 8 )
          {
            *(uint8_t *)a5 = 1;
            *(uint16_t *)(a5 + 2) = v65;
          }
          else
          {
            *(uint8_t *)a5 = 2;
            *(uint16_t *)(a5 + 2) = v63;
            *(uint16_t *)(a5 + 4) = v65;
          }
        }
        *(float *)(a4 + 16) = *(float *)g4_m128_ptr<int32_t>(v27) * v29;
        *(float *)a4 = *(float *)g4_m128_ptr<int32_t>(v19) * v29;
        *(float *)(a4 + 4) = v20 * v29;
        *(float *)(a4 + 8) = v24 * v29;
        *(float *)(a4 + 12) = (float)(v22 - v61) * v29;
      }
      return 1;
    }
  }
}


