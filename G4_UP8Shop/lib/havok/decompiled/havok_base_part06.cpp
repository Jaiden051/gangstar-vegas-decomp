#include "Core/Utils/DecompTypes.h"
#include "havok_base_part06.h"

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::Construct  (binary VA: 0x18b3ec0)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_hkDa_4d7046::Construct(hkMap_Raw *self, int a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  if ( a2 != 0 )
    hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::reserve(
      self,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      a2);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::Construct  (binary VA: 0x18b3f10)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_hkDa_4d7046::Construct(hkMap_Raw *self, uint32_t *a2, unsigned int a3)
{
  hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::Construct(self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::Construct  (binary VA: 0x18b3f50)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_hkDa_4d7046::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::insert  (binary VA: 0x18b3f60)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::insert
// ----------------------------------------------------------------------------
int hkMap_hkDataObject_Handle_hkDa_4d7046::insert(hkMemoryAllocator::Self *a1, unsigned int a2, int a3, int a4, int a5)
{
  return hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::insert(
           a1,
           (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::tryInsert  (binary VA: 0x18b3fb0)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::tryInsert
// ----------------------------------------------------------------------------
int hkMap_hkDataObject_Handle_hkDa_4d7046::tryInsert(hkMemoryAllocator::Self *a1, unsigned int a2, int a3, int a4, int a5, uint32_t *a6)
{
  return hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::tryInsert(
           a1,
           (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
           a2,
           a3,
           a4,
           a5,
           a6);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::findOrInsertKey  (binary VA: 0x18b4010)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::findOrInsertKey
// ----------------------------------------------------------------------------
int hkMap_hkDataObject_Handle_hkDa_4d7046::findOrInsertKey(hkMemoryAllocator::Self *a1, unsigned int a2, int a3, int a4, int a5)
{
  return hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::findOrInsertKey(
           a1,
           (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::swap  (binary VA: 0x18b4060)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::swap
// ----------------------------------------------------------------------------
hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> * hkMap_hkDataObject_Handle_hkDa_4d7046::swap(hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *self, hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *a2)
{
  int v3;
  int v4;
  int v5;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  v4 = *((uint32_t *)self + 1);
  v5 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *(uint32_t *)a2 = v3;
  *((uint32_t *)a2 + 1) = v4;
  *((uint32_t *)a2 + 2) = v5;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_hkDa_4d7046::reserve  (binary VA: 0x18b4090)
// Original: hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::reserve
// ----------------------------------------------------------------------------
hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> * hkMap_hkDataObject_Handle_hkDa_4d7046::reserve(hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *self, int a2)
{
  return hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::reserve(
           self,
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::remove  (binary VA: 0x18b40d0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::remove
// ----------------------------------------------------------------------------
unsigned int hkMapBase_hkDataObject_Handle_int_a4fcf1::remove(int *a1, unsigned int a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int result;
  int v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;

  --a1[1];
  *(uint32_t *)(*a1 + 12 * a2) = -1;
  v2 = a1[2];
  v3 = *a1;
  v4 = v2 & (v2 + a2);
  if ( *(uint32_t *)(*a1 + 12 * v4) != -1 )
  {
    do
      v4 = v2 & (v2 + v4);
    while ( *(uint32_t *)(v3 + 12 * v4) != -1 );
  }
  result = v2 & (a2 + 1);
  v14 = v2 & (v4 + 1);
  v6 = 12 * result;
  v7 = (unsigned int *)(v3 + 12 * result);
  v8 = *v7;
  if ( *v7 != -1 )
  {
    v13 = *a1;
    v9 = a2;
    do
    {
      v10 = v2 & (-1640531535 * (v8 >> 4));
      if ( (v9 >= v10 || result < v14) && (v9 <= result || result < v10 && v9 >= v10) && (v14 <= v10 || v9 >= v10) )
      {
        v11 = 3 * v9;
        v12 = v7[1];
        *(uint32_t *)(v13 + 4 * v11) = *v7;
        *(uint32_t *)(v13 + 4 * v11 + 4) = v12;
        v9 = result;
        *(uint32_t *)(*a1 + 4 * v11 + 8) = *(uint32_t *)(*a1 + v6 + 8);
        *(uint32_t *)(*a1 + v6) = -1;
        v2 = a1[2];
        v13 = *a1;
      }
      result = v2 & (result + 1);
      v6 = 12 * result;
      v7 = (unsigned int *)(v13 + 12 * result);
      v8 = *v7;
    }
    while ( *v7 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_Copi_036a93::insert  (binary VA: 0x18b41f0)
// Original: hkMapBase<hkDataObject_Handle,Copier::LiveObjectInfo,hkMapOperations<hkDataObject_Handle>>::insert
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_Copi_036a93::insert(int *a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int i;
  int v12;
  unsigned int *v13;
  int v14;
  int result;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  uint32_t *v25;
  unsigned int v26;

  v8 = a1[2];
  v24 = a1[1];
  if ( 2 * v24 > v8 )
  {
    v17 = 2 * v8 + 2;
    if ( v17 < 8 )
      v17 = 8;
    v18 = v8 + 1;
    v26 = v24 & 0x80000000;
    v25 = (uint32_t *)*a1;
    v19 = G4_VCALL<int>(a2, 8, 24 * v17);
    if ( v19 != 0 )
    {
      v20 = 0;
      *a1 = v19;
      v21 = 0;
      while ( 1 )
      {
        ++v21;
        *(uint32_t *)(v19 + v20) = -1;
        v20 += 24;
        if ( v17 <= v21 )
          break;
        v19 = *a1;
      }
      v22 = 0;
      a1[2] = v17 - 1;
      a1[1] = 0;
      v23 = v25;
      if ( v18 > 0 )
      {
        do
        {
          if ( *v23 != -1 )
            hkMapBase_hkDataObject_Handle_Copi_036a93::insert(
              a1,
              a2,
              *v23,
              v23[1],
              v23[2],
              v23[3],
              v23[4],
              v23[5]);
          ++v22;
          v23 += 6;
        }
        while ( v18 != v22 );
      }
      if ( v26 == 0 )
        G4_VCALL<void>(a2, 12, v25, 24 * v18);
    }
    v8 = a1[2];
    v24 = a1[1];
  }
  v9 = *a1;
  v10 = v8 & (-1640531535 * (a3 >> 4));
  for ( i = 3 * v10; ; i = 3 * v10 )
  {
    v12 = 8 * i;
    v13 = (unsigned int *)(v9 + v12);
    v14 = *(uint32_t *)(v9 + v12);
    if ( v14 == -1 )
      break;
    if ( v14 == a3 && v13[1] == a4 )
    {
      result = 0;
      goto LABEL_9;
    }
    v10 = v8 & (v10 + 1);
  }
  result = 1;
LABEL_9:
  a1[1] = result + v24;
  *v13 = a3;
  v13[1] = a4;
  v16 = *a1;
  *(uint32_t *)(v16 + v12 + 8) = a5;
  *(uint32_t *)(v16 + v12 + 12) = a6;
  *(uint32_t *)(v16 + v12 + 16) = a7;
  *(uint32_t *)(v16 + v12 + 20) = a8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::insert  (binary VA: 0x18b43f0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::insert
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::insert(int *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int i;
  int v9;
  unsigned int *v10;
  int v11;
  int result;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  unsigned int v22;

  v5 = a1[2];
  v20 = a1[1];
  if ( 2 * v20 > v5 )
  {
    v13 = 2 * v5 + 2;
    if ( v13 < 8 )
      v13 = 8;
    v14 = v5 + 1;
    v22 = v20 & 0x80000000;
    v21 = (uint32_t *)*a1;
    v15 = G4_VCALL<int>(a2, 8, 12 * v13);
    if ( v15 != 0 )
    {
      v16 = 0;
      *a1 = v15;
      v17 = 0;
      while ( 1 )
      {
        ++v16;
        *(uint32_t *)(v15 + v17) = -1;
        v17 += 12;
        if ( v13 <= v16 )
          break;
        v15 = *a1;
      }
      v18 = 0;
      a1[2] = v13 - 1;
      a1[1] = 0;
      v19 = v21;
      if ( v14 > 0 )
      {
        do
        {
          if ( *v19 != -1 )
            hkMapBase_hkDataObject_Handle_int_a4fcf1::insert(
              a1,
              a2,
              *v19,
              v19[1],
              v19[2]);
          ++v18;
          v19 += 3;
        }
        while ( v14 != v18 );
      }
      if ( v22 == 0 )
        G4_VCALL<void>(a2, 12, v21, 12 * v14);
    }
    v5 = a1[2];
    v20 = a1[1];
  }
  v6 = *a1;
  v7 = v5 & (-1640531535 * (a3 >> 4));
  for ( i = 3 * v7; ; i = 3 * v7 )
  {
    v9 = 4 * i;
    v10 = (unsigned int *)(v6 + v9);
    v11 = *(uint32_t *)(v6 + v9);
    if ( v11 == -1 )
      break;
    if ( v11 == a3 && v10[1] == a4 )
    {
      result = 0;
      goto LABEL_9;
    }
    v7 = v5 & (v7 + 1);
  }
  result = 1;
LABEL_9:
  a1[1] = result + v20;
  *v10 = a3;
  v10[1] = a4;
  *(uint32_t *)(*a1 + v9 + 8) = a5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeMultiMap_hkDataObject_Handle_Copi_b5390d::insert  (binary VA: 0x18b45d0)
// Original: hkSerializeMultiMap<hkDataObject_Handle,Copier::PointerPatch,hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>>::insert
// ----------------------------------------------------------------------------
int hkSerializeMultiMap_hkDataObject_Handle_Copi_b5390d::insert(uint32_t *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4;
  int i;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int16_t v14;
  int v16;
  int v17;

  v4 = a1[5];
  if ( v4 > 0 )
  {
    for ( i = -1640531535 * (a2 >> 4); ; i = v6 + 1 )
    {
      v6 = v4 & i;
      v7 = (uint32_t *)(a1[3] + 12 * v6);
      if ( *v7 == -1 )
        break;
      if ( *v7 == a2 && v7[1] == a3 )
      {
        v8 = a1;
        v9 = v7[2];
        v10 = a1[6];
        if ( v10 != -1 )
          goto LABEL_12;
        goto LABEL_8;
      }
    }
  }
  v8 = a1;
  v9 = -1;
  v10 = a1[6];
  if ( v10 == -1 )
  {
LABEL_8:
    v10 = v8[1];
    if ( v10 == (v8[2] & 0x3FFFFFFF) )
    {
      v17 = v9;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a1, 12, v16);
      v9 = v17;
      v11 = a1[1];
    }
    else
    {
      v11 = v8[1];
    }
    *(uint32_t *)(*a1 + 12 * v11 + 8) = -1;
    ++a1[1];
    v12 = *a1 + 12 * v10;
  }
  else
  {
LABEL_12:
    v13 = v8;
    v12 = *v8 + 12 * v10;
    v13[6] = *(uint32_t *)(v12 + 8);
  }
  *(uint32_t *)v12 = *(uint32_t *)a4;
  v14 = *(uint16_t *)(a4 + 4);
  *(uint32_t *)(v12 + 8) = v9;
  *(uint16_t *)(v12 + 4) = v14;
  return hkMapBase_hkDataObject_Handle_int_a4fcf1::insert(
           (int *)(a1 + 3),
           (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
           a2,
           a3,
           v10);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectUtil::toObjectWithRegistry  (binary VA: 0x18b56e0)
// Original: hkDataObjectUtil::toObjectWithRegistry
// ----------------------------------------------------------------------------
hkObjectResource::Self * hkDataObjectUtil::toObjectWithRegistry(hkDataObjectUtil::Self *self, const hkDataObject::Self *a2, const hkClassNameRegistry::Self *a3, const hkTypeInfoRegistry::Self *a4)
{
  const hkDataObject::Self *v4;
  const hkTypeInfoRegistry::Self *v5;
  int address;
  hkPackfileData::Self *v7;
  int v8;
  int32_t v9; // kr00_4
  int32_t v10;
  int32_t v11; // ett
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  int *j;
  int v16;
  void (***v17)(int);
  hkObjectResource::Self *v18;
  volatile int32_t *v19;
  volatile int32_t *v20;
  volatile int32_t *v21;
  int v22;
  int32_t v23; // kr04_4
  int32_t v24;
  int32_t v25; // ett
  hkClassNameRegistry::Self *v26;
  volatile int32_t *v27;
  int v28;
  int32_t v29; // kr08_4
  int32_t v30;
  int32_t v31; // ett
  int v32;
  int v33;
  int v34;
  bool v35;
  int v36;
  int v37;
  int v38;
  int i;
  uint32_t *v41;
  hkClass::Self *v42;
  int Attribute;
  int v44;
  int v45;
  int *v46;
  int ObjectSize;
  int32_t v48;
  int32_t v49; // ett
  int Name;
  int v51;
  volatile int32_t *v52;
  int v53;
  int32_t v54; // kr0C_4
  volatile int32_t *v55;
  int v56;
  int32_t v57; // kr10_4
  int32_t v58;
  int32_t v59; // ett
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef hkClass::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef char *_g4_t_v66;
  typedef hkTypeInfoRegistry::Self *_g4_t_v67;
  typedef hkTypeInfoRegistry::Self *_g4_t_v68;
  typedef const hkTypeInfoRegistry::Self *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef void (*_g4_t_v71)(hkTypeInfoRegistry::Self *, int, int);
  typedef hkDataObjectUtil::Self *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef hkObjectResource::Self *_g4_t_v74;
  typedef hkObjectResource::Self *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint32_t _g4_t_v78[4];
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef uint32_t *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef hkClassNameRegistry::Self *_g4_t_v98;
  typedef volatile int32_t *_g4_t_v99;
  typedef const hkTypeInfoRegistry::Self *_g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef hkClass::Self *_g4_t_v104;
  typedef const char *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v60)) > _g4_s0 ? (12u + sizeof(_g4_t_v60)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v61)) > _g4_s1 ? (16u + sizeof(_g4_t_v61)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v62)) > _g4_s2 ? (20u + sizeof(_g4_t_v62)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v63)) > _g4_s3 ? (24u + sizeof(_g4_t_v63)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v64)) > _g4_s4 ? (28u + sizeof(_g4_t_v64)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v65)) > _g4_s5 ? (28u + sizeof(_g4_t_v65)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v66)) > _g4_s6 ? (32u + sizeof(_g4_t_v66)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v67)) > _g4_s7 ? (36u + sizeof(_g4_t_v67)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v68)) > _g4_s8 ? (36u + sizeof(_g4_t_v68)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v69)) > _g4_s9 ? (40u + sizeof(_g4_t_v69)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v70)) > _g4_s10 ? (40u + sizeof(_g4_t_v70)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v71)) > _g4_s11 ? (40u + sizeof(_g4_t_v71)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v72)) > _g4_s12 ? (44u + sizeof(_g4_t_v72)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v73)) > _g4_s13 ? (44u + sizeof(_g4_t_v73)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v74)) > _g4_s14 ? (44u + sizeof(_g4_t_v74)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v75)) > _g4_s15 ? (44u + sizeof(_g4_t_v75)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v76)) > _g4_s16 ? (44u + sizeof(_g4_t_v76)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v77)) > _g4_s17 ? (48u + sizeof(_g4_t_v77)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v78)) > _g4_s18 ? (52u + sizeof(_g4_t_v78)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v79)) > _g4_s19 ? (68u + sizeof(_g4_t_v79)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v80)) > _g4_s20 ? (72u + sizeof(_g4_t_v80)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v81)) > _g4_s21 ? (76u + sizeof(_g4_t_v81)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v82)) > _g4_s22 ? (80u + sizeof(_g4_t_v82)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v83)) > _g4_s23 ? (84u + sizeof(_g4_t_v83)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v84)) > _g4_s24 ? (88u + sizeof(_g4_t_v84)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v85)) > _g4_s25 ? (92u + sizeof(_g4_t_v85)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v86)) > _g4_s26 ? (96u + sizeof(_g4_t_v86)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v87)) > _g4_s27 ? (100u + sizeof(_g4_t_v87)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v88)) > _g4_s28 ? (104u + sizeof(_g4_t_v88)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v89)) > _g4_s29 ? (108u + sizeof(_g4_t_v89)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v90)) > _g4_s30 ? (112u + sizeof(_g4_t_v90)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v91)) > _g4_s31 ? (116u + sizeof(_g4_t_v91)) : _g4_s31,
    _g4_s33 = (120u + sizeof(_g4_t_v92)) > _g4_s32 ? (120u + sizeof(_g4_t_v92)) : _g4_s32,
    _g4_s34 = (124u + sizeof(_g4_t_v93)) > _g4_s33 ? (124u + sizeof(_g4_t_v93)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v94)) > _g4_s34 ? (128u + sizeof(_g4_t_v94)) : _g4_s34,
    _g4_s36 = (132u + sizeof(_g4_t_v95)) > _g4_s35 ? (132u + sizeof(_g4_t_v95)) : _g4_s35,
    _g4_s37 = (136u + sizeof(_g4_t_v96)) > _g4_s36 ? (136u + sizeof(_g4_t_v96)) : _g4_s36,
    _g4_s38 = (140u + sizeof(_g4_t_v97)) > _g4_s37 ? (140u + sizeof(_g4_t_v97)) : _g4_s37,
    _g4_s39 = (144u + sizeof(_g4_t_v98)) > _g4_s38 ? (144u + sizeof(_g4_t_v98)) : _g4_s38,
    _g4_s40 = (148u + sizeof(_g4_t_v99)) > _g4_s39 ? (148u + sizeof(_g4_t_v99)) : _g4_s39,
    _g4_s41 = (156u + sizeof(_g4_t_v100)) > _g4_s40 ? (156u + sizeof(_g4_t_v100)) : _g4_s40,
    _g4_s42 = (160u + sizeof(_g4_t_v101)) > _g4_s41 ? (160u + sizeof(_g4_t_v101)) : _g4_s41,
    _g4_s43 = (164u + sizeof(_g4_t_v102)) > _g4_s42 ? (164u + sizeof(_g4_t_v102)) : _g4_s42,
    _g4_s44 = (168u + sizeof(_g4_t_v103)) > _g4_s43 ? (168u + sizeof(_g4_t_v103)) : _g4_s43,
    _g4_s45 = (172u + sizeof(_g4_t_v104)) > _g4_s44 ? (172u + sizeof(_g4_t_v104)) : _g4_s44,
    _g4_s46 = (176u + sizeof(_g4_t_v105)) > _g4_s45 ? (176u + sizeof(_g4_t_v105)) : _g4_s45,
    _g4_s47 = (180u + sizeof(_g4_t_v106)) > _g4_s46 ? (180u + sizeof(_g4_t_v106)) : _g4_s46,
    _g4_s48 = (184u + sizeof(_g4_t_v107)) > _g4_s47 ? (184u + sizeof(_g4_t_v107)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 44u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 52u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 68u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 72u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 76u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 80u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 84u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 88u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 92u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 96u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 100u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 104u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 108u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 112u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 116u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 120u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 124u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 128u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 132u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 136u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 140u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 144u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 148u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 156u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 160u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 164u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 168u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 172u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 176u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 180u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 184u);

  v104 = (hkClass::Self *)&self;
  v4 = a2;
  v72 = self;
  v67 = (hkTypeInfoRegistry::Self *)(a3);
  v5 = a4;
  v79 = 0;
  v80 = 0;
  v81 = 0x80000000;
  v82 = 0;
  v83 = 0;
  v84 = 0x80000000;
  v85 = 0;
  v86 = 0;
  v87 = -1;
  v88 = -1;
  v89 = nullptr;
  v90 = 0;
  v91 = -1;
  v92 = 0;
  v93 = 0;
  v94 = 0x80000000;
  v95 = nullptr;
  v96 = 0;
  v97 = 0x80000000;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    v52 = (volatile int32_t *)((char *)a2 + 4);
    v69 = a4;
    do
    {
      v54 = *((uint32_t *)v4 + 1);
      HIWORD(v53) = HIWORD(v54);
      LOWORD(v53) = 0;
    }
    while ( v54 != __sync_val_compare_and_swap(v52, v54, v53 | (uint16_t)(v54 + 1)) );
    v5 = v69;
  }
  v100 = v5;
  v98 = (hkClassNameRegistry::Self *)(v4);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v7 = (hkPackfileData::Self *)(*(int (**)(uint32_t, int, int, int, int, hkClass::Self *, int, char *, hkTypeInfoRegistry::Self *, const hkTypeInfoRegistry::Self *, hkDataObjectUtil::Self *, int, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int, int, int, int, int, int, int, uint32_t *, int, int, int, int, int, int *, int, int, hkClassNameRegistry::Self *, uint32_t, int, const hkTypeInfoRegistry::Self *, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           112,
                           v60,
                           v61,
                           address,
                           v63,
                           v64,
                           v66,
                           v67,
                           v69,
                           v72,
                           v77,
                           v78[0],
                           v78[1],
                           v78[2],
                           v78[3],
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
                           v89,
                           v90,
                           v91,
                           v92,
                           v93,
                           v94,
                           v95,
                           v96,
                           v97,
                           v98,
                           0,
                           1,
                           v100,
                           v101,
                           v102,
                           v103);
  hkPackfileData::Construct(v7, nullptr);
  if ( v99 != nullptr && v7 != (hkPackfileData::Self *)v99 && *((uint16_t *)v99 + 3) != 0 )
  {
    do
    {
      v9 = *((uint32_t *)v99 + 1);
      HIWORD(v8) = HIWORD(v9);
      LOWORD(v8) = 0;
      v10 = v8 | (uint16_t)(v9 - 1);
      v11 = v9;
    }
    while ( v11 != __sync_val_compare_and_swap(v99 + 1, v11, v10) );
    if ( (uint16_t)v10 == 0 )
      G4_VCALL<void>(v99, 16);
  }
  v99 = (volatile int32_t *)v7;
  v106 = v73;
  Copier::deepCopyToNative((Copier *)v78, (const hkDataObject::Self *)&v79);
  if ( v78[0] != 0 )
  {
    v12 = v89;
    if ( v91 >= 0 )
    {
      if ( *v89 == -1 )
      {
        v13 = v89 + 6;
        v14 = 0;
        while ( v91 >= ++v14 )
        {
          v13 += 6;
          if ( *(v13 - 6) != -1 )
          {
            i = v14;
            goto LABEL_47;
          }
        }
      }
      else
      {
        v14 = 0;
        for ( i = 0; ; i = v14 )
        {
LABEL_47:
          v41 = &v12[6 * i];
          v76 = v41[2];
          v42 = (hkClass::Self *)v41[3];
          v65 = v41[5];
          v70 = v41[4];
          Attribute = hkClass::getAttribute(v42, "hk.PostFinish");
          v44 = v65;
          if ( Attribute != 0 )
          {
            v45 = v96;
            if ( v96 == (v97 & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v95,
                8,
                v107);
              v45 = v96;
              v44 = v65;
            }
            v46 = &v95[2 * v45];
            *v46 = v76;
            v46[1] = (int)(uintptr_t)(v42);
            ++v96;
          }
          if ( (int16_t)v70 > 0 )
          {
            if ( v44 < 0 )
              ObjectSize = hkClass::getObjectSize(v42);
            else
              ObjectSize = v44;
            v48 = (int16_t)v70 | (ObjectSize << 16);
            do
              v49 = *(uint32_t *)(v76 + 4);
            while ( v49 != __sync_val_compare_and_swap((volatile int32_t *)(v76 + 4), v49, v48) );
          }
          ++v14;
          v71 = *(void (**)(hkTypeInfoRegistry::Self *, int, int))(*(uint32_t *)v68 + 24);
          Name = hkClass::getName(v42);
          v71(v68, v76, Name);
          hkClass::hasVtable((hkClass::Self *)((char *)&v77 + 3), v42);
          v12 = v89;
          if ( v91 < v14 )
            break;
          if ( v89[6 * v14] == -1 )
          {
            v51 = (int)(uintptr_t)(&v89[6 * v14 - 6]);
            while ( v91 >= ++v14 )
            {
              v51 += 24;
              if ( *(uint32_t *)(v51 + 24) != -1 )
                goto LABEL_62;
            }
            break;
          }
LABEL_62:
          ;
        }
      }
    }
    for ( j = v95; j < &v95[2 * v96]; j += 2 )
    {
      v16 = *j;
      v105 = "hk.PostFinish";
      v104 = (hkClass::Self *)j[1];
      v17 = (void (***)(int))hkClass::getAttribute(v104, "hk.PostFinish");
      (**v17)(v16);
    }
    v18 = (hkObjectResource::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v62 + 44) + 8))(
                                *(uint32_t *)(*(uint32_t *)v62 + 44),
                                24);
    hkObjectResource::Construct(v18, v78);
    hkObjectResource::setClassNameRegistry(v18, v98);
    hkObjectResource::setTypeInfoRegistry(v18, v68);
    v19 = v99;
    *((uint32_t *)v99 + 12) = 0;
    *((uint32_t *)v19 + 14) = 0;
    *((uint32_t *)v19 + 17) = 0;
    v20 = v99;
    if ( v99 != nullptr && *((uint16_t *)v99 + 3) != 0 )
    {
      v21 = v99 + 1;
      v74 = v18;
      do
      {
        v23 = *((uint32_t *)v20 + 1);
        HIWORD(v22) = HIWORD(v23);
        LOWORD(v22) = 0;
        v24 = v22 | (uint16_t)(v23 - 1);
        v25 = v23;
      }
      while ( v25 != __sync_val_compare_and_swap(v21, v25, v24) );
      v18 = v74;
      if ( (uint16_t)v24 == 0 )
        G4_VCALL<void>(v20, 16);
    }
  }
  else
  {
    *((uint32_t *)v99 + 12) = 0;
    v55 = v99;
    if ( v99 == nullptr || *((uint16_t *)v99 + 3) == 0 )
      goto LABEL_72;
    do
    {
      v57 = *((uint32_t *)v55 + 1);
      HIWORD(v56) = HIWORD(v57);
      LOWORD(v56) = 0;
      v58 = v56 | (uint16_t)(v57 - 1);
      v59 = v57;
    }
    while ( v59 != __sync_val_compare_and_swap(v55 + 1, v59, v58) );
    if ( (uint16_t)v58 == 0 )
    {
      v18 = nullptr;
      G4_VCALL<void>(v55, 16);
    }
    else
    {
LABEL_72:
      v18 = nullptr;
    }
  }
  v26 = v98;
  v99 = nullptr;
  if ( v98 != nullptr && *((uint16_t *)v98 + 3) != 0 )
  {
    v27 = (volatile int32_t *)((char *)v98 + 4);
    v75 = v18;
    do
    {
      v29 = *((uint32_t *)v26 + 1);
      HIWORD(v28) = HIWORD(v29);
      LOWORD(v28) = 0;
      v30 = v28 | (uint16_t)(v29 - 1);
      v31 = v29;
    }
    while ( v31 != __sync_val_compare_and_swap(v27, v31, v30) );
    v18 = v75;
    if ( (uint16_t)v30 == 0 )
      G4_VCALL<void>(v26, 16);
  }
  v98 = nullptr;
  v96 = 0;
  if ( v97 >= 0 )
    (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v95,
      8 * v97);
  v95 = nullptr;
  v97 = 0x80000000;
  v93 = 0;
  if ( v94 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v92,
      8 * v94);
  v32 = 0;
  v33 = 0;
  v34 = v91 + 1;
  v92 = 0;
  v94 = 0x80000000;
  if ( v91 >= 0 )
  {
    do
    {
      ++v33;
      v89[v32] = -1;
      v32 += 6;
    }
    while ( v33 != v34 );
  }
  v35 = v90 < 0;
  v90 &= 0x80000000;
  if ( !v35 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v89,
      8 * (3 * v91 + 3));
  v36 = 0;
  v37 = 0;
  v38 = v87 + 1;
  v89 = nullptr;
  v90 = 0;
  v91 = -1;
  if ( v87 >= 0 )
  {
    do
    {
      ++v37;
      *(uint32_t *)(v85 + v36) = -1;
      v36 += 12;
    }
    while ( v37 != v38 );
  }
  v35 = v86 < 0;
  v86 &= 0x80000000;
  if ( !v35 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v85,
      4 * (3 * v87 + 3));
  v85 = 0;
  v86 = 0;
  v87 = -1;
  v83 = 0;
  if ( v84 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v82,
      12 * v84);
  v82 = 0;
  v84 = 0x80000000;
  v80 = 0;
  if ( v81 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v79,
      8 * v81);
  return v18;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectUtil::toObject  (binary VA: 0x18b5df0)
// Original: hkDataObjectUtil::toObject
// ----------------------------------------------------------------------------
hkObjectResource::Self * hkDataObjectUtil::toObject(hkDataObjectUtil::Self *self, const hkDataObject::Self *a2)
{
  const hkClassNameRegistry::Self *v2;
  const hkDataObject::Self *v3;

  v2 = (const hkClassNameRegistry::Self *)(*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 20))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  v3 = (const hkDataObject::Self *)(*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 24))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  return hkDataObjectUtil::toObjectWithRegistry(self, v3, v2, (const hkTypeInfoRegistry::Self *)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectUtil::toResourceWithRegistry  (binary VA: 0x18b5e50)
// Original: hkDataObjectUtil::toResourceWithRegistry
// ----------------------------------------------------------------------------
hkPackfileData::Self * hkDataObjectUtil::toResourceWithRegistry(hkDataObjectUtil::Self *self, const hkDataObject::Self *a2, const hkClassNameRegistry::Self *a3)
{
  const hkDataObject::Self *v3;
  hkDataObjectUtil::Self *v4;
  const hkClassNameRegistry::Self *v5;
  int v6;
  int address;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  const char *v11;
  hkPackfileData::Self *v12;
  const hkDataObject::Self *v13;
  int v14;
  int32_t v15; // kr00_4
  int32_t v16;
  int32_t v17; // ett
  int v18;
  int v19;
  int v20;
  bool v21;
  int v22;
  int v23;
  int v24;
  uint32_t *v26;
  hkClass::Self *v27;
  unsigned int v28;
  unsigned int Name;
  int Attribute;
  int v31;
  int v32;
  unsigned int *v33;
  int v34;
  int v35;
  int32_t v36; // kr04_4
  hkPackfileData::Self *v37;
  volatile int32_t *v38;
  int v39;
  int32_t v40; // kr08_4
  int32_t v41;
  int32_t v42; // ett
  int v43;
  int32_t v44; // kr0C_4
  hkPackfileData::Self *v45;
  volatile int32_t *v46;
  int v47;
  int32_t v48; // kr10_4
  int32_t v49;
  int32_t v50; // ett
  int v51;
  typedef int _g4_t_v52;
  typedef hkMemoryAllocator::Self *_g4_t_v53;
  typedef hkClass::Self *_g4_t_v54;
  typedef void *_g4_t_v55;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef const hkClassNameRegistry::Self *_g4_t_v58;
  typedef hkPackfileData::Self *_g4_t_v59;
  typedef hkPackfileData::Self *_g4_t_v60;
  typedef hkPackfileData::Self *_g4_t_v61;
  typedef hkPackfileData::Self *_g4_t_v62;
  typedef volatile int32_t *_g4_t_v63;
  typedef void *_g4_t_v64;
  typedef hkClass::Self *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef const hkDataObject::Self *_g4_t_v85;
  typedef hkPackfileData::Self *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef const hkClassNameRegistry::Self *_g4_t_v88;
  typedef hkDataObjectUtil::Self **_g4_t_v89;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v52)) > _g4_s0 ? (0u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v53)) > _g4_s1 ? (16u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v54)) > _g4_s2 ? (20u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v55)) > _g4_s3 ? (24u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v56)) > _g4_s4 ? (32u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v57)) > _g4_s5 ? (36u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v58)) > _g4_s6 ? (36u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v59)) > _g4_s7 ? (40u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v60)) > _g4_s8 ? (40u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v61)) > _g4_s9 ? (40u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v62)) > _g4_s10 ? (40u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v63)) > _g4_s11 ? (40u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v64)) > _g4_s12 ? (44u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v65)) > _g4_s13 ? (48u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v66)) > _g4_s14 ? (52u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v67)) > _g4_s15 ? (56u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v68)) > _g4_s16 ? (60u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v69)) > _g4_s17 ? (64u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v70)) > _g4_s18 ? (68u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v71)) > _g4_s19 ? (72u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v72)) > _g4_s20 ? (76u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v73)) > _g4_s21 ? (80u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v74)) > _g4_s22 ? (84u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v75)) > _g4_s23 ? (88u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v76)) > _g4_s24 ? (92u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v77)) > _g4_s25 ? (96u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v78)) > _g4_s26 ? (100u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v79)) > _g4_s27 ? (104u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v80)) > _g4_s28 ? (108u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v81)) > _g4_s29 ? (112u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v82)) > _g4_s30 ? (116u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v83)) > _g4_s31 ? (120u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v84)) > _g4_s32 ? (124u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v85)) > _g4_s33 ? (128u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v86)) > _g4_s34 ? (132u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (136u + sizeof(_g4_t_v87)) > _g4_s35 ? (136u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (140u + sizeof(_g4_t_v88)) > _g4_s36 ? (140u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v89)) > _g4_s37 ? (156u + sizeof(_g4_t_v89)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 64u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 68u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 80u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 84u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 88u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 92u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 96u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 100u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 104u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 108u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 112u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 116u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 120u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 124u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 128u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 132u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 136u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 140u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 156u);

  v89 = &self;
  v3 = a2;
  v4 = self;
  v5 = a3;
  v66 = 0;
  v67 = 0;
  v68 = 0x80000000;
  v69 = 0;
  v70 = 0;
  v71 = 0x80000000;
  v72 = 0;
  v73 = 0;
  v74 = -1;
  v75 = -1;
  v76 = nullptr;
  v77 = 0;
  v78 = -1;
  v79 = 0;
  v80 = 0;
  v81 = 0x80000000;
  v82 = 0;
  v83 = 0;
  v84 = 0x80000000;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    v58 = a3;
    v63 = (volatile int32_t *)((char *)a2 + 4);
    do
    {
      v44 = *((uint32_t *)v3 + 1);
      HIWORD(v43) = HIWORD(v44);
      LOWORD(v43) = 0;
    }
    while ( v44 != __sync_val_compare_and_swap(v63, v44, v43 | (uint16_t)(v44 + 1)) );
    v5 = v58;
  }
  v6 = *(uint32_t *)v4;
  v85 = v3;
  v86 = nullptr;
  v87 = 0;
  v88 = v5;
  if ( v6 != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v59 = (hkPackfileData::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)address + 44),
                              112);
    hkPackfileData::Construct(v59, v3);
    v86 = v59;
    Copier::deepCopyToNative((Copier *)&v64, (const hkDataObject::Self *)&v66);
    v55 = v64;
    v54 = v65;
    if ( v64 != nullptr && v65 != nullptr )
    {
      v60 = v86;
      v8 = v76;
      if ( v78 >= 0 )
      {
        v9 = 0;
        v10 = v76 + 6;
        if ( *v76 == -1 )
        {
          while ( v78 >= ++v9 )
          {
            v10 += 6;
            if ( *(v10 - 6) != -1 )
            {
              v51 = v9;
              goto LABEL_37;
            }
          }
        }
        else
        {
          v51 = 0;
LABEL_37:
          v53 = (hkMemoryAllocator::Self *)((hkPackfileData::Self *)((char *)v86 + 100));
          v56 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((hkPackfileData::Self *)((char *)v86 + 16));
          while ( 1 )
          {
            v57 = v9;
            v26 = &v8[6 * v51];
            v27 = (hkClass::Self *)v26[3];
            v28 = v26[2];
            Name = hkClass::getName(v27);
            hkMapBase_unsigned_long_unsigned_l_393416::insert(
              v56,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              v28,
              Name);
            Attribute = hkClass::getAttribute(v27, "hk.PostFinish");
            v31 = v57;
            if ( Attribute != 0 )
            {
              v32 = *((uint32_t *)v60 + 26);
              if ( v32 == (*((uint32_t *)v60 + 27) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v53, 8, v52);
                v31 = v57;
                v32 = *((uint32_t *)v60 + 26);
              }
              v33 = (unsigned int *)(*((uint32_t *)v60 + 25) + 8 * v32);
              *v33 = v28;
              v33[1] = (unsigned int)(uintptr_t)(v27);
              ++*((uint32_t *)v60 + 26);
            }
            v9 = v31 + 1;
            v8 = v76;
            if ( v78 < v9 )
              break;
            if ( v76[6 * v9] == -1 )
            {
              v34 = (int)(uintptr_t)(&v76[6 * v9 - 6]);
              while ( v78 >= ++v9 )
              {
                v34 += 24;
                if ( *(uint32_t *)(v34 + 24) != -1 )
                  goto LABEL_48;
              }
              break;
            }
LABEL_48:
            v51 = v9;
          }
        }
      }
      v11 = (const char *)hkClass::getName(v54);
      hkPackfileData::setContentsWithName(v86, v55, v11);
      v12 = v86;
      if ( *((uint16_t *)v86 + 3) != 0 )
      {
        do
        {
          v36 = *((uint32_t *)v12 + 1);
          HIWORD(v35) = HIWORD(v36);
          LOWORD(v35) = 0;
        }
        while ( v36 != __sync_val_compare_and_swap(
                         (volatile int32_t *)v12 + 1,
                         v36,
                         v35 | (uint16_t)(v36 + 1)) );
        v37 = v86;
        if ( v86 != nullptr && *((uint16_t *)v86 + 3) != 0 )
        {
          v38 = (volatile int32_t *)((char *)v86 + 4);
          v62 = v12;
          do
          {
            v40 = *((uint32_t *)v37 + 1);
            HIWORD(v39) = HIWORD(v40);
            LOWORD(v39) = 0;
            v41 = v39 | (uint16_t)(v40 - 1);
            v42 = v40;
          }
          while ( v42 != __sync_val_compare_and_swap(v38, v42, v41) );
          v12 = v62;
          if ( (uint16_t)v41 == 0 )
            G4_VCALL<void>(v37, 16);
        }
      }
    }
    else
    {
      v45 = v86;
      if ( v86 != nullptr && *((uint16_t *)v86 + 3) != 0 )
      {
        v46 = (volatile int32_t *)((char *)v86 + 4);
        do
        {
          v48 = *((uint32_t *)v45 + 1);
          HIWORD(v47) = HIWORD(v48);
          LOWORD(v47) = 0;
          v49 = v47 | (uint16_t)(v48 - 1);
          v50 = v48;
        }
        while ( v50 != __sync_val_compare_and_swap(v46, v50, v49) );
        if ( (uint16_t)v49 == 0 )
          G4_VCALL<void>(v45, 16);
      }
      v12 = nullptr;
    }
    v13 = v85;
  }
  else
  {
    v13 = v3;
    v12 = nullptr;
  }
  v86 = nullptr;
  if ( v13 != nullptr && *((uint16_t *)v13 + 3) != 0 )
  {
    v61 = v12;
    do
    {
      v15 = *((uint32_t *)v13 + 1);
      HIWORD(v14) = HIWORD(v15);
      LOWORD(v14) = 0;
      v16 = v14 | (uint16_t)(v15 - 1);
      v17 = v15;
    }
    while ( v17 != __sync_val_compare_and_swap((volatile int32_t *)v13 + 1, v17, v16) );
    v12 = v61;
    if ( (uint16_t)v16 == 0 )
      G4_VCALL<void>(v13, 16);
  }
  v85 = nullptr;
  v83 = 0;
  if ( v84 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v82,
      8 * v84);
  v82 = 0;
  v84 = 0x80000000;
  v80 = 0;
  if ( v81 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v79,
      8 * v81);
  v18 = 0;
  v19 = 0;
  v20 = v78 + 1;
  v79 = 0;
  v81 = 0x80000000;
  if ( v78 >= 0 )
  {
    do
    {
      ++v19;
      v76[v18] = -1;
      v18 += 6;
    }
    while ( v19 != v20 );
  }
  v21 = v77 < 0;
  v77 &= 0x80000000;
  if ( !v21 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v76,
      8 * (3 * v78 + 3));
  v22 = 0;
  v23 = 0;
  v24 = v74 + 1;
  v76 = nullptr;
  v77 = 0;
  v78 = -1;
  if ( v74 >= 0 )
  {
    do
    {
      ++v23;
      *(uint32_t *)(v72 + v22) = -1;
      v22 += 12;
    }
    while ( v23 != v24 );
  }
  v21 = v73 < 0;
  v73 &= 0x80000000;
  if ( !v21 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v72,
      4 * (3 * v74 + 3));
  v72 = 0;
  v73 = 0;
  v74 = -1;
  v70 = 0;
  if ( v71 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v69,
      12 * v71);
  v69 = 0;
  v71 = 0x80000000;
  v67 = 0;
  if ( v68 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v66,
      8 * v68);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectUtil::toResource  (binary VA: 0x18b64c0)
// Original: hkDataObjectUtil::toResource
// ----------------------------------------------------------------------------
hkPackfileData::Self * hkDataObjectUtil::toResource(hkDataObjectUtil::Self *self, const hkDataObject::Self *a2)
{
  const hkDataObject::Self *v2;

  v2 = (const hkDataObject::Self *)(*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 24))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  return hkDataObjectUtil::toResourceWithRegistry(self, v2, (const hkClassNameRegistry::Self *)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkDefaultClassWrapper::wrapClass  (binary VA: 0x18b6500)
// Original: hkDefaultClassWrapper::wrapClass
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> * hkDefaultClassWrapper::wrapClass(hkDefaultClassWrapper::Self *self, hkDataWorld::Self *a2, const char *a3)
{
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *result;
  const hkClass::Self *v4;
  int v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  result = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)G4_VCALL<int>(a2, 44, a3, v6, v7[0], v7[1], v7[2], v7[3]);
  if ( result == nullptr )
  {
    v4 = (const hkClass::Self *)(*(int (**)(uint32_t, const char *))(**((uint32_t **)self + 2) + 24))(
                            *((uint32_t *)self + 2),
                            a3);
    if ( v4 != nullptr && (v5 = *(uint32_t *)a2, v7[5] = (uint32_t)(uintptr_t)(a2), (*(void (**)(uint32_t *))(v5 + 32))(v7), v7[0] == 1) )
      return hkDataWorldDict::wrapClass(a2, v4);
    else
      return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDefaultClassWrapper::Destroy  (binary VA: 0x18b6740)
// Original: hkDefaultClassWrapper::~hkDefaultClassWrapper
// ----------------------------------------------------------------------------
void hkDefaultClassWrapper::Destroy(hkDefaultClassWrapper::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7E88);
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
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultClassWrapper::Destroy_ea18b67c0  (binary VA: 0x18b67c0)
// Original: hkDefaultClassWrapper::~hkDefaultClassWrapper
// ----------------------------------------------------------------------------
void hkDefaultClassWrapper::Destroy_ea18b67c0(hkDefaultClassWrapper::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;

  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7E88);
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
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v6 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v7 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v7 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v6, 12, self, v7);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultClassWrapper::Construct  (binary VA: 0x18b7620)
// Original: hkDefaultClassWrapper::hkDefaultClassWrapper
// ----------------------------------------------------------------------------
void hkDefaultClassWrapper::Construct(hkDefaultClassWrapper::Self *self, const hkClassNameRegistry::Self *a2)
{
  hkDefaultClassWrapper::Self *v2;
  const hkClassNameRegistry::Self *v3;
  int v4;
  int32_t v5; // kr00_4
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett

  v2 = self;
  v3 = a2;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7E88);
  *((uint32_t *)self + 2) = 0;
  if ( (a2 != nullptr
     || (v3 = (const hkClassNameRegistry::Self *)(*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance
                                                                        + 24))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance)) != nullptr)
    && *((uint16_t *)v3 + 3) != 0 )
  {
    do
    {
      v5 = *((uint32_t *)v3 + 1);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)v3 + 1, v5, v4 | (uint16_t)(v5 + 1)) );
  }
  v6 = *((uint32_t *)self + 2);
  if ( v6 == 0 || *(uint16_t *)(v6 + 6) == 0 )
    goto LABEL_8;
  do
  {
    v8 = *(uint32_t *)(v6 + 4);
    HIWORD(v7) = HIWORD(v8);
    LOWORD(v7) = 0;
    v9 = v7 | (uint16_t)(v8 - 1);
    v10 = v8;
  }
  while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
  v2 = self;
  if ( (uint16_t)v9 == 0 )
  {
    G4_VCALL<void>(v6, 16);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v3);
  }
  else
  {
LABEL_8:
    *((uint32_t *)v2 + 2) = (uint32_t)(uintptr_t)(v3);
  }
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::UidFromClassVersion::Destroy  (binary VA: 0x18b7700)
// Original: hkVersionPatchManager::UidFromClassVersion::~UidFromClassVersion
// ----------------------------------------------------------------------------
void hkVersionPatchManager::UidFromClassVersion::Destroy(hkVersionPatchManager::UidFromClassVersion::Self *self)
{
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v1;
  int i;
  int address;
  int v4;
  typedef hkMemoryAllocator::Self *_g4_t_Value;
  typedef bool _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_Value)) > _g4_s0 ? (4u + sizeof(_g4_t_Value)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v6)) > _g4_s1 ? (11u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_Value &Value = *reinterpret_cast<_g4_t_Value *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 11u);

  v1 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkVersionPatchManager::UidFromClassVersion::Self *)((char *)self + 28));
  for ( i = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator((hkVersionPatchManager::UidFromClassVersion::Self *)((char *)self + 28));
        ;
        i = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(v1, i) )
  {
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v6, (int)(uintptr_t)(v1), i);
    if ( !v6 )
      break;
    Value = (hkMemoryAllocator::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(v1, i);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), Value);
  }
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy(v1);
  *((uint32_t *)self + 5) = 0;
  v4 = *((uint32_t *)self + 6);
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      4 * v4);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::Destroy  (binary VA: 0x18b77f0)
// Original: hkVersionPatchManager::~hkVersionPatchManager
// ----------------------------------------------------------------------------
void hkVersionPatchManager::Destroy(hkVersionPatchManager::Self *self)
{
  hkVersionPatchManager::UidFromClassVersion::Self *v1;
  int address;
  int v3;

  v1 = *((hkVersionPatchManager::UidFromClassVersion::Self **)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7EA8);
  if ( v1 != nullptr )
  {
    hkVersionPatchManager::UidFromClassVersion::Destroy(v1);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, hkVersionPatchManager::UidFromClassVersion::Self *, int))(**(uint32_t **)(*(uint32_t *)address
                                                                                                 + 44)
                                                                                   + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v1,
      44);
  }
  if ( pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 36)) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      28,
      "~hkCriticalSection");
    perror("pthread_mutex_destroy(&m_mutex)");
    __builtin_debugtrap();
  }
  hkMapBase_unsigned_long_long_unsig_cbedf5::clearAndDeallocate(
    (hkVersionPatchManager::Self *)((char *)self + 24),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_long_unsig_cbedf5::Destroy();
  v3 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      4 * v3);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::Destroy_ea18b7900  (binary VA: 0x18b7900)
// Original: hkVersionPatchManager::~hkVersionPatchManager
// ----------------------------------------------------------------------------
void hkVersionPatchManager::Destroy_ea18b7900(hkVersionPatchManager::Self *self)
{
  int v1;
  int v2;

  hkVersionPatchManager::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::UidFromClassVersion::getName  (binary VA: 0x18b7960)
// Original: hkVersionPatchManager::UidFromClassVersion::getName
// ----------------------------------------------------------------------------
int hkVersionPatchManager::UidFromClassVersion::getName(hkVersionPatchManager::UidFromClassVersion::Self *self, uint64_t a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 4) + 4 * a2);
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::UidFromClassVersion::getVersion  (binary VA: 0x18b7970)
// Original: hkVersionPatchManager::UidFromClassVersion::getVersion
// ----------------------------------------------------------------------------
int hkVersionPatchManager::UidFromClassVersion::getVersion(hkVersionPatchManager::UidFromClassVersion::Self *self, uint64_t a2)
{
  return HIDWORD(a2);
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::UidFromClassVersion::cache  (binary VA: 0x18b7980)
// Original: hkVersionPatchManager::UidFromClassVersion::cache
// ----------------------------------------------------------------------------
int hkVersionPatchManager::UidFromClassVersion::cache(hkVersionPatchManager::UidFromClassVersion::Self *self, hkString::Self *a2)
{
  int result;
  hkString::Self *v3;

  if ( a2 == nullptr )
    return 0;
  result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
             (hkVersionPatchManager::UidFromClassVersion::Self *)((char *)self + 28),
             a2,
             0);
  if ( result == 0 )
  {
    v3 = hkString::strDup(a2);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
      (hkVersionPatchManager::UidFromClassVersion::Self *)((char *)self + 28),
      v3,
      (unsigned int)(uintptr_t)(v3));
    return (int)(uintptr_t)(v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::UidFromClassVersion::get  (binary VA: 0x18b79f0)
// Original: hkVersionPatchManager::UidFromClassVersion::get
// ----------------------------------------------------------------------------
int hkVersionPatchManager::UidFromClassVersion::get(hkVersionPatchManager::UidFromClassVersion::Self *self, hkString::Self *a2)
{
  hkString::Self *v2;
  int result;
  int v4;
  int v5;

  v2 = (hkString::Self *)hkVersionPatchManager::UidFromClassVersion::cache(self, a2);
  result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getOrInsert(self, v2, *((uint32_t *)self + 5));
  v4 = *((uint32_t *)self + 5);
  if ( v4 == result )
  {
    if ( v4 == (*((uint32_t *)self + 6) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkVersionPatchManager::UidFromClassVersion::Self *)((char *)self + 16),
        4,
        result);
      v4 = *((uint32_t *)self + 5);
      result = v5;
    }
    *(uint32_t *)(*((uint32_t *)self + 4) + 4 * v4) = (uint32_t)(uintptr_t)(v2);
    ++*((uint32_t *)self + 5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::Construct  (binary VA: 0x18b7aa0)
// Original: hkVersionPatchManager::hkVersionPatchManager
// ----------------------------------------------------------------------------
void hkVersionPatchManager::Construct(hkVersionPatchManager::Self *self)
{
  int address;
  int v2;
  typedef pthread_mutexattr_t _g4_t_attr;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_attr)) > _g4_s0 ? (12u + sizeof(_g4_t_attr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 12u);

  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7EA8);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = -1;
  *((uint32_t *)self + 10) = 0;
  if ( pthread_mutexattr_init(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      16,
      "hkCriticalSection");
    perror("pthread_mutexattr_init(&attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_settype(&attr, 1) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      17,
      "hkCriticalSection");
    perror("pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE)");
    __builtin_debugtrap();
  }
  if ( pthread_mutex_init((pthread_mutex_t *)((char *)self + 36), &attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      18,
      "hkCriticalSection");
    perror("pthread_mutex_init(&m_mutex, &attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_destroy(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      19,
      "hkCriticalSection");
    perror("pthread_mutexattr_destroy(&attr)");
    __builtin_debugtrap();
  }
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         44);
  memset((void *)v2, 0, 0x2Cu);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)v2);
  *(uint32_t *)(v2 + 16) = 0;
  *(uint32_t *)(v2 + 20) = 0;
  *(uint32_t *)(v2 + 24) = 0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)(v2 + 28));
  *((uint32_t *)self + 2) = v2;
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::clearPatches  (binary VA: 0x18b7d10)
// Original: hkVersionPatchManager::clearPatches
// ----------------------------------------------------------------------------
int hkVersionPatchManager::clearPatches(hkVersionPatchManager::Self *self)
{
  int v1;
  int address;
  int v3;
  int v4;
  int result;

  *((uint32_t *)self + 4) = 0;
  hkMapBase_unsigned_long_long_unsig_cbedf5::clear((hkVersionPatchManager::Self *)((char *)self + 24));
  v1 = *((uint32_t *)self + 2);
  if ( v1 != 0 )
  {
    hkVersionPatchManager::UidFromClassVersion::Destroy(*((hkVersionPatchManager::UidFromClassVersion::Self **)self
                                                                     + 2));
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v1,
      44);
    v3 = address;
  }
  else
  {
    v3 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  }
  v4 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v3 + 44) + 8))(*(uint32_t *)(*(uint32_t *)v3 + 44), 44);
  memset((void *)v4, 0, 0x2Cu);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)v4);
  *(uint32_t *)(v4 + 16) = 0;
  *(uint32_t *)(v4 + 20) = 0;
  *(uint32_t *)(v4 + 24) = 0x80000000;
  result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)(v4 + 28));
  *((uint32_t *)self + 2) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::clearProductPatches  (binary VA: 0x18b7df0)
// Original: hkVersionPatchManager::clearProductPatches
// ----------------------------------------------------------------------------
int hkVersionPatchManager::clearProductPatches(hkVersionPatchManager::Self *self, hkString::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int address;
  int v8;
  int v9;
  int result;
  size_t v11;

  v11 = hkString::strLen(a2);
  v2 = *((uint32_t *)self + 4) - 1;
  v3 = 4 * v2;
  if ( v2 >= 0 )
  {
    do
    {
      if ( *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 3) + v3) + 4) != 0
        && hkString::strNcmp(a2, *(char **)(*(uint32_t *)(*((uint32_t *)self + 3) + v3) + 4), v11) == 0 )
      {
        v4 = *((uint32_t *)self + 3);
        v5 = *((uint32_t *)self + 4) - 1;
        *((uint32_t *)self + 4) = v5;
        if ( v2 != v5 )
          *(uint32_t *)(v4 + v3) = *(uint32_t *)(v4 + 4 * v5);
      }
      --v2;
      v3 -= 4;
    }
    while ( v2 != -1 );
  }
  hkMapBase_unsigned_long_long_unsig_cbedf5::clear((hkVersionPatchManager::Self *)((char *)self + 24));
  v6 = *((uint32_t *)self + 2);
  if ( v6 != 0 )
  {
    hkVersionPatchManager::UidFromClassVersion::Destroy(*((hkVersionPatchManager::UidFromClassVersion::Self **)self
                                                                     + 2));
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v6,
      44);
    v8 = address;
  }
  else
  {
    v8 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  }
  v9 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v8 + 44) + 8))(*(uint32_t *)(*(uint32_t *)v8 + 44), 44);
  memset((void *)v9, 0, 0x2Cu);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)v9);
  *(uint32_t *)(v9 + 16) = 0;
  *(uint32_t *)(v9 + 20) = 0;
  *(uint32_t *)(v9 + 24) = 0x80000000;
  result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)(v9 + 28));
  *((uint32_t *)self + 2) = v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::getPatches  (binary VA: 0x18b7f40)
// Original: hkVersionPatchManager::getPatches
// ----------------------------------------------------------------------------
char * hkVersionPatchManager::getPatches(hkVersionPatchManager::Self *self)
{
  return (char *)self + 12;
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::getUid  (binary VA: 0x18b7f50)
// Original: hkVersionPatchManager::getUid
// ----------------------------------------------------------------------------
int hkVersionPatchManager::getUid(hkVersionPatchManager::UidFromClassVersion::Self **self, hkString::Self *a2)
{
  return hkVersionPatchManager::UidFromClassVersion::get(*(self + 2), a2);
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::getClassName  (binary VA: 0x18b8330)
// Original: hkVersionPatchManager::getClassName
// ----------------------------------------------------------------------------
int hkVersionPatchManager::getClassName(hkVersionPatchManager::UidFromClassVersion::Self **self, uint64_t a2)
{
  return hkVersionPatchManager::UidFromClassVersion::getName(*(self + 2), a2);
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::getClassVersion  (binary VA: 0x18b8370)
// Original: hkVersionPatchManager::getClassVersion
// ----------------------------------------------------------------------------
int hkVersionPatchManager::getClassVersion(hkVersionPatchManager::UidFromClassVersion::Self **self, uint64_t a2)
{
  return hkVersionPatchManager::UidFromClassVersion::getVersion(*(self + 2), a2);
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::findLastPatchIndexForUid  (binary VA: 0x18b8410)
// Original: hkVersionPatchManager::findLastPatchIndexForUid
// ----------------------------------------------------------------------------
int hkVersionPatchManager::findLastPatchIndexForUid(hkVersionPatchManager::Self *self, uint64_t a2, unsigned int a3)
{
  hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *v3;
  int v4;
  int v5;
  int v6;
  hkString::Self *v7;
  uint64_t v8; // rax
  uint64_t v10; // rax
  int v11;
  int v12;
  int v13;

  v3 = (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)((hkVersionPatchManager::Self *)((char *)self + 24));
  v4 = hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(
         (hkVersionPatchManager::Self *)((char *)self + 24),
         a2,
         0xFFFFFFFFFFFFFFFFLL);
  v5 = v4;
  if ( v4 != -1 )
  {
    v6 = *(uint32_t *)(*((uint32_t *)self + 3) + 4 * v4);
    if ( *(uint32_t *)(v6 + 12) == -1 )
      return v5;
    if ( a3 == 0 )
    {
      do
      {
        v7 = nullptr;
        if ( *(uint32_t *)(v6 + 4) != 0 )
        {
          v13 = v5;
          v12 = hkString::strCmp(*(hkString::Self **)v6, *(char **)(v6 + 4));
          v5 = v13;
          if ( v12 != 0 )
            return v5;
          v7 = *(hkString::Self **)(v6 + 4);
        }
        LODWORD(v8) = hkVersionPatchManager::UidFromClassVersion::get(
                        *((hkVersionPatchManager::UidFromClassVersion::Self **)self + 2),
                        v7);
        v5 = hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(
               v3,
               v8,
               0xFFFFFFFFFFFFFFFFLL);
        if ( v5 == -1 )
          return -1;
        v6 = *(uint32_t *)(*((uint32_t *)self + 3) + 4 * v5);
      }
      while ( *(uint32_t *)(v6 + 12) != -1 );
      return v5;
    }
    while ( 1 )
    {
      LODWORD(v10) = hkVersionPatchManager::UidFromClassVersion::get(
                       *((hkVersionPatchManager::UidFromClassVersion::Self **)self + 2),
                       *(hkString::Self **)(v6 + 4));
      v11 = hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(
              v3,
              v10,
              0xFFFFFFFFFFFFFFFFLL);
      v5 = v11;
      if ( v11 == -1 )
        break;
      v6 = *(uint32_t *)(*((uint32_t *)self + 3) + 4 * v11);
      if ( *(uint32_t *)(v6 + 12) == -1 )
        return v5;
    }
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::recomputePatchDependencies  (binary VA: 0x18b8580)
// Original: hkVersionPatchManager::recomputePatchDependencies
// ----------------------------------------------------------------------------
hkVersionPatchManager::Self * hkVersionPatchManager::recomputePatchDependencies(hkVersionPatchManager::Self *self, uint32_t *a2)
{
  hkVersionPatchManager::UidFromClassVersion::Self *v2;
  uint32_t *v3;
  uint64_t v4; // rax
  int v5;
  unsigned int v6;
  uint32_t *v7;
  hkString::Self *v8;
  uint64_t v9; // rax
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v10;
  int v11;
  uint32_t *v12;
  int v13;
  uint64_t v14; // rax
  signed int Key;
  int v16;
  unsigned int v18;
  int v19;
  uint64_t v20; // rax
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  uint64_t v33; // rax
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int *v37;
  int v38;
  int v39;
  uint32_t *v40;
  int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  int v47;
  hkVersionPatchManager::Self *v48;
  int v49;
  signed int v50;
  int v51;
  hkVersionPatchManager::Self *v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int j;
  hkString::Self *v62;
  uint64_t v63; // rax
  unsigned int v64;
  unsigned int v65;
  int *v66;
  int v67;
  uint32_t *v68;
  unsigned int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  unsigned int v74;
  int v75;
  int v76;
  int v77;
  unsigned int v78;
  int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int *v83;
  unsigned int v84;
  int i;
  int v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef hkVersionPatchManager::Self *_g4_t_v91;
  typedef unsigned int _g4_t_v92;
  typedef unsigned int _g4_t_v93;
  typedef uint64_t _g4_t_v94 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v95;
  typedef unsigned int _g4_t_v96;
  typedef unsigned int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef unsigned int _g4_t_v99;
  typedef int *_g4_t_v100;
  typedef unsigned int _g4_t_v101;
  typedef hkVersionPatchManager::Self *_g4_t_v102;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v103;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v104;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v105;
  typedef unsigned int _g4_t_v106;
  typedef signed int _g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef hkVersionPatchManager::UidFromClassVersion::Self *_g4_t_v109;
  typedef hkVersionPatchManager::UidFromClassVersion::Self *_g4_t_v110;
  typedef hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *_g4_t_v111;
  typedef uint64_t _g4_t_v112 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v113;
  typedef uint64_t _g4_t_v114 __attribute__((aligned(1)));
  typedef uint64_t _g4_t_v115 __attribute__((aligned(1)));
  typedef int _g4_t_v116;
  typedef uint64_t _g4_t_v117 __attribute__((aligned(1)));
  typedef int _g4_t_v118;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v119;
  typedef unsigned int _g4_t_v120;
  typedef unsigned int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_LastPatchIndexForUid;
  typedef uint64_t _g4_t_v124 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef uint64_t _g4_t_v127 __attribute__((aligned(1)));
  typedef int _g4_t_v128;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v129;
  typedef char _g4_t_v130[4];
  typedef uint32_t _g4_t_v131[2];
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int *_g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef hkString::Self *_g4_t_v142[4];
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef uint32_t _g4_t_v146[3];
  typedef uint64_t _g4_t_v147 __attribute__((aligned(1)));
  typedef int _g4_t_v148;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v149;
  typedef int _g4_t_v150;
  typedef uint32_t _g4_t_v151[3];
  typedef unsigned int _g4_t_v152;
  typedef int _g4_t_v153;
  typedef unsigned int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef uint32_t _g4_t_v156[3];
  typedef unsigned int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef uint32_t _g4_t_v161[2];
  typedef int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef hkVersionPatchManager::Self **_g4_t_v164;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v87)) > _g4_s0 ? (8u + sizeof(_g4_t_v87)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v88)) > _g4_s1 ? (8u + sizeof(_g4_t_v88)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v89)) > _g4_s2 ? (8u + sizeof(_g4_t_v89)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v90)) > _g4_s3 ? (8u + sizeof(_g4_t_v90)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v91)) > _g4_s4 ? (36u + sizeof(_g4_t_v91)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v92)) > _g4_s5 ? (44u + sizeof(_g4_t_v92)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v93)) > _g4_s6 ? (44u + sizeof(_g4_t_v93)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v94)) > _g4_s7 ? (52u + sizeof(_g4_t_v94)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v95)) > _g4_s8 ? (52u + sizeof(_g4_t_v95)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v96)) > _g4_s9 ? (52u + sizeof(_g4_t_v96)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v97)) > _g4_s10 ? (64u + sizeof(_g4_t_v97)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v98)) > _g4_s11 ? (64u + sizeof(_g4_t_v98)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v99)) > _g4_s12 ? (64u + sizeof(_g4_t_v99)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v100)) > _g4_s13 ? (64u + sizeof(_g4_t_v100)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v101)) > _g4_s14 ? (64u + sizeof(_g4_t_v101)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v102)) > _g4_s15 ? (68u + sizeof(_g4_t_v102)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v103)) > _g4_s16 ? (72u + sizeof(_g4_t_v103)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v104)) > _g4_s17 ? (72u + sizeof(_g4_t_v104)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v105)) > _g4_s18 ? (72u + sizeof(_g4_t_v105)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v106)) > _g4_s19 ? (72u + sizeof(_g4_t_v106)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v107)) > _g4_s20 ? (76u + sizeof(_g4_t_v107)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v108)) > _g4_s21 ? (76u + sizeof(_g4_t_v108)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v109)) > _g4_s22 ? (80u + sizeof(_g4_t_v109)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v110)) > _g4_s23 ? (80u + sizeof(_g4_t_v110)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v111)) > _g4_s24 ? (88u + sizeof(_g4_t_v111)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v112)) > _g4_s25 ? (92u + sizeof(_g4_t_v112)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v113)) > _g4_s26 ? (92u + sizeof(_g4_t_v113)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v114)) > _g4_s27 ? (92u + sizeof(_g4_t_v114)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v115)) > _g4_s28 ? (92u + sizeof(_g4_t_v115)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v116)) > _g4_s29 ? (92u + sizeof(_g4_t_v116)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v117)) > _g4_s30 ? (92u + sizeof(_g4_t_v117)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v118)) > _g4_s31 ? (92u + sizeof(_g4_t_v118)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v119)) > _g4_s32 ? (92u + sizeof(_g4_t_v119)) : _g4_s32,
    _g4_s34 = (92u + sizeof(_g4_t_v120)) > _g4_s33 ? (92u + sizeof(_g4_t_v120)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v121)) > _g4_s34 ? (100u + sizeof(_g4_t_v121)) : _g4_s34,
    _g4_s36 = (100u + sizeof(_g4_t_v122)) > _g4_s35 ? (100u + sizeof(_g4_t_v122)) : _g4_s35,
    _g4_s37 = (100u + sizeof(_g4_t_LastPatchIndexForUid)) > _g4_s36 ? (100u + sizeof(_g4_t_LastPatchIndexForUid)) : _g4_s36,
    _g4_s38 = (108u + sizeof(_g4_t_v124)) > _g4_s37 ? (108u + sizeof(_g4_t_v124)) : _g4_s37,
    _g4_s39 = (108u + sizeof(_g4_t_v125)) > _g4_s38 ? (108u + sizeof(_g4_t_v125)) : _g4_s38,
    _g4_s40 = (108u + sizeof(_g4_t_v126)) > _g4_s39 ? (108u + sizeof(_g4_t_v126)) : _g4_s39,
    _g4_s41 = (108u + sizeof(_g4_t_v127)) > _g4_s40 ? (108u + sizeof(_g4_t_v127)) : _g4_s40,
    _g4_s42 = (108u + sizeof(_g4_t_v128)) > _g4_s41 ? (108u + sizeof(_g4_t_v128)) : _g4_s41,
    _g4_s43 = (116u + sizeof(_g4_t_v129)) > _g4_s42 ? (116u + sizeof(_g4_t_v129)) : _g4_s42,
    _g4_s44 = (120u + sizeof(_g4_t_v130)) > _g4_s43 ? (120u + sizeof(_g4_t_v130)) : _g4_s43,
    _g4_s45 = (124u + sizeof(_g4_t_v131)) > _g4_s44 ? (124u + sizeof(_g4_t_v131)) : _g4_s44,
    _g4_s46 = (132u + sizeof(_g4_t_v132)) > _g4_s45 ? (132u + sizeof(_g4_t_v132)) : _g4_s45,
    _g4_s47 = (140u + sizeof(_g4_t_v133)) > _g4_s46 ? (140u + sizeof(_g4_t_v133)) : _g4_s46,
    _g4_s48 = (144u + sizeof(_g4_t_v134)) > _g4_s47 ? (144u + sizeof(_g4_t_v134)) : _g4_s47,
    _g4_s49 = (148u + sizeof(_g4_t_v135)) > _g4_s48 ? (148u + sizeof(_g4_t_v135)) : _g4_s48,
    _g4_s50 = (156u + sizeof(_g4_t_v136)) > _g4_s49 ? (156u + sizeof(_g4_t_v136)) : _g4_s49,
    _g4_s51 = (160u + sizeof(_g4_t_v137)) > _g4_s50 ? (160u + sizeof(_g4_t_v137)) : _g4_s50,
    _g4_s52 = (164u + sizeof(_g4_t_v138)) > _g4_s51 ? (164u + sizeof(_g4_t_v138)) : _g4_s51,
    _g4_s53 = (172u + sizeof(_g4_t_v139)) > _g4_s52 ? (172u + sizeof(_g4_t_v139)) : _g4_s52,
    _g4_s54 = (176u + sizeof(_g4_t_v140)) > _g4_s53 ? (176u + sizeof(_g4_t_v140)) : _g4_s53,
    _g4_s55 = (180u + sizeof(_g4_t_v141)) > _g4_s54 ? (180u + sizeof(_g4_t_v141)) : _g4_s54,
    _g4_s56 = (188u + sizeof(_g4_t_v142)) > _g4_s55 ? (188u + sizeof(_g4_t_v142)) : _g4_s55,
    _g4_s57 = (204u + sizeof(_g4_t_v143)) > _g4_s56 ? (204u + sizeof(_g4_t_v143)) : _g4_s56,
    _g4_s58 = (208u + sizeof(_g4_t_v144)) > _g4_s57 ? (208u + sizeof(_g4_t_v144)) : _g4_s57,
    _g4_s59 = (212u + sizeof(_g4_t_v145)) > _g4_s58 ? (212u + sizeof(_g4_t_v145)) : _g4_s58,
    _g4_s60 = (216u + sizeof(_g4_t_v146)) > _g4_s59 ? (216u + sizeof(_g4_t_v146)) : _g4_s59,
    _g4_s61 = (228u + sizeof(_g4_t_v147)) > _g4_s60 ? (228u + sizeof(_g4_t_v147)) : _g4_s60,
    _g4_s62 = (236u + sizeof(_g4_t_v148)) > _g4_s61 ? (236u + sizeof(_g4_t_v148)) : _g4_s61,
    _g4_s63 = (240u + sizeof(_g4_t_v149)) > _g4_s62 ? (240u + sizeof(_g4_t_v149)) : _g4_s62,
    _g4_s64 = (244u + sizeof(_g4_t_v150)) > _g4_s63 ? (244u + sizeof(_g4_t_v150)) : _g4_s63,
    _g4_s65 = (248u + sizeof(_g4_t_v151)) > _g4_s64 ? (248u + sizeof(_g4_t_v151)) : _g4_s64,
    _g4_s66 = (260u + sizeof(_g4_t_v152)) > _g4_s65 ? (260u + sizeof(_g4_t_v152)) : _g4_s65,
    _g4_s67 = (268u + sizeof(_g4_t_v153)) > _g4_s66 ? (268u + sizeof(_g4_t_v153)) : _g4_s66,
    _g4_s68 = (272u + sizeof(_g4_t_v154)) > _g4_s67 ? (272u + sizeof(_g4_t_v154)) : _g4_s67,
    _g4_s69 = (276u + sizeof(_g4_t_v155)) > _g4_s68 ? (276u + sizeof(_g4_t_v155)) : _g4_s68,
    _g4_s70 = (280u + sizeof(_g4_t_v156)) > _g4_s69 ? (280u + sizeof(_g4_t_v156)) : _g4_s69,
    _g4_s71 = (292u + sizeof(_g4_t_v157)) > _g4_s70 ? (292u + sizeof(_g4_t_v157)) : _g4_s70,
    _g4_s72 = (300u + sizeof(_g4_t_v158)) > _g4_s71 ? (300u + sizeof(_g4_t_v158)) : _g4_s71,
    _g4_s73 = (304u + sizeof(_g4_t_v159)) > _g4_s72 ? (304u + sizeof(_g4_t_v159)) : _g4_s72,
    _g4_s74 = (308u + sizeof(_g4_t_v160)) > _g4_s73 ? (308u + sizeof(_g4_t_v160)) : _g4_s73,
    _g4_s75 = (312u + sizeof(_g4_t_v161)) > _g4_s74 ? (312u + sizeof(_g4_t_v161)) : _g4_s74,
    _g4_s76 = (320u + sizeof(_g4_t_v162)) > _g4_s75 ? (320u + sizeof(_g4_t_v162)) : _g4_s75,
    _g4_s77 = (324u + sizeof(_g4_t_v163)) > _g4_s76 ? (324u + sizeof(_g4_t_v163)) : _g4_s76,
    _g4_s78 = (340u + sizeof(_g4_t_v164)) > _g4_s77 ? (340u + sizeof(_g4_t_v164)) : _g4_s77
  };
  alignas(16) uint8_t _g4_sf[_g4_s78];
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 8u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 8u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 8u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 36u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 44u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 44u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 52u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 52u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 64u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 64u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 64u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 64u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 64u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 68u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 72u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 72u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 72u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 72u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 76u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 76u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 80u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 80u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 88u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 92u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 92u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 92u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 92u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 92u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 92u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 92u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 92u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 92u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 100u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 100u);
  _g4_t_LastPatchIndexForUid &LastPatchIndexForUid = *reinterpret_cast<_g4_t_LastPatchIndexForUid *>(_g4_sf + 100u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 108u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 108u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 108u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 108u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 108u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 116u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 120u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 124u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 132u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 140u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 144u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 148u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 156u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 160u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 164u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 172u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 176u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 180u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 188u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 204u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 208u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 212u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 216u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 228u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 236u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 240u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 244u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 248u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 260u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 268u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 272u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 276u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 280u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 292u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 300u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 304u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 308u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 312u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 320u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 324u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 340u);

  v164 = &self;
  v91 = self;
  v102 = (hkVersionPatchManager::Self *)a2;
  v131[0] = 0;
  v131[1] = 0;
  v132 = -1;
  v143 = 0;
  v144 = 0;
  v2 = (hkVersionPatchManager::UidFromClassVersion::Self *)a2[2];
  v145 = 0x80000000;
  v109 = v2;
  v3 = a2;
  v146[0] = 0;
  v146[1] = 0;
  v146[2] = -1;
  LODWORD(v147) = -1;
  v148 = 0;
  v149 = nullptr;
  v150 = 0x80000000;
  v151[0] = 0;
  v151[1] = 0;
  v151[2] = -1;
  v152 = 0xFFFFFFFF;
  v111 = (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)(a2 + 6);
  hkMapBase_unsigned_long_long_unsig_cbedf5::clear((hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)(a2 + 6));
  if ( (int)v3[4] > 0 )
  {
    v129 = nullptr;
    v124 = 0;
    do
    {
      v13 = *(uint32_t *)(*((uint32_t *)v102 + 3) + 4 * (uint32_t)(uintptr_t)(v129));
      if ( !isValidPatch((uint32_t *)v13) )
      {
LABEL_25:
        *(uint32_t *)v91 = 1;
        goto LABEL_26;
      }
      if ( *(uint32_t *)(v13 + 8) == -1 )
      {
        LODWORD(v14) = hkVersionPatchManager::UidFromClassVersion::get(
                         *((hkVersionPatchManager::UidFromClassVersion::Self **)v102 + 2),
                         *(hkString::Self **)(v13 + 4));
        v115 = v14;
        Key = hkMapBase_unsigned_long_long_unsig_cbedf5::findKey(
                (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v131,
                v14);
        if ( Key <= v132 )
          goto LABEL_25;
        hkMapBase_unsigned_long_long_unsig_cbedf5::insert(
          (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v131,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v115,
          v124);
        v5 = *(uint32_t *)(v13 + 12);
      }
      else
      {
        LODWORD(v4) = hkVersionPatchManager::UidFromClassVersion::get(
                        *((hkVersionPatchManager::UidFromClassVersion::Self **)v102 + 2),
                        *(hkString::Self **)v13);
        v112 = v4;
        if ( (signed int)hkMapBase_unsigned_long_long_unsig_cbedf5::findKey(
                           v111,
                           v4) <= *((uint32_t *)v102 + 8) )
          goto LABEL_25;
        hkMapBase_unsigned_long_long_unsig_cbedf5::insert(
          v111,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v112,
          v124);
        v5 = *(uint32_t *)(v13 + 12);
        if ( v5 == -1 )
          goto LABEL_7;
        if ( *(uint32_t *)(v13 + 4) != 0 )
        {
          if ( hkString::strCmp(*(hkString::Self **)v13, *(char **)(v13 + 4)) != 0 )
          {
LABEL_7:
            v113 = *(uint32_t *)v13;
            v121 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                     (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v151,
                     *(uint32_t *)v13,
                     0xFFFFFFFF);
            v6 = v152;
            if ( v152 == -1 )
            {
              v18 = (unsigned int)(uintptr_t)(v149);
              if ( v149 == (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v150 & 0x3FFFFFFF) )
              {
                v106 = (unsigned int)(uintptr_t)(v149);
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)&v148,
                  8,
                  v87);
                v149 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((char *)v149 + 1);
                v6 = v106;
                v7 = (uint32_t *)(v148 + 8 * v106);
              }
              else
              {
                v149 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((char *)v149 + 1);
                v6 = v18;
                v7 = (uint32_t *)(v148 + 8 * v18);
              }
            }
            else
            {
              v7 = (uint32_t *)(v148 + 8 * v152);
              v152 = v7[1];
            }
            *v7 = (uint32_t)(uintptr_t)(v129);
            v7[1] = v121;
            hkMapBase_unsigned_long_unsigned_l_393416::insert(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v151,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              v113,
              v6);
          }
          v5 = *(uint32_t *)(v13 + 12);
        }
      }
      if ( v5 != -1 )
      {
        v8 = *(hkString::Self **)(v13 + 4);
        if ( v8 == nullptr )
          v8 = *(hkString::Self **)v13;
        LODWORD(v9) = hkVersionPatchManager::UidFromClassVersion::get(v109, v8);
        v114 = v9;
        v10 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(
                                                                                           (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v146,
                                                                                           v9,
                                                                                           0xFFFFFFFFFFFFFFFFLL);
        v11 = v147;
        if ( (uint32_t)v147 == -1 )
        {
          v11 = v144;
          v16 = v144;
          if ( v144 == (v145 & 0x3FFFFFFF) )
          {
            v103 = v10;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v143,
              8,
              v88);
            v16 = v144;
            v10 = v103;
          }
          v144 = v16 + 1;
          v12 = (uint32_t *)(v143 + 8 * v11);
        }
        else
        {
          v12 = (uint32_t *)(v143 + 8 * v147);
          LODWORD(v147) = v12[1];
        }
        v12[1] = (uint32_t)(uintptr_t)(v10);
        *v12 = (uint32_t)(uintptr_t)(v129);
        hkMapBase_unsigned_long_long_unsig_cbedf5::insert(
          (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v146,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v114,
          v11);
      }
      v129 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((char *)v129 + 1);
      ++v124;
    }
    while ( *((uint32_t *)v102 + 4) > (int)(uintptr_t)(v129) );
  }
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(v142);
  v153 = 0;
  v154 = 0;
  v155 = 0x80000000;
  v156[0] = 0;
  v156[1] = 0;
  v156[2] = -1;
  v157 = 0xFFFFFFFF;
  v19 = *((uint32_t *)v102 + 4);
  v158 = 0;
  v159 = 0;
  v160 = 0x80000000;
  v161[0] = 0;
  v161[1] = 0;
  v162 = -1;
  v163 = -1;
  v107 = 0;
  if ( v19 <= 0 )
  {
    v134 = v19;
    v136 = nullptr;
    v138 = 0x80000000;
    v86 = *((uint32_t *)v102 + 3);
    *((uint32_t *)v102 + 4) = 0;
    v133 = v86;
    v135 = *((uint32_t *)v102 + 5);
    *((uint32_t *)v102 + 3) = 0;
    *((uint32_t *)v102 + 5) = 0x80000000;
    goto LABEL_77;
  }
  do
  {
    v122 = *(uint32_t *)(*((uint32_t *)v102 + 3) + 4 * v107);
    v104 = *(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> **)v122;
    if ( *(uint32_t *)(v122 + 8) == -1 )
    {
      v104 = *(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> **)(v122 + 4);
      if ( *(uint32_t *)(v122 + 12) == -1 || *(uint32_t *)(v122 + 4) == 0 )
      {
LABEL_127:
        *(uint32_t *)v91 = 1;
        goto LABEL_102;
      }
    }
    LODWORD(v20) = hkVersionPatchManager::UidFromClassVersion::get(v109, (hkString::Self *)(v104));
    v94 = v20;
    if ( *(uint32_t *)(v122 + 8) == -1 )
    {
      v125 = hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(
               (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v131,
               v20,
               0xFFFFFFFFFFFFFFFFLL);
    }
    else
    {
      v125 = hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(
               v111,
               v20,
               0xFFFFFFFFFFFFFFFFLL);
      v21 = hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(
              (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v146,
              v94,
              0xFFFFFFFFFFFFFFFFLL);
      if ( v21 != -1 )
      {
        v22 = v143;
        do
        {
          v24 = *(uint32_t *)(v22 + 8 * v21);
          v116 = 8 * v21;
          v25 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                  (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v156,
                  v125,
                  0xFFFFFFFF);
          v26 = v157;
          if ( v157 == -1 )
          {
            v27 = v154;
            v28 = v154;
            if ( v154 == (v155 & 0x3FFFFFFF) )
            {
              v99 = v25;
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v153,
                8,
                v89);
              v28 = v154;
              v25 = v99;
            }
            v26 = v27;
            v154 = v28 + 1;
            v23 = (uint32_t *)(v153 + 8 * v27);
          }
          else
          {
            v23 = (uint32_t *)(v153 + 8 * v157);
            v157 = v23[1];
          }
          v23[1] = v25;
          *v23 = v24;
          hkMapBase_unsigned_long_unsigned_l_393416::insert(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v156,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v125,
            v26);
          v22 = v143;
          v21 = *(uint32_t *)(v143 + v116 + 4);
        }
        while ( v21 != -1 );
      }
    }
    v29 = v122;
    v30 = 0;
    v31 = *(uint32_t *)(v122 + 20);
    if ( v31 > 0 )
    {
      do
      {
        while ( 1 )
        {
          v32 = *(uint32_t *)(v122 + 16) + 8 * v30;
          if ( *(uint32_t *)v32 == 7 )
            break;
          if ( ++v30 >= v31 )
            goto LABEL_65;
        }
        LODWORD(v33) = hkVersionPatchManager::UidFromClassVersion::get(v109, **(hkString::Self ***)(v32 + 4));
        v117 = v33;
        v34 = hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(
                v111,
                v33,
                0xFFFFFFFFFFFFFFFFLL);
        v35 = v34;
        if ( v34 != -1 )
        {
          v97 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                  (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v156,
                  v34,
                  0xFFFFFFFF);
          v36 = v157;
          if ( v157 == -1 )
          {
            v93 = v154;
            v64 = v154;
            if ( v154 == (v155 & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v153,
                8,
                v90);
              v64 = v154;
            }
            v36 = v93;
            v154 = v64 + 1;
            v37 = (unsigned int *)(v153 + 8 * v93);
          }
          else
          {
            v37 = (unsigned int *)(v153 + 8 * v157);
            v157 = v37[1];
          }
          *v37 = v125;
          v37[1] = v97;
          hkMapBase_unsigned_long_unsigned_l_393416::insert(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v156,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v35,
            v36);
        }
        v38 = hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(
                (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v146,
                v117,
                0xFFFFFFFFFFFFFFFFLL);
        v39 = v143;
        if ( v38 != -1 )
        {
          v98 = v30;
          do
          {
            v118 = 8 * v38;
            v41 = *(uint32_t *)(v39 + 8 * v38);
            v42 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v156,
                    v125,
                    0xFFFFFFFF);
            v43 = v157;
            if ( v157 == -1 )
            {
              v44 = v154;
              v45 = v154;
              if ( v154 == (v155 & 0x3FFFFFFF) )
              {
                v92 = v42;
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)&v153,
                  8,
                  v89);
                v45 = v154;
                v42 = v92;
              }
              v43 = v44;
              v154 = v45 + 1;
              v40 = (uint32_t *)(v153 + 8 * v44);
            }
            else
            {
              v40 = (uint32_t *)(v153 + 8 * v157);
              v157 = v40[1];
            }
            v40[1] = v42;
            *v40 = v41;
            hkMapBase_unsigned_long_unsigned_l_393416::insert(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v156,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              v125,
              v43);
            v39 = v143;
            v38 = *(uint32_t *)(v143 + v118 + 4);
          }
          while ( v38 != -1 );
          v30 = v98;
        }
        ++v30;
        v31 = *(uint32_t *)(v122 + 20);
      }
      while ( v30 < v31 );
LABEL_65:
      v29 = v122;
    }
    if ( *(uint32_t *)(v29 + 8) == -1
      && hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
           (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v151,
           (unsigned int)(uintptr_t)(v104),
           0xFFFFFFFF) != -1 )
    {
      v65 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v151,
              (unsigned int)(uintptr_t)(v104),
              0xFFFFFFFF);
      if ( v65 != -1 )
      {
        v66 = &v158;
        LastPatchIndexForUid = hkVersionPatchManager::findLastPatchIndexForUid(v102, v94, 0);
        if ( LastPatchIndexForUid == -1 )
        {
          if ( hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                 (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v142,
                 v104,
                 -1) != -1 )
            goto LABEL_127;
          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
            (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v142,
            v104,
            v107);
          v66 = &v153;
        }
        v67 = v148;
        v100 = v66;
        v119 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v66 + 3);
        do
        {
          v71 = 8 * v65;
          v70 = v67 + v71;
          v72 = *(uint32_t *)(v67 + v71);
          if ( LastPatchIndexForUid != v72 )
          {
            v105 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                                                                                                v119,
                                                                                                v125,
                                                                                                0xFFFFFFFF);
            v73 = v100[6];
            if ( v73 == -1 )
            {
              v96 = v100[1];
              v74 = v96;
              if ( v96 == (v100[2] & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)v100,
                  8,
                  v89);
                v74 = v100[1];
              }
              v69 = v96;
              v100[1] = v74 + 1;
              v68 = (uint32_t *)(*v100 + 8 * v96);
            }
            else
            {
              v95 = v100[6];
              v68 = (uint32_t *)(*v100 + 8 * v73);
              v100[6] = v68[1];
              v69 = v95;
            }
            *v68 = v72;
            v68[1] = (uint32_t)(uintptr_t)(v105);
            hkMapBase_unsigned_long_unsigned_l_393416::insert(
              v119,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              v125,
              v69);
            v67 = v148;
            v70 = v148 + v71;
          }
          v65 = *(uint32_t *)(v70 + 4);
        }
        while ( v65 != -1 );
      }
    }
    ++v107;
    v19 = *((uint32_t *)v102 + 4);
  }
  while ( v19 > v107 );
  v46 = v161[0];
  if ( v162 >= 0 )
  {
    v47 = 0;
    if ( *(uint32_t *)v161[0] != -1 )
    {
      for ( i = 0; ; i = v47 )
      {
LABEL_129:
        v120 = *(uint32_t *)(v46 + 8 * i);
        v78 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v161,
                v120,
                0xFFFFFFFF);
        v79 = v158;
        if ( v78 != -1 )
        {
          v108 = v47;
          do
          {
            v139 = 0;
            v140 = 0;
            v141 = -1;
            v128 = 8 * v78;
            v80 = *(uint32_t *)(v79 + 8 * v78);
            if ( sub_18B7040(
                   v120,
                   v80,
                   &v153,
                   (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v139) == 0 )
            {
              v81 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v156,
                      v120,
                      0xFFFFFFFF);
              v82 = v157;
              v110 = (hkVersionPatchManager::UidFromClassVersion::Self *)v81;
              if ( v157 == -1 )
              {
                v101 = v154;
                v84 = v154;
                if ( v154 == (v155 & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)&v153,
                    8,
                    v89);
                  v84 = v154;
                }
                v82 = v101;
                v154 = v84 + 1;
                v83 = (unsigned int *)(v153 + 8 * v101);
              }
              else
              {
                v83 = (unsigned int *)(v153 + 8 * v157);
                v157 = v83[1];
              }
              *v83 = v80;
              v83[1] = (unsigned int)(uintptr_t)(v110);
              hkMapBase_unsigned_long_unsigned_l_393416::insert(
                (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v156,
                (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                v120,
                v82);
            }
            hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v139,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
            hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
            v79 = v158;
            v78 = *(uint32_t *)(v158 + v128 + 4);
          }
          while ( v78 != -1 );
          v47 = v108;
        }
        ++v47;
        v46 = v161[0];
        if ( v162 < v47 )
          break;
        while ( *(uint32_t *)(v161[0] + 8 * v47) == -1 )
        {
          if ( v162 < ++v47 )
            goto LABEL_145;
        }
      }
LABEL_145:
      v48 = v102;
      v19 = *((uint32_t *)v102 + 4);
      goto LABEL_74;
    }
    while ( ++v47 <= v162 )
    {
      if ( *(uint32_t *)(v161[0] + 8 * v47) != -1 )
      {
        i = v47;
        goto LABEL_129;
      }
    }
  }
  v48 = v102;
LABEL_74:
  v133 = *((uint32_t *)v48 + 3);
  v49 = *((uint32_t *)v48 + 5);
  *((uint32_t *)v48 + 3) = 0;
  v134 = v19;
  *((uint32_t *)v48 + 4) = 0;
  v135 = v49;
  *((uint32_t *)v48 + 5) = 0x80000000;
  v136 = nullptr;
  v137 = 0;
  v138 = 0x80000000;
  if ( v19 > 0 )
  {
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v130,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v136,
      v19,
      4);
    if ( v19 - v137 > 0 )
      memset(&v136[v137], -1, 4 * (v19 - v137));
  }
LABEL_77:
  v137 = v19;
  v139 = 0;
  v140 = 0;
  v141 = 0x80000000;
  if ( v134 <= 0 )
  {
    *((uint32_t *)v102 + 4) = v134;
  }
  else
  {
    v50 = 0;
    v51 = 0;
    do
      v51 = sub_18B6580(v50++, &v136, &v153, v51, (hkMemoryAllocator::Self *)&v139, (int)(uintptr_t)(&v133));
    while ( v134 > v50 );
    v52 = v102;
    v53 = v134;
    v54 = v134;
    v55 = *((uint32_t *)v102 + 5) & 0x3FFFFFFF;
    if ( v134 > v55 )
    {
      v56 = 2 * v55;
      v126 = v134;
      if ( v134 >= v56 )
        v56 = v134;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v130,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)v102 + 3,
        v56,
        4);
      v54 = v134;
      v53 = v126;
      v52 = v102;
    }
    *((uint32_t *)v52 + 4) = v53;
    if ( v54 > 0 )
    {
      v57 = *v136;
      if ( *v136 < 0 )
      {
LABEL_126:
        v134 = v53;
        v75 = v133;
        v76 = *((uint32_t *)v102 + 5);
        v133 = *((uint32_t *)v102 + 3);
        v77 = v135;
        v135 = v76;
        *((uint32_t *)v102 + 3) = v75;
        *((uint32_t *)v102 + 4) = v54;
        *((uint32_t *)v102 + 5) = v77;
        *(uint32_t *)v91 = 1;
        goto LABEL_95;
      }
      v58 = 0;
      v59 = 0;
      while ( 1 )
      {
        ++v59;
        *(uint32_t *)(*((uint32_t *)v102 + 3) + 4 * v57) = *(uint32_t *)(v133 + v58);
        v54 = v134;
        if ( v134 <= v59 )
          break;
        v58 = 4 * v59;
        v57 = v136[v59];
        if ( v57 < 0 )
        {
          v53 = *((uint32_t *)v102 + 4);
          goto LABEL_126;
        }
      }
    }
  }
  hkMapBase_unsigned_long_long_unsig_cbedf5::clear(v111);
  v60 = *((uint32_t *)v102 + 4);
  if ( v60 > 0 )
  {
    v127 = 0;
    for ( j = 0; j < v60; ++j )
    {
      v62 = **(hkString::Self ***)(*((uint32_t *)v102 + 3) + 4 * j);
      if ( v62 != nullptr )
      {
        LODWORD(v63) = hkVersionPatchManager::UidFromClassVersion::get(
                         *((hkVersionPatchManager::UidFromClassVersion::Self **)v102 + 2),
                         v62);
        hkMapBase_unsigned_long_long_unsig_cbedf5::insert(
          v111,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v63,
          v127);
        v60 = *((uint32_t *)v102 + 4);
      }
      ++v127;
    }
  }
  *(uint32_t *)v91 = 0;
LABEL_95:
  v140 = 0;
  if ( v141 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v139,
      4 * v141);
  v139 = 0;
  v141 = 0x80000000;
  v137 = 0;
  if ( v138 >= 0 )
    (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v136,
      4 * v138);
  v136 = nullptr;
  v138 = 0x80000000;
  v134 = 0;
  if ( v135 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v133,
      4 * v135);
  v133 = 0;
  v135 = 0x80000000;
LABEL_102:
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v161,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v159 = 0;
  if ( v160 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v158,
      8 * v160);
  v158 = 0;
  v160 = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v156,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v154 = 0;
  if ( v155 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v153,
      8 * v155);
  v153 = 0;
  v155 = 0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v142);
LABEL_26:
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v151,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v149 = nullptr;
  if ( v150 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v148,
      8 * v150);
  v148 = 0;
  v150 = 0x80000000;
  hkMapBase_unsigned_long_long_unsig_cbedf5::clearAndDeallocate(
    (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v146,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_long_unsig_cbedf5::Destroy();
  v144 = 0;
  if ( v145 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v143,
      8 * v145);
  v143 = 0;
  v145 = 0x80000000;
  hkMapBase_unsigned_long_long_unsig_cbedf5::clearAndDeallocate(
    (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v131,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_long_unsig_cbedf5::Destroy();
  return v91;
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::applyPatchesDebug  (binary VA: 0x18b9ab0)
// Original: hkVersionPatchManager::applyPatchesDebug
// ----------------------------------------------------------------------------
hkVersionPatchManager::Self * hkVersionPatchManager::applyPatchesDebug(hkVersionPatchManager::Self *self, hkDataWorld::Self *a2, int *a3)
{
  sub_18B6880(self, a3, (uint32_t *)a2 + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::addPatch  (binary VA: 0x18b9ae0)
// Original: hkVersionPatchManager::addPatch
// ----------------------------------------------------------------------------
int hkVersionPatchManager::addPatch(uint32_t *a1, uint32_t *a2)
{
  int result;
  int v3;
  int v4;

  result = isValidPatch(a2);
  if ( result != 0 )
  {
    v3 = a1[4];
    if ( v3 == (a1[5] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 3), 4, v4);
      v3 = a1[4];
    }
    *(uint32_t *)(a1[3] + 4 * v3) = (uint32_t)(uintptr_t)(a2);
    ++a1[4];
    return hkMapBase_unsigned_long_long_unsig_cbedf5::clear((hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)(a1 + 6));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVersionPatchManager::applyPatches  (binary VA: 0x18b9bc0)
// Original: hkVersionPatchManager::applyPatches
// ----------------------------------------------------------------------------
hkVersionPatchManager::Self * hkVersionPatchManager::applyPatches(hkVersionPatchManager::Self *self, hkDataWorld::Self *a2, hkVersionPatchManager::ClassWrapper::Self *a3, uint32_t *a4)
{
  uint32_t *v4;
  hkDataWorld::Self *v5;
  hkDataWorld::Self *v6;
  pthread_mutex_t *v7;
  int v8;
  uint32_t *v9;
  volatile int32_t *v10;
  int v11;
  int32_t v12; // kr00_4
  int32_t v13;
  int32_t v14; // ett
  hkDataWorld::Self *v16;
  int *v17;
  hkDataWorld::Self *v18;
  int *v19;
  uint32_t *v20;
  uint32_t *v21;
  hkVersionPatchManager::Self *v22;
  uint32_t v23[2];
  int v24;
  int v25;
  int v26;
  int v27;
  hkVersionPatchManager::Self **v28;

  v4 = v23;
  v28 = &self;
  v22 = self;
  v5 = a2;
  v18 = a2;
  v19 = (int *)a3;
  v20 = a4;
  hkDefaultClassWrapper::Construct((hkDefaultClassWrapper::Self *)v23, nullptr);
  v25 = 0;
  v26 = 0;
  v27 = 0x80000000;
  if ( v20 != nullptr )
    v4 = v20;
  v6 = v5;
  v21 = v4;
  v7 = (pthread_mutex_t *)((char *)v5 + 36);
  v8 = *((uint32_t *)v6 + 10);
  if ( v8 != 0 )
  {
    while ( pthread_mutex_trylock(v7) != 0 )
    {
      if ( --v8 == 0 )
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    if ( pthread_mutex_lock(v7) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  v17 = v19;
  v16 = v18;
  hkVersionPatchManager::preparePatches(v22);
  if ( *(uint32_t *)v22 == 0 )
    sub_18B6880(v22, v19, &v25);
  if ( pthread_mutex_unlock(v7) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave", &v25);
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  v26 = 0;
  if ( v27 >= 0 )
    (*(void (**)(uint32_t *, int, int, uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v25,
      4 * v27,
      v21,
      &v25);
  v9 = (uint32_t *)v24;
  v25 = 0;
  v27 = 0x80000000;
  v23[0] = ((uint32_t)(uintptr_t)&off_20A7E88);
  if ( v24 != 0 && *(uint16_t *)(v24 + 6) != 0 )
  {
    v10 = (volatile int32_t *)(v24 + 4);
    do
    {
      v12 = v9[1];
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
      v13 = v11 | (uint16_t)(v12 - 1);
      v14 = v12;
    }
    while ( v14 != __sync_val_compare_and_swap(v10, v14, v13) );
    if ( (uint16_t)v13 == 0 )
      G4_VCALL<void>(v9, 16, v16, v17);
  }
  return v22;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeDeprecated::isLoadable  (binary VA: 0x18bac30)
// Original: hkSerializeDeprecated::isLoadable
// ----------------------------------------------------------------------------
int hkSerializeDeprecated::isLoadable()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeDeprecated::isEnabled  (binary VA: 0x18bac40)
// Original: hkSerializeDeprecated::isEnabled
// ----------------------------------------------------------------------------
int hkSerializeDeprecated::isEnabled()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeDeprecated::Destroy  (binary VA: 0x18bac50)
// Original: hkSerializeDeprecated::~hkSerializeDeprecated
// ----------------------------------------------------------------------------
void hkSerializeDeprecated::Destroy(hkSerializeDeprecated::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkSerializeDeprecated::saveXmlPackfile  (binary VA: 0x18bac70)
// Original: hkSerializeDeprecated::saveXmlPackfile
// ----------------------------------------------------------------------------
uint32_t * hkSerializeDeprecated::saveXmlPackfile(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, uint32_t *a8)
{
  if ( a8 != nullptr && *a8 == 0 )
  {
    *a8 = 7;
    hkStringPtr::opAssign(
      (hkStringPtr::Self *)(a8 + 1),
      (hkString::Self *)"XML packfile support is not linked. Perhaps you have HK_EXCLUDE_FEATURE_SerializeDeprecatedPre700 in h"
                  "kProductFeatures");
  }
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeDeprecated::loadOldPackfile  (binary VA: 0x18bad80)
// Original: hkSerializeDeprecated::loadOldPackfile
// ----------------------------------------------------------------------------
int hkSerializeDeprecated::loadOldPackfile(int a1, int a2, int a3, uint32_t *a4)
{
  if ( a4 != nullptr && *a4 == 0 )
  {
    *a4 = 7;
    hkStringPtr::opAssign(
      (hkStringPtr::Self *)(a4 + 1),
      (hkString::Self *)"Packfile versioning support is not linked. Versioning packfiles at runtime was deprecated in Havok-7.0"
                  ".0.\n"
                  "To do so requires linking some deprecated code from Source/Common/Compat/Deprecated\n"
                  "If you are using hkProductFeatures.cxx, ensure you do not define HK_EXCLUDE_FEATURE_SerializeDeprecate"
                  "dPre700.\n"
                  "Note that by default this pulls in a lot of code and data (mainly previous versions of hkClasses).\n"
                  "Some extra effort is required to strip the unused code and data but it will still cost several hundred"
                  " Kb.\n"
                  "Alternatively, you can use Tools/PackfileConvert/AsseetCc2 to convert your packfiles the the latest ve"
                  "rsion before loading.\n");
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeDeprecated::loadOldPackfileOnHeap  (binary VA: 0x18badd0)
// Original: hkSerializeDeprecated::loadOldPackfileOnHeap
// ----------------------------------------------------------------------------
int hkSerializeDeprecated::loadOldPackfileOnHeap(int a1, int a2, int a3, uint32_t *a4)
{
  if ( a4 != nullptr && *a4 == 0 )
  {
    *a4 = 7;
    hkStringPtr::opAssign(
      (hkStringPtr::Self *)(a4 + 1),
      (hkString::Self *)"Packfile versioning support is not linked. Versioning packfiles at runtime was deprecated in Havok-7.0"
                  ".0.\n"
                  "To do so requires linking some deprecated code from Source/Common/Compat/Deprecated\n"
                  "If you are using hkProductFeatures.cxx, ensure you do not define HK_EXCLUDE_FEATURE_SerializeDeprecate"
                  "dPre700.\n"
                  "Note that by default this pulls in a lot of code and data (mainly previous versions of hkClasses).\n"
                  "Some extra effort is required to strip the unused code and data but it will still cost several hundred"
                  " Kb.\n"
                  "Alternatively, you can use Tools/PackfileConvert/AsseetCc2 to convert your packfiles the the latest ve"
                  "rsion before loading.\n");
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkSerializeDeprecated::Destroy_ea18bae20  (binary VA: 0x18bae20)
// Original: hkSerializeDeprecated::~hkSerializeDeprecated
// ----------------------------------------------------------------------------
void hkSerializeDeprecated::Destroy_ea18bae20(hkSerializeDeprecated::Self *self)
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
// Function: hkSerializeDeprecated::readXmlPackfileHeader  (binary VA: 0x18baed0)
// Original: hkSerializeDeprecated::readXmlPackfileHeader
// ----------------------------------------------------------------------------
uint32_t * hkSerializeDeprecated::readXmlPackfileHeader(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  uint32_t *v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15[4];
  typedef hkXmlParser::Node::Self *_g4_t_v16[12];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);

  v16[8] = (hkXmlParser::Node::Self *)&a1;
  v5 = a1;
  v13 = a5;
  if ( a5 != nullptr )
  {
    hkXmlParser::Construct((hkXmlParser::Self *)v16);
    *(uint32_t *)v15 = 0;
    hkXmlParser::nextNode((hkXmlParser::Self *)&v14, v16, (hkStreamReader::Self *)v15);
    if ( v14 == 0 )
    {
      v6 = *(uint32_t *)v15;
      if ( *(uint32_t *)(*(uint32_t *)v15 + 8) == 1 && (*(uint32_t *)(*(uint32_t *)v15 + 12) & 0xFFFFFFFE) != 0 )
      {
        if ( hkString::strCmp((hkString::Self *)(*(uint32_t *)(*(uint32_t *)v15 + 12) & 0xFFFFFFFE), "hkpackfile") == 0
          && *v13 == 0 )
        {
          *v13 = 7;
          hkStringPtr::opAssign(
            (hkStringPtr::Self *)(v13 + 1),
            (hkString::Self *)"Packfile versioning support is not linked. Versioning packfiles at runtime was deprecated in Hav"
                        "ok-7.0.0.\n"
                        "To do so requires linking some deprecated code from Source/Common/Compat/Deprecated\n"
                        "If you are using hkProductFeatures.cxx, ensure you do not define HK_EXCLUDE_FEATURE_SerializeDep"
                        "recatedPre700.\n"
                        "Note that by default this pulls in a lot of code and data (mainly previous versions of hkClasses"
                        ").\n"
                        "Some extra effort is required to strip the unused code and data but it will still cost several h"
                        "undred Kb.\n"
                        "Alternatively, you can use Tools/PackfileConvert/AsseetCc2 to convert your packfiles the the lat"
                        "est version before loading.\n");
        }
        v6 = *(uint32_t *)v15;
      }
      if ( *(uint16_t *)(v6 + 6) != 0 )
      {
        v12 = v5;
        do
        {
          v8 = *(uint32_t *)(v6 + 4);
          HIWORD(v7) = HIWORD(v8);
          LOWORD(v7) = 0;
          v9 = v7 | (uint16_t)(v8 - 1);
          v10 = v8;
        }
        while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
        v5 = v12;
        if ( (uint16_t)v9 == 0 )
          G4_VCALL<void>(v6, 16);
      }
    }
    hkXmlParser::Destroy((hkXmlParser::Self *)v16);
  }
  *v5 = 1;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkParserBuffer::Destroy  (binary VA: 0x18bb010)
// Original: hkParserBuffer::~hkParserBuffer
// ----------------------------------------------------------------------------
void hkParserBuffer::Destroy(hkParserBuffer::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;

  v1 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7F48);
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
  v6 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      v6 & 0x3FFFFFFF);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkParserBuffer::Destroy_ea18bb0c0  (binary VA: 0x18bb0c0)
// Original: hkParserBuffer::~hkParserBuffer
// ----------------------------------------------------------------------------
void hkParserBuffer::Destroy_ea18bb0c0(hkParserBuffer::Self *self)
{
  int v1;
  int v2;

  hkParserBuffer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkParserBuffer::Construct  (binary VA: 0x18bb120)
// Original: hkParserBuffer::hkParserBuffer
// ----------------------------------------------------------------------------
void hkParserBuffer::Construct(hkParserBuffer::Self *self, hkStreamReader::Self *a2)
{
  int v2;
  int32_t v3; // kr00_4
  int v4;
  uint8_t v5[28];

  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7F48);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(a2);
  if ( *((uint16_t *)a2 + 3) == 0 )
    goto LABEL_5;
  do
  {
    v3 = *((uint32_t *)a2 + 1);
    HIWORD(v2) = HIWORD(v3);
    LOWORD(v2) = 0;
  }
  while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v3, v2 | (uint16_t)(v3 + 1)) );
  if ( (*((uint32_t *)self + 7) & 0x3FFFFFFF) == 0 )
LABEL_5:
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v5,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)self + 5,
      1,
      1);
  **((uint8_t **)self + 5) = 0;
  v4 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 4) = v4;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkParserBuffer::read  (binary VA: 0x18bb210)
// Original: hkParserBuffer::read
// ----------------------------------------------------------------------------
int hkParserBuffer::read(hkParserBuffer::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v15)) > _g4_s4 ? (20u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v16)) > _g4_s5 ? (24u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  if ( a2 <= 255 )
  {
    v2 = 257;
    a2 = 256;
  }
  else
  {
    v2 = a2 + 1;
  }
  v3 = *((uint32_t *)self + 6);
  v14 = *((uint32_t *)self + 5);
  v4 = *((uint32_t *)self + 7) & 0x3FFFFFFF;
  v5 = v2 + v3;
  if ( v2 + v3 <= v4 )
  {
    v7 = *((uint32_t *)self + 5);
  }
  else
  {
    v6 = 2 * v4;
    v13 = v2;
    if ( v5 >= v6 )
      v6 = v2 + v3;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v16,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)self + 5,
      v6,
      1);
    v5 = v13 + *((uint32_t *)self + 6);
    v7 = *((uint32_t *)self + 5);
  }
  *((uint32_t *)self + 6) = v5;
  result = (*(int (**)(uint32_t, int, int, int, int, uint32_t, int, uint32_t, uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 8) + 24))(
             *((uint32_t *)self + 8),
             v3 + v7,
             a2,
             v11,
             v12,
             *((uint32_t *)self + 8),
             v14,
             v16[0],
             v16[1],
             v16[2],
             v16[3]);
  v9 = v3 + result;
  *(uint8_t *)(*((uint32_t *)self + 5) + v9) = 0;
  *((uint32_t *)self + 6) = v9;
  v10 = *((uint32_t *)self + 5);
  if ( v15 != v10 )
    *((uint32_t *)self + 4) += v10 - v15;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkParserBuffer::lexemeCommit  (binary VA: 0x18bb300)
// Original: hkParserBuffer::lexemeCommit
// ----------------------------------------------------------------------------
uint8_t * hkParserBuffer::lexemeCommit(hkParserBuffer::Self *self)
{
  int v1;
  uint8_t *result;
  uint8_t *v3;

  v1 = *((uint32_t *)self + 5);
  result = (uint8_t *)(v1 + *((uint32_t *)self + 3));
  v3 = *((uint8_t **)self + 4);
  if ( result < v3 )
  {
    do
    {
      while ( *result != 13 && *result != 10 )
      {
        if ( ++result == v3 )
          goto LABEL_7;
      }
      ++result;
      ++*((uint32_t *)self + 9);
      *((uint32_t *)self + 10) = 0;
    }
    while ( result != v3 );
  }
LABEL_7:
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&v3[-v1]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkParserBuffer::bufferCommit  (binary VA: 0x18bb350)
// Original: hkParserBuffer::bufferCommit
// ----------------------------------------------------------------------------
int hkParserBuffer::bufferCommit(hkParserBuffer::Self *self)
{
  int result;
  int v2;
  int v3;

  result = *((uint32_t *)self + 3);
  *((uint32_t *)self + 2) = result;
  if ( result > 1024 )
  {
    hkString::memMove(
      *((hkString::Self **)self + 5),
      (void *)(*((uint32_t *)self + 5) + result),
      *((uint32_t *)self + 6) - result);
    v2 = *((uint32_t *)self + 5);
    v3 = *((uint32_t *)self + 6) - *((uint32_t *)self + 2);
    *((uint32_t *)self + 6) = v3;
    *(uint8_t *)(v2 + v3) = 0;
    result = *((uint32_t *)self + 2);
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 4) -= result;
    *((uint32_t *)self + 3) -= result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkParserBuffer::setLexemePosition  (binary VA: 0x18bb3c0)
// Original: hkParserBuffer::setLexemePosition
// ----------------------------------------------------------------------------
int hkParserBuffer::setLexemePosition(hkParserBuffer::Self *self, int a2)
{
  int result;

  result = *((uint32_t *)self + 5) + a2 + *((uint32_t *)self + 3);
  *((uint32_t *)self + 4) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkParserBuffer::match  (binary VA: 0x18bb3e0)
// Original: hkParserBuffer::match
// ----------------------------------------------------------------------------
hkParserBuffer::Self * hkParserBuffer::match(hkParserBuffer::Self *self, hkParserBuffer::Self *a2, char *a3, int a4)
{
  hkString::Self *v4;
  int v5;
  bool v6;

  v4 = *((hkString::Self **)a2 + 4);
  v5 = *((uint32_t *)a2 + 6) + *((uint32_t *)a2 + 5) - (uint32_t)(uintptr_t)(v4);
  if ( a4 <= v5 )
    goto LABEL_2;
  hkParserBuffer::read(a2, a4 - v5);
  if ( a4 <= *((uint32_t *)a2 + 6) + *((uint32_t *)a2 + 5) - *((uint32_t *)a2 + 4) )
  {
    v4 = *((hkString::Self **)a2 + 4);
LABEL_2:
    v6 = hkString::strNcmp(v4, a3, a4) == 0;
    *(uint8_t *)self = v6;
    return self;
  }
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkParserBuffer::match  (binary VA: 0x18bb470)
// Original: hkParserBuffer::match
// ----------------------------------------------------------------------------
hkParserBuffer::Self * hkParserBuffer::match(hkParserBuffer::Self *self, char *a2, hkString::Self *a3)
{
  size_t v3;

  v3 = hkString::strLen(a3);
  hkParserBuffer::match(self, (hkParserBuffer::Self *)a2, (char *)a3, v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkParserBuffer::matchAndConsume  (binary VA: 0x18bb4c0)
// Original: hkParserBuffer::matchAndConsume
// ----------------------------------------------------------------------------
hkParserBuffer::Self * hkParserBuffer::matchAndConsume(hkParserBuffer::Self *self, char *a2, hkString::Self *a3)
{
  int v3;
  typedef signed int _g4_t_v5;
  typedef uint8_t _g4_t_v6[25];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (7u + sizeof(_g4_t_v6)) > _g4_s1 ? (7u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 7u);

  v5 = hkString::strLen(a3);
  hkParserBuffer::match((hkParserBuffer::Self *)v6, (hkParserBuffer::Self *)a2, (char *)a3, v5);
  if ( v6[0] != 0 )
  {
    v3 = *((uint32_t *)a2 + 4);
    if ( v5 <= *((uint32_t *)a2 + 6) + *((uint32_t *)a2 + 5) - v3 )
      *((uint32_t *)a2 + 4) = v3 + v5;
    *(uint8_t *)self = 1;
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkObjectWriter::Destroy  (binary VA: 0x18bb550)
// Original: hkObjectWriter::~hkObjectWriter
// ----------------------------------------------------------------------------
void hkObjectWriter::Destroy(hkObjectWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkPlatformObjectWriter::writeRaw  (binary VA: 0x18bb570)
// Original: hkPlatformObjectWriter::writeRaw
// ----------------------------------------------------------------------------
hkPlatformObjectWriter::Self * hkPlatformObjectWriter::writeRaw(hkPlatformObjectWriter::Self *self, hkStreamWriter::Self *a2, const void *a3, int a4, int a5)
{
  *(uint32_t *)self = G4_VCALL<int>(a3, 24, a4, a5) != a5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkPlatformObjectWriter::Cache::Destroy  (binary VA: 0x18bb5b0)
// Original: hkPlatformObjectWriter::Cache::~Cache
// ----------------------------------------------------------------------------
void hkPlatformObjectWriter::Cache::Destroy(hkPlatformObjectWriter::Cache::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef void *_g4_t_v4;
  typedef uint8_t _g4_t_v5[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v5)) > _g4_s1 ? (36u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 36u);

  v1 = 0;
  v2 = *((uint32_t *)self + 9);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7FB0);
  if ( v2 > 0 )
  {
    do
    {
      v4 = *(void **)(*((uint32_t *)self + 8) + 4 * v1++);
      hkDeepCopier::freeDeepCopy((hkDeepCopier::Self *)v5, v4);
    }
    while ( *((uint32_t *)self + 9) > v1 );
  }
  v3 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v3);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkPlatformObjectWriter::Cache::Self *)((char *)self + 20),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkPlatformObjectWriter::Cache::Self *)((char *)self + 8),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkObjectWriter::Destroy_ea18bb6a0  (binary VA: 0x18bb6a0)
// Original: hkObjectWriter::~hkObjectWriter
// ----------------------------------------------------------------------------
void hkObjectWriter::Destroy_ea18bb6a0(hkObjectWriter::Self *self)
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
// Function: hkPlatformObjectWriter::Cache::Destroy_ea18bb700  (binary VA: 0x18bb700)
// Original: hkPlatformObjectWriter::Cache::~Cache
// ----------------------------------------------------------------------------
void hkPlatformObjectWriter::Cache::Destroy_ea18bb700(hkPlatformObjectWriter::Cache::Self *self)
{
  int v1;
  int v2;

  hkPlatformObjectWriter::Cache::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkPlatformObjectWriter::Destroy  (binary VA: 0x18bb760)
// Original: hkPlatformObjectWriter::~hkPlatformObjectWriter
// ----------------------------------------------------------------------------
void hkPlatformObjectWriter::Destroy(hkPlatformObjectWriter::Self *self)
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

  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7FE8);
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
  v6 = *((uint32_t *)self + 3);
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
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkPlatformObjectWriter::Destroy_ea18bb810  (binary VA: 0x18bb810)
// Original: hkPlatformObjectWriter::~hkPlatformObjectWriter
// ----------------------------------------------------------------------------
void hkPlatformObjectWriter::Destroy_ea18bb810(hkPlatformObjectWriter::Self *self)
{
  int v1;
  int v2;

  hkPlatformObjectWriter::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}



// ============================================================================
// Address:   0x18bb870 (size: 97 bytes)
// Symbol:    _ZN22hkPlatformObjectWriter5CacheC2Ev
// Demangled: hkPlatformObjectWriter::Cache::Cache(void)
// ============================================================================
// Alternative name is '_ZN22hkPlatformObjectWriter5CacheC1Ev'
hkPlatformObjectWriter::Cache::Self *hkPlatformObjectWriter::Cache::Construct(hkPlatformObjectWriter::Cache::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7FB0);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = -1;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = -1;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  return self;
}
// ----------------------------------------------------------------------------
// Function: hkPlatformObjectWriter::Cache::get  (binary VA: 0x18bb8e0)
// Original: hkPlatformObjectWriter::Cache::get
// ----------------------------------------------------------------------------
unsigned int hkPlatformObjectWriter::Cache::get(hkPlatformObjectWriter::Cache::Self *self, const hkClass::Self *a2, const hkStructureLayout::Self *a3)
{
  hkPlatformObjectWriter::Cache::Self *v3;
  const hkClass::Self *v4;
  unsigned int v5;
  int v6;
  typedef uint8_t *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v10)) > _g4_s2 ? (4u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v11)) > _g4_s3 ? (4u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v12)) > _g4_s4 ? (8u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v13)) > _g4_s5 ? (12u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v13[6] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v4 = a2;
  v8 = (uint8_t *)a3;
  v9 = (char *)self + 8;
  hkMapBase_unsigned_long_unsigned_l_393416::get(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v12,
    (hkPlatformObjectWriter::Cache::Self *)((char *)self + 8),
    (unsigned int *)a2,
    v13);
  if ( v12 == 0 )
    return v13[0];
  v5 = (unsigned int)(uintptr_t)(hkDeepCopier::deepCopy(v4, &hkClassClass, v9));
  v6 = *((uint32_t *)v3 + 9);
  if ( v6 == (*((uint32_t *)v3 + 10) & 0x3FFFFFFF) )
  {
    v11 = v5;
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkPlatformObjectWriter::Cache::Self *)((char *)v3 + 32),
      4,
      0);
    v6 = *((uint32_t *)v3 + 9);
    v5 = v11;
  }
  v10 = v5;
  *(uint32_t *)(*((uint32_t *)v3 + 8) + 4 * v6) = v5;
  ++*((uint32_t *)v3 + 9);
  hkStructureLayout::computeMemberOffsetsInplace(v8, v5, (hkPlatformObjectWriter::Cache::Self *)((char *)v3 + 20), 1);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkPlatformObjectWriter::getLayout  (binary VA: 0x18bb9f0)
// Original: hkPlatformObjectWriter::getLayout
// ----------------------------------------------------------------------------
int hkPlatformObjectWriter::getLayout(hkPlatformObjectWriter::Self *self)
{
  return *((uint32_t *)self + 2) + 12;
}



// ============================================================================
// Address:   0x18bba00 (size: 331 bytes)
// Symbol:    _ZN22hkPlatformObjectWriterC1ERK17hkStructureLayoutPNS_5CacheE7hkFlagsIN14hkObjectCopier20ObjectCopierFlagBitsEjE
// Demangled: hkPlatformObjectWriter::hkPlatformObjectWriter(hkStructureLayout const&,hkPlatformObjectWriter::Cache *,hkFlags<hkObjectCopier::ObjectCopierFlagBits,unsigned int>)
// ============================================================================
// Alternative name is '_ZN22hkPlatformObjectWriterC2ERK17hkStructureLayoutPNS_5CacheE7hkFlagsIN14hkObjectCopier20ObjectCopierFlagBitsEjE'
hkPlatformObjectWriter::Cache::Self *hkPlatformObjectWriter::Construct(
        hkPlatformObjectWriter::Self *a1,
        int a2,
        int a3,
        int a4)
{
  int address;
  struct hkPlatformObjectWriter::Cache::Self *result;
  int v6;
  int32_t v7; // kr00_4
  hkPlatformObjectWriter::Cache::Self *v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A7FE8);
  *((uint32_t *)a1 + 1) = -65535;
  hkStructureLayout::Construct(v10, &hkStructureLayout::HostLayoutRules);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v9 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         24);
  hkObjectCopier::Construct(v9, v10, a2, a4);
  *((uint32_t *)a1 + 2) = v9;
  result = (struct hkPlatformObjectWriter::Cache::Self *)hkPlatformObjectWriter::getLayout(a1);
  if ( *(uint8_t *)result == (uint8_t)hkStructureLayout::HostLayoutRules
    && *((uint8_t *)result + 1) == BYTE1(hkStructureLayout::HostLayoutRules)
    && *((uint8_t *)result + 2) == BYTE2(hkStructureLayout::HostLayoutRules)
    && *((uint8_t *)result + 3) == HIBYTE(hkStructureLayout::HostLayoutRules) )
  {
    *((uint32_t *)a1 + 3) = 0;
  }
  else if ( a3 != 0 )
  {
    if ( *(uint16_t *)(a3 + 6) != 0 )
    {
      do
      {
        v7 = *(uint32_t *)(a3 + 4);
        HIWORD(v6) = HIWORD(v7);
        LOWORD(v6) = 0;
      }
      while ( v7 != __sync_val_compare_and_swap(
                      (volatile int32_t *)(a3 + 4),
                      v7,
                      v6 | (uint16_t)(v7 + 1)) );
    }
    *((uint32_t *)a1 + 3) = a3;
    return (struct hkPlatformObjectWriter::Cache::Self *)a3;
  }
  else
  {
    v8 = (hkPlatformObjectWriter::Cache::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                            *(uint32_t *)(*(uint32_t *)address + 44),
                                            44);
    result = hkPlatformObjectWriter::Cache::Construct(v8);
    *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(v8);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkPlatformObjectWriter::writeObject  (binary VA: 0x18bbb50)
// Original: hkPlatformObjectWriter::writeObject
// ----------------------------------------------------------------------------
hkPlatformObjectWriter::Self * hkPlatformObjectWriter::writeObject(hkPlatformObjectWriter::Self *self, hkPlatformObjectWriter::Cache::Self **a2, uint8_t *a3, const hkClass::Self *a4, hkRelocationInfo::Self *a5, int a6)
{
  hkClass::Self *v6;
  const hkStructureLayout::Self *Layout;
  hkString::Self *Name;
  const hkStructureLayout::Self *v9;
  const hkStructureLayout::Self *v10;
  hkPlatformObjectWriter::Cache::Self *v11;
  int v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef hkRelocationInfo::Self *_g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef uint32_t _g4_t_v19[4];
  typedef uint8_t _g4_t_v20[16];
  typedef uint32_t _g4_t_v21[19];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (35u + sizeof(_g4_t_v19)) > _g4_s5 ? (35u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v20)) > _g4_s6 ? (52u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v21)) > _g4_s7 ? (68u + sizeof(_g4_t_v21)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 35u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);

  v6 = (hkClass::Self *)(a5);
  if ( a2[3] != nullptr )
  {
    Layout = (const hkStructureLayout::Self *)hkPlatformObjectWriter::getLayout((hkPlatformObjectWriter::Self *)a2);
    v6 = (hkClass::Self *)hkPlatformObjectWriter::Cache::get(a2[3], (const hkClass::Self *)(a5), Layout);
  }
  hkOffsetOnlyStreamWriter::Construct((hkOffsetOnlyStreamWriter::Self *)v20);
  if ( a2[3] != nullptr )
  {
    Name = (hkString::Self *)hkClass::getName(v6);
    if ( hkString::strCmp(Name, "hkClass") == 0 )
    {
      v9 = (const hkStructureLayout::Self *)hkPlatformObjectWriter::getLayout((hkPlatformObjectWriter::Self *)a2);
      v6 = (hkClass::Self *)hkPlatformObjectWriter::Cache::get(a2[3], (const hkClass::Self *)&hkClassClass, v9);
      v10 = (const hkStructureLayout::Self *)hkPlatformObjectWriter::getLayout((hkPlatformObjectWriter::Self *)a2);
      v18 = hkPlatformObjectWriter::Cache::get(a2[3], a4, v10);
      G4_VCALL<void>(a3, 40);
      G4_MEM_CALL((uintptr_t)(hkOffsetOnlyStreamWriter::seek), (char *)v19 + 1);
      v11 = a2[2];
      v21[0] = 0;
      v21[1] = 0;
      v21[2] = 0x80000000;
      v21[3] = 0;
      v21[4] = 0;
      v21[5] = 0x80000000;
      v21[6] = 0;
      v21[7] = 0;
      v21[8] = 0x80000000;
      v21[9] = 0;
      v21[10] = 0;
      v21[11] = 0x80000000;
      v21[12] = 0;
      v17 = (hkRelocationInfo::Self *)v21;
      (*(void (**)(char *, hkPlatformObjectWriter::Cache::Self *, unsigned int, hkRelocationInfo::Self *, uint8_t *, hkClass::Self *, uint32_t *))(*(uint32_t *)v11 + 20))(
        (char *)v19 + 1,
        v11,
        v18,
        a5,
        a3,
        v6,
        v21);
      hkRelocationInfo::Destroy((hkRelocationInfo::Self *)v21);
      a3 = v20;
    }
  }
  (*(void (**)(char *, hkPlatformObjectWriter::Cache::Self *, const hkClass::Self *, hkRelocationInfo::Self *, uint8_t *, hkClass::Self *, int, int, int, int, hkRelocationInfo::Self *, unsigned int, uint8_t *, char *))(*(uint32_t *)a2[2] + 20))(
    (char *)v19 + 1,
    a2[2],
    a4,
    a5,
    a3,
    v6,
    a6,
    v14,
    v15,
    v16,
    v17,
    v18,
    v20,
    (char *)v19 + 1);
  v12 = *(uint32_t *)a3;
  v19[0] = (uint32_t)(uintptr_t)(a3);
  (*(void (**)(uint32_t *))(v12 + 20))(v19);
  *(uint32_t *)self = LOBYTE(v19[0]) == 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkObjectResource::getName  (binary VA: 0x18bbd60)
// Original: hkObjectResource::getName
// ----------------------------------------------------------------------------
int hkObjectResource::getName()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkObjectResource::getImportsExports  (binary VA: 0x18bbd70)
// Original: hkObjectResource::getImportsExports
// ----------------------------------------------------------------------------
void hkObjectResource::getImportsExports()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkObjectResource::stealContentsPointer  (binary VA: 0x18bbd80)
// Original: hkObjectResource::stealContentsPointer
// ----------------------------------------------------------------------------
int hkObjectResource::stealContentsPointer(hkObjectResource::Self *self, const char *a2, const hkTypeInfoRegistry::Self *a3)
{
  int result;

  result = G4_VCALL<int>(self, 32, a2, a3);
  if ( result != 0 )
  {
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 3) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkObjectResource::getContentsTypeName  (binary VA: 0x18bbdc0)
// Original: hkObjectResource::getContentsTypeName
// ----------------------------------------------------------------------------
int hkObjectResource::getContentsTypeName(hkClass::Self **self)
{
  return hkClass::getName(*(self + 3));
}

// ----------------------------------------------------------------------------
// Function: hkObjectResource::getContentsPointer  (binary VA: 0x18bbdf0)
// Original: hkObjectResource::getContentsPointer
// ----------------------------------------------------------------------------
int hkObjectResource::getContentsPointer(hkObjectResource::Self *self, const char *a2)
{
  int v2;
  int Name;
  const hkClass::Self *v4;
  int result;
  typedef hkClass::Self *_g4_t_v6;
  typedef uint8_t _g4_t_v7[25];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (7u + sizeof(_g4_t_v7)) > _g4_s1 ? (7u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 7u);

  if ( a2 == nullptr )
    return *((uint32_t *)self + 2);
  v2 = *((uint32_t *)self + 4);
  Name = hkClass::getName(*((hkClass::Self **)self + 3));
  v6 = (hkClass::Self *)G4_VCALL<int>(v2, 24, Name);
  v4 = (const hkClass::Self *)G4_VCALL<int>(v2, 24, a2);
  hkClass::isSuperClass((hkClass::Self *)v7, v4, v6);
  result = 0;
  if ( v7[0] != 0 )
    return *((uint32_t *)self + 2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkObjectResource::Destroy  (binary VA: 0x18bbe80)
// Original: hkObjectResource::~hkObjectResource
// ----------------------------------------------------------------------------
void hkObjectResource::Destroy(hkClass::Self **self)
{
  int v1;
  int Name;
  int ObjectSize;
  int address;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;
  int32_t v17; // kr08_4
  int32_t v18;
  int32_t v19; // ett
  typedef void (*_g4_t_v20)(int, uint32_t, int);
  typedef uint8_t _g4_t_v21[25];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (7u + sizeof(_g4_t_v21)) > _g4_s1 ? (7u + sizeof(_g4_t_v21)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 7u);

  *self = (hkClass::Self *)((uint32_t)(uintptr_t)&off_20A8028);
  if ( *(self + 3) != nullptr )
  {
    hkClass::isSuperClass((hkClass::Self *)v21, (const hkClass::Self *)&hkReferencedObjectClass, *(self + 3));
    if ( v21[0] != 0 )
    {
      v15 = (int)(uintptr_t)(*(self + 2));
      if ( *(uint16_t *)(v15 + 6) != 0 )
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
        if ( (uint16_t)v18 == 0 )
          G4_VCALL<void>(v15, 16);
      }
    }
    else
    {
      v1 = (int)(uintptr_t)(*(self + 5));
      if ( v1 != 0 )
      {
        v20 = *(void (**)(int, uint32_t, int))(*(uint32_t *)v1 + 28);
        Name = hkClass::getName(*(self + 3));
        v20(v1, (uint32_t)(uintptr_t)(*(self + 2)), Name);
      }
      ObjectSize = hkClass::getObjectSize(*(self + 3));
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        (uint32_t)(uintptr_t)(*(self + 2)),
        ObjectSize);
    }
  }
  v5 = (int)(uintptr_t)(*(self + 5));
  if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v7 = *(uint32_t *)(v5 + 4);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      v8 = v6 | (uint16_t)(v7 - 1);
      v9 = v7;
    }
    while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
    if ( (uint16_t)v8 == 0 )
      G4_VCALL<void>(v5, 16);
  }
  v10 = (int)(uintptr_t)(*(self + 4));
  *(self + 5) = nullptr;
  if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
  {
    do
    {
      v12 = *(uint32_t *)(v10 + 4);
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
      v13 = v11 | (uint16_t)(v12 - 1);
      v14 = v12;
    }
    while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
    if ( (uint16_t)v13 == 0 )
      G4_VCALL<void>(v10, 16);
  }
  *(self + 4) = nullptr;
  *self = (hkClass::Self *)((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkObjectResource::Destroy_ea18bc030  (binary VA: 0x18bc030)
// Original: hkObjectResource::~hkObjectResource
// ----------------------------------------------------------------------------
void hkObjectResource::Destroy_ea18bc030(hkClass::Self **self)
{
  int v1;
  int v2;

  hkObjectResource::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkObjectResource::Construct  (binary VA: 0x18bc090)
// Original: hkObjectResource::hkObjectResource
// ----------------------------------------------------------------------------
int hkObjectResource::Construct(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int result;
  int v9;
  volatile int32_t *v10;
  int v11;
  int32_t v12; // kr00_4
  int v13;
  int32_t v14; // kr04_4

  v2 = a1;
  *a1 = ((uint32_t)(uintptr_t)&off_20A8028);
  a1[1] = -65535;
  v3 = a2[1];
  a1[2] = *a2;
  v4 = hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance;
  a1[3] = v3;
  v5 = G4_VCALL<int>(v4, 24);
  v6 = v5;
  if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v14 = *(uint32_t *)(v5 + 4);
      HIWORD(v13) = HIWORD(v14);
      LOWORD(v13) = 0;
    }
    while ( v14 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v5 + 4),
                     v14,
                     v13 | (uint16_t)(v14 + 1)) );
    v2 = a1;
  }
  v7 = hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance;
  v2[4] = v6;
  result = G4_VCALL<int>(v7, 20);
  v9 = result;
  if ( result != 0 && *(uint16_t *)(result + 6) != 0 )
  {
    v10 = (volatile int32_t *)(result + 4);
    do
    {
      v12 = *(uint32_t *)(v9 + 4);
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
      result = __sync_val_compare_and_swap(v10, v12, v11 | (uint16_t)(v12 + 1));
    }
    while ( v12 != result );
    v2[5] = v9;
  }
  else
  {
    v2[5] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkObjectResource::setClassNameRegistry  (binary VA: 0x18bc160)
// Original: hkObjectResource::setClassNameRegistry
// ----------------------------------------------------------------------------
int hkObjectResource::setClassNameRegistry(hkObjectResource::Self *self, const hkClassNameRegistry::Self *a2)
{
  const hkClassNameRegistry::Self *v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int result;
  int32_t v8; // ett
  int v9;
  int32_t v10; // kr04_4

  v2 = a2;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v10 = *((uint32_t *)a2 + 1);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9 | (uint16_t)(v10 + 1));
    }
    while ( v10 != result );
  }
  v3 = *((uint32_t *)self + 4);
  if ( v3 == 0 || *(uint16_t *)(v3 + 6) == 0 )
    goto LABEL_7;
  do
  {
    v5 = *(uint32_t *)(v3 + 4);
    HIWORD(v4) = HIWORD(v5);
    LOWORD(v4) = 0;
    v6 = v4 | (uint16_t)(v5 - 1);
    v8 = v5;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v6);
  }
  while ( v8 != result );
  v2 = a2;
  if ( (uint16_t)v6 == 0 )
  {
    result = G4_VCALL<int>(v3, 16);
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_7:
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkObjectResource::setTypeInfoRegistry  (binary VA: 0x18bc200)
// Original: hkObjectResource::setTypeInfoRegistry
// ----------------------------------------------------------------------------
int hkObjectResource::setTypeInfoRegistry(hkObjectResource::Self *self, const hkTypeInfoRegistry::Self *a2)
{
  const hkTypeInfoRegistry::Self *v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int result;
  int32_t v8; // ett
  int v9;
  int32_t v10; // kr04_4

  v2 = a2;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v10 = *((uint32_t *)a2 + 1);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9 | (uint16_t)(v10 + 1));
    }
    while ( v10 != result );
  }
  v3 = *((uint32_t *)self + 5);
  if ( v3 == 0 || *(uint16_t *)(v3 + 6) == 0 )
    goto LABEL_7;
  do
  {
    v5 = *(uint32_t *)(v3 + 4);
    HIWORD(v4) = HIWORD(v5);
    LOWORD(v4) = 0;
    v6 = v4 | (uint16_t)(v5 - 1);
    v8 = v5;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v6);
  }
  while ( v8 != result );
  v2 = a2;
  if ( (uint16_t)v6 == 0 )
  {
    result = G4_VCALL<int>(v3, 16);
    *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_7:
    *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectImpl::assignValueImpl  (binary VA: 0x18bc2a0)
// Original: hkDataObjectImpl::assignValueImpl
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkDataObjectImpl::assignValueImpl(int a1, int a2, hkDataObject_Value::Self *a3)
{
  hkTypeManager::Type::Self *result;
  int v4;
  uint32_t *v5;
  int v6;
  uint16_t v7;
  int v8;
  bool v9;
  int TupleSize;
  int v11;
  int v12;
  int v13;
  float v14;

  result = (hkTypeManager::Type::Self *)hkDataObject_Value::getType(a3);
  switch ( *(uint32_t *)result )
  {
    case 2:
    case 4:
      v12 = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)a3 + 52))(*(uint32_t *)a3, *((uint32_t *)a3 + 1));
      result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a1, 96, a2, v12);
      break;
    case 3:
      v14 = ((long double (*)(uint32_t, uint32_t))*(uint32_t *)(**(uint32_t **)a3 + 64))(
              *(uint32_t *)a3,
              *((uint32_t *)a3 + 1));
      result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a1, 84, a2, LODWORD(v14));
      break;
    case 5:
      v13 = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)a3 + 48))(*(uint32_t *)a3, *((uint32_t *)a3 + 1));
      result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a1, 80, a2, v13);
      break;
    case 6:
    case 7:
      v4 = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)a3 + 56))(*(uint32_t *)a3, *((uint32_t *)a3 + 1));
      v5 = (uint32_t *)v4;
      if ( v4 != 0 )
      {
        v6 = *(uint32_t *)(v4 + 4);
        LOWORD(v6) = 0;
        v7 = *(uint32_t *)(v4 + 4) + 1;
        ++v5[2];
        v5[1] = v6 | v7;
        G4_VCALL<void>(a1, 72, a2, v5);
        v8 = v5[1];
        LOWORD(v8) = 0;
        result = (hkTypeManager::Type::Self *)(v8 | (uint16_t)(v5[1] - 1));
        v9 = v5[2]-- == 1;
        v5[1] = (uint32_t)(uintptr_t)(result);
        if ( v9 )
          result = (hkTypeManager::Type::Self *)G4_VCALL<int>(v5, 4);
      }
      else
      {
        result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a1, 72, a2, 0);
      }
      break;
    case 9:
      if ( **((uint32_t **)result + 1) == 3 )
      {
        TupleSize = hkTypeManager::Type::getTupleSize(result);
        v11 = (*(int (**)(uint32_t, uint32_t, int))(**(uint32_t **)a3 + 60))(
                *(uint32_t *)a3,
                *((uint32_t *)a3 + 1),
                TupleSize);
        result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a1, 92, a2, v11, TupleSize);
      }
      break;
    default:
      return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataArrayImpl::set  (binary VA: 0x18bc460)
// Original: hkDataArrayImpl::set
// ----------------------------------------------------------------------------
int * hkDataArrayImpl::set(hkDataArrayImpl::Self *self, int a2, const hkDataObject_Value::Self *a3)
{
  int v3;
  hkTypeManager::Type::Self *v4;
  uint32_t *v5;
  int (*v6)(hkDataArrayImpl::Self *, int, uint32_t *);
  int v7;
  int16_t v8;
  int v9;
  int *result;
  bool v11;
  int v12; // kr00_4
  int TupleSize;
  int v14;
  int (*v15)(hkDataArrayImpl::Self *, int, int);
  int v16;
  int (*v17)(hkDataArrayImpl::Self *, int, uint32_t, uint32_t);
  int (*v18)(hkDataArrayImpl::Self *, int, uint32_t *);
  int (*v19)(hkDataArrayImpl::Self *, int, int);
  float v20;
  int (*v21)(hkDataArrayImpl::Self *, int, uint32_t *);

  v3 = G4_VCALL<int>(self, 8);
  v4 = (hkTypeManager::Type::Self *)v3;
  if ( *(uint32_t *)v3 != 9 || **(uint32_t **)(v3 + 4) == 3 )
  {
    result = (int *)G4_VCALL<int>(self, 8);
    if ( (unsigned int)*result <= 9 )
    {
      v12 = *result;
      result = (int *)((char *)dword_20B9FF4 + (uint32_t)jpt_18BC530[*result]);
      switch ( v12 )
      {
        case 0:
        case 1:
          return result;
        case 2:
        case 4:
          v15 = *(int (**)(hkDataArrayImpl::Self *, int, int))(*(uint32_t *)self + 76);
          v16 = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)a3 + 52))(*(uint32_t *)a3, *((uint32_t *)a3 + 1));
          return (int *)v15(self, a2, v16);
        case 3:
          v17 = *(int (**)(hkDataArrayImpl::Self *, int, uint32_t, uint32_t))(*(uint32_t *)self + 68);
          v20 = ((long double (*)(uint32_t, uint32_t))*(uint32_t *)(**(uint32_t **)a3 + 64))(
                  *(uint32_t *)a3,
                  *((uint32_t *)a3 + 1));
          return (int *)v17(self, a2, LODWORD(v20), LODWORD(v20));
        case 5:
          v15 = *(int (**)(hkDataArrayImpl::Self *, int, int))(*(uint32_t *)self + 60);
          v16 = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)a3 + 48))(*(uint32_t *)a3, *((uint32_t *)a3 + 1));
          return (int *)v15(self, a2, v16);
        case 6:
        case 7:
          v21 = *(int (**)(hkDataArrayImpl::Self *, int, uint32_t *))(*(uint32_t *)self + 92);
          v5 = (uint32_t *)(*(int (**)(uint32_t, uint32_t))(**(uint32_t **)a3 + 56))(*(uint32_t *)a3, *((uint32_t *)a3 + 1));
          v6 = v21;
          if ( v5 == nullptr )
            return (int *)v6(self, a2, nullptr);
          goto LABEL_4;
        case 8:
          goto LABEL_3;
        case 9:
          result = *((int **)v4 + 1);
          if ( *result == 3 )
          {
            v19 = *(int (**)(hkDataArrayImpl::Self *, int, int))(*(uint32_t *)self + 52);
            TupleSize = hkTypeManager::Type::getTupleSize(v4);
            v14 = (*(int (**)(uint32_t, uint32_t, int))(**(uint32_t **)a3 + 60))(
                    *(uint32_t *)a3,
                    *((uint32_t *)a3 + 1),
                    TupleSize);
            return (int *)v19(self, a2, v14);
          }
          return result;
        default:
          abort();
      }
    }
  }
  else
  {
LABEL_3:
    v18 = *(int (**)(hkDataArrayImpl::Self *, int, uint32_t *))(*(uint32_t *)self + 100);
    v5 = (uint32_t *)(*(int (**)(uint32_t, uint32_t))(**(uint32_t **)a3 + 44))(*(uint32_t *)a3, *((uint32_t *)a3 + 1));
    v6 = v18;
    if ( v5 != nullptr )
    {
LABEL_4:
      v7 = v5[1];
      ++v5[2];
      v8 = v7;
      LOWORD(v7) = 0;
      v5[1] = v7 | (uint16_t)(v8 + 1);
      v6(self, a2, v5);
      v9 = v5[1];
      LOWORD(v9) = 0;
      result = (int *)(v9 | (uint16_t)(v5[1] - 1));
      v11 = v5[2]-- == 1;
      v5[1] = (uint32_t)(uintptr_t)(result);
      if ( v11 )
        return (int *)G4_VCALL<int>(v5, 4);
    }
    else
    {
      return (int *)v6(self, a2, nullptr);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBinaryTagfileReader::Destroy  (binary VA: 0x18bc670)
// Original: hkBinaryTagfileReader::~hkBinaryTagfileReader
// ----------------------------------------------------------------------------
void hkBinaryTagfileReader::Destroy(hkBinaryTagfileReader::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkBinaryTagfileReader::Destroy_ea18bc690  (binary VA: 0x18bc690)
// Original: hkBinaryTagfileReader::~hkBinaryTagfileReader
// ----------------------------------------------------------------------------
void hkBinaryTagfileReader::Destroy_ea18bc690(hkBinaryTagfileReader::Self *self)
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
// Function: hkBinaryTagfileReader::Construct  (binary VA: 0x18bc6f0)
// Original: hkBinaryTagfileReader::hkBinaryTagfileReader
// ----------------------------------------------------------------------------
void hkBinaryTagfileReader::Construct(hkBinaryTagfileReader::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8068);
}

// ----------------------------------------------------------------------------
// Function: hkBinaryTagfileReader::readHeader  (binary VA: 0x18c0ac0)
// Original: hkBinaryTagfileReader::readHeader
// ----------------------------------------------------------------------------
uint32_t * hkBinaryTagfileReader::readHeader(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  hkString::Self *v9;
  hkMemoryAllocator::Self *v10;
  uint16_t v12;
  uint16_t v13;
  int v14;
  int v15;
  char v16;
  int v17;
  int v18;
  char v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char v24;
  int v25;
  hkString::Self *v26;
  int v27;
  int v28;
  int v29;
  int16_t v30;
  char *v31;
  int v32;
  int address;
  uint32_t *v34;
  int v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef hkMemoryAllocator::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int16_t _g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef hkString::Self *_g4_t_v49;
  typedef uint8_t _g4_t_v50[5];
  typedef int _g4_t_v51[3];
  typedef char *_g4_t_v52;
  typedef uint8_t _g4_t_v53[16];
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t _g4_t_v66[3];
  typedef uint32_t _g4_t_v67[134];
  enum : size_t {
    _g4_s0 = 752u,
    _g4_s1 = (8u + sizeof(_g4_t_v36)) > _g4_s0 ? (8u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v37)) > _g4_s1 ? (8u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v38)) > _g4_s2 ? (8u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v39)) > _g4_s3 ? (8u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v40)) > _g4_s4 ? (8u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v41)) > _g4_s5 ? (16u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v42)) > _g4_s6 ? (16u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v43)) > _g4_s7 ? (16u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v44)) > _g4_s8 ? (16u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v45)) > _g4_s9 ? (16u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v46)) > _g4_s10 ? (20u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v47)) > _g4_s11 ? (20u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v48)) > _g4_s12 ? (28u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v49)) > _g4_s13 ? (36u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (43u + sizeof(_g4_t_v50)) > _g4_s14 ? (43u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v51)) > _g4_s15 ? (48u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v52)) > _g4_s16 ? (60u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v53)) > _g4_s17 ? (64u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v54)) > _g4_s18 ? (80u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v55)) > _g4_s19 ? (84u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v56)) > _g4_s20 ? (88u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v57)) > _g4_s21 ? (92u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v58)) > _g4_s22 ? (96u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v59)) > _g4_s23 ? (100u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v60)) > _g4_s24 ? (104u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v61)) > _g4_s25 ? (108u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v62)) > _g4_s26 ? (112u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v63)) > _g4_s27 ? (116u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v64)) > _g4_s28 ? (120u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v65)) > _g4_s29 ? (124u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v66)) > _g4_s30 ? (128u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v67)) > _g4_s31 ? (140u + sizeof(_g4_t_v67)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 43u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 96u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 100u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 104u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 108u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 112u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 116u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 120u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 124u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 128u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 140u);

  v67[130] = (uint32_t)(uintptr_t)(&a1);
  v48 = a1;
  v46 = a4;
  v52 = (char *)-1;
  hkIArchive::Construct(v53, a3, 0);
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0x80000000;
  v59 = 0;
  v60 = 0;
  v61 = 0x80000000;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0x80000000;
  v66[0] = 0;
  v66[1] = 0;
  v66[2] = -1;
  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v56, 4, v36);
  *(uint32_t *)(v56 + 4 * v57) = 0;
  v4 = v60;
  ++v57;
  if ( v60 == (v61 & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v59, 4, v37);
    v4 = v60;
  }
  *(uint32_t *)(v59 + 4 * v4) = (uint32_t)(uintptr_t)(&unk_1B15112);
  v5 = v60 + 1;
  v60 = v5;
  if ( v5 == (v61 & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v59, 4, v37);
    v5 = v60;
  }
  *(uint32_t *)(v59 + 4 * v5) = 0;
  ++v60;
  v62 = 2;
  hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, (int)(uintptr_t)(&loc_4), 1);
  v6 = v67[0];
  hkIArchive::isOk((hkIArchive::Self *)v50);
  if ( v50[0] == 0 )
    goto LABEL_6;
  hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, 4, 1);
  v41 = v67[0];
  hkIArchive::isOk((hkIArchive::Self *)v50);
  if ( v50[0] == 0 )
    goto LABEL_6;
  if ( v41 != -804128050 || v6 != -894431970 )
  {
    LOBYTE(v12) = HIBYTE(v6);
    HIBYTE(v12) = BYTE2(v6);
    if ( ((v6 << 24) | (BYTE1(v6) << 16) | v12) != 0xCAB00D1E )
      goto LABEL_6;
    LOBYTE(v13) = HIBYTE(v41);
    HIBYTE(v13) = BYTE2(v41);
    if ( ((v41 << 24) | (BYTE1(v41) << 16) | v13) != 0xD011FACE )
      goto LABEL_6;
  }
  *(uint32_t *)v46 = v6;
  *(uint32_t *)(v46 + 4) = v41;
  hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, 1, 1);
  v42 = v67[0];
  v14 = (uint8_t)(v67[0] & 0x7F) >> 1;
  if ( SLOBYTE(v67[0]) < 0 )
  {
    v15 = 6;
    do
    {
      hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, 1, 1);
      v16 = v15;
      v15 += 7;
      v14 |= (v67[0] & 0x7F) << v16;
    }
    while ( SLOBYTE(v67[0]) < 0 );
  }
  if ( (v42 & 1) != 0 )
    v14 = -v14;
  *(uint32_t *)(v46 + 8) = v14;
  hkIArchive::isOk((hkIArchive::Self *)v50);
  if ( v50[0] == 0 )
    goto LABEL_6;
  hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, 1, 1);
  v17 = (uint8_t)(v67[0] & 0x7F) >> 1;
  v43 = v67[0] & 1;
  if ( SLOBYTE(v67[0]) < 0 )
  {
    v18 = 6;
    do
    {
      hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, 1, 1);
      v19 = v18;
      v18 += 7;
      v17 |= (v67[0] & 0x7F) << v19;
    }
    while ( SLOBYTE(v67[0]) < 0 );
  }
  if ( v43 != 0 )
    v17 = -v17;
  *(uint32_t *)(v46 + 12) = v17;
  hkIArchive::isOk((hkIArchive::Self *)v50);
  if ( v50[0] == 0 )
    goto LABEL_6;
  v20 = *(uint32_t *)(v46 + 12);
  if ( v20 >= 0 )
  {
    if ( v20 <= 3 )
      goto LABEL_55;
    if ( v20 <= 5 )
    {
      v21 = v64;
      if ( v64 == (v65 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v63, 4, v38);
        v21 = v64;
      }
      *(uint32_t *)(v63 + 4 * v21) = 0;
      ++v64;
      hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, 1, 1);
      v22 = (uint8_t)(v67[0] & 0x7F) >> 1;
      v44 = v67[0] & 1;
      if ( SLOBYTE(v67[0]) < 0 )
      {
        v23 = 6;
        do
        {
          hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, 1, 1);
          v24 = v23;
          v23 += 7;
          v22 |= (v67[0] & 0x7F) << v24;
        }
        while ( SLOBYTE(v67[0]) < 0 );
      }
      v25 = -v22;
      if ( v44 == 0 )
        v25 = v22;
      if ( v25 > 0 )
      {
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v34 = hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), (hkMemoryAllocator::Self *)(v25 + 1));
        hkIArchive::readRaw((hkIArchive::Self *)v53, v34, v25);
        *((uint8_t *)v34 + v25) = 0;
        v35 = v60;
        if ( v60 == (v61 & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v59,
            4,
            v39);
          v35 = v60;
        }
        v26 = (hkString::Self *)v34;
        *(uint32_t *)(v59 + 4 * v35) = (uint32_t)(uintptr_t)(v34);
        ++v60;
      }
      else
      {
        v26 = *(hkString::Self **)(v59 - 4 * v25);
      }
      hkStringPtr::opAssign((hkStringPtr::Self *)(v46 + 16), v26);
      if ( *(uint32_t *)(v46 + 12) != 4 )
      {
        hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, 2, 1);
        *(uint16_t *)(v46 + 22) = v67[0];
        hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, 2, 1);
        *(uint16_t *)(v46 + 20) = v67[0];
        hkIArchive::isOk((hkIArchive::Self *)v50);
        if ( v50[0] != 0 )
        {
          v27 = 0;
          if ( *(uint16_t *)(v46 + 20) != 0 )
          {
            v45 = (hkMemoryAllocator::Self *)(v46 + 24);
            v28 = v46;
            while ( 1 )
            {
              hkIArchive::readArrayGeneric((hkIArchive::Self *)v53, v67, 2, 1);
              v29 = *(uint32_t *)(v28 + 28);
              v30 = v67[0];
              if ( v29 == (*(uint32_t *)(v28 + 32) & 0x3FFFFFFF) )
              {
                v47 = v67[0];
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v45, 2, v40);
                v29 = *(uint32_t *)(v28 + 28);
                v30 = v47;
              }
              *(uint16_t *)(*(uint32_t *)(v28 + 24) + 2 * v29) = v30;
              ++*(uint32_t *)(v28 + 28);
              hkIArchive::isOk((hkIArchive::Self *)v50);
              if ( v50[0] == 0 )
                goto LABEL_6;
              if ( ++v27 >= *(uint16_t *)(v28 + 20) )
                goto LABEL_55;
            }
          }
          goto LABEL_55;
        }
LABEL_6:
        *v48 = 1;
        goto LABEL_7;
      }
LABEL_55:
      *v48 = 0;
      goto LABEL_7;
    }
  }
  hkErrStream::Construct((hkErrStream::Self *)v51, (hkString::Self *)v67, 512);
  v31 = v52;
  v32 = hkOstream::opShl((int)(uintptr_t)(v51), (hkString::Self *)"Unrecognised tagfile version ");
  hkOstream::opShl(v32, v31);
  hkError::messageWarning((hkError::Self *)0x2AB6036F, (int)(uintptr_t)(v67), "Tagfile/Binary/hkBinaryTagfileReader.cpp", dword_D0);
  hkErrStream::Destroy((hkErrStream::Self *)v51);
  *v48 = 1;
LABEL_7:
  v7 = v62;
  if ( v62 < v60 )
  {
    v8 = 4 * v62;
    v9 = (hkString::Self *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    do
    {
      v49 = v9;
      ++v7;
      v10 = *(hkMemoryAllocator::Self **)(v59 + v8);
      v8 += 4;
      hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)v9 + 44), v10);
      v9 = v49;
    }
    while ( v7 < v60 );
  }
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v66,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v64 = 0;
  if ( v65 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v63,
      4 * v65);
  v63 = 0;
  v65 = 0x80000000;
  v60 = 0;
  if ( v61 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v59,
      4 * v61);
  v59 = 0;
  v61 = 0x80000000;
  v57 = 0;
  if ( v58 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v56,
      4 * v58);
  v56 = 0;
  v58 = 0x80000000;
  hkIArchive::Destroy((hkIArchive::Self *)v53);
  return v48;
}

// ----------------------------------------------------------------------------
// Function: hkBinaryTagfileReader::load  (binary VA: 0x18c1500)
// Original: hkBinaryTagfileReader::load
// ----------------------------------------------------------------------------
hkBinaryTagfileReader::Self * hkBinaryTagfileReader::load(hkBinaryTagfileReader::Self *self, hkStreamReader::Self *a2, hkDataWorld::Self *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int address;
  hkMemoryAllocator::Self *v9;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[6];
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
  typedef uint32_t _g4_t_v27[6];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v12)) > _g4_s1 ? (24u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v13)) > _g4_s2 ? (24u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v14)) > _g4_s3 ? (40u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v15)) > _g4_s4 ? (44u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v16)) > _g4_s5 ? (48u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v17)) > _g4_s6 ? (72u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v18)) > _g4_s7 ? (76u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v19)) > _g4_s8 ? (80u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v20)) > _g4_s9 ? (84u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v21)) > _g4_s10 ? (88u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v22)) > _g4_s11 ? (92u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v23)) > _g4_s12 ? (96u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v24)) > _g4_s13 ? (100u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v25)) > _g4_s14 ? (104u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v26)) > _g4_s15 ? (108u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v27)) > _g4_s16 ? (112u + sizeof(_g4_t_v27)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 100u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 104u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 112u);

  v15 = -1;
  hkIArchive::Construct(v16, a3, 0);
  v16[4] = a4;
  v16[5] = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0x80000000;
  v20 = 0;
  v21 = 0;
  v22 = 0x80000000;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0x80000000;
  v27[0] = 0;
  v27[1] = 0;
  v27[2] = -1;
  hkArrayUtil::reserveMore(
    (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
    (hkMemoryAllocator::Self *)&v17,
    (int)(uintptr_t)(&loc_4),
    v12);
  *(uint32_t *)(v17 + 4 * v18) = 0;
  v4 = v21;
  ++v18;
  if ( v21 == (v22 & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v20, 4, v13);
    v4 = v21;
  }
  *(uint32_t *)(v20 + 4 * v4) = (uint32_t)(uintptr_t)(&unk_1B15112);
  v5 = v21 + 1;
  v21 = v5;
  if ( v5 == (v22 & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v20, 4, v13);
    v5 = v21;
  }
  *(uint32_t *)(v20 + 4 * v5) = 0;
  ++v21;
  v23 = 2;
  sub_18BF760(self, (int)(uintptr_t)(&v15), v11);
  v6 = v23;
  if ( v23 < v21 )
  {
    v7 = 4 * v23;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    do
    {
      v14 = address;
      ++v6;
      v9 = *(hkMemoryAllocator::Self **)(v20 + v7);
      v7 += 4;
      hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v9);
      address = v14;
    }
    while ( v6 < v21 );
  }
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v27,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v25 = 0;
  if ( v26 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v24,
      4 * v26);
  v24 = 0;
  v26 = 0x80000000;
  v21 = 0;
  if ( v22 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v20,
      4 * v22);
  v20 = 0;
  v22 = 0x80000000;
  v18 = 0;
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v17,
      4 * v19);
  v17 = 0;
  v19 = 0x80000000;
  hkIArchive::Destroy((hkIArchive::Self *)v16);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkVersionUtil::getCurrentVersion  (binary VA: 0x18c17e0)
// Original: hkVersionUtil::getCurrentVersion
// ----------------------------------------------------------------------------
const char * hkVersionUtil::getCurrentVersion()
{
  return "hk_2014.1.0-r1";
}

// ----------------------------------------------------------------------------
// Function: hkVersionUtil::renameMember  (binary VA: 0x18c1800)
// Original: hkVersionUtil::renameMember
// ----------------------------------------------------------------------------
char * hkVersionUtil::renameMember(int a1, char *a2, int a3, char *a4)
{
  int v4;
  char *result;
  hkClassMember::Self *ClassMember;
  void *v7;
  hkString::Self *v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_SizeInBytes;
  typedef char _g4_t_v11;
  typedef uint8_t _g4_t_v12[16];
  typedef uint32_t _g4_t_v13[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_SizeInBytes)) > _g4_s1 ? (0u + sizeof(_g4_t_SizeInBytes)) : _g4_s1,
    _g4_s3 = (7u + sizeof(_g4_t_v11)) > _g4_s2 ? (7u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v12)) > _g4_s3 ? (8u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_SizeInBytes &SizeInBytes = *reinterpret_cast<_g4_t_SizeInBytes *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 7u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);

  v13[6] = (uint32_t)(uintptr_t)(&a1);
  v4 = a3;
  v9 = a4;
  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v12, a1, a2);
  hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v13, v4, v9);
  hkClassMemberAccessor::isOk((hkClassMemberAccessor::Self *)&v11);
  result = &v11;
  if ( v11 != 0 )
  {
    result = (char *)hkClassMemberAccessor::isOk((hkClassMemberAccessor::Self *)&v11);
    if ( v11 != 0 )
    {
      ClassMember = (hkClassMember::Self *)hkClassMemberAccessor::getClassMember((hkClassMemberAccessor::Self *)v13);
      SizeInBytes = hkClassMember::getSizeInBytes(ClassMember);
      v7 = (void *)hkClassMemberAccessor::asRaw((hkClassMemberAccessor::Self *)v12);
      v8 = (hkString::Self *)hkClassMemberAccessor::asRaw((hkClassMemberAccessor::Self *)v13);
      return (char *)hkString::memCpy(v8, v7, SizeInBytes);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVersionUtil::recomputeClassMemberOffsets  (binary VA: 0x18c18f0)
// Original: hkVersionUtil::recomputeClassMemberOffsets
// ----------------------------------------------------------------------------
void hkVersionUtil::recomputeClassMemberOffsets(hkVersionUtil::Self *self, hkClass::Self **a2)
{
  unsigned int v2;
  char *v3;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v6)) > _g4_s2 ? (20u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);

  hkClass::updateMetadataInplace(self, a2, (int)(uintptr_t)(v4));
  hkStructureLayout::Construct((hkStructureLayout::Self *)&v5);
  v2 = *(uint32_t *)self;
  v3 = (char *)self + 4;
  v6[0] = 0;
  v6[1] = 0;
  for ( v6[2] = -1; v2 != 0; v2 = *((uint32_t *)v3 - 1) )
  {
    v3 += 4;
    hkStructureLayout::computeMemberOffsetsInplace(
      (uint8_t *)&v5,
      v2,
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v6,
      1);
  }
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v6,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkVersionUtil::copyDefaults  (binary VA: 0x18c19a0)
// Original: hkVersionUtil::copyDefaults
// ----------------------------------------------------------------------------
void hkVersionUtil::copyDefaults(hkVersionUtil::Self *self, hkClass::Self *a2, const hkClass::Self *a3)
{
  hkClass::Self *v3;
  hkVersionUtil::Self *v4;
  size_t ObjectSize;
  const void **v6;
  typedef hkString::Self *_g4_t_v7;
  typedef hkClass::Self *_g4_t_v8;
  typedef int _g4_t_Member;
  typedef int _g4_t_v10[2];
  typedef hkMemoryAllocator::Self *_g4_t_v11[13];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v8)) > _g4_s1 ? (40u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_Member)) > _g4_s2 ? (44u + sizeof(_g4_t_Member)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v10)) > _g4_s3 ? (48u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v11)) > _g4_s4 ? (56u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_Member &Member = *reinterpret_cast<_g4_t_Member *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);

  v11[9] = (hkMemoryAllocator::Self *)&self;
  v3 = (hkClass::Self *)(a3);
  v4 = self;
  v8 = a2;
  ObjectSize = hkClass::getObjectSize(a3);
  v7 = (hkString::Self *)(v4);
  v6 = nullptr;
  hkBufferedStreamWriter::Construct((int)(uintptr_t)(v11), v7, ObjectSize, 0);
  while ( (int)(uintptr_t)(v6) < hkClass::getNumMembers(v3) )
  {
    Member = hkClass::getMember(v3, (int)(uintptr_t)(v6));
    if ( hkClass::getMemberByName(v8, *(char **)Member) == nullptr )
    {
      hkBufferedStreamWriter::seek(v10, (hkBufferedStreamWriter::Self *)v11, *(uint16_t *)(Member + 18), 0);
      hkClass::getDefault((hkClass::Self *)v10, v3, v6, (int)(uintptr_t)(v11));
    }
    v6 = (const void **)((char *)v6 + 1);
  }
  hkBufferedStreamWriter::Destroy(v11);
}

// ----------------------------------------------------------------------------
// Function: hkRelocationInfo::Destroy  (binary VA: 0x18c1a90)
// Original: hkRelocationInfo::~hkRelocationInfo
// ----------------------------------------------------------------------------
void hkRelocationInfo::Destroy(hkRelocationInfo::Self *self)
{
  hkRelocationInfo::Self *v1;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v2;
  int i;
  hkString::Self *Key;
  int address;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef bool _g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);

  v1 = self;
  v2 = *((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> **)self + 12);
  if ( v2 != nullptr )
  {
    for ( i = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator(*((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> **)self
                                                                                           + 12));
          ;
          i = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(v2, i) )
    {
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v10, (int)(uintptr_t)(v2), i);
      if ( !v10 )
        break;
      Key = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(v2, i);
      hkString::strFree(Key, (hkMemoryRouter::Self *)&hkContainerHeapAllocator::s_alloc);
    }
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::clear(v2);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy(v2);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v2,
      16);
    v1 = self;
  }
  *((uint32_t *)v1 + 10) = 0;
  v6 = *((uint32_t *)v1 + 11);
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 9),
      8 * v6);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 11) = 0x80000000;
  *((uint32_t *)self + 7) = 0;
  v7 = *((uint32_t *)self + 8);
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 6),
      8 * v7);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0x80000000;
  *((uint32_t *)self + 4) = 0;
  v8 = *((uint32_t *)self + 5);
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      16 * v8);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *((uint32_t *)self + 1) = 0;
  v9 = *((uint32_t *)self + 2);
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *(uint32_t *)self,
      8 * v9);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkRelocationInfo::applyLocalAndGlobal  (binary VA: 0x18c1c50)
// Original: hkRelocationInfo::applyLocalAndGlobal
// ----------------------------------------------------------------------------
int hkRelocationInfo::applyLocalAndGlobal(hkRelocationInfo::Self *self, char *a2)
{
  int i;
  uint32_t *v3;
  int result;
  int v5;
  int v6;
  int *v7;
  int v8;

  for ( i = 0; *((uint32_t *)self + 1) > i; *(uint32_t *)&a2[*v3] = (uint32_t)(uintptr_t)(&a2[v3[1]]) )
    v3 = (uint32_t *)(*(uint32_t *)self + 8 * i++);
  result = *((uint32_t *)self + 4);
  v5 = 0;
  if ( result > 0 )
  {
    do
    {
      v6 = v5++;
      v7 = (int *)(*((uint32_t *)self + 3) + 16 * v6);
      v8 = v7[1];
      result = *v7;
      *(uint32_t *)&a2[result] = v8;
    }
    while ( *((uint32_t *)self + 4) > v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkRelocationInfo::addImport  (binary VA: 0x18c1cb0)
// Original: hkRelocationInfo::addImport
// ----------------------------------------------------------------------------
uint32_t * hkRelocationInfo::addImport(hkRelocationInfo::Self *self, int a2, hkString::Self *a3)
{
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v3;
  int v4;
  hkString::Self *v5;
  uint32_t *result;
  int address;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_Key;
  typedef int _g4_t_v12;
  typedef hkString::Self *_g4_t_v13;
  typedef hkString::Self *_g4_t_v14;
  typedef bool _g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_Key)) > _g4_s2 ? (20u + sizeof(_g4_t_Key)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v14)) > _g4_s5 ? (20u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (27u + sizeof(_g4_t_v15)) > _g4_s6 ? (27u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_Key &Key = *reinterpret_cast<_g4_t_Key *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 27u);

  v3 = *((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> **)self + 12);
  if ( v3 == nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v8 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           16);
    *(uint32_t *)v8 = 0;
    *(uint32_t *)(v8 + 4) = 0;
    *(uint32_t *)(v8 + 8) = 0;
    v3 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v8;
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)v8);
    *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v3);
  }
  Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(v3, a3);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v15, (int)(uintptr_t)(v3), Key);
  if ( !v15 )
  {
    v13 = hkString::strDup(a3, (hkMemoryRouter::Self *)&hkContainerHeapAllocator::s_alloc);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v3, v13, 0);
    v4 = *((uint32_t *)self + 10);
    v5 = v13;
    if ( v4 != (*((uint32_t *)self + 11) & 0x3FFFFFFF) )
      goto LABEL_5;
LABEL_7:
    v14 = v5;
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkRelocationInfo::Self *)((char *)self + 36),
      8,
      v9);
    v4 = *((uint32_t *)self + 10);
    v5 = v14;
    goto LABEL_5;
  }
  v10 = Key;
  v12 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(v3, Key);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::setValue(v3, v10, 0);
  v4 = *((uint32_t *)self + 10);
  v5 = (hkString::Self *)v12;
  if ( v4 == (*((uint32_t *)self + 11) & 0x3FFFFFFF) )
    goto LABEL_7;
LABEL_5:
  result = (uint32_t *)(*((uint32_t *)self + 9) + 8 * v4);
  *result = a2;
  result[1] = (uint32_t)(uintptr_t)(v5);
  ++*((uint32_t *)self + 10);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::setContents  (binary VA: 0x18c1e20)
// Original: hkPackfileWriter::setContents
// ----------------------------------------------------------------------------
int hkPackfileWriter::setContents(hkPackfileWriter::Self *self, const void *a2, const hkClass::Self *a3, hkPackfileWriter::AddObjectListener::Self *a4)
{
  int (*v4)(hkPackfileWriter::Self *, const void *, const hkClass::Self *, int, hkPackfileWriter::AddObjectListener::Self *);
  int v5;

  v4 = *(int (**)(hkPackfileWriter::Self *, const void *, const hkClass::Self *, int, hkPackfileWriter::AddObjectListener::Self *))(*(uint32_t *)self + 20);
  v5 = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 28))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  return v4(self, a2, a3, v5, a4);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::addImport  (binary VA: 0x18c1e80)
// Original: hkPackfileWriter::addImport
// ----------------------------------------------------------------------------
int hkPackfileWriter::addImport(hkPackfileWriter::Self *self, const void *a2, const char *a3)
{
  signed int v3;

  v3 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
         (hkPackfileWriter::Self *)((char *)self + 20),
         (unsigned int)(uintptr_t)(a2),
         0xFFFFFFFF);
  if ( v3 >= 0 )
    *(uint32_t *)(*((uint32_t *)self + 2) + 24 * v3 + 16) = -2;
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    (hkPackfileWriter::Self *)((char *)self + 20),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (unsigned int)(uintptr_t)(a2),
    0xFFFFFFFE);
  return hkMapBase_unsigned_long_unsigned_l_393416::insert(
           (hkPackfileWriter::Self *)((char *)self + 32),
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           (unsigned int)(uintptr_t)(a2),
           (unsigned int)(uintptr_t)(a3));
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::addExport  (binary VA: 0x18c1f10)
// Original: hkPackfileWriter::addExport
// ----------------------------------------------------------------------------
int hkPackfileWriter::addExport(hkPackfileWriter::Self *self, const void *a2, const char *a3)
{
  return hkMapBase_unsigned_long_unsigned_l_393416::insert(
           (hkPackfileWriter::Self *)((char *)self + 44),
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           (unsigned int)(uintptr_t)(a2),
           (unsigned int)(uintptr_t)(a3));
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::Destroy  (binary VA: 0x18c1f50)
// Original: hkPackfileWriter::~hkPackfileWriter
// ----------------------------------------------------------------------------
void hkPackfileWriter::Destroy(hkPackfileWriter::Self *self)
{
  int v1;
  int v2;
  int address;
  hkMemoryAllocator::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = *((uint32_t *)self + 22);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A80A8);
  if ( v1 > 0 )
  {
    v2 = 0;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    do
    {
      v4 = *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 21) + 4 * v2++);
      hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v4);
    }
    while ( *((uint32_t *)self + 22) > v2 );
  }
  v5 = *((uint32_t *)self + 55);
  *((uint32_t *)self + 54) = 0;
  if ( v5 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 53),
      2 * (v5 & 0x3FFFFFFF));
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 55) = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkPackfileWriter::Self *)((char *)self + 180),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v6 = *((uint32_t *)self + 44);
  *((uint32_t *)self + 43) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 42),
      8 * v6);
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 44) = 0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkPackfileWriter::Self *)((char *)self + 152));
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkPackfileWriter::Self *)((char *)self + 140),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v7 = *((uint32_t *)self + 30);
  *((uint32_t *)self + 29) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 28),
      8 * v7);
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 30) = 0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkPackfileWriter::Self *)((char *)self + 96));
  v8 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 22) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 21),
      4 * v8);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkPackfileWriter::Self *)((char *)self + 72),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkPackfileWriter::Self *)((char *)self + 56));
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkPackfileWriter::Self *)((char *)self + 44),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkPackfileWriter::Self *)((char *)self + 32),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkPackfileWriter::Self *)((char *)self + 20),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v9 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      24 * v9);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::Destroy_ea18c21a0  (binary VA: 0x18c21a0)
// Original: hkPackfileWriter::~hkPackfileWriter
// ----------------------------------------------------------------------------
void hkPackfileWriter::Destroy_ea18c21a0(hkPackfileWriter::Self *self)
{
  int v1;
  int v2;

  hkPackfileWriter::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 224;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::Construct  (binary VA: 0x18c2200)
// Original: hkPackfileWriter::hkPackfileWriter
// ----------------------------------------------------------------------------
int hkPackfileWriter::Construct(uint32_t *a1, hkMemoryAllocator::Self *a2)
{
  uint32_t *v2;
  unsigned int v3;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v4;
  unsigned int v6;
  int v7;
  int i;
  typedef int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef unsigned int _g4_t_v13;
  typedef hkMemoryAllocator::Self *_g4_t_v14;
  typedef uint32_t _g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v15)) > _g4_s6 ? (28u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v15[3] = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  v14 = a2;
  *a1 = ((uint32_t)(uintptr_t)&off_20A80A8);
  v2[1] = -65535;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0x80000000;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = -1;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = -1;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = -1;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)v2 + 14);
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = -1;
  v2[21] = 0;
  v2[22] = 0;
  v2[23] = 0x80000000;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)v2 + 24);
  v2[28] = 0;
  v2[29] = 0;
  v2[30] = 0x80000000;
  v2[31] = -1;
  v2[32] = -1;
  v2[33] = 0;
  v2[34] = 0;
  v2[35] = 0;
  v2[36] = 0;
  v2[37] = -1;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)v2 + 38);
  v2[42] = 0;
  v2[43] = 0;
  v2[44] = 0x80000000;
  v2[45] = 0;
  v2[46] = 0;
  v2[47] = -1;
  v2[48] = -1;
  v2[49] = *(uint32_t *)v14;
  v2[50] = *((uint32_t *)v14 + 1);
  *((uint8_t *)v2 + 204) = *((uint8_t *)v14 + 8);
  *((uint8_t *)v2 + 205) = *((uint8_t *)v14 + 9);
  v2[52] = *((uint32_t *)v14 + 3);
  v2[53] = 0;
  v2[54] = 0;
  v2[55] = 0x80000000;
  v3 = *((uint32_t *)v14 + 5);
  v13 = *((uint32_t *)v14 + 4);
  if ( (int)v3 > 0 )
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)v15, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v2 + 53, v3, 2);
    v11 = v2[54] + v2[54] + v2[53];
    if ( (v13 >= v11 + 16 || v11 >= v13 + 16) && v3 > 0xA )
    {
      v9 = v3;
      v10 = v3 >> 3;
      v12 = 8 * (v3 >> 3);
      v6 = 0;
      v7 = 0;
      do
      {
        ++v6;
        *(__m128i *)(v11 + v7) = *(__m128i *)(v13 + v7);
        v7 += 16;
      }
      while ( v10 > v6 );
      v3 = v9;
      if ( v9 != v12 )
      {
        *(uint16_t *)(v11 + 2 * v12) = *(uint16_t *)(v13 + 2 * v12);
        if ( v9 > v12 + 1 )
        {
          *(uint16_t *)(v11 + 2 * (v12 + 1)) = *(uint16_t *)(v13 + 2 * (v12 + 1));
          if ( v9 > v12 + 2 )
          {
            *(uint16_t *)(v11 + 2 * (v12 + 2)) = *(uint16_t *)(v13 + 2 * (v12 + 2));
            if ( v9 > v12 + 3 )
            {
              *(uint16_t *)(v11 + 2 * (v12 + 3)) = *(uint16_t *)(v13 + 2 * (v12 + 3));
              if ( v9 > v12 + 4 )
              {
                *(uint16_t *)(v11 + 2 * (v12 + 4)) = *(uint16_t *)(v13 + 2 * (v12 + 4));
                if ( v9 > v12 + 5 )
                {
                  *(uint16_t *)(v11 + 2 * (v12 + 5)) = *(uint16_t *)(v13 + 2 * (v12 + 5));
                  if ( v9 > v12 + 6 )
                    *(uint16_t *)(v11 + 2 * (v12 + 6)) = *(uint16_t *)(v13 + 2 * (v12 + 6));
                }
              }
            }
          }
        }
      }
    }
    else
    {
      for ( i = 0; i != v3; ++i )
        *(uint16_t *)(v11 + 2 * i) = *(uint16_t *)(v13 + 2 * i);
    }
  }
  v2[54] = v3;
  v4 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v2 + 5);
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    v4,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (unsigned int)(uintptr_t)(&hkClassEnumClass),
    0xFFFFFFFF);
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    v4,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (unsigned int)(uintptr_t)(&hkClassMemberClass),
    0xFFFFFFFF);
  return hkMapBase_unsigned_long_unsigned_l_393416::insert(
           v4,
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           (unsigned int)(uintptr_t)(&hkClassClass),
           0xFFFFFFFF);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::sectionTagToIndex  (binary VA: 0x18c2610)
// Original: hkPackfileWriter::sectionTagToIndex
// ----------------------------------------------------------------------------
int hkPackfileWriter::sectionTagToIndex(hkPackfileWriter::Self *self, hkString::Self *a2)
{
  hkPackfileWriter::Self *v2;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v3;
  hkString::Self *v4;
  int v5;
  hkString::Self *v6;
  unsigned int v7;
  typedef int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef hkString::Self *_g4_t_v11;
  typedef hkString::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v14[6] = (int)(uintptr_t)(&self);
  v2 = self;
  v3 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkPackfileWriter::Self *)((char *)self + 96));
  v11 = a2;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::get(
    (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)&v13,
    (hkPackfileWriter::Self *)((char *)self + 96),
    a2,
    v14);
  if ( v13 == 0 )
    return v14[0];
  v4 = hkString::strDup(v11);
  v10 = *((uint32_t *)v2 + 22);
  v12 = v4;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v3, v4, v10);
  v5 = *((uint32_t *)v2 + 22);
  v6 = v12;
  v7 = v10;
  if ( v5 == (*((uint32_t *)v2 + 23) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkPackfileWriter::Self *)((char *)v2 + 84),
      4,
      v9);
    v5 = *((uint32_t *)v2 + 22);
    v7 = v10;
    v6 = v12;
  }
  *(uint32_t *)(*((uint32_t *)v2 + 21) + 4 * v5) = (uint32_t)(uintptr_t)(v6);
  ++*((uint32_t *)v2 + 22);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::addSection  (binary VA: 0x18c2700)
// Original: hkPackfileWriter::addSection
// ----------------------------------------------------------------------------
int hkPackfileWriter::addSection(hkPackfileWriter::Self *self, char *a2)
{
  return hkPackfileWriter::sectionTagToIndex(self, (hkString::Self *)a2);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::setSectionForClass  (binary VA: 0x18c2730)
// Original: hkPackfileWriter::setSectionForClass
// ----------------------------------------------------------------------------
int hkPackfileWriter::setSectionForClass(hkPackfileWriter::Self *self, const hkClass::Self *a2, char *a3)
{
  unsigned int v3;
  hkString::Self *Name;

  v3 = hkPackfileWriter::sectionTagToIndex(self, (hkString::Self *)a3);
  Name = (hkString::Self *)hkClass::getName(a2);
  return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
           (hkPackfileWriter::Self *)((char *)self + 152),
           Name,
           v3);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::setSectionForPointer  (binary VA: 0x18c2790)
// Original: hkPackfileWriter::setSectionForPointer
// ----------------------------------------------------------------------------
int hkPackfileWriter::setSectionForPointer(hkPackfileWriter::Self *self, const void *a2, char *a3)
{
  unsigned int v3;

  v3 = hkPackfileWriter::sectionTagToIndex(self, (hkString::Self *)a3);
  return hkMapBase_unsigned_long_unsigned_l_393416::insert(
           (hkPackfileWriter::Self *)((char *)self + 140),
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           (unsigned int)(uintptr_t)(a2),
           v3);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::findSectionFor  (binary VA: 0x18c27e0)
// Original: hkPackfileWriter::findSectionFor
// ----------------------------------------------------------------------------
int hkPackfileWriter::findSectionFor(hkPackfileWriter::Self *self, const void *a2, const hkClass::Self *Parent, char *a4)
{
  int result;
  hkString::Self *Name;

  result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
             (hkPackfileWriter::Self *)((char *)self + 140),
             (unsigned int)(uintptr_t)(a2),
             0xFFFFFFFF);
  if ( result == -1 )
  {
    while ( 1 )
    {
      Name = (hkString::Self *)hkClass::getName(Parent);
      result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                 (hkPackfileWriter::Self *)((char *)self + 152),
                 Name,
                 -1);
      if ( result != -1 )
        break;
      Parent = (const hkClass::Self *)hkClass::getParent(Parent);
      if ( Parent == nullptr )
        return hkPackfileWriter::sectionTagToIndex(self, (hkString::Self *)a4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::addPendingWrite  (binary VA: 0x18c2890)
// Original: hkPackfileWriter::addPendingWrite
// ----------------------------------------------------------------------------
int hkPackfileWriter::addPendingWrite(hkPackfileWriter::Self *self, const void *a2, const hkClass::Self *a3, void *a4, const hkClass::Self *a5, char *a6)
{
  int SectionFor;
  int v7;
  uint32_t *v8;
  int result;
  char *v10;
  int v11;

  SectionFor = hkPackfileWriter::findSectionFor(self, a4, a5, a6);
  v7 = *((uint32_t *)self + 3);
  if ( v7 == (*((uint32_t *)self + 4) & 0x3FFFFFFF) )
  {
    v11 = SectionFor;
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkPackfileWriter::Self *)((char *)self + 8),
      24,
      (int)(uintptr_t)(v10));
    v7 = *((uint32_t *)self + 3);
    SectionFor = v11;
  }
  v8 = (uint32_t *)(*((uint32_t *)self + 2) + 24 * v7);
  *v8 = (uint32_t)(uintptr_t)(a2);
  v8[4] = SectionFor;
  v8[1] = (uint32_t)(uintptr_t)(a3);
  v8[2] = (uint32_t)(uintptr_t)(a4);
  v8[3] = (uint32_t)(uintptr_t)(a5);
  v8[5] = -1;
  ++*((uint32_t *)self + 3);
  *((uint32_t *)self + 34) += a3 == (const hkClass::Self *)&hkClassClass;
  result = a3 != (const hkClass::Self *)&hkClassClass;
  *((uint32_t *)self + 33) += result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::getCurrentVersion  (binary VA: 0x18c2970)
// Original: hkPackfileWriter::getCurrentVersion
// ----------------------------------------------------------------------------
int hkPackfileWriter::getCurrentVersion(hkPackfileWriter::Self *self, size_t a2)
{
  return hkString::snprintf(self, a2, "%s", "hk_2014.1.0-r1");
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::notDuplicateMetaData  (binary VA: 0x18c29b0)
// Original: hkPackfileWriter::notDuplicateMetaData
// ----------------------------------------------------------------------------
int hkPackfileWriter::notDuplicateMetaData(hkPackfileWriter::Self *self, hkClass::Self *a2, const hkClass::Self *a3)
{
  hkString::Self *Name;
  unsigned int v5;
  hkClass::Self *v6;
  int Signature;
  int v8;
  int v9;
  unsigned int v10;
  hkString::Self *v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef hkString::Self *_g4_t_v14;
  typedef int _g4_t_v15[3];
  typedef uint8_t _g4_t_v16[540];
  enum : size_t {
    _g4_s0 = 656u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v16)) > _g4_s4 ? (48u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);

  Name = (hkString::Self *)hkClass::getName(a3);
  if ( hkString::strCmp(Name, "hkClass", v12) != 0 )
    return 1;
  v5 = hkClass::getName(a2);
  v6 = (hkClass::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                    (hkPackfileWriter::Self *)((char *)self + 56),
                    v5,
                    0);
  if ( v6 == nullptr )
  {
    v11 = (hkString::Self *)hkClass::getName(a2);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
      (hkPackfileWriter::Self *)((char *)self + 56),
      v11,
      (unsigned int)(uintptr_t)(a2));
    return 1;
  }
  Signature = hkClass::getSignature(a2, 0);
  if ( Signature != hkClass::getSignature(v6, 0) )
  {
    hkErrStream::Construct((hkErrStream::Self *)v15, (hkString::Self *)v16, 512);
    v14 = (hkString::Self *)hkClass::getName(a2);
    v8 = hkOstream::opShl((int)(uintptr_t)(v15), (hkString::Self *)"Conflicting metadata found for class ");
    v9 = hkOstream::opShl(v8, v14);
    hkOstream::opShl(
      v9,
      (hkString::Self *)". Perhaps you have called setContents on data which has not been updated to the current version.");
    if ( hkError::messageError((hkError::Self *)0x2518721C, (int)(uintptr_t)(v16), "Packfile/hkPackfileWriter.cpp", dword_B8, v13) != 0 )
      __builtin_debugtrap();
    hkErrStream::Destroy((hkErrStream::Self *)v15);
  }
  v10 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
          (hkPackfileWriter::Self *)((char *)self + 20),
          (unsigned int)(uintptr_t)(v6),
          0xFFFFFFFF);
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    (hkPackfileWriter::Self *)((char *)self + 20),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (unsigned int)(uintptr_t)(a2),
    v10);
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    (hkPackfileWriter::Self *)((char *)self + 72),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (unsigned int)(uintptr_t)(a2),
    (unsigned int)(uintptr_t)(v6));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::addObject  (binary VA: 0x18c2bc0)
// Original: hkPackfileWriter::addObject
// ----------------------------------------------------------------------------
void hkPackfileWriter::addObject(hkPackfileWriter::Self *self, unsigned int a2, const hkClass::Self *a3, const hkVtableClassRegistry::Self *a4, hkPackfileWriter::AddObjectListener::Self *a5, char *a6)
{
  hkPackfileWriter::Self *v6;
  const hkClass::Self *v7;
  hkClass::Self *v8;
  hkClass::Self *v9;
  hkRelocationInfo::Self *v10;
  int v11;
  int i;
  int v13;
  int v14;
  uint32_t *v15;
  unsigned int v16;
  uint32_t *v17;
  void *v18;
  const hkClass::Self *v19;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v20;
  int Key;
  unsigned int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  hkRelocationInfo::Self **v29;
  unsigned int v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef const hkClass::Self *_g4_t_v37;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v38;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v39;
  typedef char _g4_t_v40;
  typedef void *_g4_t_v41;
  typedef void *_g4_t_v42;
  typedef void *_g4_t_v43;
  typedef char *_g4_t_v44;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v45;
  typedef hkString::Self *_g4_t_v46;
  typedef hkString::Self *_g4_t_Name;
  typedef hkPackfileWriter::AddObjectListener::Self *_g4_t_v48;
  typedef hkRelocationInfo::Self *_g4_t_v49;
  typedef hkClass::Self *_g4_t_v50;
  typedef hkRelocationInfo::Self *_g4_t_v51;
  typedef char _g4_t_v52[7];
  typedef char _g4_t_v53;
  typedef unsigned int _g4_t_v54[4];
  typedef hkClass::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint8_t _g4_t_v57[16];
  typedef uint32_t _g4_t_v58[4];
  typedef uint32_t _g4_t_v59[3];
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef hkPackfileWriter::Self **_g4_t_v70;
  enum : size_t {
    _g4_s0 = 752u,
    _g4_s1 = (12u + sizeof(_g4_t_v31)) > _g4_s0 ? (12u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v32)) > _g4_s1 ? (12u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v33)) > _g4_s2 ? (16u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v34)) > _g4_s3 ? (36u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v35)) > _g4_s4 ? (36u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v36)) > _g4_s5 ? (40u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v37)) > _g4_s6 ? (40u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v38)) > _g4_s7 ? (44u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v39)) > _g4_s8 ? (44u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v40)) > _g4_s9 ? (48u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v41)) > _g4_s10 ? (48u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v42)) > _g4_s11 ? (48u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v43)) > _g4_s12 ? (48u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v44)) > _g4_s13 ? (52u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v45)) > _g4_s14 ? (56u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v46)) > _g4_s15 ? (60u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_Name)) > _g4_s16 ? (60u + sizeof(_g4_t_Name)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v48)) > _g4_s17 ? (64u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v49)) > _g4_s18 ? (68u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v50)) > _g4_s19 ? (68u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v51)) > _g4_s20 ? (68u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v52)) > _g4_s21 ? (72u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (79u + sizeof(_g4_t_v53)) > _g4_s22 ? (79u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v54)) > _g4_s23 ? (80u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v55)) > _g4_s24 ? (96u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v56)) > _g4_s25 ? (108u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v57)) > _g4_s26 ? (112u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v58)) > _g4_s27 ? (128u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v59)) > _g4_s28 ? (144u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (156u + sizeof(_g4_t_v60)) > _g4_s29 ? (156u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v61)) > _g4_s30 ? (160u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (164u + sizeof(_g4_t_v62)) > _g4_s31 ? (164u + sizeof(_g4_t_v62)) : _g4_s31,
    _g4_s33 = (168u + sizeof(_g4_t_v63)) > _g4_s32 ? (168u + sizeof(_g4_t_v63)) : _g4_s32,
    _g4_s34 = (172u + sizeof(_g4_t_v64)) > _g4_s33 ? (172u + sizeof(_g4_t_v64)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v65)) > _g4_s34 ? (176u + sizeof(_g4_t_v65)) : _g4_s34,
    _g4_s36 = (180u + sizeof(_g4_t_v66)) > _g4_s35 ? (180u + sizeof(_g4_t_v66)) : _g4_s35,
    _g4_s37 = (184u + sizeof(_g4_t_v67)) > _g4_s36 ? (184u + sizeof(_g4_t_v67)) : _g4_s36,
    _g4_s38 = (188u + sizeof(_g4_t_v68)) > _g4_s37 ? (188u + sizeof(_g4_t_v68)) : _g4_s37,
    _g4_s39 = (192u + sizeof(_g4_t_v69)) > _g4_s38 ? (192u + sizeof(_g4_t_v69)) : _g4_s38,
    _g4_s40 = (664u + sizeof(_g4_t_v70)) > _g4_s39 ? (664u + sizeof(_g4_t_v70)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_Name &Name = *reinterpret_cast<_g4_t_Name *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 68u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 79u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 108u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 112u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 128u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 144u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 156u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 160u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 164u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 168u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 172u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 176u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 180u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 184u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 188u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 192u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 664u);

  v70 = &self;
  v6 = self;
  v46 = (hkString::Self *)(a4);
  v7 = a3;
  v48 = a5;
  v49 = (hkRelocationInfo::Self *)a2;
  v44 = a6;
  v45 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((hkPackfileWriter::Self *)((char *)self + 20));
  if ( hkMapBase_unsigned_long_unsigned_l_393416::findKey(
         (hkPackfileWriter::Self *)((char *)self + 20),
         a2) <= *((uint32_t *)v6 + 7) )
    return;
  hkClass::hasVtable((hkClass::Self *)&v53);
  if ( v53 != 0 )
  {
    if ( v46 == nullptr )
      goto LABEL_29;
    v8 = (hkClass::Self *)G4_VCALL<int>(v46, 28, v49);
  }
  else
  {
    v8 = (hkClass::Self *)(v7);
  }
  if ( v8 != nullptr )
  {
    v55 = v8;
    v54[0] = (unsigned int)(uintptr_t)(v49);
    v9 = (hkClass::Self *)(v49);
    if ( v48 != nullptr )
    {
      G4_VCALL<void>(v48, 20, v54, &v55);
      v9 = (hkClass::Self *)v54[0];
    }
    if ( v9 != nullptr )
    {
      if ( hkPackfileWriter::notDuplicateMetaData(v6, v9, v55) != 0
        && (v49 == (hkRelocationInfo::Self *)v54[0]
         || hkMapBase_unsigned_long_unsigned_l_393416::findKey(v45, v54[0]) > *((uint32_t *)v6 + 7)) )
      {
        hkMapBase_unsigned_long_unsigned_l_393416::insert(
          v45,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (unsigned int)(uintptr_t)(v49),
          *((uint32_t *)v6 + 3));
        v10 = v49;
        if ( (hkRelocationInfo::Self *)v54[0] != v49 )
        {
          hkMapBase_unsigned_long_unsigned_l_393416::insert(
            v45,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v54[0],
            *((uint32_t *)v6 + 3));
          hkMapBase_unsigned_long_unsigned_l_393416::insert(
            (hkPackfileWriter::Self *)((char *)v6 + 72),
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v54[0],
            (unsigned int)(uintptr_t)(v49));
          v10 = (hkRelocationInfo::Self *)v54[0];
        }
        hkPackfileWriter::addPendingWrite(v6, v10, v55, v49, v7, v44);
        v50 = v55;
        v38 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v54[0];
        v40 = *((uint8_t *)v6 + 205);
        v59[0] = 0;
        v59[1] = 0;
        v59[2] = 0x80000000;
        v60 = 0;
        v61 = 0;
        v62 = 0x80000000;
        v63 = 0;
        v64 = 0;
        v65 = 0x80000000;
        v66 = 0;
        v67 = 0;
        v68 = 0x80000000;
        v69 = 0;
        hkStructureLayout::Construct((hkStructureLayout::Self *)&v56);
        hkPlatformObjectWriter::Construct((hkPlatformObjectWriter::Self *)v57, (int)(uintptr_t)(&v56), 0, v40 == 0 ? 2 : 0);
        hkOffsetOnlyStreamWriter::Construct((hkOffsetOnlyStreamWriter::Self *)v58);
        hkPlatformObjectWriter::writeObject((hkPlatformObjectWriter::Self *)v52, (hkStreamWriter::Self *)v57, v58, v38, v50);
        v58[0] = ((uint32_t)(uintptr_t)&off_2054CB8);
        hkPlatformObjectWriter::Destroy((hkPlatformObjectWriter::Self *)v57);
        v39 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((hkPackfileWriter::Self *)((char *)v6 + 180));
        if ( v61 > 0 )
        {
          v51 = (hkRelocationInfo::Self *)(v6);
          v11 = v61;
          for ( i = 0; i < v11; ++i )
          {
            v17 = (uint32_t *)(v60 + 16 * i);
            v18 = (void *)v17[1];
            v19 = (const hkClass::Self *)v17[2];
            if ( v18 != nullptr && v19 != nullptr )
            {
              if ( v17[3] != 0 )
              {
                v37 = (const hkClass::Self *)v17[2];
                v20 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((hkRelocationInfo::Self *)((char *)v51 + 140));
                v43 = (void *)v17[1];
                Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
                        (hkRelocationInfo::Self *)((char *)v51 + 140),
                        (unsigned int)(uintptr_t)(v18));
                v18 = v43;
                v19 = v37;
                if ( Key > *((uint32_t *)v51 + 37) )
                {
                  v22 = hkPackfileWriter::sectionTagToIndex((hkPackfileWriter::Self *)(v51), (hkString::Self *)(v44));
                  v23 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                          v20,
                          v54[0],
                          v22);
                  hkMapBase_unsigned_long_unsigned_l_393416::insert(
                    v20,
                    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                    (unsigned int)(uintptr_t)(v43),
                    v23);
                  v18 = v43;
                  v19 = v37;
                }
              }
              v41 = v18;
              hkPackfileWriter::addObject((hkPackfileWriter::Self *)(v51), (unsigned int)(uintptr_t)(v18), v19, (const hkVtableClassRegistry::Self *)(v46), v48, v44);
              if ( (void *)v54[0] != v41 )
              {
                v13 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                        v45,
                        (unsigned int)(uintptr_t)(v41),
                        0xFFFFFFFF);
                if ( v13 != -1 )
                {
                  v42 = (void *)v54[0];
                  v36 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                          v39,
                          v54[0],
                          0xFFFFFFFF);
                  v14 = *((uint32_t *)v51 + 48);
                  if ( v14 == -1 )
                  {
                    v35 = *((uint32_t *)v51 + 43);
                    v30 = v35;
                    if ( v35 == (*((uint32_t *)v51 + 44) & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::reserveMore(
                        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                        (hkRelocationInfo::Self *)((char *)v51 + 168),
                        &byte_8,
                        v31);
                      v30 = *((uint32_t *)v51 + 43);
                    }
                    v16 = v35;
                    *((uint32_t *)v51 + 43) = v30 + 1;
                    v15 = (uint32_t *)(*((uint32_t *)v51 + 42) + 8 * v35);
                  }
                  else
                  {
                    v34 = *((uint32_t *)v51 + 48);
                    v15 = (uint32_t *)(*((uint32_t *)v51 + 42) + 8 * v14);
                    *((uint32_t *)v51 + 48) = v15[1];
                    v16 = v34;
                  }
                  *v15 = v13;
                  v15[1] = v36;
                  hkMapBase_unsigned_long_unsigned_l_393416::insert(
                    v39,
                    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                    (unsigned int)(uintptr_t)(v42),
                    v16);
                }
              }
              v11 = v61;
            }
          }
          v6 = (hkPackfileWriter::Self *)(v51);
        }
        hkPackfileWriter::addObject(
          v6,
          (unsigned int)(uintptr_t)(v55),
          (const hkClass::Self *)&hkClassClass,
          (const hkVtableClassRegistry::Self *)(v46),
          v48,
          (char *)(uintptr_t)(hkPackfileWriter::SECTION_TAG_TYPES));
        hkRelocationInfo::Destroy((hkRelocationInfo::Self *)v59);
      }
    }
    else
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        v45,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (unsigned int)(uintptr_t)(v49),
        0xFFFFFFFF);
    }
    return;
  }
LABEL_29:
  hkErrStream::Construct((hkErrStream::Self *)v58, (hkString::Self *)v59, 512);
  Name = (hkString::Self *)hkClass::getName(v7);
  v24 = hkOstream::opShl((int)(uintptr_t)(v58), (hkString::Self *)"Found an un-registered class derived from ");
  v25 = hkOstream::opShl(v24, Name);
  v26 = hkOstream::opShl(
          v25,
          (hkString::Self *)". Derived class will not be serialized unless added to class registry.\n");
  v27 = hkOstream::opShl(v26, (hkString::Self *)"All saved pointers to this object will be set to NULL.\n");
  hkOstream::opShl(
    v27,
    (hkString::Self *)"Saved file will not generate warnings (or asserts) on load but NULL pointers may cause runtime crashes.");
  hkError::messageWarning(
    (hkError::Self *)0xABBAABBA,
    (int)(uintptr_t)(v59),
    "Packfile/hkPackfileWriter.cpp",
    (const char *)&dword_110 + 3,
    v33);
  hkErrStream::Destroy((hkErrStream::Self *)v58);
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    v45,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (unsigned int)(uintptr_t)(v49),
    0xFFFFFFFF);
  v28 = *((uint32_t *)v6 + 29);
  if ( v28 == (*((uint32_t *)v6 + 30) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkPackfileWriter::Self *)((char *)v6 + 112),
      &byte_8,
      v32);
    v28 = *((uint32_t *)v6 + 29);
  }
  v29 = (hkRelocationInfo::Self **)(*((uint32_t *)v6 + 28) + 8 * v28);
  *v29 = v49;
  v29[1] = (hkRelocationInfo::Self *)(v7);
  ++*((uint32_t *)v6 + 29);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileWriter::setContentsWithRegistry  (binary VA: 0x18c3390)
// Original: hkPackfileWriter::setContentsWithRegistry
// ----------------------------------------------------------------------------
unsigned int hkPackfileWriter::setContentsWithRegistry(hkPackfileWriter::Self *self, const void *a2, const hkClass::Self *a3, const hkVtableClassRegistry::Self *a4, hkPackfileWriter::AddObjectListener::Self *a5)
{
  const hkVtableClassRegistry::Self *v5;
  hkPackfileWriter::Self *v6;
  const void *v7;
  const hkClass::Self *v8;
  const hkVtableClassRegistry::Self *v9;
  unsigned int result;
  typedef hkPackfileWriter::AddObjectListener::Self *_g4_t_v11;
  typedef const hkVtableClassRegistry::Self *_g4_t_v12;
  typedef hkVtableClassRegistry::Self *_g4_t_v13;
  typedef hkPackfileWriter::AddObjectListener::Self *_g4_t_v14;
  typedef hkPackfileWriter::AddObjectListener::Self *_g4_t_v15;
  typedef hkClass::Self *_g4_t_v16;
  typedef uint8_t _g4_t_v17[9];
  typedef hkPackfileWriter::Self **_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (35u + sizeof(_g4_t_v17)) > _g4_s6 ? (35u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v18)) > _g4_s7 ? (44u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 35u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  v18 = &self;
  v5 = a4;
  v16 = (hkClass::Self *)(a3);
  v6 = self;
  v7 = a2;
  v14 = a5;
  v12 = a4;
  if ( a4 == nullptr )
  {
    v12 = (const hkVtableClassRegistry::Self *)(*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance
                                                                      + 28))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
    v5 = nullptr;
  }
  v13 = (hkVtableClassRegistry::Self *)(v5);
  hkClass::hasVtable((hkClass::Self *)v17, v16);
  v8 = v16;
  v9 = v13;
  if ( v17[0] != 0 )
  {
    v8 = (const hkClass::Self *)G4_VCALL<int>(v12, 28, v7);
    v9 = v13;
  }
  v11 = v14;
  v15 = (hkPackfileWriter::AddObjectListener::Self *)(v8);
  hkPackfileWriter::addObject(v6, (unsigned int)(uintptr_t)(v7), v8, v9, v11, (char *)(uintptr_t)(hkPackfileWriter::SECTION_TAG_DATA));
  *((uint32_t *)v6 + 31) = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                           (hkPackfileWriter::Self *)((char *)v6 + 20),
                           (unsigned int)(uintptr_t)(v7),
                           0xFFFFFFFF);
  result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
             (hkPackfileWriter::Self *)((char *)v6 + 20),
             (unsigned int)(uintptr_t)(v15),
             0xFFFFFFFF);
  *((uint32_t *)v6 + 32) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::getName  (binary VA: 0x18c34a0)
// Original: hkPackfileData::getName
// ----------------------------------------------------------------------------
int hkPackfileData::getName(hkPackfileData::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::callDestructors  (binary VA: 0x18c34b0)
// Original: hkPackfileData::callDestructors
// ----------------------------------------------------------------------------
int hkPackfileData::callDestructors(hkPackfileData::Self *self)
{
  int v2;
  uint32_t *v3;
  int v4;
  hkTypeInfo *v5;
  int v6;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v7;

  if ( *((uint32_t *)self + 12) == 0 )
  {
    v7 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkPackfileData::Self *)((char *)self + 28));
    goto LABEL_3;
  }
  if ( *((int *)self + 8) <= 0 || (v2 = *((uint32_t *)self + 6), v3 = *((uint32_t **)self + 4), v2 < 0) )
  {
LABEL_10:
    v7 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkPackfileData::Self *)((char *)self + 28));
    goto LABEL_3;
  }
  v4 = 0;
  if ( *v3 == -1 )
  {
    while ( v2 >= ++v4 )
    {
      if ( v3[2 * v4] != -1 )
      {
        v6 = v4;
        goto LABEL_12;
      }
    }
    goto LABEL_10;
  }
  v6 = 0;
LABEL_12:
  v7 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkPackfileData::Self *)((char *)self + 28));
LABEL_13:
  v5 = (hkTypeInfo *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                       v7,
                       (hkString::Self *)v3[2 * v6 + 1],
                       0);
  if ( v5 != nullptr )
    hkTypeInfo::cleanupLoadedObject(v5, *(void **)(*((uint32_t *)self + 4) + 8 * v6));
  v3 = *((uint32_t **)self + 4);
  while ( *((uint32_t *)self + 6) >= ++v4 )
  {
    if ( v3[2 * v4] != -1 )
    {
      v6 = v4;
      goto LABEL_13;
    }
  }
LABEL_3:
  *((uint32_t *)self + 2) = 0;
  hkMapBase_unsigned_long_unsigned_l_393416::clear((hkPackfileData::Self *)((char *)self + 16));
  return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::clear(v7);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::getImportsExports  (binary VA: 0x18c35b0)
// Original: hkPackfileData::getImportsExports
// ----------------------------------------------------------------------------
int * hkPackfileData::getImportsExports(uint32_t *a1, int *a2, int *a3)
{
  int *v3;
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
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  typedef int *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v33)) > _g4_s2 ? (8u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v34)) > _g4_s3 ? (12u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v35)) > _g4_s4 ? (16u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v36)) > _g4_s5 ? (16u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v37)) > _g4_s6 ? (16u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v38)) > _g4_s7 ? (20u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v39)) > _g4_s8 ? (20u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v40)) > _g4_s9 ? (20u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v41)) > _g4_s10 ? (20u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v42)) > _g4_s11 ? (24u + sizeof(_g4_t_v42)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);

  v42[3] = (uint32_t)(uintptr_t)(&a1);
  v3 = a2;
  v34 = a1;
  v33 = a3;
  v4 = a2[1];
  v5 = a1[23];
  v32 = v5;
  if ( v5 <= v4 )
    v4 = a1[23];
  v6 = a2[2] & 0x3FFFFFFF;
  if ( v5 > v6 )
  {
    v38 = v4;
    v7 = 2 * v6;
    if ( v7 < v5 )
      v7 = a1[23];
    hkArrayUtil::reserve((hkArrayUtil::Self *)v42, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a2, v7, 8);
    v4 = v38;
  }
  v8 = v34[22];
  v9 = *v3;
  if ( v4 > 0 )
  {
    v31 = v3;
    v10 = 0;
    v11 = *v3;
    do
    {
      v12 = *(uint32_t *)(v8 + 8 * v10);
      *(uint32_t *)(v11 + 8 * v10 + 4) = *(uint32_t *)(v8 + 8 * v10 + 4);
      *(uint32_t *)(v11 + 8 * v10++) = v12;
    }
    while ( v10 != v4 );
    v3 = v31;
    v8 = v34[22];
    v9 = *v31;
  }
  v39 = 8 * v4 + v8;
  v13 = v9 + 8 * v4;
  v14 = 0;
  v15 = v32 - v4;
  if ( v15 > 0 )
  {
    v35 = v3;
    do
    {
      v16 = *(uint32_t *)(v39 + 8 * v14);
      *(uint32_t *)(v13 + 8 * v14 + 4) = *(uint32_t *)(v39 + 8 * v14 + 4);
      *(uint32_t *)(v13 + 8 * v14++) = v16;
    }
    while ( v14 != v15 );
    v3 = v35;
  }
  v3[1] = v32;
  v17 = v33[1];
  v18 = v34[20];
  if ( v18 <= v17 )
    v17 = v34[20];
  v19 = v33[2] & 0x3FFFFFFF;
  if ( v18 > v19 )
  {
    v20 = 2 * v19;
    v40 = v17;
    if ( v18 >= v20 )
      v20 = v34[20];
    hkArrayUtil::reserve((hkArrayUtil::Self *)v42, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v33, v20, 8);
    v17 = v40;
  }
  v21 = v34[19];
  v22 = *v33;
  if ( v17 > 0 )
  {
    v36 = v18;
    v23 = 0;
    v24 = *v33;
    do
    {
      v25 = *(uint32_t *)(v21 + 8 * v23);
      *(uint32_t *)(v24 + 8 * v23 + 4) = *(uint32_t *)(v21 + 8 * v23 + 4);
      *(uint32_t *)(v24 + 8 * v23++) = v25;
    }
    while ( v23 != v17 );
    v18 = v36;
    v21 = v34[19];
    v22 = *v33;
  }
  v41 = 8 * v17 + v21;
  v26 = v22 + 8 * v17;
  v27 = 0;
  v28 = v18 - v17;
  if ( v28 > 0 )
  {
    v37 = v18;
    do
    {
      v29 = *(uint32_t *)(v41 + 8 * v27);
      *(uint32_t *)(v26 + 8 * v27 + 4) = *(uint32_t *)(v41 + 8 * v27 + 4);
      *(uint32_t *)(v26 + 8 * v27++) = v29;
    }
    while ( v27 != v28 );
    v18 = v37;
  }
  v33[1] = v18;
  return v33;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::getContentsTypeName  (binary VA: 0x18c37b0)
// Original: hkPackfileData::getContentsTypeName
// ----------------------------------------------------------------------------
unsigned int hkPackfileData::getContentsTypeName(hkPackfileData::Self *self)
{
  unsigned int v1;

  v1 = *((uint32_t *)self + 2);
  if ( v1 != 0 )
    return hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
             (hkPackfileData::Self *)((char *)self + 16),
             v1,
             0);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::Destroy  (binary VA: 0x18c37f0)
// Original: hkPackfileData::~hkPackfileData
// ----------------------------------------------------------------------------
void hkPackfileData::Destroy(hkMemoryAllocator::Self **self)
{
  hkMemoryAllocator::Self **v1;
  int v2;
  int address;
  hkMemoryAllocator::Self *v4;
  int v5;
  int i;
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

  v1 = self;
  *self = (hkMemoryAllocator::Self *)((uint32_t)(uintptr_t)&off_20A8108);
  hkPackfileData::callDestructors((hkPackfileData::Self *)self);
  if ( (int)(uintptr_t)(*(self + 14)) > 0 )
  {
    v2 = 0;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    do
    {
      v4 = *((hkMemoryAllocator::Self **)*(self + 13) + v2++);
      hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v4);
    }
    while ( (int)(uintptr_t)(*(self + 14)) > v2 );
  }
  v5 = 0;
  for ( i = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE)); (int)(uintptr_t)(*(self + 17)) > v5; i = v18 )
  {
    v7 = 3 * v5;
    v18 = i;
    ++v5;
    (*(void (**)(uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)i + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)i + 44),
      *((uint32_t *)*(self + 16) + v7),
      *((uint32_t *)*(self + 16) + v7 + 1));
  }
  hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)i + 44), *(self + 3));
  v8 = (int)(uintptr_t)(*(self + 27));
  *(self + 26) = nullptr;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      (uint32_t)(uintptr_t)(*(self + 25)),
      8 * v8);
  v9 = (int)(uintptr_t)(*(self + 24));
  *(self + 25) = nullptr;
  *(self + 27) = (hkMemoryAllocator::Self *)0x80000000;
  *(self + 23) = nullptr;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      (uint32_t)(uintptr_t)(*(self + 22)),
      8 * v9);
  v10 = (int)(uintptr_t)(*(self + 21));
  *(self + 22) = nullptr;
  *(self + 24) = (hkMemoryAllocator::Self *)0x80000000;
  *(self + 20) = nullptr;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      (uint32_t)(uintptr_t)(*(self + 19)),
      8 * v10);
  v11 = (int)(uintptr_t)(*(self + 18));
  *(self + 19) = nullptr;
  *(self + 21) = (hkMemoryAllocator::Self *)0x80000000;
  *(self + 17) = nullptr;
  if ( v11 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      (uint32_t)(uintptr_t)(*(self + 16)),
      12 * v11);
  v12 = (int)(uintptr_t)(*(self + 15));
  *(self + 16) = nullptr;
  *(self + 18) = (hkMemoryAllocator::Self *)0x80000000;
  *(self + 14) = nullptr;
  if ( v12 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      (uint32_t)(uintptr_t)(*(self + 13)),
      4 * v12);
  v13 = (int)(uintptr_t)(*(self + 11));
  *(self + 13) = nullptr;
  *(self + 15) = (hkMemoryAllocator::Self *)0x80000000;
  if ( v13 != 0 && *(uint16_t *)(v13 + 6) != 0 )
  {
    do
    {
      v15 = *(uint32_t *)(v13 + 4);
      HIWORD(v14) = HIWORD(v15);
      LOWORD(v14) = 0;
      v16 = v14 | (uint16_t)(v15 - 1);
      v17 = v15;
    }
    while ( v17 != __sync_val_compare_and_swap((volatile int32_t *)(v13 + 4), v17, v16) );
    v1 = self;
    if ( (uint16_t)v16 == 0 )
      G4_VCALL<void>(v13, 16);
  }
  v1[11] = nullptr;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v1 + 7));
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v1 + 4),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  *v1 = (hkMemoryAllocator::Self *)((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::Destroy_ea18c3a60  (binary VA: 0x18c3a60)
// Original: hkPackfileData::~hkPackfileData
// ----------------------------------------------------------------------------
void hkPackfileData::Destroy_ea18c3a60(hkMemoryAllocator::Self **self)
{
  int v1;
  int v2;

  hkPackfileData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::Construct  (binary VA: 0x18c3ac0)
// Original: hkPackfileData::hkPackfileData
// ----------------------------------------------------------------------------
void hkPackfileData::Construct(hkPackfileData::Self *self, const hkClassNameRegistry::Self *a2)
{
  hkPackfileData::Self *v2;
  const hkClassNameRegistry::Self *v3;
  int v4;
  int32_t v5; // kr00_4
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int v12;
  int32_t v13; // kr08_4
  int v14;
  int32_t v15; // kr0C_4
  int32_t v16;
  int32_t v17; // ett

  v2 = self;
  v3 = a2;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8108);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = -1;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)self + 7);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 1;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0x80000000;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0x80000000;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0x80000000;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0x80000000;
  if ( a2 != nullptr )
  {
    if ( *((uint16_t *)a2 + 3) == 0 )
      goto LABEL_8;
    do
    {
      v5 = *((uint32_t *)a2 + 1);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v5, v4 | (uint16_t)(v5 + 1)) );
    v6 = *((uint32_t *)self + 11);
    if ( v6 == 0 || *(uint16_t *)(v6 + 6) == 0 )
      goto LABEL_8;
    do
    {
      v8 = *(uint32_t *)(v6 + 4);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
    v2 = self;
    if ( (uint16_t)v9 != 0 )
    {
LABEL_8:
      *((uint32_t *)v2 + 11) = (uint32_t)(uintptr_t)(v3);
      return;
    }
  }
  else
  {
    v11 = (*(int (**)(uint32_t *, uint8_t))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 24))(
            hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance,
            0);
    v3 = (const hkClassNameRegistry::Self *)v11;
    if ( v11 != 0 && *(uint16_t *)(v11 + 6) != 0 )
    {
      do
      {
        v13 = *(uint32_t *)(v11 + 4);
        HIWORD(v12) = HIWORD(v13);
        LOWORD(v12) = 0;
      }
      while ( v13 != __sync_val_compare_and_swap(
                       (volatile int32_t *)(v11 + 4),
                       v13,
                       v12 | (uint16_t)(v13 + 1)) );
    }
    v6 = *((uint32_t *)self + 11);
    if ( v6 == 0 || *(uint16_t *)(v6 + 6) == 0 )
      goto LABEL_8;
    do
    {
      v15 = *(uint32_t *)(v6 + 4);
      HIWORD(v14) = HIWORD(v15);
      LOWORD(v14) = 0;
      v16 = v14 | (uint16_t)(v15 - 1);
      v17 = v15;
    }
    while ( v17 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v17, v16) );
    v2 = self;
    if ( (uint16_t)v16 != 0 )
      goto LABEL_8;
  }
  G4_VCALL<void>(v6, 16);
  *((uint32_t *)v2 + 11) = (uint32_t)(uintptr_t)(v3);
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::setName  (binary VA: 0x18c3c90)
// Original: hkPackfileData::setName
// ----------------------------------------------------------------------------
hkString::Self * hkPackfileData::setName(hkMemoryAllocator::Self **self, hkString::Self *a2)
{
  int address;
  hkString::Self *result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), *(self + 3));
  result = hkString::strDup(a2);
  *(self + 3) = (hkMemoryAllocator::Self *)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::addExport  (binary VA: 0x18c3ce0)
// Original: hkPackfileData::addExport
// ----------------------------------------------------------------------------
uint32_t * hkPackfileData::addExport(hkPackfileData::Self *self, const char *a2, void *a3)
{
  int v3;
  int v4;
  uint32_t *result;
  int v6;

  v3 = *((uint32_t *)self + 20);
  if ( v3 == (*((uint32_t *)self + 21) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkPackfileData::Self *)((char *)self + 76),
      8,
      v6);
    v3 = *((uint32_t *)self + 20);
  }
  v4 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 20) = v3 + 1;
  result = (uint32_t *)(v4 + 8 * v3);
  *result = (uint32_t)(uintptr_t)(a2);
  result[1] = (uint32_t)(uintptr_t)(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::removeExport  (binary VA: 0x18c3d50)
// Original: hkPackfileData::removeExport
// ----------------------------------------------------------------------------
int hkPackfileData::removeExport(hkPackfileData::Self *self, void *a2)
{
  int result;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;

  result = *((uint32_t *)self + 20) - 1;
  v3 = 8 * result;
  if ( result >= 0 )
  {
    do
    {
      v4 = *((uint32_t *)self + 19);
      v5 = (uint32_t *)(v4 + v3);
      if ( *(void **)(v4 + v3 + 4) == a2 )
      {
        v6 = *((uint32_t *)self + 20) - 1;
        *((uint32_t *)self + 20) = v6;
        if ( result != v6 )
        {
          v7 = (uint32_t *)(v4 + 8 * v6);
          *v5 = *v7;
          v5[1] = v7[1];
        }
      }
      --result;
      v3 -= 8;
    }
    while ( result != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::addImport  (binary VA: 0x18c3db0)
// Original: hkPackfileData::addImport
// ----------------------------------------------------------------------------
uint32_t * hkPackfileData::addImport(hkPackfileData::Self *self, const char *a2, void **a3)
{
  int v3;
  int v4;
  uint32_t *result;
  int v6;

  v3 = *((uint32_t *)self + 23);
  if ( v3 == (*((uint32_t *)self + 24) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkPackfileData::Self *)((char *)self + 88),
      8,
      v6);
    v3 = *((uint32_t *)self + 23);
  }
  v4 = *((uint32_t *)self + 22);
  *((uint32_t *)self + 23) = v3 + 1;
  result = (uint32_t *)(v4 + 8 * v3);
  *result = (uint32_t)(uintptr_t)(a2);
  result[1] = (uint32_t)(uintptr_t)(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::removeImport  (binary VA: 0x18c3e20)
// Original: hkPackfileData::removeImport
// ----------------------------------------------------------------------------
hkPackfileData::Self * hkPackfileData::removeImport(hkPackfileData::Self *self, void **a2)
{
  hkPackfileData::Self *result;
  char *v3;
  uint32_t *v4;
  char *v5;
  hkPackfileData::Self *v6;
  hkPackfileData::Self *v7;

  v7 = *((hkPackfileData::Self **)self + 23);
  result = v7;
  v3 = (char *)v7 - 1;
  if ( (int)(uintptr_t)(v7) - 1 >= 0 )
  {
    v4 = (uint32_t *)(*((uint32_t *)self + 22) + 8 * (uint32_t)(uintptr_t)(v3));
    result = (hkPackfileData::Self *)(v4 - 2);
    v5 = (char *)v7 - 1;
    if ( (void **)v4[1] == a2 )
    {
      *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(v3);
      return self;
    }
    else
    {
      while ( --v5 != (char *)-1 )
      {
        v6 = result;
        result = (hkPackfileData::Self *)((char *)result - 8);
        if ( *((void ***)result + 3) == a2 )
        {
          result = self;
          *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(v3);
          if ( v3 != v5 )
          {
            *(uint32_t *)v6 = *v4;
            result = (hkPackfileData::Self *)v4[1];
            *((uint32_t *)v6 + 1) = (uint32_t)(uintptr_t)(result);
          }
          return result;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::finishedObjects  (binary VA: 0x18c3eb0)
// Original: hkPackfileData::finishedObjects
// ----------------------------------------------------------------------------
bool hkPackfileData::finishedObjects(hkPackfileData::Self *self)
{
  return *((uint32_t *)self + 8) != 0;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::getContentsPointer  (binary VA: 0x18c3ec0)
// Original: hkPackfileData::getContentsPointer
// ----------------------------------------------------------------------------
int hkPackfileData::getContentsPointer(hkPackfileData::Self *self, const char *a2, const hkTypeInfoRegistry::Self *a3)
{
  hkPackfileData::Self *v3;
  unsigned int v4;
  hkClass::Self *v5;
  const hkClass::Self *v6;
  int v7;
  uint32_t *v8;
  int v9;
  unsigned int v10;
  void (***Attribute)(hkString::Self *);
  int i;
  uint32_t *v14;
  unsigned int v15;
  int v16;
  int v17;
  typedef hkString::Self *_g4_t_v18;
  typedef hkString::Self *_g4_t_v19;
  typedef hkString::Self *_g4_t_v20;
  typedef char _g4_t_v21;
  typedef uint8_t _g4_t_v22[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v20)) > _g4_s2 ? (4u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (10u + sizeof(_g4_t_v21)) > _g4_s3 ? (10u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (11u + sizeof(_g4_t_v22)) > _g4_s4 ? (11u + sizeof(_g4_t_v22)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 10u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 11u);

  v3 = self;
  if ( *((uint32_t *)self + 2) != 0 )
  {
    v4 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
           (hkPackfileData::Self *)((char *)self + 16),
           *((uint32_t *)self + 2),
           0);
    if ( a2 == nullptr
      || (v18 = *((hkString::Self **)self + 11),
          v5 = (hkClass::Self *)G4_VCALL<int>(v18, 24, v4),
          v6 = (const hkClass::Self *)G4_VCALL<int>(v18, 24, a2),
          hkClass::isSuperClass((hkClass::Self *)v22, v6, v5),
          v22[0] != 0) )
    {
      if ( !hkPackfileData::finishedObjects(self) && a3 != nullptr )
      {
        v7 = *((uint32_t *)self + 6);
        v8 = *((uint32_t **)self + 4);
        if ( v7 >= 0 )
        {
          v9 = 0;
          if ( *v8 == -1 )
          {
            while ( v7 >= ++v9 )
            {
              if ( v8[2 * v9] != -1 )
              {
                v17 = v9;
                goto LABEL_18;
              }
            }
          }
          else
          {
            v17 = 0;
LABEL_18:
            v21 = 0;
            for ( i = v9; ; v17 = i )
            {
              v14 = &v8[2 * v17];
              v20 = (hkString::Self *)v14[1];
              v15 = G4_VCALL<int>(a3, 24, *v14, v20);
              if ( v15 != 0 )
                hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                  (hkPackfileData::Self *)((char *)self + 28),
                  v20,
                  v15);
              else
                v21 = 1;
              ++i;
              v16 = *((uint32_t *)self + 6);
              v8 = *((uint32_t **)self + 4);
              if ( v16 < i )
                break;
              while ( v8[2 * i] == -1 )
              {
                if ( v16 < ++i )
                {
                  v3 = self;
                  goto LABEL_15;
                }
              }
            }
            v3 = self;
LABEL_15:
            if ( v21 != 0 )
              return 0;
          }
        }
        v10 = *((uint32_t *)v3 + 25);
        if ( v10 < v10 + 8 * *((uint32_t *)v3 + 26) )
        {
          do
          {
            v19 = *(hkString::Self **)v10;
            Attribute = (void (***)(hkString::Self *))hkClass::getAttribute(*(hkClass::Self **)(v10 + 4), "hk.PostFinish");
            v10 += 8;
            (**Attribute)(v19);
          }
          while ( v10 < *((uint32_t *)v3 + 25) + 8 * *((uint32_t *)v3 + 26) );
        }
      }
      return *((uint32_t *)v3 + 2);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::setContentsWithName  (binary VA: 0x18c4090)
// Original: hkPackfileData::setContentsWithName
// ----------------------------------------------------------------------------
hkPackfileData::Self * hkPackfileData::setContentsWithName(hkPackfileData::Self *self, void *a2)
{
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkPackfileData::setPackfileClassNameRegistry  (binary VA: 0x18c40a0)
// Original: hkPackfileData::setPackfileClassNameRegistry
// ----------------------------------------------------------------------------
int hkPackfileData::setPackfileClassNameRegistry(hkPackfileData::Self *self, const hkClassNameRegistry::Self *a2)
{
  const hkClassNameRegistry::Self *v2;
  int v3;
  int32_t v4; // kr00_4
  int result;
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett

  v2 = a2;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v4, v3 | (uint16_t)(v4 + 1));
    }
    while ( v4 != result );
  }
  v6 = *((uint32_t *)self + 11);
  if ( v6 == 0 || *(uint16_t *)(v6 + 6) == 0 )
    goto LABEL_8;
  do
  {
    v8 = *(uint32_t *)(v6 + 4);
    HIWORD(v7) = HIWORD(v8);
    LOWORD(v7) = 0;
    v9 = v7 | (uint16_t)(v8 - 1);
    v10 = v8;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9);
  }
  while ( v10 != result );
  v2 = a2;
  if ( (uint16_t)v9 == 0 )
  {
    result = G4_VCALL<int>(v6, 16);
    *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_8:
    *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDeepCopier::freeDeepCopy  (binary VA: 0x18c4130)
// Original: hkDeepCopier::freeDeepCopy
// ----------------------------------------------------------------------------
hkDeepCopier::Self * hkDeepCopier::freeDeepCopy(hkDeepCopier::Self *self, hkMemoryAllocator::Self *a2)
{
  int EasyAllocSize;
  int v3;
  void **v4;
  void **v5;
  int i;
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  EasyAllocSize = hkMemoryRouter::getEasyAllocSize(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), a2);
  v3 = *(uint32_t *)((char *)a2 + EasyAllocSize - 4);
  if ( v3 != 0 )
  {
    v4 = (void **)((char *)a2 + EasyAllocSize + -8 * v3 - 4);
    if ( v3 > 0 )
    {
      v5 = v4;
      for ( i = 0; i != v3; ++i )
      {
        if ( *v5 != nullptr )
          hkTypeInfo::cleanupLoadedObject((hkTypeInfo *)*v5, v5[1]);
        v5 += 2;
      }
    }
  }
  hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), a2);
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDeepCopier::deepCopy  (binary VA: 0x18c41e0)
// Original: hkDeepCopier::deepCopy
// ----------------------------------------------------------------------------
hkString::Self * hkDeepCopier::deepCopy(unsigned int a1, unsigned int a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3, int a4, int a5, int a6)
{
  unsigned int v6;
  unsigned int v7;
  unsigned int *v8;
  unsigned int *v9;
  hkClass::Self *v10;
  const hkClass::Self *v11;
  char *v12;
  int v13;
  size_t *v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  unsigned int *v24;
  hkString::Self *v25;
  int v26;
  hkMemoryAllocator::Self *v27;
  int address;
  int j;
  uint32_t *v30;
  int k;
  unsigned int v32;
  unsigned int v33;
  int m;
  int v35;
  int v36;
  int *v37;
  int v38;
  int Name;
  int v40;
  int v41;
  int v42;
  int n;
  void (***Attribute)(int);
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_i;
  typedef int *_g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef int *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef char *_g4_t_v57;
  typedef char *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef char *_g4_t_v61;
  typedef char *_g4_t_v62;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v63;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v64;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef char *_g4_t_v67;
  typedef size_t _g4_t_v68;
  typedef char *_g4_t_v69;
  typedef hkString::Self *_g4_t_v70;
  typedef char _g4_t_v71[7];
  typedef char _g4_t_v72[9];
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef void *_g4_t_v75;
  typedef size_t _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef uint8_t _g4_t_v84[8];
  typedef hkClass::Self *_g4_t_v85;
  typedef uint32_t _g4_t_v86[3];
  typedef uint32_t _g4_t_v87[3];
  typedef uint8_t _g4_t_v88[24];
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef unsigned int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef unsigned int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef unsigned int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef unsigned int *_g4_t_v102;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (8u + sizeof(_g4_t_v46)) > _g4_s0 ? (8u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v47)) > _g4_s1 ? (8u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v48)) > _g4_s2 ? (8u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v49)) > _g4_s3 ? (48u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v50)) > _g4_s4 ? (52u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_i)) > _g4_s5 ? (80u + sizeof(_g4_t_i)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v52)) > _g4_s6 ? (80u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v53)) > _g4_s7 ? (84u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v54)) > _g4_s8 ? (84u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v55)) > _g4_s9 ? (84u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v56)) > _g4_s10 ? (88u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v57)) > _g4_s11 ? (88u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v58)) > _g4_s12 ? (88u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v59)) > _g4_s13 ? (88u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v60)) > _g4_s14 ? (88u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v61)) > _g4_s15 ? (88u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v62)) > _g4_s16 ? (88u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v63)) > _g4_s17 ? (92u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v64)) > _g4_s18 ? (92u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v65)) > _g4_s19 ? (92u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v66)) > _g4_s20 ? (96u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v67)) > _g4_s21 ? (96u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v68)) > _g4_s22 ? (96u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v69)) > _g4_s23 ? (96u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v70)) > _g4_s24 ? (96u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v71)) > _g4_s25 ? (100u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (107u + sizeof(_g4_t_v72)) > _g4_s26 ? (107u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v73)) > _g4_s27 ? (116u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v74)) > _g4_s28 ? (120u + sizeof(_g4_t_v74)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v75)) > _g4_s29 ? (124u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v76)) > _g4_s30 ? (128u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v77)) > _g4_s31 ? (132u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v78)) > _g4_s32 ? (140u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v79)) > _g4_s33 ? (144u + sizeof(_g4_t_v79)) : _g4_s33,
    _g4_s35 = (148u + sizeof(_g4_t_v80)) > _g4_s34 ? (148u + sizeof(_g4_t_v80)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v81)) > _g4_s35 ? (156u + sizeof(_g4_t_v81)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v82)) > _g4_s36 ? (160u + sizeof(_g4_t_v82)) : _g4_s36,
    _g4_s38 = (164u + sizeof(_g4_t_v83)) > _g4_s37 ? (164u + sizeof(_g4_t_v83)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v84)) > _g4_s38 ? (176u + sizeof(_g4_t_v84)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v85)) > _g4_s39 ? (184u + sizeof(_g4_t_v85)) : _g4_s39,
    _g4_s41 = (188u + sizeof(_g4_t_v86)) > _g4_s40 ? (188u + sizeof(_g4_t_v86)) : _g4_s40,
    _g4_s42 = (200u + sizeof(_g4_t_v87)) > _g4_s41 ? (200u + sizeof(_g4_t_v87)) : _g4_s41,
    _g4_s43 = (212u + sizeof(_g4_t_v88)) > _g4_s42 ? (212u + sizeof(_g4_t_v88)) : _g4_s42,
    _g4_s44 = (236u + sizeof(_g4_t_v89)) > _g4_s43 ? (236u + sizeof(_g4_t_v89)) : _g4_s43,
    _g4_s45 = (240u + sizeof(_g4_t_v90)) > _g4_s44 ? (240u + sizeof(_g4_t_v90)) : _g4_s44,
    _g4_s46 = (244u + sizeof(_g4_t_v91)) > _g4_s45 ? (244u + sizeof(_g4_t_v91)) : _g4_s45,
    _g4_s47 = (248u + sizeof(_g4_t_v92)) > _g4_s46 ? (248u + sizeof(_g4_t_v92)) : _g4_s46,
    _g4_s48 = (252u + sizeof(_g4_t_v93)) > _g4_s47 ? (252u + sizeof(_g4_t_v93)) : _g4_s47,
    _g4_s49 = (256u + sizeof(_g4_t_v94)) > _g4_s48 ? (256u + sizeof(_g4_t_v94)) : _g4_s48,
    _g4_s50 = (260u + sizeof(_g4_t_v95)) > _g4_s49 ? (260u + sizeof(_g4_t_v95)) : _g4_s49,
    _g4_s51 = (264u + sizeof(_g4_t_v96)) > _g4_s50 ? (264u + sizeof(_g4_t_v96)) : _g4_s50,
    _g4_s52 = (268u + sizeof(_g4_t_v97)) > _g4_s51 ? (268u + sizeof(_g4_t_v97)) : _g4_s51,
    _g4_s53 = (272u + sizeof(_g4_t_v98)) > _g4_s52 ? (272u + sizeof(_g4_t_v98)) : _g4_s52,
    _g4_s54 = (276u + sizeof(_g4_t_v99)) > _g4_s53 ? (276u + sizeof(_g4_t_v99)) : _g4_s53,
    _g4_s55 = (280u + sizeof(_g4_t_v100)) > _g4_s54 ? (280u + sizeof(_g4_t_v100)) : _g4_s54,
    _g4_s56 = (284u + sizeof(_g4_t_v101)) > _g4_s55 ? (284u + sizeof(_g4_t_v101)) : _g4_s55,
    _g4_s57 = (308u + sizeof(_g4_t_v102)) > _g4_s56 ? (308u + sizeof(_g4_t_v102)) : _g4_s56
  };
  alignas(16) uint8_t _g4_sf[_g4_s57];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 84u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 88u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 88u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 88u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 92u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 92u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 92u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 96u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 96u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 96u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 100u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 107u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 116u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 120u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 124u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 128u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 132u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 140u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 144u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 148u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 156u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 160u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 164u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 176u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 184u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 188u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 200u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 212u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 236u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 240u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 244u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 248u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 252u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 256u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 260u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 264u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 268u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 272u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 276u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 280u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 284u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 308u);

  v102 = &a1;
  v63 = a3;
  v50 = a4;
  v6 = a1;
  v7 = a2;
  v49 = a5;
  v66 = a6;
  v75 = nullptr;
  v76 = 0;
  v77 = 0x80000000;
  hkOstream::Construct(v84, &v75);
  v89 = 0;
  v90 = 0;
  v91 = 0x80000000;
  v92 = 0;
  v93 = 0;
  v94 = 0x80000000;
  v95 = 0;
  v96 = 0;
  v97 = 0x80000000;
  v98 = 0;
  v99 = 0;
  v100 = 0x80000000;
  v101 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0x80000000;
  v86[0] = 0;
  v86[1] = 0;
  v86[2] = -1;
  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v78, 8, v46);
  v8 = (unsigned int *)(v78 + 8 * v79);
  *v8 = v6;
  v8[1] = v7;
  ++v79;
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v86,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    v6,
    1u);
  v87[0] = 0;
  v87[1] = 0;
  v87[2] = -1;
  v81 = 0;
  v82 = 0;
  v83 = 0x80000000;
  hkStructureLayout::Construct(&v74, &hkStructureLayout::HostLayoutRules);
  hkStructureLayout::Construct(&v73, &hkStructureLayout::HostLayoutRules);
  hkObjectCopier::Construct(v88, &v73, &v74, v66);
  if ( v79 > 0 )
  {
    for ( i = 0; i < v79; ++i )
    {
      v9 = (unsigned int *)(v78 + 8 * i);
      v10 = (hkClass::Self *)v9[1];
      v11 = (const hkClass::Self *)*v9;
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v87,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        *v9,
        v76);
      v67 = (char *)v93;
      hkClass::hasVtable((hkClass::Self *)v72, v10);
      v12 = v67;
      if ( v72[0] != 0 )
      {
        v10 = (hkClass::Self *)(*(int (**)(char *, int, const hkClass::Self *))(*(uint32_t *)v50 + 28))(v67, v50, v11);
        v12 = v67;
      }
      v68 = v76;
      v13 = v82;
      if ( v82 == (v83 & 0x3FFFFFFF) )
      {
        v62 = v12;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v81, 12, v47);
        v13 = v82;
        v12 = v62;
      }
      v56 = v12;
      v14 = (size_t *)(v81 + 12 * v13);
      *v14 = v68;
      v14[1] = (size_t)v11;
      v14[2] = (size_t)v10;
      ++v82;
      hkObjectCopier::copyObject((hkObjectCopier::Self *)v71, v88, v11, v10, v85, v10);
      v15 = v93;
      v16 = 16 * (uint32_t)(uintptr_t)(v56);
      if ( (int)(uintptr_t)(v56) < v93 )
      {
        v69 = v56;
        do
        {
          v18 = *(uint32_t *)(v92 + v16 + 4);
          if ( v18 != 0 )
          {
            v19 = *(uint32_t *)(v92 + v16 + 8);
            if ( v19 != 0 )
            {
              if ( v63 != nullptr
                && (v53 = *(uint32_t *)(v92 + v16 + 8),
                    v57 = *(char **)(v92 + v16 + 4),
                    v17 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                            v63,
                            (unsigned int)(uintptr_t)(v57),
                            0),
                    v18 = (unsigned int)(uintptr_t)(v57),
                    v19 = v53,
                    v17 != 0) )
              {
                *(uint32_t *)(v92 + v16 + 4) = v17;
              }
              else
              {
                v54 = v19;
                v58 = (char *)v18;
                v20 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v86,
                        v18,
                        0);
                v21 = (unsigned int)(uintptr_t)(v58);
                v22 = v54;
                if ( v20 == 0 )
                {
                  v23 = v79;
                  if ( v79 == (v80 & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::reserveMore(
                      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                      (hkMemoryAllocator::Self *)&v78,
                      8,
                      v48);
                    v22 = v54;
                    v21 = (unsigned int)(uintptr_t)(v58);
                    v23 = v79;
                  }
                  v24 = (unsigned int *)(v78 + 8 * v23);
                  *v24 = v21;
                  v24[1] = v22;
                  ++v79;
                  hkMapBase_unsigned_long_unsigned_l_393416::insert(
                    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v86,
                    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                    v21,
                    1u);
                }
              }
              v15 = v93;
            }
          }
          ++v69;
          v16 += 16;
        }
        while ( (int)(uintptr_t)(v69) < v15 );
      }
    }
  }
  v25 = nullptr;
  if ( v76 != 0 )
  {
    if ( v49 != 0 )
      v26 = 8 * v82 + 4;
    else
      v26 = 4;
    v27 = (hkMemoryAllocator::Self *)(v76 + v26);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v70 = (hkString::Self *)hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v27);
    v52 = (int *)((char *)v70 + v76);
    hkString::memCpy(v70, v75, v76);
    for ( j = 0; v90 > j; *(uint32_t *)((char *)v70 + *v30) = (uint32_t)(uintptr_t)((char *)v70 + v30[1]) )
      v30 = (uint32_t *)(v89 + 8 * j++);
    for ( k = 0; v93 > k; *(uint32_t *)((char *)v70 + *(uint32_t *)&v59[v92]) = v32 )
    {
      v59 = (char *)(16 * k);
      v32 = *(uint32_t *)(v92 + 16 * k + 4);
      v33 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v87,
              v32,
              0xFFFFFFFF);
      if ( v33 != -1 )
        v32 = (unsigned int)(uintptr_t)(v70) + v33;
      ++k;
    }
    if ( v63 != nullptr && v82 > 0 )
    {
      for ( m = 0; m < v82; ++m )
      {
        v35 = 3 * m;
        hkMapBase_unsigned_long_unsigned_l_393416::insert(
          v63,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          *(uint32_t *)(v81 + 4 * v35 + 4),
          (unsigned int)(uintptr_t)(v70) + *(uint32_t *)(v81 + 4 * v35));
      }
    }
    if ( v49 != 0 )
    {
      v36 = v82;
      if ( v82 > 0 )
      {
        v64 = nullptr;
        v37 = v52;
        do
        {
          v55 = v37;
          v38 = v81 + 12 * (uint32_t)(uintptr_t)(v64);
          v60 = *(char **)(*(uint32_t *)v49 + 24);
          Name = hkClass::getName(*(hkClass::Self **)(v38 + 8));
          ((void (*)(int, char *, int))v60)(v49, (char *)v70 + *(uint32_t *)v38, Name);
          v61 = *(char **)(*(uint32_t *)v49 + 36);
          v40 = hkClass::getName(*(hkClass::Self **)(v38 + 8));
          v41 = ((int (*)(int, int))v61)(v49, v40);
          v37 = v55 + 2;
          *v55 = v41;
          v55[1] = (int)(uintptr_t)(v70) + *(uint32_t *)v38;
          v64 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)((char *)v64 + 1);
          v36 = v82;
        }
        while ( v82 > (int)(uintptr_t)(v64) );
        if ( v82 > 0 )
        {
          v42 = 0;
          for ( n = 0; n < v82; ++n )
          {
            v65 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v42 + v81);
            Attribute = (void (***)(int))hkClass::getAttribute(*(hkClass::Self **)(v42 + v81 + 8), "hk.PostFinish");
            if ( Attribute != nullptr )
              (**Attribute)((int)(uintptr_t)(v70) + *(uint32_t *)v65);
            v36 = v82;
            v42 += 12;
          }
        }
      }
      v25 = v70;
      v52[2 * v36] = v36;
    }
    else
    {
      v25 = v70;
      *v52 = 0;
    }
  }
  hkObjectCopier::Destroy((hkObjectCopier::Self *)v88);
  v82 = 0;
  if ( v83 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v81,
      12 * v83);
  v81 = 0;
  v83 = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v87,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v86,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v79 = 0;
  if ( v80 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v78,
      8 * v80);
  v78 = 0;
  v80 = 0x80000000;
  hkRelocationInfo::Destroy((hkRelocationInfo::Self *)&v89);
  hkOstream::Destroy((hkOstream::Self *)v84);
  v76 = 0;
  if ( v77 >= 0 )
    (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v75,
      v77 & 0x3FFFFFFF);
  return v25;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::renameClass  (binary VA: 0x18c4b70)
// Original: hkDataWorld::renameClass
// ----------------------------------------------------------------------------
void hkDataWorld::renameClass()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::removeClass  (binary VA: 0x18c4b80)
// Original: hkDataWorld::removeClass
// ----------------------------------------------------------------------------
void hkDataWorld::removeClass()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::setClassVersion  (binary VA: 0x18c4b90)
// Original: hkDataWorld::setClassVersion
// ----------------------------------------------------------------------------
void hkDataWorld::setClassVersion()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::setClassParent  (binary VA: 0x18c4ba0)
// Original: hkDataWorld::setClassParent
// ----------------------------------------------------------------------------
void hkDataWorld::setClassParent()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::renameClassMember  (binary VA: 0x18c4bb0)
// Original: hkDataWorld::renameClassMember
// ----------------------------------------------------------------------------
void hkDataWorld::renameClassMember()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::removeClassMember  (binary VA: 0x18c4bc0)
// Original: hkDataWorld::removeClassMember
// ----------------------------------------------------------------------------
void hkDataWorld::removeClassMember()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::findObjectsByBaseClass  (binary VA: 0x18c4bd0)
// Original: hkDataWorld::findObjectsByBaseClass
// ----------------------------------------------------------------------------
void hkDataWorld::findObjectsByBaseClass()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::findObjectsByExactClass  (binary VA: 0x18c4be0)
// Original: hkDataWorld::findObjectsByExactClass
// ----------------------------------------------------------------------------
void hkDataWorld::findObjectsByExactClass()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::castObject  (binary VA: 0x18c4bf0)
// Original: hkDataWorld::castObject
// ----------------------------------------------------------------------------
void hkDataWorld::castObject()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::setClassMemberDefault  (binary VA: 0x18c4c00)
// Original: hkDataWorld::setClassMemberDefault
// ----------------------------------------------------------------------------
void hkDataWorld::setClassMemberDefault()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::copyClassFromWorld  (binary VA: 0x18c4c10)
// Original: hkDataWorld::copyClassFromWorld
// ----------------------------------------------------------------------------
int hkDataWorld::copyClassFromWorld()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::addClassMember  (binary VA: 0x18c4c20)
// Original: hkDataWorld::addClassMember
// ----------------------------------------------------------------------------
void hkDataWorld::addClassMember()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::Destroy  (binary VA: 0x18c4c30)
// Original: hkDataWorld::~hkDataWorld
// ----------------------------------------------------------------------------
void hkDataWorld::Destroy(hkDataWorld::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::Destroy_ea18c4c50  (binary VA: 0x18c4c50)
// Original: hkDataWorld::~hkDataWorld
// ----------------------------------------------------------------------------
void hkDataWorld::Destroy_ea18c4c50(hkDataWorld::Self *self)
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
// Function: hkDataClass::getAllDeclaredMemberInfo  (binary VA: 0x18c4cb0)
// Original: hkDataClass::getAllDeclaredMemberInfo
// ----------------------------------------------------------------------------
int hkDataClass::getAllDeclaredMemberInfo(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;

  v2 = 0;
  result = G4_VCALL<int>(*a1, 28);
  if ( result > 0 )
  {
    v6 = result;
    do
    {
      v4 = v2;
      v5 = *a2 + 16 * v2++;
      result = G4_VCALL<int>(*a1, 32, v4, v5);
    }
    while ( v2 != v6 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataClass::getCinfo  (binary VA: 0x18c4d10)
// Original: hkDataClass::getCinfo
// ----------------------------------------------------------------------------
int hkDataClass::getCinfo(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int savedregs;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef hkArrayUtil::Self *_g4_t_v33;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v21)) > _g4_s7 ? (32u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v22)) > _g4_s8 ? (32u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v23)) > _g4_s9 ? (36u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v24)) > _g4_s10 ? (40u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v25)) > _g4_s11 ? (40u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v26)) > _g4_s12 ? (44u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v27)) > _g4_s13 ? (48u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v28)) > _g4_s14 ? (52u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v29)) > _g4_s15 ? (56u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v30)) > _g4_s16 ? (60u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v31)) > _g4_s17 ? (64u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v32)) > _g4_s18 ? (68u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v33)) > _g4_s19 ? (72u + sizeof(_g4_t_v33)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
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

  v33 = (hkArrayUtil::Self *)&a1;
  v2 = a1;
  v3 = a2;
  *v3 = G4_VCALL<int>(*a1, 12, v14, v15, v16, v17, v18, v19, v20, v21, v23, v24, v26, v27, v28, v29, v30, v31, v32);
  v3[1] = G4_VCALL<int>(*v2, 16);
  v4 = G4_VCALL<int>(*v2, 20);
  v5 = 0;
  if ( v4 != 0 )
  {
    v6 = G4_VCALL<int>(*v2, 20);
    v5 = G4_VCALL<int>(v6, 12);
  }
  v3[2] = v5;
  v7 = G4_VCALL<int>(*v2, 28);
  v25 = v7;
  result = v3[5] & 0x3FFFFFFF;
  if ( v7 <= result )
  {
    v3[4] = v7;
    if ( v7 <= 0 )
      return result;
  }
  else
  {
    v9 = 2 * result;
    savedregs = 12;
    v33 = (hkArrayUtil::Self *)&v26;
    if ( v7 >= v9 )
      v9 = v7;
    hkArrayUtil::reserve(v33, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v3 + 3, v9, savedregs);
    v3[4] = v25;
  }
  v22 = v2;
  v10 = v3;
  v11 = 0;
  do
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    G4_VCALL<void>(*v22, 32, v11, &v27);
    v12 = 3 * v11;
    v13 = v29;
    ++v11;
    result = v10[3] + 4 * v12;
    *(uint32_t *)result = v27;
    *(uint32_t *)(result + 4) = v13;
  }
  while ( v11 != v25 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObject_Value::getType  (binary VA: 0x18c4e50)
// Original: hkDataObject_Value::getType
// ----------------------------------------------------------------------------
int hkDataObject_Value::getType(hkDataObject_Value::Self *self)
{
  typedef uint32_t _g4_t_v2[2];
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v4)) > _g4_s2 ? (12u + sizeof(_g4_t_v4)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v2[0] = 0;
  v2[1] = 0;
  v3 = 0;
  v4 = 0;
  (*(void (**)(uint32_t, uint32_t, uint32_t *))(**(uint32_t **)self + 104))(*(uint32_t *)self, *((uint32_t *)self + 1), v2);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorld::addClassMemberTypeExpression  (binary VA: 0x18c4ea0)
// Original: hkDataWorld::addClassMemberTypeExpression
// ----------------------------------------------------------------------------
uint32_t * hkDataWorld::addClassMemberTypeExpression(hkDataWorld::Self *self, hkDataClass::Self *a2, hkTypeManager::Self *a3, hkString::Self *a4, hkString::Self *a5, int a6, char a7)
{
  char *v7;
  uint32_t *v8;
  uint32_t *result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
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
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  hkString::Self *v53;
  int retaddr;

  v7 = (char *)G4_VCALL<int>(self, 52, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52);
  if ( a5 != nullptr )
  {
    a3 = (hkTypeManager::Self *)v7;
    v53 = a4;
    a6 = -2147483520;
    a4 = (hkString::Self *)&a7;
    a5 = (hkString::Self *)(&dword_0 + 1);
    a7 = 0;
    hkStringBuf::append((hkStringBuf::Self *)&a4, v53, -1);
    hkStringBuf::append((hkStringBuf::Self *)&a4, (hkString::Self *)"C", -1);
    hkStringBuf::append((hkStringBuf::Self *)&a4, a5, -1);
    hkStringBuf::append((hkStringBuf::Self *)&a4, (hkString::Self *)";", -1);
    v8 = hkTypeManager::parseTypeExpression(a3, (const char *)a4);
    result = (uint32_t *)a6;
    a5 = nullptr;
    if ( a6 >= 0 )
      result = (uint32_t *)(*(int (**)(uint32_t *, hkString::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                           (uint32_t *)(hkContainerTempAllocator::s_alloc),
                           a4,
                           a6 & 0x3FFFFFFF);
  }
  else
  {
    result = hkTypeManager::parseTypeExpression((hkTypeManager::Self *)v7, (const char *)a4);
    v8 = result;
  }
  if ( v8 != nullptr )
  {
    retaddr = a6;
    return (uint32_t *)G4_VCALL<int>(self, 72, a2, a3, v8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataObject::destroyMember  (binary VA: 0x18c4ff0)
// Original: hkDataObject::destroyMember
// ----------------------------------------------------------------------------
int hkDataObject::destroyMember(hkDataObject::Self *self, const char *a2)
{
  return (*(int (**)(uint32_t, const char *))(**(uint32_t **)self + 120))(*(uint32_t *)self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkResourceHandle::getType  (binary VA: 0x18c5010)
// Original: hkResourceHandle::getType
// ----------------------------------------------------------------------------
int hkResourceHandle::getType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkResourceBase::Destroy  (binary VA: 0x18c5020)
// Original: hkResourceBase::~hkResourceBase
// ----------------------------------------------------------------------------
void hkResourceBase::Destroy(hkResourceBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkResourceHandle::Destroy  (binary VA: 0x18c5040)
// Original: hkResourceHandle::~hkResourceHandle
// ----------------------------------------------------------------------------
void hkResourceHandle::Destroy(hkResourceHandle::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkResourceContainer::getType  (binary VA: 0x18c5060)
// Original: hkResourceContainer::getType
// ----------------------------------------------------------------------------
int hkResourceContainer::getType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkResourceContainer::Destroy  (binary VA: 0x18c5070)
// Original: hkResourceContainer::~hkResourceContainer
// ----------------------------------------------------------------------------
void hkResourceContainer::Destroy(hkResourceContainer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkResourceMap::Destroy  (binary VA: 0x18c5090)
// Original: hkResourceMap::~hkResourceMap
// ----------------------------------------------------------------------------
void hkResourceMap::Destroy(hkResourceMap::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20A8230);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::getNumResources  (binary VA: 0x18c50b0)
// Original: hkMemoryResourceContainer::getNumResources
// ----------------------------------------------------------------------------
int hkMemoryResourceContainer::getNumResources(hkMemoryResourceContainer::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::getParent  (binary VA: 0x18c50c0)
// Original: hkMemoryResourceContainer::getParent
// ----------------------------------------------------------------------------
int hkMemoryResourceContainer::getParent(hkMemoryResourceContainer::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::getName  (binary VA: 0x18c50d0)
// Original: hkMemoryResourceHandle::getName
// ----------------------------------------------------------------------------
const char * hkMemoryResourceHandle::getName(hkMemoryResourceHandle::Self *self)
{
  const char *result;

  result = (const char *)(*((uint32_t *)self + 3) & 0xFFFFFFFE);
  if ( result == nullptr )
    return "null";
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::getObject  (binary VA: 0x18c50f0)
// Original: hkMemoryResourceHandle::getObject
// ----------------------------------------------------------------------------
int hkMemoryResourceHandle::getObject(hkMemoryResourceHandle::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::getName  (binary VA: 0x18c5100)
// Original: hkMemoryResourceContainer::getName
// ----------------------------------------------------------------------------
unsigned int hkMemoryResourceContainer::getName(hkMemoryResourceContainer::Self *self)
{
  return *((uint32_t *)self + 2) & 0xFFFFFFFE;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::getNumContainers  (binary VA: 0x18c5110)
// Original: hkMemoryResourceContainer::getNumContainers
// ----------------------------------------------------------------------------
int hkMemoryResourceContainer::getNumContainers(hkMemoryResourceContainer::Self *self)
{
  return *((uint32_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::setName  (binary VA: 0x18c5120)
// Original: hkMemoryResourceHandle::setName
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkMemoryResourceHandle::setName(hkMemoryResourceHandle::Self *self, hkString::Self *a2)
{
  return hkStringPtr::opAssign((hkMemoryResourceHandle::Self *)((char *)self + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::getClass  (binary VA: 0x18c5150)
// Original: hkMemoryResourceHandle::getClass
// ----------------------------------------------------------------------------
int hkMemoryResourceHandle::getClass(hkMemoryResourceHandle::Self *self)
{
  return hkRefVariant::getClass((hkMemoryResourceHandle::Self *)((char *)self + 8));
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::setObject  (binary VA: 0x18c5180)
// Original: hkMemoryResourceHandle::setObject
// ----------------------------------------------------------------------------
int hkMemoryResourceHandle::setObject(hkMemoryResourceHandle::Self *self, void *a2, const hkClass::Self *a3)
{
  return hkRefVariant::set((hkMemoryResourceHandle::Self *)((char *)self + 8), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::findContainerByName  (binary VA: 0x18c51c0)
// Original: hkMemoryResourceContainer::findContainerByName
// ----------------------------------------------------------------------------
int hkMemoryResourceContainer::findContainerByName(hkMemoryResourceContainer::Self *self, hkString::Self *a2, const hkResourceContainer::Self *a3)
{
  hkMemoryResourceContainer::Self *v3;
  int v4;
  const hkResourceContainer::Self **v5;
  int v6;
  int v7;
  int v8;
  hkMemoryResourceContainer::Self *v10;

  v3 = self;
  v4 = *((uint32_t *)self + 8);
  if ( a3 != nullptr )
  {
    if ( v4 <= 0 )
      return 0;
    v5 = *((const hkResourceContainer::Self ***)self + 7);
    v6 = 1;
    if ( a3 != *v5 )
    {
      while ( v6 != v4 )
      {
        if ( a3 == v5[v6++] )
          goto LABEL_6;
      }
      return 0;
    }
  }
  else
  {
    v6 = 0;
  }
LABEL_6:
  if ( v6 >= v4 )
    return 0;
  v7 = 4 * v6;
  v8 = *(uint32_t *)(*((uint32_t *)self + 7) + 4 * v6);
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v10 = v3;
      if ( hkString::strCmp(a2, (char *)(*(uint32_t *)(v8 + 8) & 0xFFFFFFFE)) == 0 )
        break;
      v3 = v10;
      ++v6;
      v7 += 4;
      if ( *((uint32_t *)v10 + 8) <= v6 )
        return 0;
      v8 = *(uint32_t *)(*((uint32_t *)v10 + 7) + v7);
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkContainerResourceMap::findObjectByName  (binary VA: 0x18c5280)
// Original: hkContainerResourceMap::findObjectByName
// ----------------------------------------------------------------------------
int hkContainerResourceMap::findObjectByName(hkContainerResourceMap::Self *self, hkString::Self *a2, const hkClass::Self **a3)
{
  int v3;
  int v4;

  if ( a3 != nullptr )
  {
    *a3 = nullptr;
    v3 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
           (hkContainerResourceMap::Self *)((char *)self + 4),
           a2,
           0);
    v4 = v3;
    if ( v3 != 0 )
    {
      *a3 = (const hkClass::Self *)G4_VCALL<int>(v3, 36);
      return G4_VCALL<int>(v4, 32);
    }
  }
  else
  {
    v4 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
           (hkContainerResourceMap::Self *)((char *)self + 4),
           a2,
           0);
    if ( v4 != 0 )
      return G4_VCALL<int>(v4, 32);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkContainerResourceMap::Destroy  (binary VA: 0x18c5310)
// Original: hkContainerResourceMap::~hkContainerResourceMap
// ----------------------------------------------------------------------------
void hkContainerResourceMap::Destroy(hkContainerResourceMap::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20A83B8);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkContainerResourceMap::Self *)((char *)self + 4));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20A8230);
}

// ----------------------------------------------------------------------------
// Function: hkContainerResourceMap::Destroy_ea18c5350  (binary VA: 0x18c5350)
// Original: hkContainerResourceMap::~hkContainerResourceMap
// ----------------------------------------------------------------------------
void hkContainerResourceMap::Destroy_ea18c5350(hkContainerResourceMap::Self *self)
{
  int address;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20A83B8);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkContainerResourceMap::Self *)((char *)self + 4));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20A8230);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkContainerResourceMap::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    20);
}

// ----------------------------------------------------------------------------
// Function: hkResourceMap::Destroy_ea18c53c0  (binary VA: 0x18c53c0)
// Original: hkResourceMap::~hkResourceMap
// ----------------------------------------------------------------------------
void hkResourceMap::Destroy_ea18c53c0(hkResourceMap::Self *self)
{
  int address;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20A8230);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkResourceMap::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    4);
}

// ----------------------------------------------------------------------------
// Function: hkResourceContainer::Destroy_ea18c5410  (binary VA: 0x18c5410)
// Original: hkResourceContainer::~hkResourceContainer
// ----------------------------------------------------------------------------
void hkResourceContainer::Destroy_ea18c5410(hkResourceContainer::Self *self)
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
// Function: hkResourceHandle::Destroy_ea18c5470  (binary VA: 0x18c5470)
// Original: hkResourceHandle::~hkResourceHandle
// ----------------------------------------------------------------------------
void hkResourceHandle::Destroy_ea18c5470(hkResourceHandle::Self *self)
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
// Function: hkResourceBase::Destroy_ea18c54d0  (binary VA: 0x18c54d0)
// Original: hkResourceBase::~hkResourceBase
// ----------------------------------------------------------------------------
void hkResourceBase::Destroy_ea18c54d0(hkResourceBase::Self *self)
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
// Function: hkMemoryResourceHandle::removeExternalLink  (binary VA: 0x18c5530)
// Original: hkMemoryResourceHandle::removeExternalLink
// ----------------------------------------------------------------------------
void hkMemoryResourceHandle::removeExternalLink(hkMemoryResourceHandle::Self *self, char *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  hkStringPtr::Self *v8;

  v2 = 0;
  if ( *((int *)self + 5) > 0 )
  {
    while ( 1 )
    {
      v3 = 8 * v2;
      if ( hkString::strCmp((hkString::Self *)(*(uint32_t *)(*((uint32_t *)self + 4) + 8 * v2) & 0xFFFFFFFE), a2) == 0 )
        break;
      if ( *((uint32_t *)self + 5) <= ++v2 )
        return;
    }
    v8 = (hkStringPtr::Self *)(v3 + *((uint32_t *)self + 4));
    hkStringPtr::Destroy((hkStringPtr::Self *)((char *)v8 + 4));
    hkStringPtr::Destroy(v8);
    v4 = *((uint32_t *)self + 5) - 1;
    *((uint32_t *)self + 5) = v4;
    if ( v4 != v2 )
    {
      v5 = *((uint32_t *)self + 4);
      v6 = (uint32_t *)(v5 + 8 * v4);
      v7 = (uint32_t *)(v3 + v5);
      *v7 = *v6;
      v7[1] = v6[1];
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::addExternalLink  (binary VA: 0x18c55d0)
// Original: hkMemoryResourceHandle::addExternalLink
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkMemoryResourceHandle::addExternalLink(hkMemoryResourceHandle::Self *self, hkString::Self *a2, hkString::Self *a3)
{
  int v3;
  hkStringPtr::Self *v4;
  int v5;
  int v6;
  int v7;
  hkStringPtr::Self *v9;
  int v10;

  v3 = *((uint32_t *)self + 5);
  if ( v3 == (*((uint32_t *)self + 6) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryResourceHandle::Self *)((char *)self + 16),
      8,
      v10);
    v3 = *((uint32_t *)self + 5);
  }
  v9 = (hkStringPtr::Self *)(*((uint32_t *)self + 4) + 8 * v3);
  v4 = (hkStringPtr::Self *)((char *)v9 + 4);
  hkStringPtr::Construct(v9);
  hkStringPtr::Construct(v4);
  v5 = *((uint32_t *)self + 5);
  v6 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = v5 + 1;
  v7 = v6 + 8 * v5;
  hkStringPtr::opAssign((hkStringPtr::Self *)v7, a2);
  return hkStringPtr::opAssign((hkStringPtr::Self *)(v7 + 4), a3);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::clearExternalLinks  (binary VA: 0x18c5680)
// Original: hkMemoryResourceHandle::clearExternalLinks
// ----------------------------------------------------------------------------
void hkMemoryResourceHandle::clearExternalLinks(hkMemoryResourceHandle::Self *self)
{
  int v1;
  hkStringPtr::Self *v2;
  hkStringPtr::Self *v3;

  v1 = *((uint32_t *)self + 5) - 1;
  v2 = (hkStringPtr::Self *)(*((uint32_t *)self + 4) + 8 * v1 + 4);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v3 = v2;
      v2 = (hkStringPtr::Self *)((char *)v2 - 8);
      hkStringPtr::Destroy((hkStringPtr::Self *)((char *)v3 - 4));
    }
    while ( v1 != -1 );
  }
  *((uint32_t *)self + 5) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::Destroy  (binary VA: 0x18c56f0)
// Original: hkMemoryResourceContainer::~hkMemoryResourceContainer
// ----------------------------------------------------------------------------
void hkMemoryResourceContainer::Destroy(hkMemoryResourceContainer::Self *self)
{
  hkMemoryResourceContainer::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int32_t v16; // kr04_4
  int32_t v17;
  int32_t v18; // ett
  int v19;
  int v20;
  int v21;

  v1 = self;
  v2 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8368);
  v3 = v2 - 1;
  v4 = *((uint32_t *)self + 7);
  if ( v3 >= 0 )
  {
    do
    {
      v5 = *(uint32_t *)(v4 + 4 * v3);
      if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
      {
        v20 = v3;
        do
        {
          v7 = *(uint32_t *)(v5 + 4);
          HIWORD(v6) = HIWORD(v7);
          LOWORD(v6) = 0;
          v8 = v6 | (uint16_t)(v7 - 1);
          v9 = v7;
        }
        while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
        v3 = v20;
        if ( (uint16_t)v8 == 0 )
          G4_VCALL<void>(v5, 16);
      }
      *(uint32_t *)(v4 + 4 * v3--) = 0;
    }
    while ( v3 != -1 );
    v1 = self;
  }
  v10 = *((uint32_t *)v1 + 9);
  *((uint32_t *)v1 + 8) = 0;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 7),
      4 * v10);
  v11 = *((uint32_t *)v1 + 5);
  *((uint32_t *)v1 + 7) = 0;
  v12 = v11 - 1;
  *((uint32_t *)v1 + 9) = 0x80000000;
  v13 = *((uint32_t *)v1 + 4);
  if ( v12 >= 0 )
  {
    do
    {
      v14 = *(uint32_t *)(v13 + 4 * v12);
      if ( v14 != 0 && *(uint16_t *)(v14 + 6) != 0 )
      {
        v21 = v12;
        do
        {
          v16 = *(uint32_t *)(v14 + 4);
          HIWORD(v15) = HIWORD(v16);
          LOWORD(v15) = 0;
          v17 = v15 | (uint16_t)(v16 - 1);
          v18 = v16;
        }
        while ( v18 != __sync_val_compare_and_swap((volatile int32_t *)(v14 + 4), v18, v17) );
        v12 = v21;
        if ( (uint16_t)v17 == 0 )
          G4_VCALL<void>(v14, 16);
      }
      *(uint32_t *)(v13 + 4 * v12--) = 0;
    }
    while ( v12 != -1 );
  }
  v19 = *((uint32_t *)v1 + 6);
  *((uint32_t *)v1 + 5) = 0;
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 4),
      4 * v19);
  *((uint32_t *)v1 + 4) = 0;
  *((uint32_t *)v1 + 6) = 0x80000000;
  hkStringPtr::Destroy((hkMemoryResourceContainer::Self *)((char *)v1 + 8));
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::Destroy_ea18c5880  (binary VA: 0x18c5880)
// Original: hkMemoryResourceContainer::~hkMemoryResourceContainer
// ----------------------------------------------------------------------------
void hkMemoryResourceContainer::Destroy_ea18c5880(hkMemoryResourceContainer::Self *self)
{
  int v1;
  int v2;

  hkMemoryResourceContainer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 40;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::Destroy  (binary VA: 0x18c58e0)
// Original: hkMemoryResourceHandle::~hkMemoryResourceHandle
// ----------------------------------------------------------------------------
void hkMemoryResourceHandle::Destroy(hkMemoryResourceHandle::Self *self)
{
  int v1;
  hkStringPtr::Self *v2;
  hkStringPtr::Self *v3;
  int v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8248);
  v1 = *((uint32_t *)self + 5) - 1;
  v2 = (hkStringPtr::Self *)(*((uint32_t *)self + 4) + 8 * v1 + 4);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v3 = v2;
      v2 = (hkStringPtr::Self *)((char *)v2 - 8);
      hkStringPtr::Destroy((hkStringPtr::Self *)((char *)v3 - 4));
    }
    while ( v1 != -1 );
  }
  v4 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      8 * v4);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  hkStringPtr::Destroy((hkMemoryResourceHandle::Self *)((char *)self + 12));
  v5 = *((uint32_t *)self + 2);
  if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v7 = *(uint32_t *)(v5 + 4);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      v8 = v6 | (uint16_t)(v7 - 1);
      v9 = v7;
    }
    while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
    if ( (uint16_t)v8 == 0 )
      G4_VCALL<void>(v5, 16);
  }
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::Destroy_ea18c59e0  (binary VA: 0x18c59e0)
// Original: hkMemoryResourceHandle::~hkMemoryResourceHandle
// ----------------------------------------------------------------------------
void hkMemoryResourceHandle::Destroy_ea18c59e0(hkMemoryResourceHandle::Self *self)
{
  int v1;
  int v2;

  hkMemoryResourceHandle::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::destroyContainer  (binary VA: 0x18c5a40)
// Original: hkMemoryResourceContainer::destroyContainer
// ----------------------------------------------------------------------------
void hkMemoryResourceContainer::destroyContainer(hkMemoryResourceContainer::Self *self, hkResourceContainer::Self *a2)
{
  hkMemoryResourceContainer::Self *v2;
  int v3;
  hkResourceContainer::Self **v4;
  int v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  int *v11;
  int v12;
  int v13;
  int32_t v14; // kr04_4
  int32_t v15;
  int32_t v16; // ett
  int v17;
  int v18;
  int32_t v19; // kr08_4
  hkMemoryResourceContainer::Self *thisa;

  v2 = self;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v19 = *((uint32_t *)a2 + 1);
      HIWORD(v18) = HIWORD(v19);
      LOWORD(v18) = 0;
    }
    while ( v19 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a2 + 1,
                     v19,
                     v18 | (uint16_t)(v19 + 1)) );
  }
  v3 = *((uint32_t *)self + 8);
  if ( v3 <= 0 )
  {
LABEL_8:
    v6 = -1;
    goto LABEL_9;
  }
  v4 = *((hkResourceContainer::Self ***)self + 7);
  if ( a2 != *v4 )
  {
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( a2 == v4[v5] )
      {
        v6 = v5;
        goto LABEL_9;
      }
    }
    goto LABEL_8;
  }
  v6 = 0;
LABEL_9:
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v8 = *((uint32_t *)a2 + 1);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9) );
    v2 = self;
    if ( (uint16_t)v9 == 0 )
      G4_VCALL<void>(a2, 16);
  }
  if ( v6 >= 0 )
  {
    v11 = (int *)(*((uint32_t *)v2 + 7) + 4 * v6);
    v12 = *v11;
    if ( *v11 != 0 && *(uint16_t *)(v12 + 6) != 0 )
    {
      thisa = v2;
      do
      {
        v14 = *(uint32_t *)(v12 + 4);
        HIWORD(v13) = HIWORD(v14);
        LOWORD(v13) = 0;
        v15 = v13 | (uint16_t)(v14 - 1);
        v16 = v14;
      }
      while ( v16 != __sync_val_compare_and_swap((volatile int32_t *)(v12 + 4), v16, v15) );
      v2 = thisa;
      if ( (uint16_t)v15 == 0 )
        G4_VCALL<void>(v12, 16);
    }
    *v11 = 0;
    v17 = *((uint32_t *)v2 + 8) - 1;
    *((uint32_t *)v2 + 8) = v17;
    if ( v6 != v17 )
      *(uint32_t *)(*((uint32_t *)v2 + 7) + 4 * v6) = *(uint32_t *)(*((uint32_t *)v2 + 7) + 4 * v17);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::destroyResource  (binary VA: 0x18c5ba0)
// Original: hkMemoryResourceContainer::destroyResource
// ----------------------------------------------------------------------------
void hkMemoryResourceContainer::destroyResource(hkMemoryResourceContainer::Self *self, hkResourceHandle::Self *a2)
{
  hkMemoryResourceContainer::Self *v2;
  int v3;
  hkResourceHandle::Self **v4;
  int v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int *v12;
  int v13;
  int v14;
  int32_t v15; // kr04_4
  int32_t v16;
  int32_t v17; // ett
  bool v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int i;
  int v26;
  int32_t v27; // kr08_4
  int v28;
  int v29;

  v2 = self;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v27 = *((uint32_t *)a2 + 1);
      HIWORD(v26) = HIWORD(v27);
      LOWORD(v26) = 0;
    }
    while ( v27 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a2 + 1,
                     v27,
                     v26 | (uint16_t)(v27 + 1)) );
  }
  v3 = *((uint32_t *)self + 5);
  if ( v3 <= 0 )
  {
LABEL_8:
    v6 = -1;
    goto LABEL_9;
  }
  v4 = *((hkResourceHandle::Self ***)self + 4);
  if ( a2 != *v4 )
  {
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( a2 == v4[v5] )
      {
        v6 = v5;
        goto LABEL_9;
      }
    }
    goto LABEL_8;
  }
  v6 = 0;
LABEL_9:
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v8 = *((uint32_t *)a2 + 1);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9) );
    v2 = self;
    if ( (uint16_t)v9 == 0 )
      G4_VCALL<void>(a2, 16);
  }
  if ( v6 >= 0 )
  {
    v11 = 4 * v6;
    v12 = (int *)(*((uint32_t *)v2 + 4) + 4 * v6);
    v13 = *v12;
    if ( *v12 != 0 && *(uint16_t *)(v13 + 6) != 0 )
    {
      v28 = v6;
      v29 = *((uint32_t *)v2 + 4) + 4 * v6;
      do
      {
        v15 = *(uint32_t *)(v13 + 4);
        HIWORD(v14) = HIWORD(v15);
        LOWORD(v14) = 0;
        v16 = v14 | (uint16_t)(v15 - 1);
        v17 = v15;
      }
      while ( v17 != __sync_val_compare_and_swap((volatile int32_t *)(v13 + 4), v17, v16) );
      v12 = (int *)v29;
      v18 = (uint16_t)v16 == 0;
      v6 = v28;
      if ( v18 )
      {
        G4_VCALL<void>(v13, 16);
        v12 = (int *)v29;
      }
    }
    *v12 = 0;
    v19 = *((uint32_t *)v2 + 4);
    v20 = *((uint32_t *)v2 + 5) - 1;
    *((uint32_t *)v2 + 5) = v20;
    v21 = 4 * (v20 - v6);
    v22 = v11 + 4;
    v23 = v19 + v11;
    v24 = v19 + v22;
    if ( v21 > 0 )
    {
      for ( i = 0; i < v21; i += 4 )
        *(uint32_t *)(v23 + i) = *(uint32_t *)(v24 + i);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::Construct  (binary VA: 0x18c5d30)
// Original: hkMemoryResourceHandle::hkMemoryResourceHandle
// ----------------------------------------------------------------------------
void hkMemoryResourceHandle::Construct(hkMemoryResourceHandle::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8248);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  hkStringPtr::Construct((hkMemoryResourceHandle::Self *)((char *)self + 12));
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::createResource  (binary VA: 0x18c5d90)
// Original: hkMemoryResourceContainer::createResource
// ----------------------------------------------------------------------------
int hkMemoryResourceContainer::createResource(hkMemoryResourceContainer::Self *self, const char *a2, void *a3, const hkClass::Self *a4)
{
  int address;
  int v5;
  int v6;
  int *v7;
  volatile int32_t *v8;
  int v9;
  int32_t v10; // kr00_4
  int32_t v11;
  int32_t v12; // ett
  int v13;
  int32_t v14; // kr04_4
  int32_t v15;
  int32_t v16; // ett
  int v18;
  int32_t v19; // kr08_4
  int v20;
  int32_t v21; // kr0C_4
  int v22;
  int *v23;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         28);
  hkMemoryResourceHandle::Construct((hkMemoryResourceHandle::Self *)v5);
  G4_VCALL<void>(v5, 28, a2);
  G4_VCALL<void>(v5, 40, a3, a4);
  if ( *(uint16_t *)(v5 + 6) == 0 )
  {
    v6 = *((uint32_t *)self + 5);
    if ( v6 != (*((uint32_t *)self + 6) & 0x3FFFFFFF) )
      goto LABEL_3;
    goto LABEL_18;
  }
  do
  {
    v21 = *(uint32_t *)(v5 + 4);
    HIWORD(v20) = HIWORD(v21);
    LOWORD(v20) = 0;
  }
  while ( v21 != __sync_val_compare_and_swap(
                   (volatile int32_t *)(v5 + 4),
                   v21,
                   v20 | (uint16_t)(v21 + 1)) );
  v6 = *((uint32_t *)self + 5);
  if ( v6 == (*((uint32_t *)self + 6) & 0x3FFFFFFF) )
  {
LABEL_18:
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryResourceContainer::Self *)((char *)self + 16),
      4,
      v22);
    v6 = *((uint32_t *)self + 5);
  }
LABEL_3:
  v7 = (int *)(*((uint32_t *)self + 4) + 4 * v6);
  if ( *(uint16_t *)(v5 + 6) != 0 )
  {
    v23 = v7;
    do
    {
      v19 = *(uint32_t *)(v5 + 4);
      HIWORD(v18) = HIWORD(v19);
      LOWORD(v18) = 0;
    }
    while ( v19 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v5 + 4),
                     v19,
                     v18 | (uint16_t)(v19 + 1)) );
    v7 = v23;
  }
  *v7 = v5;
  ++*((uint32_t *)self + 5);
  v8 = (volatile int32_t *)(v5 + 4);
  if ( *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v5 + 4);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      v11 = v9 | (uint16_t)(v10 - 1);
      v12 = v10;
    }
    while ( v12 != __sync_val_compare_and_swap(v8, v12, v11) );
    if ( (uint16_t)v11 == 0 )
      G4_VCALL<void>(v5, 16);
    if ( *(uint16_t *)(v5 + 6) != 0 )
    {
      do
      {
        v14 = *(uint32_t *)(v5 + 4);
        HIWORD(v13) = HIWORD(v14);
        LOWORD(v13) = 0;
        v15 = v13 | (uint16_t)(v14 - 1);
        v16 = v14;
      }
      while ( v16 != __sync_val_compare_and_swap(v8, v16, v15) );
      if ( (uint16_t)v15 == 0 )
        G4_VCALL<void>(v5, 16);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::Construct  (binary VA: 0x18c5f20)
// Original: hkMemoryResourceHandle::hkMemoryResourceHandle
// ----------------------------------------------------------------------------
void hkMemoryResourceHandle::Construct(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A8248);
  hkStringPtr::Construct();
}

// ----------------------------------------------------------------------------
// Function: hkResourceContainer::getPath  (binary VA: 0x18c5f60)
// Original: hkResourceContainer::getPath
// ----------------------------------------------------------------------------
int hkResourceContainer::getPath(hkResourceContainer::Self *self, hkStringBuf::Self *a2, char a3)
{
  hkResourceContainer::Self *v3;
  int v4;
  hkString::Self *v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
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
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  char *retaddr;

  v3 = (hkResourceContainer::Self *)G4_VCALL<int>(self, 44, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45);
  if ( v3 != nullptr )
    hkResourceContainer::getPath(v3, a2);
  retaddr = &a3;
  v4 = *(uint32_t *)self;
  a3 = 0;
  v5 = (hkString::Self *)(*(int (**)(hkResourceContainer::Self *, char **))(v4 + 24))(self, &retaddr);
  hkStringBuf::opAddAssign(a2, (hkString::Self *)"/");
  hkStringBuf::opAddAssign(a2, v5);
  return -2147483520;
}

// ----------------------------------------------------------------------------
// Function: hkResourceContainer::findAllResourceRecursively  (binary VA: 0x18c6020)
// Original: hkResourceContainer::findAllResourceRecursively
// ----------------------------------------------------------------------------
int hkResourceContainer::findAllResourceRecursively(int a1, hkMemoryAllocator::Self *a2)
{
  int i;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;

  for ( i = G4_VCALL<int>(a1, 60, 0, 0);
        ;
        i = G4_VCALL<int>(a1, 60, 0, v3) )
  {
    v3 = i;
    if ( i == 0 )
      break;
    hkResourceContainer::findAllResourceRecursively(i, a2);
  }
  v6 = 0;
  for ( result = G4_VCALL<int>(a1, 40, 0, 0);
        result != 0;
        result = G4_VCALL<int>(a1, 40, 0, 0) )
  {
    v5 = *((uint32_t *)a2 + 1);
    if ( v5 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
    {
      v7 = result;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v6);
      v5 = *((uint32_t *)a2 + 1);
      result = v7;
    }
    *(uint32_t *)(*(uint32_t *)a2 + 4 * v5) = result;
    ++*((uint32_t *)a2 + 1);
    v6 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkResourceContainer::tryToResolveLinks  (binary VA: 0x18c6110)
// Original: hkResourceContainer::tryToResolveLinks
// ----------------------------------------------------------------------------
int hkResourceContainer::tryToResolveLinks(hkResourceContainer::Self *self, hkResourceMap::Self *a2)
{
  int v2;
  int v3;
  int result;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);

  v2 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0x80000000;
  hkResourceContainer::findAllResourceRecursively((int)(uintptr_t)(self), (hkMemoryAllocator::Self *)&v5);
  if ( v6 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v5 + 4 * v2++);
      G4_VCALL<void>(v3, 60, a2);
    }
    while ( v6 > v2 );
  }
  result = v7;
  v6 = 0;
  if ( v7 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v5,
             4 * v7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkResourceContainer::findAllContainersRecursively  (binary VA: 0x18c61c0)
// Original: hkResourceContainer::findAllContainersRecursively
// ----------------------------------------------------------------------------
int hkResourceContainer::findAllContainersRecursively(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = *((uint32_t *)a2 + 1);
  if ( v2 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v5);
    v2 = *((uint32_t *)a2 + 1);
  }
  *(uint32_t *)(*(uint32_t *)a2 + 4 * v2) = a1;
  ++*((uint32_t *)a2 + 1);
  for ( result = G4_VCALL<int>(a1, 60, 0, 0);
        ;
        result = G4_VCALL<int>(a1, 60, 0, v4) )
  {
    v4 = result;
    if ( result == 0 )
      break;
    hkResourceContainer::findAllContainersRecursively(result, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::Construct  (binary VA: 0x18c6250)
// Original: hkMemoryResourceContainer::hkMemoryResourceContainer
// ----------------------------------------------------------------------------
void hkMemoryResourceContainer::Construct(hkMemoryResourceContainer::Self *self, hkString::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8368);
  *((uint32_t *)self + 1) = -65535;
  hkStringPtr::Construct((hkMemoryResourceContainer::Self *)((char *)self + 8), a2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::createContainer  (binary VA: 0x18c62d0)
// Original: hkMemoryResourceContainer::createContainer
// ----------------------------------------------------------------------------
int hkMemoryResourceContainer::createContainer(hkMemoryResourceContainer::Self *self, hkString::Self *a2)
{
  int result;
  int address;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int32_t v9; // kr00_4
  int32_t v10;
  int32_t v11; // ett
  int v12;
  int v13;
  int32_t v14; // kr04_4
  int32_t v15;
  int32_t v16; // ett
  int v17;
  int32_t v18; // kr08_4
  int v19;
  int32_t v20; // kr0C_4
  int v21;
  int *v22;

  result = G4_VCALL<int>(self, 60, a2, 0);
  if ( result == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v4 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           40);
    hkMemoryResourceContainer::Construct((hkMemoryResourceContainer::Self *)v4, a2);
    if ( v4 != 0 && *(uint16_t *)(v4 + 6) != 0 )
    {
      do
      {
        v20 = *(uint32_t *)(v4 + 4);
        HIWORD(v19) = HIWORD(v20);
        LOWORD(v19) = 0;
      }
      while ( v20 != __sync_val_compare_and_swap(
                       (volatile int32_t *)(v4 + 4),
                       v20,
                       v19 | (uint16_t)(v20 + 1)) );
    }
    v5 = *((uint32_t *)self + 8);
    if ( v5 == (*((uint32_t *)self + 9) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryResourceContainer::Self *)((char *)self + 28),
        4,
        v21);
      v5 = *((uint32_t *)self + 8);
    }
    v6 = (int *)(*((uint32_t *)self + 7) + 4 * v5);
    if ( v4 != 0 )
    {
      if ( *(uint16_t *)(v4 + 6) != 0 )
      {
        v22 = v6;
        do
        {
          v18 = *(uint32_t *)(v4 + 4);
          HIWORD(v17) = HIWORD(v18);
          LOWORD(v17) = 0;
        }
        while ( v18 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v4 + 4),
                         v18,
                         v17 | (uint16_t)(v18 + 1)) );
        v6 = v22;
      }
      *v6 = v4;
      ++*((uint32_t *)self + 8);
      v7 = v4;
      if ( *(uint16_t *)(v4 + 6) == 0 )
      {
        *(uint32_t *)(v4 + 12) = (uint32_t)(uintptr_t)(self);
        return v4;
      }
      do
      {
        v9 = *(uint32_t *)(v4 + 4);
        HIWORD(v8) = HIWORD(v9);
        LOWORD(v8) = 0;
        v10 = v8 | (uint16_t)(v9 - 1);
        v11 = v9;
      }
      while ( v11 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v11, v10) );
      if ( (uint16_t)v10 == 0 )
        G4_VCALL<void>(v4, 16);
      v12 = *(uint16_t *)(v4 + 6);
    }
    else
    {
      *v6 = 0;
      v7 = 0;
      ++*((uint32_t *)self + 8);
      v12 = (int)(uintptr_t)(loc_6);
    }
    *(uint32_t *)(v4 + 12) = (uint32_t)(uintptr_t)(self);
    if ( v12 == 0 )
      return v4;
    do
    {
      v14 = *(uint32_t *)(v4 + 4);
      HIWORD(v13) = HIWORD(v14);
      LOWORD(v13) = 0;
      v15 = v13 | (uint16_t)(v14 - 1);
      v16 = v14;
    }
    while ( v16 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v16, v15) );
    if ( (uint16_t)v15 == 0 )
    {
      (*(void (**)(int))(*(uint32_t *)v4 + 16))(v7);
      return v4;
    }
    else
    {
      return v4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::Construct  (binary VA: 0x18c64b0)
// Original: hkMemoryResourceContainer::hkMemoryResourceContainer
// ----------------------------------------------------------------------------
void hkMemoryResourceContainer::Construct(uint32_t *a1, int a2)
{
  int v2;
  int v3;

  *a1 = ((uint32_t)(uintptr_t)&off_20A8368);
  hkStringPtr::Construct();
  if ( a2 != 0 && (int)a1[8] > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(uint32_t *)(a1[7] + 4 * v2++);
      *(uint32_t *)(v3 + 12) = (uint32_t)(uintptr_t)(a1);
    }
    while ( a1[8] > v2 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkContainerResourceMap::Construct  (binary VA: 0x18c6520)
// Original: hkContainerResourceMap::hkContainerResourceMap
// ----------------------------------------------------------------------------
void hkContainerResourceMap::Construct(hkContainerResourceMap::Self *self, hkResourceContainer::Self *a2)
{
  int v2;
  unsigned int v3;
  hkString::Self *v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v8)) > _g4_s3 ? (16u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v9)) > _g4_s4 ? (20u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v10)) > _g4_s5 ? (24u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v11)) > _g4_s6 ? (28u + sizeof(_g4_t_v11)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20A83B8);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)self + 1);
  v5 = 0;
  v6 = 0;
  v7 = 0x80000000;
  v2 = 0;
  hkResourceContainer::findAllResourceRecursively((int)(uintptr_t)(a2), (hkMemoryAllocator::Self *)&v5);
  if ( v6 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v5 + 4 * v2);
      v8 = &v11;
      v10 = -2147483520;
      v9 = 1;
      v11 = 0;
      v4 = (hkString::Self *)G4_VCALL<int>(v3, 24, &v8);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
        (hkContainerResourceMap::Self *)((char *)self + 4),
        v4,
        v3);
      v9 = 0;
      if ( v10 >= 0 )
        (*(void (**)(uint32_t *, char *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v8,
          v10 & 0x3FFFFFFF);
      ++v2;
    }
    while ( v6 > v2 );
  }
  v6 = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v5,
      4 * v7);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceHandle::getExternalLinks  (binary VA: 0x18c6670)
// Original: hkMemoryResourceHandle::getExternalLinks
// ----------------------------------------------------------------------------
int hkMemoryResourceHandle::getExternalLinks(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  hkString::Self *v8;
  hkClass::Self *Class;
  hkClassMember::Self *MemberByName;
  int v11;
  const hkClassMember::Self *v12;
  hkString::Self *v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef hkString::Self **_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef hkClassMember::Self *_g4_t_v25;
  typedef hkString::Self *_g4_t_v26;
  typedef char _g4_t_v27[8];
  typedef int _g4_t_v28[3];
  typedef char _g4_t_v29[512];
  typedef uint32_t _g4_t_v30[134];
  enum : size_t {
    _g4_s0 = 1216u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v19)) > _g4_s3 ? (40u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v21)) > _g4_s5 ? (56u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v22)) > _g4_s6 ? (60u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v23)) > _g4_s7 ? (64u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v24)) > _g4_s8 ? (68u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v25)) > _g4_s9 ? (68u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v26)) > _g4_s10 ? (72u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v27)) > _g4_s11 ? (76u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v28)) > _g4_s12 ? (84u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v29)) > _g4_s13 ? (96u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (608u + sizeof(_g4_t_v30)) > _g4_s14 ? (608u + sizeof(_g4_t_v30)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 608u);

  v30[130] = (uint32_t)(uintptr_t)(&a1);
  v21 = a1;
  v2 = a1;
  v19 = a2;
  v3 = a2[2];
  a2[1] = 0;
  v4 = v3 & 0x3FFFFFFF;
  result = v2[5];
  if ( result > v4 )
  {
    v6 = 2 * v4;
    if ( v6 >= result )
      result = v6;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v27, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v19, result, 16);
    result = v21[5];
  }
  v22 = 0;
  if ( result > 0 )
  {
    do
    {
      v26 = (hkString::Self *)*v19;
      v7 = v19[1];
      v19[1] = v7 + 1;
      v20 = (hkString::Self **)((char *)v26 + 16 * v7);
      v23 = (char *)v21[2];
      v8 = (hkString::Self *)(*(uint32_t *)(v21[4] + 8 * v22) & 0xFFFFFFFE);
      Class = (hkClass::Self *)hkRefVariant::getClass((hkRefVariant::Self *)(v21 + 2));
      while ( 1 )
      {
        v11 = (int)(uintptr_t)(hkString::strChr(v8, (const char *)&word_2E, v16));
        if ( v11 == 0 )
          break;
        v24 = v11 - (uint32_t)(uintptr_t)(v8);
        hkString::memCpy((hkString::Self *)v29, v8, v11 - (uint32_t)(uintptr_t)(v8), v17);
        v8 = (hkString::Self *)((char *)v8 + v24 + 1);
        v29[v24] = 0;
        MemberByName = (hkClassMember::Self *)hkClass::getMemberByName(Class, v29);
        if ( MemberByName == nullptr )
          goto LABEL_15;
        if ( *((uint8_t *)MemberByName + 12) != 25 )
        {
          hkErrStream::Construct((hkErrStream::Self *)v28, (hkString::Self *)v30, 512);
          v15 = hkOstream::opShl((int)(uintptr_t)(v28), (hkString::Self *)"Member is not of type struct : ");
          hkOstream::opShl(v15, (hkString::Self *)v29);
          hkError::messageWarning(
            (hkError::Self *)0xF032EDFE,
            (int)(uintptr_t)(v30),
            "ResourceDatabase/hkResourceHandle.cpp",
            (const char *)&dword_80,
            v18);
          hkErrStream::Destroy((hkErrStream::Self *)v28);
          goto LABEL_15;
        }
        v25 = MemberByName;
        Class = (hkClass::Self *)hkClassMember::getClass(MemberByName);
        v23 += *((uint16_t *)v25 + 9);
      }
      v12 = (const hkClassMember::Self *)hkClass::getMemberByName(Class, (const char *)v8);
      if ( v12 != nullptr )
      {
        *v20 = v8;
        hkClassMemberAccessor::Construct((hkClassMemberAccessor::Self *)v30, v23, v12);
        v13 = (hkString::Self *)v30[1];
        v20[2] = (hkString::Self *)v30[0];
        v20[3] = v13;
        v20[1] = (hkString::Self *)(*(uint32_t *)(v21[4] + 8 * v22 + 4) & 0xFFFFFFFE);
        goto LABEL_13;
      }
LABEL_15:
      --v19[1];
      hkErrStream::Construct((hkErrStream::Self *)v28, (hkString::Self *)v30, 512);
      v14 = hkOstream::opShl((int)(uintptr_t)(v28), (hkString::Self *)"Cannot find member : ");
      hkOstream::opShl(v14, v8);
      hkError::messageWarning(
        (hkError::Self *)0xF032EDF1,
        (int)(uintptr_t)(v30),
        "ResourceDatabase/hkResourceHandle.cpp",
        &dword_90[2],
        v18);
      hkErrStream::Destroy((hkErrStream::Self *)v28);
LABEL_13:
      result = (int)(uintptr_t)(v21);
      ++v22;
    }
    while ( v21[5] > v22 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkResourceHandle::tryToResolveLinks  (binary VA: 0x18c69f0)
// Original: hkResourceHandle::tryToResolveLinks
// ----------------------------------------------------------------------------
int hkResourceHandle::tryToResolveLinks(hkResourceHandle::Self *self, hkResourceMap::Self *a2)
{
  int v2;
  hkString::Self *Name;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  hkClassMember::Self *ClassMember;
  const hkClass::Self *Class;
  int result;
  int savedregs;
  typedef hkResourceHandle::Self *_g4_t_v12;
  typedef hkClassMemberAccessor::Self *_g4_t_v13;
  typedef hkResourceMap::Self *_g4_t_v14;
  typedef hkClass::Self *_g4_t_v15;
  typedef hkClass::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef hkClass::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[3];
  typedef uint32_t _g4_t_v25[134];
  enum : size_t {
    _g4_s0 = 688u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (35u + sizeof(_g4_t_v19)) > _g4_s7 ? (35u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v20)) > _g4_s8 ? (36u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v21)) > _g4_s9 ? (52u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v22)) > _g4_s10 ? (56u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v23)) > _g4_s11 ? (60u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v24)) > _g4_s12 ? (72u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v25)) > _g4_s13 ? (84u + sizeof(_g4_t_v25)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 35u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);

  v25[130] = (uint32_t)(uintptr_t)(&self);
  v12 = self;
  v14 = a2;
  v21 = 0;
  v22 = 0;
  v2 = *(uint32_t *)self;
  v23 = 0x80000000;
  (*(void (**)(hkResourceHandle::Self *, int *))(v2 + 52))(self, &v21);
  v17 = v22 - 1;
  v18 = 16 * (v22 - 1);
  if ( v22 - 1 >= 0 )
  {
    do
    {
      v7 = v21 + v18;
      v8 = (**(int (***)(hkResourceMap::Self *, uint32_t, hkClass::Self **))v14)(v14, *(uint32_t *)(v21 + v18 + 4), &v20);
      if ( v8 != 0 )
      {
        v13 = (hkClassMemberAccessor::Self *)(v7 + 8);
        ClassMember = (hkClassMember::Self *)hkClassMemberAccessor::getClassMember((hkClassMemberAccessor::Self *)(v7 + 8));
        Class = (const hkClass::Self *)hkClassMember::getClass(ClassMember);
        v25[132] = (uint32_t)(uintptr_t)(v20);
        v16 = (hkClass::Self *)(Class);
        hkClass::isSuperClass((hkClass::Self *)&v19, Class);
        if ( v19 != 0 || v20 == v16 )
        {
          if ( v8 == G4_VCALL<int>(v12, 32) )
            break;
          *(uint32_t *)hkClassMemberAccessor::asPointer(v13, 0) = v8;
          G4_VCALL<void>(v12, 48, *(uint32_t *)ClassMember);
        }
        else
        {
          hkErrStream::Construct((hkErrStream::Self *)v24, (hkString::Self *)v25, 512);
          Name = (hkString::Self *)hkClass::getName(v16);
          v15 = (hkClass::Self *)hkClass::getName(v20);
          v4 = hkOstream::opShl((int)(uintptr_t)(v24), (hkString::Self *)"Class mismatch, cannot resolve link: ");
          v5 = hkOstream::opShl(v4, v15);
          v6 = hkOstream::opShl(v5, (hkString::Self *)" != ");
          hkOstream::opShl(v6, Name);
          hkError::messageWarning(
            (hkError::Self *)0xF034ED21,
            (int)(uintptr_t)(v25),
            "ResourceDatabase/hkResourceHandle.cpp",
            &dword_B0[2],
            savedregs);
          hkErrStream::Destroy((hkErrStream::Self *)v24);
        }
      }
      --v17;
      v18 -= 16;
    }
    while ( v17 != -1 );
  }
  result = v23;
  v22 = 0;
  if ( v23 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v21,
             16 * v23);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::findResourceByName  (binary VA: 0x18c6c90)
// Original: hkMemoryResourceContainer::findResourceByName
// ----------------------------------------------------------------------------
int hkMemoryResourceContainer::findResourceByName(hkMemoryResourceContainer::Self *self, hkClass::Self *a2, const hkClass::Self *a3, const hkResourceHandle::Self *a4)
{
  int v4;
  const hkResourceHandle::Self **v5;
  int v6;
  hkMemoryResourceContainer::Self *v7;
  hkClass::Self *v8;
  int v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef hkClass::Self *_g4_t_v16;
  typedef hkClass::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef hkString::Self *_g4_t_v19;
  typedef hkString::Self *_g4_t_Name;
  typedef hkClass::Self *_g4_t_v21;
  typedef hkClass::Self *_g4_t_v22;
  typedef uint8_t _g4_t_v23[5];
  typedef int _g4_t_v24[3];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[131];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_Name)) > _g4_s4 ? (12u + sizeof(_g4_t_Name)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v21)) > _g4_s5 ? (16u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v22)) > _g4_s6 ? (16u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (23u + sizeof(_g4_t_v23)) > _g4_s7 ? (23u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v24)) > _g4_s8 ? (28u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v25)) > _g4_s9 ? (40u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v26)) > _g4_s10 ? (44u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v27)) > _g4_s11 ? (48u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v28)) > _g4_s12 ? (52u + sizeof(_g4_t_v28)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_Name &Name = *reinterpret_cast<_g4_t_Name *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 23u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);

  v28[127] = (uint32_t)(uintptr_t)(&self);
  v21 = a2;
  v17 = (hkClass::Self *)(a3);
  if ( a4 != nullptr )
  {
    v4 = *((uint32_t *)self + 5);
    if ( v4 <= 0 )
      return 0;
    v5 = *((const hkResourceHandle::Self ***)self + 4);
    v6 = 1;
    if ( a4 != *v5 )
    {
      while ( v6 != v4 )
      {
        if ( a4 == v5[v6++] )
          goto LABEL_6;
      }
      return 0;
    }
  }
  else
  {
    v4 = *((uint32_t *)self + 5);
    v6 = 0;
  }
LABEL_6:
  if ( v6 >= v4 )
    return 0;
  v18 = v6;
  v19 = (hkString::Self *)(4 * v6);
  v7 = self;
  while ( 1 )
  {
    v9 = *(uint32_t *)((char *)v19 + *((uint32_t *)v7 + 4));
    if ( v21 != nullptr )
    {
      v27 = -2147483520;
      v25 = (int)(uintptr_t)(v28);
      v26 = 1;
      LOBYTE(v28[0]) = 0;
      v10 = (char *)G4_VCALL<int>(v9, 24, &v25);
      v11 = hkString::strCmp(v21, v10);
      v26 = 0;
      if ( v11 != 0 )
      {
        if ( v27 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
            (uint32_t *)(hkContainerTempAllocator::s_alloc),
            v25,
            v27 & 0x3FFFFFFF);
        goto LABEL_14;
      }
      if ( v27 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v25,
          v27 & 0x3FFFFFFF);
    }
    if ( v17 == nullptr )
      return v9;
    v8 = (hkClass::Self *)G4_VCALL<int>(v9, 36);
    if ( v17 == v8 )
      return v9;
    v16 = v8;
    hkClass::isSuperClass((hkClass::Self *)v23, v17, v8);
    if ( v23[0] != 0 )
      return v9;
    if ( v21 != nullptr )
    {
      hkErrStream::Construct((hkErrStream::Self *)v24, (hkString::Self *)&v25, 512);
      Name = (hkString::Self *)hkClass::getName(v16);
      v22 = (hkClass::Self *)hkClass::getName(v17);
      v12 = hkOstream::opShl((int)(uintptr_t)(v24), (hkString::Self *)"Class mismatch, cannot resolve link: ");
      v13 = hkOstream::opShl(v12, v22);
      v14 = hkOstream::opShl(v13, (hkString::Self *)" != ");
      hkOstream::opShl(v14, Name);
      hkError::messageWarning((hkError::Self *)0xF034ED22, (int)(uintptr_t)(&v25), "ResourceDatabase/hkResourceHandle.cpp", &stru_134[4]);
      hkErrStream::Destroy((hkErrStream::Self *)v24);
      return 0;
    }
LABEL_14:
    ++v18;
    v19 = (hkString::Self *)((char *)v19 + 4);
    if ( *((uint32_t *)v7 + 5) <= v18 )
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMemoryResourceContainer::parentTo  (binary VA: 0x18c6f70)
// Original: hkMemoryResourceContainer::parentTo
// ----------------------------------------------------------------------------
hkMemoryResourceContainer::Self * hkMemoryResourceContainer::parentTo(hkMemoryResourceContainer::Self *self, hkResourceContainer::Self *a2, hkResourceContainer::Self *a3)
{
  hkResourceContainer::Self *v3;
  hkResourceContainer::Self *v4;
  int v5;
  int v6;
  hkResourceContainer::Self **v7;
  int v8;
  int v9;
  int v10;
  int32_t v11; // kr00_4
  int32_t v12;
  int32_t v13; // ett
  int *v14;
  int v15;
  int v16;
  int32_t v17; // kr04_4
  int32_t v18;
  int32_t v19; // ett
  bool v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int i;
  int v27;
  hkResourceContainer::Self **v28;
  volatile int32_t *v29;
  int v30;
  int32_t v31; // kr08_4
  int32_t v32;
  int32_t v33; // ett
  int v34;
  int v35;
  int32_t v36; // kr0C_4
  int32_t v37;
  int32_t v38; // ett
  int v40;
  int v41;
  int v42;
  int v43;
  volatile int32_t *v44;
  int v45;
  int32_t v46; // kr10_4
  int v47;
  int32_t v48; // kr14_4
  int v49;
  int32_t v50; // kr18_4
  int v51;
  int32_t v52; // kr1C_4
  typedef char *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int *_g4_t_v60;
  typedef int _g4_t_v61[3];
  typedef uint8_t _g4_t_v62[540];
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (12u + sizeof(_g4_t_v53)) > _g4_s0 ? (12u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v54)) > _g4_s1 ? (28u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v55)) > _g4_s2 ? (28u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v56)) > _g4_s3 ? (28u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v57)) > _g4_s4 ? (32u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v58)) > _g4_s5 ? (36u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v59)) > _g4_s6 ? (40u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v60)) > _g4_s7 ? (44u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v61)) > _g4_s8 ? (52u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v62)) > _g4_s9 ? (64u + sizeof(_g4_t_v62)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);

  v3 = a2;
  if ( a3 != nullptr )
  {
    v4 = a3;
    if ( a3 == a2 )
    {
LABEL_39:
      hkErrStream::Construct((hkErrStream::Self *)v61, (hkString::Self *)v62, 512);
      v40 = hkOstream::opShl((int)(uintptr_t)(v61), (hkString::Self *)"Cannot parent '");
      v41 = hkOstream::opShl(v40, (hkResourceContainer::Self *)((char *)a2 + 8));
      v42 = hkOstream::opShl(v41, (hkString::Self *)"' to '");
      v43 = hkOstream::opShl(v42, (hkResourceContainer::Self *)((char *)a3 + 8));
      hkOstream::opShl(v43, (hkString::Self *)"' as this would create a circular dependency ");
      hkError::messageWarning(
        (hkError::Self *)0xABBA4554,
        (int)(uintptr_t)(v62),
        "ResourceDatabase/hkResourceHandle.cpp",
        (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_value);
      hkErrStream::Destroy((hkErrStream::Self *)v61);
      *(uint32_t *)self = 1;
      return self;
    }
    while ( 1 )
    {
      v4 = (hkResourceContainer::Self *)G4_VCALL<int>(v4, 44);
      if ( v4 == nullptr )
        break;
      if ( v4 == a2 )
        goto LABEL_39;
    }
  }
  v57 = *((uint16_t *)a2 + 3);
  if ( *((uint16_t *)a2 + 3) == 0 )
    goto LABEL_7;
  v44 = (volatile int32_t *)((char *)a2 + 4);
  do
  {
    v46 = *((uint32_t *)a2 + 1);
    HIWORD(v45) = HIWORD(v46);
    LOWORD(v45) = 0;
  }
  while ( v46 != __sync_val_compare_and_swap(v44, v46, v45 | (uint16_t)(v46 + 1)) );
  v57 = *((uint16_t *)a2 + 3);
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v48 = *((uint32_t *)a2 + 1);
      HIWORD(v47) = HIWORD(v48);
      LOWORD(v47) = 0;
    }
    while ( v48 != __sync_val_compare_and_swap(v44, v48, v47 | (uint16_t)(v48 + 1)) );
    v57 = *((uint16_t *)a2 + 3);
    v5 = *((uint32_t *)a2 + 3);
    v54 = v5;
    v6 = *(uint32_t *)(v5 + 32);
    if ( v6 <= 0 )
      goto LABEL_12;
  }
  else
  {
LABEL_7:
    v5 = *((uint32_t *)a2 + 3);
    v54 = v5;
    v6 = *(uint32_t *)(v5 + 32);
    if ( v6 <= 0 )
      goto LABEL_12;
  }
  v7 = *(hkResourceContainer::Self ***)(v5 + 28);
  if ( a2 == *v7 )
  {
    v59 = 4;
    v9 = 0;
    v58 = 0;
    goto LABEL_13;
  }
  v8 = 0;
  while ( ++v8 != v6 )
  {
    v9 = 4 * v8;
    if ( a2 == v7[v8] )
    {
      v58 = v8;
      v59 = 4 * v8 + 4;
      goto LABEL_13;
    }
  }
LABEL_12:
  v59 = 0;
  v9 = -4;
  v58 = -1;
LABEL_13:
  if ( v57 != 0 )
  {
    do
    {
      v11 = *((uint32_t *)a2 + 1);
      HIWORD(v10) = HIWORD(v11);
      LOWORD(v10) = 0;
      v12 = v10 | (uint16_t)(v11 - 1);
      v13 = v11;
    }
    while ( v13 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v13, v12) );
    if ( (uint16_t)v12 == 0 )
      G4_VCALL<void>(a2, 16);
    v54 = *((uint32_t *)a2 + 3);
  }
  v14 = (int *)(*(uint32_t *)(v54 + 28) + v9);
  v15 = *v14;
  if ( *v14 != 0 && *(uint16_t *)(v15 + 6) != 0 )
  {
    v60 = (int *)(*(uint32_t *)(v54 + 28) + v9);
    do
    {
      v17 = *(uint32_t *)(v15 + 4);
      HIWORD(v16) = HIWORD(v17);
      LOWORD(v16) = 0;
      v18 = v16 | (uint16_t)(v17 - 1);
      v19 = v17;
    }
    while ( v19 != __sync_val_compare_and_swap((volatile int32_t *)(v15 + 4), v19, v18) );
    v3 = a2;
    v20 = (uint16_t)v18 == 0;
    v14 = v60;
    if ( v20 )
    {
      G4_VCALL<void>(v15, 16);
      v14 = v60;
    }
  }
  v21 = v54;
  *v14 = 0;
  v55 = *(uint32_t *)(v54 + 32);
  *(uint32_t *)(v21 + 32) = v55 - 1;
  v22 = 4 * (v55 - 1 - v58);
  v23 = *(uint32_t *)(v21 + 28);
  v24 = v23 + v59;
  v25 = v23 + v9;
  for ( i = 0; v22 > i; i += 4 )
    *(uint32_t *)(v25 + i) = *(uint32_t *)(v24 + i);
  if ( *((uint16_t *)v3 + 3) != 0 )
  {
    do
    {
      v52 = *((uint32_t *)v3 + 1);
      HIWORD(v51) = HIWORD(v52);
      LOWORD(v51) = 0;
    }
    while ( v52 != __sync_val_compare_and_swap(
                     (volatile int32_t *)v3 + 1,
                     v52,
                     v51 | (uint16_t)(v52 + 1)) );
  }
  v27 = *((uint32_t *)a3 + 8);
  if ( v27 == (*((uint32_t *)a3 + 9) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkResourceContainer::Self *)((char *)a3 + 28),
      4,
      (int)(uintptr_t)(v53));
    v27 = *((uint32_t *)a3 + 8);
  }
  v28 = (hkResourceContainer::Self **)(*((uint32_t *)a3 + 7) + 4 * v27);
  if ( *((uint16_t *)v3 + 3) != 0 )
  {
    v56 = (int)(uintptr_t)(v28);
    do
    {
      v50 = *((uint32_t *)v3 + 1);
      HIWORD(v49) = HIWORD(v50);
      LOWORD(v49) = 0;
    }
    while ( v50 != __sync_val_compare_and_swap(
                     (volatile int32_t *)v3 + 1,
                     v50,
                     v49 | (uint16_t)(v50 + 1)) );
    v28 = (hkResourceContainer::Self **)v56;
  }
  *v28 = v3;
  ++*((uint32_t *)a3 + 8);
  v29 = (volatile int32_t *)((char *)v3 + 4);
  if ( *((uint16_t *)v3 + 3) != 0 )
  {
    do
    {
      v31 = *((uint32_t *)v3 + 1);
      HIWORD(v30) = HIWORD(v31);
      LOWORD(v30) = 0;
      v32 = v30 | (uint16_t)(v31 - 1);
      v33 = v31;
    }
    while ( v33 != __sync_val_compare_and_swap(v29, v33, v32) );
    if ( (uint16_t)v32 == 0 )
      G4_VCALL<void>(v3, 16);
    v34 = *((uint16_t *)v3 + 3);
    *((uint32_t *)v3 + 3) = (uint32_t)(uintptr_t)(a3);
    if ( v34 != 0 )
    {
      do
      {
        v36 = *((uint32_t *)v3 + 1);
        HIWORD(v35) = HIWORD(v36);
        LOWORD(v35) = 0;
        v37 = v35 | (uint16_t)(v36 - 1);
        v38 = v36;
      }
      while ( v38 != __sync_val_compare_and_swap(v29, v38, v37) );
      if ( (uint16_t)v37 == 0 )
        G4_VCALL<void>(v3, 16);
    }
  }
  else
  {
    *((uint32_t *)v3 + 3) = (uint32_t)(uintptr_t)(a3);
  }
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::Construct  (binary VA: 0x18c73d0)
// Original: hkXmlStreamParser::hkXmlStreamParser
// ----------------------------------------------------------------------------
void hkXmlStreamParser::Construct(hkXmlStreamParser::Self *self, hkStreamReader::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6838);
  *((uint32_t *)self + 1) = -65535;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)self + 2);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0x80000000;
  hkXmlLexAnalyzer::Construct((hkXmlStreamParser::Self *)((char *)self + 48), a2);
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0x80000000;
  *((uint32_t *)self + 29) = 6;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::pushLexeme  (binary VA: 0x18c7470)
// Original: hkXmlStreamParser::_pushLexeme
// ----------------------------------------------------------------------------
int hkXmlStreamParser::pushLexeme(hkXmlStreamParser::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int result;
  int v5;

  v1 = *((uint32_t *)self + 27);
  if ( v1 == (*((uint32_t *)self + 28) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkXmlStreamParser::Self *)((char *)self + 104),
      8,
      v5);
    v1 = *((uint32_t *)self + 27);
  }
  v2 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 27) = v1 + 1;
  v3 = (uint32_t *)(v2 + 8 * v1);
  *v3 = *((uint32_t *)self + 17) - *((uint32_t *)self + 16);
  result = *((uint32_t *)self + 18) - *((uint32_t *)self + 19) - *((uint32_t *)self + 16);
  v3[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::extractAttributes  (binary VA: 0x18c74f0)
// Original: hkXmlStreamParser::_extractAttributes
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkXmlStreamParser::extractAttributes(hkXmlStreamParser::Self *self)
{
  hkXmlStreamParser::Self *v1;
  hkArrayUtil::Self *result;
  unsigned int v3;
  int v4;
  unsigned int v5;
  __m128 *v6;
  unsigned int v7;
  __m128i v8;
  __m128i v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  bool v14; // cc
  hkString::Self *v15;
  uint32_t *v16;
  char *v17;
  int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *_g4_t_v21;
  typedef hkArrayUtil::Self *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v23)) > _g4_s4 ? (24u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v24)) > _g4_s5 ? (24u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v25)) > _g4_s6 ? (28u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v26)) > _g4_s7 ? (28u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v27)) > _g4_s8 ? (28u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v28)) > _g4_s9 ? (32u + sizeof(_g4_t_v28)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);

  v28[3] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  v21 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((hkXmlStreamParser::Self *)((char *)self + 8));
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::clear((hkXmlStreamParser::Self *)((char *)self + 8));
  result = *((hkArrayUtil::Self **)v1 + 27);
  *((uint32_t *)v1 + 7) = 0;
  v22 = result;
  if ( (int)(uintptr_t)(result) <= 1 )
  {
    *((uint32_t *)v1 + 10) = 0;
    return result;
  }
  v3 = (unsigned int)(uintptr_t)(result) - 2;
  v4 = *((uint32_t *)v1 + 26);
  v20 = (v3 >> 1) + 1;
  v5 = v3 >> 3;
  v25 = 4 * (v3 >> 3);
  if ( v25 != 0 && (v3 >> 1) + 1 > 7 )
  {
    v6 = (__m128 *)(v4 + 8);
    v7 = 0;
g4_m128_raw(v8) = 0;
    do
    {
      ++v7;
      v8 = _mm_add_epi32(
             v8,
             _mm_add_epi32(
               _mm_sub_epi32(
                 g4_m128_from<__m128i>(_mm_shuffle_ps(_mm_shuffle_ps(*v6, v6[1], 221), _mm_shuffle_ps(v6[2], v6[3], 221), 136)),
                 g4_m128_from<__m128i>(_mm_shuffle_ps(_mm_shuffle_ps(*v6, v6[1], 136), _mm_shuffle_ps(v6[2], v6[3], 136), 136))),
               G4_BITCAST<__m128i>(xmmword_1C7C740)));
      v6 += 4;
    }
    while ( v7 < v5 );
    v9 = _mm_add_epi32(v8, _mm_srli_si128(v8, 8));
    v10 = v20 == v25;
    v26 = v25 + v25 + 1;
    v11 = _mm_cvtsi128_si32(_mm_add_epi32(v9, _mm_srli_si128(v9, 4)));
    if ( v10 )
      goto LABEL_16;
  }
  else
  {
    v26 = 1;
    v11 = 0;
  }
  v11 += *(uint32_t *)(v4 + 8 * v26 + 4) - *(uint32_t *)(v4 + 8 * v26) + 1;
  if ( v26 + 2 < (int)(uintptr_t)(v22) )
  {
    v11 += *(uint32_t *)(v4 + 8 * (v26 + 2) + 4) - *(uint32_t *)(v4 + 8 * (v26 + 2)) + 1;
    if ( (int)(uintptr_t)(v22) > v26 + 4 )
    {
      v11 += *(uint32_t *)(v4 + 8 * (v26 + 4) + 4) - *(uint32_t *)(v4 + 8 * (v26 + 4)) + 1;
      if ( (int)(uintptr_t)(v22) > v26 + 6 )
      {
        v11 += *(uint32_t *)(v4 + 8 * (v26 + 6) + 4) - *(uint32_t *)(v4 + 8 * (v26 + 6)) + 1;
        if ( (int)(uintptr_t)(v22) > v26 + 8 )
        {
          v11 += *(uint32_t *)(v4 + 8 * (v26 + 8) + 4) - *(uint32_t *)(v4 + 8 * (v26 + 8)) + 1;
          if ( (int)(uintptr_t)(v22) > v26 + 10 )
          {
            v11 += *(uint32_t *)(v4 + 8 * (v26 + 10) + 4) - *(uint32_t *)(v4 + 8 * (v26 + 10)) + 1;
            if ( (int)(uintptr_t)(v22) > v26 + 12 )
              v11 += *(uint32_t *)(v4 + 8 * (v26 + 12) + 4) - *(uint32_t *)(v4 + 8 * (v26 + 12)) + 1;
          }
        }
      }
    }
  }
LABEL_16:
  v12 = *((uint32_t *)v1 + 11) & 0x3FFFFFFF;
  if ( v12 >= v11 )
  {
    *((uint32_t *)v1 + 10) = v11;
    v15 = *((hkString::Self **)v1 + 9);
LABEL_21:
    v27 = 1;
    while ( 1 )
    {
      v16 = (uint32_t *)(v4 + 8 * v27);
      v24 = (char *)(v16[1] - *v16);
      hkString::strNcpy(v15, (char *)(*v16 + *((uint32_t *)v1 + 16) + *((uint32_t *)v1 + 19)), v24);
      v17 = v24;
      v24[(uint32_t)(uintptr_t)(v15)] = 0;
      v18 = *((uint32_t *)v1 + 7);
      if ( v18 == (*((uint32_t *)v1 + 8) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkXmlStreamParser::Self *)((char *)v1 + 24),
          4,
          v19);
        v18 = *((uint32_t *)v1 + 7);
        v17 = v24;
      }
      v23 = v17;
      *(uint32_t *)(*((uint32_t *)v1 + 6) + 4 * v18) = (uint32_t)(uintptr_t)(v15);
      ++*((uint32_t *)v1 + 7);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v21, v15, v27 + 1);
      v27 += 2;
      result = (hkArrayUtil::Self *)v27;
      v15 = (hkString::Self *)((char *)v15 + (uint32_t)(uintptr_t)(v23) + 1);
      if ( *((uint32_t *)v1 + 27) <= v27 )
        break;
      v4 = *((uint32_t *)v1 + 26);
    }
    return result;
  }
  v13 = 2 * v12;
  if ( v13 < v11 )
    v13 = v11;
  result = hkArrayUtil::reserve(
             (hkArrayUtil::Self *)v28,
             (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
             (int *)v1 + 9,
             v13,
             1);
  v14 = *((uint32_t *)v1 + 27) <= 1;
  *((uint32_t *)v1 + 10) = v11;
  v15 = *((hkString::Self **)v1 + 9);
  if ( !v14 )
  {
    v4 = *((uint32_t *)v1 + 26);
    goto LABEL_21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::parseBlock  (binary VA: 0x18c77e0)
// Original: hkXmlStreamParser::_parseBlock
// ----------------------------------------------------------------------------
int hkXmlStreamParser::parseBlock(hkXmlStreamParser::Self *self)
{
  hkXmlLexAnalyzer::Self *v1;
  int v2;
  int result;
  int v4;
  int v5;
  int v6;

  v1 = (hkXmlLexAnalyzer::Self *)((hkXmlStreamParser::Self *)((char *)self + 48));
  v2 = hkXmlLexAnalyzer::advance((hkXmlStreamParser::Self *)((char *)self + 48));
  if ( v2 == 11 )
  {
    if ( hkXmlLexAnalyzer::advance(v1) != 8 )
      return 6;
    hkXmlStreamParser::pushLexeme(self);
    v5 = hkXmlLexAnalyzer::advance(v1);
    result = 3;
    if ( v5 != 6 )
      return 6;
  }
  else
  {
    if ( v2 != 8 )
      return 6;
    while ( 1 )
    {
      hkXmlStreamParser::pushLexeme(self);
      v4 = hkXmlLexAnalyzer::advance(v1);
      if ( v4 != 8 )
        break;
      hkXmlStreamParser::pushLexeme(self);
      if ( hkXmlLexAnalyzer::advance(v1) != 9 || hkXmlLexAnalyzer::advance(v1) != 10 )
        return 6;
    }
    if ( v4 == 11 )
    {
      v6 = hkXmlLexAnalyzer::advance(v1);
      hkXmlStreamParser::extractAttributes(self);
      if ( v6 != 6 )
        return 6;
      return 2;
    }
    else
    {
      if ( v4 != 6 )
        return 6;
      hkXmlStreamParser::extractAttributes(self);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::parseQBlock  (binary VA: 0x18c78e0)
// Original: hkXmlStreamParser::_parseQBlock
// ----------------------------------------------------------------------------
int hkXmlStreamParser::parseQBlock(hkXmlStreamParser::Self *self)
{
  hkXmlLexAnalyzer::Self *v1;
  int v3;

  v1 = (hkXmlLexAnalyzer::Self *)((hkXmlStreamParser::Self *)((char *)self + 48));
  if ( hkXmlLexAnalyzer::advance((hkXmlStreamParser::Self *)((char *)self + 48)) != 8 )
    return 6;
  while ( 1 )
  {
    hkXmlStreamParser::pushLexeme(self);
    v3 = hkXmlLexAnalyzer::advance(v1);
    if ( v3 == 7 )
      break;
    if ( v3 == 8 )
    {
      hkXmlStreamParser::pushLexeme(self);
      if ( hkXmlLexAnalyzer::advance(v1) == 9 && hkXmlLexAnalyzer::advance(v1) == 10 )
        continue;
    }
    return 6;
  }
  hkXmlStreamParser::extractAttributes(self);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::advance  (binary VA: 0x18c7970)
// Original: hkXmlStreamParser::_advance
// ----------------------------------------------------------------------------
int hkXmlStreamParser::advance(hkXmlStreamParser::Self *self)
{
  int result;

  *((uint32_t *)self + 7) = 0;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::clear((hkXmlStreamParser::Self *)((char *)self + 8));
  hkParserBuffer::bufferCommit((hkParserBuffer::Self *)((hkXmlStreamParser::Self *)((char *)self + 56)));
  *((uint32_t *)self + 27) = 0;
  while ( 2 )
  {
    switch ( hkXmlLexAnalyzer::advance((hkXmlStreamParser::Self *)((char *)self + 48)) )
    {
      case 0:
        result = hkXmlStreamParser::parseBlock(self);
        break;
      case 1:
        result = hkXmlStreamParser::parseQBlock(self);
        break;
      case 2:
        result = 4;
        break;
      case 3:
        result = 5;
        break;
      case 4:
        continue;
      case 5:
        result = 7;
        break;
      default:
        result = 6;
        break;
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::advance_ea18c7a30  (binary VA: 0x18c7a30)
// Original: hkXmlStreamParser::advance
// ----------------------------------------------------------------------------
int hkXmlStreamParser::advance_ea18c7a30(hkXmlStreamParser::Self *self)
{
  int result;

  result = hkXmlStreamParser::advance(self);
  *((uint32_t *)self + 29) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::getValue  (binary VA: 0x18c7a60)
// Original: hkXmlStreamParser::getValue
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::getValue(hkXmlStreamParser::Self *self, const char *a2, hkSubString::Self *a3, uint32_t *a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  int v7;

  v4 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
         (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a2 + 8),
         a3,
         -1);
  if ( v4 < 0 )
  {
    *(uint32_t *)self = 1;
  }
  else
  {
    v5 = (uint32_t *)(*((uint32_t *)a2 + 26) + 8 * v4);
    v6 = *((uint32_t *)a2 + 16) + *((uint32_t *)a2 + 19);
    v7 = v6 + v5[1];
    *a4 = *v5 + v6;
    *(uint32_t *)self = 0;
    a4[1] = v7;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::getBlockName  (binary VA: 0x18c7ae0)
// Original: hkXmlStreamParser::getBlockName
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::getBlockName(hkXmlStreamParser::Self *self, uint32_t *a2)
{
  hkXmlStreamParser::Self *result;
  uint32_t *v3;
  int v4;
  int v5;

  result = self;
  if ( (int)a2[27] <= 0 )
  {
    *((uint32_t *)self + 1) = 0;
    *(uint32_t *)self = 0;
  }
  else
  {
    v3 = (uint32_t *)a2[26];
    v4 = a2[16] + a2[19];
    v5 = v4 + v3[1];
    *(uint32_t *)self = *v3 + v4;
    *((uint32_t *)self + 1) = v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::getLexeme  (binary VA: 0x18c7b20)
// Original: hkXmlStreamParser::getLexeme
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::getLexeme(hkXmlStreamParser::Self *self, uint32_t *a2)
{
  int v3;

  v3 = a2[17] + a2[19];
  *((uint32_t *)self + 1) = a2[18];
  *(uint32_t *)self = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::dumpParse  (binary VA: 0x18c7b40)
// Original: hkXmlStreamParser::dumpParse
// ----------------------------------------------------------------------------
char * hkXmlStreamParser::dumpParse(hkXmlStreamParser::Self *self, hkOstream::Self *a2)
{
  char *result;
  hkOstream::Self *v4;
  int v5;
  hkXmlStreamParser::Self *v6;
  int v7;
  int v8;
  int v9;
  hkXmlStreamParser::Self *v10;
  int v11;
  int v12;
  int v13;
  typedef int _g4_t_v14;
  typedef hkString::Self *_g4_t_v15;
  typedef hkString::Self *_g4_t_v16;
  typedef uint8_t _g4_t_v17[12];
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v15)) > _g4_s1 ? (20u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v18)) > _g4_s4 ? (40u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v19)) > _g4_s5 ? (44u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  while ( 1 )
  {
    v14 = hkXmlStreamParser::advance(self);
    result = (char *)dword_20B9FF4 + (uint32_t)jpt_18C7B89[v14];
    switch ( v14 )
    {
      case 0:
        hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"<?");
        hkXmlStreamParser::getBlockName((hkXmlStreamParser::Self *)&v18, (uint32_t *)(self));
        opShl(a2, (const hkSubString::Self *)&v18);
        if ( *((int *)self + 7) > 0 )
        {
          v10 = self;
          v11 = 0;
          do
          {
            v16 = *(hkString::Self **)(*((uint32_t *)v10 + 6) + 4 * v11++);
            v12 = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)" ");
            v13 = hkOstream::opShl(v12, v16);
            hkOstream::opShl(v13, (hkString::Self *)"=");
            v18 = 0;
            v19 = 0;
            hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)v17, (const char *)v10, (hkSubString::Self *)(v16), &v18);
            opShl(a2, (const hkSubString::Self *)&v18);
          }
          while ( v11 < *((uint32_t *)v10 + 7) );
          self = v10;
        }
        hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"?>\n");
        break;
      case 1:
      case 2:
        hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"<");
        hkXmlStreamParser::getBlockName((hkXmlStreamParser::Self *)&v18, (uint32_t *)(self));
        opShl(a2, (const hkSubString::Self *)&v18);
        if ( *((int *)self + 7) > 0 )
        {
          v6 = self;
          v7 = 0;
          do
          {
            v15 = *(hkString::Self **)(*((uint32_t *)v6 + 6) + 4 * v7++);
            v8 = hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)" ");
            v9 = hkOstream::opShl(v8, v15);
            hkOstream::opShl(v9, (hkString::Self *)"=");
            v18 = 0;
            v19 = 0;
            hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)v17, (const char *)v6, (hkSubString::Self *)(v15), &v18);
            opShl(a2, (const hkSubString::Self *)&v18);
          }
          while ( v7 < *((uint32_t *)v6 + 7) );
          self = v6;
        }
        if ( v14 == 2 )
          hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"/");
        hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)">\n");
        break;
      case 3:
        hkXmlStreamParser::getBlockName((hkXmlStreamParser::Self *)&v18, (uint32_t *)(self));
        v4 = (hkOstream::Self *)hkOstream::opShl((int)(uintptr_t)(a2), (hkString::Self *)"</");
        v5 = opShl(v4, (const hkSubString::Self *)&v18);
        hkOstream::opShl(v5, (hkString::Self *)">\n");
        break;
      case 4:
      case 5:
        hkXmlStreamParser::getLexeme((hkXmlStreamParser::Self *)&v18, (uint32_t *)(self));
        opShl(a2, (const hkSubString::Self *)&v18);
        break;
      case 6:
      case 7:
        return result;
      default:
        continue;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::parseInt  (binary VA: 0x18c7e60)
// Original: hkXmlStreamParser::parseInt
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::parseInt(hkXmlStreamParser::Self *self, const hkSubString::Self *a2, int64_t *a3)
{
  unsigned int v3;
  char *v4;
  int v5;
  char *v6;
  uint8_t *v7;
  int64_t v8; // rax
  uint8_t v10[60];

  v3 = *((uint32_t *)a2 + 1);
  v4 = *(char **)a2;
  v5 = v3 - *(uint32_t *)a2;
  if ( v5 <= 0 )
    goto LABEL_10;
  v6 = &v4[*v4 == 45];
  if ( (unsigned int)(uintptr_t)(v6) >= v3 || (uint8_t)(*v6 - 48) > 9u )
    goto LABEL_10;
  v7 = (uint8_t *)(v6 + 1);
  if ( (unsigned int)(uintptr_t)(v6 + 1) >= v3 )
  {
LABEL_9:
    hkString::strNcpy((hkString::Self *)v10, v4, (char *)(*((uint32_t *)a2 + 1) - *(uint32_t *)a2));
    v10[v5] = 0;
    v8 = hkString::atoll((hkString::Self *)v10, nullptr);
    *(uint32_t *)self = 0;
    *a3 = v8;
    return self;
  }
  if ( (uint8_t)(v6[1] - 48) <= 9u )
  {
    while ( ++v7 != (uint8_t *)v3 )
    {
      if ( (uint8_t)(*v7 - 48) > 9u )
        goto LABEL_10;
    }
    goto LABEL_9;
  }
LABEL_10:
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::parseInt  (binary VA: 0x18c7f30)
// Original: hkXmlStreamParser::parseInt
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::parseInt(hkXmlStreamParser::Self *self, const hkSubString::Self *a2, int *a3, uint64_t *a4)
{
  unsigned int v4;
  char *v5;
  char v6;
  char *v7;
  char *v8;
  uint64_t v9; // rax
  uint8_t *v11;
  typedef char *_g4_t_v12;
  typedef uint8_t _g4_t_v13[60];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  *a3 = 1;
  v4 = *((uint32_t *)a2 + 1);
  v5 = *(char **)a2;
  if ( (int)(v4 - *(uint32_t *)a2) > 0 )
  {
    if ( *v5 == 45 )
    {
      ++v5;
      *a3 = -1;
    }
    if ( (unsigned int)(uintptr_t)(v5) < v4 )
    {
      v6 = *v5;
      v7 = (char *)(v4 - (uint32_t)(uintptr_t)(v5));
      if ( (int)(v4 - (uint32_t)(uintptr_t)(v5)) > 2 && v6 == 48 )
      {
        if ( (v5[1] & 0xDF) != 0x58 )
        {
LABEL_8:
          v8 = v5;
          while ( ++v8 != (char *)v4 )
          {
            if ( (uint8_t)(*v8 - 48) > 9u )
              goto LABEL_18;
          }
          goto LABEL_11;
        }
        v11 = (uint8_t *)(v5 + 2);
        if ( (unsigned int)(uintptr_t)(v5 + 2) >= v4 )
        {
LABEL_11:
          hkString::strNcpy((hkString::Self *)v13, v5, v7);
          v13[(uint32_t)(uintptr_t)(v7)] = 0;
          v9 = hkString::atoull((hkString::Self *)v13, nullptr);
          *(uint32_t *)self = 0;
          *a4 = v9;
          return self;
        }
        v12 = v5;
        while ( (uint8_t)(*v11 - 48) <= 9u || (uint8_t)((*v11 & 0xDF) - 65) <= 5u )
        {
          if ( ++v11 == (uint8_t *)v4 )
          {
            v5 = v12;
            goto LABEL_11;
          }
        }
      }
      else if ( (uint8_t)(v6 - 48) <= 9u )
      {
        goto LABEL_8;
      }
    }
  }
LABEL_18:
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::getIntAttribute  (binary VA: 0x18c8060)
// Original: hkXmlStreamParser::getIntAttribute
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::getIntAttribute(hkXmlStreamParser::Self *self, const char *a2, hkSubString::Self *a3, uint32_t *a4)
{
  hkXmlStreamParser::Self *v4;
  int v6;
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef hkXmlStreamParser::Self **_g4_t_v12;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v12)) > _g4_s5 ? (52u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);

  v12 = &self;
  v4 = self;
  v7 = a4;
  v9 = nullptr;
  v10 = 0;
  hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)&v8, a2, a3, (uint32_t *)(&v9));
  if ( v8 == 0 && *v9 == 34 && *(uint8_t *)(v10 - 1) == 34 )
  {
    ++v9;
    --v10;
    v11 = 0;
    hkXmlStreamParser::parseInt((hkXmlStreamParser::Self *)&v8, (const hkSubString::Self *)&v9, &v11);
    v6 = v11;
    *(uint32_t *)v4 = v8;
    *v7 = v6;
  }
  else
  {
    *(uint32_t *)v4 = 1;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::hasAttribute  (binary VA: 0x18c8130)
// Original: hkXmlStreamParser::hasAttribute
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::hasAttribute(hkXmlStreamParser::Self *self, const char *a2, hkSubString::Self *a3)
{
  hkXmlStreamParser::Self *v3;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[10];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);

  v6[6] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v6[0] = 0;
  v6[1] = 0;
  hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)&v5, a2, a3, v6);
  *(uint8_t *)v3 = v5 == 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::parseReal  (binary VA: 0x18c81a0)
// Original: hkXmlStreamParser::parseReal
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::parseReal(hkXmlStreamParser::Self *self, const hkSubString::Self *a2, float *a3)
{
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  float v11; // xmm1_4
  int v12;
  uint8_t *v13;
  uint64_t v14;
  double v15; // 0:ecx.4,4:eax.4

  v13 = *(uint8_t **)a2;
  v12 = *((uint32_t *)a2 + 1) - *(uint32_t *)a2;
  if ( (unsigned int)(v12 - 1) > 0x1F )
    goto LABEL_6;
  if ( *v13 != 120 )
  {
    hkFloatParseUtil::parseFloat(self, a2, a3);
    return self;
  }
  if ( v12 == 9 || v12 == 17 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      v10 = (char)v13[v6 + 1];
      v14 = 16 * __PAIR64__(v5, v4);
      if ( (uint8_t)(v10 - 48) <= 9u )
      {
        v7 = v10 - 48;
      }
      else if ( (uint8_t)(v10 - 65) > 5u )
      {
        if ( (uint8_t)(v10 - 97) > 5u )
          goto LABEL_6;
        v7 = v10 - 87;
      }
      else
      {
        v7 = v10 - 55;
      }
      v8 = v7 >> 31;
      LODWORD(v15) = v14 | v7;
      ++v6;
      HIDWORD(v15) = HIDWORD(v14) | v8;
      v4 = LODWORD(v15);
      v5 = HIDWORD(v15);
    }
    while ( v6 < v12 - 1 );
    if ( v12 == 9 )
    {
      *a3 = *(float *)&v15;
    }
    else if ( v15 == 1.797e308 )
    {
      *a3 = 3.40282e38f;
    }
    else if ( v15 == 2.2250738585072014e-308 )
    {
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(sub_800000);
    }
    else if ( v15 == 2.220446049250313e-16 )
    {
      *a3 = 0.00000011920929f;
    }
    else if ( v15 == 1.8446726e150 )
    {
      *a3 = 1.8446726e19f;
    }
    else
    {
      v11 = v15;
      *a3 = v11;
    }
    *(uint32_t *)self = 0;
    return self;
  }
  else
  {
LABEL_6:
    *(uint32_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::getRealAttribute  (binary VA: 0x18c8370)
// Original: hkXmlStreamParser::getRealAttribute
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::getRealAttribute(hkXmlStreamParser::Self *self, const char *a2, hkSubString::Self *a3, float *a4)
{
  hkXmlStreamParser::Self *v4;
  typedef float *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint8_t *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef hkXmlStreamParser::Self **_g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v9)) > _g4_s3 ? (12u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v10)) > _g4_s4 ? (32u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);

  v10 = &self;
  v4 = self;
  v6 = a4;
  v8 = nullptr;
  v9 = 0;
  hkXmlStreamParser::getValue((hkXmlStreamParser::Self *)&v7, a2, a3, (uint32_t *)(&v8));
  if ( v7 == 0 && *v8 == 34 && *(uint8_t *)(v9 - 1) == 34 )
  {
    ++v8;
    --v9;
    hkXmlStreamParser::parseReal(v4, (const hkSubString::Self *)&v8, v6);
  }
  else
  {
    *(uint32_t *)v4 = 1;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::needsDecode  (binary VA: 0x18c8420)
// Original: hkXmlStreamParser::needsDecode
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::needsDecode(hkXmlStreamParser::Self *self, const hkSubString::Self *a2)
{
  hkXmlStreamParser::Self *result;
  uint8_t *v3;
  uint8_t *v4;

  result = self;
  v3 = *(uint8_t **)a2;
  v4 = *((uint8_t **)a2 + 1);
  if ( *(uint32_t *)a2 < (unsigned int)(uintptr_t)(v4) )
  {
    while ( *v3 != 38 )
    {
      if ( ++v3 == v4 )
        goto LABEL_6;
    }
    *(uint8_t *)self = 1;
  }
  else
  {
LABEL_6:
    *(uint8_t *)self = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlStreamParser::decodeString  (binary VA: 0x18c8460)
// Original: hkXmlStreamParser::decodeString
// ----------------------------------------------------------------------------
hkXmlStreamParser::Self * hkXmlStreamParser::decodeString(hkXmlStreamParser::Self *self, const hkSubString::Self *a2, hkStringBuf::Self *a3)
{
  unsigned int v3;
  char *v4;
  char *v5;
  int v7;
  uint8_t *v8;
  unsigned int v9;
  int v10;
  char *v11;
  int v12;
  hkString::Self *v13;
  int v14;
  typedef uint8_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef char *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef hkString::Self *_g4_t_v19;
  typedef uint8_t _g4_t_v20[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v20)) > _g4_s5 ? (16u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);

  hkStringBuf::clear(a3);
  v3 = *((uint32_t *)a2 + 1);
  if ( *(uint32_t *)a2 >= v3 )
  {
LABEL_11:
    *(uint32_t *)self = 0;
    return self;
  }
  v4 = *(char **)a2;
  while ( 1 )
  {
    if ( *v4 != 38 )
    {
      v5 = v4 + 1;
      if ( v3 > (unsigned int)(uintptr_t)(v4 + 1) && v4[1] != 38 )
      {
        do
          ++v5;
        while ( v5 != (char *)v3 && *v5 != 38 );
      }
      v17 = v5;
      hkStringBuf::append(a3, (hkString::Self *)v4, v5 - v4);
      v4 = v17;
      goto LABEL_10;
    }
    v7 = v3 - (uint32_t)(uintptr_t)(v4);
    if ( (int)(v3 - (uint32_t)(uintptr_t)(v4)) <= 4 )
      break;
    v19 = (hkString::Self *)(v4 + 1);
    v10 = hkString::strNcmp((hkString::Self *)(v4 + 1), "amp;", 4u);
    v7 = v3 - (uint32_t)(uintptr_t)(v4);
    if ( v10 != 0 )
      goto LABEL_29;
    v4 += 5;
    hkStringBuf::append(a3, (hkString::Self *)"&", 1);
LABEL_10:
    if ( (unsigned int)(uintptr_t)(v4) >= v3 )
      goto LABEL_11;
  }
  if ( v7 <= 3 )
    goto LABEL_14;
  v19 = (hkString::Self *)(v4 + 1);
LABEL_29:
  v16 = v7;
  if ( hkString::strNcmp(v19, "lt;", 3u) == 0 )
  {
    v11 = "<";
LABEL_31:
    v4 += 4;
    hkStringBuf::append(a3, (hkString::Self *)v11, 1);
    goto LABEL_10;
  }
  v12 = hkString::strNcmp(v19, "gt;", 3u);
  v7 = v16;
  if ( v12 == 0 )
  {
    v11 = ">";
    goto LABEL_31;
  }
  if ( v16 > 5 )
  {
    if ( hkString::strNcmp(v19, "quot;", 5u) == 0 )
    {
      v13 = (hkString::Self *)"\"";
LABEL_36:
      v4 += 6;
      hkStringBuf::append(a3, v13, 1);
      goto LABEL_10;
    }
    v14 = hkString::strNcmp(v19, "apos;", 5u);
    v7 = v16;
    if ( v14 == 0 )
    {
      v13 = (hkString::Self *)a0;
      goto LABEL_36;
    }
  }
LABEL_14:
  if ( v4[1] == 35 && (uint8_t)(v4[2] - 48) <= 9u && v7 > 3 && v3 > (unsigned int)(uintptr_t)(v4 + 2) )
  {
    v8 = (uint8_t *)(v4 + 2);
    while ( ++v8 != (uint8_t *)v3 )
    {
      if ( (uint8_t)(*v8 - 48) > 9u )
      {
        if ( *v8 == 59 && v8 - (uint8_t *)(v4) <= 16 )
        {
          v15 = v8;
          v18 = (char *)(v8 - (uint8_t *)((v4 + 2)));
          hkString::strNcpy((hkString::Self *)v20, v4 + 2, v18);
          v20[(uint32_t)(uintptr_t)(v18)] = 0;
          v9 = hkString::atoi((hkString::Self *)v20, nullptr);
          if ( v9 <= 0xFF )
          {
            v20[0] = v9;
            v20[1] = 0;
            hkStringBuf::append(a3, (hkString::Self *)v20, -1);
            v4 = (char *)(v15 + 1);
            goto LABEL_10;
          }
        }
        break;
      }
    }
  }
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkFloatParseUtil::getFloatType  (binary VA: 0x18c8790)
// Original: hkFloatParseUtil::getFloatType
// ----------------------------------------------------------------------------
char hkFloatParseUtil::getFloatType(hkFloatParseUtil::Self *self)
{
  int v1;

  LOBYTE(v1) = 5;
  if ( ((unsigned int)(uintptr_t)(self) & 0x7F800000) == 0x7F800000 )
  {
    if ( self == (hkFloatParseUtil::Self *)2139095040 )
    {
      LOBYTE(v1) = 1;
    }
    else if ( self == (hkFloatParseUtil::Self *)-8388608 )
    {
      LOBYTE(v1) = 0;
    }
    else
    {
      LOBYTE(v1) = 4;
      if ( self != (hkFloatParseUtil::Self *)-4194304 )
        return ((int)(uintptr_t)(self) >> 31) + 3;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkFloatParseUtil::getFloatType  (binary VA: 0x18c87f0)
// Original: hkFloatParseUtil::getFloatType
// ----------------------------------------------------------------------------
int hkFloatParseUtil::getFloatType(hkFloatParseUtil::Self *self, double a2)
{
  int result;

  result = 5;
  if ( (LODWORD(a2) & 0x7FF00000) == 0x7FF00000 )
  {
    if ( ((unsigned int)(uintptr_t)(self) | LODWORD(a2) ^ 0x7FF00000) != 0 )
    {
      if ( ((unsigned int)(uintptr_t)(self) | LODWORD(a2) ^ 0xFFF00000) != 0 )
      {
        result = 4;
        if ( ((unsigned int)(uintptr_t)(self) | LODWORD(a2) ^ 0xFFF80000) != 0 )
          return (SLODWORD(a2) >> 31) + 3;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFloatParseUtil::equals  (binary VA: 0x18c8860)
// Original: hkFloatParseUtil::equals
// ----------------------------------------------------------------------------
int hkFloatParseUtil::equals(hkFloatParseUtil::Self *self, hkFloatParseUtil::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  LOBYTE(v2) = hkFloatParseUtil::getFloatType(self);
  v3 = v2;
  LOBYTE(v4) = hkFloatParseUtil::getFloatType(a2);
  v6 = 0;
  if ( v3 == v4 )
  {
    if ( *(float *)&self == *(float *)&a2 )
    {
      LOBYTE(v5) = !__builtin_isunordered(*(float *)&self, *(float *)&a2);
      v6 = v5;
    }
    LOBYTE(v4) = v3 != 5;
    return v4 | v6;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkFloatParseUtil::equals  (binary VA: 0x18c88c0)
// Original: hkFloatParseUtil::equals
// ----------------------------------------------------------------------------
int hkFloatParseUtil::equals(double self, double a2)
{
  int FloatType;
  int v3;
  int v4;
  int v5;
  double v7;
  double v8;

  LODWORD(v7) = HIDWORD(self);
  FloatType = hkFloatParseUtil::getFloatType((hkFloatParseUtil::Self *)LODWORD(self), v7);
  LODWORD(v8) = HIDWORD(a2);
  v3 = hkFloatParseUtil::getFloatType((hkFloatParseUtil::Self *)LODWORD(a2), v8);
  v5 = 0;
  if ( FloatType == v3 )
  {
    if ( self == a2 )
    {
      LOBYTE(v4) = !__builtin_isunordered(self, a2);
      v5 = v4;
    }
    LOBYTE(v3) = FloatType != 5;
    return v3 | v5;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkFloatParseUtil::calcFloatText  (binary VA: 0x18c8940)
// Original: hkFloatParseUtil::calcFloatText
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkFloatParseUtil::calcFloatText(hkFloatParseUtil::Self *self, hkStringBuf::Self *a2)
{
  int v2;

  LOBYTE(v2) = hkFloatParseUtil::getFloatType(self);
  if ( v2 == 5 )
    return (hkStringBuf::Self *)hkStringBuf::printf(a2, "%g", *(float *)&self);
  else
    return hkStringBuf::opAssign(a2, (hkString::Self *)off_203E230[v2]);
}

// ----------------------------------------------------------------------------
// Function: hkFloatParseUtil::calcFloatText  (binary VA: 0x18c89b0)
// Original: hkFloatParseUtil::calcFloatText
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkFloatParseUtil::calcFloatText(hkFloatParseUtil::Self *self, double a2)
{
  int FloatType;
  double v4;

  LODWORD(v4) = LODWORD(a2);
  FloatType = hkFloatParseUtil::getFloatType(self, v4);
  if ( FloatType == 5 )
    return (hkStringBuf::Self *)hkStringBuf::printf((hkStringBuf::Self *)HIDWORD(a2), "%g", self, LODWORD(a2));
  else
    return hkStringBuf::opAssign((hkStringBuf::Self *)HIDWORD(a2), (hkString::Self *)off_203E230[FloatType]);
}

// ----------------------------------------------------------------------------
// Function: hkFloatParseUtil::calcFloatTextWithPoint  (binary VA: 0x18c8a30)
// Original: hkFloatParseUtil::calcFloatTextWithPoint
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkFloatParseUtil::calcFloatTextWithPoint(hkFloatParseUtil::Self *self, hkStringBuf::Self *a2)
{
  int v2;
  hkStringBuf::Self *result;

  LOBYTE(v2) = hkFloatParseUtil::getFloatType(self);
  if ( v2 != 5 )
    return hkStringBuf::opAssign(a2, (hkString::Self *)off_203E230[v2]);
  hkStringBuf::printf(a2, "%g", *(float *)&self);
  result = (hkStringBuf::Self *)hkStringBuf::indexOf(a2, 46, 0, 0x7FFFFFFF);
  if ( result == (hkStringBuf::Self *)-1 )
    return hkStringBuf::opAddAssign(a2, (hkString::Self *)".0");
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFloatParseUtil::calcFloatTextWithPoint  (binary VA: 0x18c8ad0)
// Original: hkFloatParseUtil::calcFloatTextWithPoint
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkFloatParseUtil::calcFloatTextWithPoint(hkFloatParseUtil::Self *self, double a2)
{
  int FloatType;
  hkStringBuf::Self *result;
  double v4;

  LODWORD(v4) = LODWORD(a2);
  FloatType = hkFloatParseUtil::getFloatType(self, v4);
  if ( FloatType != 5 )
    return hkStringBuf::opAssign((hkStringBuf::Self *)HIDWORD(a2), (hkString::Self *)off_203E230[FloatType]);
  hkStringBuf::printf((hkStringBuf::Self *)HIDWORD(a2), "%g", self, LODWORD(a2));
  result = (hkStringBuf::Self *)hkStringBuf::indexOf((hkStringBuf::Self *)HIDWORD(a2), 46, 0, 0x7FFFFFFF);
  if ( result == (hkStringBuf::Self *)-1 )
    return hkStringBuf::opAddAssign((hkStringBuf::Self *)HIDWORD(a2), (hkString::Self *)".0");
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFloatParseUtil::parseFloat  (binary VA: 0x18c8b80)
// Original: hkFloatParseUtil::parseFloat
// ----------------------------------------------------------------------------
hkFloatParseUtil::Self * hkFloatParseUtil::parseFloat(hkFloatParseUtil::Self *self, const hkSubString::Self *a2, float *a3)
{
  char *v3;
  char *v4;
  int v5;
  uint8_t *v6;
  int v8;
  typedef float _g4_t_v9;
  typedef char _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[89];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (13u + sizeof(_g4_t_v9)) > _g4_s0 ? (13u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v11)) > _g4_s2 ? (36u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 13u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);

  v3 = *((char **)a2 + 1);
  v4 = *(char **)a2;
  v5 = (int)(uintptr_t)(&v3[-*(uint32_t *)a2]);
  if ( v5 > 64 )
  {
LABEL_11:
    *(uint32_t *)self = 1;
    return self;
  }
  if ( v3 <= v4 )
  {
LABEL_7:
    hkString::strNcpy((hkString::Self *)v11, v4, (char *)(*((uint32_t *)a2 + 1) - *(uint32_t *)a2));
    v11[v5] = 0;
    v9 = hkString::atof((hkString::Self *)v11);
    *a3 = v9;
    *(uint32_t *)self = 0;
    return self;
  }
  v6 = *(uint8_t **)a2;
  if ( *v4 != 35 )
  {
    while ( ++v6 != (uint8_t *)(uintptr_t)(v3) )
    {
      if ( *v6 == 35 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
LABEL_8:
  v8 = 0;
  while ( 1 )
  {
    hkSubString::opEq((hkSubString::Self *)v10, (const char *)a2);
    if ( v10[0] != 0 )
      break;
    if ( ++v8 == 6 )
      goto LABEL_11;
  }
  *a3 = hkFloatParseUtil::s_valuesLut[v8];
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectToNative::findClassOf  (binary VA: 0x18c8c80)
// Original: hkDataObjectToNative::findClassOf
// ----------------------------------------------------------------------------
int hkDataObjectToNative::findClassOf(hkDataObjectToNative::Self *self, const hkDataObject::Self *a2)
{
  int v2;
  int v3;

  v2 = (*(int (**)(uint32_t))(**(uint32_t **)a2 + 12))(*(uint32_t *)a2);
  v3 = G4_VCALL<int>(v2, 12);
  return (*(int (**)(uint32_t, int))(**(uint32_t **)self + 24))(*(uint32_t *)self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectToNative::allocateObject  (binary VA: 0x18c8cc0)
// Original: hkDataObjectToNative::allocateObject
// ----------------------------------------------------------------------------
hkString::Self ** hkDataObjectToNative::allocateObject(hkString::Self **a1, uint32_t *a2, hkClass::Self *a3, uint32_t *a4)
{
  int v4;
  int v5;
  int v6;
  hkClass::Self *v7;
  hkClass::Self *v8;
  int v9;
  int address;
  hkString::Self *v11;
  int v12;
  hkString::Self **v13;
  int v15;
  int (*v16)(uint32_t, int);
  size_t ObjectSize;
  size_t v18;
  int v19;

  if ( (*(int (**)(uint32_t))(**(uint32_t **)a3 + 12))(*(uint32_t *)a3) != 0
    && (v4 = (*(int (**)(uint32_t))(**(uint32_t **)a3 + 12))(*(uint32_t *)a3),
        G4_VCALL<int>(v4, 12) != 0)
    && (v16 = *(int (**)(uint32_t, int))(*(uint32_t *)*a2 + 24),
        v5 = (*(int (**)(uint32_t))(**(uint32_t **)a3 + 12))(*(uint32_t *)a3),
        v6 = G4_VCALL<int>(v5, 12),
        v7 = (hkClass::Self *)v16(*a2, v6),
        v8 = v7,
        v7 != nullptr) )
  {
    hkClass::getDescribedVersion(v7);
    v9 = (*(int (**)(uint32_t))(**(uint32_t **)a3 + 12))(*(uint32_t *)a3);
    G4_VCALL<void>(v9, 16);
    ObjectSize = hkClass::getObjectSize(v8);
    v18 = ObjectSize + hkDataObjectUtil::getExtraStorageSize(v8, a3);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v11 = (hkString::Self *)(*(int (**)(uint32_t, size_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                        *(uint32_t *)(*(uint32_t *)address + 44),
                        v18);
    v12 = a4[4];
    if ( v12 == (a4[5] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)(a4 + 3), 8, v15);
      v12 = a4[4];
    }
    v19 = a4[3];
    a4[4] = v12 + 1;
    v13 = (hkString::Self **)(v19 + 8 * v12);
    *v13 = v11;
    v13[1] = (hkString::Self *)v18;
    hkString::memSet(v11, nullptr, v18);
    *a1 = v11;
    a1[1] = (hkString::Self *)(v8);
    return a1;
  }
  else
  {
    *a1 = nullptr;
    a1[1] = nullptr;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectToNative::fillNativeEnumMember  (binary VA: 0x18c8e50)
// Original: hkDataObjectToNative::fillNativeEnumMember
// ----------------------------------------------------------------------------
hkDataObjectToNative::Self * hkDataObjectToNative::fillNativeEnumMember(hkDataObjectToNative::Self *self, void *a2, const hkClassMember::Self *a3, const hkDataObject_Value::Self *a4, const hkClass::Self *a5)
{
  char v5;
  int v7;

  v5 = *((uint8_t *)a4 + 12);
  if ( v5 == 24 || v5 == 31 )
  {
    if ( *((uint32_t *)a4 + 2) != 0 )
    {
      v7 = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)a5 + 52))(*(uint32_t *)a5, *((uint32_t *)a5 + 1));
      hkClassMember::setEnumValue(a4, a3, v7);
    }
    *(uint32_t *)self = 0;
    return self;
  }
  else
  {
    *(uint32_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectToNative::getMemberClassAndCheck  (binary VA: 0x18c8ee0)
// Original: hkDataObjectToNative::getMemberClassAndCheck
// ----------------------------------------------------------------------------
int hkDataObjectToNative::getMemberClassAndCheck(hkDataObjectToNative::Self *self, const hkClassMember::Self *a2, const hkDataObject::Self *a3)
{
  hkClass::Self *Class;
  int v4;
  char *v5;
  int result;
  hkString::Self *Name;
  int v8;
  uint32_t **Attribute;
  const hkClass::Self *v10;
  typedef hkClass::Self *_g4_t_v11;
  typedef uint8_t _g4_t_v12[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v12)) > _g4_s1 ? (11u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 11u);

  if ( *(uint32_t *)a3 != 0 )
  {
    Class = (hkClass::Self *)hkClassMember::getClass(a2);
    v4 = (*(int (**)(uint32_t))(**(uint32_t **)a3 + 12))(*(uint32_t *)a3);
    v5 = (char *)G4_VCALL<int>(v4, 12);
    if ( v5 != nullptr )
    {
      result = (*(int (**)(uint32_t, char *))(**(uint32_t **)self + 24))(*(uint32_t *)self, v5);
      v11 = (hkClass::Self *)result;
      if ( Class == nullptr )
        return result;
      if ( result != 0 )
      {
        Name = (hkString::Self *)hkClass::getName(Class);
        v8 = hkString::strCmp(Name, v5);
        result = (int)(uintptr_t)(Class);
        if ( v8 != 0 )
        {
          hkClass::isSuperClass((hkClass::Self *)v12, Class, v11);
          result = (int)(uintptr_t)(v11);
          if ( v12[0] == 0 )
          {
            Attribute = (uint32_t **)hkClassMember::getAttribute(a2, "hk.DataObjectType");
            result = (int)(uintptr_t)(Class);
            if ( Attribute != nullptr )
            {
              v10 = (const hkClass::Self *)(*(int (**)(uint32_t, uint32_t))(**(uint32_t **)self + 24))(
                                       *(uint32_t *)self,
                                       **Attribute);
              hkClass::isSuperClass((hkClass::Self *)v12, v10, v11);
              result = (int)(uintptr_t)(v11);
              if ( v12[0] == 0 )
                return (int)(uintptr_t)(v10);
            }
          }
        }
        return result;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectToNative::fillNativeSimpleMember_hkDataObject_Value_60b40e  (binary VA: 0x18c9000)
// Original: hkDataObjectToNative::fillNativeSimpleMember<hkDataObject_Value>
// ----------------------------------------------------------------------------
uint32_t * hkDataObjectToNative::fillNativeSimpleMember_hkDataObject_Value_60b40e(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, int a6, int a7, uint32_t *a8)
{
  uint32_t *v8;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  int16_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  int16_t v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int16_t v30;
  int v31;
  int v32;
  int v33;
  hkString::Self *v34;
  hkString::Self *v35;
  int v36;
  hkString::Self **v37;
  hkString::Self *v38;
  hkString::Self *v39;
  hkString::Self **v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef hkString::Self *_g4_t_v52;
  typedef hkString::Self *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef float _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v41)) > _g4_s0 ? (8u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v42)) > _g4_s1 ? (16u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v43)) > _g4_s2 ? (16u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v44)) > _g4_s3 ? (20u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v45)) > _g4_s4 ? (20u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v46)) > _g4_s5 ? (24u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v47)) > _g4_s6 ? (24u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v48)) > _g4_s7 ? (24u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v49)) > _g4_s8 ? (24u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v50)) > _g4_s9 ? (24u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v51)) > _g4_s10 ? (24u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v52)) > _g4_s11 ? (24u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v53)) > _g4_s12 ? (24u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v54)) > _g4_s13 ? (28u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v55)) > _g4_s14 ? (28u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v56)) > _g4_s15 ? (28u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v57)) > _g4_s16 ? (28u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v58)) > _g4_s17 ? (28u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v59)) > _g4_s18 ? (28u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v60)) > _g4_s19 ? (28u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v61)) > _g4_s20 ? (28u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v62)) > _g4_s21 ? (32u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v63)) > _g4_s22 ? (36u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v64)) > _g4_s23 ? (40u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v65)) > _g4_s24 ? (56u + sizeof(_g4_t_v65)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 32u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 36u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);

  switch ( a4 )
  {
    case 1:
      *(uint8_t *)a3 = G4_VCALL<int>(*a5, 52, a5[1]) != 0;
      goto LABEL_3;
    case 2:
    case 3:
    case 4:
      *(uint8_t *)a3 = G4_VCALL<int>(*a5, 52, a5[1]);
      goto LABEL_3;
    case 5:
    case 6:
      *(uint16_t *)a3 = G4_VCALL<int>(*a5, 52, a5[1]);
      goto LABEL_3;
    case 7:
    case 8:
    case 30:
      *(uint32_t *)a3 = G4_VCALL<int>(*a5, 52, a5[1]);
      goto LABEL_3;
    case 9:
    case 10:
      *(uint64_t *)a3 = ((int64_t (*)(uint32_t, uint32_t))*(uint32_t *)(*(uint32_t *)*a5 + 52))(*a5, a5[1]);
      goto LABEL_3;
    case 11:
      v56 = ((long double (*)(uint32_t, uint32_t))*(uint32_t *)(*(uint32_t *)*a5 + 64))(*a5, a5[1]);
      *(float *)a3 = v56;
      goto LABEL_3;
    case 12:
    case 13:
      v11 = (uint32_t *)G4_VCALL<int>(*a5, 60, a5[1], 4);
      *(uint32_t *)a3 = *v11;
      *(uint32_t *)(a3 + 4) = v11[1];
      *(uint32_t *)(a3 + 8) = v11[2];
      *(uint32_t *)(a3 + 12) = v11[3];
      goto LABEL_3;
    case 14:
    case 15:
    case 16:
      v8 = (uint32_t *)G4_VCALL<int>(*a5, 60, a5[1], 12);
      *(uint32_t *)a3 = *v8;
      *(uint32_t *)(a3 + 4) = v8[1];
      *(uint32_t *)(a3 + 8) = v8[2];
      *(uint32_t *)(a3 + 12) = v8[3];
      *(uint32_t *)(a3 + 16) = v8[4];
      *(uint32_t *)(a3 + 20) = v8[5];
      *(uint32_t *)(a3 + 24) = v8[6];
      *(uint32_t *)(a3 + 28) = v8[7];
      *(uint32_t *)(a3 + 32) = v8[8];
      *(uint32_t *)(a3 + 36) = v8[9];
      *(uint32_t *)(a3 + 40) = v8[10];
      *(uint32_t *)(a3 + 44) = v8[11];
      goto LABEL_3;
    case 17:
    case 18:
      v10 = (uint32_t *)G4_VCALL<int>(*a5, 60, a5[1], 16);
      *(uint32_t *)a3 = *v10;
      *(uint32_t *)(a3 + 4) = v10[1];
      *(uint32_t *)(a3 + 8) = v10[2];
      *(uint32_t *)(a3 + 12) = v10[3];
      *(uint32_t *)(a3 + 16) = v10[4];
      *(uint32_t *)(a3 + 20) = v10[5];
      *(uint32_t *)(a3 + 24) = v10[6];
      *(uint32_t *)(a3 + 28) = v10[7];
      *(uint32_t *)(a3 + 32) = v10[8];
      *(uint32_t *)(a3 + 36) = v10[9];
      *(uint32_t *)(a3 + 40) = v10[10];
      *(uint32_t *)(a3 + 44) = v10[11];
      *(uint32_t *)(a3 + 48) = v10[12];
      *(uint32_t *)(a3 + 52) = v10[13];
      *(uint32_t *)(a3 + 56) = v10[14];
      *(uint32_t *)(a3 + 60) = v10[15];
      goto LABEL_3;
    case 20:
      if ( a6 == 0 )
        goto LABEL_3;
      v28 = (uint32_t *)G4_VCALL<int>(*a5, 56, a5[1]);
      if ( v28 == nullptr )
        goto LABEL_3;
      v29 = v28[1];
      ++v28[2];
      v30 = v29;
      LOWORD(v29) = 0;
      v57 = v28;
      v28[1] = v29 | (uint16_t)(v30 + 1);
      (*(void (**)(int *))(*v28 + 8))(&v63);
      v43 = v63;
      v45 = v64;
      v23 = v57;
      if ( v63 != 0 || v64 != 0 )
      {
        v31 = a8[1];
        v58 = v31;
        if ( v31 == (a8[2] & 0x3FFFFFFF) )
        {
          v50 = v23;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)a8, 16, v41);
          v58 = a8[1];
          v23 = v50;
          v31 = v58;
        }
        v47 = *a8;
        a8[1] = v31 + 1;
        v32 = v47 + 16 * v58;
        *(uint32_t *)v32 = v43;
        *(uint32_t *)(v32 + 4) = v45;
        *(uint32_t *)(v32 + 8) = a3;
        *(uint8_t *)(v32 + 13) = a7 != 0;
        *(uint8_t *)(v32 + 12) = 0;
      }
      goto LABEL_26;
    case 25:
      if ( a6 != 0 )
      {
        v12 = G4_VCALL<int>(*a5, 56, a5[1]);
        v65 = (uint32_t *)v12;
        if ( v12 != 0 )
        {
          v13 = *(uint32_t *)(v12 + 4);
          ++*(uint32_t *)(v12 + 8);
          v14 = v13;
          LOWORD(v13) = 0;
          *(uint32_t *)(v12 + 4) = v13 | (uint16_t)(v14 + 1);
        }
        hkDataObjectToNative::fillNativeMembers(&v62);
        v15 = v65;
        v16 = v62;
        if ( v65 != nullptr )
        {
          v17 = v65[1];
          LOWORD(v17) = 0;
          v18 = v17 | (uint16_t)(v65[1] - 1);
          v19 = v65[2];
          v65[1] = v18;
          v15[2] = v19 - 1;
          if ( v19 == 1 )
            G4_VCALL<void>(v15, 4, a2, a3, &v65, a8);
        }
        if ( v16 == 1 )
          goto LABEL_18;
      }
      goto LABEL_3;
    case 28:
      if ( *(uint32_t *)(a2 + 4) != 0 )
        goto LABEL_18;
      v20 = (uint32_t *)G4_VCALL<int>(*a5, 56, a5[1]);
      if ( v20 == nullptr )
        goto LABEL_3;
      v21 = v20[1];
      ++v20[2];
      v22 = v21;
      LOWORD(v21) = 0;
      v54 = v20;
      v20[1] = v21 | (uint16_t)(v22 + 1);
      (*(void (**)(int *))(*v20 + 8))(&v63);
      v42 = v63;
      v44 = v64;
      v23 = v54;
      if ( v63 != 0 || v64 != 0 )
      {
        v24 = a8[1];
        v55 = v24;
        if ( v24 == (a8[2] & 0x3FFFFFFF) )
        {
          v51 = v23;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)a8, 16, v41);
          v55 = a8[1];
          v23 = v51;
          v24 = v55;
        }
        v46 = *a8;
        a8[1] = v24 + 1;
        v25 = v46 + 16 * v55;
        *(uint32_t *)v25 = v42;
        *(uint32_t *)(v25 + 4) = v44;
        *(uint32_t *)(v25 + 8) = a3;
        *(uint8_t *)(v25 + 13) = a7 != 0;
        *(uint8_t *)(v25 + 12) = 1;
      }
LABEL_26:
      v26 = v23[1];
      v27 = v23[2];
      LOWORD(v26) = 0;
      v23[1] = v26 | (uint16_t)(v23[1] - 1);
      v23[2] = v27 - 1;
      if ( v27 == 1 )
        G4_VCALL<void>(v23, 4);
LABEL_3:
      *a1 = 0;
      return a1;
    case 29:
      if ( *(uint32_t *)(a2 + 4) != 0 )
        goto LABEL_18;
      v33 = G4_VCALL<int>(*a5, 48, a5[1]);
      v34 = nullptr;
      if ( v33 != 0 )
      {
        v35 = (hkString::Self *)G4_VCALL<int>(*a5, 48, a5[1]);
        v34 = hkString::strDup(v35);
        if ( v34 != nullptr )
        {
          v36 = a8[4];
          v60 = v36;
          if ( v36 == (a8[5] & 0x3FFFFFFF) )
          {
            v52 = v34;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(a8 + 3),
              8,
              v41);
            v34 = v52;
            v36 = a8[4];
            v60 = v36;
          }
          v48 = a8[3];
          a8[4] = v36 + 1;
          v37 = (hkString::Self **)(v48 + 8 * v60);
          *v37 = v34;
          v37[1] = (hkString::Self *)-1;
        }
      }
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(v34);
      goto LABEL_3;
    case 32:
      v59 = ((long double (*)(uint32_t, uint32_t))*(uint32_t *)(*(uint32_t *)*a5 + 64))(*a5, a5[1]);
      *(uint16_t *)a3 = HIWORD(v59);
      goto LABEL_3;
    case 33:
      if ( G4_VCALL<int>(*a5, 48, a5[1]) != 0
        && (v38 = (hkString::Self *)G4_VCALL<int>(*a5, 48, a5[1]),
            (v39 = hkString::strDup(v38)) != nullptr) )
      {
        if ( *(uint32_t *)(a2 + 4) != 0 )
        {
          *(uint32_t *)a3 = (uint32_t)(uintptr_t)((char *)v39 + 1);
        }
        else
        {
          v61 = a8[4];
          if ( v61 == (a8[5] & 0x3FFFFFFF) )
          {
            v53 = v39;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(a8 + 3),
              8,
              v41);
            v61 = a8[4];
            v39 = v53;
          }
          v49 = a8[3];
          a8[4] = v61 + 1;
          v40 = (hkString::Self **)(v49 + 8 * v61);
          *v40 = v39;
          v40[1] = (hkString::Self *)-1;
          *(uint32_t *)a3 = (uint32_t)(uintptr_t)(v39);
        }
      }
      else
      {
        *(uint32_t *)a3 = 0;
      }
      goto LABEL_3;
    default:
LABEL_18:
      *a1 = 1;
      return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectToNative::fillNativeMembers  (binary VA: 0x18c96f0)
// Original: hkDataObjectToNative::fillNativeMembers
// ----------------------------------------------------------------------------
uint32_t * hkDataObjectToNative::fillNativeMembers(uint32_t *a1, hkDataObjectToNative::Self *a2, int a3, const hkDataObject::Self *a4, uint32_t *a5)
{
  int v5;
  int DeclaredMember;
  int v7;
  int v8;
  int v9;
  int v10;
  int16_t v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v16;
  uint32_t *v17;
  int v18;
  int16_t v19;
  int v20;
  int v21;
  int16_t v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  hkString::Self *v27;
  size_t v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int j;
  int v34;
  int16_t v35;
  uint32_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  bool v42;
  int v43;
  int v44;
  int16_t v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int16_t v50;
  int i;
  int v52;
  int v53;
  int16_t v54;
  uint32_t *v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int16_t v60;
  int v61;
  int v62;
  size_t SizeInBytes;
  char *DeclaredDefault;
  int v65;
  int v66;
  int16_t v67;
  int v68;
  int v69;
  int Class;
  int v71;
  int v72;
  int16_t v73;
  int v74;
  typedef hkDataObjectToNative::Self *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef hkString::Self *_g4_t_v78;
  typedef hkString::Self *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint32_t *_g4_t_v82;
  typedef int _g4_t_ObjectSize;
  typedef hkClassMember::Self *_g4_t_v84;
  typedef hkClassMember::Self *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_CstyleArraySize;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef const hkDataObject::Self *_g4_t_v91;
  typedef uint8_t _g4_t_v92;
  typedef uint32_t *_g4_t_v93;
  typedef hkString::Self *_g4_t_v94;
  typedef hkDataObjectToNative::Self *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef hkString::Self *_g4_t_v98;
  typedef hkClass::Self *_g4_t_ClassOf;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef uint32_t _g4_t_v102[4];
  typedef uint32_t *_g4_t_v103;
  typedef int *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef __m128i _g4_t_v106;
  typedef uint32_t *_g4_t_v107;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v75)) > _g4_s0 ? (4u + sizeof(_g4_t_v75)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v76)) > _g4_s1 ? (8u + sizeof(_g4_t_v76)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v77)) > _g4_s2 ? (8u + sizeof(_g4_t_v77)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v78)) > _g4_s3 ? (8u + sizeof(_g4_t_v78)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v79)) > _g4_s4 ? (8u + sizeof(_g4_t_v79)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v80)) > _g4_s5 ? (12u + sizeof(_g4_t_v80)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v81)) > _g4_s6 ? (20u + sizeof(_g4_t_v81)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v82)) > _g4_s7 ? (36u + sizeof(_g4_t_v82)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_ObjectSize)) > _g4_s8 ? (40u + sizeof(_g4_t_ObjectSize)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v84)) > _g4_s9 ? (40u + sizeof(_g4_t_v84)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v85)) > _g4_s10 ? (40u + sizeof(_g4_t_v85)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v86)) > _g4_s11 ? (44u + sizeof(_g4_t_v86)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_CstyleArraySize)) > _g4_s12 ? (48u + sizeof(_g4_t_CstyleArraySize)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v88)) > _g4_s13 ? (48u + sizeof(_g4_t_v88)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v89)) > _g4_s14 ? (48u + sizeof(_g4_t_v89)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v90)) > _g4_s15 ? (52u + sizeof(_g4_t_v90)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v91)) > _g4_s16 ? (56u + sizeof(_g4_t_v91)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v92)) > _g4_s17 ? (60u + sizeof(_g4_t_v92)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v93)) > _g4_s18 ? (64u + sizeof(_g4_t_v93)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v94)) > _g4_s19 ? (68u + sizeof(_g4_t_v94)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v95)) > _g4_s20 ? (72u + sizeof(_g4_t_v95)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v96)) > _g4_s21 ? (76u + sizeof(_g4_t_v96)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v97)) > _g4_s22 ? (76u + sizeof(_g4_t_v97)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v98)) > _g4_s23 ? (76u + sizeof(_g4_t_v98)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_ClassOf)) > _g4_s24 ? (80u + sizeof(_g4_t_ClassOf)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v100)) > _g4_s25 ? (84u + sizeof(_g4_t_v100)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v101)) > _g4_s26 ? (88u + sizeof(_g4_t_v101)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v102)) > _g4_s27 ? (92u + sizeof(_g4_t_v102)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v103)) > _g4_s28 ? (108u + sizeof(_g4_t_v103)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v104)) > _g4_s29 ? (112u + sizeof(_g4_t_v104)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v105)) > _g4_s30 ? (116u + sizeof(_g4_t_v105)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v106)) > _g4_s31 ? (128u + sizeof(_g4_t_v106)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v107)) > _g4_s32 ? (152u + sizeof(_g4_t_v107)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 4u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 8u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 8u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 8u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 8u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 12u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 20u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 36u);
  _g4_t_ObjectSize &ObjectSize = *reinterpret_cast<_g4_t_ObjectSize *>(_g4_sf + 40u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 40u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 44u);
  _g4_t_CstyleArraySize &CstyleArraySize = *reinterpret_cast<_g4_t_CstyleArraySize *>(_g4_sf + 48u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 48u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 48u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 52u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 60u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 64u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 68u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 72u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 76u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 76u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 76u);
  _g4_t_ClassOf &ClassOf = *reinterpret_cast<_g4_t_ClassOf *>(_g4_sf + 80u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 84u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 88u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 92u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 108u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 112u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 116u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 128u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 152u);

  v107 = (uint32_t *)(&a1);
  v5 = a3;
  v82 = a1;
  v90 = a3;
  v93 = a5;
  v91 = a4;
  v95 = a2;
  ClassOf = (hkClass::Self *)hkDataObjectToNative::findClassOf(a2, a4);
  hkClass::getObjectSize(ClassOf);
  v100 = 0;
  v102[1] = v5 + ((hkClass::getObjectSize(ClassOf) + 15) & 0xFFFFFFF0);
  if ( ClassOf == nullptr )
  {
LABEL_26:
    *v82 = v100;
    return v82;
  }
  while ( 1 )
  {
    v101 = 0;
    if ( hkClass::getNumDeclaredMembers(ClassOf) > 0 )
      break;
LABEL_25:
    ClassOf = (hkClass::Self *)hkClass::getParent(ClassOf);
    if ( ClassOf == nullptr )
      goto LABEL_26;
  }
  while ( 1 )
  {
    DeclaredMember = hkClass::getDeclaredMember(ClassOf, v101);
    v94 = (hkString::Self *)(v90 + *(uint16_t *)(DeclaredMember + 18));
    v92 = *(uint8_t *)(DeclaredMember + 12);
    (*(void (**)(int **))(**(uint32_t **)v91 + 16))(&v104);
    if ( v104 != nullptr )
    {
      if ( G4_VCALL<int>(v104, 108, v105) != 0 )
        goto LABEL_11;
      v106 = g4_to_m128i(0);
      if ( v104 != nullptr )
        G4_VCALL<void>(v104, 104, v105, &v106);
      if ( *(uint8_t *)(DeclaredMember + 12) == 22 )
LABEL_83:
        *((uint32_t *)v94 + 2) = 0x80000000;
    }
    else
    {
      v106 = g4_to_m128i(0);
      if ( *(uint8_t *)(DeclaredMember + 12) == 22 )
        goto LABEL_83;
    }
    if ( !hkClass::hasDeclaredDefault(ClassOf, v101)
      || (*(int (**)(uint32_t))(**(uint32_t **)v91 + 112))(*(uint32_t *)v91) == 0 )
    {
      break;
    }
    SizeInBytes = hkClassMember::getSizeInBytes((hkClassMember::Self *)DeclaredMember);
    DeclaredDefault = hkClass::getDeclaredDefault(ClassOf, v101);
    hkString::memCpy(v94, DeclaredDefault, SizeInBytes);
LABEL_24:
    if ( ++v101 >= hkClass::getNumDeclaredMembers(ClassOf) )
      goto LABEL_25;
  }
  if ( (v104 == nullptr ||g4_m128_lane<int32_t>(v106, 3) == 0) && (v92 != 25 || (*(uint8_t *)(DeclaredMember + 17) & 4) != 0) )
    goto LABEL_24;
LABEL_11:
  if ( hkClassMember::getCstyleArraySize((hkClassMember::Self *)DeclaredMember) != 0 )
  {
    CstyleArraySize = hkClassMember::getCstyleArraySize((hkClassMember::Self *)DeclaredMember);
    v7 = hkClassMember::getSizeInBytes((hkClassMember::Self *)DeclaredMember);
    v8 = CstyleArraySize;
    v86 = v7 / CstyleArraySize;
  }
  else
  {
    v86 = hkClassMember::getSizeInBytes((hkClassMember::Self *)DeclaredMember);
    v8 = 1;
  }
  v88 = ((*(uint16_t *)(DeclaredMember + 16) >> 9) ^ 1) & 1;
  switch ( v92 )
  {
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x19u:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x20u:
    case 0x21u:
      if ( v8 == 1 )
      {
        Class = hkClassMember::getClass((hkClassMember::Self *)DeclaredMember);
        hkDataObjectToNative::fillNativeSimpleMember_hkDataObject_Value_60b40e(
          v102,
          (int)(uintptr_t)(v95),
          (int)(uintptr_t)(v94),
          v92,
          (uint32_t *)(&v104),
          Class,
          v88,
          v93);
        v100 = v102[0];
        goto LABEL_23;
      }
      v58 = G4_VCALL<int>(v104, 44, v105);
      v17 = (uint32_t *)v58;
      if ( v58 != 0 )
      {
        v59 = *(uint32_t *)(v58 + 4);
        ++*(uint32_t *)(v58 + 8);
        v60 = v59;
        LOWORD(v59) = 0;
        v17[1] = v59 | (uint16_t)(v60 + 1);
      }
      v85 = (hkClassMember::Self *)DeclaredMember;
      v61 = 0;
      if ( G4_VCALL<int>(v17, 24) > 0 )
      {
        do
        {
          if ( v100 != 0 )
            break;
          hkClassMember::getClass(v85);
          v80 = v92;
          v78 = v94;
g4_m128_lane<int32_t>(v106, 1) = v61;
g4_m128_lane<int32_t>(v106, 0) = (int32_t)(uintptr_t)(v17);
          ++v61;
          hkDataObjectToNative::fillNativeSimpleMember_hkDataArray_Value_2dfda7(v102);
          v100 = v102[0];
          v94 = (hkString::Self *)((char *)v94 + v86);
        }
        while ( v61 < G4_VCALL<int>(v17, 24, v95, v78) );
      }
      goto LABEL_79;
    case 0x14u:
      v46 = *(uint8_t *)(DeclaredMember + 13);
      if ( v46 == 2 )
      {
        if ( v8 == 1 )
        {
          hkDataObjectToNative::fillNativeSimpleMember_hkDataObject_Value_60b40e(
            v102,
            (int)(uintptr_t)(v95),
            (int)(uintptr_t)(v94),
            29,
            (uint32_t *)(&v104),
            0,
            v88,
            v93);
          v100 = v102[0];
          goto LABEL_23;
        }
        v65 = G4_VCALL<int>(v104, 44, v105);
        v17 = (uint32_t *)v65;
        if ( v65 != 0 )
        {
          v66 = *(uint32_t *)(v65 + 4);
          ++*(uint32_t *)(v65 + 8);
          v67 = v66;
          LOWORD(v66) = 0;
          v17[1] = v66 | (uint16_t)(v67 + 1);
        }
        v68 = 0;
        v98 = v94;
        if ( G4_VCALL<int>(v17, 24) <= 0 )
        {
LABEL_79:
          v62 = v17[1];
          LOWORD(v62) = 0;
          v41 = v62 | (uint16_t)(v17[1] - 1);
        }
        else
        {
          do
          {
            if ( v100 != 0 )
              goto LABEL_79;
            v79 = v98;
            v80 = 29;
g4_m128_lane<int32_t>(v106, 1) = v68;
g4_m128_lane<int32_t>(v106, 0) = (int32_t)(uintptr_t)(v17);
            hkDataObjectToNative::fillNativeSimpleMember_hkDataArray_Value_2dfda7(v102);
            v100 = v102[0];
            v98 = (hkString::Self *)((char *)v98 + v86);
            ++v68;
          }
          while ( v68 < G4_VCALL<int>(v17, 24, v95, v79) );
          v69 = v17[1];
          LOWORD(v69) = 0;
          v41 = v69 | (uint16_t)(v17[1] - 1);
        }
LABEL_49:
        v42 = v17[2]-- == 1;
        v17[1] = v41;
        if ( v42 )
          G4_VCALL<void>(v17, 4);
        goto LABEL_23;
      }
      if ( v46 != 25 )
        goto LABEL_23;
      v47 = *v104;
      if ( v8 != 1 )
      {
        v48 = (*(int (**)(int *, int))(v47 + 44))(v104, v105);
        v17 = (uint32_t *)v48;
        if ( v48 != 0 )
        {
          v49 = *(uint32_t *)(v48 + 4);
          ++*(uint32_t *)(v48 + 8);
          v50 = v49;
          LOWORD(v49) = 0;
          v17[1] = v49 | (uint16_t)(v50 + 1);
        }
        v84 = (hkClassMember::Self *)DeclaredMember;
        for ( i = 0; i < G4_VCALL<int>(v17, 24, v75) && v100 == 0; ++i )
        {
          v52 = G4_VCALL<int>(v17, 88, i);
          v103 = (uint32_t *)v52;
          if ( v52 != 0 )
          {
            v53 = *(uint32_t *)(v52 + 4);
            ++*(uint32_t *)(v52 + 8);
            v54 = v53;
            LOWORD(v53) = 0;
            *(uint32_t *)(v52 + 4) = v53 | (uint16_t)(v54 + 1);
          }
          v81 = hkDataObjectToNative::getMemberClassAndCheck(v95, v84, (const hkDataObject::Self *)&v103);
          v80 = v92;
          v75 = v95;
g4_m128_lane<int32_t>(v106, 0) = (int32_t)(uintptr_t)(v17);
g4_m128_lane<int32_t>(v106, 1) = i;
          hkDataObjectToNative::fillNativeSimpleMember_hkDataArray_Value_2dfda7(v102);
          v100 = v102[0];
          v55 = v103;
          if ( v103 != nullptr )
          {
            v56 = v103[1];
            LOWORD(v56) = 0;
            v57 = v56 | (uint16_t)(v103[1] - 1);
            v42 = v103[2]-- == 1;
            v55[1] = v57;
            if ( v42 )
              G4_VCALL<void>(v55, 4, v95, v94, v92, &v106, v81, v88, v93);
          }
          v94 = (hkString::Self *)((char *)v94 + v86);
        }
LABEL_48:
        v40 = v17[1];
        LOWORD(v40) = 0;
        v41 = v40 | (uint16_t)(v17[1] - 1);
        goto LABEL_49;
      }
      v71 = (*(int (**)(int *, int))(v47 + 56))(v104, v105);
g4_m128_lane<int32_t>(v106, 0) = v71;
      if ( v71 != 0 )
      {
        v72 = *(uint32_t *)(v71 + 4);
        ++*(uint32_t *)(v71 + 8);
        v73 = v72;
        LOWORD(v72) = 0;
        *(uint32_t *)(v71 + 4) = v72 | (uint16_t)(v73 + 1);
      }
      v74 = hkDataObjectToNative::getMemberClassAndCheck(
              v95,
              (const hkClassMember::Self *)DeclaredMember,
              (const hkDataObject::Self *)&v106);
      hkDataObjectToNative::fillNativeSimpleMember_hkDataObject_Value_60b40e(
        v102,
        (int)(uintptr_t)(v95),
        (int)(uintptr_t)(v94),
        v92,
        (uint32_t *)(&v104),
        v74,
        v88,
        v93);
LABEL_20:
      v100 = v102[0];
      v12 = (uint32_t *)g4_m128_lane<int32_t>(v106, 0);
      if (g4_m128_lane<int32_t>(v106, 0) != 0 )
      {
        v13 = *(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 4);
        v14 = *(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 8);
        LOWORD(v13) = 0;
        *(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 4) = v13 | (uint16_t)(*(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 4) - 1);
        v12[2] = v14 - 1;
        if ( v14 == 1 )
          G4_VCALL<void>(v12, 4);
      }
LABEL_23:
      if ( v100 != 1 )
        goto LABEL_24;
LABEL_80:
      *v82 = 1;
      return v82;
    case 0x16u:
    case 0x1Au:
      if ( *((uint32_t *)v95 + 1) != 0
        && (*(uint8_t *)(DeclaredMember + 12) == 26 || (uint8_t)(*(uint8_t *)(DeclaredMember + 13) - 28) <= 1u) )
      {
        goto LABEL_80;
      }
      v43 = G4_VCALL<int>(v104, 44, v105);
g4_m128_lane<int32_t>(v106, 0) = v43;
      if ( v43 != 0 )
      {
        v44 = *(uint32_t *)(v43 + 4);
        ++*(uint32_t *)(v43 + 8);
        v45 = v44;
        LOWORD(v44) = 0;
        *(uint32_t *)(v43 + 4) = v44 | (uint16_t)(v45 + 1);
      }
      v80 = DeclaredMember;
      hkDataObjectToNative::copyIntoNativeArray(v102);
      goto LABEL_20;
    case 0x18u:
    case 0x1Fu:
      hkDataObjectToNative::fillNativeEnumMember(
        (hkDataObjectToNative::Self *)v102,
        v95,
        (const hkClassMember::Self *)(v94),
        (const hkDataObject_Value::Self *)DeclaredMember,
        (const hkClass::Self *)&v104);
      v100 = v102[0];
      goto LABEL_23;
    case 0x1Bu:
      if ( *((uint32_t *)v95 + 1) != 0 )
        goto LABEL_80;
      v16 = G4_VCALL<int>(v104, 44, v105);
      v17 = (uint32_t *)v16;
      if ( v16 != 0 )
      {
        v18 = *(uint32_t *)(v16 + 4);
        ++*(uint32_t *)(v16 + 8);
        v19 = v18;
        LOWORD(v18) = 0;
        v17[1] = v18 | (uint16_t)(v19 + 1);
      }
      v20 = G4_VCALL<int>(v17, 88, 0);
g4_m128_lane<int32_t>(v106, 0) = v20;
      if ( v20 != 0 )
      {
        v21 = *(uint32_t *)(v20 + 4);
        ++*(uint32_t *)(v20 + 8);
        v22 = v21;
        LOWORD(v21) = 0;
        *(uint32_t *)(v20 + 4) = v21 | (uint16_t)(v22 + 1);
      }
      *(uint32_t *)v94 = hkDataObjectToNative::getMemberClassAndCheck(
                         v95,
                         (const hkClassMember::Self *)DeclaredMember,
                         (const hkDataObject::Self *)&v106);
      v23 = (uint32_t *)g4_m128_lane<int32_t>(v106, 0);
      if (g4_m128_lane<int32_t>(v106, 0) != 0 )
      {
        v24 = *(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 4);
        v25 = *(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 8);
        LOWORD(v24) = 0;
        *(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 4) = v24 | (uint16_t)(*(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 4) - 1);
        v23[2] = v25 - 1;
        if ( v25 == 1 )
          G4_VCALL<void>(v23, 4);
      }
      *((uint32_t *)v94 + 2) = G4_VCALL<int>(v17, 24);
      ObjectSize = hkClass::getObjectSize(*(hkClass::Self **)v94);
      v26 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
g4_m128_lane<int32_t>(v106, 0) = *((uint32_t *)v94 + 2) * ObjectSize;
      v27 = (hkString::Self *)G4_VCALL<int>(v26, 16, &v106);
      v28 =g4_m128_lane<int32_t>(v106, 0);
      *((uint32_t *)v94 + 1) = (uint32_t)(uintptr_t)(v27);
      hkString::memSet(v27, nullptr, v28);
      v29 = *((uint32_t *)v94 + 1);
      v96 = *((uint32_t *)v94 + 2) * ObjectSize;
      v30 = v93[4];
      if ( v30 == (v93[5] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v93 + 3),
          8,
          v80);
        v30 = v93[4];
      }
      v89 = v93[3];
      v93[4] = v30 + 1;
      v31 = (uint32_t *)(v89 + 8 * v30);
      *v31 = v29;
      v31[1] = v96;
      if ( *((int *)v94 + 2) > 0 && v100 == 0 )
      {
        v97 = 0;
        v32 = 0;
        for ( j = G4_VCALL<int>(v17, 88, 0, v76);
              ;
              j = G4_VCALL<int>(v17, 88, v32, v77) )
        {
g4_m128_lane<int32_t>(v106, 0) = j;
          if ( j != 0 )
          {
            v34 = *(uint32_t *)(j + 4);
            ++*(uint32_t *)(j + 8);
            v35 = v34;
            LOWORD(v34) = 0;
            *(uint32_t *)(j + 4) = v34 | (uint16_t)(v35 + 1);
          }
          v80 = (int)(uintptr_t)(&v106);
          v77 = *((uint32_t *)v94 + 1) + v97;
          hkDataObjectToNative::fillNativeMembers(v102);
          v100 = v102[0];
          v36 = (uint32_t *)g4_m128_lane<int32_t>(v106, 0);
          if (g4_m128_lane<int32_t>(v106, 0) != 0 )
          {
            v37 = *(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 4);
            LOWORD(v37) = 0;
            v38 = v37 | (uint16_t)(*(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 4) - 1);
            v39 = *(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 8);
            *(uint32_t *)(g4_m128_lane<int32_t>(v106, 0) + 4) = v38;
            v36[2] = v39 - 1;
            if ( v39 == 1 )
              G4_VCALL<void>(v36, 4, v95, v77, &v106, v93);
          }
          if ( *((uint32_t *)v94 + 2) > ++v32 )
          {
            v97 += ObjectSize;
            if ( v100 == 0 )
              continue;
          }
          break;
        }
      }
      goto LABEL_48;
    case 0x22u:
      if ( *((uint32_t *)v95 + 1) != 0
        && (*(uint8_t *)(DeclaredMember + 12) == 26 || (uint8_t)(*(uint8_t *)(DeclaredMember + 13) - 28) <= 1u) )
      {
        goto LABEL_80;
      }
      v9 = G4_VCALL<int>(v104, 44, v105);
g4_m128_lane<int32_t>(v106, 0) = v9;
      if ( v9 != 0 )
      {
        v10 = *(uint32_t *)(v9 + 4);
        ++*(uint32_t *)(v9 + 8);
        v11 = v10;
        LOWORD(v10) = 0;
        *(uint32_t *)(v9 + 4) = v10 | (uint16_t)(v11 + 1);
      }
      v80 = DeclaredMember;
      hkDataObjectToNative::copyIntoRelArray(v102);
      goto LABEL_20;
    default:
      goto LABEL_80;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectToNative::fillNativeSimpleMember_hkDataArray_Value_2dfda7  (binary VA: 0x18ca210)
// Original: hkDataObjectToNative::fillNativeSimpleMember<hkDataArray_Value>
// ----------------------------------------------------------------------------
uint32_t * hkDataObjectToNative::fillNativeSimpleMember_hkDataArray_Value_2dfda7(uint32_t *a1, hkDataObjectToNative::Self *a2, int a3, int a4, uint32_t *a5, int a6, int a7, uint32_t *a8)
{
  uint32_t *v8;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  int16_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  int16_t v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  hkString::Self *v28;
  hkString::Self *v29;
  int v30;
  hkString::Self *v31;
  hkString::Self *v32;
  int v33;
  hkString::Self **v34;
  uint32_t *v35;
  int v36;
  int16_t v37;
  int v38;
  int v39;
  hkString::Self **v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef hkString::Self *_g4_t_v52;
  typedef hkString::Self *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef float _g4_t_v56;
  typedef int _g4_t_v57;
  typedef float _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v41)) > _g4_s0 ? (8u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v42)) > _g4_s1 ? (16u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v43)) > _g4_s2 ? (16u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v44)) > _g4_s3 ? (20u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v45)) > _g4_s4 ? (20u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v46)) > _g4_s5 ? (24u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v47)) > _g4_s6 ? (24u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v48)) > _g4_s7 ? (24u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v49)) > _g4_s8 ? (24u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v50)) > _g4_s9 ? (24u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v51)) > _g4_s10 ? (24u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v52)) > _g4_s11 ? (24u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v53)) > _g4_s12 ? (24u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v54)) > _g4_s13 ? (28u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v55)) > _g4_s14 ? (28u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v56)) > _g4_s15 ? (28u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v57)) > _g4_s16 ? (28u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v58)) > _g4_s17 ? (28u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v59)) > _g4_s18 ? (28u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v60)) > _g4_s19 ? (28u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v61)) > _g4_s20 ? (28u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v62)) > _g4_s21 ? (32u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v63)) > _g4_s22 ? (36u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v64)) > _g4_s23 ? (40u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v65)) > _g4_s24 ? (56u + sizeof(_g4_t_v65)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 32u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 36u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);

  switch ( a4 )
  {
    case 1:
      *(uint8_t *)a3 = G4_VCALL<int>(*a5, 72, a5[1]) != 0;
      goto LABEL_3;
    case 2:
    case 3:
    case 4:
      *(uint8_t *)a3 = G4_VCALL<int>(*a5, 72, a5[1]);
      goto LABEL_3;
    case 5:
    case 6:
      *(uint16_t *)a3 = G4_VCALL<int>(*a5, 72, a5[1]);
      goto LABEL_3;
    case 7:
    case 8:
      *(uint32_t *)a3 = G4_VCALL<int>(*a5, 72, a5[1]);
      goto LABEL_3;
    case 9:
    case 10:
      *(uint64_t *)a3 = ((int64_t (*)(uint32_t, uint32_t))*(uint32_t *)(*(uint32_t *)*a5 + 80))(*a5, a5[1]);
      goto LABEL_3;
    case 11:
      v58 = ((long double (*)(uint32_t, uint32_t))*(uint32_t *)(*(uint32_t *)*a5 + 64))(*a5, a5[1]);
      *(float *)a3 = v58;
      goto LABEL_3;
    case 12:
    case 13:
      v10 = (uint32_t *)G4_VCALL<int>(*a5, 48, a5[1]);
      *(uint32_t *)a3 = *v10;
      *(uint32_t *)(a3 + 4) = v10[1];
      *(uint32_t *)(a3 + 8) = v10[2];
      *(uint32_t *)(a3 + 12) = v10[3];
      goto LABEL_3;
    case 14:
    case 15:
    case 16:
      v8 = (uint32_t *)G4_VCALL<int>(*a5, 48, a5[1]);
      *(uint32_t *)a3 = *v8;
      *(uint32_t *)(a3 + 4) = v8[1];
      *(uint32_t *)(a3 + 8) = v8[2];
      *(uint32_t *)(a3 + 12) = v8[3];
      *(uint32_t *)(a3 + 16) = v8[4];
      *(uint32_t *)(a3 + 20) = v8[5];
      *(uint32_t *)(a3 + 24) = v8[6];
      *(uint32_t *)(a3 + 28) = v8[7];
      *(uint32_t *)(a3 + 32) = v8[8];
      *(uint32_t *)(a3 + 36) = v8[9];
      *(uint32_t *)(a3 + 40) = v8[10];
      *(uint32_t *)(a3 + 44) = v8[11];
      goto LABEL_3;
    case 17:
    case 18:
      v11 = (uint32_t *)G4_VCALL<int>(*a5, 48, a5[1]);
      *(uint32_t *)a3 = *v11;
      *(uint32_t *)(a3 + 4) = v11[1];
      *(uint32_t *)(a3 + 8) = v11[2];
      *(uint32_t *)(a3 + 12) = v11[3];
      *(uint32_t *)(a3 + 16) = v11[4];
      *(uint32_t *)(a3 + 20) = v11[5];
      *(uint32_t *)(a3 + 24) = v11[6];
      *(uint32_t *)(a3 + 28) = v11[7];
      *(uint32_t *)(a3 + 32) = v11[8];
      *(uint32_t *)(a3 + 36) = v11[9];
      *(uint32_t *)(a3 + 40) = v11[10];
      *(uint32_t *)(a3 + 44) = v11[11];
      *(uint32_t *)(a3 + 48) = v11[12];
      *(uint32_t *)(a3 + 52) = v11[13];
      *(uint32_t *)(a3 + 56) = v11[14];
      *(uint32_t *)(a3 + 60) = v11[15];
      goto LABEL_3;
    case 20:
      if ( a6 == 0 )
        goto LABEL_3;
      v35 = (uint32_t *)G4_VCALL<int>(*a5, 88, a5[1]);
      if ( v35 == nullptr )
        goto LABEL_3;
      v36 = v35[1];
      ++v35[2];
      v37 = v36;
      LOWORD(v36) = 0;
      v59 = v35;
      v35[1] = v36 | (uint16_t)(v37 + 1);
      (*(void (**)(int *))(*v35 + 8))(&v63);
      v43 = v63;
      v45 = v64;
      v23 = v59;
      if ( v63 != 0 || v64 != 0 )
      {
        v38 = a8[1];
        v60 = v38;
        if ( v38 == (a8[2] & 0x3FFFFFFF) )
        {
          v50 = v23;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)a8, 16, v41);
          v60 = a8[1];
          v23 = v50;
          v38 = v60;
        }
        v48 = *a8;
        a8[1] = v38 + 1;
        v39 = v48 + 16 * v60;
        *(uint32_t *)v39 = v43;
        *(uint32_t *)(v39 + 4) = v45;
        *(uint32_t *)(v39 + 8) = a3;
        *(uint8_t *)(v39 + 13) = a7 != 0;
        *(uint8_t *)(v39 + 12) = 0;
      }
      goto LABEL_25;
    case 25:
      if ( a6 != 0 )
      {
        v12 = G4_VCALL<int>(*a5, 88, a5[1]);
        v65 = (uint32_t *)v12;
        if ( v12 != 0 )
        {
          v13 = *(uint32_t *)(v12 + 4);
          ++*(uint32_t *)(v12 + 8);
          v14 = v13;
          LOWORD(v13) = 0;
          *(uint32_t *)(v12 + 4) = v13 | (uint16_t)(v14 + 1);
        }
        hkDataObjectToNative::fillNativeMembers((uint32_t *)(&v62), a2, a3, (const hkDataObject::Self *)&v65, a8);
        v15 = v65;
        v16 = v62;
        if ( v65 != nullptr )
        {
          v17 = v65[1];
          LOWORD(v17) = 0;
          v18 = v17 | (uint16_t)(v65[1] - 1);
          v19 = v65[2];
          v65[1] = v18;
          v15[2] = v19 - 1;
          if ( v19 == 1 )
            G4_VCALL<void>(v15, 4);
        }
        if ( v16 == 1 )
          goto LABEL_18;
      }
      goto LABEL_3;
    case 28:
      if ( *((uint32_t *)a2 + 1) != 0 )
        goto LABEL_18;
      v20 = (uint32_t *)G4_VCALL<int>(*a5, 88, a5[1]);
      if ( v20 == nullptr )
        goto LABEL_3;
      v21 = v20[1];
      ++v20[2];
      v22 = v21;
      LOWORD(v21) = 0;
      v54 = v20;
      v20[1] = v21 | (uint16_t)(v22 + 1);
      (*(void (**)(int *))(*v20 + 8))(&v63);
      v42 = v63;
      v44 = v64;
      v23 = v54;
      if ( v63 != 0 || v64 != 0 )
      {
        v24 = a8[1];
        v55 = v24;
        if ( v24 == (a8[2] & 0x3FFFFFFF) )
        {
          v51 = v23;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)a8, 16, v41);
          v55 = a8[1];
          v23 = v51;
          v24 = v55;
        }
        v46 = *a8;
        a8[1] = v24 + 1;
        v25 = v46 + 16 * v55;
        *(uint32_t *)v25 = v42;
        *(uint32_t *)(v25 + 4) = v44;
        *(uint32_t *)(v25 + 8) = a3;
        *(uint8_t *)(v25 + 13) = a7 != 0;
        *(uint8_t *)(v25 + 12) = 1;
      }
LABEL_25:
      v26 = v23[1];
      v27 = v23[2];
      LOWORD(v26) = 0;
      v23[1] = v26 | (uint16_t)(v23[1] - 1);
      v23[2] = v27 - 1;
      if ( v27 == 1 )
        G4_VCALL<void>(v23, 4);
LABEL_3:
      *a1 = 0;
      return a1;
    case 29:
      if ( *((uint32_t *)a2 + 1) != 0 )
        goto LABEL_18;
      v30 = G4_VCALL<int>(*a5, 56, a5[1]);
      v31 = nullptr;
      if ( v30 != 0 )
      {
        v32 = (hkString::Self *)G4_VCALL<int>(*a5, 56, a5[1]);
        v31 = hkString::strDup(v32);
        if ( v31 != nullptr )
        {
          v33 = a8[4];
          v57 = v33;
          if ( v33 == (a8[5] & 0x3FFFFFFF) )
          {
            v52 = v31;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(a8 + 3),
              8,
              v41);
            v31 = v52;
            v33 = a8[4];
            v57 = v33;
          }
          v47 = a8[3];
          a8[4] = v33 + 1;
          v34 = (hkString::Self **)(v47 + 8 * v57);
          *v34 = v31;
          v34[1] = (hkString::Self *)-1;
        }
      }
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(v31);
      goto LABEL_3;
    case 30:
      *(uint32_t *)a3 = G4_VCALL<int>(*a5, 80, a5[1]);
      goto LABEL_3;
    case 32:
      v56 = ((long double (*)(uint32_t, uint32_t))*(uint32_t *)(*(uint32_t *)*a5 + 64))(*a5, a5[1]);
      *(uint16_t *)a3 = HIWORD(v56);
      goto LABEL_3;
    case 33:
      if ( G4_VCALL<int>(*a5, 56, a5[1]) != 0
        && (v28 = (hkString::Self *)G4_VCALL<int>(*a5, 56, a5[1]),
            (v29 = hkString::strDup(v28)) != nullptr) )
      {
        if ( *((uint32_t *)a2 + 1) != 0 )
        {
          *(uint32_t *)a3 = (uint32_t)(uintptr_t)((char *)v29 + 1);
        }
        else
        {
          v61 = a8[4];
          if ( v61 == (a8[5] & 0x3FFFFFFF) )
          {
            v53 = v29;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(a8 + 3),
              8,
              v41);
            v61 = a8[4];
            v29 = v53;
          }
          v49 = a8[3];
          a8[4] = v61 + 1;
          v40 = (hkString::Self **)(v49 + 8 * v61);
          *v40 = v29;
          v40[1] = (hkString::Self *)-1;
          *(uint32_t *)a3 = (uint32_t)(uintptr_t)(v29);
        }
      }
      else
      {
        *(uint32_t *)a3 = 0;
      }
      goto LABEL_3;
    default:
LABEL_18:
      *a1 = 1;
      return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::Node::Destroy  (binary VA: 0x18ca900)
// Original: hkXmlParser::Node::~Node
// ----------------------------------------------------------------------------
void hkXmlParser::Node::Destroy(hkXmlParser::Node::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::EndElement::Destroy  (binary VA: 0x18cc9b0)
// Original: hkXmlParser::EndElement::~EndElement
// ----------------------------------------------------------------------------
void hkXmlParser::EndElement::Destroy(hkXmlParser::EndElement::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8448);
  hkStringPtr::Destroy((hkXmlParser::EndElement::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::Characters::Destroy  (binary VA: 0x18cc9f0)
// Original: hkXmlParser::Characters::~Characters
// ----------------------------------------------------------------------------
void hkXmlParser::Characters::Destroy(hkXmlParser::Characters::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8468);
  hkStringPtr::Destroy((hkXmlParser::Characters::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::Destroy  (binary VA: 0x18cca30)
// Original: hkXmlParser::~hkXmlParser
// ----------------------------------------------------------------------------
void hkXmlParser::Destroy(hkXmlParser::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 0;
  v2 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8488);
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
  hkStringPtr::Destroy((hkXmlParser::Self *)((char *)self + 20));
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
// Function: hkXmlParser::putBack  (binary VA: 0x18ccae0)
// Original: hkXmlParser::putBack
// ----------------------------------------------------------------------------
int hkXmlParser::putBack(hkXmlParser::Self *self, hkXmlParser::Node::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 3);
  if ( v2 == (*((uint32_t *)self + 4) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkXmlParser::Self *)((char *)self + 8),
      4,
      v4);
    v2 = *((uint32_t *)self + 3);
  }
  result = *((uint32_t *)self + 2);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::EndElement::Destroy_ea18ccb50  (binary VA: 0x18ccb50)
// Original: hkXmlParser::EndElement::~EndElement
// ----------------------------------------------------------------------------
void hkXmlParser::EndElement::Destroy_ea18ccb50(hkXmlParser::EndElement::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8448);
  hkStringPtr::Destroy((hkXmlParser::EndElement::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::Characters::Destroy_ea18ccbd0  (binary VA: 0x18ccbd0)
// Original: hkXmlParser::Characters::~Characters
// ----------------------------------------------------------------------------
void hkXmlParser::Characters::Destroy_ea18ccbd0(hkXmlParser::Characters::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8468);
  hkStringPtr::Destroy((hkXmlParser::Characters::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::Destroy_ea18ccc50  (binary VA: 0x18ccc50)
// Original: hkXmlParser::~hkXmlParser
// ----------------------------------------------------------------------------
void hkXmlParser::Destroy_ea18ccc50(hkXmlParser::Self *self)
{
  int v1;
  int v2;

  hkXmlParser::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::Node::Destroy_ea18cccb0  (binary VA: 0x18cccb0)
// Original: hkXmlParser::Node::~Node
// ----------------------------------------------------------------------------
void hkXmlParser::Node::Destroy_ea18cccb0(hkXmlParser::Node::Self *self)
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
// Function: hkXmlParser::StartElement::Destroy  (binary VA: 0x18ccd10)
// Original: hkXmlParser::StartElement::~StartElement
// ----------------------------------------------------------------------------
void hkXmlParser::StartElement::Destroy(hkXmlParser::StartElement::Self *self)
{
  int v1;
  hkStringPtr::Self *v2;
  hkStringPtr::Self *v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8428);
  v1 = *((uint32_t *)self + 5) - 1;
  v2 = (hkStringPtr::Self *)(*((uint32_t *)self + 4) + 8 * v1 + 4);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v3 = v2;
      v2 = (hkStringPtr::Self *)((char *)v2 - 8);
      hkStringPtr::Destroy((hkStringPtr::Self *)((char *)v3 - 4));
    }
    while ( v1 != -1 );
  }
  v4 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      8 * v4);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  hkStringPtr::Destroy((hkXmlParser::StartElement::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::StartElement::Destroy_ea18ccdd0  (binary VA: 0x18ccdd0)
// Original: hkXmlParser::StartElement::~StartElement
// ----------------------------------------------------------------------------
void hkXmlParser::StartElement::Destroy_ea18ccdd0(hkXmlParser::StartElement::Self *self)
{
  int v1;
  hkStringPtr::Self *v2;
  hkStringPtr::Self *v3;
  int v4;
  int v5;
  int v6;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8428);
  v1 = *((uint32_t *)self + 5) - 1;
  v2 = (hkStringPtr::Self *)(*((uint32_t *)self + 4) + 8 * v1 + 4);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v3 = v2;
      v2 = (hkStringPtr::Self *)((char *)v2 - 8);
      hkStringPtr::Destroy((hkStringPtr::Self *)((char *)v3 - 4));
    }
    while ( v1 != -1 );
  }
  v4 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      8 * v4);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  hkStringPtr::Destroy((hkXmlParser::StartElement::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v5 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v6 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v6 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v5, 12, self, v6);
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::StartElement::getAttribute  (binary VA: 0x18ccec0)
// Original: hkXmlParser::StartElement::getAttribute
// ----------------------------------------------------------------------------
const char * hkXmlParser::StartElement::getAttribute(hkXmlParser::StartElement::Self *self, char *a2, const char *a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v7;
  int v8;

  v3 = *((uint32_t *)self + 5);
  if ( v3 <= 0 )
    return a3;
  v4 = 0;
  v5 = *((uint32_t *)self + 5);
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      while ( (*(uint32_t *)(*((uint32_t *)self + 4) + 8 * v4) & 0xFFFFFFFE) == 0 )
      {
        if ( ++v4 >= v5 )
          return a3;
      }
      if ( hkString::strCmp((hkString::Self *)(*(uint32_t *)(*((uint32_t *)self + 4) + 8 * v4) & 0xFFFFFFFE), a2) == 0 )
        break;
      v5 = *((uint32_t *)self + 5);
      if ( ++v4 >= v5 )
        return a3;
    }
    v7 = (uint32_t *)(*((uint32_t *)self + 4) + 8 * v4);
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      v7 = (uint32_t *)(*((uint32_t *)self + 4) + 8 * v8);
      if ( (*v7 & 0xFFFFFFFE) == 0 )
        break;
      if ( v3 <= ++v8 )
        return a3;
    }
  }
  return (const char *)(v7[1] & 0xFFFFFFFE);
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::translateEntities  (binary VA: 0x18ccf80)
// Original: hkXmlParser::translateEntities
// ----------------------------------------------------------------------------
int hkXmlParser::translateEntities(hkXmlParser::Self *self, char *a2)
{
  char *i;
  char v4;
  char *v5;
  char v6;
  char *v7;
  char v8;
  char *v9;
  const char *v10;
  uint32_t *v11;
  char *v12;
  size_t v13;
  char *v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef char _g4_t_v18;
  typedef hkString::Self *_g4_t_v19;
  typedef const char *_g4_t_v20;
  typedef uint32_t _g4_t_v21[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v17)) > _g4_s1 ? (20u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v18)) > _g4_s2 ? (27u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v20)) > _g4_s4 ? (32u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v21)) > _g4_s5 ? (36u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 27u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);

  for ( i = (char *)self + 1; ; ++i )
  {
    v4 = *a2;
    if ( *a2 == 0 )
      break;
    v5 = a2 + 1;
    if ( v4 != 38 )
    {
      *(i - 1) = v4;
      ++a2;
      continue;
    }
    v6 = a2[1];
    if ( v6 == 59 )
    {
      v17 = a2 + 2;
LABEL_12:
      v10 = "<lt";
      v21[0] = (uint32_t)(uintptr_t)(&off_1B8338C);
      v16 = i;
      v20 = "<lt";
      v21[1] = (uint32_t)(uintptr_t)("&amp");
      v21[4] = 0;
      v19 = (hkString::Self *)v5;
      v21[2] = (uint32_t)(uintptr_t)("\"quot");
      v11 = v21;
      v21[3] = (uint32_t)(uintptr_t)("'apos");
      while ( 1 )
      {
        v12 = (char *)(v10 + 1);
        v18 = *v10;
        v13 = hkString::strLen((hkString::Self *)(v10 + 1));
        if ( hkString::strNcmp(v19, v12, v13) == 0 )
          break;
        v10 = (const char *)*v11++;
        if ( v10 == nullptr )
          return -1;
      }
      i = v16;
      *(v16 - 1) = v18;
      a2 = v17;
      continue;
    }
    if ( v6 == 0 )
      return -1;
    v7 = a2 + 1;
    while ( 1 )
    {
      v8 = *++v7;
      if ( v8 == 59 )
        break;
      if ( v8 == 0 )
        return -1;
    }
    v9 = v7 + 1;
    v17 = v9;
    if ( a2[1] != 35 )
      goto LABEL_12;
    v15 = (char *)(v9 - v5 - 2);
    if ( (int)(uintptr_t)(v15) > 9 )
      return -1;
    hkString::strNcpy((hkString::Self *)&v20, a2 + 2, v15);
    *((uint8_t *)&v21[-1] + (uint32_t)(uintptr_t)(v15)) = 0;
    *(i - 1) = hkString::atoi((hkString::Self *)&v20, nullptr);
    a2 = v17;
  }
  *(i - 1) = 0;
  return i - 1 - (char *)self;
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::canonicalize  (binary VA: 0x18cd130)
// Original: hkXmlParser::canonicalize
// ----------------------------------------------------------------------------
int hkXmlParser::canonicalize(hkXmlParser::Self *self, char *a2, const char *a3)
{
  char v3; // bp
  hkXmlParser::Self *v5;
  char v6;
  const char *v7;
  char v8;

  v3 = 1;
  v5 = self;
  while ( 1 )
  {
    v6 = *a2;
    if ( *a2 == 0 )
      break;
    while ( 1 )
    {
      ++a2;
      if ( v6 == 32 || (uint8_t)(v6 - 9) <= 1u || v6 == 13 )
        break;
      if ( a3 != nullptr )
      {
        v7 = a3;
        while ( 1 )
        {
          v8 = *v7;
          if ( *v7 == 0 )
            break;
          ++v7;
          if ( v6 == v8 )
            goto LABEL_14;
        }
      }
      *(uint8_t *)v5 = v6;
      v3 = 0;
      v6 = *a2;
      v5 = (hkXmlParser::Self *)((char *)v5 + 1);
      if ( *a2 == 0 )
        goto LABEL_11;
    }
LABEL_14:
    if ( v3 == 0 )
    {
      *(uint8_t *)v5 = 32;
      v3 = 1;
      v5 = (hkXmlParser::Self *)((char *)v5 + 1);
    }
  }
LABEL_11:
  if ( v5 != self && v3 != 0 )
  {
    *((uint8_t *)v5 - 1) = 0;
    return v5 - self;
  }
  else
  {
    *(uint8_t *)v5 = 0;
    return v5 - self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::Characters::canonicalize  (binary VA: 0x18cd1e0)
// Original: hkXmlParser::Characters::canonicalize
// ----------------------------------------------------------------------------
hkXmlParser::Characters::Self * hkXmlParser::Characters::canonicalize(hkXmlParser::Characters::Self *self, const char *a2, char *a3)
{
  const char *v3;
  hkXmlParser::Characters::Self *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef hkStringPtr::Self *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef hkXmlParser::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef hkXmlParser::Characters::Self **_g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v13)) > _g4_s6 ? (24u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v14)) > _g4_s7 ? (40u + sizeof(_g4_t_v14)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);

  v14 = &self;
  v3 = a2;
  v4 = self;
  v9 = a3;
  v11 = nullptr;
  v12 = 0;
  v13 = 0x80000000;
  v8 = (hkStringPtr::Self *)(a2 + 12);
  v5 = hkStringPtr::getLength((hkStringPtr::Self *)(a2 + 12)) + 1;
  if ( v5 > 0 )
  {
    v7 = v5;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v10,
      (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
      (int *)&v11,
      v5,
      1);
    v5 = v7;
  }
  v12 = v5;
  if ( hkXmlParser::canonicalize(v11, (char *)(*((uint32_t *)v3 + 3) & 0xFFFFFFFE), v9) == -1 )
  {
    *(uint32_t *)v4 = 1;
  }
  else
  {
    hkStringPtr::opAssign(v8, v11);
    *(uint32_t *)v4 = 0;
  }
  v12 = 0;
  if ( v13 >= 0 )
    (*(void (**)(uint32_t *, hkXmlParser::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v11,
      v13 & 0x3FFFFFFF);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::Construct  (binary VA: 0x18cd300)
// Original: hkXmlParser::hkXmlParser
// ----------------------------------------------------------------------------
void hkXmlParser::Construct(hkXmlParser::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8488);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  hkStringPtr::Construct((hkXmlParser::Self *)((char *)self + 20));
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::parse  (binary VA: 0x18cd350)
// Original: hkXmlParser::parse
// ----------------------------------------------------------------------------
uint32_t * hkXmlParser::parse(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  uint32_t *v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v11[6] = (uint32_t)(uintptr_t)(&a1);
  v4 = a2;
  v5 = a1;
  (*(void (**)(int *, int, uint32_t *, int, int, int, int))(*(uint32_t *)a2 + 20))(&v10, a2, v11, a4, v7, a4, a3);
  if ( v10 != 0 )
    goto LABEL_5;
  if ( v11[0] == 0 )
  {
    *v5 = 0;
    return v5;
  }
  if ( *(uint32_t *)(v11[0] + 8) != 1 )
  {
    hkStringPtr::printf((hkStringPtr::Self *)(v4 + 20), "Document does not start with an element.");
LABEL_5:
    *v5 = 1;
    return v5;
  }
  (*(void (**)(uint32_t *, int, uint32_t, int, int))(*(uint32_t *)v4 + 28))(v5, v4, v11[0], v9, v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::getLastError  (binary VA: 0x18cd420)
// Original: hkXmlParser::getLastError
// ----------------------------------------------------------------------------
unsigned int hkXmlParser::getLastError(hkXmlParser::Self *self)
{
  return *((uint32_t *)self + 5) & 0xFFFFFFFE;
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::nextNode  (binary VA: 0x18cd430)
// Original: hkXmlParser::nextNode
// ----------------------------------------------------------------------------
hkXmlParser::Self * hkXmlParser::nextNode(hkXmlParser::Self *self, hkXmlParser::Node::Self **a2, hkStreamReader::Self *a3, hkStreamReader::Self *a4)
{
  hkXmlParser::Self *v4;
  hkXmlParser::Node::Self **v5;
  hkXmlParser::Node::Self *v6;
  hkXmlParser::Node::Self *v7;
  int *i;
  int j;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  char v16;
  int k;
  int v18;
  int v19;
  int v20;
  int v21;
  bool v22;
  char v23;
  int v24;
  bool v25;
  int v26;
  hkString::Self *v27;
  int v28;
  int v29;
  uint32_t *v30;
  unsigned int v31;
  hkStringPtr::Self *v32;
  int m;
  int v34;
  char *v35;
  int v36;
  int v37;
  int n;
  hkStringPtr::Self *v39;
  int v40;
  hkXmlParser::Self *v41;
  uint8_t *v42;
  int v43;
  hkString::Self *v44;
  int v45;
  hkXmlParser::Self *v46;
  uint32_t *v47;
  int v48;
  uint32_t *v49;
  char v50;
  char v51;
  uint32_t *v52;
  int v53;
  bool v54;
  hkStringPtr::Self *v55;
  hkStringPtr::Self *v56;
  hkString::Self *v57;
  int address;
  uint32_t *v59;
  int v60;
  char v61;
  char v62;
  hkString::Self *v63;
  char *v64;
  char v65;
  int v66;
  typedef int _g4_t_v67;
  typedef hkXmlParser::Node::Self **_g4_t_v68;
  typedef hkStreamReader::Self *_g4_t_v69;
  typedef hkXmlParser::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef hkString::Self *_g4_t_v73;
  typedef hkString::Self *_g4_t_v74;
  typedef int *_g4_t_v75;
  typedef bool _g4_t_v76;
  typedef int _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef hkStringPtr::Self *_g4_t_v80;
  typedef unsigned int _g4_t_v81;
  typedef hkStringPtr::Self *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef hkStringPtr::Self *_g4_t_v84;
  typedef hkStringPtr::Self *_g4_t_v85;
  typedef hkStringPtr::Self *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef uint8_t _g4_t_v92[7];
  typedef char _g4_t_v93[9];
  typedef char _g4_t_v94[4];
  typedef char _g4_t_v95[4];
  typedef uint8_t _g4_t_v96[8];
  typedef int *_g4_t_v97;
  typedef hkXmlParser::Self *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef hkXmlParser::Self *_g4_t_v101;
  typedef hkStringPtr::Self *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef char _g4_t_v104;
  typedef char _g4_t_v105[15];
  typedef uint8_t _g4_t_v106[16];
  typedef hkString::Self *_g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef hkXmlParser::Self **_g4_t_v110;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v67)) > _g4_s0 ? (12u + sizeof(_g4_t_v67)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v68)) > _g4_s1 ? (36u + sizeof(_g4_t_v68)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v69)) > _g4_s2 ? (40u + sizeof(_g4_t_v69)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v70)) > _g4_s3 ? (44u + sizeof(_g4_t_v70)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v71)) > _g4_s4 ? (48u + sizeof(_g4_t_v71)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v72)) > _g4_s5 ? (48u + sizeof(_g4_t_v72)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v73)) > _g4_s6 ? (52u + sizeof(_g4_t_v73)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v74)) > _g4_s7 ? (52u + sizeof(_g4_t_v74)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v75)) > _g4_s8 ? (56u + sizeof(_g4_t_v75)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v76)) > _g4_s9 ? (56u + sizeof(_g4_t_v76)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v77)) > _g4_s10 ? (60u + sizeof(_g4_t_v77)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v78)) > _g4_s11 ? (60u + sizeof(_g4_t_v78)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v79)) > _g4_s12 ? (60u + sizeof(_g4_t_v79)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v80)) > _g4_s13 ? (60u + sizeof(_g4_t_v80)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v81)) > _g4_s14 ? (60u + sizeof(_g4_t_v81)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v82)) > _g4_s15 ? (60u + sizeof(_g4_t_v82)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v83)) > _g4_s16 ? (60u + sizeof(_g4_t_v83)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v84)) > _g4_s17 ? (64u + sizeof(_g4_t_v84)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v85)) > _g4_s18 ? (64u + sizeof(_g4_t_v85)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v86)) > _g4_s19 ? (64u + sizeof(_g4_t_v86)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v87)) > _g4_s20 ? (68u + sizeof(_g4_t_v87)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v88)) > _g4_s21 ? (68u + sizeof(_g4_t_v88)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v89)) > _g4_s22 ? (68u + sizeof(_g4_t_v89)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v90)) > _g4_s23 ? (68u + sizeof(_g4_t_v90)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v91)) > _g4_s24 ? (68u + sizeof(_g4_t_v91)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v92)) > _g4_s25 ? (72u + sizeof(_g4_t_v92)) : _g4_s25,
    _g4_s27 = (79u + sizeof(_g4_t_v93)) > _g4_s26 ? (79u + sizeof(_g4_t_v93)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v94)) > _g4_s27 ? (88u + sizeof(_g4_t_v94)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v95)) > _g4_s28 ? (92u + sizeof(_g4_t_v95)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v96)) > _g4_s29 ? (96u + sizeof(_g4_t_v96)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v97)) > _g4_s30 ? (104u + sizeof(_g4_t_v97)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v98)) > _g4_s31 ? (112u + sizeof(_g4_t_v98)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v99)) > _g4_s32 ? (116u + sizeof(_g4_t_v99)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_v100)) > _g4_s33 ? (120u + sizeof(_g4_t_v100)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v101)) > _g4_s34 ? (128u + sizeof(_g4_t_v101)) : _g4_s34,
    _g4_s36 = (132u + sizeof(_g4_t_v102)) > _g4_s35 ? (132u + sizeof(_g4_t_v102)) : _g4_s35,
    _g4_s37 = (136u + sizeof(_g4_t_v103)) > _g4_s36 ? (136u + sizeof(_g4_t_v103)) : _g4_s36,
    _g4_s38 = (144u + sizeof(_g4_t_v104)) > _g4_s37 ? (144u + sizeof(_g4_t_v104)) : _g4_s37,
    _g4_s39 = (145u + sizeof(_g4_t_v105)) > _g4_s38 ? (145u + sizeof(_g4_t_v105)) : _g4_s38,
    _g4_s40 = (160u + sizeof(_g4_t_v106)) > _g4_s39 ? (160u + sizeof(_g4_t_v106)) : _g4_s39,
    _g4_s41 = (176u + sizeof(_g4_t_v107)) > _g4_s40 ? (176u + sizeof(_g4_t_v107)) : _g4_s40,
    _g4_s42 = (180u + sizeof(_g4_t_v108)) > _g4_s41 ? (180u + sizeof(_g4_t_v108)) : _g4_s41,
    _g4_s43 = (184u + sizeof(_g4_t_v109)) > _g4_s42 ? (184u + sizeof(_g4_t_v109)) : _g4_s42,
    _g4_s44 = (328u + sizeof(_g4_t_v110)) > _g4_s43 ? (328u + sizeof(_g4_t_v110)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 12u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 52u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 56u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 56u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 60u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 60u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 60u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 60u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 60u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 60u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 64u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 64u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 64u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 68u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 68u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 68u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 68u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 68u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 72u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 79u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 88u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 92u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 96u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 104u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 112u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 116u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 120u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 128u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 132u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 136u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 144u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 145u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 160u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 176u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 180u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 184u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 328u);

  v110 = &self;
  v70 = self;
  v4 = self;
  v5 = a2;
  v68 = a2;
  v69 = a3;
  hkIstream::Construct((hkIstream::Self *)v96, a4);
  v6 = v5[3];
  if ( v6 != nullptr )
  {
    v7 = v5[2];
    *(uint32_t *)v4 = 0;
    *(uint32_t *)v69 = *((uint32_t *)v7 + (uint32_t)(uintptr_t)(v6) - 1);
    v5[3] = (hkXmlParser::Node::Self *)((char *)v5[3] - 1);
    goto LABEL_3;
  }
  *(uint32_t *)v69 = 0;
  hkIstream::isOk((hkIstream::Self *)v93);
  if ( v93[0] == 0 )
  {
    hkStringPtr::opAssign((hkStringPtr::Self *)(v68 + 5), (hkString::Self *)"End of stream");
    *(uint32_t *)v70 = 1;
    goto LABEL_3;
  }
  v75 = v97;
  v98 = nullptr;
  v99 = 0;
  v100 = 0x80000000;
  for ( i = v97; ; i = v75 )
  {
    while ( 1 )
    {
LABEL_6:
      v87 = G4_VCALL<int>(i, 32, &v104, &dword_20);
      if ( v87 == 0 )
      {
LABEL_79:
        hkStringPtr::printf((hkStringPtr::Self *)(v68 + 5), "premature end of stream");
        *(uint32_t *)v70 = 1;
        goto LABEL_80;
      }
      if ( v104 == 60 )
        break;
      while ( 1 )
      {
        for ( j = 0; j < v87; ++j )
        {
          if ( v105[j - 1] == 60 )
            break;
        }
        v11 = v99;
        v84 = (hkStringPtr::Self *)(v99 + j);
        if ( v99 + j > (v100 & 0x3FFFFFFF) )
        {
          v79 = v99;
          v18 = 2 * (v100 & 0x3FFFFFFF);
          if ( v18 < (int)(uintptr_t)(v84) )
            v18 = v99 + j;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v92,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (int *)&v98,
            v18,
            1);
          v11 = v79;
        }
        v77 = v11;
        hkMemUtil::memMove((hkMemUtil::Self *)((char *)v98 + (uint32_t)(uintptr_t)(v84)), (char *)v98 + v11, 0);
        v12 = (char *)v98 + v77;
        if ( j > 0 )
        {
          if ( (v12 >= (char *)(uintptr_t)(v106) || &v104 >= v12 + 16) && (unsigned int)j > 0xF )
          {
            v13 = 0;
            v78 = 0;
            v71 = 16 * ((unsigned int)j >> 4);
            do
            {
              ++v78;
              *(__m128i *)&v12[v13] = *(__m128i *)&v105[v13 - 1];
              v13 += 16;
            }
            while ( v78 < (unsigned int)j >> 4 );
            if ( v71 != j )
            {
              v12[v71] = v105[v71 - 1];
              if ( v71 + 1 < j )
              {
                v12[v71 + 1] = v105[v71];
                if ( v71 + 2 < j )
                {
                  v12[v71 + 2] = v105[v71 + 1];
                  if ( v71 + 3 < j )
                  {
                    v12[v71 + 3] = v105[v71 + 2];
                    if ( v71 + 4 < j )
                    {
                      v12[v71 + 4] = v105[v71 + 3];
                      if ( j > v71 + 5 )
                      {
                        v12[v71 + 5] = v105[v71 + 4];
                        if ( j > v71 + 6 )
                        {
                          v12[v71 + 6] = v105[v71 + 5];
                          if ( j > v71 + 7 )
                          {
                            v12[v71 + 7] = v105[v71 + 6];
                            if ( j > v71 + 8 )
                            {
                              v12[v71 + 8] = v105[v71 + 7];
                              if ( j > v71 + 9 )
                              {
                                v12[v71 + 9] = v105[v71 + 8];
                                if ( j > v71 + 10 )
                                {
                                  v12[v71 + 10] = v105[v71 + 9];
                                  if ( j > v71 + 11 )
                                  {
                                    v12[v71 + 11] = v105[v71 + 10];
                                    if ( j > v71 + 12 )
                                    {
                                      v12[v71 + 12] = v105[v71 + 11];
                                      if ( j > v71 + 13 )
                                      {
                                        v12[v71 + 13] = v105[v71 + 12];
                                        if ( j > v71 + 14 )
                                          v12[v71 + 14] = v105[v71 + 13];
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            for ( k = 0; k != j; ++k )
              v12[k] = v105[k - 1];
          }
        }
        v99 = (int)(uintptr_t)(v84);
        v14 = *v75;
        if ( j != v87 )
          break;
        (*(void (**)(int *, int))(v14 + 28))(v75, j);
        v87 = G4_VCALL<int>(v75, 32, &v104, 32);
        if ( v87 == 0 )
          goto LABEL_35;
      }
      (*(void (**)(int *, int))(v14 + 28))(v75, j);
      i = v75;
    }
    if ( v87 <= 1 )
      goto LABEL_79;
    if ( v105[0] != 63 )
      break;
    v19 = 0;
    v24 = v87;
    while ( 1 )
    {
      v25 = v24 == 0;
      if ( v24 > 0 )
        break;
LABEL_72:
      if ( !v25 )
        goto LABEL_67;
      G4_VCALL<void>(v75, 28, v19);
      v24 = G4_VCALL<int>(v75, 32, &v104, 32);
      if ( v24 == 0 )
      {
LABEL_35:
        i = v75;
        goto LABEL_6;
      }
      v19 = 0;
    }
    while ( v105[v19 - 1] != 62 )
    {
      v25 = ++v19 == v24;
      if ( v19 >= v24 )
        goto LABEL_72;
    }
LABEL_67:
    G4_VCALL<void>(v75, 28, v19 + 1);
  }
  if ( v87 > 3 && hkString::strNcmp((hkString::Self *)"!--", v105, 3u) == 0 )
  {
    v107 = (hkString::Self *)(elf_hash_chain + 128409);
    v19 = 0;
    v20 = 0;
    v21 = v87;
    while ( 1 )
    {
      v22 = v19 == v21;
      if ( v19 >= v21 )
        break;
LABEL_62:
      v23 = v105[v19 - 1];
      if ( v23 == *((uint8_t *)&v107 + v20) )
      {
        ++v20;
        if ( *((uint8_t *)&v107 + v20) == 0 )
          goto LABEL_67;
      }
      else if ( v23 != 45 )
      {
        v20 = 0;
      }
      ++v19;
    }
    while ( v22 )
    {
      G4_VCALL<void>(v75, 28, v19);
      v21 = G4_VCALL<int>(v75, 32, &v104, 32);
      if ( v21 == 0 )
        goto LABEL_35;
      v19 = 0;
      v22 = v21 == 0;
      if ( v21 > 0 )
        goto LABEL_62;
    }
    goto LABEL_67;
  }
  if ( v99 == 0 )
  {
    v101 = nullptr;
    v102 = nullptr;
    v103 = 0x80000000;
    v31 = 0x80000000;
    v32 = nullptr;
    for ( m = 0; ; m = 0 )
    {
      if ( v87 > 0 )
      {
        do
        {
          if ( v105[m - 1] == 62 )
            break;
          ++m;
        }
        while ( m < v87 );
      }
      v34 = v31 & 0x3FFFFFFF;
      v85 = (hkStringPtr::Self *)((char *)v32 + m);
      if ( (int)(uintptr_t)(v32) + m > v34 )
      {
        v82 = v32;
        v37 = 2 * v34;
        if ( v37 < (int)(uintptr_t)(v85) )
          v37 = (int)(uintptr_t)(v32) + m;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v92,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)&v101,
          v37,
          1);
        v32 = v82;
      }
      v80 = v32;
      hkMemUtil::memMove((hkMemUtil::Self *)((char *)v101 + (uint32_t)(uintptr_t)(v85)), (char *)v101 + (uint32_t)(uintptr_t)(v32), 0);
      v35 = (char *)v80 + (uint32_t)(uintptr_t)(v101);
      if ( m > 0 )
      {
        if ( (v35 >= (char *)(uintptr_t)(v106) || &v104 >= (char *)v80 + (int)(uintptr_t)(v101) + 16) && (unsigned int)m > 0xF )
        {
          v36 = 0;
          v81 = 0;
          v72 = 16 * ((unsigned int)m >> 4);
          do
          {
            ++v81;
            *(__m128i *)&v35[v36] = *(__m128i *)&v105[v36 - 1];
            v36 += 16;
          }
          while ( (unsigned int)m >> 4 > v81 );
          if ( v72 != m )
          {
            v35[v72] = v105[v72 - 1];
            if ( m > v72 + 1 )
            {
              v35[v72 + 1] = v105[v72];
              if ( m > v72 + 2 )
              {
                v35[v72 + 2] = v105[v72 + 1];
                if ( m > v72 + 3 )
                {
                  v35[v72 + 3] = v105[v72 + 2];
                  if ( m > v72 + 4 )
                  {
                    v35[v72 + 4] = v105[v72 + 3];
                    if ( m > v72 + 5 )
                    {
                      v35[v72 + 5] = v105[v72 + 4];
                      if ( m > v72 + 6 )
                      {
                        v35[v72 + 6] = v105[v72 + 5];
                        if ( m > v72 + 7 )
                        {
                          v35[v72 + 7] = v105[v72 + 6];
                          if ( m > v72 + 8 )
                          {
                            v35[v72 + 8] = v105[v72 + 7];
                            if ( m > v72 + 9 )
                            {
                              v35[v72 + 9] = v105[v72 + 8];
                              if ( m > v72 + 10 )
                              {
                                v35[v72 + 10] = v105[v72 + 9];
                                if ( m > v72 + 11 )
                                {
                                  v35[v72 + 11] = v105[v72 + 10];
                                  if ( m > v72 + 12 )
                                  {
                                    v35[v72 + 12] = v105[v72 + 11];
                                    if ( m > v72 + 13 )
                                    {
                                      v35[v72 + 13] = v105[v72 + 12];
                                      if ( m > v72 + 14 )
                                        v35[v72 + 14] = v105[v72 + 13];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          for ( n = 0; n != m; ++n )
            v35[n] = v105[n - 1];
        }
      }
      v102 = v85;
      if ( m != v87 )
        break;
      G4_VCALL<void>(v75, 28, m);
      v87 = G4_VCALL<int>(v75, 32, &v104, 32);
      if ( v87 == 0 )
        goto LABEL_120;
      v32 = v102;
      v31 = v103;
    }
    G4_VCALL<void>(v75, 28, m + 1);
LABEL_120:
    v39 = v102;
    if ( v102 == nullptr )
    {
      hkStringPtr::printf((hkStringPtr::Self *)(v68 + 5), "Empty tag");
LABEL_122:
      *(uint32_t *)v70 = 1;
LABEL_123:
      v102 = nullptr;
      if ( v103 >= 0 )
        (*(void (**)(uint32_t *, hkXmlParser::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v101,
          v103 & 0x3FFFFFFF);
      goto LABEL_80;
    }
    if ( v102 == (hkStringPtr::Self *)(v103 & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v101, 1, v67);
      v39 = v102;
    }
    *((uint8_t *)v39 + (uint32_t)(uintptr_t)(v101)) = 0;
    v102 = (hkStringPtr::Self *)((char *)v102 + 1);
    v40 = hkXmlParser::translateEntities(v101, (char *)v101);
    if ( v40 == -1 )
    {
      hkStringPtr::printf((hkStringPtr::Self *)(v68 + 5), "Bad tag");
      goto LABEL_122;
    }
    v41 = v101;
    v102 = (hkStringPtr::Self *)v40;
    if ( *((uint8_t *)v101 + 1) == 47 )
    {
      hkStringBuf::Construct((hkStringBuf::Self *)&v107, (hkXmlParser::Self *)((char *)v101 + 2));
      v57 = v107;
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v59 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                        *(uint32_t *)(*(uint32_t *)address + 44),
                        16);
      v59[1] = -65535;
      v59[2] = 2;
      *v59 = ((uint32_t)(uintptr_t)&off_20A8448);
      hkStringPtr::Construct((hkStringPtr::Self *)(v59 + 3), v57);
      v60 = v109;
      v54 = v109 < 0;
      v108 = 0;
      *(uint32_t *)v69 = (uint32_t)(uintptr_t)(v59);
      *(uint32_t *)v70 = 0;
      if ( !v54 )
        (*(void (**)(uint32_t *, hkString::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v107,
          v60 & 0x3FFFFFFF);
      goto LABEL_123;
    }
    v42 = (uint8_t *)((char *)v101 + v40 - 1);
    v76 = *v42 == 47;
    v43 = v40;
    if ( *v42 == 47 )
    {
      *v42 = 0;
      v41 = v101;
      v43 = (int)(uintptr_t)(v102) - 1;
      v102 = (hkStringPtr::Self *)((char *)v102 - 1);
    }
    if ( v43 <= 0 )
    {
      v107 = nullptr;
      v108 = 0;
      v109 = 0x80000000;
      if ( v43 == 0 )
      {
        v44 = (hkString::Self *)((hkXmlParser::Self *)((char *)v41 + 1));
LABEL_136:
        v89 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v47 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v89 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v89 + 44),
                          28);
        v47[1] = -65535;
        v47[2] = 1;
        *v47 = ((uint32_t)(uintptr_t)&off_20A8428);
        hkStringPtr::Construct((hkStringPtr::Self *)(v47 + 3), v44);
        v47[4] = 0;
        v47[5] = 0;
        v47[6] = 0x80000000;
        v47[4] = (uint32_t)(uintptr_t)(v107);
        v107 = nullptr;
        v47[5] = v108;
        v108 = 0;
        v47[6] = v109;
        v109 = 0x80000000;
        if ( v76 )
        {
          v86 = *((hkStringPtr::Self **)*v68 + 6);
          v52 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v89 + 44) + 8))(
                            *(uint32_t *)(*(uint32_t *)v89 + 44),
                            16);
          v52[1] = -65535;
          v52[2] = 2;
          *v52 = ((uint32_t)(uintptr_t)&off_20A8448);
          v91 = (int)(uintptr_t)(v52);
          hkStringPtr::Construct((hkStringPtr::Self *)(v52 + 3), v44);
          ((void (*)(hkXmlParser::Node::Self **, int))v86)(v68, v91);
          v53 = v108 - 1;
          v54 = v108 - 1 < 0;
          *(uint32_t *)v69 = (uint32_t)(uintptr_t)(v47);
          *(uint32_t *)v70 = 0;
          v55 = (hkStringPtr::Self *)((hkString::Self *)((char *)v107 + 8 * v53 + 4));
          if ( !v54 )
          {
            do
            {
              --v53;
              hkStringPtr::Destroy(v55);
              v56 = v55;
              v55 = (hkStringPtr::Self *)((char *)v55 - 8);
              hkStringPtr::Destroy((hkStringPtr::Self *)((char *)v56 - 4));
            }
            while ( v53 != -1 );
          }
        }
        else
        {
          *(uint32_t *)v69 = (uint32_t)(uintptr_t)(v47);
          *(uint32_t *)v70 = 0;
        }
        v108 = 0;
        if ( v109 >= 0 )
          (*(void (**)(uint32_t *, hkString::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v107,
            8 * v109);
        v107 = nullptr;
        v109 = 0x80000000;
        goto LABEL_123;
      }
      v83 = 0;
      v90 = 0;
    }
    else
    {
      if ( *(uint8_t *)v41 == 32 )
      {
        v83 = 0;
        v90 = 0;
      }
      else
      {
        v44 = (hkString::Self *)((hkXmlParser::Self *)((char *)v41 + 1));
        v45 = 0;
        v46 = (hkXmlParser::Self *)((char *)v41 + 1);
        do
        {
          if ( ++v45 == v43 )
          {
            v107 = nullptr;
            v108 = 0;
            v109 = 0x80000000;
            goto LABEL_136;
          }
          v41 = v46;
          v46 = (hkXmlParser::Self *)((char *)v46 + 1);
        }
        while ( *((uint8_t *)v46 - 1) != 32 );
        v90 = v45;
        v83 = v45;
      }
      v107 = nullptr;
      v108 = 0;
      v109 = 0x80000000;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v50 = *(uint8_t *)v41;
        if ( *(uint8_t *)v41 != 32 && (uint8_t)(v50 - 9) > 1u && v50 != 13 )
          break;
        v41 = (hkXmlParser::Self *)((char *)v41 + 1);
      }
      v73 = (hkString::Self *)(v41);
      if ( v50 == 0 )
        break;
      hkStringPtr::Construct((hkStringPtr::Self *)v94);
      hkStringPtr::Construct((hkStringPtr::Self *)v95);
      while ( 1 )
      {
        v51 = *(uint8_t *)v41;
        if ( *(uint8_t *)v41 == 32 || (uint8_t)(v51 - 9) <= 1u || v51 == 13 || v51 == 61 )
          break;
        v41 = (hkXmlParser::Self *)((char *)v41 + 1);
        if ( v51 == 0 )
          goto LABEL_159;
      }
      hkStringPtr::set((hkStringPtr::Self *)v94, v73, v41 - (hkXmlParser::Self *)(v73));
      while ( 1 )
      {
        v61 = *(uint8_t *)v41;
        if ( *(uint8_t *)v41 != 32 && (uint8_t)(v61 - 9) > 1u && v61 != 13 )
          break;
        v41 = (hkXmlParser::Self *)((char *)v41 + 1);
      }
      if ( v61 != 61 )
        goto LABEL_159;
      do
      {
        do
        {
          v62 = *((uint8_t *)v41 + 1);
          v41 = (hkXmlParser::Self *)((char *)v41 + 1);
        }
        while ( v62 == 32 );
      }
      while ( (uint8_t)(v62 - 9) <= 1u || v62 == 13 );
      if ( v62 != 34 )
      {
LABEL_159:
        hkStringPtr::Destroy((hkStringPtr::Self *)v95);
        hkStringPtr::Destroy((hkStringPtr::Self *)v94);
        break;
      }
      v63 = (hkString::Self *)((hkXmlParser::Self *)((char *)v41 + 1));
      v64 = (char *)v41 + 1;
      while ( 1 )
      {
        v65 = *v64;
        if ( *v64 == 34 )
          break;
        ++v64;
        if ( v65 == 0 )
          goto LABEL_159;
      }
      hkStringPtr::set((hkStringPtr::Self *)v95, v63, v64 - (char *)v63);
      v66 = v108;
      if ( v108 == (v109 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v107, 8, v67);
        v66 = v108;
      }
      v41 = (hkXmlParser::Self *)(v64 + 1);
      v74 = (hkString::Self *)((char *)v107 + 8 * v66);
      hkStringPtr::Construct(v74, (const hkStringPtr::Self *)v94);
      hkStringPtr::Construct((hkString::Self *)((char *)v74 + 4), (const hkStringPtr::Self *)v95);
      ++v108;
      hkStringPtr::Destroy((hkStringPtr::Self *)v95);
      hkStringPtr::Destroy((hkStringPtr::Self *)v94);
    }
    *((uint8_t *)v101 + v83) = 0;
    v102 = (hkStringPtr::Self *)v90;
    v44 = (hkString::Self *)((hkXmlParser::Self *)((char *)v101 + 1));
    goto LABEL_136;
  }
  if ( v99 <= 0 )
  {
    v26 = v99;
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = *((uint8_t *)v98 + v15);
      if ( v16 != 32 && (uint8_t)(v16 - 9) > 1u && v16 != 13 )
        break;
      if ( ++v15 == v99 )
        goto LABEL_46;
    }
    if ( v99 == v15 )
    {
LABEL_46:
      v99 = 0;
      i = v75;
      goto LABEL_6;
    }
    v26 = v99;
    if ( v99 == (v100 & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v98, 1, v67);
      v26 = v99;
    }
  }
  *((uint8_t *)v98 + v26) = 0;
  v27 = (hkString::Self *)(v98);
  ++v99;
  v28 = hkXmlParser::translateEntities(v98, (char *)v98);
  if ( v28 != 1 || *(uint8_t *)v27 != 0 )
  {
    v88 = v28;
    v29 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v30 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v29 + 44) + 8))(
                      *(uint32_t *)(*(uint32_t *)v29 + 44),
                      16);
    v30[1] = -65535;
    v30[2] = 3;
    *v30 = ((uint32_t)(uintptr_t)&off_20A8468);
    hkStringPtr::Construct((hkStringPtr::Self *)(v30 + 3), v27, v88);
    *(uint32_t *)v69 = (uint32_t)(uintptr_t)(v30);
  }
  else
  {
    v48 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v49 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v48 + 44) + 8))(
                      *(uint32_t *)(*(uint32_t *)v48 + 44),
                      16);
    v49[1] = -65535;
    v49[2] = 3;
    *v49 = ((uint32_t)(uintptr_t)&off_20A8468);
    hkStringPtr::Construct((hkStringPtr::Self *)(v49 + 3), nullptr);
    *(uint32_t *)v69 = (uint32_t)(uintptr_t)(v49);
  }
  *(uint32_t *)v70 = 0;
LABEL_80:
  v99 = 0;
  if ( v100 >= 0 )
    (*(void (**)(uint32_t *, hkXmlParser::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v98,
      v100 & 0x3FFFFFFF);
  v98 = nullptr;
  v100 = 0x80000000;
LABEL_3:
  hkIstream::Destroy((hkIstream::Self *)v96);
  return v70;
}

// ----------------------------------------------------------------------------
// Function: hkXmlParser::expandNode  (binary VA: 0x18ce5f0)
// Original: hkXmlParser::expandNode
// ----------------------------------------------------------------------------
uint32_t * hkXmlParser::expandNode(int a1, int a2, int a3, char **a4, hkStreamReader::Self *a5)
{
  char **v5;
  char *v6;
  char **v7;
  char *v8;
  char *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int32_t v13; // kr00_4
  int32_t v14;
  int32_t v15; // ett
  int v16;
  int *v17;
  int v18;
  int v19;
  int32_t v20; // kr04_4
  int32_t v21;
  int32_t v22; // ett
  int v23;
  uint32_t *v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  int v28;
  int v29;
  int32_t v30; // kr08_4
  int32_t v31;
  int32_t v32; // ett
  uint32_t *v33;
  volatile int32_t *v34;
  int v35;
  int32_t v36; // kr0C_4
  int32_t v37;
  int32_t v38; // ett
  uint32_t *v39;
  uint32_t *v40;
  int v41;
  int v42;
  int32_t v43; // kr10_4
  int32_t v44;
  int32_t v45; // ett
  uint32_t *v46;
  volatile int32_t *v47;
  int v48;
  int32_t v49; // kr14_4
  int32_t v50;
  int32_t v51; // ett
  int v52;
  int v54;
  int32_t v55; // kr18_4
  int v56;
  int32_t v57; // kr1C_4
  volatile int32_t *v58;
  int v59;
  int32_t v60; // kr20_4
  volatile int32_t *v61;
  int v62;
  int32_t v63; // kr24_4
  hkString::Self *v64;
  unsigned int v65;
  int v66;
  int v67;
  int32_t v68; // kr28_4
  int v69;
  int32_t v70; // kr2C_4
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef hkIstream::Self *_g4_t_v75;
  typedef char **_g4_t_v76;
  typedef int *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef int _g4_t_address;
  typedef int _g4_t_v81;
  typedef char *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef hkStreamReader::Self *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int *_g4_t_v88;
  typedef volatile int32_t *_g4_t_v89;
  typedef int *_g4_t_v90;
  typedef uint32_t *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef uint32_t _g4_t_v94[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v71)) > _g4_s0 ? (0u + sizeof(_g4_t_v71)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v72)) > _g4_s1 ? (4u + sizeof(_g4_t_v72)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v73)) > _g4_s2 ? (8u + sizeof(_g4_t_v73)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v74)) > _g4_s3 ? (12u + sizeof(_g4_t_v74)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v75)) > _g4_s4 ? (16u + sizeof(_g4_t_v75)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v76)) > _g4_s5 ? (20u + sizeof(_g4_t_v76)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v77)) > _g4_s6 ? (20u + sizeof(_g4_t_v77)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v78)) > _g4_s7 ? (24u + sizeof(_g4_t_v78)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v79)) > _g4_s8 ? (24u + sizeof(_g4_t_v79)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_address)) > _g4_s9 ? (28u + sizeof(_g4_t_address)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v81)) > _g4_s10 ? (28u + sizeof(_g4_t_v81)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v82)) > _g4_s11 ? (32u + sizeof(_g4_t_v82)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v83)) > _g4_s12 ? (36u + sizeof(_g4_t_v83)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v84)) > _g4_s13 ? (36u + sizeof(_g4_t_v84)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v85)) > _g4_s14 ? (40u + sizeof(_g4_t_v85)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v86)) > _g4_s15 ? (40u + sizeof(_g4_t_v86)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v87)) > _g4_s16 ? (44u + sizeof(_g4_t_v87)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v88)) > _g4_s17 ? (44u + sizeof(_g4_t_v88)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v89)) > _g4_s18 ? (48u + sizeof(_g4_t_v89)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v90)) > _g4_s19 ? (48u + sizeof(_g4_t_v90)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v91)) > _g4_s20 ? (48u + sizeof(_g4_t_v91)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v92)) > _g4_s21 ? (52u + sizeof(_g4_t_v92)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v93)) > _g4_s22 ? (56u + sizeof(_g4_t_v93)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v94)) > _g4_s23 ? (60u + sizeof(_g4_t_v94)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 0u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 4u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 8u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 12u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 16u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 20u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 20u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 24u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 24u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 28u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 28u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 32u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 36u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 36u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 40u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 44u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 48u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 48u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 48u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 52u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 56u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 60u);

  v94[5] = (uint32_t)(uintptr_t)(&a1);
  v78 = a1;
  v87 = a2;
  v83 = a3;
  v5 = a4;
  v76 = a4;
  v85 = a5;
  hkIstream::Construct((hkIstream::Self *)v94, a5);
  v6 = *v5;
  if ( *v5 != nullptr )
  {
    v7 = *((char ***)v6 + 2);
    if ( v7 != nullptr )
    {
      v8 = *v7;
      if ( v6 == *v7 )
      {
        *v7 = nullptr;
      }
      else
      {
        while ( v6 != *((char **)v8 + 1) )
          v8 = *((char **)v8 + 1);
        *((uint32_t *)v8 + 1) = *((uint32_t *)v6 + 1);
      }
      *((uint32_t *)v6 + 2) = 0;
    }
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    while ( 1 )
    {
      while ( *(uint32_t *)v6 != 0 )
        v6 = *(char **)v6;
      v9 = *((char **)v6 + 1);
      if ( v9 == nullptr )
        v9 = *((char **)v6 + 2);
      v10 = *((uint32_t **)v6 + 2);
      if ( v10 != nullptr )
        *v10 = 0;
      v11 = *((uint32_t *)v6 + 3);
      if ( v11 != 0 && *(uint16_t *)(v11 + 6) != 0 )
      {
        v82 = v9;
        v89 = (volatile int32_t *)(v11 + 4);
        do
        {
          v13 = *(uint32_t *)(v11 + 4);
          HIWORD(v12) = HIWORD(v13);
          LOWORD(v12) = 0;
          v14 = v12 | (uint16_t)(v13 - 1);
          v15 = v13;
        }
        while ( v15 != __sync_val_compare_and_swap(v89, v15, v14) );
        v9 = v82;
        if ( (uint16_t)v14 == 0 )
          G4_VCALL<void>(v11, 16);
      }
      *((uint32_t *)v6 + 3) = 0;
      (*(void (**)(uint32_t, char *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v6,
        16);
      if ( v9 == nullptr )
        break;
      v6 = v9;
    }
    *v76 = nullptr;
    v16 = v83;
    if ( v83 != 0 )
      goto LABEL_25;
  }
  else
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v16 = v83;
    if ( v83 != 0 )
    {
LABEL_25:
      if ( *(uint16_t *)(v16 + 6) != 0 )
      {
        do
        {
          v70 = *(uint32_t *)(v83 + 4);
          HIWORD(v69) = HIWORD(v70);
          LOWORD(v69) = 0;
        }
        while ( v70 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v16 + 4),
                         v70,
                         v69 | (uint16_t)(v70 + 1)) );
      }
      v17 = (int *)(*(int (**)(uint32_t, int, int, int, int, int, uint32_t *, char **, int, int, char *, int, hkStreamReader::Self *, int, volatile int32_t *, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     16,
                     v71,
                     v72,
                     v73,
                     v74,
                     v94,
                     v76,
                     v78,
                     address,
                     v82,
                     v83,
                     v85,
                     v87,
                     v89,
                     v92,
                     v93,
                     v94[0],
                     v94[1],
                     v94[2],
                     v94[3],
                     v94[4]);
      v17[1] = 0;
      v90 = v17;
      *v17 = 0;
      v17[2] = 0;
      if ( *(uint16_t *)(v84 + 6) != 0 )
      {
        do
        {
          v68 = *(uint32_t *)(v84 + 4);
          HIWORD(v67) = HIWORD(v68);
          LOWORD(v67) = 0;
        }
        while ( v68 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v84 + 4),
                         v68,
                         v67 | (uint16_t)(v68 + 1)) );
      }
      goto LABEL_27;
    }
  }
  v90 = (int *)(*(int (**)(uint32_t, int, int, int, int, int, uint32_t *, char **, int, int, char *, int, hkStreamReader::Self *, int, volatile int32_t *, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)address + 44),
                 16,
                 v71,
                 v72,
                 v73,
                 v74,
                 v94,
                 v76,
                 v78,
                 address,
                 v82,
                 v83,
                 v85,
                 v87,
                 v89,
                 v92,
                 v93,
                 v94[0],
                 v94[1],
                 v94[2],
                 v94[3],
                 v94[4]);
  *v90 = 0;
  v90[1] = 0;
  v90[2] = 0;
LABEL_27:
  v90[3] = v84;
  v90[2] = 0;
  v18 = *v77;
  if ( *v77 != 0 )
  {
    while ( *(uint32_t *)(v18 + 4) != 0 )
      v18 = *(uint32_t *)(v18 + 4);
    *(uint32_t *)(v18 + 4) = (uint32_t)(uintptr_t)(v90);
  }
  else
  {
    *v77 = (int)(uintptr_t)(v90);
  }
  if ( v84 != 0 && *(uint16_t *)(v84 + 6) != 0 )
  {
    do
    {
      v20 = *(uint32_t *)(v84 + 4);
      HIWORD(v19) = HIWORD(v20);
      LOWORD(v19) = 0;
      v21 = v19 | (uint16_t)(v20 - 1);
      v22 = v20;
    }
    while ( v22 != __sync_val_compare_and_swap((volatile int32_t *)(v84 + 4), v22, v21) );
    if ( (uint16_t)v21 == 0 )
      G4_VCALL<void>(v84, 16);
  }
  v93 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v23 = *v88;
      v94[8] = v86;
      v94[6] = (uint32_t)(uintptr_t)(v88);
      v94[7] = (uint32_t)(uintptr_t)(&v93);
      (*(void (**)(int *))(v23 + 20))(&v92);
      if ( v92 != 0 )
      {
        v66 = 0;
        if ( *(uint32_t *)(v90[3] + 8) == 1 )
          v66 = v90[3];
        hkStringPtr::printf((hkStringPtr::Self *)(v88 + 5), "Missing closing tag of '%s'", *(uint32_t *)(v66 + 12) & 0xFFFFFFFE);
        goto LABEL_78;
      }
      v24 = (uint32_t *)v93;
      if ( v93 == 0 )
        goto LABEL_101;
      v25 = *(uint32_t *)(v93 + 8);
      if ( v25 == 2 )
        break;
      if ( v25 == 3 )
      {
        if ( *(uint16_t *)(v93 + 6) != 0 )
        {
          v61 = (volatile int32_t *)(v93 + 4);
          do
          {
            v63 = v24[1];
            HIWORD(v62) = HIWORD(v63);
            LOWORD(v62) = 0;
          }
          while ( v63 != __sync_val_compare_and_swap(v61, v63, v62 | (uint16_t)(v63 + 1)) );
        }
        v39 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v81 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v81 + 44),
                          16);
        *v39 = 0;
        v39[1] = 0;
        v39[2] = 0;
        v40 = v39;
        if ( *((uint16_t *)v24 + 3) != 0 )
        {
          do
          {
            v55 = v24[1];
            HIWORD(v54) = HIWORD(v55);
            LOWORD(v54) = 0;
          }
          while ( v55 != __sync_val_compare_and_swap(v24 + 1, v55, v54 | (uint16_t)(v55 + 1)) );
          v40 = v39;
          v39[3] = (uint32_t)(uintptr_t)(v24);
          v39[2] = (uint32_t)(uintptr_t)(v90);
          v41 = *v90;
          if ( *v90 == 0 )
          {
LABEL_82:
            *v90 = (int)(uintptr_t)(v40);
            goto LABEL_67;
          }
        }
        else
        {
          v39[3] = (uint32_t)(uintptr_t)(v24);
          v39[2] = (uint32_t)(uintptr_t)(v90);
          v41 = *v90;
          if ( *v90 == 0 )
            goto LABEL_82;
        }
        while ( *(uint32_t *)(v41 + 4) != 0 )
          v41 = *(uint32_t *)(v41 + 4);
        *(uint32_t *)(v41 + 4) = (uint32_t)(uintptr_t)(v40);
LABEL_67:
        if ( *((uint16_t *)v24 + 3) != 0 )
        {
          do
          {
            v43 = v24[1];
            HIWORD(v42) = HIWORD(v43);
            LOWORD(v42) = 0;
            v44 = v42 | (uint16_t)(v43 - 1);
            v45 = v43;
          }
          while ( v45 != __sync_val_compare_and_swap(v24 + 1, v45, v44) );
          if ( (uint16_t)v44 == 0 )
            G4_VCALL<void>(v24, 16);
        }
        v46 = (uint32_t *)v93;
        v47 = (volatile int32_t *)(v93 + 4);
        if ( *(uint16_t *)(v93 + 6) != 0 )
        {
          do
          {
            v49 = v46[1];
            HIWORD(v48) = HIWORD(v49);
            LOWORD(v48) = 0;
            v50 = v48 | (uint16_t)(v49 - 1);
            v51 = v49;
          }
          while ( v51 != __sync_val_compare_and_swap(v47, v51, v50) );
          if ( (uint16_t)v50 == 0 )
            G4_VCALL<void>(v46, 16);
        }
        v93 = 0;
      }
      else if ( v25 == 1 )
      {
        if ( *(uint16_t *)(v93 + 6) != 0 )
        {
          v58 = (volatile int32_t *)(v93 + 4);
          do
          {
            v60 = v24[1];
            HIWORD(v59) = HIWORD(v60);
            LOWORD(v59) = 0;
          }
          while ( v60 != __sync_val_compare_and_swap(v58, v60, v59 | (uint16_t)(v60 + 1)) );
        }
        v26 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v81 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v81 + 44),
                          16);
        *v26 = 0;
        v26[1] = 0;
        v26[2] = 0;
        v27 = v26;
        if ( *((uint16_t *)v24 + 3) != 0 )
        {
          do
          {
            v57 = v24[1];
            HIWORD(v56) = HIWORD(v57);
            LOWORD(v56) = 0;
          }
          while ( v57 != __sync_val_compare_and_swap(v24 + 1, v57, v56 | (uint16_t)(v57 + 1)) );
          v26[3] = (uint32_t)(uintptr_t)(v24);
          v26[2] = (uint32_t)(uintptr_t)(v90);
          v28 = *v90;
          if ( *v90 == 0 )
          {
LABEL_85:
            *v90 = (int)(uintptr_t)(v27);
            goto LABEL_50;
          }
        }
        else
        {
          v26[3] = (uint32_t)(uintptr_t)(v24);
          v26[2] = (uint32_t)(uintptr_t)(v90);
          v28 = *v90;
          if ( *v90 == 0 )
            goto LABEL_85;
        }
        while ( *(uint32_t *)(v28 + 4) != 0 )
          v28 = *(uint32_t *)(v28 + 4);
        *(uint32_t *)(v28 + 4) = (uint32_t)(uintptr_t)(v27);
LABEL_50:
        if ( *((uint16_t *)v24 + 3) != 0 )
        {
          do
          {
            v30 = v24[1];
            HIWORD(v29) = HIWORD(v30);
            LOWORD(v29) = 0;
            v31 = v29 | (uint16_t)(v30 - 1);
            v32 = v30;
          }
          while ( v32 != __sync_val_compare_and_swap(v24 + 1, v32, v31) );
          if ( (uint16_t)v31 == 0 )
            G4_VCALL<void>(v24, 16);
        }
        v33 = (uint32_t *)v93;
        v34 = (volatile int32_t *)(v93 + 4);
        if ( *(uint16_t *)(v93 + 6) != 0 )
        {
          v91 = v27;
          do
          {
            v36 = v33[1];
            HIWORD(v35) = HIWORD(v36);
            LOWORD(v35) = 0;
            v37 = v35 | (uint16_t)(v36 - 1);
            v38 = v36;
          }
          while ( v38 != __sync_val_compare_and_swap(v34, v38, v37) );
          v27 = v91;
          if ( (uint16_t)v37 == 0 )
            G4_VCALL<void>(v33, 16);
        }
        v93 = 0;
        v90 = (int *)(v27);
      }
    }
    v52 = v90[3];
    if ( *(uint32_t *)(v52 + 8) != 1 )
      goto LABEL_77;
    v64 = (hkString::Self *)(*(uint32_t *)(v52 + 12) & 0xFFFFFFFE);
    v65 = *(uint32_t *)(v93 + 12) & 0xFFFFFFFE;
    if ( v65 == 0 || v64 == nullptr )
    {
      if ( v64 != nullptr || (*(uint32_t *)(v93 + 12) & 0xFFFFFFFE) != 0 )
        goto LABEL_94;
      v90 = (int *)v90[2];
LABEL_99:
      G4_VCALL<void>(v24, 4);
      goto LABEL_100;
    }
    if ( hkString::strCmp(v64, (char *)(*(uint32_t *)(v93 + 12) & 0xFFFFFFFE)) != 0 )
      break;
    if ( *(uint32_t *)(v52 + 8) != 1 )
    {
LABEL_77:
      hkStringPtr::printf((hkStringPtr::Self *)(v88 + 5), "Unexpected end tag '%s'", v24[3] & 0xFFFFFFFE);
LABEL_78:
      *v79 = 1;
      goto LABEL_79;
    }
    v24 = (uint32_t *)v93;
    v90 = (int *)v90[2];
    if ( v93 != 0 )
      goto LABEL_99;
LABEL_100:
    if ( v90 == nullptr )
    {
LABEL_101:
      *v79 = 0;
      goto LABEL_79;
    }
  }
  v65 = v24[3] & 0xFFFFFFFE;
  v64 = (hkString::Self *)(*(uint32_t *)(v52 + 12) & 0xFFFFFFFE);
LABEL_94:
  hkStringPtr::printf((hkStringPtr::Self *)(v88 + 5), "Expected tag to end '%s' but got '%s'", v64, v65);
  *v79 = 1;
LABEL_79:
  hkIstream::Destroy(v75);
  return v79;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldCloner::Construct  (binary VA: 0x18ced00)
// Original: hkDataWorldCloner::hkDataWorldCloner
// ----------------------------------------------------------------------------
void hkDataWorldCloner::Construct(hkDataWorldCloner::Self *self, hkDataWorld::Self *a2, const hkDataWorld::Self *a3)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = -1;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldCloner::findDestClass  (binary VA: 0x18ced30)
// Original: hkDataWorldCloner::findDestClass
// ----------------------------------------------------------------------------
int hkDataWorldCloner::findDestClass(hkDataWorldCloner::Self *self, const char *a2)
{
  int result;
  int i;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  hkTypeManager::Self *v10;
  int v11;
  int v12;
  hkTypeManager::Type::Self *Terminal;
  const char *TypeName;
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  char *v19;
  int *v20;
  hkTypeManager::Type::Self *v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
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
  typedef char *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef hkDataWorldCloner::Self *_g4_t_v40;
  typedef hkDataWorldCloner::Self *_g4_t_v41;
  typedef hkTypeManager::Type::Self *_g4_t_v42;
  typedef hkTypeManager::Type::Self *_g4_t_v43;
  typedef hkTypeManager::Type::Self *_g4_t_v44;
  typedef hkTypeManager::Type::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef hkDataWorldCloner::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef hkTypeManager::Type::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef hkDataWorldCloner::Self **_g4_t_v61;
  typedef int _g4_t_v62;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v26)) > _g4_s4 ? (16u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v27)) > _g4_s5 ? (20u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v28)) > _g4_s6 ? (24u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v29)) > _g4_s7 ? (28u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v30)) > _g4_s8 ? (28u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v31)) > _g4_s9 ? (32u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v32)) > _g4_s10 ? (32u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v33)) > _g4_s11 ? (32u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v34)) > _g4_s12 ? (36u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v35)) > _g4_s13 ? (36u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v36)) > _g4_s14 ? (36u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v37)) > _g4_s15 ? (40u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v38)) > _g4_s16 ? (40u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v39)) > _g4_s17 ? (40u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v40)) > _g4_s18 ? (44u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v41)) > _g4_s19 ? (44u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v42)) > _g4_s20 ? (48u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v43)) > _g4_s21 ? (48u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v44)) > _g4_s22 ? (48u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v45)) > _g4_s23 ? (48u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v46)) > _g4_s24 ? (52u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v47)) > _g4_s25 ? (56u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v48)) > _g4_s26 ? (60u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v49)) > _g4_s27 ? (64u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v50)) > _g4_s28 ? (68u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v51)) > _g4_s29 ? (72u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v52)) > _g4_s30 ? (76u + sizeof(_g4_t_v52)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v53)) > _g4_s31 ? (80u + sizeof(_g4_t_v53)) : _g4_s31,
    _g4_s33 = (84u + sizeof(_g4_t_v54)) > _g4_s32 ? (84u + sizeof(_g4_t_v54)) : _g4_s32,
    _g4_s34 = (88u + sizeof(_g4_t_v55)) > _g4_s33 ? (88u + sizeof(_g4_t_v55)) : _g4_s33,
    _g4_s35 = (92u + sizeof(_g4_t_v56)) > _g4_s34 ? (92u + sizeof(_g4_t_v56)) : _g4_s34,
    _g4_s36 = (96u + sizeof(_g4_t_v57)) > _g4_s35 ? (96u + sizeof(_g4_t_v57)) : _g4_s35,
    _g4_s37 = (100u + sizeof(_g4_t_v58)) > _g4_s36 ? (100u + sizeof(_g4_t_v58)) : _g4_s36,
    _g4_s38 = (104u + sizeof(_g4_t_v59)) > _g4_s37 ? (104u + sizeof(_g4_t_v59)) : _g4_s37,
    _g4_s39 = (108u + sizeof(_g4_t_v60)) > _g4_s38 ? (108u + sizeof(_g4_t_v60)) : _g4_s38,
    _g4_s40 = (112u + sizeof(_g4_t_v61)) > _g4_s39 ? (112u + sizeof(_g4_t_v61)) : _g4_s39,
    _g4_s41 = (124u + sizeof(_g4_t_v62)) > _g4_s40 ? (124u + sizeof(_g4_t_v62)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 76u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 80u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 84u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 88u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 92u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 96u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 100u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 104u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 108u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 112u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 124u);

  v61 = &self;
  result = (*(int (**)(uint32_t, const char *, int, int, int, int, int, const char *, int, int, int, int, int, hkDataWorldCloner::Self *, hkTypeManager::Type::Self *, int, hkDataWorldCloner::Self *, int, int, int, int, int, hkTypeManager::Type::Self *, int, int, int, int, int, int, int))(**(uint32_t **)self + 44))(
             *(uint32_t *)self,
             a2,
             v22,
             v23,
             v24,
             v25,
             v26,
             a2,
             v28,
             v29,
             v31,
             v34,
             v37,
             self,
             v42,
             v46,
             v47,
             v48,
             v49,
             v50,
             v51,
             v52,
             v53,
             v54,
             v55,
             v56,
             v57,
             v58,
             v59,
             v60);
  if ( result == 0 )
  {
    v47 = nullptr;
    v48 = 0;
    v49 = 0x80000000;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)&v46,
      (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
      (int *)&v47,
      10,
      24);
    for ( i = v27; i != 0; i = G4_VCALL<int>(v17, 12) )
    {
      if ( (*(int (**)(uint32_t, int))(**(uint32_t **)v40 + 44))(*(uint32_t *)v40, i) != 0 )
        break;
      v51 = (*(int (**)(uint32_t, int))(**((uint32_t **)v40 + 1) + 44))(*((uint32_t *)v40 + 1), i);
      v15 = v48;
      if ( v48 == (v49 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)&v47, 24, v62);
        v15 = v48;
      }
      v48 = v15 + 1;
      v16 = (uint32_t *)((char *)v47 + 24 * v15);
      v16[3] = 0;
      v16[4] = 0;
      v16[5] = 0x80000000;
      hkDataClass::getCinfo((uint32_t *)(&v51), v16);
      if ( G4_VCALL<int>(v51, 20) == 0 )
        break;
      v17 = G4_VCALL<int>(v51, 20);
    }
    v32 = v48 - 1;
    if ( v48 - 1 >= 0 )
    {
      v30 = 24 * (v48 - 1);
      do
      {
        v54 = 0;
        v55 = 0;
        v56 = 0x80000000;
        v35 = (char *)v47 + v30;
        v51 = *(uint32_t *)((char *)v47 + v30);
        v52 = *(uint32_t *)((char *)v47 + v30 + 4);
        v53 = *(hkTypeManager::Type::Self **)((char *)v47 + v30 + 8);
        v4 = *(uint32_t *)((char *)v47 + v30 + 16);
        v38 = v4;
        if ( v4 <= 0 )
        {
          v55 = *(uint32_t *)((char *)v47 + v30 + 16);
        }
        else
        {
          v5 = *(uint32_t *)((char *)v47 + v30 + 16);
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)&v46,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            &v54,
            v4,
            12);
          v55 = v5;
          v6 = 0;
          do
          {
            v7 = 3 * v6++;
            v7 *= 4;
            v8 = (uint32_t *)(*((uint32_t *)v35 + 3) + v7);
            v9 = (uint32_t *)(v54 + v7);
            *v9 = *v8;
            v9[1] = v8[1];
            v9[2] = v8[2];
            v43 = (hkTypeManager::Type::Self *)v8[1];
            v10 = (hkTypeManager::Self *)(*(int (**)(uint32_t))(**(uint32_t **)v40 + 52))(*(uint32_t *)v40);
            v9[1] = (uint32_t)(uintptr_t)(hkTypeManager::copyType(v10, v43));
          }
          while ( v6 != v38 );
        }
        (*(void (**)(uint32_t, int *))(**(uint32_t **)v40 + 20))(*(uint32_t *)v40, &v51);
        v55 = 0;
        if ( v56 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v54,
            12 * v56);
        --v32;
        v30 -= 24;
      }
      while ( v32 != -1 );
    }
    v11 = 0;
    v12 = (*(int (**)(uint32_t, int))(**((uint32_t **)v40 + 1) + 44))(*((uint32_t *)v40 + 1), v27);
    while ( v11 < G4_VCALL<int>(v12, 40) )
    {
      v51 = 0;
      v52 = 0;
      v53 = nullptr;
      v54 = 0;
      G4_VCALL<void>(v12, 44, v11, &v51);
      Terminal = hkTypeManager::Type::findTerminal(v53);
      if ( *(uint32_t *)Terminal == 6 )
      {
        TypeName = (const char *)hkTypeManager::Type::getTypeName(Terminal);
        hkDataWorldCloner::findDestClass(v40, TypeName);
      }
      ++v11;
    }
    result = (*(int (**)(uint32_t, int))(**(uint32_t **)v40 + 44))(*(uint32_t *)v40, v27);
    v18 = v48 - 1;
    v41 = v47;
    if ( v48 - 1 >= 0 )
    {
      v33 = result;
      v19 = (char *)v47 + 24 * v18;
      v20 = (int *)(v19 + 20);
      v36 = v19 + 12;
      v39 = 24 * v18 + 24;
      v21 = (hkTypeManager::Type::Self *)&hkContainerHeapAllocator::s_alloc;
      do
      {
        *(int *)((char *)v20 + v39 - (uint32_t)(uintptr_t)(v36) + (uint32_t)(uintptr_t)(v41) - 16) = 0;
        if ( *v20 >= 0 )
        {
          v44 = v21;
          G4_VCALL<void>(v21, 20, v21, *(v20 - 2), 12 * *v20);
          v21 = v44;
        }
        --v18;
        *(v20 - 2) = 0;
        *v20 = 0x80000000;
        v20 -= 6;
      }
      while ( v18 != -1 );
      result = v33;
    }
    v48 = 0;
    if ( v49 >= 0 )
    {
      v45 = (hkTypeManager::Type::Self *)result;
      (*(void (**)(uint32_t *, hkDataWorldCloner::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
        (uint32_t *)(hkContainerTempAllocator::s_alloc),
        v47,
        24 * v49);
      return (int)(uintptr_t)(v45);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldCloner::getClassMemberInfos  (binary VA: 0x18cf150)
// Original: hkDataWorldCloner::getClassMemberInfos
// ----------------------------------------------------------------------------
int hkDataWorldCloner::getClassMemberInfos(hkDataWorldCloner::Self *self, hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator::Self> *a2, const hkDataClass::Self *a3, const hkDataClass::Self *a4)
{
  int *v4;
  const hkDataClass::Self *v5;
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
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  hkTypeManager::Type::Self *Terminal;
  const char *TypeName;
  int result;
  int v24;
  int savedregs;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef hkDataWorldCloner::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef hkArrayUtil::Self *_g4_t_v44;
  typedef int *_g4_t_v45;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v32)) > _g4_s7 ? (36u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v33)) > _g4_s8 ? (36u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v34)) > _g4_s9 ? (40u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v35)) > _g4_s10 ? (40u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v36)) > _g4_s11 ? (44u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v37)) > _g4_s12 ? (48u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v38)) > _g4_s13 ? (52u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v39)) > _g4_s14 ? (56u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v40)) > _g4_s15 ? (60u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v41)) > _g4_s16 ? (64u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v42)) > _g4_s17 ? (68u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v43)) > _g4_s18 ? (72u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v44)) > _g4_s19 ? (76u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v45)) > _g4_s20 ? (84u + sizeof(_g4_t_v45)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);

  v44 = (hkArrayUtil::Self *)&self;
  v4 = (int *)a2;
  v5 = a4;
  v6 = (*(int (**)(uint32_t, int, int, int, int, int, int, const hkDataClass::Self *, int, int, hkDataWorldCloner::Self *, int, int, int, int, int, int, int))(**(uint32_t **)a3 + 40))(
         *(uint32_t *)a3,
         v25,
         v26,
         v27,
         v28,
         v29,
         v30,
         a3,
         v32,
         v34,
         self,
         v37,
         v38,
         v39,
         v40,
         v41,
         v42,
         v43);
  v35 = v6;
  v7 = v4[2] & 0x3FFFFFFF;
  if ( v6 > v7 )
  {
    v8 = 2 * v7;
    savedregs = 16;
    v45 = v4;
    v44 = (hkArrayUtil::Self *)&v37;
    if ( v6 >= v8 )
      v8 = v6;
    hkArrayUtil::reserve(v44, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, v45, v8, savedregs);
  }
  v9 = v4[1];
  v33 = v35 - v9;
  v10 = 0;
  v11 = 16 * (v35 - v9);
  v12 = *v4 + 16 * v9;
  if ( v33 > 0 )
  {
    do
    {
      *(__m128i *)(v12 + v10) = g4_m128_from<__m128i>(0LL);
      v10 += 16;
    }
    while ( v10 != v11 );
  }
  v4[1] = v35;
  G4_VCALL<void>(*v31, 52, v4);
  v13 = *(uint32_t *)v5;
  v38 = 0;
  v39 = 0;
  v40 = 0x80000000;
  v14 = G4_VCALL<int>(v13, 40);
  v15 = v40 & 0x3FFFFFFF;
  if ( v14 > (v40 & 0x3FFFFFFF) )
  {
    v24 = 2 * v15;
    savedregs = 16;
    v45 = &v38;
    v44 = (hkArrayUtil::Self *)&v37;
    if ( v14 >= 2 * v15 )
      v24 = v14;
    hkArrayUtil::reserve(v44, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, v45, v24, savedregs);
  }
  v16 = 0;
  v17 = 16 * (v14 - v39);
  v18 = v38 + 16 * v39;
  if ( v14 - v39 > 0 )
  {
    do
    {
      *(__m128i *)(v18 + v16) = g4_m128_from<__m128i>(0LL);
      v16 += 16;
    }
    while ( v16 != v17 );
  }
  v19 = *(uint32_t *)v5;
  v39 = v14;
  v20 = 0;
  G4_VCALL<void>(v19, 52, &v38);
  while ( v20 < (*(int (**)(uint32_t))(**(uint32_t **)v5 + 40))(*(uint32_t *)v5) )
  {
    Terminal = hkTypeManager::Type::findTerminal(*(hkTypeManager::Type::Self **)(v38 + 16 * v20 + 8));
    if ( *(uint32_t *)Terminal == 6 )
    {
      TypeName = (const char *)hkTypeManager::Type::getTypeName(Terminal);
      hkDataWorldCloner::findDestClass(v36, TypeName);
    }
    ++v20;
  }
  result = v40;
  v39 = 0;
  if ( v40 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v38,
             16 * v40);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::opNew  (binary VA: 0x18cf360)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator new
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::opDelete  (binary VA: 0x18cf3a0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator delete
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_int_a4fcf1::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::opNew  (binary VA: 0x18cf3f0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMapBase_hkDataObject_Handle_int_a4fcf1::opNew(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::opNewArray  (binary VA: 0x18cf400)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMapBase_hkDataObject_Handle_int_a4fcf1::opNewArray(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::opDelete  (binary VA: 0x18cf410)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator delete
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_int_a4fcf1::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::opDeleteArray  (binary VA: 0x18cf420)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator delete[]
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_int_a4fcf1::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::Construct  (binary VA: 0x18cf430)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_int_a4fcf1::Construct(hkMapBase_Raw *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::Construct  (binary VA: 0x18cf450)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_int_a4fcf1::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::Destroy  (binary VA: 0x18cf460)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::~hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_int_a4fcf1::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::getIterator  (binary VA: 0x18cf470)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getIterator
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::getIterator(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self)
{
  int v1;
  int v2;
  int result;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 || **(uint32_t **)self != -1 )
    return 0;
  v2 = *(uint32_t *)self + 12;
  result = 0;
  do
  {
    if ( ++result > v1 )
      break;
    v2 += 12;
  }
  while ( *(uint32_t *)(v2 - 12) == -1 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::getKey  (binary VA: 0x18cf4c0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getKey
// ----------------------------------------------------------------------------
uint32_t * hkMapBase_hkDataObject_Handle_int_a4fcf1::getKey(uint32_t *a1, uint32_t *a2, int a3)
{
  uint32_t *v4;
  int v5;

  v4 = (uint32_t *)(*a2 + 12 * a3);
  v5 = v4[1];
  *a1 = *v4;
  a1[1] = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::getValue  (binary VA: 0x18cf4f0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getValue
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::getValue(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 12 * a2 + 8);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::setValue  (binary VA: 0x18cf510)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::setValue
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::setValue(uint32_t *a1, int a2, int a3)
{
  int result;

  result = *a1 + 12 * a2;
  *(uint32_t *)(result + 8) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::getNext  (binary VA: 0x18cf530)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getNext
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::getNext(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = a2 + 1;
  v3 = a1[2];
  if ( a2 + 1 <= v3 && *(uint32_t *)(*a1 + 12 * result) == -1 )
  {
    v4 = *a1 + 12 * a2;
    do
    {
      if ( ++result > v3 )
        break;
      v4 += 12;
    }
    while ( *(uint32_t *)(v4 + 12) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::isValid  (binary VA: 0x18cf580)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::isValid
// ----------------------------------------------------------------------------
bool * hkMapBase_hkDataObject_Handle_int_a4fcf1::isValid(bool *a1, int a2, int a3)
{
  *a1 = a3 <= *(uint32_t *)(a2 + 8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::findKey  (binary VA: 0x18cf5a0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::findKey
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::findKey(uint32_t *a1, unsigned int a2, int a3)
{
  int v3;
  int result;
  uint32_t *v5;

  v3 = a1[2];
  if ( v3 > 0 )
  {
    for ( result = v3 & (-1640531535 * (a2 >> 4)); ; result = v3 & (result + 1) )
    {
      v5 = (uint32_t *)(*a1 + 12 * result);
      if ( *v5 == -1 )
        break;
      if ( *v5 == a2 && v5[1] == a3 )
        return result;
    }
  }
  return v3 + 1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::hasKey  (binary VA: 0x18cf610)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hasKey
// ----------------------------------------------------------------------------
uint8_t * hkMapBase_hkDataObject_Handle_int_a4fcf1::hasKey(uint8_t *a1, uint32_t *a2, unsigned int a3, int a4)
{
  int Key;
  bool v5;
  bool v6;
  bool v7;

  Key = hkMapBase_hkDataObject_Handle_int_a4fcf1::findKey(a2, a3, a4);
  v7 = __OFSUB__(Key, a2[2]);
  v5 = Key == a2[2];
  v6 = Key - a2[2] < 0;
  *a1 = v6 ^ v7 | v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::getWithDefault  (binary VA: 0x18cf660)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getWithDefault
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::getWithDefault(uint32_t *a1, unsigned int a2, int a3, int a4)
{
  int v4;
  int i;
  uint32_t *v6;

  v4 = a1[2];
  if ( v4 > 0 )
  {
    for ( i = v4 & (-1640531535 * (a2 >> 4)); ; i = v4 & (i + 1) )
    {
      v6 = (uint32_t *)(*a1 + 12 * i);
      if ( *v6 == -1 )
        break;
      if ( *v6 == a2 && v6[1] == a3 )
        return v6[2];
    }
  }
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::get  (binary VA: 0x18cf6d0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::get
// ----------------------------------------------------------------------------
int * hkMapBase_hkDataObject_Handle_int_a4fcf1::get(int *a1, uint32_t *a2, unsigned int a3, int a4, uint32_t *a5)
{
  int Key;
  int v6;

  Key = hkMapBase_hkDataObject_Handle_int_a4fcf1::findKey(a2, a3, a4);
  v6 = 1;
  if ( Key <= a2[2] )
  {
    *a5 = *(uint32_t *)(*a2 + 12 * Key + 8);
    v6 = 0;
  }
  *a1 = v6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::remove  (binary VA: 0x18cf730)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::remove
// ----------------------------------------------------------------------------
uint32_t * hkMapBase_hkDataObject_Handle_int_a4fcf1::remove(uint32_t *a1, int *a2, unsigned int a3, int a4)
{
  signed int Key;

  Key = hkMapBase_hkDataObject_Handle_int_a4fcf1::findKey((uint32_t *)(a2), a3, a4);
  if ( Key <= a2[2] )
  {
    hkMapBase_hkDataObject_Handle_int_a4fcf1::remove(a2, Key);
    *a1 = 0;
  }
  else
  {
    *a1 = 1;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::getSize  (binary VA: 0x18cf7a0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getSize
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::getSize(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self)
{
  return *((uint32_t *)self + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::getCapacity  (binary VA: 0x18cf7b0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getCapacity
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::getCapacity(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self)
{
  return (*((uint32_t *)self + 2) + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::getMemSize  (binary VA: 0x18cf7c0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getMemSize
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::getMemSize(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self)
{
  return 4 * (3 * *((uint32_t *)self + 2) + 3);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::getMemStart  (binary VA: 0x18cf7d0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getMemStart
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::getMemStart(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::isOk  (binary VA: 0x18cf7e0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::isOk
// ----------------------------------------------------------------------------
hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> * hkMapBase_hkDataObject_Handle_int_a4fcf1::isOk(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self, int a2)
{
  int v2;
  unsigned int *v3;
  unsigned int v4;
  int i;
  uint32_t *v6;

  v2 = *(uint32_t *)(a2 + 8);
  if ( v2 >= 0 )
  {
    v3 = *(unsigned int **)a2;
    do
    {
      v4 = *v3;
      if ( *v3 != -1 )
      {
        for ( i = v2 & (-1640531535 * (v4 >> 4)); ; i = v2 & (i + 1) )
        {
          v6 = (uint32_t *)(*(uint32_t *)a2 + 12 * i);
          if ( v4 == *v6 && v6[1] == v3[1] )
            break;
        }
      }
      v3 += 3;
    }
    while ( v3 != (unsigned int *)(*(uint32_t *)a2 + 12 * v2 + 12) );
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::clear  (binary VA: 0x18cf870)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::clear
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::clear(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self)
{
  int result;
  int v2;
  int v3;

  result = 0;
  v2 = *((uint32_t *)self + 2) + 1;
  if ( *((int *)self + 2) >= 0 )
  {
    do
    {
      v3 = 3 * result++;
      *(uint32_t *)(*(uint32_t *)self + 4 * v3) = -1;
    }
    while ( result != v2 );
  }
  *((uint32_t *)self + 1) &= 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::clearAndDeallocate  (binary VA: 0x18cf8b0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::clearAndDeallocate
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::clearAndDeallocate(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self, hkMemoryAllocator::Self *a2)
{
  int result;

  hkMapBase_hkDataObject_Handle_int_a4fcf1::clear(self);
  result = *((uint32_t *)self + 1);
  if ( result >= 0 )
    result = G4_VCALL<int>(a2, 12, *(uint32_t *)self, 4 * (3 * *((uint32_t *)self + 2) + 3));
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::wasReallocated  (binary VA: 0x18cf920)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::wasReallocated
// ----------------------------------------------------------------------------
int64_t hkMapBase_hkDataObject_Handle_int_a4fcf1::wasReallocated(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self, int a2)
{
  int64_t result; // rax

  LODWORD(result) = (uint32_t)(uintptr_t)(self);
  HIDWORD(result) = *(uint32_t *)(a2 + 4) >= 0;
  *(uint8_t *)self = BYTE4(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::setOwnedData  (binary VA: 0x18cf940)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::setOwnedData
// ----------------------------------------------------------------------------
hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> * hkMapBase_hkDataObject_Handle_int_a4fcf1::setOwnedData(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self, void *a2, int a3, int a4)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = a3 | 0x80000000;
  *((uint32_t *)self + 2) = a4 - 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::getSizeInBytesFor  (binary VA: 0x18cf970)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getSizeInBytesFor
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::getSizeInBytesFor(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self)
{
  int v1;

  if ( 2 * (int)(uintptr_t)(self) <= 8 )
    return 96;
  v1 = 8;
  do
    v1 *= 2;
  while ( 2 * (int)(uintptr_t)(self) > v1 );
  return 12 * v1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::init  (binary VA: 0x18cf9b0)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::init
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::init(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self, char *a2, unsigned int a3)
{
  int v3;
  char *v4;
  int result;

  v3 = 0;
  v4 = a2;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = 0x80000000;
  *((uint32_t *)self + 2) = a3 / 0xC - 1;
  result = 0;
  if ( a3 / 0xC != 0 )
  {
    while ( 1 )
    {
      ++result;
      *(uint32_t *)&v4[v3] = -1;
      v3 += 12;
      if ( a3 / 0xC == result )
        break;
      v4 = *(char **)self;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::Construct  (binary VA: 0x18cfa00)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_hkDataObject_Handle_int_a4fcf1::Construct(hkMapBase_Raw *self, char *a2, unsigned int a3)
{
  hkMapBase_hkDataObject_Handle_int_a4fcf1::init((hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *)(self), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::resizeTable  (binary VA: 0x18cfa40)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::resizeTable
// ----------------------------------------------------------------------------
hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> * hkMapBase_hkDataObject_Handle_int_a4fcf1::resizeTable(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self, hkMemoryAllocator::Self *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  unsigned int v12;
  int v13;

  v4 = 8;
  if ( a4 >= 8 )
    v4 = a4;
  v12 = *((uint32_t *)a2 + 1) & 0x80000000;
  v11 = *((uint32_t *)a2 + 2) + 1;
  v13 = *(uint32_t *)a2;
  v5 = G4_VCALL<int>(a3, 8, 12 * v4);
  if ( v5 != 0 )
  {
    *(uint32_t *)a2 = v5;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)(v5 + v6) = -1;
      v6 += 12;
      if ( v4 <= v7 )
        break;
      v5 = *(uint32_t *)a2;
    }
    v8 = 0;
    *((uint32_t *)a2 + 2) = v4 - 1;
    *((uint32_t *)a2 + 1) = 0;
    v9 = v13;
    if ( v11 > 0 )
    {
      do
      {
        if ( *(uint32_t *)v9 != -1 )
          hkMapBase_hkDataObject_Handle_int_a4fcf1::insert(
            (int *)a2,
            a3,
            *(uint32_t *)v9,
            *(uint32_t *)(v9 + 4),
            *(uint32_t *)(v9 + 8));
        ++v8;
        v9 += 12;
      }
      while ( v11 != v8 );
    }
    if ( v12 == 0 )
      G4_VCALL<void>(a3, 12, v13, 12 * v11);
    *(uint32_t *)self = 0;
    return self;
  }
  else
  {
    *(uint32_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::tryInsert  (binary VA: 0x18cfb70)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::tryInsert
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::tryInsert(hkMemoryAllocator::Self *a1, int a2, unsigned int a3, unsigned int a4, int a5, uint32_t *a6)
{
  int v6;
  int result;
  int v8;
  uint32_t v9[7];

  v6 = *((uint32_t *)a1 + 2);
  if ( 2 * *((uint32_t *)a1 + 1) <= v6 )
  {
    *a6 = 0;
    return hkMapBase_hkDataObject_Handle_int_a4fcf1::insert((int *)a1, a2, a3, a4, a5);
  }
  hkMapBase_hkDataObject_Handle_int_a4fcf1::resizeTable(
    (hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *)v9,
    a1,
    a2,
    2 * v6 + 2);
  v8 = v9[0];
  *a6 = v9[0];
  result = 0;
  if ( v8 == 0 )
    return hkMapBase_hkDataObject_Handle_int_a4fcf1::insert((int *)a1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::findOrInsertKey  (binary VA: 0x18cfc10)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::findOrInsertKey
// ----------------------------------------------------------------------------
int hkMapBase_hkDataObject_Handle_int_a4fcf1::findOrInsertKey(hkMemoryAllocator::Self *a1, int a2, unsigned int a3, int a4, int a5)
{
  int v5;
  int v6;
  int result;
  unsigned int *v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  v5 = *((uint32_t *)a1 + 2);
  v9 = v5;
  if ( 2 * *((uint32_t *)a1 + 1) > v5 )
  {
    hkMapBase_hkDataObject_Handle_int_a4fcf1::resizeTable(
      (hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *)v10,
      a1,
      a2,
      2 * v5 + 2);
    v9 = *((uint32_t *)a1 + 2);
  }
  v6 = *(uint32_t *)a1;
  for ( result = v9 & (-1640531535 * (a3 >> 4)); ; result = v9 & (result + 1) )
  {
    v8 = (unsigned int *)(v6 + 12 * result);
    if ( *v8 == a3 && v8[1] == a4 )
      break;
    if ( *v8 == -1 )
    {
      *v8 = a3;
      v8[1] = a4;
      *(uint32_t *)(*(uint32_t *)a1 + 12 * result + 8) = a5;
      ++*((uint32_t *)a1 + 1);
      return result;
    }
    v6 = *(uint32_t *)a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::reserve  (binary VA: 0x18cfd00)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::reserve
// ----------------------------------------------------------------------------
hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> * hkMapBase_hkDataObject_Handle_int_a4fcf1::reserve(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self, hkMemoryAllocator::Self *a2, int a3)
{
  int i;
  uint8_t v5[8];

  for ( i = 8; 2 * a3 > i; i *= 2 )
    ;
  return hkMapBase_hkDataObject_Handle_int_a4fcf1::resizeTable(
           (hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *)v5,
           (hkMemoryAllocator::Self *)(self),
           (int)(uintptr_t)(a2),
           i);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_hkDataObject_Handle_int_a4fcf1::isPower2  (binary VA: 0x18cfd60)
// Original: hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::isPower2
// ----------------------------------------------------------------------------
bool hkMapBase_hkDataObject_Handle_int_a4fcf1::isPower2(hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *self)
{
  return ((unsigned int)(uintptr_t)(self) & ((unsigned int)(uintptr_t)(self) - 1)) == 0;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::opNew  (binary VA: 0x18cfd80)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
int hkMap_hkDataObject_Handle_int_16bad4::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::opDelete  (binary VA: 0x18cfdc0)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_int_16bad4::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::opNew  (binary VA: 0x18cfe10)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMap_hkDataObject_Handle_int_16bad4::opNew(hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::opNewArray  (binary VA: 0x18cfe20)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMap_hkDataObject_Handle_int_16bad4::opNewArray(hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::opDelete  (binary VA: 0x18cfe30)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_int_16bad4::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::opDeleteArray  (binary VA: 0x18cfe40)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete[]
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_int_16bad4::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::Construct  (binary VA: 0x18cfe50)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_int_16bad4::Construct(hkMap_Raw *self, int a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  if ( a2 != 0 )
    hkMapBase_hkDataObject_Handle_int_a4fcf1::reserve(
      (hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *)(self),
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      a2);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::Construct  (binary VA: 0x18cfea0)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_int_16bad4::Construct(hkMap_Raw *self, char *a2, unsigned int a3)
{
  hkMapBase_hkDataObject_Handle_int_a4fcf1::Construct(self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::Construct  (binary VA: 0x18cfee0)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_int_16bad4::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::Destroy  (binary VA: 0x18cfef0)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::~hkMap
// ----------------------------------------------------------------------------
void hkMap_hkDataObject_Handle_int_16bad4::Destroy(hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *self)
{
  hkMapBase_hkDataObject_Handle_int_a4fcf1::clearAndDeallocate(
    (hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *)(self),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_hkDataObject_Handle_int_a4fcf1::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::insert  (binary VA: 0x18cff30)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::insert
// ----------------------------------------------------------------------------
int hkMap_hkDataObject_Handle_int_16bad4::insert(int *a1, unsigned int a2, unsigned int a3, int a4)
{
  return hkMapBase_hkDataObject_Handle_int_a4fcf1::insert(
           a1,
           (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::tryInsert  (binary VA: 0x18cff80)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::tryInsert
// ----------------------------------------------------------------------------
int hkMap_hkDataObject_Handle_int_16bad4::tryInsert(hkMemoryAllocator::Self *a1, unsigned int a2, unsigned int a3, int a4, uint32_t *a5)
{
  return hkMapBase_hkDataObject_Handle_int_a4fcf1::tryInsert(
           a1,
           (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::findOrInsertKey  (binary VA: 0x18cffd0)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::findOrInsertKey
// ----------------------------------------------------------------------------
int hkMap_hkDataObject_Handle_int_16bad4::findOrInsertKey(hkMemoryAllocator::Self *a1, unsigned int a2, int a3, int a4)
{
  return hkMapBase_hkDataObject_Handle_int_a4fcf1::findOrInsertKey(
           a1,
           (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::swap  (binary VA: 0x18d0020)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::swap
// ----------------------------------------------------------------------------
hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> * hkMap_hkDataObject_Handle_int_16bad4::swap(hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *self, hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *a2)
{
  int v3;
  int v4;
  int v5;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  v4 = *((uint32_t *)self + 1);
  v5 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *(uint32_t *)a2 = v3;
  *((uint32_t *)a2 + 1) = v4;
  *((uint32_t *)a2 + 2) = v5;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_hkDataObject_Handle_int_16bad4::reserve  (binary VA: 0x18d0050)
// Original: hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::reserve
// ----------------------------------------------------------------------------
hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> * hkMap_hkDataObject_Handle_int_16bad4::reserve(hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator::Self> *self, int a2)
{
  return hkMapBase_hkDataObject_Handle_int_a4fcf1::reserve(
           (hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *)(self),
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldCloner::copyObject  (binary VA: 0x18d0090)
// Original: hkDataWorldCloner::copyObject
// ----------------------------------------------------------------------------
hkDataWorldCloner::Self * hkDataWorldCloner::copyObject(hkDataWorldCloner::Self *self, const hkDataObject::Self *a2, hkDataObject::Self *a3)
{
  const hkDataObject::Self *v3;
  const hkDataObject::Self *v4;
  int v5;
  int v6;
  unsigned int i;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  const char *v12;
  int v13;
  uint32_t *v14;
  int v15;
  int16_t v16;
  unsigned int v17;
  int v18;
  uint32_t *v19;
  bool v20;
  int v21;
  int v22;
  int v24;
  int v25;
  typedef hkDataWorldCloner::Self *_g4_t_v26;
  typedef hkDataObject::Self *_g4_t_v27;
  typedef hkDataWorldCloner::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_DestClass;
  typedef uint32_t _g4_t_v32[10];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v29)) > _g4_s3 ? (24u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v30)) > _g4_s4 ? (28u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_DestClass)) > _g4_s5 ? (44u + sizeof(_g4_t_DestClass)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v32)) > _g4_s6 ? (48u + sizeof(_g4_t_v32)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_DestClass &DestClass = *reinterpret_cast<_g4_t_DestClass *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);

  v32[6] = (uint32_t)(uintptr_t)(&self);
  v28 = self;
  v3 = a2;
  v26 = (hkDataWorldCloner::Self *)(a2);
  v27 = a3;
  if ( *(uint32_t *)a3 != 0 )
  {
    (*(void (**)(int *))(**(uint32_t **)a3 + 8))(&v29);
    v4 = v3;
    v5 = *((uint32_t *)v3 + 2);
    v6 = *((uint32_t *)v4 + 4);
    if ( v6 > 0 )
    {
      for ( i = -1640531535 * ((unsigned int)v29 >> 4); ; i = v8 + 1 )
      {
        v8 = v6 & i;
        v9 = (uint32_t *)(16 * v8 + v5);
        if ( *v9 == -1 )
          break;
        if ( v29 == *v9 && v9[1] == v30 )
          goto LABEL_10;
      }
    }
    v8 = v6 + 1;
LABEL_10:
    if ( v8 <= v6 )
    {
      v24 = 16 * v8 + v5;
      v25 = *(uint32_t *)(v24 + 12);
      v32[0] = *(uint32_t *)(v24 + 8);
      v32[1] = v25;
      (*(void (**)(hkDataWorldCloner::Self *))(**(uint32_t **)v26 + 48))(v28);
    }
    else
    {
      v10 = 0;
      v11 = (*(int (**)(uint32_t))(**(uint32_t **)v27 + 12))(*(uint32_t *)v27);
      v12 = (const char *)G4_VCALL<int>(v11, 12);
      DestClass = hkDataWorldCloner::findDestClass(v26, v12);
      v13 = 0;
      v14 = (uint32_t *)(*(int (**)(uint32_t, int *, uint32_t))(**(uint32_t **)v26 + 24))(*(uint32_t *)v26, &DestClass, 0);
      v32[0] = (uint32_t)(uintptr_t)(v14);
      if ( v14 != nullptr )
      {
        v15 = v14[1];
        ++v14[2];
        v16 = v15;
        LOWORD(v15) = 0;
        v14[1] = v15 | (uint16_t)(v16 + 1);
        (*(void (**)(int *))(*v14 + 8))(&v29);
        v10 = v29;
        v13 = v30;
      }
      if ( *(uint32_t *)v27 != 0 )
      {
        (*(void (**)(int *))(**(uint32_t **)v27 + 8))(&v29);
        v17 = v29;
        v18 = v30;
      }
      else
      {
        v18 = 0;
        v17 = 0;
      }
      hkMapBase_hkDataObject_Handle_hkDa_0cdd4c::insert(
        (hkDataWorldCloner::Self *)((char *)v26 + 8),
        (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
        v17,
        v18,
        v10,
        v13);
      hkDataWorldCloner::copyObjectMembers(v26, (hkDataObject::Self *)v32, v27);
      v19 = (uint32_t *)v32[0];
      v20 = v32[0] == 0;
      *(uint32_t *)v28 = v32[0];
      if ( !v20 )
      {
        v21 = v19[2];
        HIWORD(v22) = HIWORD(v19[1]);
        LOWORD(v22) = 0;
        v19[1] = v22 | (uint16_t)v19[1];
        if ( v21 == 0 )
          G4_VCALL<void>(v19, 4);
      }
    }
  }
  else
  {
    *(uint32_t *)self = 0;
  }
  return v28;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldCloner::copyArray  (binary VA: 0x18d04d0)
// Original: hkDataWorldCloner::copyArray
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkDataWorldCloner::copyArray(int a1, int **a2, int a3, int a4)
{
  int **v4;
  hkTypeManager::Type::Self *result;
  hkTypeManager::Type::Self *v6;
  uint32_t *v7; // kr00_4
  int k;
  int v9;
  int v10;
  int16_t v11;
  uint32_t *v12;
  int v13;
  int16_t v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int m;
  int v25;
  int *v26;
  int v27;
  int i;
  int v29;
  int *v30;
  int v31;
  int v32;
  long double v33; // fst7
  int *v34;
  int v35;
  int v36;
  int v37;
  int *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  uint32_t *v45;
  int v46;
  unsigned int v47;
  uint32_t *v48;
  int *v49;
  int v50;
  int v51;
  uint32_t *v52;
  int v53;
  int16_t v54;
  int v55;
  uint32_t *v56;
  int v57;
  int16_t v58;
  int ii;
  int v60;
  int v61;
  int v62;
  int v63;
  bool v64;
  int j;
  int v66;
  int v67;
  int16_t v68;
  uint32_t *v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int16_t v78;
  uint32_t *v79;
  int v80;
  int16_t v81;
  int v82;
  int v83;
  uint32_t *v84;
  int v85;
  int v86;
  uint32_t *v87;
  int v88;
  int v89;
  int n;
  int v91;
  int v92;
  int16_t v93;
  uint32_t *v94;
  int v95;
  int16_t v96;
  uint32_t *v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int **_g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_TupleSize;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef uint32_t *_g4_t_v113;
  typedef int _g4_t_v114;
  typedef uint32_t *_g4_t_v115;
  typedef hkDataWorldCloner::Self *_g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef hkDataObject::Self *_g4_t_v119;
  typedef float _g4_t_v120;
  typedef uint32_t *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef uint32_t _g4_t_v123[4];
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef uint32_t *_g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int *_g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v104)) > _g4_s0 ? (4u + sizeof(_g4_t_v104)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v105)) > _g4_s1 ? (8u + sizeof(_g4_t_v105)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v106)) > _g4_s2 ? (12u + sizeof(_g4_t_v106)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v107)) > _g4_s3 ? (16u + sizeof(_g4_t_v107)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v108)) > _g4_s4 ? (16u + sizeof(_g4_t_v108)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v109)) > _g4_s5 ? (20u + sizeof(_g4_t_v109)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_TupleSize)) > _g4_s6 ? (20u + sizeof(_g4_t_TupleSize)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v111)) > _g4_s7 ? (20u + sizeof(_g4_t_v111)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v112)) > _g4_s8 ? (24u + sizeof(_g4_t_v112)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v113)) > _g4_s9 ? (24u + sizeof(_g4_t_v113)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v114)) > _g4_s10 ? (24u + sizeof(_g4_t_v114)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v115)) > _g4_s11 ? (24u + sizeof(_g4_t_v115)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v116)) > _g4_s12 ? (28u + sizeof(_g4_t_v116)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v117)) > _g4_s13 ? (32u + sizeof(_g4_t_v117)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v118)) > _g4_s14 ? (32u + sizeof(_g4_t_v118)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v119)) > _g4_s15 ? (36u + sizeof(_g4_t_v119)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v120)) > _g4_s16 ? (36u + sizeof(_g4_t_v120)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v121)) > _g4_s17 ? (40u + sizeof(_g4_t_v121)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v122)) > _g4_s18 ? (44u + sizeof(_g4_t_v122)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v123)) > _g4_s19 ? (48u + sizeof(_g4_t_v123)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v124)) > _g4_s20 ? (64u + sizeof(_g4_t_v124)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v125)) > _g4_s21 ? (68u + sizeof(_g4_t_v125)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v126)) > _g4_s22 ? (72u + sizeof(_g4_t_v126)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v127)) > _g4_s23 ? (76u + sizeof(_g4_t_v127)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v128)) > _g4_s24 ? (80u + sizeof(_g4_t_v128)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v129)) > _g4_s25 ? (84u + sizeof(_g4_t_v129)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v130)) > _g4_s26 ? (88u + sizeof(_g4_t_v130)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v131)) > _g4_s27 ? (92u + sizeof(_g4_t_v131)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v132)) > _g4_s28 ? (96u + sizeof(_g4_t_v132)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v133)) > _g4_s29 ? (100u + sizeof(_g4_t_v133)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v134)) > _g4_s30 ? (104u + sizeof(_g4_t_v134)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v135)) > _g4_s31 ? (108u + sizeof(_g4_t_v135)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v136)) > _g4_s32 ? (112u + sizeof(_g4_t_v136)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 4u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 8u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 12u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 16u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 16u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 20u);
  _g4_t_TupleSize &TupleSize = *reinterpret_cast<_g4_t_TupleSize *>(_g4_sf + 20u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 20u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 24u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 24u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 24u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 24u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 28u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 32u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 32u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 36u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 36u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 40u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 44u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 48u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 64u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 68u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 72u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 76u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 80u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 84u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 88u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 92u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 96u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 100u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 104u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 108u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 112u);

  v134 = &a1;
  v4 = a2;
  result = (hkTypeManager::Type::Self *)(*(int (**)(int *, int, int, int, int, int, int, hkDataWorldCloner::Self *, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int, uint32_t *, int, int, int, int, int))(**a2 + 8))(
                                    *a2,
                                    v104,
                                    v105,
                                    v106,
                                    v107,
                                    v109,
                                    v112,
                                    v116,
                                    v117,
                                    a1,
                                    a3,
                                    a4,
                                    v123[0],
                                    v123[1],
                                    v123[2],
                                    v123[3],
                                    v124,
                                    v125,
                                    v126,
                                    v127,
                                    v128,
                                    v129,
                                    v130,
                                    v131,
                                    v132,
                                    v133);
  v6 = result;
  if ( *(uint32_t *)result > 9u )
    return result;
  v7 = *(uint32_t **)result;
  result = (hkTypeManager::Type::Self *)((char *)dword_20B9FF4 + (uint32_t)jpt_18D0520[*(uint32_t *)result]);
  switch ( (unsigned int)(uintptr_t)(v7) )
  {
    case 0u:
    case 1u:
      return result;
    case 2u:
    case 4u:
      result = (hkTypeManager::Type::Self *)v122;
      if ( v122 > 0 )
      {
        for ( i = 0; i != v122; ++i )
        {
          v29 = G4_VCALL<int>(*v121, 72, i);
          v30 = *v4;
          v31 = **v4;
          v135 = i;
          result = (hkTypeManager::Type::Self *)(*(int (**)(int *, int, int))(v31 + 76))(v30, v135, v29);
        }
      }
      return result;
    case 3u:
      result = (hkTypeManager::Type::Self *)v122;
      v32 = 0;
      if ( v122 > 0 )
      {
        do
        {
          v33 = ((long double (*)(uint32_t, int))*(uint32_t *)(*(uint32_t *)*v121 + 64))(*v121, v32);
          v34 = *v4;
          v120 = v33;
          v35 = **v4;
          v135 = v32++;
          result = (hkTypeManager::Type::Self *)(*(int (**)(int *, int, uint32_t))(v35 + 68))(v34, v135, LODWORD(v120));
        }
        while ( v32 != v122 );
      }
      return result;
    case 5u:
      result = (hkTypeManager::Type::Self *)v122;
      v36 = 0;
      if ( v122 > 0 )
      {
        do
        {
          v37 = G4_VCALL<int>(*v121, 56, v36);
          v38 = *v4;
          v39 = **v4;
          v135 = v36++;
          result = (hkTypeManager::Type::Self *)(*(int (**)(int *, int, int))(v39 + 60))(v38, v135, v37);
        }
        while ( v36 != v122 );
      }
      return result;
    case 6u:
      (*(void (**)(int *, int))(**v4 + 20))(*v4, v122);
      v40 = G4_VCALL<int>(*v121, 28);
      v41 = G4_VCALL<int>(v40, 40);
      v111 = v41;
      v42 = 0;
      v128 = nullptr;
      v129 = 0;
      v130 = 0x80000000;
      if ( v41 == 0
        || (v124 = 16 * v41,
            v42 = (*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                    (uint32_t *)(hkContainerTempAllocator::s_alloc),
                    &v124),
            v43 = v124 / 16,
            v124 / 16 == 0) )
      {
        v43 = 0x80000000;
      }
      v128 = (uint32_t *)v42;
      v129 = v111;
      v130 = v43;
      if ( v111 <= 0 )
      {
        v129 = v111;
        G4_VCALL<void>(v40, 52, &v128);
        goto LABEL_5;
      }
      v44 = 0;
      do
      {
        *(__m128i *)(v42 + v44) = g4_m128_from<__m128i>(0LL);
        v44 += 16;
      }
      while ( v44 != 16 * v111 );
      v45 = &v128[4 * v129];
      if ( v111 - v129 > 0 )
      {
        v46 = 16 * (v111 - v129);
        v47 = 0;
        do
        {
          *(__m128i *)&v45[v47 / 4] = g4_m128_from<__m128i>(0LL);
          v47 += 16;
        }
        while ( v47 != v46 );
      }
      v129 = v111;
      G4_VCALL<void>(v40, 52, &v128);
      v118 = 0;
      v108 = v4;
      break;
    case 7u:
      result = (hkTypeManager::Type::Self *)(*(int (**)(int *, int))(**v4 + 20))(*v4, v122);
      if ( v122 > 0 )
      {
        for ( j = 0; j != v122; ++j )
        {
          v66 = G4_VCALL<int>(*v121, 88, j);
          v124 = v66;
          if ( v66 != 0 )
          {
            v67 = *(uint32_t *)(v66 + 4);
            ++*(uint32_t *)(v66 + 8);
            v68 = v67;
            LOWORD(v67) = 0;
            *(uint32_t *)(v66 + 4) = v67 | (uint16_t)(v68 + 1);
          }
          hkDataWorldCloner::copyObject((hkDataWorldCloner::Self *)&v128, v119, (hkDataObject::Self *)&v124);
          (*(void (**)(int *, int, uint32_t *))(**v4 + 92))(*v4, j, v128);
          v69 = v128;
          if ( v128 != nullptr )
          {
            v70 = v128[1];
            LOWORD(v70) = 0;
            v71 = v70 | (uint16_t)(v128[1] - 1);
            v72 = v128[2];
            v128[1] = v71;
            v69[2] = v72 - 1;
            if ( v72 == 1 )
              G4_VCALL<void>(v69, 4);
          }
          result = (hkTypeManager::Type::Self *)v124;
          if ( v124 != 0 )
          {
            v73 = *(uint32_t *)(v124 + 4);
            LOWORD(v73) = 0;
            v74 = v73 | (uint16_t)(*(uint32_t *)(v124 + 4) - 1);
            v75 = *(uint32_t *)(v124 + 8);
            *(uint32_t *)(v124 + 4) = v74;
            *((uint32_t *)result + 2) = v75 - 1;
            if ( v75 == 1 )
              result = (hkTypeManager::Type::Self *)G4_VCALL<int>(result, 4);
          }
        }
      }
      return result;
    case 8u:
      result = (hkTypeManager::Type::Self *)(*(int (**)(int *, int))(**v4 + 20))(*v4, v122);
      if ( v122 > 0 )
      {
        for ( k = 0; k != v122; ++k )
        {
          v9 = (*(int (**)(int *, int))(**v4 + 96))(*v4, k);
          v124 = v9;
          if ( v9 != 0 )
          {
            v10 = *(uint32_t *)(v9 + 4);
            ++*(uint32_t *)(v9 + 8);
            v11 = v10;
            LOWORD(v10) = 0;
            *(uint32_t *)(v9 + 4) = v10 | (uint16_t)(v11 + 1);
          }
          v12 = (uint32_t *)G4_VCALL<int>(*v121, 96, k);
          v128 = v12;
          if ( v12 != nullptr )
          {
            v13 = v12[1];
            ++v12[2];
            v14 = v13;
            LOWORD(v13) = 0;
            v12[1] = v13 | (uint16_t)(v14 + 1);
          }
          v15 = G4_VCALL<int>(v12, 24);
          G4_VCALL<void>(v124, 20, v15);
          v16 = G4_VCALL<int>(v128, 24);
          hkDataWorldCloner::copyArray((int)(uintptr_t)(v119), (int **)(&v124), (int)(uintptr_t)(&v128), v16);
          v17 = v128;
          if ( v128 != nullptr )
          {
            v18 = v128[1];
            LOWORD(v18) = 0;
            v19 = v18 | (uint16_t)(v128[1] - 1);
            v20 = v128[2];
            v128[1] = v19;
            v17[2] = v20 - 1;
            if ( v20 == 1 )
              G4_VCALL<void>(v17, 4);
          }
          result = (hkTypeManager::Type::Self *)v124;
          if ( v124 != 0 )
          {
            v21 = *(uint32_t *)(v124 + 4);
            LOWORD(v21) = 0;
            v22 = v21 | (uint16_t)(*(uint32_t *)(v124 + 4) - 1);
            v23 = *(uint32_t *)(v124 + 8);
            *(uint32_t *)(v124 + 4) = v22;
            *((uint32_t *)result + 2) = v23 - 1;
            if ( v23 == 1 )
              result = (hkTypeManager::Type::Self *)G4_VCALL<int>(result, 4);
          }
        }
      }
      return result;
    case 9u:
      TupleSize = hkTypeManager::Type::getTupleSize(v6);
      if ( **((uint32_t **)v6 + 1) == 3 )
      {
        result = (hkTypeManager::Type::Self *)v122;
        if ( v122 > 0 )
        {
          for ( m = 0; m != v122; ++m )
          {
            v25 = G4_VCALL<int>(*v121, 48, m);
            v26 = *v4;
            v27 = **v4;
            v135 = m;
            result = (hkTypeManager::Type::Self *)(*(int (**)(int *, int, int))(v27 + 52))(v26, v135, v25);
          }
        }
      }
      else
      {
        result = (hkTypeManager::Type::Self *)(*(int (**)(int *, int))(**v4 + 20))(*v4, v122);
        if ( v122 > 0 )
        {
          for ( n = 0; n != v122; ++n )
          {
            v91 = G4_VCALL<int>(*v121, 96, n);
            v124 = v91;
            if ( v91 != 0 )
            {
              v92 = *(uint32_t *)(v91 + 4);
              ++*(uint32_t *)(v91 + 8);
              v93 = v92;
              LOWORD(v92) = 0;
              *(uint32_t *)(v91 + 4) = v92 | (uint16_t)(v93 + 1);
            }
            v94 = (uint32_t *)(*(int (**)(int *, int))(**v4 + 96))(*v4, n);
            v128 = v94;
            if ( v94 != nullptr )
            {
              v95 = v94[1];
              ++v94[2];
              v96 = v95;
              LOWORD(v95) = 0;
              v94[1] = v95 | (uint16_t)(v96 + 1);
            }
            G4_VCALL<void>(v94, 20, TupleSize);
            hkDataWorldCloner::copyArray((int)(uintptr_t)(v119), (int **)(&v128), (int)(uintptr_t)(&v124), TupleSize);
            v97 = v128;
            if ( v128 != nullptr )
            {
              v98 = v128[1];
              LOWORD(v98) = 0;
              v99 = v98 | (uint16_t)(v128[1] - 1);
              v100 = v128[2];
              v128[1] = v99;
              v97[2] = v100 - 1;
              if ( v100 == 1 )
                G4_VCALL<void>(v97, 4);
            }
            result = (hkTypeManager::Type::Self *)v124;
            if ( v124 != 0 )
            {
              v101 = *(uint32_t *)(v124 + 4);
              LOWORD(v101) = 0;
              v102 = v101 | (uint16_t)(*(uint32_t *)(v124 + 4) - 1);
              v103 = *(uint32_t *)(v124 + 8);
              *(uint32_t *)(v124 + 4) = v102;
              *((uint32_t *)result + 2) = v103 - 1;
              if ( v103 == 1 )
                result = (hkTypeManager::Type::Self *)G4_VCALL<int>(result, 4);
            }
          }
        }
      }
      return result;
    default:
      abort();
  }
  do
  {
    v48 = &v128[4 * v118];
    v49 = (int *)v48[2];
    v50 = *v49;
    if ( *v49 != 8 )
    {
      if ( v50 != 9 )
      {
        if ( v50 == 1 )
          goto LABEL_63;
LABEL_49:
        v113 = &v128[4 * v118];
        v51 = (*(int (**)(int *, uint32_t))(**v108 + 44))(*v108, *v48);
        v52 = (uint32_t *)v51;
        if ( v51 != 0 )
        {
          v53 = *(uint32_t *)(v51 + 4);
          ++*(uint32_t *)(v51 + 8);
          v54 = v53;
          LOWORD(v53) = 0;
          v52[1] = v53 | (uint16_t)(v54 + 1);
        }
        v55 = G4_VCALL<int>(*v121, 44, *v113);
        v56 = (uint32_t *)v55;
        if ( v55 != 0 )
        {
          v57 = *(uint32_t *)(v55 + 4);
          ++*(uint32_t *)(v55 + 8);
          v58 = v57;
          LOWORD(v57) = 0;
          *(uint32_t *)(v55 + 4) = v57 | (uint16_t)(v58 + 1);
        }
        if ( v122 > 0 )
        {
          v114 = (int)(uintptr_t)(v52);
          for ( ii = 0; ii != v122; ++ii )
          {
            v136 = ii;
            v125 = ii;
            v124 = (int)(uintptr_t)(v56);
            hkDataWorldCloner::copySimpleValue_hkDataArray_Value_159c73(v119, v114, v136, &v124);
          }
          v52 = (uint32_t *)v114;
        }
        if ( v56 != nullptr )
        {
          v60 = v56[1];
          v61 = v56[2];
          LOWORD(v60) = 0;
          v56[1] = v60 | (uint16_t)(v56[1] - 1);
          v56[2] = v61 - 1;
          if ( v61 == 1 )
            G4_VCALL<void>(v56, 4);
        }
        if ( v52 != nullptr )
        {
          v62 = v52[1];
          LOWORD(v62) = 0;
          v63 = v62 | (uint16_t)(v52[1] - 1);
          v64 = v52[2]-- == 1;
          v52[1] = v63;
          if ( v64 )
            G4_VCALL<void>(v52, 4);
        }
        goto LABEL_63;
      }
      if ( *(uint32_t *)v49[1] == 3 )
        goto LABEL_49;
    }
    v115 = &v128[4 * v118];
    v76 = (*(int (**)(int *, uint32_t))(**v108 + 44))(*v108, *v48);
    v123[0] = v76;
    if ( v76 != 0 )
    {
      v77 = *(uint32_t *)(v76 + 4);
      ++*(uint32_t *)(v76 + 8);
      v78 = v77;
      LOWORD(v77) = 0;
      *(uint32_t *)(v76 + 4) = v77 | (uint16_t)(v78 + 1);
    }
    v79 = (uint32_t *)G4_VCALL<int>(*v121, 44, *v115);
    v124 = (int)(uintptr_t)(v79);
    if ( v79 != nullptr )
    {
      v80 = v79[1];
      ++v79[2];
      v81 = v80;
      LOWORD(v80) = 0;
      v79[1] = v80 | (uint16_t)(v81 + 1);
    }
    v82 = G4_VCALL<int>(v79, 24);
    G4_VCALL<void>(v123[0], 20, v82);
    v83 = G4_VCALL<int>(v124, 24);
    hkDataWorldCloner::copyArray((int)(uintptr_t)(v119), (int **)(v123), (int)(uintptr_t)(&v124), v83);
    v84 = (uint32_t *)v124;
    if ( v124 != 0 )
    {
      v85 = *(uint32_t *)(v124 + 4);
      v86 = *(uint32_t *)(v124 + 8);
      LOWORD(v85) = 0;
      *(uint32_t *)(v124 + 4) = v85 | (uint16_t)(*(uint32_t *)(v124 + 4) - 1);
      v84[2] = v86 - 1;
      if ( v86 == 1 )
        G4_VCALL<void>(v84, 4);
    }
    v87 = (uint32_t *)v123[0];
    if ( v123[0] != 0 )
    {
      v88 = *(uint32_t *)(v123[0] + 4);
      v89 = *(uint32_t *)(v123[0] + 8);
      LOWORD(v88) = 0;
      *(uint32_t *)(v123[0] + 4) = v88 | (uint16_t)(*(uint32_t *)(v123[0] + 4) - 1);
      v87[2] = v89 - 1;
      if ( v89 == 1 )
        G4_VCALL<void>(v87, 4);
    }
LABEL_63:
    ++v118;
  }
  while ( v118 != v111 );
LABEL_5:
  result = (hkTypeManager::Type::Self *)v130;
  v129 = 0;
  if ( v130 >= 0 )
    return (hkTypeManager::Type::Self *)(*(int (**)(uint32_t *, uint32_t *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                                    (uint32_t *)(hkContainerTempAllocator::s_alloc),
                                    v128,
                                    16 * v130);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldCloner::copyValue  (binary VA: 0x18d1000)
// Original: hkDataWorldCloner::copyValue
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkDataWorldCloner::copyValue(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int16_t v10;
  int *v11;
  int v12;
  int16_t v13;
  int TupleSize;
  int v15;
  int *v16;
  int v17;
  int v18;
  hkTypeManager::Type::Self *result;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int16_t v25;
  int *v26;
  int v27;
  int16_t v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
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
  typedef int **_g4_t_v48;
  typedef hkDataObject::Self *_g4_t_v49;
  typedef hkDataObject::Self *_g4_t_v50;
  typedef hkDataObject::Self *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int *_g4_t_v53;
  typedef uint32_t _g4_t_v54[2];
  typedef int *_g4_t_v55[5];
  typedef int *_g4_t_v56;
  typedef int _g4_t_v57;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v38)) > _g4_s0 ? (4u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v39)) > _g4_s1 ? (8u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v40)) > _g4_s2 ? (12u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v41)) > _g4_s3 ? (16u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v42)) > _g4_s4 ? (16u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v43)) > _g4_s5 ? (16u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v44)) > _g4_s6 ? (16u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v45)) > _g4_s7 ? (20u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v46)) > _g4_s8 ? (20u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v47)) > _g4_s9 ? (24u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v48)) > _g4_s10 ? (24u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v49)) > _g4_s11 ? (28u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v50)) > _g4_s12 ? (28u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v51)) > _g4_s13 ? (28u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v52)) > _g4_s14 ? (32u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v53)) > _g4_s15 ? (36u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v54)) > _g4_s16 ? (40u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v55)) > _g4_s17 ? (48u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v56)) > _g4_s18 ? (68u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v57)) > _g4_s19 ? (72u + sizeof(_g4_t_v57)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);

  v55[4] = &a1;
  v4 = a4;
  v5 = a2;
  v6 = a4[2];
  if ( *(uint32_t *)v6 == 9 )
  {
    if ( **(uint32_t **)(v6 + 4) != 3 )
    {
      (*(void (**)(int *, uint32_t, uint32_t, int, int, int, int *, int, int, int))(*(uint32_t *)*a3 + 16))(
        &v52,
        *a3,
        *a4,
        v38,
        v39,
        v40,
        &v52,
        v45,
        v47,
        a1);
      v7 = *(uint32_t *)v52;
      v56 = v53;
      v8 = (*(int (**)(int))(v7 + 44))(v52);
      v54[0] = v8;
      if ( v8 != 0 )
      {
        v9 = *(uint32_t *)(v8 + 4);
        ++*(uint32_t *)(v8 + 8);
        v10 = v9;
        LOWORD(v9) = 0;
        *(uint32_t *)(v8 + 4) = v9 | (uint16_t)(v10 + 1);
      }
      (*(void (**)(int, uint32_t, uint32_t))(*(uint32_t *)*v5 + 16))(v42, *v5, *v4);
      v11 = (int *)G4_VCALL<int>(v52, 44, v53);
      v55[0] = v11;
      if ( v11 != nullptr )
      {
        v12 = v11[1];
        ++v11[2];
        v13 = v12;
        LOWORD(v12) = 0;
        v11[1] = v12 | (uint16_t)(v13 + 1);
      }
      TupleSize = hkTypeManager::Type::getTupleSize((hkTypeManager::Type::Self *)v4[2]);
      (*(void (**)(int *, int))(*v55[0] + 20))(v55[0], TupleSize);
      v15 = hkTypeManager::Type::getTupleSize((hkTypeManager::Type::Self *)v4[2]);
      hkDataWorldCloner::copyArray((int)(uintptr_t)(v49), v55, (int)(uintptr_t)(v54), v15);
      v16 = v55[0];
      if ( v55[0] != nullptr )
      {
        v17 = v55[0][1];
        v18 = v55[0][2];
        LOWORD(v17) = 0;
        v55[0][1] = v17 | (uint16_t)(v55[0][1] - 1);
        v16[2] = v18 - 1;
        if ( v18 == 1 )
          G4_VCALL<void>(v16, 4);
      }
      result = (hkTypeManager::Type::Self *)v54[0];
      if ( v54[0] != 0 )
      {
        v20 = *(uint32_t *)(v54[0] + 4);
        v21 = *(uint32_t *)(v54[0] + 8);
        LOWORD(v20) = 0;
        *(uint32_t *)(v54[0] + 4) = v20 | (uint16_t)(*(uint32_t *)(v54[0] + 4) - 1);
        *((uint32_t *)result + 2) = v21 - 1;
        if ( v21 == 1 )
          return (hkTypeManager::Type::Self *)G4_VCALL<int>(result, 4);
      }
      return result;
    }
LABEL_25:
    (*(void (**)(int *, uint32_t, uint32_t, int, int, int, int, int, uint32_t *, int))(*(uint32_t *)*a2 + 16))(
      &v52,
      *a2,
      *a4,
      v38,
      v39,
      v40,
      v41,
      v45,
      a3,
      a1);
    v44 = v52;
    v36 = *v4;
    v46 = (int)(uintptr_t)(v53);
    v37 = **v48;
    v56 = *v48;
    v57 = v36;
    (*(void (**)(int **))(v37 + 16))(v55);
    return hkDataWorldCloner::copySimpleValue_hkDataObject_Value_2e47fa(v51, v44, v46, (hkDataObject_Value::Self *)v55);
  }
  if ( *(uint32_t *)v6 != 8 )
    goto LABEL_25;
  (*(void (**)(int *, uint32_t, uint32_t, int, int, int, int *, int, int, int))(*(uint32_t *)*a3 + 16))(
    &v52,
    *a3,
    *a4,
    v38,
    v39,
    v40,
    &v52,
    v45,
    v47,
    a1);
  v22 = *(uint32_t *)v52;
  v56 = v53;
  v23 = (*(int (**)(int))(v22 + 44))(v52);
  v54[0] = v23;
  if ( v23 != 0 )
  {
    v24 = *(uint32_t *)(v23 + 4);
    ++*(uint32_t *)(v23 + 8);
    v25 = v24;
    LOWORD(v24) = 0;
    *(uint32_t *)(v23 + 4) = v24 | (uint16_t)(v25 + 1);
  }
  (*(void (**)(int, uint32_t, uint32_t))(*(uint32_t *)*v5 + 16))(v43, *v5, *v4);
  v26 = (int *)G4_VCALL<int>(v52, 44, v53);
  v55[0] = v26;
  if ( v26 != nullptr )
  {
    v27 = v26[1];
    ++v26[2];
    v28 = v27;
    LOWORD(v27) = 0;
    v26[1] = v27 | (uint16_t)(v28 + 1);
  }
  v29 = G4_VCALL<int>(v54[0], 24);
  (*(void (**)(int *, int))(*v55[0] + 20))(v55[0], v29);
  v30 = G4_VCALL<int>(v54[0], 24);
  hkDataWorldCloner::copyArray((int)(uintptr_t)(v50), v55, (int)(uintptr_t)(v54), v30);
  v31 = v55[0];
  if ( v55[0] != nullptr )
  {
    v32 = v55[0][1];
    v33 = v55[0][2];
    LOWORD(v32) = 0;
    v55[0][1] = v32 | (uint16_t)(v55[0][1] - 1);
    v31[2] = v33 - 1;
    if ( v33 == 1 )
      G4_VCALL<void>(v31, 4);
  }
  result = (hkTypeManager::Type::Self *)v54[0];
  if ( v54[0] != 0 )
  {
    v34 = *(uint32_t *)(v54[0] + 4);
    v35 = *(uint32_t *)(v54[0] + 8);
    LOWORD(v34) = 0;
    *(uint32_t *)(v54[0] + 4) = v34 | (uint16_t)(*(uint32_t *)(v54[0] + 4) - 1);
    *((uint32_t *)result + 2) = v35 - 1;
    if ( v35 == 1 )
      return (hkTypeManager::Type::Self *)G4_VCALL<int>(result, 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldCloner::copyObjectMembers  (binary VA: 0x18d1370)
// Original: hkDataWorldCloner::copyObjectMembers
// ----------------------------------------------------------------------------
int hkDataWorldCloner::copyObjectMembers(hkDataWorldCloner::Self *self, hkDataObject::Self *a2, const hkDataObject::Self *a3, int a4, int a5, int a6)
{
  int v6;
  hkDataObject::Self *v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *savedregs;

  v6 = 0;
  v7 = a2;
  a2 = (hkDataObject::Self *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)a2 + 12))(
                         *(uint32_t *)a2,
                         v9,
                         v10,
                         v11,
                         v12,
                         v13,
                         v14,
                         v15,
                         v16,
                         v17,
                         v18,
                         v19);
  a4 = 0;
  a5 = 0;
  a6 = 0x80000000;
  a3 = (const hkDataObject::Self *)(*(int (**)(uint32_t))(**(uint32_t **)a3 + 12))(*(uint32_t *)a3);
  hkDataWorldCloner::getClassMemberInfos(
    self,
    (hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator::Self> *)&a4,
    (const hkDataClass::Self *)&a2,
    (const hkDataClass::Self *)&a3);
  if ( a5 > 0 )
  {
    do
    {
      savedregs = (uint32_t *)(a4 + 16 * v6++);
      hkDataWorldCloner::copyValue((int)(uintptr_t)(self), (uint32_t *)(v7), (uint32_t *)(a3), savedregs);
    }
    while ( a5 > v6 );
  }
  result = a6;
  a5 = 0;
  if ( a6 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             a4,
             16 * a6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldCloner::clone  (binary VA: 0x18d1460)
// Original: hkDataWorldCloner::clone
// ----------------------------------------------------------------------------
hkDataWorldCloner::Self * hkDataWorldCloner::clone(hkDataWorldCloner::Self *self, hkDataObject::Self *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  bool v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);

  (*(void (**)(uint32_t **, uint32_t, int, int, int, int))(**((uint32_t **)a2 + 1) + 36))(
    &v14,
    *((uint32_t *)a2 + 1),
    v10,
    v11,
    v12,
    v13);
  hkDataWorldCloner::copyObject((hkDataWorldCloner::Self *)&v15, a2, (hkDataObject::Self *)&v14);
  v2 = v15;
  if ( v15 != nullptr )
  {
    v3 = v15[1];
    v4 = v15[2];
    LOWORD(v3) = 0;
    v15[1] = v3 | (uint16_t)(v15[1] - 1);
    v2[2] = v4 - 1;
    if ( v4 == 1 )
      G4_VCALL<void>(v2, 4);
  }
  v5 = v14;
  if ( v14 != nullptr )
  {
    v6 = v14[1];
    LOWORD(v6) = 0;
    v7 = v6 | (uint16_t)(v14[1] - 1);
    v8 = v14[2]-- == 1;
    v5[1] = v7;
    if ( v8 )
      G4_VCALL<void>(v5, 4);
  }
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkObjectCopier::lookupClass  (binary VA: 0x18d1510)
// Original: hkObjectCopier::lookupClass
// ----------------------------------------------------------------------------
const hkClass::Self * hkObjectCopier::lookupClass(hkObjectCopier::Self *self, const hkClass::Self *a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkObjectCopier::Destroy  (binary VA: 0x18d1520)
// Original: hkObjectCopier::~hkObjectCopier
// ----------------------------------------------------------------------------
void hkObjectCopier::Destroy(hkObjectCopier::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkObjectCopier::areMembersCompatible  (binary VA: 0x18d1540)
// Original: hkObjectCopier::areMembersCompatible
// ----------------------------------------------------------------------------
int hkObjectCopier::areMembersCompatible(hkObjectCopier::Self *self, const hkClassMember::Self *a2, const hkClassMember::Self *a3)
{
  int result;
  int v4;

  result = 0;
  v4 = *((uint8_t *)a2 + 12);
  if ( v4 == *((uint8_t *)a3 + 12) && (*((uint8_t *)a3 + 13) == *((uint8_t *)a2 + 13) || v4 == 24) )
    return 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkObjectCopier::Destroy_ea18d1580  (binary VA: 0x18d1580)
// Original: hkObjectCopier::~hkObjectCopier
// ----------------------------------------------------------------------------
void hkObjectCopier::Destroy_ea18d1580(hkObjectCopier::Self *self)
{
  int v1;
  int v2;

  hkObjectCopier::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkObjectCopier::Construct  (binary VA: 0x18d2120)
// Original: hkObjectCopier::hkObjectCopier
// ----------------------------------------------------------------------------
int hkObjectCopier::Construct(int a1, uint32_t *a2, int *a3, int a4)
{
  int v5;
  bool v6;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A84C8);
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)(a1 + 8) = *a2;
  v5 = *a3;
  *(uint32_t *)(a1 + 12) = *a3;
  v6 = *(uint8_t *)(a1 + 9) == BYTE1(v5);
  *(uint32_t *)(a1 + 16) = a4;
  *(uint8_t *)(a1 + 20) = !v6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkObjectCopier::writeZero  (binary VA: 0x18d2170)
// Original: hkObjectCopier::writeZero
// ----------------------------------------------------------------------------
int hkObjectCopier::writeZero(int a1, hkOArchive::Self *a2, hkClassMember::Self *a3, const void **a4)
{
  const void **v4;
  int v5;
  int v6;
  int v7;
  int SizeInBytes;
  int v9;
  int v10;
  const void *v11;
  char *v12;
  int v14;
  int CstyleArraySize;
  int v16;
  hkClass::Self *StructClass;
  typedef int _g4_t_v18;
  typedef hkClassMember::Self *_g4_t_v19;
  typedef hkClassMember::Self *_g4_t_ObjectSize;
  typedef hkClassMember::Self *_g4_t_v21;
  typedef hkOArchive::Self *_g4_t_v22;
  typedef char _g4_t_v23[8];
  typedef int _g4_t_v24[3];
  typedef uint32_t _g4_t_v25[134];
  enum : size_t {
    _g4_s0 = 656u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_ObjectSize)) > _g4_s2 ? (20u + sizeof(_g4_t_ObjectSize)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v24)) > _g4_s6 ? (36u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v25)) > _g4_s7 ? (48u + sizeof(_g4_t_v25)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_ObjectSize &ObjectSize = *reinterpret_cast<_g4_t_ObjectSize *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);

  v25[130] = (uint32_t)(uintptr_t)(&a1);
  v22 = a2;
  v4 = a4;
  v5 = *((uint8_t *)a3 + 12);
  switch ( *((uint8_t *)a3 + 12) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x18:
    case 0x1F:
    case 0x20:
      SizeInBytes = hkClassMember::getSizeInBytes(a3);
      goto LABEL_6;
    case 0x14:
    case 0x15:
    case 0x1E:
    case 0x21:
      v14 = *(uint8_t *)(a1 + 12);
      v21 = a3;
      CstyleArraySize = hkClassMember::getCstyleArraySize(a3);
      v16 = 1;
      if ( CstyleArraySize != 0 )
        v16 = hkClassMember::getCstyleArraySize(v21);
      SizeInBytes = v16 * v14;
      goto LABEL_6;
    case 0x16:
    case 0x17:
    case 0x1A:
    case 0x1B:
      if ( v5 == 27 )
      {
        SizeInBytes = *(uint8_t *)(a1 + 12) + *(uint8_t *)(a1 + 12) + 4;
      }
      else
      {
        SizeInBytes = *(uint8_t *)(a1 + 12) + 4;
        if ( v5 == 22 )
        {
          memset(v25, 0, 12);
          hkOArchive::writeRaw(a2, v25, SizeInBytes);
          return (int)(uintptr_t)(hkOArchive::write32u(v22, 0));
        }
      }
LABEL_6:
      v9 = (unsigned int)(uintptr_t)(v4[2]) & 0x3FFFFFFF;
      if ( SizeInBytes > v9 )
      {
        v10 = 2 * v9;
        if ( SizeInBytes >= v10 )
          v10 = SizeInBytes;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v23, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v4, v10, 1);
      }
LABEL_10:
      v11 = v4[1];
      v12 = (char *)*v4;
      if ( SizeInBytes - (int)(uintptr_t)(v11) > 0 )
      {
        memset(&v12[(uint32_t)(uintptr_t)(v11)], 0, SizeInBytes - (uint32_t)(uintptr_t)(v11));
        v12 = (char *)*v4;
      }
      v4[1] = (const void *)SizeInBytes;
      return hkOArchive::writeRaw(v22, v12, SizeInBytes);
    case 0x19:
      v19 = a3;
      StructClass = (hkClass::Self *)hkClassMember::getStructClass(a3);
      ObjectSize = (hkClassMember::Self *)hkClass::getObjectSize(StructClass);
      v6 = hkClassMember::getCstyleArraySize(v19);
      goto LABEL_3;
    case 0x1C:
      v19 = a3;
      ObjectSize = (hkClassMember::Self *)(2 * *(uint8_t *)(a1 + 12));
      v6 = hkClassMember::getCstyleArraySize(a3);
LABEL_3:
      v7 = 1;
      if ( v6 != 0 )
        v7 = hkClassMember::getCstyleArraySize(v19);
      SizeInBytes = (uint32_t)(uintptr_t)(ObjectSize) * v7;
      goto LABEL_6;
    default:
      hkErrStream::Construct((hkErrStream::Self *)v24, (hkString::Self *)v25, 512);
      hkOstream::opShl((int)(uintptr_t)(v24), (hkString::Self *)"Unknown class member type found!");
      if ( hkError::messageError((hkError::Self *)0x5EF4E5A4, (int)(uintptr_t)(v25), "Copier/hkObjectCopier.cpp", &dword_B0[2], v18) != 0 )
        __builtin_debugtrap();
      SizeInBytes = 0;
      hkErrStream::Destroy((hkErrStream::Self *)v24);
      goto LABEL_10;
  }
}

// ----------------------------------------------------------------------------
// Function: hkObjectCopier::saveBody  (binary VA: 0x18d23f0)
// Original: hkObjectCopier::saveBody
// ----------------------------------------------------------------------------
int hkObjectCopier::saveBody(int a1, hkString::Self *a2, hkClass::Self *a3, hkOArchive::Self *a4, hkClass::Self *a5, const void **a6)
{
  hkClass::Self *v6;
  int StreamWriter;
  int Member;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  const void *v15;
  char *v16;
  int v17;
  int MemberByName;
  int v19;
  int SizeInBytes;
  unsigned int v21;
  hkErrStream::Self *v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  const void **v29;
  const void *v30;
  char *v31;
  hkOArchive::Self *v32;
  hkStreamWriter::Self *v33;
  int v34;
  int v35;
  int v36;
  int *v37;
  int v38;
  hkClassMember::Self *v39;
  int v40;
  int v41;
  unsigned int ArrayMemberSize;
  unsigned int v43;
  int v44;
  int result;
  int v46;
  int v47;
  int v48;
  hkClass::Self *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int16_t v54; // si
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  hkErrStream::Self *v62;
  int v63;
  hkString::Self *v64;
  int v65;
  int v66;
  int v67;
  int k;
  int ObjectSize;
  int v70;
  int v71;
  int v72;
  hkErrStream::Self *v73;
  hkErrStream::Self *v74;
  const char **j;
  int v76;
  int i;
  hkOArchive::Self *v78;
  int v79;
  int v80;
  const char **v81;
  const char **EnumValue;
  const char **v83;
  int v84;
  int v85;
  int v86;
  int v87;
  char *savedregs;
  const void **retaddr;
  typedef hkClassMember::Self *_g4_t_v88;
  typedef hkClassMember::Self *_g4_t_v89;
  typedef hkClassMember::Self *_g4_t_v90;
  typedef hkClassMember::Self *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef char *_g4_t_v93;
  typedef char *_g4_t_v94;
  typedef hkString::Self *_g4_t_v95;
  typedef hkClassMember::Self *_g4_t_v96;
  typedef hkClassMember::Self *_g4_t_v97;
  typedef hkClass::Self *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef hkClass::Self *_g4_t_v100;
  typedef hkClass::Self *_g4_t_v101;
  typedef hkClass::Self *_g4_t_v102;
  typedef hkClass::Self *_g4_t_v103;
  typedef hkClass::Self *_g4_t_Class;
  typedef int _g4_t_v105;
  typedef hkClass::Self *_g4_t_v106;
  typedef uint8_t *_g4_t_v107;
  typedef hkClassMember::Self *_g4_t_v108;
  typedef hkClassMember::Self *_g4_t_v109;
  typedef hkClassMember::Self *_g4_t_EnumClass;
  typedef hkClassMember::Self *_g4_t_Name;
  typedef hkErrStream::Self *_g4_t_CstyleArraySize;
  typedef int _g4_t_v113;
  typedef hkErrStream::Self *_g4_t_v114;
  typedef int16_t _g4_t_v115;
  typedef int _g4_t_v116;
  typedef hkErrStream::Self *_g4_t_v117;
  typedef hkErrStream::Self *_g4_t_v118;
  typedef hkErrStream::Self *_g4_t_v119;
  typedef hkErrStream::Self *_g4_t_v120;
  typedef int _g4_t_NumMembers;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef hkClass::Self *_g4_t_v125;
  typedef hkStreamWriter::Self *_g4_t_v126;
  typedef hkStreamWriter::Self *_g4_t_v127;
  typedef hkOArchive::Self *_g4_t_v128;
  typedef uint16_t _g4_t_v129;
  typedef hkOArchive::Self *_g4_t_v130;
  typedef const void **_g4_t_v131;
  typedef int _g4_t_v132;
  typedef uint32_t _g4_t_v133[4];
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int16_t _g4_t_v137[8];
  typedef int *_g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef hkArrayUtil::Self *_g4_t_v142;
  typedef hkClassMember::Self *_g4_t_v143;
  typedef int _g4_t_v144;
  typedef int16_t *_g4_t_v145;
  enum : size_t {
    _g4_s0 = 752u,
    _g4_s1 = (0u + sizeof(_g4_t_v88)) > _g4_s0 ? (0u + sizeof(_g4_t_v88)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v89)) > _g4_s1 ? (8u + sizeof(_g4_t_v89)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v90)) > _g4_s2 ? (12u + sizeof(_g4_t_v90)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v91)) > _g4_s3 ? (12u + sizeof(_g4_t_v91)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v92)) > _g4_s4 ? (16u + sizeof(_g4_t_v92)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v93)) > _g4_s5 ? (20u + sizeof(_g4_t_v93)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v94)) > _g4_s6 ? (20u + sizeof(_g4_t_v94)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v95)) > _g4_s7 ? (28u + sizeof(_g4_t_v95)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v96)) > _g4_s8 ? (32u + sizeof(_g4_t_v96)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v97)) > _g4_s9 ? (32u + sizeof(_g4_t_v97)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v98)) > _g4_s10 ? (36u + sizeof(_g4_t_v98)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v99)) > _g4_s11 ? (36u + sizeof(_g4_t_v99)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v100)) > _g4_s12 ? (36u + sizeof(_g4_t_v100)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v101)) > _g4_s13 ? (40u + sizeof(_g4_t_v101)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v102)) > _g4_s14 ? (40u + sizeof(_g4_t_v102)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v103)) > _g4_s15 ? (40u + sizeof(_g4_t_v103)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_Class)) > _g4_s16 ? (40u + sizeof(_g4_t_Class)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v105)) > _g4_s17 ? (40u + sizeof(_g4_t_v105)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v106)) > _g4_s18 ? (40u + sizeof(_g4_t_v106)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v107)) > _g4_s19 ? (44u + sizeof(_g4_t_v107)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v108)) > _g4_s20 ? (44u + sizeof(_g4_t_v108)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v109)) > _g4_s21 ? (44u + sizeof(_g4_t_v109)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_EnumClass)) > _g4_s22 ? (44u + sizeof(_g4_t_EnumClass)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_Name)) > _g4_s23 ? (44u + sizeof(_g4_t_Name)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_CstyleArraySize)) > _g4_s24 ? (48u + sizeof(_g4_t_CstyleArraySize)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v113)) > _g4_s25 ? (48u + sizeof(_g4_t_v113)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v114)) > _g4_s26 ? (48u + sizeof(_g4_t_v114)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v115)) > _g4_s27 ? (48u + sizeof(_g4_t_v115)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v116)) > _g4_s28 ? (48u + sizeof(_g4_t_v116)) : _g4_s28,
    _g4_s30 = (48u + sizeof(_g4_t_v117)) > _g4_s29 ? (48u + sizeof(_g4_t_v117)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v118)) > _g4_s30 ? (48u + sizeof(_g4_t_v118)) : _g4_s30,
    _g4_s32 = (48u + sizeof(_g4_t_v119)) > _g4_s31 ? (48u + sizeof(_g4_t_v119)) : _g4_s31,
    _g4_s33 = (48u + sizeof(_g4_t_v120)) > _g4_s32 ? (48u + sizeof(_g4_t_v120)) : _g4_s32,
    _g4_s34 = (52u + sizeof(_g4_t_NumMembers)) > _g4_s33 ? (52u + sizeof(_g4_t_NumMembers)) : _g4_s33,
    _g4_s35 = (52u + sizeof(_g4_t_v122)) > _g4_s34 ? (52u + sizeof(_g4_t_v122)) : _g4_s34,
    _g4_s36 = (56u + sizeof(_g4_t_v123)) > _g4_s35 ? (56u + sizeof(_g4_t_v123)) : _g4_s35,
    _g4_s37 = (60u + sizeof(_g4_t_v124)) > _g4_s36 ? (60u + sizeof(_g4_t_v124)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_v125)) > _g4_s37 ? (64u + sizeof(_g4_t_v125)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_v126)) > _g4_s38 ? (68u + sizeof(_g4_t_v126)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v127)) > _g4_s39 ? (68u + sizeof(_g4_t_v127)) : _g4_s39,
    _g4_s41 = (72u + sizeof(_g4_t_v128)) > _g4_s40 ? (72u + sizeof(_g4_t_v128)) : _g4_s40,
    _g4_s42 = (72u + sizeof(_g4_t_v129)) > _g4_s41 ? (72u + sizeof(_g4_t_v129)) : _g4_s41,
    _g4_s43 = (72u + sizeof(_g4_t_v130)) > _g4_s42 ? (72u + sizeof(_g4_t_v130)) : _g4_s42,
    _g4_s44 = (76u + sizeof(_g4_t_v131)) > _g4_s43 ? (76u + sizeof(_g4_t_v131)) : _g4_s43,
    _g4_s45 = (80u + sizeof(_g4_t_v132)) > _g4_s44 ? (80u + sizeof(_g4_t_v132)) : _g4_s44,
    _g4_s46 = (84u + sizeof(_g4_t_v133)) > _g4_s45 ? (84u + sizeof(_g4_t_v133)) : _g4_s45,
    _g4_s47 = (100u + sizeof(_g4_t_v134)) > _g4_s46 ? (100u + sizeof(_g4_t_v134)) : _g4_s46,
    _g4_s48 = (104u + sizeof(_g4_t_v135)) > _g4_s47 ? (104u + sizeof(_g4_t_v135)) : _g4_s47,
    _g4_s49 = (108u + sizeof(_g4_t_v136)) > _g4_s48 ? (108u + sizeof(_g4_t_v136)) : _g4_s48,
    _g4_s50 = (116u + sizeof(_g4_t_v137)) > _g4_s49 ? (116u + sizeof(_g4_t_v137)) : _g4_s49,
    _g4_s51 = (132u + sizeof(_g4_t_v138)) > _g4_s50 ? (132u + sizeof(_g4_t_v138)) : _g4_s50,
    _g4_s52 = (136u + sizeof(_g4_t_v139)) > _g4_s51 ? (136u + sizeof(_g4_t_v139)) : _g4_s51,
    _g4_s53 = (140u + sizeof(_g4_t_v140)) > _g4_s52 ? (140u + sizeof(_g4_t_v140)) : _g4_s52,
    _g4_s54 = (144u + sizeof(_g4_t_v141)) > _g4_s53 ? (144u + sizeof(_g4_t_v141)) : _g4_s53,
    _g4_s55 = (652u + sizeof(_g4_t_v142)) > _g4_s54 ? (652u + sizeof(_g4_t_v142)) : _g4_s54,
    _g4_s56 = (656u + sizeof(_g4_t_v143)) > _g4_s55 ? (656u + sizeof(_g4_t_v143)) : _g4_s55,
    _g4_s57 = (660u + sizeof(_g4_t_v144)) > _g4_s56 ? (660u + sizeof(_g4_t_v144)) : _g4_s56,
    _g4_s58 = (664u + sizeof(_g4_t_v145)) > _g4_s57 ? (664u + sizeof(_g4_t_v145)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 0u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 8u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 12u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 16u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 20u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 20u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 28u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 32u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 32u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 36u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 36u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 36u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 40u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 40u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 40u);
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 40u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 40u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 40u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 44u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 44u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 44u);
  _g4_t_EnumClass &EnumClass = *reinterpret_cast<_g4_t_EnumClass *>(_g4_sf + 44u);
  _g4_t_Name &Name = *reinterpret_cast<_g4_t_Name *>(_g4_sf + 44u);
  _g4_t_CstyleArraySize &CstyleArraySize = *reinterpret_cast<_g4_t_CstyleArraySize *>(_g4_sf + 48u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 48u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 48u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 48u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 48u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 48u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 48u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 48u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 48u);
  _g4_t_NumMembers &NumMembers = *reinterpret_cast<_g4_t_NumMembers *>(_g4_sf + 52u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 52u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 56u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 60u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 64u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 68u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 68u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 72u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 72u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 72u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 76u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 80u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 84u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 100u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 104u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 108u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 116u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 132u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 136u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 140u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 144u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 652u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 656u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 660u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 664u);

  v142 = (hkArrayUtil::Self *)&a1;
  v123 = a1;
  v95 = a2;
  v98 = a3;
  v6 = a5;
  v128 = a4;
  v125 = a5;
  v131 = a6;
  StreamWriter = hkOArchive::getStreamWriter(a4);
  v124 = G4_VCALL<int>(StreamWriter, 40);
  v134 = 0;
  v135 = 0;
  v136 = 0x80000000;
  NumMembers = hkClass::getNumMembers(v6);
  v126 = nullptr;
  if ( NumMembers > 0 )
  {
    do
    {
      Member = hkClass::getMember(v125, (int)(uintptr_t)(v126));
      v9 = *(uint16_t *)(Member + 18);
      v10 = Member;
      v11 = hkOArchive::getStreamWriter(v128);
      v12 = v124 - G4_VCALL<int>(v11, 40) + v9;
      v13 = (unsigned int)(uintptr_t)(v131[2]) & 0x3FFFFFFF;
      if ( v12 > v13 )
      {
        v14 = 2 * v13;
        savedregs = (char *)((uint8_t *)(&dword_0 + 1));
        v142 = (hkArrayUtil::Self *)&v132;
        if ( v12 >= v14 )
          v14 = v12;
        hkArrayUtil::reserve(v142, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v131, v14, savedregs);
      }
      v15 = v131[1];
      v16 = (char *)*v131;
      if ( v12 - (int)(uintptr_t)(v15) > 0 )
      {
        memset(&v16[(uint32_t)(uintptr_t)(v15)], 0, v12 - (uint32_t)(uintptr_t)(v15));
        v16 = (char *)*v131;
      }
      v131[1] = (const void *)v12;
      hkOArchive::writeRaw(v128, v16, v12);
      if ( (*(uint8_t *)(v10 + 17) & 4) == 0 )
        goto LABEL_11;
      v17 = *(uint32_t *)(v123 + 16);
      if ( (v17 & 2) != 0 )
      {
        hkObjectCopier::writeZero(v123, v128, (hkClassMember::Self *)v10, v131);
        goto LABEL_26;
      }
      if ( (v17 & 1) == 0 )
      {
LABEL_11:
        if ( v98 == v125 )
        {
          MemberByName = v10;
LABEL_13:
          if ( G4_VCALL<int>(v123, 24, MemberByName, v10) != 0 )
          {
            v96 = (hkClassMember::Self *)((hkString::Self *)((char *)v95 + *(uint16_t *)(MemberByName + 18)));
            switch ( *(uint8_t *)(v10 + 12) )
            {
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 9:
              case 0xA:
              case 0xB:
              case 0xC:
              case 0xD:
              case 0xE:
              case 0xF:
              case 0x10:
              case 0x11:
              case 0x12:
              case 0x20:
                CstyleArraySize = (hkErrStream::Self *)(&dword_0 + 1);
                if ( hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName) != 0 )
                  CstyleArraySize = (hkErrStream::Self *)hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName);
                v19 = 1;
                if ( hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10) != 0 )
                  v19 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                SizeInBytes = hkClassMember::getSizeInBytes((hkClassMember::Self *)v10);
                v21 = *(uint8_t *)(v10 + 12) - 1;
                if ( v21 > 0x1F )
                  goto LABEL_140;
                v22 = CstyleArraySize;
                if ( v19 <= (int)(uintptr_t)(CstyleArraySize) )
                  v22 = (hkErrStream::Self *)v19;
                v113 = (int)(uintptr_t)(v22);
                v23 = SizeInBytes / v19;
                if ( ((1 << v21) & 0x800007FF) == 0 )
                {
                  if ( ((1 << v21) & 0x3F800) == 0 )
                  {
LABEL_140:
                    hkErrStream::Construct((hkErrStream::Self *)v137, (hkString::Self *)&v138, 512);
                    hkOstream::opShl(
                      (int)(uintptr_t)(v137),
                      (hkString::Self *)"Unknown class member found during write of plain data array.");
                    if ( hkError::messageError(
                           (hkError::Self *)0x747E1E03,
                           (int)(uintptr_t)(&v138),
                           "Copier/hkObjectCopier.cpp",
                           (const char *)&dword_100 + 3,
                           (int)(uintptr_t)(savedregs)) == 0 )
                      goto LABEL_139;
                    goto LABEL_138;
                  }
                  v113 = (uint32_t)(uintptr_t)(v22) * (v23 >> 2);
                  v23 = 4;
                }
                hkOArchive::writeArrayGeneric(v128, v96, v23, v113);
                goto LABEL_26;
              case 0x13:
                goto LABEL_26;
              case 0x14:
              case 0x15:
              case 0x1D:
              case 0x21:
                if ( hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10) != 0 )
                {
                  v76 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                  v138 = nullptr;
                  v139 = 0;
                  if ( v76 <= 0 )
                    goto LABEL_26;
                }
                else
                {
                  v138 = nullptr;
                  v139 = 0;
                  v76 = 1;
                }
                for ( i = 0; i < v76; ++i )
                  hkOArchive::writeRaw(v128, &v138, *(uint8_t *)(v123 + 12));
                goto LABEL_26;
              case 0x16:
              case 0x1A:
              case 0x1B:
                if ( *(uint8_t *)(v10 + 12) == 27 )
                {
                  v133[0] = 0;
                  v133[1] = 0;
                  hkOArchive::writeArrayGeneric(v128, v133, *(uint8_t *)(v123 + 12), 1);
                  if ( *(uint32_t *)v96 != 0 )
                  {
                    v64 = *((hkString::Self **)v96 + 2);
                  }
                  else
                  {
                    hkErrStream::Construct((hkErrStream::Self *)v137, (hkString::Self *)&v138, 512);
                    v64 = *(hkString::Self **)MemberByName;
                    Name = (hkClassMember::Self *)hkClass::getName(v98);
                    v84 = hkOstream::opShl((int)(uintptr_t)(v137), (hkString::Self *)"Can't copy homogeneous array. No hkClass for ");
                    v85 = hkOstream::opShl(v84, Name);
                    v86 = hkOstream::opShl(v85, (hkString::Self *)"::");
                    v87 = hkOstream::opShl(v86, v64);
                    LOBYTE(v64) = 0;
                    hkOstream::opShl(v87, (hkString::Self *)".");
                    hkError::messageWarning(
                      (hkError::Self *)0xABBA5A55,
                      (int)(uintptr_t)(&v138),
                      "Copier/hkObjectCopier.cpp",
                      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_1C4)->st_size + 2,
                      (int)(uintptr_t)(savedregs));
                    hkErrStream::Destroy((hkErrStream::Self *)v137);
                  }
                }
                else if ( *(uint8_t *)(v10 + 13) != 0 )
                {
                  v64 = *((hkString::Self **)v96 + 1);
                }
                else
                {
                  LOBYTE(v64) = 0;
                }
                v138 = nullptr;
                v139 = 0;
                hkOArchive::writeArrayGeneric(v128, &v138, *(uint8_t *)(v123 + 12), 1);
                hkOArchive::write32(v128, (char)(uintptr_t)(v64));
                if ( *(uint8_t *)(v10 + 12) == 22 )
                  hkOArchive::write32(v128, (char)(uintptr_t)(v64));
                goto LABEL_26;
              case 0x18:
                if ( *(uint32_t *)(MemberByName + 8) != 0 && *(uint32_t *)(v10 + 8) != 0 )
                {
                  if ( hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName) != 0 )
                    v105 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName);
                  else
                    v105 = 1;
                  v70 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                  v71 = 1;
                  if ( v70 != 0 )
                    v71 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                  v142 = (hkArrayUtil::Self *)MemberByName;
                  if ( v71 > v105 )
                    v71 = v105;
                  v120 = (hkErrStream::Self *)v71;
                  EnumClass = (hkClassMember::Self *)hkClassMember::getEnumClass(v142);
                  v94 = (char *)hkClassMember::getEnumClass((hkClassMember::Self *)v10);
                  v72 = hkClassMember::getSizeInBytes((hkClassMember::Self *)MemberByName) / v105;
                  v106 = (hkClass::Self *)v72;
                  if ( (int)(uintptr_t)(v120) > 0 )
                  {
                    v73 = nullptr;
                    switch ( v72 )
                    {
                      case 2:
                        do
                        {
                          EnumValue = (const char **)hkClassMember::getEnumValue((hkClassMember::Self *)MemberByName, v96);
                          v145 = (int16_t *)&v138;
                          *(uint32_t *)v137 = 0;
                          hkClassEnum::getNameOfValue((hkClassEnum::Self *)&v132, (int)(uintptr_t)(EnumClass), EnumValue);
                          if ( v132 == 0 )
                          {
                            v145 = v137;
                            hkClassEnum::getValueOfName((hkClassEnum::Self *)&v132, v94, v138);
                          }
                          v73 = (hkErrStream::Self *)((char *)v73 + 1);
                          hkOArchive::write16(v128, v137[0]);
                          v96 = (hkClassMember::Self *)((char *)v96 + 2);
                        }
                        while ( v73 != v120 );
                        break;
                      case 4:
                        do
                        {
                          v81 = (const char **)hkClassMember::getEnumValue((hkClassMember::Self *)MemberByName, v96);
                          v145 = (int16_t *)&v138;
                          *(uint32_t *)v137 = 0;
                          hkClassEnum::getNameOfValue((hkClassEnum::Self *)&v132, (int)(uintptr_t)(EnumClass), v81);
                          if ( v132 == 0 )
                          {
                            v145 = v137;
                            hkClassEnum::getValueOfName((hkClassEnum::Self *)&v132, v94, v138);
                          }
                          v73 = (hkErrStream::Self *)((char *)v73 + 1);
                          hkOArchive::write32(v128, v137[0]);
                          v96 = (hkClassMember::Self *)((char *)v96 + 4);
                        }
                        while ( v73 != v120 );
                        break;
                      case 1:
                        do
                        {
                          v83 = (const char **)hkClassMember::getEnumValue((hkClassMember::Self *)MemberByName, v96);
                          v145 = (int16_t *)&v138;
                          *(uint32_t *)v137 = 0;
                          hkClassEnum::getNameOfValue((hkClassEnum::Self *)&v132, (int)(uintptr_t)(EnumClass), v83);
                          if ( v132 == 0 )
                          {
                            v145 = v137;
                            hkClassEnum::getValueOfName((hkClassEnum::Self *)&v132, v94, v138);
                          }
                          v73 = (hkErrStream::Self *)((char *)v73 + 1);
                          hkOArchive::write8(v128, v137[0]);
                          v96 = (hkClassMember::Self *)((char *)v96 + 1);
                        }
                        while ( v73 != v120 );
                        break;
                      default:
                        v91 = (hkClassMember::Self *)MemberByName;
                        v74 = nullptr;
                        for ( j = (const char **)hkClassMember::getEnumValue(v91, v96);
                              ;
                              j = (const char **)hkClassMember::getEnumValue(v91, v96) )
                        {
                          v145 = (int16_t *)&v138;
                          *(uint32_t *)v137 = 0;
                          hkClassEnum::getNameOfValue((hkClassEnum::Self *)&v132, (int)(uintptr_t)(EnumClass), j);
                          if ( v132 == 0 )
                          {
                            v145 = v137;
                            hkClassEnum::getValueOfName((hkClassEnum::Self *)&v132, v94, v138);
                          }
                          v74 = (hkErrStream::Self *)((char *)v74 + 1);
                          v96 = (hkClassMember::Self *)((char *)v96 + (uint32_t)(uintptr_t)(v106));
                          if ( v74 == v120 )
                            break;
                        }
                        break;
                    }
                  }
                }
                goto LABEL_26;
              case 0x19:
                Class = (hkClass::Self *)hkClassMember::getClass((hkClassMember::Self *)MemberByName);
                v119 = (hkErrStream::Self *)hkClassMember::getClass((hkClassMember::Self *)v10);
                if ( v119 != nullptr && Class != nullptr )
                {
                  v109 = (hkClassMember::Self *)(&dword_0 + 1);
                  if ( hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10) != 0 )
                    v109 = (hkClassMember::Self *)hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                  v65 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName);
                  v66 = 1;
                  if ( v65 != 0 )
                    v66 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName);
                  v67 = (int)(uintptr_t)(v109);
                  if ( v66 <= (int)(uintptr_t)(v109) )
                    v67 = v66;
                  if ( v67 > 0 )
                  {
                    for ( k = 0; k != v67; ++k )
                    {
                      ObjectSize = hkClass::getObjectSize(Class);
                      retaddr = v131;
                      savedregs = (char *)v119;
                      v145 = (int16_t *)v128;
                      hkObjectCopier::saveBody(v123, (char *)v96 + k * ObjectSize, Class);
                    }
                  }
                }
                goto LABEL_26;
              case 0x1C:
                v138 = nullptr;
                v139 = 0;
                v140 = 0;
                v141 = 0;
                v58 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                v59 = 1;
                if ( v58 != 0 )
                  v59 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                v118 = (hkErrStream::Self *)v59;
                v60 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName);
                v61 = 1;
                v62 = v118;
                if ( v60 != 0 )
                {
                  v61 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName);
                  v62 = v118;
                }
                if ( v61 > (int)(uintptr_t)(v62) )
                  v61 = (int)(uintptr_t)(v62);
                v63 = 0;
                if ( v61 > 0 )
                {
                  do
                  {
                    ++v63;
                    hkOArchive::writeArrayGeneric(v128, &v138, *(uint8_t *)(v123 + 12), 2);
                  }
                  while ( v63 != v61 );
                }
                goto LABEL_26;
              case 0x1E:
                v117 = (hkErrStream::Self *)(&dword_0 + 1);
                if ( hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName) != 0 )
                  v117 = (hkErrStream::Self *)hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName);
                v56 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                v57 = 1;
                if ( v56 != 0 )
                  v57 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                v143 = v96;
                if ( v57 > (int)(uintptr_t)(v117) )
                  v57 = (int)(uintptr_t)(v117);
                sub_18D15E0(v57, v143);
                goto LABEL_26;
              case 0x1F:
                if ( *(uint32_t *)(MemberByName + 8) == 0 || *(uint32_t *)(v10 + 8) == 0 )
                  goto LABEL_26;
                if ( hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName) != 0 )
                  v116 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)MemberByName);
                else
                  v116 = 1;
                v51 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                v52 = 1;
                if ( v51 != 0 )
                  v52 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)v10);
                v142 = (hkArrayUtil::Self *)MemberByName;
                if ( v52 > v116 )
                  v52 = v116;
                v90 = (hkClassMember::Self *)v52;
                v89 = (hkClassMember::Self *)hkClassMember::getEnumClass(v142);
                v103 = (hkClass::Self *)hkClassMember::getEnumClass((hkClassMember::Self *)v10);
                v92 = hkClassMember::getSizeInBytes((hkClassMember::Self *)MemberByName) / v116;
                if ( (int)(uintptr_t)(v90) <= 0 )
                  goto LABEL_26;
                v93 = nullptr;
                v88 = (hkClassMember::Self *)MemberByName;
                break;
              case 0x22:
                v47 = hkOArchive::getStreamWriter(v128);
                v102 = (hkClass::Self *)(G4_VCALL<int>(v47, 40) - v124);
                v108 = (hkClassMember::Self *)((char *)v96 + *((uint16_t *)v96 + 1));
                v115 = *(uint16_t *)v96;
                hkOArchive::write16u(v128, 0);
                hkOArchive::write16u(v128, 0);
                v48 = v135;
                v49 = v102;
                if ( v135 == (v136 & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)&v134,
                    &dword_14,
                    v145);
                  v48 = v135;
                  v49 = v102;
                }
                v50 = v134 + 20 * v48;
                *(uint32_t *)(v50 + 8) = (uint32_t)(uintptr_t)(v49);
                *(uint32_t *)(v50 + 12) = (uint32_t)(uintptr_t)(v108);
                *(uint32_t *)v50 = MemberByName;
                *(uint32_t *)(v50 + 4) = v10;
                *(uint16_t *)(v50 + 16) = v115;
                ++v135;
                goto LABEL_26;
              default:
                hkErrStream::Construct((hkErrStream::Self *)v137, (hkString::Self *)&v138, 512);
                hkOstream::opShl((int)(uintptr_t)(v137), (hkString::Self *)"Unknown class member found during write of data.");
                if ( hkError::messageError(
                       (hkError::Self *)0x641E3E03,
                       (int)(uintptr_t)(&v138),
                       "Copier/hkObjectCopier.cpp",
                       (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_244)->st_value + 1,
                       (int)(uintptr_t)(savedregs)) != 0 )
LABEL_138:
                  __builtin_debugtrap();
LABEL_139:
                hkErrStream::Destroy((hkErrStream::Self *)v137);
                goto LABEL_26;
            }
            while ( 1 )
            {
              v144 = hkClassMember::getEnumValue(v88, v96);
              savedregs = (char *)v133;
              v143 = v89;
              v145 = (int16_t *)&v138;
              v138 = nullptr;
              v139 = 0;
              v140 = 0x80000000;
              v133[0] = 0;
              hkClassEnum::decomposeFlags(&v132);
              if ( v139 <= 0 )
              {
                v54 = 0;
              }
              else
              {
                v53 = 0;
                v54 = 0;
                do
                {
                  while ( 1 )
                  {
                    v145 = v137;
                    hkClassEnum::getValueOfName((hkClassEnum::Self *)&v132, (const char *)v103, (int *)v138[v53]);
                    if ( v132 != 0 )
                      break;
                    v54 |= v137[0];
                    if ( v139 <= ++v53 )
                      goto LABEL_73;
                  }
                  ++v53;
                  v133[0] |= *(uint32_t *)v137;
                }
                while ( v139 > v53 );
              }
LABEL_73:
              if ( v133[0] != 0 )
              {
                v144 = v133[0];
                v143 = (hkClassMember::Self *)(v103);
                savedregs = (char *)v137;
                v145 = (int16_t *)&v138;
                *(uint32_t *)v137 = 0;
                hkClassEnum::decomposeFlags(&v132);
                v55 = v92;
                v54 |= v137[0];
                if ( v92 != 2 )
                {
LABEL_75:
                  if ( v55 == 4 )
                  {
                    hkOArchive::write32(v128, v54);
                  }
                  else if ( v55 == 1 )
                  {
                    hkOArchive::write8(v128, v54);
                  }
                  goto LABEL_78;
                }
              }
              else
              {
                v55 = v92;
                if ( v92 != 2 )
                  goto LABEL_75;
              }
              hkOArchive::write16(v128, v54);
LABEL_78:
              v96 = (hkClassMember::Self *)((char *)v96 + v92);
              v139 = 0;
              if ( v140 >= 0 )
                (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  v138,
                  4 * v140);
              if ( ++v93 == (char *)v90 )
                goto LABEL_26;
            }
          }
          goto LABEL_52;
        }
        MemberByName = (int)(uintptr_t)(hkClass::getMemberByName(v98, *(const char **)v10));
        if ( MemberByName != 0 )
          goto LABEL_13;
      }
LABEL_52:
      v46 = hkOArchive::getStreamWriter(v128);
      sub_18D18E0((hkClassMember::Self *)v10, v126, v46);
LABEL_26:
      v126 = (hkStreamWriter::Self *)((char *)v126 + 1);
    }
    while ( v126 != (hkStreamWriter::Self *)NumMembers );
  }
  v24 = hkClass::getObjectSize(v125);
  v25 = hkOArchive::getStreamWriter(v128);
  v26 = v124 - G4_VCALL<int>(v25, 40) + v24;
  v27 = (unsigned int)(uintptr_t)(v131[2]) & 0x3FFFFFFF;
  if ( v26 > v27 )
  {
    v28 = 2 * v27;
    savedregs = (char *)((uint8_t *)(&dword_0 + 1));
    v142 = (hkArrayUtil::Self *)&v132;
    if ( v26 >= v28 )
      v28 = v26;
    hkArrayUtil::reserve(v142, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v131, v28, savedregs);
  }
  v29 = v131;
  v30 = v131[1];
  v31 = (char *)*v131;
  if ( v26 - (int)(uintptr_t)(v30) > 0 )
  {
    memset(&v31[(uint32_t)(uintptr_t)(v30)], 0, v26 - (uint32_t)(uintptr_t)(v30));
    v31 = (char *)*v131;
    v29 = v131;
  }
  v29[1] = (const void *)v26;
  hkOArchive::writeRaw(v128, v31, v26);
  if ( v135 > 0 )
  {
    v127 = nullptr;
    v32 = v128;
    v33 = nullptr;
    do
    {
      v34 = 20 * (uint32_t)(uintptr_t)(v33);
      v97 = *(hkClassMember::Self **)(v134 + 20 * (uint32_t)(uintptr_t)(v33));
      v107 = *(uint8_t **)(v134 + 20 * (uint32_t)(uintptr_t)(v33) + 4);
      v101 = *(hkClass::Self **)(v134 + 20 * (uint32_t)(uintptr_t)(v33) + 12);
      v129 = *(uint16_t *)(v134 + 20 * (uint32_t)(uintptr_t)(v33) + 16);
      hkOArchive::getStreamWriter(v32);
      sub_18D17F0();
      v35 = *(uint32_t *)(v134 + v34 + 8);
      v36 = hkOArchive::getStreamWriter(v32);
      v114 = (hkErrStream::Self *)(G4_VCALL<int>(v36, 40) - v124);
      v37 = (int *)hkOArchive::getStreamWriter(v32);
      v38 = *v37;
      savedregs = nullptr;
      (*(void (**)(int *, int *, int))(v38 + 36))(&v132, v37, v35);
      v99 = v129;
      v122 = v129;
      hkOArchive::write16u(v32, v129);
      hkOArchive::write16u(v32, (uint16_t)(uintptr_t)(v114) - v35);
      v39 = (hkClassMember::Self *)hkOArchive::getStreamWriter(v32);
      v40 = *(uint32_t *)v39;
      v145 = (int16_t *)((uint16_t *)(&dword_0 + 2));
      v144 = 0;
      v143 = v39;
      (*(void (**)(int *))(v40 + 36))(&v132);
      if ( v129 != 0 )
      {
        v41 = v107[13];
        if ( v107[13] != 0 && v41 != 20 && v41 != 29 && v41 != 33 )
        {
          if ( v41 == 25 )
          {
            v100 = (hkClass::Self *)hkClassMember::getClass(v97);
            v78 = (hkOArchive::Self *)hkClassMember::getClass((hkClassMember::Self *)v107);
            v130 = v78;
            if ( v100 != nullptr && v78 != nullptr && v122 != 0 )
            {
              v79 = 1;
              do
              {
                v80 = hkClass::getObjectSize(v100);
                retaddr = v131;
                savedregs = (char *)v130;
                v145 = (int16_t *)v32;
                v143 = (hkClassMember::Self *)((hkClass::Self *)((char *)v101 + (v79++ - 1) * v80));
                hkObjectCopier::saveBody(v123, v143, v100);
              }
              while ( v79 != v122 + 1 );
            }
            goto LABEL_48;
          }
          if ( v41 != 28 )
          {
            if ( v41 == 30 )
            {
              sub_18D15E0(v129, v101);
            }
            else
            {
              ArrayMemberSize = hkClassMember::getArrayMemberSize((hkClassMember::Self *)v107);
              v43 = v107[13] - 1;
              if ( v43 > 0x1F )
                goto LABEL_142;
              if ( ((1 << v43) & 0x800007FF) == 0 )
              {
                if ( ((1 << v43) & 0x3F800) == 0 )
                {
LABEL_142:
                  hkErrStream::Construct((hkErrStream::Self *)v137, (hkString::Self *)&v138, 512);
                  hkOstream::opShl(
                    (int)(uintptr_t)(v137),
                    (hkString::Self *)"Unknown class member found during write of plain data array.");
                  if ( hkError::messageError(
                         (hkError::Self *)0x747E1E03,
                         (int)(uintptr_t)(&v138),
                         "Copier/hkObjectCopier.cpp",
                         (const char *)&dword_100 + 3,
                         (int)(uintptr_t)(savedregs)) != 0 )
                    __builtin_debugtrap();
                  hkErrStream::Destroy((hkErrStream::Self *)v137);
                  goto LABEL_48;
                }
                v44 = (ArrayMemberSize >> 2) * v129;
                ArrayMemberSize = 4;
                v99 = v44;
              }
              hkOArchive::writeArrayGeneric(v32, v101, ArrayMemberSize, v99);
            }
          }
        }
      }
LABEL_48:
      v127 = (hkStreamWriter::Self *)((char *)v127 + 1);
      v33 = v127;
    }
    while ( v135 > (int)(uintptr_t)(v127) );
  }
  result = v136;
  v135 = 0;
  if ( v136 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v134,
             20 * v136);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkObjectCopier::saveExtras  (binary VA: 0x18d39f0)
// Original: hkObjectCopier::saveExtras
// ----------------------------------------------------------------------------
int hkObjectCopier::saveExtras(uint8_t *a1, int a2, hkClass::Self *a3, hkOArchive::Self *a4, hkClass::Self *a5, int a6, int a7, uint32_t *a8, const void **a9, int a10)
{
  int result;
  int Member;
  hkString::Self **MemberByName;
  int v14;
  hkClassMember::Self *v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int Name;
  uint32_t *v24;
  int v25;
  uint32_t *v26;
  int v27;
  hkLifoAllocator::Self *v28;
  char *v29;
  hkLifoAllocator::Self *v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  size_t v35;
  int v36;
  int CstyleArraySize;
  hkClassMember::Self *v38;
  int v39;
  int v40;
  hkClassMember::Self *v41;
  int v42;
  bool v43; // cc
  int v44;
  hkClassMember::Self *v45;
  int v46;
  int v47;
  int Class;
  int v49;
  int v50;
  uint32_t *v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  uint32_t *v59;
  int v60;
  int v61;
  int v62;
  int *v63;
  int v64;
  int v65;
  int v66;
  hkClass::Self *v67;
  int v68;
  int v69;
  int v70;
  int *v71;
  int v72;
  int v73;
  int *v74;
  int v75;
  int v76;
  int v77;
  int StreamWriter;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v80;
  char *v81;
  hkLifoAllocator::Self *v82;
  int v83;
  int v84;
  int v85;
  uint32_t *v86;
  size_t v87;
  int v88;
  int v89;
  int v90;
  uint32_t *v91;
  int v92;
  int v93;
  uint32_t *v94;
  int *v95;
  int v96;
  int v97;
  int v98;
  int *v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  uint32_t *v106;
  int v107;
  int v108;
  int v109;
  char *v110;
  hkLifoAllocator::Self **v111;
  hkLifoAllocator::Self *v112;
  int v113;
  int v114;
  int v115;
  int v116;
  uint32_t *v117;
  size_t v118;
  hkLifoAllocator::Self **v119;
  hkLifoAllocator::Self *v120;
  int v121;
  hkClassMember::Self *v122;
  int v123;
  uint32_t *v124;
  int v125;
  int v126;
  int v127;
  int v128;
  uint32_t *v129;
  int v130;
  int v131;
  int v132;
  uint32_t *v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  char *v139;
  hkLifoAllocator::Self **v140;
  hkLifoAllocator::Self *v141;
  int v142;
  int v143;
  int v144;
  uint32_t *v145;
  size_t v146;
  hkLifoAllocator::Self **v147;
  hkLifoAllocator::Self *v148;
  int v149;
  hkClassMember::Self *v150;
  int v151;
  uint32_t *v152;
  int v153;
  int ObjectSize;
  int v155;
  int v156;
  int v157;
  uint8_t *v255;
  uint8_t *v256;
  typedef hkString::Self *_g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef hkLifoAllocator::Self **_g4_t_v161;
  typedef char _g4_t_v162;
  typedef char *_g4_t_v163;
  typedef hkLifoAllocator::Self **_g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef hkClassMember::Self *_g4_t_v172;
  typedef hkClass::Self *_g4_t_v173;
  typedef int _g4_t_v174;
  typedef int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef hkClassMember::Self *_g4_t_v179;
  typedef int _g4_t_v180;
  typedef hkClassMember::Self *_g4_t_v181;
  typedef int _g4_t_v182;
  typedef int _g4_t_v183;
  typedef int _g4_t_v184;
  typedef hkLifoAllocator::Self **_g4_t_v185;
  typedef char _g4_t_v186;
  typedef int _g4_t_v187;
  typedef hkLifoAllocator::Self **_g4_t_v188;
  typedef char *_g4_t_v189;
  typedef hkLifoAllocator::Self **_g4_t_v190;
  typedef int _g4_t_SizeInBytes;
  typedef int _g4_t_v192;
  typedef int _g4_t_v193;
  typedef int _g4_t_v194;
  typedef int _g4_t_v195;
  typedef int _g4_t_v196;
  typedef hkClassMember::Self *_g4_t_v197;
  typedef hkClassMember::Self *_g4_t_v198;
  typedef hkLifoAllocator::Self **_g4_t_v199;
  typedef char _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef char _g4_t_v204;
  typedef char *_g4_t_v205;
  typedef hkClassMember::Self *_g4_t_v206;
  typedef hkClassMember::Self *_g4_t_v207;
  typedef int _g4_t_v208;
  typedef hkClassMember::Self *_g4_t_v209;
  typedef int _g4_t_v210;
  typedef int _g4_t_v211;
  typedef char *_g4_t_v212;
  typedef int _g4_t_v213;
  typedef hkClassMember::Self *_g4_t_v214;
  typedef int _g4_t_v215;
  typedef int _g4_t_v216;
  typedef int _g4_t_v217;
  typedef hkString::Self *_g4_t_v218;
  typedef int _g4_t_v219;
  typedef int _g4_t_ArrayMemberSize;
  typedef int _g4_t_v221;
  typedef hkClassMember::Self *_g4_t_v222;
  typedef hkClass::Self *_g4_t_v223;
  typedef uint16_t _g4_t_v224;
  typedef int _g4_t_v225;
  typedef char *_g4_t_v226;
  typedef int _g4_t_v227;
  typedef int _g4_t_v228;
  typedef hkClassMember::Self *_g4_t_v229;
  typedef int _g4_t_v230;
  typedef char *_g4_t_v231;
  typedef hkClass::Self *_g4_t_v232;
  typedef int _g4_t_v233;
  typedef int _g4_t_v234;
  typedef int _g4_t_v235;
  typedef int _g4_t_v236;
  typedef int _g4_t_v237;
  typedef int _g4_t_v238;
  typedef int _g4_t_i;
  typedef int _g4_t_v240;
  typedef int _g4_t_v241;
  typedef int _g4_t_v242;
  typedef hkString::Self *_g4_t_v243;
  typedef int _g4_t_v244;
  typedef hkClass::Self *_g4_t_v245;
  typedef int _g4_t_v246;
  typedef hkString::Self **_g4_t_v247;
  typedef int _g4_t_v248;
  typedef int _g4_t_v249;
  typedef char *_g4_t_v250;
  typedef int _g4_t_v251;
  typedef int _g4_t_v252;
  typedef uint8_t _g4_t_v253[12];
  typedef uint32_t _g4_t_v254[131];
  enum : size_t {
    _g4_s0 = 704u,
    _g4_s1 = (0u + sizeof(_g4_t_v158)) > _g4_s0 ? (0u + sizeof(_g4_t_v158)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v159)) > _g4_s1 ? (0u + sizeof(_g4_t_v159)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v160)) > _g4_s2 ? (8u + sizeof(_g4_t_v160)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v161)) > _g4_s3 ? (44u + sizeof(_g4_t_v161)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v162)) > _g4_s4 ? (48u + sizeof(_g4_t_v162)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v163)) > _g4_s5 ? (48u + sizeof(_g4_t_v163)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v164)) > _g4_s6 ? (48u + sizeof(_g4_t_v164)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v165)) > _g4_s7 ? (48u + sizeof(_g4_t_v165)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v166)) > _g4_s8 ? (52u + sizeof(_g4_t_v166)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v167)) > _g4_s9 ? (52u + sizeof(_g4_t_v167)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v168)) > _g4_s10 ? (52u + sizeof(_g4_t_v168)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v169)) > _g4_s11 ? (52u + sizeof(_g4_t_v169)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v170)) > _g4_s12 ? (52u + sizeof(_g4_t_v170)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v171)) > _g4_s13 ? (52u + sizeof(_g4_t_v171)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v172)) > _g4_s14 ? (56u + sizeof(_g4_t_v172)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v173)) > _g4_s15 ? (56u + sizeof(_g4_t_v173)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v174)) > _g4_s16 ? (56u + sizeof(_g4_t_v174)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v175)) > _g4_s17 ? (56u + sizeof(_g4_t_v175)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v176)) > _g4_s18 ? (56u + sizeof(_g4_t_v176)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v177)) > _g4_s19 ? (56u + sizeof(_g4_t_v177)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v178)) > _g4_s20 ? (56u + sizeof(_g4_t_v178)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v179)) > _g4_s21 ? (60u + sizeof(_g4_t_v179)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v180)) > _g4_s22 ? (60u + sizeof(_g4_t_v180)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v181)) > _g4_s23 ? (60u + sizeof(_g4_t_v181)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v182)) > _g4_s24 ? (60u + sizeof(_g4_t_v182)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v183)) > _g4_s25 ? (60u + sizeof(_g4_t_v183)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v184)) > _g4_s26 ? (60u + sizeof(_g4_t_v184)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v185)) > _g4_s27 ? (60u + sizeof(_g4_t_v185)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v186)) > _g4_s28 ? (60u + sizeof(_g4_t_v186)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v187)) > _g4_s29 ? (60u + sizeof(_g4_t_v187)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v188)) > _g4_s30 ? (60u + sizeof(_g4_t_v188)) : _g4_s30,
    _g4_s32 = (60u + sizeof(_g4_t_v189)) > _g4_s31 ? (60u + sizeof(_g4_t_v189)) : _g4_s31,
    _g4_s33 = (64u + sizeof(_g4_t_v190)) > _g4_s32 ? (64u + sizeof(_g4_t_v190)) : _g4_s32,
    _g4_s34 = (64u + sizeof(_g4_t_SizeInBytes)) > _g4_s33 ? (64u + sizeof(_g4_t_SizeInBytes)) : _g4_s33,
    _g4_s35 = (64u + sizeof(_g4_t_v192)) > _g4_s34 ? (64u + sizeof(_g4_t_v192)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v193)) > _g4_s35 ? (64u + sizeof(_g4_t_v193)) : _g4_s35,
    _g4_s37 = (64u + sizeof(_g4_t_v194)) > _g4_s36 ? (64u + sizeof(_g4_t_v194)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_v195)) > _g4_s37 ? (64u + sizeof(_g4_t_v195)) : _g4_s37,
    _g4_s39 = (64u + sizeof(_g4_t_v196)) > _g4_s38 ? (64u + sizeof(_g4_t_v196)) : _g4_s38,
    _g4_s40 = (64u + sizeof(_g4_t_v197)) > _g4_s39 ? (64u + sizeof(_g4_t_v197)) : _g4_s39,
    _g4_s41 = (64u + sizeof(_g4_t_v198)) > _g4_s40 ? (64u + sizeof(_g4_t_v198)) : _g4_s40,
    _g4_s42 = (64u + sizeof(_g4_t_v199)) > _g4_s41 ? (64u + sizeof(_g4_t_v199)) : _g4_s41,
    _g4_s43 = (64u + sizeof(_g4_t_v200)) > _g4_s42 ? (64u + sizeof(_g4_t_v200)) : _g4_s42,
    _g4_s44 = (64u + sizeof(_g4_t_v201)) > _g4_s43 ? (64u + sizeof(_g4_t_v201)) : _g4_s43,
    _g4_s45 = (68u + sizeof(_g4_t_v202)) > _g4_s44 ? (68u + sizeof(_g4_t_v202)) : _g4_s44,
    _g4_s46 = (72u + sizeof(_g4_t_v203)) > _g4_s45 ? (72u + sizeof(_g4_t_v203)) : _g4_s45,
    _g4_s47 = (72u + sizeof(_g4_t_v204)) > _g4_s46 ? (72u + sizeof(_g4_t_v204)) : _g4_s46,
    _g4_s48 = (72u + sizeof(_g4_t_v205)) > _g4_s47 ? (72u + sizeof(_g4_t_v205)) : _g4_s47,
    _g4_s49 = (72u + sizeof(_g4_t_v206)) > _g4_s48 ? (72u + sizeof(_g4_t_v206)) : _g4_s48,
    _g4_s50 = (72u + sizeof(_g4_t_v207)) > _g4_s49 ? (72u + sizeof(_g4_t_v207)) : _g4_s49,
    _g4_s51 = (72u + sizeof(_g4_t_v208)) > _g4_s50 ? (72u + sizeof(_g4_t_v208)) : _g4_s50,
    _g4_s52 = (72u + sizeof(_g4_t_v209)) > _g4_s51 ? (72u + sizeof(_g4_t_v209)) : _g4_s51,
    _g4_s53 = (72u + sizeof(_g4_t_v210)) > _g4_s52 ? (72u + sizeof(_g4_t_v210)) : _g4_s52,
    _g4_s54 = (72u + sizeof(_g4_t_v211)) > _g4_s53 ? (72u + sizeof(_g4_t_v211)) : _g4_s53,
    _g4_s55 = (72u + sizeof(_g4_t_v212)) > _g4_s54 ? (72u + sizeof(_g4_t_v212)) : _g4_s54,
    _g4_s56 = (72u + sizeof(_g4_t_v213)) > _g4_s55 ? (72u + sizeof(_g4_t_v213)) : _g4_s55,
    _g4_s57 = (72u + sizeof(_g4_t_v214)) > _g4_s56 ? (72u + sizeof(_g4_t_v214)) : _g4_s56,
    _g4_s58 = (72u + sizeof(_g4_t_v215)) > _g4_s57 ? (72u + sizeof(_g4_t_v215)) : _g4_s57,
    _g4_s59 = (72u + sizeof(_g4_t_v216)) > _g4_s58 ? (72u + sizeof(_g4_t_v216)) : _g4_s58,
    _g4_s60 = (72u + sizeof(_g4_t_v217)) > _g4_s59 ? (72u + sizeof(_g4_t_v217)) : _g4_s59,
    _g4_s61 = (72u + sizeof(_g4_t_v218)) > _g4_s60 ? (72u + sizeof(_g4_t_v218)) : _g4_s60,
    _g4_s62 = (72u + sizeof(_g4_t_v219)) > _g4_s61 ? (72u + sizeof(_g4_t_v219)) : _g4_s61,
    _g4_s63 = (72u + sizeof(_g4_t_ArrayMemberSize)) > _g4_s62 ? (72u + sizeof(_g4_t_ArrayMemberSize)) : _g4_s62,
    _g4_s64 = (72u + sizeof(_g4_t_v221)) > _g4_s63 ? (72u + sizeof(_g4_t_v221)) : _g4_s63,
    _g4_s65 = (72u + sizeof(_g4_t_v222)) > _g4_s64 ? (72u + sizeof(_g4_t_v222)) : _g4_s64,
    _g4_s66 = (72u + sizeof(_g4_t_v223)) > _g4_s65 ? (72u + sizeof(_g4_t_v223)) : _g4_s65,
    _g4_s67 = (76u + sizeof(_g4_t_v224)) > _g4_s66 ? (76u + sizeof(_g4_t_v224)) : _g4_s66,
    _g4_s68 = (76u + sizeof(_g4_t_v225)) > _g4_s67 ? (76u + sizeof(_g4_t_v225)) : _g4_s67,
    _g4_s69 = (76u + sizeof(_g4_t_v226)) > _g4_s68 ? (76u + sizeof(_g4_t_v226)) : _g4_s68,
    _g4_s70 = (76u + sizeof(_g4_t_v227)) > _g4_s69 ? (76u + sizeof(_g4_t_v227)) : _g4_s69,
    _g4_s71 = (76u + sizeof(_g4_t_v228)) > _g4_s70 ? (76u + sizeof(_g4_t_v228)) : _g4_s70,
    _g4_s72 = (76u + sizeof(_g4_t_v229)) > _g4_s71 ? (76u + sizeof(_g4_t_v229)) : _g4_s71,
    _g4_s73 = (76u + sizeof(_g4_t_v230)) > _g4_s72 ? (76u + sizeof(_g4_t_v230)) : _g4_s72,
    _g4_s74 = (76u + sizeof(_g4_t_v231)) > _g4_s73 ? (76u + sizeof(_g4_t_v231)) : _g4_s73,
    _g4_s75 = (76u + sizeof(_g4_t_v232)) > _g4_s74 ? (76u + sizeof(_g4_t_v232)) : _g4_s74,
    _g4_s76 = (76u + sizeof(_g4_t_v233)) > _g4_s75 ? (76u + sizeof(_g4_t_v233)) : _g4_s75,
    _g4_s77 = (76u + sizeof(_g4_t_v234)) > _g4_s76 ? (76u + sizeof(_g4_t_v234)) : _g4_s76,
    _g4_s78 = (76u + sizeof(_g4_t_v235)) > _g4_s77 ? (76u + sizeof(_g4_t_v235)) : _g4_s77,
    _g4_s79 = (76u + sizeof(_g4_t_v236)) > _g4_s78 ? (76u + sizeof(_g4_t_v236)) : _g4_s78,
    _g4_s80 = (76u + sizeof(_g4_t_v237)) > _g4_s79 ? (76u + sizeof(_g4_t_v237)) : _g4_s79,
    _g4_s81 = (76u + sizeof(_g4_t_v238)) > _g4_s80 ? (76u + sizeof(_g4_t_v238)) : _g4_s80,
    _g4_s82 = (76u + sizeof(_g4_t_i)) > _g4_s81 ? (76u + sizeof(_g4_t_i)) : _g4_s81,
    _g4_s83 = (76u + sizeof(_g4_t_v240)) > _g4_s82 ? (76u + sizeof(_g4_t_v240)) : _g4_s82,
    _g4_s84 = (76u + sizeof(_g4_t_v241)) > _g4_s83 ? (76u + sizeof(_g4_t_v241)) : _g4_s83,
    _g4_s85 = (76u + sizeof(_g4_t_v242)) > _g4_s84 ? (76u + sizeof(_g4_t_v242)) : _g4_s84,
    _g4_s86 = (76u + sizeof(_g4_t_v243)) > _g4_s85 ? (76u + sizeof(_g4_t_v243)) : _g4_s85,
    _g4_s87 = (76u + sizeof(_g4_t_v244)) > _g4_s86 ? (76u + sizeof(_g4_t_v244)) : _g4_s86,
    _g4_s88 = (76u + sizeof(_g4_t_v245)) > _g4_s87 ? (76u + sizeof(_g4_t_v245)) : _g4_s87,
    _g4_s89 = (80u + sizeof(_g4_t_v246)) > _g4_s88 ? (80u + sizeof(_g4_t_v246)) : _g4_s88,
    _g4_s90 = (84u + sizeof(_g4_t_v247)) > _g4_s89 ? (84u + sizeof(_g4_t_v247)) : _g4_s89,
    _g4_s91 = (84u + sizeof(_g4_t_v248)) > _g4_s90 ? (84u + sizeof(_g4_t_v248)) : _g4_s90,
    _g4_s92 = (84u + sizeof(_g4_t_v249)) > _g4_s91 ? (84u + sizeof(_g4_t_v249)) : _g4_s91,
    _g4_s93 = (84u + sizeof(_g4_t_v250)) > _g4_s92 ? (84u + sizeof(_g4_t_v250)) : _g4_s92,
    _g4_s94 = (88u + sizeof(_g4_t_v251)) > _g4_s93 ? (88u + sizeof(_g4_t_v251)) : _g4_s93,
    _g4_s95 = (88u + sizeof(_g4_t_v252)) > _g4_s94 ? (88u + sizeof(_g4_t_v252)) : _g4_s94,
    _g4_s96 = (96u + sizeof(_g4_t_v253)) > _g4_s95 ? (96u + sizeof(_g4_t_v253)) : _g4_s95,
    _g4_s97 = (108u + sizeof(_g4_t_v254)) > _g4_s96 ? (108u + sizeof(_g4_t_v254)) : _g4_s96
  };
  alignas(16) uint8_t _g4_sf[_g4_s97];
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 0u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 0u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 8u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 44u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 48u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 48u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 48u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 48u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 52u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 52u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 52u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 52u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 52u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 52u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 56u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 56u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 56u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 56u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 56u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 56u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 56u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 60u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 60u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 60u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 60u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 60u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 60u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 60u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 60u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 60u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 60u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 60u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 64u);
  _g4_t_SizeInBytes &SizeInBytes = *reinterpret_cast<_g4_t_SizeInBytes *>(_g4_sf + 64u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 64u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 64u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 64u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 64u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 64u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 64u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 64u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 64u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 64u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 64u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 68u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 72u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 72u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 72u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 72u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 72u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 72u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 72u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 72u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 72u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 72u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 72u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 72u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 72u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 72u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 72u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 72u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 72u);
  _g4_t_ArrayMemberSize &ArrayMemberSize = *reinterpret_cast<_g4_t_ArrayMemberSize *>(_g4_sf + 72u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 72u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 72u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 72u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 76u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 76u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 76u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 76u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 76u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 76u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 76u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 76u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 76u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 76u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 76u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 76u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 76u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 76u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 76u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 76u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 76u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 76u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 76u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 76u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 76u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 76u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 80u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 84u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 84u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 84u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 84u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 88u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 88u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 96u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 108u);

  if ( a10 == 0 )
  {
    Name = hkClass::getName(a5);
    v24 = a8;
    v25 = a8[7];
    if ( v25 == (a8[8] & 0x3FFFFFFF) )
    {
      v252 = Name;
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(a8 + 6),
        8,
        v160);
      v24 = a8;
      v25 = a8[7];
      Name = v252;
    }
    v26 = (uint32_t *)(v24[6] + 8 * v25);
    v26[1] = Name;
    *v26 = a6;
    ++a8[7];
  }
  v202 = a10 + 1;
  result = hkClass::getNumMembers(a5);
  v246 = result;
  v251 = 0;
  if ( result > 0 )
  {
    do
    {
      Member = hkClass::getMember(a5, v251);
      MemberByName = (hkString::Self **)Member;
      if ( a3 != a5 )
        MemberByName = hkClass::getMemberByName(a3, *(char **)Member);
      if ( MemberByName != nullptr )
      {
        v247 = MemberByName;
        v224 = *((uint16_t *)MemberByName + 9);
        v14 = G4_VCALL<int>(a1, 24, MemberByName, Member);
        v15 = (hkClassMember::Self *)v247;
        if ( v14 != 0 && ((a1[16] & 2) == 0 || (*(uint8_t *)(Member + 17) & 4) == 0) )
        {
          v248 = a2 + v224;
          switch ( *(uint8_t *)(Member + 12) )
          {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0xE:
            case 0xF:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x15:
            case 0x18:
            case 0x1E:
            case 0x1F:
            case 0x20:
            case 0x22:
              goto LABEL_25;
            case 0x13:
              hkErrStream::Construct((hkErrStream::Self *)v253, (hkString::Self *)v254, 512);
              hkOstream::opShl((int)(uintptr_t)(v253), (hkString::Self *)"TYPE_ZERO should not occur.");
              v36 = hkError::messageError(
                      (hkError::Self *)0x641E3E05,
                      (int)(uintptr_t)(v254),
                      "Copier/hkObjectCopier.cpp",
                      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_414)->st_name + 3);
              goto LABEL_44;
            case 0x14:
              v206 = v15;
              CstyleArraySize = hkClassMember::getCstyleArraySize((hkClassMember::Self *)Member);
              v228 = 1;
              v38 = v206;
              if ( CstyleArraySize != 0 )
              {
                v228 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)Member);
                v38 = v206;
              }
              v207 = v38;
              v39 = hkClassMember::getCstyleArraySize(v38);
              v40 = 1;
              v41 = v207;
              if ( v39 != 0 )
              {
                v40 = hkClassMember::getCstyleArraySize(v207);
                v41 = v207;
              }
              v42 = v228;
              v43 = v40 <= v228;
              v229 = v41;
              if ( !v43 )
                v40 = v42;
              v208 = v40;
              SizeInBytes = hkClassMember::getSizeInBytes(v41);
              v179 = v229;
              v44 = hkClassMember::getCstyleArraySize(v229);
              v230 = 1;
              v45 = v179;
              if ( v44 != 0 )
              {
                v230 = hkClassMember::getCstyleArraySize(v179);
                v45 = v179;
              }
              v192 = SizeInBytes / v230;
              if ( v208 <= 0 )
                goto LABEL_25;
              v180 = Member;
              v172 = v45;
              v46 = 0;
              v255 = a1;
              do
              {
                v231 = *(char **)v248;
                if ( *(uint32_t *)v248 != 0 )
                {
                  v47 = v46 * v255[12] + *(uint16_t *)(v180 + 18);
                  if ( *(uint8_t *)(v180 + 13) == 2 )
                  {
                    v167 = a6 + v47;
                    StreamWriter = hkOArchive::getStreamWriter(a4);
                    v162 = G4_VCALL<int>(StreamWriter, 40);
                    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
                    v80 = *address;
                    v161 = address;
                    v81 = *((char **)*address + 3);
                    if ( *((int *)*address + 2) > 127 && (unsigned int)(uintptr_t)(v81 + 128) <= *((uint32_t *)v80 + 4) )
                      *((uint32_t *)v80 + 3) = (uint32_t)(uintptr_t)(v81 + 128);
                    else
                      v81 = (char *)hkLifoAllocator::allocateFromNewSlab(v80, 128);
                    *(uint16_t *)v81 = 0;
                    if ( (v162 & 1) != 0 )
                    {
                      v163 = v81;
                      G4_VCALL<void>(StreamWriter, 24, v81, 1);
                      v81 = v163;
                    }
                    v82 = *v161;
                    if ( *((int *)*v161 + 2) <= 127 || *((char **)v82 + 3) != v81 + 128 || v81 == *((char **)v82 + 5) )
                      hkLifoAllocator::slowBlockFree(v82, v81, 128);
                    else
                      *((uint32_t *)v82 + 3) = (uint32_t)(uintptr_t)(v81);
                    v83 = hkOArchive::getStreamWriter(a4);
                    v84 = a7 + G4_VCALL<int>(v83, 40);
                    v85 = a8[1];
                    if ( v85 == (a8[2] & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::reserveMore(
                        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                        (hkMemoryAllocator::Self *)a8,
                        8,
                        v160);
                      v85 = a8[1];
                    }
                    v86 = (uint32_t *)(*a8 + 8 * v85);
                    v86[1] = v84;
                    *v86 = v167;
                    ++a8[1];
                    v87 = hkString::strLen((hkString::Self *)v231);
                    hkOArchive::writeRaw(a4, v231, v87 + 1);
                  }
                  else if ( *(uint8_t *)(v180 + 13) != 0 )
                  {
                    Class = hkClassMember::getClass(v172);
                    v49 = a6 + v47;
                    v50 = a8[4];
                    if ( v50 == (a8[5] & 0x3FFFFFFF) )
                    {
                      v168 = Class;
                      hkArrayUtil::reserveMore(
                        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                        (hkMemoryAllocator::Self *)(a8 + 3),
                        16,
                        v160);
                      v50 = a8[4];
                      Class = v168;
                    }
                    v51 = (uint32_t *)(a8[3] + 16 * v50);
                    *v51 = v49;
                    v51[1] = (uint32_t)(uintptr_t)(v231);
                    v51[2] = Class;
                    v51[3] = 0;
                    ++a8[4];
                  }
                }
                ++v46;
                v248 += v192;
              }
              while ( v46 != v208 );
              goto LABEL_77;
            case 0x16:
            case 0x17:
            case 0x1A:
              if ( *(uint32_t *)(v248 + 4) == 0 )
                goto LABEL_25;
              v16 = *(uint8_t *)(Member + 13);
              if ( *(uint8_t *)(Member + 13) == 0 )
                goto LABEL_25;
              switch ( v16 )
              {
                case 20:
                  v197 = v15;
                  v121 = hkOArchive::getStreamWriter(a4);
                  v240 = a7 + G4_VCALL<int>(v121, 40);
                  v122 = v197;
                  v219 = a6 + *(uint16_t *)(Member + 18);
                  v123 = a8[1];
                  if ( v123 == (a8[2] & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::reserveMore(
                      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                      (hkMemoryAllocator::Self *)a8,
                      8,
                      v160);
                    v122 = v197;
                    v123 = a8[1];
                  }
                  v198 = v122;
                  v124 = (uint32_t *)(*a8 + 8 * v123);
                  *v124 = v219;
                  v124[1] = v240;
                  v254[0] = 0;
                  v254[1] = 0;
                  ++a8[1];
                  ArrayMemberSize = hkClassMember::getArrayMemberSize(v122);
                  v241 = 0;
                  if ( *(int *)(v248 + 4) > 0 )
                  {
                    v255 = a1;
                    v125 = 0;
                    do
                    {
                      if ( *(uint32_t *)(*(uint32_t *)v248 + v125) != 0 && *(uint8_t *)(Member + 13) != 0 )
                      {
                        v165 = *(uint32_t *)(*(uint32_t *)v248 + v125);
                        v187 = hkClassMember::getClass(v198);
                        v126 = hkOArchive::getStreamWriter(a4);
                        v176 = a7 + G4_VCALL<int>(v126, 40);
                        v127 = v165;
                        v128 = a8[4];
                        if ( v128 == (a8[5] & 0x3FFFFFFF) )
                        {
                          hkArrayUtil::reserveMore(
                            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                            (hkMemoryAllocator::Self *)(a8 + 3),
                            16,
                            v160);
                          v127 = v165;
                          v128 = a8[4];
                        }
                        v129 = (uint32_t *)(a8[3] + 16 * v128);
                        v129[1] = v127;
                        *v129 = v176;
                        v129[2] = v187;
                        v129[3] = 0;
                        ++a8[4];
                      }
                      hkOArchive::writeRaw(a4, v254, v255[12]);
                      ++v241;
                      v125 += ArrayMemberSize;
                    }
                    while ( *(uint32_t *)(v248 + 4) > v241 );
                    goto LABEL_77;
                  }
                  break;
                case 29:
                  v103 = hkOArchive::getStreamWriter(a4);
                  v238 = a7 + G4_VCALL<int>(v103, 40);
                  v104 = a6 + *(uint16_t *)(Member + 18);
                  v105 = a8[1];
                  if ( v105 == (a8[2] & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::reserveMore(
                      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                      (hkMemoryAllocator::Self *)a8,
                      8,
                      v160);
                    v105 = a8[1];
                  }
                  v106 = (uint32_t *)(*a8 + 8 * v105);
                  *v106 = v104;
                  v106[1] = v238;
                  v254[0] = 0;
                  v254[1] = 0;
                  v107 = 0;
                  ++a8[1];
                  v108 = hkOArchive::getStreamWriter(a4);
                  v175 = a7 + G4_VCALL<int>(v108, 40);
                  if ( *(int *)(v248 + 4) > 0 )
                  {
                    do
                    {
                      ++v107;
                      hkOArchive::writeRaw(a4, v254, a1[12]);
                      v109 = *(uint32_t *)(v248 + 4);
                    }
                    while ( v109 > v107 );
                    if ( v109 > 0 )
                    {
                      v255 = a1;
                      for ( i = 0; i < v109; ++i )
                      {
                        v218 = *(hkString::Self **)(*(uint32_t *)v248 + 4 * i);
                        if ( v218 != nullptr )
                        {
                          v196 = v175 + i * a1[12];
                          v170 = hkOArchive::getStreamWriter(a4);
                          v186 = G4_VCALL<int>(v170, 40);
                          v119 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
                          v120 = *v119;
                          v111 = v119;
                          v110 = *((char **)*v119 + 3);
                          if ( *((int *)*v119 + 2) <= 127 || (unsigned int)(uintptr_t)(v110 + 128) > *((uint32_t *)v120 + 4) )
                          {
                            v164 = v119;
                            v110 = (char *)hkLifoAllocator::allocateFromNewSlab(v120, 128);
                            v111 = v164;
                          }
                          else
                          {
                            *((uint32_t *)v120 + 3) = (uint32_t)(uintptr_t)(v110 + 128);
                          }
                          *(uint16_t *)v110 = 0;
                          if ( (v186 & 1) != 0 )
                          {
                            v185 = v111;
                            G4_VCALL<void>(v170, 24, v110, 1);
                            v111 = v185;
                          }
                          v112 = *v111;
                          if ( *((int *)*v111 + 2) <= 127
                            || *((char **)v112 + 3) != v110 + 128
                            || v110 == *((char **)v112 + 5) )
                          {
                            hkLifoAllocator::slowBlockFree(v112, v110, 128);
                          }
                          else
                          {
                            *((uint32_t *)v112 + 3) = (uint32_t)(uintptr_t)(v110);
                          }
                          v113 = hkOArchive::getStreamWriter(a4);
                          v114 = G4_VCALL<int>(v113, 40);
                          v115 = a8[1];
                          v116 = a7 + v114;
                          if ( v115 == (a8[2] & 0x3FFFFFFF) )
                          {
                            hkArrayUtil::reserveMore(
                              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                              (hkMemoryAllocator::Self *)a8,
                              8,
                              v160);
                            v115 = a8[1];
                          }
                          v117 = (uint32_t *)(*a8 + 8 * v115);
                          v117[1] = v116;
                          *v117 = v196;
                          ++a8[1];
                          v118 = hkString::strLen(v218);
                          hkOArchive::writeRaw(a4, v218, v118 + 1);
                          v109 = *(uint32_t *)(v248 + 4);
                        }
                      }
                      goto LABEL_77;
                    }
                  }
                  break;
                case 33:
                  v130 = hkOArchive::getStreamWriter(a4);
                  v242 = a7 + G4_VCALL<int>(v130, 40);
                  v131 = a6 + *(uint16_t *)(Member + 18);
                  v132 = a8[1];
                  if ( v132 == (a8[2] & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::reserveMore(
                      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                      (hkMemoryAllocator::Self *)a8,
                      8,
                      v160);
                    v132 = a8[1];
                  }
                  v133 = (uint32_t *)(*a8 + 8 * v132);
                  *v133 = v131;
                  v133[1] = v242;
                  v254[0] = 0;
                  v254[1] = 0;
                  v134 = 0;
                  ++a8[1];
                  v135 = hkOArchive::getStreamWriter(a4);
                  v177 = a7 + G4_VCALL<int>(v135, 40);
                  if ( *(int *)(v248 + 4) > 0 )
                  {
                    do
                    {
                      ++v134;
                      hkOArchive::writeRaw(a4, v254, a1[12]);
                      v136 = *(uint32_t *)(v248 + 4);
                    }
                    while ( v136 > v134 );
                    if ( v136 > 0 )
                    {
                      v137 = *(uint32_t *)(v248 + 4);
                      v255 = a1;
                      v138 = 0;
                      do
                      {
                        v243 = (hkString::Self *)(*(uint32_t *)(*(uint32_t *)v248 + 4 * v138) & 0xFFFFFFFE);
                        if ( v243 != nullptr )
                        {
                          v221 = v177 + v138 * v255[12];
                          v171 = hkOArchive::getStreamWriter(a4);
                          v200 = G4_VCALL<int>(v171, 40);
                          v147 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
                          v148 = *v147;
                          v140 = v147;
                          v139 = *((char **)*v147 + 3);
                          if ( *((int *)*v147 + 2) <= 127 || (unsigned int)(uintptr_t)(v139 + 128) > *((uint32_t *)v148 + 4) )
                          {
                            v188 = v147;
                            v139 = (char *)hkLifoAllocator::allocateFromNewSlab(v148, 128);
                            v140 = v188;
                          }
                          else
                          {
                            *((uint32_t *)v148 + 3) = (uint32_t)(uintptr_t)(v139 + 128);
                          }
                          *(uint16_t *)v139 = 0;
                          if ( (v200 & 1) != 0 )
                          {
                            v199 = v140;
                            G4_VCALL<void>(v171, 24, v139, 1);
                            v140 = v199;
                          }
                          v141 = *v140;
                          if ( *((int *)*v140 + 2) <= 127
                            || *((char **)v141 + 3) != v139 + 128
                            || v139 == *((char **)v141 + 5) )
                          {
                            hkLifoAllocator::slowBlockFree(v141, v139, 128);
                          }
                          else
                          {
                            *((uint32_t *)v141 + 3) = (uint32_t)(uintptr_t)(v139);
                          }
                          v142 = hkOArchive::getStreamWriter(a4);
                          v143 = a7 + G4_VCALL<int>(v142, 40);
                          v144 = a8[1];
                          if ( v144 == (a8[2] & 0x3FFFFFFF) )
                          {
                            hkArrayUtil::reserveMore(
                              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                              (hkMemoryAllocator::Self *)a8,
                              8,
                              v160);
                            v144 = a8[1];
                          }
                          v145 = (uint32_t *)(*a8 + 8 * v144);
                          v145[1] = v143;
                          *v145 = v221;
                          ++a8[1];
                          v146 = hkString::strLen(v243);
                          hkOArchive::writeRaw(a4, v243, v146 + 1);
                          v137 = *(uint32_t *)(v248 + 4);
                        }
                        ++v138;
                      }
                      while ( v138 < v137 );
                      goto LABEL_77;
                    }
                  }
                  break;
                case 25:
                  v222 = v15;
                  v149 = hkOArchive::getStreamWriter(a4);
                  v201 = a7 + G4_VCALL<int>(v149, 40);
                  v150 = v222;
                  v244 = a6 + *(uint16_t *)(Member + 18);
                  v151 = a8[1];
                  if ( v151 == (a8[2] & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::reserveMore(
                      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                      (hkMemoryAllocator::Self *)a8,
                      8,
                      v160);
                    v150 = v222;
                    v151 = a8[1];
                  }
                  v152 = (uint32_t *)(*a8 + 8 * v151);
                  *v152 = v244;
                  v152[1] = v201;
                  ++a8[1];
                  v245 = (hkClass::Self *)hkClassMember::getClass(v150);
                  v223 = (hkClass::Self *)hkClassMember::getClass((hkClassMember::Self *)Member);
                  if ( v223 != nullptr && v245 != nullptr )
                  {
                    v189 = *(char **)v248;
                    if ( *(int *)(v248 + 4) > 0 )
                    {
                      v153 = 0;
                      do
                      {
                        ObjectSize = hkClass::getObjectSize(v245);
                        hkObjectCopier::saveBody((int)(uintptr_t)(a1), (hkString::Self *)&v189[v153 * ObjectSize], v245, a4, v223, a9);
                        ++v153;
                        v155 = *(uint32_t *)(v248 + 4);
                      }
                      while ( v155 > v153 );
                      if ( v155 > 0 )
                      {
                        v156 = 0;
                        do
                        {
                          v178 = v201 + v156 * hkClass::getObjectSize(v223);
                          v157 = hkClass::getObjectSize(v245);
                          hkObjectCopier::saveExtras(
                            (uint8_t *)(uintptr_t)((int)(uintptr_t)(a1)),
                            (int)(uintptr_t)(&v189[v156 * v157]),
                            v245,
                            a4,
                            v223,
                            v178,
                            a7,
                            (int)(uintptr_t)(a8),
                            (int)(uintptr_t)(a9),
                            v202);
                          ++v156;
                        }
                        while ( *(uint32_t *)(v248 + 4) > v156 );
                      }
                    }
                  }
                  break;
                case 28:
                  v88 = hkOArchive::getStreamWriter(a4);
                  v217 = a7 + G4_VCALL<int>(v88, 40);
                  v89 = a6 + *(uint16_t *)(Member + 18);
                  v90 = a8[1];
                  if ( v90 == (a8[2] & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::reserveMore(
                      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                      (hkMemoryAllocator::Self *)a8,
                      8,
                      v160);
                    v90 = a8[1];
                  }
                  v91 = (uint32_t *)(*a8 + 8 * v90);
                  *v91 = v89;
                  v91[1] = v217;
                  ++a8[1];
                  if ( *(int *)(v248 + 4) > 0 )
                  {
                    v92 = 0;
                    do
                    {
                      memset(v254, 0, 16);
                      ++v92;
                      hkOArchive::writeArrayGeneric(a4, (char *)v254, a1[12], 2);
                      v93 = *(uint32_t *)(v248 + 4);
                    }
                    while ( v93 > v92 );
                    if ( v93 > 0 )
                    {
                      v237 = 0;
                      v255 = a1;
                      do
                      {
                        v100 = 2 * v237 * v255[12];
                        v95 = (int *)(*(uint32_t *)v248 + 8 * v237);
                        v101 = *v95;
                        if ( *v95 != 0 )
                        {
                          v102 = a8[4];
                          v184 = v95[1];
                          if ( v102 == (a8[5] & 0x3FFFFFFF) )
                          {
                            v169 = *v95;
                            hkArrayUtil::reserveMore(
                              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                              (hkMemoryAllocator::Self *)(a8 + 3),
                              16,
                              v160);
                            v102 = a8[4];
                            v101 = v169;
                          }
                          v94 = (uint32_t *)(a8[3] + 16 * v102);
                          v94[1] = v101;
                          v94[2] = v184;
                          *v94 = v100 + v217;
                          v94[3] = 0;
                          ++a8[4];
                          v95 = (int *)(*(uint32_t *)v248 + 8 * v237);
                        }
                        v96 = v95[1];
                        if ( v96 != 0 )
                        {
                          v97 = a8[4];
                          v98 = v255[12] + v217 + v100;
                          if ( v97 == (a8[5] & 0x3FFFFFFF) )
                          {
                            v195 = v95[1];
                            hkArrayUtil::reserveMore(
                              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                              (hkMemoryAllocator::Self *)(a8 + 3),
                              16,
                              v160);
                            v97 = a8[4];
                            v96 = v195;
                          }
                          v99 = (int *)(a8[3] + 16 * v97);
                          v99[1] = v96;
                          *v99 = v98;
                          v99[2] = (int)(uintptr_t)(&hkClassClass);
                          v99[3] = 0;
                          ++a8[4];
                        }
                        ++v237;
                      }
                      while ( *(uint32_t *)(v248 + 4) > v237 );
LABEL_77:
                      a1 = v255;
                    }
                  }
                  break;
                default:
                  v17 = hkOArchive::getStreamWriter(a4);
                  v225 = a7 + G4_VCALL<int>(v17, 40);
                  v203 = a6 + *(uint16_t *)(Member + 18);
                  v18 = a8[1];
                  if ( v18 == (a8[2] & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::reserveMore(
                      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                      (hkMemoryAllocator::Self *)a8,
                      8,
                      v160);
                    v18 = a8[1];
                  }
                  v19 = (uint32_t *)(*a8 + 8 * v18);
                  *v19 = v203;
                  v19[1] = v225;
                  ++a8[1];
                  if ( *(uint8_t *)(Member + 13) == 30 )
                  {
                    sub_18D15E0(a4, a1[12], *(uint32_t *)(v248 + 4), *(char **)v248);
                  }
                  else
                  {
                    v226 = *(char **)v248;
                    v249 = *(uint32_t *)(v248 + 4);
                    v20 = hkClassMember::getArrayMemberSize((hkClassMember::Self *)Member);
                    v21 = *(uint8_t *)(Member + 13) - 1;
                    if ( v21 <= 0x1F )
                    {
                      if ( ((1 << v21) & 0x800007FF) != 0 )
                        goto LABEL_24;
                      if ( ((1 << v21) & 0x3F800) != 0 )
                      {
                        v249 *= v20 >> 2;
                        v20 = 4;
LABEL_24:
                        hkOArchive::writeArrayGeneric(a4, v226, v20, v249);
                        break;
                      }
                    }
                    hkErrStream::Construct((hkErrStream::Self *)v253, (hkString::Self *)v254, 512);
                    hkOstream::opShl(
                      (int)(uintptr_t)(v253),
                      (hkString::Self *)"Unknown class member found during write of plain data array.");
                    if ( hkError::messageError(
                           (hkError::Self *)0x747E1E03,
                           (int)(uintptr_t)(v254),
                           "Copier/hkObjectCopier.cpp",
                           (const char *)&dword_100 + 3) != 0 )
LABEL_45:
                      __builtin_debugtrap();
LABEL_46:
                    hkErrStream::Destroy((hkErrStream::Self *)v253);
                  }
                  break;
              }
LABEL_25:
              v22 = hkOArchive::getStreamWriter(a4);
              sub_18D17F0(v22);
              break;
            case 0x19:
              v209 = v15;
              v173 = (hkClass::Self *)hkClassMember::getClass(v15);
              v232 = (hkClass::Self *)hkClassMember::getClass((hkClassMember::Self *)Member);
              if ( v232 == nullptr || v173 == nullptr )
                goto LABEL_25;
              v181 = v209;
              v193 = a6 + *(uint16_t *)(Member + 18);
              v52 = hkClassMember::getCstyleArraySize(v209);
              v210 = 1;
              if ( v52 != 0 )
                v210 = hkClassMember::getCstyleArraySize(v181);
              v53 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)Member);
              v54 = 1;
              if ( v53 != 0 )
                v54 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)Member);
              if ( v54 > v210 )
                v54 = v210;
              v182 = v54;
              if ( v54 <= 0 )
                goto LABEL_25;
              v255 = a1;
              v55 = 0;
              do
              {
                v211 = v248 + v55 * hkClass::getObjectSize(v173);
                v56 = hkClass::getObjectSize(v232);
                hkObjectCopier::saveExtras((uint8_t *)(uintptr_t)((int)(uintptr_t)(a1)), v211, v173, a4, v232, v193 + v55 * v56, a7, (int)(uintptr_t)(a8), (int)(uintptr_t)(a9), v202);
                ++v55;
              }
              while ( v55 != v182 );
              goto LABEL_77;
            case 0x1B:
              v212 = *(char **)v248;
              if ( *(uint32_t *)v248 != 0 )
              {
                v57 = a6 + *(uint16_t *)(Member + 18);
                v58 = a8[4];
                if ( v58 == (a8[5] & 0x3FFFFFFF) )
                {
                  v236 = a6 + *(uint16_t *)(Member + 18);
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)(a8 + 3),
                    16,
                    v160);
                  v57 = v236;
                  v58 = a8[4];
                }
                v59 = (uint32_t *)(a8[3] + 16 * v58);
                v59[1] = (uint32_t)(uintptr_t)(v212);
                v59[2] = (uint32_t)(uintptr_t)(&hkClassClass);
                *v59 = v57;
                v59[3] = 1;
                ++a8[4];
                v60 = hkOArchive::getStreamWriter(a4);
                v194 = a7 + G4_VCALL<int>(v60, 40);
                v61 = a1[12] + a6 + *(uint16_t *)(Member + 18);
                v62 = a8[1];
                if ( v62 == (a8[2] & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)a8,
                    8,
                    v160);
                  v62 = a8[1];
                }
                v63 = (int *)(*a8 + 8 * v62);
                *v63 = v61;
                v63[1] = v194;
                ++a8[1];
                v233 = *(uint32_t *)(v248 + 4);
                if ( *(int *)(v248 + 8) > 0 )
                {
                  v256 = a1;
                  v64 = 0;
                  do
                  {
                    v158 = (hkString::Self *)(v233 + v64 * hkClass::getObjectSize((hkClass::Self *)v212));
                    ++v64;
                    hkObjectCopier::saveBody((int)(uintptr_t)(a1), v158, (hkClass::Self *)v212, a4, (hkClass::Self *)v212, a9);
                    v65 = *(uint32_t *)(v248 + 8);
                  }
                  while ( v65 > v64 );
                  if ( v65 > 0 )
                  {
                    v66 = 0;
                    v67 = (hkClass::Self *)v212;
                    do
                    {
                      v213 = v194 + v66 * hkClass::getObjectSize(v67);
                      v159 = v233 + v66 * hkClass::getObjectSize(v67);
                      ++v66;
                      hkObjectCopier::saveExtras((uint8_t *)(uintptr_t)((int)(uintptr_t)(v256)), v159, v67, a4, v67, v213, a7, (int)(uintptr_t)(a8), (int)(uintptr_t)(a9), v202);
                    }
                    while ( *(uint32_t *)(v248 + 8) > v66 );
                    a1 = v256;
                  }
                }
              }
              goto LABEL_25;
            case 0x1C:
              v214 = v15;
              v234 = 1;
              if ( hkClassMember::getCstyleArraySize(v15) != 0 )
                v234 = hkClassMember::getCstyleArraySize(v214);
              v68 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)Member);
              v69 = 1;
              if ( v68 != 0 )
                v69 = hkClassMember::getCstyleArraySize((hkClassMember::Self *)Member);
              if ( v69 > v234 )
                v69 = v234;
              if ( v69 <= 0 )
                goto LABEL_25;
              v70 = 0;
              v174 = 2 * v69;
              v255 = a1;
              do
              {
                v215 = v70 + 1;
                v75 = v255[8];
                v76 = *(uint32_t *)(v248 + v75 * v70);
                v235 = *(uint32_t *)(v248 + (v70 + 1) * v75);
                if ( v76 != 0 )
                {
                  v77 = a8[4];
                  v183 = a6 + *(uint16_t *)(Member + 18) + v70 * v255[12];
                  if ( v77 == (a8[5] & 0x3FFFFFFF) )
                  {
                    v166 = v70;
                    hkArrayUtil::reserveMore(
                      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                      (hkMemoryAllocator::Self *)(a8 + 3),
                      16,
                      v160);
                    v77 = a8[4];
                    v70 = v166;
                  }
                  v71 = (int *)(a8[3] + 16 * v77);
                  *v71 = v183;
                  v71[1] = v76;
                  v71[2] = v235;
                  v71[3] = 0;
                  ++a8[4];
                }
                if ( v235 != 0 )
                {
                  v72 = a8[4];
                  v73 = v215 * v255[12] + a6 + *(uint16_t *)(Member + 18);
                  if ( v72 == (a8[5] & 0x3FFFFFFF) )
                  {
                    v216 = v70;
                    hkArrayUtil::reserveMore(
                      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                      (hkMemoryAllocator::Self *)(a8 + 3),
                      16,
                      v160);
                    v72 = a8[4];
                    v70 = v216;
                  }
                  v74 = (int *)(a8[3] + 16 * v72);
                  v74[1] = v235;
                  *v74 = v73;
                  v74[2] = (int)(uintptr_t)(&hkClassClass);
                  v74[3] = 0;
                  ++a8[4];
                }
                v70 += 2;
              }
              while ( v70 != v174 );
              goto LABEL_77;
            case 0x1D:
              v250 = *(char **)v248;
              if ( v250 != nullptr )
                goto LABEL_32;
              goto LABEL_25;
            case 0x21:
              v250 = (char *)(*(uint32_t *)v248 & 0xFFFFFFFE);
              if ( v250 == nullptr )
                goto LABEL_25;
LABEL_32:
              v227 = a6 + *(uint16_t *)(Member + 18);
              v27 = hkOArchive::getStreamWriter(a4);
              v204 = G4_VCALL<int>(v27, 40);
              v190 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
              v28 = *v190;
              v29 = *((char **)*v190 + 3);
              if ( *((int *)*v190 + 2) > 127 && (unsigned int)(uintptr_t)(v29 + 128) <= *((uint32_t *)v28 + 4) )
                *((uint32_t *)v28 + 3) = (uint32_t)(uintptr_t)(v29 + 128);
              else
                v29 = (char *)hkLifoAllocator::allocateFromNewSlab(v28, 128);
              *(uint16_t *)v29 = 0;
              if ( (v204 & 1) != 0 )
              {
                v205 = v29;
                G4_VCALL<void>(v27, 24, v29, 1);
                v29 = v205;
              }
              v30 = *v190;
              if ( *((int *)*v190 + 2) <= 127 || *((char **)v30 + 3) != v29 + 128 || v29 == *((char **)v30 + 5) )
                hkLifoAllocator::slowBlockFree(v30, v29, 128);
              else
                *((uint32_t *)v30 + 3) = (uint32_t)(uintptr_t)(v29);
              v31 = hkOArchive::getStreamWriter(a4);
              v32 = a7 + G4_VCALL<int>(v31, 40);
              v33 = a8[1];
              if ( v33 == (a8[2] & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)a8,
                  8,
                  v160);
                v33 = a8[1];
              }
              v34 = (uint32_t *)(*a8 + 8 * v33);
              *v34 = v227;
              v34[1] = v32;
              ++a8[1];
              v35 = hkString::strLen((hkString::Self *)v250);
              hkOArchive::writeRaw(a4, v250, v35 + 1);
              goto LABEL_25;
            default:
              hkErrStream::Construct((hkErrStream::Self *)v253, (hkString::Self *)v254, 512);
              hkOstream::opShl((int)(uintptr_t)(v253), (hkString::Self *)"Unknown class member found during write of data.");
              v36 = hkError::messageError(
                      (hkError::Self *)0x641E3E05,
                      (int)(uintptr_t)(v254),
                      "Copier/hkObjectCopier.cpp",
                      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_414)->st_size);
LABEL_44:
              if ( v36 != 0 )
                goto LABEL_45;
              goto LABEL_46;
          }
        }
      }
      ++v251;
      result = v246;
    }
    while ( v251 != v246 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::Construct  (binary VA: 0x18d52a0)
// Original: hkXmlLexAnalyzer::hkXmlLexAnalyzer
// ----------------------------------------------------------------------------
void hkXmlLexAnalyzer::Construct(hkXmlLexAnalyzer::Self *self, hkStreamReader::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6818);
  *((uint32_t *)self + 1) = -65535;
  hkParserBuffer::Construct((hkParserBuffer::Self *)((hkXmlLexAnalyzer::Self *)((char *)self + 8)), a2);
  *((uint32_t *)self + 13) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::lexIdentifier  (binary VA: 0x18d5770)
// Original: hkXmlLexAnalyzer::_lexIdentifier
// ----------------------------------------------------------------------------
int hkXmlLexAnalyzer::lexIdentifier(hkXmlLexAnalyzer::Self *self)
{
  hkParserBuffer::Self *v1;
  char *v2;
  char v3;

  v1 = (hkParserBuffer::Self *)((hkXmlLexAnalyzer::Self *)((char *)self + 8));
  v2 = *((char **)self + 6);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == 0 )
    {
      hkParserBuffer::read(v1, 256);
      v2 = *((char **)self + 6);
      v3 = *v2;
    }
    if ( (uint8_t)((v3 & 0xDF) - 65) > 0x19u && (uint8_t)(v3 - 48) > 0xAu && v3 != 95 )
      break;
    if ( (unsigned int)(uintptr_t)(v2) >= *((uint32_t *)self + 8) + *((uint32_t *)self + 7) )
    {
      hkParserBuffer::read(v1, 256);
      v2 = *((char **)self + 6);
      if ( (unsigned int)(uintptr_t)(v2) >= *((uint32_t *)self + 8) + *((uint32_t *)self + 7) )
        continue;
    }
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(++v2);
  }
  return 8;
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::lexWhiteSpace  (binary VA: 0x18d5810)
// Original: hkXmlLexAnalyzer::_lexWhiteSpace
// ----------------------------------------------------------------------------
int hkXmlLexAnalyzer::lexWhiteSpace(hkXmlLexAnalyzer::Self *self)
{
  hkParserBuffer::Self *v1;
  char *v2;
  char v3;

  v1 = (hkParserBuffer::Self *)((hkXmlLexAnalyzer::Self *)((char *)self + 8));
  v2 = *((char **)self + 6);
LABEL_2:
  v3 = *v2;
  if ( *v2 == 0 )
    goto LABEL_9;
  while ( v3 == 32 || (uint8_t)(v3 - 9) <= 1u || v3 == 13 )
  {
    if ( (unsigned int)(uintptr_t)(v2) >= *((uint32_t *)self + 8) + *((uint32_t *)self + 7) )
    {
      hkParserBuffer::read(v1, 256);
      v2 = *((char **)self + 6);
      if ( (unsigned int)(uintptr_t)(v2) >= *((uint32_t *)self + 8) + *((uint32_t *)self + 7) )
        goto LABEL_2;
    }
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(++v2);
    v3 = *v2;
    if ( *v2 == 0 )
    {
LABEL_9:
      hkParserBuffer::read(v1, 256);
      v2 = *((char **)self + 6);
      v3 = *v2;
    }
  }
  return 3;
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::lexText  (binary VA: 0x18d58c0)
// Original: hkXmlLexAnalyzer::_lexText
// ----------------------------------------------------------------------------
int hkXmlLexAnalyzer::lexText(hkXmlLexAnalyzer::Self *self)
{
  int v1;
  char *v2;
  unsigned int v3;
  unsigned int v4;
  char v5;
  int v7;

  v1 = *((uint32_t *)self + 7);
  v2 = *((char **)self + 6);
  if ( (unsigned int)(uintptr_t)(v2) > v1 + *((uint32_t *)self + 5) )
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(--v2);
  v3 = v1 + *((uint32_t *)self + 8);
  v7 = v1;
  if ( (unsigned int)(uintptr_t)(v2) >= v3 )
    goto LABEL_13;
  do
  {
    do
    {
      v4 = (unsigned int)(uintptr_t)(v2 + 1);
      *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v2 + 1);
      v5 = *v2;
      if ( *v2 == 0 )
        return 2;
      if ( v5 == 60 || v5 == 32 || (uint8_t)(v5 - 9) <= 1u || v5 == 13 )
      {
        if ( v4 > *((uint32_t *)self + 5) + v7 )
          *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v2);
        return 2;
      }
      ++v2;
    }
    while ( v4 < v3 );
LABEL_13:
    hkParserBuffer::read((hkParserBuffer::Self *)((hkXmlLexAnalyzer::Self *)((char *)self + 8)), 256);
    v2 = *((char **)self + 6);
    v3 = *((uint32_t *)self + 7) + *((uint32_t *)self + 8);
    v7 = *((uint32_t *)self + 7);
  }
  while ( (unsigned int)(uintptr_t)(v2) < v3 );
  return 2;
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::handleError  (binary VA: 0x18d59a0)
// Original: hkXmlLexAnalyzer::_handleError
// ----------------------------------------------------------------------------
int hkXmlLexAnalyzer::handleError()
{
  return 12;
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::lexComment  (binary VA: 0x18d59b0)
// Original: hkXmlLexAnalyzer::_lexComment
// ----------------------------------------------------------------------------
int hkXmlLexAnalyzer::lexComment(hkXmlLexAnalyzer::Self *self)
{
  int v1;
  char *v2;
  unsigned int v3;
  char *v4;
  char v5;
  uint32_t v7[7];

  v1 = 0;
  v7[0] = 4074797;
  v2 = *((char **)self + 6);
  v3 = *((uint32_t *)self + 7) + *((uint32_t *)self + 8);
  if ( (unsigned int)(uintptr_t)(v2) >= v3 )
    goto LABEL_6;
  while ( 1 )
  {
    v4 = v2 + 1;
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v2 + 1);
    v5 = *v2;
    if ( v5 == 0 )
      return hkXmlLexAnalyzer::handleError();
    if ( *((uint8_t *)v7 + v1) == v5 )
      break;
    v1 = 0;
LABEL_5:
    v2 = v4;
    if ( (unsigned int)(uintptr_t)(v4) >= v3 )
    {
LABEL_6:
      hkParserBuffer::read((hkParserBuffer::Self *)((hkXmlLexAnalyzer::Self *)((char *)self + 8)), 256);
      v2 = *((char **)self + 6);
      v3 = *((uint32_t *)self + 7) + *((uint32_t *)self + 8);
      if ( (unsigned int)(uintptr_t)(v2) >= v3 )
        return hkXmlLexAnalyzer::handleError();
    }
  }
  if ( ++v1 != 3 )
    goto LABEL_5;
  return 4;
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::matchOutsideBrackets  (binary VA: 0x18d5a60)
// Original: hkXmlLexAnalyzer::_matchOutsideBrackets
// ----------------------------------------------------------------------------
int hkXmlLexAnalyzer::matchOutsideBrackets(hkXmlLexAnalyzer::Self *self)
{
  char *v1;
  char *v2;
  char v3;
  int result;
  char v5;
  typedef hkParserBuffer::Self *_g4_t_v6;
  typedef uint8_t _g4_t_v7[25];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (7u + sizeof(_g4_t_v7)) > _g4_s1 ? (7u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 7u);

  v6 = (hkParserBuffer::Self *)((hkXmlLexAnalyzer::Self *)((char *)self + 8));
  v1 = *((char **)self + 6);
  if ( (unsigned int)(uintptr_t)(v1) < *((uint32_t *)self + 8) + *((uint32_t *)self + 7)
    || (hkParserBuffer::read(v6, 256),
        v1 = *((char **)self + 6),
        result = 5,
        (unsigned int)(uintptr_t)(v1) < *((uint32_t *)self + 8) + *((uint32_t *)self + 7)) )
  {
    v2 = v1 + 1;
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v1 + 1);
    v3 = *v1;
    result = 5;
    if ( *v1 != 0 )
    {
      if ( v3 == 60 )
      {
        v5 = v1[1];
        if ( v5 == 0 )
        {
          hkParserBuffer::read(v6, 256);
          v2 = *((char **)self + 6);
          v5 = *v2;
        }
        if ( v5 == 63 )
        {
          if ( (unsigned int)(uintptr_t)(v2) < *((uint32_t *)self + 8) + *((uint32_t *)self + 7)
            || (hkParserBuffer::read(v6, 256),
                (unsigned int)(uintptr_t)(v2 = *((char **)self + 6)) < *((uint32_t *)self + 8) + *((uint32_t *)self + 7)) )
          {
            *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v2 + 1);
          }
          *((uint32_t *)self + 13) |= 3u;
          return 1;
        }
        else
        {
          hkParserBuffer::matchAndConsume((hkParserBuffer::Self *)v7, (char *)v6, (hkString::Self *)"!--");
          if ( v7[0] != 0 )
          {
            return hkXmlLexAnalyzer::lexComment(self);
          }
          else
          {
            *((uint32_t *)self + 13) |= 1u;
            return 0;
          }
        }
      }
      else if ( v3 == 32 || (uint8_t)(v3 - 9) <= 1u || v3 == 13 )
      {
        return hkXmlLexAnalyzer::lexWhiteSpace(self);
      }
      else
      {
        return hkXmlLexAnalyzer::lexText(self);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::lexQuotedString  (binary VA: 0x18d5bd0)
// Original: hkXmlLexAnalyzer::_lexQuotedString
// ----------------------------------------------------------------------------
int hkXmlLexAnalyzer::lexQuotedString(hkXmlLexAnalyzer::Self *self)
{
  char v1; // bp
  char *v2;
  char *v3;
  char v4;
  unsigned int v6;

  v1 = 0;
  v2 = *((char **)self + 6);
  v6 = *((uint32_t *)self + 7) + *((uint32_t *)self + 8);
  if ( (unsigned int)(uintptr_t)(v2) >= v6 )
    goto LABEL_8;
  while ( 1 )
  {
    v3 = v2 + 1;
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v2 + 1);
    v4 = *v2;
    if ( v4 == 0 )
      return hkXmlLexAnalyzer::handleError();
    if ( v1 != 0 )
    {
      v1 = 0;
      v2 = v3;
      goto LABEL_7;
    }
    if ( v4 == 92 )
    {
      v1 = 1;
      v2 = v3;
      goto LABEL_7;
    }
    if ( v4 == 34 )
      return 10;
    v2 = v3;
LABEL_7:
    if ( (unsigned int)(uintptr_t)(v2) >= v6 )
    {
LABEL_8:
      hkParserBuffer::read((hkParserBuffer::Self *)((hkXmlLexAnalyzer::Self *)((char *)self + 8)), 256);
      v2 = *((char **)self + 6);
      v6 = *((uint32_t *)self + 7) + *((uint32_t *)self + 8);
      if ( (unsigned int)(uintptr_t)(v2) >= v6 )
        return hkXmlLexAnalyzer::handleError();
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::matchInBrackets  (binary VA: 0x18d5ca0)
// Original: hkXmlLexAnalyzer::_matchInBrackets
// ----------------------------------------------------------------------------
int hkXmlLexAnalyzer::matchInBrackets(hkXmlLexAnalyzer::Self *self)
{
  int v1;
  char *v2;
  unsigned int v3;
  char *v4;
  char v5;
  int v7;
  hkParserBuffer::Self *v8;

  v8 = (hkParserBuffer::Self *)((hkXmlLexAnalyzer::Self *)((char *)self + 8));
  v1 = *((uint32_t *)self + 7);
  v2 = *((char **)self + 6);
  v3 = v1 + *((uint32_t *)self + 8);
  while ( 2 )
  {
    if ( v3 <= (unsigned int)(uintptr_t)(v2) )
    {
      hkParserBuffer::read(v8, 256);
      v1 = *((uint32_t *)self + 7);
      v2 = *((char **)self + 6);
      v3 = v1 + *((uint32_t *)self + 8);
      if ( (unsigned int)(uintptr_t)(v2) >= v3 )
        return 5;
    }
    v4 = v2 + 1;
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v2 + 1);
    v5 = *v2;
    switch ( v5 )
    {
      case 0:
        return 5;
      case 9:
      case 10:
      case 13:
      case 32:
        hkXmlLexAnalyzer::lexWhiteSpace(self);
        hkParserBuffer::lexemeCommit(v8);
        v1 = *((uint32_t *)self + 7);
        v2 = *((char **)self + 6);
        v3 = v1 + *((uint32_t *)self + 8);
        continue;
      case 34:
        return hkXmlLexAnalyzer::lexQuotedString(self);
      case 47:
        return 11;
      case 61:
        return 9;
      case 62:
        v7 = *((uint32_t *)self + 13);
        if ( (v7 & 2) != 0 )
          return hkXmlLexAnalyzer::handleError();
        *((uint32_t *)self + 13) = v7 & 0xFFFFFFFE;
        return 6;
      case 63:
        v2 = v4;
        if ( (*((uint8_t *)self + 52) & 2) == 0 )
          continue;
        if ( (unsigned int)(uintptr_t)(v4) >= v3 )
        {
          hkParserBuffer::read(v8, 256);
          v1 = *((uint32_t *)self + 7);
          v4 = *((char **)self + 6);
          v3 = v1 + *((uint32_t *)self + 8);
          if ( (unsigned int)(uintptr_t)(v4) >= v3 )
          {
            v2 = *((char **)self + 6);
            goto LABEL_12;
          }
        }
        v2 = v4 + 1;
        *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v4 + 1);
        if ( *v4 != 62 )
        {
LABEL_12:
          if ( (unsigned int)(uintptr_t)(v2) > v1 + *((uint32_t *)self + 5) )
            *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(--v2);
          continue;
        }
        *((uint32_t *)self + 13) &= 0xFFFFFFFC;
        return 7;
      default:
        if ( (uint8_t)((v5 & 0xDF) - 65) <= 0x19u || v5 == 95 || v5 == 58 )
          return hkXmlLexAnalyzer::lexIdentifier(self);
        else
          return hkXmlLexAnalyzer::handleError();
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkXmlLexAnalyzer::advance  (binary VA: 0x18d5e90)
// Original: hkXmlLexAnalyzer::advance
// ----------------------------------------------------------------------------
int hkXmlLexAnalyzer::advance(hkXmlLexAnalyzer::Self *self)
{
  hkParserBuffer::lexemeCommit((hkParserBuffer::Self *)((hkXmlLexAnalyzer::Self *)((char *)self + 8)));
  if ( (*((uint8_t *)self + 52) & 1) != 0 )
    return hkXmlLexAnalyzer::matchInBrackets(self);
  else
    return hkXmlLexAnalyzer::matchOutsideBrackets(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySphere::Destroy  (binary VA: 0x18d5ee0)
// Original: hkDisplaySphere::~hkDisplaySphere
// ----------------------------------------------------------------------------
void hkDisplaySphere::Destroy(hkDisplaySphere::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8508);
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySphere::Destroy_ea18d5f10  (binary VA: 0x18d5f10)
// Original: hkDisplaySphere::~hkDisplaySphere
// ----------------------------------------------------------------------------
void hkDisplaySphere::Destroy_ea18d5f10(hkDisplaySphere::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8508);
  g4_noop_dtor(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySphere::Construct  (binary VA: 0x18d6530)
// Original: hkDisplaySphere::hkDisplaySphere
// ----------------------------------------------------------------------------
void hkDisplaySphere::Construct(hkDisplaySphere::Self *self, const hkSphere::Self *a2, int a3)
{
  float v3;

  *((uint32_t *)self + 4) = 1065353216;
  *((float *)self + 5) = flt_1D12FE0[-3];
  *((float *)self + 6) = flt_1D12FE0[-2];
  *((float *)self + 7) = flt_1D12FE0[-1];
  *((float *)self + 8) = flt_1D12FE0[0];
  *((float *)self + 9) = flt_1D12FE0[1];
  *((float *)self + 10) = flt_1D12FE0[2];
  *((float *)self + 11) = flt_1D12FE0[3];
  *((float *)self + 12) = flt_1D12FE0[4];
  *((float *)self + 13) = flt_1D12FE0[5];
  *((float *)self + 14) = flt_1D12FE0[6];
  v3 = flt_1D12FE0[7];
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 20) = 1;
  *((float *)self + 15) = v3;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8508);
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 24) = *(uint32_t *)a2;
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 28) = a3;
  hkRotationf::set((hkDisplaySphere::Self *)((char *)self + 16), (const hkQuaternionf::Self *)&flt_1D12FE0[8]);
  *((uint32_t *)self + 16) = *(uint32_t *)a2;
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 18) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 19) = *((uint32_t *)a2 + 3);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySphere::buildIcosahedron  (binary VA: 0x18d6620)
// Original: hkDisplaySphere::buildIcosahedron
// ----------------------------------------------------------------------------
uint32_t * hkDisplaySphere::buildIcosahedron(uint32_t *a1, float *a2)
{
  uint32_t *v2;
  float v3; // xmm2_4
  float v4; // xmm1_4
  unsigned int v5;
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
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *result;
  uint32_t v43[7];

  v43[4] = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  v3 = 0.5257311f * *a2;
  v4 = *a2 * 0.8506508f;
  v5 = a1[4] & 0x3FFFFFFF;
  if ( v5 <= 0xB )
  {
    v6 = 2 * v5;
    v7 = 12;
    if ( v6 >= 12 )
      v7 = v6;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v43, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a1 + 2, v7, 16);
  }
  v8 = v2[2];
  v2[3] = 12;
  *(float *)v8 = -v3;
  *(uint32_t *)(v8 + 4) = 0;
  *(float *)(v8 + 8) = v4;
  *(uint32_t *)(v8 + 12) = 0;
  v9 = v2[2];
  *(float *)(v9 + 16) = v3;
  *(uint32_t *)(v9 + 20) = 0;
  *(float *)(v9 + 24) = v4;
  *(uint32_t *)(v9 + 28) = 0;
  v10 = v2[2];
  *(float *)(v10 + 32) = -v3;
  *(uint32_t *)(v10 + 36) = 0;
  *(float *)(v10 + 40) = -v4;
  *(uint32_t *)(v10 + 44) = 0;
  v11 = v2[2];
  *(float *)(v11 + 48) = v3;
  *(uint32_t *)(v11 + 52) = 0;
  *(float *)(v11 + 56) = -v4;
  *(uint32_t *)(v11 + 60) = 0;
  v12 = v2[2];
  *(uint32_t *)(v12 + 64) = 0;
  *(float *)(v12 + 68) = v4;
  *(float *)(v12 + 72) = v3;
  *(uint32_t *)(v12 + 76) = 0;
  v13 = v2[2];
  *(uint32_t *)(v13 + 80) = 0;
  *(float *)(v13 + 84) = v4;
  *(float *)(v13 + 88) = -v3;
  *(uint32_t *)(v13 + 92) = 0;
  v14 = v2[2];
  *(uint32_t *)(v14 + 96) = 0;
  *(float *)(v14 + 100) = -v4;
  *(float *)(v14 + 104) = v3;
  *(uint32_t *)(v14 + 108) = 0;
  v15 = v2[2];
  *(uint32_t *)(v15 + 112) = 0;
  *(float *)(v15 + 116) = -v4;
  *(float *)(v15 + 120) = -v3;
  *(uint32_t *)(v15 + 124) = 0;
  v16 = v2[2];
  *(float *)(v16 + 128) = v4;
  *(float *)(v16 + 132) = v3;
  *(uint32_t *)(v16 + 136) = 0;
  *(uint32_t *)(v16 + 140) = 0;
  v17 = v2[2];
  *(float *)(v17 + 144) = -v4;
  *(float *)(v17 + 148) = v3;
  *(uint32_t *)(v17 + 152) = 0;
  *(uint32_t *)(v17 + 156) = 0;
  v18 = v2[2];
  *(float *)(v18 + 160) = v4;
  *(float *)(v18 + 164) = -v3;
  *(uint32_t *)(v18 + 168) = 0;
  *(uint32_t *)(v18 + 172) = 0;
  v19 = v2[2];
  *(float *)(v19 + 176) = -v4;
  *(float *)(v19 + 180) = -v3;
  *(uint32_t *)(v19 + 184) = 0;
  *(uint32_t *)(v19 + 188) = 0;
  v20 = v2[7] & 0x3FFFFFFF;
  if ( v20 <= 0x13 )
  {
    v21 = 2 * v20;
    v22 = 20;
    if ( v21 >= 20 )
      v22 = v21;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v43, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v2 + 5, v22, 16);
  }
  v23 = (uint32_t *)v2[5];
  v2[6] = 20;
  *v23 = 1;
  v23[1] = 4;
  v23[2] = 0;
  v23[3] = -1;
  v24 = (uint32_t *)v2[5];
  v24[4] = 4;
  v24[5] = 9;
  v24[6] = 0;
  v24[7] = -1;
  v25 = (uint32_t *)v2[5];
  v25[8] = 4;
  v25[9] = 5;
  v25[10] = 9;
  v25[11] = -1;
  v26 = (uint32_t *)v2[5];
  v26[12] = 8;
  v26[13] = 5;
  v26[14] = 4;
  v26[15] = -1;
  v27 = (uint32_t *)v2[5];
  v27[16] = 1;
  v27[17] = 8;
  v27[18] = 4;
  v27[19] = -1;
  v28 = (uint32_t *)v2[5];
  v28[20] = 1;
  v28[21] = 10;
  v28[22] = 8;
  v28[23] = -1;
  v29 = (uint32_t *)v2[5];
  v29[24] = 10;
  v29[25] = 3;
  v29[26] = 8;
  v29[27] = -1;
  v30 = (uint32_t *)v2[5];
  v30[28] = 8;
  v30[29] = 3;
  v30[30] = 5;
  v30[31] = -1;
  v31 = (uint32_t *)v2[5];
  v31[32] = 3;
  v31[33] = 2;
  v31[34] = 5;
  v31[35] = -1;
  v32 = (uint32_t *)v2[5];
  v32[36] = 3;
  v32[37] = 7;
  v32[38] = 2;
  v32[39] = -1;
  v33 = (uint32_t *)v2[5];
  v33[40] = 3;
  v33[41] = 10;
  v33[42] = 7;
  v33[43] = -1;
  v34 = (uint32_t *)v2[5];
  v34[44] = 10;
  v34[45] = 6;
  v34[46] = 7;
  v34[47] = -1;
  v35 = (uint32_t *)v2[5];
  v35[48] = 6;
  v35[49] = 11;
  v35[50] = 7;
  v35[51] = -1;
  v36 = (uint32_t *)v2[5];
  v36[52] = 6;
  v36[53] = 0;
  v36[54] = 11;
  v36[55] = -1;
  v37 = (uint32_t *)v2[5];
  v37[56] = 6;
  v37[57] = 1;
  v37[58] = 0;
  v37[59] = -1;
  v38 = (uint32_t *)v2[5];
  v38[60] = 10;
  v38[61] = 1;
  v38[62] = 6;
  v38[63] = -1;
  v39 = (uint32_t *)v2[5];
  v39[64] = 11;
  v39[65] = 0;
  v39[66] = 9;
  v39[67] = -1;
  v40 = (uint32_t *)v2[5];
  v40[68] = 2;
  v40[69] = 11;
  v40[70] = 9;
  v40[71] = -1;
  v41 = (uint32_t *)v2[5];
  v41[72] = 5;
  v41[73] = 2;
  v41[74] = 9;
  v41[75] = -1;
  result = (uint32_t *)v2[5];
  result[76] = 11;
  result[77] = 2;
  result[78] = 7;
  result[79] = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySphere::buildGeometry  (binary VA: 0x18d6b80)
// Original: hkDisplaySphere::buildGeometry
// ----------------------------------------------------------------------------
int * hkDisplaySphere::buildGeometry(hkDisplaySphere::Self *self)
{
  int v1;
  int address;
  uint32_t *v3;
  float v4; // xmm0_4
  int *result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int savedregs;
  float retaddr;

  v1 = 0;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (uint32_t *)(*(int (**)(uint32_t, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44)
                                                                                 + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   32,
                   v6,
                   v7,
                   v8,
                   v9,
                   v10,
                   v11);
  v3[1] = -65535;
  v3[2] = 0;
  *v3 = ((uint32_t)(uintptr_t)&off_20586B8);
  v3[3] = 0;
  v3[4] = 0x80000000;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0x80000000;
  v4 = *((float *)self + 27);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v3);
  retaddr = v4;
  hkDisplaySphere::buildIcosahedron(v3, &retaddr);
  result = *((int **)self + 2);
  savedregs = result[6];
  if ( savedregs > 0 )
  {
    while ( 1 )
    {
      result = (int *)sub_18D5F80(result, v1++, retaddr, *((uint32_t *)self + 28));
      if ( v1 == savedregs )
        break;
      result = *((int **)self + 2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySphere::getWireframeGeometry  (binary VA: 0x18d6c60)
// Original: hkDisplaySphere::getWireframeGeometry
// ----------------------------------------------------------------------------
int hkDisplaySphere::getWireframeGeometry(hkDisplaySphere::Self *self, hkArrayBase<hkVector4f::Self> *a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  float v4; // xmm0_4
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int result;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  hkArrayBase<hkVector4f::Self> *v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef float _g4_t_v24;
  typedef int _g4_t_v25[2];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v20)) > _g4_s1 ? (20u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v21)) > _g4_s2 ? (24u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v22)) > _g4_s3 ? (28u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v25)) > _g4_s6 ? (48u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v26)) > _g4_s7 ? (56u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v27)) > _g4_s8 ? (60u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v28)) > _g4_s9 ? (64u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v29)) > _g4_s10 ? (68u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v30)) > _g4_s11 ? (72u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v31)) > _g4_s12 ? (76u + sizeof(_g4_t_v31)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);

  v3 = 0;
  v4 = *((float *)self + 27);
  v25[0] = (int)((uint32_t)(uintptr_t)&off_20586B8);
  v25[1] = -65535;
  v26 = 0;
  v27 = 0;
  v28 = 0x80000000;
  v29 = 0;
  v30 = 0;
  v31 = 0x80000000;
  v24 = v4;
  hkDisplaySphere::buildIcosahedron((uint32_t *)(v25), &v24);
  v22 = v30;
  if ( v30 > 0 )
  {
    do
    {
      v5 = v3++;
      sub_18D5F80(v25, v5, *((float *)self + 27), *((uint32_t *)self + 28));
    }
    while ( v3 != v22 );
    if ( v30 > 0 )
    {
      v21 = 0;
      v6 = 0;
      do
      {
        v7 = 0;
        v23 = v29 + 16 * v6;
        do
        {
          ++v7;
          v8 = *(uint32_t *)(v23 + 4 * v7 - 4);
          v9 = (uint32_t *)(v23 + 4 * (v7 % 3));
          if ( v8 < *v9 )
          {
            v11 = (uint32_t *)(v26 + 16 * v8);
            v12 = *((uint32_t *)a2 + 1);
            if ( v12 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
            {
              v20 = v11;
              hkArrayUtil::reserveMore(a3, a2, 16, v19);
              v11 = v20;
              v12 = *((uint32_t *)a2 + 1);
            }
            v13 = (uint32_t *)(*(uint32_t *)a2 + 16 * v12);
            *v13 = *v11;
            v13[1] = v11[1];
            v13[2] = v11[2];
            v13[3] = v11[3];
            v14 = a2;
            v15 = *((uint32_t *)a2 + 1) + 1;
            v16 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
            *((uint32_t *)a2 + 1) = v15;
            v17 = (uint32_t *)(v26 + 16 * *v9);
            if ( v15 == v16 )
            {
              hkArrayUtil::reserveMore(a3, a2, 16, v19);
              v14 = a2;
              v15 = *((uint32_t *)a2 + 1);
            }
            v18 = (uint32_t *)(*(uint32_t *)v14 + 16 * v15);
            *v18 = *v17;
            v18[1] = v17[1];
            v18[2] = v17[2];
            v18[3] = v17[3];
            ++*((uint32_t *)v14 + 1);
          }
        }
        while ( v7 != 3 );
        v6 = ++v21;
      }
      while ( v30 > v21 );
    }
  }
  v30 = 0;
  v25[0] = (int)((uint32_t)(uintptr_t)&off_20586B8);
  if ( v31 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v29,
      16 * v31);
  result = v28;
  v29 = 0;
  v31 = 0x80000000;
  v27 = 0;
  if ( v28 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v26,
             16 * v28);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::addContext  (binary VA: 0x18d6f00)
// Original: hkVisualDebugger::addContext
// ----------------------------------------------------------------------------
int hkVisualDebugger::addContext(hkVisualDebugger::Self *self, hkProcessContext::Self *a2)
{
  int v2;
  int result;
  int v4;

  G4_VCALL<void>(a2, 12, self);
  v2 = *((uint32_t *)self + 8);
  if ( v2 == (*((uint32_t *)self + 9) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkVisualDebugger::Self *)((char *)self + 28),
      4,
      v4);
    v2 = *((uint32_t *)self + 8);
  }
  result = *((uint32_t *)self + 7);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::createRequiredAndDefaultProcessList  (binary VA: 0x18d6f70)
// Original: hkVisualDebugger::createRequiredAndDefaultProcessList
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkVisualDebugger::createRequiredAndDefaultProcessList(int *a1, int a2, hkStringBuf::Self *a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  hkString::Self *v9;
  int v10;
  typedef int _g4_t_v12;
  typedef hkString::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v17)) > _g4_s5 ? (20u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v18)) > _g4_s6 ? (24u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);

  v3 = 0;
  hkStringBuf::opAssign(a3, (hkString::Self *)"Turning on the following viewers: [");
  if ( a1[24] > 0 )
  {
    do
    {
      if ( (*(int (**)(uint32_t, unsigned int))(**(uint32_t **)(a2 + 4) + 44))(
             *(uint32_t *)(a2 + 4),
             *(uint32_t *)(a1[23] + 4 * v3) & 0xFFFFFFFE) >= 0 )
      {
        hkStringBuf::appendJoin(
          a3,
          (hkString::Self *)" ",
          (const char *)(*(uint32_t *)(a1[23] + 4 * v3) & 0xFFFFFFFE),
          nullptr,
          nullptr,
          nullptr,
          nullptr);
        (*(void (**)(uint8_t *))(**(uint32_t **)(a2 + 4) + 36))(v18);
      }
      ++v3;
    }
    while ( a1[24] > v3 );
  }
  v13 = nullptr;
  v4 = (int)(uintptr_t)(a1);
  if ( a1[21] <= 0 )
    return hkStringBuf::opAddAssign(a3, (hkString::Self *)"]");
  do
  {
    v15 = v4;
    v12 = (*(int (**)(uint32_t, unsigned int))(**(uint32_t **)(a2 + 4) + 44))(
            *(uint32_t *)(a2 + 4),
            *(uint32_t *)(*(uint32_t *)(v4 + 80) + 4 * (uint32_t)(uintptr_t)(v13)) & 0xFFFFFFFE);
    v4 = v15;
    if ( v12 < 0 )
      goto LABEL_15;
    v5 = (uint32_t *)(*(uint32_t *)(v15 + 80) + 4 * (uint32_t)(uintptr_t)(v13));
    v14 = *(uint32_t *)(v15 + 96);
    if ( v14 <= 0 )
      goto LABEL_20;
    v6 = 0;
    v7 = (uint32_t *)(*(uint32_t *)(v15 + 80) + 4 * (uint32_t)(uintptr_t)(v13));
    v8 = v15;
    do
    {
      while ( 1 )
      {
        v9 = (hkString::Self *)(*(uint32_t *)(*(uint32_t *)(v8 + 92) + 4 * v6) & 0xFFFFFFFE);
        if ( (*v7 & 0xFFFFFFFE) == 0 || v9 == nullptr )
          break;
        v16 = v7;
        v10 = hkString::strCmp(v9, (char *)(*v7 & 0xFFFFFFFE));
        v7 = v16;
        if ( v10 == 0 )
          goto LABEL_14;
LABEL_10:
        if ( ++v6 == v14 )
          goto LABEL_19;
      }
      if ( v9 != nullptr )
        goto LABEL_10;
      if ( (*v7 & 0xFFFFFFFE) == 0 )
      {
LABEL_14:
        v4 = v8;
        goto LABEL_15;
      }
      ++v6;
    }
    while ( v6 != v14 );
LABEL_19:
    v4 = v8;
    v5 = (uint32_t *)(*(uint32_t *)(v8 + 80) + 4 * (uint32_t)(uintptr_t)(v13));
LABEL_20:
    v17 = v4;
    hkStringBuf::appendJoin(a3, (hkString::Self *)" ", (const char *)(*v5 & 0xFFFFFFFE), nullptr, nullptr, nullptr, nullptr);
    (*(void (**)(uint8_t *))(**(uint32_t **)(a2 + 4) + 36))(v18);
    v4 = v17;
LABEL_15:
    v13 = (hkString::Self *)((char *)v13 + 1);
  }
  while ( *(uint32_t *)(v4 + 84) > (int)(uintptr_t)(v13) );
  return hkStringBuf::opAddAssign(a3, (hkString::Self *)"]");
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::deleteClient  (binary VA: 0x18d71d0)
// Original: hkVisualDebugger::deleteClient
// ----------------------------------------------------------------------------
int hkVisualDebugger::deleteClient(hkVisualDebugger::Self *self, int a2)
{
  hkVisualDebugger::Self *v2;
  int *v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int v10;
  int32_t v11; // kr04_4
  int32_t v12;
  int32_t v13; // ett
  int v14;
  int result;
  uint32_t *v16;
  uint32_t *v17;
  hkVisualDebugger::Self *thisa;

  v2 = self;
  v3 = (int *)(*((uint32_t *)self + 4) + 8 * a2);
  v4 = v3[1];
  if ( v4 != 0 && *(uint16_t *)(v4 + 6) != 0 )
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
    v2 = self;
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v4, 16);
  }
  v9 = *v3;
  if ( *v3 != 0 && *(uint16_t *)(v9 + 6) != 0 )
  {
    thisa = v2;
    do
    {
      v11 = *(uint32_t *)(v9 + 4);
      HIWORD(v10) = HIWORD(v11);
      LOWORD(v10) = 0;
      v12 = v10 | (uint16_t)(v11 - 1);
      v13 = v11;
    }
    while ( v13 != __sync_val_compare_and_swap((volatile int32_t *)(v9 + 4), v13, v12) );
    v2 = thisa;
    if ( (uint16_t)v12 == 0 )
      G4_VCALL<void>(v9, 16);
  }
  v14 = *((uint32_t *)v2 + 4);
  result = *((uint32_t *)v2 + 5) - 1;
  *((uint32_t *)v2 + 5) = result;
  if ( a2 != result )
  {
    v16 = (uint32_t *)(v14 + 8 * result);
    v17 = (uint32_t *)(v14 + 8 * a2);
    *v17 = *v16;
    result = v16[1];
    v17[1] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::endCapture  (binary VA: 0x18d72b0)
// Original: hkVisualDebugger::endCapture
// ----------------------------------------------------------------------------
int hkVisualDebugger::endCapture(hkVisualDebugger::Self *self)
{
  int result;
  int v2;
  int v3;

  result = *((uint32_t *)self + 5);
  v2 = result - 1;
  v3 = 8 * (result - 1);
  if ( result - 1 >= 0 )
  {
    do
    {
      result = *((uint32_t *)self + 4);
      if ( *(uint32_t *)(result + v3) == 0 )
        result = hkVisualDebugger::deleteClient(self, v2);
      --v2;
      v3 -= 8;
    }
    while ( v2 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::SupressPollForNewClient  (binary VA: 0x18d7310)
// Original: hkVisualDebugger::SupressPollForNewClient
// ----------------------------------------------------------------------------
int hkVisualDebugger::SupressPollForNewClient(hkVisualDebugger::Self *self, int a2)
{
  *((uint8_t *)self + 12) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::writeStep  (binary VA: 0x18d7320)
// Original: hkVisualDebugger::writeStep
// ----------------------------------------------------------------------------
int hkVisualDebugger::writeStep(hkVisualDebugger::Self *self, int a2, float a3)
{
  int v3;
  int result;
  hkOArchive::Self *v5;
  int StreamWriter;

  v3 = *((uint32_t *)self + 4) + 8 * a2;
  result = G4_VCALL<int>(*(uint32_t *)(v3 + 4) + 12, 24);
  if ( (uint8_t)result != 0 )
  {
    v5 = *(hkOArchive::Self **)(*(uint32_t *)(v3 + 4) + 24);
    hkOArchive::write32u(v5, 5);
    hkOArchive::write8u(v5, 0);
    hkOArchive::writeFloat32(v5, a3);
    StreamWriter = hkOArchive::getStreamWriter(v5);
    return G4_VCALL<int>(StreamWriter, 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::createClient  (binary VA: 0x18d73b0)
// Original: hkVisualDebugger::createClient
// ----------------------------------------------------------------------------
int hkVisualDebugger::createClient(hkVisualDebugger::Self *self, hkSocket::Self *a2, hkStreamReader::Self *a3, hkStreamWriter::Self *a4)
{
  hkVisualDebugger::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int address;
  int v10;
  hkVisualDebugger::Self *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v17;
  hkString::Self *v18;
  int v19;
  int v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef hkServerProcessHandler::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef hkVisualDebugger::Self *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t _g4_t_v38[5];
  typedef uint32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v26)) > _g4_s4 ? (16u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v27)) > _g4_s5 ? (20u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v28)) > _g4_s6 ? (24u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v29)) > _g4_s7 ? (24u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v30)) > _g4_s8 ? (28u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v31)) > _g4_s9 ? (28u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v32)) > _g4_s10 ? (32u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v33)) > _g4_s11 ? (32u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v34)) > _g4_s12 ? (36u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v35)) > _g4_s13 ? (36u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v36)) > _g4_s14 ? (36u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v37)) > _g4_s15 ? (36u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v38)) > _g4_s16 ? (40u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v39)) > _g4_s17 ? (60u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v40)) > _g4_s18 ? (64u + sizeof(_g4_t_v40)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);

  v4 = self;
  if ( a4 != nullptr )
  {
    hkVersionReporter::sendStructureLayout((hkVersionReporter::Self *)v38, a4);
    hkVersionReporter::sendVersionInformation((hkVersionReporter::Self *)v38, a4);
  }
  v5 = *((uint32_t *)self + 5);
  v6 = *((uint32_t *)self + 6) & 0x3FFFFFFF;
  v7 = v5 + 1;
  if ( v5 + 1 > v6 )
  {
    v8 = 2 * v6;
    v34 = *((uint32_t *)self + 5);
    if ( v8 >= v7 )
      v7 = v8;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v38,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)self + 4,
      v7,
      8);
    v7 = *((uint32_t *)self + 5) + 1;
    v5 = v34;
  }
  *((uint32_t *)self + 5) = v7;
  v30 = (uint32_t *)(*((uint32_t *)self + 4) + 8 * v5);
  *v30 = (uint32_t)(uintptr_t)(a2);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v35 = (*(int (**)(uint32_t, int, int, int, int, int, uint32_t *, int, uint32_t *, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
          *(uint32_t *)(*(uint32_t *)address + 44),
          84,
          v22,
          v23,
          v24,
          v25,
          v38,
          v28,
          v30,
          v32,
          v34,
          v38[0],
          v38[1],
          v38[2],
          v38[3]);
  hkServerProcessHandler::Construct(v35, (int)(uintptr_t)(self) + 28, a3, a4);
  v10 = 0;
  *(uint32_t *)(v31 + 4) = v35;
  v39 = (uint32_t *)v35;
  hkServerProcessHandler::registerAllAvailableProcesss(v27);
  v11 = self;
  if ( *((int *)self + 24) > 0 )
  {
    do
    {
      v36 = v11;
      v12 = (*(int (**)(uint32_t, unsigned int))(**(uint32_t **)(v31 + 4) + 44))(
              *(uint32_t *)(v31 + 4),
              *(uint32_t *)(*((uint32_t *)v11 + 23) + 4 * v10) & 0xFFFFFFFE);
      v11 = v36;
      if ( v12 >= 0 )
      {
        v13 = **(uint32_t **)(v31 + 4);
        v39 = *(uint32_t **)(v31 + 4);
        v40 = v12;
        (*(void (**)(hkServerProcessHandler::Self *))(v13 + 36))(v27);
        v14 = *(uint32_t **)(v31 + 4);
        v15 = *v14;
        v40 = v12;
        v39 = v14;
        (*(void (**)(hkServerProcessHandler::Self *))(v15 + 32))(v27);
        v11 = v36;
      }
      ++v10;
    }
    while ( *((uint32_t *)v11 + 24) > v10 );
    v4 = v11;
  }
  v29 = 0;
  if ( *((int *)v4 + 21) > 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = (*(int (**)(uint32_t, unsigned int))(**(uint32_t **)(v31 + 4) + 44))(
                *(uint32_t *)(v31 + 4),
                *(uint32_t *)(*((uint32_t *)v4 + 20) + 4 * v29) & 0xFFFFFFFE);
        if ( v26 >= 0 )
          break;
LABEL_21:
        if ( *((uint32_t *)v4 + 21) <= ++v29 )
          return hkVisualDebugger::writeStep(v4, *((uint32_t *)v4 + 5) - 1, 0.0);
      }
      v16 = (uint32_t *)(*((uint32_t *)v4 + 20) + 4 * v29);
      v33 = *((uint32_t *)v4 + 24);
      if ( v33 > 0 )
        break;
LABEL_25:
      v21 = **(uint32_t **)(v31 + 4);
      v39 = *(uint32_t **)(v31 + 4);
      v40 = v26;
      (*(void (**)(hkServerProcessHandler::Self *))(v21 + 32))(v27);
      if ( *((uint32_t *)v4 + 21) <= ++v29 )
        return hkVisualDebugger::writeStep(v4, *((uint32_t *)v4 + 5) - 1, 0.0);
    }
    v17 = 0;
    while ( 1 )
    {
      v18 = (hkString::Self *)(*(uint32_t *)(*((uint32_t *)v4 + 23) + 4 * v17) & 0xFFFFFFFE);
      if ( (*v16 & 0xFFFFFFFE) != 0 && v18 != nullptr )
      {
        v37 = v16;
        v19 = hkString::strCmp(v18, (char *)(*v16 & 0xFFFFFFFE));
        v16 = v37;
        if ( v19 == 0 )
          goto LABEL_21;
LABEL_17:
        if ( ++v17 == v33 )
          goto LABEL_25;
      }
      else
      {
        if ( v18 != nullptr )
          goto LABEL_17;
        if ( (*v16 & 0xFFFFFFFE) == 0 )
          goto LABEL_21;
        if ( ++v17 == v33 )
          goto LABEL_25;
      }
    }
  }
  return hkVisualDebugger::writeStep(v4, *((uint32_t *)v4 + 5) - 1, 0.0);
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::clearDefaultAndRequiredProcesses  (binary VA: 0x18d7660)
// Original: hkVisualDebugger::clearDefaultAndRequiredProcesses
// ----------------------------------------------------------------------------
void hkVisualDebugger::clearDefaultAndRequiredProcesses(hkVisualDebugger::Self *self)
{
  int v1;
  hkStringPtr::Self *v2;
  int v3;
  int v4;
  hkStringPtr::Self *v5;

  v1 = *((uint32_t *)self + 21) - 1;
  v2 = (hkStringPtr::Self *)(*((uint32_t *)self + 20) + 4 * v1);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v2 = (hkStringPtr::Self *)((char *)v2 - 4);
    }
    while ( v1 != -1 );
  }
  v3 = *((uint32_t *)self + 24);
  *((uint32_t *)self + 21) = 0;
  v4 = v3 - 1;
  v5 = (hkStringPtr::Self *)(*((uint32_t *)self + 23) + 4 * (v3 - 1));
  if ( v3 - 1 >= 0 )
  {
    do
    {
      --v4;
      hkStringPtr::Destroy(v5);
      v5 = (hkStringPtr::Self *)((char *)v5 - 4);
    }
    while ( v4 != -1 );
  }
  *((uint32_t *)self + 24) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::addDefaultProcess  (binary VA: 0x18d76f0)
// Original: hkVisualDebugger::addDefaultProcess
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkVisualDebugger::addDefaultProcess(hkVisualDebugger::Self *self, hkString::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = *((uint32_t *)self + 21);
  if ( v2 == (*((uint32_t *)self + 22) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkVisualDebugger::Self *)((char *)self + 80),
      4,
      v6);
    v2 = *((uint32_t *)self + 21);
  }
  hkStringPtr::Construct((hkStringPtr::Self *)(*((uint32_t *)self + 20) + 4 * v2));
  v3 = *((uint32_t *)self + 21);
  v4 = *((uint32_t *)self + 20);
  *((uint32_t *)self + 21) = v3 + 1;
  return hkStringPtr::opAssign((hkStringPtr::Self *)(v4 + 4 * v3), a2);
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::addRequiredProcess  (binary VA: 0x18d7780)
// Original: hkVisualDebugger::addRequiredProcess
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkVisualDebugger::addRequiredProcess(hkVisualDebugger::Self *self, hkString::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = *((uint32_t *)self + 24);
  if ( v2 == (*((uint32_t *)self + 25) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkVisualDebugger::Self *)((char *)self + 92),
      4,
      v6);
    v2 = *((uint32_t *)self + 24);
  }
  hkStringPtr::Construct((hkStringPtr::Self *)(*((uint32_t *)self + 23) + 4 * v2));
  v3 = *((uint32_t *)self + 24);
  v4 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 24) = v3 + 1;
  return hkStringPtr::opAssign((hkStringPtr::Self *)(v4 + 4 * v3), a2);
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::addTrackedObject  (binary VA: 0x18d7810)
// Original: hkVisualDebugger::addTrackedObject
// ----------------------------------------------------------------------------
int hkVisualDebugger::addTrackedObject(hkVisualDebugger::Self *self, void *a2, const hkClass::Self *a3, const char *a4, unsigned int a5)
{
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int result;
  int (*v10)(void *, const hkClass::Self *, int, unsigned int, int);
  int v11;
  int v12;
  int v13;

  v5 = *((uint32_t *)self + 11);
  if ( v5 == (*((uint32_t *)self + 12) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkVisualDebugger::Self *)((char *)self + 40),
      12,
      v12);
    v5 = *((uint32_t *)self + 11);
  }
  v6 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = v5 + 1;
  v7 = (uint32_t *)(v6 + 12 * v5);
  v8 = 0;
  *v7 = (uint32_t)(uintptr_t)(a2);
  v7[1] = (uint32_t)(uintptr_t)(a3);
  v7[2] = a5;
  result = *((uint32_t *)self + 14);
  if ( result > 0 )
  {
    do
    {
      v10 = *(int (**)(void *, const hkClass::Self *, int, unsigned int, int))(*((uint32_t *)self + 13) + 4 * v8);
      v13 = *(uint32_t *)(*((uint32_t *)self + 16) + 4 * v8);
      LOBYTE(v11) = 1;
      ++v8;
      result = v10(a2, a3, v11, a5, v13);
    }
    while ( *((uint32_t *)self + 14) > v8 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::removeTrackedObject  (binary VA: 0x18d78e0)
// Original: hkVisualDebugger::removeTrackedObject
// ----------------------------------------------------------------------------
int hkVisualDebugger::removeTrackedObject(hkVisualDebugger::Self *self, void *a2)
{
  hkVisualDebugger::Self *v2;
  int result;
  void **v4;
  int v5;
  void **v6;
  void **v7;
  hkVisualDebugger::Self *v8;
  int v9;
  int (*v10)(void *, uint32_t, int, uint32_t, int);
  int v11;
  int v12;
  void **v13;
  int v14;

  v2 = self;
  result = *((uint32_t *)self + 11);
  v14 = result;
  if ( result > 0 )
  {
    v4 = *((void ***)self + 10);
    v13 = v4;
    if ( *v4 == a2 )
    {
      v6 = *((void ***)self + 10);
      v5 = 0;
LABEL_8:
      *((uint32_t *)v2 + 11) = v14 - 1;
      if ( v5 != v14 - 1 )
      {
        v7 = &v13[3 * v14 - 3];
        *v6 = *v7;
        v6[1] = v7[1];
        v6[2] = v7[2];
      }
      result = 0;
      if ( *((int *)v2 + 14) > 0 )
      {
        v8 = v2;
        v9 = 0;
        do
        {
          v10 = *(int (**)(void *, uint32_t, int, uint32_t, int))(*((uint32_t *)v8 + 13) + 4 * v9);
          v12 = *(uint32_t *)(*((uint32_t *)v8 + 16) + 4 * v9);
          LOBYTE(v11) = 0;
          ++v9;
          result = v10(a2, 0, v11, 0, v12);
        }
        while ( *((uint32_t *)v8 + 14) > v9 );
      }
    }
    else
    {
      result = (int)(uintptr_t)(v4 + 3);
      v5 = 0;
      while ( ++v5 != v14 )
      {
        v6 = (void **)result;
        result += 12;
        if ( *(void **)(result - 12) == a2 )
        {
          v2 = self;
          goto LABEL_8;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::addTrackedObjectCallback  (binary VA: 0x18d79d0)
// Original: hkVisualDebugger::addTrackedObjectCallback
// ----------------------------------------------------------------------------
int hkVisualDebugger::addTrackedObjectCallback(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;

  v3 = a1[14];
  if ( v3 == (a1[15] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 13), 4, v7);
    v3 = a1[14];
  }
  *(uint32_t *)(a1[13] + 4 * v3) = a2;
  v4 = a1[17];
  v5 = a1[18] & 0x3FFFFFFF;
  ++a1[14];
  if ( v4 == v5 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 16), 4, v7);
    v4 = a1[17];
  }
  result = a1[16];
  *(uint32_t *)(result + 4 * v4) = a3;
  ++a1[17];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::removeTrackedObjectCallback  (binary VA: 0x18d7a80)
// Original: hkVisualDebugger::removeTrackedObjectCallback
// ----------------------------------------------------------------------------
void hkVisualDebugger::removeTrackedObjectCallback(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a1[14];
  if ( v2 > 0 )
  {
    v3 = (uint32_t *)a1[13];
    if ( *v3 == a2 )
    {
      v5 = 0;
      v4 = 0;
LABEL_8:
      v6 = v2 - 1;
      a1[14] = v6;
      if ( v4 != v6 )
        v3[v5] = v3[v6];
      v7 = a1[16];
      v8 = a1[17] - 1;
      a1[17] = v8;
      if ( v4 != v8 )
        *(uint32_t *)(v7 + v5 * 4) = *(uint32_t *)(v7 + 4 * v8);
    }
    else
    {
      v4 = 0;
      while ( ++v4 != v2 )
      {
        v5 = v4;
        if ( v3[v4] == a2 )
          goto LABEL_8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::getCurrentProcesses  (binary VA: 0x18d7af0)
// Original: hkVisualDebugger::getCurrentProcesses
// ----------------------------------------------------------------------------
int hkVisualDebugger::getCurrentProcesses(int a1, int *a2)
{
  int result;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int i;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v18)) > _g4_s4 ? (12u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v19)) > _g4_s5 ? (16u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v20)) > _g4_s6 ? (20u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v21)) > _g4_s7 ? (24u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v22)) > _g4_s8 ? (28u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v23)) > _g4_s9 ? (28u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v24)) > _g4_s10 ? (32u + sizeof(_g4_t_v24)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  v24[3] = (uint32_t)(uintptr_t)(&a1);
  v15 = a1;
  v21 = 0;
  result = *(uint32_t *)(a1 + 20);
  v16 = result;
  if ( result > 0 )
  {
    v20 = a2;
    do
    {
      v7 = *(uint32_t *)(*(uint32_t *)(v15 + 16) + 8 * v21 + 4);
      if ( v7 != 0 )
      {
        v8 = *(uint32_t *)(v7 + 64);
        v9 = *(uint32_t *)(v7 + 60);
        v10 = v20[1];
        v11 = v20[2] & 0x3FFFFFFF;
        v19 = v10 + v8;
        if ( v10 + v8 > v11 )
        {
          v23 = v8;
          v12 = 2 * v11;
          if ( v12 < v19 )
            v12 = v10 + v8;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v24,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v20,
            v12,
            4);
          v8 = v23;
        }
        v17 = v8;
        v3 = 4 * v10;
        hkMemUtil::memMove((hkMemUtil::Self *)(*v20 + 4 * v19), (char *)(v3 + *v20), 0);
        v4 = v17;
        v22 = v3 + *v20;
        if ( v17 > 0 )
        {
          if ( (v3 + *v20 >= v9 + 16 || v9 >= v3 + *v20 + 16) && (unsigned int)v17 > 0xB )
          {
            v5 = 0;
            v6 = 0;
            v18 = (unsigned int)v17 >> 2;
            v14 = 4 * (v4 >> 2);
            do
            {
              ++v6;
              *(__m128i *)(v22 + v5) = *(__m128i *)(v9 + v5);
              v5 += 16;
            }
            while ( v18 > v6 );
            if ( v4 != v14 )
            {
              *(uint32_t *)(v22 + 16 * (v4 >> 2)) = *(uint32_t *)(v9 + 16 * (v4 >> 2));
              if ( (int)v4 > v14 + 1 )
              {
                *(uint32_t *)(v22 + 4 * (v14 + 1)) = *(uint32_t *)(v9 + 4 * (v14 + 1));
                if ( (int)v4 > v14 + 2 )
                  *(uint32_t *)(v22 + 4 * (v14 + 2)) = *(uint32_t *)(v9 + 4 * (v14 + 2));
              }
            }
          }
          else
          {
            for ( i = 0; i != v17; ++i )
              *(uint32_t *)(v22 + 4 * i) = *(uint32_t *)(v9 + 4 * i);
          }
        }
        v20[1] = v19;
      }
      ++v21;
      result = v16;
    }
    while ( v21 != v16 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::removeContext  (binary VA: 0x18d7cd0)
// Original: hkVisualDebugger::removeContext
// ----------------------------------------------------------------------------
hkVisualDebugger::Self * hkVisualDebugger::removeContext(hkVisualDebugger::Self *self, hkProcessContext::Self *a2)
{
  hkVisualDebugger::Self *result;
  int v3;
  hkProcessContext::Self **v4;
  hkProcessContext::Self **v5;
  hkProcessContext::Self **v6;
  int v7;
  int v8;
  char *v9;
  int v10;

  result = self;
  v3 = *((uint32_t *)self + 8);
  if ( v3 > 0 )
  {
    v4 = *((hkProcessContext::Self ***)self + 7);
    if ( *v4 == a2 )
    {
      v6 = *((hkProcessContext::Self ***)self + 7);
      v7 = 4;
      result = nullptr;
LABEL_8:
      v8 = v3 - 1;
      v9 = (char *)v4 + v7;
      *((uint32_t *)self + 8) = v8;
      v10 = 4 * (v8 - (uint32_t)(uintptr_t)(result));
      if ( v10 > 0 )
      {
        for ( result = nullptr; (int)(uintptr_t)(result) < v10; result = (hkVisualDebugger::Self *)((char *)result + 4) )
          *(uint32_t *)((char *)result + (uint32_t)(uintptr_t)(v6)) = *(uint32_t *)((char *)result + (uint32_t)(uintptr_t)(v9));
      }
    }
    else
    {
      result = nullptr;
      v5 = v4 + 1;
      while ( 1 )
      {
        result = (hkVisualDebugger::Self *)((char *)result + 1);
        if ( result == (hkVisualDebugger::Self *)v3 )
          break;
        v6 = v5++;
        if ( *(v5 - 1) == a2 )
        {
          v7 = 4 * (uint32_t)(uintptr_t)(result) + 4;
          goto LABEL_8;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::getCurrentProcessByName  (binary VA: 0x18d7d50)
// Original: hkVisualDebugger::getCurrentProcessByName
// ----------------------------------------------------------------------------
int hkVisualDebugger::getCurrentProcessByName(hkVisualDebugger::Self *self, char *a2)
{
  int v2;
  int result;
  int savedregs;
  typedef int _g4_t_ProcessId;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_ProcessId)) > _g4_s0 ? (12u + sizeof(_g4_t_ProcessId)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v6)) > _g4_s2 ? (20u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v7)) > _g4_s3 ? (24u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v8)) > _g4_s4 ? (28u + sizeof(_g4_t_v8)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_ProcessId &ProcessId = *reinterpret_cast<_g4_t_ProcessId *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  ProcessId = hkProcessFactory::getProcessId(hkSingleton<hkProcessFactory::Self>::s_instance, a2);
  if ( ProcessId == -1 )
    return 0;
  v5 = 0;
  v6 = 0;
  v7 = 0x80000000;
  v2 = 0;
  hkVisualDebugger::getCurrentProcesses((int)(uintptr_t)(self), &v5);
  if ( v6 <= 0 )
  {
LABEL_8:
    v6 = 0;
    if ( v7 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v5,
        4 * v7);
    return 0;
  }
  while ( ProcessId != (*(int (**)(uint32_t))(**(uint32_t **)(v5 + 4 * v2) + 8))(*(uint32_t *)(v5 + 4 * v2)) )
  {
    if ( v6 <= ++v2 )
      goto LABEL_8;
  }
  result = *(uint32_t *)(v5 + 4 * v2);
  v6 = 0;
  if ( v7 >= 0 )
  {
    (*(void (**)(uint32_t *, int, int, int, int, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v5,
      4 * v7,
      result,
      v5,
      v6,
      v7,
      v8);
    return savedregs;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::Construct  (binary VA: 0x18d7e70)
// Original: hkVisualDebugger::hkVisualDebugger
// ----------------------------------------------------------------------------
int hkVisualDebugger::Construct(hkVisualDebugger::Self *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  typedef hkProcessRegisterUtil::Self *_g4_t_v8;
  typedef hkString::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[3];
  typedef uint8_t _g4_t_v12[540];
  enum : size_t {
    _g4_s0 = 656u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v12)) > _g4_s4 ? (48u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  v3 = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A8548);
  *((uint32_t *)a1 + 19) = a3;
  *((uint32_t *)a1 + 1) = -65535;
  *((uint32_t *)a1 + 2) = 0;
  *((uint8_t *)a1 + 12) = 0;
  *((uint32_t *)a1 + 4) = 0;
  *((uint32_t *)a1 + 5) = 0;
  *((uint32_t *)a1 + 6) = 0x80000000;
  *((uint32_t *)a1 + 7) = 0;
  *((uint32_t *)a1 + 8) = 0;
  *((uint32_t *)a1 + 9) = 0x80000000;
  *((uint32_t *)a1 + 10) = 0;
  *((uint32_t *)a1 + 11) = 0;
  *((uint32_t *)a1 + 12) = 0x80000000;
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 14) = 0;
  *((uint32_t *)a1 + 15) = 0x80000000;
  *((uint32_t *)a1 + 16) = 0;
  *((uint32_t *)a1 + 17) = 0;
  *((uint32_t *)a1 + 18) = 0x80000000;
  *((uint32_t *)a1 + 20) = 0;
  *((uint32_t *)a1 + 21) = 0;
  *((uint32_t *)a1 + 22) = 0x80000000;
  *((uint32_t *)a1 + 23) = 0;
  *((uint32_t *)a1 + 24) = 0;
  *((uint32_t *)a1 + 25) = 0x80000000;
  *((uint8_t *)a1 + 104) = 0;
  *((uint32_t *)a1 + 37) = (uint32_t)(uintptr_t)("Frame Timer");
  *((uint32_t *)a1 + 27) = 0;
  *((uint32_t *)a1 + 28) = 0;
  *((uint32_t *)a1 + 29) = 0;
  *((uint32_t *)a1 + 30) = 0;
  *((uint32_t *)a1 + 31) = 0;
  *((uint32_t *)a1 + 32) = 0;
  *((uint32_t *)a1 + 33) = 0;
  *((uint32_t *)a1 + 34) = 0;
  *((uint8_t *)a1 + 140) = 0;
  *((uint32_t *)a1 + 36) = 0;
  *((uint8_t *)a1 + 152) = 1;
  while ( a2[1] > v3 )
  {
    v9 = *(hkString::Self **)(*a2 + 4 * v3++);
    hkVisualDebugger::addContext(a1, (hkProcessContext::Self *)(v9));
  }
  (*(void (**)(uint32_t, int, const char *))(*hkSingleton<hkError::Self>::s_instance + 44))(
    (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
    311668207,
    "Visual Debugger");
  hkErrStream::Construct((hkErrStream::Self *)v11, (hkString::Self *)v12, 512);
  hkOstream::opShl((int)(uintptr_t)(v11), (hkString::Self *)"VDB Server instance has been created");
  hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v12), "hkVisualDebugger.cpp", (const char *)&dword_24 + 1, v10);
  hkErrStream::Destroy((hkErrStream::Self *)v11);
  hkProcessRegisterUtil::registerAllCommonProcesses(v8);
  hkVisualDebugger::addDefaultProcess(a1, (hkString::Self *)"Debug Display");
  hkVisualDebugger::addDefaultProcess(a1, (hkString::Self *)"Shapes");
  hkVisualDebugger::addDefaultProcess(a1, (hkString::Self *)"Mouse Picking");
  hkVisualDebugger::addDefaultProcess(a1, (hkString::Self *)"RemoteObject");
  v4 = *((uint32_t *)a1 + 19);
  if ( v4 != 0 && *(uint16_t *)(v4 + 6) != 0 )
  {
    do
    {
      v6 = *(uint32_t *)(v4 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v6, v5 | (uint16_t)(v6 + 1)) );
  }
  return (*(int (**)(uint32_t))(*hkSingleton<hkError::Self>::s_instance + 48))((uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance));
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::shutdown  (binary VA: 0x18d80f0)
// Original: hkVisualDebugger::shutdown
// ----------------------------------------------------------------------------
int hkVisualDebugger::shutdown(hkVisualDebugger::Self *self)
{
  int v1;
  int v2;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5[3];
  typedef int _g4_t_v6[135];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);

  (*(void (**)(uint32_t, int, const char *))(*hkSingleton<hkError::Self>::s_instance + 44))(
    (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
    311668207,
    "Shutting down Visual Debugger..");
  v1 = *((uint32_t *)self + 5) - 1;
  if ( v1 >= 0 )
  {
    do
    {
      hkVisualDebugger::writeStep(self, v1, 0.0);
      hkVisualDebugger::deleteClient(self, v1);
      hkErrStream::Construct((hkErrStream::Self *)v5, (hkString::Self *)v6, 512);
      --v1;
      hkOstream::opShl((int)(uintptr_t)(v5), (hkString::Self *)"Client deleted.");
      hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v6), "hkVisualDebugger.cpp", (const char *)&dword_54 + 2, v4);
      hkErrStream::Destroy((hkErrStream::Self *)v5);
    }
    while ( v1 != -1 );
  }
  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 4))(*((uint32_t *)self + 2));
    *((uint32_t *)self + 2) = 0;
    hkErrStream::Construct((hkErrStream::Self *)v5, (hkString::Self *)v6, 512);
    hkOstream::opShl((int)(uintptr_t)(v5), (hkString::Self *)"Server deleted.");
    hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v6), "hkVisualDebugger.cpp", (const char *)&dword_5C + 1, v4);
    hkErrStream::Destroy((hkErrStream::Self *)v5);
  }
  return (*(int (**)(uint32_t))(*hkSingleton<hkError::Self>::s_instance + 48))((uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance));
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::Destroy  (binary VA: 0x18d8270)
// Original: hkVisualDebugger::~hkVisualDebugger
// ----------------------------------------------------------------------------
void hkVisualDebugger::Destroy(hkVisualDebugger::Self *self)
{
  int v1;
  int v2;
  int v3;
  hkStringPtr::Self *v4;
  int v5;
  int v6;
  int v7;
  hkStringPtr::Self *v8;
  int v9;
  int v10;
  int32_t v11; // kr00_4
  int32_t v12;
  int32_t v13; // ett
  int v14;
  hkStringPtr::Self *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  hkStringPtr::Self *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v1 = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8548);
  hkVisualDebugger::shutdown(self);
  if ( *((int *)self + 8) > 0 )
  {
    do
    {
      v2 = *(uint32_t *)(*((uint32_t *)self + 7) + 4 * v1++);
      G4_VCALL<void>(v2, 12, 0);
    }
    while ( *((uint32_t *)self + 8) > v1 );
  }
  v3 = *((uint32_t *)self + 21) - 1;
  v4 = (hkStringPtr::Self *)(*((uint32_t *)self + 20) + 4 * v3);
  if ( v3 >= 0 )
  {
    do
    {
      --v3;
      hkStringPtr::Destroy(v4);
      v4 = (hkStringPtr::Self *)((char *)v4 - 4);
    }
    while ( v3 != -1 );
  }
  v5 = *((uint32_t *)self + 23);
  v6 = *((uint32_t *)self + 24);
  *((uint32_t *)self + 21) = 0;
  v7 = v6 - 1;
  v8 = (hkStringPtr::Self *)(v5 + 4 * v7);
  if ( v7 >= 0 )
  {
    do
    {
      --v7;
      hkStringPtr::Destroy(v8);
      v8 = (hkStringPtr::Self *)((char *)v8 - 4);
    }
    while ( v7 != -1 );
  }
  v9 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 24) = 0;
  if ( v9 != 0 && *(uint16_t *)(v9 + 6) != 0 )
  {
    do
    {
      v11 = *(uint32_t *)(v9 + 4);
      HIWORD(v10) = HIWORD(v11);
      LOWORD(v10) = 0;
      v12 = v10 | (uint16_t)(v11 - 1);
      v13 = v11;
    }
    while ( v13 != __sync_val_compare_and_swap((volatile int32_t *)(v9 + 4), v13, v12) );
    if ( (uint16_t)v12 == 0 )
      G4_VCALL<void>(v9, 16);
    v14 = *((uint32_t *)self + 24) - 1;
    if ( v14 >= 0 )
    {
      v15 = (hkStringPtr::Self *)(*((uint32_t *)self + 23) + 4 * v14);
      do
      {
        --v14;
        hkStringPtr::Destroy(v15);
        v15 = (hkStringPtr::Self *)((char *)v15 - 4);
      }
      while ( v14 != -1 );
    }
  }
  v16 = *((uint32_t *)self + 25);
  *((uint32_t *)self + 24) = 0;
  if ( v16 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 23),
      4 * v16);
  v17 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 23) = 0;
  v18 = v17;
  v19 = *((uint32_t *)self + 20);
  v20 = v18 - 1;
  *((uint32_t *)self + 25) = 0x80000000;
  v21 = (hkStringPtr::Self *)(v19 + 4 * v20);
  if ( v20 >= 0 )
  {
    do
    {
      --v20;
      hkStringPtr::Destroy(v21);
      v21 = (hkStringPtr::Self *)((char *)v21 - 4);
    }
    while ( v20 != -1 );
  }
  v22 = *((uint32_t *)self + 22);
  *((uint32_t *)self + 21) = 0;
  if ( v22 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 20),
      4 * v22);
  v23 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 22) = 0x80000000;
  *((uint32_t *)self + 17) = 0;
  if ( v23 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 16),
      4 * v23);
  v24 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint32_t *)self + 14) = 0;
  if ( v24 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 13),
      4 * v24);
  v25 = *((uint32_t *)self + 12);
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0x80000000;
  *((uint32_t *)self + 11) = 0;
  if ( v25 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 10),
      12 * v25);
  v26 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 12) = 0x80000000;
  *((uint32_t *)self + 8) = 0;
  if ( v26 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 7),
      4 * v26);
  v27 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
  *((uint32_t *)self + 5) = 0;
  if ( v27 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      8 * v27);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::Destroy_ea18d8580  (binary VA: 0x18d8580)
// Original: hkVisualDebugger::~hkVisualDebugger
// ----------------------------------------------------------------------------
void hkVisualDebugger::Destroy_ea18d8580(hkVisualDebugger::Self *self)
{
  int v1;
  int v2;

  hkVisualDebugger::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 156;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::serve  (binary VA: 0x18d85e0)
// Original: hkVisualDebugger::serve
// ----------------------------------------------------------------------------
int hkVisualDebugger::serve(hkVisualDebugger::Self *self, char *a2)
{
  hkVisualDebugger::Self *v2;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int32_t v10; // kr00_4
  int32_t v11;
  int32_t v12; // ett
  const char *savedregs;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[3];
  typedef uint32_t _g4_t_v15[134];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);

  v2 = self;
  (*(void (**)(uint32_t, int, const char *))(*hkSingleton<hkError::Self>::s_instance + 44))(
    (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
    311668200,
    "Serving");
  if ( *((uint32_t *)self + 2) == 0 )
  {
    v4 = (int *)G4_MEM_CALL((uintptr_t)(hkSocket::create));
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v4);
    if ( v4 != nullptr )
    {
      v5 = *v4;
      v15[132] = (uint32_t)(uintptr_t)(v4);
      v15[133] = (uint32_t)(uintptr_t)(a2);
      (*(void (**)(int *))(v5 + 40))(&v13);
      if ( v13 == 0 )
      {
        hkErrStream::Construct((hkErrStream::Self *)v14, (hkString::Self *)v15, 512);
        v6 = hkOstream::opShl((int)(uintptr_t)(v14), (hkString::Self *)"Server created and will poll for new client(s) on port ");
        v7 = hkOstream::opShl(v6, a2);
        hkOstream::opShl(v7, (hkString::Self *)" every frame");
        savedregs = (const char *)(dword_6C + 3);
        goto LABEL_3;
      }
      v8 = *((uint32_t *)self + 2);
      if ( *(uint16_t *)(v8 + 6) != 0 )
      {
        do
        {
          v10 = *(uint32_t *)(v8 + 4);
          HIWORD(v9) = HIWORD(v10);
          LOWORD(v9) = 0;
          v11 = v9 | (uint16_t)(v10 - 1);
          v12 = v10;
        }
        while ( v12 != __sync_val_compare_and_swap((volatile int32_t *)(v8 + 4), v12, v11) );
        v2 = self;
        if ( (uint16_t)v11 == 0 )
          G4_VCALL<void>(v8, 16);
      }
      *((uint32_t *)v2 + 2) = 0;
    }
    hkErrStream::Construct((hkErrStream::Self *)v14, (hkString::Self *)v15, 512);
    hkOstream::opShl(
      (int)(uintptr_t)(v14),
      (hkString::Self *)"Server could not be created, please check that you platform supports sockets with the hkBase library");
    savedregs = (const char *)((uint8_t *)(&dword_78 + 2));
    goto LABEL_3;
  }
  hkErrStream::Construct((hkErrStream::Self *)v14, (hkString::Self *)v15, 512);
  hkOstream::opShl(
    (int)(uintptr_t)(v14),
    (hkString::Self *)"Server has already been created, only one server allowed per visual debugger instance");
  savedregs = (char *)off_7C + 3;
LABEL_3:
  hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v15), "hkVisualDebugger.cpp", savedregs);
  hkErrStream::Destroy((hkErrStream::Self *)v14);
  return (*(int (**)(uint32_t))(*hkSingleton<hkError::Self>::s_instance + 48))((uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance));
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::capture  (binary VA: 0x18d87f0)
// Original: hkVisualDebugger::capture
// ----------------------------------------------------------------------------
int hkVisualDebugger::capture(hkVisualDebugger::Self *self, hkString::Self *a2)
{
  hkString::Self *v2;
  hkVisualDebugger::Self *v3;
  hkStreamWriter::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  hkStreamWriter::Self *v10;
  int result;
  hkString::Self *v12;
  int v13;
  int32_t v14; // kr00_4
  int32_t v15;
  int32_t v16; // ett
  int v17;
  int v18;
  typedef hkErrStream::Self *_g4_t_v19;
  typedef hkStreamWriter::Self *_g4_t_v20;
  typedef hkString::Self *_g4_t_v21;
  typedef char _g4_t_v22;
  typedef hkStreamWriter::Self *_g4_t_v23;
  typedef int _g4_t_v24[3];
  typedef hkString::Self *_g4_t_v25[2];
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef uint32_t _g4_t_v28[134];
  enum : size_t {
    _g4_s0 = 784u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v21)) > _g4_s2 ? (8u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v22)) > _g4_s3 ? (15u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v24)) > _g4_s5 ? (24u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v25)) > _g4_s6 ? (36u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v26)) > _g4_s7 ? (44u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v27)) > _g4_s8 ? (48u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (180u + sizeof(_g4_t_v28)) > _g4_s9 ? (180u + sizeof(_g4_t_v28)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 15u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 180u);

  v28[130] = (uint32_t)(uintptr_t)(&self);
  v2 = a2;
  v3 = self;
  (*(void (**)(uint32_t, int, const char *))(*hkSingleton<hkError::Self>::s_instance + 44))(
    (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
    311668199,
    "Capturing");
  (*(void (**)(hkStreamWriter::Self **, uint32_t, hkString::Self *, int))(*hkSingleton<hkFileSystem::Self>::s_instance + 24))(
    &v23,
    (uint32_t)(uintptr_t)(hkSingleton<hkFileSystem::Self>::s_instance),
    v2,
    3);
  v4 = v23;
  if ( v23 != nullptr
    && (v5 = *(uint32_t *)v23,
        v28[131] = (uint32_t)(uintptr_t)(v23),
        v20 = v23,
        (*(void (**)(char *))(v5 + 20))(&v22),
        v4 = v20,
        v22 != 0) )
  {
    hkErrStream::Construct((hkErrStream::Self *)v25, (hkString::Self *)v28, 512);
    v6 = hkOstream::opShl((int)(uintptr_t)(v25), (hkString::Self *)"Capturing simulation state to '");
    v7 = hkOstream::opShl(v6, v2);
    hkOstream::opShl(v7, (hkString::Self *)a0);
    hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v28), "hkVisualDebugger.cpp", (const char *)&dword_A8 + 3);
    hkErrStream::Destroy((hkErrStream::Self *)v25);
    hkVisualDebugger::createClient(v3, nullptr, nullptr, v20);
    v8 = *((uint32_t *)v3 + 5);
    v9 = *((uint32_t *)v3 + 4);
    v26 = -2147483520;
    v27 = 0;
    v25[0] = (hkString::Self *)&v27;
    hkVisualDebugger::createRequiredAndDefaultProcessList((int *)v3, v9 + 8 * v8 - 8, (hkStringBuf::Self *)v25);
    hkErrStream::Construct((hkErrStream::Self *)v24, (hkString::Self *)v28, 512);
    hkOstream::opShl((int)(uintptr_t)(v24), v25[0]);
    hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v28), "hkVisualDebugger.cpp", (const char *)&dword_B4 + 2);
    hkErrStream::Destroy((hkErrStream::Self *)v24);
    v25[1] = nullptr;
    v10 = v20;
    if ( v26 >= 0 )
    {
      (*(void (**)(uint32_t *, hkString::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
        (uint32_t *)(hkContainerTempAllocator::s_alloc),
        v25[0],
        v26 & 0x3FFFFFFF);
      v10 = v20;
    }
    v21 = (hkString::Self *)(v10);
    result = (*(int (**)(uint32_t))(*hkSingleton<hkError::Self>::s_instance + 48))((uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance));
    v12 = v21;
  }
  else
  {
    v19 = (hkErrStream::Self *)(v4);
    hkErrStream::Construct((hkErrStream::Self *)v25, (hkString::Self *)v28, 512);
    v17 = hkOstream::opShl((int)(uintptr_t)(v25), (hkString::Self *)"Capture file '");
    v18 = hkOstream::opShl(v17, v2);
    hkOstream::opShl(v18, (hkString::Self *)"' could not be opened for writing");
    hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v28), "hkVisualDebugger.cpp", &dword_B8[2]);
    hkErrStream::Destroy((hkErrStream::Self *)v25);
    result = (*(int (**)(uint32_t))(*hkSingleton<hkError::Self>::s_instance + 48))((uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance));
    v12 = (hkString::Self *)(v19);
    if ( v19 == nullptr )
      return result;
  }
  if ( *((uint16_t *)v12 + 3) != 0 )
  {
    do
    {
      v14 = *((uint32_t *)v12 + 1);
      HIWORD(v13) = HIWORD(v14);
      LOWORD(v13) = 0;
      v15 = v13 | (uint16_t)(v14 - 1);
      v16 = v14;
      result = __sync_val_compare_and_swap((volatile int32_t *)v12 + 1, v16, v15);
    }
    while ( v16 != result );
    if ( (uint16_t)v15 == 0 )
      return G4_VCALL<int>(v12, 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::capture  (binary VA: 0x18d8b70)
// Original: hkVisualDebugger::capture
// ----------------------------------------------------------------------------
int hkVisualDebugger::capture(hkVisualDebugger::Self *self, hkMemoryTrack::Self *a2, hkMemoryTrack::Self *a3)
{
  int address;
  volatile int32_t *v4;
  int v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int StreamWriter;
  typedef int _g4_t_v18;
  typedef hkVisualDebugger::Self *_g4_t_v19;
  typedef hkErrStream::Self *_g4_t_v20;
  typedef hkString::Self *_g4_t_v21;
  typedef uint8_t _g4_t_v22[5];
  typedef int _g4_t_v23[3];
  typedef hkString::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef uint32_t _g4_t_v28[134];
  enum : size_t {
    _g4_s0 = 784u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (23u + sizeof(_g4_t_v22)) > _g4_s4 ? (23u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v24)) > _g4_s6 ? (40u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v25)) > _g4_s7 ? (44u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v26)) > _g4_s8 ? (48u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v27)) > _g4_s9 ? (52u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (184u + sizeof(_g4_t_v28)) > _g4_s10 ? (184u + sizeof(_g4_t_v28)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 23u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 184u);

  v28[130] = (uint32_t)(uintptr_t)(&self);
  v19 = self;
  v21 = (hkString::Self *)(a2);
  v20 = (hkErrStream::Self *)(a3);
  (*(void (**)(uint32_t, int, const char *))(*hkSingleton<hkError::Self>::s_instance + 44))(
    (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
    -1094779196,
    "Capturing to memory stream");
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v4 = (volatile int32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                    *(uint32_t *)(*(uint32_t *)address + 44),
                                    16);
  *((uint32_t *)v4 + 1) = -65535;
  *v4 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2097A48);
  *((uint32_t *)v4 + 2) = (uint32_t)(uintptr_t)(v21);
  *((uint32_t *)v4 + 3) = 1;
  v5 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         24);
  hkMemoryTrackStreamReader::Construct(v5, (int)(uintptr_t)(v20), 2, 1);
  (*(void (**)(uint8_t *, volatile int32_t *))(*v4 + 20))(v22, v4);
  if ( v22[0] != 0
    && v5 != 0
    && (v6 = *(uint32_t *)v5, v28[131] = v5, (*(void (**)(uint8_t *))(v6 + 20))(v22), v22[0] != 0) )
  {
    hkErrStream::Construct((hkErrStream::Self *)&v24, (hkString::Self *)v28, 512);
    hkOstream::opShl((int)(uintptr_t)(&v24), (hkString::Self *)"Capturing simulation state to memory stream.");
    hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v28), "hkVisualDebugger.cpp", (const char *)&dword_C8);
    hkErrStream::Destroy((hkErrStream::Self *)&v24);
    hkVisualDebugger::createClient(v19, nullptr, (hkStreamReader::Self *)v5, (hkStreamWriter::Self *)v4);
    if ( *((uint16_t *)v4 + 3) != 0 )
    {
      v18 = v5;
      do
      {
        v8 = *((uint32_t *)v4 + 1);
        HIWORD(v7) = HIWORD(v8);
        LOWORD(v7) = 0;
        v9 = v7 | (uint16_t)(v8 - 1);
        v10 = v8;
      }
      while ( v10 != __sync_val_compare_and_swap(v4 + 1, v10, v9) );
      v5 = v18;
      if ( (uint16_t)v9 == 0 )
        G4_VCALL<void>(v4, 16);
    }
    if ( *(uint16_t *)(v5 + 6) != 0 )
    {
      do
      {
        v12 = *(uint32_t *)(v5 + 4);
        HIWORD(v11) = HIWORD(v12);
        LOWORD(v11) = 0;
        v13 = v11 | (uint16_t)(v12 - 1);
        v14 = v12;
      }
      while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v14, v13) );
      if ( (uint16_t)v13 == 0 )
        G4_VCALL<void>(v5, 16);
    }
    v26 = -2147483520;
    v25 = 1;
    v27 = 0;
    v15 = *((uint32_t *)v19 + 4) + 8 * *((uint32_t *)v19 + 5) - 8;
    v24 = (hkString::Self *)&v27;
    hkVisualDebugger::createRequiredAndDefaultProcessList((int *)v19, v15, (hkStringBuf::Self *)&v24);
    hkErrStream::Construct((hkErrStream::Self *)v23, (hkString::Self *)v28, 512);
    hkOstream::opShl((int)(uintptr_t)(v23), v24);
    hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v28), "hkVisualDebugger.cpp", (const char *)&dword_D4 + 1);
    hkErrStream::Destroy((hkErrStream::Self *)v23);
    StreamWriter = hkOArchive::getStreamWriter(*(hkOArchive::Self **)(*(uint32_t *)(v15 + 4) + 24));
    G4_VCALL<void>(StreamWriter, 28);
    v25 = 0;
    if ( v26 >= 0 )
      (*(void (**)(uint32_t *, hkString::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
        (uint32_t *)(hkContainerTempAllocator::s_alloc),
        v24,
        v26 & 0x3FFFFFFF);
  }
  else
  {
    hkErrStream::Construct((hkErrStream::Self *)&v24, (hkString::Self *)v28, 512);
    hkOstream::opShl((int)(uintptr_t)(&v24), (hkString::Self *)"Could not create memory stream for writing.");
    hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v28), "hkVisualDebugger.cpp", dword_DC);
    hkErrStream::Destroy((hkErrStream::Self *)&v24);
  }
  return (*(int (**)(uint32_t))(*hkSingleton<hkError::Self>::s_instance + 48))((uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance));
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::pollForNewClients  (binary VA: 0x18d9080)
// Original: hkVisualDebugger::pollForNewClients
// ----------------------------------------------------------------------------
hkVisualDebugger::Self * hkVisualDebugger::pollForNewClients(hkVisualDebugger::Self *self)
{
  hkVisualDebugger::Self *result;

  result = self;
  if ( *((uint8_t *)self + 12) == 0 )
    return (hkVisualDebugger::Self *)sub_18D8F40((int)(uintptr_t)(self));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::step  (binary VA: 0x18d90a0)
// Original: hkVisualDebugger::step
// ----------------------------------------------------------------------------
hkVisualDebugger::Self * hkVisualDebugger::step(hkVisualDebugger::Self *self, float a2, int a3, int a4, ...)
{
  hkVisualDebugger::Self *v4;
  int v5;
  int v6;
  char v7;
  float v8;
  hkVisualDebugger::Self *result;
  int v10;
  int v11;
  int64_t v13; // rax
  hkVisualDebugger::Self *v14;
  int64_t v15; // rax
  int64_t v16; // rax
  int64_t v17;
  int v18;
  float v19;
  int v20;
  va_list va;
  int v22;
  int v23;
  va_list va1;
  int64_t v25; // 0:esi.4,4:edi.4
  int64_t v26; // 0:esi.4,4:edi.4

  va_start(va1, a4);
  va_start(va, a4);
  v20 = va_arg(va1, uint32_t);
  v22 = va_arg(va1, uint32_t);
  v23 = va_arg(va1, uint32_t);
  v4 = self;
  if ( *((uint8_t *)self + 104) != 0 )
  {
    LODWORD(v17) = hkStopwatch::getTicksPerSecond();
    HIDWORD(v17) = v11;
    v25 = *(uint64_t *)((char *)self + 116);
    if ( *((uint8_t *)self + 140) != 0 )
    {
      LODWORD(v16) = hkStopwatch::getTickCounter();
      v25 = v16 + v25 - *(uint64_t *)((char *)self + 108);
    }
    hkStopwatch::divide64(v25, v17);
    LODWORD(v13) = hkStopwatch::getTickCounter();
    v14 = self;
    *((uint8_t *)self + 140) = 0;
    v26 = *(uint64_t *)((char *)v14 + 116) + v13 - *(uint64_t *)((char *)v14 + 108);
    v15 = *(uint64_t *)((char *)v14 + 132) + v13 - *(uint64_t *)((char *)v14 + 124);
    *((uint32_t *)self + 33) = v15;
    *(uint64_t *)((char *)self + 116) = v26;
    *((uint32_t *)self + 34) = HIDWORD(v15);
    ++*((uint32_t *)self + 36);
    v4 = self;
  }
  *((uint8_t *)v4 + 104) = 1;
  G4_VCALL<void>(self, 24);
  v5 = *((uint32_t *)self + 5) - 1;
  v6 = 8 * v5;
  if ( v5 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        LODWORD(v19) = *((uint32_t *)self + 4) + v6;
        v7 = G4_VCALL<int>(*(uint32_t *)(LODWORD(v19) + 4) + 12, 24);
        v8 = v19;
        if ( v7 != 0 )
        {
          (*(void (**)(uint32_t, float))(**(uint32_t **)(LODWORD(v19) + 4) + 60))(
            *(uint32_t *)(LODWORD(v19) + 4),
            COERCE_FLOAT(LODWORD(v19)));
          hkVisualDebugger::writeStep(self, v5, v19);
          v8 = v19;
        }
        if ( G4_VCALL<uint8_t>(*(uint32_t *)(LODWORD(v8) + 4) + 12, 24) == 0 )
          break;
        --v5;
        v6 -= 8;
        if ( v5 == -1 )
          goto LABEL_9;
      }
      v6 -= 8;
      (*(void (**)(uint32_t, int, const char *))(*hkSingleton<hkError::Self>::s_instance + 44))(
        (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
        1994630722,
        "Client Dies");
      va_copy(va, va1);
      hkErrStream::Construct(g4_va_cast<hkErrStream::Self *>(va), g4_va_cast<hkString::Self *>(va1), 512);
      hkOstream::opShl(((int)(uintptr_t)g4_va_cast<void *>(va)), (hkString::Self *)"Client has died, cleaning up (host name not available at present)");
      hkError::messageReport((hkError::Self *)0xFFFFFFFF, ((int)(uintptr_t)g4_va_cast<void *>(va1)), "hkVisualDebugger.cpp", (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_164)->st_info);
      hkErrStream::Destroy(g4_va_cast<hkErrStream::Self *>(va));
      (*(void (**)(uint32_t))(*hkSingleton<hkError::Self>::s_instance + 48))((uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance));
      v18 = v5--;
      hkVisualDebugger::deleteClient(g4_va_cast<hkVisualDebugger::Self *>(va1), v18);
    }
    while ( v5 != -1 );
  }
LABEL_9:
  result = self;
  if ( *((uint8_t *)self + 104) != 0 )
  {
    *((uint32_t *)self + 27) = 0;
    *((uint32_t *)self + 28) = 0;
    *((uint32_t *)self + 29) = 0;
    *((uint32_t *)self + 30) = 0;
    *((uint32_t *)self + 31) = 0;
    *((uint32_t *)self + 32) = 0;
    *((uint32_t *)self + 33) = 0;
    *((uint32_t *)self + 34) = 0;
    *((uint32_t *)self + 36) = 0;
    *((uint8_t *)self + 140) = 1;
    result = (hkVisualDebugger::Self *)hkStopwatch::getTickCounter();
    *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)(result);
    *((uint32_t *)self + 28) = v10;
    *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(result);
    *((uint32_t *)self + 32) = v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVisualDebugger::removeDefaultProcess  (binary VA: 0x18d93d0)
// Original: hkVisualDebugger::removeDefaultProcess
// ----------------------------------------------------------------------------
int hkVisualDebugger::removeDefaultProcess(hkVisualDebugger::Self *self, hkString::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  typedef int _g4_t_v12[3];
  typedef int _g4_t_v13[135];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  v2 = 0;
  if ( *((int *)self + 21) > 0 )
  {
    while ( 1 )
    {
      v3 = 4 * v2;
      if ( hkString::strCmp((hkString::Self *)(*(uint32_t *)(*((uint32_t *)self + 20) + 4 * v2) & 0xFFFFFFFE), (char *)a2) == 0 )
        break;
      if ( *((uint32_t *)self + 21) <= ++v2 )
        goto LABEL_8;
    }
    hkStringPtr::Destroy((hkStringPtr::Self *)(v3 + *((uint32_t *)self + 20)));
    v4 = *((uint32_t *)self + 20);
    v5 = *((uint32_t *)self + 21) - 1;
    v6 = v4 + v3;
    *((uint32_t *)self + 21) = v5;
    v7 = 4 * (v5 - v2);
    v8 = v4 + 4 * v2 + 4;
    for ( result = 0; v7 > result; result += 4 )
      *(uint32_t *)(v6 + result) = *(uint32_t *)(v8 + result);
  }
  else
  {
LABEL_8:
    (*(void (**)(uint32_t, int, const char *))(*hkSingleton<hkError::Self>::s_instance + 44))(
      (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
      1985369172,
      "removeDefaultProcess");
    hkErrStream::Construct((hkErrStream::Self *)v12, (hkString::Self *)v13, 512);
    v10 = hkOstream::opShl((int)(uintptr_t)(v12), (hkString::Self *)"The default Process'");
    v11 = hkOstream::opShl(v10, a2);
    hkOstream::opShl(
      v11,
      (hkString::Self *)"', cannot not be removed from the default process list as it cannot be found!");
    hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v13), "hkVisualDebugger.cpp", (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_name + 2);
    hkErrStream::Destroy((hkErrStream::Self *)v12);
    return (*(int (**)(uint32_t))(*hkSingleton<hkError::Self>::s_instance + 48))((uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkProcessHandler::Destroy  (binary VA: 0x18d9540)
// Original: hkProcessHandler::~hkProcessHandler
// ----------------------------------------------------------------------------
void hkProcessHandler::Destroy(hkProcessHandler::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A85E8);
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::getProcessTag  (binary VA: 0x18d9560)
// Original: hkServerProcessHandler::getProcessTag
// ----------------------------------------------------------------------------
int hkServerProcessHandler::getProcessTag()
{
  return hkServerProcessHandler::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::getConsumableCommands  (binary VA: 0x18d9590)
// Original: hkServerProcessHandler::getConsumableCommands
// ----------------------------------------------------------------------------
int * hkServerProcessHandler::getConsumableCommands(hkServerProcessHandler::Self *self, uint8_t **a2, int *a3)
{
  *a2 = (uint8_t *)&unk_20CB440;
  *a3 = 2;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkProcessHandler::Destroy_ea18d95d0  (binary VA: 0x18d95d0)
// Original: hkProcessHandler::~hkProcessHandler
// ----------------------------------------------------------------------------
void hkProcessHandler::Destroy_ea18d95d0(hkProcessHandler::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A85E8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::getProcessId  (binary VA: 0x18d9600)
// Original: hkServerProcessHandler::getProcessId
// ----------------------------------------------------------------------------
int hkServerProcessHandler::getProcessId(hkServerProcessHandler::Self *self, char *a2)
{
  return hkProcessFactory::getProcessId(hkSingleton<hkProcessFactory::Self>::s_instance, a2);
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::getProcessName  (binary VA: 0x18d9640)
// Original: hkServerProcessHandler::getProcessName
// ----------------------------------------------------------------------------
int hkServerProcessHandler::getProcessName(hkServerProcessHandler::Self *self, int a2)
{
  return hkProcessFactory::getProcessName(hkSingleton<hkProcessFactory::Self>::s_instance, a2);
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::selectProcess  (binary VA: 0x18d9680)
// Original: hkServerProcessHandler::selectProcess
// ----------------------------------------------------------------------------
hkServerProcessHandler::Self * hkServerProcessHandler::selectProcess(hkServerProcessHandler::Self *self, int a2, int a3)
{
  hkOArchive::write32(*(hkOArchive::Self **)(a2 + 24), 5);
  hkOArchive::write8u(*(hkOArchive::Self **)(a2 + 24), 0xC1u);
  hkOArchive::write32(*(hkOArchive::Self **)(a2 + 24), a3);
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::registerProcess  (binary VA: 0x18d9700)
// Original: hkServerProcessHandler::registerProcess
// ----------------------------------------------------------------------------
hkServerProcessHandler::Self * hkServerProcessHandler::registerProcess(hkServerProcessHandler::Self *self, hkOArchive::Self **a2, hkString::Self *a3, int a4)
{
  int v4;
  signed int v5;

  v4 = 0xFFFF;
  v5 = hkString::strLen(a3);
  if ( v5 <= 0xFFFF )
    v4 = v5;
  hkOArchive::write32(a2[6], v4 + 7);
  hkOArchive::write8u(a2[6], 0xC0u);
  hkOArchive::write32(a2[6], a4);
  hkOArchive::write16u(a2[6], v4);
  hkOArchive::writeRaw(a2[6], a3, v4);
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::step  (binary VA: 0x18d97c0)
// Original: hkServerProcessHandler::step
// ----------------------------------------------------------------------------
int hkServerProcessHandler::step(hkServerProcessHandler::Self *self, float a2)
{
  hkServerProcessHandler::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int (*v9)(int, uint32_t, int, int, int, int, hkServerProcessHandler::Self *, uint32_t, uint32_t, uint32_t, uint32_t);
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef hkServerProcessHandler::Self *_g4_t_v15;
  typedef uint32_t _g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v16)) > _g4_s5 ? (20u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);

  v2 = self;
  v3 = *((uint32_t *)self + 16) - 1;
  v4 = 4 * v3;
  if ( v3 >= 0 )
  {
    do
    {
      --v3;
      v15 = v2;
      v5 = *(uint32_t *)(*((uint32_t *)v2 + 15) + v4);
      v4 -= 4;
      G4_VCALL<void>(v5, 32, LODWORD(a2));
      v2 = v15;
    }
    while ( v3 != -1 );
  }
  if ( *((uint32_t *)v2 + 5) != 0 )
  {
    v11 = *((uint32_t *)v2 + 5);
    v15 = v2;
    hkCommandRouter::consumeCommands((hkCommandRouter::Self *)((char *)v16 + 3), (hkServerProcessHandler::Self *)((char *)v2 + 36));
    v2 = v15;
  }
  v6 = *((uint32_t *)v2 + 7);
  if ( v6 != 0 )
  {
    v7 = *(uint32_t *)(v6 - 32);
    v8 = v6 - 32;
    v9 = *(int (**)(int, uint32_t, int, int, int, int, hkServerProcessHandler::Self *, uint32_t, uint32_t, uint32_t, uint32_t))(v7 + 144);
  }
  else
  {
    v9 = (int (*)(int, uint32_t, int, int, int, int, hkServerProcessHandler::Self *, uint32_t, uint32_t, uint32_t, uint32_t))G4_MEM<uintptr_t>(0x464C460F);
    v8 = 0;
  }
  return v9(v8, LODWORD(a2), v11, v12, v13, v14, v15, v16[0], v16[1], v16[2], v16[3]);
}

// ----------------------------------------------------------------------------
// Function: hkCommandRouter::Destroy  (binary VA: 0x18d9890)
// Original: hkCommandRouter::~hkCommandRouter
// ----------------------------------------------------------------------------
void hkCommandRouter::Destroy(hkCommandRouter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A85B0);
  hkMultiMap_unsigned_long_unsigned_l_56398e::Destroy((hkCommandRouter::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::Destroy  (binary VA: 0x18d98d0)
// Original: hkServerProcessHandler::~hkServerProcessHandler
// ----------------------------------------------------------------------------
void hkServerProcessHandler::Destroy(hkServerProcessHandler::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8628);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A8674);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A86A4);
  v1 = *((uint32_t *)self + 16) - 1;
  v2 = v1;
  v10 = 4 * v1;
  if ( v1 >= 0 )
  {
    while ( 1 )
    {
      v3 = *((uint32_t *)self + 15);
      v4 = *(uint32_t *)(v3 + v10);
      *((uint32_t *)self + 16) = v1;
      if ( v2 != v1 )
        *(uint32_t *)(v3 + v10) = *(uint32_t *)(v3 + 4 * v1);
      if ( v4 != 0 )
        G4_VCALL<void>(v4, 4);
      --v2;
      v10 -= 4;
      if ( v2 == -1 )
        break;
      v1 = *((uint32_t *)self + 16) - 1;
    }
  }
  v5 = *((uint32_t *)self + 5);
  if ( v5 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v5 + 4))(*((uint32_t *)self + 5));
  v6 = *((uint32_t *)self + 6);
  if ( v6 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v6 + 4))(*((uint32_t *)self + 6));
  v7 = *((uint32_t *)self + 7);
  if ( v7 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v7 + 4))(*((uint32_t *)self + 7));
  v8 = *((uint32_t *)self + 20);
  *((uint32_t *)self + 19) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 18),
      4 * v8);
  v9 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 20) = 0x80000000;
  *((uint32_t *)self + 16) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 15),
      4 * v9);
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0x80000000;
  *((uint32_t *)self + 9) = ((uint32_t)(uintptr_t)&off_20A85B0);
  hkMultiMap_unsigned_long_unsigned_l_56398e::Destroy((hkServerProcessHandler::Self *)((char *)self + 44));
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A3A48);
  *((uint32_t *)self + 9) = ((uint32_t)(uintptr_t)&off_2054CB8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A85E8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::consumeCommand  (binary VA: 0x18d9a60)
// Original: hkServerProcessHandler::consumeCommand
// ----------------------------------------------------------------------------
int hkServerProcessHandler::consumeCommand(hkIArchive::Self **self, int a2)
{
  int result;
  int v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[7];
  typedef uint8_t _g4_t_v8[13];
  typedef uint32_t _g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v7)) > _g4_s3 ? (16u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (23u + sizeof(_g4_t_v8)) > _g4_s4 ? (23u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v9)) > _g4_s5 ? (36u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 23u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);

  result = a2;
  if ( (uint8_t)a2 == 0xC2 )
  {
    hkIArchive::readArrayGeneric(*(self + 5), v9, 4, 1);
    result = (int)(uintptr_t)(hkIArchive::isOk((hkIArchive::Self *)v8));
    if ( v8[0] != 0 )
      return (*((int (**)(uint8_t *))*self + 9))(v7);
  }
  else if ( (uint8_t)a2 == 0xC3 )
  {
    hkIArchive::readArrayGeneric(*(self + 5), v9, 4, 1);
    v3 = v9[0];
    result = (int)(uintptr_t)(hkIArchive::isOk((hkIArchive::Self *)v8));
    if ( v8[0] != 0 )
      return (*((int (**)(uint8_t *, hkIArchive::Self **, int, int, int, int))*self + 10))(v7, self, v3, v4, v5, v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCommandRouter::Destroy_ea18d9b60  (binary VA: 0x18d9b60)
// Original: hkCommandRouter::~hkCommandRouter
// ----------------------------------------------------------------------------
void hkCommandRouter::Destroy_ea18d9b60(hkCommandRouter::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A85B0);
  hkMultiMap_unsigned_long_unsigned_l_56398e::Destroy((hkCommandRouter::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::Destroy_ea18d9be0  (binary VA: 0x18d9be0)
// Original: hkServerProcessHandler::~hkServerProcessHandler
// ----------------------------------------------------------------------------
void hkServerProcessHandler::Destroy_ea18d9be0(hkServerProcessHandler::Self *self)
{
  int v1;
  int v2;

  hkServerProcessHandler::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 84;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkServerProcessHandler::getProcessesByType  (binary VA: 0x18d9c60)
// Original: hkServerProcessHandler::getProcessesByType
// ----------------------------------------------------------------------------
int hkServerProcessHandler::getProcessesByType(int a1, int a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int result;
  uint32_t *v5;
  int v6;
  int v7;

  v3 = 0;
  *((uint32_t *)a3 + 1) = 0;
  result = *(uint32_t *)(a1 + 64);
  if ( result > 0 )
  {
    do
    {
      while ( 1 )
      {
        result = (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(a1 + 60) + 4 * v3) + 12))(*(uint32_t *)(*(uint32_t *)(a1 + 60) + 4 * v3));
        if ( result == a2 )
          break;
        if ( *(uint32_t *)(a1 + 64) <= ++v3 )
          return result;
      }
      v5 = (uint32_t *)(*(uint32_t *)(a1 + 60) + 4 * v3);
      v6 = *((uint32_t *)a3 + 1);
      if ( v6 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 4, v7);
        v6 = *((uint32_t *)a3 + 1);
      }
      ++v3;
      *(uint32_t *)(*(uint32_t *)a3 + 4 * v6) = *v5;
      result = (int)(uintptr_t)(a3);
      ++*((uint32_t *)a3 + 1);
    }
    while ( *(uint32_t *)(a1 + 64) > v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkProcessFactory::Construct  (binary VA: 0x18d9d30)
// Original: hkProcessFactory::hkProcessFactory
// ----------------------------------------------------------------------------
void hkProcessFactory::Construct(hkProcessFactory::Self *self)
{
  int address;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  pthread_mutexattr_t attr;
  int v10;
  int v11;
  int v12;
  pthread_mutex_t *v13;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A89E8);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (*(int (**)(uint32_t, int, int, int, int, int, int, int, pthread_mutexattr_t, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         8,
         v3,
         v4,
         v5,
         v6,
         v7,
         v8,
         attr,
         v10,
         v11,
         v12);
  *(uint32_t *)(v2 + 4) = 2000;
  v13 = (pthread_mutex_t *)v2;
  if ( pthread_mutexattr_init(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      16,
      "hkCriticalSection");
    perror("pthread_mutexattr_init(&attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_settype(&attr, 1) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      17,
      "hkCriticalSection");
    perror("pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE)");
    __builtin_debugtrap();
  }
  if ( pthread_mutex_init(v13, &attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      18,
      "hkCriticalSection");
    perror("pthread_mutex_init(&m_mutex, &attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_destroy(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      19,
      "hkCriticalSection");
    perror("pthread_mutexattr_destroy(&attr)");
    __builtin_debugtrap();
  }
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v13);
}

// ----------------------------------------------------------------------------
// Function: hkProcessFactory::registerProcess  (binary VA: 0x18e4090)
// Original: hkProcessFactory::registerProcess
// ----------------------------------------------------------------------------
int hkProcessFactory::registerProcess(int a1, char *a2, int a3)
{
  pthread_mutex_t *v3;
  unsigned int count;
  uint32_t *v5;
  int v6;
  int v7;
  hkString::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  hkStringPtr::Self *v13;
  int v14;
  uint32_t *v15;
  int v17;
  typedef int _g4_t_v18;
  typedef char *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);

  v22[3] = (uint32_t)(uintptr_t)(&a1);
  v20 = (uint32_t *)a1;
  v19 = a2;
  v18 = a3;
  v3 = *(pthread_mutex_t **)(a1 + 24);
  count = ((int32_t *)(v3))[1];
  if ( count != 0 )
  {
    while ( pthread_mutex_trylock(v3) != 0 )
    {
      if ( --count == 0 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    if ( pthread_mutex_lock(v3) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  v5 = v20;
  v6 = v20[4];
  if ( v6 <= 0 )
    goto LABEL_14;
  v7 = 0;
  if ( v19 != nullptr )
  {
    v21 = v20[4];
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (hkString::Self *)(*(uint32_t *)(v20[3] + 12 * v7) & 0xFFFFFFFE);
        if ( v8 != nullptr )
          break;
        if ( ++v7 >= v21 )
          goto LABEL_12;
      }
      if ( hkString::strCmp(v8, v19) == 0 )
        break;
      ++v7;
      v21 = v20[4];
      if ( v7 >= v21 )
      {
LABEL_12:
        v6 = v21;
        goto LABEL_13;
      }
    }
    v15 = v20;
    v13 = (hkStringPtr::Self *)(v20[3] + 12 * v7);
    if ( v13 != nullptr )
      goto LABEL_22;
    v6 = v20[4];
    v5 = v20;
LABEL_14:
    v9 = v5[5] & 0x3FFFFFFF;
    v10 = v6;
    if ( v6 + 1 > v9 )
    {
      v11 = 2 * v9;
      if ( v6 + 1 >= v11 )
        v11 = v6 + 1;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v22,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v20 + 3,
        v11,
        12);
      v10 = v20[4];
    }
    hkStringPtr::Construct((hkStringPtr::Self *)(v20[3] + 12 * v10));
    v12 = v20[3];
    ++v20[4];
    v13 = (hkStringPtr::Self *)(v12 + 12 * v6);
    hkStringPtr::opAssign(v13, (hkString::Self *)v19);
    *((uint32_t *)v13 + 1) = v18;
    v14 = v20[2];
    v20[2] = v14 + 1;
    *((uint32_t *)v13 + 2) = v14;
    v15 = v20;
    goto LABEL_22;
  }
  v17 = 0;
  while ( 1 )
  {
    v13 = (hkStringPtr::Self *)(v20[3] + 12 * v17);
    if ( (*(uint32_t *)v13 & 0xFFFFFFFE) == 0 )
      break;
    if ( v6 <= ++v17 )
    {
LABEL_13:
      v5 = v20;
      goto LABEL_14;
    }
  }
  v15 = v20;
LABEL_22:
  if ( pthread_mutex_unlock((pthread_mutex_t *)v15[6]) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return *((uint32_t *)v13 + 2);
}


