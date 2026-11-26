#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppAge.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppAgent::staticLinearCast  (binary VA: 0x16c88f0)
// Original: hkpMoppAgent::staticLinearCast
// ----------------------------------------------------------------------------
int hkpMoppAgent::staticLinearCast(const hkTransformf::Self **a1, const hkTransformf::Self **a2, float *a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, float a28, float a29, float a30, float a31, float a32, float a33, float a34, float a35, float a36, float a37, float a38, float a39, float *a40, const hkTransformf::Self **a41, const hkTransformf::Self **a42)
{
  int *address;
  int v43;
  uint32_t *v44;
  uint64_t v45; // rax
  float v46; // xmm4_4
  float v47; // xmm3_4
  float v48; // xmm2_4
  float *v49;
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm5_4
  float v53; // xmm4_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm4_4
  float v57; // xmm7_4
  float v58; // xmm3_4
  float v59; // xmm2_4
  __m128i v60;
  float v61; // xmm6_4
  float v62; // xmm0_4
  uint64_t v63; // rax
  const hkTransformf::Self *v64;
  uint32_t *v65;
  float retaddr;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef uint8_t _g4_t_v72[76];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v67)) > _g4_s0 ? (0u + sizeof(_g4_t_v67)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v68)) > _g4_s1 ? (4u + sizeof(_g4_t_v68)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v69)) > _g4_s2 ? (8u + sizeof(_g4_t_v69)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v70)) > _g4_s3 ? (12u + sizeof(_g4_t_v70)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v71)) > _g4_s4 ? (16u + sizeof(_g4_t_v71)) : _g4_s4,
    _g4_s6 = (112u + sizeof(_g4_t_v72)) > _g4_s5 ? (112u + sizeof(_g4_t_v72)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 0u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 4u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 12u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 16u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 112u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v43 = *address;
  v69 = address;
  v44 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v44) < *(uint32_t *)(*address + 12) )
  {
    *v44 = (uint32_t)(uintptr_t)("TtMopp");
    v45 = __rdtsc();
    v44[1] = v45;
    *(uint32_t *)(v43 + 4) = (uint32_t)(uintptr_t)(v44 + 3);
  }
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v72, a2[2], a1[2]);
  G4_VCALL<void>(*a1, 24, v72, *((uint32_t *)a3 + 3), &v71, v67, v68, v69, v70);
  v46 = a3[20];
  v47 = a3[21];
  v48 = a3[22];
  v49 = (float *)a2[2];
  v50 = (float)((float)(*v49 * v46) + (float)(v49[1] * v47)) + (float)(v49[2] * v48);
  v51 = (float)(v49[4] * v46) + (float)(v49[5] * v47);
  v52 = v49[6] * v48;
  v53 = (float)(v46 * v49[8]) + (float)(v47 * v49[9]);
  v54 = v48 * v49[10];
  a41 = a1;
  a42 = a2;
  v55 = v51 + v52;
  v56 = v53 + v54;
  v57 = (float)(a8 - a4) * 0.5;
  v58 = (float)(a9 - a5) * 0.5;
  a28 = a4 + v57;
  retaddr = a5 + v58;
  a40 = a3;
  v59 = (float)(a10 - a6) * 0.5;
  a29 = a5 + v58;
g4_m128_raw(v60) = LODWORD(a6);
  *(float *)g4_m128_ptr<int32_t>(v60) = a6 + v59;
  v61 = (float)(a11 - a7) * 0.5;
  a33 = (float)(a5 + v58) + v55;
  a30 = a6 + v59;
  a32 = (float)(a4 + v57) + v50;
  a34 = COERCE_FLOAT(_mm_cvtsi128_si32(v60)) + v56;
  v62 = a3[3];
  a31 = a7 + v61;
  a35 = (float)(a7 + v61) + v56;
  a36 = v57 + v62;
  a37 = v58 + v62;
  a38 = v59 + v62;
  a39 = v61 + 0.0;
  hkpMoppAabbCastVirtualMachine::aabbCast(&a15, v72, LODWORD(a4), LODWORD(a5));
  LODWORD(v63) = (uint32_t)(uintptr_t)(a2);
  v64 = *a2;
  v65 = *((uint32_t **)*a2 + 1);
  if ( (unsigned int)(uintptr_t)(v65) < *((uint32_t *)*a2 + 3) )
  {
    *v65 = (uint32_t)(uintptr_t)("Et");
    v63 = __rdtsc();
    v65[1] = v63;
    *((uint32_t *)v64 + 1) = (uint32_t)(uintptr_t)(v65 + 3);
  }
  return v63;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppAgent::Destroy  (binary VA: 0x16c8cb0)
// Original: hkpMoppAgent::~hkpMoppAgent
// ----------------------------------------------------------------------------
void hkpMoppAgent::Destroy(hkpMoppAgent::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C148);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      12 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppAgent::Destroy_ea16c8e00  (binary VA: 0x16c8e00)
// Original: hkpMoppAgent::~hkpMoppAgent
// ----------------------------------------------------------------------------
void hkpMoppAgent::Destroy_ea16c8e00(hkpMoppAgent::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C148);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      12 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppAgent::Construct  (binary VA: 0x16c8f60)
// Original: hkpMoppAgent::hkpMoppAgent
// ----------------------------------------------------------------------------
void hkpMoppAgent::Construct(hkpMoppAgent::Self *self, hkpContactMgr::Self *a2)
{
  hkpBvTreeAgent::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A9C8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppAgent::createBvBvAgent  (binary VA: 0x16c8fa0)
// Original: hkpMoppAgent::createBvBvAgent
// ----------------------------------------------------------------------------
hkpMoppAgent::Self * hkpMoppAgent::createBvBvAgent(int a1, int a2, int a3, hkpContactMgr::Self *a4)
{
  int v4;
  hkpMoppAgent::Self *v5;
  int address;

  if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 20) + 36) < *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a2 + 20) + 36) )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (hkpMoppAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           64);
    hkpMoppAgent::Construct(v5, a4);
  }
  else
  {
    v4 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (hkpMoppAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v4 + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)v4 + 44),
                           64);
    hkpMoppAgent::Construct(v5, a4);
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209AA88);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppAgent::registerAgent  (binary VA: 0x16c9050)
// Original: hkpMoppAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpMoppAgent::registerAgent(hkpMoppAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeAgent::createBvTreeShapeAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticLinearCast);
  LOWORD(v2[4]) = 1;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 9, -1);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeAgent::createShapeBvAgent);
  v2[3] = (uint32_t)(uintptr_t)(hkpMoppAgent::staticLinearCast);
  LOWORD(v2[4]) = 0;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), -1, 9);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  LOWORD(v2[4]) = 256;
  v2[0] = (uint32_t)(uintptr_t)(hkpMoppAgent::createBvBvAgent);
  v2[3] = (uint32_t)(uintptr_t)(hkpMoppAgent::staticLinearCast);
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 9, 9);
}


