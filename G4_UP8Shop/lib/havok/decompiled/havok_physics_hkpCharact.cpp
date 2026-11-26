#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCharact.h"

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::setInertiaInvLocal  (binary VA: 0x17521b0)
// Original: hkpCharacterMotion::setInertiaInvLocal
// ----------------------------------------------------------------------------
hkpCharacterMotion::Self * hkpCharacterMotion::setInertiaInvLocal(hkpCharacterMotion::Self *self, const hkMatrix3f::Self *a2)
{
  float v3; // xmm0_4

  v3 = fminf(fminf(*(float *)a2, *((float *)a2 + 5)), *((float *)a2 + 10));
  *((float *)self + 48) = v3;
  *((float *)self + 49) = v3;
  *((float *)self + 50) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::getInertiaInvLocal  (binary VA: 0x17521e0)
// Original: hkpCharacterMotion::getInertiaInvLocal
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpCharacterMotion::getInertiaInvLocal(hkpCharacterMotion::Self *self, hkMatrix3f::Self *a2)
{
  int v3; // xmm1_4

  v3 = *((uint32_t *)self + 48);
  *((uint32_t *)a2 + 1) = 0;
  *((uint32_t *)a2 + 2) = 0;
  *((uint32_t *)a2 + 3) = 0;
  *((uint32_t *)a2 + 4) = 0;
  *((uint32_t *)a2 + 6) = 0;
  *((uint32_t *)a2 + 7) = 0;
  *((uint32_t *)a2 + 8) = 0;
  *((uint32_t *)a2 + 9) = 0;
  *((uint32_t *)a2 + 11) = 0;
  *(uint32_t *)a2 = v3;
  *((uint32_t *)a2 + 5) = v3;
  *((uint32_t *)a2 + 10) = v3;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::getInertiaInvWorld  (binary VA: 0x1752230)
// Original: hkpCharacterMotion::getInertiaInvWorld
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpCharacterMotion::getInertiaInvWorld(hkpCharacterMotion::Self *self, hkMatrix3f::Self *a2)
{
  int v3; // xmm1_4

  v3 = *((uint32_t *)self + 48);
  *((uint32_t *)a2 + 1) = 0;
  *((uint32_t *)a2 + 2) = 0;
  *((uint32_t *)a2 + 3) = 0;
  *((uint32_t *)a2 + 4) = 0;
  *((uint32_t *)a2 + 6) = 0;
  *((uint32_t *)a2 + 7) = 0;
  *((uint32_t *)a2 + 8) = 0;
  *((uint32_t *)a2 + 9) = 0;
  *((uint32_t *)a2 + 11) = 0;
  *(uint32_t *)a2 = v3;
  *((uint32_t *)a2 + 5) = v3;
  *((uint32_t *)a2 + 10) = v3;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::applyPointImpulse  (binary VA: 0x1752280)
// Original: hkpCharacterMotion::applyPointImpulse
// ----------------------------------------------------------------------------
float * hkpCharacterMotion::applyPointImpulse(hkpCharacterMotion::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  float *result;
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  float v10; // xmm7_4
  float v11; // xmm3_4
  float v12; // xmm7_4
  float v13; // xmm1_4
  float v14; // xmm0_4

  result = (float *)self;
  v4 = *((float *)self + 51);
  *((float *)self + 52) = (float)(*(float *)a2 * v4) + *((float *)self + 52);
  *((float *)self + 53) = (float)(*((float *)a2 + 1) * v4) + *((float *)self + 53);
  *((float *)self + 54) = (float)(*((float *)a2 + 2) * v4) + *((float *)self + 54);
  *((float *)self + 55) = (float)(*((float *)a2 + 3) * v4) + *((float *)self + 55);
  v5 = *((float *)a3 + 1) - *((float *)self + 25);
  v6 = *((float *)a3 + 2) - *((float *)self + 26);
  v7 = *((float *)a2 + 2);
  v8 = *((float *)a2 + 1);
  v9 = *(float *)a3 - *((float *)self + 24);
  v10 = v5 * v7;
  v11 = v5 * *(float *)a2;
  v12 = (float)((float)(v10 - (float)(v6 * v8)) * result[48]) + result[56];
  v13 = (float)((float)((float)(v6 * *(float *)a2) - (float)(v7 * v9)) * result[49]) + result[57];
  *((float *)self + 56) = v12;
  *((float *)self + 57) = v13;
  v14 = (float)((float)((float)(v9 * v8) - v11) * result[50]) + result[58];
  *((float *)self + 59) = (float)(v4 * 0.0) + *((float *)self + 59);
  *((float *)self + 58) = v14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::applyForce  (binary VA: 0x17523d0)
// Original: hkpCharacterMotion::applyForce
// ----------------------------------------------------------------------------
hkpCharacterMotion::Self * hkpCharacterMotion::applyForce(hkpCharacterMotion::Self *self, float a2, const hkVector4f::Self *a3)
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
// Function: hkpCharacterMotion::applyForce  (binary VA: 0x1752460)
// Original: hkpCharacterMotion::applyForce
// ----------------------------------------------------------------------------
int hkpCharacterMotion::applyForce(hkpCharacterMotion::Self *self, unsigned int a2, __m128 *a3, const hkVector4f::Self *a4)
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
  return (*(int (**)(hkpCharacterMotion::Self *, __m128 *, const hkVector4f::Self *))(v4 + 100))(self, &v6, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::applyTorque  (binary VA: 0x17524a0)
// Original: hkpCharacterMotion::applyTorque
// ----------------------------------------------------------------------------
int hkpCharacterMotion::applyTorque(hkpCharacterMotion::Self *self, unsigned int a2, __m128 *a3)
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
  return (*(int (**)(hkpCharacterMotion::Self *, __m128 *))(v3 + 104))(self, &v5);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::getProjectedPointVelocity  (binary VA: 0x17524e0)
// Original: hkpCharacterMotion::getProjectedPointVelocity
// ----------------------------------------------------------------------------
float * hkpCharacterMotion::getProjectedPointVelocity(hkpCharacterMotion::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float *a4, float *a5)
{
  float v5; // xmm4_4
  float v6; // xmm5_4

  v5 = *((float *)a2 + 1) - *((float *)self + 25);
  v6 = *((float *)a2 + 2) - *((float *)self + 26);
  *a4 = (float)((float)((float)((float)((float)(*((float *)a3 + 1) * v6) - (float)(v5 * *((float *)a3 + 2)))
                              * *((float *)self + 56))
                      + (float)((float)((float)((float)(*(float *)a2 - *((float *)self + 24)) * *((float *)a3 + 2))
                                      - (float)(v6 * *(float *)a3))
                              * *((float *)self + 57)))
              + (float)((float)((float)(v5 * *(float *)a3)
                              - (float)((float)(*(float *)a2 - *((float *)self + 24)) * *((float *)a3 + 1)))
                      * *((float *)self + 58)))
      + (float)((float)((float)(*((float *)self + 52) * *(float *)a3)
                      + (float)(*((float *)self + 53) * *((float *)a3 + 1)))
              + (float)(*((float *)a3 + 2) * *((float *)self + 54)));
  *a5 = *((float *)self + 51);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::getProjectedPointVelocitySimd  (binary VA: 0x17525c0)
// Original: hkpCharacterMotion::getProjectedPointVelocitySimd
// ----------------------------------------------------------------------------
uint32_t * hkpCharacterMotion::getProjectedPointVelocitySimd(int a1, float *a2, float *a3, float *a4, uint32_t *a5)
{
  float v5; // xmm4_4
  float v6; // xmm5_4

  v5 = a2[1] - *(float *)(a1 + 100);
  v6 = a2[2] - *(float *)(a1 + 104);
  *a4 = (float)((float)((float)((float)((float)(a3[1] * v6) - (float)(v5 * a3[2])) * *(float *)(a1 + 224))
                      + (float)((float)((float)((float)(*a2 - *(float *)(a1 + 96)) * a3[2]) - (float)(v6 * *a3))
                              * *(float *)(a1 + 228)))
              + (float)((float)((float)(v5 * *a3) - (float)((float)(*a2 - *(float *)(a1 + 96)) * a3[1]))
                      * *(float *)(a1 + 232)))
      + (float)((float)((float)(*(float *)(a1 + 208) * *a3) + (float)(*(float *)(a1 + 212) * a3[1]))
              + (float)(a3[2] * *(float *)(a1 + 216)));
  *a5 = *(uint32_t *)(a1 + 204);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::setInertiaLocal  (binary VA: 0x17526a0)
// Original: hkpCharacterMotion::setInertiaLocal
// ----------------------------------------------------------------------------
hkpCharacterMotion::Self * hkpCharacterMotion::setInertiaLocal(hkpCharacterMotion::Self *self, const hkMatrix3f::Self *a2)
{
  float v2; // xmm1_4
  hkpCharacterMotion::Self *result;
  __m128i v4;
  int v5;
  int v6;
  float v7; // xmm2_4

  v2 = 0.0;
  result = self;
g4_m128_raw(v4) = *(unsigned int *)a2;
  *(float *)g4_m128_ptr<int32_t>(v4) = fmaxf(fmaxf(*(float *)g4_m128_ptr<int32_t>(v4), *((float *)a2 + 5)), *((float *)a2 + 10));
  if ( *(float *)g4_m128_ptr<int32_t>(v4) != 0.0 )
  {
    v5 = _mm_cvtsi128_si32(v4);
    v6 = (2130706432 - v5) & ((v5 ^ (v5 + 2139095040)) >> 31);
    v7 = (float)(2.0
               - (float)(*(float *)g4_m128_ptr<int32_t>(v4)
                       * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v4) * *(float *)&v6)) * *(float *)&v6)))
       * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v4) * *(float *)&v6)) * *(float *)&v6);
    v2 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v4) * v7)) * v7;
  }
  *((float *)self + 48) = v2;
  *((float *)self + 49) = v2;
  *((float *)self + 50) = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::Destroy  (binary VA: 0x1752750)
// Original: hkpCharacterMotion::~hkpCharacterMotion
// ----------------------------------------------------------------------------
void hkpCharacterMotion::Destroy(hkpCharacterMotion::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::Destroy_ea1752770  (binary VA: 0x1752770)
// Original: hkpCharacterMotion::~hkpCharacterMotion
// ----------------------------------------------------------------------------
void hkpCharacterMotion::Destroy_ea1752770(hkpCharacterMotion::Self *self)
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
// Function: hkpCharacterMotion::applyAngularImpulse  (binary VA: 0x17527d0)
// Original: hkpCharacterMotion::applyAngularImpulse
// ----------------------------------------------------------------------------
hkpCharacterMotion::Self * hkpCharacterMotion::applyAngularImpulse(hkpCharacterMotion::Self *self, const hkVector4f::Self *a2)
{
  *((float *)self + 56) = (float)(*((float *)self + 48) * *(float *)a2) + *((float *)self + 56);
  *((float *)self + 57) = (float)(*((float *)self + 49) * *((float *)a2 + 1)) + *((float *)self + 57);
  *((float *)self + 58) = (float)(*((float *)self + 50) * *((float *)a2 + 2)) + *((float *)self + 58);
  *((float *)self + 59) = (float)(*((float *)self + 51) * *((float *)a2 + 3)) + *((float *)self + 59);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::getInertiaWorld  (binary VA: 0x1752850)
// Original: hkpCharacterMotion::getInertiaWorld
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpCharacterMotion::getInertiaWorld(hkpCharacterMotion::Self *self, hkMatrix3f::Self *a2)
{
  __m128i v3;
  int v4;
  int v5;
  float v6; // xmm0_4
  float v7; // xmm1_4

g4_m128_raw(v3) = *((unsigned int *)self + 48);
  v4 = _mm_cvtsi128_si32(v3);
  v5 = (2130706432 - v4) & ((v4 ^ (v4 + 2139095040)) >> 31);
  v6 = (float)(2.0
             - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                     * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v5)) * *(float *)&v5)))
     * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v5)) * *(float *)&v5);
  v7 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * v6)) * v6;
  *((uint32_t *)a2 + 1) = 0;
  *((uint32_t *)a2 + 2) = 0;
  *((uint32_t *)a2 + 3) = 0;
  *((uint32_t *)a2 + 4) = 0;
  *((uint32_t *)a2 + 6) = 0;
  *((uint32_t *)a2 + 7) = 0;
  *((uint32_t *)a2 + 8) = 0;
  *((uint32_t *)a2 + 9) = 0;
  *((uint32_t *)a2 + 11) = 0;
  *(float *)a2 = v7;
  *((float *)a2 + 5) = v7;
  *((float *)a2 + 10) = v7;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::getInertiaLocal  (binary VA: 0x1752910)
// Original: hkpCharacterMotion::getInertiaLocal
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpCharacterMotion::getInertiaLocal(hkpCharacterMotion::Self *self, hkMatrix3f::Self *a2)
{
  hkMatrix3f::Self *result;
  __m128i v3;
  int v4;
  int v5;
  float v6; // xmm0_4

  result = a2;
g4_m128_raw(v3) = *((unsigned int *)self + 48);
  if ( *(float *)g4_m128_ptr<int32_t>(v3) == 0.0 )
  {
    *((uint32_t *)a2 + 1) = 0;
    *(uint32_t *)a2 = 1602224112;
    *((uint32_t *)a2 + 2) = 0;
    *((uint32_t *)a2 + 5) = 1602224112;
    *((uint32_t *)a2 + 3) = 0;
    *((uint32_t *)a2 + 10) = 1602224112;
    *((uint32_t *)a2 + 4) = 0;
    *((uint32_t *)a2 + 6) = 0;
    *((uint32_t *)a2 + 7) = 0;
    *((uint32_t *)a2 + 8) = 0;
    *((uint32_t *)a2 + 9) = 0;
    *((uint32_t *)a2 + 11) = 0;
  }
  else
  {
    v4 = _mm_cvtsi128_si32(v3);
    v5 = (2130706432 - v4) & ((v4 ^ (v4 + 2139095040)) >> 31);
    *((uint32_t *)a2 + 1) = 0;
    *((uint32_t *)a2 + 2) = 0;
    *((uint32_t *)a2 + 3) = 0;
    *((uint32_t *)a2 + 4) = 0;
    *((uint32_t *)a2 + 6) = 0;
    *((uint32_t *)a2 + 7) = 0;
    *((uint32_t *)a2 + 8) = 0;
    *((uint32_t *)a2 + 9) = 0;
    *((uint32_t *)a2 + 11) = 0;
    v6 = (float)(2.0
               - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                       * (float)((float)(2.0
                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v5))
                                                       * *(float *)&v5)))
                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v5)) * *(float *)&v5))))
       * (float)((float)(2.0
                       - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v5)) * *(float *)&v5)))
               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v5)) * *(float *)&v5));
    *(float *)a2 = v6;
    *((float *)a2 + 5) = v6;
    *((float *)a2 + 10) = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterMotion::staticClass  (binary VA: 0x175f670)
// Original: hkpCharacterMotion::staticClass
// ----------------------------------------------------------------------------
void * hkpCharacterMotion::staticClass()
{
  return &hkpCharacterMotionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterControllerCinfo::staticClass  (binary VA: 0x1823ad0)
// Original: hkpCharacterControllerCinfo::staticClass
// ----------------------------------------------------------------------------
void * hkpCharacterControllerCinfo::staticClass()
{
  return &hkpCharacterControllerCinfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBodyListener::Destroy  (binary VA: 0x182e420)
// Original: hkpCharacterRigidBodyListener::~hkpCharacterRigidBodyListener
// ----------------------------------------------------------------------------
void hkpCharacterRigidBodyListener::Destroy(hkpCharacterRigidBodyListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBodyListener::processActualPoints  (binary VA: 0x182e440)
// Original: hkpCharacterRigidBodyListener::processActualPoints
// ----------------------------------------------------------------------------
int hkpCharacterRigidBodyListener::processActualPoints(int a1, int a2, int a3, int a4, int a5, int a6)
{
  G4_VCALL<void>(a1, 28, a3, a4, a5, a6);
  G4_VCALL<void>(a1, 32, a2, a3, a4, a5, a6);
  return G4_VCALL<int>(a1, 36, a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBodyListener::Destroy_ea182e4d0  (binary VA: 0x182e4d0)
// Original: hkpCharacterRigidBodyListener::~hkpCharacterRigidBodyListener
// ----------------------------------------------------------------------------
void hkpCharacterRigidBodyListener::Destroy_ea182e4d0(hkpCharacterRigidBodyListener::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBodyListener::unweldContactPoints  (binary VA: 0x182e530)
// Original: hkpCharacterRigidBodyListener::unweldContactPoints
// ----------------------------------------------------------------------------
int hkpCharacterRigidBodyListener::unweldContactPoints(int a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int result;
  int v7;
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm6_4
  __m128i v11;
  __m128i v12;
  int v13; // xmm1_4
  float v14; // xmm1_4
  int v15;
  int v16;
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm6_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  __m128i v26;
  float v27; // xmm1_4
  float v28; // xmm5_4
  float v29; // xmm1_4
  __m128i v30;
  int v31;
  float v32; // xmm0_4
  float v33; // xmm7_4
  float v34; // xmm3_4
  float v35; // xmm6_4
  float v36; // xmm5_4
  float v37; // xmm4_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  int v43;
  float v44; // xmm2_4
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float *v60;
  int v61;
  int v62;
  float v63;
  int v64;
  int v65;

  v5 = *(uint32_t *)(a2 + 16);
  result = (int)(uintptr_t)(&g_vectorfConstants);
  if ( *(uint32_t *)(*(uint32_t *)a3 + 16) == v5 + 16 )
    v57 = 1.0;
  else
    v57 = -1.0;
  v7 = *(uint32_t *)(v5 + 16);
  if ( *(uint8_t *)(v7 + 8) == 4 )
  {
    v8 = *(float *)(v7 + 32);
    v9 = *(float *)(v7 + 36);
    v10 = *(float *)(v7 + 40);
g4_m128_raw(v11) = *(unsigned int *)(v7 + 48);
    *(float *)g4_m128_ptr<int32_t>(v11) = (float)(*(float *)g4_m128_ptr<int32_t>(v11) + v8) * 0.5;
    v56 = *(float *)g4_m128_ptr<int32_t>(v11);
    v55 = (float)(*(float *)(v7 + 52) + v9) * 0.5;
    v54 = 0.5 * (float)(*(float *)(v7 + 56) + v10);
    v12 = v11;
    *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) - v8)
                                            * (float)(*(float *)g4_m128_ptr<int32_t>(v11) - v8))
                                    + (float)((float)(v55 - v9) * (float)(v55 - v9)))
                            + (float)((float)(v54 - v10) * (float)(v54 - v10));
    if ( *(float *)g4_m128_ptr<int32_t>(v12) <= 0.0 )
    {
      v17 = 0.0;
      v50 = 0.0;
    }
    else
    {
      v13 = ((_mm_cvtsi128_si32(v12) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v12) >> 1));
      v14 = (float)(1.5
                  * (float)((float)(1.5 * *(float *)&v13)
                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * *(float *)&v13)
                                  * (float)(*(float *)&v13 * *(float *)&v13))))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12))
                          * (float)((float)(1.5 * *(float *)&v13)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * *(float *)&v13)
                                          * (float)(*(float *)&v13 * *(float *)&v13))))
                  * (float)((float)((float)(1.5 * *(float *)&v13)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * *(float *)&v13)
                                          * (float)(*(float *)&v13 * *(float *)&v13)))
                          * (float)((float)(1.5 * *(float *)&v13)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * *(float *)&v13)
                                          * (float)(*(float *)&v13 * *(float *)&v13)))));
      *(float *)g4_m128_ptr<int32_t>(v12) = *(float *)g4_m128_ptr<int32_t>(v12)
                              * (float)((float)(1.5 * v14)
                                      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * v14)
                                              * (float)(v14 * v14)));
      v15 = _mm_cvtsi128_si32(v12);
      v50 = *(float *)g4_m128_ptr<int32_t>(v12);
      v16 = (2130706432 - v15) & ((v15 ^ (v15 + 2139095040)) >> 31);
      v17 = (float)(2.0
                  - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                          * (float)((float)(2.0
                                          - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                  * (float)((float)(2.0
                                                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v16))
                                                          * *(float *)&v16)))
                                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v16))
                                          * *(float *)&v16))))
          * (float)((float)(2.0
                          - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v16))
                                          * *(float *)&v16)))
                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v16)) * *(float *)&v16));
    }
    v18 = v8 - *(float *)g4_m128_ptr<int32_t>(v11);
    v19 = v9 - v55;
    v20 = v10 - v54;
    v49 = v18 * v17;
    v48 = v19 * v17;
    v47 = v20 * v17;
    result = a5[1];
    v51 = fabs(
            (float)((float)(*(float *)(a2 + 32) * v18) + (float)(*(float *)(a2 + 36) * v19))
          + (float)(*(float *)(a2 + 40) * v20))
        + (float)(*(float *)(v7 + 16) * *(float *)(a2 + 48));
    v61 = 2 * result;
    if ( result > 0 )
    {
      v65 = 0;
      v60 = *(float **)(v5 + 16);
      do
      {
        v62 = a4;
        v31 = G4_VCALL<int>(a4, 52, *(uint16_t *)(*a5 + v65));
        a4 = v62;
        if ( v31 != 0 && *(float *)(v31 + 28) > (float)-v60[4] && (*(uint32_t *)(v31 + 12) & 0xC0FFFFFF) != 0x8DF4A7 )
        {
          v32 = *(float *)v31 - *(float *)(v5 + 288);
          v33 = *(float *)(v31 + 4) - *(float *)(v5 + 292);
          v34 = *(float *)(v31 + 8) - *(float *)(v5 + 296);
          v53 = *(float *)(v5 + 240);
          v35 = *(float *)(v5 + 256);
          v52 = *(float *)(v5 + 260);
          v63 = *(float *)(v5 + 248);
          v59 = *(float *)(v5 + 264);
          v36 = *(float *)(v5 + 272);
          v37 = *(float *)(v5 + 276);
          v58 = *(float *)(v5 + 280);
          v38 = (float)((float)((float)(v53 * v32) + (float)(*(float *)(v5 + 244) * v33)) + (float)(v63 * v34)) - v56;
          v39 = (float)((float)((float)(v32 * v35) + (float)(v52 * v33)) + (float)(v59 * v34)) - v55;
          v40 = (float)((float)((float)(v32 * v36) + (float)(v33 * v37)) + (float)(v34 * v58)) - v54;
          if ( v51 > fabs(
                       (float)((float)(*(float *)(a2 + 32) * v38) + (float)(*(float *)(a2 + 36) * v39))
                     + (float)(*(float *)(a2 + 40) * v40)) )
          {
            v41 = (float)((float)(v38 * v49) + (float)(v39 * v48)) + (float)(v40 * v47);
            if ( v41 > v50 )
            {
              v22 = v60[8];
              v23 = v60[9];
              v24 = v60[10];
            }
            else if ( (float)-v50 <= v41 )
            {
              v22 = (float)(v49 * v41) + v56;
              v23 = (float)(v48 * v41) + v55;
              v24 = (float)(v41 * v47) + v54;
            }
            else
            {
              v22 = v60[12];
              v23 = v60[13];
              v24 = v60[14];
            }
g4_m128_raw(v26) = LODWORD(v53);
            *(float *)g4_m128_ptr<int32_t>(v26) = (float)((float)(v53 * v22) + (float)(v35 * v23)) + (float)(v36 * v24);
            v25 = (float)((float)(*(float *)(v5 + 244) * v22) + (float)(v52 * v23)) + (float)(v37 * v24);
            *(float *)g4_m128_ptr<int32_t>(v26) = (float)(*(float *)g4_m128_ptr<int32_t>(v26) + *(float *)(v5 + 288)) - *(float *)v31;
            v27 = (float)((float)((float)(v22 * v63) + (float)(v23 * v59)) + (float)(v24 * v58)) + *(float *)(v5 + 296);
            v30 = v26;
            v28 = (float)(v25 + *(float *)(v5 + 292)) - *(float *)(v31 + 4);
            v29 = v27 - *(float *)(v31 + 8);
            *(float *)g4_m128_ptr<int32_t>(v30) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)g4_m128_ptr<int32_t>(v26))
                                            + (float)(v28 * v28))
                                    + (float)(v29 * v29);
            if ( *(float *)g4_m128_ptr<int32_t>(v30) > 0.0 )
            {
              v42 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v30);
              v64 = 1597463174 - (_mm_cvtsi128_si32(v30) >> 1);
              v43 = (_mm_cvtsi128_si32(v30) + 2139095040) >> 31;
              v44 = (float)(1.5 * COERCE_FLOAT(v43 & v64))
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v30)) * COERCE_FLOAT(v43 & v64))
                          * (float)(COERCE_FLOAT(v43 & v64) * COERCE_FLOAT(v43 & v64)));
              v45 = (float)(1.5 * v44)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v30)) * v44) * (float)(v44 * v44));
              v46 = (float)(1.5 * v45) - (float)((float)(v42 * v45) * (float)(v45 * v45));
              *(float *)(v31 + 16) = (float)(*(float *)g4_m128_ptr<int32_t>(v26) * v46) * v57;
              *(float *)(v31 + 20) = (float)(v28 * v46) * v57;
              *(float *)(v31 + 24) = (float)(v29 * v46) * v57;
            }
          }
        }
        v65 += 2;
        result = v61;
      }
      while ( v65 != v61 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBodyListener::considerCollisionEntryForSlope  (binary VA: 0x182ebc0)
// Original: hkpCharacterRigidBodyListener::considerCollisionEntryForSlope
// ----------------------------------------------------------------------------
int hkpCharacterRigidBodyListener::considerCollisionEntryForSlope(int a1, int a2, int a3, int a4, int a5, hkMemoryAllocator::Self *a6)
{
  int v6;
  int v7;
  int result;
  int v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  __m128i m128_i128;
  float v17; // xmm0_4
  int v18; // xmm5_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  __m128 v21;
  uint64_t v22; // xmm3_8
  uint64_t v23; // xmm3_8^8
  int16_t v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  float v31;
  int v32;
  uint16_t *v33;
  int16_t v34;
  int16_t v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;

  v6 = *(uint32_t *)(*(uint32_t *)a4 + 16);
  v29 = *(uint32_t *)(*(uint32_t *)a4 + 20);
  v7 = 0;
  v30 = v6;
  if ( *(uint8_t *)(v6 + 24) == 1 )
    v7 = v6 + *(char *)(v6 + 16);
  if ( *(uint32_t *)(a3 + 16) == v7 )
    v31 = 1.0;
  else
    v31 = -1.0;
  result = *((uint32_t *)a6 + 1);
  v32 = 2 * result;
  v9 = 0;
  if ( result > 0 )
  {
    do
    {
      while ( 1 )
      {
        v33 = (uint16_t *)(*(uint32_t *)a6 + v9);
        result = G4_VCALL<int>(a5, 48, *v33);
        if ( (*(uint8_t *)(result + 15) & 8) == 0 )
        {
          result = G4_VCALL<int>(a5, 52, *v33);
g4_m128_raw(v10) = *(unsigned int *)(a3 + 32);
g4_m128_raw(v11) = *(unsigned int *)(a3 + 36);
g4_m128_raw(v12) = *(unsigned int *)(a3 + 40);
          v13 = (float)((float)(*(float *)(result + 16) *g4_m128_lane<float>(v10, 0))
                      + (float)(*(float *)(result + 20) *g4_m128_lane<float>(v11, 0)))
              + (float)(*(float *)(result + 24) *g4_m128_lane<float>(v12, 0));
          if ( (float)(v31 * v13) > 0.01f && *(float *)(a3 + 52) > (float)(v31 * v13) )
          {
            v14 = 0.0;
            v36 = *(uint32_t *)result;
            v37 = *(uint32_t *)(result + 4);
            v15 = -v13;
            v38 = *(uint32_t *)(result + 8);
g4_m128_lane<float>(v10, 0) = (float)(g4_m128_lane<float>(v10, 0) * v15) + *(float *)(result + 16);
g4_m128_lane<float>(v11, 0) = (float)(g4_m128_lane<float>(v11, 0) * v15) + *(float *)(result + 20);
g4_m128_lane<float>(v12, 0) = (float)(g4_m128_lane<float>(v12, 0) * v15) + *(float *)(result + 24);
            m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v10));
            *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v10, 0) *g4_m128_lane<float>(v10, 0))
                                                  + (float)(g4_m128_lane<float>(v11, 0) *g4_m128_lane<float>(v11, 0)))
                                          + (float)(g4_m128_lane<float>(v12, 0) *g4_m128_lane<float>(v12, 0));
            if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) > 0.0 )
            {
              v17 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
              v18 = ((_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31)
                  & (1597463174 - (_mm_cvtsi128_si32(m128_i128) >> 1));
              v19 = (float)(*(float *)&v18 * 1.5)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * *(float *)&v18)
                          * (float)(*(float *)&v18 * *(float *)&v18));
              v20 = (float)(v19 * 1.5)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * v19) * (float)(v19 * v19));
              v14 = (float)(1.5 * v20) - (float)((float)(v17 * v20) * (float)(v20 * v20));
            }
g4_m128_raw(v21) = *(unsigned int *)(result + 28);
g4_m128_lane<float>(v10, 0) =g4_m128_lane<float>(v10, 0) * v14;
g4_m128_lane<float>(v11, 0) =g4_m128_lane<float>(v11, 0) * v14;
g4_m128_lane<float>(v12, 0) =g4_m128_lane<float>(v12, 0) * v14;
g4_m128_lane<float>(v21, 0) = fminf(g4_m128_lane<float>(v21, 0), 0.0);
            v22 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v10, v11), 0);
            v23 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v12, v21), 0);
            v28 = *(uint32_t *)(a2 + 112);
            result = G4_VCALL<int>(a5, 20, v30, v29);
            v24 = result;
            if ( (uint16_t)result != 0xFFFF )
              break;
          }
        }
        v9 += 2;
        if ( v9 == v32 )
          return result;
      }
      v25 = *(uint32_t *)(a3 + 104);
      if ( v25 == (*(uint32_t *)(a3 + 108) & 0x3FFFFFFF) )
      {
        v34 = v24;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(a3 + 100),
          48,
          v28);
        v24 = v34;
        v25 = *(uint32_t *)(a3 + 104);
      }
      v26 = *(uint32_t *)(a3 + 100) + 48 * v25;
      *(uint32_t *)v26 = v36;
      *(uint32_t *)(v26 + 4) = v37;
      *(uint32_t *)(v26 + 8) = v38;
      *(uint32_t *)(v26 + 12) = 1066267815;
      *(uint64_t *)(v26 + 16) = v22;
      *(uint64_t *)(v26 + 24) = v23;
      *(uint32_t *)(v26 + 32) = a5;
      *(uint32_t *)(v26 + 36) = v39;
      *(uint32_t *)(v26 + 40) = v40;
      *(uint32_t *)(v26 + 44) = v41;
      ++*(uint32_t *)(a3 + 104);
      v27 = *((uint32_t *)a6 + 1);
      if ( v27 == (*((uint32_t *)a6 + 2) & 0x3FFFFFFF) )
      {
        v35 = v24;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a6, 2, v28);
        v24 = v35;
        v27 = *((uint32_t *)a6 + 1);
      }
      v9 += 2;
      *(uint16_t *)(*(uint32_t *)a6 + 2 * v27) = v24;
      result = (int)(uintptr_t)(a6);
      ++*((uint32_t *)a6 + 1);
    }
    while ( v9 != v32 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBodyListener::considerCollisionEntryForMassModification  (binary VA: 0x182efd0)
// Original: hkpCharacterRigidBodyListener::considerCollisionEntryForMassModification
// ----------------------------------------------------------------------------
int hkpCharacterRigidBodyListener::considerCollisionEntryForMassModification(__m128i a1, int a2, int a3, int a4, int a5, hkpResponseModifier::Self *a6, uint32_t *a7)
{
  int v7;
  int v8;
  int result;
  hkpDynamicsContactMgr::Self *v10;
  __m128i v11;
  int v12;
  int v13;
  float v14; // xmm1_4
  float v15; // xmm0_4
  __m128i v16;
  float *v17;
  __m128i v18;
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  __m128i v22;
  int v23;
  int v24;
  float v25; // xmm2_4
  __m128i v26;
  float v27; // xmm1_4
  __m128i v28;
  float v29; // xmm2_4
  int v30;
  int v31;
  float v32; // xmm2_4
  int v33; // xmm3_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  int v36;
  int v37;
  float v38; // xmm6_4
  typedef float _g4_t_v39;
  typedef int _g4_t_v40;
  typedef float _g4_t_v41[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v39)) > _g4_s0 ? (8u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v40)) > _g4_s1 ? (16u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v41)) > _g4_s2 ? (32u + sizeof(_g4_t_v41)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);

  v7 = *(uint32_t *)(*(uint32_t *)a5 + 16);
  v8 = *(uint32_t *)(*(uint32_t *)a5 + 20);
  if ( *(uint8_t *)(v7 + 24) == 1 )
  {
    v10 = (hkpDynamicsContactMgr::Self *)(*(char *)(v7 + 16) + v7);
    result = *(uint32_t *)(a4 + 16);
    if ( v10 != (hkpDynamicsContactMgr::Self *)result )
      goto LABEL_5;
  }
  else
  {
    result = *(uint32_t *)(a4 + 16);
    if ( result != 0 )
    {
      v10 = nullptr;
LABEL_5:
      v39 = 1.0;
      goto LABEL_6;
    }
  }
  v10 = nullptr;
  if ( *(uint8_t *)(v8 + 24) == 1 )
    v10 = (hkpDynamicsContactMgr::Self *)(*(char *)(v8 + 16) + v8);
  v39 = -1.0;
LABEL_6:
  if ( (uint8_t)(*((uint8_t *)v10 + 232) - 4) > 1u && *((uint8_t *)v10 + 232) != 7 )
  {
g4_m128_raw(v11) = *(unsigned int *)(a4 + 96);
    if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.0 )
    {
      return hkpResponseModifier::setInvMassScalingForContact(
               a1,
               a6,
               v10,
               *(hkpRigidBody::Self **)(result + 200),
               (hkpConstraintOwner::Self *)&flt_1D12E20);
    }
    else
    {
      v12 = a7[1];
      if ( v12 <= 0 )
      {
        v14 = 0.0;
        v15 = 0.0;
g4_m128_raw(v16) = 0;
      }
      else
      {
        v13 = 0;
        v14 = 0.0;
        v40 = 2 * v12;
        v15 = 0.0;
g4_m128_lane<int32_t>(v16, 0) = 0;
        do
        {
          v17 = (float *)G4_VCALL<int>(a6, 52, *(uint16_t *)(*a7 + v13));
g4_m128_raw(v16) =g4_m128_lane<uint32_t>(v16, 0);
          v13 += 2;
          *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) + v17[4];
          v14 = v14 + v17[5];
          v15 = v15 + v17[6];
        }
        while ( v13 != v40 );
g4_m128_raw(v11) = *(unsigned int *)(a4 + 96);
        result = *(uint32_t *)(a4 + 16);
      }
g4_m128_raw(v18) = *(unsigned int *)(result + 428);
      *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) * v39;
      v19 = v14 * v39;
      v20 = v15 * v39;
      if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v18)) || (v21 = 0.0, *(float *)g4_m128_ptr<int32_t>(v18) != 0.0) )
      {
        v36 = _mm_cvtsi128_si32(v18);
        v37 = (2130706432 - v36) & ((v36 ^ (v36 + 2139095040)) >> 31);
        v38 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)&v37)) * *(float *)&v37)
            * (float)(2.0
                    - (float)(*(float *)g4_m128_ptr<int32_t>(v18)
                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)&v37)) * *(float *)&v37)));
        v21 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * v38)) * v38;
      }
      v22 = v16;
      *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)) + (float)(v19 * v19))
                              + (float)(v20 * v20);
      if ( *(float *)g4_m128_ptr<int32_t>(v22) <= 0.0 )
      {
g4_m128_raw(v28) = *(unsigned int *)(a4 + 80);
        v32 = 0.0;
        *(float *)g4_m128_ptr<int32_t>(v28) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v28) * *(float *)g4_m128_ptr<int32_t>(v28))
                                        + (float)(*(float *)(a4 + 84) * *(float *)(a4 + 84)))
                                + (float)(*(float *)(a4 + 88) * *(float *)(a4 + 88));
        if ( *(float *)g4_m128_ptr<int32_t>(v28) > 0.0 )
        {
          v33 = ((_mm_cvtsi128_si32(v28) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v28) >> 1));
          v34 = (float)(*(float *)&v33 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v28)) * *(float *)&v33)
                      * (float)(*(float *)&v33 * *(float *)&v33));
          v35 = (float)(v34 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v28)) * v34) * (float)(v34 * v34));
          v32 = (float)((float)(1.5 * v35)
                      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v28)) * v35) * (float)(v35 * v35)))
              * *(float *)g4_m128_ptr<int32_t>(v28);
        }
        v29 = v32 * v21;
      }
      else
      {
        v23 = _mm_cvtsi128_si32(v22);
        v24 = (2130706432 - v23) & ((v23 ^ (v23 + 2139095040)) >> 31);
        v25 = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)(a4 + 80)) + (float)(v19 * *(float *)(a4 + 84)))
                    + (float)(v20 * *(float *)(a4 + 88)))
            * v21;
g4_m128_raw(v26) = 0x40000000u;
        v27 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * *(float *)&v24)) * *(float *)&v24;
        *(float *)g4_m128_ptr<int32_t>(v26) = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * v27);
        v28 = v26;
        *(float *)g4_m128_ptr<int32_t>(v28) = *(float *)g4_m128_ptr<int32_t>(v26) * v27;
        v29 = v25
            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * (float)(*(float *)g4_m128_ptr<int32_t>(v26) * v27)))
                    * (float)(*(float *)g4_m128_ptr<int32_t>(v26) * v27));
      }
      v41[0] = 1.0;
      v41[1] = 1.0;
      v41[2] = 1.0;
      v41[3] = 1.0;
      if ( v29 > *(float *)g4_m128_ptr<int32_t>(v11) )
      {
        v30 = _mm_cvtsi128_si32(v11);
g4_m128_raw(v28) = 0x40000000u;
        v31 = (2130706432 - v30) & ((v30 ^ (v30 + 2139095040)) >> 31);
        *(float *)g4_m128_ptr<int32_t>(v28) = (float)((float)(2.0
                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v11)
                                                        * (float)((float)(2.0
                                                                        - (float)((float)((float)(2.0
                                                                                                - (float)(*(float *)&v31 * *(float *)g4_m128_ptr<int32_t>(v11)))
                                                                                        * *(float *)&v31)
                                                                                * *(float *)g4_m128_ptr<int32_t>(v11)))
                                                                * (float)((float)(2.0
                                                                                - (float)(*(float *)&v31
                                                                                        * *(float *)g4_m128_ptr<int32_t>(v11)))
                                                                        * *(float *)&v31))))
                                        * (float)((float)(2.0
                                                        - (float)((float)((float)(2.0
                                                                                - (float)(*(float *)&v31
                                                                                        * *(float *)g4_m128_ptr<int32_t>(v11)))
                                                                        * *(float *)&v31)
                                                                * *(float *)g4_m128_ptr<int32_t>(v11)))
                                                * (float)((float)(2.0 - (float)(*(float *)&v31 * *(float *)g4_m128_ptr<int32_t>(v11)))
                                                        * *(float *)&v31)))
                                * v29;
        v41[3] = *(float *)g4_m128_ptr<int32_t>(v28);
      }
      return hkpResponseModifier::setInvMassScalingForContact(
               v28,
               a6,
               (hkpDynamicsContactMgr::Self *)result,
               *(hkpRigidBody::Self **)(result + 200),
               (hkpConstraintOwner::Self *)v41);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBodyListener::discardVerticalPoints  (binary VA: 0x182f420)
// Original: hkpCharacterRigidBodyListener::discardVerticalPoints
// ----------------------------------------------------------------------------
hkpCharacterRigidBody::Self * hkpCharacterRigidBodyListener::discardVerticalPoints(hkpCharacterRigidBodyListener::Self *self, hkpCharacterRigidBody::Self *a2)
{
  hkpCharacterRigidBody::Self *result;
  uint32_t *v3;
  int v4;
  float *v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  bool v10;
  bool v11; // pf
  float v12; // xmm0_4
  int v13;
  int v14;
  int v15;
  float v16; // xmm0_4
  int v17;
  int v18;
  int v19;
  int *v20;
  uint32_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  typedef int *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v29)) > _g4_s0 ? (8u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v30)) > _g4_s1 ? (12u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v31)) > _g4_s2 ? (16u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v32)) > _g4_s3 ? (20u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v33)) > _g4_s4 ? (24u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v34)) > _g4_s5 ? (28u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v35)) > _g4_s6 ? (32u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v36)) > _g4_s7 ? (36u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v37)) > _g4_s8 ? (40u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v38)) > _g4_s9 ? (44u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v39)) > _g4_s10 ? (48u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v40)) > _g4_s11 ? (52u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v41)) > _g4_s12 ? (56u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v42)) > _g4_s13 ? (60u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v43)) > _g4_s14 ? (64u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v44)) > _g4_s15 ? (68u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v45)) > _g4_s16 ? (72u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v46)) > _g4_s17 ? (76u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v47)) > _g4_s18 ? (80u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v48)) > _g4_s19 ? (84u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v49)) > _g4_s20 ? (88u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v50)) > _g4_s21 ? (92u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v51)) > _g4_s22 ? (96u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v52)) > _g4_s23 ? (100u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v53)) > _g4_s24 ? (104u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v54)) > _g4_s25 ? (108u + sizeof(_g4_t_v54)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 84u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 88u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 92u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 96u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 100u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 104u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 108u);

  result = a2;
  if ( *((uint32_t *)a2 + 26) != 0 )
  {
    v43 = 0;
    v44 = 0;
    v45 = 0x80000000;
    v42 = *((uint32_t *)a2 + 4);
    hkpLinkedCollidable::getCollisionEntriesSorted(v42 + 16, (int)(uintptr_t)(&v43), v29);
    v34 = 0;
    v33 = v44;
    if ( v44 > 0 )
    {
      do
      {
        while ( 1 )
        {
          v3 = *(uint32_t **)(*(uint32_t *)(v43 + 8 * v34) + 8);
          v40 = v3;
          if ( v3[2] == 0 )
          {
            v47 = 0;
            v48 = 0;
            v49 = 0x80000000;
            G4_VCALL<void>(v3, 56, &v47);
            v42 = *((uint32_t *)a2 + 26);
            v39 = v42 - 1;
            if ( v42 - 1 >= 0 )
            {
              v38 = 48 * (v42 - 1);
              do
              {
                v4 = *((uint32_t *)a2 + 25) + v38;
                if ( v40 == *(uint32_t **)(v4 + 32) )
                {
                  v37 = v48;
                  if ( v48 > 0 )
                  {
                    v42 = 0;
                    while ( 1 )
                    {
                      v35 = 2 * v42;
                      v36 = *(uint16_t *)(v47 + 2 * v42);
                      v5 = (float *)G4_VCALL<int>(v40, 52, v36);
                      v6 = !__builtin_isunordered(*v5, *(float *)v4);
                      if ( *v5 != *(float *)v4 )
                        v6 = 0;
                      if ( v5[1] == *(float *)(v4 + 4) )
                        v6 |= 2u;
                      if ( v5[2] == *(float *)(v4 + 8) )
                      {
                        v7 = 12;
                        v8 = 4;
                      }
                      else
                      {
                        v7 = 8;
                        v8 = 0;
                      }
                      v9 = v5[3];
                      v11 = __builtin_isunordered(v9, *(float *)(v4 + 12));
                      v10 = v9 == *(float *)(v4 + 12);
                      v12 = v5[4];
                      if ( !v10 )
                        v7 = v8;
                      if ( !v11 )
                        v8 = v7;
                      v41 = v6 | v8;
                      v13 = !__builtin_isunordered(v12, *(float *)(v4 + 16));
                      if ( v12 != *(float *)(v4 + 16) )
                        v13 = 0;
                      if ( v5[5] == *(float *)(v4 + 20) )
                        v13 |= 2u;
                      if ( v5[6] == *(float *)(v4 + 24) )
                      {
                        v14 = 12;
                        v15 = 4;
                      }
                      else
                      {
                        v14 = 8;
                        v15 = 0;
                      }
                      v16 = v5[7];
                      if ( v16 != *(float *)(v4 + 28) )
                        v14 = v15;
                      if ( !__builtin_isunordered(v16, *(float *)(v4 + 28)) )
                        v15 = v14;
                      if ( (v41 & (v13 | v15)) == 0xF )
                        break;
                      if ( ++v42 == v37 )
                        goto LABEL_9;
                    }
                    v17 = *((uint32_t *)v5 + 2);
                    v5[3] = 1.9544586f;
                    v53 = v17;
                    v18 = *((uint32_t *)v5 + 1);
                    v51 = *v5;
                    v52 = v18;
                    v54 = 1073359795;
                    G4_VCALL<void>(v40, 28, v36, *(uint32_t *)(*((uint32_t *)a2 + 4) + 200));
                    v41 = *((uint32_t *)a2 + 26);
                    v19 = *((uint32_t *)a2 + 25);
                    *((uint32_t *)a2 + 26) = v41 - 1;
                    if ( v39 != v41 - 1 )
                    {
                      v20 = (int *)(48 * (v41 - 1) + v19);
                      v21 = (uint32_t *)(v38 + v19);
                      v22 = *v20;
                      v21[1] = v20[1];
                      *v21 = v22;
                      v23 = v20[2];
                      v21[3] = v20[3];
                      v21[2] = v23;
                      v24 = v20[4];
                      v21[5] = v20[5];
                      v21[4] = v24;
                      v25 = v20[6];
                      v21[7] = v20[7];
                      v21[6] = v25;
                      v26 = v20[8];
                      v21[9] = v20[9];
                      v21[8] = v26;
                      v27 = v20[10];
                      v21[11] = v20[11];
                      v21[10] = v27;
                    }
                    v28 = --v48;
                    if ( v48 != v42 )
                      *(uint16_t *)(v47 + 2 * v42) = *(uint16_t *)(v47 + 2 * v28);
                  }
                }
LABEL_9:
                --v39;
                v38 -= 48;
              }
              while ( v39 != -1 );
            }
            v48 = 0;
            if ( v49 >= 0 )
              break;
          }
          if ( ++v34 == v33 )
            goto LABEL_42;
        }
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v47,
          2 * (v49 & 0x3FFFFFFF));
        ++v34;
      }
      while ( v34 != v33 );
    }
LABEL_42:
    v44 = 0;
    *((uint32_t *)a2 + 26) = 0;
    result = (hkpCharacterRigidBody::Self *)v45;
    if ( v45 >= 0 )
      return (hkpCharacterRigidBody::Self *)(*(int (**)(uint32_t *, int, int, int, int, int, int, int, int, int, int, int, int, uint32_t *, int, int, int, int, int, int, int, int, int, int, float, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                                        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                                        v43,
                                        8 * v45,
                                        v30,
                                        v31,
                                        v32,
                                        v33,
                                        v34,
                                        v35,
                                        v36,
                                        v37,
                                        v38,
                                        v39,
                                        v40,
                                        v41,
                                        v42,
                                        v43,
                                        v44,
                                        v45,
                                        v46,
                                        v47,
                                        v48,
                                        v49,
                                        v50,
                                        COERCE_FLOAT(LODWORD(v51)),
                                        v52,
                                        v53,
                                        v54);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBodyListener::processActualPoints  (binary VA: 0x182f820)
// Original: hkpCharacterRigidBodyListener::processActualPoints
// ----------------------------------------------------------------------------
int hkpCharacterRigidBodyListener::processActualPoints(hkpCharacterRigidBodyListener::Self *self, hkpWorld::Self *a2, hkpCharacterRigidBody::Self *a3)
{
  int v3;
  uint32_t *v4;
  int result;
  typedef int *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v7)) > _g4_s1 ? (36u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v8)) > _g4_s2 ? (44u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v10)) > _g4_s4 ? (52u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v11)) > _g4_s5 ? (56u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v12)) > _g4_s6 ? (64u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v13)) > _g4_s7 ? (68u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v14)) > _g4_s8 ? (72u + sizeof(_g4_t_v14)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);

  v3 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0x80000000;
  hkpLinkedCollidable::getCollisionEntriesSorted(*((uint32_t *)a3 + 4) + 16, (int)(uintptr_t)(&v9), v6);
  v8 = v10;
  if ( v10 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *(uint32_t **)(*(uint32_t *)(v9 + 8 * v3) + 8);
        if ( v4[2] == 0 )
        {
          v12 = 0;
          v13 = 0;
          v14 = 0x80000000;
          v7 = v9 + 8 * v3;
          G4_VCALL<void>(v4, 56, &v12);
          if ( v13 != 0 )
            G4_VCALL<void>(self, 24, a2, a3, v7, v4, &v12);
          v13 = 0;
          if ( v14 >= 0 )
            break;
        }
        if ( ++v3 == v8 )
          goto LABEL_9;
      }
      ++v3;
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v12,
        2 * (v14 & 0x3FFFFFFF));
    }
    while ( v3 != v8 );
  }
LABEL_9:
  result = v11;
  v10 = 0;
  if ( v11 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v9,
             8 * v11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBodyListener::characterCallback  (binary VA: 0x182f990)
// Original: hkpCharacterRigidBodyListener::characterCallback
// ----------------------------------------------------------------------------
int hkpCharacterRigidBodyListener::characterCallback(hkpCharacterRigidBodyListener::Self *self, hkpWorld::Self *a2, hkpCharacterRigidBody::Self *a3)
{
  int *address;
  int v4;
  int *v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint64_t v8; // rax
  int v9;
  uint32_t *v10;
  bool v11;

  ++*((uint32_t *)a2 + 35);
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v5 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtcharacterCallback");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  hkpCharacterRigidBodyListener::discardVerticalPoints(self, a3);
  LODWORD(v8) = hkpCharacterRigidBodyListener::processActualPoints(self, a2, a3);
  v9 = *v5;
  v10 = *(uint32_t **)(*v5 + 4);
  if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v5 + 12) )
  {
    *v10 = (uint32_t)(uintptr_t)("Et");
    v8 = __rdtsc();
    v10[1] = v8;
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
  }
  v11 = (*((uint32_t *)a2 + 35))-- == 1;
  if ( v11 && *((uint8_t *)a2 + 148) == 0 )
  {
    if ( *((uint32_t *)a2 + 33) != 0 )
      LODWORD(v8) = hkpWorld::internal_executePendingOperations(a2);
    if ( *((uint32_t *)a2 + 39) == 1 && *((uint32_t *)a2 + 34) != 0 )
      LODWORD(v8) = hkpWorld::internal_executePendingBodyOperations(a2);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::postSimulationCallback  (binary VA: 0x1832220)
// Original: hkpCharacterRigidBody::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::postSimulationCallback(hkpCharacterRigidBody::Self *self, hkpWorld::Self *a2)
{
  return (*(int (**)(uint32_t, hkpWorld::Self *, hkpCharacterRigidBody::Self *))(**((uint32_t **)self + 5) + 20))(
           *((uint32_t *)self + 5),
           a2,
           self);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::entityAddedCallback  (binary VA: 0x1832260)
// Original: hkpCharacterRigidBody::entityAddedCallback
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::entityAddedCallback(hkpCharacterRigidBody::Self *self, hkpWorld::Self **a2)
{
  int result;
  int v3;
  int32_t v4; // kr00_4

  if ( *((uint16_t *)self + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)self + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)self + 1, v4, v3 | (uint16_t)(v4 + 1));
    }
    while ( v4 != result );
  }
  if ( *((uint32_t *)self + 5) != 0 )
    return hkpWorld::addWorldPostSimulationListener(a2[2], (hkpCharacterRigidBody::Self *)((char *)self + 12));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::checkSupport  (binary VA: 0x18322e0)
// Original: hkpCharacterRigidBody::checkSupport
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::checkSupport(int a1, int a2, int *a3)
{
  int *address;
  int v4;
  int *v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  uint32_t *v10;
  uint64_t v11; // rax
  int result;
  void (*v13)(int, uint32_t *, int, int *);
  void *retaddr;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[6];
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v16)) > _g4_s2 ? (40u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v5 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtcheckSupport");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v15[0] = 0;
  v15[1] = 0;
  v15[2] = 0x80000000;
  v8 = G4_VCALL<int>(a1, 24, a2, v15, v14);
  *a3 = v8;
  if ( v8 != 0 )
  {
    v13 = *(void (**)(int, uint32_t *, int, int *))(*(uint32_t *)a1 + 28);
    LOBYTE(v16) = 0;
    v13(a1, v15, v16, a3);
  }
  v9 = *v5;
  v10 = *(uint32_t **)(*v5 + 4);
  if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v5 + 12) )
  {
    *v10 = (uint32_t)(uintptr_t)("Et");
    v11 = __rdtsc();
    v10[1] = v11;
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
  }
  result = a2;
  if ( a2 >= 0 )
    return (*(int (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             retaddr,
             a2 << 6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::getGround  (binary VA: 0x18323e0)
// Original: hkpCharacterRigidBody::getGround
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::getGround(int a1, uint32_t *a2, char a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  float v9; // xmm5_4
  int v10;
  __m128i v11;
  __m128i v12;
  float v13;
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  int v18;
  float v19; // xmm4_4
  float v20; // xmm4_4
  int v21;
  int v22;
  float v23; // xmm4_4
  float v24; // xmm4_4
  int32_t v25; // xmm5_4
  __m128i v26;
  char v27; // di
  __m128i v28;
  int v29; // xmm6_4
  float v30;
  float v31; // xmm4_4
  float v32;
  float v33; // xmm5_4
  __m128i v34;
  int v35;
  int v36; // xmm4_4
  float v37; // xmm4_4
  float v38; // xmm7_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm7_4
  float v44; // xmm7_4
  uint64_t v45; // rax
  int v46;
  uint32_t *v47;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  int32_t v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  int *v62;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v62 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtgetGround");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  *(uint32_t *)(a4 + 32) = 0;
  *(uint32_t *)(a4 + 36) = 0;
  *(uint32_t *)(a4 + 40) = 0;
  *(uint32_t *)(a4 + 44) = 0;
  *(uint32_t *)(a4 + 16) = 0;
  *(uint32_t *)(a4 + 20) = 0;
  *(uint32_t *)(a4 + 24) = 0;
  *(uint32_t *)(a4 + 28) = 0;
  *(uint32_t *)(a4 + 48) = 0;
  *(uint8_t *)(a4 + 52) = 0;
  v8 = a2[1];
  if ( v8 <= 0 )
  {
    v16 = 0.0;
    v27 = 0;
    v30 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(0LL)));
    v14 = 0.0;
    v50 = 0.0;
    v15 = 0.0;
    v52 = 0.0;
g4_m128_raw(v34) = 0;
    v53 = 0.0;
    v32 = v30;
    v33 = 0.0;
    goto LABEL_15;
  }
  v9 = 0.0;
  v10 = 0;
g4_m128_raw(v11) = 0;
g4_m128_raw(v12) = 0;
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(0LL)));
  v14 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v51 = 0.0;
  while ( 1 )
  {
    v18 = *a2 + (v10 << 6);
    v17 = v17 + *(float *)(v18 + 48);
    *(float *)(a4 + 32) = v17;
    v16 = v16 + *(float *)(v18 + 52);
    *(float *)(a4 + 36) = v16;
    v15 = v15 + *(float *)(v18 + 56);
    *(float *)(a4 + 40) = v15;
    v14 = v14 + *(float *)(v18 + 60);
    *(float *)(a4 + 44) = v14;
    v19 = v13 + *(float *)(v18 + 16);
    *(float *)(a4 + 16) = v19;
    *(float *)g4_m128_ptr<int32_t>(v12) = *(float *)g4_m128_ptr<int32_t>(v12) + *(float *)(v18 + 20);
    v49 = v19;
    *(uint32_t *)(a4 + 20) =g4_m128_lane<int32_t>(v12, 0);
    *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) + *(float *)(v18 + 24);
    *(uint32_t *)(a4 + 24) =g4_m128_lane<int32_t>(v11, 0);
    v20 = v51 + *(float *)(v18 + 28);
    *(float *)(a4 + 28) = v20;
    v9 = v9 + *(float *)(v18 + 28);
    v51 = v20;
    *(float *)(a4 + 48) = v9;
    v21 = *(uint32_t *)(v18 + 32);
    v22 = *(uint8_t *)(v21 + 232);
    if ( v22 == 4 )
      break;
    if ( v22 != 5 )
    {
      *(uint8_t *)(a4 + 52) = 1;
      if ( a3 != 0 )
      {
        v61 = v16;
        v21 = *(uint32_t *)(v18 + 32);
        v60 = v17;
        goto LABEL_11;
      }
    }
    if ( ++v10 == v8 )
      goto LABEL_12;
LABEL_6:
    v13 = v49;
  }
  v61 = v16;
  v60 = v17;
LABEL_11:
  ++v10;
  v54 = *(float *)v18 - *(float *)(v21 + 320);
  v59 = *(float *)(v18 + 8) - *(float *)(v21 + 328);
  v57 = *(float *)(v18 + 4) - *(float *)(v21 + 324);
  v15 = (float)((float)((float)(v57 * *(float *)(v21 + 448)) - (float)(v54 * *(float *)(v21 + 452)))
              + *(float *)(v21 + 440))
      + v15;
  v16 = (float)((float)((float)(v54 * *(float *)(v21 + 456)) - (float)(v59 * *(float *)(v21 + 448)))
              + *(float *)(v21 + 436))
      + v61;
  v14 = (float)(*(float *)(v21 + 444) + 0.0) + v14;
  v23 = (float)((float)(v59 * *(float *)(v21 + 452)) - (float)(v57 * *(float *)(v21 + 456))) + *(float *)(v21 + 432);
  *(float *)(a4 + 36) = v16;
  *(float *)(a4 + 40) = v15;
  v24 = v23 + v60;
  *(float *)(a4 + 32) = v24;
  v17 = v24;
  *(float *)(a4 + 44) = v14;
  if ( v10 != v8 )
    goto LABEL_6;
LABEL_12:
  v58 = v9;
  v25 =g4_m128_lane<int32_t>(v12, 0);
  v28 = v12;
  v26 = v11;
  v55 = v25;
  v53 = v17;
  v27 = *(uint8_t *)(a4 + 52);
  *(float *)g4_m128_ptr<int32_t>(v28) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v28) * *(float *)g4_m128_ptr<int32_t>(v28)) + (float)(v49 * v49))
                          + (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)g4_m128_ptr<int32_t>(v26));
  if ( *(float *)g4_m128_ptr<int32_t>(v28) <= 0.0 )
  {
    v30 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v49))));
    v32 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
    v50 = v51;
    v52 = v58;
    v33 = 0.0;
  }
  else
  {
    v29 = ((_mm_cvtsi128_si32(v28) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v28) >> 1));
    v56 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v28);
    v30 = v49;
    v31 = (float)(1.5 * *(float *)&v29)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v28)) * *(float *)&v29)
                * (float)(*(float *)&v29 * *(float *)&v29));
    v32 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
    v50 = v51;
    v52 = v58;
    v33 = (float)(1.5 * (float)((float)(1.5 * v31) - (float)((float)(v56 * v31) * (float)(v31 * v31))))
        - (float)((float)(v56 * (float)((float)(1.5 * v31) - (float)((float)(v56 * v31) * (float)(v31 * v31))))
                * (float)((float)((float)(1.5 * v31) - (float)((float)(v56 * v31) * (float)(v31 * v31)))
                        * (float)((float)(1.5 * v31) - (float)((float)(v56 * v31) * (float)(v31 * v31)))));
  }
g4_m128_raw(v34) = (unsigned int)v55;
LABEL_15:
  *(float *)(a4 + 20) = *(float *)g4_m128_ptr<int32_t>(v34) * v33;
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)v8;
  *(float *)(a4 + 16) = v30 * v33;
  v35 = _mm_cvtsi128_si32(v34);
  *(float *)(a4 + 24) = v32 * v33;
  v36 = (2130706432 - v35) & ((v35 ^ (v35 + 2139095040)) >> 31);
  *(float *)(a4 + 28) = v33 * v50;
  v37 = (float)(2.0 - (float)((float)v8 * (float)((float)(2.0 - (float)((float)v8 * *(float *)&v36)) * *(float *)&v36)))
      * (float)((float)(2.0 - (float)((float)v8 * *(float *)&v36)) * *(float *)&v36);
  v38 = (float)(2.0 - (float)((float)v8 * v37)) * v37;
  v39 = v53 * v38;
  v40 = v16 * v38;
  v41 = v15 * v38;
  v42 = v14 * v38;
  v43 = v38 * v52;
  *(float *)(a4 + 32) = v39;
  *(float *)(a4 + 36) = v40;
  *(float *)(a4 + 40) = v41;
  *(float *)(a4 + 44) = v42;
  *(float *)(a4 + 48) = v43;
  if ( v27 != 0 )
    v44 = 0.01f;
  else
    v44 = v43 - *(float *)(a1 + 64);
  *(float *)(a4 + 48) = v44;
  LODWORD(v45) = (uint32_t)(uintptr_t)(v62);
  v46 = *v62;
  v47 = *(uint32_t **)(*v62 + 4);
  if ( (unsigned int)(uintptr_t)(v47) < *(uint32_t *)(*v62 + 12) )
  {
    *v47 = (uint32_t)(uintptr_t)("Et");
    v45 = __rdtsc();
    v47[1] = v45;
    *(uint32_t *)(v46 + 4) = (uint32_t)(uintptr_t)(v47 + 3);
  }
  return v45;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::entityRemovedCallback  (binary VA: 0x1832900)
// Original: hkpCharacterRigidBody::entityRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpCharacterRigidBody::entityRemovedCallback(hkpCharacterRigidBody::Self *self, hkpWorld::Self **a2)
{
  hkpWorld::Self *result;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett

  if ( *((uint32_t *)self + 5) != 0 )
    result = hkpWorld::removeWorldPostSimulationListener(a2[2], (hkpCharacterRigidBody::Self *)((char *)self + 12));
  if ( *((uint16_t *)self + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)self + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
      result = (hkpWorld::Self *)__sync_val_compare_and_swap((volatile int32_t *)self + 1, v6, v5);
    }
    while ( (hkpWorld::Self *)v6 != result );
    if ( (uint16_t)v5 == 0 )
      return (hkpWorld::Self *)G4_VCALL<int>(self, 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::Destroy  (binary VA: 0x1832990)
// Original: hkpCharacterRigidBody::~hkpCharacterRigidBody
// ----------------------------------------------------------------------------
void hkpCharacterRigidBody::Destroy(hkpCharacterRigidBody::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  uint8_t v12[32];

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A2248);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A227C);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A22A0);
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
  hkpEntity::removeEntityListener(*((uint32_t *)self + 4), (int)(uintptr_t)(self) + 8);
  hkpWorldObject::removeProperty((hkpWorldObject::Self *)v12, *((uint32_t *)self + 4), 4400);
  v6 = *((uint32_t *)self + 4);
  if ( *(uint16_t *)(v6 + 6) != 0 )
  {
    do
    {
      v8 = *(uint32_t *)(v6 + 4);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
    if ( (uint16_t)v9 == 0 )
      G4_VCALL<void>(v6, 16);
  }
  v11 = *((uint32_t *)self + 27);
  *((uint32_t *)self + 26) = 0;
  if ( v11 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 25),
      48 * v11);
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 27) = 0x80000000;
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DE8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::Destroy_ea1832b00  (binary VA: 0x1832b00)
// Original: hkpCharacterRigidBody::~hkpCharacterRigidBody
// ----------------------------------------------------------------------------
void hkpCharacterRigidBody::Destroy_ea1832b00(hkpCharacterRigidBody::Self *self)
{
  int v1;
  int v2;

  hkpCharacterRigidBody::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::getSupportInfo  (binary VA: 0x1832b80)
// Original: hkpCharacterRigidBody::getSupportInfo
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::getSupportInfo(int a1, int a2, uint32_t *a3)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  int **v7;
  int *v8;
  void *v9;
  hkLifoAllocator::Self *v10;
  char *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16; // xmm0_4
  int v17; // xmm2_4
  int v18; // xmm1_4
  int v19; // xmm5_4
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  bool v28;
  int v29;
  int v30;
  uint8_t *v31;
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm3_4
  float v38;
  float v39;
  float v40; // xmm0_4
  int v41;
  int v42;
  int v43;
  int v44;
  float v45; // xmm4_4
  float v46; // xmm2_4
  uint8_t v47;
  int v48;
  float v49; // xmm1_4
  int v50;
  int v51;
  int v52;
  uint32_t *v53;
  int v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  int v58;
  uint32_t *v59;
  uint64_t v60; // rax
  int v61;
  signed int v62;
  hkLifoAllocator::Self *v63;
  int v64;
  signed int v65;
  hkLifoAllocator::Self *v66;
  int v67;
  signed int v68;
  hkLifoAllocator::Self *v69;
  int v71;
  float *v72;
  float *v73;
  int v74;
  int v75;
  float *v76;
  char v77;
  float v78; // xmm3_4
  float v79; // xmm7_4
  float v80; // xmm6_4
  float v81; // xmm4_4
  float v82; // xmm3_4
  float v83; // xmm3_4
  float v84; // xmm7_4
  hkLifoAllocator::Self *v85;
  signed int v86;
  char *v87;
  char *v88;
  int v89;
  typedef int *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int *_g4_t_v93;
  typedef uint32_t *_g4_t_v94;
  typedef hkLifoAllocator::Self **_g4_t_v95;
  typedef bool _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef float _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef float _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef float _g4_t_v105;
  typedef int _g4_t_v106;
  typedef uint32_t *_g4_t_v107;
  typedef float _g4_t_v108;
  typedef int _g4_t_v109;
  typedef char _g4_t_v110[4];
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef float *_g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef void *_g4_t_v117;
  typedef int _g4_t_v118;
  typedef uint32_t *_g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef void *_g4_t_v122;
  typedef int _g4_t_v123;
  typedef uint8_t *_g4_t_v124;
  typedef int _g4_t_v125;
  typedef signed int _g4_t_v126;
  typedef void *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef char _g4_t_v129[16];
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef void *_g4_t_v134;
  typedef float _g4_t_v135[19];
  typedef int _g4_t_v136;
  typedef int *_g4_t_v137;
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (8u + sizeof(_g4_t_v90)) > _g4_s0 ? (8u + sizeof(_g4_t_v90)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v91)) > _g4_s1 ? (12u + sizeof(_g4_t_v91)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v92)) > _g4_s2 ? (32u + sizeof(_g4_t_v92)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v93)) > _g4_s3 ? (36u + sizeof(_g4_t_v93)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v94)) > _g4_s4 ? (72u + sizeof(_g4_t_v94)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v95)) > _g4_s5 ? (76u + sizeof(_g4_t_v95)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v96)) > _g4_s6 ? (80u + sizeof(_g4_t_v96)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v97)) > _g4_s7 ? (84u + sizeof(_g4_t_v97)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v98)) > _g4_s8 ? (92u + sizeof(_g4_t_v98)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v99)) > _g4_s9 ? (92u + sizeof(_g4_t_v99)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v100)) > _g4_s10 ? (92u + sizeof(_g4_t_v100)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v101)) > _g4_s11 ? (96u + sizeof(_g4_t_v101)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v102)) > _g4_s12 ? (96u + sizeof(_g4_t_v102)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v103)) > _g4_s13 ? (96u + sizeof(_g4_t_v103)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v104)) > _g4_s14 ? (100u + sizeof(_g4_t_v104)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v105)) > _g4_s15 ? (100u + sizeof(_g4_t_v105)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v106)) > _g4_s16 ? (100u + sizeof(_g4_t_v106)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v107)) > _g4_s17 ? (104u + sizeof(_g4_t_v107)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v108)) > _g4_s18 ? (104u + sizeof(_g4_t_v108)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v109)) > _g4_s19 ? (104u + sizeof(_g4_t_v109)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v110)) > _g4_s20 ? (108u + sizeof(_g4_t_v110)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v111)) > _g4_s21 ? (112u + sizeof(_g4_t_v111)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v112)) > _g4_s22 ? (116u + sizeof(_g4_t_v112)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v113)) > _g4_s23 ? (120u + sizeof(_g4_t_v113)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v114)) > _g4_s24 ? (128u + sizeof(_g4_t_v114)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v115)) > _g4_s25 ? (132u + sizeof(_g4_t_v115)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v116)) > _g4_s26 ? (136u + sizeof(_g4_t_v116)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v117)) > _g4_s27 ? (140u + sizeof(_g4_t_v117)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v118)) > _g4_s28 ? (144u + sizeof(_g4_t_v118)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v119)) > _g4_s29 ? (160u + sizeof(_g4_t_v119)) : _g4_s29,
    _g4_s31 = (164u + sizeof(_g4_t_v120)) > _g4_s30 ? (164u + sizeof(_g4_t_v120)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v121)) > _g4_s31 ? (168u + sizeof(_g4_t_v121)) : _g4_s31,
    _g4_s33 = (172u + sizeof(_g4_t_v122)) > _g4_s32 ? (172u + sizeof(_g4_t_v122)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v123)) > _g4_s33 ? (176u + sizeof(_g4_t_v123)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v124)) > _g4_s34 ? (192u + sizeof(_g4_t_v124)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v125)) > _g4_s35 ? (196u + sizeof(_g4_t_v125)) : _g4_s35,
    _g4_s37 = (200u + sizeof(_g4_t_v126)) > _g4_s36 ? (200u + sizeof(_g4_t_v126)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v127)) > _g4_s37 ? (204u + sizeof(_g4_t_v127)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v128)) > _g4_s38 ? (208u + sizeof(_g4_t_v128)) : _g4_s38,
    _g4_s40 = (224u + sizeof(_g4_t_v129)) > _g4_s39 ? (224u + sizeof(_g4_t_v129)) : _g4_s39,
    _g4_s41 = (240u + sizeof(_g4_t_v130)) > _g4_s40 ? (240u + sizeof(_g4_t_v130)) : _g4_s40,
    _g4_s42 = (244u + sizeof(_g4_t_v131)) > _g4_s41 ? (244u + sizeof(_g4_t_v131)) : _g4_s41,
    _g4_s43 = (248u + sizeof(_g4_t_v132)) > _g4_s42 ? (248u + sizeof(_g4_t_v132)) : _g4_s42,
    _g4_s44 = (252u + sizeof(_g4_t_v133)) > _g4_s43 ? (252u + sizeof(_g4_t_v133)) : _g4_s43,
    _g4_s45 = (260u + sizeof(_g4_t_v134)) > _g4_s44 ? (260u + sizeof(_g4_t_v134)) : _g4_s44,
    _g4_s46 = (272u + sizeof(_g4_t_v135)) > _g4_s45 ? (272u + sizeof(_g4_t_v135)) : _g4_s45,
    _g4_s47 = (348u + sizeof(_g4_t_v136)) > _g4_s46 ? (348u + sizeof(_g4_t_v136)) : _g4_s46,
    _g4_s48 = (360u + sizeof(_g4_t_v137)) > _g4_s47 ? (360u + sizeof(_g4_t_v137)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 8u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 12u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 32u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 36u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 72u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 76u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 80u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 84u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 92u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 92u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 92u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 96u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 96u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 96u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 100u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 100u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 100u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 104u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 104u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 104u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 108u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 112u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 116u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 120u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 128u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 132u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 136u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 140u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 144u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 160u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 164u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 168u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 172u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 176u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 192u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 196u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 200u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 204u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 208u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 224u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 240u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 244u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 248u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 252u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 260u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 272u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 348u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 360u);

  v137 = &a1;
  v97 = a1;
  v92 = a2;
  v94 = a3;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v93 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtgetSupportInfo");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v114 = nullptr;
  v115 = 0;
  v116 = 0x80000000;
  v118 = 20;
  v7 = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v8 = *v7;
  v95 = (hkLifoAllocator::Self **)v7;
  v9 = (void *)(*v7)[3];
  if ( v8[2] > 1279 && (unsigned int)(uintptr_t)(v9) + 1280 <= v8[4] )
    v8[3] = (int)(uintptr_t)(v9) + 1280;
  else
    v9 = (void *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v8, 1280);
  v117 = v9;
  v114 = (float *)v9;
  v123 = 20;
  v116 = -2147483628;
  v121 = 0x80000000;
  v119 = nullptr;
  v120 = 0;
  v10 = *v95;
  v11 = *((char **)*v95 + 3);
  if ( *((int *)*v95 + 2) > 1279 && (unsigned int)(uintptr_t)(v11 + 1280) <= *((uint32_t *)v10 + 4) )
    *((uint32_t *)v10 + 3) = (uint32_t)(uintptr_t)(v11 + 1280);
  else
    v11 = (char *)hkLifoAllocator::allocateFromNewSlab(v10, 1280);
  v119 = (uint32_t *)(v11);
  v122 = v11;
  v121 = -2147483628;
  v111 = 0;
  v112 = 0;
  v113 = 0x80000000;
  hkpLinkedCollidable::getCollisionEntriesSorted(*(uint32_t *)(v97 + 16) + 16, (int)(uintptr_t)(&v111), v90);
  v12 = v112;
  if ( v112 > 0 )
  {
    v101 = 0;
    while ( 1 )
    {
      v13 = *(uint32_t **)(*(uint32_t *)(v111 + 8 * v101) + 8);
      v107 = v13;
      if ( v13[2] == 0 )
      {
        v14 = (uint32_t *)v13[21];
        if ( v14 == nullptr )
          goto LABEL_19;
        v15 = *(uint16_t *)v14;
        if ( v15 != 34 )
          break;
      }
LABEL_35:
      if ( ++v101 >= v12 )
        goto LABEL_36;
    }
    while ( v15 > 29 )
    {
      if ( v15 == 33 )
      {
        v19 = v14[8];
        v18 = v14[9];
        v17 = v14[10];
        v16 = v14[11];
        goto LABEL_20;
      }
      v14 = (uint32_t *)v14[5];
      if ( v14 == nullptr )
        break;
      v15 = *(uint16_t *)v14;
    }
LABEL_19:
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
LABEL_20:
    v20 = v107[15];
    if ( *(uint16_t *)(v20 + 4) != 0 )
    {
      v21 = 0;
      do
      {
        v22 = v107[8];
        v23 = v107[9] - 1;
        if ( v23 >= 0 && v21 != *(uint8_t *)(v22 + v107[9] - 1) )
        {
          do
            --v23;
          while ( v23 != -1 && v21 != *(uint8_t *)(v22 + v23) );
        }
        v24 = 0;
        v104 = (uint16_t)v23;
        v25 = *(uint8_t *)(v22 + (uint16_t)v23);
        if ( v25 != 255 )
          v24 = v20 + 32 * *(uint16_t *)(v20 + 6) + 48 + *(uint8_t *)(v20 + 10) * v25;
        if ( (*(uint8_t *)(v24 + 15) & 8) == 0 )
        {
          v26 = *(uint32_t *)(v111 + 8 * v101);
          v27 = *(uint32_t *)(v26 + 16);
          v98 = *(uint32_t *)(v97 + 16);
          v28 = v27 == v98 + 16;
          if ( v27 == v98 + 16 )
            v27 = *(uint32_t *)(v26 + 20);
          if ( *(uint8_t *)(v27 + 24) == 1 )
          {
            v100 = *(char *)(v27 + 16) + v27;
            if ( v100 != 0 )
            {
              v71 = v120;
              if ( v120 == (v121 & 0x3FFFFFFF) )
              {
                v96 = v28;
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)&v119,
                  64,
                  v91);
                v71 = v120;
                v28 = v96;
              }
              v120 = v71 + 1;
              v72 = (float *)&v119[16 * v71];
              *((uint32_t *)v72 + 8) = v100;
              v73 = (float *)(v107[15] + 32 * *(uint8_t *)(v107[8] + v104) + 48);
              *v72 = *v73;
              v72[1] = v73[1];
              v72[2] = v73[2];
              v72[3] = v73[3];
              v72[4] = v73[4];
              v72[5] = v73[5];
              v72[6] = v73[6];
              v74 = *((uint32_t *)v73 + 7);
              *((uint32_t *)v72 + 12) = v19;
              *((uint32_t *)v72 + 7) = v74;
              *((uint32_t *)v72 + 13) = v18;
              *((uint32_t *)v72 + 14) = v17;
              *((uint32_t *)v72 + 15) = v16;
              if ( !v28 )
              {
                v78 = v72[7];
                v79 = v72[4];
                v80 = v72[5];
                *v72 = (float)(v78 * v79) + *v72;
                v72[1] = (float)(v78 * v80) + v72[1];
                v81 = v72[6] * v78;
                v82 = (float)(v78 * v78) + v72[3];
                v72[2] = v81 + v72[2];
                v72[3] = v82;
                v83 = -v72[6];
                v72[4] = -v79;
                v72[5] = -v80;
                v72[6] = v83;
              }
              v75 = v115;
              if ( v115 == (v116 & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)&v114,
                  64,
                  v91);
                v75 = v115;
              }
              v115 = v75 + 1;
              v76 = &v114[16 * v75];
              *v76 = v72[4];
              v76[1] = v72[5];
              v76[2] = v72[6];
              v76[3] = v72[7];
              v76[4] = 0.0;
              v76[5] = 0.0;
              v76[6] = 0.0;
              v76[7] = 0.0;
              v76[8] = 0.0;
              v76[11] = 0.0;
              v76[9] = 0.0;
              v76[10] = 0.0;
              v77 = *(uint8_t *)(v100 + 232);
              if ( v77 == 4 )
              {
                *((uint32_t *)v76 + 12) = 1;
                v20 = v107[15];
              }
              else
              {
                if ( v77 == 5 )
                  *((uint32_t *)v76 + 12) = 2;
                else
                  v76[12] = 0.0;
                v20 = v107[15];
              }
            }
          }
        }
        ++v21;
      }
      while ( v21 < *(uint16_t *)(v20 + 4) );
      v12 = v112;
    }
    goto LABEL_35;
  }
LABEL_36:
  v29 = v115;
  v124 = nullptr;
  v125 = 0;
  v126 = 0x80000000;
  v128 = v115;
  if ( v115 != 0 )
  {
    v85 = *v95;
    v86 = (16 * v115 + 127) & 0xFFFFFF80;
    v87 = *((char **)*v95 + 3);
    v88 = &v87[v86];
    if ( v86 <= *((uint32_t *)*v95 + 2) && (unsigned int)(uintptr_t)(v88) <= *((uint32_t *)v85 + 4) )
    {
      *((uint32_t *)v85 + 3) = (uint32_t)(uintptr_t)(v88);
      v30 = v29;
      v31 = (uint8_t *)(v87);
    }
    else
    {
      v89 = hkLifoAllocator::allocateFromNewSlab(*v95, (16 * v115 + 127) & 0xFFFFFF80);
      v30 = v115;
      v31 = (uint8_t *)v89;
    }
  }
  else
  {
    v30 = 0;
    v31 = nullptr;
  }
  v124 = v31;
  v126 = v29 | 0x80000000;
  v32 = *(float *)(v97 + 60);
  v127 = v31;
  v33 = *(float *)(v92 + 8);
  v34 = (float)-v32 / v33;
  v35 = *(float *)(v97 + 32);
  v36 = *(float *)(v97 + 36);
  LODWORD(v135[18]) = (uint32_t)(uintptr_t)(v114);
  v37 = *(float *)(v97 + 40);
  v135[12] = *(float *)(v97 + 32);
  v135[13] = *(float *)(v97 + 36);
  v38 = *(float *)(v97 + 40);
  memset(v135, 0, 16);
  v135[16] = v33;
  v136 = v30;
  v135[17] = v33;
  v108 = v35 * v34;
  v105 = v36 * v34;
  v102 = v37 * v34;
  v99 = v34 * *(float *)(v97 + 44);
  v135[7] = v99;
  v135[4] = v35 * v34;
  v135[5] = v36 * v34;
  v135[6] = v37 * v34;
  v135[14] = v38;
  v39 = *(float *)(v97 + 44);
  v134 = v31;
  v40 = *(float *)(v97 + 56);
  v135[15] = v39;
  v135[8] = v40;
  v41 = v29 & 0x3FFFFFFF;
  v42 = v30;
  v135[9] = v40;
  v135[10] = v40;
  v135[11] = v40;
  if ( v41 < v30 )
  {
    v43 = 2 * v41;
    if ( v30 >= v43 )
      v43 = v30;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v110,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v124,
      v43,
      16);
    v42 = v136;
  }
  v125 = v30;
  if ( (v116 & 0x3FFFFFFF) < v42 )
  {
    v44 = 2 * (v116 & 0x3FFFFFFF);
    if ( v42 >= v44 )
      v44 = v42;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v110,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v114,
      v44,
      64);
  }
  v115 = v42;
  hkSimplexSolverSolve(v135, v129);
  v45 = v131 - v105;
  v46 = fabs(v132 - v102);
  v106 = 0;
  v47 = (fabs(v130 - v108) <= 0.001f) | (fabs(v45) <= 0.001f ? 2 : 0);
  LOBYTE(v48) = v46 <= 0.001f ? 4 : 0;
  if ( fabs(v133 - v99) <= 0.001f )
    v48 = v46 > 0.001f ? 8 : 12;
  if ( (((uint8_t)v48 | v47) & 7) == 7 )
    goto LABEL_60;
  v106 = 2;
  v49 = (float)((float)(v130 * v130) + (float)(v131 * v131)) + (float)(v132 * v132);
  if ( v49 >= 0.001f )
  {
    v50 = v115;
    v84 = (float)((float)(v130 * *(float *)(v97 + 32)) + (float)(v131 * *(float *)(v97 + 36)))
        + (float)(v132 * *(float *)(v97 + 40));
    v106 = ((float)((float)(*(float *)(v97 + 52) * *(float *)(v97 + 52)) * v49) <= (float)(v49 - (float)(v84 * v84)))
         + 1;
    if ( v115 > 0 )
      goto LABEL_51;
LABEL_59:
    v106 = 0;
    goto LABEL_60;
  }
  v50 = v115;
  if ( v115 <= 0 )
    goto LABEL_59;
LABEL_51:
  v51 = 0;
  v103 = 0;
  v109 = v50;
  do
  {
    if ( v124[16 * v51] != 0 )
    {
      v52 = v51 << 6;
      if ( (float)((float)((float)(v114[16 * v51] * *(float *)(v97 + 32))
                         + (float)(v114[16 * v51 + 1] * *(float *)(v97 + 36)))
                 + (float)(v114[16 * v51 + 2] * *(float *)(v97 + 40))) > 0.08f )
      {
        v53 = v94;
        v54 = v94[1];
        if ( v54 == (v94[2] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)v94,
            64,
            v91);
          v53 = v94;
          v54 = v94[1];
        }
        ++v103;
        v53[1] = v54 + 1;
        v55 = (uint32_t *)(*v53 + (v54 << 6));
        v56 = (uint32_t *)((char *)v119 + v52);
        *v55 = v119[16 * v51];
        v55[1] = v56[1];
        v55[2] = v56[2];
        v55[3] = v56[3];
        v57 = (uint32_t *)((char *)v119 + v52);
        v55[4] = v56[4];
        v55[5] = v56[5];
        v55[6] = v56[6];
        v55[7] = v56[7];
        v55[8] = v57[8];
        v55[12] = v57[12];
        v55[13] = v57[13];
        v55[14] = v57[14];
        v55[15] = v57[15];
      }
    }
    ++v51;
  }
  while ( v51 != v109 );
  if ( v103 == 0 )
    goto LABEL_59;
LABEL_60:
  v58 = *v93;
  v59 = *(uint32_t **)(*v93 + 4);
  if ( (unsigned int)(uintptr_t)(v59) < *(uint32_t *)(*v93 + 12) )
  {
    *v59 = (uint32_t)(uintptr_t)("Et");
    v60 = __rdtsc();
    v59[1] = v60;
    *(uint32_t *)(v58 + 4) = (uint32_t)(uintptr_t)(v59 + 3);
  }
  v61 = 0;
  if ( v124 != v127 )
    v61 = v125;
  v125 = v61;
  v62 = (16 * v128 + 127) & 0xFFFFFF80;
  v63 = *v95;
  if ( v62 > *((uint32_t *)*v95 + 2) || *((void **)v63 + 3) != (char *)v127 + v62 || v127 == *((void **)v63 + 5) )
    hkLifoAllocator::slowBlockFree(v63, (char *)v127, (16 * v128 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v63 + 3) = (uint32_t)(uintptr_t)(v127);
  v125 = 0;
  if ( v126 >= 0 )
    (*(void (**)(uint32_t *, uint8_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v124,
      16 * v126);
  v124 = nullptr;
  v126 = 0x80000000;
  v112 = 0;
  if ( v113 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v111,
      8 * v113);
  v64 = 0;
  if ( v119 != v122 )
    v64 = v120;
  v120 = v64;
  v113 = 0x80000000;
  v111 = 0;
  v65 = ((v123 << 6) + 127) & 0xFFFFFF80;
  v66 = *v95;
  if ( v65 > *((uint32_t *)*v95 + 2) || *((void **)v66 + 3) != (char *)v122 + v65 || v122 == *((void **)v66 + 5) )
    hkLifoAllocator::slowBlockFree(v66, (char *)v122, ((v123 << 6) + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v66 + 3) = (uint32_t)(uintptr_t)(v122);
  v120 = 0;
  if ( v121 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v119,
      v121 << 6);
  v67 = 0;
  if ( v114 != v117 )
    v67 = v115;
  v115 = v67;
  v121 = 0x80000000;
  v119 = nullptr;
  v68 = ((v118 << 6) + 127) & 0xFFFFFF80;
  v69 = *v95;
  if ( v68 > *((uint32_t *)*v95 + 2) || *((void **)v69 + 3) != (char *)v117 + v68 || v117 == *((void **)v69 + 5) )
    hkLifoAllocator::slowBlockFree(v69, (char *)v117, ((v118 << 6) + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v69 + 3) = (uint32_t)(uintptr_t)(v117);
  v115 = 0;
  if ( v116 >= 0 )
    (*(void (**)(uint32_t *, float *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v114,
      v116 << 6);
  return v106;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::Construct  (binary VA: 0x1833920)
// Original: hkpCharacterRigidBody::hkpCharacterRigidBody
// ----------------------------------------------------------------------------
void hkpCharacterRigidBody::Construct(hkpCharacterRigidBody::Self *self, const hkpCharacterRigidBodyCinfo::Self *a2)
{
  int v2;
  int v3; // xmm0_4
  int v4;
  int v5; // xmm1_4
  int v6; // xmm0_4
  int address;
  typedef hkpRigidBody::Self *_g4_t_v8;
  typedef float _g4_t_v9;
  typedef uint8_t _g4_t_v10[48];
  typedef uint32_t _g4_t_v11[55];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v11)) > _g4_s3 ? (64u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A2248);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A227C);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A22A0);
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0x80000000;
  hkpRigidBodyCinfo::Construct((hkpRigidBodyCinfo::Self *)v11);
  v2 = *((uint32_t *)a2 + 3);
  LOBYTE(v11[45]) = 7;
  v11[1] = v2;
  v11[4] = *((uint32_t *)a2 + 4);
  v11[5] = *((uint32_t *)a2 + 5);
  v11[6] = *((uint32_t *)a2 + 6);
  v11[7] = *((uint32_t *)a2 + 7);
  v11[8] = *((uint32_t *)a2 + 8);
  v11[9] = *((uint32_t *)a2 + 9);
  v3 = *((uint32_t *)a2 + 12);
  v11[10] = *((uint32_t *)a2 + 10);
  v4 = *((uint32_t *)a2 + 11);
  LOBYTE(v11[50]) = 8;
  v5 = *((uint32_t *)a2 + 14);
  v11[11] = v4;
  v11[36] = v3;
  v6 = *((uint32_t *)a2 + 13);
  v11[0] = *((uint32_t *)a2 + 2);
  v11[40] = v6;
  v11[43] = v5;
  v11[46] = *((uint32_t *)a2 + 15);
  v11[42] = 0;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v8 = (hkpRigidBody::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                         *(uint32_t *)(*(uint32_t *)address + 44),
                         544);
  hkpRigidBody::Construct(v8, (const hkpRigidBodyCinfo::Self *)v11);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v8);
  memset(v10, 0, sizeof(v10));
  hkpRigidBody::setInertiaInvLocal(v8, (const hkMatrix3f::Self *)v10);
  hkpWorldObject::addProperty(*((uint32_t **)self + 4), 4400, *((uint32_t *)a2 + 26), *((int *)a2 + 26) >> 31);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 16);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 17);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 18);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 19);
  v9 = cosf(*((float *)a2 + 20));
  *((float *)self + 13) = v9;
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 24);
  *((uint32_t *)self + 16) = *((uint32_t *)a2 + 25);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 23);
  *((uint32_t *)self + 12) = *((uint32_t *)a2 + 22);
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = *((uint32_t *)a2 + 21);
  hkpEntity::addEntityListener(*((uint32_t *)self + 4), (int)(uintptr_t)(self) + 8);
  *((uint32_t *)self + 5) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::setListener  (binary VA: 0x1833b90)
// Original: hkpCharacterRigidBody::setListener
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpCharacterRigidBody::setListener(hkpCharacterRigidBody::Self *self, hkpCharacterRigidBodyListener::Self *a2)
{
  hkpWorld::Self *result;
  int v3;
  int32_t v4; // kr00_4

  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a2);
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
    }
    while ( v4 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v4, v3 | (uint16_t)(v4 + 1)) );
  }
  result = *(hkpWorld::Self **)(*((uint32_t *)self + 4) + 8);
  if ( result != nullptr )
    return (hkpWorld::Self *)hkpWorld::addWorldPostSimulationListener(result, (hkpCharacterRigidBody::Self *)((char *)self + 12));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::removeListener  (binary VA: 0x1833c00)
// Original: hkpCharacterRigidBody::removeListener
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpCharacterRigidBody::removeListener(hkpCharacterRigidBody::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  hkpWorld::Self *result;

  v1 = *((uint32_t *)self + 5);
  if ( *(uint16_t *)(v1 + 6) != 0 )
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
  v6 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  result = *(hkpWorld::Self **)(v6 + 8);
  if ( result != nullptr )
    return hkpWorld::removeWorldPostSimulationListener(result, (hkpCharacterRigidBody::Self *)((char *)self + 12));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::getRigidBody  (binary VA: 0x1833c80)
// Original: hkpCharacterRigidBody::getRigidBody
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::getRigidBody(hkpCharacterRigidBody::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::setLinearAccelerationToMassModifier  (binary VA: 0x1833c90)
// Original: hkpCharacterRigidBody::setLinearAccelerationToMassModifier
// ----------------------------------------------------------------------------
hkpCharacterRigidBody::Self * hkpCharacterRigidBody::setLinearAccelerationToMassModifier(hkpCharacterRigidBody::Self *self, const hkVector4f::Self *a2)
{
  *((uint32_t *)self + 20) = *(uint32_t *)a2;
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::setMaxForce  (binary VA: 0x1833cb0)
// Original: hkpCharacterRigidBody::setMaxForce
// ----------------------------------------------------------------------------
hkpCharacterRigidBody::Self * hkpCharacterRigidBody::setMaxForce(hkpCharacterRigidBody::Self *self, float a2)
{
  *((float *)self + 24) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::setLinearVelocity  (binary VA: 0x1833cd0)
// Original: hkpCharacterRigidBody::setLinearVelocity
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::setLinearVelocity(hkpCharacterRigidBody::Self *self, const hkVector4f::Self *a2, float a3)
{
  float *v3;
  float v4; // xmm2_4
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  uint8_t v9;
  int v10;
  int result;
  int v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  hkpEntity::Self *v15;
  float v16[7];

  v3 = *((float **)self + 4);
  v4 = *((float *)a2 + 3) - v3[111];
  v5 = *(float *)a2 - v3[108];
  v6 = *((float *)a2 + 2) - v3[110];
  v7 = *((float *)a2 + 1) - v3[109];
  v8 = fabs(v6);
  v9 = (fabs(v5) <= 0.001f) | (fabs(v7) <= 0.001f ? 2 : 0);
  LOBYTE(v10) = v8 <= 0.001f ? 4 : 0;
  if ( fabs(v4) <= 0.001f )
    v10 = v8 > 0.001f ? 8 : 12;
  result = ((uint8_t)v10 | v9) & 7;
  if ( result != 7 )
  {
    v12 = (2130706432 - LODWORD(a3)) & ((LODWORD(a3) ^ (LODWORD(a3) + 2139095040)) >> 31);
    v13 = (float)(2.0 - (float)(a3 * (float)((float)(2.0 - (float)(a3 * *(float *)&v12)) * *(float *)&v12)))
        * (float)((float)(2.0 - (float)(a3 * *(float *)&v12)) * *(float *)&v12);
    v14 = (float)(2.0 - (float)(a3 * v13)) * v13;
    v16[0] = v5 * v14;
    v16[1] = v7 * v14;
    v16[2] = v6 * v14;
    v16[3] = v4 * v14;
    hkpCharacterRigidBody::setLinearAccelerationToMassModifier(self, (const hkVector4f::Self *)v16);
    v15 = *((hkpEntity::Self **)self + 4);
    hkpEntity::activate(v15);
    return (*(int (**)(uint32_t *, const hkVector4f::Self *))(*((uint32_t *)v15 + 56) + 80))((uint32_t *)v15 + 56, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::getLinearVelocity  (binary VA: 0x1833e60)
// Original: hkpCharacterRigidBody::getLinearVelocity
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::getLinearVelocity(hkpCharacterRigidBody::Self *self)
{
  return *((uint32_t *)self + 4) + 432;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::setAngularVelocity  (binary VA: 0x1833e70)
// Original: hkpCharacterRigidBody::setAngularVelocity
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::setAngularVelocity(hkpCharacterRigidBody::Self *self, const hkVector4f::Self *a2)
{
  int v2;
  float v3; // xmm0_4
  uint8_t v4;
  int v5;
  int result;

  v2 = *((uint32_t *)self + 4);
  v3 = fabs(*((float *)a2 + 2) - *(float *)(v2 + 456));
  v4 = (fabs(*(float *)a2 - *(float *)(v2 + 448)) <= 0.001f)
     | (fabs(*((float *)a2 + 1) - *(float *)(v2 + 452)) <= 0.001f ? 2 : 0);
  LOBYTE(v5) = v3 <= 0.001f ? 4 : 0;
  if ( fabs(*((float *)a2 + 3) - *(float *)(v2 + 460)) <= 0.001f )
    v5 = v3 > 0.001f ? 8 : 12;
  result = ((uint8_t)v5 | v4) & 7;
  if ( result != 7 )
  {
    hkpEntity::activate(*((hkpEntity::Self **)self + 4));
    return G4_VCALL<int>(v2 + 224, 84, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::getAngularVelocity  (binary VA: 0x1833f40)
// Original: hkpCharacterRigidBody::getAngularVelocity
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::getAngularVelocity(hkpCharacterRigidBody::Self *self)
{
  return *((uint32_t *)self + 4) + 448;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBody::getPosition  (binary VA: 0x1833f50)
// Original: hkpCharacterRigidBody::getPosition
// ----------------------------------------------------------------------------
int hkpCharacterRigidBody::getPosition(hkpCharacterRigidBody::Self *self)
{
  return *((uint32_t *)self + 4) + 288;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterProxyCinfo::Destroy  (binary VA: 0x18370f0)
// Original: hkpCharacterProxyCinfo::~hkpCharacterProxyCinfo
// ----------------------------------------------------------------------------
void hkpCharacterProxyCinfo::Destroy(hkpCharacterProxyCinfo::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterProxyCinfo::Destroy_ea1837110  (binary VA: 0x1837110)
// Original: hkpCharacterProxyCinfo::~hkpCharacterProxyCinfo
// ----------------------------------------------------------------------------
void hkpCharacterProxyCinfo::Destroy_ea1837110(hkpCharacterProxyCinfo::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 144;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterProxyCinfo::staticClass  (binary VA: 0x1837170)
// Original: hkpCharacterProxyCinfo::staticClass
// ----------------------------------------------------------------------------
void * hkpCharacterProxyCinfo::staticClass()
{
  return &hkpCharacterProxyCinfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCharacterRigidBodyCinfo::staticClass  (binary VA: 0x18384a0)
// Original: hkpCharacterRigidBodyCinfo::staticClass
// ----------------------------------------------------------------------------
void * hkpCharacterRigidBodyCinfo::staticClass()
{
  return &hkpCharacterRigidBodyCinfoClass;
}


