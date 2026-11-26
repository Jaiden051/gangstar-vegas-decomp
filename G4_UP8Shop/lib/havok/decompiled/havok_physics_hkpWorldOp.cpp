#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldOp.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::updateEntityBP  (binary VA: 0x174b9d0)
// Original: hkpWorldOperationUtil::updateEntityBP
// ----------------------------------------------------------------------------
hkpWorldOperationUtil::Self * hkpWorldOperationUtil::updateEntityBP(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::Self *v2;
  int v3;
  char v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  hkLifoAllocator::Self **v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  hkLifoAllocator::Self *v19;
  signed int v20;
  int v21;
  hkLifoAllocator::Self *v22;
  signed int v23;
  hkpWorldOperationUtil::Self *result;
  char *v25;
  hkLifoAllocator::Self *v26;
  signed int v27;
  int v28;
  typedef unsigned int _g4_t_v29;
  typedef hkLifoAllocator::Self *_g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef signed int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef char *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef signed int _g4_t_v40;
  typedef char *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef signed int _g4_t_v45;
  typedef char *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t _g4_t_v48[11];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v29)) > _g4_s0 ? (4u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v30)) > _g4_s1 ? (4u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v31)) > _g4_s2 ? (8u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_address)) > _g4_s3 ? (8u + sizeof(_g4_t_address)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v33)) > _g4_s4 ? (12u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v34)) > _g4_s5 ? (12u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v35)) > _g4_s6 ? (12u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v36)) > _g4_s7 ? (12u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v37)) > _g4_s8 ? (28u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v38)) > _g4_s9 ? (32u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v39)) > _g4_s10 ? (36u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v40)) > _g4_s11 ? (40u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v41)) > _g4_s12 ? (44u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v42)) > _g4_s13 ? (48u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v43)) > _g4_s14 ? (64u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v44)) > _g4_s15 ? (68u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v45)) > _g4_s16 ? (72u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v46)) > _g4_s17 ? (76u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v47)) > _g4_s18 ? (80u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v48)) > _g4_s19 ? (96u + sizeof(_g4_t_v48)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 96u);

  if ( *((uint32_t *)self + 35) != 0 )
  {
    LOBYTE(v48[0]) = 3;
    v48[1] = (uint32_t)(uintptr_t)(a2);
    return (hkpWorldOperationUtil::Self *)hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(v48));
  }
  v2 = a2;
  v3 = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 35) = 1;
  if ( v3 == 0 )
  {
    *((uint32_t *)self + 35) = 0;
LABEL_36:
    result = self;
    if ( *((uint8_t *)self + 148) == 0 )
    {
      if ( *((uint32_t *)self + 33) != 0 )
      {
        hkpWorld::internal_executePendingOperations(self);
        result = self;
      }
      if ( *((uint32_t *)result + 39) == 1 && *((uint32_t *)result + 34) != 0 )
        return (hkpWorldOperationUtil::Self *)hkpWorld::internal_executePendingBodyOperations(result);
    }
    return result;
  }
  v29 = *((uint32_t *)v2 + 16);
  v31 = *((uint32_t *)v2 + 12);
  if ( v31 > v29 )
  {
    hkpEntityAabbUtil::entityBatchRecalcAabb(*((uint32_t *)self + 28), &a2, 1);
    v31 = *((uint32_t *)v2 + 12);
    v29 = *((uint32_t *)v2 + 16);
  }
  v4 = *((uint8_t *)v2 + 63);
  v5 = *((uint32_t *)v2 + 13);
  v6 = *((uint8_t *)v2 + 61);
  v38 = nullptr;
  v39 = 0;
  v7 = *((uint8_t *)v2 + 62);
  v8 = v5 - (v6 << v4);
  v9 = *((uint32_t *)v2 + 14);
  v40 = 0x80000000;
  v33 = v9 - (v7 << v4);
  v10 = *((uint8_t *)v2 + 60);
  v48[1] = v8;
  v48[0] = v31 - (v10 << v4);
  v48[2] = v33;
  v11 = *((uint8_t *)v2 + 76);
  v12 = *((uint32_t *)v2 + 17) + (*((uint8_t *)v2 + 77) << v4);
  v48[6] = *((uint32_t *)v2 + 18) + (*((uint8_t *)v2 + 78) << v4);
  v48[4] = v29 + (v11 << v4);
  v48[5] = v12;
  v42 = *((uint32_t *)self + 218);
  v13 = v42;
  if ( v42 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v35 = (8 * v42 + 127) & 0xFFFFFF80;
    v30 = *address;
    v25 = *((char **)*address + 3);
    if ( v35 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(&v25[v35]) <= *((uint32_t *)*address + 4) )
      *((uint32_t *)v30 + 3) = (uint32_t)(uintptr_t)(&v25[v35]);
    else
      v25 = (char *)hkLifoAllocator::allocateFromNewSlab(v30, v35);
    v38 = v25;
    v40 = v13 | 0x80000000;
    v41 = v25;
    v43 = nullptr;
    v44 = 0;
    v45 = 0x80000000;
    v47 = *((uint32_t *)self + 218);
    v15 = v47;
    if ( v47 != 0 )
    {
      v26 = *address;
      v27 = (8 * v47 + 127) & 0xFFFFFF80;
      v36 = *((char **)*address + 3);
      if ( v27 <= *((uint32_t *)*address + 2)
        && (unsigned int)(v28 = v27 + *((uint32_t *)*address + 3)) <= *((uint32_t *)v26 + 4) )
      {
        *((uint32_t *)v26 + 3) = v28;
        v16 = v36;
      }
      else
      {
        v16 = (char *)hkLifoAllocator::allocateFromNewSlab(v26, (8 * v47 + 127) & 0xFFFFFF80);
        v15 = v47;
      }
      v14 = address;
    }
    else
    {
      v14 = address;
      v16 = nullptr;
    }
  }
  else
  {
    v14 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v38 = nullptr;
    v40 = 0x80000000;
    v41 = nullptr;
    v44 = 0;
    v47 = 0;
    v15 = 0;
    v16 = nullptr;
  }
  v43 = v16;
  v46 = v16;
  v45 = v15 | 0x80000000;
  v37 = (char *)v2 + 36;
  (*(void (**)(uint32_t, char **, uint32_t *, int, char **, char **))(**((uint32_t **)self + 22) + 56))(
    *((uint32_t *)self + 22),
    &v37,
    v48,
    1,
    &v38,
    &v43);
  if ( v44 + v39 > 0 )
  {
    hkpTypedBroadPhaseDispatcher::removeDuplicates(&v38, &v43);
    hkpTypedBroadPhaseDispatcher::removePairs(*((uint32_t *)self + 23), v43, v44);
    v17 = 0;
    if ( *((uint32_t *)self + 29) != 0 )
      v17 = *((uint32_t *)self + 29) + 8;
    hkpTypedBroadPhaseDispatcher::addPairs(*((uint32_t *)self + 23), v38, v39, v17);
  }
  v18 = 0;
  if ( v43 != v46 )
    v18 = v44;
  v44 = v18;
  v19 = *v14;
  v20 = (8 * v47 + 127) & 0xFFFFFF80;
  if ( v20 > *((uint32_t *)*v14 + 2) || *((char **)v19 + 3) != &v46[v20] || v46 == *((char **)v19 + 5) )
    hkLifoAllocator::slowBlockFree(v19, v46, (8 * v47 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v19 + 3) = (uint32_t)(uintptr_t)(v46);
  v44 = 0;
  if ( v45 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v43,
      8 * v45);
  v21 = 0;
  if ( v38 != v41 )
    v21 = v39;
  v39 = v21;
  v45 = 0x80000000;
  v22 = *v14;
  v23 = (8 * v42 + 127) & 0xFFFFFF80;
  v43 = nullptr;
  if ( v23 > *((uint32_t *)v22 + 2) || *((char **)v22 + 3) != &v41[v23] || v41 == *((char **)v22 + 5) )
    hkLifoAllocator::slowBlockFree(v22, v41, (8 * v42 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v22 + 3) = (uint32_t)(uintptr_t)(v41);
  v39 = 0;
  if ( v40 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v38,
      8 * v40);
  v34 = *((uint32_t *)self + 35);
  result = (hkpWorldOperationUtil::Self *)(v34 - 1);
  *((uint32_t *)self + 35) = v34 - 1;
  if ( v34 == 1 )
    goto LABEL_36;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::addEntityBP  (binary VA: 0x174bef0)
// Original: hkpWorldOperationUtil::addEntityBP
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::addEntityBP(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::Self *v2;
  int result;
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  signed int v10;
  hkLifoAllocator::Self *v11;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v13;
  typedef int _g4_t_v14;
  typedef hkLifoAllocator::Self **_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef hkLifoAllocator::Self **_g4_t_v19;
  typedef int _g4_t_v20;
  typedef signed int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef signed int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[11];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v15)) > _g4_s1 ? (32u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v16)) > _g4_s2 ? (36u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v17)) > _g4_s3 ? (36u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v18)) > _g4_s4 ? (40u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v19)) > _g4_s5 ? (44u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v20)) > _g4_s6 ? (44u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v21)) > _g4_s7 ? (44u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v22)) > _g4_s8 ? (48u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v23)) > _g4_s9 ? (52u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v24)) > _g4_s10 ? (56u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v25)) > _g4_s11 ? (60u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v26)) > _g4_s12 ? (64u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v27)) > _g4_s13 ? (80u + sizeof(_g4_t_v27)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);

  v2 = a2;
  result = *((uint32_t *)a2 + 4);
  if ( result != 0 )
  {
    v4 = *((uint32_t *)self + 218);
    v22 = nullptr;
    v23 = 0;
    v24 = 0x80000000;
    v26 = v4;
    if ( v4 != 0 )
    {
      v20 = v4;
      address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v13 = *address;
      v5 = v20;
      v15 = address;
      v21 = (8 * v20 + 127) & 0xFFFFFF80;
      v16 = *((uint32_t *)*address + 3);
      v18 = v16;
      if ( v21 <= *((uint32_t *)*address + 2) && (unsigned int)(v21 + v16) <= *((uint32_t *)v13 + 4) )
      {
        *((uint32_t *)v13 + 3) = v21 + v16;
      }
      else
      {
        v17 = v5;
        v18 = hkLifoAllocator::allocateFromNewSlab(v13, v21);
        v5 = v17;
      }
      v19 = v15;
      v6 = (char *)v18;
    }
    else
    {
      v19 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v5 = 0;
      v6 = nullptr;
    }
    v22 = v6;
    v25 = v6;
    v14 = *((uint32_t *)self + 28);
    v24 = v5 | 0x80000000;
    hkpEntityAabbUtil::entityBatchRecalcAabb(v14, &a2, 1);
    v27[0] = *((uint32_t *)a2 + 12);
    v27[1] = *((uint32_t *)a2 + 13);
    v27[2] = *((uint32_t *)a2 + 14);
    v27[3] = *((uint32_t *)a2 + 15);
    v27[4] = *((uint32_t *)a2 + 16);
    v27[5] = *((uint32_t *)a2 + 17);
    v7 = *((uint32_t *)a2 + 19);
    v27[6] = *((uint32_t *)a2 + 18);
    v27[7] = v7;
    (*(void (**)(uint32_t, int, uint32_t *, char **, uint32_t))(**((uint32_t **)self + 22) + 28))(
      *((uint32_t *)self + 22),
      (int)(uintptr_t)(v2) + 36,
      v27,
      &v22,
      0);
    if ( v23 > 0 )
    {
      v8 = 0;
      if ( *((uint32_t *)self + 29) != 0 )
        v8 = *((uint32_t *)self + 29) + 8;
      hkpTypedBroadPhaseDispatcher::addPairs(*((uint32_t *)self + 23), v22, v23, v8);
    }
    v9 = 0;
    if ( v22 != v25 )
      v9 = v23;
    v23 = v9;
    v10 = (8 * v26 + 127) & 0xFFFFFF80;
    v11 = *v19;
    if ( v10 > *((uint32_t *)*v19 + 2) || *((char **)v11 + 3) != &v25[v10] || v25 == *((char **)v11 + 5) )
      hkLifoAllocator::slowBlockFree(v11, v25, (8 * v26 + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v11 + 3) = (uint32_t)(uintptr_t)(v25);
    result = v24;
    v23 = 0;
    if ( v24 >= 0 )
      return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               v22,
               8 * v24);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::addPhantomBP  (binary VA: 0x174c150)
// Original: hkpWorldOperationUtil::addPhantomBP
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::addPhantomBP(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2, hkpPhantom::Self *a3, char *a4, int a5, int a6, char *a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  signed int v14;
  int result;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v17;
  signed int v18;
  int v19;
  void *retaddr;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef hkLifoAllocator::Self **_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[36];
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v23)) > _g4_s3 ? (20u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v26)) > _g4_s6 ? (48u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v27)) > _g4_s7 ? (52u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v28)) > _g4_s8 ? (56u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v29)) > _g4_s9 ? (60u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v30)) > _g4_s10 ? (64u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v31)) > _g4_s11 ? (100u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v32)) > _g4_s12 ? (104u + sizeof(_g4_t_v32)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);

  v26 = *((uint32_t *)self + 218);
  v25 = v26;
  if ( v26 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v17 = *address;
    v8 = v26;
    v24 = address;
    v18 = (8 * v26 + 127) & 0xFFFFFF80;
    v25 = *((uint32_t *)v17 + 3);
    if ( v18 <= *((uint32_t *)v17 + 2) && (unsigned int)(v19 = v18 + *((uint32_t *)v17 + 3)) <= *((uint32_t *)v17 + 4) )
    {
      *((uint32_t *)v17 + 3) = v19;
    }
    else
    {
      v23 = v26;
      v25 = hkLifoAllocator::allocateFromNewSlab(v17, v18);
      v8 = v26;
    }
    v9 = v25;
  }
  else
  {
    v24 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v8 = 0;
    v9 = 0;
  }
  LOBYTE(v25) = *((uint8_t *)a2 + 40) == 3;
  G4_VCALL<void>(a2, 36, v30, v20, v21, v22, v23, v24, v25, v9, 0, v8 | 0x80000000, v9, v26, v27, v28, v29);
  retaddr = (void *)(uint8_t)(uintptr_t)a3;
  (*(void (**)(uint32_t, char *, uint8_t *, char **))(**((uint32_t **)self + 22) + 32))(
    *((uint32_t *)self + 22),
    (char *)a2 + 36,
    v30,
    &a4);
  hkpPhantom::setBoundingVolumeData(a2, (const hkAabb::Self *)v30);
  if ( a5 != 0 )
  {
    v10 = 0;
    v11 = *((uint32_t *)self + 29);
    v32 = a5;
    v31 = a4;
    if ( v11 != 0 )
      v10 = v11 + 8;
    hkpTypedBroadPhaseDispatcher::addPairs(*((uint32_t *)self + 23), v31, v32, v10);
  }
  v12 = 0;
  if ( a4 != a7 )
    v12 = a5;
  v13 = *(uint32_t *)a2;
  a5 = v12;
  v14 = (8 * a8 + 127) & 0xFFFFFF80;
  if ( v14 > *(uint32_t *)(v13 + 8) || *(char **)(v13 + 12) != &a7[v14] || a7 == *(char **)(v13 + 20) )
    hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v13, a7, v14);
  else
    *(uint32_t *)(v13 + 12) = (uint32_t)(uintptr_t)(a7);
  result = a6;
  a5 = 0;
  if ( a6 >= 0 )
    return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             a4,
             8 * a6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::addEntitySI  (binary VA: 0x174c350)
// Original: hkpWorldOperationUtil::addEntitySI
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::addEntitySI(hkpSimulationIsland::Self **a1, hkpEntity::Self *a2, int a3)
{
  hkpEntity::Self *v3;
  bool v4;
  int v5;
  int result;
  int v7;
  int i;
  int v9;
  int v10;
  int address;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;

  v3 = a2;
  v4 = *((uint8_t *)a2 + 232) == 5;
  *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(a1);
  if ( v4 )
    return hkpSimulationIsland::internalAddEntity(a1[8], a2);
  if ( *((uint8_t *)a1 + 196) == 0 )
  {
    v5 = *(uint32_t *)a1[10];
LABEL_4:
    hkpSimulationIsland::internalAddEntity((hkpSimulationIsland::Self *)v5, v3);
    result = *((uint32_t *)v3 + 52);
    *(uint8_t *)(v5 + 36) = result;
    return result;
  }
  if ( a3 != 1 )
  {
    v16 = (uint32_t *)(a1 + 13);
    goto LABEL_18;
  }
  v16 = (uint32_t *)(a1 + 10);
  if ( (int)(uintptr_t)(a1[44]) <= 4 )
  {
LABEL_18:
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           132);
    hkpSimulationIsland::Construct((hkpSimulationIsland::Self *)v5, (hkpWorld::Self *)a1);
    *(uint8_t *)(v5 + 38) = (a3 == 1) | (4 * (a3 == 1)) | *(uint8_t *)(v5 + 38) & 0xF0;
    v12 = v16;
    v13 = v16[1];
    *(uint16_t *)(v5 + 32) = v13;
    *(uint8_t *)(v5 + 36) = v13;
    v14 = v16[1];
    if ( v14 == (v16[2] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v16, 4, v15);
      v14 = v16[1];
      v12 = v16;
    }
    *(uint32_t *)(*v12 + 4 * v14) = v5;
    ++v12[1];
    goto LABEL_4;
  }
  v7 = (int)(uintptr_t)(a1[11]) - 1;
  for ( i = 4 * v7; ; i -= 4 )
  {
    if ( v7 < 0 )
    {
      v3 = a2;
      goto LABEL_18;
    }
    v9 = *(uint32_t *)((char *)a1[10] + i);
    if ( v9 != 0 )
    {
      v10 = *(uint32_t *)(v9 + 28);
      if ( (*(uint8_t *)(v9 + 38) & 0xC) != 0 )
      {
        if ( *(uint32_t *)(v9 + 80) >= v10 )
          v10 = *(uint32_t *)(v9 + 80);
        if ( (int)(uintptr_t)(a1[44]) > v10 + 4 )
          break;
      }
    }
    --v7;
  }
  *(uint8_t *)(v9 + 37) = *(uint8_t *)(v9 + 37) & 0xF3 | 4;
  return hkpSimulationIsland::internalAddEntity((hkpSimulationIsland::Self *)v9, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removeEntityBP  (binary VA: 0x174c500)
// Original: hkpWorldOperationUtil::removeEntityBP
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::removeEntityBP(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::Self *v2;
  int result;
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  hkLifoAllocator::Self *v9;
  signed int v10;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v12;
  typedef hkLifoAllocator::Self **_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef hkLifoAllocator::Self **_g4_t_v17;
  typedef int _g4_t_v18;
  typedef signed int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef signed int _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v15)) > _g4_s2 ? (4u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v16)) > _g4_s3 ? (8u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v17)) > _g4_s4 ? (12u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v18)) > _g4_s5 ? (12u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v19)) > _g4_s6 ? (12u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v20)) > _g4_s7 ? (16u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v21)) > _g4_s8 ? (20u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v22)) > _g4_s9 ? (24u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v23)) > _g4_s10 ? (28u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v24)) > _g4_s11 ? (32u + sizeof(_g4_t_v24)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  v2 = a2;
  result = *((uint32_t *)a2 + 4);
  if ( result != 0 )
  {
    (*(void (**)(uint32_t, hkpWorld::Self **, int, hkpWorldOperationUtil::Self *, int))(**((uint32_t **)self + 2) + 56))(
      *((uint32_t *)self + 2),
      &a2,
      1,
      self,
      1);
    v4 = *((uint32_t *)self + 218);
    v20 = nullptr;
    v21 = 0;
    v22 = 0x80000000;
    v24 = v4;
    if ( v4 != 0 )
    {
      v18 = v4;
      address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v12 = *address;
      v5 = v18;
      v13 = address;
      v19 = (8 * v18 + 127) & 0xFFFFFF80;
      v14 = *((uint32_t *)*address + 3);
      v16 = v14;
      if ( v19 <= *((uint32_t *)*address + 2) && (unsigned int)(v19 + v14) <= *((uint32_t *)v12 + 4) )
      {
        *((uint32_t *)v12 + 3) = v19 + v14;
      }
      else
      {
        v15 = v5;
        v16 = hkLifoAllocator::allocateFromNewSlab(v12, v19);
        v5 = v15;
      }
      v17 = v13;
      v6 = (char *)v16;
    }
    else
    {
      v17 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v5 = 0;
      v6 = nullptr;
    }
    v20 = v6;
    v23 = v6;
    v7 = *((uint32_t *)self + 22);
    v22 = v5 | 0x80000000;
    G4_VCALL<void>(v7, 40, (int)(uintptr_t)(v2) + 36, &v20);
    if ( v21 > 0 )
      hkpTypedBroadPhaseDispatcher::removePairs(*((uint32_t *)self + 23), v20, v21);
    v8 = 0;
    if ( v20 != v23 )
      v8 = v21;
    v9 = *v17;
    v21 = v8;
    v10 = (8 * v24 + 127) & 0xFFFFFF80;
    if ( v10 > *((uint32_t *)v9 + 2) || *((char **)v9 + 3) != &v23[v10] || v23 == *((char **)v9 + 5) )
      hkLifoAllocator::slowBlockFree(v9, v23, (8 * v24 + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v9 + 3) = (uint32_t)(uintptr_t)(v23);
    result = v22;
    v21 = 0;
    if ( v22 >= 0 )
      return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               v20,
               8 * v22);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removePhantomBP  (binary VA: 0x174c710)
// Original: hkpWorldOperationUtil::removePhantomBP
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::removePhantomBP(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2, hkpPhantom::Self *a3, int a4, int a5, int a6, char *a7, int a8)
{
  hkLifoAllocator::Self **v8;
  int v9;
  int v10;
  int v11;
  hkLifoAllocator::Self *v12;
  signed int v13;
  int result;
  hkLifoAllocator::Self *v15;
  signed int v16;
  int v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[4];
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_address)) > _g4_s3 ? (24u + sizeof(_g4_t_address)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v24)) > _g4_s6 ? (48u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);

  v23[0] = 0;
  v23[1] = 0;
  v23[2] = 0x80000000;
  v24 = *((uint32_t *)self + 218);
  v22 = v24;
  if ( v24 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v9 = v24;
    v15 = *address;
    v16 = (8 * v24 + 127) & 0xFFFFFF80;
    v22 = *((uint32_t *)*address + 3);
    if ( v16 <= *((uint32_t *)*address + 2)
      && (unsigned int)(v17 = v16 + *((uint32_t *)*address + 3)) <= *((uint32_t *)v15 + 4) )
    {
      *((uint32_t *)v15 + 3) = v17;
      v10 = v22;
    }
    else
    {
      v20 = v24;
      v10 = hkLifoAllocator::allocateFromNewSlab(v15, v16);
      v22 = v10;
      v9 = v24;
    }
    v8 = address;
  }
  else
  {
    v8 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v9 = 0;
    v10 = 0;
  }
  v23[0] = v10;
  v23[3] = v10;
  v11 = *((uint32_t *)self + 22);
  v23[2] = v9 | 0x80000000;
  G4_VCALL<void>(v11, 40, (char *)a2 + 36, v23, v18, v19, v20, address, v22);
  if ( a5 != 0 )
    hkpTypedBroadPhaseDispatcher::removePairs(*((uint32_t *)self + 23), a4, a5);
  v12 = *v8;
  v13 = (8 * a8 + 127) & 0xFFFFFF80;
  if ( v13 > *((uint32_t *)*v8 + 2) || *((char **)v12 + 3) != &a7[v13] || a7 == *((char **)v12 + 5) )
    hkLifoAllocator::slowBlockFree(v12, a7, (8 * a8 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v12 + 3) = (uint32_t)(uintptr_t)(a7);
  result = a6;
  if ( a6 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             a4,
             8 * a6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removeAttachedActionsFromFixedIsland  (binary VA: 0x174c8c0)
// Original: hkpWorldOperationUtil::removeAttachedActionsFromFixedIsland
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::removeAttachedActionsFromFixedIsland(int a1, int a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  unsigned int count;
  int v8;
  int v9;
  int v10;
  int32_t v11; // kr00_4
  int v12;
  pthread_mutex_t *mutex;
  int v14;

  v3 = 0;
  result = *(uint16_t *)(a2 + 524);
  if ( (uint16_t)result != 0 )
  {
    do
    {
      v5 = *(uint32_t *)(*(uint32_t *)(a2 + 520) + 4 * v3);
      if ( *(uint32_t *)(v5 + 12) == *(uint32_t *)(a1 + 32) )
      {
        v6 = *((uint32_t *)a3 + 1);
        if ( v6 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 4, v12);
          v6 = *((uint32_t *)a3 + 1);
        }
        *(uint32_t *)(*(uint32_t *)a3 + 4 * v6) = v5;
        ++*((uint32_t *)a3 + 1);
        if ( *(uint16_t *)(v5 + 6) != 0 )
        {
          do
          {
            v11 = *(uint32_t *)(v5 + 4);
            HIWORD(v10) = HIWORD(v11);
            LOWORD(v10) = 0;
          }
          while ( v11 != __sync_val_compare_and_swap(
                           (volatile int32_t *)(v5 + 4),
                           v11,
                           v10 | (uint16_t)(v11 + 1)) );
        }
        hkpSimulationIsland::removeAction(*(hkpSimulationIsland::Self **)(a1 + 32), (hkpAction::Self *)v5);
        *(uint8_t *)(*(uint32_t *)(a1 + 32) + 37) = *(uint8_t *)(*(uint32_t *)(a1 + 32) + 37) & 0xCF | 0x10;
        v14 = *(uint32_t *)(a1 + 32);
        mutex = *(pthread_mutex_t **)(a1 + 188);
        count = ((int32_t *)(mutex))[1];
        if ( count != 0 )
        {
          while ( pthread_mutex_trylock(mutex) != 0 )
          {
            if ( --count == 0 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          if ( pthread_mutex_lock(mutex) != 0 )
          {
            printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
            perror("pthread_mutex_lock(&mutex)");
            __builtin_debugtrap();
          }
        }
        if ( *(uint16_t *)(v14 + 34) == 0xFFFF )
        {
          v8 = v14;
          *(uint16_t *)(v14 + 34) = *(uint32_t *)(a1 + 68);
          v9 = *(uint32_t *)(a1 + 68);
          if ( v9 == (*(uint32_t *)(a1 + 72) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(a1 + 64),
              4,
              v12);
            v8 = v14;
            v9 = *(uint32_t *)(a1 + 68);
          }
          *(uint32_t *)(*(uint32_t *)(a1 + 64) + 4 * v9) = v8;
          ++*(uint32_t *)(a1 + 68);
        }
        if ( pthread_mutex_unlock(*(pthread_mutex_t **)(a1 + 188)) != 0 )
        {
          printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
          perror("pthread_mutex_unlock(&m_mutex)");
          __builtin_debugtrap();
        }
        result = *(uint16_t *)(a2 + 524);
      }
      ++v3;
    }
    while ( v3 < (uint16_t)result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removeAttachedActionsFromDynamicIsland  (binary VA: 0x174cb50)
// Original: hkpWorldOperationUtil::removeAttachedActionsFromDynamicIsland
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::removeAttachedActionsFromDynamicIsland(int a1, int a2, hkMemoryAllocator::Self *a3)
{
  int result;
  hkpAction::Self *v4;
  int v5;
  int v6;
  int v7;
  pthread_mutex_t *v8;
  unsigned int count;
  int v10;
  int v11;
  int v12;
  int32_t v13; // kr00_4
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v15)) > _g4_s1 ? (28u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v16)) > _g4_s2 ? (44u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v17)) > _g4_s3 ? (48u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v18)) > _g4_s4 ? (52u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v19)) > _g4_s5 ? (56u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v20)) > _g4_s6 ? (60u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  v16 = 0;
  v15 = *(uint32_t *)(a2 + 200);
  result = a2;
  if ( *(uint16_t *)(a2 + 524) != 0 )
  {
    do
    {
      v4 = *(hkpAction::Self **)(*(uint32_t *)(a2 + 520) + 4 * v16);
      v17 = &v20;
      v18 = 0;
      v19 = -2147483632;
      G4_VCALL<void>(v4, 24, &v17);
      if ( v18 <= 0 )
      {
LABEL_11:
        v7 = *((uint32_t *)a3 + 1);
        if ( v7 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 4, v14);
          v7 = *((uint32_t *)a3 + 1);
        }
        *(uint32_t *)(*(uint32_t *)a3 + 4 * v7) = (uint32_t)(uintptr_t)(v4);
        ++*((uint32_t *)a3 + 1);
        if ( *((uint16_t *)v4 + 3) != 0 )
        {
          do
          {
            v13 = *((uint32_t *)v4 + 1);
            HIWORD(v12) = HIWORD(v13);
            LOWORD(v12) = 0;
          }
          while ( v13 != __sync_val_compare_and_swap(
                           (volatile int32_t *)v4 + 1,
                           v13,
                           v12 | (uint16_t)(v13 + 1)) );
        }
        hkpSimulationIsland::removeAction((hkpSimulationIsland::Self *)v15, v4);
        *(uint8_t *)(v15 + 37) = *(uint8_t *)(v15 + 37) & 0xCF | 0x10;
        v8 = *(pthread_mutex_t **)(a1 + 188);
        count = ((int32_t *)(v8))[1];
        if ( count != 0 )
        {
          while ( pthread_mutex_trylock(v8) != 0 )
          {
            if ( --count == 0 )
              goto LABEL_21;
          }
        }
        else
        {
LABEL_21:
          if ( pthread_mutex_lock(v8) != 0 )
          {
            printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
            perror("pthread_mutex_lock(&mutex)");
            __builtin_debugtrap();
          }
        }
        if ( *(uint16_t *)(v15 + 34) == 0xFFFF )
        {
          v10 = v15;
          *(uint16_t *)(v15 + 34) = *(uint32_t *)(a1 + 68);
          v11 = *(uint32_t *)(a1 + 68);
          if ( v11 == (*(uint32_t *)(a1 + 72) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(a1 + 64),
              4,
              v14);
            v10 = v15;
            v11 = *(uint32_t *)(a1 + 68);
          }
          *(uint32_t *)(*(uint32_t *)(a1 + 64) + 4 * v11) = v10;
          ++*(uint32_t *)(a1 + 68);
        }
        if ( pthread_mutex_unlock(*(pthread_mutex_t **)(a1 + 188)) != 0 )
        {
          printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
          perror("pthread_mutex_unlock(&m_mutex)");
          __builtin_debugtrap();
        }
      }
      else
      {
        v5 = 0;
        while ( 1 )
        {
          v6 = v17[v5];
          if ( *(uint8_t *)(v6 + 232) != 5 && v6 != a2 )
            break;
          if ( ++v5 == v18 )
            goto LABEL_11;
        }
      }
      v18 = 0;
      if ( v19 >= 0 )
        (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v17,
          4 * v19);
      ++v16;
      result = *(uint16_t *)(a2 + 524);
    }
    while ( v16 < result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::addConstraintToCriticalLockedIsland  (binary VA: 0x174ce40)
// Original: hkpWorldOperationUtil::addConstraintToCriticalLockedIsland
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::addConstraintToCriticalLockedIsland(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  int result;
  hkpWorld::Self *v3;
  hkpConstraintInstance::Self *v4;
  hkpConstraintInstance::Self *v5;

  hkpWorldConstraintUtil::addConstraint(self, a2, v4);
  result = *((uint32_t *)self + 82);
  if ( result != 0 )
    result = hkpWorldCallbackUtil::fireConstraintAdded(self, a2, v5);
  if ( *((uint16_t *)a2 + 18) != 0 )
    return hkpConstraintCallbackUtil::fireConstraintAdded(a2, v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removeConstraintFromCriticalLockedIsland  (binary VA: 0x174cea0)
// Original: hkpWorldOperationUtil::removeConstraintFromCriticalLockedIsland
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::removeConstraintFromCriticalLockedIsland(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::Self *v3;
  hkpConstraintInstance::Self *v4;

  if ( *((uint32_t *)self + 82) != 0 )
    hkpWorldCallbackUtil::fireConstraintRemoved(self, a2, v4);
  if ( *((uint16_t *)a2 + 18) != 0 )
    hkpConstraintCallbackUtil::fireConstraintRemoved(a2, v3);
  return (int)(uintptr_t)(hkpWorldConstraintUtil::removeConstraint(a2, v3));
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::addConstraintImmediately  (binary VA: 0x174cf00)
// Original: hkpWorldOperationUtil::addConstraintImmediately
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorldOperationUtil::addConstraintImmediately(hkpWorldCallbackUtil::Self *a1, hkpWorld::Self *a2, int a3)
{
  bool v3;
  hkpWorld::Self *v5;
  hkpConstraintInstance::Self *v6;
  hkpConstraintInstance::Self *v7;

  ++*((uint32_t *)a1 + 35);
  hkpWorldConstraintUtil::addConstraint(a1, a2, v6);
  if ( a3 != 0 )
  {
    if ( *((uint32_t *)a1 + 82) != 0 )
    {
      hkpWorldCallbackUtil::fireConstraintAdded(a1, a2, v7);
      if ( *((uint16_t *)a2 + 18) == 0 )
        goto LABEL_4;
    }
    else if ( *((uint16_t *)a2 + 18) == 0 )
    {
      goto LABEL_4;
    }
    hkpConstraintCallbackUtil::fireConstraintAdded(a2, v5);
  }
LABEL_4:
  v3 = (*((uint32_t *)a1 + 35))-- == 1;
  if ( v3 && *((uint8_t *)a1 + 148) == 0 )
  {
    if ( *((uint32_t *)a1 + 33) != 0 )
      hkpWorld::internal_executePendingOperations(a1);
    if ( *((uint32_t *)a1 + 39) == 1 && *((uint32_t *)a1 + 34) != 0 )
      hkpWorld::internal_executePendingBodyOperations(a1);
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removeConstraintImmediately  (binary VA: 0x174cfe0)
// Original: hkpWorldOperationUtil::removeConstraintImmediately
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::removeConstraintImmediately(hkpWorldCallbackUtil::Self *a1, hkpWorldConstraintUtil::Self *a2, int a3)
{
  int result;
  bool v4;
  hkpConstraintInstance::Self *v5;
  hkpConstraintInstance::Self *v6;

  *(uint8_t *)(*((uint32_t *)a2 + 2) + 37) = *(uint8_t *)(*((uint32_t *)a2 + 2) + 37) & 0xFC | 1;
  if ( *((uint32_t *)a1 + 35) != 0 )
  {
    if ( a3 != 0 )
    {
      if ( *((uint32_t *)a1 + 82) != 0 )
        hkpWorldCallbackUtil::fireConstraintRemoved(a1, a2, v6);
      if ( *((uint16_t *)a2 + 18) != 0 )
        hkpConstraintCallbackUtil::fireConstraintRemoved(a2, v5);
    }
    return (int)(uintptr_t)(hkpWorldConstraintUtil::removeConstraint(a2, v5));
  }
  else
  {
    *((uint32_t *)a1 + 35) = 1;
    if ( a3 != 0 && *((uint32_t *)a1 + 82) != 0 )
      hkpWorldCallbackUtil::fireConstraintRemoved(a1, a2, v6);
    result = (int)(uintptr_t)(hkpWorldConstraintUtil::removeConstraint(a2, v5));
    v4 = (*((uint32_t *)a1 + 35))-- == 1;
    if ( v4 && *((uint8_t *)a1 + 148) == 0 )
    {
      result = *((uint32_t *)a1 + 33);
      if ( result != 0 )
        result = hkpWorld::internal_executePendingOperations(a1);
      if ( *((uint32_t *)a1 + 39) == 1 )
      {
        result = *((uint32_t *)a1 + 34);
        if ( result != 0 )
          return hkpWorld::internal_executePendingBodyOperations(a1);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::splitSimulationIsland  (binary VA: 0x174d0e0)
// Original: hkpWorldOperationUtil::splitSimulationIsland
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpWorldOperationUtil::splitSimulationIsland(hkpSimulationIsland::Self *a1, hkpWorld::Self *a2, hkMemoryAllocator::Self *a3, uint32_t *a4)
{
  int v4;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v6;
  signed int v7;
  char *v8;
  void **v9;
  hkLifoAllocator::Self *result;
  int v11;
  hkLifoAllocator::Self *v12;
  char *v13;
  hkLifoAllocator::Self *v14;
  signed int v15;
  char *v16;
  int v17;
  int i;
  int v19;
  int v20;
  int v21;
  int v22;
  uint16_t v23;
  hkLifoAllocator::Self *v24;
  char *v25;
  hkLifoAllocator::Self *v26;
  char *v27;
  int v28;
  hkpSimulationIsland::Self *v29;
  int v30;
  int v31;
  char *v32;
  uint16_t v33;
  int v34;
  uint16_t v35;
  int v36;
  int v37;
  char v38;
  char *v39;
  hkLifoAllocator::Self *v40;
  int v41;
  int j;
  hkLifoAllocator::Self *v43;
  hkLifoAllocator::Self *v44;
  char *v45;
  int v46;
  hkpSimulationIsland::Self *v47;
  int v48;
  int v49;
  char *v50;
  uint16_t v51;
  int v52;
  uint16_t v53;
  int v54;
  signed int v55;
  hkLifoAllocator::Self *v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  uint32_t *v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  signed int v68;
  hkLifoAllocator::Self *v69;
  hkLifoAllocator::Self *v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  uint32_t *v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  hkLifoAllocator::Self *v82;
  char *v83;
  int v84;
  char v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int *v91;
  hkpSimulationIsland::Self *v92;
  hkpSimulationIsland::Self *v93;
  int v94;
  int v95;
  uint16_t *v96;
  int v97;
  hkArray<int, hkContainerHeapAllocator::Self> *v98;
  int v99;
  uint16_t *v100;
  int16_t v101;
  int v102;
  int v103;
  uint16_t *v104;
  int16_t v105;
  int v106;
  uint32_t *v107;
  int v108;
  int v109;
  uint32_t *v110;
  int v111;
  int v112;
  int v113;
  unsigned int v114;
  unsigned int v115;
  hkpSimulationIsland::Self *v116;
  unsigned int v117;
  int v118;
  int v119;
  int v120;
  unsigned int v121;
  int v122;
  int v123;
  unsigned int v124;
  int v125;
  int v126;
  int v127;
  char v128;
  hkLifoAllocator::Self *v129;
  hkLifoAllocator::Self *v130;
  signed int v131;
  int v132;
  bool v133;
  bool v134; // cc
  int v135;
  uint32_t *v136;
  int v137;
  int v138;
  int v139;
  int v140;
  unsigned int v141;
  unsigned int v142;
  unsigned int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  hkpSimulationIsland::Self *v148;
  unsigned int v149;
  typedef hkArray<int, hkContainerHeapAllocator::Self> ***_g4_t_v150;
  typedef hkArray<int, hkContainerHeapAllocator::Self> ***_g4_t_v151;
  typedef int _g4_t_v152;
  typedef int _g4_t_v153;
  typedef signed int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef hkArray<int, hkContainerHeapAllocator::Self> *_g4_t_v158;
  typedef uint32_t *_g4_t_v159;
  typedef signed int _g4_t_v160;
  typedef char *_g4_t_v161;
  typedef int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef hkMemoryAllocator::Self *_g4_t_v165;
  typedef int _g4_t_v166;
  typedef signed int _g4_t_v167;
  typedef uint32_t *_g4_t_v168;
  typedef hkpSimulationIsland::Self *_g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef char *_g4_t_v172;
  typedef hkLifoAllocator::Self **_g4_t_v173;
  typedef hkArray<int, hkContainerHeapAllocator::Self> *_g4_t_v174;
  typedef char _g4_t_v175;
  typedef char *_g4_t_v176;
  typedef char *_g4_t_v177;
  typedef int _g4_t_v178;
  typedef int _g4_t_v179;
  typedef int _g4_t_v180;
  typedef int _g4_t_v181;
  typedef int _g4_t_v182;
  typedef int _g4_t_v183;
  typedef int _g4_t_v184;
  typedef int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef uint32_t *_g4_t_v187;
  typedef uint32_t *_g4_t_v188;
  typedef hkArray<int, hkContainerHeapAllocator::Self> *_g4_t_v189;
  typedef int16_t _g4_t_v190;
  typedef int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef int _g4_t_v193;
  typedef int _g4_t_v194;
  typedef hkpSimulationIsland::Self *_g4_t_v195;
  typedef int _g4_t_v196;
  typedef uint16_t *_g4_t_v197;
  typedef uint16_t *_g4_t_v198;
  typedef int _g4_t_v199;
  typedef int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef unsigned int _g4_t_v203;
  typedef int _g4_t_v204;
  typedef int _g4_t_k;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef uint16_t *_g4_t_v208;
  typedef int16_t _g4_t_v209;
  typedef int _g4_t_v210;
  typedef hkpWorld::Self *_g4_t_v211;
  typedef hkpWorld::Self *_g4_t_v212;
  typedef hkpWorld::Self *_g4_t_v213;
  typedef char _g4_t_v214[4];
  typedef void *_g4_t_v215;
  typedef int _g4_t_v216;
  typedef uint32_t _g4_t_v217[4];
  typedef uint32_t _g4_t_v218[8];
  typedef void *_g4_t_v219;
  typedef int _g4_t_v220;
  typedef int _g4_t_v221;
  typedef int _g4_t_v222;
  typedef uint32_t _g4_t_v223[16];
  typedef hkArray<int, hkContainerHeapAllocator::Self> **_g4_t_v224;
  typedef int _g4_t_v225;
  typedef int _g4_t_v226;
  typedef uint32_t _g4_t_v227[39];
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (12u + sizeof(_g4_t_v150)) > _g4_s0 ? (12u + sizeof(_g4_t_v150)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v151)) > _g4_s1 ? (16u + sizeof(_g4_t_v151)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v152)) > _g4_s2 ? (16u + sizeof(_g4_t_v152)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v153)) > _g4_s3 ? (20u + sizeof(_g4_t_v153)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v154)) > _g4_s4 ? (36u + sizeof(_g4_t_v154)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v155)) > _g4_s5 ? (40u + sizeof(_g4_t_v155)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v156)) > _g4_s6 ? (44u + sizeof(_g4_t_v156)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v157)) > _g4_s7 ? (48u + sizeof(_g4_t_v157)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v158)) > _g4_s8 ? (56u + sizeof(_g4_t_v158)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v159)) > _g4_s9 ? (60u + sizeof(_g4_t_v159)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v160)) > _g4_s10 ? (60u + sizeof(_g4_t_v160)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v161)) > _g4_s11 ? (60u + sizeof(_g4_t_v161)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v162)) > _g4_s12 ? (64u + sizeof(_g4_t_v162)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v163)) > _g4_s13 ? (64u + sizeof(_g4_t_v163)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v164)) > _g4_s14 ? (64u + sizeof(_g4_t_v164)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v165)) > _g4_s15 ? (72u + sizeof(_g4_t_v165)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v166)) > _g4_s16 ? (72u + sizeof(_g4_t_v166)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v167)) > _g4_s17 ? (76u + sizeof(_g4_t_v167)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v168)) > _g4_s18 ? (80u + sizeof(_g4_t_v168)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v169)) > _g4_s19 ? (80u + sizeof(_g4_t_v169)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v170)) > _g4_s20 ? (84u + sizeof(_g4_t_v170)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v171)) > _g4_s21 ? (84u + sizeof(_g4_t_v171)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v172)) > _g4_s22 ? (88u + sizeof(_g4_t_v172)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v173)) > _g4_s23 ? (92u + sizeof(_g4_t_v173)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v174)) > _g4_s24 ? (96u + sizeof(_g4_t_v174)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v175)) > _g4_s25 ? (100u + sizeof(_g4_t_v175)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v176)) > _g4_s26 ? (100u + sizeof(_g4_t_v176)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v177)) > _g4_s27 ? (100u + sizeof(_g4_t_v177)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v178)) > _g4_s28 ? (100u + sizeof(_g4_t_v178)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v179)) > _g4_s29 ? (100u + sizeof(_g4_t_v179)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v180)) > _g4_s30 ? (100u + sizeof(_g4_t_v180)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v181)) > _g4_s31 ? (100u + sizeof(_g4_t_v181)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v182)) > _g4_s32 ? (104u + sizeof(_g4_t_v182)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v183)) > _g4_s33 ? (104u + sizeof(_g4_t_v183)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v184)) > _g4_s34 ? (104u + sizeof(_g4_t_v184)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v185)) > _g4_s35 ? (104u + sizeof(_g4_t_v185)) : _g4_s35,
    _g4_s37 = (108u + sizeof(_g4_t_v186)) > _g4_s36 ? (108u + sizeof(_g4_t_v186)) : _g4_s36,
    _g4_s38 = (108u + sizeof(_g4_t_v187)) > _g4_s37 ? (108u + sizeof(_g4_t_v187)) : _g4_s37,
    _g4_s39 = (108u + sizeof(_g4_t_v188)) > _g4_s38 ? (108u + sizeof(_g4_t_v188)) : _g4_s38,
    _g4_s40 = (108u + sizeof(_g4_t_v189)) > _g4_s39 ? (108u + sizeof(_g4_t_v189)) : _g4_s39,
    _g4_s41 = (108u + sizeof(_g4_t_v190)) > _g4_s40 ? (108u + sizeof(_g4_t_v190)) : _g4_s40,
    _g4_s42 = (108u + sizeof(_g4_t_v191)) > _g4_s41 ? (108u + sizeof(_g4_t_v191)) : _g4_s41,
    _g4_s43 = (108u + sizeof(_g4_t_v192)) > _g4_s42 ? (108u + sizeof(_g4_t_v192)) : _g4_s42,
    _g4_s44 = (108u + sizeof(_g4_t_v193)) > _g4_s43 ? (108u + sizeof(_g4_t_v193)) : _g4_s43,
    _g4_s45 = (108u + sizeof(_g4_t_v194)) > _g4_s44 ? (108u + sizeof(_g4_t_v194)) : _g4_s44,
    _g4_s46 = (112u + sizeof(_g4_t_v195)) > _g4_s45 ? (112u + sizeof(_g4_t_v195)) : _g4_s45,
    _g4_s47 = (116u + sizeof(_g4_t_v196)) > _g4_s46 ? (116u + sizeof(_g4_t_v196)) : _g4_s46,
    _g4_s48 = (116u + sizeof(_g4_t_v197)) > _g4_s47 ? (116u + sizeof(_g4_t_v197)) : _g4_s47,
    _g4_s49 = (116u + sizeof(_g4_t_v198)) > _g4_s48 ? (116u + sizeof(_g4_t_v198)) : _g4_s48,
    _g4_s50 = (116u + sizeof(_g4_t_v199)) > _g4_s49 ? (116u + sizeof(_g4_t_v199)) : _g4_s49,
    _g4_s51 = (116u + sizeof(_g4_t_v200)) > _g4_s50 ? (116u + sizeof(_g4_t_v200)) : _g4_s50,
    _g4_s52 = (116u + sizeof(_g4_t_v201)) > _g4_s51 ? (116u + sizeof(_g4_t_v201)) : _g4_s51,
    _g4_s53 = (116u + sizeof(_g4_t_v202)) > _g4_s52 ? (116u + sizeof(_g4_t_v202)) : _g4_s52,
    _g4_s54 = (116u + sizeof(_g4_t_v203)) > _g4_s53 ? (116u + sizeof(_g4_t_v203)) : _g4_s53,
    _g4_s55 = (120u + sizeof(_g4_t_v204)) > _g4_s54 ? (120u + sizeof(_g4_t_v204)) : _g4_s54,
    _g4_s56 = (120u + sizeof(_g4_t_k)) > _g4_s55 ? (120u + sizeof(_g4_t_k)) : _g4_s55,
    _g4_s57 = (120u + sizeof(_g4_t_v206)) > _g4_s56 ? (120u + sizeof(_g4_t_v206)) : _g4_s56,
    _g4_s58 = (120u + sizeof(_g4_t_v207)) > _g4_s57 ? (120u + sizeof(_g4_t_v207)) : _g4_s57,
    _g4_s59 = (120u + sizeof(_g4_t_v208)) > _g4_s58 ? (120u + sizeof(_g4_t_v208)) : _g4_s58,
    _g4_s60 = (120u + sizeof(_g4_t_v209)) > _g4_s59 ? (120u + sizeof(_g4_t_v209)) : _g4_s59,
    _g4_s61 = (120u + sizeof(_g4_t_v210)) > _g4_s60 ? (120u + sizeof(_g4_t_v210)) : _g4_s60,
    _g4_s62 = (124u + sizeof(_g4_t_v211)) > _g4_s61 ? (124u + sizeof(_g4_t_v211)) : _g4_s61,
    _g4_s63 = (124u + sizeof(_g4_t_v212)) > _g4_s62 ? (124u + sizeof(_g4_t_v212)) : _g4_s62,
    _g4_s64 = (124u + sizeof(_g4_t_v213)) > _g4_s63 ? (124u + sizeof(_g4_t_v213)) : _g4_s63,
    _g4_s65 = (128u + sizeof(_g4_t_v214)) > _g4_s64 ? (128u + sizeof(_g4_t_v214)) : _g4_s64,
    _g4_s66 = (132u + sizeof(_g4_t_v215)) > _g4_s65 ? (132u + sizeof(_g4_t_v215)) : _g4_s65,
    _g4_s67 = (136u + sizeof(_g4_t_v216)) > _g4_s66 ? (136u + sizeof(_g4_t_v216)) : _g4_s66,
    _g4_s68 = (148u + sizeof(_g4_t_v217)) > _g4_s67 ? (148u + sizeof(_g4_t_v217)) : _g4_s67,
    _g4_s69 = (164u + sizeof(_g4_t_v218)) > _g4_s68 ? (164u + sizeof(_g4_t_v218)) : _g4_s68,
    _g4_s70 = (196u + sizeof(_g4_t_v219)) > _g4_s69 ? (196u + sizeof(_g4_t_v219)) : _g4_s69,
    _g4_s71 = (200u + sizeof(_g4_t_v220)) > _g4_s70 ? (200u + sizeof(_g4_t_v220)) : _g4_s70,
    _g4_s72 = (204u + sizeof(_g4_t_v221)) > _g4_s71 ? (204u + sizeof(_g4_t_v221)) : _g4_s71,
    _g4_s73 = (208u + sizeof(_g4_t_v222)) > _g4_s72 ? (208u + sizeof(_g4_t_v222)) : _g4_s72,
    _g4_s74 = (212u + sizeof(_g4_t_v223)) > _g4_s73 ? (212u + sizeof(_g4_t_v223)) : _g4_s73,
    _g4_s75 = (276u + sizeof(_g4_t_v224)) > _g4_s74 ? (276u + sizeof(_g4_t_v224)) : _g4_s74,
    _g4_s76 = (280u + sizeof(_g4_t_v225)) > _g4_s75 ? (280u + sizeof(_g4_t_v225)) : _g4_s75,
    _g4_s77 = (284u + sizeof(_g4_t_v226)) > _g4_s76 ? (284u + sizeof(_g4_t_v226)) : _g4_s76,
    _g4_s78 = (288u + sizeof(_g4_t_v227)) > _g4_s77 ? (288u + sizeof(_g4_t_v227)) : _g4_s77
  };
  alignas(16) uint8_t _g4_sf[_g4_s78];
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 12u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 16u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 16u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 20u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 36u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 40u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 44u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 48u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 56u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 60u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 60u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 60u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 64u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 64u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 64u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 72u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 72u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 76u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 80u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 80u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 84u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 84u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 88u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 92u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 96u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 100u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 100u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 100u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 100u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 100u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 100u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 100u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 104u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 104u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 104u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 104u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 108u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 108u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 108u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 108u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 108u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 108u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 108u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 108u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 108u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 112u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 116u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 116u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 116u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 116u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 116u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 116u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 116u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 116u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 120u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 120u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 120u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 120u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 120u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 120u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 120u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 124u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 124u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 124u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 128u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 132u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 136u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 148u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 164u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 196u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 200u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 204u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 208u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 212u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 276u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 280u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 284u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 288u);

  v227[35] = (uint32_t)(uintptr_t)(&a1);
  v195 = a1;
  v211 = a2;
  v165 = a3;
  v4 = *((uint32_t *)a1 + 20);
  v168 = a4;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v6 = *address;
  v173 = address;
  v7 = (4 * v4 + 127) & 0xFFFFFF80;
  v8 = *((char **)*address + 3);
  if ( v7 <= *((uint32_t *)v6 + 2) && (unsigned int)(uintptr_t)(&v8[v7]) <= *((uint32_t *)v6 + 4) )
    *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)(&v8[v7]);
  else
    v8 = (char *)hkLifoAllocator::allocateFromNewSlab(v6, (4 * v4 + 127) & 0xFFFFFF80);
  v216 = v4;
  v215 = v8;
  hkUnionFind::Construct((hkUnionFind::Self *)v218, (int)(uintptr_t)(&v215), *((uint32_t *)v195 + 20));
  if ( (uint8_t)hkpSimulationIsland::isFullyConnected(v195, (hkUnionFind::Self *)v218) != 0 )
  {
    *((uint8_t *)v195 + 37) &= 0xF3u;
LABEL_6:
    v9 = (void **)*v173;
    result = (hkLifoAllocator::Self *)((4 * v216 + 127) & 0xFFFFFF80);
    if ( (int)(uintptr_t)(result) > *((uint32_t *)*v173 + 2) || v9[3] != (char *)result + (uint32_t)(uintptr_t)(v215) || v215 == v9[5] )
      return hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v9, (char *)v215, (4 * v216 + 127) & 0xFFFFFF80);
    v9[3] = v215;
    return result;
  }
  v224 = (hkArray<int, hkContainerHeapAllocator::Self> **)v227;
  v150 = &v224;
  v225 = 0;
  v226 = -2147483616;
  hkUnionFind::assignGroups((hkUnionFind::Self *)v214, (hkArray<int, hkContainerHeapAllocator::Self> *)v218);
  v11 = v225;
  v167 = (v225 + 128) & 0xFFFFFF80;
  v12 = *v173;
  v13 = *((char **)*v173 + 3);
  v172 = v13;
  if ( v167 <= *((uint32_t *)*v173 + 2) && (unsigned int)(uintptr_t)(&v13[v167]) <= *((uint32_t *)v12 + 4) )
  {
    *((uint32_t *)v12 + 3) = (uint32_t)(uintptr_t)(&v13[v167]);
    v204 = v11;
  }
  else
  {
    v172 = (char *)hkLifoAllocator::allocateFromNewSlab(v12, v167);
    v204 = v225;
  }
  if ( (*((uint8_t *)v195 + 37) & 4) != 0 )
  {
    if ( *((uint8_t *)v211 + 209) != 0 )
    {
      v14 = *v173;
      v15 = (4 * v204 + 127) & 0xFFFFFF80;
      v16 = *((char **)*v173 + 3);
      if ( v15 <= *((uint32_t *)*v173 + 2) && (unsigned int)(uintptr_t)(&v16[v15]) <= *((uint32_t *)v14 + 4) )
        *((uint32_t *)v14 + 3) = (uint32_t)(uintptr_t)(&v16[v15]);
      else
        v16 = (char *)hkLifoAllocator::allocateFromNewSlab(v14, (4 * v204 + 127) & 0xFFFFFF80);
      v219 = v16;
      v220 = v204;
      if ( v204 <= 0 )
      {
        v159 = (uint32_t *)(v16);
      }
      else
      {
        v17 = 0;
        while ( 1 )
        {
          *(uint32_t *)&v16[4 * v17++] = 0;
          if ( v17 == v204 )
            break;
          v16 = (char *)v219;
        }
        v159 = (uint32_t *)(v219);
      }
      if ( *((int *)v195 + 20) > 0 )
      {
        for ( i = 0; i < *((uint32_t *)v195 + 20); ++i )
        {
          v21 = *(uint32_t *)(*((uint32_t *)v195 + 19) + 4 * i);
          v196 = *((uint8_t *)v211 + 813);
          v22 = *(uint16_t *)(v21 + 234);
          v23 = *(uint16_t *)(v21 + 236);
          v175 = v22;
          v162 = v22;
          v186 = v22 >> 14;
          if ( *((uint8_t *)v211 + 814) == (int)v23 >> 14 )
          {
            v19 = ((int)v23 >> 7) & 0x7F;
            if ( v196 == v186 )
            {
LABEL_34:
              v20 = (v162 >> 7) & 0x7F;
              goto LABEL_27;
            }
          }
          else
          {
            v19 = v23 & 0x7F;
            if ( v196 == v186 )
              goto LABEL_34;
          }
          v20 = v175 & 0x7F;
LABEL_27:
          if ( v20 >= v19 )
            v19 = v20;
          if ( v19 <= 5 )
          {
            v159[*(uint32_t *)(*(uint32_t *)v218[0] + 4 * i)] = 1;
            v159 = (uint32_t *)(v219);
          }
        }
      }
      *v172 = 1;
      if ( v204 <= 0 )
        goto LABEL_159;
      v41 = 1;
      for ( j = 0; j != v204; ++j )
      {
        if ( *((uint32_t *)v219 + j) != 0 )
        {
          v159[j] = 0;
        }
        else
        {
          v159[j] = v41;
          v172[v41++] = 0;
        }
      }
      if ( v41 > j )
      {
LABEL_159:
        *v172 = 0;
      }
      else
      {
        v151 = &v224;
        hkUnionFind::reindex(v218, &v219, v41);
      }
      v55 = (4 * v220 + 127) & 0xFFFFFF80;
      v56 = *v173;
      if ( v55 > *((uint32_t *)*v173 + 2) || *((void **)v56 + 3) != (char *)v219 + v55 || v219 == *((void **)v56 + 5) )
        hkLifoAllocator::slowBlockFree(v56, (char *)v219, (4 * v220 + 127) & 0xFFFFFF80);
      else
        *((uint32_t *)v56 + 3) = (uint32_t)(uintptr_t)(v219);
      if ( v225 == 1 )
      {
LABEL_65:
        v40 = *v173;
        if ( v167 > *((uint32_t *)*v173 + 2) || *((char **)v40 + 3) != &v172[v167] || v172 == *((char **)v40 + 5) )
          hkLifoAllocator::slowBlockFree(*v173, v172, v167);
        else
          *((uint32_t *)v40 + 3) = (uint32_t)(uintptr_t)(v172);
        v225 = 0;
        if ( v226 >= 0 )
          (*(void (**)(uint32_t *, hkArray<int, hkContainerHeapAllocator::Self> **, int))(hkContainerHeapAllocator::s_alloc
                                                                                        + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v224,
            4 * v226);
        v224 = nullptr;
        v226 = 0x80000000;
        goto LABEL_6;
      }
      goto LABEL_64;
    }
    v43 = *v173;
    v160 = (4 * v204 + 127) & 0xFFFFFF80;
    v163 = v160;
    v25 = *((char **)*v173 + 3);
    if ( v160 <= *((uint32_t *)*v173 + 2) && (unsigned int)(uintptr_t)(&v25[v160]) <= *((uint32_t *)v43 + 4) )
      *((uint32_t *)v43 + 3) = (uint32_t)(uintptr_t)(&v25[v160]);
    else
      v25 = (char *)hkLifoAllocator::allocateFromNewSlab(v43, v160);
    v44 = *v173;
    v45 = *((char **)*v173 + 3);
    if ( v160 <= *((uint32_t *)*v173 + 2) && (unsigned int)(uintptr_t)(&v45[v160]) <= *((uint32_t *)v44 + 4) )
      *((uint32_t *)v44 + 3) = (uint32_t)(uintptr_t)(&v45[v160]);
    else
      v45 = (char *)hkLifoAllocator::allocateFromNewSlab(*v173, v160);
    v46 = 0;
    v219 = v45;
    v220 = v204;
    if ( v204 > 0 )
    {
      while ( 1 )
      {
        *(uint32_t *)&v45[v46] = 0;
        *(uint32_t *)&v25[v46] = 0;
        v46 += 4;
        if ( v46 == 4 * v204 )
          break;
        v45 = (char *)v219;
      }
    }
    if ( *((uint8_t *)v211 + 209) != 0 )
    {
      if ( *((int *)v195 + 20) <= 0 )
        goto LABEL_113;
      v177 = v25;
      v47 = v195;
      v48 = 0;
      do
      {
        v198 = *(uint16_t **)(*((uint32_t *)v47 + 19) + 4 * v48);
        v51 = v198[118];
        v183 = *(uint32_t *)(*(uint32_t *)v218[0] + 4 * v48);
        if ( *((uint8_t *)v211 + 814) == (int)v51 >> 14 )
          v52 = ((int)v51 >> 7) & 0x7F;
        else
          v52 = v51 & 0x7F;
        v53 = v198[117];
        if ( *((uint8_t *)v211 + 813) == (int)v53 >> 14 )
          v54 = ((int)v53 >> 7) & 0x7F;
        else
          v54 = v53 & 0x7F;
        if ( v54 < v52 )
          v54 = v52;
        if ( v54 <= 5 )
          *((uint32_t *)v219 + v183) = 1;
        v49 = v198[86];
        if ( v198[86] == 0 )
          v49 = 1;
        v50 = v177;
        ++v48;
        *(uint32_t *)&v177[4 * v183] += v49;
        v47 = v195;
      }
      while ( v48 < *((uint32_t *)v195 + 20) );
    }
    else
    {
      v57 = 0;
      if ( *((int *)v195 + 20) <= 0 )
        goto LABEL_113;
      do
      {
        v58 = *(uint32_t *)(*((uint32_t *)v195 + 19) + 4 * v57);
        v59 = *(uint32_t *)(*(uint32_t *)v218[0] + 4 * v57++);
        *((uint32_t *)v219 + v59) = 1;
        v60 = *(uint16_t *)(v58 + 172);
        if ( v60 == 0 )
          v60 = 1;
        v50 = v25;
        *(uint32_t *)&v25[4 * v59] += v60;
      }
      while ( v57 < *((uint32_t *)v195 + 20) );
    }
    v25 = v50;
LABEL_113:
    v61 = 0;
    if ( v204 > 0 )
    {
      v62 = (uint32_t *)(v219);
      do
      {
        if ( v62[v61] == 0 )
        {
          *(uint32_t *)&v25[4 * v61] = -1;
          v62 = (uint32_t *)(v219);
        }
        ++v61;
      }
      while ( v61 != v204 );
      v178 = 1;
      v63 = 1;
      v187 = v62;
      v199 = 0;
      v64 = *(uint32_t *)v25;
      if ( *(uint32_t *)v25 == -2 )
        goto LABEL_129;
LABEL_119:
      v170 = v199 + 1;
      v172[v199] = 0;
      v187[v63 - 1] = v199;
      if ( v64 < 0 )
      {
        ++v199;
LABEL_129:
        while ( v178 < v204 )
        {
LABEL_128:
          v63 = ++v178;
          v64 = *(uint32_t *)&v25[4 * v178 - 4];
          if ( v64 != -2 )
            goto LABEL_119;
        }
      }
      else
      {
        if ( v63 < v204 )
        {
          do
          {
            v67 = *((uint32_t *)v211 + 44);
            if ( v64 + 10 >= v67 )
              break;
            v65 = *(uint32_t *)&v25[4 * v63];
            if ( v65 >= 0 )
            {
              v66 = v64 + v65;
              if ( v66 < v67 )
              {
                v172[v199] = 1;
                v187[v63] = v199;
                *(uint32_t *)&v25[4 * v63] = -2;
                v64 = v66;
              }
            }
            ++v63;
          }
          while ( v63 != v204 );
          ++v199;
          goto LABEL_128;
        }
LABEL_172:
        v199 = v170;
      }
      goto LABEL_130;
    }
LABEL_266:
    v199 = 0;
LABEL_130:
    v151 = &v224;
    hkUnionFind::reindex(v218, &v219, v199);
    v68 = (4 * v220 + 127) & 0xFFFFFF80;
    v69 = *v173;
    if ( v68 > *((uint32_t *)*v173 + 2) || *((void **)v69 + 3) != (char *)v219 + v68 || v219 == *((void **)v69 + 5) )
      hkLifoAllocator::slowBlockFree(v69, (char *)v219, (4 * v220 + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v69 + 3) = (uint32_t)(uintptr_t)(v219);
    v70 = *v173;
    if ( v160 > *((uint32_t *)*v173 + 2) || *((char **)v70 + 3) != &v25[v163] || v25 == *((char **)v70 + 5) )
      hkLifoAllocator::slowBlockFree(v70, v25, v163);
    else
      *((uint32_t *)v70 + 3) = (uint32_t)(uintptr_t)(v25);
    goto LABEL_64;
  }
  if ( *((uint32_t *)v211 + 44) != 0 )
  {
    v160 = (4 * v204 + 127) & 0xFFFFFF80;
    v24 = *v173;
    v163 = v160;
    v25 = *((char **)*v173 + 3);
    if ( v160 <= *((uint32_t *)*v173 + 2) && (unsigned int)(uintptr_t)(&v25[v160]) <= *((uint32_t *)v24 + 4) )
      *((uint32_t *)v24 + 3) = (uint32_t)(uintptr_t)(&v25[v160]);
    else
      v25 = (char *)hkLifoAllocator::allocateFromNewSlab(v24, v160);
    v26 = *v173;
    v27 = *((char **)*v173 + 3);
    if ( v160 <= *((uint32_t *)*v173 + 2) && (unsigned int)(uintptr_t)(&v27[v160]) <= *((uint32_t *)v26 + 4) )
      *((uint32_t *)v26 + 3) = (uint32_t)(uintptr_t)(&v27[v160]);
    else
      v27 = (char *)hkLifoAllocator::allocateFromNewSlab(*v173, v160);
    v28 = 0;
    v219 = v27;
    v220 = v204;
    if ( v204 > 0 )
    {
      while ( 1 )
      {
        *(uint32_t *)&v27[v28] = 0;
        *(uint32_t *)&v25[v28] = 0;
        v28 += 4;
        if ( v28 == 4 * v204 )
          break;
        v27 = (char *)v219;
      }
    }
    if ( *((uint8_t *)v211 + 209) != 0 )
    {
      if ( *((int *)v195 + 20) <= 0 )
        goto LABEL_141;
      v176 = v25;
      v29 = v195;
      v30 = 0;
      do
      {
        v197 = *(uint16_t **)(*((uint32_t *)v29 + 19) + 4 * v30);
        v33 = v197[118];
        v182 = *(uint32_t *)(*(uint32_t *)v218[0] + 4 * v30);
        if ( *((uint8_t *)v211 + 814) == (int)v33 >> 14 )
          v34 = ((int)v33 >> 7) & 0x7F;
        else
          v34 = v33 & 0x7F;
        v35 = v197[117];
        if ( *((uint8_t *)v211 + 813) == (int)v35 >> 14 )
          v36 = ((int)v35 >> 7) & 0x7F;
        else
          v36 = v35 & 0x7F;
        if ( v36 < v34 )
          v36 = v34;
        if ( v36 <= 5 )
          *((uint32_t *)v219 + v182) = 1;
        v31 = v197[86];
        if ( v197[86] == 0 )
          v31 = 1;
        v32 = v176;
        ++v30;
        *(uint32_t *)&v176[4 * v182] += v31;
        v29 = v195;
      }
      while ( v30 < *((uint32_t *)v195 + 20) );
    }
    else
    {
      v71 = 0;
      if ( *((int *)v195 + 20) <= 0 )
        goto LABEL_141;
      do
      {
        v72 = *(uint32_t *)(*((uint32_t *)v195 + 19) + 4 * v71);
        v73 = *(uint32_t *)(*(uint32_t *)v218[0] + 4 * v71++);
        *((uint32_t *)v219 + v73) = 1;
        v74 = *(uint16_t *)(v72 + 172);
        if ( v74 == 0 )
          v74 = 1;
        v32 = v25;
        *(uint32_t *)&v25[4 * v73] += v74;
      }
      while ( v71 < *((uint32_t *)v195 + 20) );
    }
    v25 = v32;
LABEL_141:
    v75 = 0;
    if ( v204 > 0 )
    {
      v76 = (uint32_t *)(v219);
      do
      {
        if ( v76[v75] == 0 )
        {
          *(uint32_t *)&v25[4 * v75] = -1;
          v76 = (uint32_t *)(v219);
        }
        ++v75;
      }
      while ( v75 != v204 );
      v179 = 1;
      v77 = 1;
      v188 = v76;
      v199 = 0;
      v78 = *(uint32_t *)v25;
      if ( *(uint32_t *)v25 == -2 )
        goto LABEL_157;
      while ( 1 )
      {
        v170 = v199 + 1;
        v172[v199] = 0;
        v188[v77 - 1] = v199;
        if ( v78 < 0 )
          break;
        if ( v77 >= v204 )
          goto LABEL_172;
        do
        {
          v81 = *((uint32_t *)v211 + 44);
          if ( v78 + 10 >= v81 )
            break;
          v79 = *(uint32_t *)&v25[4 * v77];
          if ( v79 >= 0 )
          {
            v80 = v78 + v79;
            if ( v81 > v80 )
            {
              v172[v199] = 1;
              v188[v77] = v199;
              *(uint32_t *)&v25[4 * v77] = -2;
              v78 = v80;
            }
          }
          ++v77;
        }
        while ( v77 != v204 );
        ++v199;
LABEL_156:
        while ( 1 )
        {
          v77 = ++v179;
          v78 = *(uint32_t *)&v25[4 * v179 - 4];
          if ( v78 != -2 )
            break;
LABEL_157:
          if ( v179 >= v204 )
            goto LABEL_130;
        }
      }
      ++v199;
      if ( v179 < v204 )
        goto LABEL_156;
      goto LABEL_130;
    }
    goto LABEL_266;
  }
  hkString::memSet((hkString::Self *)v172, nullptr, v204 + 1);
LABEL_64:
  v37 = hkUnionFind::moveBiggestGroupToIndexZero((hkUnionFind::Self *)v218, (hkArray<int, hkContainerHeapAllocator::Self> *)&v224);
  v38 = *v172;
  v39 = &v172[v37];
  *v172 = *v39;
  *v39 = v38;
  v158 = *v224;
  v157 = *((uint32_t *)v195 + 20);
  v164 = v225;
  if ( v225 == 1 )
    goto LABEL_65;
  v154 = (4 * v225 + 127) & 0xFFFFFF80;
  v82 = *v173;
  v83 = *((char **)*v173 + 3);
  v161 = v83;
  if ( v154 <= *((uint32_t *)*v173 + 2) && (unsigned int)(uintptr_t)(&v83[v154]) <= *((uint32_t *)v82 + 4) )
    *((uint32_t *)v82 + 3) = (uint32_t)(uintptr_t)(&v83[v154]);
  else
    v161 = (char *)hkLifoAllocator::allocateFromNewSlab(v82, v154);
  *((uint8_t *)v195 + 37) = (4 * (*v172 != 0)) | *((uint8_t *)v195 + 37) & 0xF3;
  *(uint32_t *)v161 = (uint32_t)(uintptr_t)(v195);
  if ( v164 > 1 )
  {
    for ( k = 1; k != v164; ++k )
    {
      v84 = (*(int (**)(uint32_t, int, hkArray<int, hkContainerHeapAllocator::Self> ***))(**((uint32_t **)*v173 + 11) + 8))(
              *((uint32_t *)*v173 + 11),
              132,
              v150);
      hkpSimulationIsland::Construct((hkpSimulationIsland::Self *)v84, v211);
      v85 = *(uint8_t *)(v84 + 38) & 0xF0 | 5;
      *(uint8_t *)(v84 + 38) = v85;
      *(uint8_t *)(v84 + 37) = (4 * (v172[k] != 0)) | *(uint8_t *)(v84 + 37) & 0xF3;
      *(uint8_t *)(v84 + 38) = v85 & 0xCF | 0x10;
      *(uint16_t *)(v84 + 32) = *((uint32_t *)v165 + 1);
      v86 = *((uint32_t *)v165 + 1);
      if ( v86 == (*((uint32_t *)v165 + 2) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v165, 4, (int)(uintptr_t)(v151));
        v86 = *((uint32_t *)v165 + 1);
      }
      *(uint32_t *)(*(uint32_t *)v165 + 4 * v86) = v84;
      ++*((uint32_t *)v165 + 1);
      *(uint32_t *)&v161[4 * k] = v84;
      v87 = (int)(uintptr_t)(v224[k]);
      if ( v87 > (*(uint32_t *)(v84 + 84) & 0x3FFFFFFF) )
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v214,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)(v84 + 76),
          v87,
          4);
    }
  }
  v88 = *((uint32_t *)v195 + 20);
  v156 = *((uint32_t *)v195 + 19);
  if ( v168 != nullptr )
  {
    *((uint32_t *)v195 + 19) = *v168;
    *v168 = v156;
    v89 = *((uint32_t *)v195 + 20);
    *((uint32_t *)v195 + 20) = v168[1];
    v168[1] = v89;
    v90 = *((uint32_t *)v195 + 21);
    *((uint32_t *)v195 + 21) = v168[2];
    v168[2] = v90;
    v91 = (int *)v224;
    *((uint32_t *)v195 + 20) = 0;
    if ( *v91 > (*((uint32_t *)v195 + 21) & 0x3FFFFFFF) )
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v214,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)v195 + 19,
        *v91,
        4);
  }
  else
  {
    *((uint32_t *)v195 + 20) = 0;
  }
  v166 = 0;
  v155 = 4 * v88;
  v92 = v195;
  if ( v88 > 0 )
  {
    do
    {
      v93 = *(hkpSimulationIsland::Self **)&v161[4 * *(uint32_t *)((char *)v215 + v166)];
      v94 = *(uint32_t *)(v156 + v166);
      v171 = v94;
      *(uint32_t *)(v94 + 200) = (uint32_t)(uintptr_t)(v93);
      *(uint16_t *)(v94 + 164) = *((uint32_t *)v93 + 20);
      *(uint32_t *)(*((uint32_t *)v93 + 19) + 4 * (*((uint32_t *)v93 + 20))++) = v94;
      if ( v92 != v93 )
      {
        v95 = v94;
        v96 = *(uint16_t **)(v94 + 168);
        if ( *(uint16_t *)(v95 + 172) != 0 )
        {
          v184 = 0;
          v169 = v92;
          do
          {
            v97 = v96[10];
            v206 = v97;
            v200 = v96[11];
            v98 = (hkArray<int, hkContainerHeapAllocator::Self> *)v96[12];
            --*((uint32_t *)v169 + 7);
            v189 = v98;
            v174 = v98;
            v180 = *((uint32_t *)v169 + 2);
            v99 = *(uint32_t *)v96;
            if ( *(uint32_t *)(*(uint32_t *)v96 + 48) != 0 )
            {
              *((uint32_t *)v169 + 3) -= v97;
              *((uint32_t *)v169 + 4) -= v200;
              *((uint32_t *)v169 + 5) -= (uint32_t)(uintptr_t)v189;
              v100 = *(uint16_t **)(v99 + 48);
              v190 = v100[12] - (uint16_t)(uintptr_t)(v189);
              v100[11] -= v200;
              v101 = v100[10] - v97;
              v100[12] = v190;
              v100[10] = v101;
            }
            ++*((uint32_t *)v93 + 7);
            *(uint32_t *)(*(uint32_t *)v96 + 8) = (uint32_t)(uintptr_t)(v93);
            v102 = *(uint32_t *)v96;
            if ( *(uint32_t *)(*(uint32_t *)v96 + 48) != 0 )
            {
              v103 = v180;
              v191 = *(uint32_t *)v96;
              if ( *((uint32_t *)v93 + 2) >= v180 )
                v103 = *((uint32_t *)v93 + 2);
              if ( v103 < v206 )
                v103 = v206;
              *((uint32_t *)v93 + 3) += v206;
              *((uint32_t *)v93 + 2) = v103;
              *((uint32_t *)v93 + 4) += v200;
              *((uint32_t *)v93 + 5) += (uint32_t)(uintptr_t)v174;
              v104 = *(uint16_t **)(v102 + 48);
              v105 = v104[10];
              v104[12] += (uint16_t)(uintptr_t)(v174);
              v104[10] = v105 + v206;
              v104[11] += v200;
              v106 = *((uint32_t *)v93 + 2);
              if ( *(uint16_t *)(*(uint32_t *)(v191 + 48) + 20) >= v106 )
                v106 = *(uint16_t *)(*(uint32_t *)(v191 + 48) + 20);
              *((uint32_t *)v93 + 2) = v106;
            }
            v96 += 24;
            ++v184;
          }
          while ( v184 < *(uint16_t *)(v171 + 172) );
          v92 = v169;
        }
      }
      v166 += 4;
    }
    while ( v166 != v155 );
  }
  v207 = 0;
  v107 = *((uint32_t **)v211 + 8);
  v192 = *((uint32_t *)v195 + 15);
  v108 = *((uint32_t *)v195 + 16);
  v185 = v108;
  *((uint32_t *)v195 + 16) = 0;
  if ( v108 > 0 )
  {
    do
    {
      v109 = *(uint32_t *)(v192 + 4 * v207);
      v201 = v109;
      if ( v109 != 0 )
      {
        v220 = 0;
        v219 = &v222;
        v221 = -2147483632;
        G4_VCALL<void>(v109, 24, &v219);
        if ( v220 <= 0 )
        {
          v110 = nullptr;
        }
        else
        {
          v110 = *(uint32_t **)(*(uint32_t *)v219 + 200);
          if ( v107 == v110 )
          {
            v111 = 0;
            while ( ++v111 != v220 )
            {
              v110 = *(uint32_t **)(*((uint32_t *)v219 + v111) + 200);
              if ( v107 != v110 )
                goto LABEL_213;
            }
            v110 = v107;
          }
        }
LABEL_213:
        v220 = 0;
        if ( v221 >= 0 )
          (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v219,
            4 * v221);
        *(uint32_t *)(v201 + 12) = (uint32_t)(uintptr_t)(v110);
        v112 = v110[16];
        if ( v112 == (v110[17] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(v110 + 15),
            4,
            (int)(uintptr_t)(v151));
          v112 = v110[16];
        }
        *(uint32_t *)(v110[15] + 4 * v112) = v201;
        ++v110[16];
      }
      ++v207;
    }
    while ( v207 != v185 );
  }
  hkpWorld::lockForIslandSplit((pthread_mutex_t **)v211);
  if ( v157 > 8 * (v157 - (int)(uintptr_t)(v158)) )
  {
    v181 = 0;
    v219 = (char *)v195 + 112;
    v220 = (int)(uintptr_t)(v195) + 92;
    while ( 1 )
    {
      v193 = 0;
      v208 = (uint16_t *)*(&v219 + v181);
      v113 = *((uint32_t *)v208 + 2);
      while ( v193 < v113 )
      {
        v114 = *(uint32_t *)(*((uint32_t *)v208 + 1) + 4 * v193);
        v202 = v193 + 1;
        v115 = v114;
        if ( v181 != 0 )
        {
          while ( 1 )
          {
            if ( v202 != v113 )
            {
LABEL_225:
              if ( v115 >= v114 + 512 )
                goto LABEL_232;
              goto LABEL_226;
            }
            while ( 1 )
            {
              if ( v115 >= v114 + *v208 )
                goto LABEL_232;
LABEL_226:
              v116 = *(hkpSimulationIsland::Self **)(*(uint32_t *)(v115 + 16) + *(char *)(*(uint32_t *)(v115 + 16) + 16) + 200);
              if ( *((uint16_t *)v116 + 16) == 0xFFFF )
                v116 = *(hkpSimulationIsland::Self **)(*(uint32_t *)(v115 + 20) + *(char *)(*(uint32_t *)(v115 + 20) + 16) + 200);
              if ( v116 == v195 )
                break;
              v117 = v115 - v114;
              hkAgentNnMachine_CopyAndRelinkAgentEntry((uint16_t *)v116 + 46, v115);
              hkAgentNnMachine_InternalDeallocateEntry(v208, v115);
              v113 = *((uint32_t *)v208 + 2);
              if ( v193 >= v113 )
              {
                v118 = *((uint32_t *)v208 + 2);
                goto LABEL_235;
              }
              v114 = *(uint32_t *)(*((uint32_t *)v208 + 1) + 4 * v193);
              v115 = v117 + v114;
              if ( v202 != v113 )
                goto LABEL_225;
            }
            v115 += *(uint8_t *)(v115 + 3);
          }
        }
        while ( 2 )
        {
          v147 = 512;
          if ( v202 == v113 )
            v147 = *v208;
          if ( v115 >= v114 + v147 )
          {
LABEL_232:
            ++v193;
          }
          else
          {
            v148 = *(hkpSimulationIsland::Self **)(*(uint32_t *)(v115 + 16) + *(char *)(*(uint32_t *)(v115 + 16) + 16) + 200);
            if ( *((uint16_t *)v148 + 16) == 0xFFFF )
              v148 = *(hkpSimulationIsland::Self **)(*(uint32_t *)(v115 + 20) + *(char *)(*(uint32_t *)(v115 + 20) + 16) + 200);
            if ( v148 == v195 )
            {
              v115 += *(uint8_t *)(v115 + 3);
              continue;
            }
            v149 = v115 - v114;
            hkAgentNnMachine_CopyAndRelinkAgentEntry((uint16_t *)v148 + 56, v115);
            hkAgentNnMachine_InternalDeallocateEntry(v208, v115);
            v118 = *((uint32_t *)v208 + 2);
            if ( v193 < v118 )
            {
              v114 = *(uint32_t *)(*((uint32_t *)v208 + 1) + 4 * v193);
              v113 = *((uint32_t *)v208 + 2);
              v115 = v149 + v114;
              continue;
            }
LABEL_235:
            v113 = v118;
            ++v193;
          }
          break;
        }
      }
      if ( ++v181 == 2 )
        goto LABEL_242;
    }
  }
  v194 = 0;
  v217[0] = (uint32_t)(uintptr_t)((char *)v195 + 112);
  v217[1] = (uint32_t)(uintptr_t)((char *)v195 + 92);
  do
  {
    v221 = 0;
    v222 = -2147483647;
    LOWORD(v219) = 512;
    v132 = v217[v194];
    v220 = (int)(uintptr_t)(v223);
    v133 = *(uint32_t *)(v132 + 8) == 1;
    v134 = *(uint32_t *)(v132 + 8) <= 1;
    BYTE2(v219) = *(uint8_t *)(v132 + 2);
    if ( v133 )
    {
      v138 = 1;
      v145 = **(uint32_t **)(v132 + 4);
      v221 = 1;
      v223[0] = v145;
      LOWORD(v219) = *(uint16_t *)v132;
      *(uint32_t *)(v132 + 8) = 0;
      *(uint16_t *)v132 = 512;
      v136 = v223;
LABEL_272:
      v210 = 0;
      while ( 1 )
      {
        v139 = (uint16_t)(uintptr_t)(v219);
        v140 = v210++;
        if ( v138 != v210 )
          v139 = 512;
        v141 = v136[v140];
        v142 = v141 + v139;
        v203 = v141;
        v143 = v141;
        if ( v141 < v142 )
        {
          if ( v194 != 0 )
          {
            do
            {
              v144 = *(uint32_t *)(*(uint32_t *)(v143 + 16) + *(char *)(*(uint32_t *)(v143 + 16) + 16) + 200);
              if ( *(uint16_t *)(v144 + 32) == 0xFFFF )
                v144 = *(uint32_t *)(*(uint32_t *)(v143 + 20) + *(char *)(*(uint32_t *)(v143 + 20) + 16) + 200);
              hkAgentNnMachine_CopyAndRelinkAgentEntry((uint16_t *)(v144 + 92), v143);
              v143 += *(uint8_t *)(v143 + 3);
            }
            while ( v142 > v143 );
          }
          else
          {
            do
            {
              v146 = *(uint32_t *)(*(uint32_t *)(v143 + 16) + *(char *)(*(uint32_t *)(v143 + 16) + 16) + 200);
              if ( *(uint16_t *)(v146 + 32) == 0xFFFF )
                v146 = *(uint32_t *)(*(uint32_t *)(v143 + 20) + *(char *)(*(uint32_t *)(v143 + 20) + 16) + 200);
              hkAgentNnMachine_CopyAndRelinkAgentEntry((uint16_t *)(v146 + 112), v143);
              v143 += *(uint8_t *)(v143 + 3);
            }
            while ( v143 < v142 );
          }
        }
        (*(void (**)(uint32_t, unsigned int, int))(**((uint32_t **)*v173 + 11) + 12))(
          *((uint32_t *)*v173 + 11),
          v203,
          512);
        v138 = v221;
        if ( v221 <= v210 )
          break;
        v136 = (uint32_t *)v220;
      }
      v119 = v222;
      goto LABEL_239;
    }
    if ( v134 )
    {
      *(uint16_t *)v132 = 512;
      goto LABEL_241;
    }
    hkArrayUtil::reserve((hkArrayUtil::Self *)v214, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v220, 2, 4);
    v135 = v222;
    v136 = *(uint32_t **)(v132 + 4);
    *(uint32_t *)(v132 + 4) = v220;
    v137 = *(uint32_t *)(v132 + 8);
    *(uint32_t *)(v132 + 8) = v221;
    v119 = *(uint32_t *)(v132 + 12);
    *(uint32_t *)(v132 + 12) = v135;
    v209 = (int16_t)(uintptr_t)(v219);
    LOWORD(v219) = *(uint16_t *)v132;
    v220 = (int)(uintptr_t)(v136);
    v221 = v137;
    v222 = v119;
    *(uint16_t *)v132 = v209;
    if ( v137 > 0 )
    {
      v138 = v137;
      goto LABEL_272;
    }
LABEL_239:
    v221 = 0;
    if ( v119 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v220,
        4 * v119);
LABEL_241:
    ++v194;
  }
  while ( v194 != 2 );
LABEL_242:
  hkpWorld::unlockForIslandSplit(v211);
  v120 = *((uint32_t *)v195 + 31);
  if ( v120 >= 0 )
  {
    v212 = *((hkpWorld::Self **)v195 + 30);
    v121 = ((unsigned int)(uintptr_t)(v212) + 3)
         | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)
         | ((((unsigned int)(uintptr_t)(v212) + 3) | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)) >> 8)
         | ((((unsigned int)(uintptr_t)(v212) + 3)
           | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)
           | ((((unsigned int)(uintptr_t)(v212) + 3) | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)) >> 8)) >> 4)
         | ((((unsigned int)(uintptr_t)(v212) + 3)
           | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)
           | ((((unsigned int)(uintptr_t)(v212) + 3) | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)) >> 8)
           | ((((unsigned int)(uintptr_t)(v212) + 3)
             | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)
             | ((((unsigned int)(uintptr_t)(v212) + 3) | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)) >> 8)) >> 4)) >> 2);
    v122 = (v121 | (v121 >> 1)) + 1;
    if ( v122 <= 0 )
    {
      hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, (int *)v195 + 29, 4, (int)(uintptr_t)(v195) + 128, 1);
    }
    else if ( v122 < (v120 & 0x3FFFFFFF) )
    {
      hkArrayUtil::reduce(
        &hkContainerHeapAllocator::s_alloc,
        (int *)v195 + 29,
        4,
        0,
        (v121
       | ((((unsigned int)(uintptr_t)(v212) + 3)
         | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)
         | ((((unsigned int)(uintptr_t)(v212) + 3) | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)) >> 8)
         | ((((unsigned int)(uintptr_t)(v212) + 3)
           | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)
           | ((((unsigned int)(uintptr_t)(v212) + 3) | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)) >> 8)) >> 4)
         | ((((unsigned int)(uintptr_t)(v212) + 3)
           | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)
           | ((((unsigned int)(uintptr_t)(v212) + 3) | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)) >> 8)
           | ((((unsigned int)(uintptr_t)(v212) + 3)
             | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)
             | ((((unsigned int)(uintptr_t)(v212) + 3) | (((unsigned int)(uintptr_t)(v212) + 3) >> 16)) >> 8)) >> 4)) >> 2)) >> 1))
      + 1);
    }
  }
  v123 = *((uint32_t *)v195 + 26);
  if ( v123 >= 0 )
  {
    v213 = *((hkpWorld::Self **)v195 + 25);
    v124 = ((unsigned int)(uintptr_t)(v213) + 3)
         | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)
         | ((((unsigned int)(uintptr_t)(v213) + 3) | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)) >> 8)
         | ((((unsigned int)(uintptr_t)(v213) + 3)
           | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)
           | ((((unsigned int)(uintptr_t)(v213) + 3) | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)) >> 8)) >> 4)
         | ((((unsigned int)(uintptr_t)(v213) + 3)
           | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)
           | ((((unsigned int)(uintptr_t)(v213) + 3) | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)) >> 8)
           | ((((unsigned int)(uintptr_t)(v213) + 3)
             | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)
             | ((((unsigned int)(uintptr_t)(v213) + 3) | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)) >> 8)) >> 4)) >> 2);
    v125 = (v124 | (v124 >> 1)) + 1;
    if ( v125 <= 0 )
    {
      v153 = 1;
      v152 = (int)(uintptr_t)(v195) + 108;
    }
    else
    {
      if ( v125 >= (v123 & 0x3FFFFFFF) )
        goto LABEL_249;
      v153 = (v124
            | ((((unsigned int)(uintptr_t)(v213) + 3)
              | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)
              | ((((unsigned int)(uintptr_t)(v213) + 3) | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)) >> 8)
              | ((((unsigned int)(uintptr_t)(v213) + 3)
                | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)
                | ((((unsigned int)(uintptr_t)(v213) + 3) | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)) >> 8)) >> 4)
              | ((((unsigned int)(uintptr_t)(v213) + 3)
                | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)
                | ((((unsigned int)(uintptr_t)(v213) + 3) | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)) >> 8)
                | ((((unsigned int)(uintptr_t)(v213) + 3)
                  | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)
                  | ((((unsigned int)(uintptr_t)(v213) + 3) | (((unsigned int)(uintptr_t)(v213) + 3) >> 16)) >> 8)) >> 4)) >> 2)) >> 1))
           + 1;
      v152 = 0;
    }
    hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, (int *)v195 + 24, 4, v152, v153);
  }
LABEL_249:
  v126 = 1;
  if ( v164 > 1 )
  {
    do
    {
      v127 = *(uint32_t *)&v161[4 * v126];
      v128 = v126++;
      *(uint8_t *)(v127 + 36) = *((uint8_t *)v195 + 36) + v128;
    }
    while ( v126 != v164 );
  }
  v129 = *v173;
  if ( v154 > *((uint32_t *)*v173 + 2) || *((char **)v129 + 3) != &v161[v154] || v161 == *((char **)v129 + 5) )
    hkLifoAllocator::slowBlockFree(*v173, v161, v154);
  else
    *((uint32_t *)v129 + 3) = (uint32_t)(uintptr_t)(v161);
  v130 = *v173;
  if ( v167 > *((uint32_t *)*v173 + 2) || *((char **)v130 + 3) != &v172[v167] || v172 == *((char **)v130 + 5) )
    hkLifoAllocator::slowBlockFree(*v173, v172, v167);
  else
    *((uint32_t *)v130 + 3) = (uint32_t)(uintptr_t)(v172);
  v225 = 0;
  if ( v226 >= 0 )
    (*(void (**)(uint32_t *, hkArray<int, hkContainerHeapAllocator::Self> **, int))(hkContainerHeapAllocator::s_alloc
                                                                                  + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v224,
      4 * v226);
  v226 = 0x80000000;
  v224 = nullptr;
  v131 = (4 * v216 + 127) & 0xFFFFFF80;
  result = *v173;
  if ( v131 > *((uint32_t *)*v173 + 2) || *((void **)result + 3) != (char *)v215 + v131 || v215 == *((void **)result + 5) )
    return hkLifoAllocator::slowBlockFree(result, (char *)v215, (4 * v216 + 127) & 0xFFFFFF80);
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v215);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::validateWorld  (binary VA: 0x174ee30)
// Original: hkpWorldOperationUtil::validateWorld
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::validateWorld(hkpWorldOperationUtil::Self *self)
{
  int v1;
  int v2;
  hkpSimulationIsland::Self *v3;
  int v4;
  int v5;
  hkpSimulationIsland::Self *v6;

  v1 = *((uint32_t *)self + 11) - 1;
  v2 = 4 * v1;
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      v3 = *(hkpSimulationIsland::Self **)(*((uint32_t *)self + 10) + v2);
      v2 -= 4;
      hkpSimulationIsland::isValid(v3);
    }
    while ( v1 != -1 );
  }
  v4 = *((uint32_t *)self + 14) - 1;
  v5 = 4 * v4;
  if ( v4 >= 0 )
  {
    do
    {
      --v4;
      v6 = *(hkpSimulationIsland::Self **)(*((uint32_t *)self + 13) + v5);
      v5 -= 4;
      hkpSimulationIsland::isValid(v6);
    }
    while ( v4 != -1 );
  }
  return ((hkpSimulationIsland::isValid(*((hkpSimulationIsland::Self **)self + 8))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removeAttachedConstraints  (binary VA: 0x174eec0)
// Original: hkpWorldOperationUtil::removeAttachedConstraints
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::removeAttachedConstraints(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int32_t v13; // kr04_4
  int v14;
  int v15;
  int v16;
  hkpWorldCallbackUtil::Self *v17;
  int v18;

  v2 = a1;
  v17 = *(hkpWorldCallbackUtil::Self **)(a1 + 8);
  v15 = *(uint16_t *)(a1 + 172) - 1;
  if ( *(uint16_t *)(a1 + 172) != 0 )
  {
    v3 = 48 * (*(uint16_t *)(a1 + 172) - 1);
    do
    {
      v5 = *(uint32_t *)(*(uint32_t *)(a1 + 168) + v3);
      if ( *(uint16_t *)(v5 + 6) != 0 )
      {
        do
        {
          v7 = *(uint32_t *)(v5 + 4);
          HIWORD(v6) = HIWORD(v7);
          LOWORD(v6) = 0;
        }
        while ( v7 != __sync_val_compare_and_swap(
                        (volatile int32_t *)(v5 + 4),
                        v7,
                        v6 | (uint16_t)(v7 + 1)) );
      }
      hkpWorldOperationUtil::removeConstraintImmediately(v17, (hkpWorldConstraintUtil::Self *)v5, 0);
      v4 = *((uint32_t *)a2 + 1);
      if ( v4 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v14);
        v4 = *((uint32_t *)a2 + 1);
      }
      --v15;
      v3 -= 48;
      *(uint32_t *)(*(uint32_t *)a2 + 4 * v4) = v5;
      ++*((uint32_t *)a2 + 1);
    }
    while ( v15 != -1 );
    v2 = a1;
  }
  v16 = *(uint32_t *)(v2 + 180) - 1;
  result = v16;
  if ( v16 >= 0 )
  {
    v18 = v2;
    v9 = 4 * v16;
    do
    {
      v11 = *(uint32_t *)(*(uint32_t *)(v18 + 176) + v9);
      if ( *(uint16_t *)(v11 + 6) != 0 )
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
      hkpWorldOperationUtil::removeConstraintImmediately(v17, (hkpWorldConstraintUtil::Self *)v11, 0);
      v10 = *((uint32_t *)a2 + 1);
      if ( v10 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v14);
        v10 = *((uint32_t *)a2 + 1);
      }
      result = *(uint32_t *)a2;
      --v16;
      v9 -= 4;
      *(uint32_t *)(*(uint32_t *)a2 + 4 * v10) = v11;
      ++*((uint32_t *)a2 + 1);
    }
    while ( v16 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removeAttachedAgentsConnectingTheEntityAndAFixedPartnerEntityPlus  (binary VA: 0x174f080)
// Original: hkpWorldOperationUtil::removeAttachedAgentsConnectingTheEntityAndAFixedPartnerEntityPlus
// ----------------------------------------------------------------------------
char * hkpWorldOperationUtil::removeAttachedAgentsConnectingTheEntityAndAFixedPartnerEntityPlus(int a1, int a2, uint16_t *a3, int a4)
{
  char *result;
  uint32_t *v5;
  int v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  int IslandFromAgentEntry;
  unsigned int *v11;
  unsigned int v12;
  int v13;
  int v14;
  uint16_t *v15;
  char *v16;
  char *v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;

  result = hkpLinkedCollidable::getCollisionEntriesDeterministicUnchecked((hkpLinkedCollidable::Self *)(a2 + 16));
  v5 = (uint32_t *)(result);
  if ( *((int *)result + 1) <= 0 )
    return result;
  if ( a4 == 5 )
  {
    v17 = *((char **)result + 1);
    v8 = 0;
    v9 = (uint32_t *)(result);
    while ( 1 )
    {
      v11 = (unsigned int *)(*v9 + 8 * v8);
      v12 = *v11;
      result = (char *)*(uint8_t *)(*v11 + 14);
      if ( *(uint8_t *)(a1 + 2) != (uint8_t)(uintptr_t)(result) )
        goto LABEL_12;
      v13 = *(char *)(v11[1] + 16) + v11[1];
      if ( *(uint8_t *)(v13 + 232) == 5 )
        break;
      v20 = v9;
      v18 = *(char *)(v11[1] + 16) + v11[1];
      IslandFromAgentEntry = hkpWorldAgentUtil::getIslandFromAgentEntry(
                               v12,
                               *(uint32_t *)(a2 + 200),
                               *(uint32_t *)(v13 + 200));
      v9 = v20;
      if ( *(uint32_t *)(a2 + 200) == IslandFromAgentEntry )
      {
        v14 = *(uint32_t *)(v18 + 200);
        if ( *(uint8_t *)(*v11 + 14) == 2 )
          v15 = (uint16_t *)(v14 + 112);
        else
          v15 = (uint16_t *)(v14 + 92);
        v19 = v20;
        hkAgentNnMachine_CopyAndRelinkAgentEntry(v15, *v11);
        goto LABEL_16;
      }
LABEL_11:
      result = (char *)v9[1];
      v17 = result;
LABEL_12:
      if ( ++v8 >= (int)(uintptr_t)(v17) )
        return result;
    }
    v19 = v9;
    hkAgentNnMachine_CopyAndRelinkAgentEntry(a3, v12);
LABEL_16:
    hkAgentNnMachine_InternalDeallocateEntry((uint16_t *)a1, v12);
    v9 = v19;
    goto LABEL_11;
  }
  v6 = 0;
  v16 = *((char **)result + 1);
  do
  {
    while ( 1 )
    {
      result = (char *)(*v5 + 8 * v6);
      v7 = *(uint32_t *)result;
      if ( *(uint8_t *)(a1 + 2) == *(uint8_t *)(*(uint32_t *)result + 14) )
      {
        result = *((char **)result + 1);
        if ( result[result[16] + 232] == 5 )
          break;
      }
      if ( (int)(uintptr_t)(v16) <= ++v6 )
        return result;
    }
    ++v6;
    hkAgentNnMachine_CopyAndRelinkAgentEntry(a3, v7);
    hkAgentNnMachine_InternalDeallocateEntry((uint16_t *)a1, v7);
    result = (char *)v5[1];
    v16 = result;
  }
  while ( (int)(uintptr_t)(result) > v6 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::internalDeactivateIsland  (binary VA: 0x174f200)
// Original: hkpWorldOperationUtil::internalDeactivateIsland
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::internalDeactivateIsland(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::Self *v2;
  int result;
  int v4;
  int v5;
  hkSweptTransformUtil::Self *v6; // xmm0_4
  hkpWorld::Self *v7;
  int v8;
  int v9;
  hkMotionState::Self *v10;
  int v11;
  int v12;
  hkpWorld::Self *v13;

  v2 = a2;
  if ( (uint8_t)hkRigidMotionUtilCanDeactivateFinal(
                          (char *)self + 480,
                          *((uint32_t *)a2 + 19),
                          *((uint32_t *)a2 + 20),
                          224) != 0 )
  {
    v4 = *((uint32_t *)self + 14);
    if ( v4 == (*((uint32_t *)self + 15) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpWorldOperationUtil::Self *)((char *)self + 52),
        4,
        v11);
      v4 = *((uint32_t *)self + 14);
    }
    *(uint32_t *)(*((uint32_t *)self + 13) + 4 * v4) = (uint32_t)(uintptr_t)(a2);
    ++*((uint32_t *)self + 14);
    *(uint32_t *)(*((uint32_t *)self + 10) + 4 * *((uint16_t *)a2 + 16)) = *(uint32_t *)(*((uint32_t *)self + 10)
                                                                                         + 4 * *((uint32_t *)self + 11)
                                                                                         - 4);
    *(uint16_t *)(*(uint32_t *)(*((uint32_t *)self + 10) + 4 * *((uint16_t *)a2 + 16)) + 32) = *((uint16_t *)a2 + 16);
    v12 = *((uint32_t *)self + 14);
    --*((uint32_t *)self + 11);
    *((uint16_t *)a2 + 16) = v12 - 1;
    *((uint8_t *)a2 + 38) &= 0xFCu;
    v5 = *((uint32_t *)a2 + 20);
    v6 = *((hkSweptTransformUtil::Self **)self + 120);
    *((uint32_t *)a2 + 18) = (uint32_t)(uintptr_t)(v6);
    if ( v5 > 0 )
    {
      v7 = a2;
      v8 = 0;
      while ( 1 )
      {
        v13 = v7;
        v9 = *(uint32_t *)(*((uint32_t *)v7 + 19) + 4 * v8++);
        hkSweptTransformUtil::freezeMotionState(v6, COERCE_FLOAT(v9 + 240), v10);
        G4_VCALL<void>(v9 + 224, 80, &unk_1D12E20);
        G4_VCALL<void>(v9 + 224, 84, &unk_1D12E20);
        v7 = v13;
        if ( *((uint32_t *)v13 + 20) <= v8 )
          break;
        v6 = *((hkSweptTransformUtil::Self **)v13 + 18);
      }
      v2 = v13;
    }
    return (int)(uintptr_t)(hkpWorldCallbackUtil::fireIslandDeactivated(self, v2, v10));
  }
  else
  {
    result = *((uint8_t *)a2 + 38) & 0xF3 | 4;
    *((uint8_t *)a2 + 38) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::markIslandInactive  (binary VA: 0x174f3b0)
// Original: hkpWorldOperationUtil::markIslandInactive
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::markIslandInactive(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  pthread_mutex_t *mutex;
  unsigned int count;
  int result;
  hkpWorld::Self *v5;
  int v6;
  int v7;

  *((uint8_t *)a2 + 38) &= 0xF3u;
  mutex = *((pthread_mutex_t **)self + 47);
  count = ((int32_t *)(mutex))[1];
  if ( count != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --count == 0 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  if ( *((uint16_t *)a2 + 17) == 0xFFFF )
  {
    v5 = a2;
    *((uint16_t *)a2 + 17) = *((uint32_t *)self + 17);
    v6 = *((uint32_t *)self + 17);
    if ( v6 == (*((uint32_t *)self + 18) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpWorldOperationUtil::Self *)((char *)self + 64),
        4,
        v7);
      v6 = *((uint32_t *)self + 17);
      v5 = a2;
    }
    *(uint32_t *)(*((uint32_t *)self + 16) + 4 * v6) = (uint32_t)(uintptr_t)(v5);
    ++*((uint32_t *)self + 17);
  }
  result = pthread_mutex_unlock(*((pthread_mutex_t **)self + 47));
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::splitSimulationIsland  (binary VA: 0x174f500)
// Original: hkpWorldOperationUtil::splitSimulationIsland
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::splitSimulationIsland(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  char v2; // bp
  char *v3;
  int v4;
  int result;
  char v6; // bp
  int v7;
  int v8;
  int v9;
  char v10; // bp
  int v11;
  uint32_t *v12;
  int v13;
  hkpWorld::Self *v14;
  uint32_t *v15;
  char v16;
  char v17;

  v2 = *((uint8_t *)a2 + 38);
  v3 = (char *)self + 40;
  if ( (v2 & 1) == 0 )
    v3 = (char *)self + 52;
  *((uint8_t *)a2 + 37) &= 0xFCu;
  v4 = *((uint32_t *)v3 + 1);
  hkpWorldOperationUtil::splitSimulationIsland(a2, self, (hkMemoryAllocator::Self *)v3, nullptr);
  result = (*((uint8_t *)a2 + 38) & 4) != 0;
  if ( *((uint32_t *)v3 + 1) > v4 )
  {
    v16 = v4;
    if ( (v2 & 1) != 0 )
    {
      if ( (*((uint8_t *)a2 + 38) & 4) != 0 )
      {
        v6 = v2 & 1;
        v7 = 4 * v4;
        do
        {
          v8 = *(uint32_t *)(*(uint32_t *)v3 + v7);
          v7 += 4;
          *(uint8_t *)(v8 + 38) = v6 | (4 * v6) | *(uint8_t *)(v8 + 38) & 0xF0;
          result = v4 + (uint8_t)(*((uint8_t *)a2 + 36) - v16);
          ++v4;
          *(uint8_t *)(v8 + 36) = result;
        }
        while ( v4 < *((uint32_t *)v3 + 1) );
      }
      else
      {
        v17 = v2 & 1;
        v12 = (uint32_t *)(v3);
        v13 = 4 * v4;
        do
        {
          v15 = v12;
          v14 = *(hkpWorld::Self **)(*v12 + v13);
          v13 += 4;
          *((uint8_t *)v14 + 38) = v17 | (4 * v17) | *((uint8_t *)v14 + 38) & 0xF0;
          hkpWorldOperationUtil::markIslandInactive(self, v14);
          v12 = v15;
          result = v4 + (uint8_t)(*((uint8_t *)a2 + 36) - v16);
          ++v4;
          *((uint8_t *)v14 + 36) = result;
        }
        while ( v15[1] > v4 );
      }
    }
    else
    {
      v9 = 4 * v4;
      v10 = v2 & 1;
      do
      {
        v11 = *(uint32_t *)(*(uint32_t *)v3 + v9);
        v9 += 4;
        *(uint8_t *)(v11 + 38) = v10 | *(uint8_t *)(v11 + 38) & 0xF0;
        result = v4 + (uint8_t)(*((uint8_t *)a2 + 36) - v16);
        ++v4;
        *(uint8_t *)(v11 + 36) = result;
      }
      while ( v4 < *((uint32_t *)v3 + 1) );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::splitSimulationIslands  (binary VA: 0x174f6a0)
// Original: hkpWorldOperationUtil::splitSimulationIslands
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::splitSimulationIslands(hkpWorldOperationUtil::Self *self)
{
  int v1;
  int v2;
  int result;
  hkpWorld::Self *v4;

  if ( *((uint8_t *)self + 196) != 0 )
  {
    v1 = *((uint32_t *)self + 11) - 1;
    if ( v1 >= 0 )
    {
      v2 = 4 * v1;
      do
      {
        while ( 1 )
        {
          result = *(uint32_t *)(*((uint32_t *)self + 10) + v2);
          if ( (*(uint8_t *)(result + 37) & 1) != 0 )
            break;
          --v1;
          v2 -= 4;
          if ( v1 == -1 )
            return result;
        }
        v4 = *(hkpWorld::Self **)(*((uint32_t *)self + 10) + v2);
        --v1;
        v2 -= 4;
        result = hkpWorldOperationUtil::splitSimulationIsland(self, v4);
      }
      while ( v1 != -1 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::markIslandInactiveMt  (binary VA: 0x174f720)
// Original: hkpWorldOperationUtil::markIslandInactiveMt
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::markIslandInactiveMt(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  pthread_mutex_t *mutex;
  unsigned int count;
  int result;
  hkpWorld::Self *v5;
  int v6;
  int v7;

  *((uint8_t *)a2 + 38) &= 0xF3u;
  mutex = *((pthread_mutex_t **)self + 47);
  count = ((int32_t *)(mutex))[1];
  if ( count != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --count == 0 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  if ( *((uint16_t *)a2 + 17) == 0xFFFF )
  {
    v5 = a2;
    *((uint16_t *)a2 + 17) = *((uint32_t *)self + 17);
    v6 = *((uint32_t *)self + 17);
    if ( v6 == (*((uint32_t *)self + 18) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpWorldOperationUtil::Self *)((char *)self + 64),
        4,
        v7);
      v6 = *((uint32_t *)self + 17);
      v5 = a2;
    }
    *(uint32_t *)(*((uint32_t *)self + 16) + 4 * v6) = (uint32_t)(uintptr_t)(v5);
    ++*((uint32_t *)self + 17);
  }
  result = pthread_mutex_unlock(*((pthread_mutex_t **)self + 47));
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::markIslandActive  (binary VA: 0x174f870)
// Original: hkpWorldOperationUtil::markIslandActive
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::markIslandActive(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  char v2;
  pthread_mutex_t *mutex;
  unsigned int count;
  int result;
  int v6;
  int v7;

  v2 = *((uint8_t *)a2 + 38);
  if ( (v2 & 0xC) == 0 && (v2 & 1) != 0 )
    *((uint8_t *)a2 + 38) = *((uint8_t *)a2 + 38) & 0xCF | 0x10;
  *((uint8_t *)a2 + 38) = *((uint8_t *)a2 + 38) & 0xF3 | 4;
  mutex = *((pthread_mutex_t **)self + 47);
  count = ((int32_t *)(mutex))[1];
  if ( count != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --count == 0 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  if ( *((uint16_t *)a2 + 17) == 0xFFFF )
  {
    *((uint16_t *)a2 + 17) = *((uint32_t *)self + 17);
    v6 = *((uint32_t *)self + 17);
    if ( v6 == (*((uint32_t *)self + 18) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpWorldOperationUtil::Self *)((char *)self + 64),
        4,
        v7);
      v6 = *((uint32_t *)self + 17);
    }
    *(uint32_t *)(*((uint32_t *)self + 16) + 4 * v6) = (uint32_t)(uintptr_t)(a2);
    ++*((uint32_t *)self + 17);
  }
  result = pthread_mutex_unlock(*((pthread_mutex_t **)self + 47));
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removeIslandFromDirtyList  (binary VA: 0x174f9f0)
// Original: hkpWorldOperationUtil::removeIslandFromDirtyList
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorldOperationUtil::removeIslandFromDirtyList(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::Self *result;
  int v3;

  result = a2;
  v3 = *((uint16_t *)a2 + 17);
  if ( (uint16_t)v3 != 0xFFFF )
  {
    *(uint32_t *)(*((uint32_t *)self + 16) + 4 * v3) = 0;
    *((uint16_t *)a2 + 17) = -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removeIsland  (binary VA: 0x174fa20)
// Original: hkpWorldOperationUtil::removeIsland
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorldOperationUtil::removeIsland(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  if ( (*((uint8_t *)a2 + 38) & 1) != 0 )
  {
    *(uint32_t *)(*((uint32_t *)self + 10) + 4 * *((uint16_t *)a2 + 16)) = *(uint32_t *)(*((uint32_t *)self + 10)
                                                                                         + 4 * *((uint32_t *)self + 11)
                                                                                         - 4);
    *(uint16_t *)(*(uint32_t *)(*((uint32_t *)self + 10) + 4 * *((uint16_t *)a2 + 16)) + 32) = *((uint16_t *)a2 + 16);
    --*((uint32_t *)self + 11);
  }
  else
  {
    *(uint32_t *)(*((uint32_t *)self + 13) + 4 * *((uint16_t *)a2 + 16)) = *(uint32_t *)(*((uint32_t *)self + 13)
                                                                                         + 4 * *((uint32_t *)self + 14)
                                                                                         - 4);
    *(uint16_t *)(*(uint32_t *)(*((uint32_t *)self + 13) + 4 * *((uint16_t *)a2 + 16)) + 32) = *((uint16_t *)a2 + 16);
    --*((uint32_t *)self + 14);
  }
  return hkpWorldOperationUtil::removeIslandFromDirtyList(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::removeEntitySI  (binary VA: 0x174fab0)
// Original: hkpWorldOperationUtil::removeEntitySI
// ----------------------------------------------------------------------------
hkpWorldOperationUtil::Self * hkpWorldOperationUtil::removeEntitySI(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2)
{
  int v2;
  hkpWorldOperationUtil::Self *result;

  v2 = *((uint32_t *)a2 + 50);
  *((uint32_t *)a2 + 2) = 0;
  result = (hkpWorldOperationUtil::Self *)hkpSimulationIsland::internalRemoveEntity((hkpSimulationIsland::Self *)v2, a2);
  if ( *(uint16_t *)(v2 + 32) != 0xFFFF )
  {
    result = *(hkpWorldOperationUtil::Self **)(v2 + 80);
    if ( result == nullptr )
    {
      result = self;
      if ( *((uint8_t *)self + 196) != 0 )
      {
        hkpWorldOperationUtil::removeIsland(self, (hkpWorld::Self *)v2);
        return (hkpWorldOperationUtil::Self *)G4_VCALL<int>(v2, 4);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::internalMergeTwoIslands  (binary VA: 0x174fb20)
// Original: hkpWorldOperationUtil::internalMergeTwoIslands
// ----------------------------------------------------------------------------
hkpWorldOperationUtil::Self * hkpWorldOperationUtil::internalMergeTwoIslands(hkpWorldOperationUtil::Self *self, hkpWorld::Self *a2, hkpSimulationIsland::Self *a3)
{
  hkpWorld::Self *v3;
  hkpWorld::Self *v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int16_t v11; // di
  int v12;
  int v13;
  pthread_mutex_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  pthread_mutex_t *v22;
  int v23;
  int *v24;
  int v25;
  int v26;
  bool v27;
  char *v28;
  int v29;
  char v30;
  char v31;
  bool v32;
  unsigned int count;
  int v34;
  int v35;
  hkpWorldOperationUtil::Self *result;
  hkpWorldOperationUtil::Self *v37;
  int v38;
  hkpSimulationIsland::Self *v58;
  hkpSimulationIsland::Self *v59;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int16_t _g4_t_v47;
  typedef int *_g4_t_v48;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef pthread_mutex_t *_g4_t_mutexf;
  typedef pthread_mutex_t *_g4_t_mutexa;
  typedef pthread_mutex_t *_g4_t_mutexb;
  typedef pthread_mutex_t *_g4_t_mutexc;
  typedef pthread_mutex_t *_g4_t_mutexd;
  typedef pthread_mutex_t *_g4_t_mutexe;
  typedef pthread_mutex_t *_g4_t_mutexg;
  typedef uint32_t _g4_t_v57[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v39)) > _g4_s0 ? (8u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v40)) > _g4_s1 ? (12u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v41)) > _g4_s2 ? (16u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v42)) > _g4_s3 ? (20u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v43)) > _g4_s4 ? (24u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v44)) > _g4_s5 ? (28u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v45)) > _g4_s6 ? (32u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v46)) > _g4_s7 ? (36u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v47)) > _g4_s8 ? (40u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v48)) > _g4_s9 ? (40u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_mutex)) > _g4_s10 ? (44u + sizeof(_g4_t_mutex)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_mutexf)) > _g4_s11 ? (44u + sizeof(_g4_t_mutexf)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_mutexa)) > _g4_s12 ? (44u + sizeof(_g4_t_mutexa)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_mutexb)) > _g4_s13 ? (44u + sizeof(_g4_t_mutexb)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_mutexc)) > _g4_s14 ? (44u + sizeof(_g4_t_mutexc)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_mutexd)) > _g4_s15 ? (44u + sizeof(_g4_t_mutexd)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_mutexe)) > _g4_s16 ? (44u + sizeof(_g4_t_mutexe)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_mutexg)) > _g4_s17 ? (44u + sizeof(_g4_t_mutexg)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v57)) > _g4_s18 ? (48u + sizeof(_g4_t_v57)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 44u);
  _g4_t_mutexf &mutexf = *reinterpret_cast<_g4_t_mutexf *>(_g4_sf + 44u);
  _g4_t_mutexa &mutexa = *reinterpret_cast<_g4_t_mutexa *>(_g4_sf + 44u);
  _g4_t_mutexb &mutexb = *reinterpret_cast<_g4_t_mutexb *>(_g4_sf + 44u);
  _g4_t_mutexc &mutexc = *reinterpret_cast<_g4_t_mutexc *>(_g4_sf + 44u);
  _g4_t_mutexd &mutexd = *reinterpret_cast<_g4_t_mutexd *>(_g4_sf + 44u);
  _g4_t_mutexe &mutexe = *reinterpret_cast<_g4_t_mutexe *>(_g4_sf + 44u);
  _g4_t_mutexg &mutexg = *reinterpret_cast<_g4_t_mutexg *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);

  v3 = a2;
  v4 = (hkpWorld::Self *)(a3);
  v5 = *((uint32_t *)a3 + 20);
  if ( *((uint32_t *)a2 + 20) <= v5 )
  {
    if ( *((uint32_t *)a2 + 20) >= v5 )
    {
      if ( *((uint16_t *)a2 + 16) > *((uint16_t *)a3 + 16) )
      {
        v3 = (hkpWorld::Self *)(a3);
        v4 = a2;
      }
    }
    else
    {
      v3 = (hkpWorld::Self *)(a3);
      v4 = a2;
    }
  }
  v6 = 1;
  ++*((uint32_t *)self + 35);
  if ( (*((uint8_t *)v3 + 38) & 1) == 0 )
    v6 = *((uint8_t *)v4 + 38) & 1;
  HIBYTE(v46) = 1;
  if ( (*((uint8_t *)v3 + 38) & 4) == 0 )
    HIBYTE(v46) = (*((uint8_t *)v4 + 38) & 4) != 0;
  if ( v6 != 0 )
  {
    if ( (*((uint8_t *)v3 + 38) & 1) != 0 )
    {
      if ( (*((uint8_t *)v4 + 38) & 1) == 0 )
      {
        *((uint8_t *)v4 + 38) = *((uint8_t *)v4 + 38) & 0xF3 | 4;
        hkpWorldOperationUtil::internalActivateIsland(self, (int)(uintptr_t)(v4), 0);
      }
    }
    else
    {
      *((uint8_t *)v3 + 38) = *((uint8_t *)v3 + 38) & 0xF3 | 4;
      hkpWorldOperationUtil::internalActivateIsland(self, (int)(uintptr_t)(v3), 0);
    }
  }
  *((uint8_t *)v3 + 37) = (4 * (((*((uint8_t *)v4 + 37) | *((uint8_t *)v3 + 37)) & 0xC) != 0)) | *((uint8_t *)v3 + 37) & 0xF3;
  hkpSimulationIsland::markForWrite(v3);
  hkpSimulationIsland::markForWrite(v4);
  hkpSimulationIsland::markForWrite(*((hkpSimulationIsland::Self **)self + 8));
  hkAgentNnMachine_AppendTrack((int)(uintptr_t)(v3) + 112, (uint16_t *)v4 + 56);
  hkAgentNnMachine_AppendTrack((int)(uintptr_t)(v3) + 92, (uint16_t *)v4 + 46);
  v47 = *((uint32_t *)v3 + 20);
  v7 = *((uint32_t *)v4 + 20) + *((uint32_t *)v3 + 20);
  v8 = *((uint32_t *)v3 + 21) & 0x3FFFFFFF;
  if ( v7 > v8 )
  {
    v9 = 2 * v8;
    mutex = (pthread_mutex_t *)(*((uint32_t *)v4 + 20) + *((uint32_t *)v3 + 20));
    if ( v9 < v7 )
      v9 = *((uint32_t *)v4 + 20) + *((uint32_t *)v3 + 20);
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v57,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v3 + 19,
      v9,
      4);
    v7 = (int)(uintptr_t)(mutex);
  }
  *((uint32_t *)v3 + 20) = v7;
  v10 = 0;
  if ( *((int *)v4 + 20) > 0 )
  {
    v58 = (hkpSimulationIsland::Self *)(v3);
    do
    {
      *(uint32_t *)(*((uint32_t *)v58 + 19) + 4 * (uint16_t)(v10 + v47)) = *(uint32_t *)(*((uint32_t *)v4 + 19) + 4 * v10);
      v11 = v10 + v47;
      *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v4 + 19) + 4 * v10) + 200) = (uint32_t)(uintptr_t)(v58);
      v12 = *(uint32_t *)(*((uint32_t *)v4 + 19) + 4 * v10++);
      *(uint16_t *)(v12 + 164) = v11;
    }
    while ( *((uint32_t *)v4 + 20) > v10 );
    v3 = (hkpWorld::Self *)(v58);
  }
  v13 = *((uint32_t *)v3 + 16);
  v48 = (int *)((char *)v3 + 60);
  v14 = (pthread_mutex_t *)(v13 + *((uint32_t *)v4 + 16));
  v15 = *((uint32_t *)v3 + 17) & 0x3FFFFFFF;
  if ( (int)(uintptr_t)(v14) > v15 )
  {
    v16 = 2 * v15;
    v45 = *((uint32_t *)v3 + 16);
    if ( v16 < (int)(uintptr_t)(v14) )
      v16 = v13 + *((uint32_t *)v4 + 16);
    mutexf = (pthread_mutex_t *)(v13 + *((uint32_t *)v4 + 16));
    hkArrayUtil::reserve((hkArrayUtil::Self *)v57, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v48, v16, 4);
    v13 = v45;
    v14 = mutexf;
  }
  *((uint32_t *)v3 + 16) = (uint32_t)(uintptr_t)(v14);
  if ( *((int *)v4 + 16) > 0 )
  {
    mutexa = *((pthread_mutex_t **)v4 + 16);
    v17 = 0;
    do
    {
      v18 = *(uint32_t *)(*((uint32_t *)v4 + 15) + 4 * v17);
      if ( v18 != 0 )
      {
        *(uint32_t *)(*((uint32_t *)v3 + 15) + 4 * v13) = v18;
        v19 = *(uint32_t *)(*((uint32_t *)v3 + 15) + 4 * v13++);
        *(uint32_t *)(v19 + 12) = (uint32_t)(uintptr_t)(v3);
        mutexa = *((pthread_mutex_t **)v4 + 16);
      }
      ++v17;
    }
    while ( v17 < (int)(uintptr_t)(mutexa) );
  }
  v20 = *((uint32_t *)v3 + 17) & 0x3FFFFFFF;
  if ( v20 < v13 )
  {
    v21 = 2 * v20;
    mutexb = (pthread_mutex_t *)v13;
    if ( v13 >= v21 )
      v21 = v13;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v57, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v48, v21, 4);
    v13 = (int)(uintptr_t)(mutexb);
  }
  *((uint32_t *)v3 + 16) = v13;
  v22 = nullptr;
  mutexc = *((pthread_mutex_t **)v4 + 20);
  if ( (int)(uintptr_t)(mutexc) > 0 )
  {
    do
    {
      v23 = *(uint32_t *)(*((uint32_t *)v4 + 19) + 4 * (uint32_t)(uintptr_t)(v22));
      v24 = *(int **)(v23 + 168);
      v25 = *(uint16_t *)(v23 + 172) - 1;
      if ( v25 != -1 )
      {
        mutexd = v22;
        do
        {
          v26 = *v24;
          --v25;
          v24 += 12;
          *(uint32_t *)(v26 + 8) = (uint32_t)(uintptr_t)(v3);
        }
        while ( v25 != -1 );
        v22 = mutexd;
        mutexc = *((pthread_mutex_t **)v4 + 20);
      }
      v22 = (pthread_mutex_t *)((char *)v22 + 1);
    }
    while ( (int)(uintptr_t)(v22) < (int)(uintptr_t)(mutexc) );
  }
  hkpSimulationIsland::mergeConstraintInfo(v3, v4);
  *((uint32_t *)v3 + 7) += *((uint32_t *)v4 + 7);
  v27 = (*((uint8_t *)v4 + 38) & 1) == 0;
  *((uint32_t *)v4 + 7) = 0;
  if ( v27 )
  {
    v28 = (char *)self + 52;
    LOWORD(v48) = *((uint16_t *)v4 + 16);
    mutexe = (pthread_mutex_t *)((char *)self + 52);
  }
  else
  {
    v28 = (char *)self + 40;
    LOWORD(v48) = *((uint16_t *)v4 + 16);
    mutexe = (pthread_mutex_t *)((char *)self + 40);
  }
  v29 = *((uint32_t *)v28 + 1) - 1;
  if ( (uint16_t)(uintptr_t)(v48) < v29 )
  {
    *(uint32_t *)(((int32_t *)(mutexe))[0] + 4 * (uint16_t)(uintptr_t)(v48)) = *(uint32_t *)(((int32_t *)(mutexe))[0] + 4 * v29);
    *(uint16_t *)(*(uint32_t *)(((int32_t *)(mutexe))[0] + 4 * (uint16_t)(uintptr_t)(v48)) + 32) = (uint16_t)(uintptr_t)(v48);
    v29 = ((int32_t *)(mutexe))[1] - 1;
  }
  ((int32_t *)(mutexe))[1] = v29;
  v30 = 1;
  if ( (*((uint8_t *)v3 + 37) & 1) == 0 )
    v30 = *((uint8_t *)v4 + 37) & 1;
  v31 = v30 | *((uint8_t *)v3 + 37) & 0xFC;
  v32 = true;
  *((uint8_t *)v3 + 37) = v31;
  if ( (v31 & 0x10) == 0 )
    v32 = (*((uint8_t *)v4 + 37) & 0x10) != 0;
  *((uint8_t *)v3 + 37) = (16 * (v32 & 3)) | *((uint8_t *)v3 + 37) & 0xCF;
  *((uint8_t *)v3 + 38) = (4 * (HIBYTE(v46) & 3)) | *((uint8_t *)v3 + 38) & 0xF3;
  if ( *((uint16_t *)v4 + 17) != 0xFFFF )
  {
    mutexe = *((pthread_mutex_t **)self + 47);
    if ( ((int32_t *)(mutexe))[1] != 0 )
    {
      v59 = (hkpSimulationIsland::Self *)(v4);
      count = ((int32_t *)(mutexe))[1];
      do
      {
        if ( pthread_mutex_trylock(mutexe) == 0 )
        {
          v4 = (hkpWorld::Self *)(v59);
          goto LABEL_53;
        }
        --count;
      }
      while ( count != 0 );
      v4 = (hkpWorld::Self *)(v59);
    }
    if ( pthread_mutex_lock(mutexe) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
LABEL_53:
    if ( *((uint16_t *)v3 + 17) == 0xFFFF )
    {
      v37 = self;
      *((uint16_t *)v3 + 17) = *((uint32_t *)self + 17);
      v38 = *((uint32_t *)self + 17);
      if ( v38 == (*((uint32_t *)self + 18) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpWorldOperationUtil::Self *)((char *)self + 64),
          4,
          v41);
        v37 = self;
        v38 = *((uint32_t *)self + 17);
      }
      *(uint32_t *)(*((uint32_t *)v37 + 16) + 4 * v38) = (uint32_t)(uintptr_t)(v3);
      ++*((uint32_t *)v37 + 17);
    }
    if ( pthread_mutex_unlock(*((pthread_mutex_t **)self + 47)) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
      perror("pthread_mutex_unlock(&m_mutex)");
      __builtin_debugtrap();
    }
  }
  hkpWorldOperationUtil::removeIslandFromDirtyList(self, v4);
  G4_VCALL<void>(v4, 4, v39, v40, v41, v42, v43, v44, v45, v46, v48, mutexe, v57[0], v57[1], v57[2], v57[3]);
  if ( (*((uint8_t *)v3 + 38) & 1) != 0 )
  {
    v34 = *((uint16_t *)v3 + 16);
    if ( (uint16_t)v34 != 0 )
    {
      v35 = **((uint32_t **)self + 10);
      if ( *((uint32_t *)v3 + 20) > *(uint32_t *)(v35 + 80) )
      {
        *((uint16_t *)v3 + 16) = 0;
        *(uint16_t *)(v35 + 32) = v34;
        **((uint32_t **)self + 10) = (uint32_t)(uintptr_t)(v3);
        *(uint32_t *)(*((uint32_t *)self + 10) + 4 * v34) = v35;
      }
    }
  }
  v57[5] = (uint32_t)(uintptr_t)(v3);
  v57[4] = (uint32_t)(uintptr_t)(self);
  hkpWorld::checkDeterminismOfIslandBroadPhase();
  mutexg = *((pthread_mutex_t **)self + 35);
  result = (hkpWorldOperationUtil::Self *)((char *)&G4_MUTEX_ALIGN(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexg) + (24 * (-1)))) + 23);
  *((uint32_t *)self + 35) = (uint32_t)(uintptr_t)((char *)mutexg - 1);
  if ( mutexg == (pthread_mutex_t *)((char *)&dword_0 + 1) && *((uint8_t *)self + 148) == 0 )
  {
    result = self;
    if ( *((uint32_t *)self + 33) != 0 )
    {
      hkpWorld::internal_executePendingOperations(self);
      result = self;
    }
    if ( *((uint32_t *)result + 39) == 1 && *((uint32_t *)result + 34) != 0 )
      return (hkpWorldOperationUtil::Self *)hkpWorld::internal_executePendingBodyOperations(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::mergeIslands  (binary VA: 0x1750170)
// Original: hkpWorldOperationUtil::mergeIslands
// ----------------------------------------------------------------------------
hkpWorldOperationUtil::Self * hkpWorldOperationUtil::mergeIslands(hkpWorldOperationUtil::Self *self, hkpWorld::Self **a2, hkpSimulationIsland::Self **a3)
{
  uint32_t v4[7];

  if ( *((uint32_t *)self + 35) == 0 )
    return hkpWorldOperationUtil::internalMergeTwoIslands(self, a2[50], a3[50]);
  v4[2] = (uint32_t)(uintptr_t)(a3);
  LOBYTE(v4[0]) = 13;
  v4[1] = (uint32_t)(uintptr_t)(a2);
  return (hkpWorldOperationUtil::Self *)hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(v4));
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::addActionsToEntitysIsland  (binary VA: 0x17501f0)
// Original: hkpWorldOperationUtil::addActionsToEntitysIsland
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::addActionsToEntitysIsland(int a1, int a2, uint32_t *a3)
{
  int result;
  int v4;
  uint32_t *v5;
  int *v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int32_t v16; // kr04_4
  int32_t v17;
  int32_t v18; // ett
  typedef int *_g4_t_v19;
  typedef hkpSimulationIsland::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v20)) > _g4_s1 ? (24u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v21)) > _g4_s2 ? (28u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v22)) > _g4_s3 ? (32u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v23)) > _g4_s4 ? (36u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v24)) > _g4_s5 ? (40u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v25)) > _g4_s6 ? (44u + sizeof(_g4_t_v25)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);

  v23 = 0;
  v24 = -2147483632;
  v20 = *(hkpSimulationIsland::Self **)(a2 + 200);
  v22 = &v25;
  result = a3[1];
  if ( result > 0 )
  {
    v21 = 0;
    v4 = 0;
    v5 = a3;
    do
    {
      v6 = *(int **)(*v5 + 4 * v4);
      if ( v20 == *(hkpSimulationIsland::Self **)(a1 + 32) )
      {
        hkpSimulationIsland::addAction(v20, (hkpAction::Self *)v6);
        if ( *((uint16_t *)v6 + 3) != 0 )
        {
          do
          {
            v16 = v6[1];
            HIWORD(v15) = HIWORD(v16);
            LOWORD(v15) = 0;
            v17 = v15 | (uint16_t)(v16 - 1);
            v18 = v16;
          }
          while ( v18 != __sync_val_compare_and_swap(v6 + 1, v18, v17) );
          if ( (uint16_t)v17 == 0 )
            G4_VCALL<void>(v6, 16);
        }
      }
      else
      {
        hkpSimulationIsland::addAction(v20, (hkpAction::Self *)v6);
        if ( *((uint16_t *)v6 + 3) != 0 )
        {
          do
          {
            v8 = v6[1];
            HIWORD(v7) = HIWORD(v8);
            LOWORD(v7) = 0;
            v9 = v7 | (uint16_t)(v8 - 1);
            v10 = v8;
          }
          while ( v10 != __sync_val_compare_and_swap(v6 + 1, v10, v9) );
          if ( (uint16_t)v9 == 0 )
            G4_VCALL<void>(v6, 16);
        }
        v23 = 0;
        v11 = *v6;
        v19 = v6;
        v12 = 0;
        (*(void (**)(int *, int **))(v11 + 24))(v19, &v22);
        v13 = v23;
        if ( v23 > 0 )
        {
          do
          {
            v14 = v22[v12];
            if ( v14 != a2
              && *(uint8_t *)(v14 + 232) != 5
              && *(uint8_t *)(a2 + 232) != 5
              && *(uint32_t *)(v14 + 200) != *(uint32_t *)(a2 + 200) )
            {
              hkpWorldOperationUtil::mergeIslands(
                *(hkpWorldOperationUtil::Self **)(v14 + 8),
                (hkpWorld::Self **)v14,
                (hkpSimulationIsland::Self **)a2);
              v13 = v23;
            }
            ++v12;
          }
          while ( v12 < v13 );
        }
      }
      v5 = a3;
      v4 = ++v21;
    }
    while ( a3[1] > v21 );
    result = v24;
    v23 = 0;
    if ( v24 >= 0 )
      return (*(int (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               v22,
               4 * v24);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::internalActivateIsland  (binary VA: 0x17503d0)
// Original: hkpWorldOperationUtil::internalActivateIsland
// ----------------------------------------------------------------------------
int hkpWorldOperationUtil::internalActivateIsland(hkpWorldOperationUtil::Self *a1, hkpWorld::Self *a2, char a3)
{
  hkpWorld::Self *v3;
  int v4;
  int v5;
  int v6;
  hkpWorld::Self *i;
  int v8;
  uint8_t v9;
  int16_t v10;
  int *v11;
  int v12;
  int result;
  int v14;
  int32_t v15; // kr00_4
  int32_t v16;
  int32_t v17; // ett
  int v18;
  int32_t v19; // kr04_4
  int v20;
  int32_t v21; // kr08_4
  int32_t v22;
  int32_t v23; // ett
  int v24;
  int v25;
  int j;
  int v27;
  int v28;
  int v29;
  typedef int _g4_t_v30;
  typedef hkpSimulationIsland::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
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
  typedef uint32_t _g4_t_v46[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v31)) > _g4_s1 ? (8u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v32)) > _g4_s2 ? (8u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v33)) > _g4_s3 ? (12u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v34)) > _g4_s4 ? (12u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v35)) > _g4_s5 ? (16u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v36)) > _g4_s6 ? (24u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v37)) > _g4_s7 ? (28u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v38)) > _g4_s8 ? (32u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v39)) > _g4_s9 ? (32u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v40)) > _g4_s10 ? (36u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v41)) > _g4_s11 ? (36u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v42)) > _g4_s12 ? (40u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v43)) > _g4_s13 ? (40u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v44)) > _g4_s14 ? (44u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v45)) > _g4_s15 ? (44u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v46)) > _g4_s16 ? (48u + sizeof(_g4_t_v46)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);

  v3 = a2;
  *(uint32_t *)(*((uint32_t *)a1 + 13) + 4 * *((uint16_t *)a2 + 16)) = *(uint32_t *)(*((uint32_t *)a1 + 13)
                                                                                     + 4 * *((uint32_t *)a1 + 14)
                                                                                     - 4);
  *(uint16_t *)(*(uint32_t *)(*((uint32_t *)a1 + 13) + 4 * *((uint16_t *)a2 + 16)) + 32) = *((uint16_t *)a2 + 16);
  v4 = *((uint32_t *)a1 + 11);
  v5 = *((uint32_t *)a1 + 12) & 0x3FFFFFFF;
  --*((uint32_t *)a1 + 14);
  if ( v4 == v5 )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpWorldOperationUtil::Self *)((char *)a1 + 40),
      4,
      v33);
    v4 = *((uint32_t *)a1 + 11);
    v3 = a2;
  }
  *(uint32_t *)(*((uint32_t *)a1 + 10) + 4 * v4) = (uint32_t)(uintptr_t)(v3);
  v6 = *((uint32_t *)a1 + 11) + 1;
  *((uint32_t *)a1 + 11) = v6;
  *((uint16_t *)v3 + 16) = v6 - 1;
  *((uint8_t *)v3 + 38) = *((uint8_t *)v3 + 38) & 0xFC | 1;
  v46[0] = 0;
  v44 = 0;
  *((uint32_t *)a2 + 13) = 0;
  *((uint32_t *)a2 + 14) = 0;
  for ( i = a2; *((uint32_t *)a2 + 20) > v44; *(uint16_t *)(v8 + 236) = v10 )
  {
    v8 = *(uint32_t *)(*((uint32_t *)i + 19) + 4 * v44);
    hkSweptTransformUtil::setTimeInformation(v46, v46, v8 + 240);
    *(uint16_t *)(v8 + 234) = 0;
    *(uint16_t *)(v8 + 236) = 0;
    v9 = *((uint8_t *)a1 + 815);
    v37 = v9;
    v38 = *((uint8_t *)a1 + 814);
    v40 = *((uint8_t *)a1 + 813);
    HIBYTE(v36) = *(uint8_t *)(v8 + 233);
    v42 = v40 << 14;
    if ( (uint8_t)(HIBYTE(v36) & 3) > (uint8_t)(v9 & 3) )
      v42 = ~v40 << 14;
    v10 = (uint16_t)v38 << 14;
    if ( v9 < (int)HIBYTE(v36) )
      v10 = ~(uint16_t)v38 << 14;
    ++v44;
    *(uint16_t *)(v8 + 234) = v42;
    i = a2;
  }
  hkpWorldAgentUtil::warpTime(a2, *((uint32_t *)a2 + 18), *((uint32_t *)a1 + 120), *((uint32_t *)a1 + 28));
  v11 = *((int **)a2 + 19);
  v12 = *v11;
  if ( *(uint16_t *)(*v11 + 6) != 0 )
  {
    do
    {
      v19 = *(uint32_t *)(v12 + 4);
      HIWORD(v18) = HIWORD(v19);
      LOWORD(v18) = 0;
    }
    while ( v19 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v12 + 4),
                     v19,
                     v18 | (uint16_t)(v19 + 1)) );
  }
  hkpWorldCallbackUtil::fireIslandActivated(a1, a2, v31);
  result = *(uint32_t *)(v12 + 200);
  v45 = result;
  if ( (hkpWorld::Self *)result == a2 )
  {
    if ( *(uint16_t *)(v12 + 6) != 0 )
    {
      do
      {
        v21 = *(uint32_t *)(v12 + 4);
        HIWORD(v20) = HIWORD(v21);
        LOWORD(v20) = 0;
        v22 = v20 | (uint16_t)(v21 - 1);
        v23 = v21;
      }
      while ( v23 != __sync_val_compare_and_swap((volatile int32_t *)(v12 + 4), v23, v22) );
      if ( (uint16_t)v22 == 0 )
        G4_VCALL<void>(v12, 16);
    }
    if ( a3 == 0 )
      goto LABEL_37;
    v24 = *(uint32_t *)(v45 + 28) + 3;
    v41 = *((uint32_t *)a1 + 44);
    if ( *(uint32_t *)(v45 + 80) + 1 >= v24 )
      v24 = *(uint32_t *)(v45 + 80) + 1;
    v43 = v24;
    if ( v24 < *((uint32_t *)a1 + 44) && *((uint8_t *)a1 + 196) != 0 )
    {
      v39 = 0;
      while ( 2 )
      {
        result = *((uint32_t *)a1 + 11);
        v25 = result - 1;
        for ( j = 4 * (result - 1); ; j -= 4 )
        {
          if ( v25 < 0 )
          {
            if ( v39 != 0 )
              return result;
            goto LABEL_37;
          }
          result = *(uint32_t *)(*((uint32_t *)a1 + 10) + j);
          if ( v45 != result )
          {
            v27 = *(uint32_t *)(result + 28);
            if ( (*(uint8_t *)(result + 38) & 0xC) != 0 )
            {
              if ( *(uint32_t *)(result + 80) >= v27 )
                v27 = *(uint32_t *)(result + 80);
              if ( v41 > v43 + v27 )
                break;
            }
          }
          --v25;
        }
        *(uint8_t *)(result + 37) = *(uint8_t *)(result + 37) & 0xF3 | 4;
        v29 = **(uint32_t **)(v45 + 76);
        hkpWorldOperationUtil::internalMergeTwoIslands(a1, (hkpWorld::Self *)result, (hkpSimulationIsland::Self *)v45);
        ++v39;
        v45 = *(uint32_t *)(v29 + 200);
        result = *(uint32_t *)(v45 + 28) + 3;
        v41 = *((uint32_t *)a1 + 44);
        if ( *(uint32_t *)(v45 + 80) + 1 >= result )
          result = *(uint32_t *)(v45 + 80) + 1;
        v43 = result;
        if ( *((uint32_t *)a1 + 44) > result && *((uint8_t *)a1 + 196) != 0 )
          continue;
        break;
      }
    }
    else
    {
LABEL_37:
      result = *(uint16_t *)(v45 + 32);
      if ( (uint16_t)result != 0 )
      {
        v28 = **((uint32_t **)a1 + 10);
        if ( *(uint32_t *)(v45 + 80) > *(uint32_t *)(v28 + 80) )
        {
          *(uint16_t *)(v45 + 32) = 0;
          *(uint16_t *)(v28 + 32) = result;
          **((uint32_t **)a1 + 10) = v45;
          *(uint32_t *)(*((uint32_t *)a1 + 10) + 4 * result) = v28;
        }
      }
    }
  }
  else if ( *(uint16_t *)(v12 + 6) != 0 )
  {
    do
    {
      v15 = *(uint32_t *)(v12 + 4);
      HIWORD(v14) = HIWORD(v15);
      LOWORD(v14) = 0;
      v16 = v14 | (uint16_t)(v15 - 1);
      v17 = v15;
      result = __sync_val_compare_and_swap((volatile int32_t *)(v12 + 4), v17, v16);
    }
    while ( v17 != result );
    if ( (uint16_t)v16 == 0 )
      return G4_VCALL<int>(v12, 16, v30, v32, v34, v35, v46, v36, v37, v38, v40, v42, v45, v46[0], v46[1], v46[2], v46[3]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::replaceMotionObject  (binary VA: 0x17507f0)
// Original: hkpWorldOperationUtil::replaceMotionObject
// ----------------------------------------------------------------------------
__m128i * hkpWorldOperationUtil::replaceMotionObject(__m128i **a1, int a2, char a3, char a4, hkpWorld::Self *a5)
{
  hkpEntity::Self *v5;
  int v6;
  hkpMotion::Self *v7;
  uint16_t EncodedFloat;
  uint16_t v9;
  __m128i v10;
  __m128i v11;
  __m128i *result;
  int v13;
  hkpFixedRigidMotion::Self *v14;
  hkpEntity::Self *v15;
  hkpEntity::Self *v16;
  uint8_t v17;
  int16_t v18; // di
  int v19;
  int16_t v20;
  int v21;
  int16_t v22;
  int v23;
  __m128i *v24;
  unsigned int j;
  const hkpShape::Self **v26;
  int v27;
  int32_t v28; // kr00_4
  int32_t v29;
  int32_t v30; // ett
  int address;
  unsigned int v32;
  int i;
  int32_t v34; // ett
  const hkpShape::Self *v35;
  __m128i *v36; // xmm0_4
  __m128i v37;
  __m128i *v38;
  hkpEntity::Self *v39;
  unsigned int v40;
  int *v41;
  __m128i v42;
  int v43;
  int v44;
  typedef const hkVector4f::Self *_g4_t_v45;
  typedef const hkQuaternionf::Self *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef hkpEntity::Self *_g4_t_v50;
  typedef hkpEntity::Self *_g4_t_v51;
  typedef hkpEntity::Self *_g4_t_v52;
  typedef hkpEntity::Self *_g4_t_v53;
  typedef uint8_t _g4_t_v54;
  typedef int _g4_t_v55;
  typedef float _g4_t_CurrentTime;
  typedef hkpEntity::Self *_g4_t_v57;
  typedef uint8_t _g4_t_v58;
  typedef const hkpShape::Self **_g4_t_v59;
  typedef __m128i *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef float _g4_t_v62[12];
  typedef uint32_t _g4_t_v63[2];
  typedef char _g4_t_v64;
  typedef uint8_t _g4_t_v65[48];
  typedef float _g4_t_v66[16];
  typedef g4_int128_t _g4_t_v67;
  typedef uint32_t _g4_t_v68[9];
  typedef __m128i *_g4_t_v69;
  typedef __m128i *_g4_t_v70;
  typedef char _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int16_t _g4_t_v73;
  typedef int _g4_t_v74;
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (4u + sizeof(_g4_t_v45)) > _g4_s0 ? (4u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v46)) > _g4_s1 ? (8u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v47)) > _g4_s2 ? (36u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v48)) > _g4_s3 ? (40u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v49)) > _g4_s4 ? (48u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v50)) > _g4_s5 ? (48u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v51)) > _g4_s6 ? (52u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v52)) > _g4_s7 ? (52u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v53)) > _g4_s8 ? (52u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v54)) > _g4_s9 ? (52u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v55)) > _g4_s10 ? (52u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_CurrentTime)) > _g4_s11 ? (52u + sizeof(_g4_t_CurrentTime)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v57)) > _g4_s12 ? (52u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v58)) > _g4_s13 ? (56u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v59)) > _g4_s14 ? (56u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v60)) > _g4_s15 ? (60u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v61)) > _g4_s16 ? (60u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v62)) > _g4_s17 ? (64u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v63)) > _g4_s18 ? (112u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (121u + sizeof(_g4_t_v64)) > _g4_s19 ? (121u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v65)) > _g4_s20 ? (128u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v66)) > _g4_s21 ? (176u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v67)) > _g4_s22 ? (240u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (256u + sizeof(_g4_t_v68)) > _g4_s23 ? (256u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (292u + sizeof(_g4_t_v69)) > _g4_s24 ? (292u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (296u + sizeof(_g4_t_v70)) > _g4_s25 ? (296u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (300u + sizeof(_g4_t_v71)) > _g4_s26 ? (300u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (392u + sizeof(_g4_t_v72)) > _g4_s27 ? (392u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (396u + sizeof(_g4_t_v73)) > _g4_s28 ? (396u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (400u + sizeof(_g4_t_v74)) > _g4_s29 ? (400u + sizeof(_g4_t_v74)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_CurrentTime &CurrentTime = *reinterpret_cast<_g4_t_CurrentTime *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 121u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 128u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 176u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 240u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 256u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 292u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 296u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 300u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 392u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 396u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 400u);

  v5 = (hkpEntity::Self *)a1;
  if ( a3 == 0 )
  {
    hkpMotion::Construct((hkpMotion::Self *)v63);
    v63[0] = ((uint32_t)(uintptr_t)&off_209EA08);
    v72 = 0;
    v13 = 0;
    v14 = (hkpFixedRigidMotion::Self *)(a1 + 56);
    do
    {
      *(__m128i *)&v63[v13] = *(__m128i *)((char *)v14 + v13 * 4);
      v13 += 4;
    }
    while ( v13 != 72 );
    v46 = (const hkQuaternionf::Self *)(a1 + 88);
    v45 = (const hkVector4f::Self *)(a1 + 72);
    if ( a2 == 5 )
    {
      hkpFixedRigidMotion::Construct(v14, v45, v46);
      v15 = (hkpEntity::Self *)a1;
      v60 = (__m128i *)(a1 + 60);
      std::memcpy(a1 + 60, v65, 48);
      std::memcpy(a1 + 72, v66, 64);
      *((g4_int128_t *)a1 + 22) = v67;
      a1[92] = (__m128i *)v68[0];
      v36 = (__m128i *)v68[8];
      a1[93] = (__m128i *)v68[1];
      a1[100] = v36;
g4_m128_raw(v37) = LODWORD(v66[11]);
      a1[94] = (__m128i *)v68[2];
      a1[95] = (__m128i *)v68[3];
      a1[96] = (__m128i *)v68[4];
      a1[97] = (__m128i *)v68[5];
      a1[98] = (__m128i *)v68[6];
      a1[99] = (__m128i *)v68[7];
      a1[101] = v69;
      a1[102] = v70;
      *((uint8_t *)a1 + 412) = v71;
      *((uint8_t *)a1 + 233) = v64;
      if ( *(float *)g4_m128_ptr<int32_t>(v37) != 0.0 )
      {
        if ( a5 != nullptr )
        {
          CurrentTime = hkpWorld::getCurrentTime(a5);
          v15 = (hkpEntity::Self *)a1;
          v62[0] = CurrentTime;
        }
        else
        {
          v43 = _mm_cvtsi128_si32(v37);
          v44 = (2130706432 - v43) & ((v43 ^ (v43 + 2139095040)) >> 31);
          v62[0] = (float)((float)(2.0
                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v37)
                                         * (float)((float)(2.0
                                                         - (float)(*(float *)g4_m128_ptr<int32_t>(v37)
                                                                 * (float)((float)(2.0
                                                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v37)
                                                                                         * *(float *)&v44))
                                                                         * *(float *)&v44)))
                                                 * (float)((float)(2.0
                                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v37) * *(float *)&v44))
                                                         * *(float *)&v44))))
                         * (float)((float)(2.0
                                         - (float)(*(float *)g4_m128_ptr<int32_t>(v37)
                                                 * (float)((float)(2.0
                                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v37) * *(float *)&v44))
                                                         * *(float *)&v44)))
                                 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v37) * *(float *)&v44))
                                         * *(float *)&v44)))
                 + v66[7];
        }
        v57 = v15;
        hkSweptTransformUtil::freezeMotionState(v62, v60);
        v15 = v57;
      }
    }
    else
    {
      hkpKeyframedRigidMotion::Construct(v14, v45, v46);
      (*(void (**)(uint32_t *, hkpFixedRigidMotion::Self *))(v63[0] + 120))(v63, v14);
      v15 = (hkpEntity::Self *)a1;
      v60 = (__m128i *)(a1 + 60);
    }
    if ( a4 != 0 )
    {
      v50 = v15;
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v32 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
              *(uint32_t *)(*(uint32_t *)address + 44),
              288);
      hkpMotion::Construct((hkpMotion::Self *)v32);
      *(uint32_t *)v32 = ((uint32_t)(uintptr_t)&off_209EA08);
      *(uint32_t *)(v32 + 280) = 0;
      v55 = *(uint16_t *)(v32 + 6);
      if ( (unsigned int)(uintptr_t)(v63) >= v32 + 16 || v32 >= (unsigned int)(uintptr_t)(v65) )
      {
        for ( i = 0; i != 72; i += 4 )
          *(__m128i *)(v32 + i * 4) = *(__m128i *)&v63[i];
      }
      else
      {
        v40 = v32;
        v41 = (int *)(v63);
        do
        {
          v42 = *(__m128i *)v41;
          v41 += 4;
          v40 += 16;
          *(__m128i *)(v40 - 16) = v42;
        }
        while ( v41 != &v74 );
      }
      do
        v34 = *(uint32_t *)(v32 + 4);
      while ( v34 != __sync_val_compare_and_swap((volatile int32_t *)(v32 + 4), v34, (v55 << 16) | 1) );
      *((uint16_t *)v50 + 254) = *((char *)v50 + 42);
      v35 = *((const hkpShape::Self **)v50 + 4);
      *((uint32_t *)v50 + 126) = v32;
      hkpEntity::setCachedShapeData(v50, a5, v35);
      v16 = v50;
    }
    else
    {
      v52 = v15;
      (*(void (**)(hkpFixedRigidMotion::Self *, int))(*((uint32_t *)v15 + 56) + 128))(v14, v72);
      v16 = v52;
      *((uint16_t *)v52 + 254) = v73;
    }
    *((uint8_t *)v16 + 42) = a2 != 5;
    *((uint32_t *)v16 + 40) = 0;
    v53 = v16;
    v63[0] = ((uint32_t)(uintptr_t)&off_209EA08);
    hkpKeyframedRigidMotion::Destroy((hkpKeyframedRigidMotion::Self *)v63);
    v5 = v53;
    goto LABEL_19;
  }
  v60 = (__m128i *)(a1 + 60);
  if ( a4 == 0 )
  {
    v24 = a1[126];
    ((void (*)(char *, __m128i *))g4_m128_lane<int32_t>(a1[56][7], 2))((char *)a1 + 224, v24);
g4_m128_lane<int16_t>(*(v24), 5) = 0;
g4_m128_lane<int16_t>(*(v24), 6) = 0;
    *((uint8_t *)a1 + 42) = *((uint16_t *)a1 + 254);
    if ( a1 + 56 >= (__m128i **)&v24[1] || v24 >= v60 )
    {
      for ( j = 0; j != 288; j += 16 )
        *(__m128i *)&a1[j / 4 + 56] = v24[j / 0x10];
    }
    else
    {
      v38 = v24;
      v39 = (hkpEntity::Self *)(a1 + 56);
      do
      {
        v39 = (hkpEntity::Self *)((char *)v39 + 16);
        *((__m128i *)v39 - 1) = *v38++;
      }
      while ( v39 != (hkpEntity::Self *)(a1 + 128) );
    }
    hkString::memSet((hkString::Self *)(a1 + 128), nullptr, 0);
    v26 = (const hkpShape::Self **)a1;
    if (g4_m128_lane<int16_t>(*(v24), 3) != 0 )
    {
      do
      {
        v28 =g4_m128_lane<int32_t>(*(v24), 1);
        HIWORD(v27) = HIWORD(v28);
        LOWORD(v27) = 0;
        v29 = v27 | (uint16_t)(v28 - 1);
        v30 = v28;
      }
      while ( v30 != __sync_val_compare_and_swap(&g4_m128_lane<int32_t>(*(v24), 1), v30, v29) );
      v26 = (const hkpShape::Self **)a1;
      if ( (uint16_t)v29 == 0 )
      {
        (*(void (**)(__m128i *))(g4_m128_lane<int32_t>(*(v24), 0) + 16))(v24);
        v26 = (const hkpShape::Self **)a1;
      }
    }
    v59 = v26;
    hkpEntity::setCachedShapeData((hkpEntity::Self *)v26, a5, v26[4]);
    v5 = (hkpEntity::Self *)v59;
  }
  if ( a2 == *((uint8_t *)v5 + 232) || a2 == 1 )
  {
LABEL_19:
    result = v60;
    goto LABEL_20;
  }
  v51 = v5;
  hkpMotion::Construct((hkpMotion::Self *)v63);
  v63[0] = ((uint32_t)(uintptr_t)&off_209EA08);
  v72 = 0;
  v6 = 0;
  v7 = (hkpMotion::Self *)((hkpEntity::Self *)((char *)v51 + 224));
  do
  {
    *(__m128i *)&v63[v6] = *(__m128i *)((char *)v7 + v6 * 4);
    v6 += 4;
  }
  while ( v6 != 72 );
  (*(void (**)(hkpMotion::Self *, float *))(*((uint32_t *)v51 + 56) + 36))(v7, v62);
  EncodedFloat = hkUFloat8::getEncodedFloat((hkUFloat8::Self *)HIBYTE(v70));
  if ( EncodedFloat != 0 )
    v48 = (EncodedFloat + 243712) << 12;
  else
    v48 = 0;
  v9 = hkUFloat8::getEncodedFloat((hkUFloat8::Self *)BYTE2(v70));
  if ( v9 != 0 )
    v47 = (v9 + 243712) << 12;
  else
    v47 = 0;
  *(float *)&v49 = hkpMotion::getMass((hkpMotion::Self *)v63);
  hkpRigidBody::createDynamicRigidMotion(
    a2,
    (hkVector4f::Self *)v66,
    (hkQuaternionf::Self *)&v67,
    v49,
    (int)(uintptr_t)(v62),
    (int)(uintptr_t)(v68),
    v47,
    v48,
    v7);
  (*(void (**)(uint32_t *, hkpMotion::Self *))(v63[0] + 120))(v63, v7);
  v10 = _mm_cvtsi32_si128((int16_t)(uintptr_t)(v69) << 16);
  *(float *)g4_m128_ptr<int32_t>(v10) = *(float *)g4_m128_ptr<int32_t>(v10) * 1.0039062f;
  *((uint16_t *)v51 + 202) = (unsigned int)_mm_cvtsi128_si32(v10) >> 16;
  v11 = _mm_cvtsi32_si128(SHIWORD(v69) << 16);
  *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) * 1.0039062f;
  *((uint16_t *)v51 + 203) = (unsigned int)_mm_cvtsi128_si32(v11) >> 16;
  v63[0] = ((uint32_t)(uintptr_t)&off_209EA08);
  hkpKeyframedRigidMotion::Destroy((hkpKeyframedRigidMotion::Self *)v63);
  result = (__m128i *)(a1 + 60);
  v5 = v51;
LABEL_20:
  *((uint32_t *)v5 + 6) = (uint32_t)(uintptr_t)(result);
  if ( a5 != nullptr )
  {
    v17 = *((uint8_t *)a5 + 815);
    v61 = v17;
    v54 = v17 & 3;
    v18 = *((uint8_t *)a5 + 813);
    v19 = *((uint8_t *)a5 + 814);
    v58 = *((uint8_t *)v5 + 233);
    v20 = v18 << 14;
    if ( v54 < (uint8_t)(v58 & 3) )
      v20 = ~v18 << 14;
    v21 = v19 << 14;
    if ( v61 < v58 )
      v21 = ~v19 << 14;
    v22 = v20 | *((uint16_t *)v5 + 117) & 0x3FFF;
    v23 = *((uint16_t *)v5 + 118);
    LOWORD(v23) = v23 & 0x3FFF;
    *((uint16_t *)v5 + 117) = v22;
    result = (__m128i *)(v21 | v23);
    *((uint16_t *)v5 + 118) = (uint16_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::setRigidBodyMotionType  (binary VA: 0x1751190)
// Original: hkpWorldOperationUtil::setRigidBodyMotionType
// ----------------------------------------------------------------------------
void hkpWorldOperationUtil::setRigidBodyMotionType(hkpWorldCallbackUtil::Self **a1, int a2, int a3, int a4)
{
  hkpEntity::Self *v4;
  int v5;
  bool v6; // di
  hkpEntity::Self *v7;
  volatile int32_t *v8;
  int v9;
  int32_t v10; // kr00_4
  int32_t v11;
  int32_t v12; // ett
  volatile int32_t *v13;
  int v14;
  int32_t v15; // kr04_4
  int v16;
  hkpWorld::Self *v17;
  hkpWorldCallbackUtil::Self *v18;
  int v19;
  bool v20; // cc
  int v21;
  int v22;
  int32_t v23; // kr08_4
  int32_t v24;
  int32_t v25; // ett
  hkpEntity::Self *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  hkpWorld::Self *v31;
  int v32;
  typedef hkMotionState::Self *_g4_t_v33;
  typedef hkpEntity::Self *_g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef hkpWorldCallbackUtil::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef hkpEntity::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint16_t _g4_t_v43[2];
  typedef int *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint16_t _g4_t_v48[2];
  typedef int *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v33)) > _g4_s0 ? (8u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v34)) > _g4_s1 ? (8u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (39u + sizeof(_g4_t_v35)) > _g4_s2 ? (39u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v36)) > _g4_s3 ? (40u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v37)) > _g4_s4 ? (40u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v38)) > _g4_s5 ? (44u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v39)) > _g4_s6 ? (44u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v40)) > _g4_s7 ? (48u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v41)) > _g4_s8 ? (52u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v42)) > _g4_s9 ? (56u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v43)) > _g4_s10 ? (64u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v44)) > _g4_s11 ? (68u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v45)) > _g4_s12 ? (72u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v46)) > _g4_s13 ? (76u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v47)) > _g4_s14 ? (80u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v48)) > _g4_s15 ? (96u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v49)) > _g4_s16 ? (100u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v50)) > _g4_s17 ? (104u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v51)) > _g4_s18 ? (108u + sizeof(_g4_t_v51)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v52)) > _g4_s19 ? (112u + sizeof(_g4_t_v52)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v53)) > _g4_s20 ? (128u + sizeof(_g4_t_v53)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v54)) > _g4_s21 ? (132u + sizeof(_g4_t_v54)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v55)) > _g4_s22 ? (136u + sizeof(_g4_t_v55)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v56)) > _g4_s23 ? (140u + sizeof(_g4_t_v56)) : _g4_s23,
    _g4_s25 = (208u + sizeof(_g4_t_v57)) > _g4_s24 ? (208u + sizeof(_g4_t_v57)) : _g4_s24,
    _g4_s26 = (212u + sizeof(_g4_t_v58)) > _g4_s25 ? (212u + sizeof(_g4_t_v58)) : _g4_s25,
    _g4_s27 = (216u + sizeof(_g4_t_v59)) > _g4_s26 ? (216u + sizeof(_g4_t_v59)) : _g4_s26,
    _g4_s28 = (220u + sizeof(_g4_t_v60)) > _g4_s27 ? (220u + sizeof(_g4_t_v60)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 39u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 96u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 100u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 104u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 108u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 112u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 128u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 132u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 136u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 140u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 208u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 212u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 216u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 220u);

  v4 = (hkpEntity::Self *)a1;
  v5 = *((uint8_t *)a1 + 232);
  if ( a2 == v5 )
    return;
  if ( v5 == 5 )
  {
    hkpLinkedCollidable::sortEntries((hkpLinkedCollidable::Self *)(a1 + 4));
    hkpEntity::sortConstraintsSlavesDeterministically((int)(uintptr_t)(a1));
    v4 = (hkpEntity::Self *)a1;
  }
  v35 = (unsigned int)(a2 - 4) > 1;
  v36 = (unsigned int)(v5 - 4) > 1;
  if ( (unsigned int)(a2 - 4) <= 1 || (unsigned int)(v5 - 4) > 1 )
  {
    if ( *((uint16_t *)v4 + 3) != 0 )
      goto LABEL_17;
LABEL_6:
    v38 = *((uint32_t *)v4 + 2);
    v6 = v38 != 0;
    if ( v38 == 0 )
      goto LABEL_7;
    goto LABEL_20;
  }
  if ( *((uint32_t *)v4 + 126) == 0 )
    return;
  if ( *((uint16_t *)v4 + 3) == 0 )
    goto LABEL_6;
LABEL_17:
  v13 = (volatile int32_t *)((char *)v4 + 4);
  v39 = v4;
  do
  {
    v15 = *((uint32_t *)v39 + 1);
    HIWORD(v14) = HIWORD(v15);
    LOWORD(v14) = 0;
  }
  while ( v15 != __sync_val_compare_and_swap(v13, v15, v14 | (uint16_t)(v15 + 1)) );
  v4 = (hkpEntity::Self *)a1;
  v16 = (int)(uintptr_t)(a1[2]);
  v38 = v16;
  v6 = v16 != 0;
  if ( v16 == 0 )
  {
LABEL_7:
    hkpWorldOperationUtil::replaceMotionObject((__m128i **)v4, a2, v35, v36, (hkpWorld::Self *)v38);
    if ( v6 )
      hkpWorld::updateCollisionFilterOnEntity((hkpWorld::Self *)v38, (int)(uintptr_t)(a1), a4, 1);
    goto LABEL_9;
  }
LABEL_20:
  if ( (a2 == 5) == (v5 == 5) )
    goto LABEL_7;
  v53 = &v56;
  v57 = &v60;
  v44 = &v47;
  v49 = &v52;
  v54 = 0;
  v55 = -2147483632;
  v58 = 0;
  v59 = -2147483632;
  v45 = 0;
  v46 = -2147483647;
  *(uint8_t *)(v38 + 148) = 1;
  *(uint8_t *)(v38 + 149) = 0;
  v43[0] = 512;
  LOBYTE(v43[1]) = 2;
  v50 = 0;
  v51 = -2147483647;
  v48[0] = 512;
  LOBYTE(v48[1]) = 1;
  hkpWorldOperationUtil::removeAttachedConstraints((int)(uintptr_t)(v4), (hkMemoryAllocator::Self *)&v53);
  if ( a2 == 5 )
    hkpWorldOperationUtil::removeAttachedActionsFromDynamicIsland(v38, (int)(uintptr_t)(a1), (hkMemoryAllocator::Self *)&v57);
  else
    hkpWorldOperationUtil::removeAttachedActionsFromFixedIsland(v38, (int)(uintptr_t)(a1), (hkMemoryAllocator::Self *)&v57);
  hkpWorldOperationUtil::removeAttachedAgentsConnectingTheEntityAndAFixedPartnerEntityPlus(
    (int)(uintptr_t)(a1[50]) + 112,
    (int)(uintptr_t)(a1),
    v43,
    a2);
  hkpWorldOperationUtil::removeAttachedAgentsConnectingTheEntityAndAFixedPartnerEntityPlus(
    (int)(uintptr_t)(a1[50]) + 92,
    (int)(uintptr_t)(a1),
    v48,
    a2);
  v17 = (hkpWorld::Self *)a1;
  if ( v5 != 5 )
  {
    v18 = a1[50];
    if ( *((int *)v18 + 20) > 2 )
      *((uint8_t *)v18 + 37) = *((uint8_t *)v18 + 37) & 0xFC | 1;
  }
  hkpWorldOperationUtil::removeEntitySI((hkpWorldOperationUtil::Self *)v38, v17);
  hkpWorldOperationUtil::replaceMotionObject((__m128i **)a1, a2, v35, v36, (hkpWorld::Self *)v38);
  hkpWorldOperationUtil::addEntitySI((hkpSimulationIsland::Self **)v38, (hkpEntity::Self *)a1, a3);
  hkpWorldOperationUtil::addActionsToEntitysIsland(v38, (int)(uintptr_t)(a1), (uint32_t *)(&v57));
  v19 = 0;
  v20 = v54 <= 0;
  *(uint8_t *)(v38 + 149) = 1;
  v40 = 0;
  v41 = 0;
  v42 = 0x80000000;
  if ( !v20 )
  {
    do
    {
      v21 = v53[v19];
      hkpWorldOperationUtil::addConstraintImmediately((hkpWorldCallbackUtil::Self *)v38, (hkpWorld::Self *)v21, 0);
      if ( *(uint16_t *)(v21 + 6) != 0 )
      {
        do
        {
          v23 = *(uint32_t *)(v21 + 4);
          HIWORD(v22) = HIWORD(v23);
          LOWORD(v22) = 0;
          v24 = v22 | (uint16_t)(v23 - 1);
          v25 = v23;
        }
        while ( v25 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v25, v24) );
        if ( (uint16_t)v24 == 0 )
          G4_VCALL<void>(v21, 16);
      }
      ++v19;
    }
    while ( v54 > v19 );
  }
  if ( a2 == 5 )
  {
    hkAgentNnMachine_AppendTrack((int)(uintptr_t)(a1[50]) + 112, v43);
    hkAgentNnMachine_AppendTrack((int)(uintptr_t)(a1[50]) + 92, v48);
    hkSweptTransformUtil::freezeMotionState(*(hkSweptTransformUtil::Self **)(v38 + 480), COERCE_FLOAT(a1 + 60), v33);
    v32 = *(uint32_t *)(v38 + 8);
    ++*(uint32_t *)(v38 + 140);
    G4_VCALL<void>(v32, 56, &a1, 1);
    hkpSimulation::collideEntitiesBroadPhaseDiscrete(
      (hkpSimulation::Self *)&a1,
      (hkpEntity::Self **)((char *)&dword_0 + 1),
      v38,
      (hkpWorld::Self *)v38);
    hkpWorldCallbackUtil::fireInactiveEntityMoved(a1[2], (hkpWorld::Self *)a1, v34);
    --*(uint32_t *)(v38 + 140);
  }
  else
  {
    hkpLinkedCollidable::getCollisionEntriesSorted((int)(uintptr_t)(a1 + 4), (int)(uintptr_t)(&v40), (int *)v33);
    if ( v41 <= 0 )
    {
      v37 = a1[50];
    }
    else
    {
      v26 = (hkpEntity::Self *)a1;
      v27 = 0;
      v37 = a1[50];
      v28 = v41;
      do
      {
        if ( *((uint8_t *)v26 + 232) != 5 )
        {
          v29 = *(char *)(*(uint32_t *)(v40 + 8 * v27 + 4) + 16) + *(uint32_t *)(v40 + 8 * v27 + 4);
          if ( *(uint8_t *)(v29 + 232) != 5 && *(hkpWorldCallbackUtil::Self **)(v29 + 200) != v37 )
          {
            hkpWorldOperationUtil::mergeIslands(
              *((hkpWorldOperationUtil::Self **)v26 + 2),
              (hkpWorld::Self **)v26,
              (hkpSimulationIsland::Self **)v29);
            v26 = (hkpEntity::Self *)a1;
            v28 = v41;
            v37 = a1[50];
          }
        }
        ++v27;
      }
      while ( v27 < v28 );
    }
    hkAgentNnMachine_AppendTrack((int)(uintptr_t)(v37) + 112, v43);
    hkAgentNnMachine_AppendTrack((int)(uintptr_t)(a1[50]) + 92, v48);
  }
  hkpWorld::updateCollisionFilterOnEntity((hkpWorld::Self *)v38, (int)(uintptr_t)(a1), a4, 1);
  v30 = *(uint32_t *)(v38 + 140);
  *(uint8_t *)(v38 + 148) = 0;
  if ( v30 == 0 )
  {
    v31 = (hkpWorld::Self *)v38;
    if ( *(uint32_t *)(v38 + 132) != 0 )
    {
      hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v38);
      v31 = (hkpWorld::Self *)v38;
    }
    if ( *((uint32_t *)v31 + 39) == 1 && *((uint32_t *)v31 + 34) != 0 )
      hkpWorld::internal_executePendingBodyOperations(v31);
  }
  v41 = 0;
  if ( v42 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v40,
      8 * v42);
  v40 = 0;
  v42 = 0x80000000;
  v50 = 0;
  if ( v51 >= 0 )
    (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v49,
      4 * v51);
  v49 = nullptr;
  v51 = 0x80000000;
  v45 = 0;
  if ( v46 >= 0 )
    (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v44,
      4 * v46);
  v44 = nullptr;
  v46 = 0x80000000;
  v58 = 0;
  if ( v59 >= 0 )
    (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v57,
      4 * v59);
  v57 = nullptr;
  v59 = 0x80000000;
  v54 = 0;
  if ( v55 >= 0 )
    (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v53,
      4 * v55);
LABEL_9:
  v7 = (hkpEntity::Self *)a1;
  if ( *((uint16_t *)a1 + 3) != 0 )
  {
    v8 = (volatile int32_t *)(a1 + 1);
    do
    {
      v10 = *((uint32_t *)v7 + 1);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      v11 = v9 | (uint16_t)(v10 - 1);
      v12 = v10;
    }
    while ( v12 != __sync_val_compare_and_swap(v8, v12, v11) );
    if ( (uint16_t)v11 == 0 )
      G4_VCALL<void>(v7, 16);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationUtil::cleanupDirtyIslands  (binary VA: 0x1751a60)
// Original: hkpWorldOperationUtil::cleanupDirtyIslands
// ----------------------------------------------------------------------------
void hkpWorldOperationUtil::cleanupDirtyIslands(hkpWorldOperationUtil::Self *self)
{
  int v1;
  int v2;
  int v3;
  hkpWorld::Self *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int i;
  int v9;
  hkpWorld::Self *v10;
  int v11;
  hkpWorld::Self *v12;
  bool v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint32_t *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  typedef hkpWorld::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef hkpWorld::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef hkpWorld::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef hkpWorld::Self *_g4_t_v52;
  typedef hkpWorld::Self *_g4_t_v53;
  typedef uint8_t _g4_t_v54;
  typedef hkpWorld::Self *_g4_t_v55;
  typedef hkpWorld::Self *_g4_t_v56;
  typedef hkpWorld::Self *_g4_t_v57;
  typedef uint32_t _g4_t_v58[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v34)) > _g4_s0 ? (4u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v35)) > _g4_s1 ? (8u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v36)) > _g4_s2 ? (12u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v37)) > _g4_s3 ? (16u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v38)) > _g4_s4 ? (20u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v39)) > _g4_s5 ? (24u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v40)) > _g4_s6 ? (28u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v41)) > _g4_s7 ? (32u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v42)) > _g4_s8 ? (32u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v43)) > _g4_s9 ? (36u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v44)) > _g4_s10 ? (36u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v45)) > _g4_s11 ? (36u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v46)) > _g4_s12 ? (40u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v47)) > _g4_s13 ? (40u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v48)) > _g4_s14 ? (40u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v49)) > _g4_s15 ? (44u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v50)) > _g4_s16 ? (44u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v51)) > _g4_s17 ? (44u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v52)) > _g4_s18 ? (48u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v53)) > _g4_s19 ? (48u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v54)) > _g4_s20 ? (48u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v55)) > _g4_s21 ? (48u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v56)) > _g4_s22 ? (48u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v57)) > _g4_s23 ? (48u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v58)) > _g4_s24 ? (52u + sizeof(_g4_t_v58)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);

  v58[3] = (uint32_t)(uintptr_t)(&self);
  v34 = (hkpWorld::Self *)(self);
  v1 = *((uint32_t *)self + 17);
  if ( v1 == 0 )
    return;
  v43 = *((uint32_t *)self + 16);
  v2 = *((uint32_t *)self + 17);
  if ( v1 <= 1 )
    goto LABEL_18;
  v37 = 0;
  v35 = v1 - 1;
  v3 = 0;
  while ( 2 )
  {
    v4 = (hkpWorld::Self *)v35;
    v38 = v3;
    v40 = *(uint32_t *)(v43 + 4 * ((v3 + v35) >> 1));
    do
    {
      while ( 1 )
      {
        v46 = v43 + 4 * v38;
        if ( v40 == 0 )
          break;
        if ( *(uint32_t *)v46 != 0 )
        {
          v49 = *(uint32_t *)(**(uint32_t **)(v40 + 76) + 208);
          if ( *(uint32_t *)(**(uint32_t **)(*(uint32_t *)v46 + 76) + 208) >= v49 )
          {
            v52 = v4;
            v5 = (uint32_t *)(v43 + 4 * (uint32_t)(uintptr_t)(v4));
            while ( 1 )
            {
              v6 = *v5;
              v7 = v5;
              if ( *v5 == 0 )
                break;
              --v5;
              if ( v49 >= *(uint32_t *)(**(uint32_t **)(v6 + 76) + 208) )
                break;
              v52 = (hkpWorld::Self *)((char *)v52 - 1);
            }
            v4 = v52;
            goto LABEL_13;
          }
        }
        ++v38;
      }
      v21 = (uint32_t *)(v43 + 4 * (uint32_t)(uintptr_t)(v4));
      while ( 1 )
      {
        v7 = v21--;
        v6 = v21[1];
        if ( v6 == 0 )
          break;
        v4 = (hkpWorld::Self *)((char *)v4 - 1);
      }
LABEL_13:
      if ( v38 > (int)(uintptr_t)(v4) )
        break;
      if ( (hkpWorld::Self *)v38 != v4 )
      {
        *v7 = *(uint32_t *)v46;
        *(uint32_t *)v46 = v6;
      }
      v4 = (hkpWorld::Self *)((char *)v4 - 1);
      ++v38;
    }
    while ( (int)(uintptr_t)(v4) >= v38 );
    v36 = (int)(uintptr_t)(v4);
    if ( v37 >= (int)(uintptr_t)(v4) )
      goto LABEL_15;
    while ( 2 )
    {
      v16 = v36;
      v48 = v37;
      v39 = *(uint32_t *)(v43 + 4 * ((v37 + v36) >> 1));
      do
      {
        while ( 2 )
        {
          v41 = v43 + 4 * v48;
          if ( v39 != 0 )
          {
            if ( *(uint32_t *)v41 == 0
              || (v50 = *(uint32_t *)(**(uint32_t **)(v39 + 76) + 208),
                  *(uint32_t *)(**(uint32_t **)(*(uint32_t *)v41 + 76) + 208) < v50) )
            {
              ++v48;
              continue;
            }
            v55 = (hkpWorld::Self *)v16;
            v17 = (uint32_t *)(v43 + 4 * v16);
            while ( 1 )
            {
              v18 = *v17;
              v19 = v17;
              if ( *v17 == 0 )
                break;
              --v17;
              if ( v50 >= *(uint32_t *)(**(uint32_t **)(v18 + 76) + 208) )
                break;
              v55 = (hkpWorld::Self *)((char *)v55 - 1);
            }
            v16 = (int)(uintptr_t)(v55);
          }
          else
          {
            v20 = (uint32_t *)(v43 + 4 * v16);
            while ( 1 )
            {
              v19 = v20--;
              v18 = v20[1];
              if ( v18 == 0 )
                break;
              --v16;
            }
          }
          break;
        }
        if ( v48 > v16 )
          break;
        if ( v48 != v16 )
        {
          *v19 = *(uint32_t *)v41;
          *(uint32_t *)v41 = v18;
        }
        --v16;
        ++v48;
      }
      while ( v16 >= v48 );
      if ( v37 < v16 )
        hkAlgorithm::quickSortRecursive_2b4e80(
          v43,
          v37,
          v16,
          (void (*)(uint8_t *))sub_174B990);
      if ( v48 < v36 )
      {
        v37 = v48;
        continue;
      }
      break;
    }
LABEL_15:
    if ( v35 > v38 )
    {
      v37 = v38;
      v3 = v38;
      continue;
    }
    break;
  }
  v2 = *((uint32_t *)v34 + 17);
LABEL_18:
  if ( v2 > 0 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v9 = *(uint32_t *)(*((uint32_t *)v34 + 16) + 4 * i);
      if ( v9 != 0 )
      {
        *(uint16_t *)(v9 + 34) = i;
        v2 = *((uint32_t *)v34 + 17);
      }
    }
  }
  v10 = v34;
LABEL_24:
  v11 = 4 * v2 - 4;
  while ( v2 != 0 )
  {
    --v2;
    v12 = *(hkpWorld::Self **)(*((uint32_t *)v10 + 16) + v11);
    v11 -= 4;
    *((uint32_t *)v10 + 17) = v2;
    if ( v12 != nullptr )
    {
      v13 = (*((uint8_t *)v12 + 37) & 0x10) == 0;
      *((uint16_t *)v12 + 17) = -1;
      if ( !v13 )
      {
        v53 = *((hkpWorld::Self **)v12 + 16);
        if ( (int)(uintptr_t)(v53) <= 0 )
          goto LABEL_35;
        v14 = *((uint32_t **)v12 + 15);
        v47 = v14;
        if ( *v14 != 0 )
        {
          v15 = 0;
          while ( (hkpWorld::Self *)++v15 != v53 )
          {
            if ( v14[v15] == 0 )
            {
              v28 = v15 + 1;
              goto LABEL_91;
            }
          }
          goto LABEL_35;
        }
        v28 = 1;
        v15 = 0;
LABEL_91:
        if ( (int)(uintptr_t)(v53) > v28 )
        {
          v45 = v12;
          v42 = v10;
          v51 = 4 * v28;
          v29 = v47;
          v30 = 4 * v28;
          while ( 1 )
          {
            v31 = *(uint32_t *)((char *)v29 + v30);
            if ( v31 != 0 )
            {
              v29[v15++] = v31;
              v53 = *((hkpWorld::Self **)v45 + 16);
            }
            ++v28;
            v51 += 4;
            if ( v28 >= (int)(uintptr_t)(v53) )
              break;
            v30 = v51;
            v29 = *((uint32_t **)v45 + 15);
          }
          v12 = v45;
          v10 = v42;
        }
        if ( v15 == -1 )
        {
LABEL_35:
          *((uint8_t *)v12 + 37) &= 0xCFu;
        }
        else
        {
          v32 = *((uint32_t *)v12 + 17) & 0x3FFFFFFF;
          if ( v15 > v32 )
          {
            v33 = 2 * v32;
            v57 = v12;
            if ( v15 >= v33 )
              v33 = v15;
            hkArrayUtil::reserve(
              (hkArrayUtil::Self *)v58,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              (int *)v12 + 15,
              v33,
              4);
            v12 = v57;
          }
          *((uint32_t *)v12 + 16) = v15;
          *((uint8_t *)v12 + 37) &= 0xCFu;
        }
      }
      v54 = *((uint8_t *)v12 + 38);
      if ( ((v54 >> 2) & 3) == (v54 & 3) )
      {
        if ( (v54 & 0x10) != 0 && (v54 & 1) != 0 )
        {
          *((uint8_t *)v12 + 38) = v54 & 0xCF;
LABEL_77:
          v22 = *((uint32_t *)v12 + 7);
          if ( *((uint32_t *)v12 + 20) >= v22 )
            v22 = *((uint32_t *)v12 + 20);
          v44 = v22;
          if ( *((uint32_t *)v10 + 44) > v22 && *((uint8_t *)v10 + 196) != 0 )
          {
            v56 = v12;
            v23 = *((uint32_t *)v10 + 11) - 1;
            v24 = 4 * v23;
            while ( v23 >= 0 )
            {
              v25 = *(uint32_t *)(*((uint32_t *)v10 + 10) + v24);
              if ( v56 != (hkpWorld::Self *)v25 )
              {
                v26 = *(uint32_t *)(v25 + 80);
                if ( (*(uint8_t *)(v25 + 38) & 0xC) != 0 )
                {
                  if ( v26 < *(uint32_t *)(v25 + 28) )
                    v26 = *(uint32_t *)(v25 + 28);
                  if ( v44 + v26 < *((uint32_t *)v10 + 44) )
                  {
                    *(uint8_t *)(v25 + 37) = *(uint8_t *)(v25 + 37) & 0xF3 | 4;
                    v27 = **((uint32_t **)v56 + 19);
                    hkpWorldOperationUtil::internalMergeTwoIslands((hkpWorldOperationUtil::Self *)(v10), v56, (hkpSimulationIsland::Self *)v25);
                    v12 = *(hkpWorld::Self **)(v27 + 200);
                    goto LABEL_77;
                  }
                }
              }
              v24 -= 4;
              --v23;
            }
          }
        }
      }
      else if ( (v54 & 4) != 0 )
      {
        hkpWorldOperationUtil::internalActivateIsland(v10, v12, 1);
      }
      else
      {
        hkpWorldOperationUtil::internalDeactivateIsland((hkpWorldOperationUtil::Self *)(v10), v12);
      }
      v2 = *((uint32_t *)v10 + 17);
      goto LABEL_24;
    }
  }
  hkpWorld::checkDeterminism();
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationQueue::Construct  (binary VA: 0x1778610)
// Original: hkpWorldOperationQueue::hkpWorldOperationQueue
// ----------------------------------------------------------------------------
void hkpWorldOperationQueue::Construct(hkpWorldOperationQueue::Self *self, hkpWorld::Self *a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0x80000000;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationQueue::Destroy  (binary VA: 0x1778660)
// Original: hkpWorldOperationQueue::~hkpWorldOperationQueue
// ----------------------------------------------------------------------------
void hkpWorldOperationQueue::Destroy(hkpWorldOperationQueue::Self *self)
{
  int v1;
  int v2;
  int v3;

  v1 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 8) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 7),
      16 * v1);
  v2 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
  *((uint32_t *)self + 5) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      32 * v2);
  v3 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *((uint32_t *)self + 1) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *(uint32_t *)self,
      32 * v3);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationQueue::queueOperation  (binary VA: 0x1778730)
// Original: hkpWorldOperationQueue::queueOperation
// ----------------------------------------------------------------------------
int hkpWorldOperationQueue::queueOperation(uint32_t *a1, __m128i *a2)
{
  int v2;
  __m128i *v3;
  int v4;
  __m128i *v5;
  int32_t v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int32_t v13;
  int v14;
  int32_t v15; // kr08_4
  int32_t v16;
  int v17;
  int32_t v18; // kr0C_4
  int32_t v19;
  int v20;
  int32_t v21; // kr10_4
  int32_t v22;
  int v23;
  int32_t v24; // kr14_4
  int32_t v25;
  volatile int32_t *v26;
  int32_t n;
  int32_t v28;
  int v29;
  int32_t v30;
  int v31;
  int32_t v32; // kr18_4
  int32_t v33;
  int v34;
  int32_t v35; // kr1C_4
  int32_t v36;
  int v37;
  int32_t v38; // kr20_4
  int32_t v39;
  int v40;
  int32_t v41; // kr24_4
  int32_t v42;
  int v43;
  int32_t v44; // kr28_4
  int32_t v45;
  int v46;
  int32_t v47; // kr2C_4
  int v48;
  hkString::Self *v49;
  uint32_t v50;
  uint32_t v51;
  int v52;
  int v53;
  int32_t v54; // kr30_4
  int32_t v55;
  int v56;
  int32_t v57; // kr34_4
  int32_t v58;
  int v59;
  int32_t v60; // kr38_4
  int32_t v61;
  int32_t v62;
  int v63;
  int32_t v64; // kr3C_4
  int32_t v65;
  int v66;
  int32_t v67; // kr40_4
  int32_t v68;
  int v69;
  uint32_t *v70;
  uint32_t *v71;
  int v72;
  hkString::Self *v73;
  uint32_t v74;
  uint32_t v75;
  int v76;
  int v77;
  int32_t v78; // kr44_4
  int v79;
  hkString::Self *v80;
  uint32_t v81;
  uint32_t v82;
  int v83;
  int v84;
  int32_t v85; // kr48_4
  int32_t v86;
  int v87;
  int32_t v88; // kr4C_4
  int32_t v89;
  int v90;
  int32_t v91; // kr50_4
  int32_t v92;
  int32_t v93;
  int v94;
  uint32_t *v95;
  int32_t v96;
  int v97;
  int32_t v98; // kr54_4
  int32_t v99;
  int v100;
  int32_t v101; // kr58_4
  int32_t v102;
  int v103;
  int32_t v104; // kr5C_4
  int32_t v105;
  int v106;
  int32_t v107; // kr60_4
  int v108;
  hkString::Self *v109;
  uint32_t v110;
  uint32_t v111;
  int v112;
  int v113;
  int32_t v114; // kr64_4
  int address;
  hkString::Self *v116;
  uint32_t v117;
  uint32_t v118;
  int v119;
  int v120;
  int32_t v121; // kr68_4
  int32_t v122;
  int v123;
  int32_t v124; // kr6C_4
  int32_t v125;
  int32_t v126;
  int v127;
  int32_t v128; // kr70_4
  int32_t v129;
  int v130;
  int32_t v131; // kr74_4
  int32_t v132;
  int v133;
  int32_t v134; // kr78_4
  int32_t v135;
  int v136;
  int32_t v137; // kr7C_4
  int32_t v138;
  int v139;
  int32_t v140; // kr80_4
  int32_t v141;
  int32_t v142;
  int v143;
  int32_t v144; // kr84_4
  int v145;
  int32_t v146; // kr88_4
  int32_t k;
  int32_t v148;
  int v149;
  int32_t j;
  int32_t v151;
  int v152;
  volatile int32_t *v153;
  int32_t i;
  int32_t v155;
  int v156;
  volatile int32_t *v157;
  int32_t m;
  int32_t v159;
  int v160;
  volatile int32_t *v161;
  int32_t ii;
  int32_t v163;
  int v164;
  int v165;
  uint32_t v166;
  uint32_t v167;
  uint32_t v168;
  uint32_t v169;
  uint32_t v170;
  int32_t v171;
  int32_t v172;
  int32_t v173;
  __m128i *v174;
  __m128i *v175;
  __m128i *v176;
  __m128i *v177;
  __m128i *v178;
  __m128i *v179;
  volatile int32_t *v180;
  volatile int32_t *v181;
  int32_t v182;
  int32_t v183;
  int32_t v184;
  __m128i *v185;

  hkReferencedObject::lockAll();
  v2 = a1[1];
  v3 = a2;
  if ( v2 == (a1[2] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a1, 32, v165);
    v2 = a1[1];
    v3 = a2;
  }
  *(uint8_t *)(*a1 + 32 * v2) = 0;
  v4 = a1[1];
  a1[1] = v4 + 1;
  v5 = (__m128i *)(*a1 + 32 * v4);
  ++*(uint32_t *)(a1[3] + 132);
  if ( v3 >= &v5[1] || v5 >= &v3[1] )
  {
    *v5 = *v3;
    v5[1] = v3[1];
  }
  else
  {
g4_m128_lane<int32_t>(*(v5), 0) =g4_m128_lane<int32_t>(*(v3), 0);
g4_m128_lane<int32_t>(*(v5), 1) =g4_m128_lane<int32_t>(*(v3), 1);
g4_m128_lane<int32_t>(*(v5), 2) =g4_m128_lane<int32_t>(*(v3), 2);
g4_m128_lane<int32_t>(*(v5), 3) =g4_m128_lane<int32_t>(*(v3), 3);
g4_m128_lane<int32_t>(v5[1], 0) =g4_m128_lane<int32_t>(v3[1], 0);
g4_m128_lane<int32_t>(v5[1], 1) =g4_m128_lane<int32_t>(v3[1], 1);
g4_m128_lane<int32_t>(v5[1], 2) =g4_m128_lane<int32_t>(v3[1], 2);
g4_m128_lane<int32_t>(v5[1], 3) =g4_m128_lane<int32_t>(v3[1], 3);
  }
  switch (g4_m128_lane<int8_t>(*(v5), 0) )
  {
    case 1:
      v135 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v135 + 6) != 0 )
      {
        do
        {
          v137 = *(uint32_t *)(v135 + 4);
          HIWORD(v136) = HIWORD(v137);
          LOWORD(v136) = 0;
        }
        while ( v137 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v135 + 4),
                          v137,
                          v136 | (uint16_t)(v137 + 1)) );
      }
      break;
    case 2:
      v132 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v132 + 6) != 0 )
      {
        do
        {
          v134 = *(uint32_t *)(v132 + 4);
          HIWORD(v133) = HIWORD(v134);
          LOWORD(v133) = 0;
        }
        while ( v134 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v132 + 4),
                          v134,
                          v133 | (uint16_t)(v134 + 1)) );
      }
      break;
    case 3:
      v138 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v138 + 6) != 0 )
      {
        do
        {
          v140 = *(uint32_t *)(v138 + 4);
          HIWORD(v139) = HIWORD(v140);
          LOWORD(v139) = 0;
        }
        while ( v140 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v138 + 4),
                          v140,
                          v139 | (uint16_t)(v140 + 1)) );
      }
      break;
    case 4:
      v129 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v129 + 6) != 0 )
      {
        do
        {
          v131 = *(uint32_t *)(v129 + 4);
          HIWORD(v130) = HIWORD(v131);
          LOWORD(v130) = 0;
        }
        while ( v131 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v129 + 4),
                          v131,
                          v130 | (uint16_t)(v131 + 1)) );
      }
      break;
    case 5:
      v125 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v125 + 6) != 0 )
      {
        v182 =g4_m128_lane<int32_t>(*(v5), 1);
        v153 = (volatile int32_t *)(v125 + 4);
        for ( i = v182; ; i = v182 )
        {
          v155 = *(uint32_t *)(i + 4);
          HIWORD(v156) = HIWORD(v155);
          LOWORD(v156) = 0;
          if ( v155 == __sync_val_compare_and_swap(v153, v155, v156 | (uint16_t)(v155 + 1)) )
            break;
        }
      }
      v126 =g4_m128_lane<int32_t>(*(v5), 2);
      if ( *(uint16_t *)(v126 + 6) != 0 )
      {
        do
        {
          v128 = *(uint32_t *)(v126 + 4);
          HIWORD(v127) = HIWORD(v128);
          LOWORD(v127) = 0;
        }
        while ( v128 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v126 + 4),
                          v128,
                          v127 | (uint16_t)(v128 + 1)) );
      }
      break;
    case 6:
      v122 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v122 + 6) != 0 )
      {
        do
        {
          v124 = *(uint32_t *)(v122 + 4);
          HIWORD(v123) = HIWORD(v124);
          LOWORD(v123) = 0;
        }
        while ( v124 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v122 + 4),
                          v124,
                          v123 | (uint16_t)(v124 + 1)) );
      }
      break;
    case 7:
      v179 = v3;
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v116 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           4 *g4_m128_lane<uint16_t>(*(v5), 4));
g4_m128_lane<int32_t>(*(v5), 1) = (int32_t)(uintptr_t)(v116);
      hkString::memCpy(v116, (void *)g4_m128_lane<int32_t>(*(v179), 1), 4 *g4_m128_lane<uint16_t>(*(v179), 4));
      v117 =g4_m128_lane<uint32_t>(*(v5), 1);
      v118 = v117 + 4 *g4_m128_lane<uint16_t>(*(v5), 4);
      while ( v118 > v117 )
      {
        v117 += 4;
        v119 = *(uint32_t *)(v117 - 4);
        if ( *(uint16_t *)(v119 + 6) != 0 )
        {
          v170 = v117;
          do
          {
            v121 = *(uint32_t *)(v119 + 4);
            HIWORD(v120) = HIWORD(v121);
            LOWORD(v120) = 0;
          }
          while ( v121 != __sync_val_compare_and_swap(
                            (volatile int32_t *)(v119 + 4),
                            v121,
                            v120 | (uint16_t)(v121 + 1)) );
          v117 = v170;
        }
      }
      break;
    case 8:
      v178 = v3;
      v108 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v109 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v108 + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)v108 + 44),
                           4 *g4_m128_lane<uint16_t>(*(v5), 4));
g4_m128_lane<int32_t>(*(v5), 1) = (int32_t)(uintptr_t)(v109);
      hkString::memCpy(v109, (void *)g4_m128_lane<int32_t>(*(v178), 1), 4 *g4_m128_lane<uint16_t>(*(v178), 4));
      v110 =g4_m128_lane<uint32_t>(*(v5), 1);
      v111 = v110 + 4 *g4_m128_lane<uint16_t>(*(v5), 4);
      while ( v111 > v110 )
      {
        v110 += 4;
        v112 = *(uint32_t *)(v110 - 4);
        if ( *(uint16_t *)(v112 + 6) != 0 )
        {
          v169 = v110;
          do
          {
            v114 = *(uint32_t *)(v112 + 4);
            HIWORD(v113) = HIWORD(v114);
            LOWORD(v113) = 0;
          }
          while ( v114 != __sync_val_compare_and_swap(
                            (volatile int32_t *)(v112 + 4),
                            v114,
                            v113 | (uint16_t)(v114 + 1)) );
          v110 = v169;
        }
      }
      break;
    case 9:
      v102 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v102 + 6) != 0 )
      {
        do
        {
          v104 = *(uint32_t *)(v102 + 4);
          HIWORD(v103) = HIWORD(v104);
          LOWORD(v103) = 0;
        }
        while ( v104 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v102 + 4),
                          v104,
                          v103 | (uint16_t)(v104 + 1)) );
      }
      break;
    case 0xA:
      v99 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v99 + 6) != 0 )
      {
        do
        {
          v101 = *(uint32_t *)(v99 + 4);
          HIWORD(v100) = HIWORD(v101);
          LOWORD(v100) = 0;
        }
        while ( v101 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v99 + 4),
                          v101,
                          v100 | (uint16_t)(v101 + 1)) );
      }
      break;
    case 0xB:
      v105 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v105 + 6) != 0 )
      {
        do
        {
          v107 = *(uint32_t *)(v105 + 4);
          HIWORD(v106) = HIWORD(v107);
          LOWORD(v106) = 0;
        }
        while ( v107 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v105 + 4),
                          v107,
                          v106 | (uint16_t)(v107 + 1)) );
      }
      break;
    case 0xC:
      v96 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v96 + 6) != 0 )
      {
        do
        {
          v98 = *(uint32_t *)(v96 + 4);
          HIWORD(v97) = HIWORD(v98);
          LOWORD(v97) = 0;
        }
        while ( v98 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v96 + 4),
                         v98,
                         v97 | (uint16_t)(v98 + 1)) );
      }
      break;
    case 0xD:
      v92 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v92 + 6) != 0 )
      {
        v172 =g4_m128_lane<int32_t>(*(v5), 1);
        v181 = (volatile int32_t *)(v92 + 4);
        for ( j = v172; ; j = v172 )
        {
          v151 = *(uint32_t *)(j + 4);
          HIWORD(v152) = HIWORD(v151);
          LOWORD(v152) = 0;
          if ( v151 == __sync_val_compare_and_swap(v181, v151, v152 | (uint16_t)(v151 + 1)) )
            break;
        }
      }
      v93 =g4_m128_lane<int32_t>(*(v5), 2);
      if ( *(uint16_t *)(v93 + 6) != 0 )
      {
        v171 =g4_m128_lane<int32_t>(*(v5), 2);
        v180 = (volatile int32_t *)(v93 + 4);
        for ( k = v171; ; k = v171 )
        {
          v148 = *(uint32_t *)(k + 4);
          HIWORD(v149) = HIWORD(v148);
          LOWORD(v149) = 0;
          if ( v148 == __sync_val_compare_and_swap(v180, v148, v149 | (uint16_t)(v148 + 1)) )
            break;
        }
      }
      v94 = a1[5];
      if ( v94 == (a1[6] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(a1 + 4),
          32,
          v165);
        v94 = a1[5];
      }
      v95 = (uint32_t *)(a1[4] + 32 * v94);
      *v95 =g4_m128_lane<int32_t>(*(v5), 0);
      v95[1] =g4_m128_lane<int32_t>(*(v5), 1);
      v95[2] =g4_m128_lane<int32_t>(*(v5), 2);
      v95[3] =g4_m128_lane<int32_t>(*(v5), 3);
      v95[4] =g4_m128_lane<int32_t>(v5[1], 0);
      v95[5] =g4_m128_lane<int32_t>(v5[1], 1);
      v95[6] =g4_m128_lane<int32_t>(v5[1], 2);
      v95[7] =g4_m128_lane<int32_t>(v5[1], 3);
      ++a1[5];
      --a1[1];
      break;
    case 0xE:
      v89 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v89 + 6) != 0 )
      {
        do
        {
          v91 = *(uint32_t *)(v89 + 4);
          HIWORD(v90) = HIWORD(v91);
          LOWORD(v90) = 0;
        }
        while ( v91 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v89 + 4),
                         v91,
                         v90 | (uint16_t)(v91 + 1)) );
      }
      break;
    case 0xF:
      v86 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v86 + 6) != 0 )
      {
        do
        {
          v88 = *(uint32_t *)(v86 + 4);
          HIWORD(v87) = HIWORD(v88);
          LOWORD(v87) = 0;
        }
        while ( v88 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v86 + 4),
                         v88,
                         v87 | (uint16_t)(v88 + 1)) );
      }
      break;
    case 0x10:
      v177 = v3;
      v79 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v80 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v79 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v79 + 44),
                          4 *g4_m128_lane<uint16_t>(*(v5), 4));
g4_m128_lane<int32_t>(*(v5), 1) = (int32_t)(uintptr_t)(v80);
      hkString::memCpy(v80, (void *)g4_m128_lane<int32_t>(*(v177), 1), 4 *g4_m128_lane<uint16_t>(*(v177), 4));
      v81 =g4_m128_lane<uint32_t>(*(v5), 1);
      v82 = v81 + 4 *g4_m128_lane<uint16_t>(*(v5), 4);
      while ( v82 > v81 )
      {
        v81 += 4;
        v83 = *(uint32_t *)(v81 - 4);
        if ( *(uint16_t *)(v83 + 6) != 0 )
        {
          v168 = v81;
          do
          {
            v85 = *(uint32_t *)(v83 + 4);
            HIWORD(v84) = HIWORD(v85);
            LOWORD(v84) = 0;
          }
          while ( v85 != __sync_val_compare_and_swap(
                           (volatile int32_t *)(v83 + 4),
                           v85,
                           v84 | (uint16_t)(v85 + 1)) );
          v81 = v168;
        }
      }
      break;
    case 0x11:
      v176 = v3;
      v72 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v73 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v72 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v72 + 44),
                          4 *g4_m128_lane<uint16_t>(*(v5), 4));
g4_m128_lane<int32_t>(*(v5), 1) = (int32_t)(uintptr_t)(v73);
      hkString::memCpy(v73, (void *)g4_m128_lane<int32_t>(*(v176), 1), 4 *g4_m128_lane<uint16_t>(*(v176), 4));
      v74 =g4_m128_lane<uint32_t>(*(v5), 1);
      v75 = v74 + 4 *g4_m128_lane<uint16_t>(*(v5), 4);
      while ( v75 > v74 )
      {
        v74 += 4;
        v76 = *(uint32_t *)(v74 - 4);
        if ( *(uint16_t *)(v76 + 6) != 0 )
        {
          v167 = v74;
          do
          {
            v78 = *(uint32_t *)(v76 + 4);
            HIWORD(v77) = HIWORD(v78);
            LOWORD(v77) = 0;
          }
          while ( v78 != __sync_val_compare_and_swap(
                           (volatile int32_t *)(v76 + 4),
                           v78,
                           v77 | (uint16_t)(v78 + 1)) );
          v74 = v167;
        }
      }
      break;
    case 0x12:
      v68 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v68 + 6) != 0 )
      {
        v185 = v3;
        do
        {
          v146 = *(uint32_t *)(v68 + 4);
          HIWORD(v145) = HIWORD(v146);
          LOWORD(v145) = 0;
        }
        while ( v146 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v68 + 4),
                          v146,
                          v145 | (uint16_t)(v146 + 1)) );
        v3 = v185;
      }
      v175 = v3;
      v69 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v70 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v69 + 44) + 8))(
                        *(uint32_t *)(*(uint32_t *)v69 + 44),
                        32);
g4_m128_lane<int32_t>(*(v5), 2) = (int32_t)(uintptr_t)(v70);
      v71 = (uint32_t *)g4_m128_lane<int32_t>(*(v175), 2);
      *v70 = *v71;
      v70[1] = v71[1];
      v70[2] = v71[2];
      v70[3] = v71[3];
      v70[4] = v71[4];
      v70[5] = v71[5];
      v70[6] = v71[6];
      v70[7] = v71[7];
      break;
    case 0x13:
      v65 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v65 + 6) != 0 )
      {
        do
        {
          v67 = *(uint32_t *)(v65 + 4);
          HIWORD(v66) = HIWORD(v67);
          LOWORD(v66) = 0;
        }
        while ( v67 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v65 + 4),
                         v67,
                         v66 | (uint16_t)(v67 + 1)) );
      }
      break;
    case 0x14:
      v61 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v61 + 6) != 0 )
      {
        v183 =g4_m128_lane<int32_t>(*(v5), 1);
        v157 = (volatile int32_t *)(v61 + 4);
        for ( m = v183; ; m = v183 )
        {
          v159 = *(uint32_t *)(m + 4);
          HIWORD(v160) = HIWORD(v159);
          LOWORD(v160) = 0;
          if ( v159 == __sync_val_compare_and_swap(v157, v159, v160 | (uint16_t)(v159 + 1)) )
            break;
        }
      }
      v62 =g4_m128_lane<int32_t>(*(v5), 2);
      if ( *(uint16_t *)(v62 + 6) != 0 )
      {
        do
        {
          v64 = *(uint32_t *)(v62 + 4);
          HIWORD(v63) = HIWORD(v64);
          LOWORD(v63) = 0;
        }
        while ( v64 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v62 + 4),
                         v64,
                         v63 | (uint16_t)(v64 + 1)) );
      }
      break;
    case 0x15:
      v58 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v58 + 6) != 0 )
      {
        do
        {
          v60 = *(uint32_t *)(v58 + 4);
          HIWORD(v59) = HIWORD(v60);
          LOWORD(v59) = 0;
        }
        while ( v60 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v58 + 4),
                         v60,
                         v59 | (uint16_t)(v60 + 1)) );
      }
      break;
    case 0x17:
      v55 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v55 + 6) != 0 )
      {
        do
        {
          v57 = *(uint32_t *)(v55 + 4);
          HIWORD(v56) = HIWORD(v57);
          LOWORD(v56) = 0;
        }
        while ( v57 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v55 + 4),
                         v57,
                         v56 | (uint16_t)(v57 + 1)) );
      }
      break;
    case 0x18:
      v174 = v3;
      v48 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v49 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v48 + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)v48 + 44),
                          4 *g4_m128_lane<uint16_t>(*(v5), 4));
g4_m128_lane<int32_t>(*(v5), 1) = (int32_t)(uintptr_t)(v49);
      hkString::memCpy(v49, (void *)g4_m128_lane<int32_t>(*(v174), 1), 4 *g4_m128_lane<uint16_t>(*(v174), 4));
      v50 =g4_m128_lane<uint32_t>(*(v5), 1);
      v51 = v50 + 4 *g4_m128_lane<uint16_t>(*(v5), 4);
      while ( v51 > v50 )
      {
        v50 += 4;
        v52 = *(uint32_t *)(v50 - 4);
        if ( *(uint16_t *)(v52 + 6) != 0 )
        {
          v166 = v50;
          do
          {
            v54 = *(uint32_t *)(v52 + 4);
            HIWORD(v53) = HIWORD(v54);
            LOWORD(v53) = 0;
          }
          while ( v54 != __sync_val_compare_and_swap(
                           (volatile int32_t *)(v52 + 4),
                           v54,
                           v53 | (uint16_t)(v54 + 1)) );
          v50 = v166;
        }
      }
      break;
    case 0x19:
      v45 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v45 + 6) != 0 )
      {
        do
        {
          v47 = *(uint32_t *)(v45 + 4);
          HIWORD(v46) = HIWORD(v47);
          LOWORD(v46) = 0;
        }
        while ( v47 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v45 + 4),
                         v47,
                         v46 | (uint16_t)(v47 + 1)) );
      }
      break;
    case 0x1A:
      v42 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v42 + 6) != 0 )
      {
        do
        {
          v44 = *(uint32_t *)(v42 + 4);
          HIWORD(v43) = HIWORD(v44);
          LOWORD(v43) = 0;
        }
        while ( v44 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v42 + 4),
                         v44,
                         v43 | (uint16_t)(v44 + 1)) );
      }
      break;
    case 0x1B:
      v39 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v39 + 6) != 0 )
      {
        do
        {
          v41 = *(uint32_t *)(v39 + 4);
          HIWORD(v40) = HIWORD(v41);
          LOWORD(v40) = 0;
        }
        while ( v41 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v39 + 4),
                         v41,
                         v40 | (uint16_t)(v41 + 1)) );
      }
      break;
    case 0x1C:
      v36 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v36 + 6) != 0 )
      {
        do
        {
          v38 = *(uint32_t *)(v36 + 4);
          HIWORD(v37) = HIWORD(v38);
          LOWORD(v37) = 0;
        }
        while ( v38 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v36 + 4),
                         v38,
                         v37 | (uint16_t)(v38 + 1)) );
      }
      break;
    case 0x1D:
      v33 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v33 + 6) != 0 )
      {
        do
        {
          v35 = *(uint32_t *)(v33 + 4);
          HIWORD(v34) = HIWORD(v35);
          LOWORD(v34) = 0;
        }
        while ( v35 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v33 + 4),
                         v35,
                         v34 | (uint16_t)(v35 + 1)) );
      }
      break;
    case 0x1E:
      v30 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v30 + 6) != 0 )
      {
        do
        {
          v32 = *(uint32_t *)(v30 + 4);
          HIWORD(v31) = HIWORD(v32);
          LOWORD(v31) = 0;
        }
        while ( v32 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v30 + 4),
                         v32,
                         v31 | (uint16_t)(v32 + 1)) );
      }
      break;
    case 0x1F:
      v25 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v25 + 6) != 0 )
      {
        v173 =g4_m128_lane<int32_t>(*(v5), 1);
        v26 = (volatile int32_t *)(v25 + 4);
        for ( n = v25; ; n = v173 )
        {
          v28 = *(uint32_t *)(n + 4);
          HIWORD(v29) = HIWORD(v28);
          LOWORD(v29) = 0;
          if ( v28 == __sync_val_compare_and_swap(v26, v28, v29 | (uint16_t)(v28 + 1)) )
            break;
        }
      }
      goto LABEL_10;
    case 0x20:
      v6 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v6 + 6) != 0 )
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
LABEL_10:
      v11 = a1[3];
      --a1[1];
      --*(uint32_t *)(v11 + 132);
      break;
    case 0x22:
      v19 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v19 + 6) != 0 )
      {
        do
        {
          v21 = *(uint32_t *)(v19 + 4);
          HIWORD(v20) = HIWORD(v21);
          LOWORD(v20) = 0;
        }
        while ( v21 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v19 + 4),
                         v21,
                         v20 | (uint16_t)(v21 + 1)) );
      }
      break;
    case 0x23:
      v16 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v16 + 6) != 0 )
      {
        do
        {
          v18 = *(uint32_t *)(v16 + 4);
          HIWORD(v17) = HIWORD(v18);
          LOWORD(v17) = 0;
        }
        while ( v18 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v16 + 4),
                         v18,
                         v17 | (uint16_t)(v18 + 1)) );
      }
      break;
    case 0x24:
      v13 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v13 + 6) != 0 )
      {
        do
        {
          v15 = *(uint32_t *)(v13 + 4);
          HIWORD(v14) = HIWORD(v15);
          LOWORD(v14) = 0;
        }
        while ( v15 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v13 + 4),
                         v15,
                         v14 | (uint16_t)(v15 + 1)) );
      }
      break;
    case 0x25:
      v141 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v141 + 6) != 0 )
      {
        v184 =g4_m128_lane<int32_t>(*(v5), 1);
        v161 = (volatile int32_t *)(v141 + 4);
        for ( ii = v184; ; ii = v184 )
        {
          v163 = *(uint32_t *)(ii + 4);
          HIWORD(v164) = HIWORD(v163);
          LOWORD(v164) = 0;
          if ( v163 == __sync_val_compare_and_swap(v161, v163, v164 | (uint16_t)(v163 + 1)) )
            break;
        }
      }
      v142 =g4_m128_lane<int32_t>(*(v5), 2);
      if ( *(uint16_t *)(v142 + 6) != 0 )
      {
        do
        {
          v144 = *(uint32_t *)(v142 + 4);
          HIWORD(v143) = HIWORD(v144);
          LOWORD(v143) = 0;
        }
        while ( v144 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v142 + 4),
                          v144,
                          v143 | (uint16_t)(v144 + 1)) );
      }
      break;
    case 0x26:
      v22 =g4_m128_lane<int32_t>(*(v5), 1);
      if ( *(uint16_t *)(v22 + 6) != 0 )
      {
        do
        {
          v24 = *(uint32_t *)(v22 + 4);
          HIWORD(v23) = HIWORD(v24);
          LOWORD(v23) = 0;
        }
        while ( v24 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v22 + 4),
                         v24,
                         v23 | (uint16_t)(v24 + 1)) );
      }
      break;
    default:
      return hkReferencedObject::unlockAll();
  }
  return hkReferencedObject::unlockAll();
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationQueue::queueBodyOperation  (binary VA: 0x1779490)
// Original: hkpWorldOperationQueue::queueBodyOperation
// ----------------------------------------------------------------------------
int hkpWorldOperationQueue::queueBodyOperation(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  uint32_t *v7;
  int v9;
  int32_t v10; // kr00_4
  int v11;
  int32_t v12; // kr04_4
  int v13;

  hkReferencedObject::lockAll();
  ++*(uint32_t *)(a1[3] + 136);
  v5 = a1[8];
  if ( v5 == (a1[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 7), 16, v13);
    v5 = a1[8];
  }
  v6 = a1[7];
  a1[8] = v5 + 1;
  v7 = (uint32_t *)(v6 + 16 * v5);
  v7[2] = a4;
  *v7 = a2;
  v7[1] = a3;
  v7[3] = a5;
  if ( *(uint16_t *)(a2 + 6) != 0 )
  {
    do
    {
      v12 = *(uint32_t *)(a2 + 4);
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
    }
    while ( v12 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(a2 + 4),
                     v12,
                     v11 | (uint16_t)(v12 + 1)) );
  }
  if ( *(uint16_t *)(a3 + 6) != 0 )
  {
    do
    {
      v10 = *(uint32_t *)(a3 + 4);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
    }
    while ( v10 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(a3 + 4),
                     v10,
                     v9 | (uint16_t)(v10 + 1)) );
  }
  return hkReferencedObject::unlockAll();
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationQueue::executeAllPendingBodyOperations  (binary VA: 0x1779720)
// Original: hkpWorldOperationQueue::executeAllPendingBodyOperations
// ----------------------------------------------------------------------------
char * hkpWorldOperationQueue::executeAllPendingBodyOperations(hkpWorldOperationQueue::Self *self)
{
  char *result;
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  int v6;
  int i;
  int v8;
  int *v9;
  bool v10;
  int v11;
  uint32_t *v12;
  int *v13;
  bool v14;
  int *v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int j;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  int v24;
  int v25;
  int32_t v26; // kr00_4
  int32_t v27;
  int32_t v28; // ett
  int v29;
  int32_t v30; // kr04_4
  int32_t v31;
  int32_t v32; // ett
  typedef int *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef hkpWorldOperationQueue::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int *_g4_t_v50;
  typedef int *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef volatile int32_t *_g4_t_v54;
  typedef int _g4_t_k;
  typedef int _g4_t_v56;
  typedef g4_int128_t _g4_t_v57;
  typedef uint32_t _g4_t_v58[10];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v33)) > _g4_s0 ? (12u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v34)) > _g4_s1 ? (16u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v35)) > _g4_s2 ? (20u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v36)) > _g4_s3 ? (24u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v37)) > _g4_s4 ? (28u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v38)) > _g4_s5 ? (32u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v39)) > _g4_s6 ? (36u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v40)) > _g4_s7 ? (40u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v41)) > _g4_s8 ? (44u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v42)) > _g4_s9 ? (44u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v43)) > _g4_s10 ? (48u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v44)) > _g4_s11 ? (52u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v45)) > _g4_s12 ? (52u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v46)) > _g4_s13 ? (60u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v47)) > _g4_s14 ? (64u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v48)) > _g4_s15 ? (64u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v49)) > _g4_s16 ? (64u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v50)) > _g4_s17 ? (68u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v51)) > _g4_s18 ? (68u + sizeof(_g4_t_v51)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v52)) > _g4_s19 ? (68u + sizeof(_g4_t_v52)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v53)) > _g4_s20 ? (68u + sizeof(_g4_t_v53)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v54)) > _g4_s21 ? (68u + sizeof(_g4_t_v54)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_k)) > _g4_s22 ? (72u + sizeof(_g4_t_k)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v56)) > _g4_s23 ? (76u + sizeof(_g4_t_v56)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v57)) > _g4_s24 ? (80u + sizeof(_g4_t_v57)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v58)) > _g4_s25 ? (96u + sizeof(_g4_t_v58)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 68u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 68u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 96u);

  v58[6] = (uint32_t)(uintptr_t)(&self);
  v35 = self;
  result = (char *)self + 28;
  v33 = (int *)((char *)self + 28);
  v37 = *((uint32_t *)self + 8);
  if ( v37 != 0 )
  {
    while ( 1 )
    {
      v2 = *((uint32_t *)v35 + 7);
      *((uint32_t *)v35 + 8) = 0;
      v46 = v2;
      v3 = *((uint32_t *)v35 + 9);
      *((uint32_t *)v35 + 7) = 0;
      *((uint32_t *)v35 + 9) = 0x80000000;
      v34 = v3;
      *(uint32_t *)(*((uint32_t *)v35 + 3) + 136) = 0;
      v4 = *((uint32_t *)v35 + 9) & 0x3FFFFFFF;
      if ( v4 <= 0xF )
      {
        v5 = 2 * v4;
        v6 = 16;
        if ( v5 >= 16 )
          v6 = v5;
        hkArrayUtil::reserve((hkArrayUtil::Self *)&v56, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v33, v6, 16);
      }
      if ( v37 > 1 )
        break;
      if ( v37 > 0 )
        goto LABEL_39;
      hkReferencedObject::lockAll();
LABEL_52:
      hkReferencedObject::unlockAll();
      if ( v34 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v46,
          16 * v34);
      result = *((char **)v35 + 8);
      v37 = (int)(uintptr_t)(result);
      if ( result == nullptr )
        return result;
    }
    v39 = 0;
    v36 = v37 - 1;
    for ( i = 0; ; i = v43 )
    {
      v43 = i;
      v8 = v37 - 1;
      v57 = *(g4_int128_t *)(v46 + 16 * ((i + v36) >> 1));
      do
      {
        while ( 1 )
        {
          v47 = (int *)(v46 + 16 * v43);
          if ( !hkpWorldBodyOperationQueueSortCmp(v47, &v57) )
            break;
          ++v43;
        }
        v9 = (int *)(16 * v8 + v46);
        while ( 1 )
        {
          v50 = v9;
          v10 = hkpWorldBodyOperationQueueSortCmp(&v57, v9);
          v9 -= 4;
          if ( !v10 )
            break;
          --v8;
        }
        if ( v43 > v8 )
          break;
        if ( v43 != v8 )
        {
          v17 = v50;
          v45 = v50[2];
          v42 = v50[3];
          v53 = v50[1];
          v18 = *v17;
          *v17 = *v47;
          v17[1] = v47[1];
          v17[2] = v47[2];
          v17[3] = v47[3];
          *v47 = v18;
          v47[2] = v45;
          v47[1] = v53;
          v47[3] = v42;
        }
        --v8;
        ++v43;
      }
      while ( v43 <= v8 );
      v38 = v8;
      if ( v39 < v8 )
      {
        while ( 2 )
        {
          v11 = v38;
          v48 = v39;
          v12 = (uint32_t *)(v46 + 16 * ((v39 + v38) >> 1));
          v58[0] = *v12;
          v58[1] = v12[1];
          v58[2] = v12[2];
          v58[3] = v12[3];
          do
          {
            while ( 1 )
            {
              v44 = (int *)(v46 + 16 * v48);
              if ( !hkpWorldBodyOperationQueueSortCmp(v44, v58) )
                break;
              ++v48;
            }
            v13 = (int *)(16 * v11 + v46);
            while ( 1 )
            {
              v51 = v13;
              v14 = hkpWorldBodyOperationQueueSortCmp(v58, v13);
              v13 -= 4;
              if ( !v14 )
                break;
              --v11;
            }
            if ( v48 > v11 )
            {
              if ( v39 >= v11 )
                goto LABEL_19;
              goto LABEL_32;
            }
            if ( v48 != v11 )
            {
              v15 = v51;
              v41 = v51[2];
              v40 = v51[3];
              v52 = v51[1];
              v16 = *v15;
              *v15 = *v44;
              v15[1] = v44[1];
              v15[2] = v44[2];
              v15[3] = v44[3];
              *v44 = v16;
              v44[2] = v41;
              v44[1] = v52;
              v44[3] = v40;
            }
            --v11;
            ++v48;
          }
          while ( v48 <= v11 );
          if ( v39 < v11 )
LABEL_32:
            hkAlgorithm::quickSortRecursive_4f25f5(
              v46,
              v39,
              v11,
              (int (*)(int *, int *))((bool (*)(uint32_t *, uint32_t *))hkpWorldBodyOperationQueueSortCmp));
LABEL_19:
          if ( v48 < v38 )
          {
            v39 = v48;
            continue;
          }
          break;
        }
      }
      if ( v36 <= v43 )
        break;
      v39 = v43;
    }
LABEL_39:
    v19 = v46;
    for ( j = 0; j != v37; ++j )
    {
      LOWORD(v58[0]) = 256;
      v21 = *(uint32_t *)(v19 + 4);
      v19 += 16;
      G4_VCALL<void>(v21, 20, *(uint32_t *)(v19 - 16), v58);
    }
    hkReferencedObject::lockAll();
    v22 = (uint32_t *)v46;
    for ( k = 0; k != v37; ++k )
    {
      v23 = (uint32_t *)*v22;
      v24 = v22[1];
      v54 = (volatile int32_t *)(*v22 + 4);
      if ( *(uint16_t *)(*v22 + 6) != 0 )
      {
        v49 = v22[1];
        do
        {
          v26 = v23[1];
          HIWORD(v25) = HIWORD(v26);
          LOWORD(v25) = 0;
          v27 = v25 | (uint16_t)(v26 - 1);
          v28 = v26;
        }
        while ( v28 != __sync_val_compare_and_swap(v54, v28, v27) );
        v24 = v49;
        if ( (uint16_t)v27 == 0 )
          G4_VCALL<void>(v23, 16);
      }
      if ( *(uint16_t *)(v24 + 6) != 0 )
      {
        do
        {
          v30 = *(uint32_t *)(v24 + 4);
          HIWORD(v29) = HIWORD(v30);
          LOWORD(v29) = 0;
          v31 = v29 | (uint16_t)(v30 - 1);
          v32 = v30;
        }
        while ( v32 != __sync_val_compare_and_swap((volatile int32_t *)(v24 + 4), v32, v31) );
        if ( (uint16_t)v31 == 0 )
          G4_VCALL<void>(v24, 16);
      }
      v22 += 4;
    }
    goto LABEL_52;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldOperationQueue::executeAllPending  (binary VA: 0x1779e00)
// Original: hkpWorldOperationQueue::executeAllPending
// ----------------------------------------------------------------------------
int hkpWorldOperationQueue::executeAllPending(hkpWorldOperationQueue::Self *self)
{
  hkpWorldOperationQueue::Self *v1;
  hkpWorldOperationQueue::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  char v10;
  unsigned int v11;
  int *i;
  int *v13;
  unsigned int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int32_t v18; // kr00_4
  int32_t v19;
  int32_t v20; // ett
  int v21;
  int v22;
  int32_t v23; // kr04_4
  int32_t v24;
  int32_t v25; // ett
  int v26;
  int v27;
  int result;
  int v29;
  int32_t v30; // kr08_4
  int32_t v31; // ett
  int v32;
  int32_t v33; // kr0C_4
  int32_t v34; // ett
  int v35;
  int32_t v36; // kr10_4
  int32_t v37; // ett
  int v38;
  hkpEntity::Self *v39;
  int v40;
  int32_t v41; // kr14_4
  int32_t v42; // ett
  hkpEntity::Self *v43;
  int v44;
  int v45;
  int32_t v46; // kr18_4
  int32_t v47; // ett
  hkpEntity::Self *v48;
  int v49;
  int32_t v50; // kr1C_4
  int32_t v51; // ett
  hkpEntity::Self *v52;
  int v53;
  int32_t v54; // kr20_4
  int32_t v55; // ett
  hkpEntity::Self *v56;
  int v57;
  int32_t v58; // kr24_4
  int32_t v59; // ett
  int v60;
  int v61;
  int32_t v62; // kr28_4
  int32_t v63; // ett
  int v64;
  unsigned int v65;
  unsigned int v66;
  uint32_t *v67;
  int v68;
  int v69;
  int v70;
  int32_t v71; // kr2C_4
  int32_t v72;
  int32_t v73; // ett
  int v74;
  int v75;
  int32_t v76; // kr30_4
  int32_t v77; // ett
  hkpWorld::Self *v78;
  int v79;
  int32_t v80; // kr34_4
  int32_t v81; // ett
  int v82;
  hkpWorld::Self *v83;
  int v84;
  int32_t v85; // kr38_4
  int32_t v86;
  int32_t v87; // ett
  int v88;
  int32_t v89; // kr3C_4
  int32_t v90; // ett
  int v91;
  int32_t v92; // kr40_4
  int32_t v93; // ett
  int v94;
  int v95;
  int32_t v96; // kr44_4
  int32_t v97;
  int32_t v98; // ett
  int v99;
  int v100;
  int address;
  hkpWorld::Self *v102;
  int v103;
  int32_t v104; // kr48_4
  int32_t v105; // ett
  int v106;
  int32_t v107; // kr4C_4
  int32_t v108; // ett
  int v109;
  int32_t v110; // kr50_4
  int32_t v111; // ett
  int v112;
  int32_t v113; // kr54_4
  int32_t v114; // ett
  int v115;
  int32_t v116; // kr58_4
  int32_t v117; // ett
  int v118;
  int32_t v119; // kr5C_4
  int32_t v120; // ett
  int v121;
  int32_t v122; // kr60_4
  int32_t v123; // ett
  int v124;
  int v125;
  int32_t v126; // kr64_4
  int32_t v127;
  int32_t v128; // ett
  int v129;
  int32_t v130; // kr68_4
  int32_t v131; // ett
  int v132;
  int32_t v133; // kr6C_4
  int32_t v134; // ett
  hkpWorldOperationUtil::Self *v135;
  int v136;
  int32_t v137; // kr70_4
  int32_t v138; // ett
  hkpEntity::Self *v139;
  int v140;
  int32_t v141; // kr74_4
  int32_t v142; // ett
  int v143;
  int32_t v144; // kr78_4
  int32_t v145; // ett
  int k;
  int v147;
  int32_t v148; // kr7C_4
  int32_t v149;
  int32_t v150; // ett
  int v151;
  int32_t v152; // kr80_4
  int32_t v153;
  int32_t v154; // ett
  int v155;
  int v156;
  int v157;
  hkpWorldOperationUtil::Self *v158;
  int v159;
  int32_t v160; // kr84_4
  int32_t v161; // ett
  int v162;
  int v163;
  int v164;
  int *v165;
  unsigned int v166;
  int *j;
  int *v168;
  unsigned int v169;
  char v170;
  hkpWorld::Self *v171;
  int v172;
  hkpWorld::Self *v173;
  int v174;
  hkpEntity::Self *v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef uint32_t *_g4_t_v179;
  typedef int _g4_t_v180;
  typedef int _g4_t_v181;
  typedef hkReferencedObject::Self *_g4_t_v182;
  typedef int _g4_t_v183;
  typedef int _g4_t_v184;
  typedef unsigned int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef uint32_t *_g4_t_v189;
  typedef int _g4_t_v190;
  typedef int _g4_t_v191;
  typedef volatile int32_t *_g4_t_v192;
  typedef volatile int32_t *_g4_t_v193;
  typedef int _g4_t_v194;
  typedef volatile int32_t *_g4_t_v195;
  typedef volatile int32_t *_g4_t_v196;
  typedef volatile int32_t *_g4_t_v197;
  typedef int _g4_t_v198;
  typedef unsigned int _g4_t_v199;
  typedef uint16_t _g4_t_v200;
  typedef volatile int32_t *_g4_t_v201;
  typedef int _g4_t_v202;
  typedef int *_g4_t_v203;
  typedef int *_g4_t_v204;
  typedef int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef int *_g4_t_v207;
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef unsigned int _g4_t_v210;
  typedef int _g4_t_v211;
  typedef unsigned int _g4_t_v212;
  typedef char _g4_t_v213;
  typedef int _g4_t_v214;
  typedef int _g4_t_v215;
  typedef int _g4_t_v216;
  typedef int _g4_t_v217;
  typedef int _g4_t_v218;
  typedef int _g4_t_v219;
  typedef int _g4_t_v220;
  typedef int _g4_t_v221;
  typedef hkpWorldOperationQueue::Self **_g4_t_v222;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v176)) > _g4_s0 ? (0u + sizeof(_g4_t_v176)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v177)) > _g4_s1 ? (16u + sizeof(_g4_t_v177)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v178)) > _g4_s2 ? (24u + sizeof(_g4_t_v178)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v179)) > _g4_s3 ? (28u + sizeof(_g4_t_v179)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v180)) > _g4_s4 ? (32u + sizeof(_g4_t_v180)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v181)) > _g4_s5 ? (36u + sizeof(_g4_t_v181)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v182)) > _g4_s6 ? (40u + sizeof(_g4_t_v182)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v183)) > _g4_s7 ? (44u + sizeof(_g4_t_v183)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v184)) > _g4_s8 ? (44u + sizeof(_g4_t_v184)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v185)) > _g4_s9 ? (48u + sizeof(_g4_t_v185)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v186)) > _g4_s10 ? (48u + sizeof(_g4_t_v186)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v187)) > _g4_s11 ? (52u + sizeof(_g4_t_v187)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v188)) > _g4_s12 ? (56u + sizeof(_g4_t_v188)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v189)) > _g4_s13 ? (56u + sizeof(_g4_t_v189)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v190)) > _g4_s14 ? (56u + sizeof(_g4_t_v190)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v191)) > _g4_s15 ? (60u + sizeof(_g4_t_v191)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v192)) > _g4_s16 ? (60u + sizeof(_g4_t_v192)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v193)) > _g4_s17 ? (60u + sizeof(_g4_t_v193)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v194)) > _g4_s18 ? (60u + sizeof(_g4_t_v194)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v195)) > _g4_s19 ? (60u + sizeof(_g4_t_v195)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v196)) > _g4_s20 ? (60u + sizeof(_g4_t_v196)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v197)) > _g4_s21 ? (60u + sizeof(_g4_t_v197)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v198)) > _g4_s22 ? (60u + sizeof(_g4_t_v198)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v199)) > _g4_s23 ? (60u + sizeof(_g4_t_v199)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v200)) > _g4_s24 ? (60u + sizeof(_g4_t_v200)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v201)) > _g4_s25 ? (60u + sizeof(_g4_t_v201)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v202)) > _g4_s26 ? (64u + sizeof(_g4_t_v202)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v203)) > _g4_s27 ? (64u + sizeof(_g4_t_v203)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v204)) > _g4_s28 ? (68u + sizeof(_g4_t_v204)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v205)) > _g4_s29 ? (68u + sizeof(_g4_t_v205)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v206)) > _g4_s30 ? (72u + sizeof(_g4_t_v206)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v207)) > _g4_s31 ? (72u + sizeof(_g4_t_v207)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v208)) > _g4_s32 ? (76u + sizeof(_g4_t_v208)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v209)) > _g4_s33 ? (76u + sizeof(_g4_t_v209)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v210)) > _g4_s34 ? (80u + sizeof(_g4_t_v210)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v211)) > _g4_s35 ? (80u + sizeof(_g4_t_v211)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v212)) > _g4_s36 ? (80u + sizeof(_g4_t_v212)) : _g4_s36,
    _g4_s38 = (87u + sizeof(_g4_t_v213)) > _g4_s37 ? (87u + sizeof(_g4_t_v213)) : _g4_s37,
    _g4_s39 = (88u + sizeof(_g4_t_v214)) > _g4_s38 ? (88u + sizeof(_g4_t_v214)) : _g4_s38,
    _g4_s40 = (92u + sizeof(_g4_t_v215)) > _g4_s39 ? (92u + sizeof(_g4_t_v215)) : _g4_s39,
    _g4_s41 = (96u + sizeof(_g4_t_v216)) > _g4_s40 ? (96u + sizeof(_g4_t_v216)) : _g4_s40,
    _g4_s42 = (100u + sizeof(_g4_t_v217)) > _g4_s41 ? (100u + sizeof(_g4_t_v217)) : _g4_s41,
    _g4_s43 = (104u + sizeof(_g4_t_v218)) > _g4_s42 ? (104u + sizeof(_g4_t_v218)) : _g4_s42,
    _g4_s44 = (108u + sizeof(_g4_t_v219)) > _g4_s43 ? (108u + sizeof(_g4_t_v219)) : _g4_s43,
    _g4_s45 = (112u + sizeof(_g4_t_v220)) > _g4_s44 ? (112u + sizeof(_g4_t_v220)) : _g4_s44,
    _g4_s46 = (116u + sizeof(_g4_t_v221)) > _g4_s45 ? (116u + sizeof(_g4_t_v221)) : _g4_s45,
    _g4_s47 = (128u + sizeof(_g4_t_v222)) > _g4_s46 ? (128u + sizeof(_g4_t_v222)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 0u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 16u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 24u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 28u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 32u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 36u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 40u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 44u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 44u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 48u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 48u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 52u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 56u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 56u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 56u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 60u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 60u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 60u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 60u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 60u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 60u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 60u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 60u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 60u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 60u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 60u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 64u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 64u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 68u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 68u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 72u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 72u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 76u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 76u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 80u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 80u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 80u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 87u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 88u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 92u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 96u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 100u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 104u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 108u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 112u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 116u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 128u);

  v222 = &self;
  v1 = self;
  v182 = (hkReferencedObject::Self *)(self);
  hkReferencedObject::lockAll();
  v2 = v1;
  v179 = *(uint32_t **)v1;
  v3 = *((uint32_t *)v1 + 1);
  *(uint32_t *)v2 = 0;
  v180 = v3;
  v4 = *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 1) = 0;
  *((uint32_t *)v2 + 2) = 0x80000000;
  v177 = v4;
  ++*(uint32_t *)(*((uint32_t *)v2 + 3) + 156);
  v5 = *((uint32_t *)v2 + 5);
  if ( v5 == 0 )
    goto LABEL_17;
  v187 = *((uint32_t *)v182 + 4);
  if ( v5 <= 1 )
  {
    k = *((uint32_t *)v182 + 4);
    goto LABEL_190;
  }
  v181 = 0;
  v178 = v5 - 1;
  v6 = 0;
  while ( 2 )
  {
    v7 = v187 + 32 * ((v6 + v178) >> 1);
    v202 = *(uint32_t *)(v7 + 8);
    v188 = *(uint32_t *)(v7 + 4);
    v8 = (int *)(32 * v6 + v187 + 4);
    v183 = v6 + 1;
    v206 = v6 + 1;
    v210 = *(uint16_t *)(*(uint32_t *)(v188 + 200) + 32);
    v9 = v178;
    while ( 1 )
    {
      v191 = v206 - 1;
      v11 = *(uint16_t *)(*(uint32_t *)(*v8 + 200) + 32);
      if ( v11 >= v210
        && (v11 != v210 || *(uint16_t *)(*(uint32_t *)(v8[1] + 200) + 32) >= *(uint16_t *)(*(uint32_t *)(v202 + 200) + 32)) )
      {
        break;
      }
LABEL_11:
      v8 += 8;
      ++v206;
    }
    for ( i = (int *)(v187 + 32 * v9 + 4); ; i -= 8 )
    {
      while ( 1 )
      {
        v13 = i - 1;
        v14 = *(uint16_t *)(*(uint32_t *)(*i + 200) + 32);
        if ( v210 >= v14 )
          break;
        --v9;
        i -= 8;
      }
      if ( v210 != v14 || *(uint16_t *)(*(uint32_t *)(v202 + 200) + 32) >= *(uint16_t *)(*(uint32_t *)(i[1] + 200) + 32) )
        break;
      --v9;
    }
    if ( v191 <= v9 )
    {
      if ( v191 != v9 )
      {
        v214 = *v13;
        v215 = *i;
        v216 = v13[2];
        v217 = v13[3];
        v218 = v13[4];
        v219 = v13[5];
        v220 = v13[6];
        v221 = v13[7];
        v10 = *(uint8_t *)v13;
        *v13 = *(v8 - 1);
        v13[1] = *v8;
        v13[2] = v8[1];
        v13[3] = v8[2];
        v13[4] = v8[3];
        v13[5] = v8[4];
        v13[6] = v8[5];
        v13[7] = v8[6];
        LOBYTE(v214) = v10;
        *(v8 - 1) = v214;
        *v8 = v215;
        v8[1] = v216;
        v8[2] = v217;
        v8[3] = v218;
        v8[4] = v219;
        v8[5] = v220;
        v8[6] = v221;
      }
      --v9;
      v191 = v206;
      if ( v9 >= v206 )
      {
        v210 = *(uint16_t *)(*(uint32_t *)(v188 + 200) + 32);
        goto LABEL_11;
      }
    }
    v186 = v9;
    if ( v181 >= v9 )
      goto LABEL_200;
    v162 = v183;
    while ( 2 )
    {
      v163 = v186;
      v205 = v162;
      v164 = v187 + 32 * ((v181 + v186) >> 1);
      v184 = *(uint32_t *)(v164 + 4);
      v190 = *(uint32_t *)(v164 + 8);
      v165 = (int *)(32 * v181 + v187 + 4);
      v212 = *(uint16_t *)(*(uint32_t *)(v184 + 200) + 32);
      while ( 1 )
      {
LABEL_214:
        v209 = v205 - 1;
        v166 = *(uint16_t *)(*(uint32_t *)(*v165 + 200) + 32);
        if ( v166 < v212 )
          goto LABEL_223;
        if ( v166 != v212 || *(uint16_t *)(*(uint32_t *)(v165[1] + 200) + 32) >= *(uint16_t *)(*(uint32_t *)(v190 + 200) + 32) )
          break;
        v165 += 8;
        ++v205;
      }
      for ( j = (int *)(v187 + 32 * v163 + 4); ; j -= 8 )
      {
        while ( 1 )
        {
          v168 = j - 1;
          v169 = *(uint16_t *)(*(uint32_t *)(*j + 200) + 32);
          if ( v212 >= v169 )
            break;
          --v163;
          j -= 8;
        }
        if ( v212 != v169 || *(uint16_t *)(*(uint32_t *)(v190 + 200) + 32) >= *(uint16_t *)(*(uint32_t *)(j[1] + 200) + 32) )
          break;
        --v163;
      }
      if ( v209 <= v163 )
      {
        if ( v209 != v163 )
        {
          v214 = *v168;
          v215 = *j;
          v216 = v168[2];
          v217 = v168[3];
          v218 = v168[4];
          v219 = v168[5];
          v220 = v168[6];
          v221 = v168[7];
          v170 = *(uint8_t *)v168;
          *v168 = *(v165 - 1);
          v168[1] = *v165;
          v168[2] = v165[1];
          v168[3] = v165[2];
          v168[4] = v165[3];
          v168[5] = v165[4];
          v168[6] = v165[5];
          v168[7] = v165[6];
          LOBYTE(v214) = v170;
          *(v165 - 1) = v214;
          *v165 = v215;
          v165[1] = v216;
          v165[2] = v217;
          v165[3] = v218;
          v165[4] = v219;
          v165[5] = v220;
          v165[6] = v221;
        }
        --v163;
        v209 = v205;
        if ( v163 >= v205 )
        {
          v212 = *(uint16_t *)(*(uint32_t *)(v184 + 200) + 32);
LABEL_223:
          v165 += 8;
          ++v205;
          goto LABEL_214;
        }
      }
      if ( v181 < v163 )
        hkAlgorithm::quickSortRecursive_ced38a(
          v187,
          v181,
          v163,
          (void (*)(char *))sub_17785B0);
      if ( v186 > v209 )
      {
        v181 = v209;
        v162 = v209 + 1;
        continue;
      }
      break;
    }
LABEL_200:
    if ( v178 > v191 )
    {
      v181 = v191;
      v6 = v191;
      continue;
    }
    break;
  }
  v5 = *((uint32_t *)v182 + 5);
  if ( v5 != 0 )
  {
    for ( k = *((uint32_t *)v182 + 4); ; k = *((uint32_t *)v182 + 4) )
    {
LABEL_190:
      v155 = 32 * (v5 + 0x7FFFFFF) + k;
      v156 = *(uint32_t *)(v155 + 4);
      v157 = *(uint32_t *)(v155 + 8);
      *((uint32_t *)v182 + 5) = v5 - 1;
      v158 = *(hkpWorldOperationUtil::Self **)(v156 + 8);
      if ( v158 == *((hkpWorldOperationUtil::Self **)v182 + 3)
        && v158 == *(hkpWorldOperationUtil::Self **)(v157 + 8)
        && *(uint8_t *)(v156 + 232) != 5
        && *(uint8_t *)(v157 + 232) != 5
        && *(uint32_t *)(v156 + 200) != *(uint32_t *)(v157 + 200) )
      {
        hkpWorldOperationUtil::mergeIslands(v158, (hkpWorld::Self **)v156, (hkpSimulationIsland::Self **)v157);
      }
      if ( *(uint16_t *)(v156 + 6) != 0 )
      {
        do
        {
          v148 = *(uint32_t *)(v156 + 4);
          HIWORD(v147) = HIWORD(v148);
          LOWORD(v147) = 0;
          v149 = v147 | (uint16_t)(v148 - 1);
          v150 = v148;
        }
        while ( v150 != __sync_val_compare_and_swap((volatile int32_t *)(v156 + 4), v150, v149) );
        if ( (uint16_t)v149 == 0 )
          G4_VCALL<void>(v156, 16);
      }
      if ( *(uint16_t *)(v157 + 6) != 0 )
      {
        do
        {
          v152 = *(uint32_t *)(v157 + 4);
          HIWORD(v151) = HIWORD(v152);
          LOWORD(v151) = 0;
          v153 = v151 | (uint16_t)(v152 - 1);
          v154 = v152;
        }
        while ( v154 != __sync_val_compare_and_swap((volatile int32_t *)(v157 + 4), v154, v153) );
        if ( (uint16_t)v153 == 0 )
          G4_VCALL<void>(v157, 16);
      }
      v5 = *((uint32_t *)v182 + 5);
      if ( v5 == 0 )
        break;
    }
  }
LABEL_17:
  if ( v180 > 0 )
  {
    v208 = 0;
    v15 = v179;
    v211 = 0;
    v189 = v179 + 2;
    v207 = (int *)(v179 + 2);
    v203 = (int *)(v179 + 3);
    v204 = (int *)(v179 + 4);
    while ( 2 )
    {
      switch ( *(uint8_t *)v15 )
      {
        case 1:
          v21 = v15[1];
          if ( *(uint32_t *)(v21 + 8) == 0 )
          {
            hkpWorld::addEntity(*((hkpWorld::Self **)v182 + 3), (hkpEntity::Self *)v15[1], v15[2]);
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) != 0 )
          {
            do
            {
              v144 = *(uint32_t *)(v21 + 4);
              HIWORD(v143) = HIWORD(v144);
              LOWORD(v143) = 0;
              v24 = v143 | (uint16_t)(v144 - 1);
              v145 = v144;
            }
            while ( v145 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v145, v24) );
            goto LABEL_27;
          }
          goto LABEL_29;
        case 2:
          v21 = v15[1];
          v139 = *(hkpEntity::Self **)(v21 + 8);
          if ( v139 == *((hkpEntity::Self **)v182 + 3) )
          {
            hkpWorld::removeEntity((hkpWorld::Self *)&v213, v139, (hkpWorld::Self *)v15[1]);
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) != 0 )
          {
            do
            {
              v141 = *(uint32_t *)(v21 + 4);
              HIWORD(v140) = HIWORD(v141);
              LOWORD(v140) = 0;
              v24 = v140 | (uint16_t)(v141 - 1);
              v142 = v141;
            }
            while ( v142 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v142, v24) );
            goto LABEL_27;
          }
          goto LABEL_29;
        case 3:
          v21 = v15[1];
          v135 = *(hkpWorldOperationUtil::Self **)(v21 + 8);
          if ( v135 == *((hkpWorldOperationUtil::Self **)v182 + 3) )
          {
            hkpWorldOperationUtil::updateEntityBP(v135, (hkpWorld::Self *)v15[1]);
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) != 0 )
          {
            do
            {
              v137 = *(uint32_t *)(v21 + 4);
              HIWORD(v136) = HIWORD(v137);
              LOWORD(v136) = 0;
              v24 = v136 | (uint16_t)(v137 - 1);
              v138 = v137;
            }
            while ( v138 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v138, v24) );
            goto LABEL_27;
          }
          goto LABEL_29;
        case 4:
          hkpRigidBody::setMotionType(
            (hkpWorld::Self *)v15[1],
            LOBYTE(v189[v208]),
            (hkpEntity::Self *)BYTE1(v179[v208 + 2]),
            BYTE2(v179[v208 + 2]));
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) != 0 )
          {
            do
            {
              v133 = *(uint32_t *)(v21 + 4);
              HIWORD(v132) = HIWORD(v133);
              LOWORD(v132) = 0;
              v24 = v132 | (uint16_t)(v133 - 1);
              v134 = v133;
            }
            while ( v134 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v134, v24) );
            goto LABEL_27;
          }
          goto LABEL_29;
        case 5:
          G4_VCALL<void>(v15[1], 20, v15[2]);
          v124 = v15[1];
          if ( *(uint16_t *)(v124 + 6) != 0 )
          {
            v201 = (volatile int32_t *)(v15[1] + 4);
            do
            {
              v126 = *(uint32_t *)(v124 + 4);
              HIWORD(v125) = HIWORD(v126);
              LOWORD(v125) = 0;
              v127 = v125 | (uint16_t)(v126 - 1);
              v128 = v126;
            }
            while ( v128 != __sync_val_compare_and_swap(v201, v128, v127) );
            if ( (uint16_t)v127 == 0 )
              G4_VCALL<void>(v124, 16);
          }
          v21 = v15[2];
          if ( *(uint16_t *)(v21 + 6) != 0 )
          {
            do
            {
              v130 = *(uint32_t *)(v21 + 4);
              HIWORD(v129) = HIWORD(v130);
              LOWORD(v129) = 0;
              v24 = v129 | (uint16_t)(v130 - 1);
              v131 = v130;
            }
            while ( v131 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v131, v24) );
            goto LABEL_27;
          }
          goto LABEL_29;
        case 6:
          G4_VCALL<void>(v15[1], 24, v15[2]);
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) != 0 )
          {
            do
            {
              v122 = *(uint32_t *)(v21 + 4);
              HIWORD(v121) = HIWORD(v122);
              LOWORD(v121) = 0;
              v24 = v121 | (uint16_t)(v122 - 1);
              v123 = v122;
            }
            while ( v123 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v123, v24) );
            goto LABEL_27;
          }
          goto LABEL_29;
        case 7:
          hkpWorld::addEntityBatch(
            *((uint32_t *)v182 + 3),
            (hkpEntity::Self *)v15[1],
            *((uint16_t *)v15 + 4),
            BYTE2(v179[v208 + 2]));
          goto LABEL_118;
        case 8:
          hkpWorld::removeEntityBatch(*((hkpWorld::Self **)v182 + 3), (hkpWorld::Self **)v15[1], *((uint16_t *)v15 + 4));
          goto LABEL_118;
        case 9:
          v21 = v15[1];
          if ( *(uint32_t *)(v21 + 8) == 0 )
          {
            v171 = *(hkpWorld::Self **)(*(uint32_t *)(v21 + 20) + 8);
            if ( v171 == *((hkpWorld::Self **)v182 + 3) )
            {
              v172 = *(uint32_t *)(v21 + 24);
              if ( v172 == 0 || v171 == *(hkpWorld::Self **)(v172 + 8) )
              {
                hkpWorld::addConstraint(v171, (hkpConstraintInstance::Self *)v15[1]);
                v21 = v15[1];
              }
            }
          }
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v119 = *(uint32_t *)(v21 + 4);
            HIWORD(v118) = HIWORD(v119);
            LOWORD(v118) = 0;
            v24 = v118 | (uint16_t)(v119 - 1);
            v120 = v119;
          }
          while ( v120 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v120, v24) );
          goto LABEL_27;
        case 0xA:
          v21 = v15[1];
          if ( *(uint32_t *)(v21 + 8) != 0 )
          {
            v176 = v15[1];
            hkpWorld::removeConstraint((hkpWorld::Self *)&v213, *((hkpConstraintInstance::Self **)v182 + 3));
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v116 = *(uint32_t *)(v21 + 4);
            HIWORD(v115) = HIWORD(v116);
            LOWORD(v115) = 0;
            v24 = v115 | (uint16_t)(v116 - 1);
            v117 = v116;
          }
          while ( v117 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v117, v24) );
          goto LABEL_27;
        case 0xB:
          v21 = v15[1];
          if ( *(uint32_t *)(v21 + 8) != 0 )
            goto LABEL_136;
          v214 = 0;
          v215 = 0;
          v216 = 0x80000000;
          G4_VCALL<void>(v15[1], 24, &v214);
          if ( v215 <= 0 )
          {
            v173 = *((hkpWorld::Self **)v182 + 3);
          }
          else
          {
            v173 = *(hkpWorld::Self **)(*(uint32_t *)v214 + 8);
            if ( v173 != *((hkpWorld::Self **)v182 + 3) )
              goto LABEL_240;
            v174 = 0;
            while ( ++v174 != v215 )
            {
              if ( *(hkpWorld::Self **)(*(uint32_t *)(v214 + 4 * v174) + 8) != v173 )
                goto LABEL_240;
            }
          }
          hkpWorld::addAction(v173, (hkpAction::Self *)v15[1]);
LABEL_240:
          v215 = 0;
          if ( v216 >= 0 )
          {
            v176 = 4 * v216;
            (*(void (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v214);
          }
          v21 = v15[1];
LABEL_136:
          if ( *(uint16_t *)(v21 + 6) != 0 )
          {
            do
            {
              v113 = *(uint32_t *)(v21 + 4);
              HIWORD(v112) = HIWORD(v113);
              LOWORD(v112) = 0;
              v24 = v112 | (uint16_t)(v113 - 1);
              v114 = v113;
            }
            while ( v114 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v114, v24) );
LABEL_27:
            if ( (uint16_t)v24 == 0 )
              G4_VCALL<void>(v21, 16);
          }
LABEL_29:
          if ( *((uint32_t *)v182 + 1) != 0 )
            hkpWorldOperationQueue::executeAllPending((hkpWorldOperationQueue::Self *)(v182));
          ++v211;
          v208 += 8;
          v15 += 8;
          v207 += 8;
          v203 += 8;
          v204 += 8;
          if ( v211 == v180 )
            break;
          continue;
        case 0xC:
          v21 = v15[1];
          if ( *(uint32_t *)(v21 + 12) != 0 )
          {
            hkpWorld::removeAction(*((hkpWorld::Self **)v182 + 3), (hkpAction::Self *)v15[1]);
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v110 = *(uint32_t *)(v21 + 4);
            HIWORD(v109) = HIWORD(v110);
            LOWORD(v109) = 0;
            v24 = v109 | (uint16_t)(v110 - 1);
            v111 = v110;
          }
          while ( v111 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v111, v24) );
          goto LABEL_27;
        case 0xE:
          v21 = v15[1];
          if ( *(uint32_t *)(v21 + 8) == 0 )
          {
            hkpWorld::addPhantom(*((hkpWorld::Self **)v182 + 3), (hkpPhantom::Self *)v15[1]);
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v107 = *(uint32_t *)(v21 + 4);
            HIWORD(v106) = HIWORD(v107);
            LOWORD(v106) = 0;
            v24 = v106 | (uint16_t)(v107 - 1);
            v108 = v107;
          }
          while ( v108 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v108, v24) );
          goto LABEL_27;
        case 0xF:
          v21 = v15[1];
          v102 = *(hkpWorld::Self **)(v21 + 8);
          if ( v102 == *((hkpWorld::Self **)v182 + 3) )
          {
            hkpWorld::removePhantom(v102, (hkpPhantom::Self *)v15[1]);
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v104 = *(uint32_t *)(v21 + 4);
            HIWORD(v103) = HIWORD(v104);
            LOWORD(v103) = 0;
            v24 = v103 | (uint16_t)(v104 - 1);
            v105 = v104;
          }
          while ( v105 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v105, v24) );
          goto LABEL_27;
        case 0x10:
          hkpWorld::addPhantomBatch(
            *((hkpWorld::Self **)v182 + 3),
            (hkpPhantom::Self *const *)v15[1],
            *((uint16_t *)v15 + 4));
          goto LABEL_118;
        case 0x11:
          hkpWorld::removePhantomBatch(
            *((hkpWorld::Self **)v182 + 3),
            (hkpPhantom::Self *const *)v15[1],
            *((uint16_t *)v15 + 4));
LABEL_118:
          hkReferencedObject::removeReferences(
            (hkReferencedObject::Self *)v15[1],
            (const hkReferencedObject::Self *const *)*((uint16_t *)v15 + 4),
            4);
          address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v176 = 4 * *((uint16_t *)v15 + 4);
          (*(void (**)(uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
            *(uint32_t *)(*(uint32_t *)address + 44),
            v15[1]);
          goto LABEL_29;
        case 0x12:
          v94 = v15[1];
          if ( *(uint32_t *)(v94 + 8) == *((uint32_t *)v182 + 3) )
          {
            hkpPhantom::updateBroadPhase((hkpPhantom::Self *)v15[1], (const hkAabb::Self *)v15[2]);
            v94 = v15[1];
          }
          if ( *(uint16_t *)(v94 + 6) != 0 )
          {
            do
            {
              v96 = *(uint32_t *)(v94 + 4);
              HIWORD(v95) = HIWORD(v96);
              LOWORD(v95) = 0;
              v97 = v95 | (uint16_t)(v96 - 1);
              v98 = v96;
            }
            while ( v98 != __sync_val_compare_and_swap((volatile int32_t *)(v94 + 4), v98, v97) );
            if ( (uint16_t)v97 == 0 )
              G4_VCALL<void>(v94, 16);
          }
          v99 = v15[2];
          if ( v99 != 0 )
          {
            v100 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
            v176 = 32;
            (*(void (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v100 + 44) + 12))(
              *(uint32_t *)(*(uint32_t *)v100 + 44),
              v99);
          }
          goto LABEL_29;
        case 0x13:
          v21 = v15[1];
          if ( *(uint32_t *)(v21 + 8) == *((uint32_t *)v182 + 3) )
          {
            hkpWorld::updateCollisionFilterOnEntity(
              *(hkpWorld::Self **)(v21 + 8),
              v21,
              LOBYTE(v189[v208]),
              BYTE1(v179[v208 + 2]));
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v92 = *(uint32_t *)(v21 + 4);
            HIWORD(v91) = HIWORD(v92);
            LOWORD(v91) = 0;
            v24 = v91 | (uint16_t)(v92 - 1);
            v93 = v92;
          }
          while ( v93 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v93, v24) );
          goto LABEL_27;
        case 0x14:
          v82 = v15[1];
          v83 = *(hkpWorld::Self **)(v82 + 8);
          if ( v83 == *((hkpWorld::Self **)v182 + 3) )
          {
            v175 = (hkpEntity::Self *)v15[2];
            if ( v83 == *((hkpWorld::Self **)v175 + 2) )
            {
              hkpWorld::reenableCollisionBetweenEntityPair(v83, (hkpEntity::Self *)v15[1], v175);
              v82 = v15[1];
            }
          }
          if ( *(uint16_t *)(v82 + 6) != 0 )
          {
            do
            {
              v85 = *(uint32_t *)(v82 + 4);
              HIWORD(v84) = HIWORD(v85);
              LOWORD(v84) = 0;
              v86 = v84 | (uint16_t)(v85 - 1);
              v87 = v85;
            }
            while ( v87 != __sync_val_compare_and_swap((volatile int32_t *)(v82 + 4), v87, v86) );
            if ( (uint16_t)v86 == 0 )
              G4_VCALL<void>(v82, 16);
          }
          v21 = v15[2];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v89 = *(uint32_t *)(v21 + 4);
            HIWORD(v88) = HIWORD(v89);
            LOWORD(v88) = 0;
            v24 = v88 | (uint16_t)(v89 - 1);
            v90 = v89;
          }
          while ( v90 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v90, v24) );
          goto LABEL_27;
        case 0x15:
          v21 = v15[1];
          v78 = *(hkpWorld::Self **)(v21 + 8);
          if ( v78 == *((hkpWorld::Self **)v182 + 3) )
          {
            hkpWorld::updateCollisionFilterOnPhantom(v78, v15[1], LOBYTE(v189[v208]));
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v80 = *(uint32_t *)(v21 + 4);
            HIWORD(v79) = HIWORD(v80);
            LOWORD(v79) = 0;
            v24 = v79 | (uint16_t)(v80 - 1);
            v81 = v80;
          }
          while ( v81 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v81, v24) );
          goto LABEL_27;
        case 0x16:
          hkpWorld::updateCollisionFilterOnWorld(*((uint32_t *)v182 + 3), BYTE1(v179[v208]), BYTE2(v179[v208]));
          goto LABEL_29;
        case 0x17:
          hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody((hkpRigidBody::Self *)v15[1]);
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v76 = *(uint32_t *)(v21 + 4);
            HIWORD(v75) = HIWORD(v76);
            LOWORD(v75) = 0;
            v24 = v75 | (uint16_t)(v76 - 1);
            v77 = v76;
          }
          while ( v77 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v77, v24) );
          goto LABEL_27;
        case 0x18:
          v64 = *((uint16_t *)v15 + 4);
          v65 = v15[1];
          v198 = v64;
          v66 = v65 + 4 * v64 - 4;
          if ( v65 <= v66 )
          {
            v67 = (uint32_t *)(v65 + 4 * v64 - 4);
            do
            {
              v68 = *(uint32_t *)v66;
              if ( *(uint32_t *)(*(uint32_t *)v66 + 8) != *((uint32_t *)v182 + 3) )
              {
                *(uint32_t *)v66 = *v67--;
                v67[1] = v68;
                --v198;
                v65 = v15[1];
              }
              v66 -= 4;
            }
            while ( v66 >= v65 );
          }
          if ( v198 != 0 )
          {
            (*(void (**)(uint32_t, unsigned int, int, uint32_t, uint32_t))(**(uint32_t **)(*((uint32_t *)v182 + 3) + 8)
                                                                           + 72))(
              *(uint32_t *)(*((uint32_t *)v182 + 3) + 8),
              v65,
              v198,
              *((uint32_t *)v182 + 3),
              *((uint8_t *)v15 + 10));
            v65 = v15[1];
          }
          v199 = v65 + 4 * *((uint16_t *)v15 + 4);
          if ( v199 <= v65 )
          {
            v200 = *((uint16_t *)v15 + 4);
          }
          else
          {
            do
            {
              v65 += 4;
              v69 = *(uint32_t *)(v65 - 4);
              if ( *(uint16_t *)(v69 + 6) != 0 )
              {
                v185 = v65;
                do
                {
                  v71 = *(uint32_t *)(v69 + 4);
                  HIWORD(v70) = HIWORD(v71);
                  LOWORD(v70) = 0;
                  v72 = v70 | (uint16_t)(v71 - 1);
                  v73 = v71;
                }
                while ( v73 != __sync_val_compare_and_swap((volatile int32_t *)(v69 + 4), v73, v72) );
                v65 = v185;
                if ( (uint16_t)v72 == 0 )
                  G4_VCALL<void>(v69, 16);
              }
            }
            while ( v199 > v65 );
            v65 = v15[1];
            v200 = *((uint16_t *)v15 + 4);
          }
          v74 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v176 = 4 * v200;
          (*(void (**)(uint32_t, unsigned int))(**(uint32_t **)(*(uint32_t *)v74 + 44) + 12))(
            *(uint32_t *)(*(uint32_t *)v74 + 44),
            v65);
          goto LABEL_29;
        case 0x19:
          hkpRigidBody::setPositionAndRotation(
            (hkpRigidBody::Self *)v15[1],
            (const hkVector4f::Self *)v15[2],
            (const hkQuaternionf::Self *)(v15[2] + 16));
          v60 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v176 = 32;
          (*(void (**)(uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)v60 + 44) + 12))(
            *(uint32_t *)(*(uint32_t *)v60 + 44),
            v15[2]);
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v62 = *(uint32_t *)(v21 + 4);
            HIWORD(v61) = HIWORD(v62);
            LOWORD(v61) = 0;
            v24 = v61 | (uint16_t)(v62 - 1);
            v63 = v62;
          }
          while ( v63 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v63, v24) );
          goto LABEL_27;
        case 0x1A:
          v214 = *v207;
          v215 = *v203;
          v216 = *v204;
          v56 = (hkpEntity::Self *)v15[1];
          hkpEntity::activate(v56);
          (*(void (**)(uint32_t *, int *))(*((uint32_t *)v56 + 56) + 80))((uint32_t *)v56 + 56, &v214);
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          v197 = (volatile int32_t *)(v15[1] + 4);
          do
          {
            v58 = *(uint32_t *)(v21 + 4);
            HIWORD(v57) = HIWORD(v58);
            LOWORD(v57) = 0;
            v24 = v57 | (uint16_t)(v58 - 1);
            v59 = v58;
          }
          while ( v59 != __sync_val_compare_and_swap(v197, v59, v24) );
          goto LABEL_27;
        case 0x1B:
          v214 = *v207;
          v215 = *v203;
          v216 = *v204;
          v52 = (hkpEntity::Self *)v15[1];
          hkpEntity::activate(v52);
          (*(void (**)(uint32_t *, int *))(*((uint32_t *)v52 + 56) + 84))((uint32_t *)v52 + 56, &v214);
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          v196 = (volatile int32_t *)(v15[1] + 4);
          do
          {
            v54 = *(uint32_t *)(v21 + 4);
            HIWORD(v53) = HIWORD(v54);
            LOWORD(v53) = 0;
            v24 = v53 | (uint16_t)(v54 - 1);
            v55 = v54;
          }
          while ( v55 != __sync_val_compare_and_swap(v196, v55, v24) );
          goto LABEL_27;
        case 0x1C:
          v214 = *v207;
          v215 = *v203;
          v216 = *v204;
          v48 = (hkpEntity::Self *)v15[1];
          hkpEntity::activate(v48);
          (*(void (**)(uint32_t *, int *))(*((uint32_t *)v48 + 56) + 96))((uint32_t *)v48 + 56, &v214);
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          v195 = (volatile int32_t *)(v15[1] + 4);
          do
          {
            v50 = *(uint32_t *)(v21 + 4);
            HIWORD(v49) = HIWORD(v50);
            LOWORD(v49) = 0;
            v24 = v49 | (uint16_t)(v50 - 1);
            v51 = v50;
          }
          while ( v51 != __sync_val_compare_and_swap(v195, v51, v24) );
          goto LABEL_27;
        case 0x1D:
          v43 = (hkpEntity::Self *)v15[1];
          v194 = v15[2];
          hkpEntity::activate(v43);
          (*(void (**)(uint32_t *, int, int))(*((uint32_t *)v43 + 56) + 100))((uint32_t *)v43 + 56, v194 + 16, v194);
          v44 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v176 = 32;
          (*(void (**)(uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)v44 + 44) + 12))(
            *(uint32_t *)(*(uint32_t *)v44 + 44),
            v15[2]);
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v46 = *(uint32_t *)(v21 + 4);
            HIWORD(v45) = HIWORD(v46);
            LOWORD(v45) = 0;
            v24 = v45 | (uint16_t)(v46 - 1);
            v47 = v46;
          }
          while ( v47 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v47, v24) );
          goto LABEL_27;
        case 0x1E:
          v214 = *v207;
          v215 = *v203;
          v216 = *v204;
          v39 = (hkpEntity::Self *)v15[1];
          hkpEntity::activate(v39);
          (*(void (**)(uint32_t *, int *))(*((uint32_t *)v39 + 56) + 104))((uint32_t *)v39 + 56, &v214);
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          v193 = (volatile int32_t *)(v15[1] + 4);
          do
          {
            v41 = *(uint32_t *)(v21 + 4);
            HIWORD(v40) = HIWORD(v41);
            LOWORD(v40) = 0;
            v24 = v40 | (uint16_t)(v41 - 1);
            v42 = v41;
          }
          while ( v42 != __sync_val_compare_and_swap(v193, v42, v24) );
          goto LABEL_27;
        case 0x21:
          hkpWorld::activateRegion(*((hkpWorld::Self **)v182 + 3), (const hkAabb::Self *)v15[1], v176);
          v38 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v176 = 32;
          (*(void (**)(uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)v38 + 44) + 12))(
            *(uint32_t *)(*(uint32_t *)v38 + 44),
            v15[1]);
          goto LABEL_29;
        case 0x22:
          hkpEntity::activate((hkpEntity::Self *)v15[1]);
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v36 = *(uint32_t *)(v21 + 4);
            HIWORD(v35) = HIWORD(v36);
            LOWORD(v35) = 0;
            v24 = v35 | (uint16_t)(v36 - 1);
            v37 = v36;
          }
          while ( v37 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v37, v24) );
          goto LABEL_27;
        case 0x23:
          v21 = v15[1];
          if ( *(uint32_t *)(v21 + 8) == *((uint32_t *)v182 + 3) )
          {
            hkpEntity::requestDeactivation((hkpEntity::Self *)v15[1]);
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v33 = *(uint32_t *)(v21 + 4);
            HIWORD(v32) = HIWORD(v33);
            LOWORD(v32) = 0;
            v24 = v32 | (uint16_t)(v33 - 1);
            v34 = v33;
          }
          while ( v34 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v34, v24) );
          goto LABEL_27;
        case 0x24:
          v21 = v15[1];
          if ( *(uint32_t *)(v21 + 8) == *((uint32_t *)v182 + 3) )
          {
            hkpEntity::deactivate((hkpEntity::Self *)v15[1]);
            v21 = v15[1];
          }
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v30 = *(uint32_t *)(v21 + 4);
            HIWORD(v29) = HIWORD(v30);
            LOWORD(v29) = 0;
            v24 = v29 | (uint16_t)(v30 - 1);
            v31 = v30;
          }
          while ( v31 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v31, v24) );
          goto LABEL_27;
        case 0x25:
          hkpConstraintCollisionFilter::constraintBreakingCallbackImmediate(
            (int *)v15[1],
            v15[2],
            *((uint8_t *)v15 + 12));
          v16 = v15[1];
          if ( *(uint16_t *)(v16 + 6) != 0 )
          {
            v192 = (volatile int32_t *)(v15[1] + 4);
            do
            {
              v18 = *(uint32_t *)(v16 + 4);
              HIWORD(v17) = HIWORD(v18);
              LOWORD(v17) = 0;
              v19 = v17 | (uint16_t)(v18 - 1);
              v20 = v18;
            }
            while ( v20 != __sync_val_compare_and_swap(v192, v20, v19) );
            if ( (uint16_t)v19 == 0 )
              G4_VCALL<void>(v16, 16);
          }
          v21 = v15[2];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v23 = *(uint32_t *)(v21 + 4);
            HIWORD(v22) = HIWORD(v23);
            LOWORD(v22) = 0;
            v24 = v22 | (uint16_t)(v23 - 1);
            v25 = v23;
          }
          while ( v25 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v25, v24) );
          goto LABEL_27;
        case 0x26:
          G4_VCALL<void>(v15[1], 20, v15[2]);
          v21 = v15[1];
          if ( *(uint16_t *)(v21 + 6) == 0 )
            goto LABEL_29;
          do
          {
            v160 = *(uint32_t *)(v21 + 4);
            HIWORD(v159) = HIWORD(v160);
            LOWORD(v159) = 0;
            v24 = v159 | (uint16_t)(v160 - 1);
            v161 = v160;
          }
          while ( v161 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v161, v24) );
          goto LABEL_27;
        default:
          goto LABEL_29;
      }
      break;
    }
  }
  v26 = *(uint32_t *)v182;
  *(uint32_t *)v182 = (uint32_t)(uintptr_t)(v179);
  v27 = *((uint32_t *)v182 + 2);
  *((uint32_t *)v182 + 1) = 0;
  *((uint32_t *)v182 + 2) = v177;
  --*(uint32_t *)(*((uint32_t *)v182 + 3) + 156);
  result = hkReferencedObject::unlockAll();
  if ( v27 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v26,
             32 * v27);
  return result;
}


