#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSimpleW.h"

// ----------------------------------------------------------------------------
// Function: hkpSimpleWorldRayCaster::Destroy  (binary VA: 0x1aea460)
// Original: hkpSimpleWorldRayCaster::~hkpSimpleWorldRayCaster
// ----------------------------------------------------------------------------
void hkpSimpleWorldRayCaster::Destroy(hkpSimpleWorldRayCaster::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2055238);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleWorldRayCaster::Destroy_ea1aea480  (binary VA: 0x1aea480)
// Original: hkpSimpleWorldRayCaster::~hkpSimpleWorldRayCaster
// ----------------------------------------------------------------------------
void hkpSimpleWorldRayCaster::Destroy_ea1aea480(hkpSimpleWorldRayCaster::Self *self)
{
  uint32_t *address;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2055238);
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  (*(void (**)(uint32_t, hkpSimpleWorldRayCaster::Self *, int))(**(uint32_t **)(*address + 44) + 12))(
    *(uint32_t *)(*address + 44),
    self,
    64);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleWorldRayCaster::addBroadPhaseHandle  (binary VA: 0x1aea4d0)
// Original: hkpSimpleWorldRayCaster::addBroadPhaseHandle
// ----------------------------------------------------------------------------
long double hkpSimpleWorldRayCaster::addBroadPhaseHandle(hkpSimpleWorldRayCaster::Self *self, const hkpBroadPhaseHandle *a2, int a3)
{
  int v3;
  int v5;
  float *v6;
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  int v21;
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  float v28; // xmm5_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  typedef int _g4_t_v33;
  typedef float *_g4_t_v34;
  typedef int *_g4_t_v35;
  typedef uint8_t _g4_t_v36[9];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v33)) > _g4_s0 ? (12u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v34)) > _g4_s1 ? (16u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v35)) > _g4_s2 ? (20u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v36)) > _g4_s3 ? (31u + sizeof(_g4_t_v36)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 31u);

  v35 = (int *)((char *)a2 + *((char *)a2 + 5));
  v3 = *((uint32_t *)self + 3) + 80 * a3;
  v33 = *v35;
  if ( *v35 != 0 )
  {
    (*(void (**)(uint8_t *))(**((uint32_t **)self + 2) + 8))(v36);
    if ( v36[0] != 0 )
    {
      v5 = *((uint32_t *)self + 1) + 48 * a3;
      v6 = (float *)v35[2];
      v7 = *(float *)v5 - v6[12];
      v8 = *(float *)(v5 + 4) - v6[13];
      v9 = *(float *)(v5 + 8) - v6[14];
      v10 = (float)(*v6 * v7) + (float)(v6[1] * v8);
      v11 = v6[4] * v7;
      v12 = (float)((float)(v7 * v6[8]) + (float)(v8 * v6[9])) + (float)(v6[10] * v9);
      v13 = v10 + (float)(v9 * v6[2]);
      *((float *)self + 5) = (float)(v11 + (float)(v6[5] * v8)) + (float)(v6[6] * v9);
      *((float *)self + 6) = v12;
      *((float *)self + 4) = v13;
      *((float *)self + 7) = v12;
      v14 = *(float *)(v5 + 16) - v6[12];
      v15 = *(float *)(v5 + 20) - v6[13];
      v16 = *(float *)(v5 + 24) - v6[14];
      v17 = (float)(*v6 * v14) + (float)(v6[1] * v15);
      v18 = (float)(v6[4] * v14) + (float)(v6[5] * v15);
      v34 = v6;
      v19 = (float)((float)(v14 * v6[8]) + (float)(v15 * v6[9])) + (float)(v6[10] * v16);
      v20 = v17 + (float)(v16 * v6[2]);
      *((float *)self + 9) = v18 + (float)(v6[6] * v16);
      *((float *)self + 10) = v19;
      *((float *)self + 8) = v20;
      *((float *)self + 11) = v19;
      v21 = *(uint32_t *)(v5 + 36);
      *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(v35);
      *((uint32_t *)self + 12) = v21;
      *((uint32_t *)self + 15) = *(uint32_t *)(v5 + 40);
      (*(void (**)(uint8_t *))(*(uint32_t *)v33 + 28))(v36);
      if ( v36[0] != 0 )
      {
        v22 = *(float *)v3;
        v23 = *(float *)(v3 + 4);
        *(uint32_t *)(v3 + 68) = (uint32_t)(uintptr_t)(v35);
        v24 = *v34 * v22;
        v25 = *(float *)(v3 + 8);
        *(float *)v3 = v24;
        v26 = v34[1] * v22;
        *(float *)(v3 + 4) = v26;
        v27 = v34[2] * v22;
        *(float *)(v3 + 8) = v27;
        v28 = v34[3] * v22;
        *(float *)(v3 + 12) = v28;
        v29 = (float)(v34[4] * v23) + v24;
        *(float *)v3 = v29;
        v30 = (float)(v34[5] * v23) + v26;
        *(float *)(v3 + 4) = v30;
        v31 = (float)(v34[6] * v23) + v27;
        *(float *)(v3 + 8) = v31;
        v32 = (float)(v23 * v34[7]) + v28;
        *(float *)(v3 + 12) = v32;
        *(float *)v3 = (float)(v34[8] * v25) + v29;
        *(float *)(v3 + 4) = (float)(v34[9] * v25) + v30;
        *(float *)(v3 + 8) = (float)(v34[10] * v25) + v31;
        *(float *)(v3 + 12) = (float)(v25 * v34[11]) + v32;
      }
    }
  }
  return *(float *)(v3 + 16);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleWorldRayCaster::castRay  (binary VA: 0x1aea790)
// Original: hkpSimpleWorldRayCaster::castRay
// ----------------------------------------------------------------------------
int hkpSimpleWorldRayCaster::castRay(uint32_t *a1, int a2, int *a3, int a4, int a5)
{
  uint32_t *v5;
  uint64_t v6; // rax
  uint64_t v7; // rax
  int v8;
  uint32_t *v9;
  int v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_address;
  typedef uint32_t _g4_t_v16[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_address)) > _g4_s3 ? (12u + sizeof(_g4_t_address)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v16)) > _g4_s4 ? (16u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  address = _emutls_get_address(g4_emutls_v_hkMonitorStream__m_instance);
  v14 = *address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtRayCastSimpl");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  a1[1] = (uint32_t)(uintptr_t)(a3);
  a1[3] = a5;
  if ( a4 != 0 )
  {
    a1[2] = a4 + 20;
    if ( *((uint8_t *)a3 + 32) == 0 )
    {
LABEL_5:
      a1[13] = 0;
      goto LABEL_6;
    }
    v10 = a4 + 16;
  }
  else
  {
    a1[2] = 0;
    if ( *((uint8_t *)a3 + 32) == 0 )
      goto LABEL_5;
    v10 = 0;
  }
  a1[13] = v10;
LABEL_6:
  v16[0] = *a3;
  v16[1] = a3[1];
  v16[2] = a3[2];
  v16[3] = a3[3];
  v16[4] = 1;
  v16[5] = (uint32_t)(uintptr_t)(a3 + 4);
  v16[6] = 16;
  v16[7] = 0;
  G4_VCALL<void>(a2, 108, v16, a1, 0, v12, v13, v14, address);
  LODWORD(v7) = (uint32_t)(uintptr_t)(a3);
  v8 = *a3;
  v9 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*a3 + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("Et");
    v7 = __rdtsc();
    v9[1] = v7;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleWorldRayCaster::castRay  (binary VA: 0x1aea8c0)
// Original: hkpSimpleWorldRayCaster::castRay
// ----------------------------------------------------------------------------
int hkpSimpleWorldRayCaster::castRay(uint32_t *a1, int a2, int *a3, int a4, int a5, int a6)
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
  typedef uint32_t *_g4_t_address;
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

  address = _emutls_get_address(g4_emutls_v_hkMonitorStream__m_instance);
  v15 = *address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtRayCstCchSim");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v15 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  a1[1] = (uint32_t)(uintptr_t)(a3);
  a1[3] = a6;
  if ( a4 != 0 )
  {
    a1[2] = a4 + 20;
    if ( *((uint8_t *)a3 + 32) == 0 )
    {
LABEL_5:
      a1[13] = 0;
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
  a1[13] = v11;
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
// Function: hkpSimpleWorldRayCaster::castRaysFromSinglePoint  (binary VA: 0x1aea9f0)
// Original: hkpSimpleWorldRayCaster::castRaysFromSinglePoint
// ----------------------------------------------------------------------------
int hkpSimpleWorldRayCaster::castRaysFromSinglePoint(uint32_t *a1, int a2, int *a3, int a4, int a5, int a6, int a7)
{
  uint32_t *v7;
  uint64_t v8; // rax
  uint64_t v9; // rax
  int v10;
  uint32_t *v11;
  int v12;
  int v14;
  int v15;
  int v16;
  uint32_t *address;
  uint32_t v18[11];

  address = _emutls_get_address(g4_emutls_v_hkMonitorStream__m_instance);
  v16 = *address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtRayCstFSPSim");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  a1[1] = (uint32_t)(uintptr_t)(a3);
  a1[3] = a7;
  if ( a5 != 0 )
  {
    a1[2] = a5 + 20;
    if ( *((uint8_t *)a3 + 32) == 0 )
    {
LABEL_5:
      a1[13] = 0;
      goto LABEL_6;
    }
    v12 = a5 + 16;
  }
  else
  {
    a1[2] = 0;
    if ( *((uint8_t *)a3 + 32) == 0 )
      goto LABEL_5;
    v12 = 0;
  }
  a1[13] = v12;
LABEL_6:
  v18[0] = *a3;
  v18[1] = a3[1];
  v18[2] = a3[2];
  v18[3] = a3[3];
  v18[7] = a6;
  v18[4] = a4;
  v18[6] = 48;
  v18[5] = (uint32_t)(uintptr_t)(a3 + 4);
  G4_VCALL<void>(a2, 108, v18, a1, 0, v14, v15, v16, address);
  LODWORD(v9) = (uint32_t)(uintptr_t)(a3);
  v10 = *a3;
  v11 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*a3 + 12) )
  {
    *v11 = (uint32_t)(uintptr_t)("Et");
    v9 = __rdtsc();
    v11[1] = v9;
    *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
  }
  return v9;
}


