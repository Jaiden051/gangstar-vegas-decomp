#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMultith.h"

// ----------------------------------------------------------------------------
// Function: hkpMultithreadConfig::Construct  (binary VA: 0x1733670)
// Original: hkpMultithreadConfig::hkpMultithreadConfig
// ----------------------------------------------------------------------------
void hkpMultithreadConfig::Construct(hkpMultithreadConfig::Self *self)
{
  *(uint32_t *)self = 70;
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::staticClass  (binary VA: 0x186b970)
// Original: hkpMultithreadedVehicleManager::staticClass
// ----------------------------------------------------------------------------
void * hkpMultithreadedVehicleManager::staticClass()
{
  return &hkpMultithreadedVehicleManagerClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::Destroy  (binary VA: 0x186e500)
// Original: hkpMultithreadedVehicleManager::~hkpMultithreadedVehicleManager
// ----------------------------------------------------------------------------
void hkpMultithreadedVehicleManager::Destroy(hkpMultithreadedVehicleManager::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A55E8);
  hkpVehicleManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::Destroy_ea186e530  (binary VA: 0x186e530)
// Original: hkpMultithreadedVehicleManager::~hkpMultithreadedVehicleManager
// ----------------------------------------------------------------------------
void hkpMultithreadedVehicleManager::Destroy_ea186e530(hkpMultithreadedVehicleManager::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A55E8);
  hkpVehicleManager::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::getBufferSize  (binary VA: 0x186e5a0)
// Original: hkpMultithreadedVehicleManager::getBufferSize
// ----------------------------------------------------------------------------
int hkpMultithreadedVehicleManager::getBufferSize(int a1)
{
  return 640 * *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::updateBeforeCollisionDetection  (binary VA: 0x186e5b0)
// Original: hkpMultithreadedVehicleManager::updateBeforeCollisionDetection
// ----------------------------------------------------------------------------
int hkpMultithreadedVehicleManager::updateBeforeCollisionDetection(uint32_t *a1)
{
  int v1;
  int v2;
  hkpVehicleInstance::Self *v3;
  int result;

  v1 = 0;
  v2 = a1[1];
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(hkpVehicleInstance::Self **)(*a1 + 4 * v1++);
      result = hkpVehicleInstance::updateBeforeCollisionDetection(v3);
    }
    while ( v1 != v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::buildVehicleCommand  (binary VA: 0x186e5f0)
// Original: hkpMultithreadedVehicleManager::buildVehicleCommand
// ----------------------------------------------------------------------------
uint32_t * hkpMultithreadedVehicleManager::buildVehicleCommand(int a1, int a2, uint32_t *a3, int a4)
{
  int v4;
  int i;
  char v6;
  int v8;

  if ( *(uint8_t *)(a1 + 9) == 2 )
  {
    v4 = *(uint32_t *)(a1 + 20);
    for ( i = 0; v4 > (char)i; ++i )
    {
      v6 = i;
      v8 = *(uint32_t *)(*(uint32_t *)(a1 + 16) + 96 * v6);
      G4_VCALL<void>(v8, 52);
    }
  }
  else
  {
    (*(void (**)(uint32_t))(**(uint32_t **)(a1 + 16) + 52))(*(uint32_t *)(a1 + 16));
  }
  *a3 = a4;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::getVehicleBatchFromBuffer  (binary VA: 0x186e660)
// Original: hkpMultithreadedVehicleManager::getVehicleBatchFromBuffer
// ----------------------------------------------------------------------------
int hkpMultithreadedVehicleManager::getVehicleBatchFromBuffer(int a1, int a2, uint32_t *a3)
{
  int v3;
  int result;

  v3 = *(uint32_t *)(a1 + 4);
  *a3 = a2;
  result = a2 + 16 * v3;
  a3[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::buildAndAddJobs  (binary VA: 0x186e680)
// Original: hkpMultithreadedVehicleManager::buildAndAddJobs
// ----------------------------------------------------------------------------
int hkpMultithreadedVehicleManager::buildAndAddJobs(int *a1, int a2, int a3, int a4, pthread_mutex_t *a5, int a6)
{
  uint32_t *v6;
  int v7;
  int v8;
  int i;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v33;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[4];
  typedef uint32_t _g4_t_v27[4];
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v18)) > _g4_s2 ? (24u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v20)) > _g4_s4 ? (32u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v21)) > _g4_s5 ? (36u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v22)) > _g4_s6 ? (40u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v23)) > _g4_s7 ? (40u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v24)) > _g4_s8 ? (44u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v25)) > _g4_s9 ? (44u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v26)) > _g4_s10 ? (48u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v27)) > _g4_s11 ? (64u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v28)) > _g4_s12 ? (80u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v29)) > _g4_s13 ? (96u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v30)) > _g4_s14 ? (100u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v31)) > _g4_s15 ? (104u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v32)) > _g4_s16 ? (108u + sizeof(_g4_t_v32)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);

  hkpMultithreadedVehicleManager::getVehicleBatchFromBuffer((int)(uintptr_t)(a1), a6, v26);
  v6 = (uint32_t *)v26[0];
  v7 = v26[1];
  v8 = a3;
  v22 = a1[1];
  if ( v22 <= 0 )
  {
    v22 = 0;
  }
  else
  {
    for ( i = 0; i != v22; ++i )
    {
      v24 = v7;
      v17 = v6;
      v16 = *(uint32_t *)(*a1 + 4 * i);
      v6 += 4;
      hkpMultithreadedVehicleManager::buildVehicleCommand(*(uint32_t *)(v16 + 60), v16, v17, v7);
      v7 = v24 + 624;
    }
    v8 = a3;
  }
  v10 = v22;
  if ( v22 > a4 )
    v10 = a4;
  v11 = v10;
  v20 = v10;
  if ( v10 != 0 )
  {
    v18 = v22 % v10;
    v19 = v22 / v10;
    v12 = v26[0];
    if ( v11 > 0 )
    {
      v13 = 0;
      v25 = 0;
      v33 = (int *)v8;
      do
      {
        v27[2] = v12;
        v21 = v12;
        v14 = *a1;
        v28 = v19 + (v13 < v18);
        v23 = v28;
        LOWORD(v27[0]) = 3072;
        BYTE2(v27[0]) = 2;
        v27[1] = -65488;
        v27[3] = v14 + 4 * v25;
        ++v13;
        v29 = *v33;
        v30 = v33[1];
        v31 = v33[2];
        v32 = v33[3];
        hkpVehicleIntegrateJob::setRunsOnSpuOrPpu();
        hkJobQueue::addJob(a5, v27, 0);
        v25 += v23;
        v12 = 16 * v23 + v21;
      }
      while ( v13 != v20 );
    }
  }
  return v20;
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::stepVehiclesUsingJobResults  (binary VA: 0x186e840)
// Original: hkpMultithreadedVehicleManager::stepVehiclesUsingJobResults
// ----------------------------------------------------------------------------
int hkpMultithreadedVehicleManager::stepVehiclesUsingJobResults(uint32_t *a1, int a2, int a3)
{
  int v3;
  int result;
  hkpVehicleJobResults::Self **v5;
  const hkpVehicleInstance::Self *v6;
  typedef int _g4_t_v7;
  typedef hkpVehicleJobResults::Self **_g4_t_v8;
  typedef hkpVehicleJobResults::Self **_g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v3 = 0;
  hkpMultithreadedVehicleManager::getVehicleBatchFromBuffer((int)(uintptr_t)(a1), a3, (uint32_t *)(&v9));
  result = a1[1];
  v5 = v9;
  v7 = result;
  if ( result > 0 )
  {
    do
    {
      v8 = v5;
      v6 = *(const hkpVehicleInstance::Self **)(*a1 + 4 * v3++);
      result = hkpVehicleJobResults::applyForcesFromStep(*v5, v6);
      v5 = v8 + 4;
    }
    while ( v3 != v7 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::stepVehicleArraySynchronously  (binary VA: 0x186e8c0)
// Original: hkpMultithreadedVehicleManager::stepVehicleArraySynchronously
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpMultithreadedVehicleManager::stepVehicleArraySynchronously(int *a1, hkpWorld::Self *a2, int a3, int a4, pthread_mutex_t *a5, int a6)
{
  int v6;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v8;
  signed int v9;
  char *v10;
  hkLifoAllocator::Self *result;
  hkLifoAllocator::Self **v12;

  v6 = hkpMultithreadedVehicleManager::getBufferSize((int)(uintptr_t)(a1)) + 127;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v8 = *address;
  v9 = v6 & 0xFFFFFF80;
  v12 = address;
  v10 = *((char **)*address + 3);
  if ( v9 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(&v10[v9]) <= *((uint32_t *)v8 + 4) )
    *((uint32_t *)v8 + 3) = (uint32_t)(uintptr_t)(&v10[v9]);
  else
    v10 = (char *)hkLifoAllocator::allocateFromNewSlab(v8, v9);
  hkpMultithreadedVehicleManager::updateBeforeCollisionDetection((uint32_t *)(a1));
  if ( hkpMultithreadedVehicleManager::buildAndAddJobs(a1, (int)(uintptr_t)(a2), a3, a6, a5, (int)(uintptr_t)(v10)) != 0 )
  {
    hkpWorld::lockReadOnly();
    G4_VCALL<void>(a4, 20, a5, 15);
    hkJobQueue::processAllJobs(a5, true);
    G4_VCALL<void>(a4, 32);
    hkpWorld::unlockReadOnly();
    hkpMultithreadedVehicleManager::stepVehiclesUsingJobResults((uint32_t *)(a1), a3, (int)(uintptr_t)(v10));
  }
  result = *v12;
  if ( v9 > *((uint32_t *)*v12 + 2) || *((char **)result + 3) != &v10[v9] || v10 == *((char **)result + 5) )
    return hkLifoAllocator::slowBlockFree(result, v10, v9);
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v10);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::getMultithreadSpeedupThreshold  (binary VA: 0x186ea20)
// Original: hkpMultithreadedVehicleManager::getMultithreadSpeedupThreshold
// ----------------------------------------------------------------------------
int hkpMultithreadedVehicleManager::getMultithreadSpeedupThreshold(int a1)
{
  int result;

  result = 12;
  if ( *(uint8_t *)(*(uint32_t *)(**(uint32_t **)a1 + 60) + 9) == 2 )
    return 6;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultithreadedVehicleManager::stepVehiclesSynchronously  (binary VA: 0x186ea40)
// Original: hkpMultithreadedVehicleManager::stepVehiclesSynchronously
// ----------------------------------------------------------------------------
int hkpMultithreadedVehicleManager::stepVehiclesSynchronously(hkpEntity::Self *a1, hkpWorld::Self *a2, int a3, int a4, pthread_mutex_t *a5, int a6)
{
  int v6;
  hkLifoAllocator::Self **v7;
  char *v8;
  int v9;
  hkLifoAllocator::Self *v10;
  signed int v11;
  int result;
  hkLifoAllocator::Self *v13;
  signed int v14;
  int MultithreadSpeedupThreshold;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef signed int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_address)) > _g4_s0 ? (12u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v18)) > _g4_s2 ? (20u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);

  v17 = 0;
  v18 = 0;
  v19 = 0x80000000;
  v21 = *((uint32_t *)a1 + 3);
  v6 = v21;
  if ( v21 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v13 = *address;
    v14 = (4 * v21 + 127) & 0xFFFFFF80;
    v8 = *((char **)*address + 3);
    if ( v14 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(&v8[v14]) <= *((uint32_t *)v13 + 4) )
      *((uint32_t *)v13 + 3) = (uint32_t)(uintptr_t)(&v8[v14]);
    else
      v8 = (char *)hkLifoAllocator::allocateFromNewSlab(v13, (4 * v21 + 127) & 0xFFFFFF80);
    v7 = address;
  }
  else
  {
    v7 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v8 = nullptr;
  }
  v19 = v6 | 0x80000000;
  v17 = (int)(uintptr_t)(v8);
  v20 = v8;
  hkpVehicleManager::getActiveVehicles(a1, (hkMemoryAllocator::Self *)&v17);
  if ( v18 != 0 )
  {
    MultithreadSpeedupThreshold = hkpMultithreadedVehicleManager::getMultithreadSpeedupThreshold((int)(uintptr_t)(&v17));
    if ( MultithreadSpeedupThreshold > v18 )
      hkpVehicleManager::stepVehicleArray(&v17, a3);
    else
      hkpMultithreadedVehicleManager::stepVehicleArraySynchronously(&v17, a2, a3, a4, a5, a6);
  }
  v9 = 0;
  if ( (char *)v17 != v20 )
    v9 = v18;
  v10 = *v7;
  v18 = v9;
  v11 = (4 * v21 + 127) & 0xFFFFFF80;
  if ( v11 > *((uint32_t *)v10 + 2) || *((char **)v10 + 3) != &v20[v11] || v20 == *((char **)v10 + 5) )
    hkLifoAllocator::slowBlockFree(v10, v20, (4 * v21 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v10 + 3) = (uint32_t)(uintptr_t)(v20);
  result = v19;
  v18 = 0;
  if ( v19 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v17,
             4 * v19);
  return result;
}


