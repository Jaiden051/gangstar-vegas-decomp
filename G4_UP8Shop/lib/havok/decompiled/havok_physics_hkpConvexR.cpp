#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpConvexR.h"

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::getProcessTag  (binary VA: 0x184bbe0)
// Original: hkpConvexRadiusViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::getProcessTag()
{
  return hkpConvexRadiusViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::inactiveEntityMovedCallback  (binary VA: 0x184bc10)
// Original: hkpConvexRadiusViewer::inactiveEntityMovedCallback
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::inactiveEntityMovedCallback(hkpConvexRadiusViewer::Self *self, hkpEntity::Self *a2)
{
  uint8_t v3[28];

  return (*(int (**)(uint8_t *, uint32_t, char *, char *, uint32_t))(**((uint32_t **)self + 6) + 36))(
           v3,
           *((uint32_t *)self + 6),
           (char *)a2 + 240,
           (char *)a2 + 19,
           hkpConvexRadiusViewer::m_tag);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::postSimulationCallback  (binary VA: 0x184bc80)
// Original: hkpConvexRadiusViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::postSimulationCallback(hkpConvexRadiusViewer::Self *self, hkpWorld::Self *a2)
{
  int *address;
  int v3;
  uint32_t *v4;
  uint64_t v5; // rax
  int v6;
  int v7;
  int v8;
  int v9;
  uint64_t v10; // rax
  int v11;
  uint32_t *v12;
  typedef int *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef hkpConvexRadiusViewer::Self *_g4_t_v16;
  typedef hkpWorld::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef float _g4_t_CurrentTime;
  typedef uint8_t _g4_t_v20[4];
  typedef uint32_t _g4_t_v21[22];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_CurrentTime)) > _g4_s5 ? (24u + sizeof(_g4_t_CurrentTime)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v21)) > _g4_s7 ? (36u + sizeof(_g4_t_v21)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_CurrentTime &CurrentTime = *reinterpret_cast<_g4_t_CurrentTime *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);

  v21[18] = (uint32_t)(uintptr_t)(&self);
  v16 = self;
  v17 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v14 = address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TthkpConvexRadiusViewer");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  v15 = 0;
  v6 = *((uint32_t *)v17 + 11);
  if ( v6 > 0 )
  {
    do
    {
      v7 = *(uint32_t *)(*((uint32_t *)v17 + 10) + 4 * v15);
      if ( *(int *)(v7 + 80) > 0 )
      {
        v8 = 0;
        do
        {
          v18 = v7;
          v9 = *(uint32_t *)(*(uint32_t *)(v7 + 76) + 4 * v8++);
          CurrentTime = hkpWorld::getCurrentTime(v17);
          hkpMotion::approxTransformAt((hkpMotion::Self *)(v9 + 224), CurrentTime, (hkTransformf::Self *)v21);
          (*(void (**)(uint8_t *))(**((uint32_t **)v16 + 6) + 36))(v20);
          v7 = v18;
        }
        while ( *(uint32_t *)(v18 + 80) > v8 );
        v6 = *((uint32_t *)v17 + 11);
      }
      ++v15;
    }
    while ( v15 < v6 );
  }
  LODWORD(v10) = (uint32_t)(uintptr_t)(v14);
  v11 = *v14;
  v12 = *(uint32_t **)(*v14 + 4);
  if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*v14 + 12) )
  {
    *v12 = (uint32_t)(uintptr_t)("Et");
    v10 = __rdtsc();
    v12[1] = v10;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::registerViewer  (binary VA: 0x184be00)
// Original: hkpConvexRadiusViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Convex Radius",
             hkpConvexRadiusViewer::create);
  hkpConvexRadiusViewer::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::Construct  (binary VA: 0x184be50)
// Original: hkpConvexRadiusViewer::hkpConvexRadiusViewer
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::Construct(uint32_t *a1, uint32_t *a2)
{
  int address;
  hkpConvexRadiusBuilder::Self *v3;
  int v4;
  int result;
  uint8_t v6[32];

  hkpWorldViewerBase::Construct((int)(uintptr_t)(a1), a2);
  a1[12] = 0;
  a1[13] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A3F68);
  a1[14] = 0x80000000;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A3FB0);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A3FDC);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A3FF4);
  a1[11] = ((uint32_t)(uintptr_t)&off_20A4018);
  hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment::Construct((hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment::Self *)v6);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (hkpConvexRadiusBuilder::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                   *(uint32_t *)(*(uint32_t *)address + 44),
                                   16);
  hkpConvexRadiusBuilder::Construct(
    v3,
    (const hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment::Self *)v6);
  v4 = dword_21377D4;
  a1[17] = (uint32_t)(uintptr_t)(v3);
  a1[15] = v4;
  result = dword_21377D8;
  a1[16] = dword_21377D8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::create  (binary VA: 0x184bf20)
// Original: hkpConvexRadiusViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpConvexRadiusViewer::create(uint32_t *a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   72);
  hkpConvexRadiusViewer::Construct(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::addWorld  (binary VA: 0x184bf80)
// Original: hkpConvexRadiusViewer::addWorld
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpConvexRadiusViewer::addWorld(hkpConvexRadiusViewer::Self *self, hkpWorld::Self *a2)
{
  int address;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  hkpWorld::Self *result;
  int v12;
  int v13;
  hkpWorldPostSimulationListener::Self *v14;
  hkpWorldPostSimulationListener::Self *v15;
  hkpWorldPostSimulationListener::Self *v16;
  int v17;
  int v18;
  uint32_t *v19;

  hkpWorld::addEntityListener(a2, (int)(uintptr_t)(self) + 40);
  hkpWorld::addWorldPostSimulationListener(a2, (hkpConvexRadiusViewer::Self *)((char *)self + 44));
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   16);
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0x80000000;
  *v3 = (uint32_t)(uintptr_t)(a2);
  v4 = *((uint32_t *)self + 13);
  if ( v4 == (*((uint32_t *)self + 14) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpConvexRadiusViewer::Self *)((char *)self + 48),
      4,
      (int)(uintptr_t)(v3));
    v4 = *((uint32_t *)self + 13);
    v3 = v19;
  }
  v17 = 0;
  *(uint32_t *)(*((uint32_t *)self + 12) + 4 * v4) = (uint32_t)(uintptr_t)(v3);
  ++*((uint32_t *)self + 13);
  v5 = *((uint32_t *)a2 + 11);
  if ( v5 > 0 )
  {
    do
    {
      v6 = *(uint32_t *)(*((uint32_t *)a2 + 10) + 4 * v17);
      if ( *(int *)(v6 + 80) > 0 )
      {
        v7 = 0;
        do
        {
          v14 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v6 + 76) + 4 * v7++);
          G4_VCALL<void>(self, 48, v14);
        }
        while ( *(uint32_t *)(v6 + 80) > v7 );
        v5 = *((uint32_t *)a2 + 11);
      }
      ++v17;
    }
    while ( v17 < v5 );
  }
  v18 = 0;
  v8 = *((uint32_t *)a2 + 14);
  if ( v8 > 0 )
  {
    do
    {
      v9 = *(uint32_t *)(*((uint32_t *)a2 + 13) + 4 * v18);
      if ( *(int *)(v9 + 80) > 0 )
      {
        v10 = 0;
        do
        {
          v15 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v9 + 76) + 4 * v10++);
          G4_VCALL<void>(self, 48, v15);
        }
        while ( *(uint32_t *)(v9 + 80) > v10 );
        v8 = *((uint32_t *)a2 + 14);
      }
      ++v18;
    }
    while ( v18 < v8 );
  }
  result = a2;
  v12 = *((uint32_t *)a2 + 8);
  if ( v12 != 0 )
  {
    result = *(hkpWorld::Self **)(v12 + 80);
    if ( (int)(uintptr_t)(result) > 0 )
    {
      v13 = 0;
      do
      {
        v16 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v12 + 76) + 4 * v13++);
        result = (hkpWorld::Self *)G4_VCALL<int>(self, 48, v16);
      }
      while ( *(uint32_t *)(v12 + 80) > v13 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::init  (binary VA: 0x184c140)
// Original: hkpConvexRadiusViewer::init
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::init(hkpConvexRadiusViewer::Self *self)
{
  int result;
  int v2;
  hkpWorld::Self *v3;

  result = *((uint32_t *)self + 9);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v2++);
      hkpConvexRadiusViewer::addWorld(self, v3);
      result = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::worldAddedCallback  (binary VA: 0x184c1b0)
// Original: hkpConvexRadiusViewer::worldAddedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpConvexRadiusViewer::worldAddedCallback(hkpConvexRadiusViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpConvexRadiusViewer::addWorld(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::removeAllGeometries  (binary VA: 0x184c1f0)
// Original: hkpConvexRadiusViewer::removeAllGeometries
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::removeAllGeometries(hkpConvexRadiusViewer::Self *self, int a2)
{
  int v2;
  int result;
  int v4;
  uint8_t v5[28];

  v2 = *(uint32_t *)(*((uint32_t *)self + 12) + 4 * a2);
  result = *(uint32_t *)(v2 + 8);
  if ( result > 0 )
  {
    v4 = 0;
    do
    {
      ++v4;
      result = (*(int (**)(uint8_t *))(**((uint32_t **)self + 6) + 60))(v5);
    }
    while ( *(uint32_t *)(v2 + 8) > v4 );
  }
  *(uint32_t *)(v2 + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::findWorld  (binary VA: 0x184c270)
// Original: hkpConvexRadiusViewer::findWorld
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::findWorld(hkpConvexRadiusViewer::Self *self, const hkpWorld::Self *a2)
{
  int v2;
  const hkpWorld::Self ***v3;
  int result;

  v2 = *((uint32_t *)self + 13);
  if ( v2 <= 0 )
    return -1;
  v3 = *((const hkpWorld::Self ****)self + 12);
  result = 0;
  if ( **v3 != a2 )
  {
    while ( ++result != v2 )
    {
      if ( *v3[result] == a2 )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::entityRemovedCallback  (binary VA: 0x184c2b0)
// Original: hkpConvexRadiusViewer::entityRemovedCallback
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::entityRemovedCallback(hkpConvexRadiusViewer::Self *self, hkpEntity::Self *a2)
{
  int result;
  char *v3;
  int v4;
  char **v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[28];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);

  result = *((uint32_t *)a2 + 4);
  if ( result != 0 )
  {
    result = hkpConvexRadiusViewer::findWorld(self, *((const hkpWorld::Self **)a2 + 2));
    if ( result >= 0 )
    {
      v3 = (char *)a2 + 19;
      v8 = *(uint32_t *)(*((uint32_t *)self + 12) + 4 * result);
      (*(void (**)(uint8_t *))(**((uint32_t **)self + 6) + 60))(v9);
      result = v8;
      v4 = *(uint32_t *)(v8 + 8);
      if ( v4 > 0 )
      {
        v5 = *(char ***)(v8 + 4);
        if ( v3 == *v5 )
        {
          v6 = 0;
          result = 0;
LABEL_10:
          v7 = v4 - 1;
          *(uint32_t *)(v8 + 8) = v7;
          if ( result != v7 )
          {
            result = (int)(uintptr_t)(v5[v7]);
            v5[v6] = (char *)result;
          }
        }
        else
        {
          result = 0;
          while ( ++result != v4 )
          {
            v6 = result;
            if ( v3 == v5[result] )
              goto LABEL_10;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::entityAddedCallback  (binary VA: 0x184c390)
// Original: hkpConvexRadiusViewer::entityAddedCallback
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::entityAddedCallback(hkpConvexRadiusViewer::Self *self, const hkpWorld::Self **a2, int a3, int a4, int a5)
{
  int result;
  hkpEntity::Self *v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  char v11;
  int v12;
  hkpEntity::Self *v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint64_t v21; // rax
  uint64_t v22; // rax
  uint64_t v23; // rax
  unsigned int v24;
  unsigned int v25;
  uint32_t *v26;
  int v27;
  int savedregs;
  int *retaddr;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef const hkpWorld::Self *_g4_t_v37;
  typedef hkpConvexRadiusViewer::Self *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef hkpEntity::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef hkpConvexRadiusViewer::Self *_g4_t_v49;
  typedef hkpConvexRadiusViewer::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t _g4_t_v57[2];
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef char _g4_t_v60;
  typedef hkpConvexRadiusViewer::Self **_g4_t_v61;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v29)) > _g4_s1 ? (0u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v30)) > _g4_s2 ? (4u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v31)) > _g4_s3 ? (8u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v32)) > _g4_s4 ? (12u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v33)) > _g4_s5 ? (16u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v34)) > _g4_s6 ? (20u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v35)) > _g4_s7 ? (24u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v36)) > _g4_s8 ? (28u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v37)) > _g4_s9 ? (32u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v38)) > _g4_s10 ? (32u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v39)) > _g4_s11 ? (36u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v40)) > _g4_s12 ? (36u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v41)) > _g4_s13 ? (40u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v42)) > _g4_s14 ? (44u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v43)) > _g4_s15 ? (44u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v44)) > _g4_s16 ? (48u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v45)) > _g4_s17 ? (48u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v46)) > _g4_s18 ? (48u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v47)) > _g4_s19 ? (52u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v48)) > _g4_s20 ? (52u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v49)) > _g4_s21 ? (56u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v50)) > _g4_s22 ? (56u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v51)) > _g4_s23 ? (60u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v52)) > _g4_s24 ? (64u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v53)) > _g4_s25 ? (68u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v54)) > _g4_s26 ? (72u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v55)) > _g4_s27 ? (76u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v56)) > _g4_s28 ? (80u + sizeof(_g4_t_v56)) : _g4_s28,
    _g4_s30 = (84u + sizeof(_g4_t_v57)) > _g4_s29 ? (84u + sizeof(_g4_t_v57)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v58)) > _g4_s30 ? (92u + sizeof(_g4_t_v58)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v59)) > _g4_s31 ? (96u + sizeof(_g4_t_v59)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v60)) > _g4_s32 ? (100u + sizeof(_g4_t_v60)) : _g4_s32,
    _g4_s34 = (124u + sizeof(_g4_t_v61)) > _g4_s33 ? (124u + sizeof(_g4_t_v61)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 72u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 76u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 84u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 92u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 96u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 100u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 124u);

  v61 = &self;
  v49 = self;
  result = (int)(uintptr_t)(a2);
  v47 = (hkpEntity::Self *)a2;
  if ( a2[4] == nullptr )
    return result;
  v6 = (hkpEntity::Self *)a2;
  v37 = a2[2];
  result = hkpConvexRadiusViewer::findWorld(self, v37);
  if ( result < 0 )
    return result;
  v44 = *(uint32_t **)(*((uint32_t *)v49 + 12) + 4 * result);
  result = *((uint32_t *)v6 + 4);
  v42 = result;
  if ( result == 0 )
    return result;
  if ( *((uint32_t *)v49 + 5) == 0 && *((uint32_t *)v49 + 4) == 0
    || ((*(void (**)(char *))(**((uint32_t **)v49 + 6) + 140))((char *)&v51 + 3), HIBYTE(v51) == 0) )
  {
    v11 = 0;
    goto LABEL_15;
  }
  v57[1] = -65535;
  v58 = -1351617299;
  v57[0] = ((uint32_t)(uintptr_t)&off_20A32E8);
  v59 = -1787426543;
  v60 = 1;
  v7 = *((uint32_t *)v47 + 32);
  if ( v7 > 0 )
  {
    v8 = *((uint32_t **)v47 + 31);
    if ( *v8 == 4662 )
    {
LABEL_26:
      v17 = v8[2];
      v18 = v8[3];
LABEL_27:
      v19 = (uint8_t)v17 ^ 0xED;
      v55 = v17;
      v56 = v18;
      v20 = BYTE1(v17) ^ LOBYTE(hkCrc64StreamWriter::g_crc64lookupTable[v19]) ^ 0xF4;
      v21 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(LOBYTE(hkCrc64StreamWriter::g_crc64lookupTable[v20])
                                                                    ^ ((uint16_t)(LOWORD(hkCrc64StreamWriter::g_crc64lookupTable[v19])
                                                                                        ^ 0x6FF4) >> 8)
                                                                    ^ BYTE2(v17))]
          ^ ((hkCrc64StreamWriter::g_crc64lookupTable[v20]
            ^ ((hkCrc64StreamWriter::g_crc64lookupTable[v19] ^ 0x95760911AF6FF4uLL) >> 8)) >> 8);
      v22 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v21 ^ HIBYTE(v55))] ^ (v21 >> 8);
      v23 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v22 ^ v18)] ^ (v22 >> 8);
      LOBYTE(v20) = v23 ^ BYTE1(v18);
      LODWORD(v23) = LODWORD(hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v23 ^ BYTE1(v18))]) ^ (v23 >> 8);
      v24 = HIDWORD(hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)v20]) ^ (HIDWORD(v23) >> 8);
      LOBYTE(v20) = v23 ^ BYTE2(v56);
      LODWORD(v23) = LODWORD(hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v23 ^ BYTE2(v56))])
                   ^ (__PAIR64__(v24, v23) >> 8);
      v41 = v24 >> 8;
      v25 = HIDWORD(hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)v20]) ^ (v24 >> 8);
      v12 = (__PAIR64__(v25, v23) >> 8)
          ^ LODWORD(hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v23 ^ HIBYTE(v56))]);
      v11 = 1;
      v10 = HIDWORD(hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v23 ^ HIBYTE(v56))]) ^ (v25 >> 8);
      goto LABEL_12;
    }
    v9 = 0;
    while ( ++v9 != v7 )
    {
      if ( v8[4 * v9] == 4662 )
      {
        v26 = v8 + 4;
        v27 = 0;
        while ( ++v27 != v7 )
        {
          v8 = v26;
          v26 += 4;
          if ( *(v26 - 4) == 4662 )
            goto LABEL_26;
        }
        v17 = 0;
        v18 = 0;
        goto LABEL_27;
      }
    }
  }
  hkpShapeHashUtil::writeShape(v57, v42, 1);
  v10 = v59;
  v11 = v60;
  v12 = v58;
LABEL_12:
  v54 = ~v10;
  v53 = ~v12;
LABEL_15:
  v39 = (char *)v47 + 19;
  v13 = *((hkpEntity::Self **)v49 + 16);
  if ( *((uint8_t *)v47 + 232) == 5 )
    v13 = *((hkpEntity::Self **)v49 + 15);
  if ( v11 != 0 )
  {
    (*(void (**)(uint32_t *, int, uint32_t *, int, int, int, int, int, int, int, int, uint32_t *, char *, unsigned int, int, uint32_t *, int, hkpConvexRadiusViewer::Self *, int, int, int, int, int, int))(**((uint32_t **)v37 + 22) + 72))(
      *((uint32_t **)v37 + 22),
      (int)(uintptr_t)(v47) + 36,
      v57,
      v28,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v57,
      v39,
      v41,
      v42,
      v44,
      (int)(uintptr_t)(v47) + 240,
      v49,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    v15 = v45[2];
    if ( v15 == (v45[3] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(v45 + 1),
        4,
        savedregs);
      v15 = v45[2];
    }
    *(uint32_t *)(v45[1] + 4 * v15) = v40;
    ++v45[2];
    v16 = *((int **)v50 + 6);
    v46 = *v16;
    a4 = v40;
    a5 = hkpConvexRadiusViewer::m_tag;
    a2 = (const hkpWorld::Self **)v13;
    a3 = v48;
    self = v38;
    retaddr = &v53;
    return (*(int (**)(int *, int *, int, uint32_t))(v46 + 144))(&v52, v16, v43, *((uint32_t *)v50 + 17));
  }
  else
  {
    v29 = *((uint32_t *)v49 + 17);
    (*(void (**)(int *))(**((uint32_t **)v49 + 6) + 136))(&v52);
    result = v52;
    if ( v52 == 0 )
    {
      v14 = v44[2];
      if ( v14 == (v44[3] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v44 + 1),
          4,
          v29);
        v14 = v44[2];
      }
      *(uint32_t *)(v44[1] + 4 * v14) = (uint32_t)(uintptr_t)(v39);
      ++v44[2];
      return (*(int (**)(int *))(**((uint32_t **)v49 + 6) + 28))(&v52);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::removeWorld  (binary VA: 0x184c890)
// Original: hkpConvexRadiusViewer::removeWorld
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::removeWorld(hkpConvexRadiusViewer::Self *self, int a2)
{
  int result;
  uint32_t *v3;
  int v4;
  int address;
  int v6;

  hkpWorld::removeEntityListener(**(uint32_t ***)(*((uint32_t *)self + 12) + 4 * a2), (int)(uintptr_t)(self) + 40);
  hkpWorld::removeWorldPostSimulationListener(
    **(hkpWorld::Self ***)(*((uint32_t *)self + 12) + 4 * a2),
    (hkpConvexRadiusViewer::Self *)((char *)self + 44));
  hkpConvexRadiusViewer::removeAllGeometries(self, a2);
  result = *((uint32_t *)self + 12);
  v3 = *(uint32_t **)(result + 4 * a2);
  if ( v3 != nullptr )
  {
    v4 = v3[3];
    v3[2] = 0;
    if ( v4 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v3[1],
        4 * v4);
    v3[1] = 0;
    v3[3] = 0x80000000;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v3,
      16);
    result = *((uint32_t *)self + 12);
  }
  v6 = *((uint32_t *)self + 13) - 1;
  *((uint32_t *)self + 13) = v6;
  if ( a2 != v6 )
    *(uint32_t *)(result + 4 * a2) = *(uint32_t *)(result + 4 * v6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::Destroy  (binary VA: 0x184c980)
// Original: hkpConvexRadiusViewer::~hkpConvexRadiusViewer
// ----------------------------------------------------------------------------
void hkpConvexRadiusViewer::Destroy(hkpConvexRadiusViewer::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int v8;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3F68);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3FB0);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A3FDC);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A3FF4);
  v1 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_20A4018);
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
  v6 = *((uint32_t *)self + 13) - 1;
  if ( v6 >= 0 )
  {
    do
    {
      v8 = v6--;
      hkpConvexRadiusViewer::removeWorld(self, v8);
    }
    while ( v6 != -1 );
  }
  v7 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v7);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&off_2054DE8);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::Destroy_ea184cad0  (binary VA: 0x184cad0)
// Original: hkpConvexRadiusViewer::~hkpConvexRadiusViewer
// ----------------------------------------------------------------------------
void hkpConvexRadiusViewer::Destroy_ea184cad0(hkpConvexRadiusViewer::Self *self)
{
  int v1;
  int v2;

  hkpConvexRadiusViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 72;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::worldRemovedCallback  (binary VA: 0x184cb70)
// Original: hkpConvexRadiusViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::worldRemovedCallback(hkpConvexRadiusViewer::Self *self, hkpWorld::Self *a2)
{
  int result;

  result = hkpConvexRadiusViewer::findWorld(self, a2);
  if ( result >= 0 )
    return hkpConvexRadiusViewer::removeWorld(self, result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusViewer::setMinimumVisibleRadius  (binary VA: 0x184cbc0)
// Original: hkpConvexRadiusViewer::setMinimumVisibleRadius
// ----------------------------------------------------------------------------
int hkpConvexRadiusViewer::setMinimumVisibleRadius(hkpConvexRadiusViewer::Self *self, float a2)
{
  int result;

  result = *((uint32_t *)self + 17);
  *(float *)(result + 8) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::Destroy  (binary VA: 0x1854430)
// Original: hkpConvexRadiusBuilder::~hkpConvexRadiusBuilder
// ----------------------------------------------------------------------------
void hkpConvexRadiusBuilder::Destroy(hkpConvexRadiusBuilder::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::Destroy_ea1854500  (binary VA: 0x1854500)
// Original: hkpConvexRadiusBuilder::~hkpConvexRadiusBuilder
// ----------------------------------------------------------------------------
void hkpConvexRadiusBuilder::Destroy_ea1854500(hkpConvexRadiusBuilder::Self *self)
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
// Function: hkpConvexRadiusBuilder::getInitialContinueData  (binary VA: 0x1854560)
// Original: hkpConvexRadiusBuilder::getInitialContinueData
// ----------------------------------------------------------------------------
uint32_t * hkpConvexRadiusBuilder::getInitialContinueData()
{
  int address;
  uint32_t *result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)address + 44),
                       28);
  result[1] = -65535;
  result[2] = 0;
  *result = ((uint32_t)(uintptr_t)&off_20A13F0);
  result[3] = 0;
  result[4] = 0x80000000;
  result[5] = -1;
  result[6] = -1;
  return result;
}



// ============================================================================
// Address:   0x1854820 (size: 15 bytes)
// Symbol:    _ZN22hkpConvexRadiusBuilder33hkpConvexRadiusBuilderEnvironmentC1Ev
// Demangled: hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment::hkpConvexRadiusBuilderEnvironment(void)
// ============================================================================
// Alternative name is '_ZN22hkpConvexRadiusBuilder33hkpConvexRadiusBuilderEnvironmentC2Ev'
hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment::Self *hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment::Construct(
        hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment::Self *self)
{
  *(uint32_t *)self = 981668463;
  return self;
}
// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::Construct  (binary VA: 0x1854830)
// Original: hkpConvexRadiusBuilder::hkpConvexRadiusBuilder
// ----------------------------------------------------------------------------
void hkpConvexRadiusBuilder::Construct(hkpConvexRadiusBuilder::Self *self, const hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment::Self *a2)
{
  int v2; // xmm0_4

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4408);
  *((uint32_t *)self + 1) = -65535;
  v2 = *(uint32_t *)a2;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 2) = v2;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildShapeDisplay_Box  (binary VA: 0x1854870)
// Original: hkpConvexRadiusBuilder::buildShapeDisplay_Box
// ----------------------------------------------------------------------------
__m128 * hkpConvexRadiusBuilder::buildShapeDisplay_Box(int a1, __m128 *a2, uint32_t *a3, __m128 **a4, __m128 *a5)
{
  __m128 *result;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  int address;
  hkDisplayBox::Self *v13;
  __m128 **v14;
  __m128 *v15;
  __m128 **v16;
  __m128 v17;

  result = a2;
g4_m128_raw(v6) =g4_m128_lane<uint32_t>(a2[1], 0);
  if (g4_m128_lane<float>(v6, 0) > *(float *)(a1 + 8) )
  {
g4_m128_raw(v7) =g4_m128_lane<uint32_t>(a2[2], 0);
g4_m128_raw(v8) =g4_m128_lane<uint32_t>(a2[2], 1);
g4_m128_lane<float>(v7, 0) =g4_m128_lane<float>(v7, 0) +g4_m128_lane<float>(v6, 0);
g4_m128_raw(v9) =g4_m128_lane<uint32_t>(a2[2], 2);
g4_m128_lane<float>(v8, 0) =g4_m128_lane<float>(v8, 0) +g4_m128_lane<float>(v6, 0);
g4_m128_raw(v10) =g4_m128_lane<uint32_t>(a2[2], 3);
g4_m128_lane<float>(v9, 0) =g4_m128_lane<float>(v9, 0) +g4_m128_lane<float>(v6, 0);
g4_m128_lane<float>(v10, 0) =g4_m128_lane<float>(v10, 0) +g4_m128_lane<float>(v6, 0);
    v17 = _mm_add_ps(_mm_shuffle_ps(v6, v6, 0), a2[2]);
    if ( a5 != nullptr )
    {
g4_m128_lane<uint64_t>(v11, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v7, v8), 0);
g4_m128_lane<uint64_t>(v11, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v9, v10), 0);
      v17 = _mm_mul_ps(v11, *a5);
    }
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v13 = (hkDisplayBox::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                            *(uint32_t *)(*(uint32_t *)address + 44),
                            112);
    hkDisplayBox::Construct(v13, (const hkVector4f::Self *)&v17);
    v14 = a4;
    *((uint32_t *)v13 + 4) = *a3;
    *((uint32_t *)v13 + 5) = a3[1];
    *((uint32_t *)v13 + 6) = a3[2];
    *((uint32_t *)v13 + 7) = a3[3];
    *((uint32_t *)v13 + 8) = a3[4];
    *((uint32_t *)v13 + 9) = a3[5];
    *((uint32_t *)v13 + 10) = a3[6];
    *((uint32_t *)v13 + 11) = a3[7];
    *((uint32_t *)v13 + 12) = a3[8];
    *((uint32_t *)v13 + 13) = a3[9];
    *((uint32_t *)v13 + 14) = a3[10];
    *((uint32_t *)v13 + 15) = a3[11];
    *((uint32_t *)v13 + 16) = a3[12];
    *((uint32_t *)v13 + 17) = a3[13];
    *((uint32_t *)v13 + 18) = a3[14];
    *((uint32_t *)v13 + 19) = a3[15];
    v15 = a4[1];
    if ( v15 == (__m128 *)((unsigned int)(uintptr_t)(a4[2]) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a4, 4, (int)(uintptr_t)(a4));
      v14 = v16;
      v15 = v16[1];
    }
    result = *v14;
    g4_m128_lane<int32_t>(*((*v14)), (uint32_t)(uintptr_t)(v15)) = (int32_t)(uintptr_t)(v13);
    v14[1] = (__m128 *)((char *)v14[1] + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildShapeDisplay_UserShapes  (binary VA: 0x1854e60)
// Original: hkpConvexRadiusBuilder::buildShapeDisplay_UserShapes
// ----------------------------------------------------------------------------
uint8_t * hkpConvexRadiusBuilder::buildShapeDisplay_UserShapes(uint8_t *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;

  v5 = 0;
  *a1 = 0;
  v6 = (int)(uintptr_t)(hkSingleton<hkpUserConvexRadiusBuilder::Self>::s_instance);
  v7 = *(uint32_t *)(hkSingleton<hkpUserConvexRadiusBuilder::Self>::s_instance + 12);
  if ( v7 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *(uint32_t *)(v6 + 8) + 8 * v5;
        if ( *(uint32_t *)(v8 + 4) == *(uint8_t *)(a3 + 8) )
          break;
        if ( ++v5 >= v7 )
          return a1;
      }
      ++v5;
      (*(void (**)(int, int, int, int))v8)(a3, a4, a5, a2);
      *a1 = 1;
      v6 = (int)(uintptr_t)(hkSingleton<hkpUserConvexRadiusBuilder::Self>::s_instance);
      v7 = *(uint32_t *)(hkSingleton<hkpUserConvexRadiusBuilder::Self>::s_instance + 12);
    }
    while ( v5 < v7 );
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::getCurrentRawGeometry  (binary VA: 0x1854f00)
// Original: hkpConvexRadiusBuilder::getCurrentRawGeometry
// ----------------------------------------------------------------------------
int hkpConvexRadiusBuilder::getCurrentRawGeometry(int a1, uint32_t *a2)
{
  int result;
  int address;
  hkGeometry::Self *v4;
  hkDisplayConvex::Self *v5;
  uint32_t *v6;
  int v7;
  int v8;

  result = *(uint32_t *)(a1 + 12);
  if ( result == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v4 = (hkGeometry::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                         *(uint32_t *)(*(uint32_t *)address + 44),
                         32);
    *((uint32_t *)v4 + 1) = -65535;
    *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_20586B8);
    *((uint32_t *)v4 + 2) = 0;
    *((uint32_t *)v4 + 3) = 0;
    *((uint32_t *)v4 + 4) = 0x80000000;
    *((uint32_t *)v4 + 5) = 0;
    *((uint32_t *)v4 + 6) = 0;
    *((uint32_t *)v4 + 7) = 0x80000000;
    v5 = (hkDisplayConvex::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)address + 44),
                              96);
    hkDisplayConvex::Construct(v5, v4);
    v6 = a2;
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v5);
    v7 = a2[1];
    if ( v7 == (a2[2] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a2, 4, v8);
      v5 = *(hkDisplayConvex::Self **)(a1 + 12);
      v6 = a2;
      v7 = a2[1];
    }
    *(uint32_t *)(*v6 + 4 * v7) = (uint32_t)(uintptr_t)(v5);
    ++v6[1];
    return *(uint32_t *)(a1 + 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildShapeDisplay_Triangle  (binary VA: 0x1855010)
// Original: hkpConvexRadiusBuilder::buildShapeDisplay_Triangle
// ----------------------------------------------------------------------------
int hkpConvexRadiusBuilder::buildShapeDisplay_Triangle(int a1, int a2, hkTransformf::Self *a3, uint32_t *a4, float *a5)
{
  int result;
  float v6; // xmm7_4
  int v7;
  float v8;
  float v9; // xmm0_4
  __m128i v10;
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  __m128i v14;
  float v15; // xmm5_4
  int v16;
  float v17; // xmm1_4
  float v18; // xmm0_4
  __m128i v19;
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm6_4
  __m128i v23;
  float v24; // xmm5_4
  int v25;
  float v26; // xmm1_4
  float v27; // xmm0_4
  __m128i v28;
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm6_4
  __m128i v32;
  float v33; // xmm5_4
  int v34;
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm7_4
  float v38; // xmm4_4
  int v39;
  float v40; // xmm2_4
  unsigned int v41;
  float *v42;
  float v43; // xmm3_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  int v46;
  float v47; // xmm6_4
  float v48; // xmm1_4
  float v49; // xmm3_4
  float v50; // xmm6_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  __m128i v53;
  __m128i v54;
  float v55; // xmm0_4
  float v56; // xmm6_4
  float v57; // xmm1_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm7_4
  float v62; // xmm2_4
  float v63; // xmm5_4
  float v64; // xmm0_4
  __m128i v65;
  __m128i v66;
  float v67; // xmm4_4
  int v68;
  float v69; // xmm1_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm5_4
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm2_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm5_4
  __m128i v79;
  float v80; // xmm4_4
  int v81;
  float v82; // xmm1_4
  float v83; // xmm3_4
  float v84; // xmm2_4
  float v85; // xmm5_4
  float v86; // xmm7_4
  float v87; // xmm1_4
  float v88; // xmm2_4
  float v89; // xmm0_4
  __m128i v90;
  float v91; // xmm1_4
  float v92; // xmm5_4
  __m128i v93;
  float v94; // xmm4_4
  int v95;
  float v96; // xmm1_4
  float v97; // xmm3_4
  float v98; // xmm2_4
  float v99; // xmm5_4
  int CurrentRawGeometry;
  int v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef uint32_t *_g4_t_v126;
  typedef hkTransformf::Self *_g4_t_v127;
  typedef float _g4_t_v128;
  typedef char _g4_t_v129;
  typedef char _g4_t_v130[4];
  typedef int _g4_t_v131[4];
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef int *_g4_t_v147;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v102)) > _g4_s0 ? (12u + sizeof(_g4_t_v102)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v103)) > _g4_s1 ? (20u + sizeof(_g4_t_v103)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v104)) > _g4_s2 ? (20u + sizeof(_g4_t_v104)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v105)) > _g4_s3 ? (24u + sizeof(_g4_t_v105)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v106)) > _g4_s4 ? (24u + sizeof(_g4_t_v106)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v107)) > _g4_s5 ? (28u + sizeof(_g4_t_v107)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v108)) > _g4_s6 ? (28u + sizeof(_g4_t_v108)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v109)) > _g4_s7 ? (32u + sizeof(_g4_t_v109)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v110)) > _g4_s8 ? (32u + sizeof(_g4_t_v110)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v111)) > _g4_s9 ? (36u + sizeof(_g4_t_v111)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v112)) > _g4_s10 ? (40u + sizeof(_g4_t_v112)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v113)) > _g4_s11 ? (44u + sizeof(_g4_t_v113)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v114)) > _g4_s12 ? (44u + sizeof(_g4_t_v114)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v115)) > _g4_s13 ? (48u + sizeof(_g4_t_v115)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v116)) > _g4_s14 ? (52u + sizeof(_g4_t_v116)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v117)) > _g4_s15 ? (56u + sizeof(_g4_t_v117)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v118)) > _g4_s16 ? (56u + sizeof(_g4_t_v118)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v119)) > _g4_s17 ? (60u + sizeof(_g4_t_v119)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v120)) > _g4_s18 ? (60u + sizeof(_g4_t_v120)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v121)) > _g4_s19 ? (64u + sizeof(_g4_t_v121)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v122)) > _g4_s20 ? (64u + sizeof(_g4_t_v122)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v123)) > _g4_s21 ? (68u + sizeof(_g4_t_v123)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v124)) > _g4_s22 ? (72u + sizeof(_g4_t_v124)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v125)) > _g4_s23 ? (72u + sizeof(_g4_t_v125)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v126)) > _g4_s24 ? (76u + sizeof(_g4_t_v126)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v127)) > _g4_s25 ? (80u + sizeof(_g4_t_v127)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v128)) > _g4_s26 ? (84u + sizeof(_g4_t_v128)) : _g4_s26,
    _g4_s28 = (91u + sizeof(_g4_t_v129)) > _g4_s27 ? (91u + sizeof(_g4_t_v129)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v130)) > _g4_s28 ? (92u + sizeof(_g4_t_v130)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v131)) > _g4_s29 ? (96u + sizeof(_g4_t_v131)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v132)) > _g4_s30 ? (112u + sizeof(_g4_t_v132)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v133)) > _g4_s31 ? (116u + sizeof(_g4_t_v133)) : _g4_s31,
    _g4_s33 = (120u + sizeof(_g4_t_v134)) > _g4_s32 ? (120u + sizeof(_g4_t_v134)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v135)) > _g4_s33 ? (128u + sizeof(_g4_t_v135)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v136)) > _g4_s34 ? (132u + sizeof(_g4_t_v136)) : _g4_s34,
    _g4_s36 = (136u + sizeof(_g4_t_v137)) > _g4_s35 ? (136u + sizeof(_g4_t_v137)) : _g4_s35,
    _g4_s37 = (140u + sizeof(_g4_t_v138)) > _g4_s36 ? (140u + sizeof(_g4_t_v138)) : _g4_s36,
    _g4_s38 = (144u + sizeof(_g4_t_v139)) > _g4_s37 ? (144u + sizeof(_g4_t_v139)) : _g4_s37,
    _g4_s39 = (148u + sizeof(_g4_t_v140)) > _g4_s38 ? (148u + sizeof(_g4_t_v140)) : _g4_s38,
    _g4_s40 = (152u + sizeof(_g4_t_v141)) > _g4_s39 ? (152u + sizeof(_g4_t_v141)) : _g4_s39,
    _g4_s41 = (156u + sizeof(_g4_t_v142)) > _g4_s40 ? (156u + sizeof(_g4_t_v142)) : _g4_s40,
    _g4_s42 = (160u + sizeof(_g4_t_v143)) > _g4_s41 ? (160u + sizeof(_g4_t_v143)) : _g4_s41,
    _g4_s43 = (164u + sizeof(_g4_t_v144)) > _g4_s42 ? (164u + sizeof(_g4_t_v144)) : _g4_s42,
    _g4_s44 = (168u + sizeof(_g4_t_v145)) > _g4_s43 ? (168u + sizeof(_g4_t_v145)) : _g4_s43,
    _g4_s45 = (172u + sizeof(_g4_t_v146)) > _g4_s44 ? (172u + sizeof(_g4_t_v146)) : _g4_s44,
    _g4_s46 = (184u + sizeof(_g4_t_v147)) > _g4_s45 ? (184u + sizeof(_g4_t_v147)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 12u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 20u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 20u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 24u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 24u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 28u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 28u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 32u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 32u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 36u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 40u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 44u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 44u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 48u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 52u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 56u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 56u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 60u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 60u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 64u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 64u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 68u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 72u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 72u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 76u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 80u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 84u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 91u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 92u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 96u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 112u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 116u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 120u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 128u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 132u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 136u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 140u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 144u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 148u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 152u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 156u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 160u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 164u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 168u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 172u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 184u);

  v147 = &a1;
  result = a2;
  v6 = *(float *)(a2 + 16);
  v7 = a1;
  v128 = v6;
  v127 = a3;
  v126 = a4;
  if ( v6 > *(float *)(a1 + 8) )
  {
    v135 = *(float *)(a2 + 32);
    v136 = *(float *)(a2 + 36);
    v137 = *(float *)(a2 + 40);
    v138 = *(float *)(a2 + 44);
    v139 = *(float *)(a2 + 48);
    v140 = *(float *)(a2 + 52);
    v141 = *(float *)(a2 + 56);
    v142 = *(float *)(a2 + 60);
    v143 = *(float *)(a2 + 64);
    v144 = *(float *)(a2 + 68);
    v8 = *(float *)(a2 + 76);
    v145 = *(float *)(a2 + 72);
    v146 = v8;
    if ( a5 != nullptr )
    {
      v9 = *a5;
      v135 = v135 * *a5;
      v136 = v136 * v9;
      v137 = v137 * v9;
      v138 = v138 * v9;
      v139 = v139 * v9;
      v140 = v140 * v9;
      v141 = v141 * v9;
      v142 = v142 * v9;
      v143 = v143 * v9;
      v144 = v144 * v9;
      v145 = v145 * v9;
      v146 = v146 * v9;
      v128 = fabs(v9) * v6;
    }
    v132 = 981668463;
    result = hkcdTriangleUtil::isDegenerate(&v135, &v139, &v143, &v132);
    if ( result == 0 )
    {
g4_m128_raw(v10) = LODWORD(v139);
      *(float *)g4_m128_ptr<int32_t>(v10) = v139 - v135;
      v11 = v140 - v136;
      v14 = v10;
      v12 = v141 - v137;
      v13 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)g4_m128_ptr<int32_t>(v10)) + (float)(v11 * v11))
                              + (float)(v12 * v12);
      if ( *(float *)g4_m128_ptr<int32_t>(v14) > 0.0 )
      {
        v15 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v14);
        v16 = ((_mm_cvtsi128_si32(v14) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v14) >> 1));
        v17 = (float)(*(float *)&v16 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * *(float *)&v16)
                    * (float)(*(float *)&v16 * *(float *)&v16));
        v18 = (float)(v17 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v17) * (float)(v17 * v17));
        v13 = (float)(1.5 * v18) - (float)((float)(v15 * v18) * (float)(v18 * v18));
      }
      v121 = *(float *)g4_m128_ptr<int32_t>(v10) * v13;
g4_m128_raw(v19) = LODWORD(v143);
      v124 = v11 * v13;
      *(float *)g4_m128_ptr<int32_t>(v19) = v143 - v139;
      v20 = v144 - v140;
      v119 = v12 * v13;
      v21 = v145 - v141;
      v23 = v19;
      v22 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v23) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)) + (float)(v20 * v20))
                              + (float)(v21 * v21);
      if ( *(float *)g4_m128_ptr<int32_t>(v23) > 0.0 )
      {
        v24 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v23);
        v25 = ((_mm_cvtsi128_si32(v23) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v23) >> 1));
        v26 = (float)(*(float *)&v25 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * *(float *)&v25)
                    * (float)(*(float *)&v25 * *(float *)&v25));
        v27 = (float)(v26 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * v26) * (float)(v26 * v26));
        v22 = (float)(1.5 * v27) - (float)((float)(v24 * v27) * (float)(v27 * v27));
      }
      v113 = *(float *)g4_m128_ptr<int32_t>(v19) * v22;
      v117 = v20 * v22;
g4_m128_raw(v28) = LODWORD(v143);
      *(float *)g4_m128_ptr<int32_t>(v28) = v143 - v135;
      v29 = v144 - v136;
      v103 = v21 * v22;
      v30 = v145 - v137;
      v31 = 0.0;
      v32 = v28;
      *(float *)g4_m128_ptr<int32_t>(v32) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v28) * *(float *)g4_m128_ptr<int32_t>(v28)) + (float)(v29 * v29))
                              + (float)(v30 * v30);
      if ( *(float *)g4_m128_ptr<int32_t>(v32) > 0.0 )
      {
        v33 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v32);
        v34 = ((_mm_cvtsi128_si32(v32) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v32) >> 1));
        v35 = (float)(*(float *)&v34 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v32)) * *(float *)&v34)
                    * (float)(*(float *)&v34 * *(float *)&v34));
        v36 = (float)(v35 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v32)) * v35) * (float)(v35 * v35));
        v31 = (float)(1.5 * v36) - (float)((float)(v33 * v36) * (float)(v36 * v36));
      }
      v132 = 0;
      v133 = 0;
      v109 = v31 * v30;
      v134 = 0x80000000;
      v131[0] = 128;
      v107 = *(float *)g4_m128_ptr<int32_t>(v28) * v31;
      v105 = v29 * v31;
      v37 = (float)(v124 * (float)(v31 * v30)) - (float)(v119 * (float)(v29 * v31));
      v38 = (float)(v119 * (float)(*(float *)g4_m128_ptr<int32_t>(v28) * v31)) - (float)(v121 * (float)(v31 * v30));
      v39 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v131);
      v132 = v39;
      v133 = 8;
      v40 = (float)(v121 * (float)(v29 * v31)) - (float)(v124 * v107);
      if ( v131[0] / 16 != 0 )
      {
        v134 = v131[0] / 16;
        v41 = (v131[0] / 16) & 0x3FFFFFFF;
        if ( v41 > 7 )
        {
LABEL_14:
          v133 = 8;
          *(uint32_t *)(v39 + 12) = 0;
          *(float *)v39 = v37;
          *(float *)(v39 + 4) = v38;
          *(float *)(v39 + 8) = v40;
          v42 = (float *)v132;
          v43 = *(float *)(v132 + 8);
          v44 = (float)((float)((float)(v128 * *(float *)v132) + v135) * *(float *)v132)
              + (float)((float)((float)(v128 * *(float *)(v132 + 4)) + v136) * *(float *)(v132 + 4));
          v45 = (float)(v128 * v43) + v137;
          *(float *)v132 = v37;
          v42[1] = v38;
          v42[2] = v40;
          v42[3] = -(float)(v44 + (float)(v45 * v43));
          v46 = v132;
          *(float *)(v132 + 16) = -v37;
          *(float *)(v46 + 20) = -v38;
          v116 = v136;
          v115 = v137;
          v47 = v135;
          v123 = v135;
          *(float *)(v46 + 24) = -v40;
          *(float *)(v46 + 28) = -(float)((float)((float)((float)((float)(v128 * (float)-v37) + v47) * (float)-v37)
                                                + (float)((float)((float)(v128 * (float)-v38) + v116) * (float)-v38))
                                        + (float)((float)((float)(v128 * (float)-v40) + v115) * (float)-v40));
          v48 = (float)(v124 * v40) - (float)(v119 * v38);
          v49 = v121;
          *(float *)(v46 + 32) = v48;
          v122 = v48;
          v50 = (float)(v119 * v37) - (float)(v49 * v40);
          *(float *)(v46 + 36) = v50;
          v120 = v50;
          v125 = (float)(v49 * v38) - (float)(v124 * v37);
          *(float *)(v46 + 40) = v125;
          v51 = (float)((float)(v128 * v48) + v123) * v48;
          v52 = (float)((float)(v128 * v50) + v116) * v50;
g4_m128_raw(v53) = LODWORD(v117);
          *(float *)g4_m128_ptr<int32_t>(v53) = v117 * v40;
          v54 = v53;
          *(float *)(v46 + 44) = -(float)((float)(v51 + v52) + (float)((float)((float)(v128 * v125) + v115) * v125));
          *(float *)g4_m128_ptr<int32_t>(v54) = (float)(v117 * v40) - (float)(v103 * v38);
          *(uint32_t *)(v46 + 48) =g4_m128_lane<int32_t>(v54, 0);
          *(float *)(v46 + 52) = (float)(v103 * v37) - (float)(v113 * v40);
          v55 = v117 * v37;
          v118 = (float)(v103 * v37) - (float)(v113 * v40);
          v56 = (float)(v113 * v38) - v55;
          v102 = v139;
          v57 = v139;
          v114 = v140;
          v112 = v141;
          *(float *)(v46 + 56) = v56;
          *(float *)(v46 + 60) = -(float)((float)((float)((float)((float)(v128 * *(float *)g4_m128_ptr<int32_t>(v54)) + v57)
                                                        * *(float *)g4_m128_ptr<int32_t>(v54))
                                                + (float)((float)((float)(v118 * v128) + v114) * v118))
                                        + (float)((float)((float)(v128 * v56) + v112) * v56));
          v58 = (float)(v109 * v38) - (float)(v105 * v40);
          v59 = v40 * v107;
          v60 = v109 * v37;
          v111 = v58;
          *(float *)(v46 + 64) = v58;
          v61 = (float)(v37 * v105) - (float)(v38 * v107);
          v106 = v144;
          v110 = v59 - v60;
          *(float *)(v46 + 68) = v59 - v60;
          v108 = v143;
          v104 = v145;
          *(float *)(v46 + 72) = v61;
          v62 = v120 + v118;
          v63 = 0.0;
          v64 = (float)((float)((float)((float)(v128 * v58) + v108) * v58)
                      + (float)((float)((float)(v128 * v110) + v106) * v110))
              + (float)((float)((float)(v128 * v61) + v104) * v61);
g4_m128_raw(v65) = LODWORD(v122);
          *(float *)g4_m128_ptr<int32_t>(v65) = v122 + *(float *)g4_m128_ptr<int32_t>(v54);
          *(float *)(v46 + 76) = -v64;
          v66 = v65;
          *(float *)g4_m128_ptr<int32_t>(v66) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v65) * *(float *)g4_m128_ptr<int32_t>(v65))
                                          + (float)(v62 * v62))
                                  + (float)((float)(v125 + v56) * (float)(v125 + v56));
          if ( *(float *)g4_m128_ptr<int32_t>(v66) > 0.0 )
          {
            v67 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v66);
            v68 = ((_mm_cvtsi128_si32(v66) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v66) >> 1));
            v69 = (float)(*(float *)&v68 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v66)) * *(float *)&v68)
                        * (float)(*(float *)&v68 * *(float *)&v68));
            v63 = (float)(1.5 * (float)((float)(v69 * 1.5) - (float)((float)(v67 * v69) * (float)(v69 * v69))))
                - (float)((float)(v67 * (float)((float)(v69 * 1.5) - (float)((float)(v67 * v69) * (float)(v69 * v69))))
                        * (float)((float)((float)(v69 * 1.5) - (float)((float)(v67 * v69) * (float)(v69 * v69)))
                                * (float)((float)(v69 * 1.5) - (float)((float)(v67 * v69) * (float)(v69 * v69)))));
          }
          v70 = (float)(v122 + *(float *)g4_m128_ptr<int32_t>(v54)) * v63;
          v71 = v62 * v63;
          v72 = v63 * (float)(v125 + v56);
          *(float *)(v46 + 80) = v70;
          *(float *)(v46 + 84) = v71;
          *(float *)g4_m128_ptr<int32_t>(v54) = *(float *)g4_m128_ptr<int32_t>(v54) + v111;
          *(float *)(v46 + 88) = v72;
          v73 = (float)((float)(v128 * v70) + v102) * v70;
          v74 = (float)((float)(v128 * v71) + v114) * v71;
          v75 = v118 + v110;
          v76 = v73 + v74;
          v77 = (float)((float)(v128 * v72) + v112) * v72;
          v78 = 0.0;
          *(float *)(v46 + 92) = -(float)(v76 + v77);
          v79 = v54;
          *(float *)g4_m128_ptr<int32_t>(v79) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v54) * *(float *)g4_m128_ptr<int32_t>(v54))
                                          + (float)(v75 * v75))
                                  + (float)((float)(v56 + v61) * (float)(v56 + v61));
          if ( *(float *)g4_m128_ptr<int32_t>(v79) > 0.0 )
          {
            v80 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v79);
            v81 = ((_mm_cvtsi128_si32(v79) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v79) >> 1));
            v82 = (float)(*(float *)&v81 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v79)) * *(float *)&v81)
                        * (float)(*(float *)&v81 * *(float *)&v81));
            v78 = (float)(1.5 * (float)((float)(v82 * 1.5) - (float)((float)(v80 * v82) * (float)(v82 * v82))))
                - (float)((float)(v80 * (float)((float)(v82 * 1.5) - (float)((float)(v80 * v82) * (float)(v82 * v82))))
                        * (float)((float)((float)(v82 * 1.5) - (float)((float)(v80 * v82) * (float)(v82 * v82)))
                                * (float)((float)(v82 * 1.5) - (float)((float)(v80 * v82) * (float)(v82 * v82)))));
          }
          v83 = *(float *)g4_m128_ptr<int32_t>(v54) * v78;
          v84 = v75 * v78;
          v85 = v78 * (float)(v56 + v61);
          *(float *)(v46 + 96) = v83;
          *(float *)(v46 + 100) = v84;
          v86 = v61 + v125;
          *(float *)(v46 + 104) = v85;
          v87 = (float)((float)(v128 * v84) + v106) * v84;
          v88 = v120 + v110;
          v89 = (float)((float)((float)(v128 * v83) + v108) * v83) + v87;
g4_m128_raw(v90) = LODWORD(v122);
          *(float *)g4_m128_ptr<int32_t>(v90) = v122 + v111;
          v91 = (float)((float)(v128 * v85) + v104) * v85;
          v92 = 0.0;
          *(float *)(v46 + 108) = -(float)(v89 + v91);
          v93 = v90;
          *(float *)g4_m128_ptr<int32_t>(v93) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v90) * *(float *)g4_m128_ptr<int32_t>(v90))
                                          + (float)(v88 * v88))
                                  + (float)(v86 * v86);
          if ( *(float *)g4_m128_ptr<int32_t>(v93) > 0.0 )
          {
            v94 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v93);
            v95 = ((_mm_cvtsi128_si32(v93) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v93) >> 1));
            v96 = (float)(*(float *)&v95 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v93)) * *(float *)&v95)
                        * (float)(*(float *)&v95 * *(float *)&v95));
            v92 = (float)(1.5 * (float)((float)(v96 * 1.5) - (float)((float)(v94 * v96) * (float)(v96 * v96))))
                - (float)((float)(v94 * (float)((float)(v96 * 1.5) - (float)((float)(v94 * v96) * (float)(v96 * v96))))
                        * (float)((float)((float)(v96 * 1.5) - (float)((float)(v94 * v96) * (float)(v96 * v96)))
                                * (float)((float)(v96 * 1.5) - (float)((float)(v94 * v96) * (float)(v96 * v96)))));
          }
          v97 = *(float *)g4_m128_ptr<int32_t>(v90) * v92;
          v98 = v88 * v92;
          v99 = v92 * v86;
          *(float *)(v46 + 112) = v97;
          *(float *)(v46 + 116) = v98;
          *(float *)(v46 + 120) = v99;
          *(float *)(v46 + 124) = -(float)((float)((float)((float)((float)(v128 * v97) + v123) * v97)
                                                 + (float)((float)((float)(v128 * v98) + v116) * v98))
                                         + (float)((float)((float)(v128 * v99) + v115) * v99));
          CurrentRawGeometry = hkpConvexRadiusBuilder::getCurrentRawGeometry(v7, v126);
          sub_18546A0(&v129, (hkGeometryUtility::Self *)&v132, v127, *(uint32_t *)(CurrentRawGeometry + 8));
          result = v134;
          v133 = 0;
          if ( v134 >= 0 )
            return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                     (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                     v132,
                     16 * v134);
          return result;
        }
        v101 = 2 * v41;
        if ( v101 < 8 )
          v101 = 8;
      }
      else
      {
        v134 = 0x80000000;
        v101 = 8;
      }
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v130,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        &v132,
        v101,
        16);
      v39 = v132;
      v40 = (float)(v121 * (float)(v29 * v31)) - (float)(v124 * v107);
      goto LABEL_14;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildShapeDisplay_ConvexVertices  (binary VA: 0x1855e60)
// Original: hkpConvexRadiusBuilder::buildShapeDisplay_ConvexVertices
// ----------------------------------------------------------------------------
int hkpConvexRadiusBuilder::buildShapeDisplay_ConvexVertices(int a1, hkpConvexVerticesShape::Self *a2, hkTransformf::Self *a3, hkMemoryAllocator::Self *a4)
{
  hkpConvexVerticesShape::Self *v4;
  int result;
  float v6; // xmm6_4
  int v7;
  float *v8;
  float v9; // xmm1_4
  float *v10;
  float v11; // xmm0_4
  int v12;
  int v13;
  float *v14;
  int v15;
  float v16; // xmm0_4
  int v17;
  int v18;
  int v19;
  unsigned int v20; // xmm1_4
  uint32_t *v21;
  unsigned int v22; // xmm1_4
  uint32_t *v23;
  int v24;
  int v25; // xmm0_4
  uint32_t *v26;
  int v27; // xmm0_4
  uint32_t *v28;
  signed int v29; // xmm0_4
  uint32_t *v30;
  int CurrentRawGeometry;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  hkLifoAllocator::Self **v38;
  hkGeometry::Self *v39;
  int v40;
  int v41;
  hkDisplayConvex::Self *v42;
  int v43;
  int v44;
  hkLifoAllocator::Self *v45;
  signed int v46;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v48;
  signed int v49;
  char *v50;
  int v51;
  int v52;
  int v53;
  const hkVector4f::Self *v54;
  int v55;
  const hkVector4f::Self *v56;
  int v57;
  typedef hkVector4f::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef hkpConvexVerticesShape::Self *_g4_t_v63;
  typedef char *_g4_t_PlaneEquations;
  typedef int _g4_t_v65;
  typedef hkMemoryAllocator::Self *_g4_t_v66;
  typedef hkTransformf::Self *_g4_t_v67;
  typedef char *_g4_t_v68;
  typedef hkLifoAllocator::Self **_g4_t_v69;
  typedef float _g4_t_v70;
  typedef int _g4_t_v71;
  typedef hkDisplayConvex::Self *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef signed int _g4_t_v85;
  typedef void *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef float _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int *_g4_t_v92;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v58)) > _g4_s0 ? (8u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v59)) > _g4_s1 ? (20u + sizeof(_g4_t_v59)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v60)) > _g4_s2 ? (20u + sizeof(_g4_t_v60)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v61)) > _g4_s3 ? (24u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v62)) > _g4_s4 ? (28u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v63)) > _g4_s5 ? (32u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_PlaneEquations)) > _g4_s6 ? (40u + sizeof(_g4_t_PlaneEquations)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v65)) > _g4_s7 ? (44u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v66)) > _g4_s8 ? (48u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v67)) > _g4_s9 ? (52u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v68)) > _g4_s10 ? (56u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v69)) > _g4_s11 ? (56u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v70)) > _g4_s12 ? (60u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v71)) > _g4_s13 ? (60u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v72)) > _g4_s14 ? (60u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v73)) > _g4_s15 ? (64u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v74)) > _g4_s16 ? (68u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v75)) > _g4_s17 ? (72u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v76)) > _g4_s18 ? (76u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v77)) > _g4_s19 ? (80u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v78)) > _g4_s20 ? (84u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v79)) > _g4_s21 ? (88u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v80)) > _g4_s22 ? (92u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v81)) > _g4_s23 ? (96u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v82)) > _g4_s24 ? (100u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v83)) > _g4_s25 ? (104u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v84)) > _g4_s26 ? (108u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v85)) > _g4_s27 ? (112u + sizeof(_g4_t_v85)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v86)) > _g4_s28 ? (116u + sizeof(_g4_t_v86)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v87)) > _g4_s29 ? (120u + sizeof(_g4_t_v87)) : _g4_s29,
    _g4_s31 = (124u + sizeof(_g4_t_v88)) > _g4_s30 ? (124u + sizeof(_g4_t_v88)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v89)) > _g4_s31 ? (128u + sizeof(_g4_t_v89)) : _g4_s31,
    _g4_s33 = (132u + sizeof(_g4_t_v90)) > _g4_s32 ? (132u + sizeof(_g4_t_v90)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v91)) > _g4_s33 ? (136u + sizeof(_g4_t_v91)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v92)) > _g4_s34 ? (144u + sizeof(_g4_t_v92)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_PlaneEquations &PlaneEquations = *reinterpret_cast<_g4_t_PlaneEquations *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 64u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 68u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 72u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 76u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 80u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 84u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 88u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 96u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 100u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 104u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 108u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 112u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 116u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 120u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 124u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 128u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 132u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 136u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 144u);

  v92 = &a1;
  v4 = a2;
  result = a1;
  v6 = *((float *)a2 + 4);
  v67 = a3;
  v65 = a1;
  v66 = a4;
  if ( v6 <= *(float *)(a1 + 8) )
    return result;
  v70 = *((float *)a2 + 4);
  PlaneEquations = hkpConvexVerticesShape::getPlaneEquations(a2);
  if ( *((int *)PlaneEquations + 1) > 0 )
  {
    v68 = hkpConvexVerticesShape::getPlaneEquations(v4);
    v83 = 0;
    v84 = 0;
    v85 = 0x80000000;
    hkpConvexVerticesShape::getOriginalVertices(v4, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v83);
    v7 = *((uint32_t *)v68 + 1);
    if ( v84 <= 0 )
    {
      v9 = -1000.0;
    }
    else
    {
      v8 = (float *)v83;
      v63 = v4;
      v9 = -1000.0;
      LODWORD(v70) = v83 + 16 * v84;
      do
      {
        if ( v7 > 0 )
        {
          v10 = *(float **)v68;
          do
          {
            v11 = *v10;
            v10 += 4;
            v9 = fmaxf(
                   (float)((float)((float)(v11 * *v8) + (float)(*(v10 - 3) * v8[1])) + (float)(*(v10 - 2) * v8[2]))
                 + *(v10 - 1),
                   v9);
          }
          while ( v10 != (float *)(16 * v7 + *(uint32_t *)v68) );
        }
        v8 += 4;
      }
      while ( v8 != (float *)LODWORD(v70) );
    }
    v84 = 0;
    if ( v85 >= 0 )
    {
      v68 = (char *)LODWORD(v9);
      v70 = v6;
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v83,
        16 * v85);
    }
    v79 = 0;
    v80 = 0;
    v81 = 0x80000000;
    v12 = *((uint32_t *)PlaneEquations + 1);
    if ( v12 > 0 )
    {
      v68 = (char *)LODWORD(v9);
      v83 = 16 * v12;
      v70 = v6;
      v32 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              &v83);
      v79 = v32;
      v81 = v83 / 16;
      v80 = *((uint32_t *)PlaneEquations + 1);
      v33 = *(uint32_t *)PlaneEquations;
      if ( v80 > 0 )
      {
        v34 = 16 * v80;
        v35 = 0;
        v70 = *(float *)&v4;
        do
        {
          *(uint32_t *)(v32 + v35) = *(uint32_t *)(v33 + v35);
          *(uint32_t *)(v32 + v35 + 4) = *(uint32_t *)(v33 + v35 + 4);
          *(uint32_t *)(v32 + v35 + 8) = *(uint32_t *)(v33 + v35 + 8);
          *(uint32_t *)(v32 + v35 + 12) = *(uint32_t *)(v33 + v35 + 12);
          v35 += 16;
        }
        while ( v35 != v34 );
      }
    }
    else
    {
      v80 = *((uint32_t *)PlaneEquations + 1);
    }
    if ( v9 > (float)(0.005f - v6) )
    {
      v13 = *((uint32_t *)PlaneEquations + 1);
      if ( v13 > 0 )
      {
        v14 = (float *)(v79 + 12);
        v15 = v79 + 12 + 16 * v13;
        do
        {
          v16 = *v14;
          v14 += 4;
          *(v14 - 4) = v16 - v6;
        }
        while ( v14 != (float *)v15 );
      }
    }
    G4_VCALL<void>(v4, 24, &xmmword_1D12FD0, COERCE_FLOAT(LODWORD(v6)), &v83);
    v17 = v80;
    if ( v80 + 6 > (v81 & 0x3FFFFFFF) )
    {
      v36 = 2 * (v81 & 0x3FFFFFFF);
      if ( v36 < v80 + 6 )
        v36 = v80 + 6;
      hkArrayUtil::reserve((hkArrayUtil::Self *)&v74, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v79, v36, 16);
      v17 = v80;
      v18 = v80 + 6;
    }
    else
    {
      v18 = v80 + 6;
    }
    v19 = 16 * v17;
    v80 = v18;
    v20 = v87 ^ 0x80000000;
    v21 = (uint32_t *)(v79 + v19);
    *v21 = 1065353216;
    v21[1] = 0;
    v21[3] = v20;
    v21[2] = 0;
    v22 = v88 ^ 0x80000000;
    v23 = (uint32_t *)(v79 + v19 + 16);
    *v23 = 0;
    v23[1] = 1065353216;
    v23[3] = v22;
    v23[2] = 0;
    v24 = v79 + v19 + 32;
    *(float *)(v24 + 12) = -v89;
    *(uint32_t *)v24 = 0;
    *(uint32_t *)(v24 + 4) = 0;
    *(uint32_t *)(v24 + 8) = 1065353216;
    v25 = v83;
    v26 = (uint32_t *)(v79 + v19 + 48);
    *v26 = -1082130432;
    v26[1] = 0;
    v26[3] = v25;
    v26[2] = 0;
    v27 = v84;
    v28 = (uint32_t *)(v79 + v19 + 64);
    *v28 = 0;
    v28[1] = -1082130432;
    v28[3] = v27;
    v28[2] = 0;
    v29 = v85;
    v30 = (uint32_t *)(v79 + v19 + 80);
    *v30 = 0;
    v30[1] = 0;
    v30[3] = v29;
    v30[2] = -1082130432;
    CurrentRawGeometry = hkpConvexRadiusBuilder::getCurrentRawGeometry(v65, (uint32_t *)(v66));
    sub_18546A0((uint8_t *)&v73 + 3, (hkGeometryUtility::Self *)&v79, v67, *(uint32_t *)(CurrentRawGeometry + 8));
    result = v81;
    v80 = 0;
    if ( v81 >= 0 )
      return (*(int (**)(uint32_t *, int, int, int, int, int, hkpConvexVerticesShape::Self *, int *, char *, int, hkMemoryAllocator::Self *, hkTransformf::Self *, char *, float, int, int, int, int, unsigned int, int, int, int, int, int, int, int, signed int, void *, int, int, float, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               v79,
               16 * v81,
               v60,
               v61,
               v62,
               v63,
               &v83,
               PlaneEquations,
               v65,
               v66,
               v67,
               v68,
               COERCE_FLOAT(LODWORD(v70)),
               v73,
               v74,
               v75,
               v76,
               v77,
               v78,
               v79,
               v80,
               v81,
               v82,
               v83,
               v84,
               v85,
               v86,
               v87,
               v88,
               COERCE_FLOAT(LODWORD(v89)),
               v90,
               v91);
    return result;
  }
  v71 = G4_VCALL<int>(v4, 52);
  v83 = 0;
  v84 = 0;
  v85 = 0x80000000;
  v87 = v71;
  if ( v71 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v48 = *address;
    v69 = address;
    v49 = (16 * v71 + 127) & 0xFFFFFF80;
    v50 = *((char **)*address + 3);
    if ( v49 <= *((uint32_t *)v48 + 2) && (unsigned int)(uintptr_t)(&v50[v49]) <= *((uint32_t *)v48 + 4) )
      *((uint32_t *)v48 + 3) = (uint32_t)(uintptr_t)(&v50[v49]);
    else
      v50 = (char *)hkLifoAllocator::allocateFromNewSlab(v48, (16 * v71 + 127) & 0xFFFFFF80);
    v83 = (int)(uintptr_t)(v50);
    v86 = v50;
    v85 = v71 | 0x80000000;
    if ( v71 <= (v71 & 0x3FFFFFFF) )
    {
      v57 = *(uint32_t *)v4;
      v84 = v71;
      v53 = (*(int (**)(hkpConvexVerticesShape::Self *, char *))(v57 + 56))(v4, v50);
      v75 = 0;
      v76 = 0;
      v77 = 0x80000000;
      if ( v71 <= 0 )
      {
        v38 = v69;
        goto LABEL_31;
      }
      hkArrayUtil::reserve((hkArrayUtil::Self *)&v74, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v75, v71, 16);
      v76 = v71;
    }
    else
    {
      v51 = 2 * (v71 & 0x3FFFFFFF);
      if ( v51 < v71 )
        v51 = v71;
      hkArrayUtil::reserve((hkArrayUtil::Self *)&v74, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v83, v51, 16);
      v52 = *(uint32_t *)v4;
      v84 = v71;
      v53 = (*(int (**)(hkpConvexVerticesShape::Self *, int))(v52 + 56))(v4, v83);
      v75 = 0;
      v76 = 0;
      v77 = 0x80000000;
      hkArrayUtil::reserve((hkArrayUtil::Self *)&v74, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v75, v71, 16);
      v76 = v71;
    }
    v54 = (const hkVector4f::Self *)v53;
    v55 = 0;
    v56 = v54;
    do
    {
      v58 = (hkVector4f::Self *)(v75 + 16 * v55++);
      hkVector4f::setTransformedPos(v58, v67, v56);
      v56 = (const hkVector4f::Self *)((char *)v56 + 16);
    }
    while ( v55 != v71 );
    v38 = v69;
    goto LABEL_32;
  }
  v37 = *(uint32_t *)v4;
  v86 = nullptr;
  v84 = 0;
  (*(void (**)(hkpConvexVerticesShape::Self *, uint32_t))(v37 + 56))(v4, 0);
  v75 = 0;
  v77 = 0x80000000;
  v38 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
LABEL_31:
  v76 = v71;
LABEL_32:
  v39 = (hkGeometry::Self *)(*(int (**)(uint32_t, int))(**((uint32_t **)*v38 + 11) + 8))(*((uint32_t *)*v38 + 11), 32);
  *((uint32_t *)v39 + 1) = -65535;
  *(uint32_t *)v39 = ((uint32_t)(uintptr_t)&off_20586B8);
  v40 = v75;
  *((uint32_t *)v39 + 2) = 0;
  *((uint32_t *)v39 + 3) = 0;
  *((uint32_t *)v39 + 4) = 0x80000000;
  *((uint32_t *)v39 + 5) = 0;
  *((uint32_t *)v39 + 6) = 0;
  *((uint32_t *)v39 + 7) = 0x80000000;
  v79 = v40;
  v80 = v76;
  v81 = 16;
  hkGeometryUtility::createConvexGeometry(&v79, v39);
  v72 = (hkDisplayConvex::Self *)(*(int (**)(uint32_t, int))(**((uint32_t **)*v38 + 11) + 8))(*((uint32_t *)*v38 + 11), 96);
  hkDisplayConvex::Construct(v72, v39);
  v41 = *((uint32_t *)v66 + 1);
  v42 = v72;
  if ( v41 == (*((uint32_t *)v66 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v66, 4, v59);
    v41 = *((uint32_t *)v66 + 1);
    v42 = v72;
  }
  *(uint32_t *)(*(uint32_t *)v66 + 4 * v41) = (uint32_t)(uintptr_t)(v42);
  v43 = v77;
  ++*((uint32_t *)v66 + 1);
  v76 = 0;
  if ( v43 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v75,
      16 * v43);
  v44 = 0;
  if ( (void *)v83 != v86 )
    v44 = v84;
  v84 = v44;
  v45 = *v38;
  v77 = 0x80000000;
  v75 = 0;
  v46 = (16 * v87 + 127) & 0xFFFFFF80;
  if ( v46 > *((uint32_t *)v45 + 2) || *((void **)v45 + 3) != (char *)v86 + v46 || v86 == *((void **)v45 + 5) )
    hkLifoAllocator::slowBlockFree(v45, (char *)v86, (16 * v87 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v45 + 3) = (uint32_t)(uintptr_t)(v86);
  result = v85;
  v84 = 0;
  if ( v85 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v83,
             16 * v85);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::resetCurrentRawGeometry  (binary VA: 0x1856670)
// Original: hkpConvexRadiusBuilder::resetCurrentRawGeometry
// ----------------------------------------------------------------------------
hkpConvexRadiusBuilder::Self * hkpConvexRadiusBuilder::resetCurrentRawGeometry(hkpConvexRadiusBuilder::Self *self)
{
  *((uint32_t *)self + 3) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildShapeDisplay_ConvexTransform  (binary VA: 0x1856760)
// Original: hkpConvexRadiusBuilder::buildShapeDisplay_ConvexTransform
// ----------------------------------------------------------------------------
int hkpConvexRadiusBuilder::buildShapeDisplay_ConvexTransform(int a1, int a2, hkTransformf::Self *a3, hkMemoryAllocator::Self *a4)
{
  float v4; // xmm0_4
  uint8_t v5;
  int v6;
  float *v7;
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm5_4
  float v25; // xmm3_4
  float v26; // xmm6_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm2_4
  float v30; // xmm4_4
  int v31; // xmm0_4
  int result;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[3];
  typedef uint32_t _g4_t_v43[6];
  typedef uint8_t _g4_t_v44[64];
  typedef uint8_t _g4_t_v45[64];
  typedef uint8_t _g4_t_v46[124];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v33)) > _g4_s0 ? (12u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v34)) > _g4_s1 ? (28u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v35)) > _g4_s2 ? (32u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v36)) > _g4_s3 ? (36u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v37)) > _g4_s4 ? (40u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v38)) > _g4_s5 ? (44u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v39)) > _g4_s6 ? (48u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v40)) > _g4_s7 ? (52u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v41)) > _g4_s8 ? (56u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v42)) > _g4_s9 ? (60u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v43)) > _g4_s10 ? (72u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v44)) > _g4_s11 ? (96u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v45)) > _g4_s12 ? (160u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (224u + sizeof(_g4_t_v46)) > _g4_s13 ? (224u + sizeof(_g4_t_v46)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 96u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 160u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 224u);

  hkQsTransformf::copyToTransformNoScale((hkQsTransformf::Self *)(a2 + 32), (hkTransformf::Self *)v44);
  hkTransformf::setMul((hkTransformf::Self *)v45, a3, (const hkTransformf::Self *)v44);
  v33 = *(uint32_t *)(a2 + 24);
  v4 = fabs(*(float *)(a2 + 72) - 1.0);
  v5 = (fabs(*(float *)(a2 + 64) - 1.0) <= 0.00000011920929f)
     | (fabs(*(float *)(a2 + 68) - 1.0) <= 0.00000011920929f ? 2 : 0);
  LOBYTE(v6) = v4 <= 0.00000011920929f ? 4 : 0;
  if ( fabs(*(float *)(a2 + 76) - 1.0) <= 0.00000011920929f )
    v6 = v4 > 0.00000011920929f ? 8 : 12;
  if ( (((uint8_t)v6 | v5) & 7) == 7 )
    return (int)(uintptr_t)(hkpConvexRadiusBuilder::buildShapeDisplay(a1, v33, v45, a4, 0));
  if ( *(uint8_t *)(v33 + 8) != 5 )
    return (int)(uintptr_t)(hkpConvexRadiusBuilder::buildShapeDisplay(a1, v33, v45, a4, a2 + 64));
  v39 = nullptr;
  v40 = 0;
  v41 = 0x80000000;
  hkpConvexVerticesShape::getOriginalVertices(
    (hkpConvexVerticesShape::Self *)v33,
    (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v39);
  v7 = v39;
  if ( 16 * v40 != 0 )
  {
    do
    {
      v8 = *v7;
      v7 += 4;
      v9 = *(v7 - 3);
      v10 = v8;
      v11 = v8 * *(float *)(a2 + 64);
      v12 = *(v7 - 2);
      v13 = v10 - *(float *)(a2 + 44);
      v14 = v9 - *(float *)(a2 + 76);
      v15 = v12 - *(float *)(a2 + 92);
      *(v7 - 4) = v11;
      v16 = v9 * *(float *)(a2 + 68);
      v17 = *(v7 - 1);
      *(v7 - 3) = v16;
      v18 = v12 * *(float *)(a2 + 72);
      *(v7 - 2) = v18;
      v19 = *(float *)(a2 + 76) * v17;
      *(v7 - 1) = v19;
      v20 = (float)(v13 * *(float *)(a2 + 80)) + v11;
      *(v7 - 4) = v20;
      v21 = (float)(v14 * *(float *)(a2 + 84)) + v16;
      *(v7 - 3) = v21;
      v22 = (float)(v15 * *(float *)(a2 + 88)) + v18;
      *(v7 - 2) = v22;
      v23 = v19 + (float)(*(float *)(a2 + 92) * (float)(v17 - 0.0));
      *(v7 - 1) = v23;
      v34 = v23;
      v24 = *(float *)(a2 + 48);
      v38 = *(float *)(a2 + 60);
      v37 = *(float *)(a2 + 52);
      v36 = *(float *)(a2 + 56);
      v35 = (float)(v38 * v38) - 0.5;
      v25 = (float)((float)(v24 * v20) + (float)(v37 * v21)) + (float)(v36 * v22);
      v26 = (float)((float)(v35 * v20) + (float)(v24 * v25))
          + (float)((float)((float)(v37 * v22) - (float)(v36 * v21)) * v38);
      v27 = v26 + v26;
      *(v7 - 4) = v27;
      v28 = (float)((float)((float)(v35 * v21) + (float)(v37 * v25))
                  + (float)((float)((float)(v36 * v20) - (float)(v24 * v22)) * v38))
          + (float)((float)((float)(v35 * v21) + (float)(v37 * v25))
                  + (float)((float)((float)(v36 * v20) - (float)(v24 * v22)) * v38));
      *(v7 - 3) = v28;
      v29 = (float)((float)((float)(v22 * v35) + (float)(v36 * v25))
                  + (float)((float)((float)(v21 * v24) - (float)(v20 * v37)) * v38))
          + (float)((float)((float)(v22 * v35) + (float)(v36 * v25))
                  + (float)((float)((float)(v21 * v24) - (float)(v20 * v37)) * v38));
      v30 = (float)((float)((float)(v35 * v34) + (float)(v25 * v38)) + (float)(0.0 * v38))
          + (float)((float)((float)(v35 * v34) + (float)(v25 * v38)) + (float)(0.0 * v38));
      *(v7 - 2) = v29;
      *(v7 - 1) = v30;
      *(v7 - 4) = v27 + *(float *)(a2 + 32);
      *(v7 - 3) = *(float *)(a2 + 36) + v28;
      *(v7 - 2) = v29 + *(float *)(a2 + 40);
      *(v7 - 1) = v30 + *(float *)(a2 + 44);
    }
    while ( v7 != &v39[4 * v40] );
  }
  hkpConvexVerticesShape::BuildConfig::Construct((hkpConvexVerticesShape::BuildConfig::Self *)v43);
  BYTE1(v43[0]) = 0;
  v31 = *(uint32_t *)(v33 + 16);
  v42[0] = (uint32_t)(uintptr_t)(v39);
  v42[1] = v40;
  v43[1] = v31;
  v42[2] = 16;
  hkpConvexVerticesShape::Construct(
    (hkpConvexVerticesConnectivity::Self *)v46,
    (hkpConvexVerticesConnectivity::Self *)v42,
    (int)(uintptr_t)(v43));
  hkpConvexRadiusBuilder::buildShapeDisplay_ConvexVertices(
    a1,
    (hkpConvexVerticesShape::Self *)v46,
    (hkTransformf::Self *)&xmmword_1D12FD0,
    a4);
  hkpConvexVerticesShape::Destroy((hkpConvexVerticesShape::Self *)v46);
  result = v41;
  v40 = 0;
  if ( v41 >= 0 )
    return (*(int (**)(uint32_t *, float *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v39,
             16 * v41);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildShapeDisplay  (binary VA: 0x1856bd0)
// Original: hkpConvexRadiusBuilder::buildShapeDisplay
// ----------------------------------------------------------------------------
__m128 * hkpConvexRadiusBuilder::buildShapeDisplay(int a1, hkpConvexVerticesShape::Self *a2, hkTransformf::Self *a3, __m128 **a4, __m128 *a5)
{
  hkpConvexVerticesShape::Self *v5;
  int v6;
  __m128 *result;
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef __m128 *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef __m128 **_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef uint32_t _g4_t_v43[22];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v17)) > _g4_s4 ? (20u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v19)) > _g4_s6 ? (28u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v20)) > _g4_s7 ? (32u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v21)) > _g4_s8 ? (32u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v22)) > _g4_s9 ? (36u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v23)) > _g4_s10 ? (36u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v24)) > _g4_s11 ? (40u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v25)) > _g4_s12 ? (40u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v26)) > _g4_s13 ? (44u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v27)) > _g4_s14 ? (48u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v28)) > _g4_s15 ? (52u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v29)) > _g4_s16 ? (56u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v30)) > _g4_s17 ? (60u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v31)) > _g4_s18 ? (64u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v32)) > _g4_s19 ? (68u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v33)) > _g4_s20 ? (72u + sizeof(_g4_t_v33)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v34)) > _g4_s21 ? (76u + sizeof(_g4_t_v34)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v35)) > _g4_s22 ? (80u + sizeof(_g4_t_v35)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v36)) > _g4_s23 ? (84u + sizeof(_g4_t_v36)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v37)) > _g4_s24 ? (88u + sizeof(_g4_t_v37)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v38)) > _g4_s25 ? (92u + sizeof(_g4_t_v38)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v39)) > _g4_s26 ? (96u + sizeof(_g4_t_v39)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v40)) > _g4_s27 ? (100u + sizeof(_g4_t_v40)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v41)) > _g4_s28 ? (104u + sizeof(_g4_t_v41)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v42)) > _g4_s29 ? (108u + sizeof(_g4_t_v42)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v43)) > _g4_s30 ? (112u + sizeof(_g4_t_v43)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 92u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);

  v43[18] = (uint32_t)(uintptr_t)(&a1);
  v5 = a2;
  v6 = a1;
  v24 = a4;
  result = (__m128 *)((char *)dword_20B9FF4 + (uint32_t)jpt_1856C1E[*((uint8_t *)a2 + 8)]);
  switch ( *((uint8_t *)a2 + 8) )
  {
    case 0:
    case 4:
    case 0xC:
    case 0x19:
    case 0x1F:
    case 0x21:
      return result;
    case 1:
      result = (__m128 *)hkpConvexRadiusBuilder::buildShapeDisplay_Cylinder(
                           a1,
                           a2,
                           (int)(uintptr_t)(a3),
                           (int)(uintptr_t)(a4),
                           (int)(uintptr_t)(a5),
                           v17,
                           v18,
                           v19,
                           v20,
                           v22,
                           (int)(uintptr_t)(a4),
                           v26,
                           v27,
                           v28,
                           v29,
                           v30,
                           v31,
                           v32,
                           v33,
                           v34);
      break;
    case 2:
      result = (__m128 *)hkpConvexRadiusBuilder::buildShapeDisplay_Triangle(a1, (int)(uintptr_t)(a2), a3, (uint32_t *)(a4),g4_m128_ptr<float>(*(a5)));
      break;
    case 3:
      result = hkpConvexRadiusBuilder::buildShapeDisplay_Box(a1, (__m128 *)a2, (uint32_t *)(a3), a4, a5);
      break;
    case 5:
      result = (__m128 *)hkpConvexRadiusBuilder::buildShapeDisplay_ConvexVertices(a1, a2, a3, (hkMemoryAllocator::Self *)a4);
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 0x12:
    case 0x16:
    case 0x1A:
    case 0x1B:
      v12 = G4_VCALL<int>(a2, 64, v13, v14, v15, v16, v17, v18, v19, v20, a3, a4, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, COERCE_FLOAT(LODWORD(v39)), COERCE_FLOAT(LODWORD(v40)), COERCE_FLOAT(LODWORD(v41)), COERCE_FLOAT(LODWORD(v42)), v43[0], v43[1], v43[2], v43[3], v43[4], v43[5], v43[6], v43[7], v43[8], v43[9], v43[10], v43[11], v43[12], v43[13], v43[14], v43[15], v43[16]);
      result = (__m128 *)hkpConvexRadiusBuilder::buildShapeDisplay_ShapeContainer(v6, v12, v23, v25);
      break;
    case 0xA:
      v8 = *((float *)a2 + 8);
      v9 = *((float *)a2 + 9);
      v10 = *((float *)a2 + 10);
      v11 = *((float *)a2 + 11);
      if ( a5 != nullptr )
      {
        v8 = v8 *g4_m128_lane<float>(*(a5), 0);
        v9 = v9 *g4_m128_lane<float>(*(a5), 1);
        v10 = v10 *g4_m128_lane<float>(*(a5), 2);
        v11 = v11 *g4_m128_lane<float>(*(a5), 3);
      }
      v21 = a5;
      v39 = v8;
      v40 = v9;
      v41 = v10;
      v42 = v11;
      v27 = 1065353216;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 1065353216;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 1065353216;
      v38 = 0;
      hkTransformf::setMul((hkTransformf::Self *)v43, a3, (const hkTransformf::Self *)&v27);
      result = (__m128 *)hkpConvexRadiusBuilder::buildShapeDisplay(v6, (hkpConvexVerticesShape::Self *)(uintptr_t)(*((uint32_t *)v5 + 6)), v43, v24, v21);
      break;
    case 0xB:
      result = (__m128 *)hkpConvexRadiusBuilder::buildShapeDisplay_ConvexTransform(
                           a1,
                           (int)(uintptr_t)(a2),
                           a3,
                           (hkMemoryAllocator::Self *)a4);
      break;
    case 0xE:
      hkTransformf::setMul((hkTransformf::Self *)v43, a3, (hkpConvexVerticesShape::Self *)((char *)a2 + 48));
      result = (__m128 *)hkpConvexRadiusBuilder::buildShapeDisplay(v6, *((uint32_t *)v5 + 5), v43, v24, 0);
      break;
    case 0x18:
      result = (__m128 *)hkpConvexRadiusBuilder::buildShapeDisplay_ConvexPiece(a1, a2, a3, a4);
      break;
    case 0x1E:
      result = (__m128 *)hkpConvexRadiusBuilder::buildShapeDisplay(a1, *((uint32_t *)a2 + 4), a3, a4, 0);
      break;
    default:
      result = (__m128 *)hkpConvexRadiusBuilder::buildShapeDisplay_UserShapes(
                           (uint8_t *)&v26 + 3,
                           a1,
                           (int)(uintptr_t)(a2),
                           (int)(uintptr_t)(a3),
                           (int)(uintptr_t)(a4));
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildDisplayGeometries  (binary VA: 0x1856f10)
// Original: hkpConvexRadiusBuilder::buildDisplayGeometries
// ----------------------------------------------------------------------------
__m128 * hkpConvexRadiusBuilder::buildDisplayGeometries(hkpConvexRadiusBuilder::Self *a1, hkpConvexVerticesShape::Self *a2, int a3)
{
  uint32_t v4[20];

  v4[0] = 1065353216;
  memset(&v4[1], 0, 16);
  v4[5] = 1065353216;
  memset(&v4[6], 0, 16);
  v4[10] = 1065353216;
  memset(&v4[11], 0, 20);
  hkpConvexRadiusBuilder::resetCurrentRawGeometry(a1);
  *(uint32_t *)(a3 + 4) = 0;
  return hkpConvexRadiusBuilder::buildShapeDisplay((int)(uintptr_t)(a1), a2, (hkTransformf::Self *)v4, (__m128 **)a3, nullptr);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildDisplayGeometries_ea1857010  (binary VA: 0x1857010)
// Original: hkpConvexRadiusBuilder::buildDisplayGeometries
// ----------------------------------------------------------------------------
__m128 * hkpConvexRadiusBuilder::buildDisplayGeometries_ea1857010(hkpConvexRadiusBuilder::Self *a1, hkpConvexVerticesShape::Self *a2, int a3)
{
  return hkpConvexRadiusBuilder::buildDisplayGeometries(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildShapeDisplay_ConvexPiece  (binary VA: 0x1857050)
// Original: hkpConvexRadiusBuilder::buildShapeDisplay_ConvexPiece
// ----------------------------------------------------------------------------
__m128 * hkpConvexRadiusBuilder::buildShapeDisplay_ConvexPiece(int a1, int a2, hkTransformf::Self *a3, __m128 **a4)
{
  __m128 *result;

  result = (__m128 *)a1;
  if ( *(float *)(a2 + 16) > *(float *)(a1 + 8) )
    return (__m128 *)(uintptr_t)(sub_18570F0(a1, (uint32_t *)a2, a3, a4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildPartialShapeDisplay_ConvexTransform  (binary VA: 0x18571d0)
// Original: hkpConvexRadiusBuilder::buildPartialShapeDisplay_ConvexTransform
// ----------------------------------------------------------------------------
int hkpConvexRadiusBuilder::buildPartialShapeDisplay_ConvexTransform(int a1, int a2, hkTransformf::Self *a3, int a4, int a5, int a6, hkMemoryAllocator::Self *a7)
{
  int v7;
  float v8; // xmm0_4
  uint8_t v9;
  int v10;
  float *v11;
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm7_4
  float v16; // xmm5_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm6_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm5_4
  float v29; // xmm3_4
  float v30; // xmm6_4
  float v31; // xmm6_4
  float v32; // xmm7_4
  float v33; // xmm2_4
  float v34; // xmm4_4
  int v35; // xmm0_4
  int result;
  typedef hkMemoryAllocator::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef hkpConvexVerticesShape::Self *_g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef hkTransformf::Self *_g4_t_v44;
  typedef float _g4_t_v45;
  typedef char _g4_t_v46;
  typedef float *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t _g4_t_v50[3];
  typedef uint8_t _g4_t_v51[4];
  typedef int _g4_t_v52;
  typedef uint8_t _g4_t_v53[64];
  typedef uint8_t _g4_t_v54[64];
  typedef uint32_t _g4_t_v55[34];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v38)) > _g4_s1 ? (4u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v39)) > _g4_s2 ? (8u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v40)) > _g4_s3 ? (24u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v41)) > _g4_s4 ? (28u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v42)) > _g4_s5 ? (32u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v43)) > _g4_s6 ? (36u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v44)) > _g4_s7 ? (40u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v45)) > _g4_s8 ? (40u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (47u + sizeof(_g4_t_v46)) > _g4_s9 ? (47u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v47)) > _g4_s10 ? (48u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v48)) > _g4_s11 ? (52u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v49)) > _g4_s12 ? (56u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v50)) > _g4_s13 ? (60u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v51)) > _g4_s14 ? (72u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v52)) > _g4_s15 ? (76u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v53)) > _g4_s16 ? (96u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (160u + sizeof(_g4_t_v54)) > _g4_s17 ? (160u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (224u + sizeof(_g4_t_v55)) > _g4_s18 ? (224u + sizeof(_g4_t_v55)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 47u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 76u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 224u);

  v55[30] = (uint32_t)(uintptr_t)(&a1);
  v7 = a2;
  v38 = a1;
  v44 = a3;
  v37 = a7;
  hkQsTransformf::copyToTransformNoScale((hkQsTransformf::Self *)(a2 + 32), (hkTransformf::Self *)v53);
  hkTransformf::setMul((hkTransformf::Self *)v54, v44, (const hkTransformf::Self *)v53);
  v39 = *(hkpConvexVerticesShape::Self **)(v7 + 24);
  v8 = fabs(*(float *)(v7 + 72) - 1.0);
  v9 = (fabs(*(float *)(v7 + 64) - 1.0) <= 0.00000011920929f)
     | (fabs(*(float *)(v7 + 68) - 1.0) <= 0.00000011920929f ? 2 : 0);
  LOBYTE(v10) = v8 <= 0.00000011920929f ? 4 : 0;
  if ( fabs(*(float *)(v7 + 76) - 1.0) <= 0.00000011920929f )
    v10 = v8 > 0.00000011920929f ? 8 : 12;
  if ( (((uint8_t)v10 | v9) & 7) == 7 || *((uint8_t *)v39 + 8) != 5 )
    return (int)(uintptr_t)(hkpConvexRadiusBuilder::buildPartialShapeDisplay(&v46));
  v47 = nullptr;
  v48 = 0;
  v49 = 0x80000000;
  hkpConvexVerticesShape::getOriginalVertices(v39, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v47);
  v11 = v47;
  if ( 16 * v48 != 0 )
  {
    do
    {
      v12 = *v11;
      v11 += 4;
      v13 = *(v11 - 3);
      v14 = v12;
      v15 = v12 * *(float *)(v7 + 64);
      v16 = *(v11 - 2);
      v17 = v14 - *(float *)(v7 + 44);
      v18 = v13 - *(float *)(v7 + 76);
      v19 = v16 - *(float *)(v7 + 92);
      *(v11 - 4) = v15;
      v20 = v13 * *(float *)(v7 + 68);
      v21 = *(v11 - 1);
      *(v11 - 3) = v20;
      v22 = v16 * *(float *)(v7 + 72);
      *(v11 - 2) = v22;
      v23 = *(float *)(v7 + 76) * v21;
      *(v11 - 1) = v23;
      v24 = (float)(v17 * *(float *)(v7 + 80)) + v15;
      *(v11 - 4) = v24;
      v25 = (float)(v18 * *(float *)(v7 + 84)) + v20;
      *(v11 - 3) = v25;
      v26 = (float)(v19 * *(float *)(v7 + 88)) + v22;
      *(v11 - 2) = v26;
      v27 = v23 + (float)(*(float *)(v7 + 92) * (float)(v21 - 0.0));
      *(v11 - 1) = v27;
      v40 = v27;
      v28 = *(float *)(v7 + 48);
      v45 = *(float *)(v7 + 60);
      v43 = *(float *)(v7 + 52);
      v42 = *(float *)(v7 + 56);
      v41 = (float)(v45 * v45) - 0.5;
      v29 = (float)((float)(v28 * v24) + (float)(v43 * v25)) + (float)(v42 * v26);
      v30 = (float)((float)(v41 * v24) + (float)(v28 * v29))
          + (float)((float)((float)(v43 * v26) - (float)(v42 * v25)) * v45);
      v31 = v30 + v30;
      *(v11 - 4) = v31;
      v32 = (float)((float)((float)(v41 * v25) + (float)(v43 * v29))
                  + (float)((float)((float)(v42 * v24) - (float)(v28 * v26)) * v45))
          + (float)((float)((float)(v41 * v25) + (float)(v43 * v29))
                  + (float)((float)((float)(v42 * v24) - (float)(v28 * v26)) * v45));
      *(v11 - 3) = v32;
      v33 = (float)((float)((float)(v26 * v41) + (float)(v42 * v29))
                  + (float)((float)((float)(v25 * v28) - (float)(v24 * v43)) * v45))
          + (float)((float)((float)(v26 * v41) + (float)(v42 * v29))
                  + (float)((float)((float)(v25 * v28) - (float)(v24 * v43)) * v45));
      v34 = (float)((float)((float)(v41 * v40) + (float)(v29 * v45)) + (float)(0.0 * v45))
          + (float)((float)((float)(v41 * v40) + (float)(v29 * v45)) + (float)(0.0 * v45));
      *(v11 - 2) = v33;
      *(v11 - 1) = v34;
      *(v11 - 4) = v31 + *(float *)(v7 + 32);
      *(v11 - 3) = *(float *)(v7 + 36) + v32;
      *(v11 - 2) = v33 + *(float *)(v7 + 40);
      *(v11 - 1) = v34 + *(float *)(v7 + 44);
    }
    while ( v11 != &v47[4 * v48] );
  }
  hkpConvexVerticesShape::BuildConfig::Construct((hkpConvexVerticesShape::BuildConfig::Self *)v51);
  v51[1] = 0;
  v35 = *((uint32_t *)v39 + 4);
  v50[0] = (uint32_t)(uintptr_t)(v47);
  v50[1] = v48;
  v52 = v35;
  v50[2] = 16;
  hkpConvexVerticesShape::Construct(
    (hkpConvexVerticesConnectivity::Self *)v55,
    (hkpConvexVerticesConnectivity::Self *)v50,
    (int)(uintptr_t)(v51));
  hkpConvexRadiusBuilder::buildShapeDisplay_ConvexVertices(
    v38,
    (hkpConvexVerticesShape::Self *)v55,
    (hkTransformf::Self *)&xmmword_1D12FD0,
    v37);
  hkpConvexVerticesShape::Destroy((hkpConvexVerticesShape::Self *)v55);
  result = v49;
  v48 = 0;
  if ( v49 >= 0 )
    return (*(int (**)(uint32_t *, float *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v47,
             16 * v49);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildPartialShapeDisplay  (binary VA: 0x1857750)
// Original: hkpConvexRadiusBuilder::buildPartialShapeDisplay
// ----------------------------------------------------------------------------
uint8_t * hkpConvexRadiusBuilder::buildPartialShapeDisplay(uint8_t *a1, int a2, hkpConvexVerticesShape::Self *a3, hkTransformf::Self *a4, int a5, uint32_t *a6, int a7, __m128 **a8, __m128 *a9)
{
  uint8_t *v9;
  uint8_t *result;
  int v11;
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  int savedregs;
  void *retaddr;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef hkpConvexVerticesShape::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef void *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef uint32_t _g4_t_v55[22];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v20)) > _g4_s4 ? (20u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v22)) > _g4_s6 ? (28u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v24)) > _g4_s8 ? (36u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v25)) > _g4_s9 ? (40u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v26)) > _g4_s10 ? (44u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v27)) > _g4_s11 ? (48u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v28)) > _g4_s12 ? (48u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v29)) > _g4_s13 ? (52u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v30)) > _g4_s14 ? (52u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v31)) > _g4_s15 ? (56u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v32)) > _g4_s16 ? (60u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v33)) > _g4_s17 ? (64u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v34)) > _g4_s18 ? (64u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v35)) > _g4_s19 ? (64u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v36)) > _g4_s20 ? (68u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v37)) > _g4_s21 ? (72u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v38)) > _g4_s22 ? (76u + sizeof(_g4_t_v38)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v39)) > _g4_s23 ? (80u + sizeof(_g4_t_v39)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v40)) > _g4_s24 ? (84u + sizeof(_g4_t_v40)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v41)) > _g4_s25 ? (88u + sizeof(_g4_t_v41)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v42)) > _g4_s26 ? (92u + sizeof(_g4_t_v42)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v43)) > _g4_s27 ? (96u + sizeof(_g4_t_v43)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v44)) > _g4_s28 ? (100u + sizeof(_g4_t_v44)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v45)) > _g4_s29 ? (104u + sizeof(_g4_t_v45)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v46)) > _g4_s30 ? (108u + sizeof(_g4_t_v46)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v47)) > _g4_s31 ? (112u + sizeof(_g4_t_v47)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v48)) > _g4_s32 ? (116u + sizeof(_g4_t_v48)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_v49)) > _g4_s33 ? (120u + sizeof(_g4_t_v49)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_v50)) > _g4_s34 ? (124u + sizeof(_g4_t_v50)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v51)) > _g4_s35 ? (128u + sizeof(_g4_t_v51)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v52)) > _g4_s36 ? (132u + sizeof(_g4_t_v52)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v53)) > _g4_s37 ? (136u + sizeof(_g4_t_v53)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v54)) > _g4_s38 ? (140u + sizeof(_g4_t_v54)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v55)) > _g4_s39 ? (144u + sizeof(_g4_t_v55)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 108u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 116u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 120u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 124u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 128u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 132u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 136u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 140u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 144u);

  v55[18] = (uint32_t)(uintptr_t)(&a1);
  v9 = a1;
  v33 = a6;
  switch ( *((uint8_t *)a3 + 8) )
  {
    case 0:
    case 4:
    case 0xC:
    case 0x19:
    case 0x1F:
    case 0x21:
      goto LABEL_3;
    case 1:
      hkpConvexRadiusBuilder::buildShapeDisplay_Cylinder(
        a2,
        a3,
        (int)(uintptr_t)(a4),
        (int)(uintptr_t)(a8),
        (int)(uintptr_t)(a9),
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v29,
        a7,
        a5,
        (int)(uintptr_t)(a6),
        (int)(uintptr_t)(a8),
        a2,
        v38);
      --*v34;
      goto LABEL_3;
    case 2:
      hkpConvexRadiusBuilder::buildShapeDisplay_Triangle(a2, (int)(uintptr_t)(a3), a4, (uint32_t *)(a8),g4_m128_ptr<float>(*(a9)));
      --*v33;
      goto LABEL_3;
    case 3:
      hkpConvexRadiusBuilder::buildShapeDisplay_Box(a2, (__m128 *)a3, (uint32_t *)(a4), a8, a9);
      --*v33;
      goto LABEL_3;
    case 5:
      hkpConvexRadiusBuilder::buildShapeDisplay_ConvexVertices(a2, a3, a4, (hkMemoryAllocator::Self *)a8);
      --*v33;
      goto LABEL_3;
    case 6:
    case 8:
    case 0x12:
    case 0x1A:
    case 0x1B:
      v11 = G4_VCALL<int>(a3, 64, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, a9, a4, a7, a5, a6, a8, a2, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, COERCE_FLOAT(LODWORD(v51)), COERCE_FLOAT(LODWORD(v52)), COERCE_FLOAT(LODWORD(v53)), COERCE_FLOAT(LODWORD(v54)), v55[0], v55[1], v55[2], v55[3], v55[4], v55[5], v55[6], v55[7], v55[8], v55[9], v55[10], v55[11], v55[12], v55[13], v55[14], v55[15], v55[16], v55[17]);
      a3 = v28;
      goto LABEL_10;
    case 7:
    case 9:
    case 0x16:
      v11 = G4_VCALL<int>(a3, 64, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, a4, a7, a5, a6, a8, a2, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, COERCE_FLOAT(LODWORD(v51)), COERCE_FLOAT(LODWORD(v52)), COERCE_FLOAT(LODWORD(v53)), COERCE_FLOAT(LODWORD(v54)), v55[0], v55[1], v55[2], v55[3], v55[4], v55[5], v55[6], v55[7], v55[8], v55[9], v55[10], v55[11], v55[12], v55[13], v55[14], v55[15], v55[16], v55[17]);
      a3 = nullptr;
LABEL_10:
      v55[20] = v11;
      a2 = v36;
      a1 = (uint8_t *)v31;
      retaddr = v35;
      savedregs = v32;
      v55[19] = v37;
      v55[21] = v30;
      hkpConvexRadiusBuilder::buildPartialShapeDisplay_ShapeContainer(v9);
      return v9;
    case 0xA:
      v12 = *((float *)a3 + 8);
      v13 = *((float *)a3 + 9);
      v14 = *((float *)a3 + 10);
      v15 = *((float *)a3 + 11);
      if ( a9 != nullptr )
      {
        v12 = v12 *g4_m128_lane<float>(*(a9), 0);
        v13 = v13 *g4_m128_lane<float>(*(a9), 1);
        v14 = v14 *g4_m128_lane<float>(*(a9), 2);
        v15 = v15 *g4_m128_lane<float>(*(a9), 3);
      }
      v51 = v12;
      v52 = v13;
      v53 = v14;
      v54 = v15;
      v39 = 1065353216;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 1065353216;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 1065353216;
      v50 = 0;
      hkTransformf::setMul((hkTransformf::Self *)v55, a4, (const hkTransformf::Self *)&v39);
      goto LABEL_4;
    case 0xB:
      hkpConvexRadiusBuilder::buildPartialShapeDisplay_ConvexTransform(
        a2,
        (int)(uintptr_t)(a3),
        a4,
        a5,
        (int)(uintptr_t)(a6),
        a7,
        (hkMemoryAllocator::Self *)a8);
      goto LABEL_3;
    case 0xE:
      hkTransformf::setMul((hkTransformf::Self *)v55, a4, (hkpConvexVerticesShape::Self *)((char *)a3 + 48));
      goto LABEL_4;
    case 0x18:
      hkpConvexRadiusBuilder::buildShapeDisplay_ConvexPiece(a2, (int)(uintptr_t)(a3), a4, a8);
      --*v33;
      goto LABEL_3;
    case 0x1E:
LABEL_4:
      hkpConvexRadiusBuilder::buildPartialShapeDisplay(v9);
      result = v9;
      break;
    default:
      hkpConvexRadiusBuilder::buildShapeDisplay_UserShapes((uint8_t *)&v38 + 3, a2, (int)(uintptr_t)(a3), (int)(uintptr_t)(a4), (int)(uintptr_t)(a8));
      if ( HIBYTE(v38) != 0 )
        --*v33;
LABEL_3:
      *v9 = 1;
      result = v9;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildPartialDisplayGeometries  (binary VA: 0x1857c00)
// Original: hkpConvexRadiusBuilder::buildPartialDisplayGeometries
// ----------------------------------------------------------------------------
uint8_t * hkpConvexRadiusBuilder::buildPartialDisplayGeometries(uint8_t *a1, hkpConvexRadiusBuilder::Self *a2, hkpConvexVerticesShape::Self *a3, uint32_t *a4, int a5, int a6)
{
  hkpConvexRadiusBuilder::Self *v6;
  uint8_t *v7;
  int v9;
  int32_t v10; // kr00_4
  int32_t v11;
  int32_t v12; // ett
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef hkpConvexVerticesShape::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef uint32_t _g4_t_v18[22];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v17)) > _g4_s4 ? (19u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v18)) > _g4_s5 ? (20u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 19u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);

  v18[18] = (uint32_t)(uintptr_t)(&a1);
  v15 = a3;
  v14 = a4;
  v16 = a5;
  v6 = a2;
  v7 = a1;
  v13 = a6;
  v18[0] = 1065353216;
  memset(&v18[1], 0, 16);
  v18[5] = 1065353216;
  memset(&v18[6], 0, 16);
  v18[10] = 1065353216;
  memset(&v18[11], 0, 20);
  hkpConvexRadiusBuilder::resetCurrentRawGeometry(a2);
  *(uint32_t *)(v13 + 4) = 0;
  hkpConvexRadiusBuilder::buildPartialShapeDisplay(
    (uint8_t *)(&v17),
    (int)(uintptr_t)(v6),
    v15,
    (hkTransformf::Self *)v18,
    0,
    v14,
    v16,
    (__m128 **)v13,
    nullptr);
  if ( v17 != 0 )
  {
    if ( *(uint16_t *)(v16 + 6) != 0 )
    {
      do
      {
        v10 = *(uint32_t *)(v16 + 4);
        HIWORD(v9) = HIWORD(v10);
        LOWORD(v9) = 0;
        v11 = v9 | (uint16_t)(v10 - 1);
        v12 = v10;
      }
      while ( v12 != __sync_val_compare_and_swap((volatile int32_t *)(v16 + 4), v12, v11) );
      if ( (uint16_t)v11 == 0 )
        G4_VCALL<void>(v16, 16);
    }
    *v7 = 1;
    return v7;
  }
  else
  {
    *v7 = 0;
    return v7;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConvexRadiusBuilder::buildPartialShapeDisplay_ShapeContainer  (binary VA: 0x1857da0)
// Original: hkpConvexRadiusBuilder::buildPartialShapeDisplay_ShapeContainer
// ----------------------------------------------------------------------------
uint8_t * hkpConvexRadiusBuilder::buildPartialShapeDisplay_ShapeContainer(uint8_t *a1, int a2, int a3, hkTransformf::Self *a4, int a5, int *a6, uint32_t *a7, __m128 **a8, __m128 *a9)
{
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  hkpConvexVerticesShape::Self *v16;
  int v18;
  int v19;
  typedef int _g4_t_v20;
  typedef uint8_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef __m128 *_g4_t_v25;
  typedef __m128 **_g4_t_v26;
  typedef hkTransformf::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int *_g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint32_t _g4_t_v34[134];
  enum : size_t {
    _g4_s0 = 704u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v21)) > _g4_s1 ? (48u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v22)) > _g4_s2 ? (52u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v23)) > _g4_s3 ? (64u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v24)) > _g4_s4 ? (64u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v25)) > _g4_s5 ? (68u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v26)) > _g4_s6 ? (72u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v27)) > _g4_s7 ? (76u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v28)) > _g4_s8 ? (80u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v29)) > _g4_s9 ? (84u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v30)) > _g4_s10 ? (84u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v31)) > _g4_s11 ? (84u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v32)) > _g4_s12 ? (88u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (95u + sizeof(_g4_t_v33)) > _g4_s13 ? (95u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v34)) > _g4_s14 ? (96u + sizeof(_g4_t_v34)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 95u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);

  v34[130] = (uint32_t)(uintptr_t)(&a1);
  v21 = a1;
  v28 = a2;
  v9 = a7;
  v10 = a5;
  v27 = a4;
  v32 = a6;
  v26 = a8;
  v25 = a9;
  v11 = a7[3];
  v12 = a3;
  if ( v11 == a5 )
  {
    if ( v11 == (a7[4] & 0x3FFFFFFF) )
    {
      v31 = a5;
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(a7 + 2),
        4,
        v20);
      v11 = v9[3];
      v10 = v31;
    }
    v24 = v10;
    v18 = v9[2];
    v9[3] = v11 + 1;
    v30 = (int *)(v18 + 4 * v11);
    v19 = G4_VCALL<int>(v12, 12);
    v10 = v24;
    *v30 = v19;
  }
  v22 = 4 * v10;
  v13 = *(uint32_t *)(v9[2] + 4 * v10);
  if ( v13 == -1 )
  {
LABEL_10:
    --v9[3];
    *v21 = 1;
    return v21;
  }
  else
  {
    v23 = v10 + 1;
    if ( *v32 > 0 )
    {
      v29 = (int)(uintptr_t)(v9);
      v14 = v12;
      v15 = v13;
      do
      {
        v16 = (hkpConvexVerticesShape::Self *)G4_VCALL<int>(v14, 24, v15, v34);
        hkpConvexRadiusBuilder::buildPartialShapeDisplay((uint8_t *)(&v33), v28, v16, v27, v23, v32, v29, v26, v25);
        if ( v33 == 0 )
          break;
        v15 = G4_VCALL<int>(v14, 16, v15);
        *(uint32_t *)(*(uint32_t *)(v29 + 8) + v22) = v15;
        if ( v15 == -1 )
        {
          v9 = (uint32_t *)v29;
          goto LABEL_10;
        }
      }
      while ( *v32 > 0 );
    }
    *v21 = 0;
    return v21;
  }
}


