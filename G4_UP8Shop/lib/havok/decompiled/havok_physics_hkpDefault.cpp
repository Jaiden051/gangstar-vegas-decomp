#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpDefault.h"

// ----------------------------------------------------------------------------
// Function: hkpDefaultConvexListFilter::staticClass  (binary VA: 0x16d64b0)
// Original: hkpDefaultConvexListFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpDefaultConvexListFilter::staticClass()
{
  return &hkpDefaultConvexListFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultConvexListFilter::getConvexListCollisionType  (binary VA: 0x16ecb90)
// Original: hkpDefaultConvexListFilter::getConvexListCollisionType
// ----------------------------------------------------------------------------
bool hkpDefaultConvexListFilter::getConvexListCollisionType(int a1, int a2, int a3, uint32_t *a4)
{
  return (*(uint32_t *)(*a4 + 4 * *(uint8_t *)(*(uint32_t *)a3 + 8) + 272) & 0x400000) != 0;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultConvexListFilter::Destroy  (binary VA: 0x16ecbb0)
// Original: hkpDefaultConvexListFilter::~hkpDefaultConvexListFilter
// ----------------------------------------------------------------------------
void hkpDefaultConvexListFilter::Destroy(hkpDefaultConvexListFilter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultConvexListFilter::Destroy_ea16ecbd0  (binary VA: 0x16ecbd0)
// Original: hkpDefaultConvexListFilter::~hkpDefaultConvexListFilter
// ----------------------------------------------------------------------------
void hkpDefaultConvexListFilter::Destroy_ea16ecbd0(hkpDefaultConvexListFilter::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMemoryWatchDog::staticClass  (binary VA: 0x172cec0)
// Original: hkpDefaultWorldMemoryWatchDog::staticClass
// ----------------------------------------------------------------------------
void * hkpDefaultWorldMemoryWatchDog::staticClass()
{
  return &hkpDefaultWorldMemoryWatchDogClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMaintenanceMgr::init  (binary VA: 0x173f480)
// Original: hkpDefaultWorldMaintenanceMgr::init
// ----------------------------------------------------------------------------
int hkpDefaultWorldMaintenanceMgr::init(hkpDefaultWorldMaintenanceMgr::Self *self, hkpWorld::Self *a2)
{
  int result;

  *(uint32_t *)(*((uint32_t *)a2 + 2) + 20) = *((uint32_t *)self + 2);
  result = *((uint32_t *)a2 + 2);
  *(uint32_t *)(result + 24) = *((uint32_t *)self + 2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMaintenanceMgr::Destroy  (binary VA: 0x173f4b0)
// Original: hkpDefaultWorldMaintenanceMgr::~hkpDefaultWorldMaintenanceMgr
// ----------------------------------------------------------------------------
void hkpDefaultWorldMaintenanceMgr::Destroy(hkpDefaultWorldMaintenanceMgr::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMaintenanceMgr::Destroy_ea173f4d0  (binary VA: 0x173f4d0)
// Original: hkpDefaultWorldMaintenanceMgr::~hkpDefaultWorldMaintenanceMgr
// ----------------------------------------------------------------------------
void hkpDefaultWorldMaintenanceMgr::Destroy_ea173f4d0(hkpDefaultWorldMaintenanceMgr::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMaintenanceMgr::performMaintenanceNoSplit  (binary VA: 0x173f530)
// Original: hkpDefaultWorldMaintenanceMgr::performMaintenanceNoSplit
// ----------------------------------------------------------------------------
int hkpDefaultWorldMaintenanceMgr::performMaintenanceNoSplit(int a1, int a2, int a3)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  uint64_t v7; // rax
  int v8;
  uint32_t *v9;
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  int v13;
  float v14; // xmm1_4
  int v15;
  float v16; // xmm0_4
  int i;
  int v18;
  int j;
  int v20;
  uint32_t *v21;
  int *v23;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v23 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("LtMaintenance");
    v5[3] = (uint32_t)(uintptr_t)("StResetTime");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 4);
  }
  if ( *(float *)a3 >= *(float *)(a1 + 12) )
  {
    v10 = *(float *)(a3 + 4) - *(float *)a3;
    v11 = *(float *)(a1 + 8);
    *(float *)(a2 + 480) = v11;
    v12 = *(float *)(a1 + 8);
    v13 = *(uint32_t *)(a2 + 8);
    *(float *)(a2 + 488) = v10;
    *(float *)(a2 + 484) = v12 + v10;
    *(float *)(a2 + 492) = 1.0 / v10;
    v14 = v11 - *(float *)a3;
    *(float *)(v13 + 20) = *(float *)(v13 + 20) + v14;
    *(uint32_t *)(*(uint32_t *)(a2 + 8) + 24) = *(uint32_t *)(a2 + 480);
    v15 = *(uint32_t *)(a2 + 8);
    v16 = *(float *)(v15 + 32);
    if ( v16 != -1.0 )
      *(float *)(v15 + 32) = v16 + v14;
    for ( i = 0; i < *(uint32_t *)(a2 + 44); ++i )
    {
      v18 = *(uint32_t *)(*(uint32_t *)(a2 + 40) + 4 * i);
      for ( j = 0; j < *(uint32_t *)(v18 + 80); *(float *)(v20 + 316) = *(float *)(v20 + 316) + v14 )
        v20 = *(uint32_t *)(*(uint32_t *)(v18 + 76) + 4 * j++);
      hkpWorldAgentUtil::warpTime(v18, *(uint32_t *)(a3 + 4), *(uint32_t *)(a2 + 484), *(uint32_t *)(a2 + 112));
    }
    (*(void (**)(uint32_t, float))(**(uint32_t **)(a2 + 8) + 80))(*(uint32_t *)(a2 + 8), COERCE_FLOAT(LODWORD(v14)));
    *(uint32_t *)a3 = *(uint32_t *)(a2 + 480);
    *(uint32_t *)(a3 + 4) = *(uint32_t *)(a2 + 484);
    *(uint32_t *)(a3 + 8) = *(uint32_t *)(a2 + 488);
    *(uint32_t *)(a3 + 12) = *(uint32_t *)(a2 + 492);
    v21 = *(uint32_t **)(a2 + 112);
    v21[20] = *(uint32_t *)(a2 + 480);
    v21[21] = *(uint32_t *)(a2 + 484);
    v21[22] = *(uint32_t *)(a2 + 488);
    v21[23] = *(uint32_t *)(a2 + 492);
  }
  LODWORD(v7) = (uint32_t)(uintptr_t)(v23);
  v8 = *v23;
  v9 = *(uint32_t **)(*v23 + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*v23 + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("lt");
    v7 = __rdtsc();
    v9[1] = v7;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMaintenanceMgr::performMaintenance  (binary VA: 0x173f7a0)
// Original: hkpDefaultWorldMaintenanceMgr::performMaintenance
// ----------------------------------------------------------------------------
int hkpDefaultWorldMaintenanceMgr::performMaintenance(int a1, hkpWorldOperationUtil::Self *a2, int a3)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  float v7; // xmm1_4
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  int v14;
  float v15; // xmm1_4
  int v16;
  float v17; // xmm0_4
  int i;
  int v19;
  int j;
  int v21;
  uint32_t *v22;
  uint64_t v23; // rax
  int v24;
  uint32_t *v25;
  hkpWorld::Self *v27;
  int *v28;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v28 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("LtMaintenance");
    v5[3] = (uint32_t)(uintptr_t)("StSplit");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 4);
  }
  hkpWorldOperationUtil::splitSimulationIslands(a2, v27);
  if ( *(float *)a3 >= *(float *)(a1 + 12) )
  {
    v7 = *(float *)a3;
    v8 = *v28;
    v9 = *(uint32_t **)(*v28 + 4);
    if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*v28 + 12) )
    {
      *v9 = (uint32_t)(uintptr_t)("StResetTime");
      v10 = __rdtsc();
      v9[1] = v10;
      *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
      v7 = *(float *)a3;
    }
    v11 = *(float *)(a3 + 4) - v7;
    v12 = *(float *)(a1 + 8);
    *((float *)a2 + 120) = v12;
    v13 = *(float *)(a1 + 8);
    v14 = *((uint32_t *)a2 + 2);
    *((float *)a2 + 122) = v11;
    *((float *)a2 + 121) = v13 + v11;
    *((float *)a2 + 123) = 1.0 / v11;
    v15 = v12 - *(float *)a3;
    *(float *)(v14 + 20) = *(float *)(v14 + 20) + v15;
    *(uint32_t *)(*((uint32_t *)a2 + 2) + 24) = *((uint32_t *)a2 + 120);
    v16 = *((uint32_t *)a2 + 2);
    v17 = *(float *)(v16 + 32);
    if ( __builtin_isnan(v17) || v17 != -1.0 )
      *(float *)(v16 + 32) = v17 + v15;
    for ( i = 0; i < *((uint32_t *)a2 + 11); ++i )
    {
      v19 = *(uint32_t *)(*((uint32_t *)a2 + 10) + 4 * i);
      for ( j = 0; j < *(uint32_t *)(v19 + 80); *(float *)(v21 + 316) = *(float *)(v21 + 316) + v15 )
        v21 = *(uint32_t *)(*(uint32_t *)(v19 + 76) + 4 * j++);
      hkpWorldAgentUtil::warpTime(v19, *(uint32_t *)(a3 + 4), *((uint32_t *)a2 + 121), *((uint32_t *)a2 + 28));
    }
    (*(void (**)(uint32_t, float))(**((uint32_t **)a2 + 2) + 80))(*((uint32_t *)a2 + 2), COERCE_FLOAT(LODWORD(v15)));
    *(uint32_t *)a3 = *((uint32_t *)a2 + 120);
    *(uint32_t *)(a3 + 4) = *((uint32_t *)a2 + 121);
    *(uint32_t *)(a3 + 8) = *((uint32_t *)a2 + 122);
    *(uint32_t *)(a3 + 12) = *((uint32_t *)a2 + 123);
    v22 = *((uint32_t **)a2 + 28);
    v22[20] = *((uint32_t *)a2 + 120);
    v22[21] = *((uint32_t *)a2 + 121);
    v22[22] = *((uint32_t *)a2 + 122);
    v22[23] = *((uint32_t *)a2 + 123);
  }
  LODWORD(v23) = (uint32_t)(uintptr_t)(v28);
  v24 = *v28;
  v25 = *(uint32_t **)(*v28 + 4);
  if ( (unsigned int)(uintptr_t)(v25) < *(uint32_t *)(*v28 + 12) )
  {
    *v25 = (uint32_t)(uintptr_t)("lt");
    v23 = __rdtsc();
    v25[1] = v23;
    *(uint32_t *)(v24 + 4) = (uint32_t)(uintptr_t)(v25 + 3);
  }
  return v23;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMaintenanceMgr::Construct  (binary VA: 0x173f9e0)
// Original: hkpDefaultWorldMaintenanceMgr::hkpDefaultWorldMaintenanceMgr
// ----------------------------------------------------------------------------
void hkpDefaultWorldMaintenanceMgr::Construct(hkpDefaultWorldMaintenanceMgr::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F1C8);
  *((uint32_t *)self + 2) = 1107558400;
  *((uint32_t *)self + 3) = 1115422720;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMemoryWatchDog::getAmountOfFreeHeapMemoryRequested  (binary VA: 0x1770540)
// Original: hkpDefaultWorldMemoryWatchDog::getAmountOfFreeHeapMemoryRequested
// ----------------------------------------------------------------------------
int hkpDefaultWorldMemoryWatchDog::getAmountOfFreeHeapMemoryRequested(hkpDefaultWorldMemoryWatchDog::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMemoryWatchDog::Destroy  (binary VA: 0x1770550)
// Original: hkpDefaultWorldMemoryWatchDog::~hkpDefaultWorldMemoryWatchDog
// ----------------------------------------------------------------------------
void hkpDefaultWorldMemoryWatchDog::Destroy(hkpDefaultWorldMemoryWatchDog::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMemoryWatchDog::reduceConstraintsInIsland  (binary VA: 0x1770570)
// Original: hkpDefaultWorldMemoryWatchDog::reduceConstraintsInIsland
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpDefaultWorldMemoryWatchDog::reduceConstraintsInIsland(int16_t a1, int a2)
{
  uint8_t v3[5];

  return hkpWorld::removeEntity(
           (hkpWorld::Self *)v3,
           *(hkpEntity::Self **)(*(uint32_t *)(a2 + 8) + 24),
           **(hkpWorld::Self ***)(*(uint32_t *)(a2 + 8) + 76));
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMemoryWatchDog::Destroy_ea17705b0  (binary VA: 0x17705b0)
// Original: hkpDefaultWorldMemoryWatchDog::~hkpDefaultWorldMemoryWatchDog
// ----------------------------------------------------------------------------
void hkpDefaultWorldMemoryWatchDog::Destroy_ea17705b0(hkpDefaultWorldMemoryWatchDog::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMemoryWatchDog::Construct  (binary VA: 0x1770610)
// Original: hkpDefaultWorldMemoryWatchDog::hkpDefaultWorldMemoryWatchDog
// ----------------------------------------------------------------------------
void hkpDefaultWorldMemoryWatchDog::Construct(hkpDefaultWorldMemoryWatchDog::Self *self, int a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A02C8);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = a2;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMemoryWatchDog::removeObjectsFromIsland  (binary VA: 0x1770640)
// Original: hkpDefaultWorldMemoryWatchDog::removeObjectsFromIsland
// ----------------------------------------------------------------------------
int hkpDefaultWorldMemoryWatchDog::removeObjectsFromIsland(hkpDefaultWorldMemoryWatchDog::Self *self, hkpSimulationIsland::Self *a2, int a3, int *a4)
{
  hkpDefaultWorldMemoryWatchDog::Self *v4;
  int result;
  int v6;
  int Instance;
  typedef hkpDefaultWorldMemoryWatchDog::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v10)) > _g4_s2 ? (15u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 15u);

  v4 = self;
  v9 = *((uint32_t *)self + 20) - 1;
  result = v9;
  v6 = 4 * v9;
  if ( v9 >= 0 )
  {
    do
    {
      result = *(char *)(*(uint32_t *)(*((uint32_t *)v4 + 19) + v6) + 204);
      if ( result < (int)(uintptr_t)(a2) )
      {
        if ( *a4 >= result )
          result = *a4;
        *a4 = result;
      }
      else
      {
        v8 = v4;
        hkpWorld::removeEntity((hkpWorld::Self *)v10, *((hkpEntity::Self **)v4 + 6), *(hkpWorld::Self **)(*((uint32_t *)v4 + 19) + v6));
        Instance = hkMemorySystem::getInstance();
        result = G4_VCALL<int>(Instance, 36, a3);
        v4 = v8;
        if ( (uint8_t)result == 0 )
          return result;
      }
      --v9;
      v6 -= 4;
    }
    while ( v9 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultWorldMemoryWatchDog::freeHeapMemoryTillRequestedAmountIsAvailable  (binary VA: 0x17706e0)
// Original: hkpDefaultWorldMemoryWatchDog::freeHeapMemoryTillRequestedAmountIsAvailable
// ----------------------------------------------------------------------------
int hkpDefaultWorldMemoryWatchDog::freeHeapMemoryTillRequestedAmountIsAvailable(hkpDefaultWorldMemoryWatchDog::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::Self *v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  hkpDefaultWorldMemoryWatchDog::Self *v8;
  int Instance;
  typedef hkpSimulationIsland::Self *_g4_t_v10;
  typedef hkpWorld::Self *_g4_t_v11;
  typedef hkpSimulationIsland::Self *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  v2 = a2;
  v10 = (hkpSimulationIsland::Self *)(off_7C + 3);
  v3 = *((uint32_t *)self + 2);
  v4 = *((uint32_t *)a2 + 14);
LABEL_2:
  v5 = *((uint32_t *)v2 + 11);
  result = -v4;
  v12 = nullptr;
  v7 = v5 - 1;
  if ( result <= v5 - 1 )
  {
    while ( 1 )
    {
      if ( v5 <= v7 )
      {
        v7 = v5 - 1;
        if ( v5 - 1 < result )
          break;
      }
      v8 = v7 >= 0
         ? *(hkpDefaultWorldMemoryWatchDog::Self **)(*((uint32_t *)v2 + 10) + 4 * v7)
         : *(hkpDefaultWorldMemoryWatchDog::Self **)(*((uint32_t *)v2 + 13) + 4 * ~v7);
      v11 = v2;
      hkpDefaultWorldMemoryWatchDog::removeObjectsFromIsland(v8, v10, v3, (int *)&v12);
      Instance = hkMemorySystem::getInstance();
      result = G4_VCALL<int>(Instance, 36, v3);
      if ( (uint8_t)result != 0 )
        break;
      v2 = v11;
      --v7;
      result = -*((uint32_t *)v11 + 14);
      if ( result > v7 )
      {
        result = (int)(uintptr_t)(v12);
        v10 = v12;
        if ( (int)(uintptr_t)(v12) <= 0 )
          return result;
        v4 = *((uint32_t *)v11 + 14);
        goto LABEL_2;
      }
      v5 = *((uint32_t *)v11 + 11);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultToiResourceMgr::getClassType  (binary VA: 0x17faae0)
// Original: hkpDefaultToiResourceMgr::getClassType
// ----------------------------------------------------------------------------
void * hkpDefaultToiResourceMgr::getClassType()
{
  return &hkpDefaultToiResourceMgrClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultToiResourceMgr::getScratchpadCapacity  (binary VA: 0x17fab00)
// Original: hkpDefaultToiResourceMgr::getScratchpadCapacity
// ----------------------------------------------------------------------------
int hkpDefaultToiResourceMgr::getScratchpadCapacity(hkpDefaultToiResourceMgr::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultToiResourceMgr::Destroy  (binary VA: 0x17fab10)
// Original: hkpDefaultToiResourceMgr::~hkpDefaultToiResourceMgr
// ----------------------------------------------------------------------------
void hkpDefaultToiResourceMgr::Destroy(hkpDefaultToiResourceMgr::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultToiResourceMgr::resourcesDepleted  (binary VA: 0x17fab30)
// Original: hkpDefaultToiResourceMgr::resourcesDepleted
// ----------------------------------------------------------------------------
int hkpDefaultToiResourceMgr::resourcesDepleted()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultToiResourceMgr::cannotSolve  (binary VA: 0x17fab40)
// Original: hkpDefaultToiResourceMgr::cannotSolve
// ----------------------------------------------------------------------------
int hkpDefaultToiResourceMgr::cannotSolve()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultToiResourceMgr::Destroy_ea17fab50  (binary VA: 0x17fab50)
// Original: hkpDefaultToiResourceMgr::~hkpDefaultToiResourceMgr
// ----------------------------------------------------------------------------
void hkpDefaultToiResourceMgr::Destroy_ea17fab50(hkpDefaultToiResourceMgr::Self *self)
{
  int v1;
  int v2;

  hkpDefaultToiResourceMgr::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultToiResourceMgr::endToiAndFreeResources  (binary VA: 0x17fabb0)
// Original: hkpDefaultToiResourceMgr::endToiAndFreeResources
// ----------------------------------------------------------------------------
int hkpDefaultToiResourceMgr::endToiAndFreeResources(int a1, int a2, int a3, int a4)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 52) + 20))(
           *(uint32_t *)(*(uint32_t *)address + 52),
           *(uint32_t *)(a4 + 24),
           *(uint32_t *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultToiResourceMgr::Construct  (binary VA: 0x17fac60)
// Original: hkpDefaultToiResourceMgr::hkpDefaultToiResourceMgr
// ----------------------------------------------------------------------------
void hkpDefaultToiResourceMgr::Construct(hkpDefaultToiResourceMgr::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0FE8);
  *((uint32_t *)self + 3) = 0x20000;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultToiResourceMgr::shouldHandleGivenToi  (binary VA: 0x17fac90)
// Original: hkpDefaultToiResourceMgr::shouldHandleGivenToi
// ----------------------------------------------------------------------------
uint8_t * hkpDefaultToiResourceMgr::shouldHandleGivenToi(uint8_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultToiResourceMgr::beginToiAndSetupResources  (binary VA: 0x17faca0)
// Original: hkpDefaultToiResourceMgr::beginToiAndSetupResources
// ----------------------------------------------------------------------------
uint32_t * hkpDefaultToiResourceMgr::beginToiAndSetupResources(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v6;
  int v7;
  int v8;
  int v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[4];
  typedef uint32_t _g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v15)) > _g4_s5 ? (36u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);

  hkpDefaultToiResourceMgr::shouldHandleGivenToi((uint8_t *)v14 + 3);
  if ( HIBYTE(v14[0]) != 0 )
  {
    v6 = *(uint32_t *)(a2 + 12);
    a5[7] = v6;
    *(uint32_t *)(a2 + 8) = v6;
    v13 = v6;
    v7 = *(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v15[0] = v13;
    v8 = (*(int (**)(uint32_t, uint32_t *, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(v7 + 52) + 16))(
           *(uint32_t *)(v7 + 52),
           v15,
           a3,
           v10,
           v11,
           v12,
           v13,
           v14[0],
           v14[1],
           v14[2],
           v14[3]);
    v9 = v15[0];
    *a1 = 0;
    *(uint32_t *)(a2 + 8) = v9;
    a5[6] = v8;
    a5[4] = 3;
    a5[8] = (uint32_t)(uintptr_t)(&hkpDefaultToiResourceMgr::s_priorityClassMap);
    a5[9] = (uint32_t)(uintptr_t)(&hkpDefaultToiResourceMgr::s_priorityClassRatios);
    a5[5] = 4;
    a5[2] = 1000;
    a5[3] = 1000;
    a5[1] = 1000;
    *a5 = 3;
  }
  else
  {
    *a1 = 1;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::getNumVertices  (binary VA: 0x1818b00)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::getNumVertices
// ----------------------------------------------------------------------------
int hkpDefaultBvCompressedMeshShapeCinfo::getNumVertices(hkpDefaultBvCompressedMeshShapeCinfo::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 10);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 12);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::getNumTriangles  (binary VA: 0x1818b20)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::getNumTriangles
// ----------------------------------------------------------------------------
int hkpDefaultBvCompressedMeshShapeCinfo::getNumTriangles(hkpDefaultBvCompressedMeshShapeCinfo::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 10);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 24);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::getVertex  (binary VA: 0x1818b40)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::getVertex
// ----------------------------------------------------------------------------
int hkpDefaultBvCompressedMeshShapeCinfo::getVertex(hkpDefaultBvCompressedMeshShapeCinfo::Self *self, int a2, hkVector4f::Self *a3)
{
  uint32_t *v3;
  int result;

  v3 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 10) + 8) + 16 * a2);
  *(uint32_t *)a3 = *v3;
  *((uint32_t *)a3 + 1) = v3[1];
  *((uint32_t *)a3 + 2) = v3[2];
  result = v3[3];
  *((uint32_t *)a3 + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::getIndices  (binary VA: 0x1818b70)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::getIndices
// ----------------------------------------------------------------------------
int hkpDefaultBvCompressedMeshShapeCinfo::getIndices(hkpDefaultBvCompressedMeshShapeCinfo::Self *self, int a2, int *a3)
{
  int *v3;
  int result;

  v3 = (int *)(*(uint32_t *)(*((uint32_t *)self + 10) + 20) + 16 * a2);
  *a3 = *v3;
  a3[1] = v3[1];
  result = v3[2];
  a3[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::getTriangleUserData  (binary VA: 0x1818ba0)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::getTriangleUserData
// ----------------------------------------------------------------------------
int hkpDefaultBvCompressedMeshShapeCinfo::getTriangleUserData(hkpDefaultBvCompressedMeshShapeCinfo::Self *self, int a2)
{
  return *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 10) + 20) + 16 * a2 + 12);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::getNumConvexShapes  (binary VA: 0x1818bc0)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::getNumConvexShapes
// ----------------------------------------------------------------------------
int hkpDefaultBvCompressedMeshShapeCinfo::getNumConvexShapes(hkpDefaultBvCompressedMeshShapeCinfo::Self *self)
{
  return *((uint32_t *)self + 12);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::getConvexShape  (binary VA: 0x1818bd0)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::getConvexShape
// ----------------------------------------------------------------------------
hkQsTransformf::Self * hkpDefaultBvCompressedMeshShapeCinfo::getConvexShape(hkpDefaultBvCompressedMeshShapeCinfo::Self *self, int a2, const hkpConvexShape::Self **a3, hkQsTransformf::Self *a4)
{
  uint32_t *v5;

  *a3 = *(const hkpConvexShape::Self **)(*((uint32_t *)self + 11) + (a2 << 6));
  v5 = (uint32_t *)(*((uint32_t *)self + 11) + (a2 << 6));
  *(uint32_t *)a4 = v5[4];
  *((uint32_t *)a4 + 1) = v5[5];
  *((uint32_t *)a4 + 2) = v5[6];
  *((uint32_t *)a4 + 3) = v5[7];
  *((uint32_t *)a4 + 4) = v5[8];
  *((uint32_t *)a4 + 5) = v5[9];
  *((uint32_t *)a4 + 6) = v5[10];
  *((uint32_t *)a4 + 7) = v5[11];
  *((uint32_t *)a4 + 8) = v5[12];
  *((uint32_t *)a4 + 9) = v5[13];
  *((uint32_t *)a4 + 10) = v5[14];
  *((uint32_t *)a4 + 11) = v5[15];
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::getConvexShapeUserData  (binary VA: 0x1818c40)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::getConvexShapeUserData
// ----------------------------------------------------------------------------
int hkpDefaultBvCompressedMeshShapeCinfo::getConvexShapeUserData(hkpDefaultBvCompressedMeshShapeCinfo::Self *self, int a2)
{
  return *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 11) + (a2 << 6)) + 12);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::Destroy  (binary VA: 0x1818d30)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::~hkpDefaultBvCompressedMeshShapeCinfo
// ----------------------------------------------------------------------------
void hkpDefaultBvCompressedMeshShapeCinfo::Destroy(hkpDefaultBvCompressedMeshShapeCinfo::Self *self)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;

  v1 = 0;
  v2 = *((uint32_t *)self + 12);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1308);
  if ( v2 > 0 )
  {
    do
    {
      v3 = (int *)(*((uint32_t *)self + 11) + (v1 << 6));
      v4 = *v3;
      if ( *v3 != 0 )
      {
        if ( *(uint16_t *)(v4 + 6) != 0 )
        {
          do
          {
            v6 = *(uint32_t *)(v4 + 4);
            HIWORD(v5) = HIWORD(v6);
            LOWORD(v5) = 0;
            v7 = v5 | (uint16_t)(v6 - 1);
            v8 = v6;
          }
          while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
          if ( (uint16_t)v7 == 0 )
            G4_VCALL<void>(v4, 16);
          v3 = (int *)(*((uint32_t *)self + 11) + (v1 << 6));
        }
        *v3 = 0;
        v2 = *((uint32_t *)self + 12);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v9 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      v9 << 6);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A12C8);
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::Destroy_ea1818e20  (binary VA: 0x1818e20)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::~hkpDefaultBvCompressedMeshShapeCinfo
// ----------------------------------------------------------------------------
void hkpDefaultBvCompressedMeshShapeCinfo::Destroy_ea1818e20(hkpDefaultBvCompressedMeshShapeCinfo::Self *self)
{
  int address;

  hkpDefaultBvCompressedMeshShapeCinfo::Destroy(self);
  if ( self != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, hkpDefaultBvCompressedMeshShapeCinfo::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44)
                                                                             + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      self,
      56);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpDefaultBvCompressedMeshShapeCinfo::addConvexShape  (binary VA: 0x1818ed0)
// Original: hkpDefaultBvCompressedMeshShapeCinfo::addConvexShape
// ----------------------------------------------------------------------------
uint32_t * hkpDefaultBvCompressedMeshShapeCinfo::addConvexShape(hkpDefaultBvCompressedMeshShapeCinfo::Self *self, const hkpConvexShape::Self *a2, const hkQsTransformf::Self *a3)
{
  int v3;
  int v4;
  uint32_t *result;
  int v6;
  int32_t v7; // kr00_4
  int v8;

  v3 = *((uint32_t *)self + 12);
  if ( v3 == (*((uint32_t *)self + 13) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpDefaultBvCompressedMeshShapeCinfo::Self *)((char *)self + 44),
      64,
      v8);
    v3 = *((uint32_t *)self + 12);
  }
  v4 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 12) = v3 + 1;
  result = (uint32_t *)(v4 + (v3 << 6));
  *result = (uint32_t)(uintptr_t)(a2);
  result[4] = *(uint32_t *)a3;
  result[5] = *((uint32_t *)a3 + 1);
  result[6] = *((uint32_t *)a3 + 2);
  result[7] = *((uint32_t *)a3 + 3);
  result[8] = *((uint32_t *)a3 + 4);
  result[9] = *((uint32_t *)a3 + 5);
  result[10] = *((uint32_t *)a3 + 6);
  result[11] = *((uint32_t *)a3 + 7);
  result[12] = *((uint32_t *)a3 + 8);
  result[13] = *((uint32_t *)a3 + 9);
  result[14] = *((uint32_t *)a3 + 10);
  result[15] = *((uint32_t *)a3 + 11);
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v7 = *((uint32_t *)a2 + 1);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      result = (uint32_t *)__sync_val_compare_and_swap(
                           (volatile int32_t *)a2 + 1,
                           v7,
                           v6 | (uint16_t)(v7 + 1));
    }
    while ( (uint32_t *)v7 != result );
  }
  return result;
}


