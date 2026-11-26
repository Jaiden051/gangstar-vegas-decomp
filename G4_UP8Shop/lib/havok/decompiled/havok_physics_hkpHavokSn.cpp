#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpHavokSn.h"

// ----------------------------------------------------------------------------
// Function: hkpHavokSnapshot::ConvertListener::Destroy  (binary VA: 0x1831550)
// Original: hkpHavokSnapshot::ConvertListener::~ConvertListener
// ----------------------------------------------------------------------------
void hkpHavokSnapshot::ConvertListener::Destroy(hkpHavokSnapshot::ConvertListener::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 0;
  v2 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A21E8);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 2) + 4 * v1);
      if ( v3 != 0 )
      {
        (*(void (**)(uint32_t))(*(uint32_t *)v3 + 4))(*(uint32_t *)(*((uint32_t *)self + 2) + 4 * v1));
        v2 = *((uint32_t *)self + 3);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v4 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v4);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpHavokSnapshot::ConvertListener::Destroy_ea18315f0  (binary VA: 0x18315f0)
// Original: hkpHavokSnapshot::ConvertListener::~ConvertListener
// ----------------------------------------------------------------------------
void hkpHavokSnapshot::ConvertListener::Destroy_ea18315f0(hkpHavokSnapshot::ConvertListener::Self *self)
{
  int v1;
  int v2;

  hkpHavokSnapshot::ConvertListener::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpHavokSnapshot::ConvertListener::addObjectCallback  (binary VA: 0x18316b0)
// Original: hkpHavokSnapshot::ConvertListener::addObjectCallback
// ----------------------------------------------------------------------------
hkClass::Self * hkpHavokSnapshot::ConvertListener::addObjectCallback(hkpHavokSnapshot::ConvertListener::Self *self, hkpTriSampledHeightFieldCollection::Self **a2, const hkClass::Self **a3)
{
  const hkClass::Self **v3;
  hkClass::Self *v4;
  int address;
  hkpStorageMeshShape::Self *v6;
  int v7;
  hkpTriSampledHeightFieldCollection::Self *v8;
  hkClass::Self *v9;
  int v10;
  hkpStorageExtendedMeshShape::Self *v11;
  int v12;
  hkClass::Self *result;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int32_t v19; // kr00_4
  int32_t v20;
  int32_t v21; // ett
  int v22;
  const hkpSampledHeightFieldShape::Self *v23;
  int v24;
  hkpMeshShape::Self *v25;
  int v26;
  int32_t v27; // kr04_4
  int32_t v28;
  int32_t v29; // ett
  int v30;
  typedef const hkpMeshShape::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef hkpMeshShape::Self *_g4_t_v33;
  typedef hkpMeshShape::Self *_g4_t_v34;
  typedef float _g4_t_v35;
  typedef const hkpSampledHeightFieldShape::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef hkpMeshShape::Self *_g4_t_v38;
  typedef hkpMeshShape::Self *_g4_t_v39;
  typedef hkpMeshShape::Self *_g4_t_v40;
  typedef hkpMeshShape::Self *_g4_t_v41;
  typedef hkpMeshShape::Self *_g4_t_v42;
  typedef hkpMeshShape::Self *_g4_t_v43;
  typedef hkpTriSampledHeightFieldCollection::Self **_g4_t_v44;
  typedef hkpHavokSnapshot::ConvertListener::Self *_g4_t_v45;
  typedef uint8_t _g4_t_v46[9];
  typedef hkpHavokSnapshot::ConvertListener::Self **_g4_t_v47;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v33)) > _g4_s2 ? (16u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v34)) > _g4_s3 ? (20u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v35)) > _g4_s4 ? (20u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v36)) > _g4_s5 ? (24u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v37)) > _g4_s6 ? (24u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v38)) > _g4_s7 ? (28u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v39)) > _g4_s8 ? (28u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v40)) > _g4_s9 ? (28u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v41)) > _g4_s10 ? (28u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v42)) > _g4_s11 ? (28u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v43)) > _g4_s12 ? (28u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v44)) > _g4_s13 ? (32u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v45)) > _g4_s14 ? (36u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (43u + sizeof(_g4_t_v46)) > _g4_s15 ? (43u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v47)) > _g4_s16 ? (52u + sizeof(_g4_t_v47)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 43u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);

  v47 = &self;
  v3 = a3;
  v45 = self;
  v44 = a2;
  hkClass::isSuperClass((hkClass::Self *)v46, (const hkClass::Self *)&hkpMeshShapeClass, *a3);
  if ( v46[0] != 0 )
  {
    v4 = (hkClass::Self *)&hkpStorageMeshShapeClass;
    if ( *v3 != (const hkClass::Self *)&hkpStorageMeshShapeClass )
    {
      v38 = (hkpMeshShape::Self *)(*v44);
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v6 = (hkpStorageMeshShape::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                    *(uint32_t *)(*(uint32_t *)address + 44),
                                    112);
      v31 = v38;
      v39 = (hkpMeshShape::Self *)(v6);
      hkpStorageMeshShape::Construct(v6, v31);
      v7 = *((uint32_t *)v45 + 3);
      v8 = (hkpTriSampledHeightFieldCollection::Self *)(v39);
      if ( v7 == (*((uint32_t *)v45 + 4) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpHavokSnapshot::ConvertListener::Self *)((char *)v45 + 8),
          4,
          v32);
        v7 = *((uint32_t *)v45 + 3);
        v8 = (hkpTriSampledHeightFieldCollection::Self *)(v39);
      }
      *(uint32_t *)(*((uint32_t *)v45 + 2) + 4 * v7) = (uint32_t)(uintptr_t)(v8);
      ++*((uint32_t *)v45 + 3);
      *v44 = v8;
      v4 = (hkClass::Self *)&hkpStorageMeshShapeClass;
      *v3 = (const hkClass::Self *)&hkpStorageMeshShapeClass;
    }
  }
  else
  {
    v4 = (hkClass::Self *)(*v3);
  }
  hkClass::isSuperClass((hkClass::Self *)v46, (const hkClass::Self *)&hkpExtendedMeshShapeClass, v4);
  if ( v46[0] != 0 )
  {
    v9 = (hkClass::Self *)&hkpStorageExtendedMeshShapeClass;
    if ( *v3 != (const hkClass::Self *)&hkpStorageExtendedMeshShapeClass )
    {
      v40 = (hkpMeshShape::Self *)(*v44);
      v10 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v11 = (hkpStorageExtendedMeshShape::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v10 + 44) + 8))(
                                             *(uint32_t *)(*(uint32_t *)v10 + 44),
                                             272);
      hkpStorageExtendedMeshShape::Construct(v11, v40);
      v12 = *((uint32_t *)v45 + 3);
      if ( v12 == (*((uint32_t *)v45 + 4) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpHavokSnapshot::ConvertListener::Self *)((char *)v45 + 8),
          4,
          v32);
        v12 = *((uint32_t *)v45 + 3);
      }
      *(uint32_t *)(*((uint32_t *)v45 + 2) + 4 * v12) = (uint32_t)(uintptr_t)(v11);
      ++*((uint32_t *)v45 + 3);
      *v44 = (hkpTriSampledHeightFieldCollection::Self *)(v11);
      result = (hkClass::Self *)&hkpStorageExtendedMeshShapeClass;
      *v3 = (const hkClass::Self *)&hkpStorageExtendedMeshShapeClass;
      return result;
    }
  }
  else
  {
    v9 = (hkClass::Self *)(*v3);
  }
  hkClass::isSuperClass((hkClass::Self *)v46, (const hkClass::Self *)&hkpRigidBodyClass, v9);
  if ( v46[0] != 0 )
  {
    result = (hkClass::Self *)(*v44);
    v14 = *((uint32_t *)*v44 + 2);
    if ( v14 != 0 && result == *(hkClass::Self **)(v14 + 36) )
    {
      *v44 = nullptr;
      *v3 = nullptr;
    }
    v15 = *((uint32_t *)result + 4);
    if ( *(uint8_t *)(v15 + 8) == 12 && *(uint8_t *)(v15 + 53) == 2 )
    {
      v36 = *((const hkpSampledHeightFieldShape::Self **)result + 4);
      v41 = (hkpMeshShape::Self *)G4_VCALL<int>(result, 36);
      v16 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v17 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v16 + 44) + 8))(
              *(uint32_t *)(*(uint32_t *)v16 + 44),
              144);
      hkpStorageSampledHeightFieldShape::Construct(
        (hkpStorageSampledHeightFieldShape::Self *)v17,
        v36);
      G4_VCALL<void>(v41, 20, v17);
      if ( *(uint16_t *)(v17 + 6) != 0 )
      {
        do
        {
          v19 = *(uint32_t *)(v17 + 4);
          HIWORD(v18) = HIWORD(v19);
          LOWORD(v18) = 0;
          v20 = v18 | (uint16_t)(v19 - 1);
          v21 = v19;
        }
        while ( v21 != __sync_val_compare_and_swap((volatile int32_t *)(v17 + 4), v21, v20) );
        if ( (uint16_t)v20 == 0 )
          G4_VCALL<void>(v17, 16);
      }
      v22 = *((uint32_t *)v45 + 3);
      if ( v22 == (*((uint32_t *)v45 + 4) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpHavokSnapshot::ConvertListener::Self *)((char *)v45 + 8),
          4,
          v32);
        v22 = *((uint32_t *)v45 + 3);
      }
      *(uint32_t *)(*((uint32_t *)v45 + 2) + 4 * v22) = (uint32_t)(uintptr_t)(v41);
      ++*((uint32_t *)v45 + 3);
      *v44 = (hkpTriSampledHeightFieldCollection::Self *)(v41);
      *v3 = (const hkClass::Self *)&hkpRigidBodyClass;
      return (hkClass::Self *)&hkpRigidBodyClass;
    }
  }
  else
  {
    result = hkClass::isSuperClass((hkClass::Self *)v46, (const hkClass::Self *)&hkpTriSampledHeightFieldCollectionClass, *v3);
    if ( v46[0] != 0 )
    {
      v42 = (hkpMeshShape::Self *)(*v44);
      result = (hkClass::Self *)hkpTriSampledHeightFieldCollection::getHeightFieldShape(*v44);
      v23 = (const hkpSampledHeightFieldShape::Self *)(result);
      if ( *((uint8_t *)result + 53) == 2 )
      {
        v34 = v42;
        v37 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v43 = (hkpMeshShape::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v37 + 44) + 8))(
                                *(uint32_t *)(*(uint32_t *)v37 + 44),
                                144);
        hkpStorageSampledHeightFieldShape::Construct(v43, v23);
        v33 = v34;
        v35 = *((float *)v34 + 8);
        v24 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v37 + 44) + 8))(
                *(uint32_t *)(*(uint32_t *)v37 + 44),
                64);
        hkpTriSampledHeightFieldCollection::Construct(
          (hkpTriSampledHeightFieldCollection::Self *)v24,
          v43,
          v35);
        v25 = v33;
        if ( *((uint16_t *)v43 + 3) != 0 )
        {
          do
          {
            v27 = *((uint32_t *)v43 + 1);
            HIWORD(v26) = HIWORD(v27);
            LOWORD(v26) = 0;
            v28 = v26 | (uint16_t)(v27 - 1);
            v29 = v27;
          }
          while ( v29 != __sync_val_compare_and_swap((volatile int32_t *)v43 + 1, v29, v28) );
          v25 = v33;
          if ( (uint16_t)v28 == 0 )
          {
            G4_VCALL<void>(v43, 16);
            v25 = v33;
          }
        }
        *(uint8_t *)(v24 + 20) = *((uint8_t *)v25 + 20);
        *(uint32_t *)(v24 + 12) = *((uint32_t *)v25 + 3);
        *(uint32_t *)(v24 + 48) = *((uint32_t *)v25 + 12);
        *(uint32_t *)(v24 + 52) = *((uint32_t *)v25 + 13);
        *(uint32_t *)(v24 + 56) = *((uint32_t *)v25 + 14);
        *(uint32_t *)(v24 + 60) = *((uint32_t *)v25 + 15);
        v30 = *((uint32_t *)v45 + 3);
        if ( v30 == (*((uint32_t *)v45 + 4) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkpHavokSnapshot::ConvertListener::Self *)((char *)v45 + 8),
            4,
            v32);
          v30 = *((uint32_t *)v45 + 3);
        }
        *(uint32_t *)(*((uint32_t *)v45 + 2) + 4 * v30) = v24;
        ++*((uint32_t *)v45 + 3);
        *v44 = (hkpTriSampledHeightFieldCollection::Self *)v24;
        *v3 = (const hkClass::Self *)&hkpTriSampledHeightFieldCollectionClass;
        return (hkClass::Self *)&hkpTriSampledHeightFieldCollectionClass;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpHavokSnapshot::load  (binary VA: 0x1831b80)
// Original: hkpHavokSnapshot::load
// ----------------------------------------------------------------------------
int hkpHavokSnapshot::load(hkpHavokSnapshot::Self *self, hkStreamReader::Self *a2)
{
  int v2;
  int v3;
  int (*v4)(int, int, int);
  hkClass::Self *v5;
  int Name;
  hkRootLevelContainer::Self *v7;
  hkString::Self *v8;
  int result;
  hkString::Self *v10;
  hkString::Self **v11;
  typedef hkRootLevelContainer::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef hkString::Self **_g4_t_v14;
  typedef uint32_t _g4_t_v15[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);

  if ( self == nullptr )
    return 0;
  if ( a2 == nullptr )
    return 0;
  v15[0] = 0;
  v15[1] = 0;
  v2 = hkSerializeUtil::load(self, 0, 0, 0, 0);
  v3 = v2;
  if ( v2 == 0 )
    return 0;
  v4 = *(int (**)(int, int, int))(*(uint32_t *)v2 + 32);
  v12 = (hkRootLevelContainer::Self *)hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance;
  v13 = (*(int (**)(void))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 20))();
  v5 = (hkClass::Self *)hkRootLevelContainer::staticClass(v12);
  Name = hkClass::getName(v5);
  v7 = (hkRootLevelContainer::Self *)v4(v3, Name, v13);
  if ( v7 == nullptr )
    return 0;
  v8 = (hkString::Self *)hkClass::getName((hkClass::Self *)&hkpPhysicsDataClass);
  result = hkRootLevelContainer::findObjectByType(v7, v8, nullptr);
  if ( result == 0 )
  {
    v10 = (hkString::Self *)"SnapshotSave";
    v15[0] = (uint32_t)(uintptr_t)("hkpPhysicsData");
    v15[1] = 0;
    v11 = (hkString::Self **)v15;
    while ( 1 )
    {
      v14 = v11;
      result = hkRootLevelContainer::findObjectByName(v7, v10, nullptr);
      if ( result != 0 )
        break;
      v11 = v14 + 1;
      v10 = *v14;
      if ( *v14 == nullptr )
        return 0;
    }
  }
  *(uint32_t *)a2 = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpHavokSnapshot::save  (binary VA: 0x1831cd0)
// Original: hkpHavokSnapshot::save
// ----------------------------------------------------------------------------
bool * hkpHavokSnapshot::save(bool *a1, int a2, int a3, int a4, char a5, int a6, uint32_t *a7)
{
  bool *v7;
  uint32_t *v8;
  char v10;
  int v11;
  int v12;
  typedef uint32_t *_g4_t_v13;
  typedef char _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[8];
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef bool **_g4_t_v30;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v18)) > _g4_s5 ? (20u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v19)) > _g4_s6 ? (24u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v20)) > _g4_s7 ? (40u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v21)) > _g4_s8 ? (44u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v22)) > _g4_s9 ? (76u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v23)) > _g4_s10 ? (80u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v24)) > _g4_s11 ? (84u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (85u + sizeof(_g4_t_v25)) > _g4_s12 ? (85u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v26)) > _g4_s13 ? (88u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v27)) > _g4_s14 ? (92u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v28)) > _g4_s15 ? (96u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v29)) > _g4_s16 ? (100u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v30)) > _g4_s17 ? (116u + sizeof(_g4_t_v30)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 85u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 116u);

  v30 = &a1;
  v18 = a2;
  v17 = a3;
  v16 = a4;
  v7 = a1;
  v15 = a6;
  v8 = a7;
  v21[1] = -65535;
  v21[0] = ((uint32_t)(uintptr_t)&off_20A21E8);
  if ( a7 == nullptr )
    v8 = v21;
  v21[2] = 0;
  v21[3] = 0;
  v21[4] = 0x80000000;
  if ( (a5 & 2) != 0 )
  {
    v13 = v8;
    v14 = a5 & 1;
    v22 = 0;
    hkStructureLayout::Construct((hkStructureLayout::Self *)&v23);
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0x80000000;
    v10 = v14;
    v11 = (int)(uintptr_t)(v13);
    if ( v15 != 0 )
    {
      hkStructureLayout::Construct(&v20, v15);
      v11 = (int)(uintptr_t)(v13);
      v23 = v20;
      v10 = v14;
    }
    hkSerializeUtil::savePackfile(v19, v18, v17, v16, (int)(uintptr_t)(&v22), v11, v10);
    v12 = v29;
    *v7 = v19[0] == 0;
    v28 = 0;
    if ( v12 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v27,
        2 * (v12 & 0x3FFFFFFF));
  }
  else
  {
    hkSerializeUtil::saveTagfile(v19);
    *v7 = v19[0] == 0;
  }
  hkpHavokSnapshot::ConvertListener::Destroy((hkpHavokSnapshot::ConvertListener::Self *)v21);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpHavokSnapshot::saveUnderRootLevel  (binary VA: 0x1831e80)
// Original: hkpHavokSnapshot::saveUnderRootLevel
// ----------------------------------------------------------------------------
bool * hkpHavokSnapshot::saveUnderRootLevel(bool *a1, void *a2, hkClass::Self *a3, int a4, char a5, int a6)
{
  hkString::Self *Name;
  uint32_t *v7;
  int v8;
  int v9;
  int Class;
  hkString::Self *v11;
  hkClass::Self *v12;
  char *v13;
  char *v14;
  int v15;
  int v16;
  int32_t v17; // kr00_4
  int32_t v18;
  int32_t v19; // ett
  typedef hkStringPtr::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef bool *_g4_t_v24;
  typedef char _g4_t_v25;
  typedef int _g4_t_v26;
  typedef hkClass::Self *_g4_t_v27;
  typedef hkClass::Self *_g4_t_v28;
  typedef void *_g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef bool **_g4_t_v35;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v22)) > _g4_s1 ? (24u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v23)) > _g4_s2 ? (48u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v24)) > _g4_s3 ? (52u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v25)) > _g4_s4 ? (56u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v26)) > _g4_s5 ? (60u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v27)) > _g4_s6 ? (64u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v28)) > _g4_s7 ? (64u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v29)) > _g4_s8 ? (68u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v30)) > _g4_s9 ? (68u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v31)) > _g4_s10 ? (72u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v32)) > _g4_s11 ? (76u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v33)) > _g4_s12 ? (80u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v34)) > _g4_s13 ? (84u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v35)) > _g4_s14 ? (100u + sizeof(_g4_t_v35)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);

  v35 = &a1;
  v24 = a1;
  v29 = a2;
  v26 = a4;
  v25 = a5;
  v23 = a6;
  v27 = a3;
  v32 = 0;
  v33 = 0;
  v34 = 0x80000000;
  Name = (hkString::Self *)hkClass::getName(a3);
  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v32, 12, v22);
  v7 = (uint32_t *)(v32 + 12 * v33);
  hkStringPtr::Construct((hkStringPtr::Self *)v7);
  hkStringPtr::Construct((hkStringPtr::Self *)(v7 + 1));
  v8 = v33;
  v7[2] = 0;
  v33 = v8 + 1;
  v9 = v32 + 12 * v8;
  hkStringPtr::opAssign((hkStringPtr::Self *)v9, Name);
  hkRefVariant::set((hkRefVariant::Self *)(v9 + 8), v29, v27);
  Class = hkRefVariant::getClass((hkRefVariant::Self *)(v9 + 8));
  v11 = nullptr;
  if ( Class != 0 )
  {
    v12 = (hkClass::Self *)hkRefVariant::getClass((hkRefVariant::Self *)(v9 + 8));
    v11 = (hkString::Self *)hkClass::getName(v12);
  }
  hkStringPtr::opAssign((hkStringPtr::Self *)(v9 + 4), v11);
  hkpHavokSnapshot::save(v24, (int)(uintptr_t)(&v32), (int)(uintptr_t)(&hkRootLevelContainerClass), v26, v25, v23, nullptr);
  v31 = v33 - 1;
  if ( v33 - 1 >= 0 )
  {
    v13 = (char *)(v32 + 12 * (v33 - 1));
    v28 = (hkClass::Self *)(-12 * v33 - v32);
    v30 = (unsigned int)(uintptr_t)(v13 + 8);
    do
    {
      v14 = &v13[(uint32_t)(uintptr_t)(v28)];
      v15 = *(uint32_t *)&v13[(uint32_t)(uintptr_t)(v28) + 12 + v30];
      if ( v15 != 0 && *(uint16_t *)(v15 + 6) != 0 )
      {
        do
        {
          v17 = *(uint32_t *)(v15 + 4);
          HIWORD(v16) = HIWORD(v17);
          LOWORD(v16) = 0;
          v18 = v16 | (uint16_t)(v17 - 1);
          v19 = v17;
        }
        while ( v19 != __sync_val_compare_and_swap((volatile int32_t *)(v15 + 4), v19, v18) );
        v14 = &v13[(uint32_t)(uintptr_t)(v28)];
        if ( (uint16_t)v18 == 0 )
          G4_VCALL<void>(v15, 16);
      }
      *(uint32_t *)&v14[v30 + 12] = 0;
      hkStringPtr::Destroy((hkStringPtr::Self *)(v13 + 4));
      v21 = (hkStringPtr::Self *)v13;
      v13 -= 12;
      hkStringPtr::Destroy(v21);
      --v31;
    }
    while ( v31 != -1 );
  }
  v33 = 0;
  if ( v34 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v32,
      12 * v34);
  return v24;
}

// ----------------------------------------------------------------------------
// Function: hkpHavokSnapshot::save  (binary VA: 0x18320f0)
// Original: hkpHavokSnapshot::save
// ----------------------------------------------------------------------------
bool * hkpHavokSnapshot::save(bool *a1, void *a2, int a3, char a4, int a5)
{
  hkpHavokSnapshot::saveUnderRootLevel(a1, a2, (hkClass::Self *)&hkpPhysicsDataClass, a3, a4, a5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpHavokSnapshot::save  (binary VA: 0x1832150)
// Original: hkpHavokSnapshot::save
// ----------------------------------------------------------------------------
bool * hkpHavokSnapshot::save(bool *a1, const hkpWorld::Self *a2, int a3, char a4, int a5, bool a6)
{
  const hkpWorld::Self *v6;
  bool *result;
  bool v8; // di
  typedef bool _g4_t_v9;
  typedef int _g4_t_v10;
  typedef bool *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef bool _g4_t_v14;
  typedef uint32_t _g4_t_v15[12];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (23u + sizeof(_g4_t_v14)) > _g4_s5 ? (23u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 23u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);

  v15[8] = (uint32_t)(uintptr_t)(&a1);
  v6 = a2;
  v13 = a4;
  result = a1;
  v12 = a5;
  if ( a2 != nullptr && a3 != 0 )
  {
    v10 = a3;
    v11 = a1;
    v9 = a6;
    hkpPhysicsData::Construct((hkpPhysicsData::Self *)v15);
    hkpPhysicsData::populateFromWorld((hkpPhysicsData::Self *)v15, v6, v9);
    hkpHavokSnapshot::save(&v14, v15, v10, v13, v12);
    v8 = v14;
    hkpPhysicsData::Destroy((hkpPhysicsData::Self *)v15);
    *v11 = v8;
    return v11;
  }
  else
  {
    *a1 = false;
  }
  return result;
}


