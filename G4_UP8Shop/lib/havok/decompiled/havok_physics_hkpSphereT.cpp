#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSphereT.h"

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::cleanup  (binary VA: 0x16a4a60)
// Original: hkpSphereTriangleAgent::cleanup
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::cleanup(hkpSphereTriangleAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  int v2;

  v2 = *((uint16_t *)self + 6);
  if ( (uint16_t)v2 != 0xFFFF )
    (*(void (**)(uint32_t, int, hkpConstraintOwner::Self *))(**((uint32_t **)self + 2) + 28))(
      *((uint32_t *)self + 2),
      v2,
      a2);
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::Destroy  (binary VA: 0x16a4aa0)
// Original: hkpSphereTriangleAgent::~hkpSphereTriangleAgent
// ----------------------------------------------------------------------------
void hkpSphereTriangleAgent::Destroy(hkpSphereTriangleAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::Destroy_ea16a4c70  (binary VA: 0x16a4c70)
// Original: hkpSphereTriangleAgent::~hkpSphereTriangleAgent
// ----------------------------------------------------------------------------
void hkpSphereTriangleAgent::Destroy_ea16a4c70(hkpSphereTriangleAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::staticGetPenetrations  (binary VA: 0x16a4cd0)
// Original: hkpSphereTriangleAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::staticGetPenetrations(int *a1, int *a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  float *v10;
  float *v11;
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  uint64_t v20; // rax
  int v21;
  uint32_t *v22;
  typedef int *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26[4];
  typedef uint8_t _g4_t_v27[16];
  typedef float _g4_t_v28[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v27)) > _g4_s3 ? (32u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v28)) > _g4_s4 ? (48u + sizeof(_g4_t_v28)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v24 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtSphereTri");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = *a2;
  v9 = *a2 + 32;
  v25 = *a1;
  hkpCollideTriangleUtil::setupClosestPointTriangleCache(v9, v27);
  v10 = (float *)a2[2];
  v11 = (float *)a1[2];
  v12 = v11[12] - v10[12];
  v13 = v11[13] - v10[13];
  v14 = v11[14] - v10[14];
  v15 = (float)(*v10 * v12) + (float)(v10[1] * v13);
  v16 = (float)(v10[4] * v12) + (float)(v10[5] * v13);
  v17 = (float)(v12 * v10[8]) + (float)(v13 * v10[9]);
  v18 = v10[10] * v14;
  v19 = v15 + (float)(v14 * v10[2]);
  v26[1] = v16 + (float)(v10[6] * v14);
  v26[2] = v17 + v18;
  v26[3] = v17 + v18;
  v26[0] = v19;
  hkpCollideTriangleUtil::closestPointTriangle(v26, v9, v27, v28, 0);
  if ( (float)(*(float *)(v25 + 16) + *(float *)(v8 + 16)) > v28[4] )
    G4_VCALL<void>(a4, 8, a1, a2);
  LODWORD(v20) = (uint32_t)(uintptr_t)(v24);
  v21 = *v24;
  v22 = *(uint32_t **)(*v24 + 4);
  if ( (unsigned int)(uintptr_t)(v22) < *(uint32_t *)(*v24 + 12) )
  {
    *v22 = (uint32_t)(uintptr_t)("Et");
    v20 = __rdtsc();
    v22[1] = v20;
    *(uint32_t *)(v21 + 4) = (uint32_t)(uintptr_t)(v22 + 3);
  }
  return v20;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::createSphereTriangleAgent  (binary VA: 0x16a4ed0)
// Original: hkpSphereTriangleAgent::createSphereTriangleAgent
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::createSphereTriangleAgent(int a1, uint32_t *a2, int a3, int a4)
{
  int address;
  int v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         32);
  *(uint32_t *)(v5 + 4) = -65535;
  *(uint32_t *)(v5 + 8) = a4;
  *(uint16_t *)(v5 + 12) = -1;
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209A0A8);
  hkpCollideTriangleUtil::setupClosestPointTriangleCache(*a2 + 32, v5 + 16);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::createTriangleSphereAgent  (binary VA: 0x16a4f50)
// Original: hkpSphereTriangleAgent::createTriangleSphereAgent
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::createTriangleSphereAgent(uint32_t *a1, int a2, int a3, int a4)
{
  int address;
  int v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         32);
  *(uint32_t *)(v5 + 4) = -65535;
  *(uint32_t *)(v5 + 8) = a4;
  *(uint16_t *)(v5 + 12) = -1;
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209A0A8);
  hkpCollideTriangleUtil::setupClosestPointTriangleCache(*a1 + 32, v5 + 16);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209A048);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::getPenetrations  (binary VA: 0x16a4fe0)
// Original: hkpSphereTriangleAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::getPenetrations(int a1, int *a2, int *a3, int a4, int a5)
{
  int *address;
  int v6;
  int *v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  float *v11;
  float *v12;
  float v13; // xmm0_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  uint64_t v21; // rax
  int v22;
  uint32_t *v23;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef float _g4_t_v27[4];
  typedef float _g4_t_v28[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v26)) > _g4_s1 ? (28u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v27)) > _g4_s2 ? (32u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v28)) > _g4_s3 ? (48u + sizeof(_g4_t_v28)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v7 = address;
  v8 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtSphereTri");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  v26 = *a2;
  v10 = *a3;
  v11 = (float *)a2[2];
  v12 = (float *)a3[2];
  v13 = v11[12] - v12[12];
  v14 = v11[13] - v12[13];
  v15 = v11[14] - v12[14];
  v16 = (float)(*v12 * v13) + (float)(v12[1] * v14);
  v17 = (float)(v12[4] * v13) + (float)(v12[5] * v14);
  v18 = (float)(v13 * v12[8]) + (float)(v14 * v12[9]);
  v19 = v12[10] * v15;
  v20 = v16 + (float)(v15 * v12[2]);
  v25 = *a3 + 32;
  v27[1] = v17 + (float)(v12[6] * v15);
  v27[2] = v18 + v19;
  v27[3] = v18 + v19;
  v27[0] = v20;
  LODWORD(v21) = hkpCollideTriangleUtil::closestPointTriangle(v27, v25, a1 + 16, v28, 0);
  if ( (float)(*(float *)(v26 + 16) + *(float *)(v10 + 16)) > v28[4] )
    LODWORD(v21) = G4_VCALL<int>(a5, 8, a2, a3);
  v22 = *v7;
  v23 = *(uint32_t **)(*v7 + 4);
  if ( (unsigned int)(uintptr_t)(v23) < *(uint32_t *)(*v7 + 12) )
  {
    *v23 = (uint32_t)(uintptr_t)("Et");
    v21 = __rdtsc();
    v23[1] = v21;
    *(uint32_t *)(v22 + 4) = (uint32_t)(uintptr_t)(v23 + 3);
  }
  return v21;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::getClosestPoints  (binary VA: 0x16a5a10)
// Original: hkpSphereTriangleAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::getClosestPoints(int a1, int *a2, float **a3, int a4, int *a5)
{
  int *address;
  int v6;
  int *v7;
  uint32_t *v8;
  uint64_t v9; // rax
  float *v10;
  float *v11;
  float *v12;
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  uint64_t v26; // rax
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm7_4
  float v32; // xmm1_4
  int v33;
  int v34;
  uint32_t *v35;
  typedef int _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float *_g4_t_v51;
  typedef float _g4_t_v52[8];
  typedef float _g4_t_v53[19];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v37)) > _g4_s0 ? (8u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v38)) > _g4_s1 ? (12u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v39)) > _g4_s2 ? (16u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v40)) > _g4_s3 ? (20u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v41)) > _g4_s4 ? (24u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v42)) > _g4_s5 ? (28u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v43)) > _g4_s6 ? (32u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v44)) > _g4_s7 ? (36u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v45)) > _g4_s8 ? (40u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v46)) > _g4_s9 ? (44u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v47)) > _g4_s10 ? (48u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v48)) > _g4_s11 ? (52u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v49)) > _g4_s12 ? (56u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v50)) > _g4_s13 ? (60u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v51)) > _g4_s14 ? (60u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v52)) > _g4_s15 ? (64u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v53)) > _g4_s16 ? (96u + sizeof(_g4_t_v53)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v7 = address;
  v8 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtSphereTri");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  v10 = *a3;
  v37 = *a2;
  v11 = a3[2];
  v12 = (float *)a2[2];
  v38 = v11[3];
  v39 = v11[5];
  v40 = v11[6];
  v41 = v11[7];
  v43 = v11[10];
  v13 = *v11;
  v47 = v11[1];
  v48 = v11[2];
  v14 = v11[4];
  v15 = v11[8];
  v42 = v11[9];
  v44 = v11[11];
  v45 = v11[12];
  v50 = v11[13];
  v16 = (*a3)[17];
  v46 = v11[15];
  v17 = (*a3)[16];
  v49 = v11[14];
  v18 = (*a3)[18];
  v53[8] = (float)((float)((float)(*v11 * v17) + (float)(v16 * v14)) + (float)(v18 * v15)) + v45;
  v53[9] = (float)((float)((float)(v47 * v17) + (float)(v39 * v16)) + (float)(v42 * v18)) + v50;
  v53[10] = (float)((float)((float)(v48 * v17) + (float)(v40 * v16)) + (float)(v43 * v18)) + v49;
  v53[11] = (float)((float)((float)(v17 * v38) + (float)(v16 * v41)) + (float)(v18 * v44)) + v46;
  v19 = v10[13];
  v20 = v10[12];
  v21 = v10[14];
  v53[4] = (float)((float)((float)(v13 * v20) + (float)(v19 * v14)) + (float)(v21 * v15)) + v45;
  v53[5] = (float)((float)((float)(v47 * v20) + (float)(v39 * v19)) + (float)(v42 * v21)) + v50;
  v53[6] = (float)((float)((float)(v48 * v20) + (float)(v40 * v19)) + (float)(v43 * v21)) + v49;
  v53[7] = (float)((float)((float)(v20 * v38) + (float)(v19 * v41)) + (float)(v21 * v44)) + v46;
  v22 = v10[8];
  v23 = v10[9];
  v24 = v10[10];
  v53[0] = (float)((float)((float)(v13 * v22) + (float)(v14 * v23)) + (float)(v15 * v24)) + v45;
  v53[1] = (float)((float)((float)(v47 * v22) + (float)(v39 * v23)) + (float)(v42 * v24)) + v50;
  v53[2] = (float)((float)((float)(v48 * v22) + (float)(v40 * v23)) + (float)(v43 * v24)) + v49;
  v53[3] = (float)((float)((float)(v22 * v38) + (float)(v23 * v41)) + (float)(v24 * v44)) + v46;
  v51 = v12;
  hkpCollideTriangleUtil::closestPointTriangle(v12 + 12, v53, a1 + 16, v52, 0);
  v25 = v10[4];
  LODWORD(v26) = a4;
  v27 = *(float *)(v37 + 16) + v25;
  if ( (float)(v27 + *(float *)(a4 + 12)) > v52[4] )
  {
    v28 = v25 - v52[4];
    v29 = (float)(v52[2] * v28) + v51[14];
    v30 = (float)(v28 * v52[0]) + v51[12];
    v31 = (float)(v28 * v52[1]) + v51[13];
    v32 = (float)(v28 * v52[3]) + v51[15];
    LODWORD(v53[12]) = (uint32_t)(uintptr_t)(a2);
    LODWORD(v53[13]) = (uint32_t)(uintptr_t)(a3);
    v53[2] = v29;
    v53[0] = v30;
    v53[1] = v31;
    v33 = *a5;
    v53[3] = v32;
    v53[4] = v52[0];
    v53[5] = v52[1];
    v53[6] = v52[2];
    v53[7] = v52[4] - v27;
    v53[8] = v52[0];
    v53[9] = v52[1];
    v53[10] = v52[2];
    v53[11] = v52[4] - v27;
    LODWORD(v26) = (*(int (**)(int *, float *))(v33 + 8))(a5, v53);
  }
  v34 = *v7;
  v35 = *(uint32_t **)(*v7 + 4);
  if ( (unsigned int)(uintptr_t)(v35) < *(uint32_t *)(*v7 + 12) )
  {
    *v35 = (uint32_t)(uintptr_t)("Et");
    v26 = __rdtsc();
    v35[1] = v26;
    *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
  }
  return v26;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::processCollision  (binary VA: 0x16a5f30)
// Original: hkpSphereTriangleAgent::processCollision
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::processCollision(int a1, int *a2, float **a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  float *v10;
  float *v11;
  float *v12;
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float *v28;
  float v29; // xmm6_4
  float v30; // xmm5_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm1_4
  float v34; // xmm5_4
  bool v35;
  uint16_t v36;
  uint64_t v37; // rax
  int v38;
  uint32_t *v39;
  int v40;
  int v41;
  float *v42;
  int v43;
  typedef int *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float *_g4_t_v60;
  typedef float _g4_t_v61;
  typedef char _g4_t_v62;
  typedef char _g4_t_v63;
  typedef int16_t _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70[15];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v45)) > _g4_s0 ? (4u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v46)) > _g4_s1 ? (8u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v47)) > _g4_s2 ? (12u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v48)) > _g4_s3 ? (16u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v49)) > _g4_s4 ? (20u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v50)) > _g4_s5 ? (24u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v51)) > _g4_s6 ? (28u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v52)) > _g4_s7 ? (32u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v53)) > _g4_s8 ? (36u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v54)) > _g4_s9 ? (40u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v55)) > _g4_s10 ? (44u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v56)) > _g4_s11 ? (48u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v57)) > _g4_s12 ? (52u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v58)) > _g4_s13 ? (56u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v59)) > _g4_s14 ? (60u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v60)) > _g4_s15 ? (60u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v61)) > _g4_s16 ? (60u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v62)) > _g4_s17 ? (64u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v63)) > _g4_s18 ? (72u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (74u + sizeof(_g4_t_v64)) > _g4_s19 ? (74u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v65)) > _g4_s20 ? (80u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v66)) > _g4_s21 ? (84u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v67)) > _g4_s22 ? (88u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v68)) > _g4_s23 ? (92u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v69)) > _g4_s24 ? (96u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v70)) > _g4_s25 ? (112u + sizeof(_g4_t_v70)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 74u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 84u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 92u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 112u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v45 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtSphereTri");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = *a5;
  v10 = *a3;
  v46 = *a2;
  v11 = a3[2];
  v12 = (float *)a2[2];
  v47 = v11[3];
  v56 = v11[6];
  v55 = v11[7];
  v53 = v11[10];
  v13 = *v11;
  v58 = v11[1];
  v59 = v11[2];
  v14 = v11[4];
  v15 = v11[8];
  v57 = v11[5];
  v54 = v11[9];
  v52 = v11[11];
  v51 = v11[12];
  v50 = v11[13];
  v48 = v11[15];
  v16 = (*a3)[17];
  v17 = (*a3)[16];
  v49 = v11[14];
  v18 = (*a3)[18];
  v70[8] = (float)((float)((float)(v17 * *v11) + (float)(v16 * v14)) + (float)(v18 * v15)) + v51;
  v70[9] = (float)((float)((float)(v58 * v17) + (float)(v57 * v16)) + (float)(v54 * v18)) + v50;
  v70[10] = (float)((float)((float)(v59 * v17) + (float)(v56 * v16)) + (float)(v53 * v18)) + v49;
  v70[11] = (float)((float)((float)(v17 * v47) + (float)(v16 * v55)) + (float)(v18 * v52)) + v48;
  v19 = v10[12];
  v20 = v10[13];
  v21 = v10[14];
  v70[4] = (float)((float)((float)(v19 * v13) + (float)(v20 * v14)) + (float)(v21 * v15)) + v51;
  v70[5] = (float)((float)((float)(v58 * v19) + (float)(v57 * v20)) + (float)(v54 * v21)) + v50;
  v70[6] = (float)((float)((float)(v59 * v19) + (float)(v56 * v20)) + (float)(v53 * v21)) + v49;
  v70[7] = (float)((float)((float)(v19 * v47) + (float)(v20 * v55)) + (float)(v21 * v52)) + v48;
  v22 = v10[8];
  v23 = v10[9];
  v24 = v10[10];
  v70[0] = (float)((float)((float)(v13 * v22) + (float)(v14 * v23)) + (float)(v15 * v24)) + v51;
  v70[1] = (float)((float)((float)(v58 * v22) + (float)(v57 * v23)) + (float)(v54 * v24)) + v50;
  v70[2] = (float)((float)((float)(v59 * v22) + (float)(v56 * v23)) + (float)(v53 * v24)) + v49;
  v70[3] = (float)((float)((float)(v22 * v47) + (float)(v23 * v55)) + (float)(v24 * v52)) + v48;
  v60 = v12;
  hkpCollideTriangleUtil::closestPointTriangle(v12 + 12, v70, a1 + 16, &v65, &v63);
  v25 = v10[4];
  v26 = *(float *)(v46 + 16) + v25;
  v27 = v69;
  if ( (float)(v26 + *(float *)(a4 + 12)) <= v69 )
  {
    v40 = *(uint16_t *)(a1 + 12);
    if ( (uint16_t)v40 != 0xFFFF )
    {
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 28))(*(uint32_t *)(a1 + 8), v40, a5[1]);
      *(uint16_t *)(a1 + 12) = -1;
    }
    goto LABEL_7;
  }
  v28 = v60;
  v61 = v67;
  v29 = v66;
  v30 = v25 - v69;
  v31 = (float)(v67 * (float)(v25 - v69)) + v28[14];
  v32 = (float)(v68 * (float)(v25 - v69)) + v28[15];
  v33 = (float)((float)(v25 - v69) * v65) + v28[12];
  v34 = (float)(v30 * v66) + v28[13];
  *(float *)(v9 + 16) = v65;
  *(float *)(v9 + 8) = v31;
  *(float *)v9 = v33;
  v35 = v63 == 0;
  v62 = v63;
  *(float *)(v9 + 4) = v34;
  *(float *)(v9 + 12) = v32;
  *(float *)(v9 + 20) = v29;
  *(float *)(v9 + 24) = v61;
  *(float *)(v9 + 28) = v27 - v26;
  if ( v35 )
  {
LABEL_5:
    v36 = *(uint16_t *)(a1 + 12);
    if ( v36 != 0xFFFF
      || (v36 = (*(int (**)(uint32_t, int *, float **, int, int *, uint32_t, int))(**(uint32_t **)(a1 + 8) + 20))(
                  *(uint32_t *)(a1 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  0,
                  v9),
          *(uint16_t *)(a1 + 12) = v36,
          v36 != 0xFFFF) )
    {
      *(uint32_t *)(v9 + 32) = v36;
      *a5 += 48;
    }
LABEL_7:
    LODWORD(v37) = (uint32_t)(uintptr_t)(v45);
    v38 = *v45;
    v39 = *(uint32_t **)(*v45 + 4);
    if ( (unsigned int)(uintptr_t)(v39) < *(uint32_t *)(*v45 + 12) )
    {
      *v39 = (uint32_t)(uintptr_t)("Et");
      v37 = __rdtsc();
      v39[1] = v37;
      *(uint32_t *)(v38 + 4) = (uint32_t)(uintptr_t)(v39 + 3);
    }
    return v37;
  }
  v41 = *a2;
  v42 = *a3;
  v65 = *(float *)(v9 + 16);
  v66 = *(float *)(v9 + 20);
  v67 = *(float *)(v9 + 24);
  v68 = *(float *)(v9 + 28);
  v70[0] = *(float *)v9;
  v70[1] = *(float *)(v9 + 4);
  v70[2] = *(float *)(v9 + 8);
  v70[3] = *(float *)(v9 + 12);
  v43 = G4_VCALL<int>(v42, 60, &v64, &v62, v70, a3[2], v41, a2[2], &v65);
  if ( v43 != 0 )
  {
    if ( v43 == 1 )
    {
      *(float *)(v9 + 16) = v65;
      *(float *)(v9 + 20) = v66;
      *(float *)(v9 + 24) = v67;
    }
    goto LABEL_5;
  }
  LODWORD(v37) = *(uint16_t *)(a1 + 12);
  if ( (uint16_t)v37 != 0xFFFF )
  {
    (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(a1 + 8) + 28))(*(uint32_t *)(a1 + 8), v37, a5[1]);
    *(uint16_t *)(a1 + 12) = -1;
    LODWORD(v37) = a1;
  }
  return v37;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::staticGetClosestPoints  (binary VA: 0x16a6570)
// Original: hkpSphereTriangleAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::staticGetClosestPoints(int *a1, float **a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  float *v8;
  float *v9;
  float *v10;
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  uint64_t v26; // rax
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm6_4
  float v31; // xmm3_4
  float v32; // xmm7_4
  float v33; // xmm1_4
  int v34;
  int v35;
  uint32_t *v36;
  typedef float *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float *_g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float *_g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef int16_t _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef uint8_t _g4_t_v62[16];
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68[19];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v38)) > _g4_s0 ? (4u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v39)) > _g4_s1 ? (8u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v40)) > _g4_s2 ? (12u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v41)) > _g4_s3 ? (12u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v42)) > _g4_s4 ? (16u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v43)) > _g4_s5 ? (20u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v44)) > _g4_s6 ? (24u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v45)) > _g4_s7 ? (28u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v46)) > _g4_s8 ? (32u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v47)) > _g4_s9 ? (36u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v48)) > _g4_s10 ? (40u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v49)) > _g4_s11 ? (44u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v50)) > _g4_s12 ? (48u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v51)) > _g4_s13 ? (52u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v52)) > _g4_s14 ? (56u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v53)) > _g4_s15 ? (60u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v54)) > _g4_s16 ? (60u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (71u + sizeof(_g4_t_v55)) > _g4_s17 ? (71u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v56)) > _g4_s18 ? (72u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (74u + sizeof(_g4_t_v57)) > _g4_s19 ? (74u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v58)) > _g4_s20 ? (80u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v59)) > _g4_s21 ? (84u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v60)) > _g4_s22 ? (88u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v61)) > _g4_s23 ? (92u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v62)) > _g4_s24 ? (96u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v63)) > _g4_s25 ? (112u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v64)) > _g4_s26 ? (116u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v65)) > _g4_s27 ? (120u + sizeof(_g4_t_v65)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v66)) > _g4_s28 ? (124u + sizeof(_g4_t_v66)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v67)) > _g4_s29 ? (128u + sizeof(_g4_t_v67)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v68)) > _g4_s30 ? (144u + sizeof(_g4_t_v68)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 71u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 74u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 92u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 96u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 116u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 120u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 124u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 128u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 144u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtSphereTri");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v38 = *a2;
  hkpCollideTriangleUtil::setupClosestPointTriangleCache(*a2 + 8, v62);
  v8 = *a2;
  v39 = *a1;
  v9 = a2[2];
  v10 = (float *)a1[2];
  v40 = v9[3];
  v51 = v9[5];
  v43 = v9[6];
  v44 = v9[7];
  v46 = v9[10];
  v11 = *v9;
  v53 = v9[1];
  v52 = v9[2];
  v12 = v9[4];
  v13 = v9[8];
  v45 = v9[9];
  v47 = v9[11];
  v48 = v9[12];
  v49 = v9[13];
  v14 = (*a2)[17];
  v42 = v9[15];
  v15 = (*a2)[16];
  v50 = v9[14];
  v16 = (*a2)[18];
  v68[8] = (float)((float)((float)(*v9 * v15) + (float)(v12 * v14)) + (float)(v16 * v13)) + v48;
  v68[9] = (float)((float)((float)(v53 * v15) + (float)(v51 * v14)) + (float)(v45 * v16)) + v49;
  v68[10] = (float)((float)((float)(v52 * v15) + (float)(v43 * v14)) + (float)(v46 * v16)) + v50;
  v68[11] = (float)((float)((float)(v15 * v40) + (float)(v14 * v44)) + (float)(v16 * v47)) + v42;
  v17 = v8[12];
  v18 = v8[13];
  v19 = v8[14];
  v68[4] = (float)((float)((float)(v11 * v17) + (float)(v12 * v18)) + (float)(v19 * v13)) + v48;
  v68[5] = (float)((float)((float)(v53 * v17) + (float)(v51 * v18)) + (float)(v45 * v19)) + v49;
  v20 = (float)((float)(v52 * v17) + (float)(v43 * v18)) + (float)(v46 * v19);
  v21 = v40;
  v22 = v17 * v40;
  v41 = v8;
  v68[6] = v20 + v50;
  v68[7] = (float)((float)(v22 + (float)(v18 * v44)) + (float)(v19 * v47)) + v42;
  v23 = v8[8];
  v24 = v8[9];
  v25 = v8[10];
  v68[0] = (float)((float)((float)(v11 * v23) + (float)(v12 * v24)) + (float)(v13 * v25)) + v48;
  v68[1] = (float)((float)((float)(v53 * v23) + (float)(v51 * v24)) + (float)(v45 * v25)) + v49;
  v68[2] = (float)((float)((float)(v52 * v23) + (float)(v43 * v24)) + (float)(v46 * v25)) + v50;
  v68[3] = (float)((float)((float)(v23 * v21) + (float)(v24 * v44)) + (float)(v25 * v47)) + v42;
  v54 = v10;
  hkpCollideTriangleUtil::closestPointTriangle(v10 + 12, v68, v62, &v63, &v56);
  LODWORD(v26) = a3;
  v27 = v41[4];
  v28 = *(float *)(v39 + 16) + v27;
  if ( (float)(v28 + *(float *)(a3 + 12)) > v67 )
  {
    v29 = v27 - v67;
    v30 = (float)(v65 * v29) + v54[14];
    v31 = (float)(v29 * v63) + v54[12];
    v32 = (float)(v29 * v64) + v54[13];
    v33 = (float)(v29 * v66) + v54[15];
    LODWORD(v68[12]) = (uint32_t)(uintptr_t)(a1);
    v68[2] = v30;
    v68[0] = v31;
    LODWORD(v68[13]) = (uint32_t)(uintptr_t)(a2);
    v34 = *(uint32_t *)(a3 + 4);
    v55 = v56;
    v68[1] = v32;
    v68[3] = v33;
    v68[4] = v63;
    v68[5] = v64;
    v68[6] = v65;
    v68[7] = v67 - v28;
    v68[8] = v63;
    v68[9] = v64;
    v68[10] = v65;
    v68[11] = v67 - v28;
    if ( v34 == 0 || v56 == 0 )
    {
LABEL_10:
      LODWORD(v26) = G4_VCALL<int>(a4, 8, v68);
      goto LABEL_11;
    }
    v58 = v63;
    v59 = v64;
    v60 = v65;
    v35 = *a1;
    v61 = v67 - v28;
    v63 = v31;
    v64 = v32;
    v65 = v30;
    v66 = v33;
    LODWORD(v26) = G4_VCALL<int>(v38, 60, &v57, &v55, &v63, a2[2], v35, a1[2], &v58);
    if ( *(uint32_t *)(a3 + 8) != 0 || (uint32_t)v26 != 0 )
    {
      if ( (uint32_t)v26 == 1 )
      {
        v68[4] = v58;
        v68[5] = v59;
        v68[6] = v60;
      }
      goto LABEL_10;
    }
  }
LABEL_11:
  v36 = *(uint32_t **)(v5 + 4);
  if ( (unsigned int)(uintptr_t)(v36) < *(uint32_t *)(v5 + 12) )
  {
    *v36 = (uint32_t)(uintptr_t)("Et");
    v26 = __rdtsc();
    v36[1] = v26;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v36 + 3);
  }
  return v26;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::initAgentFunc  (binary VA: 0x16a6be0)
// Original: hkpSphereTriangleAgent::initAgentFunc
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::initAgentFunc(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(hkpSphereTriangleAgent::createSphereTriangleAgent);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(hkpSphereTriangleAgent::staticGetPenetrations);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(hkpSphereTriangleAgent::staticGetClosestPoints);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(((int * (*)(unsigned int, float *, float *, float *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, float, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, int32_t, unsigned int, int32_t, int32_t, unsigned int, float *, int, int, int, int, int, int, unsigned int))hkpIterativeLinearCastAgent::staticLinearCast));
  *(uint8_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 17) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::initAgentFuncInverse  (binary VA: 0x16a6c20)
// Original: hkpSphereTriangleAgent::initAgentFuncInverse
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::initAgentFuncInverse(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(hkpSphereTriangleAgent::createTriangleSphereAgent);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::staticGetPenetrations);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::staticGetClosestPoints);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::staticLinearCast);
  *(uint8_t *)(a1 + 16) = 1;
  *(uint8_t *)(a1 + 17) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::registerAgent  (binary VA: 0x16a6c60)
// Original: hkpSphereTriangleAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::registerAgent(hkpSphereTriangleAgent::Self *self)
{
  uint8_t v2[44];

  v2[16] = 0;
  v2[17] = 0;
  hkpSphereTriangleAgent::initAgentFuncInverse((int)(uintptr_t)(v2));
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 2, 0);
  v2[16] = 0;
  v2[17] = 0;
  hkpSphereTriangleAgent::initAgentFunc((int)(uintptr_t)(v2));
  return hkpCollisionDispatcher::registerCollisionAgent(self, v2, 0, 2);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::registerAgent2  (binary VA: 0x16a6cf0)
// Original: hkpSphereTriangleAgent::registerAgent2
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::registerAgent2(hkpSphereTriangleAgent::Self *self)
{
  uint8_t v2[44];

  v2[16] = 0;
  v2[17] = 0;
  hkpSphereTriangleAgent::initAgentFuncInverse((int)(uintptr_t)(v2));
  hkpCollisionDispatcher::registerCollisionAgent2(self, v2, 2, 0);
  v2[16] = 0;
  v2[17] = 0;
  hkpSphereTriangleAgent::initAgentFunc((int)(uintptr_t)(v2));
  return hkpCollisionDispatcher::registerCollisionAgent2(self, v2, 0, 2);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereTriangleAgent::getClosestPoint  (binary VA: 0x16a6d80)
// Original: hkpSphereTriangleAgent::getClosestPoint
// ----------------------------------------------------------------------------
int hkpSphereTriangleAgent::getClosestPoint(int *a1, float **a2, int a3, int a4, float *a5)
{
  float *v5;
  float *v6;
  float *v7;
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  int v20;
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm7_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm1_4
  float v30; // xmm6_4
  typedef int _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
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
  typedef float *_g4_t_v45;
  typedef float _g4_t_v46[8];
  typedef float _g4_t_v47[15];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v31)) > _g4_s0 ? (8u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v32)) > _g4_s1 ? (12u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v33)) > _g4_s2 ? (16u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v34)) > _g4_s3 ? (20u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v35)) > _g4_s4 ? (24u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v36)) > _g4_s5 ? (28u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v37)) > _g4_s6 ? (32u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v38)) > _g4_s7 ? (36u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v39)) > _g4_s8 ? (40u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v40)) > _g4_s9 ? (44u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v41)) > _g4_s10 ? (48u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v42)) > _g4_s11 ? (52u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v43)) > _g4_s12 ? (56u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v44)) > _g4_s13 ? (60u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v45)) > _g4_s14 ? (60u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v46)) > _g4_s15 ? (64u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v47)) > _g4_s16 ? (96u + sizeof(_g4_t_v47)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);

  v5 = *a2;
  v6 = a2[2];
  v7 = (float *)a1[2];
  v31 = *a1;
  v32 = v6[3];
  v38 = v6[6];
  v37 = v6[7];
  v8 = *v6;
  v41 = v6[1];
  v40 = v6[2];
  v9 = v6[4];
  v10 = v6[8];
  v39 = v6[5];
  v36 = v6[9];
  v35 = v6[10];
  v34 = v6[11];
  v44 = v6[13];
  v42 = v6[15];
  v11 = (*a2)[17];
  v12 = (*a2)[16];
  v33 = v6[12];
  v43 = v6[14];
  v13 = (*a2)[18];
  v47[8] = (float)((float)((float)(v12 * *v6) + (float)(v11 * v9)) + (float)(v13 * v10)) + v33;
  v47[9] = (float)((float)((float)(v41 * v12) + (float)(v39 * v11)) + (float)(v36 * v13)) + v44;
  v47[10] = (float)((float)((float)(v40 * v12) + (float)(v38 * v11)) + (float)(v35 * v13)) + v43;
  v47[11] = (float)((float)((float)(v12 * v32) + (float)(v11 * v37)) + (float)(v13 * v34)) + v42;
  v14 = v5[12];
  v15 = v5[13];
  v16 = v5[14];
  v47[4] = (float)((float)((float)(v14 * v8) + (float)(v15 * v9)) + (float)(v16 * v10)) + v33;
  v47[5] = (float)((float)((float)(v41 * v14) + (float)(v39 * v15)) + (float)(v36 * v16)) + v44;
  v47[6] = (float)((float)((float)(v40 * v14) + (float)(v38 * v15)) + (float)(v35 * v16)) + v43;
  v47[7] = (float)((float)((float)(v14 * v32) + (float)(v15 * v37)) + (float)(v16 * v34)) + v42;
  v17 = v5[8];
  v18 = v5[9];
  v19 = v5[10];
  v47[0] = (float)((float)((float)(v8 * v17) + (float)(v9 * v18)) + (float)(v10 * v19)) + v33;
  v47[1] = (float)((float)((float)(v41 * v17) + (float)(v39 * v18)) + (float)(v36 * v19)) + v44;
  v47[2] = (float)((float)((float)(v40 * v17) + (float)(v38 * v18)) + (float)(v35 * v19)) + v43;
  v47[3] = (float)((float)((float)(v17 * v32) + (float)(v18 * v37)) + (float)(v19 * v34)) + v42;
  v45 = v7;
  v20 = hkpCollideTriangleUtil::closestPointTriangle(v7 + 12, v47, a4, v46, 0);
  v21 = v46[4];
  v22 = v5[4] + *(float *)(v31 + 16);
  if ( (float)(v22 + *(float *)(a3 + 12)) <= v46[4] )
    return 0;
  v23 = v5[4] - v46[4];
  v24 = v46[0];
  v26 = (float)(v23 * v46[1]) + v45[13];
  v27 = (float)(v46[2] * v23) + v45[14];
  v28 = (float)(v46[3] * v23) + v45[15];
  v29 = (float)(v23 * v46[0]) + v45[12];
  a5[5] = v46[1];
  v30 = v46[2];
  a5[1] = v26;
  a5[2] = v27;
  *a5 = v29;
  a5[3] = v28;
  a5[4] = v24;
  a5[6] = v30;
  a5[7] = v21 - v22;
  return 2 - (v20 == 0);
}


