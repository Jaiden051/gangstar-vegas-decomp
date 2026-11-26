#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpInertia.h"

// ----------------------------------------------------------------------------
// Function: hkpInertiaTensorComputer::setMassProperties  (binary VA: 0x1826760)
// Original: hkpInertiaTensorComputer::setMassProperties
// ----------------------------------------------------------------------------
const hkMassProperties::Self * hkpInertiaTensorComputer::setMassProperties(hkpInertiaTensorComputer::Self *self, const hkMassProperties::Self *a2)
{
  *((uint32_t *)a2 + 36) = *((uint32_t *)self + 1);
  *((uint32_t *)a2 + 32) = *((uint32_t *)self + 4);
  *((uint32_t *)a2 + 33) = *((uint32_t *)self + 5);
  *((uint32_t *)a2 + 34) = *((uint32_t *)self + 6);
  *((uint32_t *)a2 + 35) = *((uint32_t *)self + 7);
  *((uint32_t *)a2 + 20) = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 21) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 22) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 23) = *((uint32_t *)self + 11);
  *((uint32_t *)a2 + 24) = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 25) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 26) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 27) = *((uint32_t *)self + 15);
  *((uint32_t *)a2 + 28) = *((uint32_t *)self + 16);
  *((uint32_t *)a2 + 29) = *((uint32_t *)self + 17);
  *((uint32_t *)a2 + 30) = *((uint32_t *)self + 18);
  *((uint32_t *)a2 + 31) = *((uint32_t *)self + 19);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpInertiaTensorComputer::setAndScaleToMass  (binary VA: 0x18267f0)
// Original: hkpInertiaTensorComputer::setAndScaleToMass
// ----------------------------------------------------------------------------
float * hkpInertiaTensorComputer::setAndScaleToMass(int a1, float *a2, int a3)
{
  float v3; // xmm1_4
  int v4;
  typedef float _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);

  v3 = *a2 / *(float *)(a1 + 4);
  *(float *)(a3 + 144) = *a2;
  *(uint32_t *)(a3 + 128) = *(uint32_t *)(a1 + 16);
  *(uint32_t *)(a3 + 132) = *(uint32_t *)(a1 + 20);
  *(uint32_t *)(a3 + 136) = *(uint32_t *)(a1 + 24);
  *(uint32_t *)(a3 + 140) = *(uint32_t *)(a1 + 28);
  *(uint32_t *)(a3 + 80) = *(uint32_t *)(a1 + 32);
  *(uint32_t *)(a3 + 84) = *(uint32_t *)(a1 + 36);
  *(uint32_t *)(a3 + 88) = *(uint32_t *)(a1 + 40);
  *(uint32_t *)(a3 + 92) = *(uint32_t *)(a1 + 44);
  *(uint32_t *)(a3 + 96) = *(uint32_t *)(a1 + 48);
  *(uint32_t *)(a3 + 100) = *(uint32_t *)(a1 + 52);
  *(uint32_t *)(a3 + 104) = *(uint32_t *)(a1 + 56);
  v4 = *(uint32_t *)(a1 + 60);
  v6 = v3;
  *(uint32_t *)(a3 + 108) = v4;
  *(uint32_t *)(a3 + 112) = *(uint32_t *)(a1 + 64);
  *(uint32_t *)(a3 + 116) = *(uint32_t *)(a1 + 68);
  *(uint32_t *)(a3 + 120) = *(uint32_t *)(a1 + 72);
  *(uint32_t *)(a3 + 124) = *(uint32_t *)(a1 + 76);
  return hkMatrix3f::mul((float *)(a3 + 80), &v6);
}

// ----------------------------------------------------------------------------
// Function: hkpInertiaTensorComputer::setAndScaleToDensity  (binary VA: 0x18268b0)
// Original: hkpInertiaTensorComputer::setAndScaleToDensity
// ----------------------------------------------------------------------------
float * hkpInertiaTensorComputer::setAndScaleToDensity(float *a1, float *a2, int a3)
{
  typedef float _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);

  v4 = *a1 * *a2;
  return hkpInertiaTensorComputer::setAndScaleToMass((int)(uintptr_t)(a1), &v4, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpInertiaTensorComputer::clipInertia  (binary VA: 0x1826900)
// Original: hkpInertiaTensorComputer::clipInertia
// ----------------------------------------------------------------------------
int hkpInertiaTensorComputer::clipInertia(hkpInertiaTensorComputer::Self *self, float a2)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm0_4

  v3 = *(float *)(LODWORD(a2) + 100);
  v4 = *(float *)(LODWORD(a2) + 120);
  v5 = fmaxf(fmaxf(*(float *)(LODWORD(a2) + 80), v3), v4) / *(float *)&self;
  *(float *)(LODWORD(a2) + 80) = fmaxf(*(float *)(LODWORD(a2) + 80), v5);
  *(float *)(LODWORD(a2) + 100) = fmaxf(v3, v5);
  *(float *)(LODWORD(a2) + 120) = fmaxf(v4, v5);
  return LODWORD(a2);
}

// ----------------------------------------------------------------------------
// Function: hkpInertiaTensorComputer::computeShapeVolumeMassProperties  (binary VA: 0x1828180)
// Original: hkpInertiaTensorComputer::computeShapeVolumeMassProperties
// ----------------------------------------------------------------------------
int hkpInertiaTensorComputer::computeShapeVolumeMassProperties(hkpInertiaTensorComputer::Self *self, const hkcdShape::Self *a2, int32_t *a3)
{
  int result; // xmm0_4
  int32_t v4; // xmm1_4
  int32_t v5;
  typedef float _g4_t_v6;
  typedef float _g4_t_v7[4];
  typedef __m128 _g4_t_v8;
  typedef int32_t _g4_t_v9;
  typedef int32_t _g4_t_v10;
  typedef int32_t _g4_t_v11;
  typedef int32_t _g4_t_v12;
  typedef int32_t _g4_t_v13;
  typedef int32_t _g4_t_v14;
  typedef int32_t _g4_t_v15;
  typedef int32_t _g4_t_v16;
  typedef int32_t _g4_t_v17;
  typedef int32_t _g4_t_v18;
  typedef int32_t _g4_t_v19;
  typedef int32_t _g4_t_v20;
  typedef int32_t _g4_t_v21;
  typedef int32_t _g4_t_v22;
  typedef int32_t _g4_t_v23;
  typedef int32_t _g4_t_v24;
  typedef float _g4_t_v25[20];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v10)) > _g4_s4 ? (52u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v11)) > _g4_s5 ? (56u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v12)) > _g4_s6 ? (60u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v13)) > _g4_s7 ? (64u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v14)) > _g4_s8 ? (68u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v15)) > _g4_s9 ? (72u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v16)) > _g4_s10 ? (76u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v17)) > _g4_s11 ? (80u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v18)) > _g4_s12 ? (84u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v19)) > _g4_s13 ? (88u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v20)) > _g4_s14 ? (92u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v21)) > _g4_s15 ? (96u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v22)) > _g4_s16 ? (100u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v23)) > _g4_s17 ? (104u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v24)) > _g4_s18 ? (108u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v25)) > _g4_s19 ? (112u + sizeof(_g4_t_v25)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 68u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);

g4_m128_lane<uint64_t>(v8, 0) = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v25[0] = 1.0;
  v12 = 0;
  v13 = 0;
  memset(&v25[1], 0, 16);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25[5] = 1.0;
  memset(&v25[6], 0, 16);
  v25[10] = 1.0;
  memset(&v25[11], 0, 20);
  sub_1826A80((__m128 *)self, v25, 0.0, &v8);
  result =g4_m128_lane<int32_t>(v8, 0);
  if (g4_m128_lane<float>(v8, 0) != 0.0
    || (sub_1826A80((__m128 *)self, v25, 0.01f, &v8), result =g4_m128_lane<int32_t>(v8, 0),g4_m128_lane<float>(v8, 0) != 0.0) )
  {
    v7[0] = *(float *)&a2 / *(float *)&result;
    v6 = (float)(*(float *)&a2 / *(float *)&result) *g4_m128_lane<float>(v8, 1);
    hkMatrix3f::mul((float *)&v13, v7);
    v4 =g4_m128_lane<int32_t>(v8, 0);
    a3[4] = v9;
    *a3 = v4;
    v5 = v10;
    *((float *)a3 + 1) = v6;
    a3[5] = v5;
    a3[6] = v11;
    a3[7] = v12;
    a3[8] = v13;
    a3[9] = v14;
    a3[10] = v15;
    a3[11] = v16;
    a3[12] = v17;
    a3[13] = v18;
    a3[14] = v19;
    a3[15] = v20;
    a3[16] = v21;
    a3[17] = v22;
    a3[18] = v23;
    a3[19] = v24;
    *(float *)&result = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpInertiaTensorComputer::setShapeVolumeMassProperties  (binary VA: 0x1828400)
// Original: hkpInertiaTensorComputer::setShapeVolumeMassProperties
// ----------------------------------------------------------------------------
int hkpInertiaTensorComputer::setShapeVolumeMassProperties(hkpInertiaTensorComputer::Self *self, const hkpShape::Self *a2, float a3)
{
  int v3;
  int result;
  typedef int32_t _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v15)) > _g4_s10 ? (48u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v16)) > _g4_s11 ? (52u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v17)) > _g4_s12 ? (56u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v18)) > _g4_s13 ? (60u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v19)) > _g4_s14 ? (64u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v20)) > _g4_s15 ? (68u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v21)) > _g4_s16 ? (72u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v22)) > _g4_s17 ? (76u + sizeof(_g4_t_v22)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  hkpInertiaTensorComputer::computeShapeVolumeMassProperties(self, (const hkcdShape::Self *)(a2), &v5);
  v3 = v7;
  *(uint32_t *)(LODWORD(a3) + 144) = v6;
  *(uint32_t *)(LODWORD(a3) + 128) = v3;
  *(uint32_t *)(LODWORD(a3) + 132) = v8;
  *(uint32_t *)(LODWORD(a3) + 136) = v9;
  *(uint32_t *)(LODWORD(a3) + 140) = v10;
  *(uint32_t *)(LODWORD(a3) + 80) = v11;
  *(uint32_t *)(LODWORD(a3) + 84) = v12;
  *(uint32_t *)(LODWORD(a3) + 88) = v13;
  *(uint32_t *)(LODWORD(a3) + 92) = v14;
  *(uint32_t *)(LODWORD(a3) + 96) = v15;
  *(uint32_t *)(LODWORD(a3) + 100) = v16;
  *(uint32_t *)(LODWORD(a3) + 104) = v17;
  *(uint32_t *)(LODWORD(a3) + 108) = v18;
  *(uint32_t *)(LODWORD(a3) + 112) = v19;
  *(uint32_t *)(LODWORD(a3) + 116) = v20;
  *(uint32_t *)(LODWORD(a3) + 120) = v21;
  result = v22;
  *(uint32_t *)(LODWORD(a3) + 124) = v22;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpInertiaTensorComputer::optimizeInertiasOfConstraintTree  (binary VA: 0x1828540)
// Original: hkpInertiaTensorComputer::optimizeInertiasOfConstraintTree
// ----------------------------------------------------------------------------
int hkpInertiaTensorComputer::optimizeInertiasOfConstraintTree(hkpInertiaTensorComputer::Self *self, int a2, hkpRigidBody::Self *a3, hkpRigidBody::Self *a4)
{
  hkLifoAllocator::Self **v4;
  int v5;
  hkLifoAllocator::Self *v6;
  signed int v7;
  int result;
  hkLifoAllocator::Self *v9;
  signed int v10;
  char *v11;
  hkpInertiaTensorComputer::Self *v12;
  int v13;
  int v14;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17[4];
  typedef char *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef signed int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_address)) > _g4_s0 ? (8u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v18)) > _g4_s3 ? (32u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v19)) > _g4_s4 ? (36u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v20)) > _g4_s5 ? (40u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v21)) > _g4_s6 ? (44u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v22)) > _g4_s7 ? (48u + sizeof(_g4_t_v22)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);

  v18 = nullptr;
  v19 = 0;
  v20 = 0x80000000;
  v22 = a2;
  if ( a2 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v9 = *address;
    v10 = (4 * a2 + 127) & 0xFFFFFF80;
    v11 = *((char **)*address + 3);
    if ( v10 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(&v11[v10]) <= *((uint32_t *)v9 + 4) )
      *((uint32_t *)v9 + 3) = (uint32_t)(uintptr_t)(&v11[v10]);
    else
      v11 = (char *)hkLifoAllocator::allocateFromNewSlab(v9, (4 * a2 + 127) & 0xFFFFFF80);
    v18 = v11;
    v20 = a2 | 0x80000000;
    v21 = v11;
    if ( a2 > 0 )
    {
      v12 = self;
      v13 = v19;
      while ( 1 )
      {
        v14 = *(uint32_t *)v12;
        v12 = (hkpInertiaTensorComputer::Self *)((char *)v12 + 4);
        *(uint32_t *)&v11[4 * v13] = v14;
        v13 = ++v19;
        if ( v12 == (hkpInertiaTensorComputer::Self *)((char *)self + 4 * a2) )
          break;
        v11 = v18;
      }
    }
    v4 = address;
  }
  else
  {
    v20 = 0x80000000;
    v21 = nullptr;
    v4 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  }
  LODWORD(v17[0]) = (uint32_t)(uintptr_t)(a4);
  sub_1826470(&v16, (int *)&v18, a3, v17);
  v5 = 0;
  if ( v18 != v21 )
    v5 = v19;
  v19 = v5;
  v6 = *v4;
  v7 = (4 * v22 + 127) & 0xFFFFFF80;
  if ( v7 > *((uint32_t *)*v4 + 2) || *((char **)v6 + 3) != &v21[v7] || v21 == *((char **)v6 + 5) )
    hkLifoAllocator::slowBlockFree(v6, v21, (4 * v22 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)(v21);
  result = v20;
  v19 = 0;
  if ( v20 >= 0 )
    return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v18,
             4 * v20);
  return result;
}


