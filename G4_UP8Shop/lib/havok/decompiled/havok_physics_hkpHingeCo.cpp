#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpHingeCo.h"

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::Atoms::staticClass  (binary VA: 0x1715dc0)
// Original: hkpHingeConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpHingeConstraintData::Atoms::staticClass()
{
  return &hkpHingeConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::staticClass  (binary VA: 0x1715de0)
// Original: hkpHingeConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpHingeConstraintData::staticClass()
{
  return &hkpHingeConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::setBreachImpulse  (binary VA: 0x1716710)
// Original: hkpHingeConstraintData::setBreachImpulse
// ----------------------------------------------------------------------------
hkpHingeConstraintData::Self * hkpHingeConstraintData::setBreachImpulse(hkpHingeConstraintData::Self *self, float a2)
{
  *((float *)self + 50) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::getBreachImpulse  (binary VA: 0x1716730)
// Original: hkpHingeConstraintData::getBreachImpulse
// ----------------------------------------------------------------------------
long double hkpHingeConstraintData::getBreachImpulse(hkpHingeConstraintData::Self *self)
{
  return *((float *)self + 50);
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::setBodyToNotify  (binary VA: 0x1716750)
// Original: hkpHingeConstraintData::setBodyToNotify
// ----------------------------------------------------------------------------
int hkpHingeConstraintData::setBodyToNotify(hkpHingeConstraintData::Self *self, char a2)
{
  *((uint8_t *)self + 195) = 1 << a2;
  return 1 << a2;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::getNotifiedBodyIndex  (binary VA: 0x1716770)
// Original: hkpHingeConstraintData::getNotifiedBodyIndex
// ----------------------------------------------------------------------------
int hkpHingeConstraintData::getNotifiedBodyIndex(hkpHingeConstraintData::Self *self)
{
  return (int)*((uint8_t *)self + 195) >> 1;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::getRuntimeInfo  (binary VA: 0x1716780)
// Original: hkpHingeConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
int hkpHingeConstraintData::getRuntimeInfo(int a1, char a2, uint32_t *a3)
{
  int result;

  *a3 = a2 != 0 ? 0x28 : 0;
  result = a2 == 0 ? 0 : 5;
  a3[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::getType  (binary VA: 0x17167b0)
// Original: hkpHingeConstraintData::getType
// ----------------------------------------------------------------------------
int hkpHingeConstraintData::getType()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::setSolvingMethod  (binary VA: 0x17167c0)
// Original: hkpHingeConstraintData::setSolvingMethod
// ----------------------------------------------------------------------------
int hkpHingeConstraintData::setSolvingMethod(int a1, int a2)
{
  int result;

  result = a2;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      *(uint8_t *)(a1 + 162) = 0;
      *(uint8_t *)(a1 + 194) = 1;
    }
  }
  else
  {
    *(uint8_t *)(a1 + 162) = 1;
    *(uint8_t *)(a1 + 194) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::getInertiaStabilizationFactor  (binary VA: 0x1716800)
// Original: hkpHingeConstraintData::getInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpHingeConstraintData::Self * hkpHingeConstraintData::getInertiaStabilizationFactor(hkpHingeConstraintData::Self *self, float *a2, float *a3)
{
  *a3 = a2[51];
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::setInertiaStabilizationFactor  (binary VA: 0x1716830)
// Original: hkpHingeConstraintData::setInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpHingeConstraintData::Self * hkpHingeConstraintData::setInertiaStabilizationFactor(hkpHingeConstraintData::Self *self, float a2, float a3)
{
  hkpHingeConstraintData::Self *result;
  float v4; // xmm0_4

  result = self;
  v4 = 0.0;
  if ( a3 >= 0.0 )
    v4 = fminf(1.0, a3);
  *(uint32_t *)self = 0;
  *(float *)(LODWORD(a2) + 204) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::Destroy  (binary VA: 0x1716870)
// Original: hkpHingeConstraintData::~hkpHingeConstraintData
// ----------------------------------------------------------------------------
void hkpHingeConstraintData::Destroy(hkpHingeConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::getConstraintInfo  (binary VA: 0x1716890)
// Original: hkpHingeConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
int hkpHingeConstraintData::getConstraintInfo(int a1, int a2)
{
  return (int)(uintptr_t)(hkpConstraintData::getConstraintInfoUtil(a1 + 16, 192, a2));
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::isValid  (binary VA: 0x17168d0)
// Original: hkpHingeConstraintData::isValid
// ----------------------------------------------------------------------------
hkpHingeConstraintData::Self * hkpHingeConstraintData::isValid(hkpHingeConstraintData::Self *self, uint8_t *a2)
{
  bool isOrthonormal;

  if ( a2[194] != 0 || a2[162] != 0 )
  {
    isOrthonormal = hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 32), 0.00001f);
    if ( isOrthonormal )
      isOrthonormal = hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 96), 0.00001f);
    *(uint8_t *)self = isOrthonormal;
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::Destroy_ea1716950  (binary VA: 0x1716950)
// Original: hkpHingeConstraintData::~hkpHingeConstraintData
// ----------------------------------------------------------------------------
void hkpHingeConstraintData::Destroy_ea1716950(hkpHingeConstraintData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 208;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::Construct  (binary VA: 0x17169b0)
// Original: hkpHingeConstraintData::hkpHingeConstraintData
// ----------------------------------------------------------------------------
void hkpHingeConstraintData::Construct(hkpHingeConstraintData::Self *self)
{
  float v1[8];

  v1[0] = 1.0;
  *((uint32_t *)self + 41) = 2139095022;
  *((uint32_t *)self + 42) = 2139095022;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209CCE8);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 23;
  *((uint8_t *)self + 162) = 0;
  *((uint32_t *)self + 43) = 1602224112;
  *((uint16_t *)self + 88) = 12;
  *((uint16_t *)self + 96) = 5;
  *((uint8_t *)self + 194) = 1;
  *((uint8_t *)self + 195) = 0;
  hkUFloat8::opAssign((hkpHingeConstraintData::Self *)((char *)self + 196), v1);
  *((uint8_t *)self + 197) = 0;
  *((uint32_t *)self + 50) = 2139095022;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 51) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 35) = 0;
  *((uint8_t *)self + 178) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::setInWorldSpace  (binary VA: 0x1716ba0)
// Original: hkpHingeConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpHingeConstraintData::setInWorldSpace(hkpHingeConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5)
{
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm7_4
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  float v12; // xmm6_4
  int v13;
  int v14;
  bool v15; // cc
  __m128 v16;
  float v17; // xmm1_4
  uint32_t v18; // xmm0_4
  __m128i v19;
  float v20; // xmm6_4
  int v21;
  int v22;
  float v23; // xmm1_4
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);

  v5 = *(float *)a5;
  v6 = *((float *)a5 + 1);
  v7 = fabs(*(float *)a5);
g4_m128_lane<int32_t>(v8, 0) = fabs(v6);
g4_m128_raw(v9) = *((unsigned int *)a5 + 2);
  v10 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v9);
  if ( v7 >g4_m128_lane<float>(v8, 0) )
  {
g4_m128_raw(v11) = *((unsigned int *)a5 + 1);
    v12 = *(float *)a5;
    v13 = 0;
    v14 = 1;
  }
  else
  {
g4_m128_raw(v11) = *(unsigned int *)a5;
    v12 = *((float *)a5 + 1);
g4_m128_lane<float>(v8, 0) = v7;
    v13 = 1;
    v14 = 0;
  }
  v15 =g4_m128_lane<float>(v8, 0) <=g4_m128_lane<float>(v10, 0);
  v16 = _mm_cmplt_ss(v10, v8);
  v17 = 0.0;
  *(float *)&v27 = 0.0;
  v28 = 0.0;
  v18 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v16, v9), 0) | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(v11, v16)));
  v29 = 0.0;
  if ( v15 )
    v14 = 2;
  v30 = 0.0;
  *(&v27 + v13) = v18;
  *((float *)&v27 + v14) = -v12;
g4_m128_raw(v19) = v27;
  v26 = v28;
  v25 = v29;
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)) + (float)(v28 * v28))
                          + (float)(v29 * v29);
  if ( *(float *)g4_m128_ptr<int32_t>(v19) > 0.0 )
  {
    v20 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v19);
    v21 = _mm_cvtsi128_si32(v19) >> 1;
    v22 = (_mm_cvtsi128_si32(v19) + 2139095040) >> 31;
    v23 = (float)(1.5 * COERCE_FLOAT(v22 & (1597463174 - v21)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * COERCE_FLOAT(v22 & (1597463174 - v21)))
                * (float)(COERCE_FLOAT(v22 & (1597463174 - v21)) * COERCE_FLOAT(v22 & (1597463174 - v21))));
    v17 = (float)(1.5 * (float)((float)(1.5 * v23) - (float)((float)(v20 * v23) * (float)(v23 * v23))))
        - (float)((float)(v20 * (float)((float)(1.5 * v23) - (float)((float)(v20 * v23) * (float)(v23 * v23))))
                * (float)((float)((float)(1.5 * v23) - (float)((float)(v20 * v23) * (float)(v23 * v23)))
                        * (float)((float)(1.5 * v23) - (float)((float)(v20 * v23) * (float)(v23 * v23)))));
  }
  v31[3] = 0.0;
  *(float *)&v27 = *(float *)&v27 * v17;
  v29 = v29 * v17;
  v30 = v17 * v30;
  v28 = v28 * v17;
  v31[0] = (float)(v6 * (float)(v25 * v17)) - (float)(g4_m128_lane<float>(v9, 0) * (float)(v26 * v17));
  v31[1] = (float)(g4_m128_lane<float>(v9, 0) * *(float *)&v27) - (float)((float)(v25 * v17) * v5);
  v31[2] = (float)(v5 * (float)(v26 * v17)) - (float)(*(float *)&v27 * v6);
  hkVector4f::setRotatedInverseDir((hkpHingeConstraintData::Self *)((char *)self + 32), a2, a5);
  hkVector4f::setRotatedInverseDir((hkpHingeConstraintData::Self *)((char *)self + 48), a2, (const hkVector4f::Self *)&v27);
  hkVector4f::setRotatedInverseDir((hkpHingeConstraintData::Self *)((char *)self + 64), a2, (const hkVector4f::Self *)v31);
  hkVector4f::setTransformedInversePos((hkpHingeConstraintData::Self *)((char *)self + 80), a2, a4);
  hkVector4f::setRotatedInverseDir((hkpHingeConstraintData::Self *)((char *)self + 96), a3, a5);
  hkVector4f::setRotatedInverseDir((hkpHingeConstraintData::Self *)((char *)self + 112), a3, (const hkVector4f::Self *)&v27);
  hkVector4f::setRotatedInverseDir((hkpHingeConstraintData::Self *)((char *)self + 128), a3, (const hkVector4f::Self *)v31);
  return hkVector4f::setTransformedInversePos((hkpHingeConstraintData::Self *)((char *)self + 144), a3, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpHingeConstraintData::setInBodySpace  (binary VA: 0x1716e90)
// Original: hkpHingeConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
hkpHingeConstraintData::Self * hkpHingeConstraintData::setInBodySpace(hkpHingeConstraintData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5)
{
  float v5; // xmm6_4
  hkpHingeConstraintData::Self *result;
  __m128i v7;
  float v8; // xmm3_4
  float v9; // xmm2_4
  __m128i v10;
  float v11; // xmm5_4
  int v12;
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm2_4
  int v23;
  int v24;
  char *v25;
  char *v26;
  __m128i v27;
  float v28; // xmm6_4
  __m128i v29;
  float v30; // xmm2_4
  int v31;
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm6_4
  float v38; // xmm4_4
  __m128i v39;
  float v40; // xmm2_4
  float v41; // xmm4_4
  __m128i v42;
  float v43; // xmm5_4
  int v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm4_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm5_4
  int v55;
  int v56;
  char *v57;
  char *v58;
  __m128i v59;
  __m128i v60;
  float v61; // xmm1_4
  float v62; // xmm6_4
  int v63;
  int v64;
  float v65; // xmm1_4
  float v66; // xmm5_4
  float v67; // xmm0_4
  float v68; // xmm6_4
  float v69; // xmm1_4
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;

  v5 = 0.0;
  result = self;
  *((uint32_t *)self + 20) = *(uint32_t *)a2;
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 36) = *(uint32_t *)a3;
  *((uint32_t *)self + 37) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 38) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 39) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 8) = *(uint32_t *)a4;
g4_m128_raw(v7) = *((unsigned int *)self + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a4 + 1);
  v8 = *((float *)self + 9);
  v10 = v7;
  *((uint32_t *)self + 10) = *((uint32_t *)a4 + 2);
  v9 = *((float *)self + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a4 + 3);
  *(float *)g4_m128_ptr<int32_t>(v10) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v8 * v8))
                          + (float)(v9 * v9);
  if ( *(float *)g4_m128_ptr<int32_t>(v10) > 0.0 )
  {
    v11 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v10);
    v12 = ((_mm_cvtsi128_si32(v10) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v10) >> 1));
    v13 = (float)(*(float *)&v12 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * *(float *)&v12)
                * (float)(*(float *)&v12 * *(float *)&v12));
    v14 = (float)(v13 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v13) * (float)(v13 * v13));
    v5 = (float)(1.5 * v14) - (float)((float)(v11 * v14) * (float)(v14 * v14));
  }
  v15 = *(float *)g4_m128_ptr<int32_t>(v7) * v5;
  v16 = v8 * v5;
  v17 = v9 * v5;
  v18 = v5 * *((float *)self + 11);
  v73 = v15;
  v19 = fabs(v15);
  v20 = fabs(v16);
  v21 = v17;
  *((float *)self + 10) = v17;
  v22 = fabs(v17);
  *((float *)self + 8) = v15;
  v71 = v16;
  *((float *)self + 9) = v16;
  *((float *)self + 11) = v18;
  if ( v19 > v20 )
  {
    v23 = 0;
    v24 = 1;
  }
  else
  {
    v20 = v19;
    v23 = 1;
    v24 = 0;
  }
  *((uint32_t *)self + 12) = 0;
  if ( v20 <= v22 )
    v24 = 2;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  v25 = (char *)self + 4 * v23;
  v26 = (char *)self + 4 * v24;
  *((uint32_t *)v25 + 12) = *((uint32_t *)v26 + 8);
  *((float *)v26 + 12) = -*((float *)v25 + 8);
g4_m128_raw(v27) = *((unsigned int *)self + 12);
  v29 = v27;
  v28 = *((float *)self + 14);
  v70 = *((float *)self + 13);
  *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)g4_m128_ptr<int32_t>(v27)) + (float)(v70 * v70))
                          + (float)(v28 * v28);
  if ( *(float *)g4_m128_ptr<int32_t>(v29) <= 0.0 )
  {
    v34 = 0.0;
  }
  else
  {
    v30 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v29);
    v31 = ((_mm_cvtsi128_si32(v29) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v29) >> 1));
    v32 = (float)(*(float *)&v31 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * *(float *)&v31)
                * (float)(*(float *)&v31 * *(float *)&v31));
    v33 = (float)(v32 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v32) * (float)(v32 * v32));
    v34 = (float)(1.5 * v33) - (float)((float)(v30 * v33) * (float)(v33 * v33));
  }
  v35 = *(float *)g4_m128_ptr<int32_t>(v27) * v34;
  v36 = v70 * v34;
  *((uint32_t *)self + 19) = 0;
  v37 = v28 * v34;
  v38 = v34 * *((float *)self + 15);
  *((float *)self + 12) = v35;
  *((float *)self + 13) = v36;
  *((float *)self + 15) = v38;
  *((float *)self + 14) = v37;
  *((float *)self + 16) = (float)(v71 * v37) - (float)(v21 * v36);
  *((float *)self + 17) = (float)(v21 * v35) - (float)(v37 * v73);
  *((float *)self + 18) = (float)(v36 * v73) - (float)(v35 * v71);
  *((uint32_t *)self + 24) = *(uint32_t *)a5;
g4_m128_raw(v39) = *((unsigned int *)self + 24);
  *((uint32_t *)self + 25) = *((uint32_t *)a5 + 1);
  v40 = *((float *)self + 25);
  v42 = v39;
  *((uint32_t *)self + 26) = *((uint32_t *)a5 + 2);
  v41 = *((float *)self + 26);
  *((uint32_t *)self + 27) = *((uint32_t *)a5 + 3);
  *(float *)g4_m128_ptr<int32_t>(v42) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v39) * *(float *)g4_m128_ptr<int32_t>(v39)) + (float)(v40 * v40))
                          + (float)(v41 * v41);
  if ( *(float *)g4_m128_ptr<int32_t>(v42) <= 0.0 )
  {
    v47 = 0.0;
  }
  else
  {
    v43 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v42);
    v44 = ((_mm_cvtsi128_si32(v42) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v42) >> 1));
    v45 = (float)(*(float *)&v44 * 1.5)
        - (float)((float)(v43 * *(float *)&v44) * (float)(*(float *)&v44 * *(float *)&v44));
    v46 = (float)(v45 * 1.5) - (float)((float)(v43 * v45) * (float)(v45 * v45));
    v47 = (float)(1.5 * v46) - (float)((float)(v43 * v46) * (float)(v46 * v46));
  }
  v48 = *(float *)g4_m128_ptr<int32_t>(v39) * v47;
  v49 = v40 * v47;
  v50 = v41 * v47;
  v51 = v47 * *((float *)self + 27);
  *((float *)self + 24) = v48;
  *((float *)self + 25) = v49;
  v52 = fabs(v48);
  *((float *)self + 26) = v50;
  *((float *)self + 27) = v51;
  v53 = fabs(v49);
  v54 = fabs(v50);
  if ( v52 > v53 )
  {
    v55 = 0;
    v56 = 1;
  }
  else
  {
    v53 = v52;
    v55 = 1;
    v56 = 0;
  }
  *((uint32_t *)self + 28) = 0;
  if ( v53 <= v54 )
    v56 = 2;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  v57 = (char *)self + 4 * v55;
  v58 = (char *)self + 4 * v56;
  *((uint32_t *)v57 + 28) = *((uint32_t *)v58 + 24);
  *((float *)v58 + 28) = -*((float *)v57 + 24);
g4_m128_raw(v59) = *((unsigned int *)self + 28);
  v60 = v59;
  v74 = *((float *)self + 29);
  v72 = *((float *)self + 30);
  *(float *)g4_m128_ptr<int32_t>(v60) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v59) * *(float *)g4_m128_ptr<int32_t>(v59)) + (float)(v74 * v74))
                          + (float)(v72 * v72);
  v61 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v60) > 0.0 )
  {
    v62 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v60);
    v63 = _mm_cvtsi128_si32(v60) >> 1;
    v64 = (_mm_cvtsi128_si32(v60) + 2139095040) >> 31;
    v65 = (float)(1.5 * COERCE_FLOAT(v64 & (1597463174 - v63)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v60)) * COERCE_FLOAT(v64 & (1597463174 - v63)))
                * (float)(COERCE_FLOAT(v64 & (1597463174 - v63)) * COERCE_FLOAT(v64 & (1597463174 - v63))));
    v61 = (float)(1.5 * (float)((float)(1.5 * v65) - (float)((float)(v62 * v65) * (float)(v65 * v65))))
        - (float)((float)(v62 * (float)((float)(1.5 * v65) - (float)((float)(v62 * v65) * (float)(v65 * v65))))
                * (float)((float)((float)(1.5 * v65) - (float)((float)(v62 * v65) * (float)(v65 * v65)))
                        * (float)((float)(1.5 * v65) - (float)((float)(v62 * v65) * (float)(v65 * v65)))));
  }
  *((uint32_t *)self + 35) = 0;
  v66 = *(float *)g4_m128_ptr<int32_t>(v59) * v61;
  v67 = v74 * v61;
  v68 = v72 * v61;
  v69 = v61 * *((float *)self + 31);
  *((float *)self + 28) = v66;
  *((float *)self + 30) = v68;
  *((float *)self + 31) = v69;
  *((float *)self + 29) = v67;
  *((float *)self + 32) = (float)(v49 * v68) - (float)(v50 * v67);
  *((float *)self + 33) = (float)(v50 * v66) - (float)(v68 * v48);
  *((float *)self + 34) = (float)(v48 * v67) - (float)(v66 * v49);
  return result;
}


