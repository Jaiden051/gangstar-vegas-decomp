#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldMe.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldMemoryUtil::watchHeapMemory  (binary VA: 0x177d260)
// Original: hkpWorldMemoryUtil::watchHeapMemory
// ----------------------------------------------------------------------------
uint32_t * hkpWorldMemoryUtil::watchHeapMemory(hkpWorldMemoryUtil::Self *self)
{
  uint32_t *result;
  int MemoryWatchDog;
  int v3;
  int Instance;
  int *address;
  int v6;
  int *v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  int v11;
  uint32_t *v12;
  uint64_t v13; // rax

  result = (uint32_t *)hkpWorld::getMemoryWatchDog(self);
  if ( result != nullptr )
  {
    MemoryWatchDog = hkpWorld::getMemoryWatchDog(self);
    v3 = G4_VCALL<int>(MemoryWatchDog, 20);
    Instance = hkMemorySystem::getInstance();
    if ( G4_VCALL<uint8_t>(Instance, 36, v3) == 0 )
    {
      address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
      v6 = *address;
      v7 = address;
      v8 = *(uint32_t **)(*address + 4);
      if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
      {
        *v8 = (uint32_t)(uintptr_t)("TtWatchDog:FreeMem");
        v9 = __rdtsc();
        v8[1] = v9;
        *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
      }
      v10 = hkpWorld::getMemoryWatchDog(self);
      G4_VCALL<void>(v10, 24, self);
      v11 = *v7;
      v12 = *(uint32_t **)(*v7 + 4);
      if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*v7 + 12) )
      {
        *v12 = (uint32_t)(uintptr_t)("Et");
        v13 = __rdtsc();
        v12[1] = v13;
        *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
      }
    }
    result = (uint32_t *)hkOutOfMemoryState[0];
    if ( hkOutOfMemoryState[0] != 0 )
      return hkSetOutOfMemoryState(0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldMemoryUtil::checkMemoryForIntegration  (binary VA: 0x177d340)
// Original: hkpWorldMemoryUtil::checkMemoryForIntegration
// ----------------------------------------------------------------------------
int hkpWorldMemoryUtil::checkMemoryForIntegration(hkpWorldMemoryUtil::Self *self)
{
  hkpWorldMemoryUtil::Self *v1;
  int Instance;
  hkpWorld::Self *v3;
  int v4;
  hkpWorld::Self *v5;
  int v6;
  int v7;
  int v8;
  int MemoryWatchDog;
  hkMemorySystem::Self *thisa;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v1 = self;
  hkpWorld::lock(self);
  v11 = *((uint32_t *)self + 44);
  hkpWorld::calcRequiredSolverBufferSize(self, v14);
  v12 = 0;
  while ( 1 )
  {
    Instance = hkMemorySystem::getInstance();
    if ( G4_VCALL<uint8_t>(Instance, 32, v14[0]) != 0 )
      break;
    thisa = (hkMemorySystem::Self *)(v1);
    ++v12;
    v3 = (hkpWorld::Self *)v14[2];
    do
    {
      if ( (*((uint8_t *)v3 + 37) & 4) == 0 )
        break;
      v13 = v14[0];
      if ( *((uint32_t *)thisa + 44) == 0 )
        break;
      while ( 1 )
      {
        hkpWorldOperationUtil::splitSimulationIsland(thisa, v3);
        hkpWorld::calcRequiredSolverBufferSize(thisa, v14);
        v5 = (hkpWorld::Self *)v14[2];
        if ( (hkpWorld::Self *)v14[2] != v3 )
          goto LABEL_11;
        if ( v14[0] != v13 )
        {
          v5 = v3;
LABEL_11:
          v6 = *((uint32_t *)thisa + 44);
          v3 = v5;
          goto LABEL_12;
        }
        v4 = *((uint32_t *)thisa + 44) >> 1;
        *((uint32_t *)thisa + 44) = v4;
        if ( (*((uint8_t *)v3 + 37) & 4) == 0 )
          break;
        if ( v4 == 0 )
          goto LABEL_13;
      }
      v6 = v4;
LABEL_12:
      ;
    }
    while ( v6 != 0 );
LABEL_13:
    v7 = hkMemorySystem::getInstance();
    v1 = (hkpWorldMemoryUtil::Self *)(thisa);
    if ( G4_VCALL<uint8_t>(v7, 32, v14[0]) == 0 )
    {
      v8 = v14[2];
      if ( (uint8_t)hkpSimulationIsland::isFullyConnected((hkpSimulationIsland::Self *)v14[2]) != 0
        || *((uint32_t *)thisa + 44) == 0 )
      {
        MemoryWatchDog = hkpWorld::getMemoryWatchDog(thisa);
        G4_VCALL<void>(MemoryWatchDog, 28, v14, v12);
        hkpWorld::calcRequiredSolverBufferSize(thisa, v14);
      }
      else
      {
        *(uint8_t *)(v8 + 37) = *(uint8_t *)(v8 + 37) & 0xF3 | 4;
      }
    }
  }
  *((uint32_t *)v1 + 44) = v11;
  return hkpWorld::unlock(v1);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldMemoryUtil::repeatCollideAndToiHandling  (binary VA: 0x177d4f0)
// Original: hkpWorldMemoryUtil::repeatCollideAndToiHandling
// ----------------------------------------------------------------------------
uint32_t * hkpWorldMemoryUtil::repeatCollideAndToiHandling(hkpWorldMemoryUtil::Self *self)
{
  uint32_t *result;
  int v2;

  result = *((uint32_t **)self + 2);
  v2 = result[10];
  if ( (v2 & 0xFFFFFFFD) == 0 )
  {
    (*(void (**)(uint32_t))(*result + 28))(*((uint32_t *)self + 2));
    result = *((uint32_t **)self + 2);
    v2 = result[10];
  }
  if ( v2 == 3 || v2 == 0 )
    return (uint32_t *)G4_VCALL<int>(result, 32);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldMemoryUtil::tryToRecoverFromMemoryErrors  (binary VA: 0x177d540)
// Original: hkpWorldMemoryUtil::tryToRecoverFromMemoryErrors
// ----------------------------------------------------------------------------
int hkpWorldMemoryUtil::tryToRecoverFromMemoryErrors(hkpWorldMemoryUtil::Self *self)
{
  int result;
  int i;
  int MemoryWatchDog;

  result = hkpWorld::getMemoryWatchDog(self);
  if ( result != 0 )
  {
    result = *(uint32_t *)(*((uint32_t *)self + 2) + 40);
    if ( result != 0 )
    {
      for ( i = 10; i != 0; --i )
      {
        MemoryWatchDog = hkpWorld::getMemoryWatchDog(self);
        G4_VCALL<void>(MemoryWatchDog, 24, self);
        hkSetOutOfMemoryState(0);
        hkpWorldMemoryUtil::repeatCollideAndToiHandling(self);
        result = *(uint32_t *)(*((uint32_t *)self + 2) + 40);
        if ( result == 0 )
          break;
      }
    }
  }
  return result;
}


