#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpLimited.h"

// ----------------------------------------------------------------------------
// Function: hkpLimitedForceConstraintMotor::Destroy  (binary VA: 0x1711da0)
// Original: hkpLimitedForceConstraintMotor::~hkpLimitedForceConstraintMotor
// ----------------------------------------------------------------------------
void hkpLimitedForceConstraintMotor::Destroy(hkpLimitedForceConstraintMotor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedForceConstraintMotor::Destroy_ea1711e00  (binary VA: 0x1711e00)
// Original: hkpLimitedForceConstraintMotor::~hkpLimitedForceConstraintMotor
// ----------------------------------------------------------------------------
void hkpLimitedForceConstraintMotor::Destroy_ea1711e00(hkpLimitedForceConstraintMotor::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::Atoms::staticClass  (binary VA: 0x171b070)
// Original: hkpLimitedHingeConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpLimitedHingeConstraintData::Atoms::staticClass()
{
  return &hkpLimitedHingeConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::staticClass  (binary VA: 0x171b090)
// Original: hkpLimitedHingeConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpLimitedHingeConstraintData::staticClass()
{
  return &hkpLimitedHingeConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedForceConstraintMotor::staticClass  (binary VA: 0x171b7f0)
// Original: hkpLimitedForceConstraintMotor::staticClass
// ----------------------------------------------------------------------------
void * hkpLimitedForceConstraintMotor::staticClass()
{
  return &hkpLimitedForceConstraintMotorClass;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::setBreachImpulse  (binary VA: 0x1720870)
// Original: hkpLimitedHingeConstraintData::setBreachImpulse
// ----------------------------------------------------------------------------
hkpLimitedHingeConstraintData::Self * hkpLimitedHingeConstraintData::setBreachImpulse(hkpLimitedHingeConstraintData::Self *self, float a2)
{
  *((float *)self + 66) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::getBreachImpulse  (binary VA: 0x1720890)
// Original: hkpLimitedHingeConstraintData::getBreachImpulse
// ----------------------------------------------------------------------------
long double hkpLimitedHingeConstraintData::getBreachImpulse(hkpLimitedHingeConstraintData::Self *self)
{
  return *((float *)self + 66);
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::setBodyToNotify  (binary VA: 0x17208b0)
// Original: hkpLimitedHingeConstraintData::setBodyToNotify
// ----------------------------------------------------------------------------
int hkpLimitedHingeConstraintData::setBodyToNotify(hkpLimitedHingeConstraintData::Self *self, char a2)
{
  *((uint8_t *)self + 259) = 1 << a2;
  return 1 << a2;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::getNotifiedBodyIndex  (binary VA: 0x17208d0)
// Original: hkpLimitedHingeConstraintData::getNotifiedBodyIndex
// ----------------------------------------------------------------------------
int hkpLimitedHingeConstraintData::getNotifiedBodyIndex(hkpLimitedHingeConstraintData::Self *self)
{
  return (int)*((uint8_t *)self + 259) >> 1;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::getRuntimeInfo  (binary VA: 0x17208e0)
// Original: hkpLimitedHingeConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpLimitedHingeConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  a3[1] = 10;
  *a3 = 96;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::getType  (binary VA: 0x1720900)
// Original: hkpLimitedHingeConstraintData::getType
// ----------------------------------------------------------------------------
int hkpLimitedHingeConstraintData::getType()
{
  return 2;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::setSolvingMethod  (binary VA: 0x1720910)
// Original: hkpLimitedHingeConstraintData::setSolvingMethod
// ----------------------------------------------------------------------------
int hkpLimitedHingeConstraintData::setSolvingMethod(int a1, int a2)
{
  int result;

  result = a2;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      *(uint8_t *)(a1 + 162) = 0;
      *(uint8_t *)(a1 + 258) = 1;
    }
  }
  else
  {
    *(uint8_t *)(a1 + 162) = 1;
    *(uint8_t *)(a1 + 258) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::getInertiaStabilizationFactor  (binary VA: 0x1720950)
// Original: hkpLimitedHingeConstraintData::getInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpLimitedHingeConstraintData::Self * hkpLimitedHingeConstraintData::getInertiaStabilizationFactor(hkpLimitedHingeConstraintData::Self *self, float *a2, float *a3)
{
  *a3 = a2[67];
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::setInertiaStabilizationFactor  (binary VA: 0x1720980)
// Original: hkpLimitedHingeConstraintData::setInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpLimitedHingeConstraintData::Self * hkpLimitedHingeConstraintData::setInertiaStabilizationFactor(hkpLimitedHingeConstraintData::Self *self, float a2, float a3)
{
  hkpLimitedHingeConstraintData::Self *result;
  float v4; // xmm0_4

  result = self;
  v4 = 0.0;
  if ( a3 >= 0.0 )
    v4 = fminf(1.0, a3);
  *(uint32_t *)self = 0;
  *(float *)(LODWORD(a2) + 268) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::getConstraintInfo  (binary VA: 0x17209c0)
// Original: hkpLimitedHingeConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpLimitedHingeConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 256, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::isValid  (binary VA: 0x1720a00)
// Original: hkpLimitedHingeConstraintData::isValid
// ----------------------------------------------------------------------------
hkpLimitedHingeConstraintData::Self * hkpLimitedHingeConstraintData::isValid(hkpLimitedHingeConstraintData::Self *self, uint8_t *a2)
{
  bool v3;

  if ( a2[258] != 0 || a2[162] != 0 )
  {
    if ( hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 32), 0.00001f)
      && hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 96), 0.00001f) )
    {
      v3 = true;
      if ( a2[178] != 0 )
        v3 = a2[226] != 0;
    }
    else
    {
      v3 = false;
    }
    *(uint8_t *)self = v3;
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::Destroy  (binary VA: 0x1720aa0)
// Original: hkpLimitedHingeConstraintData::~hkpLimitedHingeConstraintData
// ----------------------------------------------------------------------------
void hkpLimitedHingeConstraintData::Destroy(hkpLimitedHingeConstraintData::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D7C8);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
      v4 = v2 | (uint16_t)(v3 - 1);
      v5 = v3;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
    if ( (uint16_t)v4 == 0 )
      G4_VCALL<void>(v1, 16);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::Destroy_ea1720b20  (binary VA: 0x1720b20)
// Original: hkpLimitedHingeConstraintData::~hkpLimitedHingeConstraintData
// ----------------------------------------------------------------------------
void hkpLimitedHingeConstraintData::Destroy_ea1720b20(hkpLimitedHingeConstraintData::Self *self)
{
  int v1;
  int v2;

  hkpLimitedHingeConstraintData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 272;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::Construct  (binary VA: 0x1720b80)
// Original: hkpLimitedHingeConstraintData::hkpLimitedHingeConstraintData
// ----------------------------------------------------------------------------
void hkpLimitedHingeConstraintData::Construct(hkpLimitedHingeConstraintData::Self *self)
{
  float v1[8];

  v1[0] = 1.0;
  *((uint32_t *)self + 41) = 2139095022;
  *((uint32_t *)self + 42) = 2139095022;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D7C8);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 23;
  *((uint8_t *)self + 162) = 0;
  *((uint32_t *)self + 43) = 1602224112;
  *((uint16_t *)self + 88) = 18;
  *((uint8_t *)self + 178) = 1;
  *((uint16_t *)self + 90) = -1;
  *((uint16_t *)self + 91) = -1;
  *((uint16_t *)self + 92) = -1;
  *((uint16_t *)self + 104) = 17;
  *((uint8_t *)self + 210) = 1;
  *((uint8_t *)self + 212) = 1;
  *((uint16_t *)self + 112) = 14;
  *((uint8_t *)self + 226) = 1;
  *((uint16_t *)self + 120) = 12;
  *((uint16_t *)self + 128) = 5;
  *((uint8_t *)self + 258) = 1;
  *((uint8_t *)self + 259) = 0;
  hkUFloat8::opAssign((hkpLimitedHingeConstraintData::Self *)((char *)self + 260), v1);
  *((uint8_t *)self + 261) = 0;
  *((uint32_t *)self + 66) = 2139095022;
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
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint8_t *)self + 242) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint8_t *)self + 227) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 57) = -1068953637;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 58) = 1078530011;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 59) = 1065353216;
  *((uint8_t *)self + 211) = 0;
  *((uint8_t *)self + 212) = 1;
  *((uint32_t *)self + 54) = 0;
  *((uint16_t *)self + 90) = 80;
  *((uint16_t *)self + 91) = 84;
  *((uint16_t *)self + 92) = 32;
  *((uint8_t *)self + 178) = 0;
  *(uint64_t *)((char *)self + 188) = 0;
  *((uint8_t *)self + 179) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::Atoms::Construct  (binary VA: 0x1720e40)
// Original: hkpLimitedHingeConstraintData::Atoms::Atoms
// ----------------------------------------------------------------------------
uint16_t * hkpLimitedHingeConstraintData::Atoms::Construct(uint16_t *a1, int a2)
{
  uint16_t *result;

  result = a1;
  a1[82] = -1;
  a1[83] = -1;
  a1[84] = -1;
  if ( a2 != 0 )
  {
    a1[82] = 80;
    a1[83] = 84;
    a1[84] = 32;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::setInWorldSpace  (binary VA: 0x1720e90)
// Original: hkpLimitedHingeConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpLimitedHingeConstraintData::setInWorldSpace(hkpLimitedHingeConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5)
{
  __m128i v5;
  __m128i v6;
  __m128 v7;
  __m128i v8;
  float v9; // xmm0_4
  float v10; // xmm6_4
  int v11;
  int v12;
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm7_4
  __m128 v16;
  __m128 v17;
  __m128 m128i_i128;
  float v19;
  int v20;
  int v21;
  __m128 v22;
  uint32_t v23; // xmm1_4
  __m128i v24;
  float v25; // xmm6_4
  int v26;
  int v27;
  float v28; // xmm0_4
  float v29; // xmm7_4
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v33)) > _g4_s2 ? (8u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v34)) > _g4_s3 ? (12u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v35)) > _g4_s4 ? (16u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v36)) > _g4_s5 ? (20u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v37)) > _g4_s6 ? (24u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v38)) > _g4_s7 ? (28u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v39)) > _g4_s8 ? (32u + sizeof(_g4_t_v39)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);

  v31 = *(float *)a5;
g4_m128_raw(v5) = LODWORD(v31);
  v32 = *((float *)a5 + 1);
g4_m128_raw(v6) = LODWORD(v32);
  v8 = v5;
  v33 = *((unsigned int *)a5 + 2);
g4_m128_raw(v7) = v33;
  v34 = *((float *)a5 + 3);
  *(float *)g4_m128_ptr<int32_t>(v8) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)g4_m128_ptr<int32_t>(v5))
                                 + (float)(*(float *)g4_m128_ptr<int32_t>(v6) * *(float *)g4_m128_ptr<int32_t>(v6)))
                         + (float)(g4_m128_lane<float>(v7, 0) *g4_m128_lane<float>(v7, 0));
  v9 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v8) <= 0.0 )
  {
    v14 = 0.0;
  }
  else
  {
    v10 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v8);
    v11 = _mm_cvtsi128_si32(v8) >> 1;
    v12 = (_mm_cvtsi128_si32(v8) + 2139095040) >> 31;
    v13 = (float)(1.5 * COERCE_FLOAT(v12 & (1597463174 - v11)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * COERCE_FLOAT(v12 & (1597463174 - v11)))
                * (float)(COERCE_FLOAT(v12 & (1597463174 - v11)) * COERCE_FLOAT(v12 & (1597463174 - v11))));
    v14 = (float)(1.5 * (float)((float)(1.5 * v13) - (float)((float)(v10 * v13) * (float)(v13 * v13))))
        - (float)((float)(v10 * (float)((float)(1.5 * v13) - (float)((float)(v10 * v13) * (float)(v13 * v13))))
                * (float)((float)((float)(1.5 * v13) - (float)((float)(v10 * v13) * (float)(v13 * v13)))
                        * (float)((float)(1.5 * v13) - (float)((float)(v10 * v13) * (float)(v13 * v13)))));
  }
  v31 = v31 * v14;
  *(float *)g4_m128_ptr<int32_t>(v5) = v31;
  v32 = v32 * v14;
  *(float *)g4_m128_ptr<int32_t>(v6) = v32;
  v15 = fabs(v31);
  *(float *)&v33 = *(float *)&v33 * v14;
g4_m128_lane<float>(v7, 0) = *(float *)&v33;
  v34 = v14 * v34;
g4_m128_lane<float>(v16, 0) = fabs(v32);
  v17 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v7);
  if ( v15 > fabs(v32) )
  {
    m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v6));
    v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    v20 = 0;
    v21 = 1;
  }
  else
  {
    m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v5));
    v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
g4_m128_lane<float>(v16, 0) = v15;
    v20 = 1;
    v21 = 0;
  }
  *(float *)&v35 = 0.0;
  v36 = 0.0;
  v22 = _mm_cmplt_ss(v17, v16);
  v23 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v22, v7), 0) | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(m128i_i128, v22)));
  v37 = 0.0;
  if (g4_m128_lane<float>(v16, 0) <=g4_m128_lane<float>(v17, 0) )
    v21 = 2;
  v38 = 0.0;
  *(&v35 + v20) = v23;
  *((float *)&v35 + v21) = -v19;
g4_m128_raw(v24) = v35;
  *(float *)g4_m128_ptr<int32_t>(v24) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v24) * *(float *)g4_m128_ptr<int32_t>(v24)) + (float)(v36 * v36))
                          + (float)(v37 * v37);
  if ( *(float *)g4_m128_ptr<int32_t>(v24) > 0.0 )
  {
    v25 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v24);
    v26 = _mm_cvtsi128_si32(v24) >> 1;
    v27 = (_mm_cvtsi128_si32(v24) + 2139095040) >> 31;
    v28 = (float)(1.5 * COERCE_FLOAT(v27 & (1597463174 - v26)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * COERCE_FLOAT(v27 & (1597463174 - v26)))
                * (float)(COERCE_FLOAT(v27 & (1597463174 - v26)) * COERCE_FLOAT(v27 & (1597463174 - v26))));
    v9 = (float)(1.5 * (float)((float)(1.5 * v28) - (float)((float)(v25 * v28) * (float)(v28 * v28))))
       - (float)((float)(v25 * (float)((float)(1.5 * v28) - (float)((float)(v25 * v28) * (float)(v28 * v28))))
               * (float)((float)((float)(1.5 * v28) - (float)((float)(v25 * v28) * (float)(v28 * v28)))
                       * (float)((float)(1.5 * v28) - (float)((float)(v25 * v28) * (float)(v28 * v28)))));
  }
  v29 =g4_m128_lane<float>(v7, 0) * (float)(v36 * v9);
  v37 = v37 * v9;
  v39[3] = 0.0;
  v38 = v9 * v38;
  *(float *)&v35 = *(float *)&v35 * v9;
  v36 = v36 * v9;
  v39[0] = (float)(*(float *)g4_m128_ptr<int32_t>(v6) * v37) - v29;
  v39[1] = (float)(g4_m128_lane<float>(v7, 0) * *(float *)&v35) - (float)(v37 * *(float *)g4_m128_ptr<int32_t>(v5));
  v39[2] = (float)(*(float *)g4_m128_ptr<int32_t>(v5) * v36) - (float)(*(float *)g4_m128_ptr<int32_t>(v6) * *(float *)&v35);
  hkVector4f::setRotatedInverseDir((hkpLimitedHingeConstraintData::Self *)((char *)self + 32), a2, (const hkVector4f::Self *)&v31);
  hkVector4f::setRotatedInverseDir((hkpLimitedHingeConstraintData::Self *)((char *)self + 48), a2, (const hkVector4f::Self *)&v35);
  hkVector4f::setRotatedInverseDir((hkpLimitedHingeConstraintData::Self *)((char *)self + 64), a2, (const hkVector4f::Self *)v39);
  hkVector4f::setTransformedInversePos((hkpLimitedHingeConstraintData::Self *)((char *)self + 80), a2, a4);
  hkVector4f::setRotatedInverseDir((hkpLimitedHingeConstraintData::Self *)((char *)self + 96), a3, (const hkVector4f::Self *)&v31);
  hkVector4f::setRotatedInverseDir((hkpLimitedHingeConstraintData::Self *)((char *)self + 112), a3, (const hkVector4f::Self *)&v35);
  hkVector4f::setRotatedInverseDir((hkpLimitedHingeConstraintData::Self *)((char *)self + 128), a3, (const hkVector4f::Self *)v39);
  return hkVector4f::setTransformedInversePos((hkpLimitedHingeConstraintData::Self *)((char *)self + 144), a3, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::setInBodySpace  (binary VA: 0x1721290)
// Original: hkpLimitedHingeConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
hkpLimitedHingeConstraintData::Self * hkpLimitedHingeConstraintData::setInBodySpace(hkpLimitedHingeConstraintData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6, const hkVector4f::Self *a7)
{
  hkpLimitedHingeConstraintData::Self *result;
  __m128i v8;
  float v9; // xmm5_4
  float v10; // xmm2_4
  __m128i v11;
  int v12;
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  __m128i v20;
  float v21; // xmm4_4
  float v22; // xmm3_4
  __m128i v23;
  float v24; // xmm1_4
  float v25; // xmm6_4
  int v26;
  float v27; // xmm1_4
  float v28; // xmm5_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  __m128i v32;
  float v33; // xmm5_4
  float v34; // xmm2_4
  __m128i v35;
  int v36;
  float v37; // xmm3_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  __m128i v44;
  float v45; // xmm4_4
  float v46; // xmm3_4
  __m128i v47;
  float v48; // xmm1_4
  float v49; // xmm6_4
  int v50;
  float v51; // xmm1_4
  float v52; // xmm5_4
  float v53; // xmm4_4
  float v54; // xmm3_4
  float v55; // xmm1_4
  int v56;
  float v57;
  float v58;
  float v59;
  float v60;

  result = self;
  *((uint32_t *)self + 8) = *(uint32_t *)a4;
g4_m128_raw(v8) = *((unsigned int *)self + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a4 + 1);
  v9 = *((float *)self + 9);
  v11 = v8;
  *((uint32_t *)self + 10) = *((uint32_t *)a4 + 2);
  v10 = *((float *)self + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a4 + 3);
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)g4_m128_ptr<int32_t>(v8)) + (float)(v9 * v9))
                          + (float)(v10 * v10);
  if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.0 )
  {
    v15 = 0.0;
  }
  else
  {
    v56 = 1597463174 - (_mm_cvtsi128_si32(v11) >> 1);
    v12 = _mm_cvtsi128_si32(v11);
    v13 = (float)(COERCE_FLOAT(((v12 + 2139095040) >> 31) & v56) * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * COERCE_FLOAT(((v12 + 2139095040) >> 31) & v56))
                * (float)(COERCE_FLOAT(((v12 + 2139095040) >> 31) & v56) * COERCE_FLOAT(((v12 + 2139095040) >> 31) & v56)));
    v14 = (float)(v13 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v13) * (float)(v13 * v13));
    v15 = (float)(1.5 * v14) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v14) * (float)(v14 * v14));
  }
  v16 = *(float *)g4_m128_ptr<int32_t>(v8) * v15;
  v17 = v9 * v15;
  v18 = v10 * v15;
  v19 = v15 * *((float *)self + 11);
  *((float *)self + 8) = v16;
  *((float *)self + 9) = v17;
  *((float *)self + 10) = v18;
  *((float *)self + 11) = v19;
  v57 = v16;
  *((uint32_t *)self + 12) = *(uint32_t *)a6;
  v59 = v17;
g4_m128_raw(v20) = *((unsigned int *)self + 12);
  *((uint32_t *)self + 13) = *((uint32_t *)a6 + 1);
  v21 = *((float *)self + 13);
  v23 = v20;
  *((uint32_t *)self + 14) = *((uint32_t *)a6 + 2);
  v22 = *((float *)self + 14);
  *((uint32_t *)self + 15) = *((uint32_t *)a6 + 3);
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20)) + (float)(v21 * v21))
                          + (float)(v22 * v22);
  v24 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v23) > 0.0 )
  {
    v25 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v23);
    v26 = ((_mm_cvtsi128_si32(v23) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v23) >> 1));
    v27 = (float)(1.5 * *(float *)&v26)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * *(float *)&v26)
                * (float)(*(float *)&v26 * *(float *)&v26));
    v24 = (float)(1.5 * (float)((float)(1.5 * v27) - (float)((float)(v25 * v27) * (float)(v27 * v27))))
        - (float)((float)(v25 * (float)((float)(1.5 * v27) - (float)((float)(v25 * v27) * (float)(v27 * v27))))
                * (float)((float)((float)(1.5 * v27) - (float)((float)(v25 * v27) * (float)(v27 * v27)))
                        * (float)((float)(1.5 * v27) - (float)((float)(v25 * v27) * (float)(v27 * v27)))));
  }
  v28 = *(float *)g4_m128_ptr<int32_t>(v20) * v24;
  v29 = v21 * v24;
  v30 = v22 * v24;
  *((uint32_t *)self + 19) = 0;
  v31 = v24 * *((float *)self + 15);
  *((float *)self + 12) = v28;
  *((float *)self + 15) = v31;
  *((float *)self + 13) = v29;
  *((float *)self + 14) = v30;
  *((float *)self + 16) = (float)(v59 * v30) - (float)(v18 * v29);
  *((float *)self + 17) = (float)(v18 * v28) - (float)(v30 * v57);
  *((float *)self + 18) = (float)(v29 * v57) - (float)(v28 * v59);
  *((uint32_t *)self + 20) = *(uint32_t *)a2;
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 24) = *(uint32_t *)a5;
g4_m128_raw(v32) = *((unsigned int *)self + 24);
  *((uint32_t *)self + 25) = *((uint32_t *)a5 + 1);
  v33 = *((float *)self + 25);
  v35 = v32;
  *((uint32_t *)self + 26) = *((uint32_t *)a5 + 2);
  v34 = *((float *)self + 26);
  *((uint32_t *)self + 27) = *((uint32_t *)a5 + 3);
  *(float *)g4_m128_ptr<int32_t>(v35) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)g4_m128_ptr<int32_t>(v32)) + (float)(v33 * v33))
                          + (float)(v34 * v34);
  if ( *(float *)g4_m128_ptr<int32_t>(v35) <= 0.0 )
  {
    v39 = 0.0;
  }
  else
  {
    v36 = ((_mm_cvtsi128_si32(v35) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v35) >> 1));
    v37 = (float)(*(float *)&v36 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * *(float *)&v36)
                * (float)(*(float *)&v36 * *(float *)&v36));
    v38 = (float)(v37 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * v37) * (float)(v37 * v37));
    v39 = (float)(1.5 * v38) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * v38) * (float)(v38 * v38));
  }
  v40 = *(float *)g4_m128_ptr<int32_t>(v32) * v39;
  v41 = v33 * v39;
  v42 = v34 * v39;
  v43 = v39 * *((float *)self + 27);
  *((float *)self + 24) = v40;
  *((float *)self + 25) = v41;
  *((float *)self + 26) = v42;
  *((float *)self + 27) = v43;
  v58 = v40;
  *((uint32_t *)self + 28) = *(uint32_t *)a7;
  v60 = v41;
g4_m128_raw(v44) = *((unsigned int *)self + 28);
  *((uint32_t *)self + 29) = *((uint32_t *)a7 + 1);
  v45 = *((float *)self + 29);
  v47 = v44;
  *((uint32_t *)self + 30) = *((uint32_t *)a7 + 2);
  v46 = *((float *)self + 30);
  *((uint32_t *)self + 31) = *((uint32_t *)a7 + 3);
  *(float *)g4_m128_ptr<int32_t>(v47) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v44) * *(float *)g4_m128_ptr<int32_t>(v44)) + (float)(v45 * v45))
                          + (float)(v46 * v46);
  v48 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v47) > 0.0 )
  {
    v49 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v47);
    v50 = ((_mm_cvtsi128_si32(v47) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v47) >> 1));
    v51 = (float)(1.5 * *(float *)&v50)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v47)) * *(float *)&v50)
                * (float)(*(float *)&v50 * *(float *)&v50));
    v48 = (float)(1.5 * (float)((float)(1.5 * v51) - (float)((float)(v49 * v51) * (float)(v51 * v51))))
        - (float)((float)(v49 * (float)((float)(1.5 * v51) - (float)((float)(v49 * v51) * (float)(v51 * v51))))
                * (float)((float)((float)(1.5 * v51) - (float)((float)(v49 * v51) * (float)(v51 * v51)))
                        * (float)((float)(1.5 * v51) - (float)((float)(v49 * v51) * (float)(v51 * v51)))));
  }
  v52 = *(float *)g4_m128_ptr<int32_t>(v44) * v48;
  *((uint32_t *)self + 35) = 0;
  v53 = v45 * v48;
  v54 = v46 * v48;
  v55 = v48 * *((float *)self + 31);
  *((float *)self + 28) = v52;
  *((float *)self + 31) = v55;
  *((float *)self + 29) = v53;
  *((float *)self + 30) = v54;
  *((float *)self + 32) = (float)(v60 * v54) - (float)(v42 * v53);
  *((float *)self + 33) = (float)(v42 * v52) - (float)(v54 * v58);
  *((float *)self + 34) = (float)(v53 * v58) - (float)(v52 * v60);
  *((uint32_t *)self + 36) = *(uint32_t *)a3;
  *((uint32_t *)self + 37) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 38) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 39) = *((uint32_t *)a3 + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::setMotorEnabled  (binary VA: 0x17217b0)
// Original: hkpLimitedHingeConstraintData::setMotorEnabled
// ----------------------------------------------------------------------------
uint32_t * hkpLimitedHingeConstraintData::setMotorEnabled(int a1, uint32_t *a2, char a3)
{
  uint32_t *result;

  result = a2;
  *(uint8_t *)(a1 + 210) = a3 == 0;
  *(uint8_t *)(a1 + 178) = a3;
  if ( a2 != nullptr )
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    a2[5] = 0;
    a2[6] = 0;
    a2[7] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLimitedHingeConstraintData::setMotor  (binary VA: 0x17217f0)
// Original: hkpLimitedHingeConstraintData::setMotor
// ----------------------------------------------------------------------------
int hkpLimitedHingeConstraintData::setMotor(hkpLimitedHingeConstraintData::Self *self, hkpConstraintMotor::Self *a2)
{
  hkpConstraintMotor::Self *v2;
  int v3;
  int32_t v4; // kr00_4
  int result;
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett

  v2 = a2;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v4, v3 | (uint16_t)(v4 + 1));
    }
    while ( v4 != result );
  }
  v6 = *((uint32_t *)self + 48);
  if ( v6 == 0 || *(uint16_t *)(v6 + 6) == 0 )
    goto LABEL_8;
  do
  {
    v8 = *(uint32_t *)(v6 + 4);
    HIWORD(v7) = HIWORD(v8);
    LOWORD(v7) = 0;
    v9 = v7 | (uint16_t)(v8 - 1);
    v10 = v8;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9);
  }
  while ( v10 != result );
  v2 = a2;
  if ( (uint16_t)v9 == 0 )
  {
    result = G4_VCALL<int>(v6, 16);
    *((uint32_t *)self + 48) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_8:
    *((uint32_t *)self + 48) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}



// ============================================================================
// Address:   0x1af4730 (size: 2438 bytes)
// Symbol:    _ZN21hkpLimitedHingeDrawer14drawConstraintEPK29hkpLimitedHingeConstraintDataRK12hkTransformfS5_P21hkDebugDisplayHandlerii
// Demangled: hkpLimitedHingeDrawer::drawConstraint(hkpLimitedHingeConstraintData const*,hkTransformf const&,hkTransformf const&,hkDebugDisplayHandler *,int,int)
// ============================================================================

