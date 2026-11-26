#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpAngular.h"

// ----------------------------------------------------------------------------
// Function: hkpAngularDashpotAction::staticClass  (binary VA: 0x1823c30)
// Original: hkpAngularDashpotAction::staticClass
// ----------------------------------------------------------------------------
void * hkpAngularDashpotAction::staticClass()
{
  return &hkpAngularDashpotActionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpAngularDashpotAction::applyAction  (binary VA: 0x182b8d0)
// Original: hkpAngularDashpotAction::applyAction
// ----------------------------------------------------------------------------
int hkpAngularDashpotAction::applyAction(int a1, int a2)
{
  float *v2;
  float v3; // xmm0_4
  int v4;
  int v5;
  float v6; // xmm2_4
  float v7; // xmm4_4
  float v8; // xmm7_4
  float v9; // xmm3_4
  float v10; // xmm6_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm4_4
  float v15; // xmm7_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  float v27; // xmm4_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef int *_g4_t_v47;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v35)) > _g4_s4 ? (28u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v36)) > _g4_s5 ? (32u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v37)) > _g4_s6 ? (36u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v38)) > _g4_s7 ? (40u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v39)) > _g4_s8 ? (44u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v40)) > _g4_s9 ? (48u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v41)) > _g4_s10 ? (52u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v42)) > _g4_s11 ? (56u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v43)) > _g4_s12 ? (60u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v44)) > _g4_s13 ? (64u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v45)) > _g4_s14 ? (68u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v46)) > _g4_s15 ? (72u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v47)) > _g4_s16 ? (84u + sizeof(_g4_t_v47)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);

  v47 = &a1;
  v2 = (float *)a1;
  v3 = *(float *)(a1 + 36);
  v4 = *(uint32_t *)(a1 + 28);
  v5 = *(uint32_t *)(a1 + 24);
  v6 = *(float *)(v4 + 356);
  v7 = *(float *)(v4 + 352);
  v8 = *(float *)(v4 + 364);
  v37 = 200.0 * *(float *)(a2 + 8);
  v9 = (float)(*(float *)(a1 + 44) * v8)
     - (float)((float)((float)(*(float *)(a1 + 32) * v7) + (float)(v6 * v3))
             + (float)(*(float *)(v4 + 360) * *(float *)(a1 + 40)));
  v10 = -(float)((float)((float)((float)(v2[10] * v6) - (float)(*(float *)(v4 + 360) * v3)) + (float)(v2[8] * v8))
               + (float)(v2[11] * v7));
  v11 = -(float)((float)((float)((float)(*(float *)(v4 + 360) * v2[8]) - (float)(v2[10] * v7)) + (float)(v8 * v3))
               + (float)(v2[11] * v6));
  v34 = a1;
  v12 = *(float *)(v5 + 356);
  v13 = -(float)((float)((float)((float)(v3 * v7) - (float)(v6 * *(float *)(a1 + 32)))
                       + (float)(v8 * *(float *)(a1 + 40)))
               + (float)(*(float *)(v4 + 360) * *(float *)(a1 + 44)));
  v14 = (float)(*(float *)(v5 + 352) * v10) + (float)(v11 * v12);
  v15 = *(float *)(v5 + 352) * v13;
  v39 = (float)((float)((float)(v13 * v12) - (float)(*(float *)(v5 + 360) * v11)) + (float)(*(float *)(v5 + 364) * v10))
      + (float)(*(float *)(v5 + 352) * v9);
  v16 = (float)((float)(*(float *)(v5 + 360) * v10) - v15) + (float)(*(float *)(v5 + 364) * v11);
  v17 = v9 * v12;
  v18 = (float)(v11 * *(float *)(v5 + 352)) - (float)(v12 * v10);
  v19 = *(float *)(v5 + 448) - *(float *)(v4 + 448);
  v35 = *(float *)(v5 + 460) - *(float *)(v4 + 460);
  v40 = v16 + v17;
  v20 = (float)(v18 + (float)(*(float *)(v5 + 364) * v13)) + (float)(*(float *)(v5 + 360) * v9);
  v21 = (float)(v9 * *(float *)(v5 + 364)) - (float)(v14 + (float)(v13 * *(float *)(v5 + 360)));
  v22 = *(float *)(v5 + 452) - *(float *)(v4 + 452);
  v23 = *(float *)(v5 + 456) - *(float *)(v4 + 456);
  v41 = v20;
  v42 = v21;
  v36 = v22;
  hkQuaternionf::getAngleSr((hkQuaternionf::Self *)&v38, (int)(uintptr_t)(&v39));
  if ( v38 <= 0.001f )
  {
    v27 = 0.0;
    v26 = 0.0;
    v25 = 0.0;
    v24 = 0.0;
  }
  else
  {
    v24 = v39 * v38;
    v25 = v40 * v38;
    v26 = v41 * v38;
    v27 = v38 * v42;
  }
  v28 = *(float *)(v34 + 48) * v37;
  v29 = v37 * *(float *)(v34 + 52);
  v43 = (float)(v24 * v28) + (float)(v19 * v29);
  v44 = (float)(v25 * v28) + (float)(v36 * v29);
  v45 = (float)(v26 * v28) + (float)(v23 * v29);
  v46 = (float)(v28 * v27) + (float)(v29 * v35);
  hkpEntity::activate((hkpEntity::Self *)v4);
  G4_VCALL<void>(v4 + 224, 104, &v43, v31, v32, v33, v34, COERCE_FLOAT(LODWORD(v19)), COERCE_FLOAT(LODWORD(v23)), COERCE_FLOAT(LODWORD(v35)), COERCE_FLOAT(LODWORD(v36)), COERCE_FLOAT(LODWORD(v37)), COERCE_FLOAT(LODWORD(v38)), COERCE_FLOAT(LODWORD(v39)), COERCE_FLOAT(LODWORD(v40)), COERCE_FLOAT(LODWORD(v41)), COERCE_FLOAT(LODWORD(v42)));
  v43 = -v43;
  v44 = -v44;
  v45 = -v45;
  v46 = -v46;
  hkpEntity::activate((hkpEntity::Self *)v5);
  return G4_VCALL<int>(v5 + 224, 104, &v43);
}

// ----------------------------------------------------------------------------
// Function: hkpAngularDashpotAction::Destroy  (binary VA: 0x182bc90)
// Original: hkpAngularDashpotAction::~hkpAngularDashpotAction
// ----------------------------------------------------------------------------
void hkpAngularDashpotAction::Destroy(hkpAngularDashpotAction::Self *self)
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
  hkStringPtr::Destroy((hkpAngularDashpotAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpAngularDashpotAction::Destroy_ea182bd70  (binary VA: 0x182bd70)
// Original: hkpAngularDashpotAction::~hkpAngularDashpotAction
// ----------------------------------------------------------------------------
void hkpAngularDashpotAction::Destroy_ea182bd70(hkpAngularDashpotAction::Self *self)
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
  hkStringPtr::Destroy((hkpAngularDashpotAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v11 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v12 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v12 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v11, 12, self, v12);
}

// ----------------------------------------------------------------------------
// Function: hkpAngularDashpotAction::Construct  (binary VA: 0x182be90)
// Original: hkpAngularDashpotAction::hkpAngularDashpotAction
// ----------------------------------------------------------------------------
void hkpAngularDashpotAction::Construct(hkpAngularDashpotAction::Self *self, hkpRigidBody::Self *a2, hkpRigidBody::Self *a3, unsigned int a4)
{
  hkpBinaryAction::Construct(self, a2, a3, a4);
  *((uint32_t *)self + 12) = 1036831949;
  *((uint32_t *)self + 13) = 1008981770;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1B08);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 1065353216;
}

// ----------------------------------------------------------------------------
// Function: hkpAngularDashpotAction::clone  (binary VA: 0x182bf10)
// Original: hkpAngularDashpotAction::clone
// ----------------------------------------------------------------------------
hkpAngularDashpotAction::Self * hkpAngularDashpotAction::clone(unsigned int *a1, int a2, int a3)
{
  hkpAngularDashpotAction::Self *result;
  hkpRigidBody::Self *v4;
  int address;
  hkpAngularDashpotAction::Self *v6;
  hkpRigidBody::Self *v7;

  result = nullptr;
  if ( *(uint32_t *)(a2 + 4) == 2 && *(uint32_t *)(a3 + 4) == 0 )
  {
    v4 = **(hkpRigidBody::Self ***)a2;
    v7 = *(hkpRigidBody::Self **)(*(uint32_t *)a2 + 4);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (hkpAngularDashpotAction::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                      *(uint32_t *)(*(uint32_t *)address + 44),
                                      64);
    hkpAngularDashpotAction::Construct(v6, v4, v7, a1[4]);
    *((uint32_t *)v6 + 8) = a1[8];
    *((uint32_t *)v6 + 9) = a1[9];
    *((uint32_t *)v6 + 10) = a1[10];
    *((uint32_t *)v6 + 11) = a1[11];
    *((uint32_t *)v6 + 12) = a1[12];
    *((uint32_t *)v6 + 13) = a1[13];
    return v6;
  }
  return result;
}


