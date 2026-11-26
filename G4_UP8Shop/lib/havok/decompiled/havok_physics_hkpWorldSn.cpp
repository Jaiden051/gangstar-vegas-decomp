#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldSn.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldSnapshotViewer::getProcessTag  (binary VA: 0x1830930)
// Original: hkpWorldSnapshotViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpWorldSnapshotViewer::getProcessTag(hkpWorldSnapshotViewer::Self *self)
{
  return hkpWorldSnapshotViewer::s_tags[*((uint32_t *)self + 10)];
}

// ----------------------------------------------------------------------------
// Function: hkpWorldSnapshotViewer::init  (binary VA: 0x1830960)
// Original: hkpWorldSnapshotViewer::init
// ----------------------------------------------------------------------------
int hkpWorldSnapshotViewer::init(hkpWorldSnapshotViewer::Self *self)
{
  int result;
  int v2;
  int v3;

  result = *((uint32_t *)self + 9);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(uint32_t *)(*(uint32_t *)(result + 108) + 4 * v2++);
      G4_VCALL<void>(self, 36, v3);
      result = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldSnapshotViewer::Destroy  (binary VA: 0x18309c0)
// Original: hkpWorldSnapshotViewer::~hkpWorldSnapshotViewer
// ----------------------------------------------------------------------------
void hkpWorldSnapshotViewer::Destroy(hkpWorldSnapshotViewer::Self *self)
{
  void (**v1)(hkpWorldSnapshotViewer::Self *);
  int v2;
  int v3;
  int v4;

  v1 = (void (**)(hkpWorldSnapshotViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A1FE8));
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A204C);
  v2 = *((uint32_t *)self + 9);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1FE8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A2020);
  if ( v2 != 0 && *(int *)(v2 + 112) > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(uint32_t *)(*(uint32_t *)(v2 + 108) + 4 * v3++);
      ((void (*)(hkpWorldSnapshotViewer::Self *, int))v1[8])(self, v4);
      v2 = *((uint32_t *)self + 9);
      if ( v3 >= *(uint32_t *)(v2 + 112) )
        break;
      v1 = *(void (***)(hkpWorldSnapshotViewer::Self *))self;
    }
  }
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldSnapshotViewer::Destroy_ea1830a60  (binary VA: 0x1830a60)
// Original: hkpWorldSnapshotViewer::~hkpWorldSnapshotViewer
// ----------------------------------------------------------------------------
void hkpWorldSnapshotViewer::Destroy_ea1830a60(hkpWorldSnapshotViewer::Self *self)
{
  int v1;
  int v2;

  hkpWorldSnapshotViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldSnapshotViewer::step  (binary VA: 0x1830ae0)
// Original: hkpWorldSnapshotViewer::step
// ----------------------------------------------------------------------------
int hkpWorldSnapshotViewer::step(hkpWorldSnapshotViewer::Self *self)
{
  hkpWorldSnapshotViewer::Self *v1;
  void **v2;
  uint8_t *v3;
  void *v4;
  int v5;
  void **v6;
  int address;
  int result;
  int v9;
  typedef bool _g4_t_v10;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13[4];
  typedef void *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[2];
  typedef void **_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef hkpWorldSnapshotViewer::Self **_g4_t_v22;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v12)) > _g4_s2 ? (31u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v17)) > _g4_s7 ? (52u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v18)) > _g4_s8 ? (60u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v19)) > _g4_s9 ? (64u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v20)) > _g4_s10 ? (68u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v21)) > _g4_s11 ? (72u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v22)) > _g4_s12 ? (92u + sizeof(_g4_t_v22)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 31u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);

  v22 = &self;
  v1 = self;
  if ( *((uint32_t *)self + 5) != 0 )
  {
    v2 = &v14;
    v14 = nullptr;
    v15 = 0;
    v16 = 0x80000000;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v13,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v14,
      102400,
      1);
    v3 = (uint8_t *)v15;
    v17[0] = ((uint32_t)(uintptr_t)&off_2097A88);
    v19 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    v17[1] = -65535;
    v18 = &v14;
    v20 = v15;
    v21 = 1;
    if ( v15 + 1 > (v16 & 0x3FFFFFFF) )
    {
      v9 = 2 * (v16 & 0x3FFFFFFF);
      if ( v9 < v15 + 1 )
        v9 = v15 + 1;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v13,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)&v14,
        v9,
        1);
      v2 = v18;
      v3 = (uint8_t *)(v18[1]);
    }
    v4 = *v2;
    v5 = 0;
    for ( v3[(uint32_t)(uintptr_t)(v4)] = 0; v5 < *(uint32_t *)(*((uint32_t *)v1 + 9) + 112); ++v5 )
    {
      v10 = *((uint32_t *)v1 + 10) != 1;
      v15 = 0;
      hkpHavokSnapshot::save(&v12);
      if ( v15 > 0 )
      {
        v11 = v15;
        hkOArchive::write32u(*((hkOArchive::Self **)v1 + 5), v15 + 9, v17, v10, 0, 0);
        hkOArchive::write8u(*((hkOArchive::Self **)v1 + 5), 0xD0u);
        hkOArchive::write8u(*((hkOArchive::Self **)v1 + 5), 0);
        hkOArchive::write8u(*((hkOArchive::Self **)v1 + 5), *((uint32_t *)v1 + 10) != 1);
        hkOArchive::write8u(*((hkOArchive::Self **)v1 + 5), 0);
        hkOArchive::write8u(*((hkOArchive::Self **)v1 + 5), 0);
        hkOArchive::write32(*((hkOArchive::Self **)v1 + 5), v11);
        hkOArchive::writeRaw(*((hkOArchive::Self **)v1 + 5), v14, v11);
      }
    }
    v17[0] = ((uint32_t)(uintptr_t)&off_2097A88);
    if ( v21 == 0 )
    {
      v6 = v18;
      if ( v18 != nullptr )
      {
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        (*(void (**)(uint32_t, void **, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)address + 44),
          v6,
          12);
      }
    }
    v15 = 0;
    v17[0] = ((uint32_t)(uintptr_t)&off_2054CB8);
    if ( v16 >= 0 )
      (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v14,
        v16 & 0x3FFFFFFF);
  }
  result = *((uint32_t *)v1 + 7);
  if ( result != 0 )
    return (*(int (**)(char *))(*(uint32_t *)result + 36))(v13);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldSnapshotViewer::registerViewer  (binary VA: 0x1830dd0)
// Original: hkpWorldSnapshotViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpWorldSnapshotViewer::registerViewer()
{
  int result;

  hkpWorldSnapshotViewer::s_tags[1] = hkProcessFactory::registerProcess(
                                        hkSingleton<hkProcessFactory::Self>::s_instance,
                                        "* Grab World Snapshot (Binary Tagfile)",
                                        hkpWorldSnapshotViewer::createBinaryTagfile);
  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "* Grab World Snapshot (Xml Tagfile)",
             hkpWorldSnapshotViewer::createXmlTagfile);
  hkpWorldSnapshotViewer::s_tags[0] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldSnapshotViewer::Construct  (binary VA: 0x1830e40)
// Original: hkpWorldSnapshotViewer::hkpWorldSnapshotViewer
// ----------------------------------------------------------------------------
int hkpWorldSnapshotViewer::Construct(uint32_t *a1, int a2, int a3)
{
  hkpWorldViewerBase::Construct(a1, a2);
  *a1 = ((uint32_t)(uintptr_t)&off_20A1FE8);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A204C);
  a1[2] = ((uint32_t)(uintptr_t)&off_20A2020);
  a1[10] = a3;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldSnapshotViewer::createBinaryTagfile  (binary VA: 0x1830e90)
// Original: hkpWorldSnapshotViewer::createBinaryTagfile
// ----------------------------------------------------------------------------
uint32_t * hkpWorldSnapshotViewer::createBinaryTagfile(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   44);
  hkpWorldSnapshotViewer::Construct(v2, a1, 1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldSnapshotViewer::createXmlTagfile  (binary VA: 0x1830f00)
// Original: hkpWorldSnapshotViewer::createXmlTagfile
// ----------------------------------------------------------------------------
uint32_t * hkpWorldSnapshotViewer::createXmlTagfile(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   44);
  hkpWorldSnapshotViewer::Construct(v2, a1, 0);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}


