#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBreakab.h"

// ----------------------------------------------------------------------------
// Function: hkpBreakableBody::Controller::Destroy  (binary VA: 0x172b0e0)
// Original: hkpBreakableBody::Controller::~Controller
// ----------------------------------------------------------------------------
void hkpBreakableBody::Controller::Destroy(hkpBreakableBody::Controller::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableBody::Controller::Destroy_ea172b140  (binary VA: 0x172b140)
// Original: hkpBreakableBody::Controller::~Controller
// ----------------------------------------------------------------------------
void hkpBreakableBody::Controller::Destroy_ea172b140(hkpBreakableBody::Controller::Self *self)
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
// Function: hkpBreakableBody::Controller::staticClass  (binary VA: 0x172b1a0)
// Original: hkpBreakableBody::Controller::staticClass
// ----------------------------------------------------------------------------
void * hkpBreakableBody::Controller::staticClass()
{
  return &hkpBreakableBodyControllerClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableBody::staticClass  (binary VA: 0x172b1c0)
// Original: hkpBreakableBody::staticClass
// ----------------------------------------------------------------------------
void * hkpBreakableBody::staticClass()
{
  return &hkpBreakableBodyClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::staticClass  (binary VA: 0x172b990)
// Original: hkpBreakableConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpBreakableConstraintData::staticClass()
{
  return &hkpBreakableConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::getSubShapeMaterialIndex  (binary VA: 0x172f6e0)
// Original: hkpBreakableMaterial::getSubShapeMaterialIndex
// ----------------------------------------------------------------------------
int hkpBreakableMaterial::getSubShapeMaterialIndex()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::getShapeKeyMaterial  (binary VA: 0x172f6f0)
// Original: hkpBreakableMaterial::getShapeKeyMaterial
// ----------------------------------------------------------------------------
int hkpBreakableMaterial::getShapeKeyMaterial()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::convertShapeKeyToSubShapeId  (binary VA: 0x172f700)
// Original: hkpBreakableMaterial::convertShapeKeyToSubShapeId
// ----------------------------------------------------------------------------
unsigned int hkpBreakableMaterial::convertShapeKeyToSubShapeId(hkpBreakableMaterial::Self *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::convertShapeKeysToSubShapeIds  (binary VA: 0x172f710)
// Original: hkpBreakableMaterial::convertShapeKeysToSubShapeIds
// ----------------------------------------------------------------------------
void hkpBreakableMaterial::convertShapeKeysToSubShapeIds()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::disableSubShapes  (binary VA: 0x172f720)
// Original: hkpBreakableMaterial::disableSubShapes
// ----------------------------------------------------------------------------
void hkpBreakableMaterial::disableSubShapes()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::getShapeKeysForSubShapes  (binary VA: 0x172f730)
// Original: hkpBreakableMaterial::getShapeKeysForSubShapes
// ----------------------------------------------------------------------------
void hkpBreakableMaterial::getShapeKeysForSubShapes()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::getSubShapeMaterialIndices  (binary VA: 0x172f740)
// Original: hkpBreakableMaterial::getSubShapeMaterialIndices
// ----------------------------------------------------------------------------
void hkpBreakableMaterial::getSubShapeMaterialIndices()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::getClassType  (binary VA: 0x172f750)
// Original: hkpBreakableMultiMaterial::getClassType
// ----------------------------------------------------------------------------
void * hkpBreakableMultiMaterial::getClassType()
{
  return &hkpBreakableMultiMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::getNumSubMaterials  (binary VA: 0x172f770)
// Original: hkpBreakableMultiMaterial::getNumSubMaterials
// ----------------------------------------------------------------------------
int hkpBreakableMultiMaterial::getNumSubMaterials(hkpBreakableMultiMaterial::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::InverseMapping::Destroy  (binary VA: 0x172f780)
// Original: hkpBreakableMultiMaterial::InverseMapping::~InverseMapping
// ----------------------------------------------------------------------------
void hkpBreakableMultiMaterial::InverseMapping::Destroy(hkpBreakableMultiMaterial::InverseMapping::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EB80);
  v1 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v1);
  v2 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v2);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::InverseMapping::Destroy_ea172f830  (binary VA: 0x172f830)
// Original: hkpBreakableMultiMaterial::InverseMapping::~InverseMapping
// ----------------------------------------------------------------------------
void hkpBreakableMultiMaterial::InverseMapping::Destroy_ea172f830(hkpBreakableMultiMaterial::InverseMapping::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EB80);
  v1 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v1);
  v2 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v2);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::Destroy  (binary VA: 0x172f910)
// Original: hkpBreakableMultiMaterial::~hkpBreakableMultiMaterial
// ----------------------------------------------------------------------------
void hkpBreakableMultiMaterial::Destroy(hkpBreakableMultiMaterial::Self *self)
{
  hkpBreakableMultiMaterial::Self *v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;

  v1 = self;
  v2 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EBA8);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 8) = 0;
  v8 = v7 - 1;
  v9 = *((uint32_t *)self + 5);
  if ( v8 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v9 + 4 * v8);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v16 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v16;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v9 + 4 * v8--) = 0;
    }
    while ( v8 != -1 );
    v1 = self;
  }
  v15 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 5),
      4 * v15);
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 7) = 0x80000000;
  hkpBreakableMaterial::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::Destroy_ea172fa30  (binary VA: 0x172fa30)
// Original: hkpBreakableMultiMaterial::~hkpBreakableMultiMaterial
// ----------------------------------------------------------------------------
void hkpBreakableMultiMaterial::Destroy_ea172fa30(hkpBreakableMultiMaterial::Self *self)
{
  hkpBreakableMultiMaterial::Self *v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;
  int v17;
  int v18;

  v1 = self;
  v2 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EBA8);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 8) = 0;
  v8 = v7 - 1;
  v9 = *((uint32_t *)self + 5);
  if ( v8 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v9 + 4 * v8);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v18 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v18;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v9 + 4 * v8--) = 0;
    }
    while ( v8 != -1 );
    v1 = self;
  }
  v15 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 5),
      4 * v15);
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 7) = 0x80000000;
  hkpBreakableMaterial::Destroy(v1);
  v16 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v17 = 36;
  if ( *((uint16_t *)v1 + 3) != 0xFFFF )
    v17 = *((uint16_t *)v1 + 3);
  G4_VCALL<void>(v16, 12, v1, v17);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::Construct  (binary VA: 0x172fb90)
// Original: hkpBreakableMultiMaterial::hkpBreakableMultiMaterial
// ----------------------------------------------------------------------------
uint32_t * hkpBreakableMultiMaterial::Construct(uint32_t *a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int32_t v13; // kr00_4
  int32_t v14;
  int32_t v15; // ett
  uint32_t *result;
  int v17;
  int v18;
  int v19;
  int32_t v20; // kr04_4
  int32_t v21;
  int32_t v22; // ett
  int v23;
  int v24;
  int32_t v25; // kr08_4
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t _g4_t_v32[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v30)) > _g4_s4 ? (16u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v32)) > _g4_s6 ? (24u + sizeof(_g4_t_v32)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);

  v32[3] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v4 = a2;
  v29 = a1;
  v5 = a1;
  a1[2] = a3;
  v28 = v4;
  v3[1] = -65535;
  v3[3] = 2;
  v3[4] = 0;
  v5[5] = 0;
  *v5 = ((uint32_t)(uintptr_t)&off_209EBA8);
  v5[6] = 0;
  v5[7] = 0x80000000;
  v5[8] = 0;
  v6 = v4[1];
  v30 = v6;
  if ( v6 <= 0 )
  {
    v8 = 0;
    v7 = 0;
  }
  else
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)v32, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v29 + 5, v6, 4);
    v7 = v29[6];
    v8 = v29[5];
  }
  v9 = v8 + 4 * v30;
  v10 = v7 - v30 - 1;
  if ( v10 >= 0 )
  {
    do
    {
      v11 = *(uint32_t *)(v9 + 4 * v10);
      if ( v11 != 0 && *(uint16_t *)(v11 + 6) != 0 )
      {
        v27 = v9;
        do
        {
          v13 = *(uint32_t *)(v11 + 4);
          HIWORD(v12) = HIWORD(v13);
          LOWORD(v12) = 0;
          v14 = v12 | (uint16_t)(v13 - 1);
          v15 = v13;
        }
        while ( v15 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v15, v14) );
        v9 = v27;
        if ( (uint16_t)v14 == 0 )
          G4_VCALL<void>(v11, 16);
      }
      *(uint32_t *)(v9 + 4 * v10--) = 0;
    }
    while ( v10 != -1 );
    v7 = v29[6];
    v8 = v29[5];
  }
  if ( v30 - v7 > 0 )
    memset((void *)(v8 + 4 * v7), 0, 4 * (v30 - v7));
  result = (uint32_t *)v30;
  v17 = 0;
  v29[6] = v30;
  if ( v30 > 0 )
  {
    do
    {
      v23 = *(uint32_t *)(*v28 + 4 * v17);
      v31 = (uint32_t *)(v29[5] + 4 * v17);
      if ( v23 != 0 && *(uint16_t *)(v23 + 6) != 0 )
      {
        do
        {
          v25 = *(uint32_t *)(v23 + 4);
          HIWORD(v24) = HIWORD(v25);
          LOWORD(v24) = 0;
        }
        while ( v25 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v23 + 4),
                         v25,
                         v24 | (uint16_t)(v25 + 1)) );
      }
      v18 = *v31;
      if ( *v31 != 0 && *(uint16_t *)(v18 + 6) != 0 )
      {
        v26 = v23;
        do
        {
          v20 = *(uint32_t *)(v18 + 4);
          HIWORD(v19) = HIWORD(v20);
          LOWORD(v19) = 0;
          v21 = v19 | (uint16_t)(v20 - 1);
          v22 = v20;
        }
        while ( v22 != __sync_val_compare_and_swap((volatile int32_t *)(v18 + 4), v22, v21) );
        v23 = v26;
        if ( (uint16_t)v21 == 0 )
          G4_VCALL<void>(v18, 16);
      }
      result = v31;
      ++v17;
      *v31 = v23;
    }
    while ( v17 != v30 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::Construct  (binary VA: 0x172fdd0)
// Original: hkpBreakableMultiMaterial::hkpBreakableMultiMaterial
// ----------------------------------------------------------------------------
void hkpBreakableMultiMaterial::Construct(hkpBreakableMultiMaterial::Self *self, const hkpBreakableMultiMaterial::Self *a2)
{
  hkpBreakableMultiMaterial::Self *v2;
  const hkpBreakableMultiMaterial::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int32_t v15; // kr00_4
  int32_t v16;
  int32_t v17; // ett
  int v18;
  int v19;
  int v20;
  int32_t v21; // kr04_4
  int32_t v22;
  int32_t v23; // ett
  uint32_t *v24;
  int v25;
  int i;
  int32_t v27;
  int v28;
  int v29;
  int32_t v30; // kr08_4
  typedef uint32_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef const hkpBreakableMultiMaterial::Self *_g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int *_g4_t_v38;
  typedef uint32_t _g4_t_v39[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v32)) > _g4_s1 ? (0u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v33)) > _g4_s2 ? (4u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v34)) > _g4_s3 ? (8u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v35)) > _g4_s4 ? (12u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v36)) > _g4_s5 ? (16u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v37)) > _g4_s6 ? (16u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v38)) > _g4_s7 ? (20u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v39)) > _g4_s8 ? (24u + sizeof(_g4_t_v39)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);

  v39[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v35 = (int *)self;
  v3 = a2;
  v34 = a2;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_209EDE8);
  *((uint32_t *)v2 + 2) = *((uint32_t *)v3 + 2);
  *((uint32_t *)v2 + 3) = *((uint32_t *)v3 + 3);
  *((uint32_t *)v2 + 4) = *((uint32_t *)v3 + 4);
  *((uint32_t *)v2 + 5) = 0;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_209EBA8);
  *((uint32_t *)v2 + 6) = 0;
  *((uint32_t *)v2 + 7) = 0x80000000;
  v4 = *((uint32_t *)v3 + 8);
  if ( v4 != 0 )
  {
    v5 = 0;
    v6 = *((uint32_t *)v3 + 8);
    if ( *(uint16_t *)(v4 + 6) != 0 )
    {
      do
      {
        v30 = *(uint32_t *)(v4 + 4);
        HIWORD(v29) = HIWORD(v30);
        LOWORD(v29) = 0;
      }
      while ( v30 != __sync_val_compare_and_swap(
                       (volatile int32_t *)(v4 + 4),
                       v30,
                       v29 | (uint16_t)(v30 + 1)) );
      v6 = *((uint32_t *)v34 + 8);
      v5 = v35[7] & 0x3FFFFFFF;
    }
  }
  else
  {
    v5 = 0;
    v6 = 0;
  }
  v35[8] = v6;
  v7 = *((uint32_t *)v34 + 6);
  v33 = v7;
  if ( v7 > v5 )
  {
    v8 = 2 * v5;
    if ( v8 < v7 )
      v8 = *((uint32_t *)v34 + 6);
    hkArrayUtil::reserve((hkArrayUtil::Self *)v39, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v35 + 5, v8, 4);
  }
  v9 = v35[6];
  v10 = v35[5];
  v11 = 4 * v33 + v10;
  v12 = v9 - v33 - 1;
  if ( v12 >= 0 )
  {
    do
    {
      v13 = *(uint32_t *)(v11 + 4 * v12);
      if ( v13 != 0 && *(uint16_t *)(v13 + 6) != 0 )
      {
        v36 = v11;
        do
        {
          v15 = *(uint32_t *)(v13 + 4);
          HIWORD(v14) = HIWORD(v15);
          LOWORD(v14) = 0;
          v16 = v14 | (uint16_t)(v15 - 1);
          v17 = v15;
        }
        while ( v17 != __sync_val_compare_and_swap((volatile int32_t *)(v13 + 4), v17, v16) );
        v11 = v36;
        if ( (uint16_t)v16 == 0 )
          G4_VCALL<void>(v13, 16);
      }
      *(uint32_t *)(v11 + 4 * v12--) = 0;
    }
    while ( v12 != -1 );
    v9 = v35[6];
    v10 = v35[5];
  }
  if ( v33 - v9 > 0 )
    memset((void *)(v10 + 4 * v9), 0, 4 * (v33 - v9));
  v35[6] = v33;
  v37 = v33 - 1;
  if ( v33 - 1 >= 0 )
  {
    v18 = 4 * v33 - 4;
    do
    {
      v24 = (uint32_t *)(v18 + *((uint32_t *)v34 + 5));
      v38 = (int *)(v18 + v35[5]);
      v25 = *v24;
      if ( *v24 != 0 && *(uint16_t *)(v25 + 6) != 0 )
      {
        v32 = *v24;
        for ( i = *v24; ; i = v32 )
        {
          v27 = *(uint32_t *)(i + 4);
          HIWORD(v28) = HIWORD(v27);
          LOWORD(v28) = 0;
          if ( v27 == __sync_val_compare_and_swap(
                        (volatile int32_t *)(v25 + 4),
                        v27,
                        v28 | (uint16_t)(v27 + 1)) )
            break;
        }
      }
      v19 = *v38;
      if ( *v38 != 0 && *(uint16_t *)(v19 + 6) != 0 )
      {
        v31 = v24;
        do
        {
          v21 = *(uint32_t *)(v19 + 4);
          HIWORD(v20) = HIWORD(v21);
          LOWORD(v20) = 0;
          v22 = v20 | (uint16_t)(v21 - 1);
          v23 = v21;
        }
        while ( v23 != __sync_val_compare_and_swap((volatile int32_t *)(v19 + 4), v23, v22) );
        v24 = v31;
        if ( (uint16_t)v22 == 0 )
          G4_VCALL<void>(v19, 16);
      }
      --v37;
      v18 -= 4;
      *v38 = *v24;
    }
    while ( v37 != -1 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::InverseMapping::Construct  (binary VA: 0x1730090)
// Original: hkpBreakableMultiMaterial::InverseMapping::InverseMapping
// ----------------------------------------------------------------------------
hkpBreakableMultiMaterial::InverseMapping::Self * hkpBreakableMultiMaterial::InverseMapping::Construct(hkpBreakableMultiMaterial::InverseMapping::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EB80);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::Construct  (binary VA: 0x17300e0)
// Original: hkpBreakableMultiMaterial::hkpBreakableMultiMaterial
// ----------------------------------------------------------------------------
uint32_t * hkpBreakableMultiMaterial::Construct(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_209EBA8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::InverseMapping::Construct  (binary VA: 0x1730100)
// Original: hkpBreakableMultiMaterial::InverseMapping::InverseMapping
// ----------------------------------------------------------------------------
uint32_t * hkpBreakableMultiMaterial::InverseMapping::Construct(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_209EB80);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::findSubMaterial  (binary VA: 0x1730120)
// Original: hkpBreakableMultiMaterial::findSubMaterial
// ----------------------------------------------------------------------------
int hkpBreakableMultiMaterial::findSubMaterial(hkpBreakableMultiMaterial::Self *self, const hkpBreakableMaterial::Self *a2)
{
  int result;
  int v3;

  result = *((uint32_t *)self + 6) - 1;
  if ( result < 0 )
    return -1;
  v3 = *((uint32_t *)self + 5);
  if ( a2 != *(const hkpBreakableMaterial::Self **)(v3 + 4 * result) )
  {
    do
      --result;
    while ( result != -1 && a2 != *(const hkpBreakableMaterial::Self **)(v3 + 4 * result) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::createInverseMapping  (binary VA: 0x1730170)
// Original: hkpBreakableMultiMaterial::createInverseMapping
// ----------------------------------------------------------------------------
const hkcdShape::Self * hkpBreakableMultiMaterial::createInverseMapping(hkpBreakableMultiMaterial::Self *self, const hkcdShape::Self *a2)
{
  hkpBreakableMultiMaterial::Self *v2;
  const hkcdShape::Self *result;
  int address;
  int *v5;
  volatile int32_t *v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  hkpBreakableMultiMaterial::Self *v18;
  const hkpBreakableMaterial::Self *v19;
  int SubMaterial;
  uint16_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint16_t *v32;
  int v33;
  int v34;
  uint16_t *v35;
  uint16_t *v36;
  uint16_t *v37;
  int v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint16_t *_g4_t_v42;
  typedef const hkcdShape::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int *_g4_t_v46;
  typedef const hkcdShape::Self *_g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef hkpBreakableMultiMaterial::Self *_g4_t_v53;
  typedef hkpBreakableMultiMaterial::Self *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef const hkcdShape::Self *_g4_t_v56;
  typedef uint32_t _g4_t_v57[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v40)) > _g4_s1 ? (4u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v41)) > _g4_s2 ? (16u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v42)) > _g4_s3 ? (20u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v43)) > _g4_s4 ? (24u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v44)) > _g4_s5 ? (28u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v45)) > _g4_s6 ? (28u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v46)) > _g4_s7 ? (28u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v47)) > _g4_s8 ? (32u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v48)) > _g4_s9 ? (36u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v49)) > _g4_s10 ? (36u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v50)) > _g4_s11 ? (40u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v51)) > _g4_s12 ? (44u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v52)) > _g4_s13 ? (44u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v53)) > _g4_s14 ? (48u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v54)) > _g4_s15 ? (48u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v55)) > _g4_s16 ? (52u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v56)) > _g4_s17 ? (52u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v57)) > _g4_s18 ? (56u + sizeof(_g4_t_v57)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);

  v57[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v53 = self;
  result = a2;
  v47 = a2;
  if ( a2 == nullptr )
    return result;
  result = (const hkcdShape::Self *)G4_VCALL<int>(a2, 64);
  v43 = result;
  if ( result == nullptr )
    return result;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (int *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                *(uint32_t *)(*(uint32_t *)address + 44),
                32);
  hkpBreakableMultiMaterial::InverseMapping::Construct((hkpBreakableMultiMaterial::InverseMapping::Self *)v5);
  v6 = *((volatile int32_t **)v2 + 8);
  if ( v6 != nullptr && v5 != v6 && *((uint16_t *)v6 + 3) != 0 )
  {
    do
    {
      v8 = *((uint32_t *)v6 + 1);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap(v6 + 1, v10, v9) );
    if ( (uint16_t)v9 == 0 )
      G4_VCALL<void>(v6, 16);
  }
  v11 = *((uint32_t *)v53 + 6);
  *((uint32_t *)v53 + 8) = (uint32_t)(uintptr_t)(v5);
  v12 = v5[4] & 0x3FFFFFFF;
  if ( v11 > v12 )
  {
    v34 = 2 * v12;
    if ( v34 < v11 )
      v34 = v11;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v57, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v5 + 2, v34, 4);
  }
  v13 = v5[3];
  v14 = v11 - v13;
  v51 = v5[2] + 4 * v13;
  if ( v11 - v13 > 0 )
  {
    v15 = v14 >> 2;
    v55 = 4 * (v14 >> 2);
    if ( v55 != 0 && v14 > 3 )
    {
      v16 = 0;
      v48 = v14;
      do
      {
        v17 = v16++;
        *(__m128i *)(v51 + 16 * v17) = g4_m128_from<__m128i>(0LL);
      }
      while ( v15 > v16 );
      v14 = v48;
      if ( v55 == v48 )
        goto LABEL_16;
    }
    else
    {
      v55 = 0;
    }
    v35 = (uint16_t *)(v51 + 4 * v55);
    *v35 = 0;
    v35[1] = 0;
    if ( (int)v14 > v55 + 1 )
    {
      v36 = (uint16_t *)(v51 + 4 * (v55 + 1));
      *v36 = 0;
      v36[1] = 0;
      if ( v55 + 2 < (int)v14 )
      {
        v37 = (uint16_t *)(v51 + 4 * (v55 + 2));
        *v37 = 0;
        v37[1] = 0;
      }
    }
  }
LABEL_16:
  v5[3] = v11;
  result = (const hkcdShape::Self *)G4_VCALL<int>(v43, 12);
  v56 = result;
  if ( result != (const hkcdShape::Self *)-1 )
  {
    v50 = v5;
    v18 = v53;
    do
    {
      v54 = (hkpBreakableMultiMaterial::Self *)G4_VCALL<int>(v18, 40, v56);
      v19 = (const hkpBreakableMaterial::Self *)G4_VCALL<int>(v18, 36, v47, v56);
      SubMaterial = hkpBreakableMultiMaterial::findSubMaterial(v18, v19);
      v52 = SubMaterial;
      if ( SubMaterial >= 0 )
      {
        v21 = (uint16_t *)(v50[2] + 4 * SubMaterial);
        v42 = v21;
        v44 = v21[1];
        if ( v21[1] == 0 )
        {
          v49 = v44 + *v21;
          v46 = v50 + 5;
          v38 = v50[6];
          v27 = v38 - v49;
          v28 = v38 + 1;
          v29 = v50[7] & 0x3FFFFFFF;
          if ( v29 < v28 )
            goto LABEL_31;
          v41 = v50[5];
LABEL_25:
          v45 = v28;
          hkMemUtil::memMove((hkMemUtil::Self *)(v41 + 4 * v49 + 4), (char *)(4 * v49 + v41), 4 * v27);
          *(uint32_t *)(v50[5] + 4 * v49) = (uint32_t)(uintptr_t)(v54);
          v50[6] = v45;
          v30 = v11 - 1;
          ++v42[1];
          if ( v52 < v11 - 1 )
          {
            v31 = 4 * (v11 - 1);
            do
            {
              --v30;
              v32 = (uint16_t *)(v50[2] + v31);
              v31 -= 4;
              ++*v32;
            }
            while ( v30 != v52 );
          }
          goto LABEL_28;
        }
        v22 = *v21;
        v23 = v50[5];
        v41 = v23;
        if ( v54 != *(hkpBreakableMultiMaterial::Self **)(v23 + 4 * (v22 + v44 - 1)) )
        {
          v24 = v23 + 4 * v22;
          v25 = v44 - 1;
          while ( --v25 != -1 )
          {
            if ( v54 == *(hkpBreakableMultiMaterial::Self **)(v24 + 4 * v25) )
              goto LABEL_28;
          }
          v49 = v44 + v22;
          v26 = v50[6];
          v27 = v26 - v49;
          v28 = v26 + 1;
          v29 = v50[7] & 0x3FFFFFFF;
          if ( v28 <= v29 )
            goto LABEL_25;
          v46 = v50 + 5;
LABEL_31:
          v33 = 2 * v29;
          v39 = v27;
          if ( v33 < v28 )
            v33 = v28;
          v40 = v28;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v57,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v46,
            v33,
            4);
          v27 = v39;
          v28 = v40;
          v41 = v50[5];
          goto LABEL_25;
        }
      }
LABEL_28:
      result = (const hkcdShape::Self *)G4_VCALL<int>(v43, 16, v56);
      v56 = result;
    }
    while ( result != (const hkcdShape::Self *)-1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::InverseMappingDescriptor::staticClass  (binary VA: 0x1730dd0)
// Original: hkpBreakableMultiMaterial::InverseMappingDescriptor::staticClass
// ----------------------------------------------------------------------------
void * hkpBreakableMultiMaterial::InverseMappingDescriptor::staticClass()
{
  return &hkpBreakableMultiMaterialInverseMappingDescriptorClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::InverseMapping::staticClass  (binary VA: 0x1730df0)
// Original: hkpBreakableMultiMaterial::InverseMapping::staticClass
// ----------------------------------------------------------------------------
void * hkpBreakableMultiMaterial::InverseMapping::staticClass()
{
  return &hkpBreakableMultiMaterialInverseMappingClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMultiMaterial::staticClass  (binary VA: 0x1730e10)
// Original: hkpBreakableMultiMaterial::staticClass
// ----------------------------------------------------------------------------
void * hkpBreakableMultiMaterial::staticClass()
{
  return &hkpBreakableMultiMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::ShapeKeyCollector::Destroy  (binary VA: 0x1731160)
// Original: hkpBreakableMaterial::ShapeKeyCollector::~ShapeKeyCollector
// ----------------------------------------------------------------------------
void hkpBreakableMaterial::ShapeKeyCollector::Destroy(hkpBreakableMaterial::ShapeKeyCollector::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EDB0);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::createInverseMapping  (binary VA: 0x1731180)
// Original: hkpBreakableMaterial::createInverseMapping
// ----------------------------------------------------------------------------
void hkpBreakableMaterial::createInverseMapping()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::getNumSubMaterials  (binary VA: 0x1731190)
// Original: hkpBreakableMaterial::getNumSubMaterials
// ----------------------------------------------------------------------------
int hkpBreakableMaterial::getNumSubMaterials()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::ShapeKeyCollector::addShapeKeyBatch  (binary VA: 0x17311a0)
// Original: hkpBreakableMaterial::ShapeKeyCollector::addShapeKeyBatch
// ----------------------------------------------------------------------------
int hkpBreakableMaterial::ShapeKeyCollector::addShapeKeyBatch(hkpBreakableMaterial::ShapeKeyCollector::Self *self, const unsigned int *a2, int a3)
{
  int v3;
  int result;
  unsigned int v5;

  v3 = 0;
  result = a3;
  if ( a3 > 0 )
  {
    do
    {
      v5 = a2[v3++];
      result = G4_VCALL<int>(self, 8, v5);
    }
    while ( v3 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::ShapeKeyCollector::addContiguousShapeKeyRange  (binary VA: 0x17311f0)
// Original: hkpBreakableMaterial::ShapeKeyCollector::addContiguousShapeKeyRange
// ----------------------------------------------------------------------------
int hkpBreakableMaterial::ShapeKeyCollector::addContiguousShapeKeyRange(hkpBreakableMaterial::ShapeKeyCollector::Self *self, unsigned int a2, int a3)
{
  int v3;
  unsigned int v4;
  int result;

  v3 = 0;
  if ( a3 > 0 )
  {
    do
    {
      v4 = v3++ | a2;
      result = G4_VCALL<int>(self, 8, v4);
    }
    while ( v3 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::setDefaultMapping  (binary VA: 0x1731240)
// Original: hkpBreakableMaterial::setDefaultMapping
// ----------------------------------------------------------------------------
hkpBreakableMaterial::Self * hkpBreakableMaterial::setDefaultMapping(hkpBreakableMaterial::Self *self)
{
  *((uint32_t *)self + 3) &= 0xFFFFFF0F;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::Destroy  (binary VA: 0x1731250)
// Original: hkpBreakableMaterial::~hkpBreakableMaterial
// ----------------------------------------------------------------------------
void hkpBreakableMaterial::Destroy(hkpBreakableMaterial::Self *self)
{
  hkRefCountedProperties::Self *v1;
  int address;

  v1 = *((hkRefCountedProperties::Self **)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EDE8);
  if ( v1 != nullptr && *((uint16_t *)self + 3) != 0 )
  {
    hkRefCountedProperties::Destroy(v1);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, hkRefCountedProperties::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v1,
      12);
  }
  *((uint32_t *)self + 4) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::Destroy_ea17312d0  (binary VA: 0x17312d0)
// Original: hkpBreakableMaterial::~hkpBreakableMaterial
// ----------------------------------------------------------------------------
void hkpBreakableMaterial::Destroy_ea17312d0(hkpBreakableMaterial::Self *self)
{
  int v1;
  int v2;

  hkpBreakableMaterial::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::ShapeKeyCollector::Destroy_ea1731330  (binary VA: 0x1731330)
// Original: hkpBreakableMaterial::ShapeKeyCollector::~ShapeKeyCollector
// ----------------------------------------------------------------------------
void hkpBreakableMaterial::ShapeKeyCollector::Destroy_ea1731330(hkpBreakableMaterial::ShapeKeyCollector::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EDB0);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpBreakableMaterial::ShapeKeyCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44)
                                                                              + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    4);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableShape::Destroy  (binary VA: 0x1753120)
// Original: hkpBreakableShape::~hkpBreakableShape
// ----------------------------------------------------------------------------
void hkpBreakableShape::Destroy(hkpBreakableShape::Self *self)
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

  v1 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FA60);
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
  v6 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 3) = 0;
  if ( v6 != 0 && *(uint16_t *)(v6 + 6) != 0 )
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
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableShape::Destroy_ea17531e0  (binary VA: 0x17531e0)
// Original: hkpBreakableShape::~hkpBreakableShape
// ----------------------------------------------------------------------------
void hkpBreakableShape::Destroy_ea17531e0(hkpBreakableShape::Self *self)
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
  int v11;
  int v12;

  v1 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FA60);
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
  v6 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 3) = 0;
  if ( v6 != 0 && *(uint16_t *)(v6 + 6) != 0 )
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
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v11 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v12 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v12 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v11, 12, self, v12);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableShape::staticClass  (binary VA: 0x17532e0)
// Original: hkpBreakableShape::staticClass
// ----------------------------------------------------------------------------
void * hkpBreakableShape::staticClass()
{
  return &hkpBreakableShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableMaterial::staticClass  (binary VA: 0x17533d0)
// Original: hkpBreakableMaterial::staticClass
// ----------------------------------------------------------------------------
void * hkpBreakableMaterial::staticClass()
{
  return &hkpBreakableMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::isBuildJacobianCallbackRequired  (binary VA: 0x17667a0)
// Original: hkpBreakableConstraintData::isBuildJacobianCallbackRequired
// ----------------------------------------------------------------------------
hkpBreakableConstraintData::Self * hkpBreakableConstraintData::isBuildJacobianCallbackRequired(hkpBreakableConstraintData::Self *self)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::getConstraintInfo  (binary VA: 0x17667b0)
// Original: hkpBreakableConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
int hkpBreakableConstraintData::getConstraintInfo(int a1, int a2)
{
  (*(void (**)(uint32_t, int))(**(uint32_t **)(a1 + 12) + 24))(*(uint32_t *)(a1 + 12), a2);
  *(uint32_t *)(a2 + 16) = a1 + 16;
  *(uint32_t *)(a2 + 20) = 16;
  return 16;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::getRuntimeInfo  (binary VA: 0x17667f0)
// Original: hkpBreakableConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpBreakableConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  a3[1] = *(uint16_t *)(a1 + 34);
  *a3 = *(uint16_t *)(a1 + 32) + 52;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::getType  (binary VA: 0x1766810)
// Original: hkpBreakableConstraintData::getType
// ----------------------------------------------------------------------------
int hkpBreakableConstraintData::getType()
{
  return 12;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::Destroy  (binary VA: 0x1766820)
// Original: hkpBreakableConstraintData::~hkpBreakableConstraintData
// ----------------------------------------------------------------------------
void hkpBreakableConstraintData::Destroy(hkpBreakableConstraintData::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1F88);
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
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::Destroy_ea17668a0  (binary VA: 0x17668a0)
// Original: hkpBreakableConstraintData::~hkpBreakableConstraintData
// ----------------------------------------------------------------------------
void hkpBreakableConstraintData::Destroy_ea17668a0(hkpBreakableConstraintData::Self *self)
{
  int v1;
  int v2;

  hkpBreakableConstraintData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::Construct  (binary VA: 0x1766900)
// Original: hkpBreakableConstraintData::hkpBreakableConstraintData
// ----------------------------------------------------------------------------
void hkpBreakableConstraintData::Construct(hkpBreakableConstraintData::Self *self, hkpConstraintData::Self *a2)
{
  int v2;
  typedef hkpConstraintData::Self *_g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v4)) > _g4_s1 ? (24u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v5)) > _g4_s2 ? (28u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  hkpWrappedConstraintData::Construct(self, a2);
  *((uint16_t *)self + 8) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0068);
  v2 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 9) = 1092616192;
  *((uint8_t *)self + 40) = 0;
  *((uint8_t *)self + 41) = 0;
  LOBYTE(v3) = 1;
  G4_VCALL<void>(v2, 76, v3, &v4);
  *((uint16_t *)self + 16) = v4;
  *((uint16_t *)self + 17) = v5;
  hkpBridgeConstraintAtom::init((hkpBreakableConstraintData::Self *)((char *)self + 16), self);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::deepClone  (binary VA: 0x1766990)
// Original: hkpBreakableConstraintData::deepClone
// ----------------------------------------------------------------------------
int hkpBreakableConstraintData::deepClone(hkpBreakableConstraintData::Self *self)
{
  hkpConstraintDataUtils::Self *v1;
  int v2;
  int address;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  hkpConstraintData::Self *v10;

  v1 = (hkpConstraintDataUtils::Self *)G4_VCALL<int>(self, 100);
  v2 = hkpConstraintDataUtils::deepClone(v1, v10);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v4 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         48);
  hkpBreakableConstraintData::Construct((hkpBreakableConstraintData::Self *)v4, (hkpConstraintData::Self *)v2);
  if ( *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v6 = *(uint32_t *)(v2 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
    }
    while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v8, v7) );
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  *(uint32_t *)(v4 + 36) = *((uint32_t *)self + 9);
  *(uint8_t *)(v4 + 40) = *((uint8_t *)self + 40);
  *(uint8_t *)(v4 + 41) = *((uint8_t *)self + 41);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::postFinish  (binary VA: 0x1766a50)
// Original: hkpBreakableConstraintData::postFinish
// ----------------------------------------------------------------------------
int hkpBreakableConstraintData::postFinish(hkpBreakableConstraintData::Self *self)
{
  int result;
  typedef char _g4_t_v2;
  typedef uint32_t _g4_t_v3[2];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v2)) > _g4_s0 ? (4u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v3)) > _g4_s1 ? (24u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 24u);

  result = *((uint32_t *)self + 3);
  *((uint16_t *)self + 16) = 0;
  *((uint16_t *)self + 17) = 0;
  if ( result != 0 )
  {
    v2 = 1;
    G4_VCALL<void>(result, 76, v2, v3);
    *((uint16_t *)self + 16) = v3[0];
    result = v3[1];
    *((uint16_t *)self + 17) = v3[1];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::Construct  (binary VA: 0x1766aa0)
// Original: hkpBreakableConstraintData::hkpBreakableConstraintData
// ----------------------------------------------------------------------------
hkpBridgeConstraintAtom::Self * hkpBreakableConstraintData::Construct(hkpConstraintData::Self **a1, int a2)
{
  hkpBridgeConstraintAtom::Self *result;

  hkpWrappedConstraintData::Construct((uint32_t *)a1);
  result = (hkpBridgeConstraintAtom::Self *)((uint32_t)(uintptr_t)&off_20A0068);
  *a1 = (hkpConstraintData::Self *)((uint32_t)(uintptr_t)&off_20A0068);
  if ( a2 != 0 )
  {
    hkpBridgeConstraintAtom::init((hkpBridgeConstraintAtom::Self *)(a1 + 4), a1[6]);
    return hkpBridgeConstraintAtom::init((hkpBridgeConstraintAtom::Self *)(a1 + 4), (hkpConstraintData::Self *)a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::setBroken  (binary VA: 0x1766b10)
// Original: hkpBreakableConstraintData::setBroken
// ----------------------------------------------------------------------------
uint8_t * hkpBreakableConstraintData::setBroken(int a1, int a2, char a3, int a4)
{
  uint8_t *result;
  int v5;
  int v6;
  int v7;
  int v8; // xmm0_4
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef void *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  result = (uint8_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 48) + 28) + *(uint16_t *)(a1 + 32));
  if ( (*result != 0) != (a3 != 0) )
  {
    *result = a3;
    v5 = *(uint32_t *)(a2 + 48);
    if ( a3 != 0 )
    {
      *(uint8_t *)(v5 + 18) &= ~4u;
      v7 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 24);
      v10 = a2;
      v11 = &hkpBreakableConstraintDataClass;
      v13 = a4;
      v9 = v7;
      v8 = *(uint32_t *)(a1 + 36);
      v12 = 0;
      v14 = v8;
      if ( *(uint16_t *)(a2 + 36) != 0 )
        hkpConstraintCallbackUtil::fireConstraintBroken(&v9);
      return (uint8_t *)hkpWorldCallbackUtil::fireConstraintBroken(v7, &v9);
    }
    else
    {
      *(uint8_t *)(v5 + 18) |= 4u;
      v6 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 24);
      v10 = a2;
      v11 = &hkpBreakableConstraintDataClass;
      v9 = v6;
      v12 = 0;
      if ( *(uint16_t *)(a2 + 36) != 0 )
        hkpConstraintCallbackUtil::fireConstraintRepaired(&v9);
      return (uint8_t *)hkpWorldCallbackUtil::fireConstraintRepaired(v6, &v9);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::buildJacobianCallback  (binary VA: 0x1766c50)
// Original: hkpBreakableConstraintData::buildJacobianCallback
// ----------------------------------------------------------------------------
int hkpBreakableConstraintData::buildJacobianCallback(int a1, uint32_t *a2, int a3)
{
  int v3;
  int result;
  int v5;
  float v6; // xmm2_4
  int v7;
  __m128i v8;
  float v9; // xmm0_4
  float v10; // xmm3_4
  int v11; // xmm4_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float *v14;
  int v15;
  int v16; // xmm1_4
  float v17; // xmm6_4
  float *v18;
  float *v19;
  float v20; // xmm1_4
  float v21; // xmm7_4
  float v22; // xmm5_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float *v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;

  v3 = *(uint32_t *)(a3 + 4);
  result = a1;
  v5 = *(uint16_t *)(a1 + 34);
  if ( *(uint8_t *)(*(uint16_t *)(a1 + 32) + v3) == 0 )
  {
    if ( *(uint16_t *)(a1 + 34) == 0 )
      return result;
    v6 = 0.0;
    v7 = 0;
g4_m128_raw(v8) = 0;
    do
    {
      v9 = *(float *)(v3 + v7);
      v7 += 8;
      *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8) + (float)(v9 * v9);
    }
    while ( v7 != 8 * v5 );
    v10 = *(float *)(a1 + 36);
    if ( *(float *)g4_m128_ptr<int32_t>(v8) > (float)(v10 * v10) )
    {
      if ( *(float *)g4_m128_ptr<int32_t>(v8) > 0.0 )
      {
        v11 = ((_mm_cvtsi128_si32(v8) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v8) >> 1));
        v12 = (float)(*(float *)&v11 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * *(float *)&v11)
                    * (float)(*(float *)&v11 * *(float *)&v11));
        v13 = (float)(v12 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * v12) * (float)(v12 * v12));
        v6 = (float)((float)(1.5 * v13)
                   - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * v13) * (float)(v13 * v13)))
           * *(float *)g4_m128_ptr<int32_t>(v8);
      }
      v44 = (float *)(*(uint16_t *)(a1 + 32) + v3);
      hkpBreakableConstraintData::setBroken(a1, a2[19], 1, SLODWORD(v6));
      v14 = v44;
      if ( *(uint8_t *)(a1 + 41) != 0 )
      {
        v15 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v6)));
        v16 = (2130706432 - v15) & ((v15 ^ (v15 + 2139095040)) >> 31);
        v17 = v44[2];
        v18 = (float *)a2[12];
        v19 = (float *)a2[13];
        v20 = (float)(2.0 - (float)(v6 * (float)((float)(2.0 - (float)(v6 * *(float *)&v16)) * *(float *)&v16)))
            * (float)((float)(2.0 - (float)(v6 * *(float *)&v16)) * *(float *)&v16);
        v21 = v44[1];
        v47 = v44[3];
        v42 = v44[4];
        v22 = v44[6];
        v23 = 2.0 - (float)(v6 * v20);
        v41 = v44[7];
        v39 = v44[10];
        v24 = v18[6] - v47;
        v40 = v44[8];
        v25 = (float)(v23 * v20) * v10;
        v46 = v44[5];
        v26 = v44[11];
        v45 = v44[9];
        v38 = v26;
        v43 = v14[12];
        v27 = (float)(v18[5] - v17) * v25;
        v28 = (float)(v18[7] - v48) * v25;
        v18[4] = (float)((float)(v18[4] - v21) * v25) + v21;
        v18[5] = v27 + v17;
        v18[6] = (float)(v24 * v25) + v47;
        v18[7] = v28 + v48;
        v29 = (float)((float)(v19[7] - v49) * v25) + v49;
        v30 = (float)((float)(v19[5] - v46) * v25) + v46;
        v31 = (float)((float)(v19[4] - v42) * v25) + v42;
        v19[6] = (float)((float)(v19[6] - v22) * v25) + v22;
        v19[7] = v29;
        v19[5] = v30;
        v19[4] = v31;
        v32 = (float)((float)(v18[11] - v50) * v25) + v50;
        v33 = (float)((float)(v18[10] - v45) * v25) + v45;
        v34 = (float)((float)(v18[8] - v41) * v25) + v41;
        v18[9] = (float)((float)(v18[9] - v40) * v25) + v40;
        v18[11] = v32;
        v18[10] = v33;
        v18[8] = v34;
        v35 = (float)(v19[10] - v43) * v25;
        v36 = (float)((float)(v19[9] - v38) * v25) + v38;
        v37 = (float)((float)(v19[11] - v51) * v25) + v51;
        v19[8] = (float)((float)(v19[8] - v39) * v25) + v39;
        v19[9] = v36;
        v19[11] = v37;
        v19[10] = v35 + v43;
      }
    }
  }
  result = 0;
  if ( v5 != 0 )
  {
    do
      *(uint32_t *)(v3 + 8 * result++) = 0;
    while ( v5 > result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::buildNopJacobian  (binary VA: 0x1767070)
// Original: hkpBreakableConstraintData::buildNopJacobian
// ----------------------------------------------------------------------------
int hkpBreakableConstraintData::buildNopJacobian(int a1, int a2, int a3)
{
  return (*(int (**)(int, int, uint32_t, int))(a2 + 92))(a2, a3, 0, 8);
}

// ----------------------------------------------------------------------------
// Function: hkpBreakableConstraintData::buildJacobian  (binary VA: 0x17670a0)
// Original: hkpBreakableConstraintData::buildJacobian
// ----------------------------------------------------------------------------
int hkpBreakableConstraintData::buildJacobian(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  uint32_t *v7;
  uint32_t *v8;
  bool v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[2];
  typedef uint8_t _g4_t_v17[16];
  typedef uint16_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int *_g4_t_v21;
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v15)) > _g4_s5 ? (16u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v16)) > _g4_s6 ? (20u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v18)) > _g4_s8 ? (44u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v19)) > _g4_s9 ? (48u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v20)) > _g4_s10 ? (52u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v21)) > _g4_s11 ? (64u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v22)) > _g4_s12 ? (76u + sizeof(_g4_t_v22)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);

  v21 = &a1;
  v3 = a1;
  v14 = a3;
  v4 = a2;
  v5 = *(uint32_t *)(a3 + 4) + *(uint16_t *)(a1 + 32);
  if ( *(uint8_t *)v5 != 0 )
  {
    result = hkpBreakableConstraintData::buildNopJacobian(a1, a2, a3);
    if ( *(uint8_t *)(v3 + 40) != 0 )
      return hkpWorld::removeConstraint(
               (hkpWorld::Self *)((char *)v16 + 3),
               *(hkpConstraintInstance::Self **)(*(uint32_t *)(*(uint32_t *)(v4 + 76) + 20) + 8));
  }
  else
  {
    v7 = *(uint32_t **)(a2 + 48);
    v8 = *(uint32_t **)(a2 + 52);
    *(uint32_t *)(v5 + 4) = v7[4];
    *(uint32_t *)(v5 + 8) = v7[5];
    *(uint32_t *)(v5 + 12) = v7[6];
    *(uint32_t *)(v5 + 16) = v8[4];
    *(uint32_t *)(v5 + 20) = v8[5];
    *(uint32_t *)(v5 + 24) = v8[6];
    v20 = 0;
    *(uint32_t *)(v5 + 28) = v7[8];
    *(uint32_t *)(v5 + 32) = v7[9];
    *(uint32_t *)(v5 + 36) = v7[10];
    *(uint32_t *)(v5 + 40) = v8[8];
    *(uint32_t *)(v5 + 44) = v8[9];
    *(uint32_t *)(v5 + 48) = v8[10];
    (*(void (**)(uint32_t, uint8_t *, int, int, int, int, int, uint32_t, uint32_t))(**(uint32_t **)(v3 + 12) + 24))(
      *(uint32_t *)(v3 + 12),
      v17,
      v10,
      v11,
      v12,
      v13,
      v14,
      v16[0],
      v16[1]);
    v9 = *v18 == 29;
    v22 = v15;
    if ( v9 )
      return (int)(uintptr_t)(hkSimpleContactConstraintDataBuildJacobian(v18, v4, 1, v22));
    else
      return hkSolverBuildJacobianFromAtomsNotContact(v18, v19, v4, v22);
  }
  return result;
}


