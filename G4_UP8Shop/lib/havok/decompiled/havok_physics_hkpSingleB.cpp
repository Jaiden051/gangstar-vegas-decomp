#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSingleB.h"

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::getProcessTag  (binary VA: 0x184b460)
// Original: hkpSingleBodyConstraintViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpSingleBodyConstraintViewer::getProcessTag()
{
  return hkpSingleBodyConstraintViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::entityDeletedCallback  (binary VA: 0x184b490)
// Original: hkpSingleBodyConstraintViewer::entityDeletedCallback
// ----------------------------------------------------------------------------
int hkpSingleBodyConstraintViewer::entityDeletedCallback(hkpSingleBodyConstraintViewer::Self *self, hkpEntity::Self *a2)
{
  return G4_VCALL<int>(self, 48, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::getConsumableCommands  (binary VA: 0x184b4c0)
// Original: hkpSingleBodyConstraintViewer::getConsumableCommands
// ----------------------------------------------------------------------------
int * hkpSingleBodyConstraintViewer::getConsumableCommands(hkpSingleBodyConstraintViewer::Self *self, uint8_t **a2, int *a3)
{
  *a2 = (uint8_t *)&unk_20C90F8;
  *a3 = 1;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::postSimulationCallback  (binary VA: 0x184b500)
// Original: hkpSingleBodyConstraintViewer::postSimulationCallback
// ----------------------------------------------------------------------------
void hkpSingleBodyConstraintViewer::postSimulationCallback(hkpSingleBodyConstraintViewer::Self *self)
{
  int **address;
  int *v2;
  char *v3;
  hkpEntity::Self *v4;
  char *v5;
  hkpConstraintViewer::Self *v6;
  int v7;
  int *v8;
  signed int v9;
  typedef hkDebugDisplayHandler::Self *_g4_t_v10;
  typedef int **_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v11)) > _g4_s1 ? (24u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v17)) > _g4_s7 ? (48u + sizeof(_g4_t_v17)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  if ( *((uint32_t *)self + 13) != 0 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0x80000000;
    v17 = 10;
    address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v2 = *address;
    v11 = address;
    v3 = (char *)(*address)[3];
    if ( v2[2] > 127 && (unsigned int)(uintptr_t)(v3 + 128) <= v2[4] )
      v2[3] = (int)(uintptr_t)(v3 + 128);
    else
      v3 = (char *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v2, 128);
    v13 = (int)(uintptr_t)(v3);
    v16 = v3;
    v4 = *((hkpEntity::Self **)self + 13);
    v15 = -2147483638;
    hkpEntity::getAllConstraints(v4, &v13);
    v5 = (char *)v13;
    v12 = v13 + 4 * v14;
    if ( v13 != v12 )
    {
      do
      {
        v6 = *(hkpConstraintViewer::Self **)v5;
        v5 += 4;
        hkpConstraintViewer::draw(
          v6,
          *(hkpConstraintInstance::Self **)(*((uint32_t *)v6 + 12) + 4 * *(uint8_t *)(*((uint32_t *)v6 + 12) + 26) + 4),
          *((const hkpEntity::Self **)self + 6),
          v10);
      }
      while ( v5 != (char *)v12 );
      v5 = (char *)v13;
    }
    v7 = 0;
    if ( v16 != v5 )
      v7 = v14;
    v8 = *v11;
    v14 = v7;
    v9 = (4 * v17 + 127) & 0xFFFFFF80;
    if ( v9 > v8[2] || (char *)v8[3] != &v16[v9] || v16 == (char *)v8[5] )
      hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v8, v16, v9);
    else
      v8[3] = (int)(uintptr_t)(v16);
    v14 = 0;
    if ( v15 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v13,
        4 * v15);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::registerViewer  (binary VA: 0x184b6a0)
// Original: hkpSingleBodyConstraintViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpSingleBodyConstraintViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Constraint Viewer - Single Body",
             hkpSingleBodyConstraintViewer::create);
  hkpSingleBodyConstraintViewer::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::Construct  (binary VA: 0x184b6f0)
// Original: hkpSingleBodyConstraintViewer::hkpSingleBodyConstraintViewer
// ----------------------------------------------------------------------------
int hkpSingleBodyConstraintViewer::Construct(uint32_t *a1, uint32_t *a2)
{
  int result;
  int v3;
  hkpWorld::Self *v4;

  hkpWorldViewerBase::Construct((int)(uintptr_t)(a1), a2);
  a1[12] = 0;
  a1[13] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A3E68);
  a1[2] = ((uint32_t)(uintptr_t)&off_20A3EA8);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A3ED4);
  a1[11] = ((uint32_t)(uintptr_t)&off_20A3F04);
  result = a1[9];
  a1[10] = ((uint32_t)(uintptr_t)&off_20A3EEC);
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
// Function: hkpSingleBodyConstraintViewer::create  (binary VA: 0x184b7a0)
// Original: hkpSingleBodyConstraintViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpSingleBodyConstraintViewer::create(uint32_t *a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   56);
  hkpSingleBodyConstraintViewer::Construct(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::releaseObject  (binary VA: 0x184b800)
// Original: hkpSingleBodyConstraintViewer::releaseObject
// ----------------------------------------------------------------------------
int hkpSingleBodyConstraintViewer::releaseObject(hkpSingleBodyConstraintViewer::Self *self)
{
  int result;

  result = *((uint32_t *)self + 13);
  if ( result != 0 )
  {
    result = hkpEntity::removeEntityListener(*((uint32_t *)self + 13), (int)(uintptr_t)(self) + 44);
    *((uint32_t *)self + 13) = 0;
  }
  *((uint32_t *)self + 12) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::worldRemovedCallback  (binary VA: 0x184b840)
// Original: hkpSingleBodyConstraintViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpSingleBodyConstraintViewer::Self * hkpSingleBodyConstraintViewer::worldRemovedCallback(hkpSingleBodyConstraintViewer::Self *self, hkpWorld::Self *a2)
{
  hkpSingleBodyConstraintViewer::Self *result;

  result = self;
  if ( *((hkpWorld::Self **)self + 12) == a2 )
    return (hkpSingleBodyConstraintViewer::Self *)hkpSingleBodyConstraintViewer::releaseObject(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::entityRemovedCallback  (binary VA: 0x184b890)
// Original: hkpSingleBodyConstraintViewer::entityRemovedCallback
// ----------------------------------------------------------------------------
hkpSingleBodyConstraintViewer::Self * hkpSingleBodyConstraintViewer::entityRemovedCallback(hkpSingleBodyConstraintViewer::Self *self, hkpEntity::Self *a2)
{
  hkpSingleBodyConstraintViewer::Self *result;

  result = self;
  if ( *((hkpEntity::Self **)self + 13) == a2 )
    return (hkpSingleBodyConstraintViewer::Self *)hkpSingleBodyConstraintViewer::releaseObject(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::Destroy  (binary VA: 0x184b8e0)
// Original: hkpSingleBodyConstraintViewer::~hkpSingleBodyConstraintViewer
// ----------------------------------------------------------------------------
void hkpSingleBodyConstraintViewer::Destroy(hkpSingleBodyConstraintViewer::Self *self)
{
  int v1;
  int v2;
  hkpWorld::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3E68);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3EA8);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A3ED4);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A3EEC);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_20A3F04);
  hkpSingleBodyConstraintViewer::releaseObject(self);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpWorld::removeWorldPostSimulationListener(v3, (hkpSingleBodyConstraintViewer::Self *)((char *)self + 40));
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&off_2054DE8);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_209E868);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::Destroy_ea184b9d0  (binary VA: 0x184b9d0)
// Original: hkpSingleBodyConstraintViewer::~hkpSingleBodyConstraintViewer
// ----------------------------------------------------------------------------
void hkpSingleBodyConstraintViewer::Destroy_ea184b9d0(hkpSingleBodyConstraintViewer::Self *self)
{
  int v1;
  int v2;

  hkpSingleBodyConstraintViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::pickObject  (binary VA: 0x184ba70)
// Original: hkpSingleBodyConstraintViewer::pickObject
// ----------------------------------------------------------------------------
hkpSingleBodyConstraintViewer::Self * hkpSingleBodyConstraintViewer::pickObject(hkpSingleBodyConstraintViewer::Self *self, uint64_t a2, const hkVector4f::Self *a3)
{
  unsigned int v3;
  hkpSingleBodyConstraintViewer::Self *result;
  int v5;

  v3 = HIDWORD(a2);
  result = self;
  if ( (BYTE4(a2) & 3) == 3 )
  {
    v3 = HIDWORD(a2) & 0xFFFFFFFC;
    if ( *(uint8_t *)((HIDWORD(a2) & 0xFFFFFFFC) + 24) != 1 )
      goto LABEL_4;
    goto LABEL_7;
  }
  if ( (a2 & 0x300000000LL) == 0 )
  {
    if ( *(uint8_t *)(HIDWORD(a2) + 24) != 1 )
    {
LABEL_4:
      *(uint8_t *)result = 1;
      return result;
    }
LABEL_7:
    v5 = v3 + *(char *)(v3 + 16);
    if ( v5 != 0 && *(uint32_t *)(a2 + 52) != v5 )
    {
      hkpSingleBodyConstraintViewer::releaseObject((hkpSingleBodyConstraintViewer::Self *)a2);
      *(uint32_t *)(a2 + 52) = v5;
      *(uint32_t *)(a2 + 48) = *(uint32_t *)(v5 + 8);
      hkpEntity::addEntityListener(v5, a2 + 44);
      result = self;
    }
    goto LABEL_4;
  }
  *(uint8_t *)self = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSingleBodyConstraintViewer::consumeCommand  (binary VA: 0x184bb00)
// Original: hkpSingleBodyConstraintViewer::consumeCommand
// ----------------------------------------------------------------------------
hkpSingleBodyConstraintViewer::Self * hkpSingleBodyConstraintViewer::consumeCommand(hkDisplaySerializeIStream::Self **self, uint8_t a2)
{
  hkDisplaySerializeIStream::Self **v2;
  hkpSingleBodyConstraintViewer::Self *result;
  uint64_t v8; // 0:kr00_8.8
  typedef int64_t _g4_t_v4;
  typedef uint8_t _g4_t_v5[9];
  typedef int64_t _g4_t_v6;
  typedef uint32_t _g4_t_v7[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v5)) > _g4_s1 ? (15u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v7)) > _g4_s3 ? (32u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 15u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);

  v7[6] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  if ( a2 == 0xB0 )
  {
    hkDisplaySerializeIStream::readQuadVector4(*(self + 4), (hkVector4f::Self *)v7);
    hkIArchive::readArrayGeneric(v2[4], &v6, 8, 1);
    v4 = v6;
    result = (hkpSingleBodyConstraintViewer::Self *)hkIArchive::isOk((hkIArchive::Self *)v5);
    if ( v5[0] != 0 )
    {
      LODWORD(v8) = (uint32_t)(uintptr_t)(v2);
      HIDWORD(v8) = v4;
      return hkpSingleBodyConstraintViewer::pickObject(
               (hkpSingleBodyConstraintViewer::Self *)v5,
               v8,
               (const hkVector4f::Self *)HIDWORD(v4));
    }
  }
  return result;
}


