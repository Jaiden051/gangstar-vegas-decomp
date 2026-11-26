#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCylinde.h"

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::getSize  (binary VA: 0x1693c60)
// Original: hkpCylinderShape::getSize
// ----------------------------------------------------------------------------
int hkpCylinderShape::getSize()
{
  return 96;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::calcSizeForSpu  (binary VA: 0x1693c70)
// Original: hkpCylinderShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpCylinderShape::calcSizeForSpu()
{
  return 96;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::getNumCollisionSpheres  (binary VA: 0x1693c80)
// Original: hkpCylinderShape::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpCylinderShape::getNumCollisionSpheres()
{
  return 18;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::getCentre  (binary VA: 0x1693c90)
// Original: hkpCylinderShape::getCentre
// ----------------------------------------------------------------------------
void * hkpCylinderShape::getCentre(hkpCylinderShape::Self *self, hkVector4f::Self *a2)
{
  float v3; // xmm4_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm0_4

  v3 = *((float *)self + 8) + *((float *)self + 12);
  *(float *)a2 = v3;
  v4 = *((float *)self + 9) + *((float *)self + 13);
  *((float *)a2 + 1) = v4;
  v5 = *((float *)self + 10) + *((float *)self + 14);
  *((float *)a2 + 2) = v5;
  v6 = *((float *)self + 11) + *((float *)self + 15);
  *(float *)a2 = v3 * 0.5;
  *((float *)a2 + 1) = v4 * 0.5;
  *((float *)a2 + 2) = v5 * 0.5;
  *((float *)a2 + 3) = v6 * 0.5;
  return &g_vectorfConstants;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::getFirstVertex  (binary VA: 0x1693d10)
// Original: hkpCylinderShape::getFirstVertex
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpCylinderShape::getFirstVertex(hkpCylinderShape::Self *self, hkVector4f::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 15);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::getCollisionSpheres  (binary VA: 0x1693d30)
// Original: hkpCylinderShape::getCollisionSpheres
// ----------------------------------------------------------------------------
hkSphere::Self * hkpCylinderShape::getCollisionSpheres(hkpCylinderShape::Self *self, hkSphere::Self *a2)
{
  hkSphere::Self *result;
  float v3; // xmm3_4
  float v4; // xmm0_4
  __m128i v5;
  __m128i v6;
  float v7; // xmm1_4
  float v8;
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21;
  float v22; // xmm7_4
  float v23; // xmm7_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  float v28; // xmm5_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm5_4
  float v34; // xmm5_4
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;

  result = a2;
  v3 = *((float *)self + 13) - *((float *)self + 9);
  v4 = *((float *)self + 5);
g4_m128_raw(v5) = 0;
  if ( (float)((float)((float)((float)(*((float *)self + 12) - *((float *)self + 8))
                             * (float)(*((float *)self + 12) - *((float *)self + 8)))
                     + (float)(v3 * v3))
             + (float)((float)(*((float *)self + 14) - *((float *)self + 10))
                     * (float)(*((float *)self + 14) - *((float *)self + 10)))) < (float)((float)(4.0 * v4) * v4) )
  {
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(0LL)));
    v35 = -0.0;
    v36 = 0.0;
  }
  else
  {
g4_m128_raw(v6) = *((unsigned int *)self + 5);
    *(float *)g4_m128_ptr<int32_t>(v6) = v4 * 0.0;
    v36 = *((float *)self + 5);
    v7 = -v4;
    v4 = v4 * *((float *)self + 6);
    v35 = v7;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  }
  v9 = *((float *)self + 16);
  v10 = *((float *)self + 20);
  v11 = 0.70710677f * v4;
  v38 = *((float *)self + 21);
  v12 = *((float *)self + 17);
  v13 = *((float *)self + 18);
  v47 = (float)(v9 + v10) * (float)(0.70710677f * v4);
  v46 = (float)(v38 + v12) * (float)(0.70710677f * v4);
  v45 = (float)(*((float *)self + 22) + v13) * (float)(0.70710677f * v4);
  v14 = v9 - v10;
  v41 = v9 * v4;
  v40 = v10 * v4;
  v15 = v9 * v4;
  v44 = v14 * (float)(0.70710677f * v4);
  v16 = v12 * v4;
  v43 = (float)(v12 - v38) * (float)(0.70710677f * v4);
  v17 = v13 * v4;
  v39 = v38 * v4;
  v37 = v4 * *((float *)self + 22);
  v18 = *((float *)self + 4);
  *(float *)g4_m128_ptr<int32_t>(v5) = v18 + 0.0;
  v19 = *((float *)self + 9);
  v42 = v11 * (float)(*((float *)self + 18) - *((float *)self + 22));
  v20 = *((float *)self + 10);
  v21 = _mm_cvtsi128_si32(v5);
  v22 = *((float *)self + 8);
  *((uint32_t *)a2 + 3) = v21;
  *(float *)a2 = v15 + v22;
  *((float *)a2 + 1) = v16 + v19;
  *((float *)a2 + 2) = v17 + v20;
  *((float *)a2 + 4) = v47 + v22;
  *((uint32_t *)a2 + 7) = v21;
  *((uint32_t *)a2 + 11) = v21;
  *((float *)a2 + 15) = v18;
  *((float *)a2 + 19) = v18;
  *((float *)a2 + 23) = v18;
  *((float *)a2 + 8) = v40 + v22;
  *((float *)a2 + 5) = v46 + v19;
  *((float *)a2 + 9) = v39 + v19;
  *((float *)a2 + 6) = v45 + v20;
  *((float *)a2 + 10) = v37 + v20;
  *((float *)a2 + 17) = v19 - v16;
  *((float *)a2 + 12) = v22 - v44;
  *((float *)a2 + 18) = v20 - v17;
  *((float *)a2 + 13) = v19 - v43;
  *((float *)a2 + 14) = v20 - v42;
  *((float *)a2 + 16) = v22 - v41;
  *((float *)a2 + 20) = v22 - v47;
  *((float *)a2 + 21) = v19 - v46;
  *((float *)a2 + 22) = v20 - v45;
  *((float *)a2 + 24) = v22 - v40;
  *((float *)a2 + 25) = v19 - v39;
  *((float *)a2 + 27) = v18;
  *((uint32_t *)a2 + 31) = v21;
  *((float *)a2 + 26) = v20 - v37;
  *((float *)a2 + 28) = v22 + v44;
  *((float *)a2 + 29) = v19 + v43;
  *((float *)a2 + 30) = v20 + v42;
  v23 = *((float *)self + 12);
  v24 = *((float *)self + 13);
  v25 = *((float *)self + 14);
  *((uint32_t *)a2 + 35) = v21;
  *((uint32_t *)a2 + 39) = v21;
  *((uint32_t *)a2 + 43) = v21;
  *((float *)a2 + 36) = v47 + v23;
  *((float *)a2 + 32) = v41 + v23;
  *((float *)a2 + 33) = v16 + v24;
  *((float *)a2 + 34) = v17 + v25;
  *((float *)a2 + 37) = v46 + v24;
  *((float *)a2 + 41) = v39 + v24;
  *((float *)a2 + 40) = v40 + v23;
  *((float *)a2 + 38) = v45 + v25;
  *((float *)a2 + 42) = v37 + v25;
  *((float *)a2 + 44) = v23 - v44;
  *((float *)a2 + 47) = v18;
  *((uint32_t *)a2 + 63) = v21;
  *((float *)a2 + 51) = v18;
  *((float *)a2 + 55) = v18;
  *((float *)a2 + 45) = v24 - v43;
  *((float *)a2 + 56) = v23 - v40;
  *((float *)a2 + 59) = v18;
  *((float *)a2 + 46) = v25 - v42;
  *((float *)a2 + 57) = v24 - v39;
  *((float *)a2 + 48) = v23 - v41;
  *((float *)a2 + 58) = v25 - v37;
  *((float *)a2 + 49) = v24 - v16;
  *((float *)a2 + 50) = v25 - v17;
  *((float *)a2 + 52) = v23 - v47;
  *((float *)a2 + 60) = v23 + v44;
  *((float *)a2 + 53) = v24 - v46;
  *((float *)a2 + 61) = v24 + v43;
  *((float *)a2 + 54) = v25 - v45;
  *((float *)a2 + 62) = v25 + v42;
  v26 = *((float *)self + 22);
  v27 = *((float *)self + 21);
  v28 = *((float *)self + 16);
  v29 = (float)(*((float *)self + 17) * v26) - (float)(*((float *)self + 18) * v27);
  v30 = *((float *)self + 20);
  v31 = v18 + v36;
  v32 = (float)(*((float *)self + 18) * v30) - (float)(v26 * v28);
  v33 = (float)(v28 * v27) - (float)(v30 * *((float *)self + 17));
  *((float *)a2 + 64) = (float)(v36 * v29) + *((float *)self + 8);
  *((float *)a2 + 65) = (float)(v36 * v32) + *((float *)self + 9);
  *((float *)a2 + 66) = (float)(v36 * v33) + *((float *)self + 10);
  *((float *)a2 + 67) = v8 + *((float *)self + 11);
  *((float *)a2 + 68) = (float)(v29 * v35) + *((float *)self + 12);
  *((float *)a2 + 69) = (float)(v32 * v35) + *((float *)self + 13);
  v34 = (float)(v33 * v35) + *((float *)self + 14);
  *((float *)a2 + 67) = v31;
  *((float *)a2 + 71) = v31;
  *((float *)a2 + 70) = v34;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::Destroy  (binary VA: 0x1694310)
// Original: hkpCylinderShape::~hkpCylinderShape
// ----------------------------------------------------------------------------
void hkpCylinderShape::Destroy(hkpCylinderShape::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::Destroy_ea1694330  (binary VA: 0x1694330)
// Original: hkpCylinderShape::~hkpCylinderShape
// ----------------------------------------------------------------------------
void hkpCylinderShape::Destroy_ea1694330(hkpCylinderShape::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::convertVertexIdsToVertices  (binary VA: 0x1694390)
// Original: hkpCylinderShape::convertVertexIdsToVertices
// ----------------------------------------------------------------------------
int hkpCylinderShape::convertVertexIdsToVertices(__m128 a1, float *a2, uint16_t *a3, int a4, int a5)
{
  int result;
  uint16_t *v7;
  __m128i v8;
  __m128 m128i_i128;
  unsigned int v10;
  __m128i v11;
  __m128i v12;
  float v13; // xmm7_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm6_4
  float *v17;
  float v18; // xmm2_4
  int v19;

  result = a4;
  if ( a4 > 0 )
  {
    v7 = a3;
    do
    {
g4_m128_raw(v8) = 0x3F800000u;
      v19 = (uint16_t)*v7;
g4_m128_lane<float>(a1, 0) = (float)((float)(v19 & 0xF) + 0.5) * hkpCylinderShape::s_virtualTesselationParameterInv;
      *(float *)g4_m128_ptr<int32_t>(v8) = 1.0 - (float)(g4_m128_lane<float>(a1, 0) *g4_m128_lane<float>(a1, 0));
g4_m128_raw(m128i_i128) = 0;
      if ( *(float *)g4_m128_ptr<int32_t>(v8) > 0.0 )
      {
        v10 = ((_mm_cvtsi128_si32(v8) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v8) >> 1));
        v11 = _mm_cvtsi32_si128(v10);
        *(float *)g4_m128_ptr<int32_t>(v11) = (float)(*(float *)g4_m128_ptr<int32_t>(v11) * 1.5)
                                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * *(float *)&v10)
                                        * (float)(*(float *)&v10 * *(float *)&v10));
        v12 = v11;
        *(float *)g4_m128_ptr<int32_t>(v12) = (float)(*(float *)g4_m128_ptr<int32_t>(v11) * 1.5)
                                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * *(float *)g4_m128_ptr<int32_t>(v11))
                                        * (float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)g4_m128_ptr<int32_t>(v11)));
        m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v12));
g4_m128_lane<float>(m128i_i128, 0) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * 1.5)
                                       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * *(float *)g4_m128_ptr<int32_t>(v12))
                                               * (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12))))
                               * *(float *)g4_m128_ptr<int32_t>(v8);
      }
      if ( (*v7 & 0x10) == 0 )
      {
        a1 = m128i_i128;
g4_m128_lane<float>(m128i_i128, 0) = (float)((float)(*v7 & 0xF) + 0.5) * hkpCylinderShape::s_virtualTesselationParameterInv;
      }
      if ( (*v7 & 0x40) == 0 )
        a1 = _mm_xor_ps(a1, *(__m128 *)&dword_1C7C1B0);
      if ( (*v7 & 0x20) == 0 )
g4_m128_lane<float>(m128i_i128, 0) = -g4_m128_lane<float>(m128i_i128, 0);
      a5 += 16;
      ++v7;
      v13 = a2[22] *g4_m128_lane<float>(a1, 0);
      v14 = (float)(a2[17] *g4_m128_lane<float>(m128i_i128, 0)) + (float)(a2[21] *g4_m128_lane<float>(a1, 0));
      v15 = a2[18] *g4_m128_lane<float>(m128i_i128, 0);
      v16 = a2[5];
      v17 = &a2[4 * (1 - ((v19 >> 7) & 1)) + 8];
      *(float *)(a5 - 16) = (float)((float)((float)(g4_m128_lane<float>(m128i_i128, 0) * a2[16]) + (float)(g4_m128_lane<float>(a1, 0) * a2[20]))
                                  * v16)
                          + *v17;
      *(float *)(a5 - 12) = (float)(v14 * v16) + v17[1];
      v18 = (float)((float)(v15 + v13) * v16) + v17[2];
      result = v19 | 0x3F000000;
      *(uint32_t *)(a5 - 4) = v19 | 0x3F000000;
      *(float *)(a5 - 8) = v18;
    }
    while ( v7 != &a3[a4] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::getAabb  (binary VA: 0x16945c0)
// Original: hkpCylinderShape::getAabb
// ----------------------------------------------------------------------------
__m128 * hkpCylinderShape::getAabb(hkpCylinderShape::Self *self, const hkTransformf::Self *a2, float a3, __m128 *a4)
{
  int v4;
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm4_4
  float *v8;
  float *v9;
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  __m128i v13;
  __m128i v14;
  int v15;
  int v16; // xmm6_4
  float v17; // xmm6_4
  float v18; // xmm0_4
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  bool v24;
  char v25; // si
  char v26;
  __m128 v27;
  char v28;
  __m128i m128_i128;
  __m128i v30;
  float v31;
  float v32; // xmm5_4
  int v33; // xmm1_4
  float v34; // xmm1_4
  __m128i v35;
  int v36;
  int v37;
  __m128 v38;
  float v39; // xmm5_4
  int v40; // xmm2_4
  float v41; // xmm6_4
  __m128i v42;
  float v43; // xmm1_4
  int v44;
  int v45;
  __m128 v46;
  float v47; // xmm4_4
  int v48; // xmm2_4
  __m128i v49;
  float v50; // xmm2_4
  int v51;
  int v52;
  float v53; // xmm4_4
  int v54;
  __m128i v55;
  float v56; // xmm1_4
  float v57; // xmm0_4
  int v58;
  int v59;
  float v60; // xmm6_4
  float v61; // xmm3_4
  __m128 v62;
  __m128i v63;
  __m128 v64;
  __m128 v65;
  unsigned int v66;
  __m128 v67;
  __m128 v68;
  __m128 v69;
  __m128 v70;
  uint64_t v71; // xmm0_8
  __m128 v73;
  __m128 v74;
  __m128 v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef unsigned int _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v76)) > _g4_s0 ? (12u + sizeof(_g4_t_v76)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v77)) > _g4_s1 ? (16u + sizeof(_g4_t_v77)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v78)) > _g4_s2 ? (20u + sizeof(_g4_t_v78)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v79)) > _g4_s3 ? (24u + sizeof(_g4_t_v79)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v80)) > _g4_s4 ? (24u + sizeof(_g4_t_v80)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v81)) > _g4_s5 ? (28u + sizeof(_g4_t_v81)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v82)) > _g4_s6 ? (28u + sizeof(_g4_t_v82)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v83)) > _g4_s7 ? (32u + sizeof(_g4_t_v83)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v84)) > _g4_s8 ? (32u + sizeof(_g4_t_v84)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v85)) > _g4_s9 ? (36u + sizeof(_g4_t_v85)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v86)) > _g4_s10 ? (36u + sizeof(_g4_t_v86)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v87)) > _g4_s11 ? (40u + sizeof(_g4_t_v87)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v88)) > _g4_s12 ? (44u + sizeof(_g4_t_v88)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v89)) > _g4_s13 ? (48u + sizeof(_g4_t_v89)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v90)) > _g4_s14 ? (52u + sizeof(_g4_t_v90)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v91)) > _g4_s15 ? (56u + sizeof(_g4_t_v91)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v92)) > _g4_s16 ? (60u + sizeof(_g4_t_v92)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v93)) > _g4_s17 ? (64u + sizeof(_g4_t_v93)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v94)) > _g4_s18 ? (68u + sizeof(_g4_t_v94)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v95)) > _g4_s19 ? (72u + sizeof(_g4_t_v95)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v96)) > _g4_s20 ? (76u + sizeof(_g4_t_v96)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v97)) > _g4_s21 ? (80u + sizeof(_g4_t_v97)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v98)) > _g4_s22 ? (84u + sizeof(_g4_t_v98)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v99)) > _g4_s23 ? (88u + sizeof(_g4_t_v99)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v100)) > _g4_s24 ? (92u + sizeof(_g4_t_v100)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 12u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 16u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 20u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 24u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 24u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 28u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 28u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 32u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 36u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 36u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 48u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 52u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 60u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 64u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 68u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 72u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 76u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 80u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 84u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 88u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 92u);

  v4 = 1;
  v76 = *(float *)a2;
  v91 = *((float *)a2 + 1);
  v90 = *((float *)a2 + 2);
  v89 = *((float *)a2 + 3);
  v88 = *((float *)a2 + 4);
  v87 = *((float *)a2 + 5);
  v85 = *((float *)a2 + 6);
  v83 = *((float *)a2 + 7);
  v81 = *((float *)a2 + 8);
  v79 = *((float *)a2 + 9);
  v78 = *((float *)a2 + 10);
  v77 = *((float *)a2 + 11);
  v5 = *((float *)a2 + 12);
  v6 = *((float *)a2 + 13);
  v92 = *((float *)a2 + 14);
  v7 = *((float *)a2 + 15);
  while ( 1 )
  {
    v8 = (float *)((char *)self + 16 * v4 + 32);
    v9 = &v93 + 4 * v4;
    v10 = *v8;
    v11 = v8[1];
    v12 = v8[2];
    *v9 = (float)((float)((float)(v76 * *v8) + (float)(v88 * v11)) + (float)(v81 * v12)) + v5;
    v9[1] = (float)((float)((float)(v91 * v10) + (float)(v87 * v11)) + (float)(v79 * v12)) + v6;
    v9[2] = (float)((float)((float)(v90 * v10) + (float)(v85 * v11)) + (float)(v78 * v12)) + v92;
    v9[3] = (float)((float)((float)(v10 * v89) + (float)(v11 * v83)) + (float)(v12 * v77)) + v7;
    if ( v4 != 1 )
      break;
    LOBYTE(v4) = 0;
  }
g4_m128_raw(v13) = LODWORD(v97);
  *(float *)g4_m128_ptr<int32_t>(v13) = v97 - v93;
g4_m128_raw(v19) = LODWORD(v98);
g4_m128_raw(v20) = LODWORD(v99);
g4_m128_raw(v22) = LODWORD(v100);
  v84 = v96;
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)(v98 - v94) * (float)(v98 - v94);
  v14 = v13;
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)(v99 - v95) * (float)(v99 - v95);
  v86 = v100;
  *(float *)&v80 = (float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v13)) + *(float *)g4_m128_ptr<int32_t>(v19);
  *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)&v80 + *(float *)g4_m128_ptr<int32_t>(v20);
  v15 = _mm_cvtsi128_si32(v14);
  v16 = (2130706432 - v15) & ((v15 ^ (v15 + 2139095040)) >> 31);
  v17 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v14)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)&v16)) * *(float *)&v16)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)&v16)) * *(float *)&v16);
g4_m128_raw(v21) = v80;
  v18 = (float)(2.0 - (float)((float)(*(float *)&v80 + *(float *)g4_m128_ptr<int32_t>(v20)) * v17)) * v17;
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)(*(float *)g4_m128_ptr<int32_t>(v19) + *(float *)g4_m128_ptr<int32_t>(v20)) * v18;
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)(*(float *)g4_m128_ptr<int32_t>(v20) + (float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v13)))
                          * v18;
  *(float *)g4_m128_ptr<int32_t>(v21) = *(float *)&v80 * v18;
  *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)((float)(v100 - v96) * (float)(v100 - v96))
                                  + (float)((float)(v100 - v96) * (float)(v100 - v96)))
                          * v18;
  v23 = v19;
  v24 = (float)(*(float *)&v80 * v18) < 0.00000011920929f;
  v25 = 4 * v24 + 8;
  v26 = 4 * v24;
g4_m128_raw(v27) = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v22) < 0.00000011920929f )
    v26 = v25;
  v28 = v26 | (*(float *)g4_m128_ptr<int32_t>(v19) < 0.00000011920929f) | (2 * (*(float *)g4_m128_ptr<int32_t>(v20) < 0.00000011920929f));
  if ( (v26 & 1 | (*(float *)g4_m128_ptr<int32_t>(v19) < 0.00000011920929f)) != 0 )
  {
g4_m128_raw(v27) = 0;
g4_m128_raw(v23) = 0;
  }
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v27));
  if ( (v28 & 2) == 0 )
    m128_i128 = v20;
  v30 =g4_m128_raw(G4_BITCAST<__m128i>(v27));
  if ( (v28 & 4) == 0 )
    v30 = v21;
  v31 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
  if ( (v28 & 8) != 0 )
    v31 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v27))));
  v82 =g4_m128_lane<float>(v27, 0);
  if (g4_m128_lane<float>(v27, 0) < *(float *)g4_m128_ptr<int32_t>(v23) )
  {
    v32 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v23);
    v33 = ((_mm_cvtsi128_si32(v23) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v23) >> 1));
    v34 = (float)(1.5
                * (float)((float)(1.5 * *(float *)&v33)
                        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * *(float *)&v33)
                                * (float)(*(float *)&v33 * *(float *)&v33))))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23))
                        * (float)((float)(1.5 * *(float *)&v33)
                                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * *(float *)&v33)
                                        * (float)(*(float *)&v33 * *(float *)&v33))))
                * (float)((float)((float)(1.5 * *(float *)&v33)
                                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * *(float *)&v33)
                                        * (float)(*(float *)&v33 * *(float *)&v33)))
                        * (float)((float)(1.5 * *(float *)&v33)
                                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * *(float *)&v33)
                                        * (float)(*(float *)&v33 * *(float *)&v33)))));
g4_m128_raw(v35) = 0x3FC00000u;
    *(float *)g4_m128_ptr<int32_t>(v35) = (float)(1.5 * v34) - (float)((float)(v32 * v34) * (float)(v34 * v34));
    v36 = _mm_cvtsi128_si32(v35);
    v37 = (2130706432 - v36) & ((v36 ^ (v36 + 2139095040)) >> 31);
    v82 = (float)((float)(2.0
                        - (float)((float)((float)(2.0 - (float)(*(float *)&v37 * *(float *)g4_m128_ptr<int32_t>(v35)))
                                        * *(float *)&v37)
                                * *(float *)g4_m128_ptr<int32_t>(v35)))
                * (float)((float)(2.0 - (float)(*(float *)&v37 * *(float *)g4_m128_ptr<int32_t>(v35))) * *(float *)&v37))
        * (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v35)
                        * (float)((float)(2.0
                                        - (float)((float)((float)(2.0 - (float)(*(float *)&v37 * *(float *)g4_m128_ptr<int32_t>(v35)))
                                                        * *(float *)&v37)
                                                * *(float *)g4_m128_ptr<int32_t>(v35)))
                                * (float)((float)(2.0 - (float)(*(float *)&v37 * *(float *)g4_m128_ptr<int32_t>(v35)))
                                        * *(float *)&v37))));
  }
  v38 = v27;
  if (g4_m128_lane<float>(v27, 0) < *(float *)g4_m128_ptr<int32_t>(m128_i128) )
  {
    v39 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
    v40 = ((_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(m128_i128) >> 1));
    v41 = (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * *(float *)&v40;
g4_m128_raw(v42) = 0x3FC00000u;
    v43 = (float)((float)((float)(*(float *)&v40 * 1.5) - (float)(v41 * (float)(*(float *)&v40 * *(float *)&v40))) * 1.5)
        - (float)((float)(v39
                        * (float)((float)(*(float *)&v40 * 1.5) - (float)(v41 * (float)(*(float *)&v40 * *(float *)&v40))))
                * (float)((float)((float)(*(float *)&v40 * 1.5) - (float)(v41 * (float)(*(float *)&v40 * *(float *)&v40)))
                        * (float)((float)(*(float *)&v40 * 1.5) - (float)(v41 * (float)(*(float *)&v40 * *(float *)&v40)))));
    *(float *)g4_m128_ptr<int32_t>(v42) = (float)(1.5 * v43) - (float)((float)(v39 * v43) * (float)(v43 * v43));
    v44 = _mm_cvtsi128_si32(v42);
    v45 = (2130706432 - v44) & ((v44 ^ (v44 + 2139095040)) >> 31);
g4_m128_raw(v38) = 0x40000000u;
g4_m128_lane<float>(v38, 0) = (float)(2.0
                            - (float)(*(float *)g4_m128_ptr<int32_t>(v42)
                                    * (float)((float)(2.0
                                                    - (float)((float)((float)(2.0
                                                                            - (float)(*(float *)&v45
                                                                                    * *(float *)g4_m128_ptr<int32_t>(v42)))
                                                                    * *(float *)&v45)
                                                            * *(float *)g4_m128_ptr<int32_t>(v42)))
                                            * (float)((float)(2.0 - (float)(*(float *)&v45 * *(float *)g4_m128_ptr<int32_t>(v42)))
                                                    * *(float *)&v45))))
                    * (float)((float)(2.0
                                    - (float)((float)((float)(2.0 - (float)(*(float *)&v45 * *(float *)g4_m128_ptr<int32_t>(v42)))
                                                    * *(float *)&v45)
                                            * *(float *)g4_m128_ptr<int32_t>(v42)))
                            * (float)((float)(2.0 - (float)(*(float *)&v45 * *(float *)g4_m128_ptr<int32_t>(v42))) * *(float *)&v45));
  }
  v46 = v27;
  if (g4_m128_lane<float>(v27, 0) < *(float *)g4_m128_ptr<int32_t>(v30) )
  {
    v47 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v30);
    v48 = ((_mm_cvtsi128_si32(v30) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v30) >> 1));
g4_m128_raw(v49) = 0x3FC00000u;
    v50 = (float)(*(float *)&v48 * 1.5)
        - (float)((float)(v47 * *(float *)&v48) * (float)(*(float *)&v48 * *(float *)&v48));
    *(float *)g4_m128_ptr<int32_t>(v49) = (float)(1.5
                                    * (float)((float)(v50 * 1.5) - (float)((float)(v47 * v50) * (float)(v50 * v50))))
                            - (float)((float)(v47
                                            * (float)((float)(v50 * 1.5)
                                                    - (float)((float)(v47 * v50) * (float)(v50 * v50))))
                                    * (float)((float)((float)(v50 * 1.5)
                                                    - (float)((float)(v47 * v50) * (float)(v50 * v50)))
                                            * (float)((float)(v50 * 1.5)
                                                    - (float)((float)(v47 * v50) * (float)(v50 * v50)))));
    v51 = _mm_cvtsi128_si32(v49);
    v52 = (2130706432 - v51) & ((v51 ^ (v51 + 2139095040)) >> 31);
    v53 = 2.0
        - (float)((float)((float)(2.0 - (float)(*(float *)&v52 * *(float *)g4_m128_ptr<int32_t>(v49))) * *(float *)&v52)
                * *(float *)g4_m128_ptr<int32_t>(v49));
g4_m128_raw(v46) = 0x40000000u;
g4_m128_lane<float>(v46, 0) = (float)(2.0
                            - (float)(*(float *)g4_m128_ptr<int32_t>(v49)
                                    * (float)(v53
                                            * (float)((float)(2.0 - (float)(*(float *)&v52 * *(float *)g4_m128_ptr<int32_t>(v49)))
                                                    * *(float *)&v52))))
                    * (float)(v53
                            * (float)((float)(2.0 - (float)(*(float *)&v52 * *(float *)g4_m128_ptr<int32_t>(v49))) * *(float *)&v52));
  }
  if (g4_m128_lane<float>(v27, 0) < v31 )
  {
    v54 = ((LODWORD(v31) + 2139095040) >> 31) & (1597463174 - (SLODWORD(v31) >> 1));
g4_m128_raw(v55) = 0x3FC00000u;
    v56 = (float)(*(float *)&v54 * 1.5)
        - (float)((float)((float)(v31 * 0.5) * *(float *)&v54) * (float)(*(float *)&v54 * *(float *)&v54));
    v57 = (float)(v56 * 1.5) - (float)((float)((float)(v31 * 0.5) * v56) * (float)(v56 * v56));
    *(float *)g4_m128_ptr<int32_t>(v55) = (float)(1.5 * v57) - (float)((float)((float)(v31 * 0.5) * v57) * (float)(v57 * v57));
    v58 = _mm_cvtsi128_si32(v55);
    v59 = (2130706432 - v58) & ((v58 ^ (v58 + 2139095040)) >> 31);
    v60 = 2.0
        - (float)((float)((float)(2.0 - (float)(*(float *)&v59 * *(float *)g4_m128_ptr<int32_t>(v55))) * *(float *)&v59)
                * *(float *)g4_m128_ptr<int32_t>(v55));
g4_m128_raw(v27) = 0x40000000u;
g4_m128_lane<float>(v27, 0) = (float)(2.0
                            - (float)(*(float *)g4_m128_ptr<int32_t>(v55)
                                    * (float)(v60
                                            * (float)((float)(2.0 - (float)(*(float *)&v59 * *(float *)g4_m128_ptr<int32_t>(v55)))
                                                    * *(float *)&v59))))
                    * (float)(v60
                            * (float)((float)(2.0 - (float)(*(float *)&v59 * *(float *)g4_m128_ptr<int32_t>(v55))) * *(float *)&v59));
  }
  v61 = *((float *)self + 5);
g4_m128_lane<float>(v38, 0) =g4_m128_lane<float>(v38, 0) * v61;
g4_m128_raw(v62) = LODWORD(v82);
g4_m128_lane<float>(v62, 0) = v82 * v61;
g4_m128_lane<float>(v46, 0) =g4_m128_lane<float>(v46, 0) * v61;
  v63 =g4_m128_raw(G4_BITCAST<__m128i>(v38));
g4_m128_lane<float>(v27, 0) =g4_m128_lane<float>(v27, 0) * v61;
g4_m128_raw(v64) = LODWORD(v95);
  *(float *)g4_m128_ptr<int32_t>(v63) = (float)(a3 + *((float *)self + 4)) +g4_m128_lane<float>(v38, 0);
g4_m128_raw(v65) = LODWORD(v93);
g4_m128_lane<float>(v64, 0) = fminf(v95, v99);
g4_m128_lane<float>(v46, 0) = (float)(a3 + *((float *)self + 4)) +g4_m128_lane<float>(v46, 0);
g4_m128_lane<float>(v27, 0) = (float)(a3 + *((float *)self + 4)) +g4_m128_lane<float>(v27, 0);
g4_m128_lane<float>(v65, 0) = fminf(v93, v97);
  v66 = _mm_cvtsi128_si32(v63);
g4_m128_lane<float>(v62, 0) = (float)(a3 + *((float *)self + 4)) +g4_m128_lane<float>(v62, 0);
g4_m128_raw(v67) = LODWORD(v96);
g4_m128_lane<float>(v67, 0) = fminf(v96, v100);
g4_m128_raw(v68) = LODWORD(v94);
g4_m128_lane<float>(v68, 0) = fminf(v94, v98);
  v69 = v65;
g4_m128_raw(v70) = LODWORD(v95);
g4_m128_lane<uint64_t>(v68, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v69, v68), 0);
g4_m128_lane<uint64_t>(v68, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v64, v67), 0);
  v71 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v46, v27), 0);
g4_m128_raw(v73) = LODWORD(v93);
g4_m128_lane<uint64_t>(v69, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v62, g4_m128_from<__m128>(_mm_cvtsi32_si128(v66))), 0);
g4_m128_lane<uint64_t>(v69, 1) = v71;
g4_m128_raw(v74) = LODWORD(v94);
g4_m128_lane<float>(v73, 0) = fmaxf(v93, v97);
g4_m128_lane<float>(v74, 0) = fmaxf(v94, v98);
g4_m128_lane<float>(v70, 0) = fmaxf(v95, v99);
  *a4 = _mm_sub_ps(v68, v69);
g4_m128_raw(v75) = LODWORD(v84);
g4_m128_lane<float>(v75, 0) = fmaxf(v84, v86);
g4_m128_lane<uint64_t>(v74, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v73, v74), 0);
g4_m128_lane<uint64_t>(v74, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v70, v75), 0);
  a4[1] = _mm_add_ps(v74, v69);
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::getSupportingVertex  (binary VA: 0x1694da0)
// Original: hkpCylinderShape::getSupportingVertex
// ----------------------------------------------------------------------------
float * hkpCylinderShape::getSupportingVertex(int a1, float *a2, int a3)
{
  float v3; // xmm6_4
  __m128i v4;
  __m128 v5;
  __m128i v6;
  int v7;
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  __m128 v12;
  float v13; // xmm3_4
  float v14; // xmm5_4
  float v15; // xmm3_4
  __m128i v16;
  __m128 v17;
  int v18;
  __m128 v19;
  int v20;
  __m128 v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  float v29; // xmm0_4
  int v30;
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float *result;
  float v36; // xmm0_4
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  int v47;

g4_m128_raw(v4) = *(unsigned int *)(a1 + 64);
  v41 = *(float *)g4_m128_ptr<int32_t>(v4);
  v42 = a2[1];
  v39 = *(float *)(a1 + 72);
  v3 = a2[2];
  v40 = *(float *)(a1 + 68);
  *(float *)g4_m128_ptr<int32_t>(v4) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v4) * *a2) + (float)(v40 * v42)) + (float)(v39 * v3);
g4_m128_raw(v5) = *(unsigned int *)a2;
  v38 = *(float *)(a1 + 84);
  v6 = v4;
g4_m128_lane<float>(v5, 0) = (float)((float)(*a2 * *(float *)(a1 + 80)) + (float)(v42 * v38)) + (float)(v3 * *(float *)(a1 + 88));
  v37 = *(float *)(a1 + 88);
  *(float *)g4_m128_ptr<int32_t>(v6) = (float)(*(float *)g4_m128_ptr<int32_t>(v4) * *(float *)g4_m128_ptr<int32_t>(v4))
                         + (float)(g4_m128_lane<float>(v5, 0) *g4_m128_lane<float>(v5, 0));
  if ( *(float *)g4_m128_ptr<int32_t>(v6) < 1.4210855e-14f )
  {
g4_m128_raw(v17) = 0x3F800000u;
    v20 = 64;
    v15 = 0.0;
g4_m128_raw(v16) = 0x3F800000u;
g4_m128_raw(v19) = 0;
g4_m128_raw(v12) = 0x7FFFFFFFu;
  }
  else
  {
    v7 = _mm_cvtsi128_si32(v6);
    v8 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v6);
    v9 = (float)(1.5 * COERCE_FLOAT(((v7 + 2139095040) >> 31) & (1597463174 - (v7 >> 1))))
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v6))
                       * COERCE_FLOAT(((v7 + 2139095040) >> 31) & (1597463174 - (v7 >> 1))))
               * (float)(COERCE_FLOAT(((v7 + 2139095040) >> 31) & (1597463174 - (v7 >> 1)))
                       * COERCE_FLOAT(((v7 + 2139095040) >> 31) & (1597463174 - (v7 >> 1)))));
    v10 = 1.5 * v9;
    v11 = (float)(v8 * v9) * (float)(v9 * v9);
g4_m128_raw(v12) = 0x7FFFFFFFu;
    v13 = v10 - v11;
g4_m128_raw(v17) = 0x3FC00000u;
g4_m128_lane<float>(v17, 0) = 1.5 * v13;
    v14 = (float)(v8 * v13) * (float)(v13 * v13);
    v15 = 0.0;
g4_m128_lane<float>(v17, 0) =g4_m128_lane<float>(v17, 0) - v14;
g4_m128_raw(v16) = 0x3F800000u;
g4_m128_lane<float>(v5, 0) =g4_m128_lane<float>(v5, 0) *g4_m128_lane<float>(v17, 0);
g4_m128_lane<float>(v17, 0) =g4_m128_lane<float>(v17, 0) * *(float *)g4_m128_ptr<int32_t>(v4);
    v18 =g4_m128_lane<float>(v5, 0) >= 0.0;
    v19 = _mm_and_ps(v5, g4_m128_u32(0x7FFFFFFFu));
    v20 = v18 << 6;
  }
  v21 = _mm_and_ps(v12, v17);
  v22 = 16;
  if (g4_m128_lane<float>(v21, 0) <g4_m128_lane<float>(v19, 0) )
  {
    v19 = v21;
    v22 = 0;
  }
  v44 = v22
      + 32 * (g4_m128_lane<float>(v17, 0) >= 0.0)
      + v20
      + (((float)((float)((float)((float)(*(float *)(a1 + 48) - *(float *)(a1 + 32)) * *a2)
                        + (float)((float)(*(float *)(a1 + 52) - *(float *)(a1 + 36)) * v42))
                + (float)(a2[2] * (float)(*(float *)(a1 + 56) - *(float *)(a1 + 40)))) <= 0.0) << 7);
g4_m128_lane<float>(v19, 0) = (float)((float)(g4_m128_lane<float>(v19, 0) * hkpCylinderShape::s_virtualTesselationParameter)
                          - hkpCylinderShape::s_intRoundUpThreshold)
                  + 0.05f;
  v23 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v19)));
  v24 = (v23 & 0x7F800000u) >> 23;
  v46 = v24 - 127;
  if ( v24 < 0x7F )
  {
    v28 = 0;
  }
  else
  {
    v25 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v19))) & 0x7FFFFF | 0x800000;
    v26 = (_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v19))) >> 31) | 1;
    if ( v46 > 23 )
      v27 = v25 << (v24 + 106);
    else
      v27 = v25 >> (23 - v46);
    v28 = v23 & 0x80000000 | (v26 * v27) & 0x7FFFFFFF;
  }
  v43 = v44 + v28;
  v47 = ((int)(uint16_t)(v44 + v28) >> 7) & 1;
  v45 = ((int)(uint16_t)(v44 + v28) >> 6) & 1;
  v29 = (float)((float)(v43 & 0xF) + 0.5) * hkpCylinderShape::s_virtualTesselationParameterInv;
  *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) - (float)(v29 * v29);
  if ( *(float *)g4_m128_ptr<int32_t>(v16) > 0.0 )
  {
    v30 = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
    v31 = (float)(*(float *)&v30 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * *(float *)&v30)
                * (float)(*(float *)&v30 * *(float *)&v30));
    v32 = (float)(v31 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * v31) * (float)(v31 * v31));
    v15 = (float)((float)(1.5 * v32)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * v32) * (float)(v32 * v32)))
        * *(float *)g4_m128_ptr<int32_t>(v16);
  }
  if ( (((int)(uint16_t)v43 >> 4) & 1) != 0 )
  {
    v33 = v15;
    v15 = (float)((float)(v43 & 0xF) + 0.5) * hkpCylinderShape::s_virtualTesselationParameterInv;
    v29 = v33;
  }
  if ( v45 == 0 )
    v15 = -v15;
  if ( (((int)(uint16_t)v43 >> 5) & 1) == 0 )
    v29 = -v29;
  v34 = *(float *)(a1 + 20);
  result = (float *)(a1 + 16 * (1 - v47) + 32);
  *(float *)a3 = (float)((float)((float)(v41 * v29) + (float)(*(float *)(a1 + 80) * v15)) * v34) + *result;
  *(float *)(a3 + 4) = (float)((float)((float)(v40 * v29) + (float)(v38 * v15)) * v34)
                     + *(float *)(a1 + 16 * (1 - v47) + 36);
  v36 = (float)((float)((float)(v29 * v39) + (float)(v15 * v37)) * v34) + *(float *)(a1 + 16 * (1 - v47) + 40);
  *(uint32_t *)(a3 + 12) = v43 | 0x3F000000;
  *(float *)(a3 + 8) = v36;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::castRay  (binary VA: 0x1695bb0)
// Original: hkpCylinderShape::castRay
// ----------------------------------------------------------------------------
uint8_t * hkpCylinderShape::castRay(uint8_t *a1, int a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  __m128i v8;
  bool v9;
  float v10; // xmm3_4
  float v11; // xmm4_4
  __m128i v12;
  char v13;
  char v14;
  char v15;
  char v16;
  float v17;
  int v18;
  float v19; // xmm7_4
  float v20; // xmm4_4
  int v21;
  char v22;
  float v23;
  float v24;
  float v25; // xmm0_4
  float v26;
  __m128 v27;
  __m128 v28;
  __m128 v29;
  __m128i m128_i128;
  float v31; // xmm5_4
  int v32;
  float v33; // xmm1_4
  float v34; // xmm0_4
  __m128 v35;
  __m128 v36;
  __m128 v37;
  __m128 v38;
  __m128 v39;
  unsigned int v40;
  int v41;
  uint32_t *v42;
  uint64_t v43; // rax
  int v45;
  int v46;
  float v47; // xmm0_4
  float v48; // xmm6_4
  int v49;
  int v50;
  char v51;
  int v52;
  uint32_t *v53;
  uint64_t v54; // rax
  typedef int *_g4_t_v55;
  typedef int32_t _g4_t_v56;
  typedef bool _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef __m128 _g4_t_v65;
  typedef __m128 _g4_t_v66;
  typedef g4_int128_t _g4_t_v67;
  typedef float _g4_t_v68[15];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v55)) > _g4_s0 ? (12u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v56)) > _g4_s1 ? (32u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v57)) > _g4_s2 ? (36u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v58)) > _g4_s3 ? (40u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v59)) > _g4_s4 ? (40u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v60)) > _g4_s5 ? (44u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v61)) > _g4_s6 ? (44u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v62)) > _g4_s7 ? (44u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v63)) > _g4_s8 ? (48u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v64)) > _g4_s9 ? (60u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v65)) > _g4_s10 ? (64u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v66)) > _g4_s11 ? (80u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v67)) > _g4_s12 ? (96u + sizeof(_g4_t_v67)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v68)) > _g4_s13 ? (112u + sizeof(_g4_t_v68)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 112u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v55 = address;
  v6 = *(uint32_t **)(*address + 4);
  v60 = *(uint32_t *)(v5 + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(v5 + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcCylinder");
    v7 = __rdtsc();
    *(uint32_t *)(v60 + 4) = v7;
    *(uint32_t *)(v5 + 4) = v60 + 12;
  }
g4_m128_raw(v8) = *(unsigned int *)(a3 + 16);
  *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8) - *(float *)a3;
  v9 = false;
  v10 = 1.0;
  v11 = *(float *)(a3 + 20) - *(float *)(a3 + 4);
g4_m128_raw(v12) = *(unsigned int *)(a3 + 24);
  v61 = v11;
  if ( *(float *)g4_m128_ptr<int32_t>(v8) == 0.0 )
    v9 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v8));
  *(float *)g4_m128_ptr<int32_t>(v12) = *(float *)g4_m128_ptr<int32_t>(v12) - *(float *)(a3 + 8);
  if ( __builtin_isnan(v11) || (v13 = 2, v11 != 0.0) )
    v13 = 0;
  v14 = v9 | v13;
  if ( *(float *)g4_m128_ptr<int32_t>(v12) != 0.0 )
  {
    v15 = 8;
    if ( 0.0 != 1.0 )
      v15 = 0;
    v16 = v14 | v15;
    if ( (v16 & 1) == 0 )
      goto LABEL_11;
LABEL_41:
    v57 = true;
    v58 = 0;
g4_m128_raw(v8) = 0;
    if ( (v16 & 2) == 0 )
      goto LABEL_12;
    goto LABEL_42;
  }
  v51 = 12;
  if ( 0.0 != 1.0 )
    v51 = 4;
  v16 = v14 | v51;
  if ( (v16 & 1) != 0 )
    goto LABEL_41;
LABEL_11:
  v58 = _mm_cvtsi128_si32(v8);
  v57 = *(float *)g4_m128_ptr<int32_t>(v8) >= 0.0;
  if ( (v16 & 2) == 0 )
  {
LABEL_12:
    v17 = *(float *)(a3 + 20) - *(float *)(a3 + 4);
    goto LABEL_13;
  }
LABEL_42:
  v61 = 0.0;
  v17 = 0.0;
LABEL_13:
  v18 = _mm_cvtsi128_si32(v12);
  if ( (v16 & 4) != 0 )
  {
    v18 = 0;
g4_m128_raw(v12) = 0;
  }
  if ( (v16 & 8) != 0 )
    v10 = 0.0;
  v19 = 3.40282e38f;
  if ( v58 < 0 )
    v19 = -3.40282e38f;
  v20 = 3.40282e38f;
  v59 = 3.40282e38f;
  if ( __builtin_signbit(v17) )
  {
    v59 = -3.40282e38f;
    v20 = 3.40282e38f;
  }
  if ( v18 < 0 )
    v20 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v8) != 0.0 )
  {
    v49 = _mm_cvtsi128_si32(v8);
    v50 = (2130706432 - v49) & ((v49 ^ (v49 + 2139095040)) >> 31);
    v19 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v8)
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v8)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v50))
                                                        * *(float *)&v50)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v50))
                                        * *(float *)&v50))))
        * (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v8)
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v50))
                                        * *(float *)&v50)))
                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v50)) * *(float *)&v50));
  }
  if ( v61 != 0.0 )
  {
    v56 =g4_m128_lane<int32_t>(v12, 0);
    v47 = COERCE_FLOAT((2130706432 - LODWORD(v61)) & ((LODWORD(v61) ^ (LODWORD(v61) + 2139095040)) >> 31))
        * (float)(2.0
                - (float)(v61
                        * COERCE_FLOAT((2130706432 - LODWORD(v61)) & ((LODWORD(v61) ^ (LODWORD(v61) + 2139095040)) >> 31))));
    v48 = (float)(2.0 - (float)(v47 * v61)) * v47;
g4_m128_raw(v12) = (unsigned int)v56;
    v59 = v48 * (float)(2.0 - (float)(v61 * v48));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v12) != 0.0 )
  {
    v45 = _mm_cvtsi128_si32(v12);
    v46 = (2130706432 - v45) & ((v45 ^ (v45 + 2139095040)) >> 31);
    v20 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v46))
                                                        * *(float *)&v46)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v46))
                                        * *(float *)&v46))))
        * (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v46))
                                        * *(float *)&v46)))
                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v46)) * *(float *)&v46));
  }
  v68[6] = *(float *)g4_m128_ptr<int32_t>(v12);
  v68[7] = v10;
  v68[4] = *(float *)g4_m128_ptr<int32_t>(v8);
  v68[5] = v61;
  v68[8] = v19;
  v68[10] = v20;
  LOBYTE(v21) = *(float *)g4_m128_ptr<int32_t>(v12) >= 0.0 ? 4 : 0;
  if ( v10 >= 0.0 )
    v21 = *(float *)g4_m128_ptr<int32_t>(v12) < 0.0 ? 8 : 12;
  v68[9] = v59;
  v22 = v21 | v57 | (v61 >= 0.0 ? 2 : 0);
  v68[0] = *(float *)a3;
  v68[1] = *(float *)(a3 + 4);
  v23 = *(float *)(a3 + 8);
  LODWORD(v68[11]) = v22 & 7 | 0x3F000000;
  v68[2] = v23;
  v24 = *(float *)(a2 + 16);
  v68[3] = *(float *)(a3 + 12);
  v25 = v24 + *(float *)(a2 + 20);
  v65 = *(__m128 *)(a2 + 32);
  v26 = *(float *)(a2 + 48);
  v64 = v25;
g4_m128_lane<float>(v66, 0) = v26;
  *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v66) + 4) = *(uint64_t *)(a2 + 52);
g4_m128_raw(v27) =g4_m128_lane<uint32_t>(v66, 1);
g4_m128_raw(v28) = LODWORD(v26);
g4_m128_lane<float>(v27, 0) =g4_m128_lane<float>(v66, 1) -g4_m128_lane<float>(v65, 1);
  v62 = v26;
g4_m128_lane<float>(v28, 0) = v26 -g4_m128_lane<float>(v65, 0);
g4_m128_lane<int32_t>(v66, 3) = *(uint32_t *)(a2 + 60);
g4_m128_raw(v29) =g4_m128_lane<uint32_t>(v66, 2);
g4_m128_lane<float>(v29, 0) =g4_m128_lane<float>(v66, 2) -g4_m128_lane<float>(v65, 2);
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v28));
  *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v28, 0) *g4_m128_lane<float>(v28, 0))
                                        + (float)(g4_m128_lane<float>(v27, 0) *g4_m128_lane<float>(v27, 0)))
                                + (float)(g4_m128_lane<float>(v29, 0) *g4_m128_lane<float>(v29, 0));
  if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) <= 0.0 )
  {
g4_m128_raw(v35) = 0;
  }
  else
  {
    v31 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
    v32 = ((_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(m128_i128) >> 1));
g4_m128_raw(v35) = 0x3FC00000u;
    v33 = (float)(*(float *)&v32 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * *(float *)&v32)
                * (float)(*(float *)&v32 * *(float *)&v32));
    v34 = (float)(v33 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * v33) * (float)(v33 * v33));
g4_m128_lane<float>(v35, 0) = (float)(1.5 * v34) - (float)((float)(v31 * v34) * (float)(v34 * v34));
  }
g4_m128_lane<uint64_t>(v36, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v28, v27), 0);
g4_m128_lane<uint64_t>(v37, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v65), 0),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v65), 1)), 0);
g4_m128_lane<uint64_t>(v37, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v65), 2),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v65), 3)), 0);
g4_m128_raw(v38) = (g4_int128_t)_mm_cvtsi32_si128(LODWORD(v24));
g4_m128_lane<uint64_t>(v36, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v29, g4_m128_from<__m128>(COERCE_UNSIGNED_INT(g4_m128_lane<float>(v66, 3) -g4_m128_lane<float>(v65, 3)))), 0);
  v39 = _mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), _mm_mul_ps(v36, _mm_shuffle_ps(v35, v35, 0)));
  v65 = _mm_sub_ps(v37, v39);
g4_m128_lane<uint64_t>(v37, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v62)),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v66), 1)), 0);
g4_m128_lane<uint64_t>(v37, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v66), 2), g4_m128_from<__m128>(_mm_cvtsi32_si128(g4_m128_lane<uint32_t>(v66, 3)))), 0);
  v63 = *(float *)(a4 + 16);
  v66 = _mm_add_ps(v37, v39);
  if ( hkcdRayCastCylinder(v68,g4_m128_ptr<float>(v65),g4_m128_ptr<float>(v66), &v64, &v63, &v67) != 0 )
  {
    v40 = (unsigned int)(uintptr_t)(v67);
    *(float *)(a4 + 16) = v63;
    *(uint64_t *)a4 = __PAIR64__(DWORD1(v67), v40);
    *(uint64_t *)(a4 + 8) = *((uint64_t *)&v67 + 1);
    *(uint32_t *)(a4 + 4 * *(uint32_t *)(a4 + 64) + 32) = -1;
    v41 = *v55;
    v42 = *(uint32_t **)(*v55 + 4);
    if ( (unsigned int)(uintptr_t)(v42) < *(uint32_t *)(*v55 + 12) )
    {
      *v42 = (uint32_t)(uintptr_t)("Et");
      v43 = __rdtsc();
      v42[1] = v43;
      *(uint32_t *)(v41 + 4) = (uint32_t)(uintptr_t)(v42 + 3);
    }
    *a1 = 1;
    return a1;
  }
  else
  {
    v52 = *v55;
    v53 = *(uint32_t **)(*v55 + 4);
    if ( (unsigned int)(uintptr_t)(v53) < *(uint32_t *)(*v55 + 12) )
    {
      *v53 = (uint32_t)(uintptr_t)("Et");
      v54 = __rdtsc();
      v53[1] = v54;
      *(uint32_t *)(v52 + 4) = (uint32_t)(uintptr_t)(v53 + 3);
    }
    *a1 = 0;
    return a1;
  }
}



// ============================================================================
// Address:   0x16962c0 (size: 265 bytes)
// Symbol:    _ZN16hkpCylinderShapeC2E24hkFinishLoadedObjectFlag
// Demangled: hkpCylinderShape::hkpCylinderShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN16hkpCylinderShapeC1E24hkFinishLoadedObjectFlag'
void (**hkpCylinderShape::Construct(int a1, int a2))(hkpCylinderShape::Self * self)
{
  void (**result)(hkpCylinderShape::Self *);
  __m128i v3; // xmm0
  bool v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  hkpConvexShape::hkpConvexShape(a1, a2);
  result = (void (**)(hkpCylinderShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2099428));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2099428);
  if ( a2 != 0 )
  {
g4_m128_raw(v3) = 0;
    result = (void (**)(hkpCylinderShape::Self *))&hkpCylinderShape::s_intRoundUpThreshold;
    if ( hkpCylinderShape::s_intRoundUpThreshold < 0.0 )
    {
      v11 = 111;
      while ( 1 )
      {
        v4 = v11-- == 1;
        *(float *)g4_m128_ptr<int32_t>(v3) = *(float *)g4_m128_ptr<int32_t>(v3) + 0.01f;
        if ( v4 )
          break;
        v5 = _mm_cvtsi128_si32(v3);
        v6 = (v5 & 0x7F800000u) >> 23;
        v7 = v6 - 127;
        if ( v6 >= 0x7F )
        {
          v8 = _mm_cvtsi128_si32(v3) & 0x7FFFFF | 0x800000;
          v9 = (_mm_cvtsi128_si32(v3) >> 31) | 1;
          v10 = v7 <= 23 ? v8 >> (23 - v7) : v8 << (v6 + 106);
          if ( (v5 & 0x80000000 | (v10 * v9) & 0x7FFFFFFF) != 0 )
          {
            result = (void (**)(hkpCylinderShape::Self *))&hkpCylinderShape::s_intRoundUpThreshold;
            hkpCylinderShape::s_intRoundUpThreshold = 1.0 - *(float *)g4_m128_ptr<int32_t>(v3);
            goto LABEL_3;
          }
        }
      }
      result = (void (**)(hkpCylinderShape::Self *))&hkpCylinderShape::s_intRoundUpThreshold;
      hkpCylinderShape::s_intRoundUpThreshold = 0.0;
    }
  }
LABEL_3:
  *(uint8_t *)(a1 + 8) = 1;
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::setNumberOfVirtualSideSegments  (binary VA: 0x16963d0)
// Original: hkpCylinderShape::setNumberOfVirtualSideSegments
// ----------------------------------------------------------------------------
float * hkpCylinderShape::setNumberOfVirtualSideSegments(hkpCylinderShape::Self *self)
{
  hkpCylinderShape::s_virtualTesselationParameter = (float)((float)((int)(uintptr_t)(self) / 8) - 0.1f) / 0.707f;
  hkpCylinderShape::s_virtualTesselationParameterInv = 1.0 / hkpCylinderShape::s_virtualTesselationParameter;
  return &hkpCylinderShape::s_virtualTesselationParameterInv;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::presetPerpendicularVector  (binary VA: 0x1696430)
// Original: hkpCylinderShape::presetPerpendicularVector
// ----------------------------------------------------------------------------
hkpCylinderShape::Self * hkpCylinderShape::presetPerpendicularVector(hkpCylinderShape::Self *self)
{
  hkpCylinderShape::Self *result;
  __m128i v2;
  __m128i v3;
  __m128 v4;
  __m128i v5;
  float v6; // xmm0_4
  float v7; // xmm6_4
  int v8;
  int v9;
  float v10; // xmm5_4
  float v11; // xmm5_4
  float v12; // xmm7_4
  __m128 v13;
  __m128 v14;
  __m128 m128i_i128;
  float v16;
  int v17;
  int v18;
  __m128 v19;
  uint32_t v20; // xmm4_4
  __m128i v21;
  __m128i v22;
  float v23; // xmm6_4
  int v24;
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float v30;
  float v31;

  result = self;
g4_m128_raw(v2) = *((unsigned int *)self + 12);
g4_m128_raw(v3) = *((unsigned int *)self + 13);
g4_m128_raw(v4) = *((unsigned int *)self + 14);
  *(float *)g4_m128_ptr<int32_t>(v2) = *(float *)g4_m128_ptr<int32_t>(v2) - *((float *)self + 8);
  *(float *)g4_m128_ptr<int32_t>(v3) = *(float *)g4_m128_ptr<int32_t>(v3) - *((float *)self + 9);
g4_m128_lane<float>(v4, 0) =g4_m128_lane<float>(v4, 0) - *((float *)self + 10);
  v5 = v2;
  *(float *)g4_m128_ptr<int32_t>(v5) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v2) * *(float *)g4_m128_ptr<int32_t>(v2))
                                 + (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)g4_m128_ptr<int32_t>(v3)))
                         + (float)(g4_m128_lane<float>(v4, 0) *g4_m128_lane<float>(v4, 0));
  v6 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v5) <= 0.0 )
  {
    v11 = 0.0;
  }
  else
  {
    v7 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v5);
    v8 = _mm_cvtsi128_si32(v5) >> 1;
    v9 = (_mm_cvtsi128_si32(v5) + 2139095040) >> 31;
    v10 = (float)(1.5 * COERCE_FLOAT(v9 & (1597463174 - v8)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v5)) * COERCE_FLOAT(v9 & (1597463174 - v8)))
                * (float)(COERCE_FLOAT(v9 & (1597463174 - v8)) * COERCE_FLOAT(v9 & (1597463174 - v8))));
    v11 = (float)(1.5 * (float)((float)(1.5 * v10) - (float)((float)(v7 * v10) * (float)(v10 * v10))))
        - (float)((float)(v7 * (float)((float)(1.5 * v10) - (float)((float)(v7 * v10) * (float)(v10 * v10))))
                * (float)((float)((float)(1.5 * v10) - (float)((float)(v7 * v10) * (float)(v10 * v10)))
                        * (float)((float)(1.5 * v10) - (float)((float)(v7 * v10) * (float)(v10 * v10)))));
  }
  *(float *)g4_m128_ptr<int32_t>(v2) = *(float *)g4_m128_ptr<int32_t>(v2) * v11;
  *(float *)g4_m128_ptr<int32_t>(v3) = *(float *)g4_m128_ptr<int32_t>(v3) * v11;
g4_m128_lane<float>(v4, 0) =g4_m128_lane<float>(v4, 0) * v11;
  v12 = fabs(*(float *)g4_m128_ptr<int32_t>(v2));
g4_m128_lane<int32_t>(v13, 0) = fabs(*(float *)g4_m128_ptr<int32_t>(v3));
  v14 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v4);
  if ( v12 >g4_m128_lane<float>(v13, 0) )
  {
    m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v3));
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    v17 = 0;
    v18 = 1;
  }
  else
  {
    m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v2));
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
g4_m128_lane<float>(v13, 0) = v12;
    v17 = 1;
    v18 = 0;
  }
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  v19 = _mm_cmplt_ss(v14, v13);
  v20 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v19, v4), 0) | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(m128i_i128, v19)));
  *((uint32_t *)self + 18) = 0;
  if (g4_m128_lane<float>(v13, 0) <=g4_m128_lane<float>(v14, 0) )
    v18 = 2;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + v17 + 16) = v20;
  *((float *)self + v18 + 16) = -v16;
g4_m128_raw(v21) = *((unsigned int *)self + 16);
  v22 = v21;
  v31 = *((float *)self + 17);
  v30 = *((float *)self + 18);
  *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v21) * *(float *)g4_m128_ptr<int32_t>(v21)) + (float)(v31 * v31))
                          + (float)(v30 * v30);
  if ( *(float *)g4_m128_ptr<int32_t>(v22) > 0.0 )
  {
    v23 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v22);
    v24 = ((_mm_cvtsi128_si32(v22) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v22) >> 1));
    v25 = (float)(1.5 * *(float *)&v24)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * *(float *)&v24)
                * (float)(*(float *)&v24 * *(float *)&v24));
    v6 = (float)(1.5 * (float)((float)(1.5 * v25) - (float)((float)(v23 * v25) * (float)(v25 * v25))))
       - (float)((float)(v23 * (float)((float)(1.5 * v25) - (float)((float)(v23 * v25) * (float)(v25 * v25))))
               * (float)((float)((float)(1.5 * v25) - (float)((float)(v23 * v25) * (float)(v25 * v25)))
                       * (float)((float)(1.5 * v25) - (float)((float)(v23 * v25) * (float)(v25 * v25)))));
  }
  *((uint32_t *)self + 23) = 0;
  v26 = *(float *)g4_m128_ptr<int32_t>(v21) * v6;
  v27 = v31 * v6;
  v28 = v30 * v6;
  v29 = v6 * *((float *)self + 19);
  *((float *)self + 16) = v26;
  *((float *)self + 17) = v27;
  *((float *)self + 18) = v28;
  *((float *)self + 19) = v29;
  *((float *)self + 20) = (float)(*(float *)g4_m128_ptr<int32_t>(v3) * v28) - (float)(g4_m128_lane<float>(v4, 0) * v27);
  *((float *)self + 21) = (float)(g4_m128_lane<float>(v4, 0) * v26) - (float)(v28 * *(float *)g4_m128_ptr<int32_t>(v2));
  *((float *)self + 22) = (float)(*(float *)g4_m128_ptr<int32_t>(v2) * v27) - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * v26);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::getCylinderRadius  (binary VA: 0x1696710)
// Original: hkpCylinderShape::getCylinderRadius
// ----------------------------------------------------------------------------
long double hkpCylinderShape::getCylinderRadius(hkpCylinderShape::Self *self)
{
  return *((float *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::setCylinderRadius  (binary VA: 0x1696730)
// Original: hkpCylinderShape::setCylinderRadius
// ----------------------------------------------------------------------------
hkpCylinderShape::Self * hkpCylinderShape::setCylinderRadius(hkpCylinderShape::Self *self, float a2)
{
  float v3; // xmm0_4

  *((float *)self + 5) = a2;
  v3 = a2 + *((float *)self + 4);
  *((float *)self + 11) = v3;
  *((float *)self + 15) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::Construct  (binary VA: 0x1696750)
// Original: hkpCylinderShape::hkpCylinderShape
// ----------------------------------------------------------------------------
void hkpCylinderShape::Construct(hkpCylinderShape::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float a4, float a5)
{
  hkpCylinderShape::Self *v5;
  __m128i v6;
  bool v7; // cc
  bool v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v5 = self;
  *((float *)self + 4) = a5;
g4_m128_raw(v6) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099428);
  v7 = hkpCylinderShape::s_intRoundUpThreshold >= 0.0;
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 1;
  *((uint8_t *)self + 9) = 4;
  *((uint8_t *)self + 10) = 0;
  *((uint8_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 0;
  if ( !v7 )
  {
    v15 = 111;
    while ( 1 )
    {
      v8 = v15-- == 1;
      *(float *)g4_m128_ptr<int32_t>(v6) = *(float *)g4_m128_ptr<int32_t>(v6) + 0.01f;
      if ( v8 )
        break;
      v9 = _mm_cvtsi128_si32(v6);
      v10 = (v9 & 0x7F800000u) >> 23;
      v11 = v10 - 127;
      if ( v10 >= 0x7F )
      {
        v12 = _mm_cvtsi128_si32(v6) & 0x7FFFFF | 0x800000;
        v13 = (_mm_cvtsi128_si32(v6) >> 31) | 1;
        v14 = v11 <= 23 ? v12 >> (23 - v11) : v12 << (v10 + 106);
        if ( (v9 & 0x80000000 | (v14 * v13) & 0x7FFFFFFF) != 0 )
        {
          v5 = self;
          hkpCylinderShape::s_intRoundUpThreshold = 1.0 - *(float *)g4_m128_ptr<int32_t>(v6);
          goto LABEL_2;
        }
      }
    }
    v5 = self;
    hkpCylinderShape::s_intRoundUpThreshold = 0.0;
  }
LABEL_2:
  *((uint32_t *)v5 + 8) = *(uint32_t *)a2;
  *((uint32_t *)v5 + 9) = *((uint32_t *)a2 + 1);
  *((uint32_t *)v5 + 10) = *((uint32_t *)a2 + 2);
  *((uint32_t *)v5 + 11) = *((uint32_t *)a2 + 3);
  *((uint32_t *)v5 + 12) = *(uint32_t *)a3;
  *((uint32_t *)v5 + 13) = *((uint32_t *)a3 + 1);
  *((uint32_t *)v5 + 14) = *((uint32_t *)a3 + 2);
  *((uint32_t *)v5 + 15) = *((uint32_t *)a3 + 3);
  hkpCylinderShape::setCylinderRadius(v5, a4);
  hkpCylinderShape::presetPerpendicularVector(v5);
  *((uint32_t *)v5 + 6) = 1061997773;
}

// ----------------------------------------------------------------------------
// Function: hkpCylinderShape::staticClass  (binary VA: 0x169bc00)
// Original: hkpCylinderShape::staticClass
// ----------------------------------------------------------------------------
void * hkpCylinderShape::staticClass()
{
  return &hkpCylinderShapeClass;
}


