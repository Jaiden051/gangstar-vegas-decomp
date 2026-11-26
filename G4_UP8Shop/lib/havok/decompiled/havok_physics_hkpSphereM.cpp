#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSphereM.h"

// ----------------------------------------------------------------------------
// Function: hkpSphereMotion::staticClass  (binary VA: 0x1767280)
// Original: hkpSphereMotion::staticClass
// ----------------------------------------------------------------------------
void * hkpSphereMotion::staticClass()
{
  return &hkpSphereMotionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereMotion::getInertiaWorld  (binary VA: 0x1771890)
// Original: hkpSphereMotion::getInertiaWorld
// ----------------------------------------------------------------------------
int hkpSphereMotion::getInertiaWorld(hkpSphereMotion::Self *self, hkMatrix3f::Self *a2)
{
  return G4_VCALL<int>(self, 36, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereMotion::setInertiaInvLocal  (binary VA: 0x17718b0)
// Original: hkpSphereMotion::setInertiaInvLocal
// ----------------------------------------------------------------------------
hkpSphereMotion::Self * hkpSphereMotion::setInertiaInvLocal(hkpSphereMotion::Self *self, const hkMatrix3f::Self *a2)
{
  float v3; // xmm0_4

  v3 = fminf(fminf(*(float *)a2, *((float *)a2 + 5)), *((float *)a2 + 10));
  *((float *)self + 48) = v3;
  *((float *)self + 49) = v3;
  *((float *)self + 50) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereMotion::getInertiaInvLocal  (binary VA: 0x17718e0)
// Original: hkpSphereMotion::getInertiaInvLocal
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpSphereMotion::getInertiaInvLocal(hkpSphereMotion::Self *self, hkMatrix3f::Self *a2)
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
// Function: hkpSphereMotion::getInertiaInvWorld  (binary VA: 0x1771930)
// Original: hkpSphereMotion::getInertiaInvWorld
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpSphereMotion::getInertiaInvWorld(hkpSphereMotion::Self *self, hkMatrix3f::Self *a2)
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
// Function: hkpSphereMotion::applyPointImpulse  (binary VA: 0x1771980)
// Original: hkpSphereMotion::applyPointImpulse
// ----------------------------------------------------------------------------
float * hkpSphereMotion::applyPointImpulse(hkpSphereMotion::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
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
// Function: hkpSphereMotion::applyForce  (binary VA: 0x1771ad0)
// Original: hkpSphereMotion::applyForce
// ----------------------------------------------------------------------------
hkpSphereMotion::Self * hkpSphereMotion::applyForce(hkpSphereMotion::Self *self, float a2, const hkVector4f::Self *a3)
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
// Function: hkpSphereMotion::applyForce  (binary VA: 0x1771b60)
// Original: hkpSphereMotion::applyForce
// ----------------------------------------------------------------------------
int hkpSphereMotion::applyForce(hkpSphereMotion::Self *self, unsigned int a2, __m128 *a3, const hkVector4f::Self *a4)
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
  return (*(int (**)(hkpSphereMotion::Self *, __m128 *, const hkVector4f::Self *))(v4 + 100))(self, &v6, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereMotion::applyTorque  (binary VA: 0x1771ba0)
// Original: hkpSphereMotion::applyTorque
// ----------------------------------------------------------------------------
int hkpSphereMotion::applyTorque(hkpSphereMotion::Self *self, unsigned int a2, __m128 *a3)
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
  return (*(int (**)(hkpSphereMotion::Self *, __m128 *))(v3 + 104))(self, &v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereMotion::getProjectedPointVelocity  (binary VA: 0x1771be0)
// Original: hkpSphereMotion::getProjectedPointVelocity
// ----------------------------------------------------------------------------
float * hkpSphereMotion::getProjectedPointVelocity(hkpSphereMotion::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float *a4, float *a5)
{
  float v5; // xmm2_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm2_4

  v5 = *((float *)a2 + 1) - *((float *)self + 25);
  v6 = *((float *)a2 + 2) - *((float *)self + 26);
  v7 = *((float *)a3 + 1);
  v8 = *((float *)a3 + 2);
  v9 = *(float *)a2 - *((float *)self + 24);
  v10 = (float)(v6 * v7) - (float)(v5 * v8);
  v11 = (float)(v9 * v8) - (float)(v6 * *(float *)a3);
  v12 = (float)(v5 * *(float *)a3) - (float)(v9 * v7);
  *a4 = (float)((float)((float)(*((float *)self + 56) * v10) + (float)(*((float *)self + 57) * v11))
              + (float)(*((float *)self + 58) * v12))
      + (float)((float)((float)(*(float *)a3 * *((float *)self + 52)) + (float)(v7 * *((float *)self + 53)))
              + (float)(v8 * *((float *)self + 54)));
  *a5 = (float)((float)((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12)) * *((float *)self + 48))
      + *((float *)self + 51);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereMotion::getProjectedPointVelocitySimd  (binary VA: 0x1771cd0)
// Original: hkpSphereMotion::getProjectedPointVelocitySimd
// ----------------------------------------------------------------------------
float * hkpSphereMotion::getProjectedPointVelocitySimd(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float v5; // xmm2_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm2_4

  v5 = a2[1] - a1[25];
  v6 = a2[2] - a1[26];
  v7 = a3[1];
  v8 = a3[2];
  v9 = *a2 - a1[24];
  v10 = (float)(v6 * v7) - (float)(v5 * v8);
  v11 = (float)(v9 * v8) - (float)(v6 * *a3);
  v12 = (float)(v5 * *a3) - (float)(v9 * v7);
  *a4 = (float)((float)((float)(a1[56] * v10) + (float)(a1[57] * v11)) + (float)(a1[58] * v12))
      + (float)((float)((float)(*a3 * a1[52]) + (float)(v7 * a1[53])) + (float)(v8 * a1[54]));
  *a5 = (float)((float)((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12)) * a1[48]) + a1[51];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereMotion::setInertiaLocal  (binary VA: 0x1771dc0)
// Original: hkpSphereMotion::setInertiaLocal
// ----------------------------------------------------------------------------
hkpSphereMotion::Self * hkpSphereMotion::setInertiaLocal(hkpSphereMotion::Self *self, const hkMatrix3f::Self *a2)
{
  float v2; // xmm1_4
  hkpSphereMotion::Self *result;
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
// Function: hkpSphereMotion::Destroy  (binary VA: 0x1771e70)
// Original: hkpSphereMotion::~hkpSphereMotion
// ----------------------------------------------------------------------------
void hkpSphereMotion::Destroy(hkpSphereMotion::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereMotion::Destroy_ea1771e90  (binary VA: 0x1771e90)
// Original: hkpSphereMotion::~hkpSphereMotion
// ----------------------------------------------------------------------------
void hkpSphereMotion::Destroy_ea1771e90(hkpSphereMotion::Self *self)
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
// Function: hkpSphereMotion::applyAngularImpulse  (binary VA: 0x1771ef0)
// Original: hkpSphereMotion::applyAngularImpulse
// ----------------------------------------------------------------------------
hkpSphereMotion::Self * hkpSphereMotion::applyAngularImpulse(hkpSphereMotion::Self *self, const hkVector4f::Self *a2)
{
  *((float *)self + 56) = (float)(*((float *)self + 48) * *(float *)a2) + *((float *)self + 56);
  *((float *)self + 57) = (float)(*((float *)self + 49) * *((float *)a2 + 1)) + *((float *)self + 57);
  *((float *)self + 58) = (float)(*((float *)self + 50) * *((float *)a2 + 2)) + *((float *)self + 58);
  *((float *)self + 59) = (float)(*((float *)self + 51) * *((float *)a2 + 3)) + *((float *)self + 59);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereMotion::getInertiaLocal  (binary VA: 0x1771f70)
// Original: hkpSphereMotion::getInertiaLocal
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpSphereMotion::getInertiaLocal(hkpSphereMotion::Self *self, hkMatrix3f::Self *a2)
{
  __m128i v3;
  int v4;
  int v5;
  float v6; // xmm1_4
  float v7; // xmm3_4

g4_m128_raw(v3) = 0x34000000u;
  *(float *)g4_m128_ptr<int32_t>(v3) = fmaxf(0.00000011920929f, *((float *)self + 48));
  *((uint32_t *)a2 + 1) = 0;
  *((uint32_t *)a2 + 2) = 0;
  *((uint32_t *)a2 + 3) = 0;
  *((uint32_t *)a2 + 4) = 0;
  *((uint32_t *)a2 + 6) = 0;
  *((uint32_t *)a2 + 7) = 0;
  *((uint32_t *)a2 + 8) = 0;
  *((uint32_t *)a2 + 9) = 0;
  v4 = _mm_cvtsi128_si32(v3);
  *((uint32_t *)a2 + 11) = 0;
  v5 = (2130706432 - v4) & ((v4 ^ (v4 + 2139095040)) >> 31);
  v6 = (float)(2.0
             - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                     * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v5)) * *(float *)&v5)))
     * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v5)) * *(float *)&v5);
  v7 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * v6);
  *(float *)a2 = v7 * v6;
  *((float *)a2 + 5) = v7 * v6;
  *((float *)a2 + 10) = v7 * v6;
  return a2;
}


