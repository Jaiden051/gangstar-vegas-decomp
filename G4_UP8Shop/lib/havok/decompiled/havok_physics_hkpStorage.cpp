#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpStorage.h"

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::Material::staticClass  (binary VA: 0x1699fa0)
// Original: hkpStorageExtendedMeshShape::Material::staticClass
// ----------------------------------------------------------------------------
void * hkpStorageExtendedMeshShape::Material::staticClass()
{
  return &hkpStorageExtendedMeshShapeMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::MeshSubpartStorage::staticClass  (binary VA: 0x1699fc0)
// Original: hkpStorageExtendedMeshShape::MeshSubpartStorage::staticClass
// ----------------------------------------------------------------------------
void * hkpStorageExtendedMeshShape::MeshSubpartStorage::staticClass()
{
  return &hkpStorageExtendedMeshShapeMeshSubpartStorageClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::ShapeSubpartStorage::staticClass  (binary VA: 0x1699fe0)
// Original: hkpStorageExtendedMeshShape::ShapeSubpartStorage::staticClass
// ----------------------------------------------------------------------------
void * hkpStorageExtendedMeshShape::ShapeSubpartStorage::staticClass()
{
  return &hkpStorageExtendedMeshShapeShapeSubpartStorageClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::staticClass  (binary VA: 0x169a000)
// Original: hkpStorageExtendedMeshShape::staticClass
// ----------------------------------------------------------------------------
void * hkpStorageExtendedMeshShape::staticClass()
{
  return &hkpStorageExtendedMeshShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::ShapeSubpartStorage::Destroy  (binary VA: 0x16b9440)
// Original: hkpStorageExtendedMeshShape::ShapeSubpartStorage::~ShapeSubpartStorage
// ----------------------------------------------------------------------------
void hkpStorageExtendedMeshShape::ShapeSubpartStorage::Destroy(hkpStorageExtendedMeshShape::ShapeSubpartStorage::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A4E0);
  v1 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      2 * (v1 & 0x3FFFFFFF));
  v2 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      12 * v2);
  v3 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      v3 & 0x3FFFFFFF);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::ShapeSubpartStorage::Destroy_ea16b9530  (binary VA: 0x16b9530)
// Original: hkpStorageExtendedMeshShape::ShapeSubpartStorage::~ShapeSubpartStorage
// ----------------------------------------------------------------------------
void hkpStorageExtendedMeshShape::ShapeSubpartStorage::Destroy_ea16b9530(hkpStorageExtendedMeshShape::ShapeSubpartStorage::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A4E0);
  v1 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      2 * (v1 & 0x3FFFFFFF));
  v2 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      12 * v2);
  v3 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      v3 & 0x3FFFFFFF);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v4 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v5 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v5 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v4, 12, self, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::MeshSubpartStorage::Destroy  (binary VA: 0x16b9650)
// Original: hkpStorageExtendedMeshShape::MeshSubpartStorage::~MeshSubpartStorage
// ----------------------------------------------------------------------------
void hkpStorageExtendedMeshShape::MeshSubpartStorage::Destroy(hkpStorageExtendedMeshShape::MeshSubpartStorage::Self *self)
{
  int v1;
  int v2;
  int v3;
  hkStringPtr::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A4C0);
  v1 = *((uint32_t *)self + 25);
  *((uint32_t *)self + 24) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 23),
      2 * (v1 & 0x3FFFFFFF));
  v2 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 23) = 0;
  v3 = v2 - 1;
  *((uint32_t *)self + 25) = 0x80000000;
  v4 = (hkStringPtr::Self *)(*((uint32_t *)self + 20) + 8 * (v2 - 1) + 4);
  if ( v2 - 1 >= 0 )
  {
    do
    {
      --v3;
      hkStringPtr::Destroy(v4);
      v4 = (hkStringPtr::Self *)((char *)v4 - 8);
    }
    while ( v3 != -1 );
  }
  v5 = *((uint32_t *)self + 22);
  *((uint32_t *)self + 21) = 0;
  if ( v5 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 20),
      8 * v5);
  v6 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 22) = 0x80000000;
  *((uint32_t *)self + 18) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 17),
      12 * v6);
  v7 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 19) = 0x80000000;
  *((uint32_t *)self + 15) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      v7 & 0x3FFFFFFF);
  v8 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 12) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      4 * v8);
  v9 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      2 * (v9 & 0x3FFFFFFF));
  v10 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      v10 & 0x3FFFFFFF);
  v11 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v11 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      16 * v11);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::Destroy  (binary VA: 0x16b9890)
// Original: hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape
// ----------------------------------------------------------------------------
void hkpStorageExtendedMeshShape::Destroy(hkpStorageExtendedMeshShape::Self *self)
{
  int v1;
  hkpStorageExtendedMeshShape::Self *v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  hkpExtendedMeshShape::ShapesSubpart::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int32_t v15; // kr04_4
  int32_t v16;
  int32_t v17; // ett
  int v18;
  int v19;
  hkpExtendedMeshShape::Self *thisa;
  hkpExtendedMeshShape::Self *thisb;

  v1 = 0;
  v2 = self;
  v3 = *((uint32_t *)self + 61);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A508);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_209A584);
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*((uint32_t *)v2 + 60) + 4 * v1);
      if ( *(uint16_t *)(v4 + 6) != 0 )
      {
        thisa = (hkpExtendedMeshShape::Self *)(v2);
        do
        {
          v6 = *(uint32_t *)(v4 + 4);
          HIWORD(v5) = HIWORD(v6);
          LOWORD(v5) = 0;
          v7 = v5 | (uint16_t)(v6 - 1);
          v8 = v6;
        }
        while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
        v2 = (hkpStorageExtendedMeshShape::Self *)(thisa);
        if ( (uint16_t)v7 == 0 )
          G4_VCALL<void>(v4, 16);
        v3 = *((uint32_t *)thisa + 61);
      }
      ++v1;
    }
    while ( v1 < v3 );
  }
  v9 = *((uint32_t *)v2 + 50) - 1;
  v10 = (hkpExtendedMeshShape::ShapesSubpart::Self *)(*((uint32_t *)v2 + 49) + (v9 << 6));
  if ( v9 >= 0 )
  {
    do
    {
      --v9;
      hkpExtendedMeshShape::ShapesSubpart::Destroy(v10);
      v10 = (hkpExtendedMeshShape::ShapesSubpart::Self *)((char *)v10 - 64);
    }
    while ( v9 != -1 );
  }
  v11 = *((uint32_t *)v2 + 64);
  v12 = 0;
  for ( *((uint32_t *)v2 + 50) = 0; v12 < v11; ++v12 )
  {
    v13 = *(uint32_t *)(*((uint32_t *)v2 + 63) + 4 * v12);
    if ( *(uint16_t *)(v13 + 6) != 0 )
    {
      thisb = (hkpExtendedMeshShape::Self *)(v2);
      do
      {
        v15 = *(uint32_t *)(v13 + 4);
        HIWORD(v14) = HIWORD(v15);
        LOWORD(v14) = 0;
        v16 = v14 | (uint16_t)(v15 - 1);
        v17 = v15;
      }
      while ( v17 != __sync_val_compare_and_swap((volatile int32_t *)(v13 + 4), v17, v16) );
      v2 = (hkpStorageExtendedMeshShape::Self *)(thisb);
      if ( (uint16_t)v16 == 0 )
        G4_VCALL<void>(v13, 16);
      v11 = *((uint32_t *)thisb + 64);
    }
  }
  *((uint32_t *)v2 + 64) = 0;
  *((uint32_t *)v2 + 44) = (uint32_t)(uintptr_t)(&hkpStorageExtendedMeshShapeMaterialClass);
  v18 = *((uint32_t *)v2 + 65);
  if ( v18 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v2 + 63),
      4 * v18);
  v19 = *((uint32_t *)v2 + 62);
  *((uint32_t *)v2 + 63) = 0;
  *((uint32_t *)v2 + 65) = 0x80000000;
  *((uint32_t *)v2 + 61) = 0;
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v2 + 60),
      4 * v19);
  *((uint32_t *)v2 + 60) = 0;
  *((uint32_t *)v2 + 62) = 0x80000000;
  hkpExtendedMeshShape::Destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::Destroy_ea16b9a80  (binary VA: 0x16b9a80)
// Original: hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape
// ----------------------------------------------------------------------------
void hkpStorageExtendedMeshShape::Destroy_ea16b9a80(hkpStorageExtendedMeshShape::Self *self)
{
  int v1;
  int v2;

  hkpStorageExtendedMeshShape::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 272;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::addShapesSubpart  (binary VA: 0x16b9af0)
// Original: hkpStorageExtendedMeshShape::addShapesSubpart
// ----------------------------------------------------------------------------
int hkpStorageExtendedMeshShape::addShapesSubpart(hkpStorageExtendedMeshShape::Self *self, const hkpExtendedMeshShape::ShapesSubpart::Self *a2)
{
  const hkpExtendedMeshShape::ShapesSubpart::Self *v2;
  hkpStorageExtendedMeshShape::Self *v3;
  int address;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int32_t v16; // kr00_4
  int32_t v17;
  int32_t v18; // ett
  int v19;
  int v20;
  int v21;
  int v22;
  int32_t v23; // kr04_4
  int32_t v24;
  int32_t v25; // ett
  int v26;
  int i;
  int32_t v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  bool v34; // cc
  int v35;
  int v36;
  int v37;
  int v38;
  int32_t v39; // kr08_4
  uint8_t *v40;
  int v41;
  int v42;
  uint16_t v43;
  hkpExtendedMeshShape::ShapesSubpart::Self *v44;
  unsigned int v45;
  bool v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  uint16_t *v59;
  int16_t v60;
  int16_t v61;
  int16_t v62;
  hkpExtendedMeshShape::ShapesSubpart::Self *v63;
  float v64; // xmm6_4
  __m128i v65;
  __m128i v66;
  float v67;
  float v68;
  float v69; // xmm0_4
  float v70; // xmm6_4
  float v71; // xmm7_4
  float v72; // xmm5_4
  float v73; // xmm1_4
  float v74; // xmm1_4
  int16_t v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  uint8_t *v82;
  uint8_t *v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int savedregs;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef const hkpExtendedMeshShape::ShapesSubpart::Self *_g4_t_v93;
  typedef const hkpExtendedMeshShape::ShapesSubpart::Self *_g4_t_v94;
  typedef float _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef float _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int *_g4_t_v100;
  typedef float _g4_t_v101;
  typedef int _g4_t_v102;
  typedef const hkpExtendedMeshShape::ShapesSubpart::Self *_g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef float _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef const hkpExtendedMeshShape::ShapesSubpart::Self *_g4_t_v110;
  typedef float _g4_t_v111;
  typedef hkpExtendedMeshShape::Self *_g4_t_v112;
  typedef hkpExtendedMeshShape::Self *_g4_t_v113;
  typedef hkpExtendedMeshShape::ShapesSubpart::Self *_g4_t_v114;
  typedef hkpExtendedMeshShape::ShapesSubpart::Self *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef float _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef int _g4_t_v128;
  typedef uint8_t *_g4_t_v129;
  typedef int _g4_t_v130;
  typedef uint32_t *_g4_t_v131;
  typedef int _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef hkArrayUtil::Self *_g4_t_v143;
  typedef hkAabb::Self *_g4_t_v144;
  typedef int _g4_t_v145;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v88)) > _g4_s0 ? (0u + sizeof(_g4_t_v88)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v89)) > _g4_s1 ? (4u + sizeof(_g4_t_v89)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v90)) > _g4_s2 ? (8u + sizeof(_g4_t_v90)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v91)) > _g4_s3 ? (12u + sizeof(_g4_t_v91)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v92)) > _g4_s4 ? (16u + sizeof(_g4_t_v92)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v93)) > _g4_s5 ? (16u + sizeof(_g4_t_v93)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v94)) > _g4_s6 ? (16u + sizeof(_g4_t_v94)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v95)) > _g4_s7 ? (16u + sizeof(_g4_t_v95)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v96)) > _g4_s8 ? (20u + sizeof(_g4_t_v96)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v97)) > _g4_s9 ? (20u + sizeof(_g4_t_v97)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v98)) > _g4_s10 ? (20u + sizeof(_g4_t_v98)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v99)) > _g4_s11 ? (24u + sizeof(_g4_t_v99)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v100)) > _g4_s12 ? (24u + sizeof(_g4_t_v100)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v101)) > _g4_s13 ? (24u + sizeof(_g4_t_v101)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v102)) > _g4_s14 ? (28u + sizeof(_g4_t_v102)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v103)) > _g4_s15 ? (28u + sizeof(_g4_t_v103)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v104)) > _g4_s16 ? (28u + sizeof(_g4_t_v104)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v105)) > _g4_s17 ? (28u + sizeof(_g4_t_v105)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v106)) > _g4_s18 ? (28u + sizeof(_g4_t_v106)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v107)) > _g4_s19 ? (28u + sizeof(_g4_t_v107)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v108)) > _g4_s20 ? (32u + sizeof(_g4_t_v108)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v109)) > _g4_s21 ? (32u + sizeof(_g4_t_v109)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v110)) > _g4_s22 ? (32u + sizeof(_g4_t_v110)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v111)) > _g4_s23 ? (32u + sizeof(_g4_t_v111)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v112)) > _g4_s24 ? (36u + sizeof(_g4_t_v112)) : _g4_s24,
    _g4_s26 = (36u + sizeof(_g4_t_v113)) > _g4_s25 ? (36u + sizeof(_g4_t_v113)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v114)) > _g4_s26 ? (40u + sizeof(_g4_t_v114)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v115)) > _g4_s27 ? (40u + sizeof(_g4_t_v115)) : _g4_s27,
    _g4_s29 = (44u + sizeof(_g4_t_v116)) > _g4_s28 ? (44u + sizeof(_g4_t_v116)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v117)) > _g4_s29 ? (44u + sizeof(_g4_t_v117)) : _g4_s29,
    _g4_s31 = (44u + sizeof(_g4_t_v118)) > _g4_s30 ? (44u + sizeof(_g4_t_v118)) : _g4_s30,
    _g4_s32 = (44u + sizeof(_g4_t_v119)) > _g4_s31 ? (44u + sizeof(_g4_t_v119)) : _g4_s31,
    _g4_s33 = (48u + sizeof(_g4_t_v120)) > _g4_s32 ? (48u + sizeof(_g4_t_v120)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v121)) > _g4_s33 ? (48u + sizeof(_g4_t_v121)) : _g4_s33,
    _g4_s35 = (48u + sizeof(_g4_t_v122)) > _g4_s34 ? (48u + sizeof(_g4_t_v122)) : _g4_s34,
    _g4_s36 = (48u + sizeof(_g4_t_v123)) > _g4_s35 ? (48u + sizeof(_g4_t_v123)) : _g4_s35,
    _g4_s37 = (48u + sizeof(_g4_t_v124)) > _g4_s36 ? (48u + sizeof(_g4_t_v124)) : _g4_s36,
    _g4_s38 = (48u + sizeof(_g4_t_v125)) > _g4_s37 ? (48u + sizeof(_g4_t_v125)) : _g4_s37,
    _g4_s39 = (48u + sizeof(_g4_t_v126)) > _g4_s38 ? (48u + sizeof(_g4_t_v126)) : _g4_s38,
    _g4_s40 = (48u + sizeof(_g4_t_v127)) > _g4_s39 ? (48u + sizeof(_g4_t_v127)) : _g4_s39,
    _g4_s41 = (48u + sizeof(_g4_t_v128)) > _g4_s40 ? (48u + sizeof(_g4_t_v128)) : _g4_s40,
    _g4_s42 = (48u + sizeof(_g4_t_v129)) > _g4_s41 ? (48u + sizeof(_g4_t_v129)) : _g4_s41,
    _g4_s43 = (48u + sizeof(_g4_t_v130)) > _g4_s42 ? (48u + sizeof(_g4_t_v130)) : _g4_s42,
    _g4_s44 = (48u + sizeof(_g4_t_v131)) > _g4_s43 ? (48u + sizeof(_g4_t_v131)) : _g4_s43,
    _g4_s45 = (52u + sizeof(_g4_t_v132)) > _g4_s44 ? (52u + sizeof(_g4_t_v132)) : _g4_s44,
    _g4_s46 = (56u + sizeof(_g4_t_v133)) > _g4_s45 ? (56u + sizeof(_g4_t_v133)) : _g4_s45,
    _g4_s47 = (60u + sizeof(_g4_t_v134)) > _g4_s46 ? (60u + sizeof(_g4_t_v134)) : _g4_s46,
    _g4_s48 = (64u + sizeof(_g4_t_v135)) > _g4_s47 ? (64u + sizeof(_g4_t_v135)) : _g4_s47,
    _g4_s49 = (68u + sizeof(_g4_t_v136)) > _g4_s48 ? (68u + sizeof(_g4_t_v136)) : _g4_s48,
    _g4_s50 = (72u + sizeof(_g4_t_v137)) > _g4_s49 ? (72u + sizeof(_g4_t_v137)) : _g4_s49,
    _g4_s51 = (76u + sizeof(_g4_t_v138)) > _g4_s50 ? (76u + sizeof(_g4_t_v138)) : _g4_s50,
    _g4_s52 = (80u + sizeof(_g4_t_v139)) > _g4_s51 ? (80u + sizeof(_g4_t_v139)) : _g4_s51,
    _g4_s53 = (84u + sizeof(_g4_t_v140)) > _g4_s52 ? (84u + sizeof(_g4_t_v140)) : _g4_s52,
    _g4_s54 = (88u + sizeof(_g4_t_v141)) > _g4_s53 ? (88u + sizeof(_g4_t_v141)) : _g4_s53,
    _g4_s55 = (92u + sizeof(_g4_t_v142)) > _g4_s54 ? (92u + sizeof(_g4_t_v142)) : _g4_s54,
    _g4_s56 = (96u + sizeof(_g4_t_v143)) > _g4_s55 ? (96u + sizeof(_g4_t_v143)) : _g4_s55,
    _g4_s57 = (104u + sizeof(_g4_t_v144)) > _g4_s56 ? (104u + sizeof(_g4_t_v144)) : _g4_s56,
    _g4_s58 = (108u + sizeof(_g4_t_v145)) > _g4_s57 ? (108u + sizeof(_g4_t_v145)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 0u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 4u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 8u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 12u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 16u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 16u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 16u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 16u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 20u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 20u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 20u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 24u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 24u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 24u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 28u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 28u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 28u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 28u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 28u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 28u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 32u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 32u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 32u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 32u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 36u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 36u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 40u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 40u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 44u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 44u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 44u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 44u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 48u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 48u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 48u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 48u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 48u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 48u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 48u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 48u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 48u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 48u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 48u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 48u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 52u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 56u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 60u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 64u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 68u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 72u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 76u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 80u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 84u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 88u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 92u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 96u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 104u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 108u);

  v143 = (hkArrayUtil::Self *)&self;
  v2 = a2;
  v3 = self;
  v112 = (hkpExtendedMeshShape::Self *)(self);
  v114 = (hkpExtendedMeshShape::ShapesSubpart::Self *)hkpExtendedMeshShape::expandOneShapesSubparts(self);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, hkpExtendedMeshShape::Self *, hkpExtendedMeshShape::ShapesSubpart::Self *, int, int, int, float, float, float, float, float, float, float, float, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   44,
                   v88,
                   v89,
                   v90,
                   v91,
                   v92,
                   v96,
                   v99,
                   v102,
                   v108,
                   v112,
                   v114,
                   v116,
                   v120,
                   v132,
                   COERCE_FLOAT(LODWORD(v133)),
                   COERCE_FLOAT(LODWORD(v134)),
                   COERCE_FLOAT(LODWORD(v135)),
                   COERCE_FLOAT(LODWORD(v136)),
                   COERCE_FLOAT(LODWORD(v137)),
                   COERCE_FLOAT(LODWORD(v138)),
                   COERCE_FLOAT(LODWORD(v139)),
                   COERCE_FLOAT(LODWORD(v140)),
                   v141,
                   v142);
  v5[1] = -65535;
  v5[2] = 0;
  *v5 = ((uint32_t)(uintptr_t)&off_209A4E0);
  v5[3] = 0;
  v5[4] = 0x80000000;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0x80000000;
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0x80000000;
  v6 = *((uint32_t *)v3 + 64);
  if ( v6 == (*((uint32_t *)v3 + 65) & 0x3FFFFFFF) )
  {
    v131 = v5;
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpExtendedMeshShape::Self *)((char *)v113 + 252),
      4,
      v145);
    v6 = *((uint32_t *)v113 + 64);
    v5 = v131;
  }
  *(uint32_t *)(*((uint32_t *)v113 + 63) + 4 * v6) = (uint32_t)(uintptr_t)(v5);
  v7 = *((uint32_t *)v113 + 64);
  *((uint32_t *)v113 + 64) = v7 + 1;
  v8 = *((uint32_t *)v115 + 6);
  v100 = *(int **)(*((uint32_t *)v113 + 63) + 4 * v7);
  *(uint32_t *)v115 = *(uint32_t *)v2;
  *((uint32_t *)v115 + 1) = *((uint32_t *)v2 + 1);
  *((uint32_t *)v115 + 2) = *((uint32_t *)v2 + 2);
  *((uint32_t *)v115 + 3) = *((uint32_t *)v2 + 3);
  *((uint32_t *)v115 + 4) = *((uint32_t *)v2 + 4);
  v97 = *((uint32_t *)v2 + 6);
  v9 = v97;
  if ( v97 > v8 )
    v9 = v8;
  v10 = *((uint32_t *)v115 + 7) & 0x3FFFFFFF;
  v117 = v9;
  if ( v97 > v10 )
  {
    v11 = 2 * v10;
    savedregs = 4;
    v143 = (hkArrayUtil::Self *)&v132;
    if ( v11 < v97 )
      v11 = v97;
    hkArrayUtil::reserve(
      v143,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v115 + 5,
      v11,
      savedregs);
  }
  v121 = *((uint32_t *)v115 + 5);
  v12 = v8 - v97 - 1;
  if ( v12 >= 0 )
  {
    v103 = v2;
    v13 = v121 + 4 * v97;
    do
    {
      v14 = *(uint32_t *)(v13 + 4 * v12);
      if ( v14 != 0 && *(uint16_t *)(v14 + 6) != 0 )
      {
        v109 = v12;
        do
        {
          v16 = *(uint32_t *)(v14 + 4);
          HIWORD(v15) = HIWORD(v16);
          LOWORD(v15) = 0;
          v17 = v15 | (uint16_t)(v16 - 1);
          v18 = v16;
        }
        while ( v18 != __sync_val_compare_and_swap((volatile int32_t *)(v14 + 4), v18, v17) );
        v12 = v109;
        if ( (uint16_t)v17 == 0 )
          G4_VCALL<void>(v14, 16);
      }
      *(uint32_t *)(v13 + 4 * v12--) = 0;
    }
    while ( v12 != -1 );
    v2 = v103;
    v121 = *((uint32_t *)v115 + 5);
  }
  if ( v117 <= 0 )
  {
    v30 = *((uint32_t *)v2 + 5);
  }
  else
  {
    v93 = v2;
    v19 = 0;
    v20 = *((uint32_t *)v2 + 5);
    do
    {
      v26 = *(uint32_t *)(v20 + 4 * v19);
      if ( v26 != 0 && *(uint16_t *)(v26 + 6) != 0 )
      {
        v105 = *(uint32_t *)(v20 + 4 * v19);
        for ( i = v105; ; i = v105 )
        {
          v28 = *(uint32_t *)(i + 4);
          HIWORD(v29) = HIWORD(v28);
          LOWORD(v29) = 0;
          if ( v28 == __sync_val_compare_and_swap(
                        (volatile int32_t *)(v26 + 4),
                        v28,
                        v29 | (uint16_t)(v28 + 1)) )
            break;
        }
      }
      v21 = *(uint32_t *)(v121 + 4 * v19);
      if ( v21 != 0 && *(uint16_t *)(v21 + 6) != 0 )
      {
        v104 = v19;
        do
        {
          v23 = *(uint32_t *)(v21 + 4);
          HIWORD(v22) = HIWORD(v23);
          LOWORD(v22) = 0;
          v24 = v22 | (uint16_t)(v23 - 1);
          v25 = v23;
        }
        while ( v25 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v25, v24) );
        v19 = v104;
        if ( (uint16_t)v24 == 0 )
          G4_VCALL<void>(v21, 16);
      }
      *(uint32_t *)(v121 + 4 * v19) = *(uint32_t *)(v20 + 4 * v19);
      ++v19;
    }
    while ( v19 != v117 );
    v2 = v93;
    v30 = *((uint32_t *)v93 + 5);
    v121 = *((uint32_t *)v115 + 5);
  }
  v31 = v121 + 4 * v117;
  v32 = 4 * v117 + v30;
  v33 = 0;
  v34 = v97 - v117 <= 0;
  v118 = v97 - v117;
  v122 = v31;
  if ( !v34 )
  {
    v94 = v2;
    v35 = v32;
    while ( 1 )
    {
      v36 = *(uint32_t *)(v35 + 4 * v33);
      if ( v36 == 0 )
        break;
      v37 = *(uint32_t *)(v35 + 4 * v33);
      if ( *(uint16_t *)(v36 + 6) != 0 )
      {
        v106 = *(uint32_t *)(v35 + 4 * v33);
        do
        {
          v39 = *(uint32_t *)(v106 + 4);
          HIWORD(v38) = HIWORD(v39);
          LOWORD(v38) = 0;
        }
        while ( v39 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v36 + 4),
                         v39,
                         v38 | (uint16_t)(v39 + 1)) );
        *(uint32_t *)(v122 + 4 * v33) = *(uint32_t *)(v35 + 4 * v33);
        if ( ++v33 == v118 )
        {
LABEL_42:
          v2 = v94;
          goto LABEL_43;
        }
      }
      else
      {
LABEL_36:
        *(uint32_t *)(v122 + 4 * v33++) = v37;
        if ( v33 == v118 )
          goto LABEL_42;
      }
    }
    v37 = 0;
    goto LABEL_36;
  }
LABEL_43:
  *((uint32_t *)v115 + 6) = v97;
  *((uint32_t *)v115 + 8) = *((uint32_t *)v2 + 8);
  *((uint32_t *)v115 + 9) = *((uint32_t *)v2 + 9);
  *((uint32_t *)v115 + 10) = *((uint32_t *)v2 + 10);
  *((uint32_t *)v115 + 11) = *((uint32_t *)v2 + 11);
  *((uint32_t *)v115 + 12) = *((uint32_t *)v2 + 12);
  *((uint32_t *)v115 + 13) = *((uint32_t *)v2 + 13);
  *((uint32_t *)v115 + 14) = *((uint32_t *)v2 + 14);
  *((uint32_t *)v115 + 15) = *((uint32_t *)v2 + 15);
  *(uint16_t *)v115 = *(uint16_t *)v2 & 6 | *(uint16_t *)v115 & 0xFFF9;
  v40 = *((uint8_t **)v2 + 2);
  if ( v40 == nullptr )
  {
    *((uint32_t *)v115 + 2) = 0;
    *((uint16_t *)v115 + 3) = 0;
    goto LABEL_74;
  }
  if ( (*(uint16_t *)v2 & 6) == 2 )
  {
    if ( *((uint16_t *)v2 + 3) == 0 )
    {
      v85 = v100[3];
      if ( v85 == (v100[4] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v100 + 2),
          1,
          v145);
        v85 = v100[3];
      }
      *(uint8_t *)(v100[2] + v85) = *v40;
      v86 = v100[3];
      v87 = v100[2] + v86;
      v100[3] = v86 + 1;
      *((uint32_t *)v115 + 2) = v87;
      v43 = *((uint16_t *)v2 + 3);
      goto LABEL_50;
    }
    v77 = *((uint32_t *)v2 + 6);
    v78 = v100[3];
    v79 = v100[4] & 0x3FFFFFFF;
    v80 = v78 + v77;
    if ( v78 + v77 > v79 )
    {
      v81 = 2 * v79;
      v128 = v100[3];
      savedregs = 1;
      v143 = (hkArrayUtil::Self *)&v132;
      if ( v81 < v80 )
        v81 = v78 + v77;
      hkArrayUtil::reserve(v143, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v100 + 2, v81, savedregs);
      v78 = v128;
      v80 = v77 + v100[3];
    }
    v100[3] = v80;
    v82 = (uint8_t *)(v78 + v100[2]);
    *((uint32_t *)v115 + 2) = (uint32_t)(uintptr_t)(v82);
    v83 = *((uint8_t **)v2 + 2);
    v129 = &v82[v77];
    if ( v77 > 0 )
    {
      do
      {
        *v82++ = *v83;
        v43 = *((uint16_t *)v2 + 3);
        v83 += v43;
      }
      while ( v82 != v129 );
      goto LABEL_50;
    }
  }
  else if ( *((uint16_t *)v2 + 3) != 0 )
  {
    v54 = *((uint32_t *)v2 + 6);
    v55 = v100[9];
    v56 = v100[10] & 0x3FFFFFFF;
    v57 = v55 + v54;
    if ( v55 + v54 > v56 )
    {
      v84 = 2 * v56;
      v130 = v100[9];
      savedregs = 2;
      v143 = (hkArrayUtil::Self *)&v132;
      if ( v84 < v57 )
        v84 = v55 + v54;
      hkArrayUtil::reserve(v143, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v100 + 8, v84, savedregs);
      v55 = v130;
      v57 = v54 + v100[9];
    }
    v100[9] = v57;
    v58 = v55 + v55 + v100[8];
    *((uint32_t *)v115 + 2) = v58;
    v59 = *((uint16_t **)v2 + 2);
    v125 = v58 + 2 * v54;
    if ( v54 > 0 )
    {
      do
      {
        v58 += 2;
        *(uint16_t *)(v58 - 2) = *v59;
        v43 = *((uint16_t *)v2 + 3);
        v59 = (uint16_t *)((char *)v59 + v43);
      }
      while ( v58 != v125 );
      goto LABEL_50;
    }
  }
  else
  {
    v41 = v100[9];
    if ( v41 == (v100[10] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(v100 + 8),
        2,
        v145);
      v41 = v100[9];
    }
    *(uint16_t *)(v100[8] + 2 * v41) = *(uint16_t *)v40;
    v42 = 2 * v100[9]++;
    *((uint32_t *)v115 + 2) = v100[8] + v42;
  }
  v43 = *((uint16_t *)v2 + 3);
LABEL_50:
  v44 = v115;
  *((uint16_t *)v115 + 3) = v43;
  if ( v43 == 0 )
    goto LABEL_53;
  v45 = (*(uint16_t *)v115 & 6u) >> 1;
  if ( v45 == 1 )
  {
    v44 = v115;
    *((uint16_t *)v115 + 3) = 1;
    goto LABEL_53;
  }
  v46 = v45 == 2;
  v44 = v115;
  if ( !v46 )
  {
LABEL_53:
    v47 = *((uint32_t *)v44 + 2);
    goto LABEL_54;
  }
  *((uint16_t *)v115 + 3) = 2;
  v47 = *((uint32_t *)v115 + 2);
LABEL_54:
  if ( v47 != 0 )
  {
    v48 = v100[6];
    v49 = v100[7] & 0x3FFFFFFF;
    v50 = v48 + (*(uint16_t *)v2 >> 3);
    if ( v50 > v49 )
    {
      v51 = 2 * v49;
      v123 = *(uint16_t *)v2 >> 3;
      savedregs = 12;
      v143 = (hkArrayUtil::Self *)&v132;
      if ( v51 < v50 )
        v51 = v50;
      hkArrayUtil::reserve(v143, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v100 + 5, v51, savedregs);
      v50 = v123 + v100[6];
    }
    v100[6] = v50;
    v52 = *((uint32_t *)v2 + 3);
    if ( *(uint16_t *)v2 >> 3 != 0 )
    {
      v53 = v100[5] + 12 * v48;
      v124 = 0;
      v110 = v2;
      do
      {
        *(uint32_t *)v53 = 0;
        *(uint16_t *)(v53 + 4) = 0;
        *(uint16_t *)(v53 + 6) = 0;
        *(uint32_t *)(v53 + 8) = 0;
        v46 = *((uint32_t *)v113 + 44) == (uint32_t)(uintptr_t)(&hkpStorageExtendedMeshShapeMaterialClass);
        *(uint32_t *)v53 = *(uint32_t *)v52;
        if ( v46 )
        {
          *(uint16_t *)(v53 + 4) = *(uint16_t *)(v52 + 4);
          *(uint16_t *)(v53 + 6) = *(uint16_t *)(v52 + 6);
          *(uint32_t *)(v53 + 8) = *(uint32_t *)(v52 + 8);
        }
        else
        {
          *(uint16_t *)(v53 + 6) = 16256;
        }
        v2 = v110;
        ++v124;
        v53 += 12;
        v52 += *((int16_t *)v110 + 2);
      }
      while ( *(uint16_t *)v110 >> 3 > v124 );
      v60 = *((uint16_t *)v110 + 2);
    }
    else
    {
      v60 = *((uint16_t *)v2 + 2);
    }
    if ( v60 != 0 )
    {
      v61 = *(uint16_t *)v115;
      *((uint16_t *)v115 + 2) = 12;
      v62 = *(uint16_t *)v2 & 0xFFF8;
      v63 = v115;
      *(uint16_t *)v115 = v62 | v61 & 7;
    }
    else
    {
      v63 = v115;
      v76 = *(uint16_t *)v115;
      *((uint16_t *)v115 + 2) = 0;
      *(uint16_t *)v115 = v76 & 7 | 8;
    }
    *((uint32_t *)v63 + 3) = v100[5];
  }
LABEL_74:
  v64 = *((float *)v113 + 36);
g4_m128_raw(v65) = *((unsigned int *)v113 + 40);
  *(float *)g4_m128_ptr<int32_t>(v65) = *(float *)g4_m128_ptr<int32_t>(v65) - v64;
g4_m128_raw(v66) = *((unsigned int *)v113 + 41);
  v126 = *((float *)v113 + 38);
  v67 = COERCE_FLOAT(_mm_cvtsi128_si32(v65));
g4_m128_lane<int32_t>(v65, 0) = *((uint32_t *)v113 + 37);
  *(float *)g4_m128_ptr<int32_t>(v66) = *(float *)g4_m128_ptr<int32_t>(v66) - *(float *)g4_m128_ptr<int32_t>(v65);
  v95 = *((float *)v113 + 40) + v64;
  v68 = COERCE_FLOAT(_mm_cvtsi128_si32(v66));
g4_m128_lane<int32_t>(v66, 0) = *((uint32_t *)v113 + 42);
  v98 = *((float *)v113 + 41) + *(float *)g4_m128_ptr<int32_t>(v65);
  v69 = *((float *)v113 + 39);
  v101 = *(float *)g4_m128_ptr<int32_t>(v66) + v126;
  v111 = *((float *)v113 + 43) - v69;
  v107 = *((float *)v113 + 43) + v69;
  hkpExtendedMeshShape::calcAabbExtents(v115, (const hkpExtendedMeshShape::ShapesSubpart::Self *)&v133, v144);
  v70 = fminf(v67, v133);
  v71 = fmaxf(v95, v137);
  *(float *)g4_m128_ptr<int32_t>(v65) = fminf(v68, v134);
  v72 = fmaxf(v98, v138);
  v127 = fminf(*(float *)g4_m128_ptr<int32_t>(v66) - v126, v135);
  *(float *)g4_m128_ptr<int32_t>(v66) = fmaxf(v101, v139);
  v73 = fminf(v111, v136);
  *((float *)v113 + 40) = (float)(v70 + v71) * 0.5;
  v119 = v73;
  v74 = fmaxf(v107, v140);
  *((float *)v113 + 36) = (float)(v71 - v70) * 0.5;
  *((float *)v113 + 41) = (float)(*(float *)g4_m128_ptr<int32_t>(v65) + v72) * 0.5;
  *((float *)v113 + 37) = (float)(v72 - *(float *)g4_m128_ptr<int32_t>(v65)) * 0.5;
  *((float *)v113 + 42) = (float)(v127 + *(float *)g4_m128_ptr<int32_t>(v66)) * 0.5;
  *((float *)v113 + 38) = (float)(*(float *)g4_m128_ptr<int32_t>(v66) - v127) * 0.5;
  *((float *)v113 + 43) = (float)(v119 + v74) * 0.5;
  *((float *)v113 + 39) = (float)(v74 - v119) * 0.5;
  *((uint32_t *)v113 + 57) += hkpExtendedMeshShape::getNumChildShapesInShapesSubpart(v113, v115);
  return *((uint32_t *)v113 + 50) - 1;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::addTrianglesSubpart  (binary VA: 0x16ba4f0)
// Original: hkpStorageExtendedMeshShape::addTrianglesSubpart
// ----------------------------------------------------------------------------
int hkpStorageExtendedMeshShape::addTrianglesSubpart(hkpStorageExtendedMeshShape::Self *self, const hkpExtendedMeshShape::TrianglesSubpart::Self *a2)
{
  const hkpExtendedMeshShape::TrianglesSubpart::Self *v2;
  hkpStorageExtendedMeshShape::Self *v3;
  int address;
  hkString::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16; // xmm1_4
  int v17; // xmm2_4
  int v18; // xmm0_4
  char v19;
  int16_t v20;
  int16_t v21;
  int v22;
  hkAabb::Self *v23;
  int v24;
  hkString::Self *v25;
  int v26;
  char *v27;
  int v28;
  hkString::Self *v29;
  hkString::Self *v30;
  uint8_t *v31;
  hkString::Self *v32;
  uint8_t *v33;
  int v34;
  int v35;
  hkpExtendedMeshShape::Self *v36;
  uint16_t v37;
  unsigned int v38;
  bool v39;
  int v40;
  int v41;
  int v42;
  char *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  int16_t v51;
  int v52;
  int v53;
  int v54;
  hkString::Self *v55;
  int v56;
  int v57;
  uint16_t *v58;
  hkString::Self *v59;
  int v60;
  int v61;
  int v62;
  char *v63;
  int v64;
  uint16_t *v65;
  unsigned int v66;
  int16_t v67;
  int v68;
  int v69;
  int v70;
  hkString::Self *v71;
  int v72;
  int v73;
  uint32_t *v74;
  hkString::Self *v75;
  int v76;
  hkpExtendedMeshShape::Self *v77;
  hkpExtendedMeshShape::Self *v78;
  float v79; // xmm6_4
  __m128i v80;
  float v81;
  float v82; // xmm3_4
  float v83; // xmm0_4
  __m128i v84;
  float v85;
  float v86; // xmm0_4
  float v87; // xmm3_4
  float v88; // xmm2_4
  float v89; // xmm7_4
  float v90; // xmm5_4
  float v91; // xmm3_4
  float v92; // xmm1_4
  int result;
  hkpExtendedMeshShape::Self *v94;
  int16_t v95;
  int v96;
  int v97;
  char *v98;
  int v99;
  int v100;
  int v101;
  uint8_t *v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  hkStringPtr::Self *v114;
  int v115;
  const hkpExtendedMeshShape::TrianglesSubpart::Self *v116;
  hkStringPtr::Self *v117;
  uint32_t *v118;
  int v119;
  const hkpExtendedMeshShape::TrianglesSubpart::Self *v120;
  int savedregs;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef float _g4_t_v125;
  typedef int _g4_t_v126;
  typedef float _g4_t_v127;
  typedef int _g4_t_v128;
  typedef float _g4_t_v129;
  typedef int _g4_t_v130;
  typedef float _g4_t_v131;
  typedef const hkpExtendedMeshShape::TrianglesSubpart::Self *_g4_t_v132;
  typedef int _g4_t_v133;
  typedef float _g4_t_v134;
  typedef int _g4_t_v135;
  typedef const hkpExtendedMeshShape::TrianglesSubpart::Self *_g4_t_v136;
  typedef int _g4_t_v137;
  typedef hkString::Self *_g4_t_v138;
  typedef const hkpExtendedMeshShape::TrianglesSubpart::Self *_g4_t_v139;
  typedef float _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int *_g4_t_v144;
  typedef float _g4_t_v145;
  typedef hkpExtendedMeshShape::Self *_g4_t_v146;
  typedef hkpExtendedMeshShape::Self *_g4_t_v147;
  typedef hkString::Self *_g4_t_v148;
  typedef hkString::Self *_g4_t_v149;
  typedef hkString::Self *_g4_t_v150;
  typedef hkString::Self *_g4_t_v151;
  typedef hkString::Self *_g4_t_v152;
  typedef hkString::Self *_g4_t_v153;
  typedef hkString::Self *_g4_t_v154;
  typedef float _g4_t_v155;
  typedef float _g4_t_v156;
  typedef hkString::Self *_g4_t_v157;
  typedef hkString::Self *_g4_t_v158;
  typedef hkString::Self *_g4_t_v159;
  typedef hkString::Self *_g4_t_v160;
  typedef hkString::Self *_g4_t_v161;
  typedef hkpExtendedMeshShape::Self *_g4_t_v162;
  typedef hkpExtendedMeshShape::Self *_g4_t_v163;
  typedef int _g4_t_v164;
  typedef float _g4_t_v165;
  typedef float _g4_t_v166;
  typedef float _g4_t_v167;
  typedef float _g4_t_v168;
  typedef float _g4_t_v169;
  typedef float _g4_t_v170;
  typedef float _g4_t_v171;
  typedef float _g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef hkArrayUtil::Self *_g4_t_v175;
  typedef hkAabb::Self *_g4_t_v176;
  typedef int _g4_t_v177;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v121)) > _g4_s0 ? (4u + sizeof(_g4_t_v121)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v122)) > _g4_s1 ? (8u + sizeof(_g4_t_v122)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v123)) > _g4_s2 ? (12u + sizeof(_g4_t_v123)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v124)) > _g4_s3 ? (16u + sizeof(_g4_t_v124)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v125)) > _g4_s4 ? (16u + sizeof(_g4_t_v125)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v126)) > _g4_s5 ? (20u + sizeof(_g4_t_v126)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v127)) > _g4_s6 ? (20u + sizeof(_g4_t_v127)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v128)) > _g4_s7 ? (24u + sizeof(_g4_t_v128)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v129)) > _g4_s8 ? (24u + sizeof(_g4_t_v129)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v130)) > _g4_s9 ? (28u + sizeof(_g4_t_v130)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v131)) > _g4_s10 ? (28u + sizeof(_g4_t_v131)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v132)) > _g4_s11 ? (28u + sizeof(_g4_t_v132)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v133)) > _g4_s12 ? (32u + sizeof(_g4_t_v133)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v134)) > _g4_s13 ? (32u + sizeof(_g4_t_v134)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v135)) > _g4_s14 ? (32u + sizeof(_g4_t_v135)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v136)) > _g4_s15 ? (32u + sizeof(_g4_t_v136)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v137)) > _g4_s16 ? (36u + sizeof(_g4_t_v137)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v138)) > _g4_s17 ? (36u + sizeof(_g4_t_v138)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v139)) > _g4_s18 ? (36u + sizeof(_g4_t_v139)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v140)) > _g4_s19 ? (36u + sizeof(_g4_t_v140)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v141)) > _g4_s20 ? (36u + sizeof(_g4_t_v141)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v142)) > _g4_s21 ? (36u + sizeof(_g4_t_v142)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v143)) > _g4_s22 ? (40u + sizeof(_g4_t_v143)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v144)) > _g4_s23 ? (40u + sizeof(_g4_t_v144)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v145)) > _g4_s24 ? (40u + sizeof(_g4_t_v145)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v146)) > _g4_s25 ? (44u + sizeof(_g4_t_v146)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v147)) > _g4_s26 ? (44u + sizeof(_g4_t_v147)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v148)) > _g4_s27 ? (48u + sizeof(_g4_t_v148)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v149)) > _g4_s28 ? (48u + sizeof(_g4_t_v149)) : _g4_s28,
    _g4_s30 = (48u + sizeof(_g4_t_v150)) > _g4_s29 ? (48u + sizeof(_g4_t_v150)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v151)) > _g4_s30 ? (48u + sizeof(_g4_t_v151)) : _g4_s30,
    _g4_s32 = (48u + sizeof(_g4_t_v152)) > _g4_s31 ? (48u + sizeof(_g4_t_v152)) : _g4_s31,
    _g4_s33 = (48u + sizeof(_g4_t_v153)) > _g4_s32 ? (48u + sizeof(_g4_t_v153)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v154)) > _g4_s33 ? (48u + sizeof(_g4_t_v154)) : _g4_s33,
    _g4_s35 = (48u + sizeof(_g4_t_v155)) > _g4_s34 ? (48u + sizeof(_g4_t_v155)) : _g4_s34,
    _g4_s36 = (48u + sizeof(_g4_t_v156)) > _g4_s35 ? (48u + sizeof(_g4_t_v156)) : _g4_s35,
    _g4_s37 = (48u + sizeof(_g4_t_v157)) > _g4_s36 ? (48u + sizeof(_g4_t_v157)) : _g4_s36,
    _g4_s38 = (48u + sizeof(_g4_t_v158)) > _g4_s37 ? (48u + sizeof(_g4_t_v158)) : _g4_s37,
    _g4_s39 = (48u + sizeof(_g4_t_v159)) > _g4_s38 ? (48u + sizeof(_g4_t_v159)) : _g4_s38,
    _g4_s40 = (48u + sizeof(_g4_t_v160)) > _g4_s39 ? (48u + sizeof(_g4_t_v160)) : _g4_s39,
    _g4_s41 = (48u + sizeof(_g4_t_v161)) > _g4_s40 ? (48u + sizeof(_g4_t_v161)) : _g4_s40,
    _g4_s42 = (52u + sizeof(_g4_t_v162)) > _g4_s41 ? (52u + sizeof(_g4_t_v162)) : _g4_s41,
    _g4_s43 = (52u + sizeof(_g4_t_v163)) > _g4_s42 ? (52u + sizeof(_g4_t_v163)) : _g4_s42,
    _g4_s44 = (56u + sizeof(_g4_t_v164)) > _g4_s43 ? (56u + sizeof(_g4_t_v164)) : _g4_s43,
    _g4_s45 = (60u + sizeof(_g4_t_v165)) > _g4_s44 ? (60u + sizeof(_g4_t_v165)) : _g4_s44,
    _g4_s46 = (64u + sizeof(_g4_t_v166)) > _g4_s45 ? (64u + sizeof(_g4_t_v166)) : _g4_s45,
    _g4_s47 = (68u + sizeof(_g4_t_v167)) > _g4_s46 ? (68u + sizeof(_g4_t_v167)) : _g4_s46,
    _g4_s48 = (72u + sizeof(_g4_t_v168)) > _g4_s47 ? (72u + sizeof(_g4_t_v168)) : _g4_s47,
    _g4_s49 = (76u + sizeof(_g4_t_v169)) > _g4_s48 ? (76u + sizeof(_g4_t_v169)) : _g4_s48,
    _g4_s50 = (80u + sizeof(_g4_t_v170)) > _g4_s49 ? (80u + sizeof(_g4_t_v170)) : _g4_s49,
    _g4_s51 = (84u + sizeof(_g4_t_v171)) > _g4_s50 ? (84u + sizeof(_g4_t_v171)) : _g4_s50,
    _g4_s52 = (88u + sizeof(_g4_t_v172)) > _g4_s51 ? (88u + sizeof(_g4_t_v172)) : _g4_s51,
    _g4_s53 = (92u + sizeof(_g4_t_v173)) > _g4_s52 ? (92u + sizeof(_g4_t_v173)) : _g4_s52,
    _g4_s54 = (96u + sizeof(_g4_t_v174)) > _g4_s53 ? (96u + sizeof(_g4_t_v174)) : _g4_s53,
    _g4_s55 = (100u + sizeof(_g4_t_v175)) > _g4_s54 ? (100u + sizeof(_g4_t_v175)) : _g4_s54,
    _g4_s56 = (108u + sizeof(_g4_t_v176)) > _g4_s55 ? (108u + sizeof(_g4_t_v176)) : _g4_s55,
    _g4_s57 = (112u + sizeof(_g4_t_v177)) > _g4_s56 ? (112u + sizeof(_g4_t_v177)) : _g4_s56
  };
  alignas(16) uint8_t _g4_sf[_g4_s57];
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 4u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 8u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 12u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 16u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 16u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 20u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 20u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 24u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 24u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 28u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 28u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 28u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 32u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 32u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 32u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 32u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 36u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 36u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 36u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 36u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 36u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 36u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 40u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 40u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 40u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 44u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 44u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 48u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 48u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 48u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 48u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 48u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 48u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 48u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 48u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 48u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 48u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 48u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 48u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 48u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 48u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 52u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 52u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 56u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 60u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 64u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 68u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 72u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 76u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 80u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 84u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 88u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 92u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 96u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 100u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 108u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 112u);

  v175 = (hkArrayUtil::Self *)&self;
  v2 = a2;
  v3 = self;
  v146 = (hkpExtendedMeshShape::Self *)(self);
  v162 = (hkpExtendedMeshShape::Self *)hkpExtendedMeshShape::expandOneTriangleSubparts(self);
  *(uint32_t *)v162 = *(uint32_t *)v2;
  *((uint32_t *)v162 + 1) = *((uint32_t *)v2 + 1);
  *((uint32_t *)v162 + 2) = *((uint32_t *)v2 + 2);
  *((uint32_t *)v162 + 3) = *((uint32_t *)v2 + 3);
  *((uint32_t *)v162 + 4) = *((uint32_t *)v2 + 4);
  *((uint32_t *)v162 + 5) = *((uint32_t *)v2 + 5);
  *((uint32_t *)v162 + 6) = *((uint32_t *)v2 + 6);
  *((uint32_t *)v162 + 7) = *((uint32_t *)v2 + 7);
  *((uint32_t *)v162 + 8) = *((uint32_t *)v2 + 8);
  *((uint16_t *)v162 + 18) = *((uint16_t *)v2 + 18);
  *((uint32_t *)v162 + 10) = *((uint32_t *)v2 + 10);
  *((uint16_t *)v162 + 22) = *((uint16_t *)v2 + 22);
  *((uint8_t *)v162 + 46) = *((uint8_t *)v2 + 46);
  *((uint8_t *)v162 + 47) = *((uint8_t *)v2 + 47);
  *((uint32_t *)v162 + 12) = *((uint32_t *)v2 + 12);
  *((uint32_t *)v162 + 13) = *((uint32_t *)v2 + 13);
  *((uint32_t *)v162 + 14) = *((uint32_t *)v2 + 14);
  *((uint32_t *)v162 + 15) = *((uint32_t *)v2 + 15);
  *((uint32_t *)v162 + 16) = *((uint32_t *)v2 + 16);
  *((uint32_t *)v162 + 17) = *((uint32_t *)v2 + 17);
  *((uint32_t *)v162 + 18) = *((uint32_t *)v2 + 18);
  *((uint32_t *)v162 + 19) = *((uint32_t *)v2 + 19);
  *((uint32_t *)v162 + 20) = *((uint32_t *)v2 + 20);
  *((uint32_t *)v162 + 21) = *((uint32_t *)v2 + 21);
  *((uint32_t *)v162 + 22) = *((uint32_t *)v2 + 22);
  *((uint32_t *)v162 + 23) = *((uint32_t *)v2 + 23);
  *((uint32_t *)v162 + 24) = *((uint32_t *)v2 + 24);
  *((uint32_t *)v162 + 25) = *((uint32_t *)v2 + 25);
  *((uint32_t *)v162 + 26) = *((uint32_t *)v2 + 26);
  *((uint32_t *)v162 + 27) = *((uint32_t *)v2 + 27);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (hkString::Self *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, hkpExtendedMeshShape::Self *, hkString::Self *, hkpExtendedMeshShape::Self *, int, float, float, float, float, float, float, float, float, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     104,
                     v121,
                     v122,
                     v123,
                     v124,
                     v126,
                     v128,
                     v130,
                     v133,
                     v137,
                     v143,
                     v146,
                     v148,
                     v162,
                     v164,
                     COERCE_FLOAT(LODWORD(v165)),
                     COERCE_FLOAT(LODWORD(v166)),
                     COERCE_FLOAT(LODWORD(v167)),
                     COERCE_FLOAT(LODWORD(v168)),
                     COERCE_FLOAT(LODWORD(v169)),
                     COERCE_FLOAT(LODWORD(v170)),
                     COERCE_FLOAT(LODWORD(v171)),
                     COERCE_FLOAT(LODWORD(v172)),
                     v173,
                     v174);
  *((uint32_t *)v5 + 1) = -65535;
  *((uint32_t *)v5 + 2) = 0;
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209A4C0);
  *((uint32_t *)v5 + 3) = 0;
  *((uint32_t *)v5 + 4) = 0x80000000;
  *((uint32_t *)v5 + 5) = 0;
  *((uint32_t *)v5 + 6) = 0;
  *((uint32_t *)v5 + 7) = 0x80000000;
  *((uint32_t *)v5 + 8) = 0;
  *((uint32_t *)v5 + 9) = 0;
  *((uint32_t *)v5 + 10) = 0x80000000;
  *((uint32_t *)v5 + 11) = 0;
  *((uint32_t *)v5 + 12) = 0;
  *((uint32_t *)v5 + 13) = 0x80000000;
  *((uint32_t *)v5 + 14) = 0;
  *((uint32_t *)v5 + 15) = 0;
  *((uint32_t *)v5 + 16) = 0x80000000;
  *((uint32_t *)v5 + 17) = 0;
  *((uint32_t *)v5 + 18) = 0;
  *((uint32_t *)v5 + 19) = 0x80000000;
  *((uint32_t *)v5 + 20) = 0;
  *((uint32_t *)v5 + 21) = 0;
  *((uint32_t *)v5 + 22) = 0x80000000;
  *((uint32_t *)v5 + 23) = 0;
  *((uint32_t *)v5 + 24) = 0;
  *((uint32_t *)v5 + 25) = 0x80000000;
  v6 = *((uint32_t *)v3 + 61);
  if ( v6 == (*((uint32_t *)v3 + 62) & 0x3FFFFFFF) )
  {
    v161 = v5;
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpExtendedMeshShape::Self *)((char *)v147 + 240),
      4,
      v177);
    v6 = *((uint32_t *)v147 + 61);
    v5 = v161;
  }
  *(uint32_t *)(*((uint32_t *)v147 + 60) + 4 * v6) = (uint32_t)(uintptr_t)(v5);
  v7 = *((uint32_t *)v147 + 61);
  *((uint32_t *)v147 + 61) = v7 + 1;
  v144 = *(int **)(*((uint32_t *)v147 + 60) + 4 * v7);
  v8 = v144[3];
  v9 = v144[4] & 0x3FFFFFFF;
  v10 = (char *)(v8 + *((uint32_t *)v2 + 7));
  if ( (int)(uintptr_t)(v10) > v9 )
  {
    v11 = 2 * v9;
    v149 = *((hkString::Self **)v2 + 7);
    savedregs = 16;
    v175 = (hkArrayUtil::Self *)&v164;
    if ( v11 < (int)(uintptr_t)(v10) )
      v11 = (int)(uintptr_t)(v10);
    hkArrayUtil::reserve(v175, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v144 + 2, v11, savedregs);
    v10 = (char *)v149 + v144[3];
  }
  v144[3] = (int)(uintptr_t)(v10);
  v12 = v144[2];
  v13 = *((int **)v2 + 6);
  v14 = v12 + 16 * v8;
  if ( *((int *)v2 + 7) > 0 )
  {
    v15 = 0;
    do
    {
      v16 = v13[2];
      v14 += 16;
      v17 = v13[1];
      ++v15;
      v18 = *v13;
      *(uint32_t *)(v14 - 4) = 0;
      *(uint32_t *)(v14 - 16) = v18;
      *(uint32_t *)(v14 - 12) = v17;
      *(uint32_t *)(v14 - 8) = v16;
      v13 = (int *)((char *)v13 + *((uint16_t *)v2 + 18));
    }
    while ( *((uint32_t *)v2 + 7) > v15 );
    v12 = v144[2];
  }
  *((uint32_t *)v163 + 6) = v12;
  *((uint16_t *)v163 + 18) = 16;
  *((uint32_t *)v163 + 7) = *((uint32_t *)v2 + 7);
  v19 = *((uint8_t *)v2 + 46);
  if ( v19 == 1 )
  {
    v20 = *((uint16_t *)v2 + 22);
    v21 = 4;
    if ( v20 < 3 )
      v21 = *((uint16_t *)v2 + 22);
    *((uint16_t *)v163 + 22) = v21;
    v22 = *((uint32_t *)v2 + 5);
    v23 = (hkAabb::Self *)(v22 + 2);
    if ( v20 != 1 )
    {
      v23 = (hkAabb::Self *)(4 * v22);
      v24 = 2 * v22 + 1;
      if ( v20 == 2 )
        v23 = (hkAabb::Self *)v24;
    }
    v25 = (hkString::Self *)v144[6];
    v26 = v144[7] & 0x3FFFFFFF;
    v27 = (char *)v23 + (uint32_t)(uintptr_t)(v25);
    if ( (int)(uintptr_t)(v23) + (int)(uintptr_t)(v25) > v26 )
    {
      v28 = 2 * v26;
      v150 = (hkString::Self *)v144[6];
      savedregs = 1;
      v175 = (hkArrayUtil::Self *)&v164;
      if ( (int)(uintptr_t)(v27) >= v28 )
        v28 = (int)(uintptr_t)(v23) + (uint32_t)(uintptr_t)(v25);
      hkArrayUtil::reserve(v175, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v144 + 5, v28, savedregs);
      v25 = v150;
      v27 = (char *)v23 + v144[6];
    }
    v29 = (hkString::Self *)((char *)v25 + v144[5]);
    v144[6] = (int)(uintptr_t)(v27);
    v176 = v23;
    v138 = v29;
    v30 = v29;
    hkString::memSet(v29, nullptr, (size_t)v176);
    v31 = *((uint8_t **)v2 + 8);
    if ( *((int *)v2 + 5) > 0 )
    {
      v32 = v30;
      v151 = nullptr;
      do
      {
        v151 = (hkString::Self *)((char *)v151 + 1);
        *(uint8_t *)v32 = *v31;
        *((uint8_t *)v32 + 1) = v31[1];
        *((uint8_t *)v32 + 2) = v31[2];
        v32 = (hkString::Self *)((char *)v32 + *((uint16_t *)v163 + 22));
        v31 += *((uint16_t *)v2 + 22);
      }
      while ( *((uint32_t *)v2 + 5) > (int)(uintptr_t)(v151) );
    }
  }
  else
  {
    v39 = v19 == 2;
    v49 = *((uint16_t *)v2 + 22);
    if ( v39 )
    {
      v50 = v49 >> 1;
      v51 = 8;
      if ( (int16_t)v50 <= 2 )
        v51 = 2 * v50;
      *((uint16_t *)v163 + 22) = v51;
      v52 = *((uint32_t *)v2 + 5);
      v53 = v52 + 2;
      if ( (uint16_t)v50 != 1 )
      {
        v53 = 4 * v52;
        v54 = 2 * v52 + 1;
        if ( (uint16_t)v50 == 2 )
          v53 = v54;
      }
      v55 = (hkString::Self *)v144[9];
      v56 = v144[10] & 0x3FFFFFFF;
      v57 = (int)(uintptr_t)(v55) + v53;
      if ( (int)(uintptr_t)(v55) + v53 > v56 )
      {
        v104 = 2 * v56;
        v159 = (hkString::Self *)v144[9];
        savedregs = 2;
        v175 = (hkArrayUtil::Self *)&v164;
        if ( v57 < v104 )
          v57 = v104;
        hkArrayUtil::reserve(v175, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v144 + 8, v57, savedregs);
        v55 = v159;
        v57 = v53 + v144[9];
      }
      v144[9] = v57;
      v138 = (hkString::Self *)((char *)v55 + v144[8] + (uint32_t)(uintptr_t)(v55));
      hkString::memSet(v138, nullptr, 2 * v53);
      v58 = *((uint16_t **)v2 + 8);
      if ( *((int *)v2 + 5) > 0 )
      {
        v59 = v138;
        v60 = 0;
        do
        {
          ++v60;
          *(uint16_t *)v59 = *v58;
          *((uint16_t *)v59 + 1) = v58[1];
          *((uint16_t *)v59 + 2) = v58[2];
          v59 = (hkString::Self *)((char *)v59 + *((uint16_t *)v163 + 22));
          v58 = (uint16_t *)((char *)v58 + *((uint16_t *)v2 + 22));
        }
        while ( *((uint32_t *)v2 + 5) > v60 );
      }
    }
    else
    {
      v66 = v49 >> 2;
      v67 = 16;
      if ( (int16_t)v66 <= 2 )
        v67 = 4 * v66;
      *((uint16_t *)v163 + 22) = v67;
      v68 = *((uint32_t *)v2 + 5);
      v69 = v68 + 2;
      if ( (uint16_t)v66 != 1 )
      {
        v69 = 4 * v68;
        v70 = 2 * v68 + 1;
        if ( (uint16_t)v66 == 2 )
          v69 = v70;
      }
      v71 = (hkString::Self *)v144[12];
      v72 = v144[13] & 0x3FFFFFFF;
      v73 = (int)(uintptr_t)(v71) + v69;
      if ( (int)(uintptr_t)(v71) + v69 > v72 )
      {
        v105 = 2 * v72;
        v160 = (hkString::Self *)v144[12];
        savedregs = 4;
        v175 = (hkArrayUtil::Self *)&v164;
        if ( v73 < v105 )
          v73 = v105;
        hkArrayUtil::reserve(v175, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v144 + 11, v73, savedregs);
        v71 = v160;
        v73 = v69 + v144[12];
      }
      v144[12] = v73;
      v138 = (hkString::Self *)(v144[11] + 4 * (uint32_t)(uintptr_t)(v71));
      hkString::memSet(v138, nullptr, 4 * v69);
      v74 = *((uint32_t **)v2 + 8);
      if ( *((int *)v2 + 5) > 0 )
      {
        v75 = v138;
        v76 = 0;
        do
        {
          ++v76;
          *(uint32_t *)v75 = *v74;
          *((uint32_t *)v75 + 1) = v74[1];
          *((uint32_t *)v75 + 2) = v74[2];
          v75 = (hkString::Self *)((char *)v75 + *((uint16_t *)v163 + 22));
          v74 = (uint32_t *)((char *)v74 + *((uint16_t *)v2 + 22));
        }
        while ( *((uint32_t *)v2 + 5) > v76 );
      }
    }
  }
  *((uint8_t *)v163 + 46) = *((uint8_t *)v2 + 46);
  *((uint32_t *)v163 + 5) = *((uint32_t *)v2 + 5);
  *((uint8_t *)v163 + 47) = *((uint8_t *)v2 + 47);
  *((uint32_t *)v163 + 8) = (uint32_t)(uintptr_t)(v138);
  *(uint16_t *)v163 = *(uint16_t *)v2 & 6 | *(uint16_t *)v163 & 0xFFF9;
  v33 = *((uint8_t **)v2 + 2);
  if ( v33 == nullptr )
  {
    *((uint32_t *)v163 + 2) = 0;
    *((uint16_t *)v163 + 3) = 0;
    goto LABEL_75;
  }
  if ( (*(uint16_t *)v2 & 6) == 2 )
  {
    if ( *((uint16_t *)v2 + 3) == 0 )
    {
      v106 = v144[15];
      if ( v106 == (v144[16] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v144 + 14),
          1,
          v177);
        v106 = v144[15];
      }
      *(uint8_t *)(v144[14] + v106) = *v33;
      v107 = v144[15];
      v108 = v144[14] + v107;
      v144[15] = v107 + 1;
      *((uint32_t *)v163 + 2) = v108;
      v36 = v163;
      v37 = *((uint16_t *)v2 + 3);
      goto LABEL_30;
    }
    v96 = v144[15];
    v97 = v144[16] & 0x3FFFFFFF;
    v98 = (char *)(v96 + *((uint32_t *)v2 + 5));
    if ( (int)(uintptr_t)(v98) > v97 )
    {
      v99 = 2 * v97;
      v157 = *((hkString::Self **)v2 + 5);
      savedregs = 1;
      v175 = (hkArrayUtil::Self *)&v164;
      if ( v99 < (int)(uintptr_t)(v98) )
        v99 = (int)(uintptr_t)(v98);
      hkArrayUtil::reserve(v175, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v144 + 14, v99, savedregs);
      v98 = (char *)v157 + v144[15];
    }
    v100 = v144[14] + v96;
    v144[15] = (int)(uintptr_t)(v98);
    *((uint32_t *)v163 + 2) = v100;
    v101 = 0;
    v102 = *((uint8_t **)v2 + 2);
    if ( *((int *)v2 + 5) > 0 )
    {
      do
      {
        *(uint8_t *)(v100 + v101) = *v102;
        v37 = *((uint16_t *)v2 + 3);
        ++v101;
        v102 += v37;
      }
      while ( *((uint32_t *)v2 + 5) > v101 );
      v36 = v163;
      goto LABEL_30;
    }
  }
  else
  {
    if ( *((uint16_t *)v2 + 3) == 0 )
    {
      v34 = v144[24];
      if ( v34 == (v144[25] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v144 + 23),
          2,
          v177);
        v34 = v144[24];
      }
      *(uint16_t *)(v144[23] + 2 * v34) = *(uint16_t *)v33;
      v35 = v144[24];
      v144[24] = v35 + 1;
      *((uint32_t *)v163 + 2) = v144[23] + 2 * v35;
      v36 = v163;
      v37 = *((uint16_t *)v2 + 3);
      goto LABEL_30;
    }
    v61 = v144[24];
    v62 = v144[25] & 0x3FFFFFFF;
    v63 = (char *)(v61 + *((uint32_t *)v2 + 5));
    if ( (int)(uintptr_t)(v63) > v62 )
    {
      v103 = 2 * v62;
      v158 = *((hkString::Self **)v2 + 5);
      savedregs = 2;
      v175 = (hkArrayUtil::Self *)&v164;
      if ( v103 < (int)(uintptr_t)(v63) )
        v103 = (int)(uintptr_t)(v63);
      hkArrayUtil::reserve(v175, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v144 + 23, v103, savedregs);
      v63 = (char *)v158 + v144[24];
    }
    v144[24] = (int)(uintptr_t)(v63);
    v154 = (hkString::Self *)(v61 + v61 + v144[23]);
    *((uint32_t *)v163 + 2) = (uint32_t)(uintptr_t)(v154);
    v64 = 0;
    v65 = *((uint16_t **)v2 + 2);
    if ( *((int *)v2 + 5) > 0 )
    {
      do
      {
        *((uint16_t *)v154 + v64) = *v65;
        v37 = *((uint16_t *)v2 + 3);
        ++v64;
        v65 = (uint16_t *)((char *)v65 + v37);
      }
      while ( *((uint32_t *)v2 + 5) > v64 );
      v36 = v163;
      goto LABEL_30;
    }
  }
  v37 = *((uint16_t *)v2 + 3);
  v36 = v163;
LABEL_30:
  *((uint16_t *)v36 + 3) = v37;
  if ( v37 == 0 )
    goto LABEL_33;
  v38 = (*(uint16_t *)v36 & 6u) >> 1;
  if ( v38 == 1 )
  {
    v36 = v163;
    *((uint16_t *)v163 + 3) = 1;
    goto LABEL_33;
  }
  v39 = v38 == 2;
  v36 = v163;
  if ( !v39 )
  {
LABEL_33:
    v40 = *((uint32_t *)v36 + 2);
    goto LABEL_34;
  }
  *((uint16_t *)v163 + 3) = 2;
  v40 = *((uint32_t *)v163 + 2);
LABEL_34:
  if ( v40 != 0 )
  {
    if ( *((void **)v147 + 44) == &hkpNamedMeshMaterialClass )
    {
      v141 = *(uint16_t *)v2 >> 3;
      v109 = v144[21] + v141;
      v110 = v144[22] & 0x3FFFFFFF;
      v135 = v144[21];
      v111 = v135;
      if ( v109 > v110 )
      {
        v112 = 2 * v110;
        savedregs = 8;
        v175 = (hkArrayUtil::Self *)&v164;
        if ( v112 < v109 )
          v112 = v109;
        hkArrayUtil::reserve(v175, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v144 + 20, v112, savedregs);
        v111 = v144[21];
      }
      v113 = v144[20];
      if ( v141 != 0 )
      {
        v132 = v2;
        v114 = (hkStringPtr::Self *)(v113 + 8 * v111 + 4);
        v115 = 0;
        do
        {
          ++v115;
          hkStringPtr::Construct(v114, (hkString::Self *)"Default");
          v114 = (hkStringPtr::Self *)((char *)v114 + 8);
          *((uint32_t *)v114 - 3) = 0;
        }
        while ( v141 > v115 );
        v2 = v132;
        v111 = v144[21];
        v113 = v144[20];
      }
      v144[21] = v141 + v111;
      if ( *(uint16_t *)v2 >> 3 != 0 )
      {
        v116 = v2;
        v117 = (hkStringPtr::Self *)(v113 + 8 * v135 + 4);
        v118 = *((uint32_t **)v2 + 3);
        v119 = 0;
        v120 = v116;
        do
        {
          v136 = v120;
          v142 = v119;
          hkStringPtr::Construct(v117, (hkString::Self *)"Default");
          *((uint32_t *)v117 - 1) = 0;
          *((uint32_t *)v117 - 1) = *v118;
          hkStringPtr::opAssign(v117, (const hkStringPtr::Self *)(v118 + 1));
          v120 = v136;
          v119 = v142 + 1;
          v117 = (hkStringPtr::Self *)((char *)v117 + 8);
          v118 = (uint32_t *)((char *)v118 + *((int16_t *)v136 + 2));
        }
        while ( *(uint16_t *)v136 >> 3 > v142 + 1 );
        v2 = v136;
        v113 = v144[20];
      }
      v78 = v163;
      *((uint32_t *)v163 + 3) = v113;
      if ( *((uint16_t *)v2 + 2) != 0 )
      {
        v77 = v163;
        *((uint16_t *)v163 + 2) = 8;
        goto LABEL_74;
      }
      v94 = v163;
    }
    else
    {
      v41 = v144[18];
      v42 = v144[19] & 0x3FFFFFFF;
      v43 = (char *)(v41 + (*(uint16_t *)v2 >> 3));
      if ( (int)(uintptr_t)(v43) > v42 )
      {
        v44 = 2 * v42;
        v152 = (hkString::Self *)(*(uint16_t *)v2 >> 3);
        savedregs = 12;
        v175 = (hkArrayUtil::Self *)&v164;
        if ( v44 < (int)(uintptr_t)(v43) )
          v44 = (int)(uintptr_t)(v43);
        hkArrayUtil::reserve(v175, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v144 + 17, v44, savedregs);
        v43 = (char *)v152 + v144[18];
      }
      v144[18] = (int)(uintptr_t)(v43);
      v45 = v144[17];
      v46 = v45 + 12 * v41;
      v47 = *((uint32_t *)v2 + 3);
      if ( *(uint16_t *)v2 >> 3 != 0 )
      {
        v48 = v46;
        v153 = nullptr;
        v139 = v2;
        do
        {
          *(uint32_t *)v48 = 0;
          *(uint16_t *)(v48 + 4) = 0;
          *(uint16_t *)(v48 + 6) = 0;
          *(uint32_t *)(v48 + 8) = 0;
          v39 = *((uint32_t *)v147 + 44) == (uint32_t)(uintptr_t)(&hkpStorageExtendedMeshShapeMaterialClass);
          *(uint32_t *)v48 = *(uint32_t *)v47;
          if ( v39 )
          {
            *(uint16_t *)(v48 + 4) = *(uint16_t *)(v47 + 4);
            *(uint16_t *)(v48 + 6) = *(uint16_t *)(v47 + 6);
            *(uint32_t *)(v48 + 8) = *(uint32_t *)(v47 + 8);
          }
          else
          {
            *(uint16_t *)(v48 + 6) = 16256;
          }
          v2 = v139;
          v153 = (hkString::Self *)((char *)v153 + 1);
          v48 += 12;
          v47 += *((int16_t *)v139 + 2);
        }
        while ( *(uint16_t *)v139 >> 3 > (int)(uintptr_t)(v153) );
        v45 = v144[17];
      }
      v77 = v163;
      *((uint32_t *)v163 + 3) = v45;
      if ( *((uint16_t *)v2 + 2) != 0 )
      {
        v78 = v163;
        *((uint16_t *)v163 + 2) = 12;
LABEL_74:
        *(uint16_t *)v77 = *(uint16_t *)v2 & 0xFFF8 | *(uint16_t *)v78 & 7;
        goto LABEL_75;
      }
      v94 = v163;
    }
    v95 = *(uint16_t *)v94;
    *((uint16_t *)v94 + 2) = 0;
    *(uint16_t *)v94 = v95 & 7 | 8;
  }
LABEL_75:
  v79 = *((float *)v147 + 36);
g4_m128_raw(v80) = *((unsigned int *)v147 + 40);
  *(float *)g4_m128_ptr<int32_t>(v80) = *(float *)g4_m128_ptr<int32_t>(v80) - v79;
  v155 = *((float *)v147 + 38);
  v81 = COERCE_FLOAT(_mm_cvtsi128_si32(v80));
g4_m128_lane<int32_t>(v80, 0) = *((uint32_t *)v147 + 37);
  v131 = *((float *)v147 + 40) + v79;
  v145 = *((float *)v147 + 41) - *(float *)g4_m128_ptr<int32_t>(v80);
  v82 = *((float *)v147 + 42);
  v83 = *((float *)v147 + 39);
  v129 = *((float *)v147 + 41) + *(float *)g4_m128_ptr<int32_t>(v80);
  v127 = v155 + v82;
  v140 = v82 - v155;
g4_m128_raw(v84) = *((unsigned int *)v147 + 43);
  *(float *)g4_m128_ptr<int32_t>(v84) = *(float *)g4_m128_ptr<int32_t>(v84) + v83;
  v134 = *((float *)v147 + 43) - v83;
  v85 = COERCE_FLOAT(_mm_cvtsi128_si32(v84));
  hkpExtendedMeshShape::calcAabbExtents(v163, (hkpExtendedMeshShape::TrianglesSubpart::Self *)&v165, v176);
  v86 = *((float *)v147 + 58);
  v87 = v171 + v86;
  v125 = v86 + v172;
g4_m128_lane<int32_t>(v84, 0) = fminf(v81, v165 - v86);
g4_m128_lane<int32_t>(v80, 0) = fminf(v145, v166 - v86);
  v88 = fminf(v134, v168 - v86);
  v156 = fminf(v140, v167 - v86);
  v89 = fmaxf(v131, v169 + v86);
  v90 = fmaxf(v129, v170 + v86);
  *((float *)v147 + 40) = (float)(*(float *)g4_m128_ptr<int32_t>(v84) + v89) * 0.5;
  *((float *)v147 + 36) = (float)(v89 - *(float *)g4_m128_ptr<int32_t>(v84)) * 0.5;
  v91 = fmaxf(v127, v87);
  v92 = fmaxf(v85, v125);
  *((float *)v147 + 41) = (float)(*(float *)g4_m128_ptr<int32_t>(v80) + v90) * 0.5;
  *((float *)v147 + 37) = (float)(v90 - *(float *)g4_m128_ptr<int32_t>(v80)) * 0.5;
  *((float *)v147 + 42) = (float)(v156 + v91) * 0.5;
  *((float *)v147 + 38) = (float)(v91 - v156) * 0.5;
  *((float *)v147 + 43) = (float)(v88 + v92) * 0.5;
  *((float *)v147 + 39) = (float)(v92 - v88) * 0.5;
  result = hkpExtendedMeshShape::getNumChildShapesInTrianglesSubpart(v147, v163, *((uint32_t *)v147 + 47) - 1);
  *((uint32_t *)v147 + 57) += result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::MeshSubpartStorage::Destroy_ea16bb3a0  (binary VA: 0x16bb3a0)
// Original: hkpStorageExtendedMeshShape::MeshSubpartStorage::~MeshSubpartStorage
// ----------------------------------------------------------------------------
void hkpStorageExtendedMeshShape::MeshSubpartStorage::Destroy_ea16bb3a0(hkpStorageExtendedMeshShape::MeshSubpartStorage::Self *self)
{
  int v1;
  int v2;
  int v3;
  hkStringPtr::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A4C0);
  v1 = *((uint32_t *)self + 25);
  *((uint32_t *)self + 24) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 23),
      2 * (v1 & 0x3FFFFFFF));
  v2 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 23) = 0;
  v3 = v2 - 1;
  *((uint32_t *)self + 25) = 0x80000000;
  v4 = (hkStringPtr::Self *)(*((uint32_t *)self + 20) + 8 * (v2 - 1) + 4);
  if ( v2 - 1 >= 0 )
  {
    do
    {
      --v3;
      hkStringPtr::Destroy(v4);
      v4 = (hkStringPtr::Self *)((char *)v4 - 8);
    }
    while ( v3 != -1 );
  }
  v5 = *((uint32_t *)self + 22);
  *((uint32_t *)self + 21) = 0;
  if ( v5 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 20),
      8 * v5);
  v6 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 22) = 0x80000000;
  *((uint32_t *)self + 18) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 17),
      12 * v6);
  v7 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 19) = 0x80000000;
  *((uint32_t *)self + 15) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      v7 & 0x3FFFFFFF);
  v8 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 12) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      4 * v8);
  v9 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      2 * (v9 & 0x3FFFFFFF));
  v10 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      v10 & 0x3FFFFFFF);
  v11 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v11 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      16 * v11);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v12 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v13 = 104;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v13 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v12, 12, self, v13);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::MeshSubpartStorage::Construct  (binary VA: 0x16bb620)
// Original: hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage
// ----------------------------------------------------------------------------
uint32_t * hkpStorageExtendedMeshShape::MeshSubpartStorage::Construct(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_209A4C0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::ShapeSubpartStorage::Construct  (binary VA: 0x16bb640)
// Original: hkpStorageExtendedMeshShape::ShapeSubpartStorage::ShapeSubpartStorage
// ----------------------------------------------------------------------------
uint32_t * hkpStorageExtendedMeshShape::ShapeSubpartStorage::Construct(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_209A4E0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::Construct  (binary VA: 0x16bb660)
// Original: hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape
// ----------------------------------------------------------------------------
uint32_t * hkpStorageExtendedMeshShape::Construct(uint32_t *a1, uint32_t *a2)
{
  uint32_t *result;
  int v3;
  int v4;
  int16_t v5;
  int v6;
  bool v7;
  uint32_t *v8;
  char v9;
  int i;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;

  hkpExtendedMeshShape::Construct((__m128i *)a1, (int)(uintptr_t)a2);
  a1[4] = ((uint32_t)(uintptr_t)&off_209A584);
  result = a2;
  *a1 = ((uint32_t)(uintptr_t)&off_209A508);
  if ( a2 == nullptr )
    return result;
  result = (uint32_t *)a1[47];
  v3 = 0;
  v4 = 0;
  if ( (int)(uintptr_t)(result) > 0 )
  {
    while ( 1 )
    {
      v6 = a1[46] + v3;
      v14 = v3;
      hkpStorageExtendedMeshShape::MeshSubpartStorage::Construct(*(uint32_t **)(a1[60] + 4 * v4));
      v7 = *(uint16_t *)(v6 + 36) == 16;
      v8 = *(uint32_t **)(a1[60] + 4 * v4);
      *(uint32_t *)(v6 + 24) = v8[2];
      if ( v7 )
        *(uint16_t *)(v6 + 36) = 16;
      v9 = *(uint8_t *)(v6 + 46);
      if ( v9 == 1 )
        break;
      if ( v9 != 2 )
      {
        *(uint32_t *)(v6 + 32) = v8[11];
LABEL_5:
        if ( (*(uint16_t *)v6 & 6) != 2 )
          goto LABEL_6;
        goto LABEL_14;
      }
      *(uint32_t *)(v6 + 32) = v8[8];
      if ( (*(uint16_t *)v6 & 6) != 2 )
      {
LABEL_6:
        *(uint32_t *)(v6 + 8) = v8[23];
        if ( v8[21] == 0 )
          goto LABEL_15;
        goto LABEL_7;
      }
LABEL_14:
      *(uint32_t *)(v6 + 8) = v8[14];
      if ( v8[21] == 0 )
      {
LABEL_15:
        result = (uint32_t *)v8[17];
        v5 = 12;
        goto LABEL_8;
      }
LABEL_7:
      result = (uint32_t *)v8[20];
      v5 = 8;
LABEL_8:
      *(uint16_t *)(v6 + 4) = v5;
      *(uint32_t *)(v6 + 12) = (uint32_t)(uintptr_t)(result);
      ++v4;
      v3 = v14 + 112;
      if ( a1[47] <= v4 )
        goto LABEL_18;
    }
    *(uint32_t *)(v6 + 32) = v8[5];
    goto LABEL_5;
  }
LABEL_18:
  for ( i = 0; a1[50] > i; ++i )
  {
    v12 = a1[49] + (i << 6);
    result = hkpStorageExtendedMeshShape::ShapeSubpartStorage::Construct(*(uint32_t **)(a1[63] + 4 * i));
    v13 = *(uint32_t **)(a1[63] + 4 * i);
    if ( (*(uint16_t *)v12 & 6) == 2 )
      v11 = v13[2];
    else
      v11 = v13[8];
    *(uint32_t *)(v12 + 8) = v11;
    *(uint32_t *)(v12 + 12) = v13[5];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::Construct  (binary VA: 0x16bb820)
// Original: hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape
// ----------------------------------------------------------------------------
void hkpStorageExtendedMeshShape::Construct(hkpStorageExtendedMeshShape::Self *self, int64_t a2)
{
  hkpExtendedMeshShape::Construct(self, *(float *)&a2, SHIDWORD(a2));
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_209A584);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A508);
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 62) = 0x80000000;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageExtendedMeshShape::Construct  (binary VA: 0x16bb8b0)
// Original: hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape
// ----------------------------------------------------------------------------
void hkpStorageExtendedMeshShape::Construct(hkpStorageExtendedMeshShape::Self *self, const hkpExtendedMeshShape::Self *a2)
{
  const hkpExtendedMeshShape::Self *v2;
  hkpStorageExtendedMeshShape::Self *v3;
  int v4;
  const hkpExtendedMeshShape::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  hkpStorageExtendedMeshShape::Self *thisa;
  typedef const hkpExtendedMeshShape::TrianglesSubpart::Self *_g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef signed int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v17)) > _g4_s2 ? (20u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v19)) > _g4_s4 ? (28u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v20)) > _g4_s5 ? (32u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);

  v2 = a2;
  v3 = self;
  hkpExtendedMeshShape::Construct(self, *((float *)a2 + 58), *((uint32_t *)a2 + 45));
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_209A584);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A508);
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 62) = 0x80000000;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0x80000000;
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint8_t *)self + 20) = *((uint8_t *)a2 + 20);
  if ( *((int *)a2 + 47) > 0 )
  {
    v4 = 0;
    do
    {
      v15 = (const hkpExtendedMeshShape::TrianglesSubpart::Self *)(*((uint32_t *)a2 + 46) + 112 * v4++);
      hkpStorageExtendedMeshShape::addTrianglesSubpart(self, v15);
    }
    while ( v4 < *((uint32_t *)a2 + 47) );
    v2 = a2;
    v3 = self;
  }
  if ( *((int *)v2 + 50) > 0 )
  {
    thisa = v3;
    v5 = v2;
    v6 = 0;
    do
    {
      v7 = v6++;
      hkpStorageExtendedMeshShape::addShapesSubpart(
        thisa,
        (const hkpExtendedMeshShape::ShapesSubpart::Self *)(*((uint32_t *)v5 + 49) + (v7 << 6)));
    }
    while ( v6 < *((uint32_t *)v5 + 50) );
    v2 = v5;
    v3 = thisa;
  }
  v8 = *((uint32_t *)v2 + 53);
  v9 = *((uint32_t *)v3 + 54) & 0x3FFFFFFF;
  if ( v9 >= v8 )
  {
    v12 = *((uint32_t *)v3 + 52);
    v18 = *((uint32_t *)v2 + 53);
  }
  else
  {
    if ( *((int *)v3 + 54) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)v3 + 52),
        2 * v9);
      v8 = *((uint32_t *)v2 + 53);
    }
    v20 = 2 * v8;
    v10 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            &v20);
    v11 = v20;
    *((uint32_t *)v3 + 52) = v10;
    *((uint32_t *)v3 + 54) = v11 / 2;
    v18 = *((uint32_t *)v2 + 53);
    v12 = v10;
    v8 = v18;
  }
  *((uint32_t *)v3 + 53) = v8;
  v19 = *((uint32_t *)v2 + 52);
  if ( v8 > 0 )
  {
    if ( (v12 >= v19 + 16 || v19 >= v12 + 16) && (unsigned int)v18 > 0xA )
    {
      v13 = 0;
      v16 = 0;
      v17 = 8 * ((unsigned int)v18 >> 3);
      do
      {
        ++v16;
        *(__m128i *)(v12 + v13) = *(__m128i *)(v19 + v13);
        v13 += 16;
      }
      while ( (unsigned int)v18 >> 3 > v16 );
      if ( v18 != v17 )
      {
        *(uint16_t *)(v12 + 16 * ((unsigned int)v18 >> 3)) = *(uint16_t *)(v19 + 16 * ((unsigned int)v18 >> 3));
        if ( v17 + 1 < v18 )
        {
          *(uint16_t *)(v12 + 2 * (v17 + 1)) = *(uint16_t *)(v19 + 2 * (v17 + 1));
          if ( v18 > v17 + 2 )
          {
            *(uint16_t *)(v12 + 2 * (v17 + 2)) = *(uint16_t *)(v19 + 2 * (v17 + 2));
            if ( v18 > v17 + 3 )
            {
              *(uint16_t *)(v12 + 2 * (v17 + 3)) = *(uint16_t *)(v19 + 2 * (v17 + 3));
              if ( v18 > v17 + 4 )
              {
                *(uint16_t *)(v12 + 2 * (v17 + 4)) = *(uint16_t *)(v19 + 2 * (v17 + 4));
                if ( v18 > v17 + 5 )
                {
                  *(uint16_t *)(v12 + 2 * (v17 + 5)) = *(uint16_t *)(v19 + 2 * (v17 + 5));
                  if ( v18 > v17 + 6 )
                    *(uint16_t *)(v12 + 2 * (v17 + 6)) = *(uint16_t *)(v19 + 2 * (v17 + 6));
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v14 = 0;
      do
      {
        *(uint16_t *)(v12 + 2 * v14) = *(uint16_t *)(v19 + 2 * v14);
        ++v14;
      }
      while ( v14 != v18 );
    }
  }
  *((uint8_t *)v3 + 220) = *((uint8_t *)v2 + 220);
  hkpExtendedMeshShape::recalcAabbExtents(v3);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageMeshShape::SubpartStorage::staticClass  (binary VA: 0x1ad3e50)
// Original: hkpStorageMeshShape::SubpartStorage::staticClass
// ----------------------------------------------------------------------------
void * hkpStorageMeshShape::SubpartStorage::staticClass()
{
  return &hkpStorageMeshShapeSubpartStorageClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageMeshShape::staticClass  (binary VA: 0x1ad3e70)
// Original: hkpStorageMeshShape::staticClass
// ----------------------------------------------------------------------------
void * hkpStorageMeshShape::staticClass()
{
  return &hkpStorageMeshShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageSampledHeightFieldShape::getHeightAtImpl  (binary VA: 0x1ae5ab0)
// Original: hkpStorageSampledHeightFieldShape::getHeightAtImpl
// ----------------------------------------------------------------------------
long double hkpStorageSampledHeightFieldShape::getHeightAtImpl(hkpStorageSampledHeightFieldShape::Self *self, int a2, int a3)
{
  return *(float *)(*((uint32_t *)self + 32) + 4 * (a2 + *((uint32_t *)self + 10) * a3));
}

// ----------------------------------------------------------------------------
// Function: hkpStorageSampledHeightFieldShape::getTriangleFlipImpl  (binary VA: 0x1ae5ae0)
// Original: hkpStorageSampledHeightFieldShape::getTriangleFlipImpl
// ----------------------------------------------------------------------------
hkpStorageSampledHeightFieldShape::Self * hkpStorageSampledHeightFieldShape::getTriangleFlipImpl(hkpStorageSampledHeightFieldShape::Self *self, int a2)
{
  *(uint8_t *)self = *(uint8_t *)(a2 + 140);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageSampledHeightFieldShape::calcSizeForSpu  (binary VA: 0x1ae5b00)
// Original: hkpStorageSampledHeightFieldShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpStorageSampledHeightFieldShape::calcSizeForSpu(int a1, int a2, int a3)
{
  int result;

  result = -1;
  if ( a3 > 143 )
    return 144;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageSampledHeightFieldShape::collideSpheres  (binary VA: 0x1ae5b20)
// Original: hkpStorageSampledHeightFieldShape::collideSpheres
// ----------------------------------------------------------------------------
void hkpStorageSampledHeightFieldShape::collideSpheres(float *a1, int a2, float *a3)
{
  float *v3;
  float *v4;
  float *v5;
  float v6; // xmm1_4
  __m128i v7;
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  __m128i v11;
  float v12; // xmm2_4
  float v13; // xmm5_4
  float v14;
  float v15; // xmm3_4
  __m128 v16;
  float v17; // xmm0_4
  __m128 v18;
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm5_4
  __m128 v25;
  float v26; // xmm2_4
  float v27; // xmm6_4
  int v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm4_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm6_4
  __m128 v34;
  float v35; // xmm3_4
  float v36; // xmm5_4
  float v37; // xmm0_4
  __m128 v38;
  float v39; // xmm6_4
  float v40; // xmm0_4
  typedef float *_g4_t_v41;
  typedef float *_g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef int _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float *_g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef float _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef float _g4_t_v60;
  typedef char _g4_t_v61[9];
  typedef int **_g4_t_v62;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v41)) > _g4_s0 ? (4u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v42)) > _g4_s1 ? (4u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v43)) > _g4_s2 ? (8u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v44)) > _g4_s3 ? (12u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v45)) > _g4_s4 ? (12u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v46)) > _g4_s5 ? (16u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v47)) > _g4_s6 ? (20u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v48)) > _g4_s7 ? (20u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v49)) > _g4_s8 ? (24u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v50)) > _g4_s9 ? (24u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v51)) > _g4_s10 ? (28u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v52)) > _g4_s11 ? (48u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v53)) > _g4_s12 ? (52u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v54)) > _g4_s13 ? (56u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v55)) > _g4_s14 ? (56u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v56)) > _g4_s15 ? (56u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v57)) > _g4_s16 ? (60u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v58)) > _g4_s17 ? (64u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v59)) > _g4_s18 ? (64u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v60)) > _g4_s19 ? (64u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (71u + sizeof(_g4_t_v61)) > _g4_s20 ? (71u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v62)) > _g4_s21 ? (80u + sizeof(_g4_t_v62)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 71u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 80u);

  v62 = (int **)&a1;
  v3 = a3;
  v57 = *(uint32_t *)(a2 + 4) - 1;
  if ( v57 >= 0 )
  {
    v4 = *(float **)a2;
    v5 = a1;
    do
    {
      *v3 = 0.0;
      v3[1] = 1.0;
      v3[2] = 0.0;
      v3[3] = 3.40282e38f;
g4_m128_raw(v7) = *((unsigned int *)v5 + 24);
      v8 = v5[20];
      v9 = v4[2];
g4_m128_raw(v11) = *((unsigned int *)v5 + 26);
      v10 = v5[22];
      v53 = v4[1];
      v52 = v5[21];
      *(float *)g4_m128_ptr<int32_t>(v11) = fmaxf(fminf((float)(*(float *)g4_m128_ptr<int32_t>(v11) + v9) * v10, 1.8446726e19f), 0.0);
      *(float *)g4_m128_ptr<int32_t>(v7) = fmaxf(fminf((float)(*(float *)g4_m128_ptr<int32_t>(v7) + *v4) * v8, 1.8446726e19f), 0.0) + 65536.0;
      v58 = (uint16_t)((unsigned int)_mm_cvtsi128_si32(v7) >> 7);
      if ( v58 < *((uint32_t *)v5 + 10) - 1 )
      {
        *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) + 65536.0;
        v54 = (uint16_t)((unsigned int)_mm_cvtsi128_si32(v11) >> 7);
        if ( v54 < *((uint32_t *)v5 + 11) - 1 )
        {
          v12 = v10 * v9;
          v13 = *v4 * v8;
          v46 = v13;
          if ( v12 >= 0.0 && v13 >= 0.0 )
          {
            v49 = v4;
            v47 = v13 - (float)v58;
            v51 = v12 - (float)v54;
            (*(void (**)(char *))(*(uint32_t *)v5 + 92))(v61);
            if ( v61[0] != 0 )
            {
              v41 = v49;
              v50 = ((long double (*)(float *, int, int))*(uint32_t *)(*(uint32_t *)v5 + 88))(v5, v58, v54);
              v44 = ((long double (*)(float *, int, int))*(uint32_t *)(*(uint32_t *)v5 + 88))(v5, v58 + 1, v54 + 1);
              v14 = *v5;
              if ( v47 <= v51 )
              {
                v56 = ((long double (*)(float *, int, int))*(uint32_t *)(LODWORD(v14) + 88))(v5, v58, v54 + 1);
g4_m128_raw(v16) = LODWORD(v44);
g4_m128_lane<float>(v16, 0) = v44 - v56;
                v15 = v56 - v50;
                v17 = (float)((float)(v51 * (float)(v56 - v50)) + v50) + (float)(v47 * (float)(v44 - v56));
              }
              else
              {
                *(float *)&v55 = ((long double (*)(float *, int, int))*(uint32_t *)(LODWORD(v14) + 88))(
                                   v5,
                                   v58 + 1,
                                   v54);
                v15 = v44 - *(float *)&v55;
g4_m128_raw(v16) = v55;
g4_m128_lane<float>(v16, 0) = *(float *)&v55 - v50;
                v17 = (float)((float)(v51 * (float)(v44 - *(float *)&v55)) + v50)
                    + (float)(v47 * (float)(*(float *)&v55 - v50));
              }
              v4 = v41;
              v18 = _mm_xor_ps(v16, *(__m128 *)&dword_1C7C1B0);
              v19 = -v15;
              v48 = v17;
              *v3 =g4_m128_lane<float>(v18, 0);
              v3[2] = v19;
            }
            else
            {
              v42 = v49;
              v45 = v58 + 1;
              v50 = ((long double (*)(float *, int, int))*(uint32_t *)(*(uint32_t *)v5 + 88))(v5, v58 + 1, v54);
              v43 = ((long double (*)(float *, int, int))*(uint32_t *)(*(uint32_t *)v5 + 88))(v5, v58, v54 + 1);
              if ( (float)((float)(v12 - (float)v54) + v47) <= 1.0 )
              {
                v60 = ((long double (*)(float *, int, int))*(uint32_t *)(*(uint32_t *)v5 + 88))(v5, v58, v54);
                v4 = v42;
g4_m128_raw(v38) = LODWORD(v50);
g4_m128_lane<float>(v38, 0) = v50 - v60;
                v19 = -(float)(v43 - v60);
                v3[2] = v19;
                v39 = v60 + (float)(v51 * (float)(v43 - v60));
                v40 = v47 * (float)(v50 - v60);
                v18 = _mm_xor_ps(v38, *(__m128 *)&dword_1C7C1B0);
                *v3 =g4_m128_lane<float>(v18, 0);
                v58 = v45;
                v48 = v40 + v39;
              }
              else
              {
                *(float *)&v59 = ((long double (*)(float *, int, int))*(uint32_t *)(*(uint32_t *)v5 + 88))(
                                   v5,
                                   v45,
                                   v54 + 1);
g4_m128_raw(v34) = v59;
                v35 = *(float *)&v59 - v50;
                v58 = v45;
g4_m128_lane<float>(v34, 0) =g4_m128_lane<float>(v34, 0) - v43;
                v4 = v42;
                v36 = v51 * v35;
                v19 = -v35;
                v3[2] = v19;
                v37 = (float)(v47 - 1.0) *g4_m128_lane<float>(v34, 0);
                v18 = _mm_xor_ps(v34, *(__m128 *)&dword_1C7C1B0);
                *v3 =g4_m128_lane<float>(v18, 0);
                v48 = (float)(v36 + v50) + v37;
              }
            }
g4_m128_lane<float>(v18, 0) =g4_m128_lane<float>(v18, 0) * v5[20];
            v20 = v3[1];
            v21 = v3[3];
            *v3 =g4_m128_lane<float>(v18, 0);
            v25 = v18;
            v22 = v20 * v5[21];
            v3[1] = v22;
            v23 = v19 * v5[22];
            v3[2] = v23;
            v24 = v21 * v5[23];
g4_m128_lane<float>(v25, 0) = (float)((float)(g4_m128_lane<float>(v18, 0) *g4_m128_lane<float>(v18, 0)) + (float)(v22 * v22))
                            + (float)(v23 * v23);
            v26 = 0.0;
            if (g4_m128_lane<float>(v25, 0) > 0.0 )
            {
              v27 = 0.5 *g4_m128_lane<float>(v25, 0);
              v28 = ((_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v25))) + 2139095040) >> 31)
                  & (1597463174 - (_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v25))) >> 1));
              v29 = (float)(1.5 * *(float *)&v28)
                  - (float)((float)(v27 * *(float *)&v28) * (float)(*(float *)&v28 * *(float *)&v28));
              v26 = (float)(1.5 * (float)((float)(1.5 * v29) - (float)((float)(v27 * v29) * (float)(v29 * v29))))
                  - (float)((float)(v27 * (float)((float)(1.5 * v29) - (float)((float)(v27 * v29) * (float)(v29 * v29))))
                          * (float)((float)((float)(1.5 * v29) - (float)((float)(v27 * v29) * (float)(v29 * v29)))
                                  * (float)((float)(1.5 * v29) - (float)((float)(v27 * v29) * (float)(v29 * v29)))));
            }
            v30 =g4_m128_lane<float>(v18, 0) * v26;
            v31 = v22 * v26;
            v32 = v23 * v26;
            *v3 = v30;
            v3[1] = v31;
            v3[2] = v32;
            v3[3] = v24 * v26;
            v33 = v53 * v52;
            if ( *((uint8_t *)v5 + 52) != 0 )
              v6 = (float)((float)((float)((float)(v5[16] * (float)(v46 - (float)v58)) * v30)
                                 + (float)((float)((float)(v33 - v50) * v5[17]) * v31))
                         + (float)((float)(v51 * v5[18]) * v32))
                 - v4[3];
            else
              v6 = (float)(v5[17] * (float)(v33 - v48)) - v4[3];
            v3[3] = v6;
          }
        }
      }
      v4 += 4;
      --v57;
      v3 += 4;
    }
    while ( v57 != -1 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpStorageSampledHeightFieldShape::Destroy  (binary VA: 0x1ae60c0)
// Original: hkpStorageSampledHeightFieldShape::~hkpStorageSampledHeightFieldShape
// ----------------------------------------------------------------------------
void hkpStorageSampledHeightFieldShape::Destroy(hkpStorageSampledHeightFieldShape::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1B88);
  v1 = *((uint32_t *)self + 34);
  *((uint32_t *)self + 33) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 32),
      4 * v1);
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 34) = 0x80000000;
  hkpSampledHeightFieldShape::Destroy(self);
  v2 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 144;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageSampledHeightFieldShape::Destroy_ea1ae61d0  (binary VA: 0x1ae61d0)
// Original: hkpStorageSampledHeightFieldShape::~hkpStorageSampledHeightFieldShape
// ----------------------------------------------------------------------------
void hkpStorageSampledHeightFieldShape::Destroy_ea1ae61d0(hkpStorageSampledHeightFieldShape::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1B88);
  v1 = *((uint32_t *)self + 34);
  *((uint32_t *)self + 33) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 32),
      4 * v1);
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 34) = 0x80000000;
  hkpSampledHeightFieldShape::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageSampledHeightFieldShape::Construct  (binary VA: 0x1ae6250)
// Original: hkpStorageSampledHeightFieldShape::hkpStorageSampledHeightFieldShape
// ----------------------------------------------------------------------------
int hkpStorageSampledHeightFieldShape::Construct(int a1, int a2, unsigned int *a3, int a4)
{
  int result;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  __m128 v9;
  int i;
  int v18;
  unsigned int v19;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  hkpSampledHeightFieldShape::Construct(a1, a2, 0);
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20B1B88);
  *(uint32_t *)(a1 + 136) = 0x80000000;
  *(uint8_t *)(a1 + 140) = 0;
  result = a3[1];
  if ( result <= 0 )
  {
    *(uint32_t *)(a1 + 132) = result;
  }
  else
  {
    v17 = 4 * result;
    result = (*(int (**)(uint32_t *, int *, int, int, int, int, int, int))(hkContainerHeapAllocator::s_alloc + 16))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               &v17,
               v11,
               v12,
               v13,
               v14,
               v15,
               v16);
    *(uint32_t *)(a1 + 128) = result;
    *(uint32_t *)(a1 + 136) = a4 / 4;
    v5 = a3[1];
    *(uint32_t *)(a1 + 132) = v5;
    v6 = *a3;
    v19 = *a3;
    if ( (int)v5 > 0 )
    {
      if ( (result >= v6 + 16 || v6 >= result + 16) && v5 > 0xB )
      {
        v7 = 0;
        v8 = 0;
        v18 = 4 * (v5 >> 2);
        do
        {
          ++v8;
          v9 = _mm_loadh_ps((const double *)(v19 + v7 + 8));
          _mm_storel_ps((double *)(result + v7), v9);
          _mm_storeh_ps((double *)(result + v7 + 8), v9);
          v7 += 16;
        }
        while ( v5 >> 2 > v8 );
        if ( v5 != v18 )
        {
          *(uint32_t *)(result + 16 * (v5 >> 2)) = *(uint32_t *)(v19 + 16 * (v5 >> 2));
          if ( (int)v5 > v18 + 1 )
          {
            *(uint32_t *)(result + 4 * (v18 + 1)) = *(uint32_t *)(v19 + 4 * (v18 + 1));
            if ( (int)v5 > v18 + 2 )
              *(uint32_t *)(result + 4 * (v18 + 2)) = *(uint32_t *)(v19 + 4 * (v18 + 2));
          }
        }
      }
      else
      {
        for ( i = 0; i != v5; ++i )
          *(uint32_t *)(result + 4 * i) = *(uint32_t *)(v19 + 4 * i);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageSampledHeightFieldShape::Construct  (binary VA: 0x1ae6400)
// Original: hkpStorageSampledHeightFieldShape::hkpStorageSampledHeightFieldShape
// ----------------------------------------------------------------------------
void hkpStorageSampledHeightFieldShape::Construct(hkpStorageSampledHeightFieldShape::Self *self, const hkpSampledHeightFieldShape::Self *a2)
{
  hkpStorageSampledHeightFieldShape::Self *v2;
  const hkpSampledHeightFieldShape::Self *v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  const hkpSampledHeightFieldShape::Self *v9;
  int v10;
  uint32_t *v11;
  const hkpSampledHeightFieldShape::Self *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int savedregs;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef const hkpSampledHeightFieldShape::Self *_g4_t_v37;
  typedef hkpStorageSampledHeightFieldShape::Self *_g4_t_v38;
  typedef const hkpSampledHeightFieldShape::Self *_g4_t_v39;
  typedef float *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef const hkpSampledHeightFieldShape::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef float _g4_t_v44;
  typedef hkpStorageSampledHeightFieldShape::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int *_g4_t_v49;
  typedef hkpStorageSampledHeightFieldShape::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53[6];
  typedef hkArrayUtil::Self *_g4_t_v54;
  typedef int _g4_t_v55;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v31)) > _g4_s0 ? (12u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v32)) > _g4_s1 ? (16u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v33)) > _g4_s2 ? (20u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v34)) > _g4_s3 ? (24u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v35)) > _g4_s4 ? (28u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v36)) > _g4_s5 ? (32u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v37)) > _g4_s6 ? (36u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v38)) > _g4_s7 ? (40u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v39)) > _g4_s8 ? (44u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v40)) > _g4_s9 ? (44u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v41)) > _g4_s10 ? (48u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v42)) > _g4_s11 ? (48u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v43)) > _g4_s12 ? (52u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v44)) > _g4_s13 ? (52u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v45)) > _g4_s14 ? (52u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v46)) > _g4_s15 ? (56u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v47)) > _g4_s16 ? (56u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v48)) > _g4_s17 ? (56u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v49)) > _g4_s18 ? (56u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v50)) > _g4_s19 ? (56u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v51)) > _g4_s20 ? (60u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v52)) > _g4_s21 ? (64u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v53)) > _g4_s22 ? (68u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v54)) > _g4_s23 ? (92u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v55)) > _g4_s24 ? (96u + sizeof(_g4_t_v55)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);

  v54 = (hkArrayUtil::Self *)&self;
  v2 = self;
  v3 = a2;
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)v2 + 8) = 12;
  *((uint8_t *)v2 + 9) = 4;
  *((uint8_t *)v2 + 10) = 0;
  *((uint8_t *)v2 + 11) = 0;
  *((uint32_t *)v2 + 3) = 0;
  *((uint32_t *)v2 + 4) = 0;
  *((uint32_t *)v2 + 5) = 0;
  *((uint32_t *)v2 + 6) = 0x80000000;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_20B1B88);
  *((uint32_t *)v2 + 32) = 0;
  *((uint32_t *)v2 + 33) = 0;
  *((uint32_t *)v2 + 34) = 0x80000000;
  *((uint8_t *)v2 + 53) = 0;
  *((uint32_t *)v2 + 10) = *((uint32_t *)v3 + 10);
  *((uint32_t *)v2 + 11) = *((uint32_t *)v3 + 11);
  *((uint32_t *)v2 + 7) = *((uint32_t *)v3 + 7);
  if ( *((uint32_t *)v3 + 7) != 0 )
  {
    v16 = *((uint32_t *)v3 + 5);
    v36 = v16;
    if ( v16 > 0 )
    {
      v30 = *((uint32_t *)v3 + 5);
      v50 = v2;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)&v51,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)v2 + 4,
        v16,
        20);
      v2 = v50;
      v41 = v30;
      v17 = 20 * v30;
      v48 = 0;
      v18 = *((uint32_t *)v2 + 4);
    }
    else
    {
      v41 = 0;
      v48 = 20 * v16;
      v17 = 20 * v16;
      v18 = 0;
    }
    if ( v36 < 0 )
    {
      v39 = v3;
      v45 = v2;
      v19 = (uint32_t *)(v17 + v18 + 20 * ~v36);
      v20 = ~v36;
      do
      {
        v21 = v19[2];
        v19[1] = 0;
        if ( v21 >= 0 )
          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            *v19,
            16 * v21);
        --v20;
        *v19 = 0;
        v19[2] = 0x80000000;
        v19 -= 5;
      }
      while ( v20 != -1 );
      v2 = v45;
      v3 = v39;
      v18 = *((uint32_t *)v45 + 4);
    }
    v22 = (int *)(v48 + v18);
    v49 = (int *)(*((uint32_t *)v3 + 4) + v48);
    v43 = 0;
    if ( v41 != 0 )
    {
      v38 = v2;
      v37 = v3;
      do
      {
        *v22 = 0;
        v22[1] = 0;
        v22[2] = 0x80000000;
        v22[3] = v49[3];
        v22[4] = v49[4];
        v23 = v49[1];
        if ( v23 <= 0 )
        {
          v22[1] = v23;
        }
        else
        {
          v53[0] = 16 * v23;
          v24 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  v53);
          v25 = v53[0];
          *v22 = v24;
          v22[2] = v25 / 16;
          v26 = v49[1];
          v22[1] = v26;
          v27 = *v49;
          if ( v26 > 0 )
          {
            v28 = 16 * v26;
            v29 = 0;
            v39 = (const hkpSampledHeightFieldShape::Self *)v22;
            do
            {
              *(uint32_t *)(v24 + v29) = *(uint32_t *)(v27 + v29);
              *(uint32_t *)(v24 + v29 + 4) = *(uint32_t *)(v27 + v29 + 4);
              *(uint32_t *)(v24 + v29 + 8) = *(uint32_t *)(v27 + v29 + 8);
              *(uint32_t *)(v24 + v29 + 12) = *(uint32_t *)(v27 + v29 + 12);
              v29 += 16;
            }
            while ( v29 != v28 );
          }
        }
        ++v43;
        v22 += 5;
        v49 += 5;
      }
      while ( v43 != v41 );
      v2 = v38;
      v3 = v37;
    }
    *((uint32_t *)v2 + 5) = v36;
  }
  (*(void (**)(char *, const hkpSampledHeightFieldShape::Self *, int, int, int, int, int, int, const hkpSampledHeightFieldShape::Self *, hkpStorageSampledHeightFieldShape::Self *, const hkpSampledHeightFieldShape::Self *, int, int, hkpStorageSampledHeightFieldShape::Self *, int, int))(*(uint32_t *)v3 + 92))(
    (char *)&v52 + 3,
    v3,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v41,
    v43,
    v2,
    v51,
    v52);
  v4 = (uint32_t *)v46;
  *(uint8_t *)(v46 + 140) = HIBYTE(v52);
  *(uint32_t *)(v46 + 48) = *((uint32_t *)v3 + 12);
  *(uint32_t *)(v46 + 64) = *((uint32_t *)v3 + 16);
  *(uint32_t *)(v46 + 68) = *((uint32_t *)v3 + 17);
  *(uint32_t *)(v46 + 72) = *((uint32_t *)v3 + 18);
  *(uint32_t *)(v46 + 76) = *((uint32_t *)v3 + 19);
  *(uint32_t *)(v46 + 80) = *((uint32_t *)v3 + 20);
  *(uint32_t *)(v46 + 84) = *((uint32_t *)v3 + 21);
  *(uint32_t *)(v46 + 88) = *((uint32_t *)v3 + 22);
  *(uint32_t *)(v46 + 92) = *((uint32_t *)v3 + 23);
  *(uint32_t *)(v46 + 96) = *((uint32_t *)v3 + 24);
  *(uint32_t *)(v46 + 100) = *((uint32_t *)v3 + 25);
  *(uint32_t *)(v46 + 104) = *((uint32_t *)v3 + 26);
  *(uint32_t *)(v46 + 108) = *((uint32_t *)v3 + 27);
  *(uint32_t *)(v46 + 112) = *((uint32_t *)v3 + 28);
  *(uint32_t *)(v46 + 116) = *((uint32_t *)v3 + 29);
  *(uint32_t *)(v46 + 120) = *((uint32_t *)v3 + 30);
  *(uint32_t *)(v46 + 124) = *((uint32_t *)v3 + 31);
  v5 = *(uint32_t *)(v46 + 44);
  v6 = v5 * *(uint32_t *)(v46 + 40);
  v7 = *(uint32_t *)(v46 + 136) & 0x3FFFFFFF;
  if ( v6 > v7 )
  {
    v8 = 2 * v7;
    v54 = (hkArrayUtil::Self *)&v51;
    savedregs = 4;
    if ( v8 < v6 )
      v8 = v6;
    hkArrayUtil::reserve(
      v54,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)(v46 + 128),
      v8,
      savedregs);
    v4 = (uint32_t *)v46;
    v5 = *(uint32_t *)(v46 + 44);
  }
  v4[33] = v6;
  if ( v5 > 0 )
  {
    v9 = v3;
    v10 = v4[10];
    v11 = v4;
    v47 = 0;
    v12 = v9;
    do
    {
      if ( v10 > 0 )
      {
        v13 = 0;
        do
        {
          v42 = v12;
          v14 = v11[32] + 4 * (v13 + v47 * v10);
          v15 = *(uint32_t *)v12;
          v40 = (float *)v14;
          v55 = v13++;
          v44 = ((long double (*)(const hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(v15 + 88))(
                  v12,
                  v55,
                  v47);
          v12 = v42;
          *v40 = v44;
          v10 = v11[10];
        }
        while ( v10 > v13 );
        v5 = v11[11];
      }
      ++v47;
    }
    while ( v47 < v5 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpStorageMeshShape::SubpartStorage::Destroy  (binary VA: 0x1ae91b0)
// Original: hkpStorageMeshShape::SubpartStorage::~SubpartStorage
// ----------------------------------------------------------------------------
void hkpStorageMeshShape::SubpartStorage::Destroy(hkpStorageMeshShape::SubpartStorage::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1CA8);
  v1 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 18) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 17),
      2 * (v1 & 0x3FFFFFFF));
  v2 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 19) = 0x80000000;
  *((uint32_t *)self + 15) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      4 * v2);
  v3 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 12) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      v3 & 0x3FFFFFFF);
  v4 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v4);
  v5 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v5 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      2 * (v5 & 0x3FFFFFFF));
  v6 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v6);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageMeshShape::SubpartStorage::Destroy_ea1ae9b80  (binary VA: 0x1ae9b80)
// Original: hkpStorageMeshShape::SubpartStorage::~SubpartStorage
// ----------------------------------------------------------------------------
void hkpStorageMeshShape::SubpartStorage::Destroy_ea1ae9b80(hkpStorageMeshShape::SubpartStorage::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1CA8);
  v1 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 18) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 17),
      2 * (v1 & 0x3FFFFFFF));
  v2 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 19) = 0x80000000;
  *((uint32_t *)self + 15) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      4 * v2);
  v3 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 12) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      v3 & 0x3FFFFFFF);
  v4 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v4);
  v5 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v5 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      2 * (v5 & 0x3FFFFFFF));
  v6 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v6);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v7 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v8 = 80;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v8 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v7, 12, self, v8);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageMeshShape::Destroy  (binary VA: 0x1ae9d50)
// Original: hkpStorageMeshShape::~hkpStorageMeshShape
// ----------------------------------------------------------------------------
void hkpStorageMeshShape::Destroy(hkpStorageMeshShape::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = 0;
  v2 = *((uint32_t *)self + 25);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1CC8);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1D3C);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 24) + 4 * v1);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v11 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v1 = v11;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
        v2 = *((uint32_t *)self + 25);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v8 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 25) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 24),
      4 * v8);
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1E1C);
  v9 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 26) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1DA8);
  *((uint32_t *)self + 17) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 16),
      2 * (v9 & 0x3FFFFFFF));
  v10 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint32_t *)self + 14) = 0;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 13),
      56 * (v10 & 0x3FFFFFFF));
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0x80000000;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageMeshShape::Destroy_ea1ae9ed0  (binary VA: 0x1ae9ed0)
// Original: hkpStorageMeshShape::~hkpStorageMeshShape
// ----------------------------------------------------------------------------
void hkpStorageMeshShape::Destroy_ea1ae9ed0(hkpStorageMeshShape::Self *self)
{
  int v1;
  int v2;

  hkpStorageMeshShape::Destroy(self);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpStorageMeshShape::SubpartStorage::Construct  (binary VA: 0x1ae9f40)
// Original: hkpStorageMeshShape::SubpartStorage::SubpartStorage
// ----------------------------------------------------------------------------
uint32_t * hkpStorageMeshShape::SubpartStorage::Construct(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20B1CA8);
  return a1;
}



// ============================================================================
// Address:   0x1ae9f60 (size: 169 bytes)
// Symbol:    _ZN19hkpStorageMeshShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpStorageMeshShape::hkpStorageMeshShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN19hkpStorageMeshShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpStorageMeshShape::Construct(
        uint32_t *a1,
        int a2))(hkpStorageMeshShape::Self * self)
{
  void (**result)(hkpStorageMeshShape::Self *);
  int v3;
  int i;
  bool v5;
  void (*v6)(hkpStorageMeshShape::Self *);
  uint32_t *v7;

  hkpMeshShape::Construct(a1, a2);
  result = (void (**)(hkpStorageMeshShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20B1D3C));
  *a1 = ((uint32_t)(uintptr_t)&off_20B1CC8);
  a1[4] = ((uint32_t)(uintptr_t)&off_20B1D3C);
  if ( a2 != 0 && (int)a1[14] > 0 )
  {
    v3 = 0;
    for ( i = 0; a1[14] > i; ++i )
    {
      result = (void (**)(hkpStorageMeshShape::Self *))(v3 + a1[13]);
      v7 = *(uint32_t **)(a1[24] + 4 * i);
      v5 = *((uint8_t *)result + 16) == 1;
      *result = (void (*)(hkpStorageMeshShape::Self *))v7[2];
      if ( v5 )
      {
        v5 = *((uint8_t *)result + 17) == 1;
        result[3] = (void (*)(hkpStorageMeshShape::Self *))v7[5];
        if ( !v5 )
          goto LABEL_9;
      }
      else
      {
        v5 = *((uint8_t *)result + 17) == 1;
        result[3] = (void (*)(hkpStorageMeshShape::Self *))v7[8];
        if ( !v5 )
        {
LABEL_9:
          v6 = (void (*)(hkpStorageMeshShape::Self *))v7[17];
          goto LABEL_6;
        }
      }
      v6 = (void (*)(hkpStorageMeshShape::Self *))v7[11];
LABEL_6:
      result[8] = v6;
      result[10] = (void (*)(hkpStorageMeshShape::Self *))v7[14];
      v3 += 56;
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpStorageMeshShape::Construct  (binary VA: 0x1aea010)
// Original: hkpStorageMeshShape::hkpStorageMeshShape
// ----------------------------------------------------------------------------
void hkpStorageMeshShape::Construct(hkpStorageMeshShape::Self *self, int64_t a2)
{
  hkpMeshShape::Construct(self, *(float *)&a2, SHIDWORD(a2));
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1D3C);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1CC8);
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpStorageMeshShape::Construct  (binary VA: 0x1aea070)
// Original: hkpStorageMeshShape::hkpStorageMeshShape
// ----------------------------------------------------------------------------
void hkpStorageMeshShape::Construct(hkpStorageMeshShape::Self *self, const hkpMeshShape::Self *a2)
{
  const hkpMeshShape::Self *v2;
  hkpStorageMeshShape::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  typedef const hkpMeshShape::Subpart::Self *_g4_t_v12;
  typedef unsigned int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef signed int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  v2 = a2;
  v3 = self;
  hkpMeshShape::Construct(self, *((float *)a2 + 20), *((uint32_t *)a2 + 12));
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1D3C);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1CC8);
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint8_t *)self + 20) = *((uint8_t *)a2 + 20);
  if ( *((int *)a2 + 14) > 0 )
  {
    v4 = 0;
    do
    {
      v12 = (const hkpMeshShape::Subpart::Self *)(*((uint32_t *)a2 + 13) + 56 * v4++);
      hkpStorageMeshShape::addSubpart(self, v12);
    }
    while ( v4 < *((uint32_t *)a2 + 14) );
    v2 = a2;
    v3 = self;
  }
  v5 = *((uint32_t *)v2 + 17);
  v6 = *((uint32_t *)v3 + 18) & 0x3FFFFFFF;
  if ( v6 >= v5 )
  {
    v9 = *((uint32_t *)v3 + 16);
    v15 = *((uint32_t *)v2 + 17);
  }
  else
  {
    if ( *((int *)v3 + 18) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)v3 + 16),
        2 * v6);
      v5 = *((uint32_t *)v2 + 17);
    }
    v17 = 2 * v5;
    v7 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           &v17);
    v8 = v17;
    *((uint32_t *)v3 + 16) = v7;
    *((uint32_t *)v3 + 18) = v8 / 2;
    v15 = *((uint32_t *)v2 + 17);
    v9 = v7;
    v5 = v15;
  }
  *((uint32_t *)v3 + 17) = v5;
  v16 = *((uint32_t *)v2 + 16);
  if ( v5 <= 0 )
    goto LABEL_22;
  if ( (v9 >= v16 + 16 || v16 >= v9 + 16) && (unsigned int)v15 > 0xA )
  {
    v10 = 0;
    v13 = 0;
    v14 = 8 * ((unsigned int)v15 >> 3);
    do
    {
      ++v13;
      *(__m128i *)(v9 + v10) = *(__m128i *)(v16 + v10);
      v10 += 16;
    }
    while ( (unsigned int)v15 >> 3 > v13 );
    if ( v15 != v14 )
    {
      *(uint16_t *)(v9 + 16 * ((unsigned int)v15 >> 3)) = *(uint16_t *)(v16 + 16 * ((unsigned int)v15 >> 3));
      if ( v14 + 1 < v15 )
      {
        *(uint16_t *)(v9 + 2 * (v14 + 1)) = *(uint16_t *)(v16 + 2 * (v14 + 1));
        if ( v15 > v14 + 2 )
        {
          *(uint16_t *)(v9 + 2 * (v14 + 2)) = *(uint16_t *)(v16 + 2 * (v14 + 2));
          if ( v15 > v14 + 3 )
          {
            *(uint16_t *)(v9 + 2 * (v14 + 3)) = *(uint16_t *)(v16 + 2 * (v14 + 3));
            if ( v15 > v14 + 4 )
            {
              *(uint16_t *)(v9 + 2 * (v14 + 4)) = *(uint16_t *)(v16 + 2 * (v14 + 4));
              if ( v15 > v14 + 5 )
              {
                *(uint16_t *)(v9 + 2 * (v14 + 5)) = *(uint16_t *)(v16 + 2 * (v14 + 5));
                if ( v15 > v14 + 6 )
                  *(uint16_t *)(v9 + 2 * (v14 + 6)) = *(uint16_t *)(v16 + 2 * (v14 + 6));
              }
            }
          }
        }
      }
    }
LABEL_22:
    *((uint8_t *)v3 + 76) = *((uint8_t *)v2 + 76);
    return;
  }
  v11 = 0;
  do
  {
    *(uint16_t *)(v9 + 2 * v11) = *(uint16_t *)(v16 + 2 * v11);
    ++v11;
  }
  while ( v11 != v15 );
  *((uint8_t *)v3 + 76) = *((uint8_t *)v2 + 76);
}


