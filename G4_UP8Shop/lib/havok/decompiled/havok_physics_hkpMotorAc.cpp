#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMotorAc.h"

// ----------------------------------------------------------------------------
// Function: hkpMotorAction::staticClass  (binary VA: 0x1823910)
// Original: hkpMotorAction::staticClass
// ----------------------------------------------------------------------------
void * hkpMotorAction::staticClass()
{
  return &hkpMotorActionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMotorAction::Destroy  (binary VA: 0x18290d0)
// Original: hkpMotorAction::~hkpMotorAction
// ----------------------------------------------------------------------------
void hkpMotorAction::Destroy(hkpMotorAction::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1908);
  hkpUnaryAction::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpMotorAction::applyAction  (binary VA: 0x1829100)
// Original: hkpMotorAction::applyAction
// ----------------------------------------------------------------------------
int hkpMotorAction::applyAction(int a1, const hkMatrix3f::Self *a2, int a3)
{
  uint32_t *v3;
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  int result;
  int v16;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef float _g4_t_v13[4];
  typedef uint8_t _g4_t_v14[16];
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v14)) > _g4_s5 ? (48u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v15)) > _g4_s6 ? (64u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);

  if ( *(uint8_t *)(a1 + 56) != 0 )
  {
    v3 = *(uint32_t **)(a1 + 24);
    hkVector4f::setRotatedInverseDir((hkVector4f::Self *)v13, (const hkMatrix3f::Self *)(v3 + 60), (const hkVector4f::Self *)(v3 + 112));
    v4 = *(float *)(a1 + 32);
    v5 = *(float *)(a1 + 36);
    v6 = *(float *)(a1 + 40);
    v7 = (float)(*(float *)(a1 + 48)
               - (float)((float)((float)(v13[0] * v4) + (float)(v13[1] * v5)) + (float)(v13[2] * v6)))
       * *(float *)(a1 + 52);
    (*(void (**)(uint32_t *, int *, int, int, int, int, uint32_t *, uint32_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(v3[56] + 36))(
      v3 + 56,
      &v15,
      v9,
      v10,
      v11,
      v12,
      v3 + 60,
      v3 + 56,
      LODWORD(v13[0]),
      LODWORD(v13[1]),
      LODWORD(v13[2]),
      LODWORD(v13[3]),
      v4 * v7,
      v5 * v7,
      v6 * v7,
      v7 * *(float *)(a1 + 44));
    hkVector4f::setRotatedDir((hkVector4f::Self *)v14, a2, (const hkVector4f::Self *)v14);
    v16 = *((uint32_t *)a2 + 2);
    hkpEntity::activate((hkpEntity::Self *)v3);
    return (*(int (**)(int, int, uint8_t *))(v3[56] + 116))(a3, v16, v14);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMotorAction::Destroy_ea1829300  (binary VA: 0x1829300)
// Original: hkpMotorAction::~hkpMotorAction
// ----------------------------------------------------------------------------
void hkpMotorAction::Destroy_ea1829300(hkpMotorAction::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1908);
  hkpUnaryAction::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMotorAction::Construct  (binary VA: 0x1829370)
// Original: hkpMotorAction::hkpMotorAction
// ----------------------------------------------------------------------------
void hkpMotorAction::Construct(hkpMotorAction::Self *self, hkpRigidBody::Self *a2, const hkVector4f::Self *a3, float a4, float a5)
{
  __m128 v5;
  __m128 v6;
  int v7;
  __m128 v8;
  __m128 v9;
  __m128i m128_i128;
  __m128 v11;
  float v12; // xmm6_4
  int v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm7_4
  __m128 v17;
  hkpUnaryAction::Construct(self, a2, 0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1908);
  *((uint32_t *)self + 8) = *(uint32_t *)a3;
g4_m128_raw(v5) = *((unsigned int *)self + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a3 + 1);
g4_m128_raw(v6) = *((unsigned int *)self + 9);
  *((uint32_t *)self + 10) = *((uint32_t *)a3 + 2);
  v7 = *((uint32_t *)a3 + 3);
  *((float *)self + 12) = a4;
  *((uint32_t *)self + 11) = v7;
  *((float *)self + 13) = a5;
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v5));
  *((uint8_t *)self + 56) = 1;
g4_m128_raw(v8) = *((unsigned int *)self + 10);
g4_m128_raw(v9) = *((unsigned int *)self + 11);
  *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)((float)(g4_m128_lane<float>(v5, 0) *g4_m128_lane<float>(v5, 0))
                                                + (float)(g4_m128_lane<float>(v6, 0) *g4_m128_lane<float>(v6, 0)))
                                        + (float)(g4_m128_lane<float>(v8, 0) *g4_m128_lane<float>(v8, 0)))
                                + (float)(g4_m128_lane<float>(v9, 0) *g4_m128_lane<float>(v9, 0));
g4_m128_raw(v11) = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) > 0.0 )
  {
    v12 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
    v13 = ((_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(m128_i128) >> 1));
    v14 = (float)(1.5 * *(float *)&v13)
        - (float)((float)(v12 * *(float *)&v13) * (float)(*(float *)&v13 * *(float *)&v13));
    v15 = 1.5 * v14;
    v16 = (float)(v12 * v14) * (float)(v14 * v14);
g4_m128_raw(v11) = 0x3FC00000u;
g4_m128_lane<float>(v11, 0) = (float)(1.5 * (float)(v15 - v16))
                    - (float)((float)(v12 * (float)(v15 - v16)) * (float)((float)(v15 - v16) * (float)(v15 - v16)));
  }
g4_m128_lane<uint64_t>(v17, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v5, v6), 0);
g4_m128_lane<uint64_t>(v17, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v8, v9), 0);
  *((__m128 *)self + 2) = _mm_mul_ps(v17, _mm_shuffle_ps(v11, v11, 0));
}

// ----------------------------------------------------------------------------
// Function: hkpMotorAction::clone  (binary VA: 0x18294d0)
// Original: hkpMotorAction::clone
// ----------------------------------------------------------------------------
int hkpMotorAction::clone(int a1, int a2, int a3)
{
  int result;
  hkpRigidBody::Self *v4;
  int address;
  int v6;

  result = 0;
  if ( *(uint32_t *)(a2 + 4) == 1 && *(uint32_t *)(a3 + 4) == 0 )
  {
    v4 = **(hkpRigidBody::Self ***)a2;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           64);
    hkpMotorAction::Construct(
      (hkpMotorAction::Self *)v6,
      v4,
      (const hkVector4f::Self *)(a1 + 32),
      *(float *)(a1 + 48),
      *(float *)(a1 + 52));
    *(uint8_t *)(v6 + 56) = *(uint8_t *)(a1 + 56);
    *(uint32_t *)(v6 + 16) = *(uint32_t *)(a1 + 16);
    return v6;
  }
  return result;
}


