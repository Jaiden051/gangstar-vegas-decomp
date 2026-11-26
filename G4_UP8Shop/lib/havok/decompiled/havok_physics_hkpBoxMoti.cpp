#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBoxMoti.h"

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::staticClass  (binary VA: 0x17305e0)
// Original: hkpBoxMotion::staticClass
// ----------------------------------------------------------------------------
void * hkpBoxMotion::staticClass()
{
  return &hkpBoxMotionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::getInertiaInvLocal  (binary VA: 0x17687f0)
// Original: hkpBoxMotion::getInertiaInvLocal
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpBoxMotion::getInertiaInvLocal(hkpBoxMotion::Self *self, hkMatrix3f::Self *a2)
{
  *(uint32_t *)a2 = 0;
  *((uint32_t *)a2 + 5) = 0;
  *((uint32_t *)a2 + 10) = 0;
  *((uint32_t *)a2 + 1) = 0;
  *((uint32_t *)a2 + 2) = 0;
  *((uint32_t *)a2 + 3) = 0;
  *((uint32_t *)a2 + 4) = 0;
  *((uint32_t *)a2 + 6) = 0;
  *((uint32_t *)a2 + 7) = 0;
  *((uint32_t *)a2 + 8) = 0;
  *((uint32_t *)a2 + 9) = 0;
  *((uint32_t *)a2 + 11) = 0;
  *(uint32_t *)a2 = *((uint32_t *)self + 48);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 49);
  *((uint32_t *)a2 + 10) = *((uint32_t *)self + 50);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::setInertiaInvLocal  (binary VA: 0x1768860)
// Original: hkpBoxMotion::setInertiaInvLocal
// ----------------------------------------------------------------------------
hkpBoxMotion::Self * hkpBoxMotion::setInertiaInvLocal(hkpBoxMotion::Self *self, const hkMatrix3f::Self *a2)
{
  int v3; // xmm1_4
  int v4; // xmm2_4

  v3 = *((uint32_t *)a2 + 10);
  v4 = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 48) = *(uint32_t *)a2;
  *((uint32_t *)self + 49) = v4;
  *((uint32_t *)self + 50) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::applyPointImpulse  (binary VA: 0x1768890)
// Original: hkpBoxMotion::applyPointImpulse
// ----------------------------------------------------------------------------
float * hkpBoxMotion::applyPointImpulse(hkpBoxMotion::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  float *result;
  float v4; // xmm0_4
  float v5; // xmm6_4
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm3_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm2_4

  result = (float *)self;
  v4 = *((float *)self + 51);
  v5 = *((float *)self + 4);
  *((float *)self + 52) = (float)(*(float *)a2 * v4) + *((float *)self + 52);
  *((float *)self + 53) = (float)(*((float *)a2 + 1) * v4) + *((float *)self + 53);
  *((float *)self + 54) = (float)(*((float *)a2 + 2) * v4) + *((float *)self + 54);
  *((float *)self + 55) = (float)(v4 * *((float *)a2 + 3)) + *((float *)self + 55);
  v6 = *((float *)a3 + 1) - *((float *)self + 25);
  v7 = *((float *)a2 + 2);
  v8 = *((float *)a2 + 1);
  v9 = *(float *)a3 - *((float *)self + 24);
  v10 = (float)(v6 * v7) - (float)((float)(*((float *)a3 + 2) - *((float *)self + 26)) * v8);
  v11 = (float)((float)(*((float *)a3 + 2) - *((float *)self + 26)) * *(float *)a2) - (float)(v7 * v9);
  v12 = (float)(v8 * v9) - (float)(v6 * *(float *)a2);
  v13 = *((float *)self + 8);
  v14 = *((float *)self + 12);
  v15 = (float)((float)((float)(v10 * v5) + (float)(result[5] * v11)) + (float)(result[6] * v12)) * result[48];
  v16 = (float)((float)((float)(v10 * v13) + (float)(result[9] * v11)) + (float)(result[10] * v12))
      * *((float *)self + 49);
  v17 = (float)((float)((float)(v10 * v14) + (float)(v11 * result[13])) + (float)(v12 * result[14]))
      * *((float *)self + 50);
  v18 = (float)((float)(*((float *)self + 7) * v15) + (float)(*((float *)self + 11) * v16))
      + (float)(*((float *)self + 15) * v17);
  *((float *)self + 56) = (float)((float)((float)(v5 * v15) + (float)(v13 * v16)) + (float)(v14 * v17))
                        + *((float *)self + 56);
  v19 = (float)(*((float *)self + 5) * v15) + (float)(*((float *)self + 9) * v16);
  v20 = *((float *)self + 13) * v17;
  v21 = (float)(v15 * *((float *)self + 6)) + (float)(v16 * *((float *)self + 10));
  v22 = v17 * *((float *)self + 14);
  *((float *)self + 59) = v18 + *((float *)self + 59);
  v23 = (float)(v21 + v22) + *((float *)self + 58);
  *((float *)self + 57) = (float)(v19 + v20) + *((float *)self + 57);
  *((float *)self + 58) = v23;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::applyForce  (binary VA: 0x1768a90)
// Original: hkpBoxMotion::applyForce
// ----------------------------------------------------------------------------
hkpBoxMotion::Self * hkpBoxMotion::applyForce(hkpBoxMotion::Self *self, float a2, const hkVector4f::Self *a3)
{
  float v4; // xmm4_4
  float v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm0_4

  v4 = *((float *)self + 51);
  v5 = (float)((float)(*((float *)a3 + 2) * a2) * v4) + *((float *)self + 54);
  v6 = (float)((float)(a2 * *(float *)a3) * v4) + *((float *)self + 52);
  v7 = (float)((float)(*((float *)a3 + 3) * a2) * v4) + *((float *)self + 55);
  *((float *)self + 53) = (float)((float)(*((float *)a3 + 1) * a2) * v4) + *((float *)self + 53);
  *((float *)self + 54) = v5;
  *((float *)self + 52) = v6;
  *((float *)self + 55) = v7;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::applyForce  (binary VA: 0x1768b20)
// Original: hkpBoxMotion::applyForce
// ----------------------------------------------------------------------------
int hkpBoxMotion::applyForce(hkpBoxMotion::Self *self, unsigned int a2, __m128 *a3, const hkVector4f::Self *a4)
{
  int v4;
  typedef __m128 _g4_t_v6;
  enum : size_t {
    _g4_s0 = 80u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);

  v4 = *(uint32_t *)self;
  v6 = _mm_mul_ps(_mm_shuffle_ps(G4_BITCAST<__m128>(a2), G4_BITCAST<__m128>(a2), 0), *a3);
  return (*(int (**)(hkpBoxMotion::Self *, __m128 *, const hkVector4f::Self *))(v4 + 100))(self, &v6, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::applyTorque  (binary VA: 0x1768b60)
// Original: hkpBoxMotion::applyTorque
// ----------------------------------------------------------------------------
int hkpBoxMotion::applyTorque(hkpBoxMotion::Self *self, unsigned int a2, __m128 *a3)
{
  int v3;
  typedef __m128 _g4_t_v5;
  enum : size_t {
    _g4_s0 = 80u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  v3 = *(uint32_t *)self;
  v5 = _mm_mul_ps(_mm_shuffle_ps(G4_BITCAST<__m128>(a2), G4_BITCAST<__m128>(a2), 0), *a3);
  return (*(int (**)(hkpBoxMotion::Self *, __m128 *))(v3 + 104))(self, &v5);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::getInertiaLocal  (binary VA: 0x1768ba0)
// Original: hkpBoxMotion::getInertiaLocal
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpBoxMotion::getInertiaLocal(hkpBoxMotion::Self *self, hkMatrix3f::Self *a2)
{
  __m128i v3;
  __m128i v4;
  __m128i v5;
  int v6;
  int v7; // xmm4_4
  int v8;
  int v9;
  int v10;
  int v11;
  float v12; // xmm4_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  int v15;

g4_m128_raw(v3) = 0x34000000u;
g4_m128_raw(v4) = 0x34000000u;
g4_m128_raw(v5) = 0x34000000u;
  *(float *)g4_m128_ptr<int32_t>(v3) = fmaxf(0.00000011920929f, *((float *)self + 48));
  *(float *)g4_m128_ptr<int32_t>(v4) = fmaxf(0.00000011920929f, *((float *)self + 49));
  *(float *)g4_m128_ptr<int32_t>(v5) = fmaxf(0.00000011920929f, *((float *)self + 50));
  *((uint32_t *)a2 + 1) = 0;
  *((uint32_t *)a2 + 2) = 0;
  v6 = _mm_cvtsi128_si32(v3);
  v7 = (2130706432 - v6) & ((v6 ^ (v6 + 2139095040)) >> 31);
  v8 = _mm_cvtsi128_si32(v4);
  v9 = 2130706432 - v8;
  v10 = (v8 ^ (v8 + 2139095040)) >> 31;
  v11 = _mm_cvtsi128_si32(v5);
  *((uint32_t *)a2 + 3) = 0;
  *((uint32_t *)a2 + 4) = 0;
  *((uint32_t *)a2 + 6) = 0;
  *((uint32_t *)a2 + 7) = 0;
  *((uint32_t *)a2 + 8) = 0;
  *((uint32_t *)a2 + 9) = 0;
  *((uint32_t *)a2 + 11) = 0;
  v12 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v7)) * *(float *)&v7)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v7)) * *(float *)&v7);
  v13 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * v12);
g4_m128_lane<int32_t>(v3, 0) = v9 & v10;
  v14 = *(float *)g4_m128_ptr<int32_t>(v4) * COERCE_FLOAT(v9 & v10);
  v15 = (2130706432 - v11) & ((v11 ^ (v11 + 2139095040)) >> 31);
  *(float *)a2 = v12 * v13;
  *((float *)a2 + 5) = (float)(2.0
                             - (float)(*(float *)g4_m128_ptr<int32_t>(v4)
                                     * (float)((float)(2.0
                                                     - (float)(*(float *)g4_m128_ptr<int32_t>(v4)
                                                             * (float)((float)(2.0 - v14) * *(float *)g4_m128_ptr<int32_t>(v3))))
                                             * (float)((float)(2.0 - v14) * *(float *)g4_m128_ptr<int32_t>(v3)))))
                     * (float)((float)(2.0
                                     - (float)(*(float *)g4_m128_ptr<int32_t>(v4)
                                             * (float)((float)(2.0 - v14) * *(float *)g4_m128_ptr<int32_t>(v3))))
                             * (float)((float)(2.0 - v14) * *(float *)g4_m128_ptr<int32_t>(v3)));
  *((float *)a2 + 10) = (float)(2.0
                              - (float)(*(float *)g4_m128_ptr<int32_t>(v5)
                                      * (float)((float)(2.0
                                                      - (float)(*(float *)g4_m128_ptr<int32_t>(v5)
                                                              * (float)((float)(2.0
                                                                              - (float)(*(float *)g4_m128_ptr<int32_t>(v5)
                                                                                      * *(float *)&v15))
                                                                      * *(float *)&v15)))
                                              * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)&v15))
                                                      * *(float *)&v15))))
                      * (float)((float)(2.0
                                      - (float)(*(float *)g4_m128_ptr<int32_t>(v5)
                                              * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)&v15))
                                                      * *(float *)&v15)))
                              * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)&v15)) * *(float *)&v15));
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::setMass  (binary VA: 0x1768d60)
// Original: hkpBoxMotion::setMass
// ----------------------------------------------------------------------------
int hkpBoxMotion::setMass(int a1, unsigned int *a2)
{
  __m128i v2;
  int v3;
  int v4; // xmm0_4

g4_m128_raw(v2) = *a2;
  v3 = _mm_cvtsi128_si32(v2);
  v4 = (2130706432 - v3) & ((v3 ^ (v3 + 2139095040)) >> 31);
  *(float *)(a1 + 204) = (float)(2.0
                               - (float)(*(float *)g4_m128_ptr<int32_t>(v2)
                                       * (float)((float)(2.0
                                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v2)
                                                               * (float)((float)(2.0
                                                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v2)
                                                                                       * *(float *)&v4))
                                                                       * *(float *)&v4)))
                                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v2) * *(float *)&v4))
                                                       * *(float *)&v4))))
                       * (float)((float)(2.0
                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v2)
                                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v2) * *(float *)&v4))
                                                       * *(float *)&v4)))
                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v2) * *(float *)&v4)) * *(float *)&v4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::Destroy  (binary VA: 0x1768df0)
// Original: hkpBoxMotion::~hkpBoxMotion
// ----------------------------------------------------------------------------
void hkpBoxMotion::Destroy(hkpBoxMotion::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::getInertiaInvWorld  (binary VA: 0x1768e10)
// Original: hkpBoxMotion::getInertiaInvWorld
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpBoxMotion::getInertiaInvWorld(hkpBoxMotion::Self *self, hkMatrix3f::Self *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  __m128i v4;
  __m128i v5;
  float v6; // xmm2_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  int v11;
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19[12];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);

  v2 = *((float *)self + 48);
  v3 = *((float *)self + 49);
g4_m128_raw(v4) = *((unsigned int *)self + 6);
g4_m128_raw(v5) = *((unsigned int *)self + 7);
  v6 = *((float *)self + 5) * v2;
  *(float *)g4_m128_ptr<int32_t>(v4) = *(float *)g4_m128_ptr<int32_t>(v4) * v2;
  *(float *)g4_m128_ptr<int32_t>(v5) = *(float *)g4_m128_ptr<int32_t>(v5) * v2;
  v7 = *((float *)self + 8) * v3;
  v8 = *((float *)self + 9) * v3;
  v9 = *((float *)self + 10) * v3;
  v10 = v3 * *((float *)self + 11);
  v11 = _mm_cvtsi128_si32(v5);
  v12 = v2 * *((float *)self + 4);
  LODWORD(v19[2]) = _mm_cvtsi128_si32(v4);
g4_m128_lane<int32_t>(v5, 0) = *((uint32_t *)self + 12);
  LODWORD(v19[3]) = v11;
  v18 = v6;
  v17 = v10;
  v13 = *((float *)self + 50);
  *(float *)g4_m128_ptr<int32_t>(v5) = *(float *)g4_m128_ptr<int32_t>(v5) * v13;
  *(float *)g4_m128_ptr<int32_t>(v4) = *((float *)self + 13) * v13;
  v14 = *((float *)self + 14) * v13;
  v15 = v13 * *((float *)self + 15);
  v19[0] = v12;
  v19[6] = v9;
  v19[1] = v18;
  v19[4] = v7;
  v19[5] = v8;
  v19[7] = v17;
  v19[8] = *(float *)g4_m128_ptr<int32_t>(v5);
  v19[9] = *(float *)g4_m128_ptr<int32_t>(v4);
  v19[10] = v14;
  v19[11] = v15;
  return hkMatrix3f::setMulInverse(a2, (const hkMatrix3f::Self *)v19, (hkpBoxMotion::Self *)((char *)self + 16));
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::getInertiaWorld  (binary VA: 0x1768f30)
// Original: hkpBoxMotion::getInertiaWorld
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpBoxMotion::getInertiaWorld(hkpBoxMotion::Self *self, hkMatrix3f::Self *a2)
{
  G4_VCALL<void>(self, 36, a2);
  return hkMatrix3f::changeBasis(a2, (hkpBoxMotion::Self *)((char *)self + 16));
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::Destroy_ea1768f70  (binary VA: 0x1768f70)
// Original: hkpBoxMotion::~hkpBoxMotion
// ----------------------------------------------------------------------------
void hkpBoxMotion::Destroy_ea1768f70(hkpBoxMotion::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 288;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::setMass  (binary VA: 0x1768fd0)
// Original: hkpBoxMotion::setMass
// ----------------------------------------------------------------------------
hkpBoxMotion::Self * hkpBoxMotion::setMass(hkpBoxMotion::Self *self, unsigned int a2)
{
  int v2;
  int v3; // xmm0_4

  v2 = _mm_cvtsi128_si32(G4_BITCAST<__m128i>(a2));
  v3 = (2130706432 - v2) & ((v2 ^ (v2 + 2139095040)) >> 31);
  *((float *)self + 51) = (float)(2.0
                                - (float)(*(float *)&a2
                                        * (float)((float)(2.0
                                                        - (float)(*(float *)&a2
                                                                * (float)((float)(2.0
                                                                                - (float)(*(float *)&a2 * *(float *)&v3))
                                                                        * *(float *)&v3)))
                                                * (float)((float)(2.0 - (float)(*(float *)&a2 * *(float *)&v3))
                                                        * *(float *)&v3))))
                        * (float)((float)(2.0
                                        - (float)(*(float *)&a2
                                                * (float)((float)(2.0 - (float)(*(float *)&a2 * *(float *)&v3))
                                                        * *(float *)&v3)))
                                * (float)((float)(2.0 - (float)(*(float *)&a2 * *(float *)&v3)) * *(float *)&v3));
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::getProjectedPointVelocitySimd  (binary VA: 0x1769050)
// Original: hkpBoxMotion::getProjectedPointVelocitySimd
// ----------------------------------------------------------------------------
float * hkpBoxMotion::getProjectedPointVelocitySimd(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float v5; // xmm2_4
  float v6; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4

  v5 = a2[1] - a1[25];
  v6 = a2[2] - a1[26];
  v7 = *a2 - a1[24];
  v8 = a3[2];
  v9 = a3[1];
  v10 = (float)(v5 * v8) - (float)(v6 * v9);
  v11 = (float)(v6 * *a3) - (float)(v7 * v8);
  v12 = (float)(v7 * v9) - (float)(v5 * *a3);
  *a4 = (float)((float)((float)(a1[56] * v10) + (float)(a1[57] * v11)) + (float)(a1[58] * v12))
      + (float)((float)((float)(*a3 * a1[52]) + (float)(v9 * a1[53])) + (float)(v8 * a1[54]));
  v13 = (float)((float)(a1[4] * v10) + (float)(a1[5] * v11)) + (float)(a1[6] * v12);
  v14 = (float)((float)(a1[8] * v10) + (float)(a1[9] * v11)) + (float)(a1[10] * v12);
  v15 = (float)((float)(v10 * a1[12]) + (float)(v11 * a1[13])) + (float)(v12 * a1[14]);
  *a5 = (float)((float)((float)((float)(a1[48] * v13) * v13) + (float)((float)(a1[49] * v14) * v14))
              + (float)((float)(a1[50] * v15) * v15))
      + a1[51];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::getProjectedPointVelocity  (binary VA: 0x17691c0)
// Original: hkpBoxMotion::getProjectedPointVelocity
// ----------------------------------------------------------------------------
float * hkpBoxMotion::getProjectedPointVelocity(hkpBoxMotion::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float *a4, float *a5)
{
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v19;

  v5 = *((float *)a2 + 2) - *((float *)self + 26);
  v6 = *((float *)a2 + 1) - *((float *)self + 25);
  v7 = *((float *)a3 + 1);
  v8 = *(float *)a2 - *((float *)self + 24);
  v19 = *((float *)a3 + 2);
  v9 = (float)(v19 * v6) - (float)(v5 * v7);
  v10 = (float)(v5 * *(float *)a3) - (float)(v19 * v8);
  v11 = (float)(v8 * v7) - (float)(v6 * *(float *)a3);
  v12 = (float)(*(float *)a3 * *((float *)self + 52)) + (float)(v7 * *((float *)self + 53));
  v13 = (float)(*((float *)self + 56) * v9) + (float)(*((float *)self + 57) * v10);
  v14 = (float)((float)(*((float *)self + 4) * v9) + (float)(*((float *)self + 5) * v10))
      + (float)(*((float *)self + 6) * v11);
  v15 = (float)((float)(*((float *)self + 8) * v9) + (float)(*((float *)self + 9) * v10))
      + (float)(*((float *)self + 10) * v11);
  v16 = (float)((float)(*((float *)self + 12) * v9) + (float)(v10 * *((float *)self + 13)))
      + (float)(*((float *)self + 14) * v11);
  v17 = (float)((float)((float)((float)(*((float *)self + 48) * v14) * v14)
                      + (float)((float)(*((float *)self + 49) * v15) * v15))
              + (float)((float)(*((float *)self + 50) * v16) * v16))
      + *((float *)self + 51);
  *a4 = (float)(v12 + (float)(v19 * *((float *)self + 54))) + (float)(v13 + (float)(v11 * *((float *)self + 58)));
  *a5 = v17;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::applyAngularImpulse  (binary VA: 0x1769340)
// Original: hkpBoxMotion::applyAngularImpulse
// ----------------------------------------------------------------------------
hkpBoxMotion::Self * hkpBoxMotion::applyAngularImpulse(hkpBoxMotion::Self *self, const hkVector4f::Self *a2)
{
  float v3; // xmm7_4
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm2_4

  v3 = *((float *)a2 + 1);
  v4 = *((float *)self + 8);
  v5 = *((float *)a2 + 2);
  v6 = *((float *)self + 12);
  v7 = (float)((float)((float)(*((float *)self + 4) * *(float *)a2) + (float)(*((float *)self + 5) * v3))
             + (float)(*((float *)self + 6) * v5))
     * *((float *)self + 48);
  v8 = (float)((float)((float)(*(float *)a2 * v4) + (float)(*((float *)self + 9) * v3))
             + (float)(*((float *)self + 10) * v5))
     * *((float *)self + 49);
  v9 = (float)((float)((float)(*(float *)a2 * v6) + (float)(v3 * *((float *)self + 13)))
             + (float)(v5 * *((float *)self + 14)))
     * *((float *)self + 50);
  v10 = (float)((float)(*((float *)self + 4) * v7) + (float)(v4 * v8)) + (float)(v6 * v9);
  v11 = (float)(*((float *)self + 5) * v7) + (float)(*((float *)self + 9) * v8);
  v12 = *((float *)self + 13) * v9;
  v13 = (float)((float)((float)(*((float *)self + 7) * v7) + (float)(*((float *)self + 11) * v8))
              + (float)(*((float *)self + 15) * v9))
      + *((float *)self + 59);
  v14 = (float)((float)(v7 * *((float *)self + 6)) + (float)(v8 * *((float *)self + 10)))
      + (float)(v9 * *((float *)self + 14));
  *((float *)self + 56) = v10 + *((float *)self + 56);
  v15 = v14 + *((float *)self + 58);
  *((float *)self + 57) = (float)(v11 + v12) + *((float *)self + 57);
  *((float *)self + 58) = v15;
  *((float *)self + 59) = v13;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::setInertiaLocal  (binary VA: 0x1769490)
// Original: hkpBoxMotion::setInertiaLocal
// ----------------------------------------------------------------------------
int hkpBoxMotion::setInertiaLocal(hkpBoxMotion::Self *self, const hkMatrix3f::Self *a2)
{
  __m128i v2;
  __m128i v3;
  int v4;
  __m128i v5;
  int v6;
  int v7;
  int v8;
  int v9; // xmm3_4
  float v10; // xmm1_4
  int v11;
  int v12;
  int v13;
  float v14; // xmm3_4
  float v15; // xmm6_4
  int result;
  float v17; // xmm1_4

g4_m128_raw(v2) = *(unsigned int *)a2;
g4_m128_raw(v3) = *((unsigned int *)a2 + 10);
  v4 = _mm_cvtsi128_si32(v2);
g4_m128_raw(v5) = *((unsigned int *)a2 + 5);
  v6 = 2130706432 - v4;
  v7 = (v4 ^ (v4 + 2139095040)) >> 31;
  v8 = _mm_cvtsi128_si32(v5);
  v9 = v6 & v7;
  v10 = *(float *)a2 * COERCE_FLOAT(v6 & v7);
  v11 = 2130706432 - v8;
  v12 = v8 ^ (v8 + 2139095040);
  v13 = _mm_cvtsi128_si32(v3);
  v14 = (float)(2.0 - (float)(*(float *)a2 * (float)((float)(2.0 - v10) * *(float *)&v9)))
      * (float)((float)(2.0 - v10) * *(float *)&v9);
  v15 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v2) * v14);
g4_m128_lane<int32_t>(v2, 0) = v11 & (v12 >> 31);
  result = (2130706432 - v13) & ((v13 ^ (v13 + 2139095040)) >> 31);
  v17 = (float)(2.0 - (float)(*((float *)a2 + 5) * *(float *)g4_m128_ptr<int32_t>(v2))) * *(float *)g4_m128_ptr<int32_t>(v2);
  *((float *)self + 48) = v14 * v15;
  *((float *)self + 49) = (float)(2.0
                                - (float)(*(float *)g4_m128_ptr<int32_t>(v5)
                                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v5) * v17)) * v17)))
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v5) * v17)) * v17);
  *((float *)self + 50) = (float)(2.0
                                - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                                        * (float)((float)(2.0
                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                                                                * (float)((float)(2.0
                                                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                                                                                        * *(float *)&result))
                                                                        * *(float *)&result)))
                                                * (float)((float)(2.0
                                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&result))
                                                        * *(float *)&result))))
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                                                * (float)((float)(2.0
                                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&result))
                                                        * *(float *)&result)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&result))
                                        * *(float *)&result));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxMotion::Construct  (binary VA: 0x17695f0)
// Original: hkpBoxMotion::hkpBoxMotion
// ----------------------------------------------------------------------------
void hkpBoxMotion::Construct(hkpBoxMotion::Self *self, const hkVector4f::Self *a2, const hkQuaternionf::Self *a3)
{
  hkpMotion::Construct(self, a2, a3, false);
  *((uint8_t *)self + 8) = 3;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0168);
  *((uint32_t *)self + 48) = 1065353216;
  *((uint32_t *)self + 49) = 1065353216;
  *((uint32_t *)self + 50) = 1065353216;
  *((uint32_t *)self + 51) = 1065353216;
}


