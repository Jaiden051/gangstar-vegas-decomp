#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpHingeLi.h"

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::Atoms::staticClass  (binary VA: 0x171b2b0)
// Original: hkpHingeLimitsData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpHingeLimitsData::Atoms::staticClass()
{
  return &hkpHingeLimitsDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::staticClass  (binary VA: 0x171b2d0)
// Original: hkpHingeLimitsData::staticClass
// ----------------------------------------------------------------------------
void * hkpHingeLimitsData::staticClass()
{
  return &hkpHingeLimitsDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::getRuntimeInfo  (binary VA: 0x171ce20)
// Original: hkpHingeLimitsData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpHingeLimitsData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  a3[1] = 3;
  *a3 = 28;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::getType  (binary VA: 0x171ce40)
// Original: hkpHingeLimitsData::getType
// ----------------------------------------------------------------------------
int hkpHingeLimitsData::getType()
{
  return 18;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::Destroy  (binary VA: 0x171ce50)
// Original: hkpHingeLimitsData::~hkpHingeLimitsData
// ----------------------------------------------------------------------------
void hkpHingeLimitsData::Destroy(hkpHingeLimitsData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::getConstraintInfo  (binary VA: 0x171ce70)
// Original: hkpHingeLimitsData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpHingeLimitsData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 144, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::isValid  (binary VA: 0x171ceb0)
// Original: hkpHingeLimitsData::isValid
// ----------------------------------------------------------------------------
hkpHingeLimitsData::Self * hkpHingeLimitsData::isValid(hkpHingeLimitsData::Self *self, int a2)
{
  bool isOrthonormal;
  bool v3;

  isOrthonormal = hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 32), 0.00001f);
  v3 = false;
  if ( isOrthonormal )
    v3 = hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 80), 0.00001f);
  *(uint8_t *)self = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::Destroy_ea171cf10  (binary VA: 0x171cf10)
// Original: hkpHingeLimitsData::~hkpHingeLimitsData
// ----------------------------------------------------------------------------
void hkpHingeLimitsData::Destroy_ea171cf10(hkpHingeLimitsData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 160;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::Construct  (binary VA: 0x171cf70)
// Original: hkpHingeLimitsData::hkpHingeLimitsData
// ----------------------------------------------------------------------------
void hkpHingeLimitsData::Construct(hkpHingeLimitsData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D4A8);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 4;
  *((uint16_t *)self + 64) = 14;
  *((uint8_t *)self + 130) = 1;
  *((uint16_t *)self + 72) = 12;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 20) = 1065353216;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 30) = 1065353216;
  *((uint32_t *)self + 31) = 0;
  *((uint8_t *)self + 146) = 0;
  *((uint8_t *)self + 131) = 0;
  *((uint32_t *)self + 33) = -1068953637;
  *((uint32_t *)self + 34) = 1078530011;
  *((uint32_t *)self + 35) = 1065353216;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::setInWorldSpace  (binary VA: 0x171d0c0)
// Original: hkpHingeLimitsData::setInWorldSpace
// ----------------------------------------------------------------------------
const hkMatrix3f::Self * hkpHingeLimitsData::setInWorldSpace(hkpHingeLimitsData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4)
{
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm7_4
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  float v11; // xmm6_4
  int v12;
  int v13;
  bool v14; // cc
  __m128 v15;
  float v16; // xmm1_4
  uint32_t v17; // xmm0_4
  __m128i v18;
  float v19; // xmm6_4
  int v20;
  int v21;
  float v22; // xmm1_4
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v27)) > _g4_s3 ? (20u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v28)) > _g4_s4 ? (24u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v30)) > _g4_s6 ? (32u + sizeof(_g4_t_v30)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);

  v4 = *(float *)a4;
  v5 = *((float *)a4 + 1);
  v6 = fabs(*(float *)a4);
g4_m128_lane<int32_t>(v7, 0) = fabs(v5);
g4_m128_raw(v8) = *((unsigned int *)a4 + 2);
  v9 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v8);
  if ( v6 >g4_m128_lane<float>(v7, 0) )
  {
g4_m128_raw(v10) = *((unsigned int *)a4 + 1);
    v11 = *(float *)a4;
    v12 = 0;
    v13 = 1;
  }
  else
  {
g4_m128_raw(v10) = *(unsigned int *)a4;
    v11 = *((float *)a4 + 1);
g4_m128_lane<float>(v7, 0) = v6;
    v12 = 1;
    v13 = 0;
  }
  v14 =g4_m128_lane<float>(v7, 0) <=g4_m128_lane<float>(v9, 0);
  v15 = _mm_cmplt_ss(v9, v7);
  v16 = 0.0;
  *(float *)&v26 = 0.0;
  v27 = 0.0;
  v17 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v15, v8), 0) | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(v10, v15)));
  v28 = 0.0;
  if ( v14 )
    v13 = 2;
  v29 = 0.0;
  *(&v26 + v12) = v17;
  *((float *)&v26 + v13) = -v11;
g4_m128_raw(v18) = v26;
  v25 = v27;
  v24 = v28;
  *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)g4_m128_ptr<int32_t>(v18)) + (float)(v27 * v27))
                          + (float)(v28 * v28);
  if ( *(float *)g4_m128_ptr<int32_t>(v18) > 0.0 )
  {
    v19 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v18);
    v20 = _mm_cvtsi128_si32(v18) >> 1;
    v21 = (_mm_cvtsi128_si32(v18) + 2139095040) >> 31;
    v22 = (float)(1.5 * COERCE_FLOAT(v21 & (1597463174 - v20)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * COERCE_FLOAT(v21 & (1597463174 - v20)))
                * (float)(COERCE_FLOAT(v21 & (1597463174 - v20)) * COERCE_FLOAT(v21 & (1597463174 - v20))));
    v16 = (float)(1.5 * (float)((float)(1.5 * v22) - (float)((float)(v19 * v22) * (float)(v22 * v22))))
        - (float)((float)(v19 * (float)((float)(1.5 * v22) - (float)((float)(v19 * v22) * (float)(v22 * v22))))
                * (float)((float)((float)(1.5 * v22) - (float)((float)(v19 * v22) * (float)(v22 * v22)))
                        * (float)((float)(1.5 * v22) - (float)((float)(v19 * v22) * (float)(v22 * v22)))));
  }
  v30[3] = 0.0;
  *(float *)&v26 = *(float *)&v26 * v16;
  v28 = v28 * v16;
  v29 = v16 * v29;
  v27 = v27 * v16;
  v30[0] = (float)(v5 * (float)(v24 * v16)) - (float)(g4_m128_lane<float>(v8, 0) * (float)(v25 * v16));
  v30[1] = (float)(g4_m128_lane<float>(v8, 0) * *(float *)&v26) - (float)((float)(v24 * v16) * v4);
  v30[2] = (float)(v4 * (float)(v25 * v16)) - (float)(*(float *)&v26 * v5);
  hkVector4f::setRotatedInverseDir((hkpHingeLimitsData::Self *)((char *)self + 32), a2, a4);
  hkVector4f::setRotatedInverseDir((hkpHingeLimitsData::Self *)((char *)self + 48), a2, (const hkVector4f::Self *)&v26);
  hkVector4f::setRotatedInverseDir((hkpHingeLimitsData::Self *)((char *)self + 64), a2, (const hkVector4f::Self *)v30);
  hkVector4f::setRotatedInverseDir((hkpHingeLimitsData::Self *)((char *)self + 80), a3, a4);
  hkVector4f::setRotatedInverseDir((hkpHingeLimitsData::Self *)((char *)self + 96), a3, (const hkVector4f::Self *)&v26);
  return hkVector4f::setRotatedInverseDir((hkpHingeLimitsData::Self *)((char *)self + 112), a3, (const hkVector4f::Self *)v30);
}

// ----------------------------------------------------------------------------
// Function: hkpHingeLimitsData::setInBodySpace  (binary VA: 0x171d380)
// Original: hkpHingeLimitsData::setInBodySpace
// ----------------------------------------------------------------------------
hkpHingeLimitsData::Self * hkpHingeLimitsData::setInBodySpace(hkpHingeLimitsData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5)
{
  hkpHingeLimitsData::Self *result;
  __m128i v6;
  float v7; // xmm4_4
  float v8; // xmm3_4
  __m128i v9;
  float v10; // xmm0_4
  float v11; // xmm6_4
  int v12;
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  __m128i v19;
  float v20; // xmm4_4
  float v21; // xmm3_4
  __m128i v22;
  float v23; // xmm6_4
  int v24;
  float v25; // xmm2_4
  float v26; // xmm2_4
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm4_4
  float v32; // xmm2_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  float v35; // xmm3_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  float v38; // xmm1_4
  __m128i v39;
  float v40; // xmm4_4
  float v41; // xmm3_4
  __m128i v42;
  float v43; // xmm6_4
  int v44;
  float v45; // xmm2_4
  float v46; // xmm2_4
  float v47; // xmm5_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  __m128i v51;
  float v52; // xmm4_4
  float v53; // xmm3_4
  __m128i v54;
  float v55; // xmm6_4
  int v56;
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm5_4
  float v60; // xmm4_4
  float v61; // xmm3_4
  float v62; // xmm0_4
  float v63; // xmm4_4
  float v64; // xmm0_4
  float v65; // xmm7_4
  float v66; // xmm6_4
  float v67; // xmm5_4
  float v68; // xmm3_4
  int v69;
  int v70;

  result = self;
  *((uint32_t *)self + 8) = *(uint32_t *)a2;
g4_m128_raw(v6) = *((unsigned int *)self + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 1);
  v7 = *((float *)self + 9);
  v9 = v6;
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 2);
  v8 = *((float *)self + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 3);
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v6) * *(float *)g4_m128_ptr<int32_t>(v6)) + (float)(v7 * v7))
                         + (float)(v8 * v8);
  v10 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v9) <= 0.0 )
  {
    v14 = 0.0;
  }
  else
  {
    v11 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v9);
    v69 = 1597463174 - (_mm_cvtsi128_si32(v9) >> 1);
    v12 = (_mm_cvtsi128_si32(v9) + 2139095040) >> 31;
    v13 = (float)(1.5 * COERCE_FLOAT(v12 & v69))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * COERCE_FLOAT(v12 & v69))
                * (float)(COERCE_FLOAT(v12 & v69) * COERCE_FLOAT(v12 & v69)));
    v14 = (float)(1.5 * (float)((float)(1.5 * v13) - (float)((float)(v11 * v13) * (float)(v13 * v13))))
        - (float)((float)(v11 * (float)((float)(1.5 * v13) - (float)((float)(v11 * v13) * (float)(v13 * v13))))
                * (float)((float)((float)(1.5 * v13) - (float)((float)(v11 * v13) * (float)(v13 * v13)))
                        * (float)((float)(1.5 * v13) - (float)((float)(v11 * v13) * (float)(v13 * v13)))));
  }
  v15 = *(float *)g4_m128_ptr<int32_t>(v6) * v14;
  v16 = v7 * v14;
  v17 = v8 * v14;
  v18 = v14 * *((float *)self + 11);
  *((float *)self + 8) = v15;
  *((float *)self + 9) = v16;
  *((float *)self + 10) = v17;
  *((float *)self + 11) = v18;
  *((uint32_t *)self + 12) = *(uint32_t *)a4;
g4_m128_raw(v19) = *((unsigned int *)self + 12);
  *((uint32_t *)self + 13) = *((uint32_t *)a4 + 1);
  v20 = *((float *)self + 13);
  v22 = v19;
  *((uint32_t *)self + 14) = *((uint32_t *)a4 + 2);
  v21 = *((float *)self + 14);
  *((uint32_t *)self + 15) = *((uint32_t *)a4 + 3);
  *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)) + (float)(v20 * v20))
                          + (float)(v21 * v21);
  if ( *(float *)g4_m128_ptr<int32_t>(v22) <= 0.0 )
  {
    v26 = 0.0;
  }
  else
  {
    v23 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v22);
    v70 = 1597463174 - (_mm_cvtsi128_si32(v22) >> 1);
    v24 = (_mm_cvtsi128_si32(v22) + 2139095040) >> 31;
    v25 = (float)(1.5 * COERCE_FLOAT(v24 & v70))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * COERCE_FLOAT(v24 & v70))
                * (float)(COERCE_FLOAT(v24 & v70) * COERCE_FLOAT(v24 & v70)));
    v26 = (float)(1.5 * (float)((float)(1.5 * v25) - (float)((float)(v23 * v25) * (float)(v25 * v25))))
        - (float)((float)(v23 * (float)((float)(1.5 * v25) - (float)((float)(v23 * v25) * (float)(v25 * v25))))
                * (float)((float)((float)(1.5 * v25) - (float)((float)(v23 * v25) * (float)(v25 * v25)))
                        * (float)((float)(1.5 * v25) - (float)((float)(v23 * v25) * (float)(v25 * v25)))));
  }
  v27 = *(float *)g4_m128_ptr<int32_t>(v19) * v26;
  v28 = v20 * v26;
  v29 = v21 * v26;
  v30 = v26 * *((float *)self + 15);
  *((float *)self + 12) = v27;
  *((float *)self + 13) = v28;
  *((float *)self + 14) = v29;
  *((float *)self + 15) = v30;
  v31 = *((float *)a2 + 1);
  v32 = *((float *)a2 + 2);
  v33 = *((float *)a4 + 1);
  v34 = *((float *)a4 + 2);
  v35 = *(float *)a4;
  v36 = (float)(v31 * v34) - (float)(v32 * v33);
  v37 = v34 * *(float *)a2;
  v38 = *(float *)a2 * v33;
  *((uint32_t *)self + 19) = 0;
  *((float *)self + 16) = v36;
  *((float *)self + 17) = (float)(v32 * v35) - v37;
  *((float *)self + 18) = v38 - (float)(v35 * v31);
  *((uint32_t *)self + 20) = *(uint32_t *)a3;
g4_m128_raw(v39) = *((unsigned int *)self + 20);
  *((uint32_t *)self + 21) = *((uint32_t *)a3 + 1);
  v40 = *((float *)self + 21);
  v42 = v39;
  *((uint32_t *)self + 22) = *((uint32_t *)a3 + 2);
  v41 = *((float *)self + 22);
  *((uint32_t *)self + 23) = *((uint32_t *)a3 + 3);
  *(float *)g4_m128_ptr<int32_t>(v42) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v39) * *(float *)g4_m128_ptr<int32_t>(v39)) + (float)(v40 * v40))
                          + (float)(v41 * v41);
  if ( *(float *)g4_m128_ptr<int32_t>(v42) <= 0.0 )
  {
    v46 = 0.0;
  }
  else
  {
    v43 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v42);
    v44 = ((_mm_cvtsi128_si32(v42) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v42) >> 1));
    v45 = (float)(1.5 * *(float *)&v44)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v42)) * *(float *)&v44)
                * (float)(*(float *)&v44 * *(float *)&v44));
    v46 = (float)(1.5 * (float)((float)(1.5 * v45) - (float)((float)(v43 * v45) * (float)(v45 * v45))))
        - (float)((float)(v43 * (float)((float)(1.5 * v45) - (float)((float)(v43 * v45) * (float)(v45 * v45))))
                * (float)((float)((float)(1.5 * v45) - (float)((float)(v43 * v45) * (float)(v45 * v45)))
                        * (float)((float)(1.5 * v45) - (float)((float)(v43 * v45) * (float)(v45 * v45)))));
  }
  v47 = *(float *)g4_m128_ptr<int32_t>(v39) * v46;
  v48 = v40 * v46;
  v49 = v41 * v46;
  v50 = v46 * *((float *)self + 23);
  *((float *)self + 20) = v47;
  *((float *)self + 21) = v48;
  *((float *)self + 22) = v49;
  *((float *)self + 23) = v50;
  *((uint32_t *)self + 24) = *(uint32_t *)a5;
g4_m128_raw(v51) = *((unsigned int *)self + 24);
  *((uint32_t *)self + 25) = *((uint32_t *)a5 + 1);
  v52 = *((float *)self + 25);
  v54 = v51;
  *((uint32_t *)self + 26) = *((uint32_t *)a5 + 2);
  v53 = *((float *)self + 26);
  *((uint32_t *)self + 27) = *((uint32_t *)a5 + 3);
  *(float *)g4_m128_ptr<int32_t>(v54) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v51) * *(float *)g4_m128_ptr<int32_t>(v51)) + (float)(v52 * v52))
                          + (float)(v53 * v53);
  if ( *(float *)g4_m128_ptr<int32_t>(v54) > 0.0 )
  {
    v55 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v54);
    v56 = ((_mm_cvtsi128_si32(v54) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v54) >> 1));
    v57 = (float)(*(float *)&v56 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v54)) * *(float *)&v56)
                * (float)(*(float *)&v56 * *(float *)&v56));
    v58 = (float)(v57 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v54)) * v57) * (float)(v57 * v57));
    v10 = (float)(1.5 * v58) - (float)((float)(v55 * v58) * (float)(v58 * v58));
  }
  v59 = *(float *)g4_m128_ptr<int32_t>(v51) * v10;
  v60 = v52 * v10;
  v61 = v53 * v10;
  v62 = v10 * *((float *)self + 27);
  *((float *)self + 24) = v59;
  *((float *)self + 25) = v60;
  *((float *)self + 26) = v61;
  *((float *)self + 27) = v62;
  v63 = *((float *)a3 + 1);
  v64 = *(float *)a3;
  v65 = *((float *)a3 + 2);
  v66 = *((float *)a5 + 2);
  v67 = *((float *)a5 + 1);
  v68 = *(float *)a5;
  *((uint32_t *)self + 31) = 0;
  *((float *)self + 29) = (float)(v65 * v68) - (float)(v66 * v64);
  *((float *)self + 28) = (float)(v63 * v66) - (float)(v65 * v67);
  *((float *)self + 30) = (float)(v64 * v67) - (float)(v68 * v63);
  return result;
}



// ============================================================================
// Address:   0x1af39b0 (size: 1632 bytes)
// Symbol:    _ZN20hkpHingeLimitsDrawer14drawConstraintEPK18hkpHingeLimitsDataRK12hkTransformfS5_P21hkDebugDisplayHandlerii
// Demangled: hkpHingeLimitsDrawer::drawConstraint(hkpHingeLimitsData const*,hkTransformf const&,hkTransformf const&,hkDebugDisplayHandler *,int,int)
// ============================================================================

