#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBroadph.h"

// ----------------------------------------------------------------------------
// Function: hkpBroadphaseViewer::getProcessTag  (binary VA: 0x182db80)
// Original: hkpBroadphaseViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpBroadphaseViewer::getProcessTag()
{
  return hkpBroadphaseViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpBroadphaseViewer::worldAddedCallback  (binary VA: 0x182dbf0)
// Original: hkpBroadphaseViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpBroadphaseViewer::worldAddedCallback(hkpBroadphaseViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::addWorldPostSimulationListener(a2, (hkpBroadphaseViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpBroadphaseViewer::worldRemovedCallback  (binary VA: 0x182dc30)
// Original: hkpBroadphaseViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpBroadphaseViewer::worldRemovedCallback(hkpBroadphaseViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::removeWorldPostSimulationListener(a2, (hkpBroadphaseViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpBroadphaseViewer::Destroy  (binary VA: 0x182dc70)
// Original: hkpBroadphaseViewer::~hkpBroadphaseViewer
// ----------------------------------------------------------------------------
void hkpBroadphaseViewer::Destroy(hkpBroadphaseViewer::Self *self)
{
  int v1;
  int v2;
  hkpWorld::Self *v3;
  int v4;
  hkpWorld::Self *v5;
  void (**v6)(hkpWorld::Self *);
  int v7;
  hkpWorld::Self *v8;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1D88);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A1DC0);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A1DEC);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A1E04);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpWorld::removeWorldPostSimulationListener(v3, (hkpBroadphaseViewer::Self *)((char *)self + 40));
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  v4 = *((uint32_t *)self + 12) - 1;
  v5 = (hkpWorld::Self *)(*((uint32_t *)self + 11) + (v4 << 7));
  if ( v4 >= 0 )
  {
    do
    {
      v6 = *(void (***)(hkpWorld::Self *))v5;
      --v4;
      v8 = v5;
      v5 = (hkpWorld::Self *)((char *)v5 - 128);
      (*v6)(v8);
    }
    while ( v4 != -1 );
  }
  v7 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      v7 << 7);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_209E868);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpBroadphaseViewer::Destroy_ea182dda0  (binary VA: 0x182dda0)
// Original: hkpBroadphaseViewer::~hkpBroadphaseViewer
// ----------------------------------------------------------------------------
void hkpBroadphaseViewer::Destroy_ea182dda0(hkpBroadphaseViewer::Self *self)
{
  int v1;
  int v2;

  hkpBroadphaseViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBroadphaseViewer::registerViewer  (binary VA: 0x182de30)
// Original: hkpBroadphaseViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpBroadphaseViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Broadphase",
             hkpBroadphaseViewer::create);
  hkpBroadphaseViewer::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBroadphaseViewer::Construct  (binary VA: 0x182e1d0)
// Original: hkpBroadphaseViewer::hkpBroadphaseViewer
// ----------------------------------------------------------------------------
int hkpBroadphaseViewer::Construct(uint32_t *a1, int a2)
{
  int result;
  int v3;
  hkpWorld::Self *v4;

  hkpWorldViewerBase::Construct(a1, a2);
  a1[11] = 0;
  a1[12] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A1D88);
  a1[13] = 0x80000000;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A1DC0);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A1E04);
  result = a1[9];
  a1[8] = ((uint32_t)(uintptr_t)&off_20A1DEC);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v3++);
      hkpWorld::addWorldPostSimulationListener(v4, (hkpWorldPostSimulationListener::Self *)(a1 + 10));
      result = a1[9];
    }
    while ( v3 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBroadphaseViewer::create  (binary VA: 0x182e270)
// Original: hkpBroadphaseViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpBroadphaseViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   56);
  hkpBroadphaseViewer::Construct(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}


