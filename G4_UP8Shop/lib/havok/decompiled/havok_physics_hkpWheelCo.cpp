#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWheelCo.h"

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::Atoms::staticClass  (binary VA: 0x1716550)
// Original: hkpWheelConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpWheelConstraintData::Atoms::staticClass()
{
  return &hkpWheelConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::staticClass  (binary VA: 0x1716570)
// Original: hkpWheelConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpWheelConstraintData::staticClass()
{
  return &hkpWheelConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::getRuntimeInfo  (binary VA: 0x171f0f0)
// Original: hkpWheelConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
int hkpWheelConstraintData::getRuntimeInfo(int a1, char a2, uint32_t *a3)
{
  int result;

  *a3 = a2 != 0 ? 0x30 : 0;
  result = a2 == 0 ? 0 : 6;
  a3[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::getType  (binary VA: 0x171f120)
// Original: hkpWheelConstraintData::getType
// ----------------------------------------------------------------------------
int hkpWheelConstraintData::getType()
{
  return 9;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::Destroy  (binary VA: 0x171f130)
// Original: hkpWheelConstraintData::~hkpWheelConstraintData
// ----------------------------------------------------------------------------
void hkpWheelConstraintData::Destroy(hkpWheelConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::getConstraintInfo  (binary VA: 0x171f150)
// Original: hkpWheelConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpWheelConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 336, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::Destroy_ea171f190  (binary VA: 0x171f190)
// Original: hkpWheelConstraintData::~hkpWheelConstraintData
// ----------------------------------------------------------------------------
void hkpWheelConstraintData::Destroy_ea171f190(hkpWheelConstraintData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 384;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::isValid  (binary VA: 0x171f1f0)
// Original: hkpWheelConstraintData::isValid
// ----------------------------------------------------------------------------
hkpWheelConstraintData::Self * hkpWheelConstraintData::isValid(hkpWheelConstraintData::Self *self, float *a2)
{
  bool v2;
  typedef uint64_t _g4_t_v4[8];
  typedef uint64_t _g4_t_v5[9];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v5)) > _g4_s1 ? (64u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 64u);

  std::memcpy(v4, a2 + 60, 48);
  memset(&v4[6], 0, 16);
  std::memcpy(v5, a2 + 72, 48);
  memset(&v5[6], 0, 16);
  v2 = hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 8), 0.00001f)
    && hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 24), 0.00001f)
    && hkRotationf::isOrthonormal((hkRotationf::Self *)v4, 0.00001f)
    && hkRotationf::isOrthonormal((hkRotationf::Self *)v5, 0.00001f)
    && a2[42] >= a2[41];
  *(uint8_t *)self = v2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::Construct  (binary VA: 0x171f3d0)
// Original: hkpWheelConstraintData::hkpWheelConstraintData
// ----------------------------------------------------------------------------
void hkpWheelConstraintData::Construct(hkpWheelConstraintData::Self *self)
{
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D748);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 9;
  *((uint16_t *)self + 88) = 8;
  *((uint16_t *)self + 96) = 7;
  *((uint32_t *)self + 60) = 1065353216;
  *((uint32_t *)self + 61) = 0;
  *((uint16_t *)self + 104) = 7;
  *((uint16_t *)self + 112) = 4;
  *((uint16_t *)self + 168) = 12;
  *((uint8_t *)self + 162) = 0;
  *((uint8_t *)self + 178) = 0;
  *((uint8_t *)self + 194) = 1;
  *((uint8_t *)self + 210) = 2;
  *((uint32_t *)self + 41) = -1090519040;
  *((uint32_t *)self + 42) = 1056964608;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 65) = 1065353216;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 71) = 0;
  *((uint32_t *)self + 70) = 1065353216;
  *((uint32_t *)self + 72) = 1065353216;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint32_t *)self + 76) = 0;
  *((uint32_t *)self + 77) = 1065353216;
  *((uint32_t *)self + 78) = 0;
  *((uint32_t *)self + 79) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 80) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 81) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 82) = 1065353216;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 83) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 35) = 0;
  *((uint8_t *)self + 338) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::setInWorldSpace  (binary VA: 0x171f680)
// Original: hkpWheelConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
int hkpWheelConstraintData::setInWorldSpace(hkpWheelConstraintData::Self *self, __m128 *a2, const hkTransformf::Self *a3, __m128 *a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6, const hkVector4f::Self *a7)
{
  __m128i v7;
  float v8; // xmm6_4
  int v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm2_4
  float v12;
  __m128i v13;
  float v14; // xmm6_4
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm2_4
  __m128 v19;
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  int v25;
  int v26;
  char *v27;
  char *v28;
  __m128i v29;
  float v30; // xmm4_4
  float v31; // xmm3_4
  __m128i v32;
  float v33; // xmm6_4
  int v34;
  int v35;
  float v36; // xmm0_4
  float v37; // xmm5_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm6_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  float v44; // xmm7_4
  float v45; // xmm0_4
  float v46; // xmm5_4
  float v47; // xmm2_4
  float v48; // xmm6_4
  float v49; // xmm1_4
  int result;
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm4_4
  float v55; // xmm2_4
  float v56; // xmm6_4
  float v57; // xmm5_4
  float v58; // xmm0_4
  float v59; // xmm3_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef __m128 _g4_t_v72;
  typedef float _g4_t_v73[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v62)) > _g4_s0 ? (8u + sizeof(_g4_t_v62)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v63)) > _g4_s1 ? (12u + sizeof(_g4_t_v63)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v64)) > _g4_s2 ? (16u + sizeof(_g4_t_v64)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v65)) > _g4_s3 ? (20u + sizeof(_g4_t_v65)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v66)) > _g4_s4 ? (24u + sizeof(_g4_t_v66)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v67)) > _g4_s5 ? (28u + sizeof(_g4_t_v67)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v68)) > _g4_s6 ? (32u + sizeof(_g4_t_v68)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v69)) > _g4_s7 ? (36u + sizeof(_g4_t_v69)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v70)) > _g4_s8 ? (40u + sizeof(_g4_t_v70)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v71)) > _g4_s9 ? (44u + sizeof(_g4_t_v71)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v72)) > _g4_s10 ? (48u + sizeof(_g4_t_v72)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v73)) > _g4_s11 ? (64u + sizeof(_g4_t_v73)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 64u);

  v64 = *(float *)a5;
  v65 = *((float *)a5 + 1);
g4_m128_raw(v7) = LODWORD(v64);
  v66 = *((float *)a5 + 2);
  v67 = *((float *)a5 + 3);
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v65 * v65))
                         + (float)(v66 * v66);
  if ( *(float *)g4_m128_ptr<int32_t>(v7) <= 0.0 )
  {
    v11 = 0.0;
  }
  else
  {
    v8 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v7);
    v9 = ((_mm_cvtsi128_si32(v7) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v7) >> 1));
    v10 = (float)(1.5 * *(float *)&v9) - (float)((float)(v8 * *(float *)&v9) * (float)(*(float *)&v9 * *(float *)&v9));
    v11 = (float)(1.5 * (float)((float)(1.5 * v10) - (float)((float)(v8 * v10) * (float)(v10 * v10))))
        - (float)((float)(v8 * (float)((float)(1.5 * v10) - (float)((float)(v8 * v10) * (float)(v10 * v10))))
                * (float)((float)((float)(1.5 * v10) - (float)((float)(v8 * v10) * (float)(v10 * v10)))
                        * (float)((float)(1.5 * v10) - (float)((float)(v8 * v10) * (float)(v10 * v10)))));
  }
  v68 = *(float *)a7;
  v69 = *((float *)a7 + 1);
  v64 = v64 * v11;
  v70 = *((float *)a7 + 2);
  v65 = v65 * v11;
g4_m128_raw(v13) = LODWORD(v68);
  v12 = *((float *)a7 + 3);
  v67 = v11 * v67;
  v71 = v12;
  v66 = v66 * v11;
  *(float *)g4_m128_ptr<int32_t>(v13) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v13)) + (float)(v69 * v69))
                          + (float)(v70 * v70);
  if ( *(float *)g4_m128_ptr<int32_t>(v13) <= 0.0 )
  {
    v18 = 0.0;
  }
  else
  {
    v14 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v13);
    v15 = _mm_cvtsi128_si32(v13) >> 1;
    v16 = (_mm_cvtsi128_si32(v13) + 2139095040) >> 31;
    v17 = (float)(1.5 * COERCE_FLOAT(v16 & (1597463174 - v15)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v13)) * COERCE_FLOAT(v16 & (1597463174 - v15)))
                * (float)(COERCE_FLOAT(v16 & (1597463174 - v15)) * COERCE_FLOAT(v16 & (1597463174 - v15))));
    v18 = (float)(1.5 * (float)((float)(1.5 * v17) - (float)((float)(v14 * v17) * (float)(v17 * v17))))
        - (float)((float)(v14 * (float)((float)(1.5 * v17) - (float)((float)(v14 * v17) * (float)(v17 * v17))))
                * (float)((float)((float)(1.5 * v17) - (float)((float)(v14 * v17) * (float)(v17 * v17)))
                        * (float)((float)(1.5 * v17) - (float)((float)(v14 * v17) * (float)(v17 * v17)))));
  }
  v19 = _mm_sub_ps(*a4, a2[3]);
  v69 = v69 * v18;
  v70 = v70 * v18;
  v71 = v18 * v71;
  v68 = v68 * v18;
  v72 = v19;
  hkVector4f::setRotatedInverseDir(
    (hkpWheelConstraintData::Self *)((char *)self + 80),
    (const hkMatrix3f::Self *)a2,
    (const hkVector4f::Self *)&v72);
  v73[0] =g4_m128_lane<float>(*(a4), 0) - *((float *)a3 + 12);
  v73[1] =g4_m128_lane<float>(*(a4), 1) - *((float *)a3 + 13);
  v73[2] =g4_m128_lane<float>(*(a4), 2) - *((float *)a3 + 14);
  v73[3] =g4_m128_lane<float>(*(a4), 3) - *((float *)a3 + 15);
  hkVector4f::setRotatedInverseDir((hkpWheelConstraintData::Self *)((char *)self + 144), a3, (const hkVector4f::Self *)v73);
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  hkVector4f::setRotatedInverseDir((hkpWheelConstraintData::Self *)((char *)self + 96), a3, a6);
  v63 = *((float *)self + 24);
  v20 = fabs(v63);
  v21 = *((float *)self + 26);
  v62 = *((float *)self + 25);
  v22 = fabs(v62);
  v23 = 0.0;
  v24 = fabs(v21);
  if ( v20 > v22 )
  {
    v25 = 0;
    v26 = 1;
  }
  else
  {
    v22 = v20;
    v25 = 1;
    v26 = 0;
  }
  v27 = (char *)self + 4 * v25;
  *((uint32_t *)self + 28) = 0;
  if ( v22 <= v24 )
    v26 = 2;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  v28 = (char *)self + 4 * v26;
  *((uint32_t *)v27 + 28) = *((uint32_t *)v28 + 24);
  *((float *)v28 + 28) = -*((float *)v27 + 24);
g4_m128_raw(v29) = *((unsigned int *)self + 28);
  v30 = *((float *)self + 29);
  v32 = v29;
  v31 = *((float *)self + 30);
  *(float *)g4_m128_ptr<int32_t>(v32) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) * *(float *)g4_m128_ptr<int32_t>(v29)) + (float)(v30 * v30))
                          + (float)(v31 * v31);
  if ( *(float *)g4_m128_ptr<int32_t>(v32) > 0.0 )
  {
    v33 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v32);
    v34 = _mm_cvtsi128_si32(v32) >> 1;
    v35 = (_mm_cvtsi128_si32(v32) + 2139095040) >> 31;
    v36 = (float)(1.5 * COERCE_FLOAT(v35 & (1597463174 - v34)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v32)) * COERCE_FLOAT(v35 & (1597463174 - v34)))
                * (float)(COERCE_FLOAT(v35 & (1597463174 - v34)) * COERCE_FLOAT(v35 & (1597463174 - v34))));
    v23 = (float)(1.5 * (float)((float)(1.5 * v36) - (float)((float)(v33 * v36) * (float)(v36 * v36))))
        - (float)((float)(v33 * (float)((float)(1.5 * v36) - (float)((float)(v33 * v36) * (float)(v36 * v36))))
                * (float)((float)((float)(1.5 * v36) - (float)((float)(v33 * v36) * (float)(v36 * v36)))
                        * (float)((float)(1.5 * v36) - (float)((float)(v33 * v36) * (float)(v36 * v36)))));
  }
  v37 = *(float *)g4_m128_ptr<int32_t>(v29) * v23;
  v38 = v30 * v23;
  *((uint32_t *)self + 35) = 0;
  v39 = v31 * v23;
  *((float *)self + 31) = v23 * *((float *)self + 31);
  *((float *)self + 28) = v37;
  *((float *)self + 29) = v38;
  *((float *)self + 30) = v39;
  *((float *)self + 32) = (float)(v62 * v39) - (float)(v21 * v38);
  *((float *)self + 33) = (float)(v21 * v37) - (float)(v39 * v63);
  *((float *)self + 34) = (float)(v38 * v63) - (float)(v37 * v62);
  hkVector4f::setRotatedInverseDir(
    (hkpWheelConstraintData::Self *)((char *)self + 240),
    (const hkMatrix3f::Self *)a2,
    (const hkVector4f::Self *)&v64);
  hkVector4f::setRotatedInverseDir((hkpWheelConstraintData::Self *)((char *)self + 288), a3, (const hkVector4f::Self *)&v64);
  *((uint32_t *)self + 88) = *((uint32_t *)self + 72);
  *((uint32_t *)self + 89) = *((uint32_t *)self + 73);
  *((uint32_t *)self + 90) = *((uint32_t *)self + 74);
  *((uint32_t *)self + 91) = *((uint32_t *)self + 75);
  hkVector4f::setRotatedInverseDir(
    (hkpWheelConstraintData::Self *)((char *)self + 256),
    (const hkMatrix3f::Self *)a2,
    (const hkVector4f::Self *)&v68);
  hkVector4f::setRotatedInverseDir((hkpWheelConstraintData::Self *)((char *)self + 304), a3, (const hkVector4f::Self *)&v68);
  v40 = *((float *)self + 61);
  v41 = *((float *)self + 66);
  v42 = *((float *)self + 62);
  *((uint32_t *)self + 92) = *((uint32_t *)self + 76);
  v43 = *((float *)self + 64);
  v44 = v42;
  v45 = *((float *)self + 60);
  v46 = *((float *)self + 65);
  *((uint32_t *)self + 93) = *((uint32_t *)self + 77);
  v47 = v40 * v41;
  v48 = v41 * v45;
  *((uint32_t *)self + 94) = *((uint32_t *)self + 78);
  v49 = v42 * v43;
  result = *((uint32_t *)self + 79);
  *((uint32_t *)self + 95) = result;
  v51 = v43 * v40;
  *((uint32_t *)self + 71) = 0;
  v52 = v45 * v46;
  *((uint32_t *)self + 83) = 0;
  v53 = v49 - v48;
  v54 = *((float *)self + 73);
  v55 = v47 - (float)(v44 * v46);
  v56 = *((float *)self + 78);
  v57 = *((float *)self + 77);
  v58 = v52 - v51;
  v59 = *((float *)self + 76);
  *((float *)self + 69) = v53;
  v60 = *((float *)self + 74);
  *((float *)self + 68) = v55;
  *((float *)self + 70) = v58;
  v61 = *((float *)self + 72);
  *((float *)self + 81) = (float)(v60 * v59) - (float)(v56 * v61);
  *((float *)self + 80) = (float)(v54 * v56) - (float)(v60 * v57);
  *((float *)self + 82) = (float)(v61 * v57) - (float)(v59 * v54);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::setInBodySpace  (binary VA: 0x171fd90)
// Original: hkpWheelConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
hkpWheelConstraintData::Self * hkpWheelConstraintData::setInBodySpace(hkpWheelConstraintData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6, const hkVector4f::Self *a7)
{
  hkpWheelConstraintData::Self *result;
  float v8; // xmm4_4
  float v9; // xmm7_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  int v14;
  int v15;
  char *v16;
  char *v17;
  __m128i v18;
  float v19; // xmm7_4
  float v20; // xmm2_4
  __m128i v21;
  float v22; // xmm4_4
  int v23;
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm3_4
  float v28; // xmm7_4
  float v29; // xmm2_4
  float v30; // xmm6_4
  __m128i v31;
  float v32; // xmm4_4
  float v33; // xmm2_4
  __m128i v34;
  float v35; // xmm5_4
  int v36;
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm2_4
  float v42; // xmm6_4
  __m128i v43;
  float v44; // xmm3_4
  float v45; // xmm2_4
  float v46; // xmm6_4
  __m128i v47;
  float v48; // xmm5_4
  int v49;
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm4_4
  float v54; // xmm0_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  float v57; // xmm6_4
  int v58;
  int v59;
  float v60; // xmm2_4
  int v61;
  int v62;
  char *v63;
  float v64; // xmm6_4
  char *v65;
  __m128i v66;
  float v67; // xmm3_4
  float v68; // xmm2_4
  __m128i v69;
  float v70; // xmm5_4
  int v71;
  float v72; // xmm1_4
  float v73; // xmm0_4
  float v74; // xmm4_4
  float v75; // xmm3_4
  float v76; // xmm2_4
  float v77; // xmm6_4
  __m128i v78;
  float v79; // xmm3_4
  float v80; // xmm2_4
  __m128i v81;
  float v82; // xmm5_4
  int v83;
  float v84; // xmm1_4
  float v85; // xmm0_4
  float v86; // xmm6_4
  float v87; // xmm4_4
  float v88; // xmm3_4
  float v89; // xmm2_4
  float v90; // xmm6_4
  float v91; // xmm0_4
  float v92; // xmm1_4
  float v93; // xmm6_4
  float v94; // xmm5_4
  float v95; // xmm2_4
  float v96; // xmm3_4
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;

  result = self;
  *((uint32_t *)self + 20) = *(uint32_t *)a2;
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 36) = *(uint32_t *)a3;
  *((uint32_t *)self + 37) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 38) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 39) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 24) = *(uint32_t *)a6;
  *((uint32_t *)self + 25) = *((uint32_t *)a6 + 1);
  v8 = *((float *)self + 24);
  v9 = *((float *)self + 25);
  v10 = fabs(v8);
  v11 = fabs(v9);
  *((uint32_t *)self + 26) = *((uint32_t *)a6 + 2);
  v104 = v8;
  v12 = *((float *)self + 26);
  *((uint32_t *)self + 27) = *((uint32_t *)a6 + 3);
  v102 = v9;
  v100 = v12;
  v13 = fabs(v12);
  if ( v10 > v11 )
  {
    v14 = 0;
    v15 = 1;
  }
  else
  {
    v11 = v10;
    v14 = 1;
    v15 = 0;
  }
  *((uint32_t *)self + 28) = 0;
  if ( v11 <= v13 )
    v15 = 2;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  v16 = (char *)self + 4 * v14;
  v17 = (char *)self + 4 * v15;
  *((uint32_t *)v16 + 28) = *((uint32_t *)v17 + 24);
  *((float *)v17 + 28) = -*((float *)v16 + 24);
g4_m128_raw(v18) = *((unsigned int *)self + 28);
  v19 = *((float *)self + 29);
  v21 = v18;
  v20 = *((float *)self + 30);
  *(float *)g4_m128_ptr<int32_t>(v21) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)g4_m128_ptr<int32_t>(v18)) + (float)(v19 * v19))
                          + (float)(v20 * v20);
  if ( *(float *)g4_m128_ptr<int32_t>(v21) <= 0.0 )
  {
    v26 = 0.0;
  }
  else
  {
    v22 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v21);
    v23 = ((_mm_cvtsi128_si32(v21) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v21) >> 1));
    v24 = (float)(*(float *)&v23 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v21)) * *(float *)&v23)
                * (float)(*(float *)&v23 * *(float *)&v23));
    v25 = (float)(v24 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v21)) * v24) * (float)(v24 * v24));
    v26 = (float)(1.5 * v25) - (float)((float)(v22 * v25) * (float)(v25 * v25));
  }
  v27 = *(float *)g4_m128_ptr<int32_t>(v18) * v26;
  v28 = v19 * v26;
  *((uint32_t *)self + 35) = 0;
  v29 = v20 * v26;
  *((float *)self + 31) = v26 * *((float *)self + 31);
  *((float *)self + 28) = v27;
  *((float *)self + 29) = v28;
  *((float *)self + 30) = v29;
  *((float *)self + 32) = (float)(v102 * v29) - (float)(v100 * v28);
  v30 = 0.0;
  *((float *)self + 33) = (float)(v100 * v27) - (float)(v29 * v104);
  *((float *)self + 34) = (float)(v28 * v104) - (float)(v27 * v102);
  *((uint32_t *)self + 60) = *(uint32_t *)a4;
g4_m128_raw(v31) = *((unsigned int *)self + 60);
  *((uint32_t *)self + 61) = *((uint32_t *)a4 + 1);
  v32 = *((float *)self + 61);
  v34 = v31;
  *((uint32_t *)self + 62) = *((uint32_t *)a4 + 2);
  v33 = *((float *)self + 62);
  *((uint32_t *)self + 63) = *((uint32_t *)a4 + 3);
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v31) * *(float *)g4_m128_ptr<int32_t>(v31)) + (float)(v32 * v32))
                          + (float)(v33 * v33);
  if ( *(float *)g4_m128_ptr<int32_t>(v34) > 0.0 )
  {
    v35 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v34);
    v36 = ((_mm_cvtsi128_si32(v34) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v34) >> 1));
    v37 = (float)(*(float *)&v36 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v34)) * *(float *)&v36)
                * (float)(*(float *)&v36 * *(float *)&v36));
    v38 = (float)(v37 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v34)) * v37) * (float)(v37 * v37));
    v30 = (float)(1.5 * v38) - (float)((float)(v35 * v38) * (float)(v38 * v38));
  }
  v39 = *(float *)g4_m128_ptr<int32_t>(v31) * v30;
  v40 = v32 * v30;
  v41 = v33 * v30;
  v42 = v30 * *((float *)self + 63);
  *((float *)self + 60) = v39;
  *((float *)self + 61) = v40;
  *((float *)self + 62) = v41;
  *((float *)self + 63) = v42;
  v105 = v39;
  *((uint32_t *)self + 72) = *(uint32_t *)a5;
  v103 = v40;
g4_m128_raw(v43) = *((unsigned int *)self + 72);
  *((uint32_t *)self + 73) = *((uint32_t *)a5 + 1);
  v44 = *((float *)self + 73);
  v47 = v43;
  *((uint32_t *)self + 74) = *((uint32_t *)a5 + 2);
  v101 = v41;
  *((uint32_t *)self + 75) = *((uint32_t *)a5 + 3);
  v45 = *((float *)self + 74);
  v46 = 0.0;
  *(float *)g4_m128_ptr<int32_t>(v47) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v43) * *(float *)g4_m128_ptr<int32_t>(v43)) + (float)(v44 * v44))
                          + (float)(v45 * v45);
  if ( *(float *)g4_m128_ptr<int32_t>(v47) > 0.0 )
  {
    v48 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v47);
    v49 = ((_mm_cvtsi128_si32(v47) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v47) >> 1));
    v50 = (float)(*(float *)&v49 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v47)) * *(float *)&v49)
                * (float)(*(float *)&v49 * *(float *)&v49));
    v51 = (float)(v50 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v47)) * v50) * (float)(v50 * v50));
    v46 = (float)(1.5 * v51) - (float)((float)(v48 * v51) * (float)(v51 * v51));
  }
  v52 = fabs(v105);
  v53 = *(float *)g4_m128_ptr<int32_t>(v43) * v46;
  v54 = fabs(v103);
  v55 = v44 * v46;
  v56 = v45 * v46;
  v57 = v46 * *((float *)self + 75);
  *((float *)self + 72) = v53;
  v58 = *((uint32_t *)self + 72);
  *((float *)self + 73) = v55;
  *((uint32_t *)self + 88) = v58;
  *((float *)self + 74) = v56;
  v59 = *((uint32_t *)self + 73);
  *((float *)self + 75) = v57;
  *((uint32_t *)self + 89) = v59;
  *((uint32_t *)self + 90) = *((uint32_t *)self + 74);
  *((uint32_t *)self + 91) = *((uint32_t *)self + 75);
  v60 = fabs(v101);
  if ( v52 > v54 )
  {
    v61 = 0;
    v62 = 1;
  }
  else
  {
    v54 = v52;
    v61 = 1;
    v62 = 0;
  }
  *((uint32_t *)self + 64) = 0;
  if ( v54 <= v60 )
    v62 = 2;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
  v63 = (char *)self + 4 * v61;
  v64 = 0.0;
  v65 = (char *)self + 4 * v62;
  *((uint32_t *)v63 + 64) = *((uint32_t *)v65 + 60);
  *((float *)v65 + 64) = -*((float *)v63 + 60);
g4_m128_raw(v66) = *((unsigned int *)self + 64);
  v67 = *((float *)self + 65);
  v69 = v66;
  v68 = *((float *)self + 66);
  *(float *)g4_m128_ptr<int32_t>(v69) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v66) * *(float *)g4_m128_ptr<int32_t>(v66)) + (float)(v67 * v67))
                          + (float)(v68 * v68);
  if ( *(float *)g4_m128_ptr<int32_t>(v69) > 0.0 )
  {
    v70 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v69);
    v71 = ((_mm_cvtsi128_si32(v69) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v69) >> 1));
    v72 = (float)(*(float *)&v71 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v69)) * *(float *)&v71)
                * (float)(*(float *)&v71 * *(float *)&v71));
    v73 = (float)(v72 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v69)) * v72) * (float)(v72 * v72));
    v64 = (float)(1.5 * v73) - (float)((float)(v70 * v73) * (float)(v73 * v73));
  }
  v74 = *(float *)g4_m128_ptr<int32_t>(v66) * v64;
  v75 = v67 * v64;
  v76 = v68 * v64;
  v77 = v64 * *((float *)self + 67);
  *((float *)self + 64) = v74;
  *((float *)self + 65) = v75;
  *((float *)self + 66) = v76;
  *((float *)self + 67) = v77;
  v99 = v74;
  *((uint32_t *)self + 76) = *(uint32_t *)a7;
g4_m128_raw(v78) = *((unsigned int *)self + 76);
  *((uint32_t *)self + 77) = *((uint32_t *)a7 + 1);
  v81 = v78;
  v98 = v75;
  v79 = *((float *)self + 77);
  *((uint32_t *)self + 78) = *((uint32_t *)a7 + 2);
  *((uint32_t *)self + 79) = *((uint32_t *)a7 + 3);
  v97 = v76;
  v80 = *((float *)self + 78);
  *(float *)g4_m128_ptr<int32_t>(v81) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v78) * *(float *)g4_m128_ptr<int32_t>(v78)) + (float)(v79 * v79))
                          + (float)(v80 * v80);
  if ( *(float *)g4_m128_ptr<int32_t>(v81) <= 0.0 )
  {
    v86 = 0.0;
  }
  else
  {
    v82 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v81);
    v83 = ((_mm_cvtsi128_si32(v81) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v81) >> 1));
    v84 = (float)(*(float *)&v83 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v81)) * *(float *)&v83)
                * (float)(*(float *)&v83 * *(float *)&v83));
    v85 = (float)(v84 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v81)) * v84) * (float)(v84 * v84));
    v86 = (float)(1.5 * v85) - (float)((float)(v82 * v85) * (float)(v85 * v85));
  }
  v87 = *(float *)g4_m128_ptr<int32_t>(v78) * v86;
  *((uint32_t *)self + 71) = 0;
  v88 = v79 * v86;
  *((uint32_t *)self + 83) = 0;
  v89 = v80 * v86;
  v90 = v86 * *((float *)self + 79);
  *((float *)self + 77) = v88;
  v91 = v88;
  *((float *)self + 78) = v89;
  v92 = v89;
  *((float *)self + 79) = v90;
  *((float *)self + 76) = v87;
  *((uint32_t *)self + 92) = *((uint32_t *)self + 76);
  *((uint32_t *)self + 93) = *((uint32_t *)self + 77);
  *((uint32_t *)self + 94) = *((uint32_t *)self + 78);
  *((uint32_t *)self + 95) = *((uint32_t *)self + 79);
  *((float *)self + 68) = (float)(v103 * v97) - (float)(v98 * v101);
  v93 = *((float *)self + 73);
  v94 = *((float *)self + 74);
  *((float *)self + 69) = (float)(v99 * v101) - (float)(v97 * v105);
  *((float *)self + 70) = (float)(v98 * v105) - (float)(v99 * v103);
  v95 = (float)(v93 * v89) - (float)(v94 * v88);
  v96 = *((float *)self + 72);
  *((float *)self + 80) = v95;
  *((float *)self + 81) = (float)(v94 * v87) - (float)(v92 * v96);
  *((float *)self + 82) = (float)(v91 * v96) - (float)(v87 * v93);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWheelConstraintData::setSteeringAngle  (binary VA: 0x17206c0)
// Original: hkpWheelConstraintData::setSteeringAngle
// ----------------------------------------------------------------------------
void hkpWheelConstraintData::setSteeringAngle(hkpWheelConstraintData::Self *self, float x)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm7_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22;
  float v23;
  float v24;

  v22 = sinf(x);
  v2 = v22;
  v3 = 1.0 - (float)(v2 * v2);
  v4 = fsqrt(v3);
  if ( __builtin_isnan(v4) )
  {
    v2 = v22;
    v24 = sqrtf(v3);
    v4 = v24;
  }
  v5 = *((float *)self + 94);
  v6 = *((float *)self + 89);
  v7 = *((float *)self + 90);
  v23 = v6;
  v8 = *((float *)self + 88) * v5;
  v9 = (float)(*((float *)self + 88) * v4)
     + (float)((float)((float)(*((float *)self + 93) * v7) - (float)(v5 * v6)) * v2);
  v10 = v4 * v6;
  v11 = *((float *)self + 92) * v7;
  v12 = v7 * v4;
  v13 = v4 * *((float *)self + 91);
  *((float *)self + 72) = v9;
  v14 = v10 + (float)((float)(v8 - v11) * v2);
  v15 = (float)(v23 * *((float *)self + 92)) - (float)(*((float *)self + 93) * *((float *)self + 88));
  *((float *)self + 73) = v14;
  *((uint32_t *)self + 83) = 0;
  v16 = v12 + (float)(v15 * v2);
  v17 = v13 + (float)(v2 * 0.0);
  v18 = v5 * v14;
  v19 = v14 * *((float *)self + 92);
  *((float *)self + 74) = v16;
  *((float *)self + 75) = v17;
  v20 = *((float *)self + 93) * v16;
  v21 = (float)(v16 * *((float *)self + 92)) - (float)(v5 * v9);
  *((float *)self + 82) = (float)(v9 * *((float *)self + 93)) - v19;
  *((float *)self + 80) = v18 - v20;
  *((float *)self + 81) = v21;
}


