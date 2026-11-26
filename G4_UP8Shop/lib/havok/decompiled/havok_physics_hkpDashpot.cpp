#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpDashpot.h"

// ----------------------------------------------------------------------------
// Function: hkpDashpotAction::staticClass  (binary VA: 0x18295e0)
// Original: hkpDashpotAction::staticClass
// ----------------------------------------------------------------------------
void * hkpDashpotAction::staticClass()
{
  return &hkpDashpotActionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDashpotAction::applyAction  (binary VA: 0x1840a20)
// Original: hkpDashpotAction::applyAction
// ----------------------------------------------------------------------------
int hkpDashpotAction::applyAction(int a1, float *a2)
{
  int *address;
  int v3;
  uint32_t *v4;
  uint64_t v5; // rax
  int v6;
  float *v7;
  float v8; // xmm4_4
  float v9; // xmm7_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm7_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm7_4
  float v22; // xmm3_4
  uint64_t v23; // rax
  int v24;
  uint32_t *v25;
  typedef float _g4_t_v27;
  typedef int *_g4_t_v28;
  typedef float *_g4_t_v29;
  typedef float _g4_t_v30;
  typedef float *_g4_t_v31;
  typedef float _g4_t_v32[4];
  typedef float _g4_t_v33[4];
  typedef float _g4_t_v34[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v27)) > _g4_s0 ? (12u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v28)) > _g4_s1 ? (24u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v29)) > _g4_s2 ? (28u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v30)) > _g4_s3 ? (28u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v31)) > _g4_s4 ? (28u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v32)) > _g4_s5 ? (32u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v33)) > _g4_s6 ? (48u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v34)) > _g4_s7 ? (64u + sizeof(_g4_t_v34)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v28 = address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TtDashpot");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  v6 = *(uint32_t *)(a1 + 28);
  v29 = *(float **)(a1 + 24);
  v27 = 151.0 * a2[2];
  hkVector4f::setTransformedPos((hkVector4f::Self *)v32, (const hkTransformf::Self *)(v29 + 60), (const hkVector4f::Self *)(a1 + 32));
  hkVector4f::setTransformedPos((hkVector4f::Self *)v33, (const hkTransformf::Self *)(v6 + 240), (const hkVector4f::Self *)(a1 + 48));
  v7 = v29;
  v8 = v29[111] - *(float *)(v6 + 444);
  v9 = *(float *)(a1 + 64) * v27;
  v10 = v27 * *(float *)(a1 + 68);
  v11 = (float)(v29[109] - *(float *)(v6 + 436)) * v10;
  v12 = (float)(v29[110] - *(float *)(v6 + 440)) * v10;
  v30 = v10;
  v13 = v8 * v10;
  v14 = (float)(v32[2] - v33[2]) * v9;
  v15 = (float)(v32[3] - v33[3]) * v9;
  v16 = (float)(v32[0] - v33[0]) * v9;
  v17 = (float)((float)(v32[1] - v33[1]) * v9) + v11;
  v18 = v7[108] - *(float *)(v6 + 432);
  v19 = v15 + v13;
  v20 = v14 + v12;
  *(float *)(a1 + 84) = v17;
  v21 = v18 * v30;
  v31 = v7;
  *(float *)(a1 + 92) = v19;
  *(float *)(a1 + 88) = v20;
  v34[1] = -v17;
  v22 = v16 + v21;
  v34[2] = -v20;
  *(float *)(a1 + 80) = v22;
  v34[0] = -v22;
  v34[3] = -v19;
  hkpEntity::activate((hkpEntity::Self *)v7);
  (*(void (**)(float *, float *, float *, uint32_t, float *, float *, int *, float *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*((uint32_t *)v31 + 56) + 100))(
    v31 + 56,
    v34,
    v32,
    LODWORD(v27),
    v32,
    v33,
    v28,
    v31,
    LODWORD(v32[0]),
    LODWORD(v32[1]),
    LODWORD(v32[2]),
    LODWORD(v32[3]),
    LODWORD(v33[0]),
    LODWORD(v33[1]),
    LODWORD(v33[2]),
    LODWORD(v33[3]));
  hkpEntity::activate((hkpEntity::Self *)v6);
  G4_VCALL<void>(v6 + 224, 100, a1 + 80, a1);
  LODWORD(v23) = (uint32_t)(uintptr_t)(a2);
  v24 = *(uint32_t *)a2;
  v25 = *(uint32_t **)(*(uint32_t *)a2 + 4);
  if ( (unsigned int)(uintptr_t)(v25) < *(uint32_t *)(*(uint32_t *)a2 + 12) )
  {
    *v25 = (uint32_t)(uintptr_t)("Et");
    v23 = __rdtsc();
    v25[1] = v23;
    *(uint32_t *)(v24 + 4) = (uint32_t)(uintptr_t)(v25 + 3);
  }
  return v23;
}

// ----------------------------------------------------------------------------
// Function: hkpDashpotAction::Destroy  (binary VA: 0x1840c60)
// Original: hkpDashpotAction::~hkpDashpotAction
// ----------------------------------------------------------------------------
void hkpDashpotAction::Destroy(hkpDashpotAction::Self *self)
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

  v1 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B2188);
  if ( v1 != 0 )
  {
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
    *((uint32_t *)self + 6) = 0;
  }
  v6 = *((uint32_t *)self + 7);
  if ( v6 != 0 )
  {
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
    *((uint32_t *)self + 7) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Destroy((hkpDashpotAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDashpotAction::Destroy_ea1840d40  (binary VA: 0x1840d40)
// Original: hkpDashpotAction::~hkpDashpotAction
// ----------------------------------------------------------------------------
void hkpDashpotAction::Destroy_ea1840d40(hkpDashpotAction::Self *self)
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
  int v12;

  v1 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B2188);
  if ( v1 != 0 )
  {
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
    *((uint32_t *)self + 6) = 0;
  }
  v6 = *((uint32_t *)self + 7);
  if ( v6 != 0 )
  {
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
    *((uint32_t *)self + 7) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Destroy((hkpDashpotAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v11 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v12 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v12 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v11, 12, self, v12);
}

// ----------------------------------------------------------------------------
// Function: hkpDashpotAction::Construct  (binary VA: 0x1840e60)
// Original: hkpDashpotAction::hkpDashpotAction
// ----------------------------------------------------------------------------
void hkpDashpotAction::Construct(hkpDashpotAction::Self *self, hkpRigidBody::Self *a2, hkpRigidBody::Self *a3, unsigned int a4)
{
  hkpBinaryAction::Construct(self, a2, a3, a4);
  *((uint32_t *)self + 16) = 1036831949;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3608);
  *((uint32_t *)self + 17) = 1008981770;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpDashpotAction::clone  (binary VA: 0x1840ee0)
// Original: hkpDashpotAction::clone
// ----------------------------------------------------------------------------
hkpDashpotAction::Self * hkpDashpotAction::clone(unsigned int *a1, int a2, int a3)
{
  hkpDashpotAction::Self *result;
  hkpRigidBody::Self *v4;
  int address;
  hkpDashpotAction::Self *v6;
  hkpRigidBody::Self *v7;

  result = nullptr;
  if ( *(uint32_t *)(a2 + 4) == 2 && *(uint32_t *)(a3 + 4) == 0 )
  {
    v4 = **(hkpRigidBody::Self ***)a2;
    v7 = *(hkpRigidBody::Self **)(*(uint32_t *)a2 + 4);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (hkpDashpotAction::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                               *(uint32_t *)(*(uint32_t *)address + 44),
                               96);
    hkpDashpotAction::Construct(v6, v4, v7, a1[4]);
    *((uint32_t *)v6 + 8) = a1[8];
    *((uint32_t *)v6 + 9) = a1[9];
    *((uint32_t *)v6 + 10) = a1[10];
    *((uint32_t *)v6 + 11) = a1[11];
    *((uint32_t *)v6 + 12) = a1[12];
    *((uint32_t *)v6 + 13) = a1[13];
    *((uint32_t *)v6 + 14) = a1[14];
    *((uint32_t *)v6 + 15) = a1[15];
    *((uint32_t *)v6 + 16) = a1[16];
    *((uint32_t *)v6 + 17) = a1[17];
    *((uint32_t *)v6 + 20) = a1[20];
    *((uint32_t *)v6 + 21) = a1[21];
    *((uint32_t *)v6 + 22) = a1[22];
    *((uint32_t *)v6 + 23) = a1[23];
    return v6;
  }
  return result;
}


