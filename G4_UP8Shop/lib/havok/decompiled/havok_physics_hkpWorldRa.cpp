#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldRa.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldRayCaster::Destroy  (binary VA: 0x169a490)
// Original: hkpWorldRayCaster::~hkpWorldRayCaster
// ----------------------------------------------------------------------------
void hkpWorldRayCaster::Destroy(hkpWorldRayCaster::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2055238);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldRayCaster::Destroy_ea169a4e0  (binary VA: 0x169a4e0)
// Original: hkpWorldRayCaster::~hkpWorldRayCaster
// ----------------------------------------------------------------------------
void hkpWorldRayCaster::Destroy_ea169a4e0(hkpWorldRayCaster::Self *self)
{
  int address;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2055238);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpWorldRayCaster::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    80);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldRayCaster::addBroadPhaseHandle  (binary VA: 0x169a530)
// Original: hkpWorldRayCaster::addBroadPhaseHandle
// ----------------------------------------------------------------------------
long double hkpWorldRayCaster::addBroadPhaseHandle(hkpWorldRayCaster::Self *self, const hkpBroadPhaseHandle *a2, int a3)
{
  int v3;
  int v4;
  float *v6;
  float *v7;
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int *_g4_t_v24;
  typedef uint8_t _g4_t_v25[9];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v25)) > _g4_s3 ? (15u + sizeof(_g4_t_v25)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 15u);

  v3 = *((uint32_t *)self + 3) + a3 * *((uint32_t *)self + 4);
  v24 = (int *)((char *)a2 + *((char *)a2 + 5));
  v23 = *v24;
  if ( *v24 != 0 )
  {
    v22 = *((uint32_t *)self + 3) + a3 * *((uint32_t *)self + 4);
    v4 = *((uint32_t *)self + 1) + 48 * a3;
    (*(void (**)(uint8_t *))(**((uint32_t **)self + 2) + 8))(v25);
    v3 = v22;
    if ( v25[0] != 0 )
    {
      v6 = *((float **)self + 1);
      v7 = (float *)v24[2];
      v8 = *v6 - v7[12];
      v9 = v6[1] - v7[13];
      v10 = v6[2] - v7[14];
      v11 = (float)(*v7 * v8) + (float)(v7[1] * v9);
      v12 = v7[4] * v8;
      v13 = (float)((float)(v8 * v7[8]) + (float)(v9 * v7[9])) + (float)(v7[10] * v10);
      v14 = v11 + (float)(v10 * v7[2]);
      *((float *)self + 9) = (float)(v12 + (float)(v7[5] * v9)) + (float)(v7[6] * v10);
      *((float *)self + 10) = v13;
      *((float *)self + 8) = v14;
      *((float *)self + 11) = v13;
      v15 = *(float *)(v4 + 16) - v7[12];
      v16 = *(float *)(v4 + 20) - v7[13];
      v17 = *(float *)(v4 + 24) - v7[14];
      v18 = (float)(*v7 * v15) + (float)(v7[1] * v16);
      v19 = (float)(v7[4] * v15) + (float)(v7[5] * v16);
      v20 = v7[6] * v17;
      v21 = (float)((float)(v15 * v7[8]) + (float)(v16 * v7[9])) + (float)(v7[10] * v17);
      *((float *)self + 12) = v18 + (float)(v17 * v7[2]);
      *((float *)self + 13) = v19 + v20;
      *((float *)self + 14) = v21;
      *((float *)self + 15) = v21;
      *((uint32_t *)self + 16) = *(uint32_t *)(v4 + 36);
      *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)(v24);
      *((uint32_t *)self + 19) = *(uint32_t *)(v4 + 40);
      G4_VCALL<void>(v23, 32, (char *)self + 32, v24, v22);
      v3 = v22;
    }
  }
  return *(float *)(v3 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldRayCaster::castRay  (binary VA: 0x169a710)
// Original: hkpWorldRayCaster::castRay
// ----------------------------------------------------------------------------
int hkpWorldRayCaster::castRay(uint32_t *a1, int a2, int *a3, int a4, int a5, int a6)
{
  uint32_t *v6;
  uint64_t v7; // rax
  uint64_t v8; // rax
  int v9;
  uint32_t *v10;
  int v11;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int *_g4_t_address;
  typedef uint32_t _g4_t_v17[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_address)) > _g4_s3 ? (12u + sizeof(_g4_t_address)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v15 = *address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtRayCstCached");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v15 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  a1[1] = (uint32_t)(uintptr_t)(a3);
  a1[3] = a6;
  a1[4] = 0;
  if ( a4 != 0 )
  {
    a1[2] = a4 + 20;
    if ( *((uint8_t *)a3 + 32) == 0 )
    {
LABEL_5:
      a1[17] = 0;
      goto LABEL_6;
    }
    v11 = a4 + 16;
  }
  else
  {
    a1[2] = 0;
    if ( *((uint8_t *)a3 + 32) == 0 )
      goto LABEL_5;
    v11 = 0;
  }
  a1[17] = v11;
LABEL_6:
  v17[0] = *a3;
  v17[1] = a3[1];
  v17[2] = a3[2];
  v17[3] = a3[3];
  v17[7] = a5;
  v17[4] = 1;
  v17[5] = (uint32_t)(uintptr_t)(a3 + 4);
  v17[6] = 16;
  G4_VCALL<void>(a2, 108, v17, a1, 0, v13, v14, v15, address);
  LODWORD(v8) = (uint32_t)(uintptr_t)(a3);
  v9 = *a3;
  v10 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*a3 + 12) )
  {
    *v10 = (uint32_t)(uintptr_t)("Et");
    v8 = __rdtsc();
    v10[1] = v8;
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldRayCaster::castRaysFromSinglePoint  (binary VA: 0x169a850)
// Original: hkpWorldRayCaster::castRaysFromSinglePoint
// ----------------------------------------------------------------------------
int hkpWorldRayCaster::castRaysFromSinglePoint(uint32_t *a1, int a2, int *a3, int a4, int a5, int a6, int a7, int a8)
{
  uint32_t *v8;
  uint64_t v9; // rax
  uint64_t v10; // rax
  int v11;
  uint32_t *v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int *address;
  uint32_t v19[11];

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v17 = *address;
  v8 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtRayCastFSP");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  a1[1] = (uint32_t)(uintptr_t)(a3);
  if ( a5 != 0 )
  {
    a1[2] = a5 + 20;
    a1[3] = a7;
    a1[4] = a8;
    if ( *((uint8_t *)a3 + 32) == 0 )
    {
LABEL_5:
      a1[17] = 0;
      goto LABEL_6;
    }
    v13 = a5 + 16;
  }
  else
  {
    a1[2] = 0;
    a1[3] = a7;
    a1[4] = a8;
    if ( *((uint8_t *)a3 + 32) == 0 )
      goto LABEL_5;
    v13 = 0;
  }
  a1[17] = v13;
LABEL_6:
  v19[0] = *a3;
  v19[1] = a3[1];
  v19[2] = a3[2];
  v19[3] = a3[3];
  v19[7] = a6;
  v19[4] = a4;
  v19[6] = 48;
  v19[5] = (uint32_t)(uintptr_t)(a3 + 4);
  G4_VCALL<void>(a2, 108, v19, a1, 0, v15, v16, v17, address);
  LODWORD(v10) = (uint32_t)(uintptr_t)(a3);
  v11 = *a3;
  v12 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*a3 + 12) )
  {
    *v12 = (uint32_t)(uintptr_t)("Et");
    v10 = __rdtsc();
    v12[1] = v10;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldRayCastJob::setRunsOnSpuOrPpu  (binary VA: 0x1aea350)
// Original: hkpWorldRayCastJob::setRunsOnSpuOrPpu
// ----------------------------------------------------------------------------
void hkpWorldRayCastJob::setRunsOnSpuOrPpu()
{
  ;
}


