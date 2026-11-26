#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpImpulse.h"

// ----------------------------------------------------------------------------
// Function: hkpImpulseAccumulator::Construct  (binary VA: 0x1835d00)
// Original: hkpImpulseAccumulator::hkpImpulseAccumulator
// ----------------------------------------------------------------------------
void hkpImpulseAccumulator::Construct(hkpImpulseAccumulator::Self *self, hkpRigidBody::Self *a2, float a3)
{
  int v3;

  *((float *)self + 1) = a3;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 80);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 81);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 82);
  v3 = *((uint32_t *)a2 + 83);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 7) = v3;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpImpulseAccumulator::clearImpulses  (binary VA: 0x1835d70)
// Original: hkpImpulseAccumulator::clearImpulses
// ----------------------------------------------------------------------------
hkpImpulseAccumulator::Self * hkpImpulseAccumulator::clearImpulses(hkpImpulseAccumulator::Self *self)
{
  *((g4_int128_t *)self + 2) = 0;
  *((g4_int128_t *)self + 3) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpImpulseAccumulator::flushImpulses  (binary VA: 0x1835d90)
// Original: hkpImpulseAccumulator::flushImpulses
// ----------------------------------------------------------------------------
hkpImpulseAccumulator::Self * hkpImpulseAccumulator::flushImpulses(hkpImpulseAccumulator::Self *self)
{
  int v1;
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6;
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  float v10; // xmm3_4
  typedef float _g4_t_v12[4];
  typedef float _g4_t_v13[4];
  typedef float _g4_t_v14[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v1 = *(uint32_t *)self;
  v2 = *(float *)(*(uint32_t *)self + 428);
  v12[0] = (float)(*((float *)self + 8) * v2) + *(float *)(*(uint32_t *)self + 432);
  v12[1] = (float)(*((float *)self + 9) * v2) + *(float *)(v1 + 436);
  v3 = (float)(*((float *)self + 10) * v2) + *(float *)(v1 + 440);
  v4 = (float)(v2 * *((float *)self + 11)) + *(float *)(v1 + 444);
  v12[2] = v3;
  v12[3] = v4;
  hkpEntity::activate((hkpEntity::Self *)v1);
  G4_VCALL<void>(v1 + 224, 80, v12);
  G4_VCALL<void>(*(uint32_t *)self + 224, 56, v14);
  v5 = *((float *)self + 12);
  v6 = *(float *)self;
  v7 = *((float *)self + 13);
  v8 = *((float *)self + 14);
  v13[1] = (float)((float)((float)(v14[1] * v5) + (float)(v14[5] * v7)) + (float)(v14[9] * v8))
         + *(float *)(*(uint32_t *)self + 452);
  v13[2] = (float)((float)((float)(v14[2] * v5) + (float)(v14[6] * v7)) + (float)(v14[10] * v8))
         + *(float *)(LODWORD(v6) + 456);
  v9 = (float)((float)((float)(v14[3] * v5) + (float)(v14[7] * v7)) + (float)(v14[11] * v8))
     + *(float *)(LODWORD(v6) + 460);
  v10 = (float)((float)((float)(v5 * v14[0]) + (float)(v7 * v14[4])) + (float)(v8 * v14[8]))
      + *(float *)(LODWORD(v6) + 448);
  v13[3] = v9;
  v13[0] = v10;
  hkpEntity::activate((hkpEntity::Self *)LODWORD(v6));
  G4_VCALL<void>(LODWORD(v6) + 224, 84, v13);
  return hkpImpulseAccumulator::clearImpulses(self);
}


