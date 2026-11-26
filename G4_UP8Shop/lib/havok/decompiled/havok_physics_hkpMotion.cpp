#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMotion.h"

// ----------------------------------------------------------------------------
// Function: hkpMotion::staticClass  (binary VA: 0x172f2c0)
// Original: hkpMotion::staticClass
// ----------------------------------------------------------------------------
void * hkpMotion::staticClass()
{
  return &hkpMotionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::Destroy  (binary VA: 0x173fc00)
// Original: hkpMotion::~hkpMotion
// ----------------------------------------------------------------------------
void hkpMotion::Destroy(hkpMotion::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setMass  (binary VA: 0x173fc20)
// Original: hkpMotion::setMass
// ----------------------------------------------------------------------------
int hkpMotion::setMass(hkpMotion::Self *self, float a2)
{
  float v2; // xmm0_4

  v2 = 0.0;
  if ( a2 != 0.0 )
    v2 = 1.0 / a2;
  return G4_VCALL<int>(self, 28, COERCE_FLOAT(LODWORD(v2)));
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setMassInv  (binary VA: 0x173fc80)
// Original: hkpMotion::setMassInv
// ----------------------------------------------------------------------------
hkpMotion::Self * hkpMotion::setMassInv(hkpMotion::Self *self, float a2)
{
  *((float *)self + 51) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setMassInv  (binary VA: 0x173fca0)
// Original: hkpMotion::setMassInv
// ----------------------------------------------------------------------------
int hkpMotion::setMassInv(int a1, uint32_t *a2)
{
  *(uint32_t *)(a1 + 204) = *a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setLinearVelocity  (binary VA: 0x173fcc0)
// Original: hkpMotion::setLinearVelocity
// ----------------------------------------------------------------------------
hkpMotion::Self * hkpMotion::setLinearVelocity(hkpMotion::Self *self, const hkVector4f::Self *a2)
{
  *((uint32_t *)self + 52) = *(uint32_t *)a2;
  *((uint32_t *)self + 53) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 54) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 55) = *((uint32_t *)a2 + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setAngularVelocity  (binary VA: 0x173fcf0)
// Original: hkpMotion::setAngularVelocity
// ----------------------------------------------------------------------------
hkpMotion::Self * hkpMotion::setAngularVelocity(hkpMotion::Self *self, const hkVector4f::Self *a2)
{
  *((uint32_t *)self + 56) = *(uint32_t *)a2;
  *((uint32_t *)self + 57) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 58) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 59) = *((uint32_t *)a2 + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::applyLinearImpulse  (binary VA: 0x173fd20)
// Original: hkpMotion::applyLinearImpulse
// ----------------------------------------------------------------------------
hkpMotion::Self * hkpMotion::applyLinearImpulse(hkpMotion::Self *self, const hkVector4f::Self *a2)
{
  float v3; // xmm0_4

  v3 = *((float *)self + 51);
  *((float *)self + 52) = (float)(*(float *)a2 * v3) + *((float *)self + 52);
  *((float *)self + 53) = (float)(*((float *)a2 + 1) * v3) + *((float *)self + 53);
  *((float *)self + 54) = (float)(*((float *)a2 + 2) * v3) + *((float *)self + 54);
  *((float *)self + 55) = (float)(v3 * *((float *)a2 + 3)) + *((float *)self + 55);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::getMotionStateAndVelocitiesAndDeactivationType  (binary VA: 0x173fd90)
// Original: hkpMotion::getMotionStateAndVelocitiesAndDeactivationType
// ----------------------------------------------------------------------------
hkpMotion::Self * hkpMotion::getMotionStateAndVelocitiesAndDeactivationType(hkpMotion::Self *self, hkpMotion::Self *a2)
{
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 4);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 5);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 6);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 7);
  *((uint32_t *)a2 + 8) = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 9) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 10) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 11) = *((uint32_t *)self + 11);
  *((uint32_t *)a2 + 12) = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 13) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 14) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 15) = *((uint32_t *)self + 15);
  *((uint32_t *)a2 + 16) = *((uint32_t *)self + 16);
  *((uint32_t *)a2 + 17) = *((uint32_t *)self + 17);
  *((uint32_t *)a2 + 18) = *((uint32_t *)self + 18);
  *((uint32_t *)a2 + 19) = *((uint32_t *)self + 19);
  *((uint32_t *)a2 + 20) = *((uint32_t *)self + 20);
  *((uint32_t *)a2 + 21) = *((uint32_t *)self + 21);
  *((uint32_t *)a2 + 22) = *((uint32_t *)self + 22);
  *((uint32_t *)a2 + 23) = *((uint32_t *)self + 23);
  *((uint32_t *)a2 + 24) = *((uint32_t *)self + 24);
  *((uint32_t *)a2 + 25) = *((uint32_t *)self + 25);
  *((uint32_t *)a2 + 26) = *((uint32_t *)self + 26);
  *((uint32_t *)a2 + 27) = *((uint32_t *)self + 27);
  *((uint32_t *)a2 + 28) = *((uint32_t *)self + 28);
  *((uint32_t *)a2 + 29) = *((uint32_t *)self + 29);
  *((uint32_t *)a2 + 30) = *((uint32_t *)self + 30);
  *((uint32_t *)a2 + 31) = *((uint32_t *)self + 31);
  *((uint32_t *)a2 + 32) = *((uint32_t *)self + 32);
  *((uint32_t *)a2 + 33) = *((uint32_t *)self + 33);
  *((uint32_t *)a2 + 34) = *((uint32_t *)self + 34);
  *((uint32_t *)a2 + 35) = *((uint32_t *)self + 35);
  *((uint32_t *)a2 + 36) = *((uint32_t *)self + 36);
  *((uint32_t *)a2 + 37) = *((uint32_t *)self + 37);
  *((uint32_t *)a2 + 38) = *((uint32_t *)self + 38);
  *((uint32_t *)a2 + 39) = *((uint32_t *)self + 39);
  *((uint32_t *)a2 + 40) = *((uint32_t *)self + 40);
  *((uint32_t *)a2 + 41) = *((uint32_t *)self + 41);
  *((uint32_t *)a2 + 42) = *((uint32_t *)self + 42);
  *((uint32_t *)a2 + 43) = *((uint32_t *)self + 43);
  *((uint32_t *)a2 + 44) = *((uint32_t *)self + 44);
  *((uint16_t *)a2 + 90) = *((uint16_t *)self + 90);
  *((uint16_t *)a2 + 91) = *((uint16_t *)self + 91);
  *((uint16_t *)a2 + 92) = *((uint16_t *)self + 92);
  *((uint8_t *)a2 + 186) = *((uint8_t *)self + 186);
  *((uint8_t *)a2 + 187) = *((uint8_t *)self + 187);
  *((uint8_t *)a2 + 188) = *((uint8_t *)self + 188);
  *((uint32_t *)a2 + 52) = *((uint32_t *)self + 52);
  *((uint32_t *)a2 + 53) = *((uint32_t *)self + 53);
  *((uint32_t *)a2 + 54) = *((uint32_t *)self + 54);
  *((uint32_t *)a2 + 55) = *((uint32_t *)self + 55);
  *((uint32_t *)a2 + 56) = *((uint32_t *)self + 56);
  *((uint32_t *)a2 + 57) = *((uint32_t *)self + 57);
  *((uint32_t *)a2 + 58) = *((uint32_t *)self + 58);
  *((uint32_t *)a2 + 59) = *((uint32_t *)self + 59);
  *((uint8_t *)a2 + 9) = *((uint8_t *)self + 9);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setMass  (binary VA: 0x173ffa0)
// Original: hkpMotion::setMass
// ----------------------------------------------------------------------------
int hkpMotion::setMass(int *a1, unsigned int *a2)
{
  float v2; // xmm1_4
  __m128i v3;
  int v4;
  int v6;
  int v7;
  float v8[7];

  v2 = 0.0;
g4_m128_raw(v3) = *a2;
  if ( *(float *)g4_m128_ptr<int32_t>(v3) != 0.0 )
  {
    v6 = _mm_cvtsi128_si32(v3);
    v7 = (2130706432 - v6) & ((v6 ^ (v6 + 2139095040)) >> 31);
    v2 = (float)(2.0
               - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                       * (float)((float)(2.0
                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v7))
                                                       * *(float *)&v7)))
                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v7)) * *(float *)&v7))))
       * (float)((float)(2.0
                       - (float)(*(float *)g4_m128_ptr<int32_t>(v3)
                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v7)) * *(float *)&v7)))
               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)&v7)) * *(float *)&v7));
  }
  v4 = *a1;
  v8[0] = v2;
  return (*(int (**)(int *, float *))(v4 + 32))(a1, v8);
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setCenterOfMassInLocal  (binary VA: 0x1740050)
// Original: hkpMotion::setCenterOfMassInLocal
// ----------------------------------------------------------------------------
int hkpMotion::setCenterOfMassInLocal(hkpMotion::Self *self, const hkVector4f::Self *a2)
{
  hkMotionState::Self *v3;

  return (int)(uintptr_t)(hkSweptTransformUtil::setCentreOfRotationLocal(a2, (hkpMotion::Self *)((char *)self + 16), v3));
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setPosition  (binary VA: 0x1740080)
// Original: hkpMotion::setPosition
// ----------------------------------------------------------------------------
int hkpMotion::setPosition(hkpMotion::Self *self, const hkVector4f::Self *a2)
{
  hkMotionState::Self *v3;

  return (int)(uintptr_t)(hkSweptTransformUtil::warpToPosition(a2, (hkpMotion::Self *)((char *)self + 16), v3));
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setRotation  (binary VA: 0x17400b0)
// Original: hkpMotion::setRotation
// ----------------------------------------------------------------------------
int hkpMotion::setRotation(hkpMotion::Self *self, const hkQuaternionf::Self *a2)
{
  hkMotionState::Self *v3;

  return hkSweptTransformUtil::warpToRotation(a2, (hkpMotion::Self *)((char *)self + 16), v3);
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setPositionAndRotation  (binary VA: 0x17400e0)
// Original: hkpMotion::setPositionAndRotation
// ----------------------------------------------------------------------------
int hkpMotion::setPositionAndRotation(hkpMotion::Self *self, const hkVector4f::Self *a2, const hkQuaternionf::Self *a3)
{
  hkMotionState::Self *v4;

  return hkSweptTransformUtil::warpTo(a2, a3, (hkpMotion::Self *)((char *)self + 16), v4);
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setTransform  (binary VA: 0x1740120)
// Original: hkpMotion::setTransform
// ----------------------------------------------------------------------------
int hkpMotion::setTransform(hkpMotion::Self *self, const hkTransformf::Self *a2)
{
  hkMotionState::Self *v3;

  return hkSweptTransformUtil::warpTo(a2, (hkpMotion::Self *)((char *)self + 16), v3);
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::Destroy_ea1740150  (binary VA: 0x1740150)
// Original: hkpMotion::~hkpMotion
// ----------------------------------------------------------------------------
void hkpMotion::Destroy_ea1740150(hkpMotion::Self *self)
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
// Function: hkpMotion::Construct  (binary VA: 0x17401b0)
// Original: hkpMotion::hkpMotion
// ----------------------------------------------------------------------------
void hkpMotion::Construct(hkpMotion::Self *self)
{
  typedef uint32_t _g4_t_v1[4];
  typedef uint32_t _g4_t_v2[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v2)) > _g4_s1 ? (16u + sizeof(_g4_t_v2)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 16u);

  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F268);
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 58) = 0;
  *((uint32_t *)self + 59) = 0;
  memset(v2, 0, 12);
  memset(v1, 0, sizeof(v1));
  v2[3] = 1065353216;
  hkMotionState::initMotionState((hkpMotion::Self *)((char *)self + 16), (const hkVector4f::Self *)v1, (const hkQuaternionf::Self *)v2);
  *((uint16_t *)self + 90) = 0;
  *((uint16_t *)self + 91) = 0;
  *((uint8_t *)self + 8) = 0;
  *((uint8_t *)self + 9) = -1;
  *((uint16_t *)self + 5) = 0;
  *((uint16_t *)self + 6) = 0;
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint16_t *)self + 143) = 16256;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::Construct  (binary VA: 0x1740320)
// Original: hkpMotion::hkpMotion
// ----------------------------------------------------------------------------
void hkpMotion::Construct(hkpMotion::Self *self, const hkVector4f::Self *a2, const hkQuaternionf::Self *a3, bool a4)
{
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F268);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 58) = 0;
  *((uint32_t *)self + 59) = 0;
  hkMotionState::initMotionState((hkpMotion::Self *)((char *)self + 16), a2, a3);
  *((uint16_t *)self + 90) = 0;
  *((uint16_t *)self + 91) = 0;
  *((uint8_t *)self + 8) = 0;
  LOBYTE(v4) = -1;
  if ( a4 )
    v4 = (int)*(float *)a2 & 0xF;
  *((uint8_t *)self + 9) = v4;
  *((uint16_t *)self + 5) = 0;
  *((uint16_t *)self + 6) = 0;
  *((g4_int128_t *)self + 15) = 0;
  *((uint32_t *)self + 68) = 0;
  *((g4_int128_t *)self + 16) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint16_t *)self + 143) = 16256;
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::getMass  (binary VA: 0x1740430)
// Original: hkpMotion::getMass
// ----------------------------------------------------------------------------
long double hkpMotion::getMass(hkpMotion::Self *self)
{
  __m128i v1;
  int v3;
  int v4;
  float v5; // xmm2_4

g4_m128_raw(v1) = *((unsigned int *)self + 51);
  if ( *(float *)g4_m128_ptr<int32_t>(v1) == 0.0 )
    return 0.0;
  v3 = _mm_cvtsi128_si32(v1);
  v4 = (2130706432 - v3) & ((v3 ^ (v3 + 2139095040)) >> 31);
  v5 = (float)(2.0
             - (float)(*(float *)g4_m128_ptr<int32_t>(v1)
                     * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v1) * *(float *)&v4)) * *(float *)&v4)))
     * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v1) * *(float *)&v4)) * *(float *)&v4);
  return (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v1) * v5)) * v5);
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::approxTransformAt  (binary VA: 0x17404e0)
// Original: hkpMotion::approxTransformAt
// ----------------------------------------------------------------------------
int hkpMotion::approxTransformAt(hkpMotion::Self *self, float a2, hkTransformf::Self *a3)
{
  return (int)(uintptr_t)(hkSweptTransformf::approxTransformAt((hkpMotion::Self *)((char *)self + 80), a2, a3));
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::setDeactivationClass  (binary VA: 0x1740520)
// Original: hkpMotion::setDeactivationClass
// ----------------------------------------------------------------------------
int hkpMotion::setDeactivationClass(hkpMotion::Self *self, int a2)
{
  *((uint8_t *)self + 188) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpMotion::requestDeactivation  (binary VA: 0x1740540)
// Original: hkpMotion::requestDeactivation
// ----------------------------------------------------------------------------
int hkpMotion::requestDeactivation(hkpMotion::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  *((uint32_t *)self + 63) = 2139095022;
  v1 = *((uint32_t *)self + 18);
  v2 = *((uint32_t *)self + 16);
  v3 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 62) = v1;
  *((uint32_t *)self + 66) = v1;
  *((uint32_t *)self + 67) = *((uint32_t *)self + 63);
  *((uint32_t *)self + 60) = v2;
  *((uint32_t *)self + 61) = v3;
  *((uint32_t *)self + 64) = v2;
  *((uint32_t *)self + 65) = v3;
  v4 = hkVector4UtilImpl_float_id_0c2ad1::packQuaternionIntoInt32((hkpMotion::Self *)((char *)self + 128));
  *((uint32_t *)self + 68) = v4;
  *((uint32_t *)self + 69) = v4;
  *((uint16_t *)self + 5) = *((uint16_t *)self + 5) & 0xFF80 | 6;
  result = *((uint16_t *)self + 6) & 0xFF80 | 6;
  *((uint16_t *)self + 6) = result;
  return result;
}


