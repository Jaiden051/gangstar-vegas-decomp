#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppBvT.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeShape::staticClass  (binary VA: 0x1692d70)
// Original: hkpMoppBvTreeShape::staticClass
// ----------------------------------------------------------------------------
void * hkpMoppBvTreeShape::staticClass()
{
  return &hkpMoppBvTreeShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeShape::getContainer  (binary VA: 0x16d59e0)
// Original: hkpMoppBvTreeShape::getContainer
// ----------------------------------------------------------------------------
int hkpMoppBvTreeShape::getContainer(hkpMoppBvTreeShape::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 13) + 64))(*((uint32_t *)self + 13));
}

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeShape::getAabb  (binary VA: 0x16d5a00)
// Original: hkpMoppBvTreeShape::getAabb
// ----------------------------------------------------------------------------
int hkpMoppBvTreeShape::getAabb(hkpMoppBvTreeShape::Self *self, const hkTransformf::Self *a2, int64_t a3)
{
  return (*(int (**)(uint32_t, const hkTransformf::Self *, uint32_t, uint32_t))(**((uint32_t **)self + 13) + 24))(
           *((uint32_t *)self + 13),
           a2,
           a3,
           HIDWORD(a3));
}

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeShape::calcSizeForSpu  (binary VA: 0x16d5a40)
// Original: hkpMoppBvTreeShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpMoppBvTreeShape::calcSizeForSpu(int a1, int a2)
{
  unsigned int v3;

  if ( *(uint8_t *)(*(uint32_t *)(a1 + 20) + 44) != 0 )
    return -1;
  v3 = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 52) + 72))(*(uint32_t *)(a1 + 52), a2, 256);
  if ( v3 > 0x100 )
    return -1;
  *(uint32_t *)(a1 + 56) = v3;
  return 64;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeShape::castRayWithCollector  (binary VA: 0x16d5d40)
// Original: hkpMoppBvTreeShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpMoppBvTreeShape::castRayWithCollector(uint32_t *a1, int a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  int v10;
  int v11;
  uint64_t v12; // rax
  int v13;
  uint32_t *v14;
  typedef int *_g4_t_v16;
  typedef uint32_t _g4_t_v17[16];
  typedef uint32_t _g4_t_v18[31];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (80u + sizeof(_g4_t_v18)) > _g4_s2 ? (80u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v16 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcMopp");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = a1[8];
  v9 = a1[7];
  v10 = a1[6];
  memset(&v18[16], 0, 12);
  v17[4] = v8;
  v17[5] = a1[9];
  v17[6] = a1[10];
  v17[7] = a1[11];
  v17[9] = v9;
  v17[10] = v9;
  v17[8] = v10;
  LOBYTE(v17[11]) = 2;
  v11 = 0;
  if ( a1[13] != 0 )
    v11 = a1[13] + 16;
  v18[19] = 0;
  hkpMoppLongRayVirtualMachine::queryLongRay(v18, v11, v17, a2, a3, a4);
  LODWORD(v12) = (uint32_t)(uintptr_t)(v16);
  v13 = *v16;
  v14 = *(uint32_t **)(*v16 + 4);
  if ( (unsigned int)(uintptr_t)(v14) < *(uint32_t *)(*v16 + 12) )
  {
    *v14 = (uint32_t)(uintptr_t)("Et");
    v12 = __rdtsc();
    v14[1] = v12;
    *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(v14 + 3);
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeShape::castRayBundle  (binary VA: 0x16d5e50)
// Original: hkpMoppBvTreeShape::castRayBundle
// ----------------------------------------------------------------------------
int hkpMoppBvTreeShape::castRayBundle(int a1)
{
  int *address;
  int v2;
  uint32_t *v3;
  uint64_t v4; // rax
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int *v9;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v2 = *address;
  v9 = address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) < *(uint32_t *)(*address + 12) )
  {
    *v3 = (uint32_t)(uintptr_t)("TtrcBundleMopp");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
  }
  hkpMoppRayBundleVirtualMachine::queryRayBundle(a1);
  v5 = *v9;
  v6 = *(uint32_t **)(*v9 + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*v9 + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("Et");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeShape::castRay  (binary VA: 0x16d5f90)
// Original: hkpMoppBvTreeShape::castRay
// ----------------------------------------------------------------------------
int hkpMoppBvTreeShape::castRay(int a1)
{
  int *address;
  int v2;
  uint32_t *v3;
  uint64_t v4; // rax
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int *v9;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v2 = *address;
  v9 = address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) < *(uint32_t *)(*address + 12) )
  {
    *v3 = (uint32_t)(uintptr_t)("TtrcMopp");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
  }
  hkpMoppLongRayVirtualMachine::queryLongRay(a1);
  v5 = *v9;
  v6 = *(uint32_t **)(*v9 + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*v9 + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("Et");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeShape::Destroy  (binary VA: 0x16d6150)
// Original: hkpMoppBvTreeShape::~hkpMoppBvTreeShape
// ----------------------------------------------------------------------------
void hkpMoppBvTreeShape::Destroy(hkpMoppBvTreeShape::Self *self)
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

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B168);
  v1 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_20994E8);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
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
  v6 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B0E8);
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
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeShape::Destroy_ea16d6230  (binary VA: 0x16d6230)
// Original: hkpMoppBvTreeShape::~hkpMoppBvTreeShape
// ----------------------------------------------------------------------------
void hkpMoppBvTreeShape::Destroy_ea16d6230(hkpMoppBvTreeShape::Self *self)
{
  int v1;
  int v2;

  hkpMoppBvTreeShape::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeShape::Construct  (binary VA: 0x16d63e0)
// Original: hkpMoppBvTreeShape::hkpMoppBvTreeShape
// ----------------------------------------------------------------------------
void hkpMoppBvTreeShape::Construct(hkpMoppBvTreeShape::Self *self, const hkpShapeCollection::Self *a2, const hkpMoppCode::Self *a3)
{
  int v3;
  int32_t v4; // kr00_4

  hkMoppBvTreeShapeBase::Construct((int)(uintptr_t)(self), 9, (int)(uintptr_t)(a3));
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B168);
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_20994E8);
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
    }
    while ( v4 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v4, v3 | (uint16_t)(v4 + 1)) );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppBvTreeStreamAgent::registerAgent  (binary VA: 0x16d9c40)
// Original: hkpMoppBvTreeStreamAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpMoppBvTreeStreamAgent::registerAgent(hkpMoppBvTreeStreamAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeStreamAgent::createBvTreeShapeAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 9, 23);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeStreamAgent::createShapeBvAgent);
  v2[3] = (uint32_t)(uintptr_t)(hkpMoppAgent::staticLinearCast);
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 23, 9);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  LOWORD(v2[4]) = 256;
  v2[0] = (uint32_t)(uintptr_t)(hkpMoppAgent::createBvBvAgent);
  v2[3] = (uint32_t)(uintptr_t)(hkpMoppAgent::staticLinearCast);
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 9, 9);
}


