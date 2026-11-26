#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpTypedBr.h"

// ----------------------------------------------------------------------------
// Function: hkpTypedBroadPhaseHandle::staticClass  (binary VA: 0x16bbc10)
// Original: hkpTypedBroadPhaseHandle::staticClass
// ----------------------------------------------------------------------------
void * hkpTypedBroadPhaseHandle::staticClass()
{
  return &hkpTypedBroadPhaseHandleClass;
}

// ----------------------------------------------------------------------------
// Function: hkpTypedBroadPhaseDispatcher::Construct  (binary VA: 0x1ada580)
// Original: hkpTypedBroadPhaseDispatcher::hkpTypedBroadPhaseDispatcher
// ----------------------------------------------------------------------------
void hkpTypedBroadPhaseDispatcher::Construct(hkpTypedBroadPhaseDispatcher::Self *self)
{
  __m128i v1;
  *((uint32_t *)self + 64) = ((uint32_t)(uintptr_t)&off_20B1F28);
  *((uint32_t *)self + 65) = -65535;
  v1 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(self) + 264), 0);
  *((uint32_t *)self + 66) = ((uint32_t)(uintptr_t)&off_20B1F4C);
  *(__m128i *)self = v1;
  *((__m128i *)self + 1) = v1;
  *((__m128i *)self + 2) = v1;
  *((__m128i *)self + 3) = v1;
  *((__m128i *)self + 4) = v1;
  *((__m128i *)self + 5) = v1;
  *((__m128i *)self + 6) = v1;
  *((__m128i *)self + 7) = v1;
  *((__m128i *)self + 8) = v1;
  *((__m128i *)self + 9) = v1;
  *((__m128i *)self + 10) = v1;
  *((__m128i *)self + 11) = v1;
  *((__m128i *)self + 12) = v1;
  *((__m128i *)self + 13) = v1;
  *((__m128i *)self + 14) = v1;
  *((__m128i *)self + 15) = v1;
}

// ----------------------------------------------------------------------------
// Function: hkpTypedBroadPhaseDispatcher::Destroy  (binary VA: 0x1ada640)
// Original: hkpTypedBroadPhaseDispatcher::~hkpTypedBroadPhaseDispatcher
// ----------------------------------------------------------------------------
void hkpTypedBroadPhaseDispatcher::Destroy(hkpTypedBroadPhaseDispatcher::Self *self)
{
  *((uint32_t *)self + 66) = ((uint32_t)(uintptr_t)&off_209F128);
  *((uint32_t *)self + 64) = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpTypedBroadPhaseDispatcher::addPairs  (binary VA: 0x1ada670)
// Original: hkpTypedBroadPhaseDispatcher::addPairs
// ----------------------------------------------------------------------------
int hkpTypedBroadPhaseDispatcher::addPairs(int a1, uint32_t *a2, int a3, int a4)
{
  int result;
  int v6;
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[9];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v8)) > _g4_s1 ? (24u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v9)) > _g4_s2 ? (31u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 31u);

  result = a3 - 1;
  v8 = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        result = (*(int (**)(uint8_t *))(*(uint32_t *)a4 + 8))(v9);
        if ( v9[0] != 0 )
          break;
        --v8;
        a2 += 2;
        if ( v8 == -1 )
          return result;
      }
      v6 = *(uint32_t *)(a1 + 4 * (*(char *)(a2[1] + 4) + 8 * *(char *)(*a2 + 4)));
      v7 = a2;
      a2 += 2;
      result = G4_VCALL<int>(v6, 8, v7);
      --v8;
    }
    while ( v8 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTypedBroadPhaseDispatcher::removePairs  (binary VA: 0x1ada710)
// Original: hkpTypedBroadPhaseDispatcher::removePairs
// ----------------------------------------------------------------------------
int hkpTypedBroadPhaseDispatcher::removePairs(int a1, uint32_t *a2, int a3)
{
  int v3;
  int v5;
  int result;
  uint32_t *v7;

  v3 = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    do
    {
      --v3;
      v5 = *(uint32_t *)(a1 + 4 * (*(char *)(a2[1] + 4) + 8 * *(char *)(*a2 + 4)));
      v7 = a2;
      a2 += 2;
      result = G4_VCALL<int>(v5, 12, v7);
    }
    while ( v3 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTypedBroadPhaseDispatcher::removeDuplicates  (binary VA: 0x1ada770)
// Original: hkpTypedBroadPhaseDispatcher::removeDuplicates
// ----------------------------------------------------------------------------
void hkpTypedBroadPhaseDispatcher::removeDuplicates(int a1, int *a2)
{
  hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *v2;
  int v3;
  int v4;
  bool v5;
  int v6;
  uint32_t *v7;
  int v8;
  hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *v9;
  hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *v10;
  int v11;
  int v12;
  int i;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int SizeInBytesFor;
  int *v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  signed int Key;
  int v25;
  int v26;
  uint64_t v27; // rax
  signed int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  uint32_t *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  uint64_t v70; // 0:kr00_8.8
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef hkMemoryAllocator::Self *_g4_t_v52;
  typedef int *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef int *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65[2];
  typedef signed int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int *_g4_t_v69;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v42)) > _g4_s0 ? (8u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v43)) > _g4_s1 ? (12u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v44)) > _g4_s2 ? (12u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v45)) > _g4_s3 ? (16u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v46)) > _g4_s4 ? (20u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v47)) > _g4_s5 ? (24u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v48)) > _g4_s6 ? (28u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v49)) > _g4_s7 ? (32u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v50)) > _g4_s8 ? (36u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v51)) > _g4_s9 ? (36u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v52)) > _g4_s10 ? (40u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v53)) > _g4_s11 ? (44u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v54)) > _g4_s12 ? (48u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v55)) > _g4_s13 ? (48u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v56)) > _g4_s14 ? (48u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v57)) > _g4_s15 ? (52u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v58)) > _g4_s16 ? (52u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v59)) > _g4_s17 ? (56u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v60)) > _g4_s18 ? (60u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v61)) > _g4_s19 ? (64u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v62)) > _g4_s20 ? (64u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v63)) > _g4_s21 ? (68u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v64)) > _g4_s22 ? (72u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v65)) > _g4_s23 ? (76u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v66)) > _g4_s24 ? (84u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v67)) > _g4_s25 ? (88u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v68)) > _g4_s26 ? (92u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v69)) > _g4_s27 ? (100u + sizeof(_g4_t_v69)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 84u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 92u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 100u);

  v69 = &a1;
  v60 = (int *)a1;
  v53 = a2;
  v2 = *(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> **)(a1 + 4);
  v3 = a2[1];
  v4 = (int)(uintptr_t)(v2);
  if ( v3 <= (int)(uintptr_t)(v2) )
    v4 = a2[1];
  if ( v4 > 31 )
  {
    SizeInBytesFor = hkMapBase_unsigned_long_long_unsig_cbedf5::getSizeInBytesFor(v2);
    v51 = nullptr;
    if ( SizeInBytesFor == 0
      || (v65[0] = SizeInBytesFor,
          v51 = (char *)(*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                          (uint32_t *)(hkContainerTempAllocator::s_alloc),
                          v65),
          v49 = v65[0],
          v65[0] == 0) )
    {
      v49 = 0x80000000;
    }
    hkMapBase_unsigned_long_long_unsig_cbedf5::Construct(
      (hkMapBase_Raw *)v65,
      v51,
      SizeInBytesFor);
    if ( v60[1] > 0 )
    {
      v20 = v60;
      v21 = 0;
      do
      {
        while ( 1 )
        {
          v55 = 8 * v21;
          v22 = *(uint32_t *)(*v20 + 8 * v21);
          v23 = *(uint32_t *)(*v20 + 8 * v21 + 4);
          if ( v22 > v23 )
          {
            v22 = *(uint32_t *)(*v20 + 8 * v21 + 4);
            v23 = *(uint32_t *)(*v20 + 8 * v21);
          }
          v57 = (unsigned int)(uintptr_t)(v20);
          v61 = v23;
          Key = hkMapBase_unsigned_long_long_unsig_cbedf5::findKey(
                  (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v65,
                  __PAIR64__(v23, v22));
          v20 = (int *)v57;
          if ( Key > v66 )
            break;
          ++*(uint64_t *)(v65[0] + 16 * Key + 8);
          ++v21;
          *(uint32_t *)(*(uint32_t *)v57 + v55) = 0;
          if ( *(uint32_t *)(v57 + 4) <= v21 )
            goto LABEL_39;
        }
        LODWORD(v70) = v22;
        HIDWORD(v70) = v61;
        v61 = v57;
        v44 = (v21++ << 8) | 1;
        hkMapBase_unsigned_long_long_unsig_cbedf5::insert(
          (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v65,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v70,
          v44);
        v20 = (int *)v57;
      }
      while ( *(uint32_t *)(v57 + 4) > v21 );
    }
LABEL_39:
    v25 = 0;
    v56 = 0;
    if ( v53[1] > 0 )
    {
      v61 = (int)(uintptr_t)(v53);
      do
      {
        while ( 1 )
        {
          v57 = 8 * v25;
          v27 = *(uint64_t *)(*v53 + 8 * v25);
          if ( (unsigned int)v27 > HIDWORD(v27) )
          {
            LODWORD(v27) = *(uint32_t *)(*v53 + 8 * v25 + 4);
            HIDWORD(v27) = *(uint32_t *)(*v53 + 8 * v25);
          }
          v28 = hkMapBase_unsigned_long_long_unsig_cbedf5::findKey(
                  (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v65,
                  v27);
          if ( v28 <= v66 )
            break;
          v29 = v56;
          ++v25;
          ++v56;
          v30 = *v53;
          v31 = *(uint32_t *)(*v53 + v57 + 4);
          *(uint32_t *)(v30 + 8 * v29) = *(uint32_t *)(*v53 + v57);
          *(uint32_t *)(v30 + 8 * v29 + 4) = v31;
          if ( v53[1] <= v25 )
            goto LABEL_48;
        }
        v26 = v65[0] + 16 * v28;
        v57 = *(uint32_t *)(v26 + 8);
        v59 = *(uint32_t *)(v26 + 12);
        if ( (uint8_t)v57 <= 1u )
        {
          hkMapBase_unsigned_long_long_unsig_cbedf5::remove(v65, v28);
          *(uint32_t *)(*v60 + 8 * (v57 >> 8)) = 0;
        }
        else
        {
          *(uint32_t *)(v26 + 8) = v57 - 1;
          *(uint32_t *)(v26 + 12) = (v57 != 0) + v59 - 1;
        }
        ++v25;
      }
      while ( v53[1] > v25 );
LABEL_48:
      v32 = v53[2] & 0x3FFFFFFF;
      if ( v56 > v32 )
      {
        v33 = 2 * v32;
        if ( v56 >= v33 )
          v33 = v56;
        hkArrayUtil::reserve((hkArrayUtil::Self *)&v64, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v53, v33, 8);
      }
    }
    v53[1] = v56;
    v34 = v60[1];
    if ( v34 <= 0 )
    {
      v39 = 0;
    }
    else
    {
      v35 = 0;
      v61 = 0;
      do
      {
        v36 = *v60;
        v37 = (uint32_t *)(*v60 + 8 * v35);
        if ( *v37 != 0 )
        {
          v38 = v37[1];
          *(uint32_t *)(v36 + 8 * v61) = *v37;
          *(uint32_t *)(v36 + 8 * v61 + 4) = v38;
          v34 = v60[1];
          ++v61;
        }
        ++v35;
      }
      while ( v35 < v34 );
      v39 = v61;
      v40 = v60[2] & 0x3FFFFFFF;
      if ( v61 > v40 )
      {
        v41 = 2 * v40;
        if ( v61 >= v41 )
          v41 = v61;
        hkArrayUtil::reserve((hkArrayUtil::Self *)&v64, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v60, v41, 8);
      }
    }
    v60[1] = v39;
    hkMapBase_unsigned_long_long_unsig_cbedf5::clearAndDeallocate(
      (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v65,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
    hkMapBase_unsigned_long_long_unsig_cbedf5::Destroy();
    if ( v49 >= 0 )
      (*(void (**)(uint32_t *, char *, int, int, int, int, int, int, int, int, char *, uint32_t *, int *, int, unsigned int, int, int *, int, int *, int, int, int, signed int, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
        (uint32_t *)(hkContainerTempAllocator::s_alloc),
        v51,
        v49 & 0x3FFFFFFF,
        v42,
        v43,
        v45,
        v46,
        v47,
        v48,
        v49,
        v51,
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v53,
        v56,
        v57,
        v59,
        v60,
        v61,
        v65,
        v64,
        v65[0],
        v65[1],
        v66,
        v67,
        v68);
  }
  else
  {
    if ( v3 <= 0 )
    {
      v50 = 0;
    }
    else
    {
      v62 = *(uint32_t *)(a1 + 4);
      v5 = v2 == nullptr;
      v54 = 0;
      v50 = 0;
      if ( (int)(uintptr_t)(v2) <= 0 )
        goto LABEL_17;
LABEL_6:
      v63 = nullptr;
      v52 = (hkMemoryAllocator::Self *)*v60;
      v58 = (int *)(*v53 + 8 * v54);
      v6 = *v58;
      v7 = (uint32_t *)*v60;
      do
      {
        while ( 1 )
        {
          v8 = v7[1];
          if ( *v7 == v6 && v8 == v58[1] )
          {
LABEL_11:
            v9 = v63;
            v10 = v63;
LABEL_12:
            v60[1] = v62 - 1;
            v11 = 8 * (v62 - 1 - (uint32_t)(uintptr_t)(v9));
            v12 = (int)(uintptr_t)(v52) + 8 * (uint32_t)(uintptr_t)(v10) + 8;
            if ( v11 > 0 )
            {
              for ( i = 0; i < v11; i += 4 )
                v7[i / 4u] = *(uint32_t *)(v12 + i);
            }
            v14 = v53;
            if ( v53[1] > ++v54 )
              goto LABEL_16;
            goto LABEL_24;
          }
          if ( v8 == v6 )
            break;
          v63 = (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)((char *)v63 + 1);
          v7 += 2;
          if ( v63 == (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v62 )
            goto LABEL_21;
        }
        if ( *v7 == v58[1] )
          goto LABEL_11;
        v63 = (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)((char *)v63 + 1);
        v7 += 2;
      }
      while ( v63 != (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v62 );
      while ( 1 )
      {
LABEL_21:
        if ( v50 != v54 )
        {
          v15 = *v53;
          v16 = *(uint32_t *)(*v53 + 8 * v54);
          *(uint32_t *)(v15 + 8 * v50 + 4) = *(uint32_t *)(*v53 + 8 * v54 + 4);
          *(uint32_t *)(v15 + 8 * v50) = v16;
        }
        v14 = v53;
        ++v54;
        ++v50;
        if ( v53[1] <= v54 )
          break;
LABEL_16:
        v62 = v60[1];
        v5 = v62 == 0;
        if ( v62 > 0 )
          goto LABEL_6;
LABEL_17:
        if ( !v5 )
        {
          v10 = nullptr;
          v9 = nullptr;
          v7 = (uint32_t *)*v60;
          v52 = (hkMemoryAllocator::Self *)*v60;
          goto LABEL_12;
        }
      }
LABEL_24:
      v17 = v14[2] & 0x3FFFFFFF;
      if ( v50 > v17 )
      {
        v18 = 2 * v17;
        if ( v50 >= v18 )
          v18 = v50;
        hkArrayUtil::reserve((hkArrayUtil::Self *)&v64, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v53, v18, 8);
      }
    }
    v53[1] = v50;
  }
}


