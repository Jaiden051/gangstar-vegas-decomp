#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpEndOfSt.h"

// ----------------------------------------------------------------------------
// Function: hkpEndOfStepCallbackUtil::Destroy  (binary VA: 0x1767370)
// Original: hkpEndOfStepCallbackUtil::~hkpEndOfStepCallbackUtil
// ----------------------------------------------------------------------------
void hkpEndOfStepCallbackUtil::Destroy(hkpEndOfStepCallbackUtil::Self *self)
{
  int v1;
  int v2;
  int v3;

  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A0128);
  v1 = *((uint32_t *)self + 13);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0108);
  *((uint32_t *)self + 12) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      12 * v1);
  v2 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      16 * v2);
  v3 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      12 * v3);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209E868);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpEndOfStepCallbackUtil::Destroy_ea1767480  (binary VA: 0x1767480)
// Original: hkpEndOfStepCallbackUtil::~hkpEndOfStepCallbackUtil
// ----------------------------------------------------------------------------
void hkpEndOfStepCallbackUtil::Destroy_ea1767480(hkpEndOfStepCallbackUtil::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A0128);
  v1 = *((uint32_t *)self + 13);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0108);
  *((uint32_t *)self + 12) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      12 * v1);
  v2 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      16 * v2);
  v3 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      12 * v3);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209E868);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v4 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v5 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v5 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v4, 12, self, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpEndOfStepCallbackUtil::Construct  (binary VA: 0x17675c0)
// Original: hkpEndOfStepCallbackUtil::hkpEndOfStepCallbackUtil
// ----------------------------------------------------------------------------
void hkpEndOfStepCallbackUtil::Construct(hkpEndOfStepCallbackUtil::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0108);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A0128);
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 16) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpEndOfStepCallbackUtil::registerCollision  (binary VA: 0x1767640)
// Original: hkpEndOfStepCallbackUtil::registerCollision
// ----------------------------------------------------------------------------
uint32_t * hkpEndOfStepCallbackUtil::registerCollision(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint32_t *result;
  int v7;

  v4 = a1[9];
  if ( v4 == (a1[10] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 8), 16, v7);
    v4 = a1[9];
  }
  v5 = v4;
  result = (uint32_t *)(a1[8] + 16 * v4);
  a1[9] = v5 + 1;
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a1[3]++;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEndOfStepCallbackUtil::unregisterCollision  (binary VA: 0x17676c0)
// Original: hkpEndOfStepCallbackUtil::unregisterCollision
// ----------------------------------------------------------------------------
uint32_t * hkpEndOfStepCallbackUtil::unregisterCollision(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint32_t *result;
  int v7;

  v4 = a1[12];
  if ( v4 == (a1[13] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 11), 12, v7);
    v4 = a1[12];
  }
  v5 = a1[11];
  a1[12] = v4 + 1;
  result = (uint32_t *)(v5 + 12 * v4);
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEndOfStepCallbackUtil::Collision::opEq  (binary VA: 0x1767740)
// Original: hkpEndOfStepCallbackUtil::Collision::operator==
// ----------------------------------------------------------------------------
hkpEndOfStepCallbackUtil::Collision::Self * hkpEndOfStepCallbackUtil::Collision::opEq(hkpEndOfStepCallbackUtil::Collision::Self *self, const hkpEndOfStepCallbackUtil::Collision::Self *a2, uint32_t *a3)
{
  bool v3;
  hkpEndOfStepCallbackUtil::Collision::Self *result;

  v3 = false;
  result = self;
  if ( *a3 == *(uint32_t *)a2 && a3[1] == *((uint32_t *)a2 + 1) )
    v3 = a3[2] == *((uint32_t *)a2 + 2);
  *(uint8_t *)self = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEndOfStepCallbackUtil::fireContactPointEventsForCollision  (binary VA: 0x1767780)
// Original: hkpEndOfStepCallbackUtil::fireContactPointEventsForCollision
// ----------------------------------------------------------------------------
int hkpEndOfStepCallbackUtil::fireContactPointEventsForCollision(uint32_t *a1, int (***a2)(uint32_t, uint32_t *), int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int (***v9)(uint32_t, uint32_t *);
  int v10;
  int v11;
  int (**v12)(uint32_t, int *);
  int (***v13)(uint32_t, uint32_t *);
  int v14;
  int v15;
  int v16;
  int (**v17)(uint32_t, int *);
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21;
  typedef int (***_g4_t_v22)(uint32_t, uint32_t *);
  typedef int (***_g4_t_v23)(uint32_t, uint32_t *);
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33;
  typedef bool _g4_t_v34;
  typedef bool _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v23)) > _g4_s5 ? (16u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v24)) > _g4_s6 ? (20u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v25)) > _g4_s7 ? (24u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v26)) > _g4_s8 ? (44u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v27)) > _g4_s9 ? (48u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v28)) > _g4_s10 ? (52u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v29)) > _g4_s11 ? (56u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v30)) > _g4_s12 ? (60u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v31)) > _g4_s13 ? (64u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v32)) > _g4_s14 ? (68u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v33)) > _g4_s15 ? (72u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (73u + sizeof(_g4_t_v34)) > _g4_s16 ? (73u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (74u + sizeof(_g4_t_v35)) > _g4_s17 ? (74u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v36)) > _g4_s18 ? (76u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v37)) > _g4_s19 ? (80u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v38)) > _g4_s20 ? (84u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v39)) > _g4_s21 ? (88u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v40)) > _g4_s22 ? (92u + sizeof(_g4_t_v40)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 73u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 74u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 92u);

  v24 = *(uint32_t *)(G4_VCALL<int>(a1, 72) + 20);
  v25 = *(uint32_t *)(G4_VCALL<int>(a1, 72) + 24);
  v3 = a1[15];
  v4 = v3 + 48;
  v21 = *(uint8_t *)(v3 + 10);
  v18 = *(uint16_t *)(v3 + 4);
  v5 = v3 + 48 + 32 * *(uint16_t *)(v3 + 6);
  v6 = G4_VCALL<int>(a1, 72);
  v7 = v18 - 1;
  v20 = v18 - 1;
  result = *(uint8_t *)(*(uint32_t *)(v6 + 48) + 18) & 8;
  if ( v18 != 0 )
  {
    v19 = v21;
    if ( result > 0 )
    {
      v13 = a2;
      v14 = v4;
      v15 = v5;
      v16 = v20;
      do
      {
        v26 = a3;
        v29 = a1;
        v27 = v24;
        v34 = v16 == v20;
        v35 = v16 == 0;
        v28 = v25;
        v38 = v15 + 20;
        v17 = (int (**)(uint32_t, int *))(uintptr_t)(*v13);
        --v16;
        v31 = v14;
        v32 = v15;
        v23 = v13;
        v30 = 3;
        v33 = 1;
        v36 = 0;
        v37 = 0;
        v39 = 0;
        v40 = 0;
        v14 += 32;
        result = (*v17)((uint32_t)(uintptr_t)(v13), &v26);
        v15 += v19;
        v13 = v23;
      }
      while ( v16 != -1 );
    }
    else
    {
      result = v7;
      v9 = a2;
      v10 = v4;
      v11 = result;
      do
      {
        if ( (*(uint8_t *)(v5 + 15) & 1) != 0 )
        {
          v26 = a3;
          v29 = a1;
          v27 = v24;
          v28 = v25;
          v34 = v11 == v20;
          v38 = v5 + 20;
          v12 = (int (**)(uint32_t, int *))(uintptr_t)(*v9);
          v22 = v9;
          v30 = 3;
          v31 = v10;
          v32 = v5;
          v33 = 0;
          v35 = v11 == 0;
          v36 = 0;
          v37 = 0;
          v39 = 0;
          v40 = 0;
          result = (*v12)((uint32_t)(uintptr_t)(v9), &v26);
          v9 = v22;
        }
        --v11;
        v10 += 32;
        v5 += v19;
      }
      while ( v11 != -1 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEndOfStepCallbackUtil::postSimulationCallback  (binary VA: 0x1767bd0)
// Original: hkpEndOfStepCallbackUtil::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpEndOfStepCallbackUtil::postSimulationCallback(hkpEndOfStepCallbackUtil::Self *self)
{
  int *address;
  int v2;
  uint32_t *v3;
  uint64_t v4; // rax
  int v5;
  hkpConstraintInstance::Self *v6;
  int v7;
  bool v8;
  hkpEndOfStepCallbackUtil::Collision::Self *v9;
  unsigned int v10;
  int k;
  uint32_t *v12;
  uint32_t *v13;
  uint64_t v14; // rax
  int v15;
  hkpConstraintInstance::Self *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  int v28;
  int v29;
  uint64_t v30; // rax
  int v31;
  uint32_t *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  uint32_t *v47;
  uint32_t *v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  uint32_t *v58;
  uint32_t *v59;
  unsigned int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  uint32_t *v65;
  uint32_t *v66;
  uint32_t *v67;
  int v68;
  uint32_t *v69;
  int v70;
  hkpConstraintInstance::Self *v71;
  int v72;
  int v73;
  hkpConstraintInstance::Self *v74;
  uint32_t *v75;
  uint32_t *v76;
  unsigned int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int *_g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef hkpEndOfStepCallbackUtil::Collision::Self *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef char _g4_t_v95;
  typedef uint32_t *_g4_t_v96;
  typedef int _g4_t_i;
  typedef int _g4_t_j;
  typedef hkpEndOfStepCallbackUtil::Collision::Self *_g4_t_v99;
  typedef hkpEndOfStepCallbackUtil::Collision::Self *_g4_t_v100;
  typedef hkpConstraintInstance::Self *_g4_t_v101;
  typedef hkpConstraintInstance::Self *_g4_t_v102;
  typedef hkpConstraintInstance::Self *_g4_t_v103;
  typedef hkpConstraintInstance::Self *_g4_t_v104;
  typedef hkpConstraintInstance::Self *_g4_t_v105;
  typedef unsigned int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef hkpEndOfStepCallbackUtil::Self *_g4_t_v111;
  typedef uint8_t _g4_t_v112[7];
  typedef char _g4_t_v113;
  typedef uint32_t _g4_t_v114[4];
  typedef int _g4_t_v115;
  typedef hkpConstraintInstance::Self *_g4_t_v116;
  typedef unsigned int _g4_t_v117;
  typedef hkpEndOfStepCallbackUtil::Self **_g4_t_v118;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v84)) > _g4_s0 ? (12u + sizeof(_g4_t_v84)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v85)) > _g4_s1 ? (32u + sizeof(_g4_t_v85)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v86)) > _g4_s2 ? (32u + sizeof(_g4_t_v86)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v87)) > _g4_s3 ? (36u + sizeof(_g4_t_v87)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v88)) > _g4_s4 ? (40u + sizeof(_g4_t_v88)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v89)) > _g4_s5 ? (40u + sizeof(_g4_t_v89)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v90)) > _g4_s6 ? (40u + sizeof(_g4_t_v90)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v91)) > _g4_s7 ? (44u + sizeof(_g4_t_v91)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v92)) > _g4_s8 ? (44u + sizeof(_g4_t_v92)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v93)) > _g4_s9 ? (48u + sizeof(_g4_t_v93)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v94)) > _g4_s10 ? (48u + sizeof(_g4_t_v94)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v95)) > _g4_s11 ? (48u + sizeof(_g4_t_v95)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v96)) > _g4_s12 ? (52u + sizeof(_g4_t_v96)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_i)) > _g4_s13 ? (52u + sizeof(_g4_t_i)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_j)) > _g4_s14 ? (52u + sizeof(_g4_t_j)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v99)) > _g4_s15 ? (56u + sizeof(_g4_t_v99)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v100)) > _g4_s16 ? (56u + sizeof(_g4_t_v100)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v101)) > _g4_s17 ? (60u + sizeof(_g4_t_v101)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v102)) > _g4_s18 ? (60u + sizeof(_g4_t_v102)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v103)) > _g4_s19 ? (60u + sizeof(_g4_t_v103)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v104)) > _g4_s20 ? (60u + sizeof(_g4_t_v104)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v105)) > _g4_s21 ? (60u + sizeof(_g4_t_v105)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v106)) > _g4_s22 ? (64u + sizeof(_g4_t_v106)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v107)) > _g4_s23 ? (64u + sizeof(_g4_t_v107)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v108)) > _g4_s24 ? (64u + sizeof(_g4_t_v108)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v109)) > _g4_s25 ? (64u + sizeof(_g4_t_v109)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v110)) > _g4_s26 ? (64u + sizeof(_g4_t_v110)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v111)) > _g4_s27 ? (68u + sizeof(_g4_t_v111)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v112)) > _g4_s28 ? (72u + sizeof(_g4_t_v112)) : _g4_s28,
    _g4_s30 = (79u + sizeof(_g4_t_v113)) > _g4_s29 ? (79u + sizeof(_g4_t_v113)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v114)) > _g4_s30 ? (80u + sizeof(_g4_t_v114)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v115)) > _g4_s31 ? (96u + sizeof(_g4_t_v115)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v116)) > _g4_s32 ? (100u + sizeof(_g4_t_v116)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v117)) > _g4_s33 ? (104u + sizeof(_g4_t_v117)) : _g4_s33,
    _g4_s35 = (120u + sizeof(_g4_t_v118)) > _g4_s34 ? (120u + sizeof(_g4_t_v118)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 12u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 32u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 32u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 36u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 40u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 40u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 40u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 44u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 44u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 48u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 48u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 48u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 52u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 52u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 56u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 56u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 60u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 60u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 60u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 60u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 60u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 64u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 64u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 64u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 64u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 64u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 68u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 72u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 79u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 80u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 96u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 100u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 104u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 120u);

  v118 = &self;
  v111 = self;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v2 = *address;
  v87 = address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) < *(uint32_t *)(*address + 12) )
  {
    *v3 = (uint32_t)(uintptr_t)("TtEndOfStepCbs");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
  }
  v85 = *((uint32_t *)v111 + 12);
  v93 = *((uint32_t *)v111 + 9);
  if ( v85 != 0 )
  {
    v108 = *((uint32_t *)v111 + 12);
    v42 = 0;
    v115 = 0;
    v116 = nullptr;
    v117 = 0x80000000;
    if ( v93 != 0 )
    {
      v114[0] = 16 * v93;
      v42 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v114);
      v43 = v114[0] / 16;
      if ( v114[0] / 16 != 0 )
      {
        v108 = *((uint32_t *)v111 + 12);
LABEL_53:
        v115 = v42;
        v116 = (hkpConstraintInstance::Self *)v93;
        v117 = v43;
        if ( v93 > 0 )
        {
          v89 = 0;
          for ( i = 0; i != v93; ++i )
          {
            v103 = (hkpConstraintInstance::Self *)(*((uint32_t *)v111 + 8) + 16 * i);
            if ( v108 <= 0 )
            {
              v65 = (uint32_t *)(*((uint32_t *)v111 + 8) + 16 * i);
LABEL_90:
              v66 = (uint32_t *)(v115 + 16 * v89++);
              *v66 = *v65;
              v66[1] = v65[1];
              v66[2] = v65[2];
              v66[3] = v65[3];
              v108 = *((uint32_t *)v111 + 12);
            }
            else
            {
              v44 = 0;
              while ( 1 )
              {
                hkpEndOfStepCallbackUtil::Collision::opEq(
                  (hkpEndOfStepCallbackUtil::Collision::Self *)&v113,
                  (const hkpEndOfStepCallbackUtil::Collision::Self *)(12 * v44 + *((uint32_t *)v111 + 11)),
                  (uint32_t *)(v103));
                if ( v113 != 0 )
                  break;
                if ( ++v44 == v108 )
                {
                  v65 = (uint32_t *)(*((uint32_t *)v111 + 8) + 16 * i);
                  goto LABEL_90;
                }
              }
              v45 = *((uint32_t *)v111 + 11);
              v46 = *((uint32_t *)v111 + 12) - 1;
              *((uint32_t *)v111 + 12) = v46;
              if ( v44 == v46 )
              {
                v108 = v44;
              }
              else
              {
                v47 = (uint32_t *)(12 * v44 + v45);
                v48 = (uint32_t *)(v45 + 12 * v46);
                *v47 = *v48;
                v47[1] = v48[1];
                v47[2] = v48[2];
                v108 = *((uint32_t *)v111 + 12);
              }
            }
          }
          v43 = v117;
        }
        v49 = v93 + v108 - v85;
        if ( v49 > (v43 & 0x3FFFFFFF) )
        {
          v50 = 2 * (v43 & 0x3FFFFFFF);
          if ( v50 < v49 )
            v50 = v93 + v108 - v85;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v112,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            &v115,
            v50,
            16);
          v43 = v117;
        }
        v116 = nullptr;
        v51 = *((uint32_t *)v111 + 8);
        *((uint32_t *)v111 + 8) = v115;
        v52 = *((uint32_t *)v111 + 10);
        v115 = v51;
        *((uint32_t *)v111 + 9) = v49;
        *((uint32_t *)v111 + 10) = v43;
        v117 = v52;
        if ( v52 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v51,
            16 * v52);
        v86 = *((uint32_t *)v111 + 12);
        v92 = *((uint32_t *)v111 + 6);
        if ( v86 == 0 )
          goto LABEL_88;
        v109 = *((uint32_t *)v111 + 12);
        v53 = 0;
        v115 = 0;
        v116 = nullptr;
        v117 = 0x80000000;
        if ( v92 != 0 )
        {
          v114[0] = 12 * v92;
          v53 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  v114);
          v54 = v114[0] / 12;
          if ( v114[0] / 12 != 0 )
          {
            v109 = *((uint32_t *)v111 + 12);
            goto LABEL_72;
          }
          v109 = *((uint32_t *)v111 + 12);
        }
        v54 = 0x80000000;
LABEL_72:
        v115 = v53;
        v116 = (hkpConstraintInstance::Self *)v92;
        v117 = v54;
        if ( v92 <= 0 )
        {
          v60 = v54;
        }
        else
        {
          v90 = 0;
          for ( j = 0; j != v92; ++j )
          {
            v104 = (hkpConstraintInstance::Self *)(*((uint32_t *)v111 + 5) + 12 * j);
            if ( v109 <= 0 )
            {
              v67 = (uint32_t *)(*((uint32_t *)v111 + 5) + 12 * j);
LABEL_92:
              v68 = v90++;
              v69 = (uint32_t *)(v115 + 12 * v68);
              *v69 = *v67;
              v69[1] = v67[1];
              v69[2] = v67[2];
              v109 = *((uint32_t *)v111 + 12);
            }
            else
            {
              v55 = 0;
              while ( 1 )
              {
                hkpEndOfStepCallbackUtil::Collision::opEq(
                  (hkpEndOfStepCallbackUtil::Collision::Self *)&v113,
                  (const hkpEndOfStepCallbackUtil::Collision::Self *)(12 * v55 + *((uint32_t *)v111 + 11)),
                  (uint32_t *)(v104));
                if ( v113 != 0 )
                  break;
                if ( ++v55 == v109 )
                {
                  v67 = (uint32_t *)(*((uint32_t *)v111 + 5) + 12 * j);
                  goto LABEL_92;
                }
              }
              v56 = *((uint32_t *)v111 + 11);
              v57 = *((uint32_t *)v111 + 12) - 1;
              *((uint32_t *)v111 + 12) = v57;
              if ( v57 == v55 )
              {
                v109 = v55;
              }
              else
              {
                v58 = (uint32_t *)(12 * v55 + v56);
                v59 = (uint32_t *)(v56 + 12 * v57);
                *v58 = *v59;
                v58[1] = v59[1];
                v58[2] = v59[2];
                v109 = *((uint32_t *)v111 + 12);
              }
            }
          }
          v60 = v117;
        }
        v61 = v92 + v109 - v86;
        if ( v61 > (int)(v60 & 0x3FFFFFFF) )
        {
          v62 = 2 * (v60 & 0x3FFFFFFF);
          if ( v62 < v61 )
            v62 = v92 + v109 - v86;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v112,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            &v115,
            v62,
            12);
          v60 = v117;
        }
        v116 = nullptr;
        v63 = *((uint32_t *)v111 + 5);
        *((uint32_t *)v111 + 5) = v115;
        v64 = *((uint32_t *)v111 + 7);
        v115 = v63;
        *((uint32_t *)v111 + 6) = v61;
        *((uint32_t *)v111 + 7) = v60;
        v117 = v64;
        if ( v64 < 0 )
        {
          v93 = *((uint32_t *)v111 + 9);
          goto LABEL_4;
        }
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v63,
          12 * v64);
LABEL_88:
        v93 = *((uint32_t *)v111 + 9);
        goto LABEL_4;
      }
      v108 = *((uint32_t *)v111 + 12);
    }
    v43 = 0x80000000;
    goto LABEL_53;
  }
LABEL_4:
  if ( *((uint8_t *)v111 + 16) != 0 )
  {
    v5 = v93;
    v6 = *((hkpConstraintInstance::Self **)v111 + 8);
    if ( v93 > 1 )
    {
      LOBYTE(v84) = 0;
      hkAlgorithm::quickSortRecursive_363f56(
        *((uint32_t *)v111 + 8),
        0,
        v93 - 1);
      v5 = *((uint32_t *)v111 + 9);
      v6 = *((hkpConstraintInstance::Self **)v111 + 8);
    }
    v101 = (hkpConstraintInstance::Self *)((char *)v6 + 16 * v5);
    v7 = *((uint32_t *)v111 + 6);
    if ( v101 == v6 )
    {
      v100 = *((hkpEndOfStepCallbackUtil::Collision::Self **)v111 + 6);
    }
    else
    {
      v8 = v7 + v5 == 0;
      v9 = (hkpEndOfStepCallbackUtil::Collision::Self *)(v7 + v5);
      v94 = 0;
      v91 = v9;
      if ( v8
        || (v115 = 12 * (uint32_t)(uintptr_t)(v9),
            v94 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    &v115),
            v88 = v115 / 12,
            v7 = *((uint32_t *)v111 + 6),
            v115 / 12 == 0) )
      {
        v88 = 0x80000000;
      }
      v106 = (unsigned int)(uintptr_t)(v6);
      v10 = *((uint32_t *)v111 + 5);
      v99 = (hkpEndOfStepCallbackUtil::Collision::Self *)(v10 + 12 * v7);
      for ( k = v94 + 12; ; k += 12 )
      {
        v13 = (uint32_t *)(k - 12);
        if ( (unsigned int)(uintptr_t)(v99) <= v10 || (unsigned int)(uintptr_t)(v101) <= v106 )
          break;
        LODWORD(v14) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v10 + 92) + 208);
        HIDWORD(v14) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v10 + 88) + 208);
        if ( __PAIR64__(
               *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v106 + 88) + 208),
               *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v106 + 92) + 208)) >= v14 )
        {
          v15 = *(uint32_t *)v10;
          v10 += 12;
          *(uint32_t *)(k - 12) = v15;
          *(uint32_t *)(k - 8) = *(uint32_t *)(v10 - 8);
          *(uint32_t *)(k - 4) = *(uint32_t *)(v10 - 4);
        }
        else
        {
          v12 = (uint32_t *)v106;
          v106 += 16;
          *(uint32_t *)(k - 12) = *v12;
          *(uint32_t *)(k - 8) = v12[1];
          *(uint32_t *)(k - 4) = v12[2];
        }
      }
      v16 = (hkpConstraintInstance::Self *)v106;
      v17 = k - 12;
      if ( (unsigned int)(uintptr_t)(v101) > v106 )
      {
        do
        {
          v18 = *(uint32_t *)v16;
          v16 = (hkpConstraintInstance::Self *)((char *)v16 + 16);
          *v13 = v18;
          v13[1] = *((uint32_t *)v16 - 3);
          v13[2] = *((uint32_t *)v16 - 2);
          v13 += 3;
        }
        while ( v101 > v16 );
        v13 = (uint32_t *)(v17 + 4 * (3 * (((unsigned int)(uintptr_t)(v101) + ~v106) >> 4) + 3));
      }
      for ( ; (unsigned int)(uintptr_t)(v99) > v10; v13 += 3 )
      {
        v19 = *(uint32_t *)v10;
        v10 += 12;
        *v13 = v19;
        v13[1] = *(uint32_t *)(v10 - 8);
        v13[2] = *(uint32_t *)(v10 - 4);
      }
      v20 = *((uint32_t *)v111 + 5);
      *((uint32_t *)v111 + 5) = v94;
      *((uint32_t *)v111 + 6) = (uint32_t)(uintptr_t)(v91);
      v21 = *((uint32_t *)v111 + 7);
      *((uint32_t *)v111 + 7) = v88;
      *((uint32_t *)v111 + 9) = 0;
      if ( v21 < 0 )
      {
        v100 = v91;
      }
      else
      {
        (*(void (**)(uint32_t *, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v20,
          12 * v21,
          v84);
        v100 = *((hkpEndOfStepCallbackUtil::Collision::Self **)v111 + 6);
      }
    }
  }
  else
  {
    v33 = *((uint32_t *)v111 + 6);
    v34 = v33 + v93;
    v35 = *((uint32_t *)v111 + 7) & 0x3FFFFFFF;
    if ( v33 + v93 > v35 )
    {
      v82 = 2 * v35;
      if ( v82 >= v34 )
        v34 = v82;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v112,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)v111 + 5,
        v34,
        12);
      v36 = *((uint32_t *)v111 + 9);
      v34 = *((uint32_t *)v111 + 6) + v93;
    }
    else
    {
      v36 = v93;
    }
    v37 = *((uint32_t *)v111 + 5);
    *((uint32_t *)v111 + 6) = v34;
    v38 = v37 + 12 * v33;
    if ( v36 <= 0 )
    {
      v100 = (hkpEndOfStepCallbackUtil::Collision::Self *)v34;
    }
    else
    {
      v39 = v38;
      v40 = 0;
      do
      {
        v39 += 12;
        v41 = (uint32_t *)(*((uint32_t *)v111 + 8) + 16 * v40++);
        *(uint32_t *)(v39 - 12) = *v41;
        *(uint32_t *)(v39 - 8) = v41[1];
        *(uint32_t *)(v39 - 4) = v41[2];
      }
      while ( *((uint32_t *)v111 + 9) > v40 );
      v100 = *((hkpEndOfStepCallbackUtil::Collision::Self **)v111 + 6);
    }
    *((uint32_t *)v111 + 9) = 0;
  }
  v95 = 0;
  v107 = 0;
  if ( (int)(uintptr_t)(v100) > 0 )
  {
    while ( 1 )
    {
      v22 = *((uint32_t *)v111 + 5) + 12 * v107;
      v96 = *(uint32_t **)v22;
      v102 = (hkpConstraintInstance::Self *)G4_VCALL<int>(v96, 72);
      v23 = *(uint32_t *)(v22 + 8);
      if ( v23 != 0 )
      {
        if ( v23 != 1 )
          break;
        v24 = *((uint32_t *)v102 + 6);
      }
      else
      {
        v24 = *((uint32_t *)v102 + 5);
      }
      if ( v24 == 0 )
        break;
      v25 = *(uint16_t *)(v24 + 516);
      v26 = *(uint32_t **)(v24 + 512);
      if ( (uint16_t)v25 != 0 )
      {
        v27 = *(uint32_t *)(v22 + 4);
        if ( *v26 == v27 )
          break;
        v28 = v25 - 1;
        v29 = 0;
        while ( v29 != v28 )
        {
          if ( v26[++v29] == v27 )
            goto LABEL_41;
        }
      }
      *(uint32_t *)(v22 + 4) = 0;
      v95 = 1;
LABEL_36:
      if ( (hkpEndOfStepCallbackUtil::Collision::Self *)++v107 == v100 )
      {
        if ( v95 != 0 )
        {
          v70 = 0;
          v115 = 0;
          v116 = nullptr;
          v117 = 0x80000000;
          v71 = *((hkpConstraintInstance::Self **)v111 + 6);
          v105 = v71;
          if ( v71 == nullptr
            || (v114[0] = 12 * (uint32_t)(uintptr_t)(v71),
                v70 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
                        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                        v114),
                v72 = v114[0] / 12,
                v114[0] / 12 == 0) )
          {
            v72 = 0x80000000;
          }
          v115 = v70;
          v116 = v105;
          v117 = v72;
          if ( (int)(uintptr_t)(v105) <= 0 )
          {
            v77 = v72;
            v78 = 0;
          }
          else
          {
            v73 = 0;
            v74 = nullptr;
            v110 = 0;
            do
            {
              v75 = (uint32_t *)(*((uint32_t *)v111 + 5) + v73);
              if ( v75[1] != 0 )
              {
                v76 = (uint32_t *)(v115 + 12 * v110);
                *v76 = *v75;
                v76[1] = v75[1];
                v76[2] = v75[2];
                ++v110;
              }
              v74 = (hkpConstraintInstance::Self *)((char *)v74 + 1);
              v73 += 12;
            }
            while ( v74 != v105 );
            v77 = v117;
            v78 = v110;
            if ( v110 > (int)(v117 & 0x3FFFFFFF) )
            {
              v79 = 2 * (v117 & 0x3FFFFFFF);
              if ( v110 >= v79 )
                v79 = v110;
              hkArrayUtil::reserve(
                (hkArrayUtil::Self *)v112,
                (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                &v115,
                v79,
                12);
              v77 = v117;
            }
          }
          v116 = nullptr;
          v80 = *((uint32_t *)v111 + 5);
          *((uint32_t *)v111 + 5) = v115;
          v81 = *((uint32_t *)v111 + 7);
          v115 = v80;
          *((uint32_t *)v111 + 6) = v78;
          *((uint32_t *)v111 + 7) = v77;
          v117 = v81;
          if ( v81 >= 0 )
            (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v80,
              12 * v81);
        }
        goto LABEL_38;
      }
    }
LABEL_41:
    if ( (*(uint8_t *)(hkpConstraintInstance::getSimulationIsland(v102) + 38) & 4) != 0 )
      hkpEndOfStepCallbackUtil::fireContactPointEventsForCollision(
        v96,
        *(int (****)(uint32_t, uint32_t *))(v22 + 4),
        *(uint32_t *)(v22 + 8));
    goto LABEL_36;
  }
LABEL_38:
  *((uint32_t *)v111 + 3) = 0;
  LODWORD(v30) = (uint32_t)(uintptr_t)(v87);
  v31 = *v87;
  v32 = *(uint32_t **)(*v87 + 4);
  if ( (unsigned int)(uintptr_t)(v32) < *(uint32_t *)(*v87 + 12) )
  {
    *v32 = (uint32_t)(uintptr_t)("Et");
    v30 = __rdtsc();
    v32[1] = v30;
    *(uint32_t *)(v31 + 4) = (uint32_t)(uintptr_t)(v32 + 3);
  }
  return v30;
}


